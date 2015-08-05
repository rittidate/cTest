/*
 * structure.h
 *
 *  Created on: Aug 4, 2558 BE
 *      Author: capuchino
 */

#ifndef STRUCTURE_H_
#define STRUCTURE_H_

struct Books
{
   char  title[50];
   char  author[50];
   char  subject[100];
   int   book_id;
};

/* function declaration */
void printBook( struct Books *book );

#endif /* STRUCTURE_H_ */
