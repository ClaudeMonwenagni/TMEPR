/*
 * Vector.h
 *
 *  Created on: 3 oct. 2018
 *      Author: 3872380
 */

#ifndef VECTOR_H_
#define VECTOR_H_

#include <cstdlib>
#include <iostream>

namespace pr{

	template <typename T> //sans virgule à la fin

	class Vector{

			size_t siz;//compteur courant prévenant les limites de la cap du vecteur
			size_t cap;// la taille de base 10 et qui peut augmenter si siz > cap
			T* tab;

			void verif(){
				if(siz+1 > cap)
				{
					cap = siz * 2;
					T* tmp = new T[cap];

					for(size_t i = 0; i<=siz; i++)
					{
						tmp[i] = tab[i];
					}
					delete[]tab;
					tab = tmp;
				}
			}

			//partie public
	public:
		Vector(int siz = 10): siz(0),cap(siz){ //Constructeur
			tab = new T[cap];
		}

		virtual ~Vector(){ //Destructeur
			delete[] tab;
		}

		const T& operator[](size_t i) const{
			return tab[i];
		}

		T& operator[](size_t i){ //rédéfini sans const
					return tab[i];
		}

		size_t size() const{
			return this->siz;
		}

		bool empty() const{
			return siz==0;
		}

		void push_back (const T& val){
			verif();
			tab[size++]=val;
		}

	};




};


#endif /* VECTOR_H_ */
