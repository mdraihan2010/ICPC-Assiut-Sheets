#include <bits/stdc++.h>
using namespace std;
int getMax(int arr[], int n)
{
    int maxVal = arr[0];
    for (int i = 1; i < n; ++i)
    {
        if (arr[i] > maxVal)
            maxVal = arr[i];
    }
    return maxVal;
}
int getMin(int arr[], int n)
{
    int minVal = arr[0];
    for (int i = 1; i < n; ++i)
    {
        if (arr[i] < minVal)
            minVal = arr[i];
    }
    return minVal;
}
bool isPrime(int num)
{
    if (num <= 1)
        return false;
    for (int i = 2; i * i <= num; ++i)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}
int countPrimes(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; ++i)
    {
        if (isPrime(arr[i]))
            count++;
    }
    return count;
}
bool isPalindrome(int num)
{
    int original = num;
    int reversed = 0;
    while (num > 0)
    {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return original == reversed;
}
int countPalindromes(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; ++i)
    {
        if (isPalindrome(arr[i]))
            count++;
    }
    return count;
}
int countDivisors(int num)
{
    int count = 0;
    for (int i = 1; i <= num; ++i)
    {
        if (num % i == 0)
            count++;
    }
    return count;
}
int getNumberWithMaxDivisors(int arr[], int n)
{
    int maxDivisors = 0;
    int result = 0;

    for (int i = 0; i < n; ++i)
    {
        int divCount = countDivisors(arr[i]);
        if (divCount > maxDivisors || (divCount == maxDivisors && arr[i] > result))
        {
            maxDivisors = divCount;
            result = arr[i];
        }
    }

    return result;
}

int main()
{
    int N;
    cin >> N;
    int A[100];

    for (int i = 0; i < N; ++i)
    {
        cin >> A[i];
    }

    cout << "The maximum number : " << getMax(A, N) << endl;
    cout << "The minimum number : " << getMin(A, N) << endl;
    cout << "The number of prime numbers : " << countPrimes(A, N) << endl;
    cout << "The number of palindrome numbers : " << countPalindromes(A, N) << endl;
    cout << "The number that has the maximum number of divisors : " << getNumberWithMaxDivisors(A, N) << endl;

    return 0;
}
