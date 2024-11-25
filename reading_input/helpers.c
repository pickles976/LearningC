#include <stdio.h>
#include <string.h>
#include "helpers.h"

int getLine(char* prompt, char* buffer, size_t size){
  int ch, extra;

  // Get line with buffer overrun protection
  if (prompt != NULL) {
    printf("%s", prompt);
    fflush(stdout);
  }
  if (fgets(buffer, size, stdin) == NULL) {
    return NO_INPUT;
  }

  // If too long, flush EOL
  if (buffer[strlen(buffer)-1] != '\n') {
    extra = 0;
    while (((ch = getchar()) != '\n') && (ch != EOF)) {
      extra = 1;
    }
    return (extra == 1) ? TOO_LONG: OK;
  }

  // Remove newline and return to caller
  buffer[strlen(buffer) - 1] = '\0';
  return OK;
}
