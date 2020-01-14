#include<stdio.h>  
int main(){  
		int n;  
		double i;  
		double j;  
		while(scanf("%d",&n)!=EOF){  
				if(n<=120){  
						i=n*2.10;  
						j=n*2.10;  
						printf("Summer months:%.2f\n",i);  
						printf("Non-Summer months:%.2f\n",j);  
				}  
				if(n>=121&&n<=330){  
						i=120*2.10+(n-120)*3.02;  
						j=120*2.10+(n-120)*2.68;  
						printf("Summer months:%.2f\n",i);  
						printf("Non-Summer months:%.2f\n",j);  
				}  
				if(n>=331&&n<=500){  
						i=886.2+(n-330)*4.39;  
						j=814.8+(n-330)*3.61;  
						printf("Summer months:%.2f\n",i);  
						printf("Non-Summer months:%.2f\n",j);  
				}  
				if(n>=501&&n<=700){  
						i=1632.5+(n-500)*4.97;  
						j=1428.5+(n-500)*4.01;  
						printf("Summer months:%.2f\n",i);  
						printf("Non-Summer months:%.2f\n",j);  
				}  
				if(n>=701){  
						i=2626.5+(n-700)*5.63;  
						j=2230.5+(n-700)*4.50;  
						printf("Summer months:%.2f\n",i);  
						printf("Non-Summer months:%.2f\n",j);  
				}  
		}  
		return 0;  
}  
