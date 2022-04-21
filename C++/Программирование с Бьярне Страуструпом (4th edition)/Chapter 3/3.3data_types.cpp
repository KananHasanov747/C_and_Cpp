#include <iostream>

//===------------------------------------------------main (fundamental) types---------------------------------------------------===//

    int _int = 39;                          // can take numbers (size range: 32 bit);
    float _float = 3.5;                     // can take decimal numbers (32 bit);
    double _double = 3.5;                   // can take decimal numbers, but with double precision (64 bit);
                                            // Difference between float and double is that double has 2x more precision than float;
    char _char = '.';                       // can take character in single quotes (8 bit);
    wchar_t _wchar_t = '.';                 // wide character; also can take character in single quotes (16 bit);
    bool _bool = true;                      // (true / false)
    // void; cannot declare variables of the 'void' type; void means 'nothing' or 'no value';
    
    std::string _string = "Annemarie";      // can take string in double quotes. Only string need in std;

//===------------------------------------------------------modifier types------------------------------------------------------===//
// more about IEEE 754 ( https://en.wikipedia.org/wiki/IEEE_754 )

// standard

    int8_t _int8_t;                         // 8 bit of integer [-128 to 127];
    int16_t _int16_t;                       // 16 bit of integer [-32,768 to 32,767]
    int32_t _int32_t;                       // 32 bit of integer [-2,147,483,648 to 2,147,483,647]
    int64_t _int64_t;                       // 64 bit of integer [-9,223,372,036,854,775,808 to 9,223,372,036,854,775,807]

    int_fast8_t _int_fast8_t;               //
    int_fast16_t _int_fast16_t;             //
    int_fast32_t _int_fast32_t;             //
    int_fast64_t _int_fast64_t;             //

    int_least8_t _int_least8_t;
    int_least16_t _int_least16_t;
    int_least32_t _int_least32_t;
    int_least64_t _int_least64_t;

    intmax_t _intmax_t;
    intptr_t _intprt_t;

    // ???
    ino_t _ino_t;
    ino64_t _ino64_t;

    id_t _id_t;

    in_addr_t _in_addr_t;
    in_port_t _in_port_t;
    // ???

    char16_t _char16_t;                     // 16 bit of character
    char32_t _char32_t;                     // 32 bit of character

// signed modifiers

    signed _signed;                         // signed (equivalent to 'int')
    signed int _s_int;                      // signed int (equivalent to 'int')
    signed char _s_char;                    //

// unsigned modifiers

    unsigned _unsigned;
    unsigned int _u_int1;                   // 32 bit of unsigned integer (like u_int32_t)
    u_int _u_int2;                          // also 32 bit of unsigned integer [0 to 4,294,967,295]
    u_int8_t _u_int8_t;                     // 8 bit of unsigned integer [0 to 255]
    u_int16_t _u_int16_t;                   // 16 bit of unsigned integer [0 to 65,535]
    u_int32_t _u_int32_t;                   // 32 bit of unsigned integer [0 to 4,294,967,295]
    u_int64_t _u_int64_t;                   // 64 bit of unsigned integer [0 to 18,446,744,073,709,551,615]

    u_char _u_char;                         // unsigned character (8 bit)

    u_long _u_long1;                         // unsigned long (32 bit)

// short modifiers

    short _short;                           // short (equivalent to 'short int')
    short int _short_int;                   // short integer (16 bit) [-32,768 to 32,767]
    signed short _s_short;                  // signed short (equivalent to 'short int')
    signed short int _s_short_int;          // signed short int (equivalent to 'short int')

// long modifiers

    long _long;                             // long (32 bit; equivalent to 'long int') [-2,147,483,648 to 2,147,483,647]
    unsigned long _u_long2;                 // unsigned long (32 bit) [0 to 4,294,967,295]
    long int _long_int;                     // long int (32 bit) [-2,147,483,648 to 2,147,483,647]
    long double _long_double;               // long double (96 bit) [-79,228,162,514,264,337,593,543,950,336 to 79,228,162,514,264,337,593,543,950,335]

    // since C++11
    long long _dlong;                       // long long (equivalent to 'long long int')
    long long int _dlong_int;               // long long int (64 bit) [-39,614,081,257,132,168,796,771,975,168 to 39,614,081,257,132,168,796,771,975,167]
    signed long long _s_dlong;              // signed long long (equivalent to 'long long int')
    signed long long int _s_dlong_int;      // signed long long int (equivalent to 'long long int')
    unsigned long long _u_dlong;            // unsigned long long (equivalent to 'unsigned long long int')
    unsigned long long int _u_dlong_int;    // unsigned long long int (64 bit) [0 to 18,446,744,073,709,551,615]

// This is no the full list of all types. The full list of types in this link: https://docs.microsoft.com/en-gb/cpp/c-runtime-library/standard-types?view=msvc-170