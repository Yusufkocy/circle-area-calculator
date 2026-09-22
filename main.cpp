

#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    SetConsoleOutputCP(65001);

    /* area=PI*r*r
       circumference=2*PI*r
    */

    const float PI = 3.1415f;
    float r, area, circumference;


cout<<"Enter the radius of the circle: ";
cin>>r;
circumference = 2*PI*r;
area = PI*r*r;
cout << "\nThe circumference of the circle is: " << circumference << "\n";
cout << "\nThe area of the circle is: " << area << "\n";



    return 0;
}
