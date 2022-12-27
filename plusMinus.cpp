#include <bits/stdc++.h>
#define endl "\n"

using namespace std;

int main()
{
    map<string, int> mp;
    int n;
    cin >> n;
    for(int i = 0 ; i < n; i++) {
        int number;
        cin >> number;
        if(number == 0) {
            mp["zero"]++;
        } else if(number > 0) {
            mp["positive"]++;
        } else {
            mp["negative"]++;
        }
    }

    float positive = (float)mp["positive"] /(float) n;
    float negative = (float)mp["negative"] / (float)n;
    float zero = (float)mp["zero"] / (float)n;

    printf("%.6f\n", positive);
    printf("%.6f\n", negative);
    printf("%.6f\n", zero);

    return 0;
}