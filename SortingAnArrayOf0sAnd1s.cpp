#include <bits/stdc++.h>
using namespace std;

int main() {
    int a[]={1,2,0};
    int n=sizeof(a)/sizeof (int);
    int low=0,mid=0,high=n-1;
    while(mid<=high){
        switch(a[mid]){
            case 0:
            {
                swap(a[low++],a[mid++]);
                break;
            }
            case 1:
            {
                mid++;
                break;
            }
            case 2:
            {
                swap(a[mid],a[high--]);
                break;
            }
        }
    }

    for(auto i:a){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}
