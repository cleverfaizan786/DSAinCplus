#include<iostream>
using namespace std;
void willItUpdate(int n) {
n++;
cout<<"Value of n is:"<<n<<endl;




}


int main(){

int n;
cin>>n;

willItUpdate(n);

//n value doesn't get incremented as only copy of n gets created in willItUpdate function.

cout<<"Value of n is"<<n<<endl;







	return 0;






}
