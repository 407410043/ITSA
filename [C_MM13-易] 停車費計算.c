#include<stdio.h>  
int main(){  
		int i,j,k,l,m,a;  
		scanf("%d %d",&i,&j);  
		k=i*60+j;  
		scanf("%d %d",&i,&j);  
		l=i*60+j;  
		m=l-k;  
		a=m/30;  
		if(a<=4){  
				printf("%d\n",a*30);  
		}  
		if(a>4&&a<=8){  
				printf("%d\n",120+(a-4)*40);  
		}  
		if(a>8){  
				printf("%d\n",120+160+(a-8)*60);  
		}  
		return 0;  
}  
