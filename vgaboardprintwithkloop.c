/* This files provides address values that exist in the system */

#define SDRAM_BASE            0xC0000000
#define FPGA_ONCHIP_BASE      0xC8000000
#define FPGA_CHAR_BASE        0xC9000000

/* Cyclone V FPGA devices */
#define LEDR_BASE             0xFF200000
#define HEX3_HEX0_BASE        0xFF200020
#define HEX5_HEX4_BASE        0xFF200030
#define SW_BASE               0xFF200040
#define KEY_BASE              0xFF200050
#define TIMER_BASE            0xFF202000
#define PIXEL_BUF_CTRL_BASE   0xFF203020
#define CHAR_BUF_CTRL_BASE    0xFF203030

/* VGA colors */
#define WHITE 0xFFFF
#define YELLOW 0xFFE0
#define RED 0xF800
#define GREEN 0x006400
#define BLUE 0x001F
#define CYAN 0x07FF
#define MAGENTA 0xF81F
#define GREY 0xa7ae
#define PINK 0xFC18
#define ORANGE 0xFC00

#define ABS(x) (((x) > 0) ? (x) : -(x))

/* Screen size. */
#define RESOLUTION_X 320
#define RESOLUTION_Y 240

/* Constants for animation */
#define BOX_LEN 2
#define NUM_BOXES 8

#define FALSE 0
#define TRUE 1

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
// Begin part1.s for Lab 7

volatile int pixel_buffer_start; // global variable

void draw_line(int x0, int y0, int x1, int y1, short int color);
void plot_pixel(int x, int y, short int line_color);
void swap(int *x, int *y);
void clear_screen();

int main(void)
{
    volatile int * pixel_ctrl_ptr = (int *)0xFF203020;
    /* Read location of the pixel buffer from the pixel buffer controller */
    pixel_buffer_start = *pixel_ctrl_ptr;

    clear_screen();
    //draw_line(20, 20, 20, 100, WHITE);   // this line is blue
	//first line
	
	for(int k = 0; k < 4; k++){
	
		for(int i = 0; i < 210; i = i +60){
			for(int j = 60*k; j < (60*k)+30; j++){
				draw_line(0+i,0+j,30+i,0+j,GREY); //k = 0
				}
		}

		for(int i = 30; i < 240; i = i +60){
			for(int j = 60*k; j < (60*k)+30; j++){
				draw_line(0+i,0+j,30+i,0+j,GREEN);
				}
		}

		//second line
		for(int i = 0; i < 210; i = i +60){
			for(int j = (60*k)+30; j < (60*k)+60; j++){
				draw_line(0+i,0+j,30+i,0+j,GREEN);
				}
		}

		for(int i = 30; i < 240; i = i +60){
			for(int j = (60*k)+30; j < (60*k)+60; j++){
				draw_line(0+i,0+j,30+i,0+j,GREY);
				}
		}
	
	}
		
		
    //draw_line(150, 150, 319, 0, 0x07E0); // this line is green//0x07E0
   // draw_line(0, 239, 319, 239, 0xF800); // this line is red
    //draw_line(319, 0, 0, 239, 0xF81F);   // this line is a pink color
}

// code not shown for clear_screen() and draw_line() subroutines

void draw_line(int x0, int y0, int x1, int y1, short int color){
	//bool is_steep;
	bool is_steep = abs(y1-y0)>abs(x1-x0) ;//1 is true, 0 is false
	
	if (is_steep){
	swap(&x0,&y0);
	swap(&x1,&y1);
	}
	
	if (x0>x1){
	swap(&x0,&x1);
	swap(&y0,&y1);
	}

	int deltax = x1-x0;
	int deltay = abs(y1-y0);
	int error = (deltax/2)*(-1);
	int y = y0;
	int y_step = y0<y1?1:-1;
	
	
	for(int x = x0; x<x1;x++){
		if(is_steep){
		plot_pixel(y,x,color);
		}else{
		plot_pixel(x,y,color);
		}
		
		error = error+deltay;
		if(error>0){
		y = y+y_step;
		error = error-deltax;
		}
	}
	return; //maybe draw pixel and plot pixel arent the same
}

void plot_pixel(int x, int y, short int line_color)
{
    *(short int *)(pixel_buffer_start + (y << 10) + (x << 1)) = line_color;
	return;
}

void swap(int *x, int *y) {

   int temp;

   temp = *x; /* save the value of x */
   *x = *y;    /* put y into x */
   *y = temp; /* put temp into y */
  
   return;
}

void clear_screen(){
for(int x = 0; x < 320; x++){
	for(int y = 0; y < 240; y++){
		plot_pixel(x,y,0x0);
		}
	}
}