#include<iostream>
using namespace std;
int main(){
	int i,j,n=5;
	for(i=0;i<=n-1;i++){	
	for(j=n;j>i;j--){
	cout<<" ";
	}	
	for(j=0;j<i-1;j++){
	cout<<"*";
	}
	for(j=0;j<i;j++){
	cout<<"*";
	}
	cout<<"\n";	
	}
	for(i=0;i<=n;i++){	
	for(j=0;j<i;j++){
	cout<<" ";
	}	
	for(j=n;j>i+1;j--){
	cout<<"*";
	}	
	for(j=n;j>i;j--){
	cout<<"*";
	}
	cout<<"\n";	
	}
	return 0;
}
