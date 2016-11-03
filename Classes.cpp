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
  addVideogame(databasePointer);
  for(int a = 0; a < database.size(); a++){
    database[a]->display();
  }
  
  return 0;
}

void addVideogame(vector<Media*>* database){
  Videogame* videogame = new Videogame();
  char titleInput[81];
  char publisherInput[81];
  char ratingInput[81];
  char yearInput[81];
  cout << "-----ADDING VIDEOGAME-----" << endl;
  cout << "Title: ";
  cin.getline(titleInput, 81);
  videogame->setTitle(titleInput);
  cout << "Publisher: ";
  cin.getline(publisherInput, 81);
  videogame->setPublisher(publisherInput);
  cout << "Rating: ";
  cin.getline(ratingInput, 81);
  videogame->setRating(ratingInput);
  cout << "Year: ";
  cin.getline(yearInput,81);
  videogame->setYear(yearInput);
  database->push_back(videogame);
}
