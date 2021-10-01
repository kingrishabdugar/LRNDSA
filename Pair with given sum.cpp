#include<bits/stdc++.h>
using namespace std;

int pairwithgivensum(int arr[],int n,int X)
{
    unordered_set <int>s;
    for(int i=0;i<n;i++)
    {
        if(s.find(X-arr[i])!=s.end())
        return arr[i];

        s.insert(arr[i]);
    }
    return 0;
}

int main()
{
    int arr[] = {3, 8, 4, 7, 6, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int X = 13;

    cout << pairwithgivensum(arr, n, X)<<" "<<X-pairwithgivensum(arr, n, X);
    return 0;
}
