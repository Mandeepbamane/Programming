#include<iostream>
using namespace std;
int area(int l,int b){
    int area1=l*b;
    cout<<"area of rectangle is "<<area1<<endl;
}
float area(float r){
    float area2=3.14*r*r;
    cout<<"area of circle is "<<area2;
}
int main(){
    area(12,2); 
    area(3);
}
