===========================================================
                CLASSICAL CIPHERS IN C
===========================================================

A collection of classic encryption algorithms implemented in C.

-----------------------------------------------------------
1. OVERVIEW
-----------------------------------------------------------
This project demonstrates the implementation of classical
cryptography algorithms — currently includes:

1) Caesar Cipher
2) Vigenère Cipher

Each cipher converts plaintext input into encrypted ciphertext
using simple mathematical transformations on characters.
Future updates will include Playfair, Hill, and Rail Fence ciphers.

-----------------------------------------------------------
2. ABOUT CLASSICAL CIPHERS
-----------------------------------------------------------
Classical ciphers are substitution and transposition techniques
used in early cryptography. They work by shifting or rearranging
letters in a predictable pattern, forming the foundation of
modern encryption techniques.

-----------------------------------------------------------
3. CURRENTLY IMPLEMENTED CIPHERS
-----------------------------------------------------------

-----------------------------------------------------------
A. CAESAR CIPHER
-----------------------------------------------------------
Type: Substitution Cipher
Key: Integer value

Logic:
Each letter in the plaintext is shifted by the key value
within the alphabet. If the end of the alphabet is reached,
it wraps around.

Formula:
E(x) = (x + key) mod 26

Example:
Plaintext : HELLO
Key       : 3
Ciphertext: KHOOR

File: caesar_cipher.c

-----------------------------------------------------------
B. VIGENÈRE CIPHER
-----------------------------------------------------------
Type: Polyalphabetic Substitution Cipher
Key: Word or keyword (e.g., "LOKI")

Logic:
Each letter of the plaintext is shifted by the alphabetical
position of the corresponding letter in the key. The key
repeats until it matches the length of the plaintext.

Formula:
E(x) = (P + K) mod 26

Example:
Plaintext : LOKESWAR REDDY
Keyword   : LOKI
Ciphertext: WZOYWAMU BSOHS

File: vigenere_cipher.c

-----------------------------------------------------------
4. HOW TO RUN
-----------------------------------------------------------

Compile using GCC:
    gcc caesar_cipher.c -o caesar
    ./caesar

    gcc vigenere_cipher.c -o vigenere
    ./vigenere

Example Run - Caesar Cipher:
    Enter plain text: Lokeswar Reddy
    Enter the key value: 4
    Cipher Text: Psogiwa Vihhc

Example Run - Vigenère Cipher:
    Enter plain text: Lokeswar Reddy
    Enter key: loki
    Cipher Text: Wzoywamu Bsohs

-----------------------------------------------------------
5. PROJECT STRUCTURE
-----------------------------------------------------------
Classical-Ciphers/
│
├── caesar_cipher.c        -> Caesar Cipher implementation
├── vigenere_cipher.c      -> Vigenère Cipher implementation
├── README.txt             -> Project documentation
└── (more ciphers coming soon...)

-----------------------------------------------------------
6. UPCOMING ADDITIONS
-----------------------------------------------------------
Future planned ciphers:
- Playfair Cipher
- Hill Cipher
- Rail Fence Cipher
- Autokey Cipher

-----------------------------------------------------------
7. NOTES
-----------------------------------------------------------
- Non-alphabetic characters remain unchanged.
- Case (uppercase/lowercase) is preserved.
- To decrypt, subtract instead of adding key values.
- Increase SIZE in code to handle longer text.

-----------------------------------------------------------
8. AUTHOR
-----------------------------------------------------------
Author: Lokeswar Reddy
Description: Engineering student passionate about computer
security and cryptography. This repository demonstrates
foundational encryption algorithms implemented in pure C.

-----------------------------------------------------------
9. CONTRIBUTIONS
-----------------------------------------------------------
You can:
- Fork this repository
- Add new cipher algorithms
- Submit a pull request

===========================================================
END OF README
===========================================================
