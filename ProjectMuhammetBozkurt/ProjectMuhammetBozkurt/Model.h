#ifndef MODEL_H
#define MODEL_H

#include <vector>
#include <string>

// Vector3D yap�s�
struct Vector3D {
    double x;
    double y;
    double z;
};

// Model yap�s�
struct Model {
    Vector3D position;
    // Di�er model verileri buraya eklenebilir
};

// Triangle yap�s� (�rnek olarak STL dosyas�ndan okunan ��genler)
struct Triangle {
    // STL dosyas�nda her ��genin verilerini burada saklayabilirsiniz
};

// Slice yap�s� (�rnek olarak dilim verileri)
struct Slice {
    // Dilim verileri burada saklanabilir
};

// STL dosyas�n� okuma i�levi
void readSTLFile(const std::string& filename, std::vector<Triangle>& triangles);

// Modeli dilimlere ay�rma i�levi
std::vector<Slice> sliceModel(const std::vector<Triangle>& model, double sliceThickness);

// Modeli d�nd�rme i�levi
void rotateModel(double angle, Model& model);

// Modeli ta��ma i�levi
void translateModel(const Vector3D& translation, Model& model);

// Delik a�ma i�levi
void drillHole();

// Modelleri yerle�tirme i�levi
void placeModels(double interval, int numModels);

#endif // MODEL_H

