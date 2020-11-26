#include <stdio.h>
#include <math.h>

int main()
{
   float a, b, c;

   printf("Podaj wartosc a: ");
   scanf("%f", &a);
   printf("Podaj wartosc b: ");
   scanf("%f", &b);
   printf("Podaj wartosc c: ");
   scanf("%f", &c);

   if((a>0)&&(b>0)&&(c>0))
      {
         if((a+b)>c)
         {
            if((a+c)>b)
            {
               if((b+c)>a)
               {
                  printf("\nTrojkat istnieje");
               }
               else
               {
                  printf("\nTrojkat nie istnieje");
               }
            }
            else
            {
               printf("\nTrojkat nie istnieje");
            }
         }
         else
         {
            printf("\nTrojkat nie istnieje");
         }
      }
   else
      {
       printf("\nBledne dane!");
      }

   return 0;
}
