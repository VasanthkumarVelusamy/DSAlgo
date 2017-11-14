//
//  main.c
//  NQueen
//
//  Created by Vasanthkumar V on 02/07/17.
//  Copyright © 2017 Vasanthkumar V. All rights reserved.
//

#include <stdio.h>
#include <stdbool.h>
#define N 11
bool solveNQ(int[N][N], int);
bool isSafePos(int[N][N], int, int);
void display(int board[N][N]);


int main(int argc, const char * argv[]) {
    
    int board[N][N] = {0};
    if (solveNQ(board,0) == false) {
        printf("no solutions");
    }
    else {
        display(board);
    }
    return 0;
}

bool solveNQ(int board[N][N], int col) {
    int i;
 
    if (col>=N) {
        return true;
    }
    
    for (i = 0; i<N; i++) {
        
        if (isSafePos(board, i, col) == true) {
            
            board[i][col] = 1;
            
            if(solveNQ(board, col+1) == true){
                return true;
            }
            
            board[i][col] = 0;
        }
    }
    
    return false;
}

bool isSafePos(int board[N][N], int row, int col) {
    int r,c;
    // checking the entire row
    for(c = 0; c<col; c++) {
        if (board[row][c] == 1) {
            return false;
        }
    }
    
    // checking upper left diagonally
    for(c = col, r = row; r>=0 && c>=0; r--,c--) {
        if (board[r][c] == 1) {
            return false;
        }
    }
    
    // checking lower left diagonally
    for(c = col, r = row; r<N && c>=0; r++,c--) {
        if (board[r][c] == 1) {
            return false;
        }
    }

    return true;
}

void display(int board[N][N]) {
    int r, c;
    for(r = 0; r < N; r++) {
        for(c = 0; c < N; c++) {
            printf("%d ", board[r][c]);
        }
        printf("\n");
    }
}

