#include<stdio.h>  
int main(){  
		int a,i,cnt;  
		while(scanf("%d",&i)!=EOF){  
				cnt=0;  
				printf("1");  
				for(a=1;a<=i;a++){  
						cnt=cnt+a;  
				}  
				for(a=2;a<=i;a++){  
						printf(" + %d",a);  
				}  
				printf(" = %d\n",cnt);  
		}  
		return 0;  
}  
