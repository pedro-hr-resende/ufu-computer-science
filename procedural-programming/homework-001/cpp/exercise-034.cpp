/* Student: Pedro Henrique Resende Ribeiro
 * Description: Print the area of a circle
 * Date: 2024-01-09 - Time: 01:10
 */

#include <cmath>
#include <iostream>

#define PI 3.141592

using namespace std;

int main() {

    double radius, area;

    cout << "Enter the radius of the circle: ";
    cin >> radius;

    area = PI * pow(radius, 2.0);

    cout << "The area is " << area << endl;

    return 0;

}
