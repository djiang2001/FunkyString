#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

  //test for strcpy
  char str1[] = "Hello World";
  char str2[50];
  char str3[50];
  strcpy(str2,str1);
  strcpy(str3,"Success");
  printf("Test for strcopy\n str1: %s\n str2: %s\n str3: %s\n",str1,str2,str3);
  
  //test for strncpy
  char stra[] = "Goodbye World";
  char strb[50];
  char strc[50];
  strncpy(strb,stra,15);
  strncpy(strc,stra,10);
 printf("Test for strncopy\n stra: %s\n strb: %s\n strc: %s\n",stra,strb,strc);
  return 0;
}
