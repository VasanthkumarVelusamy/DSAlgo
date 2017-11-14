#include<stdio.h>
#include<math.h>
int main(){
  int x=4;
  printf("%d %d\n", x++, power(x,2));
}

// #include<stdio.h>
// int a = 5;
// int f(){
// printf("a in f() is %d\n", a);
//   printf("f\n");
//   ++a;
//   return a;
// }
// int g(){
//   printf("a in g() is %d\n", a);
//   printf("g\n");
//   a+=2;
//   return a;
// }
// int main(){
//   printf("a in main() before is %d\n", a);
// int x = g()+f();
// printf("a in main() after is %d\n", a);
//
// printf("%d\n",x);
// }





// #include<stdio.h>
// int main(int argc, char **name){
// int length=argc-1;
// for(;length>0;length--)
//   printf("%s ",name[length]);
// printf("\n");
// printf("%d\n",argc);
// }





// #include<stdio.h>
// #include<stdlib.h>
// // #include<math.h>
// #define PI 3.1428571429
// int main(int argc, char** argv){
//     float diameter = atof(argv[1]);
//     float radius = diameter/2.0;
//     float area = PI * radius * radius;
//     printf("%0.2f",area);
//     return 0;
// }



// #include<stdio.h>
// #include<stdlib.h>
// #include<math.h>
// int main(int argc, char argv[]){
//   float diameter = atof(argv[1]);
//   printf("%c\n",argv[1]);
//   float radius = diameter/2.0;
//   float area = M_PI * radius * radius;
//   printf("%0.2f\n",area);
// }
//
// // void func(char array[]){
// //   printf("%c\n",array[1]);
// // }
// // int main(){
// //
// //   char name[] = "vasanth";
// //   func(name);
// //   printf("%c\n",name[1]);
// // }
