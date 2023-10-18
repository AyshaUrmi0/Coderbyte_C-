// Arith Geo

// Have the function ArithGeo(arr) take the array of numbers stored in arr and return the string "Arithmetic" if the sequence follows an arithmetic pattern or return "Geometric" if it follows a geometric pattern. If the sequence doesn't follow either pattern return -1. An arithmetic sequence is one where the difference between each of the numbers is consistent, whereas in a geometric sequence, each term after the first is multiplied by some constant or common ratio. Arithmetic example: [2, 4, 6, 8] and Geometric example: [2, 6, 18, 54]. Negative numbers may be entered as parameters, 0 will not be entered, and no array will contain all the same elements.



#include <iostream>
#include <cmath>

using namespace std;

string ArithGeo(int arr[], int size) {
    if (size < 2) {
        return "-1"; 
    
    }

    int diff = arr[1] - arr[0];
    int ratio = arr[1] / arr[0];
    bool isArithmetic = true;
    bool isGeometric = true;
    bool isAllSameElements = true;

    for (int i = 1; i < size - 1; i++) {
        if (arr[i + 1] - arr[i] != diff) {
            isArithmetic = false;
        }
        if (arr[i + 1] / arr[i] != ratio) {
            isGeometric = false;
        }
        if (arr[i] != arr[i + 1]) {
            isAllSameElements = false;
        }

        // Check for negative numbers and all elements being the same.
        if (arr[i] == 0 || arr[i + 1] == 0) {
            return "-1"; // Return -1 if 0 is present.
        }
    }

    if (isArithmetic) {
        return "Arithmetic";
    } else if (isGeometric) {
        return "Geometric";
    } else if (isAllSameElements) {
        return "Same element";
    } else {
        return "-1";
    }
}

int main() {
    int arr1[] = {2, 4, 6, 8}; // Arithmetic
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    cout << ArithGeo(arr1, size1) << endl;

    int arr2[] = {2, 6, 18, 54}; // Geometric
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    cout << ArithGeo(arr2, size2) << endl;

    int arr3[] = {2, 4, 8, 16}; // Neither
    int size3 = sizeof(arr3) / sizeof(arr3[0]);
    cout << ArithGeo(arr3, size3) << endl;

    int arr4[] = {-2, -4, -6, -8}; // Negative Arithmetic
    int size4 = sizeof(arr4) / sizeof(arr4[0]);
    cout << ArithGeo(arr4, size4) << endl;

    int arr5[] = {3, 3, 3, 3}; // Same element
    int size5 = sizeof(arr5) / sizeof(arr5[0]);
    cout << ArithGeo(arr5, size5) << endl;

    return 0;
}