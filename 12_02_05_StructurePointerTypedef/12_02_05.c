/*
 * 12_02_05.c
 *
 *  Created on: Aug 4, 2558 BE
 *      Author: capuchino
 */
#include <stdio.h>
#include <string.h>

typedef struct
{
	char *name;
	int number;
}TELEPHONE;

void printTelephone(TELEPHONE*);
//void printTelephone(TELEPHONE* telephone); same

int main()
{
	TELEPHONE index;
	TELEPHONE *ptr_myindex;

	ptr_myindex = &index;

	ptr_myindex->name = "Jane Doe";
	ptr_myindex->number = 12345;

	printTelephone(ptr_myindex);

	return 0;
}

void printTelephone(TELEPHONE* telephone){
	printf("Name: %s\n", telephone->name);
	printf("Telephone number: %d\n", telephone->number);
}

