#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n,sum=0;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0;i < n;i++)
    {
       cin >> arr[i];
        sum+=arr[i];
       
    }

    cout<<sum;
    return 0;
}
