#include <stdio.h>
#include <conio.h>
#define Limit 100
char line[Limit];
int main() {
  int i,k=0;
  extern char line[];
  gets(line);
  while (line[k++] !='\0') {
    if (line[k]=='\t') {
      line[k]=' ';
    }
  }
  puts(line);
  return 0;
}
