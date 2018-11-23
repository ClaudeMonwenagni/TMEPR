#ifndef STRING_H_
#define STRING_H_

#include<iostream>


namespace pr{
class String{
	const char *str;

	friend std::ostream & operator << (std::ostream & os, const pr::String & s);

	public:
		String(const char *s=""); //constructeur vide
		virtual ~String();//destructeur
		size_t length() const; //calcule la longueur de la chaine

		String(const String &ori);// constructeur par copie

		String & operator=(const String & other); //redéfinition affectation

};
std::ostream & operator << (std::ostream & os, const pr::String & s);


};



#endif /* STRING_H_ */
