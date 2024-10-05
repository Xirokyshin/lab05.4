#include <iostream>
#include <cmath>
using namespace std;

double S0(const int N)
{
    double s = 0;
    for (int j = 2; j <= N; j++)
        s += (j * (N - j)) / (pow(j, 2) + pow((N - j), 2)); 
    return s;
}

double S1(const int N, const int j = 2)
{
    if (j > N)
        return 0;
    else
        return (j * (N - j)) / (pow(j, 2) + pow((N - j), 2)) + S1(N, j + 1);
}

double S2(const int N, const int j = 2)
{
    if (j < 2)
        return 0;
    else
        return (j * (N - j)) / (pow(j, 2) + pow((N - j), 2)) + S2(N, j - 1);
}

double S3(const int N, const int j = 2, double t = 0)
{
    t = t + (j * (N - j)) / (pow(j, 2) + pow((N - j), 2));
    if (j >= N)
        return t;
    else
        return S3(N, j + 1, t);
}

double S4(const int N, const int j = 2, double t = 0)
{
    t = t + (j * (N - j)) / (pow(j, 2) + pow((N - j), 2));
    if (j <= 2)
        return t;
    else
        return S4(N, j - 1, t);
}

int main()
{
    int N;
    cout << "N: ";
    cin >> N;


    cout << "S0 = " << S0(N) << endl;
    cout << "S1 = " << S1(N) << endl;
    cout << "S2 = " << S2(N) << endl;
    cout << "S3 = " << S3(N, 2) << endl;
    cout << "S4 = " << S4(N, N) << endl;

    return 0;
}
