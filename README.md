# CS-210-projects
These are the completed projects that I created and finished in my class CS-210 Programming Languages at SNHU.

# 🛒 Corner Grocer Item Frequency Tracker

This C++ application was developed as part of the SNHU CS program for Chada Tech. It reads grocery purchase data from a file and allows users to:

- Search the frequency of a specific item.
- Display the frequency of all items.
- Display a histogram of item frequency.
- Generate a frequency data file (`frequency.dat`) for backup.

---

## 📌 Project Summary

The program solves the problem of tracking item purchase frequency for the Corner Grocer, helping the store optimize its layout based on actual customer purchasing habits. It reads from a file containing a list of purchased items and processes the data into a searchable and visual format.

---

## 💡 Features

- Menu-driven interface with four options.
- Use of `std::map` to count item frequencies efficiently.
- File output to persist frequency data.
- Histogram display for visual insights.
- Built using object-oriented design with class encapsulation.

---

## ✅ Technologies & Concepts

- **Language**: C++
- **Concepts**: OOP (Classes), File I/O, Maps, Vectors, Loops, Functions
- **IDE**: Visual Studio 2022
- **Standard**: C++17

---

## 🛠 Class Design

- A custom `ItemTracker` class manages all operations:
  - Private: item frequency map
  - Public: methods to load data, search, display list, and generate histogram

---

## 📷 Screenshots

*Insert screenshots of your working program here, such as menu display and histogram output*

---

## 🧠 Reflection

### What did I do well?
I implemented clean and modular code with meaningful function names and good use of C++ STL. I also ensured the program was user-friendly and output was readable.

### What could be improved?
Adding more robust input validation and error logging would improve the program’s resilience. Also, replacing `std::map` with `std::unordered_map` would improve performance for larger datasets.

### Most challenging part?
Getting the histogram to align properly with item names of different lengths. I solved this using `<iomanip>` and spacing tricks.

### Skills gained:
- Writing readable, maintainable C++ code
- Using classes and file I/O
- Applying STL containers for efficient data handling
- Creating user-interactive console applications

---

## 📂 File Structure


