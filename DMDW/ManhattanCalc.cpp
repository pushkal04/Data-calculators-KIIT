#include <iostream>
#include <vector>
#include <strings.h>

using namespace std;

double manhattanDist(vector<double> vect1, vector<double> vect2);

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
    cout << " Formula : |Xi - Xj| + |Yi - Yj| " << endl;
    res = manhattanDist(vect1, vect2);
    cout << "Result :" << res;
}

double manhattanDist(vector<double> vect1, vector<double> vect2)
{
    double res;

    for (int i = 0; i < vect1.size(); i++)
    {
        res += abs(vect1[i] - vect2[i]);
    }

    return res;
}