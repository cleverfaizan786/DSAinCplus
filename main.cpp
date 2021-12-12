#include<iostream>
using namespace std;


int main() {


//Program to print sum of even numbers

int n;
cin>>n;
int i=2;
int sum=0;

while(i<=n){

sum+=i;
i+=2;
}
cout<<sum<<endl;


return 0;




}
