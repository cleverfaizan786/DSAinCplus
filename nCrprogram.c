#include<iostream>
using namespace std;
int factorial(int a) {

int facto=1;

for(int i=1; i<=a; i++) {

facto=facto*i;


}
return facto;

}



int main() {



int n;
cout<<"Enter value of n in nCr:"<<endl;
cin>>n;

int r;
cout<<"Enter r value in nCr"<<endl;
cin>>r;

int ans=factorial(n)/(factorial(n-r)*factorial(r));
cout<<ans<<endl;









	return 0;


}
