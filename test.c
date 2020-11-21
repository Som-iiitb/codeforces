#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main(void) {
  /* code */
  char              *test_alloc = NULL;
  uint32_t           i          = 0;
  static uint32_t    j          = 0;

  test_alloc = (char *)malloc(10*sizeof(char));

  while (1) {
    if (i == 10){
      break;
    } else {
      i++;
      j++;
    }
  }

  return 0;
}
