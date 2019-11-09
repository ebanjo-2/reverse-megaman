#include <iostream>
#include <engine.h>
#include <window/graphics_context.h>
#include <window/window.h>


using namespace undicht;
using namespace undicht::window;


int main(){

    GraphicsContext* context;
    Window* window;
    Engine::initialize(window, context);

    Engine::terminate(window, context);

    return 0;
}
