/* Student: Pedro Henrique Resende Ribeiro
 * Description: Convert from yards to meters
 * Date: 2024-01-06 - Time: 14:00
 */

#include <iostream>

using namespace std;

int main() {

    double yards, meters;

    cout << "Enter a length in yards: ";
    cin >> yards;

    meters = yards * 0.91;

    cout << "The length in meters is " << meters << endl;

    return 0;

}
