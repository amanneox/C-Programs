#include <stdio.h>
int main(int argc, char const *argv[]) {
  int c;
  while (c=getchar()!=EOF) {

  if (c==0) {
    printf("%s\n","0" );
  }
  else if(c==1){
    printf("%s\n","1" );
  }
  else{
    continue;
  }
}
  return 0;
}
