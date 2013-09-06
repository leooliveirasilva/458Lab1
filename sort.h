/* sort.h: Define some functions and constants for sorting */
/* By Fernando Pereira */

#ifndef SORT_H
#define SORT_H

#define SWAP(x,y,buffer) do{ (buffer)=(x); (x)=(y); (y)=(buffer); }while(0); 
#define MAX_IND(x,y) ((x)>(y)?1:0)

#endif
