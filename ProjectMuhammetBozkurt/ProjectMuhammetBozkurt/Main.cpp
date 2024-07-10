#include <iostream>
#include "Model.h"

// Kullanýcýdan seçenek alýp iþlem yaptýran ana fonksiyon
void performOperation(int option) {
    switch (option) {
    case 1: {
        std::vector<Triangle> triangles;
        readSTLFile("model.stl", triangles);
        double sliceThickness;
        std::cout << "Enter slice thickness: ";
        std::cin >> sliceThickness;
        std::vector<Slice> slices = sliceModel(triangles, sliceThickness);
        // Dilimlerle ilgili diðer iþlemler buraya eklenebilir
        break;
    }
    case 2:
        std::cout << "Moving the table" << std::endl;
        // Table hareket ettirme iþlemleri
        break;
    case 3:
        std::cout << "Showing slice preview" << std::endl;
        // Dilim ön izleme iþlemleri
        break;
    case 4: {
        Model model;
        double angle;
        std::cout << "Enter rotation angle: ";
        std::cin >> angle;
        rotateModel(angle, model);
        // Model döndürme iþlemleri
        break;
    }
    case 5: {
        Model model;
        Vector3D translation;
        std::cout << "Enter translation vector (x y z): ";
        std::cin >> translation.x >> translation.y >> translation.z;
        translateModel(translation, model);
        // Model taþýma iþlemleri
        break;
    }
    case 6:
        std::cout << "Viewing from six directions" << std::endl;
        // Altý yönden görüntüleme iþlemleri
        break;
    case 7:
        drillHole();
        // Delik açma iþlemleri
        break;
    case 8: {
        double interval;
        int numModels;
        std::cout << "Enter interval value: ";
        std::cin >> interval;
        std::cout << "Enter number of models: ";
        std::cin >> numModels;
        placeModels(interval, numModels);
        // Model yerleþtirme iþlemleri
        break;
    }
    default:
        std::cout << "Invalid option!" << std::endl;
        break;
    }
}

int main() {
    int option;
    // Kullanýcýya seçenekleri gösterme
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
