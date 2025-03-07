#ifndef MYSTRING_H
#define MYSTRING_H
#include <iostream>

class Mystring
{   friend Mystring operator-(const Mystring &obj); 
    friend bool operator==(const Mystring &lhs, const Mystring &rhs);
    friend bool operator!=(const Mystring &lhs, const Mystring &rhs);
    friend bool operator<(const Mystring &lhs, const Mystring &rhs);
    friend bool operator>(const Mystring &lhs, const Mystring &rhs);
    friend Mystring operator+(const Mystring &lhs, const Mystring &rhs);
    friend Mystring &operator+=(Mystring &lhs, const Mystring &rhs);
    friend Mystring operator*(const Mystring &lhs, int n);
    friend Mystring &operator*=(Mystring &lhs, int n);
    friend Mystring &operator++(Mystring &obj);
    friend Mystring operator++(Mystring &obj, int);
    
    friend std::ostream &operator<<(std::ostream &os, const Mystring &rhs);
    friend std::istream &operator>>(std::istream &is, Mystring &rhs);
private:
    char *str; // pointer to a char[] that holds a C-style string
public:
    Mystring(); // no args constructor
    Mystring(const char *s); // overloaded constructor
    Mystring(const Mystring &source); // Copy constructor
    Mystring(Mystring &&source); // Move constructor
    ~Mystring(); // destructor
    Mystring &operator=(const Mystring &rhs);
    Mystring &operator=(Mystring &&rhs);
    
    void display() const;
    int get_length() const;
    const char *get_str() const;

};

#endif // MYSTRING_H
