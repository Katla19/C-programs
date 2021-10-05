#include<stdio.h>
#include<stdlib.h>
int *enter(int*e,int n);
int *exitt(int*e,int n);
void loop(int*e, int n);
int *enter(int*e,int n)
{   
    int i,p=0,a[n],m;
    for(i=0;i<n;i++)
        {
            a[i]=*(e+i);
        }
    printf("\n\n\n");
    for(i=0;i<n;i++)
        {
            if(*(e+i)==0)
                {
                    printf(".%d.",i+1);
                    if((p%10==0)&&(p!=0))
                        {
                            printf("\n");
                        }
                    p=p+1;
                }
        }
    if(p==0)
    {
        printf("\n\n\nsorry no vacancy\n");
        loop(a,n);
    }
    printf("\n\n\n enter the lot number you want to park from the given\n");
    scanf("%d",&m);
    if((m<=n)&&(m>0))
        {
            if(*(e+(m-1))!=0)
                {
                    printf("\n\n\nenter from the given\n");
                }
            else{
                *(e+(m-1))=1;
                printf("\n\n\nyour lot is %d \n",m);
            }
        }
    else{
            printf("\n\n\nenter from the given\n");
    }
}
int *exitt(int*e,int n)
{   
    int i,p=0,a[n],m;
    for(i=0;i<n;i++)
        {
            a[i]=*(e+i);
        }
    printf("\n\n\n");
    for(i=0;i<n;i++)
        {
            if(*(e+i)==1)
                {
                    printf(".%d.",i+1);
                    if((p%10==0)&&(p!=0))
                        {
                            printf("\n");
                        }
                    p=p+1;
                }
        }
    if(p==0)
    {
        printf("\n\n\nevery lot was already vacant \n");
        loop(a,n);
    }
    printf("\n\n\nenter the lot number which you have parked till now \n");
    scanf("%d",&m);
    if((m<=n)&&(m>0))
        {
            if(*(e+(m-1))!=1)
                {
                    printf("\n\n\nenter from the given\n");
                }
            else{
                *(e+(m-1))=0;
                printf("\n\n\nthank you for parking\n");
            }
        }
    else{
            printf("\n\n\nyour choice was not in the enter from the given\n");
    }
}
void loop(int*e,int n)
{       int i,l,a[n];
        for(i=0;i<n;i++)
        {
            a[i]=*(e+i);
        }
     system("clear");
        printf("type 1 to enter or 0 to exit\n");
        scanf("%d",&l);
        if(l==1)
        {
            e=enter(a,n);
        }
        else{
              if(l==0)
              {
                  e=exitt(a,n);
              }
              else{
                  printf("\n\n\nenter a valid number from the given\n");
              }
            }
        loop(a,n);
}
int main()
{
    int i,n;
    printf("enter the number of parking lots\n");
    scanf("%d",&n);
  {
    int a[n];
    for(i=0;i<n;i++)
        {
            a[i]=0;
        }
     
     loop(a,n);
  }
}
