#include <stdio.h>

namespace Audio
{
    void init() { printf("Audio init\n"); }
    void reset() { printf("Audio reset\n"); }
}

void init() { printf("global init\n"); }

int main()
{
    // fully qualified name
    Audio::init();

    // using declaration
    using Audio::init;
    init();
    Audio::reset();

    // using directive
    using namespace Audio;
    init();
    reset();

    // access global namespace
    ::init();
}