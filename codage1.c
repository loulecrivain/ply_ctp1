/* fournir 3 fichiers différents pour chaque codage - fait office de CR -
 * pas de warnings, pas d'erreurs, et exécutables */

#include <stdio.h>
#include "common.h"

int main(void){
  char str[] = "MoT!D#P@SSe?";
  puts(str);
  puts(codage1(str));
}
