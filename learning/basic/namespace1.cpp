#include <stdio.h>

namespace Audio
{
    void init()
    {
        printf("Audio init\n");
    }
}

namespace Video
{
    void init()
    {
        printf("Video init\n");
    }
}

void init()
{
    printf("System init\n");
}

int main()
{
    init();
    Audio::init();
    Video::init();
}