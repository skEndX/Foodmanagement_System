#include <stdio.h>
#include <malloc.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
typedef struct _food
{
	char szF_name[51];
	char szman[21];
	char szDay[11];
	char szput[11];
	int inum;
	int index;
	struct _food *next;
} food;
food Temp;
food *Head = 0;
extern food *insert(food *item, food *list, int kind, int Sort);
extern food *deletef(char number[15], food *list);
extern int Input(food *Temp);
extern void print_list1(food *list, int know);
extern void print_list2(food *list, int know);
extern void save_food(food *list);
extern void Start();
extern void deletelist();
extern void food_in();
extern void Start();
extern void find();
extern void foodSort();
extern void foodSerch();
extern void foodlist();
extern void textSort();
extern void savefood(food *list, char f_name[]);
extern void menu();
int count();
