#ifndef MODEL_H
#define MODEL_H

#include <vector>
#include <string>

// Vector3D yapýsý
struct Vector3D {
    double x;
    double y;
    double z;
};

// Model yapýsý
struct Model {
    Vector3D position;
    // Diðer model verileri buraya eklenebilir
};

// Triangle yapýsý (örnek olarak STL dosyasýndan okunan üçgenler)
struct Triangle {
    // STL dosyasýnda her üçgenin verilerini burada saklayabilirsiniz
};

// Slice yapýsý (örnek olarak dilim verileri)
struct Slice {
    // Dilim verileri burada saklanabilir
};

// STL dosyasýný okuma iþlevi
void readSTLFile(const std::string& filename, std::vector<Triangle>& triangles);

// Modeli dilimlere ayýrma iþlevi
std::vector<Slice> sliceModel(const std::vector<Triangle>& model, double sliceThickness);

// Modeli döndürme iþlevi
void rotateModel(double angle, Model& model);

// Modeli taþýma iþlevi
void translateModel(const Vector3D& translation, Model& model);

// Delik açma iþlevi
void drillHole();

// Modelleri yerleþtirme iþlevi
void placeModels(double interval, int numModels);

#endif // MODEL_H

