#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

  char buf[25] = {0};

  printf("Enter a string: ");
  scanf("%s", buf);

  int end = strlen(buf);
  printf("String length: %d\n", end);
  
  for (int i = 0; i < (end / 2); i++) {
    char tmp = buf[i];
    buf[i] = buf[end - i - 1];
    buf[end - i - 1] = tmp;
  }
  printf("Reversed string is: %s\n", buf);
  printf("things");   
}
