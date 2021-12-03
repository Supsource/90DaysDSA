#include<iostream>
using namespace std;

void dec (int n) {
        if(n==0){
            return;
        }

        cout<<n<<endl;
        dec(n-1);
}


int main (){
    int n;
    cin>>n;

    dec(n-1);
    return 0;

}