# Simple C++ GUID Generator

A lightweight, object-oriented C++ utility class designed to generate random **GUIDs (Globally Unique Identifiers)** using standard libraries. It simulates a UUID version 4 structure (`8-4-4-4-12` hex characters format).

---

## ✨ Features
* **Object-Oriented Design:** Wrapped entirely inside a clean `Guid` class.
* **Pure C++:** No external dependencies required; relies only on `<iostream>` and `<cstdlib>`.
* **Standard Format:** Generates compliant 36-character strings (including hyphens).

---

## 🛠️ How It Works
The class uses standard pseudo-random number generation (`rand()`) seeded with the current system time (`srand(time(0))`) to pick random characters from a hexadecimal pool (`0-9`, `a-f`).

It strings them together to match the official GUID layout:
`xxxxxxxx-xxxx-xxxx-xxxx-xxxxxxxxxxxx`

---

## 🚀 Getting Started

### Prerequisites
You only need a C++ compiler supporting **C++11** or higher (like GCC, Clang, or MSVC).

### Compilation
Open your terminal and run the following command:
```bash
g++ -std=c++11 main.cpp -o GuidGenerator
