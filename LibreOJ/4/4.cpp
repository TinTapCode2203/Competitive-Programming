#include <cstdio>

int main() {
    const char *s = R"(#include <cstdio>

int main() {
    const char *s = R"(%s)%c;
    printf(s, s, 34);
    return 0;
}
)";
    printf(s, s, 34);
    return 0;
}
