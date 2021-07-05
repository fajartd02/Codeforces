#include <bits/stdc++.h>

using namespace std;

int main()
{
	int a[] = {1,3,1,2,123,1,7,4,1};
	int size = sizeof(a)/sizeof(a[0]);
	sort(a +3 ,a + size);
	for(int i = 0 ; i < size; i++)
	cout << a[i] << " ";
    return 0;
}
