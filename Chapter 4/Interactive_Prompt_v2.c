#include <stdio.h>
#include <stdlib.h>

#include <editline/readline.h>


int main(int argc, char** argv) {

  /* Print version and exit information */
  puts("Lispy version 0.0.0.0.2");
  puts("Press ctrl + c to exit\n");

  /* Never ending loop */
  while(1) {

    /*Output for prompt*/

    char* input = readline("lispy> ");

    /*Add input to history*/
    add_history(input);

    /*Echo input back to user*/
    printf("No you're a %s\n", input);

    /*Free retrieved input*/
    free(input);
  }
  return 0;
}