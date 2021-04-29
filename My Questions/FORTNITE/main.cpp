#include<iostream>
using namespace std;
int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int t;
    cin>>t;
    while(t--){
        int mats;
        cin>>mats;
        cout<<mats/20<<"\n"<<mats/15<<"\n"<<mats/10<<"\n"<<mats/5<<"\n";
    }
}
