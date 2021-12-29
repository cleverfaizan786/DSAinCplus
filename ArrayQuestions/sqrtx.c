#include <iostream>
using namespace std;
long long int findSqrt(int n){
	int st=0,en=n, ans=0;
	long long int mid=(st+en)/2;

	while(st<=en){
		long long int square=mid*mid;
		  if(square==n){
			      return mid;
			        }
		  else if(mid*mid>n){
			   
			  en=mid-1;

		  }
		  else {
			     ans=mid;
			       st=mid+1;
		  }

		  mid=(st+en)/2;

	}

	return ans;


}
double precisedValue(int n,int sol, int precision){
	  double factor=1;
	    double ans=sol;
	      for(int i=1; i<=precision; i++){
		         factor=factor/10;
			    for(double j=sol; j*j<n; j+=factor){
				         ans=j;
					    }


			      }
	      return ans;
}

int main() {
	int n;
	cin>>n;

	cout<<findSqrt(n)<<endl;

	int tempSol=findSqrt(n);
	cout<<precisedValue(n,tempSol, 4); //Precised value





	  
} 
