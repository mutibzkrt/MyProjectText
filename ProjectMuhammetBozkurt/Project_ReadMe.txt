Proje Adı: MyProject
Proje Açıklaması
MyProject, C++ dilinde yazılmış modüler bir uygulamadır. Bu uygulama, STL dosyalarından model verilerini okuyarak dilimleme, döndürme, taşıma, delik açma ve çoklu model yerleştirme gibi işlemleri gerçekleştirebilen bir modelleme aracı olarak tasarlanmıştır.

Kullanılan Teknolojiler ve Kütüphaneler
C++ 11: Proje, C++ 11 standartlarına uygun olarak yazılmıştır.
CMake: Proje yönetimi ve derleme süreci için CMake kullanılmıştır.
STL Dosyası İşlemleri: Model.cpp dosyasında STL dosyalarının okunması ve model verilerinin işlenmesi için standart kütüphane fonksiyonları kullanılmıştır.
Modüler Programlama: Proje, modüler bir yapıda oluşturulmuş olup, Model.h ve Model.cpp dosyaları modelleme işlemlerini, Main.cpp ise kullanıcı arayüzünü ve işlem seçeneklerini içermektedir.
Dosya Yapısı

project/
├── include/
│   └── Model.h
├── src/
│   ├── Model.cpp
│   └── Main.cpp
└── CMakeLists.txt

include/Model.h: Model ve işlev prototiplerini içeren başlık dosyası.
src/Model.cpp: Model işlemlerini gerçekleştiren fonksiyonların tanımlandığı kaynak dosyası.
src/Main.cpp: Kullanıcı arayüzü ve işlem seçeneklerini içeren ana uygulama dosyası.
CMakeLists.txt: Proje derleme ve yapılandırma için CMake dosyası.
Projeyi Derleme ve Çalıştırma
Proje, CMake kullanılarak derlenir ve aşağıdaki adımlarla çalıştırılır:
console:
mkdir build
cd build
cmake ..
make
./MyProject

Kullanım Senaryoları
Dilim Alma: STL dosyasından model okunur ve belirtilen kalınlıkta dilimlenir.
Model Döndürme: Belirtilen açıda model döndürülür.
Model Taşıma: Belirtilen vektörde model taşınır.
Delik Açma: Manuel olarak model üzerinde delik açılır.
Modelleri Yerleştirme: Belirtilen aralık ve sayıda model otomatik olarak yerleştirilir.
Gelecek İyileştirmeler
Kullanıcı dostu arayüz geliştirme.
Daha fazla dosya formatı desteği ekleme (örneğin, OBJ dosyaları).
Görüntüleme ve analiz araçları eklenmesi.

Muhammet Bozkurt