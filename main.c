//hello world

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//global variables
//board[xpos][ypos][attributes:color/piece/???/grid color]
int board[8][8][4];

//legalmove
bool validMove = true; //default is going to be true the check legal is going to make it false

bool inCheck = false;
bool checkmate = false;
bool stalemate = false;

//keep track if current color aka if white or black is playing
int currentColor = 0; //0 white, 1 black

bool hasWhiteKingMoved = false;
bool hasWhiteRook1Moved = false; //rook 1 will be at x=0
bool hasWhiteRook2Moved = false; //rook 2 will be at x=7

bool hasBlackKingMoved = false;
bool hasBlackRook1Moved = false; //rook 1 will be at x=0
bool hasBlackRook2Moved = false; //rook 2 will be at x=7

//these always keep track of the kings location
//when doing move for king update these locations;
int King[2][2] = {3, 0, 3, 7};

int pawn = 0;
int Pawn[2][8][3]; //[color][#][x/y/piece]
int rook = 1;
int Rook[2][2][2];
int knight = 2;
int Knight[2][2][2];
int bishop = 3;
int Bishop[2][2][2];
int queen = 4;
int Queen[2][2];
int king = 5;

int white = 0;
int black = 1;
int blank = -1;

int temppiece = -1;


//function declarations
void Check(int color, int kingx, int kingy);
void resetGrid(int currentx, int currenty);
void rookCheckLegal(int currentx, int currenty, int desiredx, int desiredy);
void castle(int currentx, int currenty, int desiredx, int desiredy);
void bishopCheckLegal(int currentx, int currenty, int desiredx, int desiredy);
void queenCheckLegal(int currentx, int currenty, int desiredx, int desiredy);
void pawnCheckLegal(int currentx, int currenty, int desiredx, int desiredy);
void knightCheckLegal(int currentx, int currenty, int desiredx, int desiredy);
void kingCheckLegal(int currentx, int currenty, int desiredx, int desiredy);
void movePiece(int piece, int currentx, int currenty, int desiredx, int desiredy);
void checkMoveForCheck(int piece, int currentx, int currenty, int desiredx, int desiredy);
void printBoard();
bool checkForMate(int color, int checkOrStale);

int main(){
    printf("%d %d %d %d", King[0][0], King[0][1], King[1][0], King[1][1]);
    //board
    //the format is [x][y][attributes]
    //first layer of attributes aka [0] is color 0: is white, 1 is black

    //second layer aka [1] is unit type
        //pawn is 0
        //rook is 1
        //knight is 2
        //bishop is 3
        //queen is 4
        //king is 5
    //other layers are empty for now

    //[0][0] will be the bottom left position of the board, black is top half and white is bottom half

    //starting grid 

    /////////////////////setting color and pawns
    for (int i = 0; i<8; i++){
        board[i][0][0] = white;//set the color of the pieces for the entire top row to be black
        board[i][1][0] = white;//set the color of the black pawns to be black
        board[i][1][1] = pawn; //setting the 2nd z layer height (determines unit) to pawns
        Pawn[0][i][0] = i;
        Pawn[0][i][1] = 1;
        Pawn[0][i][2] = 0;

        board[i][7][0] = black; //setting the 1st z layer color (determines color) to white
        board[i][6][0] = black; //setting the 1st z layer color (determines color) to white
        board[i][6][1] = pawn; //setting the 2nd z layer height (determines unit) to pawns
        Pawn[1][i][0] = i;
        Pawn[1][i][1] = 6;
        Pawn[1][i][2] = 0;
    }

    //setting white rooks
    board[0][0][1] = rook; //bottom left rook
    board[7][0][1] = rook; //bottom right rook
    Rook[0][0][0] = 0;
    Rook[0][0][1] = 0;
    Rook[0][1][0] = 7;
    Rook[0][1][1] = 0;
    //setting white knights
    board[1][0][1] = knight;
    board[6][0][1] = knight;
    Knight[0][0][0] = 1;
    Knight[0][0][1] = 0;
    Knight[0][1][0] = 6;
    Knight[0][1][1] = 0;
    //setting white bishops
    board[2][0][1] = bishop;
    board[5][0][1] = bishop;
    Bishop[0][0][0] = 2;
    Bishop[0][0][1] = 0;
    Bishop[0][1][0] = 5;
    Bishop[0][1][1] = 0;
    //setting white queen
    board[4][0][1] = queen;
    Queen[0][0] = 4;
    Queen[0][1] = 0;
    //setting the white king
    board[3][0][1] = king;

    //setting black rooks
    board[0][7][1] = rook; 
    board[7][7][1] = rook;
    Rook[1][0][0] = 0;
    Rook[1][0][1] = 7;
    Rook[1][1][0] = 7;
    Rook[1][1][1] = 7;
    //setting black knights
    board[1][7][1] = knight;
    board[6][7][1] = knight;
    Knight[1][0][0] = 1;
    Knight[1][0][1] = 7;
    Knight[1][1][0] = 6;
    Knight[1][1][1] = 7;
    //setting black bishops
    board[2][7][1] = bishop;
    board[5][7][1] = bishop;
    Bishop[1][0][0] = 2;
    Bishop[1][0][1] = 7;
    Bishop[1][1][0] = 5;
    Bishop[1][1][1] = 7;
    //setting black queen
    board[4][7][1] = queen;
    Queen[1][0] = 4;
    Queen[1][1] = 7;
    //setting the black king
    board[3][7][1] = king;

    /*for (int i=2; i<9; i++) {
        Rook[0][i][0] = -1;
        Rook[0][i][1] = -1;
        Knight[0][i][0] = -1;
        Knight[0][i][1] = -1;
        Bishop[0][i][0] = -1;
        Bishop[0][i][1] = -1;
        Queen[0][i][0] = -1;
        Queen[0][i][1] = -1;
        Rook[1][i][0] = -1;
        Rook[1][i][1] = -1;
        Knight[1][i][0] = -1;
        Knight[1][i][1] = -1;
        Bishop[1][i][0] = -1;
        Bishop[1][i][1] = -1;
        Queen[1][i][0] = -1;
        Queen[1][i][1] = -1;
    }
    Rook[0][9][0] = -1;
    Rook[0][9][1] = -1;
    Knight[0][9][0] = -1;
    Knight[0][9][1] = -1;
    Bishop[0][9][0] = -1;
    Bishop[0][9][1] = -1;
    Rook[1][9][0] = -1;
    Rook[1][9][1] = -1;
    Knight[1][9][0] = -1;
    Knight[1][9][1] = -1;
    Bishop[1][9][0] = -1;
    Bishop[1][9][1] = -1; */

    //-1 on the z=[1] aka unit layer will represent no unit aka the board spot is empty
    //I'm also going to put color as "empty" even though technically the grid squares are colored this is just to ensure the arrays dont start filled with garbage

    //filling the board spots initially
    for (int i = 0; i < 8; i++) { //x goes across entire board
        for (int j = 2; j < 6; j++) { //only middle 4 spots are unfilled at the start
            board[i][j][0] = -1;//the starting colors of the grid will be "empty"
            board[i][j][1] = -1; //aka setting the unit types to be empty
        }
    }

    //4th layer for grid colors
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            if ((i+j)%2==0) {//i and j sum to even
                board[i][j][3] = 0;
            }
            else {
                board[i][j][3] = 1;
            }
        }
    }

    while(1) {
        checkmate = checkForMate(currentColor, 0);
        if (checkmate) {
            printf("Checkmate! ");
            if (currentColor==black) {
                printf("White Wins!\n");
            }
            else {
                printf("Black Wins!\n");
            }
            printBoard();
            break;
        }
        stalemate = checkForMate(currentColor, 1);
        if (stalemate) {
            printf("Stalemate!\n" );
            printBoard();
            break;
        }
        int a,b,c,d,e;
        validMove = false;
        if (currentColor == 0)
            printf("White's turn\n");
        else
            printf("Black's turn\n");
        printBoard();
        fflush(stdout);
        if(scanf("%d", &a)==1 && scanf("%d", &b)==1 && scanf("%d", &c)==1 && scanf("%d", &d)==1 && scanf("%d", &e)==1)
            movePiece(a, b, c, d, e);
        while ((getchar()) != '\n');
        if (validMove) {
            printf("Success\n");
        }
        else {
            printf("Invalid Move\n");
        }
    }
}

//reset grid function basically after a move call this function to reset the grid square to and empty status
void resetGrid(int currentx, int currenty){
    //recall -1 means no color or no unit
    board[currentx][currenty][0] = -1;
    board[currentx][currenty][1] = -1;
}

void rookCheckLegal(int currentx, int currenty, int desiredx, int desiredy) {
    //checking desired move has to be in the horizontal or vert direction aka only 1 coordinate can change either x or y
    if (desiredx != currentx && desiredy != currenty) {
        validMove = false; //basically the new coords cant be different in x and y
        return;
    }

    //checking if there is a piece blocking
    if (desiredy != currenty) { //vertical move    
        //finding out which direction to move
        bool movingdown = currenty > desiredy;
        if (movingdown) { //moving down
            for (int i = currenty-1; i > desiredy; i--) {
                if (board[currentx][i][1] != -1) { //unit type -1 means empty
                    validMove = false;
                    return;
                } 
            }
        }
        else { //moving up
            for (int i = currenty+1; i < desiredy; i++) { //basically decrement location for to check if theres a piece blocking when performing an upwards move
                if (board[currentx][i][1] != -1) {
                    validMove = false;
                    return;
                }
            }
        }
    }
    else { //else horizontal move
        bool movingright = currentx < desiredx;
        if (movingright) {//moving right
            for (int i = currentx+1; i < desiredx; i++) {
                if (board[i][currenty][1] != -1) {
                    validMove = false;
                    return;
                }
            }
        }
        else { //moving left
            for (int i = currentx-1; i > desiredx; i--) {
                if (board[i][currenty][1] != -1) {
                    validMove = false;
                    return;
                }
            }
        }   
    }
    validMove = true;
}

//rook move function
void castle(int currentx, int currenty, int desiredx, int desiredy) {
    //checking castling conditions
    if (currentColor == white) {
        if (hasWhiteKingMoved == true || (hasWhiteRook1Moved == true && hasWhiteRook2Moved == true)) {
            validMove = false;
            return;
        }
    }
    else {
        if (hasBlackKingMoved == true || (hasBlackRook1Moved == true && hasBlackRook2Moved == true)) {
            validMove = false;
            return;
        }
    }
    if (currentColor == white) {
        if (desiredx==1) {
            if (board[2][0][0]!=-1 || board[1][0][0]!=-1) {
                validMove = false;
                return;
            }
        }
        else {
            if (board[4][0][0]!=-1 || board[5][0][0]!=-1 || board[6][0][0]!=-1) {
                validMove = false;
                return;
            }
        }
    }
    else {
        if (desiredx==1) {
            if (board[2][7][0]!=-1 || board[1][7][0]!=-1) {
                validMove = false;
                return;
            }
        }
        else {
            if (board[4][7][0]!=-1 || board[5][7][0]!=-1 || board[6][7][0]!=-1) {
                validMove = false;
                return;
            }
        }
    }
    resetGrid(currentx, currenty);
    if (currentColor==white && desiredx==1) {
        Check(currentColor,3, 0);
        if (!inCheck) {
            Check(currentColor, 2, 0);
            if (!inCheck) {
                Check(currentColor, 1, 0);
            }
        }
    }
    else if (currentColor==white && desiredx==5) {
        Check(currentColor,3, 0);
        if (!inCheck) {
            Check(currentColor, 4, 0);
            if (!inCheck) {
                Check(currentColor, 5, 0);
            }
        }
    }
    else if (currentColor==black && desiredx==1) {
        Check(currentColor,3, 7);
        if (!inCheck) {
            Check(currentColor, 2, 7);
            if (!inCheck) {
                Check(currentColor, 1, 7);
            }
        }
    }
    else if (currentColor==black && desiredx==5) {
        Check(currentColor,3, 7);
        if (!inCheck) {
            Check(currentColor, 4, 7);
            if (!inCheck) {
                Check(currentColor, 5, 7);
            }
        }
    }
    if (inCheck) {
        validMove = false;
        board[currentx][currenty][0]=currentColor;
        board[currentx][currenty][1]=king;
        return;
    }
    //castling code
    //castling with the left rook
    if (desiredx == 1) {
        resetGrid(0,currenty);
        //place new king and rook spots
        board[2][currenty][1] = rook; //place rook, color doesnt change only unit type
        board[2][currenty][0] = currentColor;
        Rook[currentColor][0][0] = 2;
    }
    else {
        resetGrid(7,currenty);
        board[4][currenty][1] = rook; //place rook, color doesnt change only unit type
        board[4][currenty][0] = currentColor;
        Rook[currentColor][1][0] = 5;
    } //castling with left rook
    validMove = true;
    return;
}

//function to see if either king is in check
void Check(int color, int kingx, int kingy) {
    for (int i = kingx+1; i < 8; i++) {
        if (board[i][kingy][1] != -1) { //checking pieces encountered
            if (board[i][kingy][0]!=color && (board[i][kingy][1] == 1 || board[i][kingy][1] == 4)) {
                inCheck = true; //if the first unit it sees is a rook or a queen = in check
                return; //in check no need to check others
            }
            break; //else rook and queen dont have direct line of sight so not in check
        }
    }
    for (int i = kingx-1; i>=0; i--){
        if (board[i][kingy][1] != -1){
            if (board[i][kingy][0]!=color && (board[i][kingy][1] == 1 || board[i][kingy][1] == 4)) {
                inCheck = true; //if the first unit it sees is a rook or a queen = in check
                return;
            }
            break;
        }
    }

    for (int i = kingy+1; i<8; i++) { //checking vertical up the board
        if (board[kingx][i][1] != -1) {
            if (board[kingx][i][0]!=color && (board[kingx][i][1] == 1 || board[kingx][i][1] == 4)) {
                inCheck = true;
                return;
            }
            break;
        }
    }

    for (int i = kingy-1; i>=0; i--) {//checking vertical down the board
        if (board[kingx][i][1] != -1) {
            if (board[kingx][i][0]!=color && (board[kingx][i][1] == 1 || board[kingx][i][1] == 4)) {
                inCheck = true;
                return;
            }
            break;
        }
    }

    //checking diagonals
    //check going top right diagonal x++ y++
    for (int i=1; kingx+i<=7 && kingy+i<=7; i++) {
        if (board[kingx+i][kingy+i][1] != -1) {
            if (board[kingx+i][kingy+i][0]!=color && (board[kingx+i][kingy+i][1] == 4 || board[kingx+i][kingy+i][1] == 3)) {
                inCheck = true;
                return;
            }
            break; //reached a piece but its not a piece that can check diagonally so break
        }
    }

    //check bottom left diagonal x--y-- 
    for (int i=1; kingx-i>=0 && kingy-i>=0; i++) {
        if (board[kingx-i][kingy-i][1] != -1) {
            if (board[kingx-i][kingy-i][0]!=color && (board[kingx-i][kingy-i][1] == 4 || board[kingx-i][kingy-i][1] == 3)) {
                inCheck = true;
                return;
            }
            break; //reached a piece but its not a piece that can check diagonally so break
        }
    }

    //check top left diagonal x--y++
    for (int i=1; kingx-i>=0 && kingy+i<=7; i++) {
        if (board[kingx-i][kingy+i][1] != -1){
            if (board[kingx-i][kingy+i][0]!=color && (board[kingx-i][kingy+i][1] == 4 || board[kingx-i][kingy+i][1] == 3)) {
                inCheck = true;
                return;
            }
            break; //reached a piece but its not a piece that can check diagonally so break
        }
    }
    //check bottom right diagonal x++y--
    for (int i=1; kingx+i<=7 && kingy-i>=0; i++) {
        if (board[kingx+i][kingy-i][1] != -1){
            if (board[kingx+i][kingy-i][0]!=color && (board[kingx+i][kingy-i][1] == 4 || board[kingx+i][kingy-i][1] == 3)) {
                inCheck = true;
                return;
            }
            break; //reached a piece but its not a piece that can check diagonally so break
        }
    }
    //checking for knights
    //there are only 8 places a knight can be to check a king 
    //position 1
    int x = kingx-1;
    int y = kingy-2;
    if (x >= 0 && y >= 0) { //knight gotta be within map bounds
        if (board[x][y][0]!=color && board[x][y][1] == knight) {
            inCheck = true;
            return;
        }
    }
    //position 2
    x = kingx+1;
    y = kingy-2;
    if (x <= 7 && y >= 0) { //knight gotta be within map bounds
        if (board[x][y][0]!=color && board[x][y][1] == 2) {
            inCheck = true;
            return;
        }
    }
    //position 3
    x = kingx+2;
    y = kingy-1;
    if (x <= 7 && y >= 0) { //knight gotta be within map bounds
        if(board[x][y][0]!=color && board[x][y][1] == 2) {
            inCheck = true;
            return;
        }
    }
    //position 4
    x = kingx+2;
    y = kingy+1;
    if (x <= 7 && y <= 7) { //knight gotta be within map bounds
        if(board[x][y][0]!=color && board[x][y][1] == 2) {
            inCheck = true;
            return;
        }
    }
    //position 5
    x = kingx+1;
    y = kingy+2;
    if (x <= 7 && y <= 7) { //knight gotta be within map bounds
        if (board[x][y][0]!=color && board[x][y][1] == 2) {
            inCheck = true;
            return;
        }
    }
    //position 6
    x = kingx-1;
    y = kingy+2;
    if (x >= 0 && y <= 7){ //knight gotta be within map bounds
        if (board[x][y][0]!=color && board[x][y][1] == 2) {
            inCheck = true;
            return;
        }
    }
    //position 7
    x = kingx-2;
    y = kingy+1;
    if (x >= 0 && y <= 7){ //knight gotta be within map bounds
        if (board[x][y][0]!=color && board[x][y][1] == 2) {
            inCheck = true;
            return;
        }
    }
    //position 8
    x = kingx-2;
    y = kingy-1;
    if (x >= 0 && y >= 0){ //knight gotta be within map bounds
        if (board[x][y][0]!=color && board[x][y][1] == 2) {
            inCheck = true;
            return;
        }
    }
    //check if enemy king puts current king in check
    //since I know both kings position I can just measure the distance
    int xdiff;
    int ydiff;
    if (color == white) {
        xdiff = abs(kingx - King[1][0]);
        ydiff = abs(kingy - King[1][1]); //basically if the space between the two kings is 1 or less then the kings are next to each other and in check
    }
    else {
        xdiff = abs(King[0][0] - kingx);
        ydiff = abs(King[0][1] - kingy); //basically if the space between the two kings is 1 or less then the kings are next to each other and in check
    }
    if (xdiff<=1 && ydiff<=1){
        inCheck = true;
        return;
    }
    //lastly check if in check by pawns
    if (color == white) {//for white king you only need to check bottom left and right corner
        if (kingy != 7) {//cant be in check on map border
            if (kingx != 0) {
                if (board[kingx-1][kingy+1][0]==black && board[kingx-1][kingy+1][1]==0) {//if pawn present
                    inCheck = true;
                    return;
                }
            }
            if (kingx != 7) {
                if (board[kingx+1][kingy+1][0]==black && board[kingx+1][kingy+1][1]==0) {//if pawn present
                    inCheck = true;
                    return;
                }
            }
        }

    }
    else { //check black king
        if (kingy != 0) {
            if (kingx != 0) {
                if (board[kingx-1][kingy-1][0]==white && board[kingx-1][kingy-1][1]==pawn) {//if pawn present
                    inCheck = true;
                    return;
                }
            }
            if (kingx != 7) {
                if (board[kingx+1][kingy-1][0]==white && board[kingx+1][kingy-1][1]==pawn) {//if pawn present
                    inCheck = true;
                    return;
                }
            }
        }
    }
    //by the time its here we've checked potential check against all enemy units therefore it cannot be in check
    inCheck = false;
}

void bishopCheckLegal(int currentx, int currenty, int desiredx, int desiredy) {
    for (int i=1; currentx+i<=desiredx && currenty+i<=desiredy; i++) { //checks for legality in +x and +y direction
        if (currentx+i==desiredx && currenty+i==desiredy) {
            validMove = true;
            return;
        }
        if (board[currentx+i][currenty+i][0]!=-1) {
            validMove = false;
            break;
        }
    }
    for (int i=1; currentx-i>=desiredx && currenty-i>=desiredy; i++) { //checks for legality in -x and -y direction
        if (currentx-i==desiredx && currenty-i==desiredy) {
            validMove = true;
            return;
        }
        if (board[currentx-i][currenty-i][0]!=-1) {
            validMove = false;
            break;
        }
    }
    for (int i=1; currentx+i<=desiredx && currenty-i>=desiredy; i++) { //checks for legality in +x and -y direction
        if (currentx+1==desiredx && currenty-i==desiredy) {
            validMove = true;
            return;
        }
        if (board[currentx+i][currenty-i][0]!=-1) {
            validMove = false;
            break;
        }
    }
    for (int i=1; currentx-i>=desiredx && currenty+i<=desiredy; i++) { //checks for legality in -x and +y direction
        if (currentx-i==desiredx && currenty+i==desiredy) {
            validMove = true;
            return;
        }
        if (board[currentx-i][currenty+i][0]!=-1) {
            validMove = false;
            break;
        }
    }
}

void checkMoveForCheck(int piece, int currentx, int currenty, int desiredx, int desiredy) {
    //this section makes sure this move does not leave current player's king in check
    temppiece = -1;
    resetGrid(currentx, currenty);
    board[desiredx][desiredy][0] = currentColor;
    board[desiredx][desiredy][1] = piece;
    if (board[desiredx][desiredy][1] != -1) {
        temppiece = board[desiredx][desiredy][1];
    }
    if(currentColor==white) {
        if (piece == king) {
            Check(currentColor, desiredx, desiredy);
        }
        else {
            Check(currentColor, King[0][0], King[0][1]);
        }
    }
    else {
        if (piece == king) {
            Check(currentColor, desiredx, desiredy);
        }
        else {
            Check(currentColor, King[1][0], King[1][1]);
        }
    }
    if (inCheck) {
        validMove = false;
    }
    if (temppiece != -1) {
        board[desiredx][desiredy][0] = !currentColor;
        board[desiredx][desiredy][1] = temppiece;
    }
    else {
        resetGrid(desiredx, desiredy);
    }
    board[currentx][currenty][0] = currentColor;
    board[currentx][currenty][1] = piece;
}

void queenCheckLegal(int currentx, int currenty, int desiredx, int desiredy) {
    rookCheckLegal(currentx, currenty, desiredx, desiredy);
    if (validMove)
        return;
    bishopCheckLegal(currentx, currenty, desiredx, desiredy);
}

bool checkForMate(int color, int checkOrStale) {
    Check(color, King[color][0], King[color][1]);
    if (!inCheck && checkOrStale==0) {
        return false;
    }
    else if (inCheck && checkOrStale==1) {
        return false;
    }
    for (int i = -1; i<=1; i++) {
        for (int j=-1; j<=1; j++) {
            kingCheckLegal(King[color][0], King[color][1], King[color][0]+i, King[color][1]+j);
            if (validMove) {
                checkMoveForCheck(king, King[color][0], King[color][1], King[color][0]+i, King[color][1]+j);
                if (!inCheck) {
                    return false;
                }
            }
        }
    }
    for (int i = 0; i < 8; i++) {
        if (Pawn[color][i][0]!=-1) {
            for (int j=0; j<8; j++) {
                for (int k=0; k<8; k++) {
                    if (Pawn[color][i][2]==0) {
                        pawnCheckLegal(Pawn[color][i][0], Pawn[color][i][1], j, k);
                    }
                    else if (Pawn[color][i][2]==1) {
                        rookCheckLegal(Pawn[color][i][0], Pawn[color][i][1], j, k);
                    }
                    else if (Pawn[color][i][2]==2) {
                        knightCheckLegal(Pawn[color][i][0], Pawn[color][i][1], j, k);
                    }
                    else if (Pawn[color][i][2]==3) {
                        bishopCheckLegal(Pawn[color][i][0], Pawn[color][i][1], j, k);
                    }
                    else if (Pawn[color][i][2]==4) {
                        queenCheckLegal(Pawn[color][i][0], Pawn[color][i][1], j, k);
                    }
                    if (validMove) {
                        checkMoveForCheck(Pawn[color][i][2], Pawn[color][i][0], Pawn[color][i][1], j, k);
                        if (!inCheck) {
                            return false;
                        }
                    }
                }
            }
        }
    }
    for (int i = 0; i < 2; i++) {
        if (Rook[color][i][0]!=-1) {
            for (int j=0; j<8; j++) {
                for (int k=0; k<8; k++) {
                    rookCheckLegal(Rook[color][i][0],Rook[color][i][1], j, k);
                    if (validMove) {
                        checkMoveForCheck(rook, Rook[color][i][0], Rook[color][i][1], j, k);
                        if (!inCheck) {
                            return false;
                        }
                    }
                }
            }
        }
    }
    for (int i = 0; i < 2; i++) {
        if (Knight[color][i][0]!=-1) {
            for (int j=0; j<8; j++) {
                for (int k=0; k<8; k++) {
                    knightCheckLegal(Knight[color][i][0],Knight[color][i][1], j, k);
                    if (validMove) {
                        checkMoveForCheck(knight, Knight[color][i][0], Knight[color][i][1], j, k);
                        if (!inCheck) {
                            return false;
                        }
                    }
                }
            }
        }
    }
    for (int i = 0; i < 2; i++) {
        if (Bishop[color][i][0]!=-1) {
            for (int j=0; j<8; j++) {
                for (int k=0; k<8; k++) {
                    bishopCheckLegal(Bishop[color][i][0],Bishop[color][i][1], j, k);
                    if (validMove) {
                        checkMoveForCheck(bishop, Bishop[color][i][0], Bishop[color][i][1], j, k);
                        if (!inCheck) {
                            return false;
                        }
                    }
                }
            }
        }
    }
    if (Queen[color][0]!=-1) {
        for (int j=0; j<8; j++) {
            for (int k=0; k<8; k++) {
                queenCheckLegal(Queen[color][0],Queen[color][1], j, k);
                if (validMove) {
                    checkMoveForCheck(queen, Queen[color][0], Queen[color][1], j, k);
                    if (!inCheck) {
                        return false;
                    }
                }
            }
        }
    }
    return true;
    /*
    for (int i = 0; i < 8; i++) {
        if (Pawn[color][i][3]==0) {
            for (int j=-1; j<=1; j++) {
                if (color==white) {
                    pawnCheckLegal(Pawn[color][i][0],Pawn[color][i][1], Pawn[color][i][0]+1, Pawn[color][i][1]+j;
                    if (validMove) {
                        checkMoveForCheck(king, Pawn[color][0], Pawn[color][1], Pawn[color][0]+i, Pawn[color][1]+j);
                        if (!inCheck) {
                            return false;
                        }
                    }
                }
                else {
                    pawnCheckLegal(Pawn[color][i][0];
                    if (validMove) {
                        checkMoveForCheck(king, Pawn[color][0], Pawn[color][1], Pawn[color][0]+i, Pawn[color][1]+j);
                        if (!inCheck) {
                            return false;
                        }
                    }
                }
            }
        }
    }*/
}
bool checkForStalemate(int color) {
    Check(color, King[color][0], King[color][1]);
    if (inCheck) {
        return false;
    }
    for (int i = -1; i<=1; i++) {
        for (int j=-1; j<=1; j++) {
            kingCheckLegal(King[color][0], King[color][1], King[color][0]+i, King[color][1]+j);
            if (validMove) {
                checkMoveForCheck(king, King[color][0], King[color][1], King[color][0]+i, King[color][1]+j);
                if (!inCheck) {
                    return false;
                }
            }
        }
    }
    for (int i = 0; i < 8; i++) {
        if (Pawn[color][i][0]!=-1) {
            for (int j=0; j<8; j++) {
                for (int k=0; k<8; k++) {
                    if (Pawn[color][i][2]==0) {
                        pawnCheckLegal(Pawn[color][i][0], Pawn[color][i][1], j, k);
                    }
                    else if (Pawn[color][i][2]==1) {
                        rookCheckLegal(Pawn[color][i][0], Pawn[color][i][1], j, k);
                    }
                    else if (Pawn[color][i][2]==2) {
                        knightCheckLegal(Pawn[color][i][0], Pawn[color][i][1], j, k);
                    }
                    else if (Pawn[color][i][2]==3) {
                        bishopCheckLegal(Pawn[color][i][0], Pawn[color][i][1], j, k);
                    }
                    else if (Pawn[color][i][2]==4) {
                        queenCheckLegal(Pawn[color][i][0], Pawn[color][i][1], j, k);
                    }
                    if (validMove) {
                        checkMoveForCheck(Pawn[color][i][2], Pawn[color][i][0], Pawn[color][i][1], j, k);
                        if (!inCheck) {
                            return false;
                        }
                    }
                }
            }
        }
    }
    for (int i = 0; i < 2; i++) {
        if (Rook[color][i][0]!=-1) {
            for (int j=0; j<8; j++) {
                for (int k=0; k<8; k++) {
                    rookCheckLegal(Rook[color][i][0],Rook[color][i][1], j, k);
                    if (validMove) {
                        checkMoveForCheck(rook, Rook[color][i][0], Rook[color][i][1], j, k);
                        if (!inCheck) {
                            return false;
                        }
                    }
                }
            }
        }
    }
    for (int i = 0; i < 2; i++) {
        if (Knight[color][i][0]!=-1) {
            for (int j=0; j<8; j++) {
                for (int k=0; k<8; k++) {
                    knightCheckLegal(Knight[color][i][0],Knight[color][i][1], j, k);
                    if (validMove) {
                        checkMoveForCheck(knight, Knight[color][i][0], Knight[color][i][1], j, k);
                        if (!inCheck) {
                            return false;
                        }
                    }
                }
            }
        }
    }
    for (int i = 0; i < 2; i++) {
        if (Bishop[color][i][0]!=-1) {
            for (int j=0; j<8; j++) {
                for (int k=0; k<8; k++) {
                    bishopCheckLegal(Bishop[color][i][0],Bishop[color][i][1], j, k);
                    if (validMove) {
                        checkMoveForCheck(bishop, Bishop[color][i][0], Bishop[color][i][1], j, k);
                        if (!inCheck) {
                            return false;
                        }
                    }
                }
            }
        }
    }
    if (Queen[color][0]!=-1) {
        for (int j=0; j<8; j++) {
            for (int k=0; k<8; k++) {
                queenCheckLegal(Queen[color][0],Queen[color][1], j, k);
                if (validMove) {
                    checkMoveForCheck(queen, Queen[color][0], Queen[color][1], j, k);
                    if (!inCheck) {
                        return false;
                    }
                }
            }
        }
    }
    return true;
    /*
    for (int i = 0; i < 8; i++) {
        if (Pawn[color][i][3]==0) {
            for (int j=-1; j<=1; j++) {
                if (color==white) {
                    pawnCheckLegal(Pawn[color][i][0],Pawn[color][i][1], Pawn[color][i][0]+1, Pawn[color][i][1]+j;
                    if (validMove) {
                        checkMoveForCheck(king, Pawn[color][0], Pawn[color][1], Pawn[color][0]+i, Pawn[color][1]+j);
                        if (!inCheck) {
                            return false;
                        }
                    }
                }
                else {
                    pawnCheckLegal(Pawn[color][i][0];
                    if (validMove) {
                        checkMoveForCheck(king, Pawn[color][0], Pawn[color][1], Pawn[color][0]+i, Pawn[color][1]+j);
                        if (!inCheck) {
                            return false;
                        }
                    }
                }
            }
        }
    }*/
}

void movePiece(int piece, int currentx, int currenty, int desiredx, int desiredy) {
    if (piece<0 || piece>5) {
        validMove = false;
        return;
    }
    if(board[desiredx][desiredy][0]==currentColor || board[currentx][currenty][0]!=currentColor || board[currentx][currenty][1]!=piece) {
        validMove = false; //space already occupied
        return;
    }
    if (piece == pawn) {
        pawnCheckLegal(currentx, currenty, desiredx, desiredy);
    }
    else if (piece == rook) {
        rookCheckLegal(currentx, currenty, desiredx, desiredy);
    }
    else if (piece == knight) {
        knightCheckLegal(currentx, currenty, desiredx, desiredy);
    }
    else if (piece == bishop) {
        bishopCheckLegal(currentx, currenty, desiredx, desiredy);
    }
    else if (piece == queen) {
        queenCheckLegal(currentx, currenty, desiredx, desiredy);
    }
    else if (piece == king) {
        kingCheckLegal(currentx, currenty, desiredx, desiredy);
    }
    if (validMove) {
        checkMoveForCheck(piece, currentx, currenty, desiredx, desiredy);
        if (validMove) {
            resetGrid(currentx, currenty);
            board[desiredx][desiredy][0] = currentColor;
            board[desiredx][desiredy][1] = piece;
            if (piece == pawn) {
                int promote = 0;
                if (currentColor==white && desiredy==7 || (currentColor==black && desiredy == 0)) {
                    printf("Choose a piece to promote to:");
                    while (promote<=0 || promote>=5) {
                        fflush(stdout);
                        scanf("%d", &promote);
                        while ((getchar()) != '\n');
                    }
                    board[desiredx][desiredy][1]=promote;
                }
                for (int i = 0; i < 8; i++) {
                    if (Pawn[currentColor][i][0] == currentx && Pawn[currentColor][i][1] == currenty) {
                        Pawn[currentColor][i][0] = desiredx;
                        Pawn[currentColor][i][1] = desiredy;
                        Pawn[currentColor][i][2] = promote;
                    }
                }
            }
            else if (piece == rook) {
                for (int i = 0; i < 2; i++) {
                    if (Rook[currentColor][i][0] == currentx && Rook[currentColor][i][1] == currenty) {
                        Rook[currentColor][i][0] = desiredx;
                        Rook[currentColor][i][1] = desiredy;
                    }
                }
                for (int i = 0; i < 8; i++) {
                    if (Pawn[currentColor][i][3] == rook && Pawn[currentColor][i][0] == currentx && Pawn[currentColor][i][1] == currenty) {
                        Pawn[currentColor][i][0] = desiredx;
                        Pawn[currentColor][i][1] = desiredy;
                    }
                }
            }
            else if (piece == knight) {
                for (int i = 0; i < 2; i++) {
                    if (Knight[currentColor][i][0] == currentx && Knight[currentColor][i][1] == currenty) {
                        Knight[currentColor][i][0] = desiredx;
                        Knight[currentColor][i][1] = desiredy;
                    }
                }
                for (int i = 0; i < 8; i++) {
                    if (Pawn[currentColor][i][3] == knight && Pawn[currentColor][i][0] == currentx && Pawn[currentColor][i][1] == currenty) {
                        Pawn[currentColor][i][0] = desiredx;
                        Pawn[currentColor][i][1] = desiredy;
                    }
                }
            }
            else if (piece == bishop) {
                for (int i = 0; i < 2; i++) {
                    if (Bishop[currentColor][i][0] == currentx && Bishop[currentColor][i][1] == currenty) {
                        Bishop[currentColor][i][0] = desiredx;
                        Bishop[currentColor][i][1] = desiredy;
                    }
                }
                for (int i = 0; i < 8; i++) {
                    if (Pawn[currentColor][i][3] == bishop && Pawn[currentColor][i][0] == currentx && Pawn[currentColor][i][1] == currenty) {
                        Pawn[currentColor][i][0] = desiredx;
                        Pawn[currentColor][i][1] = desiredy;
                    }
                }
            }
            else if (piece == queen) {
                if (Queen[currentColor][0] == currentx && Queen[currentColor][1] == currenty) {
                        Queen[currentColor][0] = desiredx;
                        Queen[currentColor][1] = desiredy;
                }
                else {
                    for (int i = 0; i < 8; i++) {
                        if (Pawn[currentColor][i][3] == queen && Pawn[currentColor][i][0] == currentx && Pawn[currentColor][i][1] == currenty) {
                            Pawn[currentColor][i][0] = desiredx;
                            Pawn[currentColor][i][1] = desiredy;
                        }
                    }
                }
            }
            else if (piece == king) {
                King[currentColor][0] = desiredx;
                King[currentColor][1] = desiredy;
                if (currentColor==white) {
                    hasWhiteKingMoved = true;
                }
                else {
                    hasBlackKingMoved = true;
                }
            }
            if (temppiece == pawn) {
                for (int i = 0; i < 8; i++) {
                    if (Pawn[!currentColor][i][0] == desiredx && Pawn[!currentColor][i][1] == desiredy) {
                        Pawn[!currentColor][i][0] = -1;
                        Pawn[!currentColor][i][1] = -1;
                    }
                }
            }
            else if (temppiece == rook) {
                for (int i = 0; i < 2; i++) {
                    if (Rook[!currentColor][i][0] == desiredx && Rook[!currentColor][i][1] == desiredy) {
                        Rook[!currentColor][i][0] = -1;
                        Rook[!currentColor][i][1] = -1;
                        if (i == 0 && currentColor == 0) {
                            hasWhiteRook1Moved = true;
                        }
                        else if (i == 1 && currentColor == 0) {
                            hasWhiteRook2Moved = true;
                        }
                        else if (i == 0 && currentColor == 1) {
                            hasBlackRook1Moved = true;
                        }
                        else if (i == 1 && currentColor == 1) {
                            hasBlackRook2Moved = true;
                        }
                    }
                }
                for (int i = 0; i < 8; i++) {
                    if (Pawn[!currentColor][i][3] == rook && Pawn[currentColor][i][0] == desiredx && Pawn[currentColor][i][1] == desiredy) {
                        Pawn[!currentColor][i][0] = -1;
                        Pawn[!currentColor][i][1] = -1;
                    }
                }
            }
            else if (temppiece == knight) {
                for (int i = 0; i < 2; i++) {
                    if (Knight[!currentColor][i][0] == desiredx && Knight[!currentColor][i][1] == desiredy) {
                        Knight[!currentColor][i][0] = -1;
                        Knight[!currentColor][i][1] = -1;
                    }
                }
                for (int i = 0; i < 8; i++) {
                    if (Pawn[!currentColor][i][3] == knight && Pawn[currentColor][i][0] == desiredx && Pawn[currentColor][i][1] == desiredy) {
                        Pawn[!currentColor][i][0] = -1;
                        Pawn[!currentColor][i][1] = -1;
                    }
                }
            }
            else if (temppiece == bishop) {
                for (int i = 0; i < 2; i++) {
                    if (Bishop[!currentColor][i][0] == desiredx && Bishop[!currentColor][i][1] == desiredy) {
                        Bishop[!currentColor][i][0] = -1;
                        Bishop[!currentColor][i][1] = -1;
                    }
                }
                for (int i = 0; i < 8; i++) {
                    if (Pawn[!currentColor][i][3] == bishop && Pawn[currentColor][i][0] == desiredx && Pawn[currentColor][i][1] == desiredy) {
                        Pawn[!currentColor][i][0] = -1;
                        Pawn[!currentColor][i][1] = -1;
                    }
                }
            }
            else if (temppiece == queen) {
                if (Queen[!currentColor][0] == desiredx && Queen[!currentColor][1] == desiredy) {
                    Queen[!currentColor][0] = -1;
                    Queen[!currentColor][1] = -1;
                }
                for (int i = 0; i < 8; i++) {
                    if (Pawn[!currentColor][i][3] == queen && Pawn[currentColor][i][0] == desiredx && Pawn[currentColor][i][1] == desiredy) {
                        Pawn[!currentColor][i][0] = -1;
                        Pawn[!currentColor][i][1] = -1;
                    }
                }
            }
            //update current color to next players turn
            currentColor = currentColor == 1 ? 0 : 1;
        }
    }
}

void pawnCheckLegal(int currentx, int currenty, int desiredx, int desiredy) {
    //white pawn only moves up, black pawn only moves down
    if (currentColor == white) {
        //white pawns can only move up
        if (desiredy == currenty + 1 && currentx == desiredx && board[desiredx][desiredy][0] == -1) {
            validMove = true;
            return;
        }

        //for white pawns
        if(currenty == 1 && desiredy == currenty + 2 && currentx == desiredx && board[currentx][currenty+1][0]==-1 && board[desiredx][desiredy][0] == -1){ //first move can be 2 spaces
            validMove = true;
            return;
        }
        else {
            if (desiredy-currenty == 1 && abs(desiredx-currentx)==1 && board[desiredx][desiredy][0]==black) {
                validMove = true; //if not first move then you can only move 1
                return;
            }
        }
    }
    else { //for black pawns
    //only move down
        if (desiredy == currenty - 1 && currentx == desiredx && board[desiredx][desiredy][0] == -1) {
            validMove = true;
            return;
        }

        //for white pawns
        if(currenty == 6 && desiredy == currenty - 2 && currentx == desiredx && board[currentx][currenty-1][0]==-1 && board[desiredx][desiredy][0] == -1){ //first move can be 2 spaces
            validMove = true;
            return;
        }
        else {
            if (desiredy-currenty == -1 && abs(desiredx-currentx)==1 && board[desiredx][desiredy][0]==white) {
                validMove = true; //if not first move then you can only move 1
                return;
            }
        }
    } 
    validMove = false;
}

void knightCheckLegal(int currentx, int currenty, int desiredx, int desiredy){
    if(board[desiredx][desiredy][0]==currentColor) {
        validMove = false; //space already occupied
        return;
    }
    //else a knights move is only valid if the abs value of the position is either 2 vertical 1 horizontal or 2 horizontal or 1 vertical

    if(abs(currentx-desiredx) == 2 && abs(currenty-desiredy) == 1 || abs(currentx-desiredx) == 1 && abs(currenty-desiredy) == 2) {
        validMove = true;
    }
    else {
        validMove = false;
    }

}

void kingCheckLegal(int currentx, int currenty, int desiredx, int desiredy) {
    if(board[desiredx][desiredy][0]==currentColor || desiredx < 0 || desiredy < 0 || desiredx > 7 || desiredy > 7) {
        validMove = false; //space already occupied
        return;
    }
    if((desiredx==currentx+1 && desiredy==currenty+1) ||
    (desiredx==currentx+1 && desiredy==currenty) ||
    (desiredx==currentx+1 && desiredy==currenty-1) ||
    (desiredx==currentx && desiredy==currenty+1) ||
    (desiredx==currentx && desiredy==currenty-1) ||
    (desiredx==currentx-1 && desiredy==currenty+1) ||
    (desiredx==currentx-1 && desiredy==currenty) ||
    (desiredx==currentx-1 && desiredy==currenty-1)) {
        validMove = true;
    }
    else if (currentColor==white && desiredy==0 && currentx==3 && currenty==0 && (desiredx==1 || desiredx==5))
        castle(currentx, currenty, desiredx, desiredy);
    else if (currentColor==black && desiredy==7 && currentx==3 && currenty==7 && (desiredx==1 || desiredx==5))
        castle(currentx, currenty, desiredx, desiredy);
    else {
        validMove = false;
    }
}

/*void printBoard() {
    for (int i=7; i>=0; i--) {
        for (int j=0; j<8; j++) {
            printf("%3d", board[j][i][1]);
        }
        printf("\n");
    }
}*/