#include <iostream>
#include <vector>
#include <cstring>
#include "Media.h"
#include "Videogame.h"

using namespace std;

void addVideogame(vector<Media*>*);

int main()
{
  vector<Media*> database;
  vector<Media*> * databasePointer = & database;
  addVideogame(databasePointer);
  for(int a = 0; a < database.size(); a++){
    cout << database[a]->getTitle() << endl;
  }
  
  return 0;
}

void addVideogame(vector<Media*>* database){
  Videogame* videogame = new Videogame();
  char input[81];
  int yearInput = '0';
  cout << "-----ADDING VIDEOGAME-----" << endl;
  cout << "Title: ";
  cin.getline(input, 81);
  videogame->setTitle(input);
  cout << "Publisher: ";
  cin.getline(input, 81);
  videogame->setPublisher(input);
  cout << "Rating: ";
  cin.getline(input, 81);
  videogame->setRating(input);
  cout << "Year: ";
  cin >> yearInput;
  cin.ignore(80,'\n');
  videogame->setYear(yearInput);
  database->push_back(videogame);
}
