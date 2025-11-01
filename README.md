# 🔐 Classical Ciphers in C

![Language](https://img.shields.io/badge/Language-C-blue.svg)
![Status](https://img.shields.io/badge/Status-Active-success.svg)
![License](https://img.shields.io/badge/License-Free-lightgrey.svg)
![Category](https://img.shields.io/badge/Topic-Cryptography-purple.svg)

---

## 📘 Overview

This repository contains implementations of **classical cryptography algorithms** written in **C**.  
Currently, it includes:

1. 🥇 **Caesar Cipher**
2. 🥈 **Vigenère Cipher**

These algorithms demonstrate how traditional encryption techniques work using basic mathematical logic.  
Future updates will include more ciphers like **Playfair**, **Hill**, and **Rail Fence**.

---

## 💡 About Classical Ciphers

Before the rise of modern cryptography, classical ciphers were widely used to secure communication.  
They rely on **substitution** (replacing letters) or **transposition** (rearranging letters).

| Cipher Name     | Cipher Type                | Technique                  | Security Level |
|-----------------|---------------------------|-----------------------------|----------------|
| Caesar Cipher   | Substitution Cipher        | Single alphabet shift       | 🔓 Basic |
| Vigenère Cipher | Polyalphabetic Substitution| Keyword-based shifting      | 🔒 Moderate |

---

## 🧩 Implemented Ciphers

### 🥇 Caesar Cipher

**Type:** Substitution Cipher  
**Key:** Integer (e.g., `3`, `4`, etc.)

#### 🔹 Logic
Each alphabet letter is shifted by the key value within the alphabet.  
When the alphabet’s end is reached, it wraps around to the beginning.

#### 🔹 Formula
```
E(x) = (x + key) mod 26
```

#### 🔹 Example
```
Plaintext : HELLO
Key       : 3
Ciphertext: KHOOR
```

#### 🔹 File
`caesar_cipher.c`

---

### 🥈 Vigenère Cipher

**Type:** Polyalphabetic Substitution Cipher  
**Key:** Word or keyword (e.g., `"LOKI"`)

#### 🔹 Logic
Each letter of the plaintext is shifted based on the corresponding character of the key.  
The key repeats itself until it matches the length of the plaintext.

#### 🔹 Formula
```
E(x) = (P + K) mod 26
```

#### 🔹 Example
```
Plaintext : LOKESWAR REDDY
Keyword   : LOKI
Ciphertext: WZOYWAMU BSOHS
```

#### 🔹 File
`vigenere_cipher.c`

---

## ⚙️ How to Compile and Run

### ✅ Using GCC
```bash
gcc caesar_cipher.c -o caesar
./caesar
```

```bash
gcc vigenere_cipher.c -o vigenere
./vigenere
```

---

## 🧑‍💻 Example Runs

### ▶️ Caesar Cipher
```
Enter plain text: Lokeswar Reddy
Enter the key value: 4
Cipher Text: Psogiwa Vihhc
```

### ▶️ Vigenère Cipher
```
Enter plain text: Lokeswar Reddy
Enter key: loki
Cipher Text: Wzoywamu Bsohs
```

---

## 📁 Project Structure
```
Classical-Ciphers/
│
├── caesar_cipher.c        # Caesar Cipher implementation
├── vigenere_cipher.c      # Vigenère Cipher implementation
├── README.md              # Project documentation
└── (more ciphers coming soon...)
```

---

## 🚀 Upcoming Additions

| Cipher Name | Type | Status |
|--------------|-------|---------|
| Playfair Cipher | Digraph substitution | ⏳ Planned |
| Hill Cipher | Matrix-based cipher | ⏳ Planned |
| Rail Fence Cipher | Transposition cipher | ⏳ Planned |
| Autokey Cipher | Keyword-based | ⏳ Planned |
| Columnar Transposition | Rearrangement cipher | ⏳ Planned |

Each will include both **encryption** and **decryption** implementations.

---

## 🧾 Notes

- Non-alphabetic characters remain **unchanged**.  
- Case (uppercase/lowercase) is **preserved**.  
- For decryption, **subtract** the key instead of adding it.  
- Increase the `SIZE` constant to handle longer messages.  
- Works on all major C compilers.

---

## 👨‍💻 Author

**Lokeswar Reddy**  
🎓 Engineering Student  
💻 Interests: Cryptography, Computer Security, and Programming  

> “Learning classical ciphers is the first step to understanding the logic behind modern encryption.”

---

## 🏷️ Repository Tags
`#C` `#Cryptography` `#ClassicalCiphers` `#Encryption` `#CaesarCipher` `#VigenereCipher`

---

### 📜 License
This project is open-source and free to use for educational purposes.

---

> 💡 *Understanding classical cryptography builds the foundation for securing the future.*
