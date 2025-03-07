#include <cstring>
#include <iostream>
#include "Mystring.h"

// No args constructor
Mystring::Mystring()
    : str{nullptr}{
    str = new char[1];
    *str = '\0';
}

// Overloaded constructor
Mystring::Mystring(const char *s)
    : str{nullptr} {
    if (s==nullptr){
        str = new char[1];
        *str = '\0';
    } else {
        str = new char[std::strlen(s)+1];
        std::strcpy(str,s);
    }
}

// Copy constructor
Mystring::Mystring(const Mystring &source)
    : str{nullptr}{
        str=new char[std::strlen(source.str) + 1];
        std::strcpy(str,source.str);
}

// Move constructor
Mystring::Mystring(Mystring &&source)
    :str(source.str){
        source.str=nullptr;
        std::cout << "Move constructor used" << std::endl;

}

// Destructor
Mystring::~Mystring()
{  
    delete [] str;
}

// Copy assignment
Mystring &Mystring::operator=(const Mystring &rhs){
    // std::cout << "Copy assignment" << std::endl;
    if (this == &rhs)
        return *this;
    delete [] this->str;
    str = new char[std::strlen(rhs.str)+1];
    std::strcpy(this -> str, rhs.str);
    return *this;    
}

// Move assignment
Mystring &Mystring::operator=(Mystring &&rhs){
    // std::cout << "Move assignment" << std::endl;
    if (this == &rhs)
        return *this;
    delete [] str;
    str = rhs.str;
    rhs.str = nullptr;
    return *this;
}

// Display method
void Mystring::display() const{
    std::cout << str << " : " << get_length() << std::endl;
}

// length getter
int Mystring::get_length() const {return std::strlen(str);}

// string getter
const char *Mystring::get_str() const {return str;};

//overloaded insertion operator
std::ostream &operator<<(std::ostream &os, const Mystring &rhs){
    os << rhs.str;
    return os;
}

//overloaded extraction operator
std::istream &operator>>(std::istream &in, Mystring &rhs){
    char *buff = new char[1000];
    in >> buff;
    rhs = Mystring{buff};
    delete [] buff;
    return in;
}

// minus operator
Mystring operator-(const Mystring &obj){
    char *buff = new char[std::strlen(obj.str)+1];
    std::strcpy(buff, obj.str);
    
    for (size_t i=0; i < std::strlen(buff); i++){
        buff[i] = std::tolower(buff[i]);
    }
    
    // Create a new Mystring object with the lowercase string
    Mystring temp{buff};
    delete [] buff;
    
    return temp;
}
    
// equality
bool operator==(const Mystring &lhs, const Mystring &rhs) {
    return (std::strcmp(lhs.str,rhs.str)==0);}
// unequality
bool operator!=(const Mystring &lhs, const Mystring &rhs){
    return !(std::strcmp(lhs.str,lhs.str)==0);}
// <
bool operator<(const Mystring &lhs, const Mystring &rhs){
    return (std::strcmp(lhs.str, rhs.str)<0);}
// >
bool operator>(const Mystring &lhs, const Mystring &rhs){
    return (std::strcmp(lhs.str, rhs.str)>0);}
// concatenation
Mystring operator+(const Mystring &lhs, const Mystring &rhs){
    char *buff = new char[std::strlen(lhs.str)+std::strlen(rhs.str)+1];
    std::strcpy(buff,lhs.str);
    std::strcat(buff, rhs.str);
    Mystring temp{buff};
    delete [] buff;
    return temp;
}

// concatenation and assignment
Mystring &operator+=(Mystring &lhs, const Mystring &rhs){
    lhs = lhs+rhs;
    return lhs;} 
     
// repeat
Mystring operator*(const Mystring &lhs, int n){
    char *buff = new char[std::strlen(lhs.str)*n+1];
    std::strcpy(buff, "");
    for (int i=1; i <= n; i++)
        strcat(buff, lhs.str);
    Mystring temp{buff};
    delete [] buff;
    return temp;
};
// repeat and assignment
Mystring &operator*=(Mystring &lhs, int n){
    lhs=lhs*n;
    return lhs;}
    
// Pre-increment - make the string upper-case
Mystring &operator++(Mystring &obj){
    for(size_t i=0; i <std::strlen(obj.str); i++)
        obj.str[i]=std::toupper(obj.str[i]);
    return obj;
}

// Post increment - make the string upper case
Mystring operator++(Mystring &obj, int){
    Mystring temp{obj};
    ++obj;
    return temp;
}