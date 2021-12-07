#include <iostream>
#include<string>

using namespace std;

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    int NUMBER;
    std::cin >> NUMBER;

    double ocount[NUMBER];

    for (int i = 0; i < NUMBER; ++i)
    {
        int n;
        std::cin >> n;
        int score[n];
        double sum=0, avr;
        int count=0;

        for (int j = 0; j < n; ++j)
        {
            std::cin >> score[j];
            sum = sum + score[j];
        }
        avr = sum/n;
        
        for (int j = 0; j < n; ++j)
        {
            if(score[j]>avr)
                count++;
        }
        ocount[i] = (double)(100*count)/n;
    }
    
    for (int i = 0; i < NUMBER; ++i)
    {
        cout << fixed;
        cout.precision(3);
        std::cout << ocount[i] << "%\n";
    }
    

    return 0;
}
