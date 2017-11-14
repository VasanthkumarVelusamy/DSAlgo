// #include<stdio.h>
// int main(){
//   char s[1000];
//   char kingdom[100];
//   char message[900];
//   int a,b,c;
//   fgets(s,1000,stdin);
//   sscanf(s,"%s, %s",kingdom,message);
//   //printf("The first is %d %d",a,b);
//   // fputs(kingdom,stdout);
//   // fputs(message,stdout);
// printf("%s\n",kingdom);
// printf("%s\n",message);
//
//

#include <stdio.h>
#include <string.h>
int main ()
{
  char string[50] ="Test,string1,Test,string2:Test:string3";
  char *p;
  printf ("String  \"%s\" is split into tokens:\n",string);
  p = strtok (string,",:");
  while (p!= NULL)
  {
    printf ("%s\n",p);
    p = strtok (NULL, ",:");
  }

  return 0;
}
