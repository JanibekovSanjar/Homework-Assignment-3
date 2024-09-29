#include <iostream>

using namespace std;
int main() {
    int n, x;
    cin >> n >> x;
    int f = 1;
    if(n == 1 || n == 2) {
        f = 1;
    }
    else if(n<0) {
        cout << "Invalid Input";
    }
    else {
        int a=2;
        do {
            for(int i=1;i<=x;i++) {
                a++;
                if(a==n) {
                    break;
                }
            }
            f++;

        }while (n!=a);
    }
    cout << f << endl;
}
