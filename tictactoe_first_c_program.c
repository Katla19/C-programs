#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void print(char*e);
int* ran(int*f);
void comp(char*e,int*f,int p);
void check(char*e,int*f,int k,int p,int m);
void p1(char*e,int*f,int p,int m);
void repeat();
void p2(char*e);
void p2(char*e)
{
  char a[9];
  int l,i,b; 
  printf("\nplayer one\n");
  printf("\nenter the number\n");
  scanf("%d",&l);
  for(i=0;i<9;i++)
              {
                a[i]=*(e+i);
              }
  if(*(e+(l-1))!='_')
    {
      printf("that was already filled enter another number\n");
      print(a);
      p2(a);
    } 
  *(e+(l-1))='X';
  for(i=0;i<9;i++)
              {
                a[i]=*(e+i);
              }
  if((e!='_')&&(*e==(e+1))&&(e==(e+2))||(e!='_')&&(*e==(e+3))&&(e==(e+6))||(e!='_')&&(*e==(e+4))&&(e==(e+8))||((e+4)!='_')&&((e+4)==(e+1))&&((e+4)==(e+7))||((e+4)!='')&&((e+4)==(e+3))&&((e+4)==(e+5))||((e+4)!='_')&&(')&&(*(e+4)==(e+2))&&((e+4)==(e+6))||((e+8)!='')&&((e+8)==(e+1))&&((e+8)==(e+2))||((e+8)!='_')&&(')&&(*(e+8)==(e+2))&&((e+8)==*(e+5)))
    { 
     print(a);
     printf("player 1 won\n");
     printf("\n\nif want to continue type 1 or 0 to exit\n");
     scanf("%d",&l);
     if(l==1)
          {
              repeat();        
          }
      exit(0);
                   
  }
  for(i=0;i<9;i++)
  {
    a[i]=*(e+i);
  }
  print(a);
  check(a,b,1,1,1);
}
void repeat()
{
char a[9];
  int i,b[9],*f,m;
  printf("\n\nTIC.TAC.TOE\n\n");
  printf("\n\nsingleplayer-1\n\nmultiplayer-0\n\n\n");
  scanf("%d",&m);
  if(m==1)
  {
  f=ran(b);
  for(i=0;i<9;i++)
  {
    b[i]=*(f+i);
    a[i]='_';
  }
  comp(a,b,0);
  }
  else{
         for(i=0;i<9;i++)
            {
                b[i]=*(f+i);
                a[i]='_';
             }
         print(a);
         p2(a);
      }
}
void p1(char*e,int*f,int p,int m)
{ 
  char a[9];
  int b[9];
  int l,i;
  if(m==1)
  {
    printf("enter the number\n");
    scanf("%d",&l);
    for(i=0;i<9;i++)
              {
                a[i]=*(e+i);
                b[i]=*(f+i);
              }
    if(*(e+(l-1))!='_')
      {
        printf("that was already filled enter another number\n");
        print(a);
        p1(a,b,p,m);
      } 
    *(e+(l-1))='O';
    for(i=0;i<9;i++)
    {
      a[i]=*(e+i);
      b[i]=*(f+i);
    }
    check(a,b,1,p,0);
    }
  else{
       printf("player 2\nenter a number\n");
       scanf("%d",&l);
       for(i=0;i<9;i++)
              {
                a[i]=*(e+i);
                b[i]=*(f+i);
              }
       if(*(e+(l-1))!='_')
          {
            printf("that was already filled enter another number\n");
            print(a);
            p1(a,b,p,m);
          } 
       *(e+(l-1))='O';
       for(i=0;i<9;i++)
              {
                a[i]=*(e+i);
              }
        if((e!='_')&&(*e==(e+1))&&(e==(e+2))||(e!='_')&&(*e==(e+3))&&(e==(e+6))||(e!='_')&&(*e==(e+4))&&(e==(e+8))||((e+4)!='_')&&((e+4)==(e+1))&&((e+4)==(e+7))||((e+4)!='')&&((e+4)==(e+3))&&((e+4)==(e+5))||((e+4)!='_')&&(')&&(*(e+4)==(e+2))&&((e+4)==(e+6))||((e+8)!='')&&((e+8)==(e+1))&&((e+8)==(e+2))||((e+8)!='_')&&(')&&(*(e+8)==(e+2))&&((e+8)==*(e+5)))
    { 
     print(a);
     printf("player 2 won\n");
     printf("\n\nif want to continue type 1 or 0 to exit\n");
     scanf("%d",&l);
     if(l==1)
          {
              repeat();        
          }
      exit(0);
                   
  }
       for(i=0;i<9;i++)
            {
                a[i]=*(e+i);
                b[i]=*(f+i);
            }
       print(a);
       p2(a);
  }
}
void check(char*e,int*f,int k,int p,int m)
{ 
  int l,i,b[9];
  char a[9];  
  if(m!=1)
  { 
    for(i=0;i<9;i++)
              {
                a[i]=*(e+i);
                b[i]=*(f+i);
              }    
    if((e!='_')&&(*e==(e+1))&&(e==(e+2))||(e!='_')&&(*e==(e+3))&&(e==(e+6))||(e!='_')&&(*e==(e+4))&&(e==(e+8))||((e+4)!='_')&&((e+4)==(e+1))&&((e+4)==(e+7))||((e+4)!='')&&((e+4)==(e+3))&&((e+4)==(e+5))||((e+4)!='_')&&(')&&(*(e+4)==(e+2))&&((e+4)==(e+6))||((e+8)!='')&&((e+8)==(e+1))&&((e+8)==(e+2))||((e+8)!='_')&&(')&&(*(e+8)==(e+2))&&((e+8)==*(e+5)))
    { 
      if(k==0)
      {
        print(a);
        printf("program won\n");
        printf("\n\nif want to continue type 1 or 0 to exit\n");
        scanf("%d",&l);
        if(l==1)
        {
          repeat();
        }
        exit(0);
      }
      else{    
               print(a);
               printf("you won\n");
               printf("\n\nif want to continue type 1 or 0 to exit\n");
               scanf("%d",&l);
               if(l==1)
                   {
                      repeat();
                   }
               exit(0);
          }
    }
    else{            
            for(i=0;i<9;i++)
              {
                a[i]=*(e+i);
                b[i]=*(f+i);
              }    
            if(k==0)
              {
                 if((e!='_')&&((e+1)!='_')&&((e+2)!='_')&&((e+3)!='_')&&((e+4)!='_')&&((e+5)!='_')&&((e+6)!='_')&&((e+7)!='_'))
                    {
                       printf("the game was a tie\n");
                       printf("\n\nif want to continue type 1 or 0 to exit\n");
                       scanf("%d",&l);
                       if(l==1)
                            {
                              repeat();
                            }
                       exit(0);
                    }
                p1(a,b,p,1);
              }
            else{
                  comp(a,b,p);
                }    
       }
 }
 else{             
               for(i=0;i<9;i++)
                 {
                    a[i]=*(e+i);
                 }   
               if(k==1)
               {
                 if((e!='_')&&((e+1)!='_')&&((e+2)!='_')&&((e+3)!='_')&&((e+4)!='_')&&((e+5)!='_')&&((e+6)!='_')&&((e+7)!='_'))
                    {
                       printf("the game was a tie\n");
                       printf("\n\nif want to continue type 1 or 0 to exit\n");
                       scanf("%d",&l);
                       if(l==1)
                            {
                              repeat();
                            }
                       exit(0);
                    }
                   p1(a,b,p,0);
                }
              else{
                     p1(a,b,p,0);
                  }    
         }
}
void comp(char*e,int*f,int p)
{
  int b[9],i;
  char a[9];
  for(i=0;i<9;i++)
  {
    a[i]=*(e+i);
    b[i]=*(f+i);
  }
  if((e+(f+p))!='_')
    {   
        p=p+1;
        comp(a,b,p);
    }
   (e+(f+p))='X';
  for(i=0;i<9;i++)
  {
    a[i]=*(e+i);
    b[i]=*(f+i);
  }
  print(a);
  check(a,b,0,p,0);
}
int* ran(int*f)
{
  int b[9],t,r,i;
  srand(time(0));
  for(i=0;i<9;i++)
   { 
      b[i]=i+1;
   }
  for(i=0;i<9;i++)
   {    
     t=b[i];
     r=rand()%9+1;
     b[i]=b[r];
     b[r]=t;
   }
   for(i=0;i<9;i++)
   {
     *(f+i)=b[i];
   }
   return(f);
}
void print(char*e)
{
  printf("   |   |\n");
  printf(" %c | %c | %c\n",e,(e+1),*(e+2));
  printf("_1|2|_3\n");
  printf("   |   |\n");
  printf(" %c | %c | %c\n",(e+3),(e+4),*(e+5));
  printf("_4|5|_6\n");
  printf("   |   |\n");
  printf(" %c | %c | %c\n",(e+6),(e+7),*(e+8));
  printf("  7|  8|  9\n");
  printf("\n\n\n");
}
void main()
{ 
  char a[9];
  int i,b[9],*f,m;
  printf("\n\nTIC.TAC.TOE\n\n");
  printf("\n\nsingleplayer-1\n\nmultiplayer-0\n\n\n");
  scanf("%d",&m);
  if(m==1)
  {
    f=ran(b);
    for(i=0;i<9;i++)
      {
        b[i]=*(f+i);
        a[i]='_';
      }
    comp(a,b,0);
  }
  else{ 
         for(i=0;i<9;i++)
            {
                a[i]='_';
             }
         print(a);
         p2(a);
      }
}
