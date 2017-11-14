#include<stdio.h>
int main(){
  int a;
  char *chArray;
  fgets(chArray, 10, stdin);
  sscanf(chArray, "%d", &a);
  printf("the number is %d\n", a);
}
