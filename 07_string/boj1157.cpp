#include <iostream>
#include <string>

using namespace std;

int main()
{ 
    string str1;
    cin >> str1;

    int alpha[26]={0};

    for(int i=0;i<str1.length();++i){
        char ascii = str1.at(i);
        int letter;

        if(ascii<91){
            letter = ascii - 65;
        }
        else if(ascii>96){
            letter = ascii -97;
        }
        alpha[letter]++;
    }
    
    int largest=0, same;
    for(int i=0;i<26;++i){

        if(alpha[i]>alpha[largest]){
            largest = i;
        }
        else if(alpha[i]==alpha[largest]){
            same = largest;
        }
    }

    if(largest==same){
        cout << '?';
    }
    else{
        char charValue = largest + 'A';
        cout << charValue;
    }
        


    return 0;
}
