// codeforces 118A
#include<iostream>
using namespace std;
int main(){
    string t;
    cin >> t;
    for(int i=0; i<t.size();i++){
        char c= tolower(t[i]);
        if(c=='a'|| c=='e'|| c=='i'||c=='o'||c=='u'||c=='y'){
            continue;
        }
        else{
          cout<<"."<<c;  
        } 
    }
}