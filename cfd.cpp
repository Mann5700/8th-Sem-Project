#include <iostream>
#include <cmath>
using namespace std;

double rtan(double deg)
{
    double x = deg * M_PI / 180;
    return tan(x);
}

double artan(double rad)
{
    double y = atan(rad);
    return y * 180 / M_PI;
}

int main()
{
    double theta, phi, N;
    cout << "Theta = ";
    cin >> theta;
    cout << "Phi = ";
    cin >> phi;
    cout << "N = ";
    cin >> N;
    cout << endl;
    double u1 = 0.005759 * N;
    double u2 = 0.0157 * N;
    double v1 = u1 * rtan(theta);
    double v = u2 * rtan(phi) - v1;
    double vw2 = v / (rtan(phi));
    double alpha = v1 / vw2;
    double beta = artan(alpha);
    double q = 0.0095033 * v1;

    cout << "u1 = " << u1 << endl;
    cout << "u2 = " << u2 << endl;
    cout << "v1 = " << v1 << endl;
    cout << "vw2 = " << vw2 << endl;
    cout << "beta = " << beta << endl;
    cout << "q = " << q << endl;
    return 0;
}