/* Student: Pedro Henrique Resende Ribeiro
 * Description: Average of 4 grades
 * Date: 2024-01-06 - Time: 15:10
 */

#include <iostream>

using namespace std;

int main() {

    double grade1, grade2, grade3, grade4, average;

    cout << "Enter the 1st grade: ";
    cin >> grade1;

    cout << "Enter the 2nd grade: ";
    cin >> grade2;

    cout << "Enter the 3rd grade: ";
    cin >> grade3;

    cout << "Enter the 4th grade: ";
    cin >> grade4;

    average = (grade1 + grade2 + grade3 + grade4) / 4.0;

    cout << "The average is " << average << endl;

    return 0;

}
