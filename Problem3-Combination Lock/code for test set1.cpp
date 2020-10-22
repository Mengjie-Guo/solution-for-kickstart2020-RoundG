#include <iostream>
#include <vector>
#include <string>
#include<cmath>
using namespace std;

int minnum(int a,int b,int c){
    if(a<=b && a<=c){
        return a;
    }
    else if(b<=a && b<=c){
        return b;
    }
    else
        return c;
}
//here I give two mehods for calculating the steps to reach target wheel
int main() {
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        int w,n;
        cin>>w>>n;
        vector<int>x(w);
        int sum=0;
        int dis=0;
        for(int j=0;j<w;j++){
            cin>>x[j];
        }
        int y=n*w;
        for(int k=1;k<=n;k++){
            int temp=0;
            for(int j=0;j<w;j++) {
                //method1------------------------------------------------
                temp += minnum(abs(k - x[j]), n - x[j] + k, n - k + x[j]);
                //method2--------------------------------------------
                if(x[j]<=k)
                    temp += min(k-x[j],n-k+x[j]);
                else
                    temp += min(x[j]-k,n-x[j]+k);
            }

            if(temp<y)
                y=temp;
        }
        cout << "Case #" << i << ": " << y<<endl;
    }

    return 0;
}
