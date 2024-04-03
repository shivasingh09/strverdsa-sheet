#include <bits/stdc++.h>
using namespace std;
int main()
{
    // vector<int> stock;
    int n;
    cin >> n;
    // for(int i=0;i<n;i++)
    // {
    //     int x;
    //     cin>>x;
    //     stock.push_back(x);
    // }
    int a[n];
    int b[n];
    int maxprofit = 0;
    int result = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int j = 0; j < n; j++)
    {
        b[j] = *max_element(a + j, a + n);
    }
    for (int i = 0; i < n; i++)
    {
        int profit = b[i] - a[i];
        maxprofit = max(profit, maxprofit);
        if (a[i] == b[i])
        {
            result += maxprofit;
            maxprofit = 0;
        }
    }
    cout << result << endl;
    // int large=a[n-1];
    // cout<<large;
    // for(int i=n-1;i>=0;i--)
    // {
    //     if(large<a[i])
    //     {
    //       large=a[i];
    //     }
    //     b[i]=large;
    //     cout<<large;
    // // }
    // for(int i=0;i<n;i++)
    // {
    //     cout<<b[i]<<endl;
    // }
}
