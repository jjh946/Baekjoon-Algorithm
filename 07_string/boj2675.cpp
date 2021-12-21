#include <iostream>
#include <string>
#include <array>

using namespace std;

int main()
{
    int n;
    cin >> n;

    char s[n][8*20];
    for(int i=0;i<n;++i){
        int mul;
        string str1;

        cin >> mul >> str1;

        for(int j=0;j<str1.length();++j){
            for(int w=0;w<mul;++w){
                s[i][j*mul+w] = str1[j];
            }
        }
        s[i][str1.length()*mul]='\0';
    }


    for(int i=0;i<n;++i){
        cout << string(s[i]) << '\n';
    }


    return 0;
}
