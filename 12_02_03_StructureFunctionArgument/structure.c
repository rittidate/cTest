/*
 * structure.c
 *
 *  Created on: Aug 4, 2558 BE
 *      Author: capuchino
 */
#include <stdio.h>

#include "structure.h"

void printBook( struct Books book )
{
   printf( "Book title : %s\n", book.title);
   printf( "Book author : %s\n", book.author);
   printf( "Book subject : %s\n", book.subject);
   printf( "Book book_id : %d\n", book.book_id);
}


