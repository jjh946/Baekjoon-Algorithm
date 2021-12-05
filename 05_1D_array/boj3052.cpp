#include <iostream>

int main() {
    std::ios::sync_with_stdio(false); 
    std::cin.tie(NULL);
    
    int NUMBER =10;
    int nums[NUMBER], count[42]={0};
        
    for(int i=0;i<NUMBER;++i)
    {
        std::cin >> nums[i];
        int na = nums[i]%42;
        for(int j=0;j<42;++j)
        {
            if(na==j)
                count[j]=1;
        }
    }
        
    int total = 0;
    for(int i=0;i<42;++i)
    {
        if(count[i]==1)
            total++;
    }
        
    std::cout << total << '\n';

    return 0;
}
