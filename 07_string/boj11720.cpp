#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string str1;
    cin >> str1;
    int sum=0;

    for(int i=0;i<n;++i){
        int temp=(str1.at(i)-48);
        sum = sum + temp;
    }
    cout << sum;
    return 0;
}
