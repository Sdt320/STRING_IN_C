/******************************************************************************

Welcome to GDB Online.
 10 simple coding questions to practice:
*******************************************************************************/
➔ Write a program that takes two numbers and prints their sum.
#include <stdio.h>

int main()
{
    int a,b;
    int sum=0;
    sum = 1+9;
    printf("Sum is %d ",sum);
    printf("Hello World");

    return 0;
}

Check Even or Odd
➔ Write a program to check if a number is even or odd.

#include <stdio.h>
 int main()
 {
     int num,i;
     printf("Enter a number: ");
     scanf("%d",&num);
     if (num%2 == 0)
        printf("\n number entered is even ...");
     else
        printf("\n %d is odd num ...",num);
        
    return 0;
     
 }
 
 Find the Largest Number
➔ Write a program to find the largest among three numbers.
    
    #include <stdio.h>
    int main()
    {
        int a,b,c;
        printf("enter the numbers : ");
        scanf("%d%d%d",&a,&b,&c);
        if (a>=b && a>=c)
            printf("Greater number is %d",a);
        else if (b>=a && b>=c)
            printf("Greater number is %d",b);
        else 
            printf("Greater number is  %d",c);
            return 0;
    }

Factorial of a Number
➔ Write a program to find the factorial of a given number.
    
    #include <stdio.h>
    int main()
    {
        int num,mul=1,i;
        printf("enter the number: ");
        scanf("%d",&num);
        for(i=1;i<num+1;i++)
        {
            mul *=i;
        }
        printf("\n factorial is %d ",mul);
        return 0;
    }

Reverse a String
➔ Write a program to reverse a given string.


    #include <stdio.h>
    #include <string.h>
     int main()
     {
         char str[100],temp;
         int i,len;
         
         printf("enter the string to revers : ");
         scanf("%s",str);
         
         len = strlen(str);
         
         for (i=0;i<len/2;i++)
         {
             temp=str[i];
             str[i]=str[len-i-1];
             str[len-i-1]=temp;
         }
         printf("Reversed string : %s",str);
         
     }
     
    Check Palindrome
➔ Write a program to check if a string is a palindrome (same forward and backward).
 
    #include <stdio.h>
    #include <string.h>
     int main()
     {
         char str[100],temp;
         int i,len;
         
         printf("enter the string to revers : ");
         scanf("%s",str);
         
         len = strlen(str);
         
         for (i=0;i<len/2;i++)
         {
             
             if (str[i]==str[len-i-1])
             continue;
             else{
             printf("not palindrome");
             break;
             }
         }
         printf("palindrome string : %s",str);
         
     }
    
 Print Numbers 1 to 10 using Loop
➔ Write a program to print numbers from 1 to 10 using a loop.   
     
    #include <stdio.h>
    int main()
    {
        int i;
        for(i=1;i<11;i++)
        {
            printf("\n %d",i);
        }
    }

Sum of List Elements
➔ Write a program to find the sum of all elements in a list.

    #include <stdio.h>
    int main()
    {
        int sum=0,i;
        int s[]={1, 3, 4, 5};
        for (i=0;i<4;i++)
        {
            sum+=s[i];
        }
        printf("sum is %d",sum);
    }

Count Vowels in a String
➔ Write a program to count the number of vowels (a, e, i, o, u) in a string.

    #include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, count = 0;

    printf("Enter a string: ");
    scanf("%s", str); // Read the string

    for(i = 0; str[i] != '\0'; i++) {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' ||
          str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U') {
            count++;
        }
    }

    printf("Number of vowels: %d\n", count);

    return 0;
}


