#include<iostream>
#include<vector>
using namespace std;
int main(){
    freopen("in02.txt","r",stdin);
    freopen("op02.txt","w",stdout);
    string a,b;
    cin>>a>>b;
    int i,c1=0,c2=0;
    vector<char> v1,v2;
    for(i=0;a[i]!='\0';i++) {
        if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u')
            c1++;
        v1.push_back(a[i]);
    }
    for (i = 0; b[i] != '\0'; i++){
        if (b[i] == 'a' || b[i] == 'e' || b[i] == 'i' || b[i] == 'o' || b[i] == 'u')
            c2++;
        v2.push_back(b[i]);
    }
    if(c1>c2) cout<<b<<endl;    //CHECK --- if c1==0 && c2==0
    else if(c1==0 && c2>=0) cout<<"TIE"<<endl;
    else{
        while(c1<=c2){
            for (auto it = v2.begin(); it != v2.end(); it++){
                if (*it == 'a' || *it == 'e' || *it == 'i' || *it == 'o' || *it == 'u'){
                    v2.erase(it);
                    c2--;
                    break;
                }
            }
        }
        for (auto it = v2.begin(); it != v2.end(); it++){
            cout<<*it;
        }
        cout<<endl;
    }
}
