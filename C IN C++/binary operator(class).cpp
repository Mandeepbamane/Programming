#include<iostream>
using namespace std;
class demo{
    int a,b;
    public:
        demo(){
            
        }
        demo(int x,int y){
            a=x;
            b=y;
        }
        void show(){
            cout<<"the result"<<a<<"add"<<b<<endl;
        }
        demo operator+(demo &ref){
            demo temp;
            temp.a=a+ref.a<<endl;
            temp.b=b+ref.b;
        return temp;
        }
};
int main(){
    demo obj1(10,30),obj2(50,40),obj3;
    demo obj4(50,30),obj5(90,40),obj6;
    obj3=obj1+obj2;
    obj3.show();
    obj6=obj4+obj5;
    obj6.show();
}
