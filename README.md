# 🎯 Terminal Aimbot (C++)

A simple terminal shooting game built using **Modern C++**.

This project was created to practice core programming concepts such as:

* Arrays & Memory Indexing
* Loops & Game Logic
* Random Number Generation
* User Input Handling
* Function Design
* Basic Game Loop Architecture

---

## 🕹️ How the Game Works

1. A hidden enemy (`A`) spawns at a random index.
2. The player must type the correct position (0–4) to shoot.
3. Hit the correct index → **You Win**.
4. Miss → Try again.
5. Player can replay multiple rounds.

Example:

```
* * A * *
Enter Which Place To Shoot (0-4): 2
You Won!
```

---

## 🚀 Features

* Modern C++ random generator (`<random>`)
* Terminal game loop
* Dynamic enemy spawning
* Replay system
* Clean function-based structure

---

## 🧠 Concepts Learned

This project focuses on beginner-to-intermediate C++ fundamentals:

* Stack memory vs variables
* Array indexing
* While loops
* Functions vs declarations
* Scope & execution flow

---

## ⚙️ Build & Run

### Compile

```bash
g++ main.cpp -o terminal-aimbot
```

### Run

```bash
./terminal-aimbot
```

---

## 📁 Project Structure

```
terminal-aimbot-cpp/
│
├── main.cpp
├── log.h
├── new.cpp
└── README.md
```

---

## 🔮 Future Improvements

* Difficulty levels
* Moving enemy
* Score system
* Timer-based shooting
* ASCII UI

---

## 👨‍💻 Author

Built while learning low-level programming and C++ fundamentals.
