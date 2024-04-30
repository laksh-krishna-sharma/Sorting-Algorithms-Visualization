#include <bits/stdc++.h>
#include <cstdlib> 
#include <ctime>   

using namespace std;

#ifdef _WIN32
#include <windows.h>
void sleepMilliseconds(int milliseconds) {
    Sleep(milliseconds);
}
#else
#include <unistd.h>
void sleepMilliseconds(int milliseconds) {
    usleep(milliseconds * 1000); 
}
#endif

void bubbleSort(vector<int>& arr) {
    int n = arr.size();
    bool swapped;
    for (int i = 0; i < n-1; ++i) {
        swapped = false;
        for (int j = 0; j < n-i-1; ++j) {
            if (arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }
       
        system("clear"); 
       cout << "Visualization of Bubble Sort:" << endl;
        for (int k = 0; k < n; ++k) {
            cout << k << ": ";
            for (int l = 0; l < arr[k]; ++l) {
                cout << "*";
            }
            cout << endl;
        }

        sleepMilliseconds(500);
        
        if (!swapped) break;
    }
}

int main() {
    vector<int> arr = {64, 34, 25, 12, 22, 11, 90};

    cout << "Original array: ";
    for (int num : arr) {
        std::cout << num << " ";
    }
    cout << endl << endl;

    cout << "Visualization of Bubble Sort:" << endl;
    bubbleSort(arr);

    cout << "Sorted array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
