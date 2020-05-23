#include "String.h"

String::String()
{}
String::String(const char *s)
{
    str = new char[strlen(s)+1];
    strcpy(str, s);
}

String String::operator+(String other)
{
    String result;
    result.str = new char[strlen(str)+strlen(other.str)+1];
    strcpy(result.str, str);
    strcat(result.str, other.str);
    return result;
}
String& String::operator=(const String& other)
{
    delete[] str;
    str = new char(strlen(other.str)+1);
    strcpy(str, other.str);
    return *this;
}

bool String::operator==(String other)
{
    if(strcmp(str, other.str) == 0)
        return true;
    else
        return false;
}
const char* String::getStr()const
{
    return str;
}


String::~String()
{
    delete[] str;
}
std::ostream& operator<<(std::ostream& os, String other)
{
    os << other.getStr();
    return os;
}

