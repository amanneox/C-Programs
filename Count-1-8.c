#include <stdio.h>
int main() {
  int c,b,l,t;
  b,l,t=0;
  while ((c=getchar() !=EOF)) {
    if (c==' ') {
      ++b;
    }
    else if(c=='\t'){
      ++t;
    }
    else if(c=='\n'){
      ++l;
    }
    else{
      continue;
    }
  }
  printf("%d%d%d\n",b,t,l);
  return 0;
}
