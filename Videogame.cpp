#include <iostream>
#include "Videogame.h"


using namespace std;

Videogame::Videogame(){
}

char* Videogame::getPublisher() {
  return publisher;
}

char* Videogame::getRating() {
  return rating;
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
