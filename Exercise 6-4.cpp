#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() 
{
    const double PI = 3.14159;

    cout<<fixed << setprecision(2);

    cout<<"Square root of PI: " << sqrt(PI) << endl;

    double r;
    cout<<"Enter the radius of the sphere: ";
    cin>>r;

    double surfaceArea = 4.0 * PI * r * r;
    cout<<"Surface area of the sphere: 4 * PI * " << r << " ^ 2 = " << surfaceArea << endl;

    double volume = (4.0 / 3.0) * PI * r * r * r;
    cout<<"Volume of the sphere: 4 / 3 * PI * " << r << " ^ 3 = " << volume << endl;

    return 0;
}