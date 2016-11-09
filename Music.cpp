#include <iostream>
#include "Music.h"


using namespace std;

Music::Music(){
  publisher = new char[81];
  duration = new char[81];
  artist = new char[81];
}

char* Music::getPublisher() {
  return publisher;
}

char* Music::getDuration() {
  return duration;
}

char* Music::getArtist(){
  return artist;
}

void Music::setPublisher(char* in){
  strcpy(publisher,in);
}

void Music::setDuration(char* in){
  strcpy(duration,in);
}

void Music::setArtist(char* in){
  strcpy(artist,in);
}

void Music::display(){
  cout << "Music: " << title << " Year: " << year <<
    " Artist: " << artist << " Duration: " << duration <<
    " Publisher: " << publisher << endl;
}
