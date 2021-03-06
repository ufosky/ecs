#include "System.hpp"

System::System ()
{}

System::~System ()
{}

void System::begin ()
{}

void System::end ()
{}

bool System::canUpdate (GameObject & obj) const
{
  for (std::string component : _registered_components)
    {
      if (!obj.getComponent(component))
	return false;
    }
  return true;
}

void System::registerComponent (const std::string & name)
{
  _registered_components.insert(name);
}
