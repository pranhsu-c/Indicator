#include<stdio.h>

 main()
{
    int arr[100];
    int n,i;
    int *ptr;  
    
    ptr=&arr; 

    printf("Enter size of array: ");
    scanf("%d",&n);

    printf("Enter elements in array:\n");
    for (i=0;i<n;i++)
    {
        scanf("%d",ptr);
        *ptr++;   
    }

    ptr = arr;
    printf("\nArray elements:-\n");
    
    for (i=0;i<n;i++)
    {
        printf("a[%d] = %u = %d\n",i,ptr,*ptr);
        ptr++;
    }
}
