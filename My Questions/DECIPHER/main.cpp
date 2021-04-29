#include<iostream>
using namespace std;

int main(){
    freopen("in01.txt","r",stdin);
    freopen("out01.txt", "w", stdout);
    int t,i;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        for(i=0;s[i]!='\0';i++) {
            if(s[i]>='2' && s[i]<='9'){
                s[i]=s[i]-2;
            }
            else if(s[i]>='a' && s[i]<='x'){
                s[i]=s[i]+2;
            }
            else {
                if(s[i]=='y') s[i]='a';
                else s[i]='b';
            }
        }
        cout<<s<<endl;
    }
}

//SAMPLE TEST CASE
/*
INPUT:
2
a35zy9
x2hqu5qx27
*/
