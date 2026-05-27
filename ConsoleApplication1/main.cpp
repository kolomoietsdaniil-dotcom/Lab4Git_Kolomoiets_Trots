#include <iostream>
#include "search_methods.h"
#include "windows.h"

int main() {
	SetConsoleCP(65001);
	SetConsoleOutputCP(65001);
    
    int arr[] = { 1, 3, 5, 7, 11, 15, 19, 23, 29, 31 };
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 23;

    std::cout << "--- Програма пошуку в масивах ---\n";

    int index = goldenSectionSearch(arr, size, target);
    if (index != -1) {
        std::cout << "Метод золотого перерізу: елемент знайдено на індексі " << index << "\n";
    }
    else {
        std::cout << "Метод золотого перерізу: елемент не знайдено.\n";
    }

    int indexBinary = binarySearch(arr, size, target);
    if (indexBinary != -1) {
        std::cout << "Бінарний пошук: елемент знайдено на індексі " << indexBinary << "\n";
    }
    else {
        std::cout << "Бінарний пошук: елемент не знайдено.\n";
    }

    return 0;
}