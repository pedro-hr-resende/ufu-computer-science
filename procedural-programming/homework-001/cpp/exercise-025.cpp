/* Student: Pedro Henrique Resende Ribeiro
 * Description: Convert from acres to m2
 * Date: 2024-01-06 - Time: 14:30
 */

#include <iostream>

using namespace std;

int main() {

    double m2, acres;

    cout << "Enter an area in acres: ";
    cin >> acres;

    m2 = acres * 4048.58;

    cout << "The area in square meters is " << m2 << endl;

    return 0;

}
