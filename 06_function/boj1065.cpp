#include <iostream>

bool hansu(int n){
    if(n<100){
        return true;
    }
    else if(n<1000) {
        int a = n/100;
        int b = n/10%10;
        int c = n%10;

        if ((a-b)==(b-c))
            return true;
        else return false;
    }
    else return false;
}


int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n;
    std::cin >> n;
    int sum=0;

    
    for(int i=1;i<n+1;++i)
    {
        if(hansu(i)==true){
            sum++;
        }
    }
    std::cout << sum << '\n';

    return 0;
}
