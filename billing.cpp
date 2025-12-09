#include <emscripten/emscripten.h>

extern "C" {

EMSCRIPTEN_KEEPALIVE
double calculateGST(double subtotal) {
    return subtotal * 0.18;
}

EMSCRIPTEN_KEEPALIVE
double calculateGrandTotal(double subtotal) {
    return subtotal + (subtotal * 0.18);
}

}
