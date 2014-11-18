//
//  PersonInfo.cpp
//  pointerfun
//
//  Created by Pedro Fajardo on 11/01/13.
//  Copyright (c) 2013 Pedro Fajardo. All rights reserved.
//

#include "PersonInfo.h"

PersonInfo::PersonInfo(const char* Name, int Age)
{
  name = Name;
  age  = Age;
}


const char* PersonInfo::Name()
{
  return name;
}

int PersonInfo::PersonInfo::Age()
{
  return age;
}