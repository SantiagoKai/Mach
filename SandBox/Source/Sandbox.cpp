#include "Mach.h"

class Sandbox : public Mach::Application
{
public:
	Sandbox()
	{}

	~Sandbox()
	{}

private:
};

Mach::Application* Mach::CreateApplication()
{
	return new Sandbox();
}