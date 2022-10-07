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

	 //image.open("RGB.ppm");

	if (image.is_open()) {

		// image header info
		image << "P3" << endl;
		image << "3 2" << endl; 
		image << "255" << endl;

		// image body info
		image << "255 0 0" << endl; // red
		image << "0 255 0" << endl; // green
		image << "0 0 255" << endl; // blue
		image << "255 255 0" << endl; // yellow
		image << "255 255 255" << endl; // white
		image << "0 0 0" << endl; // black

	 }
	image.close();
}