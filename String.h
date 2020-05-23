#ifndef STRING_H
#define STRING_H
#include <iostream>
#include <cstring>

class String
{
public:
    String();
    String(const char *s);
    String operator+(String other);
    String& operator=(const String& other);
    bool operator==(String other);
    const char* getStr()const;
    ~String();

private:
    char* str;
};
std::ostream& operator<<(std::ostream& os, String other);
#endif // STRING_H
