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

    int T; ll N; string s1, s2;
    cin>>T;
    for(int t=1; t<=T; t++){
        cin>>N;
        cin>>s1;
        N = (N<<1)-2;

        s2 = "";
        for(int i=0; i<N; i++){
            if(s1[i]=='S'){ s2+='E';    }
            else{   s2+='S';    }
        }
        cout<<"Case #"<<t<<": "<<s2<<"\n";
    }

    return 0;
}
