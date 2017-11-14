#include<stdio.h>
void funcToCheckPtr(int *ptr){
  printf("The pointer in funtion is %d\n",*ptr);
}
int main(){
  int i=10;
  int *ptr = &i;
  funcToCheckPtr(ptr);
  printf("The pointer in main is %p\n",ptr);
}
