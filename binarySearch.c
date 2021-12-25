#include<iostream>
using namespace std;
int binarySearch(int arr[], int n, int key){

int st=0;
int end=n;


int mid=st+(end-st)/2;
while(st<=end){
if(arr[mid]==key){

return mid;
}
else if(arr[mid]>key){
return end=mid-1;
}
else{
return st=mid+1;
}
}







return -1;
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

cout<<binarySearch(arr,n,key);
	return 0;

}
