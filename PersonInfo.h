//
//  PersonInfo.h
//  pointerfun
//
//  Created by Pedro Fajardo on 11/01/13.
//  Copyright (c) 2013 Pedro Fajardo. All rights reserved.
//

#ifndef __pointerfun__PersonInfo__
#define __pointerfun__PersonInfo__

#include <iostream>

class PersonInfo
{
protected:
  const char* name;
  int   age;
  
public:
  PersonInfo* next = NULL;
  
public:
  PersonInfo(const char* Name, int Age);
  const char* Name();
  int   Age();
};

#endif /* defined(__pointerfun__PersonInfo__) */
