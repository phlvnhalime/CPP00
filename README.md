# 📦 CPP00 – Basics of Object-Oriented Programming in C++

Welcome to my repository for **CPP00**, the first module of the C++ curriculum at **42 School**.  
This project introduces the fundamentals of **Object-Oriented Programming** using the **C++98 standard**.

---

## 🔍 Overview

This module covers key concepts in C++ such as:
- Namespaces  
- Classes & Member Functions  
- I/O Streams (`std::cout`, `std::cin`, etc.)  
- Initialization Lists  
- `static` and `const` Keywords  
- Code Structure & Memory Handling Basics  

The goal is to build a strong foundation in C++ by writing clean, readable, and maintainable code — all while adhering to the **C++98** standard.

---

## 🛠️ Compilation Rules

- **Compiler:** `c++`
- **Flags:** `-Wall -Wextra -Werror -std=c++98`
- ❌ No external libraries  
- ❌ No C++11 (or later) features  
- ❌ STL usage is **forbidden** until Module 08

---

## 📁 Project Structure

```plaintext
CPP00/
├── ex00/
├── ex01/
└── ex02/
```

Each folder contains a separate exercise that progressively builds on core C++ concepts.

---

## 📘 Exercises Summary

### 🗣️ ex00 – Megaphone

**Goal:**  
Create a simple program that converts input characters to uppercase, simulating a megaphone.

**Example:**
```bash
$ ./megaphone "hello world"
HELLO WORLD
```

**What I Learned:**
- Handling `argc` and `argv`
- String manipulation
- Basic use of `std::cout` and character functions like `toupper()`

### 📞 ex01 – My Awesome PhoneBook

**Goal:**  
Develop a command-line phonebook application with the following commands:
- `ADD`
- `SEARCH`
- `EXIT`

**Constraints:**
- Fixed-size array (max 8 contacts)
- No dynamic memory allocation
- Tabular output (10-character width formatting)

**What I Learned:**
- OOP with two classes: `PhoneBook` and `Contact`
- Data encapsulation using private/public access specifiers
- I/O formatting with `<iomanip>`
- String truncation and formatting logic

### 🏦 ex02 – The Job Of Your Dreams

**Goal:**  
Re-implement the missing `Account.cpp` file based on the provided interface and test logs. Simulate account transactions.

**Files:**
- `Account.hpp` – Class interface
- `tests.cpp` – Testing logic
- `Account.cpp` – (To be implemented)

**What I Learned:**
- Implementing behavior from an interface and logs
- Using static attributes for shared class data
- Logging object lifecycle (constructor/destructor)
- Proper separation of interface and implementation

---

## 💡 Key Concepts Practiced

🧠 Object-Oriented Programming fundamentals  
🚀 Transition from C to C++ (syntax & mindset)  
🧱 Class design, encapsulation, and clean architecture  
⚠️ Compiler flags and resource management basics  

---

## 📣 Final Notes

This module was a crucial stepping stone in my transition from C to C++. It introduced me to structured and scalable programming using OOP principles.

I made sure each exercise is beginner-friendly and well-documented for future reference.

💬 *"By Odin, by Thor! Use your brain!!!"* – the subject says it best.

If you're beginning your C++ journey, this is a great place to start.  
Feel free to explore each folder for more detailed explanations and comments. 🚀

---

**Author:** Halime Pehlivan.  
**School:** 42 Heilbronn
