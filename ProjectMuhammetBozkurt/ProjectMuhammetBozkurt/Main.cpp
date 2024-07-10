#include <iostream>
#include "Model.h"

// Kullan�c�dan se�enek al�p i�lem yapt�ran ana fonksiyon
void performOperation(int option) {
    switch (option) {
    case 1: {
        std::vector<Triangle> triangles;
        readSTLFile("model.stl", triangles);
        double sliceThickness;
        std::cout << "Enter slice thickness: ";
        std::cin >> sliceThickness;
        std::vector<Slice> slices = sliceModel(triangles, sliceThickness);
        // Dilimlerle ilgili di�er i�lemler buraya eklenebilir
        break;
    }
    case 2:
        std::cout << "Moving the table" << std::endl;
        // Table hareket ettirme i�lemleri
        break;
    case 3:
        std::cout << "Showing slice preview" << std::endl;
        // Dilim �n izleme i�lemleri
        break;
    case 4: {
        Model model;
        double angle;
        std::cout << "Enter rotation angle: ";
        std::cin >> angle;
        rotateModel(angle, model);
        // Model d�nd�rme i�lemleri
        break;
    }
    case 5: {
        Model model;
        Vector3D translation;
        std::cout << "Enter translation vector (x y z): ";
        std::cin >> translation.x >> translation.y >> translation.z;
        translateModel(translation, model);
        // Model ta��ma i�lemleri
        break;
    }
    case 6:
        std::cout << "Viewing from six directions" << std::endl;
        // Alt� y�nden g�r�nt�leme i�lemleri
        break;
    case 7:
        drillHole();
        // Delik a�ma i�lemleri
        break;
    case 8: {
        double interval;
        int numModels;
        std::cout << "Enter interval value: ";
        std::cin >> interval;
        std::cout << "Enter number of models: ";
        std::cin >> numModels;
        placeModels(interval, numModels);
        // Model yerle�tirme i�lemleri
        break;
    }
    default:
        std::cout << "Invalid option!" << std::endl;
        break;
    }
}

int main() {
    int option;
    // Kullan�c�ya se�enekleri g�sterme
    std::cout << "Options:" << std::endl;
    std::cout << "1. Take slices" << std::endl;
    std::cout << "2. Move table" << std::endl;
    std::cout << "3. Show slice preview" << std::endl;
    std::cout << "4. Rotate model" << std::endl;
    std::cout << "5. Move model on table" << std::endl;
    std::cout << "6. View from six directions" << std::endl;
    std::cout << "7. Drill a hole manually" << std::endl;
    std::cout << "8. Place models" << std::endl;

    std::cout << "Enter option number: ";
    std::cin >> option;

    performOperation(option);

    return 0;
}
