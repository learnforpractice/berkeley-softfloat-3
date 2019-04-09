
#include <softfloat.hpp>

static bool is_nan( const float32_t f ) {
    return f32_is_nan( f );
}
static bool is_nan( const float64_t f ) {
    return f64_is_nan( f );
}
static bool is_nan( const float128_t& f ) {
    return f128_is_nan( f );
}


extern "C" {

void prints(const char *str);

float _eosio_i32_to_f32( int32_t a )  {
    prints("+++yes, you have saw me, _eosio_ui64_to_f64\n");
    return from_softfloat32(i32_to_f32( a ));
}
float _eosio_i64_to_f32( int64_t a ) {
    prints("+++yes, you have saw me, _eosio_ui64_to_f64\n");
    return from_softfloat32(i64_to_f32( a ));
}
float _eosio_ui32_to_f32( uint32_t a ) {
    prints("+++yes, you have saw me, _eosio_ui64_to_f64\n");
    return from_softfloat32(ui32_to_f32( a ));
}
float _eosio_ui64_to_f32( uint64_t a ) {
    prints("+++yes, you have saw me, _eosio_ui64_to_f64\n");
    return from_softfloat32(ui64_to_f32( a ));
}
double _eosio_i32_to_f64( int32_t a ) {
    prints("+++yes, you have saw me, _eosio_ui64_to_f64\n");
    return from_softfloat64(i32_to_f64( a ));
}
double _eosio_i64_to_f64( int64_t a ) {
    prints("+++yes, you have saw me, _eosio_ui64_to_f64\n");
    return from_softfloat64(i64_to_f64( a ));
}
double _eosio_ui32_to_f64( uint32_t a ) {
    prints("+++yes, you have saw me, _eosio_ui64_to_f64\n");
    return from_softfloat64(ui32_to_f64( a ));
}
double _eosio_ui64_to_f64( uint64_t a ) {
    prints("+++yes, you have saw me, _eosio_ui64_to_f64\n");
    return from_softfloat64(ui64_to_f64( a ));
}


// double relops
bool _eosio_f64_eq( double a, double b ) { return f64_eq( to_softfloat64(a), to_softfloat64(b) ); }
bool _eosio_f64_ne( double a, double b ) { return !f64_eq( to_softfloat64(a), to_softfloat64(b) ); }
bool _eosio_f64_lt( double a, double b ) { return f64_lt( to_softfloat64(a), to_softfloat64(b) ); }
bool _eosio_f64_le( double a, double b ) { return f64_le( to_softfloat64(a), to_softfloat64(b) ); }
bool _eosio_f64_gt( double af, double bf ) {
    float64_t a = to_softfloat64(af);
    float64_t b = to_softfloat64(bf);
    if (is_nan(a))
    return false;
    if (is_nan(b))
    return false;
    return !f64_le( a, b );
}
bool _eosio_f64_ge( double af, double bf ) {
    float64_t a = to_softfloat64(af);
    float64_t b = to_softfloat64(bf);
    if (is_nan(a))
    return false;
    if (is_nan(b))
    return false;
    return !f64_lt( a, b );
}


}
