#include <stdio.h>

int main(){
   int n, inverse = 0, a, b;

   printf("entré un nombre: ");
   scanf("%d", &n);
   b = n;
    for (int i=0;n != 0;i++){
       a = n % 10;
       inverse = inverse * 10 + a;
       n /= 10;
   }
   if (b == inverse)
       printf("%d est un palindrome.\n", b);
   else
       printf("%d ,'est pas un palindrome.\n", b);

   return 0;
}
