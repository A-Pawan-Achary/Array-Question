#include<stdio.h>

int main(){
	int arr[50],n,key,i,j;
	printf("Enter the size of array:");
	scanf("%d",&n);
	printf("Enter the elements into array:");
	for(int i=0; i<n; i++){
		scanf("%d",&arr[i]);
	}
	for(i=1; i<n; i++){
		key=arr[i];
        j=i-1;
	
	while(j>=0 && key<arr[j]){
		arr[j+1]=arr[j];
		j++;
	}
	arr[j+1]=key;
	}
	for(i=0; i<n; i++)
		printf("%d\t",arr[i]);
	    return 0;
}