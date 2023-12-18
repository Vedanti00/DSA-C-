#include<iostream>
using namespace std;

int LinearSearch(int arr[],int n, int findNo){

	for(int i=0;i<n;i++){
		if(findNo == arr[i]){
            return i+1;
        }
	}
    return -1;

}


int main(){

	int arr[] = {2,8,4,3,7,9,5,6};

	int n = sizeof(arr)/sizeof(int);

    int findNo;
    cout<<"Enter number to find ";
    cin>>findNo;
	
	int position = LinearSearch(arr,n,findNo);

    if(position != -1){
        cout<<"Element at position "<<position;
    } else{
        cout<<"Element not found";
    }

	return 0;
}

// Best Case: O(1)
// Worst Case: O(N)
// Average Case: O(N)
