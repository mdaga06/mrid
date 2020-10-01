// problem link:- https://www.codechef.com/problems/HS08TEST
#include <stdio.h>
int main(void) {
    int wish;
    double amount,rest;
    scanf("%d%lf",&wish,&amount);
    if(wish%5==0)
    { if(wish<amount && (wish+0.5)<=amount)
   { rest=amount-wish-0.5;
    printf("%lf",rest);
   }
   else
   printf("%lf",amount); 
    }
    else
    printf("%f",amount); 
	return 0;
}

