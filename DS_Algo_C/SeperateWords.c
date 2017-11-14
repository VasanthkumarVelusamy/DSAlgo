// // #include<stdio.h>
// // int main(){
// //   char *strings[100];
// //   char *string;
// //   scanf("%s",&strings[]);
// // }
// #include<stdio.h>
// char *temp;
// int main(){
//   char* foo[3]; int i=0;
//   printf("%d\n",sizeof(foo)/sizeof(foo[0]));
//   // for(i=0;i<3;i++) {
//   //
//   //   sprintf(temp,"VAL:%d",i);
//   //   foo[i] = temp;
//   // }
//   //
//   // for(i=0;i<3;i++)
//   // {
//   //   printf("%s\n",foo[i]);
//   // }
// }

#include<stdio.h>
int main(){
  int array[10];
  printf("the size of int array is %lu\n", sizeof(array));
  for (size_t i = 0; i < 10; i++) {
    printf("%d ", array[i]);
  }
  printf("\n" );
}
