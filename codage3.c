#include <stdio.h>
#include "common.h"

int main(void){
  char str[] = "MoT!D#P@SSe?";
  puts(str);
  char *r = codage3(str);
  puts(r);
  free(r);
}
