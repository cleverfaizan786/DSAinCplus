#include <iostream>
using namespace std;

int main() {
	  int n;
	    cin>>n;

	      int arr[n];

	        for(int i=0; i<n; i++){
			    cin>>arr[i];
			      }
		  for(int i=1; i<n; i++){
			      int temp=arr[i];
			          int j=i-1;
				      for(; j>=0; j--){
					            if(arr[j]>temp){
							            arr[j+1]=arr[j];
								          }
						          else{
								          break;
									        }
							      }
				          arr[j+1]=temp; // In an example, if we are comaring 4 with 1 then 4 should be at the right side of 1  
					    }
		  for(int i=0; i<n; i++){
			      cout<<arr[i]<<' ';
			        }


} 
