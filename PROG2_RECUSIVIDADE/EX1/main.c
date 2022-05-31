#include <stdio.h>

int main() {
   int n, valor = 50;
   int seqFibonacci[valor];
	 for (n = 0; n < valor; n++) {
         if(n == 0 || n== 1){
             seqFibonacci[n] = n;
         }else{
             seqFibonacci[n] = seqFibonacci[n-1] + seqFibonacci[n-2];
         }
         printf("%d ", seqFibonacci[n]);
   }
}
