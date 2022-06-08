// Copyright 2021 NNTU-CS
#include  <iostream>
#include  <fstream>
#include  <locale>
#include  <cstdlib>
#include  "bst.h"

BST<std::string> makeTree(const char* filename) {
 std::ifstream file(filename);
  std::string wwordl;
  BST<std::string> deeer;
  std::string leier;
  while (!file.eof()) {
  file >> wwordl;
  int h = 0;
  while (h < wwordl.length()) {
  int z = 0;
  while ((wwordl[h] >= 'a' && wwordl[h] <= 'z' || wwordl[h] >= 'A' && wwordl[h] <= 'Z') && h < wwordl.length()) {
  if (wwordl[h] >= 'A' && wwordl[h] <= 'Z')
  wwordl[h] += 32;
  leier += wwordl[h];
  h++;
  z++;
  }
  if (z != 0) {
  deeer.add(leier);
  leier = "";
  } else {
  h++;
  }
  }
  }
  return deeer;
}
