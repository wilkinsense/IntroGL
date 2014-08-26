#include "Singleton.h"

#ifndef GRAPHICS_MANAGER_H

class GraphicsManager: public Singleton<GraphicsManager>
{
public:
  friend class Singleton<GraphicsManager>;

  void Initialize();
  void Shutdown();

protected:
  GraphicsManager() : Singleton() { }

};

#endif