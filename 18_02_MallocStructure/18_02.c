/*
 * 18_02.c
 *
 *  Created on: Aug 5, 2558 BE
 *      Author: capuchino
 */
	#include<stdio.h>

	typedef struct rec
	{
    		int i;
    		float PI;
    		char A;
	}RECORD;

	void printStruct(RECORD *);

	int main()
	{
    		RECORD *ptr_one;

    		ptr_one = (RECORD *) malloc (sizeof(RECORD));

    		(*ptr_one).i = 10;
    		(*ptr_one).PI = 3.14;
    		(*ptr_one).A = 'a';

//    		printf("First value: %d\n",(*ptr_one).i);
//    		printf("Second value: %f\n", (*ptr_one).PI);
//    		printf("Third value: %c\n", (*ptr_one).A);

    		printStruct(ptr_one);
    		free(ptr_one);

    		return 0;
	}

	void printStruct(RECORD *print)
	{
		printf("First value: %d\n",(*print).i);
		printf("Second value: %f\n", (*print).PI);
		printf("Third value: %c\n", (*print).A);
	}

