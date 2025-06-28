#include <iostream>
#include <string>
#include <conio.h>
#include "lcs.h"
using namespace std;

int main() {
    string a, b, c;
    cout << "Enter first string : ";
    getline(cin, a);
    cout << "Enter second string : ";
    getline(cin, b);
    c = getLongestCommonSubsequence(a, b);
    cout << "Longest Common Subsequence : ";
    cout << c;
    _getch();
    return 0;
}