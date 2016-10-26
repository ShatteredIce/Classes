#include <iostream>
#include <vector>
#include <cstring>
#include "Media.h"
#include "Videogame.h"

using namespace std;

int main()
{
  vector<Media*> database;
  Media* input = new Media();
  cout << input->getTitle();
  
  return 0;
}
