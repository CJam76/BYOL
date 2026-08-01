#include <stdio.h>
/* Declare a buffer for user input size of 2048 */
static char input[2048];

int main(int argc, char** argv) {

  /* Print version and exit information */
  puts("Lispy version 0.0.0.0.1");
  puts("Press ctrl + c to exit\n");

  /* Never ending loop */
  while(1) {

    /*Output for prompt*/

    fputs("lispy> ", stdout);

    /*Read a line of user input of maximim size of 2048*/

    fgets(input, 2048, stdin);

    /*Echo back input to user*/
    printf("No you're a %s", input);
    
  }
  return 0;
}