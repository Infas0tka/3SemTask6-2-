#include <iostream>
#include <cstdlib>
#include <set>

using namespace std;

int main()
{
    set<int> S;
    int N, i;
    cin >> N;
    int a[N];
    for (i = 0; i < N; i++)
    {
        a[i] = rand() % 5 + 1;
        cout << a[i] << " ";
    }
    cout << endl;
    for (i = 0; i < N; i++)
    {
        if (S.find(a[i]) != S.end())
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
        S.insert(a[i]);
    }
    return 0;
}
