#include <bits/stdc++.h>
using namespace std;

void swapValues(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}

int main()
{
    int x, y;
    cin >> x >> y;
    swapValues(x, y);
    cout << x << " " << y;
    return 0;
}
