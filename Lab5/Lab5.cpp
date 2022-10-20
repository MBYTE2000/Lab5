#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");

    int n, firstNegative, sum = 0;
    string s;
    printf("Введите размер массива:");
    cin >> n;
    int* a = new int[n](); //подумать

   
    cin >> s;

    if (s == "test")
    {
        for (int i = 0; i < n; i++)
        {
            a[i] = rand() % 10;
        }
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
    }
    
   

    for (int i = 0; i < n; i++)
    {
        if (a[i]<0)
        {
            firstNegative = i;
            break;
        }
    }
    for (int i = firstNegative+1; i < n; i++)
    {
        sum += a[i];
    }
    cout << "sum = " << sum;
}
