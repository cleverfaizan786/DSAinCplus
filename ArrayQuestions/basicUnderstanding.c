#include<iostream>
using namespace std;

void updateArray(int arr[], int size){
arr[0]=120;
for(int i=0; i<size; i++) {
cout<<arr[i]<<" ";

}
cout<<"Going back to main function"<<endl;
//The 'arr' name specifies its name and its first element is actually address of it. hence it is very similar to pass by reference.

}





int main() {



int size=3;



int arr[100]={1,2,3};
//Never specify variable size or the size that we are taking input from user.

updateArray(arr, size);

cout<<"Entered into main function"<<endl;
for(int i=0; i<size; i++){
cout<<arr[i]<<" ";

}
cout<<endl;
























	return 0;

}
