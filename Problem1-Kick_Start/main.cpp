#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        string s;
        cin>>s;
        int j=0;
        vector<int>kick;
        vector<int>start;
        while(j<s.size()){
            if(j+3<s.size() && s.substr(j,4)=="KICK"){
                kick.push_back(j);
            }
            else if(j+4<s.size() && s.substr(j,5)=="START"){
                start.push_back(j);
            }
            j++;
        }
        int y=0;
        for(int m=0;m<kick.size();m++){
            for(int n=0;n<start.size();n++){
                if(start[n]>kick[m]){
                    y += start.size()-n;
                    break;
                }
            }
        }
        cout << "Case #" << i << ": " <<y<<endl;
    }

    return 0;
}
