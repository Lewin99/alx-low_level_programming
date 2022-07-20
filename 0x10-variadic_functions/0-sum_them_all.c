#include <stdio.h>
#include <stdarg.h>

int sum_them_all(const unsigned int n,...)
{
    int sum=0;
    va_list args;
    va_start(args,n);  
 
    for(int a=0;a<n;a++)
    {
       sum+=va_arg(args,int);
        if(args==0)
       {
	       return 0;
      }
    }

    va_end(args);
      
    return sum;
}
