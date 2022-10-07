// cria uma pasta e armazena as informações
// arquivo de saida na mesma pasta

#include <iostream>
#include <fstream>

 using namespace std;

int main() {
	//create images
	ofstream image;

	// cria uma pasta de image par a saida das imagens
	image.open("./images/RGB.ppm");
	image.close();
}