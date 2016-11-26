#include <iostream>
#include "Videogame.h"


using namespace std;

//Videogame class for Classes.cpp
//A child of Media.cpp

Videogame::Videogame(){
  publisher = new char[81];
  rating = new char[81];
}

Videogame::~Videogame() {
  delete publisher;
  delete rating;
  cout << "Videogame deleted" << endl;
}

char* Videogame::getPublisher() {
  return publisher;
}

char* Videogame::getRating() {
  return rating;
}

void Videogame::setPublisher(char* in){
  strcpy(publisher,in);
}

void Videogame::setRating(char* in){
  strcpy(rating,in);
}

void Videogame::display(){
  cout << "Videogame: " << title << " Year: " << year <<
    " Publisher: " << publisher << " Rating: " << rating << endl; 
}
