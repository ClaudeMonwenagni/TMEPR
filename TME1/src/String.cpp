#include"String.h"
#include"structutil.h"
using namespace std;

#include<iostream>
namespace pr{


		String::String(const String &ori): String(ori.str){} //constructeur avec String

		String::String(const char *s){
			str=newcopy(s);
		} //constructeur char *s

		String::~String(){
			delete[] str;
		}


		String & String::operator=(const String & other){
			if(this != &other){
				delete[] str;
				str = newcopy(other.str);
			}
			return *this;
		}

		size_t String::length() const{//calcule la longueur de la chaine
		return pr::length(str);}

		std::ostream & operator << (std::ostream & os, const pr::String & s){
			return os<< s.str;
		}

}


