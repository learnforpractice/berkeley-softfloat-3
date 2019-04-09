
#include <softfloat.hpp>

double _eosio_ui64_to_f64( uint64_t a ) {
    return from_softfloat64(ui64_to_f64( a ));
}
