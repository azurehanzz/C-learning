#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include <stdio.h>
#include <windows.h>
#define ROW 14
#define COL 14
void initial(char Board[ROW][COL], int row, int col);
void display(char board[ROW][COL], int row, int col);
void player1(char Board[ROW][COL], int row, int col);
void player2(char Board[ROW][COL], int row, int col);
char is_win(char Board[ROW][COL], int row, int col, int windet);