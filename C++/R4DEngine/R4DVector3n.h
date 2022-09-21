#include <cmath>

namespace R4DEngine {
    class R4DVector3n {

    private:

    public:
        //x, y and z dimensions
        float x, y, z;

        //Constructors
        R4DVector3n ();
        R4DVector3n (float, float, float);

        //Destructors
        ~R4DVector3n ();

        //Copy Constructors
        R4DVector3n (const R4DVector3n&);
        R4DVector3n& operator= (const R4DVector3n&);

        // Addition
        R4DVector3n operator+ (const R4DVector3n&) const;
        void operator+= (const R4DVector3n&);

        // Subtraction
        R4DVector3n operator- (const R4DVector3n&) const;
        void operator-= (const R4DVector3n&);

        // Multiplication
        void operator*= (const float);
        R4DVector3n operator* (const float) const;

        // Division
        void operator/= (const float);
        R4DVector3n operator/ (const float) const;

        // Vector Product
        float operator* (const R4DVector3n&) const;
        float dot (const R4DVector3n&) const;

        // Cross Product
        R4DVector3n cross (const R4DVector3n&) const;
        void operator%= (const R4DVector3n&);
        R4DVector3n operator% (const R4DVector3n&) const;

        // Magnitude of a vector
        float magnitude () {
            float magnitude = std::sqrt (x * x + y * y + z * z);
            return magnitude;
        }

        // Unit vector
        void normalize ();
      };

// constructor
    R4DVector3n::R4DVector3n () : x (0.0), y (0.0), z (0.0) {};

    R4DVector3n::R4DVector3n (float uX, float uY, float uZ) : x (uX), y (uY), z (uZ) {}

// destructor
    R4DVector3n::~R4DVector3n () {}

// copy constructor     
    R4DVector3n::R4DVector3n (const R4DVector3n& v) : x (v.x), y (v.y), z (v.z) {}

    R4DVector3n& R4DVector3n::operator= (const R4DVector3n& v) {

        x = v.x;
        y = v.y;
        z = v.z;

        return *this;

    }

// Addition
    void R4DVector3n::operator+= (const R4DVector3n& v) {
        // Resultant of two vectors
        x += v.x;
        y += v.y;
        z += v.z;
    }

    R4DVector3n R4DVector3n::operator+(const R4DVector3n& v) const {
        // Returns a third vector representing the addition of two 3D vectors
        return R4DVector3n (x + v.x, y + v.y, z + v.z);
    }

// Subtraction
    void R4DVector3n::operator-= (const R4DVector3n& v) {
        x -= v.x;
        y -= v.y;
        z -= v.z;
    }

    R4DVector3n R4DVector3n::operator- (const R4DVector3n& v) const {
        return R4DVector3n (x - v.x, y - v.y, z - v.z);
    }

// Multiplication
    void R4DVector3n::operator*= (const float s) {
        x *= s;
        y *= s;
        z *= s;
    }

    R4DVector3n R4DVector3n::operator* (const float s) const {
        return R4DVector3n (s * x, s * y, s * z);
    }

// Division
    void R4DVector3n::operator/= (const float s) {
        x /= s;
        y /= s;
        z /= s;
    }

    R4DVector3n R4DVector3n::operator/ (const float s) const {
        return R4DVector3n (s / x, s / y, s / z);
    }

// Vector Product
    float R4DVector3n::operator* (const R4DVector3n& v) const {
        return x * v.x + y * v.y + z * v.z;
    }

    float R4DVector3n::dot (const R4DVector3n& v) const {
        return x * v.x + y * v.y + z * v.z;
    }

// Cross Product
    R4DVector3n R4DVector3n::cross (const R4DVector3n& v) const {
        return R4DVector3n (y * v.z - z * v.y,
                            z * v.x - x * v.z,
                            x * v.y - y * v.x);
    }

    void R4DVector3n::operator%= (const R4DVector3n& v) {
        *this = cross (v);
    }

    R4DVector3n R4DVector3n::operator% (const R4DVector3n& v) const {
        return R4DVector3n (y * v.z - z * v.y,
                            z * v.x - x * v.z,
                            x * v.y - y * v.x);
    }

// Unit vector
    void R4DVector3n::normalize () {
        float mag = std::sqrt (x * x + y * y + z * z);
        if (mag > 0.0f) {
            // normalize it
            float oneOverMag = 1.0f / mag;

            x = x * oneOverMag;
            y = y * oneOverMag;
            z = z * oneOverMag;
        }
    }
}