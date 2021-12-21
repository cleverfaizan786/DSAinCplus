#include<iostream>
using namespace std;
void nthFibo() {
int n;
cout<<"Enter a number:"<<endl;
cin>>n;

int firstTerm=0;
int secondTerm=1;
int sum=0;
cout<<firstTerm<<" "<<secondTerm<<" ";

for(int i=1; i<n; i++) {

sum=firstTerm+secondTerm;
cout<<sum<<" ";

firstTerm=secondTerm;
secondTerm=sum;


}





}



int main() {

nthFibo();





	return 0;




}
