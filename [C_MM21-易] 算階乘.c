#include<stdio.h>      
int main(){      
		int i,a;      
		long long int j=1;      
		while(scanf("%d",&i)!=EOF){      
				if(i==0||i==1){      
						j=1;      
				}      
				else{      
						for(a=2;a<=i;a++){      
								j=j*a;      
						}      
				}      
				printf("%lli\n",j);      
				j=1;      
		}      
		return 0;      
}  
