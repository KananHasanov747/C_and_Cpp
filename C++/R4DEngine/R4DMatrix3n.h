#include <iostream>

namespace R4DEngine {
    
    class R4DMatrix3n {
    private:

    public:
        
        // Matrix data elements
        float matrixData [9] = {0.0};

        // constructors
        R4DMatrix3n ();

        R4DMatrix3n (float, float, float, float, float, float, float, float, float);

        // copy constructors
        R4DMatrix3n& operator= (const R4DMatrix3n&);

        // destructors
        ~R4DMatrix3n ();

        // show the matrix
        void show ();

        // Addition/Subtraction
        R4DMatrix3n R4DMatrix3n::operator+ (const R4DMatrix3n&) const;
        void operator+= (const R4DMatrix3n&);

        // Scalar Multiplication
        R4DMatrix3n operator* (const float) const;
        void operator*= (const float);

        // Multiplication
        R4DMatrix3n operator* (const R4DMatrix3n&) const;
        void operator*= (const R4DMatrix3n&);

        // Identity Matrix
        void setMatrixAsIdentityMatrix () {
            for (int i = 0; i < 9; i++) matrixData [i] = 0.0f;

            matrixData [0] = matrixData [4] = matrixData [8] = 1.0f;
        }

        // Inverse
        void setMatrixAsInverseOfGivenMatrix (const R4DMatrix3n&);
        R4DMatrix3n getInverseOfMatrix () const;
        void invertMatrix ();

        // Transpose
    };

// Constructors
    R4DMatrix3n::R4DMatrix3n(){

        // 3x3 matrix - column major. X vector is 0, 1, 2, etc. (openGL prefer way)
        //    0    3    6
        //    1    4    7
        //    2    5    8


        for (int i = 0; i < 9; i++) {
            matrixData [i] = 0.0f;
        }

        matrixData [0] = matrixData [4] = matrixData [8] = 1.0f;
    }

    R4DMatrix3n::R4DMatrix3n (float m0, float m3, float m6, float m1, float m4, float m7, float m2, float m5, float m8) {

        matrixData [0] = m0;
        matrixData [3] = m3;
        matrixData [6] = m6;
        
        matrixData [1] = m1;
        matrixData [4] = m4;
        matrixData [7] = m7;
        
        matrixData [2] = m2;
        matrixData [5] = m5;
        matrixData [8] = m8;

    }   

// Show
    void R4DMatrix3n::show(){

        std::cout << "[" << matrixData [0] << "," << matrixData [3] << "," << matrixData [6] << "," << std::endl;
        std::cout << matrixData [1] << "," << matrixData [4] << "," << matrixData [7] << "," << std::endl;
        std::cout << matrixData [2] << "," << matrixData [5] << "," << matrixData [8] << "]" << std::endl;
    }

// Addition/Subtraction
    R4DMatrix3n R4DMatrix3n::operator+ (const R4DMatrix3n& m) const {
        R4DMatrix3n n;

        n.matrixData [0] = matrixData [0] + m.matrixData [0]; 
        n.matrixData [3] = matrixData [3] + m.matrixData [3]; 
        n.matrixData [6] = matrixData [6] + m.matrixData [6]; 

        n.matrixData [1] = matrixData [1] + m.matrixData [1]; 
        n.matrixData [4] = matrixData [4] + m.matrixData [4]; 
        n.matrixData [7] = matrixData [7] + m.matrixData [7]; 

        n.matrixData [2] = matrixData [2] + m.matrixData [2]; 
        n.matrixData [5] = matrixData [5] + m.matrixData [5]; 
        n.matrixData [8] = matrixData [8] + m.matrixData [8]; 

        return n;
    }

    void R4DMatrix3n::operator+= (const R4DMatrix3n& m) {
        matrixData [0] += m.matrixData [0];
        matrixData [3] += m.matrixData [3];
        matrixData [6] += m.matrixData [6];

        matrixData [1] += m.matrixData [1];
        matrixData [4] += m.matrixData [4];
        matrixData [7] += m.matrixData [7];

        matrixData [2] += m.matrixData [2];
        matrixData [5] += m.matrixData [5];
        matrixData [8] += m.matrixData [8];
    }

// Scalar Multiplication
    R4DMatrix3n R4DMatrix3n::operator* (const float s) const {

        R4DMatrix3n n;


        n.matrixData [0] = matrixData[0] * s;
        n.matrixData [3] = matrixData[3] * s;
        n.matrixData [6] = matrixData[6] * s;

        n.matrixData [1] = matrixData[1] * s;
        n.matrixData [4] = matrixData[4] * s;
        n.matrixData [7] = matrixData[7] * s;

        n.matrixData [2] = matrixData[2] * s;
        n.matrixData [5] = matrixData[5] * s;
        n.matrixData [8] = matrixData[8] * s;

        return n;
    }

    void R4DMatrix3n::operator*= (const float s) {

        matrixData [0] *= s;
        matrixData [3] *= s;
        matrixData [6] *= s;

        matrixData [1] *= s;
        matrixData [4] *= s;
        matrixData [7] *= s;

        matrixData [2] *= s;
        matrixData [5] *= s;
        matrixData [8] *= s;  
    }

// Multiplication
    R4DMatrix3n R4DMatrix3n::operator* (const R4DMatrix3n& m) const {
        return R4DMatrix3n(matrixData [0] * m.matrixData [0] +  matrixData [3] * m.matrixData [1] + matrixData [6] * m.matrixData [2],
                        matrixData [0] * m.matrixData [3] +  matrixData [3] * m.matrixData [4] + matrixData [6] * m.matrixData [5],
                        matrixData [0] * m.matrixData [6] +  matrixData [3] * m.matrixData [7] + matrixData [6] * m.matrixData [8],

                        matrixData [1] * m.matrixData [0] +  matrixData [4] * m.matrixData [1] + matrixData [7] * m.matrixData [2],
                        matrixData [1] * m.matrixData [3] +  matrixData [4] * m.matrixData [4] + matrixData [7] * m.matrixData [5],
                        matrixData [1] * m.matrixData [6] +  matrixData [4] * m.matrixData [7] + matrixData [7] * m.matrixData [8],

                        matrixData [2] * m.matrixData [0] +  matrixData [5] * m.matrixData [1] + matrixData [8] * m.matrixData [2],
                        matrixData [2] * m.matrixData [3] +  matrixData [5] * m.matrixData [4] + matrixData [8] * m.matrixData [5],
                        matrixData [2] * m.matrixData [6] +  matrixData [5] * m.matrixData [7] + matrixData [8] * m.matrixData [8]);
    }

    void R4DMatrix3n::operator*= (const R4DMatrix3n& m) {
        float t1;
        float t2;
        float t3;

        t1 = matrixData [0] * m.matrixData [0] + matrixData [3] * m.matrixData [1] + matrixData [6] * m.matrixData [2];
        t2 = matrixData [0] * m.matrixData [3] + matrixData [3] * m.matrixData [4] + matrixData [6] * m.matrixData [5];
        t3 = matrixData [0] * m.matrixData [6] + matrixData [3] * m.matrixData [7] + matrixData [6] * m.matrixData [8];

        matrixData[0] = t1;
        matrixData[3] = t2;
        matrixData[6] = t3;

        t1 = matrixData [1] * m.matrixData [0] + matrixData [4] * m.matrixData [1] + matrixData [7] * m.matrixData [2];
        t2 = matrixData [1] * m.matrixData [3] + matrixData [4] * m.matrixData [4] + matrixData [7] * m.matrixData [5];
        t3 = matrixData [1] * m.matrixData [6] + matrixData [4] * m.matrixData [7] + matrixData [7] * m.matrixData [8];

        matrixData[1] = t1;
        matrixData[4] = t2;
        matrixData[7] = t3;


        t1 = matrixData [2] * m.matrixData [0] + matrixData [5] * m.matrixData [1] + matrixData [8] * m.matrixData [2];
        t2 = matrixData [2] * m.matrixData [3] + matrixData [5] * m.matrixData [4] + matrixData [8] * m.matrixData [5];
        t3 = matrixData [2] * m.matrixData [6] + matrixData [5] * m.matrixData [7] + matrixData [8] * m.matrixData [8];

        matrixData[2] = t1;
        matrixData[5] = t2;
        matrixData[8] = t3;
    }

// Inverse
    void R4DMatrix3n::setMatrixAsInverseOfGivenMatrix (const R4DMatrix3n& m) {

        float t1 = m.matrixData [0] * m.matrixData [4];
        float t2 = m.matrixData [0] * m.matrixData [7];
        float t3 = m.matrixData [3] * m.matrixData [1];
        float t4 = m.matrixData [6] * m.matrixData [1];
        float t5 = m.matrixData [3] * m.matrixData [2];
        float t6 = m.matrixData [6] * m.matrixData [2];

        //calculate the determinant

        float det = (t1 * m.matrixData [8] - t2 * m.matrixData [5] - t3 * m.matrixData [8] + t4 * m.matrixData [5] + t5 * m.matrixData [7] - t6 * m.matrixData [4]);

        //make sure the det is non-zero
        if (det == 0.0) return;

        float invd = 1.0f / det;

        float m0 = (m.matrixData [4] * m.matrixData [8] - m.matrixData [7] * m.matrixData [5]) * invd;
        float m3 = -(m.matrixData [3] * m.matrixData [8] - m.matrixData [6] * m.matrixData [5]) * invd;

        float m6 = (m.matrixData [3] * m.matrixData [7] - m.matrixData [6] * m.matrixData [4]) * invd;

        float m1 = -(m.matrixData [1] * m.matrixData [8] - m.matrixData [7] * m.matrixData [2]) * invd;

        float m4 = (m.matrixData [0] * m.matrixData [8] - t6) * invd;

        float m7 = -(t2 - t4) * invd;

        float m2 = (m.matrixData [1] * m.matrixData [5] - m.matrixData [4] * m.matrixData [2]) * invd;

        float m5 = -(m.matrixData [0] * m.matrixData [5] - t5) * invd;

        float m8 = (t1 - t3) * invd;

        matrixData [0] = m0;
        matrixData [3] = m3;
        matrixData [6] = m6;

        matrixData [1] = m1;
        matrixData [4] = m4;
        matrixData [7] = m7;

        matrixData [2] = m2;
        matrixData [5] = m5;
        matrixData [8] = m8;
    }


    R4DMatrix3n R4DMatrix3n::getInverseOfMatrix () const {

        R4DMatrix3n result;
        result.setMatrixAsInverseOfGivenMatrix (*this);
        return result;
    }


    void R4DMatrix3n::invertMatrix () {

        setMatrixAsInverseOfGivenMatrix (*this);
    }
}