#include<iostream>
using namespace std;
int main()
{
    int i, j,l,k, c=0, index=0;
    cin>>i>>j;
    int a[i], b[j], out[j];
    for(k=0;k<i;k++)
    {
        cin>>a[k];
        for(l=0;l<k;l++)
        {
            if(a[k]<a[l])
            {
                c=a[k];
                a[k]=a[l];
                a[l]=c;
            }
        }
    }
    for(l=0;l<j;l++)
    {
       cin>>b[l];
    }
    for(l=0;l<j;l++)
    {
        out[l] = 0;
        index = 0;
        for(k=i-1;k>=0;k--)
        {
            if(a[k]>=b[l])
            {
                out[l]++;
            }
            else if((b[l]-a[k])<=(k-index))
            {
                index = index + b[l] - a[k];
                out[l]++;
            }
        }
        cout<<out[l];
        cout<<" ";
    }
    return 0;
}
