#include <bits/stdc++.h>
using namespace std;

#define PI 2*acos(0)

#define ll long long int

bool myAssert(bool b);
void testDrivenDevelopment();
int start(int argc=0, char const *argv[] = NULL);


// int n,m;
vector<int> *g;
bool *isvisited;

int main(int argc, char const *argv[])
{
    /* code */
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    /*
    cout << setprecision(8);
    cout << num1 << endl;
    */
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n,c;
    int *a;
    cin>>n>>c;

    a = new int[n+1];;
    for(int i=0; i<n; i++){ cin>>a[i];  }

    int maximus = 0;
    int temp;

    for(int i=0; i<n-1; i++){
        temp = a[i]-a[i+1]-c;
        maximus = max(temp, maximus);
    }

    cout<<maximus<<"\n";


    if(!a)delete[] a;

    
    return 0;
}
