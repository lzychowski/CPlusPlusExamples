// Example program
#include <iostream>
#include <string>

using namespace std;

class Auto
{
public:
    Auto();
    const Auto& operator=(const Auto&);
    void setValues(int, int);
    int getA();
private:
    int a;
    int b;
} x, y;

Auto::Auto(void){

}

void Auto::setValues(int x, int y){
    a = x;
    b = y;
}

int Auto::getA(){
    return a;
}

const Auto& Auto::operator=(const Auto& rightObject)
{

    if (this != &rightObject) // avoid self-assignment
    {   // copy rightObject into this object
        a = rightObject.a;
        b = rightObject.b;
    }   // Return the object assigned.

    return *this;
}

int main()
{
    Auto x;
    x.setValues(1,1);
    Auto y;

    y = x;

    cout << y.getA() << endl;
}
