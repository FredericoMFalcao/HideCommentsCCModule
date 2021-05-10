/*
*   comments 
*
*/
#include "main.h"
int comments_mode = 0;
int comments_state = 0;

#define streq(a,b) (strcmp(a,b) == 0)
#include "parseChar.c"
#include "command_line_mode.c"
#include "help.c"


