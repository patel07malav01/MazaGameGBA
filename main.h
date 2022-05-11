#ifndef MAIN_H
#define MAIN_H

#include "gba.h"

struct ball {
    int curr_row; 
    int curr_col; 
    unsigned short color;
    int size; 
    int width; 
    int height; 
};


/*
* For example, for a Snake game, one could be:
*
* struct snake {
*   int heading;
*   int length;
*   int row;
*   int col;
* };
*
* Example of a struct to hold state machine data:
*
* struct state {
*   int currentState;
*   int nextState;
* };
*
*/

#endif
