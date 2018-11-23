/*
 * prodcons.cpp
 *
 *  Created on: 21 nov. 2018
 *      Author: claude
 */
std::vector<pid_t> tokill;
void killthem(int){
	for(auto p: tokill){
		kill(p,SIGINT);
	}
}

int main(){
	//Ajout
	pid_t pc =fork();
	if(pc==0){
		consommateur(s);
	}
	else
	{
		tokill.push_back(pc);
	}
	signal(SIGINT,killthem);//handler killthem
}

//juste faire des boucles sur les fork consommateurs et producteurs
