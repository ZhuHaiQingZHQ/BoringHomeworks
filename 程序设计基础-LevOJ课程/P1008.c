#include<stdio.h>
int main(){
	int n,i;
	while(scanf("%d",&n)==1){
		for(i=2;i<=n/2;i++)
			if(n%i==0){printf("No\n");goto no;}
		printf("Yes\n");
		no:;
	}
	return 0;
}
