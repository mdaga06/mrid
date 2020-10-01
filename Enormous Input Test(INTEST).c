// problem link:- https://www.codechef.com/problems/INTEST
#include <stdio.h> 
int main() { int n,k,i;
int c=0;
long long int t;
scanf("%d%d",&n,&k);
for (i=0 ; i<n;i++)
{scanf("%d",&t);
if(t%k==0)
c=c+1;
else
c=c;
}
printf("%d",c); 
	return 0;
}

