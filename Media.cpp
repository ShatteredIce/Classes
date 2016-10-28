#include <iostream>
#include <string.h>
#include "Media.h"

using namespace std;


Media::Media(){
  //char none[] = "none";
  strcpy(title, "none");
  year = 0;
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

int Media::getYear(){
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

