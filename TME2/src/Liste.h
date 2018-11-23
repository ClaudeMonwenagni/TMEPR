/*
 * Liste.h
 *
 *  Created on: 3 oct. 2018
 *      Author: 3872380
 */

#ifndef LISTE_H_
#define LISTE_H_


#include <cstdlib>
#include <iostream>

namespace lr{

	template <typename T> //sans virgule à la fin

	class List{

		class Chainon{

			public:
				T data;
				Chainon* next;
				Chainon(T donnee, Chainon* suivant = nullptr): data(donnee),next(suivant){} //Constructeur

		};
		//Fin class Chainon

		Chainon* tete;

		public:
			List(): tete(nullptr){}//Constructeur

			virtual ~List(){ //Constructeur
				Chainon* ptr = tete;
				while(*ptr){
					Chainon* tmp = ptr->next;
					delete* ptr;
					ptr = tmp;
				}
			}

			void push_back(const T& val){
				Chainon* fin = tete;
				if(tete == nullptr)
					push_front(val);
				else{
					while(fin->next){
						fin = fin->next;
					}
					*(fin->next) = new Chainon(val);
				}

			}

			void push_front(const T& val){
				*tete = new Chainon(val,tete);
			}

	};
	//Fin class Liste
};




#endif /* LISTE_H_ */
