#include<iostream>
using namespace std;


int main() {

int arr[6];

for(int i=0; i<6; i++){
cin>>arr[i];
}

for(int i=0; i<6; i++) {
for(int j=0; j<i; j++){
if(arr[i]==arr[j]){
cout<<arr[i]<<endl;

}

}



}





	return 0;



}
