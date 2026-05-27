#include "search_methods.h"
#include <cmath>

int goldenSectionSearch(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;

    double goldenRatio = (3.0 - std::sqrt(5.0)) / 2.0;

    while (left <= right) {
        int mid = left + (right - left) * goldenRatio;

        if (arr[mid] == target) {
            return mid;
        }

        if (arr[mid] < target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    return -1;
}

int binarySearch(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) return mid;
        if (arr[mid] < target) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}