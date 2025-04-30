#include<stdio.h>
int main(){
	int a[10],b[10];
	for(int i=0;i<10;i++)
	{
		printf("enter %d number",i+1);
	scanf("%d",&a[i]);
	}
	int i=0;
	for(int j=9;j>=0;j--){
		b[j]=a[i];
	i++;
	}
	for(int j=0;j<10;j++){
		printf("\nvalue of j %d",b[j]);
	}
}

