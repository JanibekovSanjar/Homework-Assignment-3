#include <iostream>

using namespace std;
int main() {
    int a;
    cin>>a;
    if(a<0) {
        cout<<"Invalid Input"<<endl;
    }
    else if(a>9) {
        cout<<"Invalid Input"<<endl;
    }
    else {
        for(int i=a;i>=1;i--) {
            for(int j=1;j<=a;j++) {
                if(j>i) {
                    cout << " ";
                }
                else {
                    cout << j;
                }
            }
            for(int k=a;k>=1;k--) {
                if(k>i) {
                    cout << " ";
                }
                else {
                    cout << k;
                }
            }
            cout<<endl;

        }
    }
}
