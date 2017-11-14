// #include<stdio.h>
// int main(){
//   char name[5];
//   // scanf("%s",name);
//   fgets(name,15,stdin);
//   // printf("%s\n",name);
//   // for(int i=0;i<100;i++){
//   //     printf("%c",name[i]);
//   // }
// printf("%s",name);
// // if(name[4]=='\n'){
// //   printf("New line is present\n");
// // }
// // if(name[5]=='\0'){
// //   printf("char after last char is null");
// // }
// }

#include<stdio.h>
#include<string.h>
int main(){
  // char *array;
  // array[3]='d';
  char array1[2];
  char array2[2];
  char array3[4];

  // char *p = array;
  // printf("%s\n",p/*+p[3]-p[1]*/);
  // printf("%lu\n",sizeof(array));
  // printf("%lu\n",strlen(array));
  fgets(array3,100,stdin);
  fputs(array3,stdout);
}

























// #include<stdio.h>
// #include<string.h>
// #define MAX 40
// int Add(int, int);
// int main(){
//   char charArray[MAX]="vasanth";
//   int c;
//   int i;
//   i=0;
//   while ((c=getchar()) != '0' && c != '\n') {
//     charArray[i] = c;
//     i++;
//   }
//   //  charArray[i]='\0';
//   printf("%s\n", charArray);
//   printf("%lu\n", strlen(charArray));
//   return 0;
// }
