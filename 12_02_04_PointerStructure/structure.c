/*
 * structure.c
 *
 *  Created on: Aug 4, 2558 BE
 *      Author: capuchino
 */
#include <stdio.h>
#include <string.h>
#include "structure.h"

void printBook( struct Books *book )
{
   printf( "Book title 0: %s\n", book->title);
   printf( "Book author 0: %s\n", book->author);
   printf( "Book subject 0: %s\n", book->subject);
   printf( "Book book_id 0: %d\n", book->book_id);
}

