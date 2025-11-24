#include <stdio.h>

intmain()
{
   int a, b;
   printf("enter first number: ");
   scanf("%d" , &a);
   printf("Enter second number: ");
   scanf("%d", &b);
   if(a > b) { 
       printf("%dis the greater than %d\n",a, b);
   }
   else if(a < b) {
       printf("d is smaller than %d\n" ,a, b);
   }
    else {
        printf("both number are equal \n");
    }
        return 0;
}
