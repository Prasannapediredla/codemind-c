#include<stdio.h>  
 int main()  
{  
    int num1,num2,gcd,count = 1; 
    scanf("%d%d", &num1, &num2);  
    while(count <= num1 && count <= num2)  
    {  
        if(num1%count==0 && num2%count==0)  
        {  
            gcd = count;  
        }  
        count++;  
    }  
  
    printf("%d",gcd);  
}