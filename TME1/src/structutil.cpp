#include "structutil.h"

namespace pr{

//version str[i]
size_t length(const char *s){
	size_t taille = 0;
	for(int i = 0;s[i]!='\0';++i){
		++taille;
	}
	return taille;
}

//version pointeurs
/*size_t length(const char *s){
	size_t taille = 0;
	for(;*s!='\0';++s){
		++taille;
	}
	return taille;;
}*/

//version new et boucle
/*char * newcopy(const char *str){
	size_t t = length(str);
	char *s  = new char[t+1];

	for(int i=0; i<=t;++i) //i<=t car implique le '/0'
	{
		s[i] = str[i];
	}
	return s;
}*/


//version malloc et boucle
/*char * newcopy(const char *str){
	size_t t = length(str);
	char *s  = (char *) malloc((t+1)*sizeof(char));

	for(int i=0; i<=t;++i) //i<=t car implique le '/0'
	{
		s[i] = str[i];
	}
	return s;
}*/


//version malloc et memcpy
char * newcopy(const char *str){
	size_t t = length(str);
	char *s  = (char *) malloc((t+1)*sizeof(char));

	memcpy(s,str,t+1);
	return s;
}

}


