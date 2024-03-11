#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>
#define ROWS 11
#define COLS 11
#define ROW ROWS-2
#define COL COLS-2
#define EASY ((ROWS-1)*(COLS-1))/10
#include <time.h>
#include <stdlib.h>

void menu();
void initialBoard(char Board[ROWS][COLS], int row, int col,char set );
void Display(char Board[ROWS][COLS], int row, int col);
void Setmine(char Board[ROWS][COLS], int row, int col, int Difficult ,int first_x,int first_y);
void Detect(char Boardshow[ROWS][COLS], char Boardmine[ROWS][COLS], int row, int col, int Detect_x, int Detect_y, int tabu[ROWS][COLS]);
void Play(char Boardmine[ROWS][COLS], char Boardshow[ROWS][COLS],int row, int col ,int a,int b, int tabu[ROWS][COLS]);