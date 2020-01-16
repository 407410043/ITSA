#include<stdio.h>  
int main(){  
		int i,j,k,l,m;  
		while(scanf("%d",&i)!=EOF){  
				j=i/100;  
				k=(i%100)/10;  
				l=((i%100)%10);  
				m=(j*j*j)+(k*k*k)+(l*l*l);  
				if(i==m){  
						printf("Yes\n");  
				}  
				else printf("No\n");  
		}  
		return 0;  
}  
