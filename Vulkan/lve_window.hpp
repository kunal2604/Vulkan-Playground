#pragma once

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>
#include <string>

namespace lve
{
	class LveWindow
	{
	public:
		LveWindow(int w, int h, std::string name);
		~LveWindow();

		// Delete copy constructor
		LveWindow(const LveWindow&) = delete;
		// Delete copy assignment operator
		LveWindow& operator=(const LveWindow&) = delete;
		
		bool shouldClose() { return glfwWindowShouldClose(window); }
	private:
		void initWindow();
		const int width;
		const int height;
		std::string windowName;
		GLFWwindow* window;
	};
}