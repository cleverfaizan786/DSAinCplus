#include <bits/stdc++.h>
using namespace std;
void merge(int arr1[], int n, int arr2[], int m, int arr3[]){

	int i=0,j=0;
	int k=0; //To track third array index
	while(i<n and j<m){
		  if(arr1[i]>arr2[j]){
			         arr3[k]=arr2[j];
				     
				     k++;
				         j++;

					   }
		    else{
			        arr3[k]=arr1[i];
				  
				    k++;
				          i++;
					    }

	}

	//Copying into third array, if first array has more elements to merge
         while(i<n){
	  arr3[k]=arr1[i];
	   
	     k++;
	        i++;
	        }
	        //Copying into third array, if second array has more elements to merge
	        while(j<m){
	          arr3[k]=arr2[j];
	           
	             k++;
	                j++;
	                }
                 }
	
	                int main() {
	                 int arr1[6]={1,3,5,7,9,2};
	                  int arr2[3]={2,4,6};
                   int arr3[8]={0};
	
	                   merge(arr1,6,arr2,3,arr3);
	
	                   for(int i=0; i<8; i++){
	                     cout<<arr3[i]<<" ";
	                     }
	                     cout<<endl;
	                       } 
