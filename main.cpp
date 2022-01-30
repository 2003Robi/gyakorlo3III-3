#include <iostream>

using namespace std;

int main()
{
    int i,j,a[100][100],m,n,ok;
    cin>>m>>n;
    for(i=1 ; i<=m ; i++)
        for(j=1 ; j<=n ; j++)
            cin>>a[i][j];
    ok=0;
    for(i=1 ; i<=m ; i++)
        for(j=1 ; j<=m ; j++)

            if(a[i][1]==a[j][n] && a[i][1]!=0)
            {
                ok=1;
                cout<<a[i][1]<<" ";
            }

    if(ok==0)
        cout<<"nu exista";
    return 0;
}
