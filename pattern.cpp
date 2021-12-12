#include<iostream>
using namespace std;

int main(){


int n;
cin>>n;

int i=1;

/* Printing ***** pattern line by line
while(i<=n){
//starting to print number at row 1 i.e i=1
int j=1;
while(j<=n){
cout<<i;
j++;
}
cout<<endl;
i++;
}
*/

/*
 Printing 1  2 3 
        1 2  3

while(i<=n){
int j=n;

while(j>=1){

cout<<j;	
j--;
}
cout<<endl;
i++;
}
*/

/* Printing pattern of 1,2,3,4,5 etc
int sum=1;
while(i<=n){
int j=1;

while(j<=n){

cout<<sum<<" ";
sum++;
j++;
}

cout<<endl;

i++;
}

*/

/*
Triangle star pattern
while(i<=n){
int j=1;
while(j<=i){

cout<<"*"<<" ";
j++;

}
cout<<endl;
i=i+1;
}
*/
/*
int count=1;

while(i<=n){

int j=1;
while(j<=i){
cout<<count<<" ";
count++;
j++;
}
cout<<endl;
i++;
}

*/

/*
 Reverse Order pattern.
while(i<=n){

int j=1;
while(j<=i){
cout<<i-j+1;
j++;
}


cout<<endl;



i++;
}
*/

/*
 Printing ABCD Pattern
while(i<=n){
int j=1;

while(j<=n){
char ch='A'+i-1;
cout<<ch<<" ";
j++;

}
cout<<endl;
i++;
}
*/

/*
 ABC pattern
while(i<=n){
int j=1;
while(j<=n){
char ch='A'+j-1;
cout<<ch<<" ";
j++;
}
cout<<endl;
i++;
}

*/

/*
 Another Pattern of ABC
int count=1;

for(int i=1; i<=n; i++){
for(int j=1; j<=n; j++){
char ch='A'+count-1;
cout<<ch<<" ";

count++;
}
cout<<endl;

}

*/

/*
Prints 1 2 3
       2 3 4
       3 4 5
while(i<=n){
int j=1;
while(j<=n){
cout<<i+j-1<<" ";

j++;
}
cout<<endl;
i++;
}

*/

/*
//ABC pattern based on above.
while(i<=n) {
int j=1;
while(j<=n){
char ch='A'+i+j-2;
cout<<ch<<" ";

j++;
}
cout<<endl;
i++;
}

*/

/*
//Traingular ABC pattern
while(i<=n){
int j=1;
while(j<=i){
char ch='A'+i-1;
cout<<ch<<" ";

j++;
}
cout<<endl;
i++;
}
*/

//Triangular ABC pattern-2
/*
int count=1;
for(int i=1; i<=n; i++){
for(int j=1; j<=i; j++){
char ch='A'+count-1;
cout<<ch<<" ";
count++;


}
cout<<endl;

}
*/
/*
 Number pattern:
 5
 5 4
 5 4 3
 5 4 3 2
 5 4 3 2 1
int count=n;
for(int i=1; i<=n; i++){
for(int j=1; j<=i; j++){
cout<<count-j+1<<" ";

}

cout<<endl;


}
*/
/*
Pattern:
5
4 5
3 4 5
2 3 4 5
1 2 3 4 5
int count=n;
for(int i=1; i<=n; i++){
for(int j=1; j<=i; j++){
cout<<count-(i-j)<<" ";



}
cout<<endl;
}

*/

//Traingular Pattern of ABC-3
//Pattern: D
//         C D
//         B C D
//         A B C D
/*
int count=n;
for(int i=1; i<=n; i++){
for(int j=1; j<=i; j++){
char ch='A'+count-(i-j)-1;
cout<<ch<<" ";

}
cout<<endl;
}
*/

/*
Pattern: *
        **
       ***
      **** 
for(int i=1; i<=n; i++){
for(int j=n-i; j>=1; j--){
cout<<" ";
}

for(int k=1; k<=i; k++){
cout<<"*";
}
cout<<endl;
}
*/


/*
 * Prints:
 *****
 ****
 ***
 **
 *
for(int i=n; i>=1; i--){
for(int j=i; j>=1; j--){
cout<<"*";
}

cout<<endl;
}
*/

/*
 Tough Pattern
 *****
  ****
   ***
    **
     *
for(int i=1; i<=n; i++){
for(int j=1; j<=i-1; j++){
cout<<" ";
}
for(int k=n-i+1; k>=1; k--){
cout<<"*";

}
cout<<endl;
}
*/
return 0;
}
