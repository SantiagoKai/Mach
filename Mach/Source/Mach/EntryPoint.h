#pragma once

#ifdef PLATFORM_WINDOWS

extern Mach::Application* Mach::CreateApplication();

	int main(int argc, char** argv)
	{
		auto app = Mach::CreateApplication();
		app->Run();
		delete app;
		return 0;
	}
#endif