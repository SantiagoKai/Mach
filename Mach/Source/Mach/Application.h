#pragma once

#include "Core.h"

namespace Mach
{
	class MACH_API Application
	{
	public:

		// constructor destructor
		virtual ~Application();

		// fucntions
		void Run();

		// virtuals

	private:
	};

	Application* CreateApplication();

} // namespace mach


