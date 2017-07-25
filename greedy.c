#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <math.h>
int main()
{
 
 float amount ;
 int change, rem1,rem2,rem3;
     do{
         printf("O hai! How much change is owed?  ");
         amount = get_float();
       }
     while(amount<=0);
 
 change = (int) round(amount*100);

 
 int coins = 0;
 
 while(change >0)
 {
    
    rem1 = change %25;
    rem2 = change %10;
    rem3= change %5;
       
     if( rem1 != change || rem1 == 0)
     {
         coins = coins+ (change/25);
         change = rem1;
         
     }
     else if(rem2 != change || rem2 == 0)
     {
         coins = coins+ (change/10);
         change =rem2;
     }
     else if(rem3 != change || rem3 == 0)
     {
          coins = coins+ (change/5);
         change =rem3;
     }
     else
     {
         coins++;
         change -= 1;
     }
     
 }
 printf("%i\n", coins);
 
 return 0;
}