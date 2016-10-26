#include <iostream>
#include "Videogame.h"


using namespace std;

Videogame::Videogame(){
  cout << "hi" << endl;
}

void Videogame::setTitle(char* in) {
  title = in;
}

void Videogame::setYear(int in){
  year = in;
}

void Videogame::setPublisher(char* in){
  publisher = in;
}

void Videogame::setRating(char* in){
  rating = in;
}
