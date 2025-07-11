#include <string>
#include <vector>
#include "lcs.h"
using namespace std;

string getLongestCommonSubsequence(string a, string b) {
    vector<vector<int>> max_len;
    int i, j;
    max_len.resize(a.size() + 1);
    for (i = 0; i <= (int)a.size(); i++) {
        max_len[i].resize(b.size() + 1);
        for (j = 1; j <= (int)b.size() && i != 0; j++) {
            if (a[i - 1] == b[j - 1]) {
                max_len[i][j] = 1 + max_len[i - 1][j - 1];
            }
            else {
                max_len[i][j] = max(max_len[i - 1][j], max_len[i][j - 1]);
            }
        }
    }
    string res;
    i--;
    j--;
    while (max_len[i][j] != 0 && i > 0 && j > 0) {
        if (a[i - 1] == b[j - 1]) {
            res.insert(0, 1, a[i - 1]);
            i--;
            j--;
        }
        else {
            if (max_len[i][j] == max_len[i - 1][j])
                i--;
            else
                j--;
        }
    }
    return res;
}