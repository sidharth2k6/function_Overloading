#include<iostream>
#include<string>
using namespace std;

class Overloading{
public:
    void printline(char ch = '*', int n = 10){
        int i;
        for(i = 0; i < n; i++){
            cout << ch;
        }
        cout << endl;
    }
    void sum(int a, int b){
        cout << "Sum of " << a << " + " << b << " = " << a + b << endl;
    }
    void sum(int a, double b){
        cout << "Sum of " << a << " + " << b << " = " << a + b << endl;
    }
    void sum(double a, int b){
        cout << "Sum of " << a << " + " << b << " = " << a + b << endl;
    }
    void sum(double a, double b){
        cout << "Sum of " << a << " + " << b << " = " << a + b << endl;
    }
};

int main(){
    Overloading obj;
    obj.sum(3, 4);
    obj.sum(3, 4.3);
    obj.sum(3.4, 4);
    obj.sum(3.4, 4.3);
    obj.printline();
    obj.printline('-');
    obj.printline('+', 5);
    return 0;
}