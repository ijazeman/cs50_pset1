#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    printf("Number:");
   long long cnum = get_long_long();
    
    long long cnum1 = cnum;
    
    int a = 1,sum =0, b , z;
   
    int checksum=0;
    
    while(cnum1 != 0)
    {
        if(a % 2 == 0)
        {
            b = cnum1 % 10;
            sum += (b*2);
            while(sum != 0)
            {
                int c = sum %10;
                checksum += c;
                sum /= 10;
                
            }
            
        }
        cnum1 /= 10;
       
        a++;
    }
    cnum1 = cnum; 
    a =1;
    while(cnum1 != 0)
    {
        if(a% 2 != 0)
        {
            b = cnum1 % 10;
            checksum += b;
        }
        cnum1 /= 10;
        a++;
    }
    cnum1 = cnum;
    if((checksum % 10 )==0)
    {
        int dig = 0;
        while(cnum1 != 0)
        {
            cnum1 /= 10;
            dig++;
            if((cnum1 / 100) == 0)
            {
                  
                
                z =(cnum1 % 100);
                
                if( (z == 51) || (z == 52) || (z == 53) || (z == 54) || (z ==55))
                {
                    dig += 2;
                    if(dig == 16)
                    {
                     printf("MASTERCARD\n");
                     return 0;
                    }
                }
                else if((z ==34) || (z == 37))
                {
                    dig += 2;
                    if(dig == 15)
                    {
                      printf("AMEX\n");
                      return 0;
                    }
                }
                else if((cnum1 / 10) == 0)
                {
                  
                  z =(cnum1 % 10);
                  if(z == 4)
                  {
                      dig += 1;
                      if((dig == 16) || (dig == 13))
                      {
                        printf("VISA\n");
                        return 0;
                      }
                  }
                
                }   
               
            }
         
        }
    }
       printf("INVALID\n");
    
    return 0;
}