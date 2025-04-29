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

✅ How to Run the Code in Visual Studio

Prerequisites:
- Visual Studio installed on your machine.
- A C++ compiler (Visual Studio comes with the MSVC compiler by default).
- The C++ code file sortingAlgorithms_vs_time.cpp.

Steps to Compile and Run in Visual Studio:

1. Open Visual Studio:
   - Launch Visual Studio and create a new Console App project (make sure it's a C++ project).

2. Add the C++ Code File:
   - Once the project is created, right-click on the Source Files folder in the Solution Explorer panel.
   - Choose Add > New Item > C++ File (.cpp).
   - Name the file sortingAlgorithms_vs_time.cpp and paste the contents of your sorting algorithm code into this file.

3. Build the Project:
   - Click on Build in the top menu bar, and select Build Solution (or press Ctrl+Shift+B).
   - Visual Studio will compile the code and produce an executable.

4. Run the Program:
   - After the build is successful, click Debug in the top menu bar, and select Start Debugging (or press F5).
   - The program will run, and you will see the output in the Output window.

5. Check the Output:
   - The average execution time for each sorting algorithm at different input sizes will be displayed in the console.
