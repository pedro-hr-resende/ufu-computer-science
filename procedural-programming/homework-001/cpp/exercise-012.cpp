/* Student: Pedro Henrique Resende Ribeiro
 * Description: Convert from miles to kilometers
 * Date: 2023-12-31 - Time: 20:20
 */

#include <iostream>

using namespace std;

int main() {

    double miles, kilometers;

    cout << "Enter a distance in miles: ";
    cin >> miles;

    kilometers = miles * 1.61;

    cout << "The distance in kilometers is " << kilometers << endl;

    return 0;

}
