
# 🧮 Scientific Calculator (C)

## 📄 Description:
This is a command-line **Scientific Calculator** written in C. It provides a wide range of mathematical functionalities including:
- Basic arithmetic operations
- Trigonometric calculations
- Advanced mathematical functions
- Degree-radian conversions
- Factorial calculation
- Clear screen feature

It's an interactive menu-driven program suitable for learning C programming and implementing mathematical functions.

---

## 🚀 Features:
- ➕ Basic Arithmetic: `+`, `-`, `*`, `/`, `%`
- 📐 Trigonometric Functions: `sin`, `cos`, `tan`, `asin`, `acos`, `atan`
- 🔍 Advanced Functions: `sqrt`, `pow`, `log10`, `ln`, `exp`, `factorial`
- 🔁 Conversion: Degrees ↔ Radians
- 🧹 Clear Screen
- 🔄 Infinite Loop Menu until Exit

---

## 🧑‍💻 How to Run

### 🔧 Prerequisites:
- GCC or any standard C compiler
- Terminal or Command Prompt

### 🛠️ Compile the Code:
```bash
gcc -o calculator calculator.c -lm
```

> Note: `-lm` links the math library required for functions like `sin`, `cos`, `pow`, etc.

### ▶️ Run the Program:
```bash
./calculator
```

---

## 📸 Sample Output

```bash
===== SCIENTIFIC CALCULATOR =====
1. Basic Arithmetic Operations (+, -, *, /, %)
2. Trigonometric Functions (sin, cos, tan, etc.)
3. Advanced Operations (sqrt, pow, log, exp, factorial)
4. Convert Degrees to Radians
5. Convert Radians to Degrees
6. Clear Screen
0. Exit
Enter your choice: 1
Enter expression (e.g., 5 + 2): 5 * 6
Result = 30.00
```

---

## ⚠️ Notes:
- The factorial function only accepts non-negative integers.
- The program assumes angles for trigonometric functions are in **radians** unless converting from degrees.
- Trigonometric inverse functions return values in radians.

---

## 📁 File Structure

```
calculator.c              # Main source file
README_ScientificCalc.md  # Project documentation
```

---

## 🧑‍🏫 Author:
Pavan Kumar
