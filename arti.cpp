#include <iostream>
#include <vector>
#include <algorithm>  // For std::sort

// Function to perform binary search
int binarySearch(const std::vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        // Check if the target is present at mid
        if (arr[mid] == target)
            return mid;

        // If the target is greater, ignore the left half
        if (arr[mid] < target)
            left = mid + 1;
        // If the target is smaller, ignore the right half
        else
            right = mid - 1;
    }

    // If the target is not found, return -1
    return -1;
}

int main() {
    std::vector<int> arr = {3, 6, 8, 12, 14, 17, 25, 29, 31, 36, 42, 47, 53, 55, 62};
    int target=17;

    // Input the target element to be searched
    
    std::cin >> target;

    // Ensure array is sorted before searching
    std::sort(arr.begin(), arr.end());

    int result = binarySearch(arr, target);

    if (result != -1)
        std::cout << "Element found at index " << result << std::endl;
    else
        std::cout << "Element not found" << std::endl;

    return 0;
}

// git init
// git add README.md
// git commit -m "first commit"
// git branch -M main
// git remote add origin https://github.com/artivermads/firstrepo.git
// git push -u origin main