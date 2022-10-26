#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");

    int n, firstNegative = -1, sum = 0;
    string s;
    cout << ("Введите размер массива:");
    cin >> n;
    int* a = new int[n]();

    cout << ("Введите test чтобы заполнить массив автоматическм или оставьте строку пустой\n");
    cin >> s;



    if (s == "test")
    {
        srand(time(0));
        for (int i = 0; i < n; i++)
        {
            a[i] = 5 - rand() % 10;
            cout << a[i] << "\n";
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
   
    if (firstNegative >= 0)
    {
        for (int i = firstNegative + 1; i < n; i++)
        {
            sum += abs(a[i]);
        }
        cout << "sum = " << sum;
    }
    else
    {
        cout << "нет отрицательных чисел";
    }
}
