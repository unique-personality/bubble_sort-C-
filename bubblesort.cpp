#include<iostream>
using namespace std;


void bubblesort(int arr[],int size) {
	for (int i=0; i<size; i++) {
		for(int j=0; j<size-i; j++) {
			if(arr[j]>arr[j+1]) {
				int temp=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=temp;

			}
		}
	}
}
//print array

void print(int arr[],int n) {
	for(int i=0; i<n; i++) {
		cout<<" "<<arr[i];
	}
	cout<<"\n";
}

int main() {
	int arr[400];
	int n;
	printf("enter the size of array:");
	scanf("%d",&n);
	printf("enter the elements of array:");
	for (int i=0; i<n; i++) {
		scanf("%d",&arr[i]);
	}

	bubblesort(arr,n);
	cout<<"sorted array in ascending order\n"<<endl;
	print(arr,n);
}