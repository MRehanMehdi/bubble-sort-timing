#include <iostream>
#include <vector>
#include <chrono> // for high precision timer
#include <numeric> // for accumulate

using namespace std;
using namespace chrono;

// Bubble Sort Implementation
void bubbleSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

// Function to measure average execution time
double measureAverageTime(vector<int> arr) {
    int runs = 5;
    vector<double> times;

    for (int i = 0; i < runs; ++i) {
        vector<int> temp = arr; // copy array
        auto start = high_resolution_clock::now();
        bubbleSort(temp);
        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<microseconds>(stop - start);
        times.push_back(duration.count());
    }

    double average = accumulate(times.begin(), times.end(), 0.0) / runs;
    return average;
}

int main() {
    // Arrays
    vector<int> Arr1 = { 1,2,3,4,5 };
    vector<int> Arr2 = { 1,2,3,4,5,6,7,8,9,10 };
    vector<int> Arr3;
    vector<int> Arr4;

    for (int i = 1; i <= 50; ++i) {
        Arr3.push_back(i);
    }
    for (int i = 1; i <= 100; ++i) {
        Arr4.push_back(i);
    }

    vector<vector<int>> arrays = { Arr1, Arr2, Arr3, Arr4 };
    vector<int> inputSizes = { 5, 10, 50, 100 };

    cout << "Input Size\tAverage Time (microseconds)" << endl;
    for (size_t i = 0; i < arrays.size(); ++i) {
        double avgTime = measureAverageTime(arrays[i]);
        cout << inputSizes[i] << "\t\t" << avgTime << endl;
    }

    return 0;
}
