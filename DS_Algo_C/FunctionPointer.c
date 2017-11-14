#include<stdio.h>
int Add(int a, int b){
  return a+b;
}
int Subtract(int a, int b){
  return a-b;
}

void CallBack(int (*funPtr)(int, int)){
printf("%d\n",funPtr(5,4));

}


int main(){
  CallBack(Subtract);

}
