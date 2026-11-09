#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N, K;
    cin >> N >> K;
    vector<int> a(N);
    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
    }
    for (int j = 0; j < (1 << N); j++)
    {
        int s = 0;
        for (int x = 0; x < N; x++)
        {
            if (j & (1 << x))
            {
                s += a[x];
            }
        }
        if (s == K)
        {
            cout << "YES";
            return 0;
        }
    }
}