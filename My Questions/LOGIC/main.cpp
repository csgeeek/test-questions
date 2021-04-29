#include<iostream>
#include<math.h>
using namespace std;

int digits(int n){
    int x=0;
    while(n!=0){
        n=n/10;
        x++;
    }
    return x;
}

int shiftReturn(int n){
    int a[15], len = 0, i,x = digits(n),sum=0;
    for (i = 0; n > 0; i++) {
        a[i] = n % 2;
        n = n / 2;
        len++;
    }
    int b[len],j=0;
    for(i=len-1;i>=len-x;i--){
        b[j]=a[i];
        j++;
    }
    for(i=0;i<len-x;i++){
        b[j]=a[i];
        j++;
    }
    for(i=0;i<j;i++){
        sum=sum+b[i]*pow(2,i);
    }
    return sum;
}

int main(){
    //freopen("input02.txt","r",stdin);
    //freopen("output02.txt", "w", stdout);
    int t;
    cin>>t;
    while(t--){
        int n;  //range 1-256
        cin>>n;
        cout<<shiftReturn(n)<<endl;
    }
}
