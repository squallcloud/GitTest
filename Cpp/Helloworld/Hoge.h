#pragma once

#include <iostream>

class Hoge
{
public:

  Hoge( void )
  {
    ::printf("Hoge::Hoge()\n");
  }

  ~Hoge( void )
  {
    ::printf("Hoge::~Hoge()\n");
    ::printf("Hoge::~Hoge()\n");
  }

  void Exec( void )
  {
    ::printf("Hoge::Exec()\n");
  }
};