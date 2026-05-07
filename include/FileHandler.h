#pragma once
#include <string>
#include <vector>
class FileHandler{
public:
static std:: vector <unsigned char> readfile (const std:: string & filepath); 
static void writefile  (const std:: string & filepath, const std::vector<unsigned char>& data) ;
static void encryptDecrypt(std::vector<unsigned char>& data, const std::string& key);
};
