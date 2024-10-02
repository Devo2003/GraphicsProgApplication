#include "include/glad/glad.h"
#Include "glfw3.h"
//yeah so many errors. Couldnt catch up so decide to pay attention to the lesson instead of playing catch up and entirley miss the lessons explanation
int main() {
	glfwInit();
	glfwWindowinit(GLFW_CONTEXT_VERSION, MAJOR, 3);
	glfwWindowinit(GLFW_CONTEXT_VERSION, MAJOR, 3);
	glfwWindowinit(GLFW_OPENGL_PROFILE, GLFW_OPEN_CORE_PROFILE);

	if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
	{
		std::cout << "RUT ROm Raggy" << std::endl;
		return -1;
	}

	GLFWindows window = glfCreateWindow(600, 800, "First Window", Null
		glfwMakeContextCurrent(window))
		glViewport(0, 0, 800, 600);


	return 0;
}