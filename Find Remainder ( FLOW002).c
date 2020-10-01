// problem link:- https://www.codechef.com/problems/FLOW002
#include <stdio.h> 

int main(){int i,t,a,b,c;
scanf("%d",&t);
for(i=0;i<t;i++){
scanf("%d%d",&a,&b);
c=a%b;
printf("%d\n",c);
c=0; 
}

	return 0;
}