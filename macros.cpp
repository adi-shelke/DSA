#include<iostream>
using namespace std;

#define PI 3.1416
#define AREA(r)(PI * (r*r))

int main(){

    float radius=7;
    cout<<"Area of circle is: "<<AREA(radius);
}