#include <iostream>

int main() {
    std::ios::sync_with_stdio(false); 
    std::cin.tie(NULL);
    
    int NUMBER ;
    std::cin >> NUMBER;

    int nums[NUMBER];
    int biggest=0;
    double sum=0;
    for(int i=0;i<NUMBER;++i)
    {
        std::cin >> nums[i];
        sum = sum + nums[i];
        if (nums[i]>=biggest)
            biggest = nums[i];
    }

    std::cout << (sum/NUMBER)*100/biggest << '\n';
    
    return 0;
}
