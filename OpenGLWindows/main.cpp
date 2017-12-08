#include <iostream>
#include <GL/glew.h>
#include "display.h"

int main()
{
    Display d(600, 600, "Display options");

    while(!d.IsClosed())
    {
        glClearColor(0.1f, 0.2f, 0.3f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT);

        d.Update();
    }

    return 0;
}
