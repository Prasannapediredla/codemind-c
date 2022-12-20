#include<stdio.h>
int main()
{
    float a,b;
    scanf("%f",&a);
    if(a<=199)
    {
        b=1.20;
    }
    else if(a>=200&&a<400)
    {
        b=1.50;
    }
    else if(a>=400&&a<600)
    {
        b=1.80;
    }
    else 
    {
        b=2.00;
    }
    float bill=a*b;
    float tb;
    if(bill>400)
    {
        tb=bill+(bill*0.15);
        printf("%0.2f",tb);
    }
    else
    {
        tb=bill+100;
        printf("%0.2f",tb);
    }
}