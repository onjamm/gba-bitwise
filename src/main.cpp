#include <bn_core.h>
#include <bn_log.h>
#include <bn_string.h>
#include <bn_backdrop.h>
#include <bn_color.h>

#include "base_conv.h"

int main() {
    bn::core::init();

    BN_LOG("Hey!");

    bn::backdrop::set_color(bn::color());

    while(true) {
        bn::core::update();
    }
}