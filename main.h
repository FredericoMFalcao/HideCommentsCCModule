/*
*   comments
*
*/

/* 1. EXTERNAL LIBs */
#include <stdio.h>
#include <stdlib.h>
/* All the Unix Libraries your module needs should go here. */
/* e.g. #include <stdio.h>
*       #include <stdlib.h>
*       etc...
*/

/* 2. INTERNAL LIBs */
#include "../../parseInput.h"

/* 3. CONSTANTS */
#define CLI_HELPER_DESCRIPTION "this module does nothing. it's simply placeholder code for new developers to easily create new modules."

#define STATE_MULTI_LINE_COMMENT  1
#define STATE_SINGLE_LINE_COMMENT 2

/* 4. INTERNAL FUNCTIONS */

/* You should implement the following functions : 
*
*  
*  void comments_parseChar(char c, char d, String *out);
*	- called everytime a new character is processed in the input stream
*
*  void comments_command_line_mode(char *str);
*       - called to process the command line arguments
*
*/
void comments_parseChar(char c, char d, String *out);
void comments_command_line_mode(char *str);
void comments_help();
