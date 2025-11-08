##include <iostream>
#include <array>


template <typename T, std::size_t N>
int binarySearchFirst(const std::array<T, N>& arr, T target) {
    int left = 0;
    int right = N - 1;
    int result = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            result = mid;
            right = mid - 1; 
        }
        else if (arr[mid] < target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    return result;
}

int main() {
    std::array<int, 10> a = { 2, 5, 6, 6, 8, 12, 25, 25, 25, 27 };
    int target;

    std::cout << "Enter number to search: ";
    std::cin >> target;

    int result = binarySearchFirst(a, target);

    std::cout << result << std::endl;

    return 0;
}
