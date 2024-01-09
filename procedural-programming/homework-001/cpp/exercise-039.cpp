/* Student: Pedro Henrique Resende Ribeiro
 * Description: Print the amount won by each winner
 * Date: 2024-01-09 - Time: 02:00
 */

#include <iomanip>
#include <iostream>

using namespace std;

int main() {

    double prize, value1, value2, value3;

    prize = 780000.0;

    value1 = prize * 0.46;
    value2 = prize * 0.32;
    value3 = prize * 0.22;

    cout << fixed << setprecision(2);
    cout << "Winner 1: " << value1 << endl;
    cout << "Winner 2: " << value2 << endl;
    cout << "Winner 3: " << value3 << endl;

    return 0;

}
