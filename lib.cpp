
#include "lib.h"

int primi (int n) {
  int i;
  int divisore=0;
  for (i=1; i<=n; i++)
    if (n%i==0) {
      divisore++;
    }
  return divisore;
}
