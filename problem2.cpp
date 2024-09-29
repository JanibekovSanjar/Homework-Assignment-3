#include <iostream>

using namespace std;
int main() {
    int t;
    cin >> t;
    int N = 1;
    string results;
    char c;
    if(N<0) {
        cout<<"Error";
    }
    else {
        for(int i=1;i<=t;i++) {
            cin >> N;
            do {;
                c = N%10+48;
                results+=c;
                results += " ";
                N = N / 10;
            }while (N!=0);
            results+='\n';
        }
        cout<<results;

    }
}

