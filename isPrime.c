#include<iostream>
using namespace std;
bool isPrime(int a){

for(int i=2; i<a; i++){
if(a%i==0){
return 0;
break;

}


}
return 1;




}



int main() {

int n;

cout<<"Enter a number: "<<endl;

cin>>n;

cout<<(isPrime(n)==0 ? "Not Prime" : "Prime")<<endl;
















	return 0;


}
