#include<stdio.h>

int main () {

    float a , b; 
    printf("First Number = "); 
    scanf("%f", &a); 

    printf("Given first number is equal to %f \n", a);

    printf("Second Number = "); 
    scanf("%f", &b);

    printf("Given Second number is %f \n", b);

    int addition = 1; 
    int substraction = 2;
    int multiplication =  3;
    int division = 4; 

    printf("Choose the serial number of the operation to operate.\n");
    printf("1.Addition \n2.Substraction\n3.Multiplication\n4.Division ");

    scanf("%d", &addition, &substraction, &multiplication, &division);  

    
    if (addition<substraction<multiplication<division)
    {
      if (addition<substraction)
         { 
           printf("Therefore, The sum of these two given numbers = %f \n", a + b);
         }
     else
         {
          printf("Therefore, The Difference of these two given numbers = %f \n", a - b);
         }
   }
   if (multiplication<division)
   {
      {
       printf("Therefore, The Quotient of these two given numbers = %f \n", a / b);
      }
   }

   else
      {
       printf("Therefore, The multiple of these two given numbers = %f \n", a * b);
      }
           
      
       return 0; 
    }
    /*  else if (multiplication<division)
         {
          printf("Therefore, The Quotient of these two given numbers = %f \n", a / b);
         }
        else
        {
         printf("Therefore, The multiple of these two given numbers = %f \n", a * b);
        }
    */     
      
      
   /* if (multiplication<division)
     {
      if (multiplication<division)
    {
       printf("Therefore, The Quotient of these two given numbers = %f \n", a / b); 
    }
    else
    printf("Therefore, The multiple of these two given numbers = %f \n", a * b);
     }
  */

  /*  if (multiplication<division)
    {
       printf("Therefore, The Quotient of these two given numbers = %f \n", a / b); 
    }
    else
    printf("Therefore, The multiple of these two given numbers = %f \n", a * b);
  */



    //int c , d; 

  /*printf("Therefore, The sum of these two given numbers = %f \n", a + b);
    printf("Therefore, The difference of these two given numbers = %f \n", a - b);
    printf("Therefore, The multiple of these two given numbers = %f \n", a * b);
    printf("Therefore, The division of these two given numbers = %f \n", a / b);
 */
   