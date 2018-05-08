#include <stdio.h>
#include <conio.h>
int reverse(char s[],int j,int l);
int main() {
  char s[100];

  int i,k=0;
  scanf("%[^\r]s",s);


  while (s[i] !='\0') {

    if (s[i]=='\n') {

      int x=reverse(s,i,k);
      k=i;
    }

    ++i;
  }
  return 0;
}
int reverse(char s[],int j,int l){

  int k,i;
  char r[100];
  k=0;
  for (i=j;i>=l;--i) {
    if (s[i] !='\0') {

    r[k++]=s[i];
  }
}
  r[k]='\0';
  puts(r);
  return 0;
}
