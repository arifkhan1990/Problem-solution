#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("in.txt","r",stdin);
    int n,m,t;
    string a;
    cin >> t;
    for(int i =1; i<= t;i++){
            set<string>s,s1;
        cin >> n >> m;
        while(n--){
            cin >> a;
            s.insert(a);
        }
        while(m--){
            cin >> a;
            s1.insert(a);
        }
        cout << "Case " << i << ":" << endl;
        cout << "Jackal " << s.size() << endl << "Bari " << s1.size() << endl;
    }
    return 0;
}
