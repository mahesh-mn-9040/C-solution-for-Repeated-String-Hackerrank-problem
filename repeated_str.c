#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char s[100];
    long int n,x;
    int k=97;
    
    gets(s);
    scanf("%ld",&n);
    int size= strlen(s);
    int count=0;
    for(int i=0;s[i]!='\0';i++)
    {
      if(s[i]==k)
      { 
          count++;
      }   
    }
    
    x=n; //for repeated part
    x=x/size;
    x=x*count;
    
    //now for remaining part
    n=n%size;
    
    for(int j=0;j<n;j++)
      {
          if(s[j]==k)
          {x++;}
      }
    
    printf("%ld",x);
}

