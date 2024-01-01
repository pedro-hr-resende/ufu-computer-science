/* Student: Pedro Henrique Resende Ribeiro
 * Description: Convert from kilometers to miles
 * Date: 2024-01-01 - Time: 15:00
 */

#include <iostream>

using namespace std;

int main() {

    double miles, kilometers;

    cout << "Enter a distance in kilometers: ";
    cin >> kilometers;

    miles = kilometers / 1.61;

    cout << "The distance in miles is " << miles << endl;

    return 0;

}
