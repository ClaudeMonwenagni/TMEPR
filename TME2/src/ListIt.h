/*
 * ListItIt.h
 *
 *  Created on: 3 oct. 2018
 *      Author: 3872380
 */

#ifndef LISTIT_H_
#define LISTIT_H_



#include <cstdlib>
#include <iostream>

namespace lr{

	template <typename T> //sans virgule à la fin

	class ListIt{

		class Chainon{

			public:
				T data;
				Chainon* next;
				Chainon(T donnee, Chainon* suivant = nullptr): data(donnee),next(suivant){} //Constructeur

		};
		//Fin class Chainon

		Chainon* tete;
		Chainon* cur;

		public:
			//ListIt(): tete(nullptr){}//Constructeur
			ListIt(Chainon* ptr = ptr):cur(ptr){}//Constructeur

			T& operator *() const{
				return cur->data;
			}

			T& operator ->() const{
				return &(cur->data);
			}

			ListIt& operator ++() const{
				cur=cur->next;
				return *this;
			}

			bool operator !=(const ListIt& li){
				return cur!=li.cur;
			}


			typedef ListIt iterator;

			iterator begin() const{
				return tete;
			}

			iterator end() const{
				return nullptr;
			}





			virtual ~ListIt(){ //Constructeur
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

			}

	};
	//Fin class LISTIT
};








#endif /* LISTIT_H_ */
