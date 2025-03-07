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
Mystring Mystring::operator-() const{
    char *buff = new char[std::strlen(str)+1];
    std::strcpy(buff,str);
    
    for (size_t i=0; i < std::strlen(buff); i++){
        buff[i] = std::tolower(buff[i]);
    }
    
    // Create a new Mystring object with the lowercase string
    Mystring temp{buff};
    delete [] buff;
    
    return temp;
}
    
// equality
bool Mystring::operator==(const Mystring &rhs) const{
    return (std::strcmp(str,rhs.str)==0);}
// unequality
bool Mystring::operator!=(const Mystring &rhs) const{
    return !(std::strcmp(str,rhs.str)==0);}
// <
bool Mystring::operator<(const Mystring &rhs) const{
    return (std::strcmp(str, rhs.str)<0);}
// >
bool Mystring::operator>(const Mystring &rhs) const{
    return (std::strcmp(str, rhs.str)>0);}
// concatenation
Mystring Mystring::operator+(const Mystring &rhs) const{
    char *buff = new char[std::strlen(str)+std::strlen(rhs.str)+1];
    std::strcpy(buff,str);
    std::strcat(buff, rhs.str);
    Mystring temp{buff};
    delete [] buff;
    return temp;
}

// concatenation and assignment
Mystring &Mystring::operator+=(const Mystring &rhs){
    *this = *this+rhs;
    return *this;} 
     
// repeat
Mystring Mystring::operator*(int n) const{
    char *buff = new char[std::strlen(str)*n+1];
    std::strcpy(buff, "");
    for (int i=1; i <= n; i++)
        strcat(buff, str);
    Mystring temp{buff};
    delete [] buff;
    return temp;
};
// repeat and assignment
Mystring &Mystring::operator*=(int n){
    *this=*this*n;
    return *this;}
    
// Pre-increment - make the string upper-case
Mystring &Mystring::operator++(){
    for(size_t i=0; i <std::strlen(str); i++)
        str[i]=std::toupper(str[i]);
    return *this;
}

// Post increment - make the string upper case
Mystring Mystring::operator++(int){
    Mystring temp(*this);
    operator++();
    return temp;
}