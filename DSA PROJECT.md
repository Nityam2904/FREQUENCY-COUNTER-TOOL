# 🔢 Frequency Counter Tool - DSA Lab Project

A comprehensive C program that analyzes arrays and counts the frequency of each unique element using algorithmic approaches. Developed as part of Data Structures and Algorithms coursework.

## 📌 Project Overview

**Course:** Data Structures and Algorithms Using C  
**Activity Title:** Frequency Counter Tool  
**Team Number:** 13  
**Institution:** BTech CSE - CSBS  
**Subject Code:** 25ESC02A  
**Faculty In-charge:** Dr. SREENIVASAN

## 🎯 Objective

To develop an efficient frequency counter tool that:
- Analyzes arrays of elements
- Determines occurrence count of each unique element
- Demonstrates understanding of array traversal and nested loop operations
- Implements frequency analysis using basic algorithmic logic

## ✨ Features

- ✅ Count frequency of all elements in an array
- ✅ Identify most and least frequent elements
- ✅ Handle edge cases (all unique, all identical, mixed)
- ✅ Dynamic memory allocation
- ✅ Clean formatted output with tables
- ✅ Input validation and error handling

## 🚀 Algorithm

**Time Complexity:** O(n²)  
**Space Complexity:** O(n)

### Steps:
1. Accept array size and elements from user
2. Initialize visited array to track processed elements
3. For each element:
   - Check if already counted using visited array
   - Count occurrences in remaining array
   - Mark duplicates as visited
4. Display element frequencies in formatted table
5. Show most and least frequent elements

## 💻 Implementation

**Language:** C  
**IDE:** Dev-C++ 5.11  
**Compiler:** MinGW GCC (TDM-GCC 4.9.2 64-bit)  
**OS:** Windows 10/11

## 📊 Test Cases

### Test Case 1: Mixed Frequency Distribution
**Input:** `[5, 2, 8, 5, 9, 2, 5, 8, 2, 1]`  
**Output:**
```
Element    Frequency
5          3
2          3
8          2
9          1
1          1

Most Frequent: 5 (3 times)
Least Frequent: 9 (1 time)
```

### Test Case 2: All Unique Elements
**Input:** `[10, 20, 30, 40, 50]`  
**Output:** Each element appears once

### Test Case 3: All Identical Elements
**Input:** `[7, 7, 7, 7, 7, 7]`  
**Output:** Element 7 appears 6 times

## 🔧 How to Run

### Using Dev-C++:
1. Open `frequency_counter.c` in Dev-C++
2. Press F9 to compile and run
3. Enter array size when prompted
4. Input array elements
5. View frequency analysis results

## 📈 Performance Analysis

| Array Size | Comparisons | Execution Time |
|------------|-------------|----------------|
| 10         | 55          | ~0.001 ms      |
| 100        | 5,050       | ~0.05 ms       |
| 1,000      | 500,500     | ~5 ms          |
| 10,000     | 50,005,000  | ~500 ms        |

**Note:** Best suited for arrays with n < 1,000 elements

## 🎓 Learning Outcomes

- Array manipulation and traversal techniques
- Nested loop optimization strategies
- Algorithm complexity analysis (Big O notation)
- Memory management in C (malloc, calloc, free)
- Real-world problem-solving using basic data structures

## 🌟 Real-World Applications

- 📊 Student grade distribution analysis
- 🛒 E-commerce product purchase analytics
- 🗳️ Election vote counting systems
- 📱 Social media trending topic analysis
- 🏭 Quality control defect pattern identification
- 📡 Network traffic monitoring

## ⚡ Possible Optimizations

1. **Sorting Approach:** O(n log n) - Sort first, then count in single pass
2. **Hash Table:** O(n) average case - Use hash maps for faster lookup
3. **Counting Sort:** O(n + k) - For limited integer ranges

## 👥 Team Members

- **Nityam Ranjan** (JUUG25BTECH27501)
- **Aryan Raj** (JUUG25BTECH23109)
- **Deepak Kumar** (JUUG25BTECH25476)

## 📚 References

- Cormen et al. - *Introduction to Algorithms* (3rd ed.)
- Kernighan & Ritchie - *The C Programming Language* (2nd ed.)
- Karumanchi - *Data Structures and Algorithms Made Easy*

## 📜 License

This project is developed for educational purposes as part of academic coursework.

## 🤝 Contributing

This is an academic project. For improvements or suggestions, feel free to open an issue.

## 📧 Contact

For queries related to this project, contact through institutional channels.

---

**⭐ If you find this helpful, please star the repository!**

*Developed with 💻 for DSA Lab Activity - Team 13*
```
- Algorithm flowchart
- Compilation and execution instructions
- Performance analysis data

Professors can clone the repository or view code directly in the 
browser for easy review and testing.
