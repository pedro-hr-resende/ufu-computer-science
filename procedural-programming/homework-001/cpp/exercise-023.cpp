/* Student: Pedro Henrique Resende Ribeiro
 * Description: Convert from meters to yards
 * Date: 2024-01-06 - Time: 14:10
 */

#include <iostream>

using namespace std;

int main() {

    double yards, meters;

    cout << "Enter a length in meters: ";
    cin >> meters;

    yards = meters / 0.91;

    cout << "The length in yards is " << yards << endl;

    return 0;

}
