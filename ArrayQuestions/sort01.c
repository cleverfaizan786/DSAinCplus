#include <iostream>
using namespace std;

int main() {

	int n;
	cin>>n;

	int arr[100];

	for(int i=0; i<n; i++){
		cin>>arr[i];

	}

	int left=0, right=n-1;



	while(left<right){

		if(arr[left]==0){
			left++;
		}

		else if(arr[right]==1){
			  right--;
		}

		else if(arr[left]==1 and arr[right]==0){

			swap(arr[left], arr[right]);
			right--;
			left++;
		}

		else{
			  break;
		}
	}

	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";

	}


	  return 0;
	   
} 
