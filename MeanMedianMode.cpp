#include <iostream>
#include <vector>
#include <strings.h>
#include <cmath>
#include <bits/stdc++.h>

using namespace std;

double meanFun(vector<double> vect, int trim);
double medianFun(vector<double> vect);
double modeFun(vector<double> vect);

int main()
{
    int code, i{1};
    double temp, mean, median, mode;
    int trim;
    vector<double> vect;

    cout << "Enter a code that is not part of the data: ";
    cin >> code;

    while (temp != code)
    {
        cout << "Value " << i << " : ";
        cin >> temp;
        if (temp != code)
        {
            vect.push_back(temp);
            i++;
        }
    }

    cout << "Percentage of mean to be trimmed(0 if N/A): ";
    cin >> trim;

    sort(vect.begin(), vect.end());

    cout << "Sorted data : ";

    for (int j = 0; j < vect.size(); j++)
    {

        cout << vect[j] << " ";
    }

    median = medianFun(vect);
    cout << "\nMedian :" << median << endl;
}

double medianFun(vector<double> vect)
{
    double med, val;
    int n = vect.size();
    if (n % 2 == 0)
    {
        n = n / 2;
        med = vect[n] + vect[n - 1];
        return med / 2;
    }
    else
    {
        n = n / 2;
        round(n);
        return vect[n];
    }
}

double modeFun(vector<double> vect)
{
}
