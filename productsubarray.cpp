#include<bits/stdc++.h>
using namespace std;
int main()
{
    int product=1;
    vector<int>nums;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        nums.push_back(x);
    }
     int maxi=nums[0];
    for(int i=0;i<n;i++)
    {
        product*=nums[i];
        maxi=max(product,maxi);
        if(product<0&&nums[i]>0)
        {
            product=1;
        }
        if(nums[i]==0)
        {
            maxi=0;
            break;
        }
    }
    cout<<maxi<<endl;
}
