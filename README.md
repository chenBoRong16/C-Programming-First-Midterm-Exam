# C 程式設計第一次期中考試

## 概述
本存儲庫包含了 2024 年 10 月 19 日進行的「C 程式設計」課程第一次期中考試的解答。該考試包含多個問題，要求使用 C 程式設計來解決，涉及羅馬數字轉換、迴文數檢查、萬年曆計算、以及進制轉換等概念。每個問題都涵蓋了 C 語言中的不同方面，目的是考察學生的程式編寫能力和解決問題的思維能力。

## 內容
### 1. 羅馬數字轉換 (`midExam_a.c`)
- **目標**：將給定的整數（範圍為 1 到 3999）轉換為羅馬數字，使用 `switch` 語句進行轉換。
- **重點**：
  - 程式會不斷請求使用者輸入，並將整數轉換為羅馬數字。
  - 轉換過程中，程式僅使用 `switch` 語句來確定每個數字的羅馬數字表示形式。
  - 當使用者輸入 `0` 時，程式將進入下一個問題。

### 2. 迴文數檢查 (`midExam_b.c`)
- **目標**：判斷給定的整數是否為迴文數。
- **重點**：
  - 迴文數是一種正向和反向讀取都相同的數字。
  - 程式允許使用者輸入 1 到 214748364 之間的整數，並通過反轉數字來檢查它是否為迴文數。
  - 當輸入 `0` 時，結束當前問題並進入下一個問題。

### 3. 萬年曆 (`midExam_c.c`)
- **目標**：找出給定日期是星期幾。
- **重點**：
  - 使用者以 `yyyy/mm/dd` 的格式輸入日期。
  - 程式計算並顯示以下日期的星期幾：
    1. 該年份的第一天。
    2. 該月份的第一天。
    3. 使用者輸入的日期本身。
  - 程式會考慮閏年，並將起始日期 `0001/01/01` 視為星期一。

### 4. 進制轉換 (`midExam_d.c`)
- **目標**：將給定的整數 `M` 轉換為指定的進制 `N`。
- **重點**：
  - 程式接收兩個輸入：整數 `M`（範圍為 1 到 65535）和進制 `N`（範圍為 2 到 16）。
  - 它將 `M` 轉換為 `N` 進制並輸出結果。
  - 當輸入 `(0, 0)` 時，程式結束當前問題並進入下一個問題。

### 5. 字符串與進制轉換 (`midExam_e.c`)
- **目標**：計算給定進制中字符串的數值。
- **重點**：
  - 使用者輸入長度為 4 的字符串和一個代表進制的整數 `N`（範圍為 2 到 16）。
  - 程式將字符串轉換為指定進制的數值。
  - 如果使用者輸入 `(0000, 0)`，程式將進入下一個問題。

### 6. 數字類型判斷 (`midExam_f.c`)
- **目標**：判斷給定的數字是整數還是浮點數。
- **重點**：
  - 使用者輸入的數字範圍為 `-99.999999` 到 `99.999999`。
  - 程式檢查輸入的數字是否為整數或浮點數，並輸出結果。
  - 當輸入 `0` 時，程式結束。

## 考試規則概述
- 考試期間僅允許使用 Dev-C++ 編譯器。
- 不能在 Dev-C++ 中編譯的代碼將被視為錯誤。
- 提交的代碼必須產生所需的輸出。
- 不接受遲交的作業。
- 考試期間禁止查找任何外部信息。

## 文件結構說明
本存儲庫包含以下文件：
- **`midExam_a.c`**：羅馬數字轉換程式的實現。
- **`midExam_b.c`**：檢查給定整數是否為迴文數的程式。
- **`midExam_c.c`**：根據用戶輸入的日期計算該日期是星期幾。
- **`midExam_d.c`**：將給定的整數轉換為指定進制的程式。
- **`midExam_e.c`**：計算給定字符串在指定進制中的數值。
- **`midExam_f.c`**：判斷輸入數字是整數還是浮點數的程式。

這些文件代表了期中考試中每個問題的解答，旨在展示如何使用 C 語言進行各種實際問題的求解。每個程式都經過詳細的注釋，以便於理解其邏輯和實現方式。

## 授權
本專案採用 MIT 許可證授權，歡迎其他人查看、使用或修改這些程式碼。

