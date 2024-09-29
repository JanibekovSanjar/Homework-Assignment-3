#include <iostream>

using namespace std;
int main() {
    int n;
    cin>>n;
    int a=1;
    while(n!=0) {
        if(a%3==0 || a%10==3) {
            a=a+0;
            n++;
        }
        n--;
        a++;
    }
    cout<<a-1;

}


