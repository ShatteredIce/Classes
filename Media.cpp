#include <iostream>
#include <string.h>
#include "Media.h"

using namespace std;

//Media class for Classes.cpp

Media::Media(){
  //char none[] = "none";
  title = new char[81];
  year = new char[81];
  id = 0;
}

Media::~Media(){
  cout << "Media deleted" << endl;
}

char* Media::getTitle() {
  return title;
}


char* Media::getYear(){
  return year;
}

void Media::setId(int newid){
  id = newid;
}

int Media::getId(){
  return id;
}

void Media::setTitle(char* in) {
  strcpy(title,in);
}

void Media::setYear(char* in){
  strcpy(year,in);
}
