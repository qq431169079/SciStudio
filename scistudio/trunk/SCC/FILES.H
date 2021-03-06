/*****************************************************************************/
#ifndef _FILES_H_
#define _FILES_H_  
/*****************************************************************************/

define NEXT_INF(inf) ((inf->next)?inf->next:inf->prev);
INFILE *LoadInFile(char *filename);
INFILE *DisposeInFile(INFILE *inf);

/*****************************************************************************/
#endif
/*****************************************************************************/
