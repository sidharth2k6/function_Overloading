#include<iostream>
#include<string>
using namespace std;

class Overloading{
public:
    void mul(int a, int b){
        cout << "Mul of " << a << " * " << b << " = " << a * b << endl;
    }
    void mul(int a, double b){
        cout << "Mul of " << a << " * " << b << " = " << a * b << endl;
    }
    void mul(double a, int b){
        cout << "Mul of " << a << " * " << b << " = " << a * b << endl;
    }
    void mul(double a, double b){
        cout << "Mul of " << a << " * " << b << " = " << a * b << endl;
    }
};

int main(){
    Overloading obj;
    obj.mul(2, 4);
    obj.mul(2, 4.8);
    obj.mul(2.4, 4);
    obj.mul(2.4, 4.8);
    
    return 0;
}