#include "spdlog/spdlog.h"
#include "app/math.h"

int main() {
    spdlog::info("Hello, World! {}", plus(2,5));
    return 0;
}
