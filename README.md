# CP-Templates 🏆

<div align="center">
  <a href="https://leetcode.com">
    <img src="https://img.shields.io/badge/LeetCode-FFA116?style=for-the-badge&logo=leetcode&logoColor=white" alt="LeetCode">
  </a>
  <a href="https://codeforces.com">
    <img src="https://img.shields.io/badge/Codeforces-1F8ACB?style=for-the-badge&logo=codeforces&logoColor=white" alt="Codeforces">
  </a>
  <a href="https://icpc.global">
    <img src="https://img.shields.io/badge/ICPC-003366?style=for-the-badge&logo=acm&logoColor=white" alt="ICPC">
  </a>
  <a href="https://isocpp.org">
    <img src="https://img.shields.io/badge/C++-00599C?style=for-the-badge&logo=cplusplus&logoColor=white" alt="C++">
  </a>
  <a href="#">
    <img src="https://img.shields.io/badge/License-MIT-yellow.svg?style=for-the-badge" alt="MIT License">
  </a>
</div>

<div align="center">
  <h3>⚡ A comprehensive C++ template collection for competitive programming ⚡</h3>
</div>

## ✨ Features

- 🚀 **Optimized I/O operations** - Significantly faster input/output handling with `FastIO()`
- 🔤 **Type shortcuts** - Common type definitions like `long long` with simple macros
- 📦 **Container utilities** - Quick access to whole containers with macros like `all(v)`
- 🖨️ **Custom stream operators** - Print vectors and other data structures with a simple `cout`
- 📁 **File redirection** - Test solutions with input/output files using `UseFile()`
- 🧮 **Modular arithmetic** - Ready-to-use modulo constant for number theory problems
- 🧹 **Clean syntax** - Write readable, concise code for complex algorithms
- ⏱️ **Time-saving** - Focus on problem-solving logic rather than boilerplate code

## 📈 Benefits of Using Templates

### 1. ⏰ Reduced Coding Time
Templates eliminate the need to write repetitive boilerplate code, allowing you to focus on the actual problem-solving logic. This is particularly valuable in time-constrained competitions.

### 2. 🐛 Fewer Errors
Pre-tested and refined code snippets reduce the risk of syntax errors and common bugs, leading to more reliable solutions.

### 3. 🎨 Consistent Style
Maintain a consistent coding style across all your solutions, making your code more readable and easier to debug.

### 4. ⚡ Performance Optimization
Built-in optimizations for I/O operations and data handling can significantly improve execution time, which is crucial when facing tight time limits.

### 5. 📊 Enhanced Productivity
With common algorithms and data structures readily available, you can implement complex solutions more efficiently.

### 6. 🔄 Contest Adaptability
Templates can be quickly adjusted for different contest platforms and problem types, giving you versatility across competitions.

## 📝 How to Use

1. Include the template at the beginning of your solution
2. Utilize the predefined macros and functions in your code
3. Customize as needed for specific problems

## 💻 Example Usage

```cpp
// Include the template
#include "cp_template.h"

void solve() {
    int n;
    cin >> n;
    
    vi arr(n);
    for (auto &x : arr) cin >> x;
    
    sort(all(arr));
    cout << arr << '\n';  // Uses custom stream operator
}

signed main() {
    FastIO();
    solve();
    return 0;
}
```

## 🌐 Supported Platforms

- 🟠 **LeetCode** - Optimized for both contests and regular problem-solving
- 🔵 **Codeforces** - Streamlined for fast solution submission
- 🏆 **ICPC** - Comprehensive utilities for complex algorithmic challenges
- 🟢 **AtCoder** - Compatible with various contest formats
- 🔴 **Google Coding Competitions** - Suitable for Code Jam, Kick Start, etc.
- 💻 **HackerRank/HackerEarth** - Ready for various challenge types

## 🤝 Contributing

Contributions are welcome! If you have optimizations, additional utilities, or bug fixes, please submit a pull request.

## 📜 License

MIT License - Free to use, modify, and distribute for any competitive programming purpose.
