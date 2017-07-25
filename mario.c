#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>

int main()
{
    int height=0;
    
    do
    {
        printf("Height:  ");
        height = get_int();
       
    }
    while(height <0 || height > 23);
  
    
    int space = height-1;
    int hash= 2;
    for(int i=1; i<=height; i++)
    {
        int space1 = space;
        int hash1 = 2;
        while(space >0 )
        {
            
            printf(" ");
            space--;
        }
        while(hash >0)
        {
            printf("#");
            hash--;
        }
        hash = hash1+i;
        space  = space1-1;
        printf("\n");
    }
    return 0;
    
}