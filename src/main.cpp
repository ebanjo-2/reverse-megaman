#include <iostream>
#include <string>

// includes for the engine
#include <core/core.h>
#include <engine.h>
#include <window/graphics_context.h>
#include <window/window.h>
#include <graphics/renderer.h>


using namespace undicht;
using namespace undicht::window;
using namespace undicht::core;
using namespace undicht::graphics;

const std::string video_lib = "engine/undicht/core/implementation/graphics/opengl_33/video_opengl_33.dll";
const std::string window_lib = "engine/undicht/core/implementation/window/glfw/window_glfw.dll";
const std::string audio_lib = "engine/undicht/core/implementation/audio/openal/audio_openal.dll";

int main(){

    GraphicsContext* context;
    Window* window;

    Core::setLibraryPaths(window_lib, video_lib, audio_lib);
    Engine::initialize(window, context);

    window->setSize(800, 600);
    window->setTitle("Reverse MegaMan");
    Renderer::setViewport(800, 600);

    // the scope in which engine objects may be created
    {

        while(!window->shouldClose()){

            context->swapBuffers();
            window->update();
        }

    }


    Engine::terminate(window, context);

    return 0;
}
