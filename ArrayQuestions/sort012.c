#include<iostream>
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
		else if(arr[right]==2){
			right--;
		}

		else if(arr[left-1]>0 and arr[left+1]<2){
			  left++;
		}

		else if(arr[right-1]>0 and arr[right+1]<2){
			  right--;
		}

		else if(arr[left]==2 and arr[right]==0){
			  swap(arr[left], arr[right]);
			    left++;
			      right--;
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
