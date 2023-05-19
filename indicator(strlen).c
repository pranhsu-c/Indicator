#include <stdio.h>

main() 
{
   char a[100],n;
   char *p;
   
   printf("enter the string=");
   gets(a);
    
    p=&a;
    printf("length of string=%d",strlen(p));

  
}


