#include <iostream>
using namespace std;

int Inc(int x) {
    x++;
    return x;
}
int rAdd(int x, int y) {
    if (y == 0) 
    {
        return x;
    }
    else
    {
        return Inc(rAdd(x, y - 1));
    }
}
int iAdd(int x, int y) {
    while (y > 0) {
        x++;
        y--;
    }
    return x;
}
int rMult(int x, int y) {
    if (y == 1) {
        return x;
    }
    return rAdd(x, rMult(x, y - 1));
}
int iMult(int x, int y) {
    int result = x;
    y--;
    while (y > 0) {
        result = iAdd(result, x);
        y--;
    }
    return result;
}
int Mac(int n) {
    if (n > 100) {
        return n - 10;
    }
    else {
        return Mac(Mac(n + 11));
    }
}

int main() 
{
    setlocale(LC_ALL, "Russian");
    int n;
    cout << "Введите значения n: ";
    cin >> n;
    int result = Mac(n);
    cout << "Результат функции Маккарти для n = " << n << ": " << result << endl;
    return 0;
}