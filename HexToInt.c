#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
void htoi(char s[]);
int main() {
  char s[10];
  char c[10];
  gets(s);
  htoi(s);
  return 0;
}

void htoi(char s[]){
  int i,j,k;
  int sum,r=0;
  for (i=0;i<strlen(s)-1;++i) {
    s[i]=tolower(s[i]);
  }
  printf("%s\n",s);
  k=0;
  for (j=strlen(s)-1;j>=0;--j){
    if(s[j] !='x'){
      if (s[j]>=97 && s[j]<=103) {
          r=(s[j]-87)*pow(16,k);
      }
      else{
          r=(s[j]-48)*pow(16,k);
      }
      sum+=r;
      ++k;
    }
    else{
      break;
    }
  }

  printf("%d\n",sum);
}
