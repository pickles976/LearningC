#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include "helpers.h"

int main() {

  int rc;
  char buff[100];

  rc = getLine("Enter string > ", buff, sizeof(buff));
  if (rc == NO_INPUT) {
    printf("\nNo input\n");
    return 1;
  }  

  if (rc == TOO_LONG) {
    printf("Input too long [%s]\n", buff);
    return 1;
  }

  printf("OK [%s]\n", buff);

  return 0;

}
