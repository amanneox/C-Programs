#include <stdio.h>
int main() {
  int c,l;
  l=0;
  while ((c=getchar() !=EOF)) {
   if (c=='\n') {
     ++l;
   }
  }
  printf("%d\n",l);
  return 0;
}
