#include <iostream>
#include <cmath>
#include <complex>

using namespace std;

int main() {
    double p, q;

    // Bed om koefficienterne p og q fra brugeren
    cout << "Indtast koefficienterne p og q: \n";
    cin >> p >> q;

    // Beregn diskriminanten
    double discriminant = pow(q / 2, 2) + pow(p / 3, 3);

    // Beregn rødderne ved brug af Cardanos formel
    complex<double> u = pow(-q / 2 + sqrt(complex<double>(discriminant)), 1.0 / 3);
    complex<double> v = pow(-q / 2 - sqrt(complex<double>(discriminant)), 1.0 / 3);

    complex<double> root1 = u + v;
    complex<double> root2 = -(u + v) / 2.0 + sqrt(complex<double>(3)) * (u - v) / 2.0;
    complex<double> root3 = -(u + v) / 2.0 - sqrt(complex<double>(3)) * (u - v) / 2.0;

    // Udskriv rødderne
    cout << "Rødderne er: " << endl;
    cout << "x1 = " << root1 << endl;
    cout << "x2 = " << root2 << endl;
    cout << "x3 = " << root3 << endl;

    return 0;
}
