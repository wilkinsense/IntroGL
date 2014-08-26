#include "stdafx.h"
#include <iostream>

#ifndef SINGLETON_H

template <class T>
class Singleton
{
public:
  friend class Singleton<T>;
  
  static T* GetInstance()
  {
    if(kInstance == nullptr)
    {
      kInstance = new T();
      kInstance->Initialize();
    }
	
    return kInstance;
  }
  
  static void DestroyInstance()
  {
    if(kInstance != nullptr)
    {
      kInstance->Shutdown();

      delete kInstance;
      kInstance = nullptr;
    }
  }

  virtual void Initialize() { }
  virtual void Shutdown() { }

protected:
  static T* kInstance;
  Singleton() {}
};

#endif