/// week11-3.cpp Selection Sort
#include <stdio.h>
int main(){
	int a[10]={9,8,7,6,5,4,3,2,1,0}; ///陣列 
	for (int k=0;k<10;k++) printf("%d ",a[k]);
	printf("\n");
	for (int i=0;i<10;i++) {///左手i 
		for (int j=i+1;j<10;j++) {///右手j 
			if (a[i]>a[j]){///左手i vs 右手j
				int t=a[i];///大小不對,就交換 
				a[i]=a[j];
				a[j]=t;
			}
		}
	///排到一半,印出來 
	for (int k=0;k<10;k++) printf("%d ",a[k]);
	printf("\n");
	}
} 
