#pragma once

#ifdef GIN_PLATFORM_WINDOWS

extern Gin::Application* Gin::CreateApplication();

int main(int argc, char** argv)
{
	printf("Gin Engine Loaded");
	auto app = Gin::CreateApplication();
	app->Run();
	delete app;
}

#endif
