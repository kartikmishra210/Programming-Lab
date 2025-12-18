# Programming Lab – Semester II

This repository contains my **Programming Lab (Semester II)** work from my undergraduate program. It includes basic C programs written during lab classes, organized **date-wise** as they were taught and practiced.

This repo is primarily for **learning, revision, and academic reference**.

---

## 📚 About

* **Course**: Programming Lab – Semester II
* **Language**: C
* **Focus**: Programming fundamentals (I/O, arithmetic, conditionals, variables)
* **License**: GNU GPL‑3.0

The programs here follow **college lab instructions**, not production or competitive coding standards.

---

## 🗂 Repository Structure

Programs are organized by **lab date**, matching how experiments were conducted in class:

```text
Programming_Lab/
├── LICENSE
└── Programs/
    ├── 8December/
    │   ├── Hello_World.c
    │   ├── KIIT.c
    │   ├── University.c
    │   ├── University2.c
    │   └── H.c
    ├── 11December/
    │   ├── Arithmetic.c
    │   ├── Area_Circle.c
    │   ├── F_to_C.c
    │   ├── Seconds_Conversion.c
    │   └── Swap_3_var.c
    ├── 15December/
    │   ├── Area_Triangle.c
    │   ├── Marks.c
    │   ├── Swap_2_var.c
    │   └── Time_Adder.c
    └── 18December/
```

Each folder contains simple standalone `.c` programs written during that lab session.

---

## 🛠️ Compilation & Execution

Compile any program using `gcc`:

```bash
gcc program_name.c -o program_name
./program_name
```

### Programs using `math.h`

Some programs (e.g. `Area_Triangle.c`) use functions from **`math.h`**, which requires linking against the math library.

Compile such programs with the **`-lm`** flag:

```bash
gcc Area_Triangle.c -o area_triangle -lm
./area_triangle
```

Example (general form):

```bash
gcc program_name.c -o program_name -lm
```

---

## 📌 Notes

* Code is intentionally **simple and beginner‑friendly**
* Naming follows lab instructions rather than strict conventions
* Some programs may not handle edge cases — this is expected for lab work

---

## 🎯 Purpose of This Repository

* Maintain a clean record of lab programs
* Revise concepts before exams
* Track progression across lab sessions

⚠️ **Do not copy‑paste this code for direct submission** if you are a student — use it only as a reference.

---

## 📝 License

This repository is licensed under the **GNU General Public License v3.0**.

---

## ✍️ Author

**Kartik Mishra**
Undergraduate Student
