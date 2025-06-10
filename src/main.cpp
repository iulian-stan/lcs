#include <iostream>
#include <string>
#include <conio.h>
using namespace std;
#include "lcs.h"

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