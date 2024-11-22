# C Programming First Midterm Exam

## Overview

This repository contains solutions for the first midterm exam of the "C Programming" course, held on October 24, 2024. The exam consisted of multiple questions that required solving problems using C programming, involving concepts such as Roman numeral conversion, palindrome checking, calendar calculations, and base conversions.

## Contents

### 1. Roman Numerals Conversion (`midExam_a.c`)

- **Objective**: Convert a given integer (between 1 and 3999) to Roman numerals using switch statements.
- **Key Points**:
  - The program repeatedly asks the user for input and converts the integer to a Roman numeral.
  - The conversion uses only `switch` statements to determine the Roman numeral representation for each digit.
  - If the user enters `0`, the program proceeds to the next question.

### 2. Palindrome Check (`midExam_b.c`)

- **Objective**: Determine if a given integer is a palindrome.
- **Key Points**:
  - A palindrome is a number that reads the same forward and backward.
  - The program allows user input between `1` and `214748364` and checks if the number is a palindrome by reversing its digits.
  - Entering `0` will end the current question and move to the next one.

### 3. Perpetual Calendar (`midExam_c.c`)

- **Objective**: Find the day of the week for a given date.
- **Key Points**:
  - The user inputs a date in the format `yyyy/mm/dd`.
  - The program calculates and displays the day of the week for:
    1. The first day of the given year.
    2. The first day of the given month.
    3. The given date itself.
  - The program considers leap years and starts the calendar from `0001/01/01` as Monday.

### 4. Base Conversion (`midExam_d.c`)

- **Objective**: Convert a given integer `M` to a given base `N`.
- **Key Points**:
  - The program takes two inputs: an integer `M` (between `1` and `65535`) and a base `N` (between `2` and `16`).
  - It then converts `M` to base `N` and prints the result.
  - Entering `(0, 0)` ends the current question and moves on to the next.

### 5. String and Base Conversion (`midExam_e.c`)

- **Objective**: Calculate the value of a string in a given base.
- **Key Points**:
  - The user inputs a string of length 4 and an integer `N` representing the base (between `2` and `16`).
  - The program converts the string to its numerical value in the specified base.
  - If the user enters `(0000, 0)`, the program moves to the next question.

### 6. Number Type Identification (`midExam_f.c`)

- **Objective**: Determine if a given number is an integer or a floating-point number.
- **Key Points**:
  - The user inputs a number between `-99.999999` and `99.999999`.
  - The program checks if the input is an integer or a floating-point value and outputs the result.
  - Entering `0` will end the program.

## Exam Rules Summary

- Only Dev-C++ is allowed for use during the exam.
- Code that does not compile in Dev-C++ is considered incorrect.
- The submitted code must produce the desired output.
- Late submissions are not accepted.
- Searching for information during the exam was prohibited.

## License

This project is licensed under the MIT License.

