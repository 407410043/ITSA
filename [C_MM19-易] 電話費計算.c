#include<stdio.h>  
int main(){  
		int i;  
		double j;  
		while(scanf("%d",&i)!=EOF){  
				j=0.9*i;  
				if(i<=800)  
						j=j;  
				if(i>800&&i<1500)  
						j=j*0.9;  
				if(i>=1500)  
						j=j*0.79;  
				printf("%.1f\n",j);  
		}  
		return 0;  
}  
