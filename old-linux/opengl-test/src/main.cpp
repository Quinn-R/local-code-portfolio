#include "../inc/common.hpp"

int main()
{
	int isTerminate = 0;
	
	std::cout << "Hello, world" << std::endl;
	
	if (!glfwInit())
	{
	    // Handle initialization failure
	}
	
	GLFWwindow* window = glfwCreateWindow(640, 480, "My Title", NULL, NULL);
	
	while (!glfwWindowShouldClose(window))
	{
	    render(window);
	    glfwSwapBuffers(window);
	    glfwPollEvents();
	}
	
	glfwTerminate();
	
	return 0;
}
