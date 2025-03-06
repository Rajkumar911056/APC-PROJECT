/*
Name : NAVEENKUMAR SRIPATHI
Date : 01/12/2024
Project Name : Arbitrary Precision Calculator
Description : To implement a special calculator which is helpful to get accurate value while dealing with large numbers.
Sample Execution : 
1.Addition
	 2 + 3  =  6
	 2 + -3 = -1
	-2 + 3  =  1
	-2 + -3 = -5
2.Subtraction
	 10 - 5  =  5
	 10 - -5 =  15
        -10 - 5  = -15
	-10 - -5 = -5
3.Multiplication
	4 x 3   =  12
	4 x -2  = -12
	-4 x -3 =  12
4.Division
	12 / 4  = 3
	12 / 12 = 1
	12 / -3 = -4
	-12 / 4 = -3
	-12 / -4 = 3
*/

#ifndef HEADER_FILE
#define HEADER_FILE
#include<stdio.h>
#include<string.h>
#include<stdlib.h>


typedef struct node
{
	struct node* prev;
	int data;
	struct node* next;
}cal;

typedef enum 
{
	failure,
	success,
}Status;

Status insert_args(cal **head1,cal** tail1,cal** head2,cal** tail2,char* argv1,char* argv2);

Status insert_at_last(cal** head1,cal** tail1,char* data);

Status add(cal *head1,cal *tail1,cal *head2,cal *tail2,cal **head3,cal **tail3);


Status add_res(cal **head3,cal **tail3,int sum);

Status free_all(cal** head1,cal** tail1,cal** head2,cal** tail2,cal** head3,cal** tail3);

void free_node(cal** head,cal** tail);
int find_bigger(cal** head1,cal** head2);

Status sub(cal *head1,cal *tail1,cal *head2,cal *tail2,cal **head3,cal **tail3);
void print_res(cal** head,cal** tail);
int find_len(char* argv);

Status division(cal* head1,cal* tail1,cal* head2,cal* tail2,cal** head3,cal** tail3);
int check_node(cal** head1,cal** head2);
Status mul(cal* head1,cal* tail1,cal* head2,cal* tail2,cal** head3,cal** tail3);
void insert_last(cal** head,cal** tail);
void insert_first(cal** head, cal** tail, int data);
void free_first(cal** head);


#endif

