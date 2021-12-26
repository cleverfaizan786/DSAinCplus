#include<iostream>
using namespace std;
int firstMatch(int arr[], int n, int key){

	int st=0;
	int end=n;
	int ans=-1;
	int mid=st+(end-st)/2;
	while(st<=end){
		if(arr[mid]==key){
			ans=mid;

			end=mid-1;
		}
		else if(arr[mid]>key){
			 end=mid-1;
		}
		else{
			   st=mid+1;
		}
		mid=(st+end)/2;
	}







	return ans;
}

int secondMatch(int arr[], int n, int key){

	int st=0;
	int end=n;
	int ans=-1;
	int mid=st+(end-st)/2;
	while(st<=end){
		if(arr[mid]==key){
			ans=mid;

			st=mid+1;
		}
		else if(arr[mid]>key){
			 end=mid-1;
		}
		else{
			   st=mid+1;
		}
		mid=(st+end)/2;
	}







	return ans;
}

int main() {

	int n;
	cin>>n;
	int key;
	cin>>key;

	int arr[100];

	for(int i=0; i<n; i++){
		cin>>arr[i];

	}

	cout<<firstMatch(arr,n,key)<<endl;
	cout<<secondMatch(arr, n, key)<<endl;
		return 0;

}
