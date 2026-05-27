#include "search_methods.h"
#include <cmath> // Потрібно для функції sqrt()

int goldenSectionSearch(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;

    // Вираховуємо коефіцієнт золотого перерізу (приблизно 0.382)
    double goldenRatio = (3.0 - std::sqrt(5.0)) / 2.0;

    while (left <= right) {
        // Точка поділу масиву за золотим перерізом
        int mid = left + (right - left) * goldenRatio;

        if (arr[mid] == target) {
            return mid; // Елемент знайдено, повертаємо його індекс
        }

        if (arr[mid] < target) {
            left = mid + 1; // Шукаємо в правій частині
        }
        else {
            right = mid - 1; // Шукаємо в лівій частині
        }
    }
    return -1; // Якщо цикл закінчився, елемента немає
}