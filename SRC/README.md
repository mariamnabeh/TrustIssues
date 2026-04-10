# TrustIssues 🔒 
**"Because if I don't encrypt it, I don't sleep."**

TrustIssues is a robust, local digital vault built in C++. It’s designed for users who want a secure, "no-nonsense" way to protect sensitive notes and files on their machine. Using industry-standard cryptographic principles, it ensures your data remains a mystery to everyone—including your OS.

## 🚀 Key Features
- **Zero-Knowledge Architecture:** We never store your raw password. Everything is verified via salted SHA-256 hashes.
- **Binary Shielding:** Files are saved in a custom binary format. If someone opens them in a text editor, they'll just see digital noise.
- **Memory Safety:** Sensitive data is cleared from the RAM as soon as the operation is finished to prevent memory-dump attacks.
- **Lightweight & Fast:** Optimized C++ logic for near-instant encryption/decryption of text-based data.

## 🏗️ Project Architecture
The project follows a modular C++ structure to ensure clean code and easy debugging:

- `CipherEngine`: The heart of the vault. Handles the mathematical scrambling of data.
- `AuthManager`: The gatekeeper. Manages user authentication and secure hashing.
- `DiskMaster`: Handles safe Binary I/O operations to prevent data corruption.
- `VaultUI`: A clean, command-line interface for managing your secrets.

## 🛠️ Tech Stack
- **Language:** C++17
- **Security:** SHA-256 for integrity & custom Bitwise/Block encryption logic.
- **Storage:** Binary Serialization.

## 💻 Installation & Usage
1. **Clone the vault:**
   ```bash
   git clone [https://github.com/your-username/TrustIssues.git](https://github.com/your-username/TrustIssues.git)