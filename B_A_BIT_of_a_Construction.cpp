#include <iostream>
#include <cmath>

int countBits(int num) {
     // Handle negative numbers
    if (num < 0) {
        num = -num - 1; // Subtract 1 and negate to handle INT_MIN
    }
    return (int)log2(num) + 1;
}

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int n, k;
        std::cin >> n >> k;
        
        if (n == 1) {
            std::cout << k << std::endl;
        } else if (n == 2) {
            int numBits = countBits(k) - 1;
            int sum = 1;
            int i = 0;
            sum=sum<<numBits;
            sum--;
            std::cout << sum << " " << k - sum << std::endl;
        } else {
            int sum = 1;
            int index=0;
            for (int j = 0; j < n - 2; j++) {
                std::cout << "1 ";
                index++;
            }
            k-=index;
            int numBits = countBits(k) - 1;
            sum=sum<<numBits;
            sum--;
           std::cout<<sum<<" ";
            std::cout << k - sum  << std::endl;
        }
    }
    return 0;
}
