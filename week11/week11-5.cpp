// week11-5.cpp YEH021_sort_100
#include <stdio.h>
int main(){
	int a[100];
	for (int i=0;i<100;i++){
		scanf("%d",&a[i]);
	}
	for (int k=0;k<100;k++){
		for (int i=k+1;i<100;i++){
			if (a[k]>a[i]){
				int t=a[k];
				a[k]=a[i];
				a[i]=t;
			}
		}
	}
	for (int i=0;i<100;i++){
		printf("%d ",a[i]);
	}
}	
