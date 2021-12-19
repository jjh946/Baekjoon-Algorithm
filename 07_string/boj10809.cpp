#include <iostream>
#include <string>
using namespace std;

int main()
{
    int alpha[26];
    for(int i=0;i<26;++i){
        alpha[i] = -1;
    }

    string str1;
    cin >> str1;
    
    for(int i=0;i<str1.length();++i){
        int temp = (str1.at(i)-97);
        if (alpha[temp]==-1){
            alpha[temp]=i;
        }
    }

    for(int i=0;i<26;++i){
        cout << alpha[i] << ' ';
    }

    return 0;
}
