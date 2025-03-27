#include <iostream>

//  Question 4
using namespace std;

double harmonic(int n) {
    if (n == 1)
        return 1.0;
    return 1.0 / n + harmonic(n - 1);
}

//  Question 5
double harmonic() {
    int n;
    cout << "Enter value of n: ";
    cin >> n;
    return harmonic(n);
}

int main() {
    int n;
    cout << "Enter value for n: ";
    cin >> n;

    cout << "Harmonic number H_" << n << " (recursive): " << harmonic(n) << endl;
    cout << "Harmonic number H_n (overloaded function): " << harmonic() << endl;

    return 0;
}
