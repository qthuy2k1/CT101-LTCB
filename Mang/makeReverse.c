#include <stdio.h>


void makeReverse(int A[], int n){
	int i;
	for(i = 0; i < n/2; i++){
		int temp = A[i];
		A[i] = A[n-i-1];
		A[n-i-1] = temp;
	}
}

int main(){
	int A[]={1,2,3,4};
int i;
int n = sizeof(A)/sizeof(int);
for(i=0;i<=n-1;i++)
    printf("%d ",A[i]);
printf("\n");
makeReverse(A,n);
for(i=0;i<=n-1;i++)
    printf("%d ",A[i]);
}
