/* Student: Pedro Henrique Resende Ribeiro
 * Description: Print the area of a square
 * Date: 2024-01-09 - Time: 01:00
 */

#include <cmath>
#include <iostream>

using namespace std;

int main() {

    double side, area;

    cout << "Enter the side size of the square: ";
    cin >> side;

    area = pow(side, 2.0);

    cout << "The area is " << area << endl;

    return 0;

}
