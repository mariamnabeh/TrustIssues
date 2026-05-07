#include "FileHandler.h"
#include <fstream>

using namespace std;

vector<unsigned char> FileHandler::readfile(const string& filePath) {
    ifstream file(filePath, ios::binary | ios::ate); // ate =At The End

    if (!file.is_open()) {
        return {}; // Return empty if file not found
    }

    streamsize size = file.tellg(); // AS We use ate to reach theend , so if we use telling to know , which  char we stop in . that char =size
    file.seekg(0, ios::beg); // so start from beg agin , bec weknow the ize now.

    vector<unsigned char> buffer(size); // buffer to:

    file.read(reinterpret_cast<char*>(buffer.data()), size); // Read the file data into our buffer, casting to char* because read() expects it

    return buffer;

}

// add XOR logic:

void FileHandler:: encryptDecrypt(vector<unsigned char>& data, const string& key) {
    if (key.empty()) return;

    size_t keyLength = key.length();
    for (size_t i = 0; i < data.size(); ++i) {
        data[i] = data[i] ^ key[i % keyLength];
    }
}

void FileHandler::writefile(const string& filePath, const vector<unsigned char>& data) {
    ofstream file(filePath, ios::binary); // take the file and put it into harddesk 
    if (file.is_open()) {
        file.write(reinterpret_cast<const char*>(data.data()), data.size()); // write the binary char into new file
    }

   
}