#include <iostream>

using namespace std;
int main() {
    int N,A,B;
    cin>>N;
    cin>>A;
    cin>>B;
    int sum=0;
    for(int i=1;i<=N;i++) {
        int sum_of_digits = 0;
        int x = i;
        while (x!=0){

            sum_of_digits += x%10;
            x/=10;
        };
        if(sum_of_digits>=A && sum_of_digits<=B) {
            sum+=i;
        }
    }
    cout << sum << endl;
}
