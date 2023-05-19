#include<stdio.h>

main()
{
    int a,b;
    
    printf("enter the value of 1st number=");
    scanf("%d",&a);
    printf("enter the value of 2nd number=");
    scanf("%d",&b);
    
    int *t;
    int *ptr1;
    int *ptr2;
    
    ptr1=&a;
    ptr2=&b;
    
     t=*ptr1;
    *ptr1=*ptr2;
    *ptr2=t;
    
    printf("\nafter swapping value of A = %u = %d\n",ptr1,*ptr1);
    printf("after swapping value of B = %u = %d",ptr2,*ptr2); 
     	
}
