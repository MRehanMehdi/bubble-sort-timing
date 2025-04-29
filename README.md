# Sorting Algorithms vs Time

This project is part of the **Analysis of Algorithm** course assignment. It empirically analyzes the time complexity of four sorting algorithms—**Bubble Sort**, **Selection Sort**, **Insertion Sort**, and **Merge Sort**—by measuring their execution time on different input sizes.

## 📄 File Name
**sortingAlgorithms vs time.cpp**

## 🧪 Sorting Algorithms Implemented
- Bubble Sort
- Selection Sort
- Insertion Sort
- Merge Sort

Each sorting algorithm is tested on these arrays with five runs per input size. The **average execution time** is calculated and printed in microseconds.

## 🕒 Time Measurement
The program uses C++'s `chrono` library (`high_resolution_clock`) to record precise execution times for each sorting algorithm.

## ✅ How to Run

### Prerequisites
- A C++ compiler (e.g., g++, clang++)
- Any modern C++ IDE or command-line environment

### Compilation (using g++)
```bash
g++ "sortingAlgorithms vs time.cpp" -o sortAnalysis
