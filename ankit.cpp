#include <iostream>
#include <vector>
#include <cmath>

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i <= std::sqrt(num); ++i) {
        if (num % i == 0)
            return false;
    }
    return true;
}

// Function to find and display prime numbers from an array
void displayPrimes(const std::vector<int>& arr) {
    std::cout << "Prime numbers in the array: ";
    for (int num : arr) {
        if (isPrime(num)) {
            std::cout << num << " ";
        }
    }
    std::cout << std::endl;
}

int main() {
    // Example array
    std::vector<int> arr = {3, 5, 8, 13, 21, 34, 55, 89};

    displayPrimes(arr);

    return 0;
}
