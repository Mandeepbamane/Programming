#include<iostream>
using namespace std;
class sample{
    int feet;
    float inches;
    public:
        sample(int a,float b){
            feet=a;
            inches=b;
        }
        operator float(){
            float f;
            f=inches/12;
            f=f+feet;     
            return(f/3.28);
        }
        void show(){
            cout<<"the feet"<<feet<<endl;
            cout<<"the inches"<<inches<<endl;
        }
};
int main(){
    sample s1(4,1.2);
    float m;
    m=s1;
    s1.show();
    cout<<"the conversion in meter"<<m;
    return 0;
}
