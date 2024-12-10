#include<bots/stdc++.h>
using namespace std;
int main(){
    int tt;
    cin >> tt;
    while (tt--){
        int n;
        cin >> n;
        int sum = 0, smst = INT_MAX, smst2 = INT_MAX;
        for(int i = 0; i < n; i++){
            int m, sm = INT_MAX, sm2 = INT_MAX;
            cin >> m;
            for(int j =0; j < m; j++){
                int x;
                cin >> x;
                if(x < sm){
                    sm2 = sm;
                    sm = x;
                }
                else if(x < sm2) sm2 = x;
            }
            sum += sm2;
            smst = min(smst, sm);
            smst2 = min(smst2, sm2);
        }
         cout << sum - smst2 + smst << endl;
    }
}