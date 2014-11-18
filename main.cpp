//
//  main.cpp
//  pointerfun
//
//  Created by Pedro Fajardo on 11/01/13.
//  Copyright (c) 2013 Pedro Fajardo. All rights reserved.
//

#include <iostream>
#include "PersonInfo.h"

void PrintSize(PersonInfo* pi)
{
  int size = sizeof(*pi);
  std::cout << "Size: " << size << "\n";
}

void PrintPointer(PersonInfo* pi)
{
  std::cout << pi->Name() << ", " << pi->Age() << "\n";
}

void PrintList(PersonInfo* start)
{
  PersonInfo* current = start;
  
  while (current != NULL) {
    PrintPointer(current);
    PrintSize(current);
    current = current->next;
  }
}

int main(int argc, const char * argv[])
{
  // insert code here...
  std::cout << "Hello, World!\n";
  PersonInfo* p1 = new PersonInfo("Joseph", 27);
  PersonInfo* p2 = new PersonInfo("Mary", 23);
  p1->next = p2;
  
  PrintList(p1);
  
  delete p2;
  
  // bug!
  PrintList(p1);
  
  delete p1;
  
  return 0;
}

