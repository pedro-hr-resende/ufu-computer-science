/* Student: Pedro Henrique Resende Ribeiro
 * Description: Print the volume of a cylinder
 * Date: 2024-01-09 - Time: 01:30
 */

#include <cmath>
#include <iostream>

#define PI 3.141592

using namespace std;

int main() {

    double radius, height, volume;

    cout << "Enter the radius of the cylinder: ";
    cin >> radius;

    cout << "Enter the height of the cylinder: ";
    cin >> height;

    volume = PI * pow(radius, 2.0) * height;

    cout << "The volume is " << volume << endl;

    return 0;

}
