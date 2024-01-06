/* Student: Pedro Henrique Resende Ribeiro
 * Description: Convert from hectares to m2
 * Date: 2024-01-06 - Time: 14:50
 */

#include <iostream>

using namespace std;

int main() {

    double m2, hectares;

    cout << "Enter an area in hectares: ";
    cin >> hectares;

    m2 = hectares * 10000.0;

    cout << "The area in square meters is " << m2 << endl;

    return 0;

}
