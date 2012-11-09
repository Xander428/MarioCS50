#include <stdio.h>
#include <cs50.h>

int main (void)
{
    
    
    printf("How high would you like your pyramid? ");
    int h = GetInt();
    
    int s=(h-1);
    int x=(h-s);
   
   if (h>23)
     {
     printf("That number is too high!");
     }
   else
   
          for (s; s==0; --s);
        {
            printf(" ");
                
          for (x; x==h; x++);
          
            printf("#");
            
            printf("\n");
        }
    
    return 0;
}
    
