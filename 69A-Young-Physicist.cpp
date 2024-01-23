# include<iostream>
using namespace std;
int main(){
    int n;
    cin>> n;
    int m[n][2];
    for (int i=0;i<n;i++){
        for (int j=0;j<3;j++){
            cin>> m[i][j];
        }
    }
    int v=0;
    for (int i=0;i<n;i++){
        for (int j=0;j<3;j++){
           v += m[i][j];
        }
    }
    if(v==0)
        cout<< "YES";
    else cout<<"NO";

}