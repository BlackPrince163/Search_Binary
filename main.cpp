#include <iostream>

int main() {

}

int Search_Binary (int arr[], int left, int right, int key) {
    int midd = 0;
    while (1) {
        midd = (left + right) / 2;

        if (key < arr[midd])
            right = midd - 1;
        else if (key > arr[midd])
            left = midd + 1;
        else
            return midd;

        if (left > right)
            return -1;
    }
}