#include <iostream>
using namespace std;

void swapRows(int matrix[][500], int n, int x, int y)
{
    for (int j = 0; j < n; ++j)
    {
        swap(matrix[x][j], matrix[y][j]);
    }
}
void swapColumns(int matrix[][500], int n, int x, int y)
{
    for (int i = 0; i < n; ++i)
    {
        swap(matrix[i][x], matrix[i][y]);
    }
}
void printMatrix(int matrix[][500], int n)
{
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int N, X, Y;
    cin >> N >> X >> Y;

    int matrix[500][500];

    for (int i = 0; i < N; ++i)
        for (int j = 0; j < N; ++j)
            cin >> matrix[i][j];

    X--;
    Y--;

    swapRows(matrix, N, X, Y);
    swapColumns(matrix, N, X, Y);

    printMatrix(matrix, N);

    return 0;
}
