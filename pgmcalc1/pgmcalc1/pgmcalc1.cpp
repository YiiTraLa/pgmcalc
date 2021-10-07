#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <cmath>
using namespace std;

int main() {

    double X, Y;
    cout << "Enter the first number (X): ";
    cin >> X;
    cout << "Enter the second number (Y): ";
    cin >> Y;

    cout << setw(26) << "|........................|..............|.............|" << endl;
    cout << fixed << setprecision(2) << "| Addition               |    X + Y = " << (X + Y) << " " << right << setw(11) << " |" << endl;
    cout << fixed << setprecision(2) << "| Subtraction            |    X - Y = " << (X - Y) << " " << right << setw(11) << " |" << endl;
    cout << fixed << setprecision(2) << "| Division               |    X / Y = " << (X / Y) << " " << right << setw(12) << " |" << endl;
    cout << fixed << setprecision(2) << "| AlegebraicExpression_1 |   2X + Y = " << 2 * X + Y << " " << right << setw(10) << " |" << endl;
    cout << fixed << setprecision(2) << "| AlegebraicExpression_2 | 2(X + Y) = " << 2 * (X + Y) << " " << right << setw(10) << " |" << endl;
    cout << fixed << setprecision(2) << "| Absolute Value Function|        X = " << abs(X) << " " << right << setw(11) << " |" << endl;
    cout << fixed << setprecision(2) << "| Minimun Value          | smallest = ";
    if (X < Y)
    {
        cout << X << " " << right << setw(11) << " |" << endl;
    }
    else
    {
        cout << Y << " " << right << setw(11) << " |" << endl;
    }
    
    cout << fixed << setprecision(2) << "| Square Root            |sq root Y = " << sqrt(Y) << " " << right << setw(12) << " |" << endl;
    cout << fixed << setprecision(2) << "| Power Function         |   X to Y = " << pow(X, Y) << " " << right << setw(10) << " |" << endl;
    cout << setw(26) << "|........................|..............|.............|" << endl;
    cout << "Quote entered: I refuse to answer that question on the grounds that I don't know the answer to that question ... Douglas Adams";
    return 0;
}
