#include<iostream>
using namespace std;
int add(int a,int b){
    return a+b;
}
int add(int a,int b,int c){
    return a+b+c;
}
int main(){
    cout<<"addition of two nos is="<<add(5,6)<<endl;
    cout<<"addition of three nos is="<<add(5,6,7);
    return 0;
}
