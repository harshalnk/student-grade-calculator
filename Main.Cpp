#include <iostream>
using namespace std;

int main() {
    float m1, m2, m3, avg;

    cout << "Enter marks of 3 subjects: ";
    cin >> m1 >> m2 >> m3;

    avg = (m1 + m2 + m3) / 3;

    cout << "Average = " << avg << endl;

    if (avg >= 90)
        cout << "Grade: A";
    else if (avg >= 75)
        cout << "Grade: B";
    else if (avg >= 50)
        cout << "Grade: C";
    else
        cout << "Grade: Fail";

    return 0;
}
