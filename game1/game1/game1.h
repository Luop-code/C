#define ROW 3
#define COL 3
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
//��������
void InitBoard(char board[ROW][COL], int row, int col);
void displayboard(char board[ROW][COL], int row, int col);
void playermove(char board[ROW][COL],int row,int col);
void computermove(char board[ROW][COL], int row, int col);

//��������������Ϸ״̬
//���Ӯ ��*��
//����Ӯ  ��#��
//ƽ��   ��Q��
//����   ��C'
char iswin(char board[ROW][COL],int row,int col);