#include <Gin.h>

class Sandbox : public Gin::Application
{
public:
	Sandbox()
	{
	}

	~Sandbox()
	{
	}
};

Gin::Application* Gin::CreateApplication()
{
	return new Sandbox();
}
