# 🔐 Password Strength Checker (C)

A simple and effective password strength checker written in C. This program evaluates the strength of a user-entered password based on multiple security criteria.

---

## 🚀 Features

- Checks for:
  - ✅ Minimum length (8 characters)
  - 🔡 Lowercase letters
  - 🔠 Uppercase letters
  - 🔢 Digits
  - 🔣 Special characters (`!@#$%^&*()`)
- Calculates a percentage-based strength score.
- Categorizes password as:
  - **Strong**
  - **Moderate**
  - **Weak**

---

## 📦 How to Compile and Run

### 🔧 Prerequisites

- GCC (GNU Compiler Collection)

### 🖥️ Compile

```bash
gcc password_strength.c -o checker
./checker
Example Output:
Enter your password: FastFab@123

Password Strength: 100%
Strong Password
