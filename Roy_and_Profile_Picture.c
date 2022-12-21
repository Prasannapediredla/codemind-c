#include<stdio.h>
int main()
{
    int l,n,w,h,i;
    scanf("%d",&l);//180
    scanf("%d",&n);//2
    for(i=0;i<n;i++)//i=0<2
    {
        scanf("%d%d",&w,&h);//180 180
        if(w<l || h<l)//180==180  180==180
        {
            printf("UPLOAD ANOTHER
");
        }
        else
        {
            if(w==h)
            {
                printf("ACCEPTED
");
		    }
		    else
			{
				printf("CROP IT
");
			}
		}
    }
}
