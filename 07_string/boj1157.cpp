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
    
    int idx=0, max;  //최대값과 알파벳 번호
    bool overlap = false;   //머리가 안돌아가면 그냥 따라가보도록 하자.
    
    max = -1;

    for(int i=0;i<26;++i){

        if(alpha[i]>max){
         // printf("%d %d %d %d\n",i,largest,alpha[i],alpha[largest] );
            max = alpha[i];
            idx = i;
            overlap = false;
        
        }
        else if(alpha[i]==max){
            //printf("same: %d ~ %d %d %d %d\n",same, i,largest,alpha[i],alpha[largest] );
            overlap = true;
            
        }
    }

    if(overlap){
        cout << '?';
    }
    else{
        char charValue = idx + 'A';
        cout << charValue;
    }
        


    return 0;
}
