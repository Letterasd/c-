#pragma once
#define HANG 3
#define LIE 3
void Initboard(char board[HANG][LIE], int row, int col);
void Displayboard(char board[HANG][LIE], int row, int col);
void Playmove(char board[HANG][LIE], int row, int col);
void Computermove(char board[HANG][LIE], int row, int col);
#include<stdio.h>
#include<stdlib.h>
#include<time.h>//timeÐèÒªµÄ¿â
void game();
void menu();
char judge(char board[HANG][LIE], int hang, int lie);
int judgefull(char board[HANG][LIE], int hang, int lie);