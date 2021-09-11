#include <iostream>
#include <vector>
#include <strings.h>
#include <cmath>

using namespace std;

double eucledianDist(vector<double> vect1, vector<double> vect2);

int main()
{

    size_t n;
    double temp, res;
    vector<double> vect1;
    vector<double> vect2;

    cout << "Enter the dimension 1 / 2 / 3 / 4" << endl;
    cin >> n;

    cout << "Enter values of first array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "value " << i << " :";
        cin >> temp;
        vect1.push_back(temp);
    }

    cout << "Enter values of second array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "value " << i << " :";
        cin >> temp;
        vect2.push_back(temp);
    }

    cout << "RESULT --------------------------------" << endl;
    cout << " Formula : sqrt(|Xi - Xj|^2 + |Yi - Yj|^2) " << endl;
    res = eucledianDist(vect1, vect2);
    cout << "Result :" << res;
}

double eucledianDist(vector<double> vect1, vector<double> vect2)
{
    double res;

    for (int i = 0; i < vect1.size(); i++)
    {
        res += abs(((vect1[i]) - (vect2[i])) * ((vect1[i]) - (vect2[i])));
    }

    return sqrt(res);
}