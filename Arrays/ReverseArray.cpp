#include<iostream>
using namespace std;

void ReverseArray(int arr[], int n){
    int start=0;
    int end=n-1;
    int mid =start+end/2;

    for(int i=0; i<=mid; i++){
        swap(arr[i], arr[end-i]);
    }
    
    for(int i=0; i<n; i++){
        cout<<arr[i];
    }
}

int main(){

	int arr[] = {2,3,4,5,7};
	int n = sizeof(arr)/sizeof(int);
	
    for(int i=0; i<n; i++){
        cout<<arr[i];
    }
    cout<<endl;
	ReverseArray(arr,n);

	return 0;
}