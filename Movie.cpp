#include <iostream>
#include "Movie.h"


using namespace std;

Movie::Movie(){
  director = new char[81];
  duration = new char[81];
  rating = new char[81];
}

char* Movie::getDirector() {
  return director;
}

char* Movie::getDuration() {
  return duration;
}

char* Movie::getRating(){
  return rating;
}

void Movie::setDirector(char* in){
  strcpy(director,in);
}

void Movie::setDuration(char* in){
  strcpy(duration,in);
}

void Movie::setRating(char* in){
  strcpy(rating,in);
}

void Movie::display(){
  cout << "Movie: " << title << " Year: " << year <<
    " Director: " << director << " Duration: " << duration <<
    " Rating: " << rating << endl;
}

