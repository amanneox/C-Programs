#include <limits.h>
#include <float.h>
#include <stdio.h>
int main() {
  printf("Unsigned Char:%d\t%d\n",UCHAR_MAX,0);
  printf("Signed Char:%d\t%d\n",SCHAR_MAX,SCHAR_MIN);
  printf("Int:%d\t%d\n",INT_MAX,INT_MIN );
  printf("Long:%d\t%d\t%d\n",LONG_MAX,LONG_MIN,ULONG_MAX);
  printf("Short:%d\t%d\t%d\n",SHRT_MAX,SHRT_MIN,USHRT_MAX);
  return 0;
}
