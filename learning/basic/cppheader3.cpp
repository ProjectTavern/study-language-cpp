void foo() {}

namespace Audio
{
    using ::foo;
    void init() {}
}

int main()
{
    Audio::init();

    using Audio::init;

    init();

    foo();
    Audio::foo();
}