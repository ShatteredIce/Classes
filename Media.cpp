#include <iostream>
#include <string.h>
#include "Media.h"

using namespace std;


Media::Media(){
  //char none[] = "none";
  title = new char[81];
  year = new char[81];
}

char* Media::getTitle() {
  return title;
}

void Media::getPublisher() {
  return;
}

void Media::getRating() {
  return;
}

char* Media::getYear(){
  return year;
}

void Media::getArtist() {
  return;
}

void Media::getDuration() {
  return;
}

void Media::getDirector() {
  return;
}

void Media::display() {
  cout << "random media" << endl;
}
