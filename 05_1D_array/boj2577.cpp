#include <iostream>

int main() {
    std::ios::sync_with_stdio(false); 
    std::cin.tie(NULL);
    
    int NUMBER =10;
    int arr[NUMBER]={0};
    int a,b,c;

    std::cin >> a >> b >> c;
    
    int mul = a*b*c;

    
    for(int i=0;i<NUMBER;++i)
    {
        int temp = mul;
        while(1)
        {  
            if(temp==0)
                break;

            if(temp%10==i)
                arr[i]++;
            temp = temp/10;
        }
    }

    for(int i=0;i<NUMBER;++i)
        std::cout << arr[i] << '\n';
    

    
    return 0;
}
