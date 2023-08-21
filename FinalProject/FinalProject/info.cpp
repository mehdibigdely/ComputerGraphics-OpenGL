#include "info.h"		 // function deceleration
#include <GL/glew.h>	 // used to acquire OpenGL version
#include <iostream>		 // used for cout and error functions
using namespace std;

// displays list of the keys that user can use to navigate the scene
void info::printUserGuide()
{
	// Displays GPU OpenGL version
	cout << "OpenGL Version: " << glGetString(GL_VERSION) <<
		"\n\n--------------------------------------------------------------------------------\n";

	// Displays scene controls
	// -----------------------
	cout << "Movement controls								|" <<
		"\n--------------------------------------------------------------------------------\n\n";
	cout << "W A S D keys :		Move forward, backward, left, or right\n";
	cout << "Q / E keys :		Move up or down\n";
	cout << "Mouse cursor :		Look up, down, left, or right\n";
	cout << "Mouse scroll :		Adjust the speed of the movement (B / N keys as well)\n\n";

	cout << "P / O keys :		Switches orthographic and perspective views\n";
	cout << "Right/Left keys :	Switches between line segment & filled shapes drawings\n\n";

	cout << "J L I K U Y keys:	Change the position of the spot-light\n";
	cout << "1 2 3 4 keys :		Change the color of the key-light\n";
	cout << "[ ] keys :			Turn the key-light on / off\n";
	cout << "RIGHT/LEFT SHIFT:	Pause/Resume spot-light orbiting around the scene\n\n";
	cout << "RIGHT/LEFT click:	Changes camera position (to 2 pre-set views)\n\n";

	cout << "Exit the program :\n--------------------------------------------------------------------------------\n";
	cout << "			ESC or F4 key => terminates the program\n--------------------------------------------------------------------------------\n";
}