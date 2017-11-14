#include<stdio.h>
#include<string.h>
int main(){
  char *name1 = {'v','a','s','a','n','t','h'};
  char name2[] = "velusamy";

  strcpy(name2,name1);
  // name1[4] = 'v';
  printf("%s\n",name2);
  return 0;
}
