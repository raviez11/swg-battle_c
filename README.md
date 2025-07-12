# swg-battle_c
# Snake-Water-Gun Game in C (0-1-2 Version) 🐍💧🔫

This is a simple terminal-based **Snake-Water-Gun** game built in **C language**, where you play against the computer by choosing:

- `0` for 🐍 Snake
- `1` for 💧 Water
- `2` for 🔫 Gun

The game is similar to Rock-Paper-Scissors, with the following rules:

---

## 🧠 Rules

| Player's Choice | Computer's Choice | Result        |
|-----------------|-------------------|---------------|
| Snake (0)       | Water (1)         | 🐍 Snake Wins |
| Water (1)       | Gun (2)           | 💧 Water Wins |
| Gun (2)         | Snake (0)         | 🔫 Gun Wins   |
| Same Choice     | Same Choice       | 🤝 Draw       |

---

## 📥 How to Run

1. **Clone the repo** or **download** the `snake_water_gun.c` file.

2. **Compile and run** the C program using GCC or any C compiler:

```bash
gcc snake_water_gun.c -o swg
./swg
✅ Requirements
GCC compiler or any C compiler
Command line terminal
