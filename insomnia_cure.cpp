#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,l,m,n,d,cnt,i;
	scanf("%d%d%d%d%d",&k,&l,&m,&n,&d);
	cnt=d;
	if(k==1||l==1||m==1||n==1)
	printf("%d\n",cnt);
	else{
		for(i=1;i<=d;i++){
			if((i%k != 0) && (i%l != 0) && (i%m != 0) && (i%n != 0)){
				cnt--;
			}
		}
	printf("%d\n",cnt);
	}
	return 0;
    
}