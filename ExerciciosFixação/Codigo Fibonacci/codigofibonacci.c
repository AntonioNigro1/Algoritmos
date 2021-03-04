#include<stdio.h>

int main()
{
   int n, fab1=0,fab2=1,fab=0,i=0;

   printf("Digite o numero de termos q a sequencia tera \n");
   scanf("%d",&n);

   printf("Os primeiros %d numeros da sequencia fibonacci sera:\n",n);

   for (i = 0 ; i <= n ; i++ )
   {
      printf("%d ",fab1);
   fab  = fab1+fab2;
   fab1 = fab2;
   fab2 = fab;
   }
      

   return 0;

}