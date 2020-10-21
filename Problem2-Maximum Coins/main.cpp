#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        int n;
        cin>>n;
        vector<vector<int> >coin(n,vector<int>(n));
        for(int j=0;j<n;j++){
            for(int k=0;k<n;k++){
                cin>>coin[j][k];
            }
        }
        long maxy=0;
        long temp;
        for(int j=0;j<n;j++){
            temp = coin[0][j];
            int inc = 1;
            while(j+inc<n){
                temp+=coin[inc][j+inc];
                inc++;
            }
            if(temp>maxy)
                maxy=temp;
        }
        for(int j=1;j<n;j++){
            temp=coin[j][0];
            int inc = 1;
            while(j+inc<n){
                temp+=coin[j+inc][inc];
                inc++;
            }
            if(temp>maxy)
                maxy=temp;
        }
        cout << "Case #" << i << ": " <<maxy<<endl;
    }

    return 0;
}
