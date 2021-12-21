#include<iostream>
using namespace std;


int main(){
int n;
cout<<"Enter a number"<<endl;
cin>>n;

int r100,r50, r20, r1;

switch (1){
	
	case 1: r100=(n/100);
       	cout<<"100 rupeee are"<<(r100) <<"notes"<<endl;
		n=(n-r100*100); // n=30

		
	case 2: r50=(n/50);
	       	cout<<"50 rupee are"<<(r50)<<"notes"<<endl;
		n=(n-r50*50); //n=30
	

        case 3: r20=(n/20);
	       	cout<<"20 rupee"<<(r20)<<"notes"<<endl;
	     n=(n-r20*20); //n=10	

	     
	case 4:r1=n;
	     cout<<"1 rupee"<<(r1)<<"notes"<<endl;
	       break;

	default: cout<<"Enter valid details"<<endl;
		 break;


}



return 0;




}
