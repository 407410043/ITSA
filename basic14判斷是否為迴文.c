#include <stdio.h>  
#include <string.h>  
int main(){  
		char a[105];  
		int i,l;  
		while(scanf("%s",a)!=EOF){  
				l=strlen(a);  
				for(i=0;i<l/2;i++){  
						if(a[i]!=a[l-i-1]){  
								printf("NO\n");break;              }  
				}  
				if(i>=l/2) printf("YES\n");  
		}  
		return 0;  
}  
