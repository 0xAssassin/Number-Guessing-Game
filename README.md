# 🎯 Number Guessing Game in C

A simple **Number Guessing Game** written in C. The program generates a random number between **1 and 100**, and the user has to guess it. After every incorrect guess, the program gives a hint to help the user reach the correct number.

## 📝 Description

This project demonstrates the use of **random number generation, loops, conditional statements, user input, and attempt counting** in C.

The program generates a random number using `rand()` and `srand()` with the current time as a seed. The user keeps entering guesses until the generated number is correctly guessed.

## ⚙️ How It Works

1. `srand(time(0))` seeds the random number generator using the current time.
2. `rand()` generates a random integer.
3. The `%` operator is used to convert the random number into the range **1 to 100**.
4. The user enters a guess.
5. The program compares the guess with the generated number.
6. It displays:

   * **Higher number please!** when the guess is too small.
   * **Lower number please!** when the guess is too large.
   * **You got it!** when the guess is correct.
7. The number of attempts is counted and displayed when the user wins.

## 🧠 Concepts Used

* Variables and data types
* `printf()` and `scanf()`
* `if`, `else if`, and `else`
* `for` loop
* `break` statement
* Random number generation
* `rand()`
* `srand()`
* `time()`
* Modulus `%`
* Attempt counting

## ▶️ Example

```text
Enter a number between 1 and 100: 50
Higher number please!

Enter a number between 1 and 100: 75
Lower number please!

Enter a number between 1 and 100: 63
You got it!
You guessed the number 63 in 3 attempt
```

## 🚀 How to Run

Compile the program using a C compiler:

```bash
gcc guessing_game.c -o guessing_game
```

Run it:

```bash
./guessing_game
```

On Windows:

```bash
guessing_game.exe
```

## 📚 Purpose

This project is created for practicing basic C programming concepts and understanding how random numbers, loops, conditions, and user input work together in a small interactive program.

