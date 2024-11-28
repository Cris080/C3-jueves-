#include <stdio.h>
#include <stdlib.h>

#pragma pack(push, 1) // Para evitar padding
typedef struct {
    unsigned char  bfType[2];  // Tipo de archivo, debe ser "BM"
    unsigned int   bfSize;     // Tama�o del archivo en bytes
    unsigned short bfReserved1;
    unsigned short bfReserved2;
    unsigned int   bfOffBits;  // Offset hasta los datos de la imagen
} BITMAPFILEHEADER;

typedef struct { // describe la imagen, como el tamano, ancho, alto, numero de bits por pixel
    unsigned int   biSize;         // Tama�o de este encabezado
    int            biWidth;        // Ancho de la imagen
    int            biHeight;       // Alto de la imagen
    unsigned short biPlanes;
    unsigned short biBitCount;     // Bits por p�xel (debe ser 24 para este ejemplo)
    unsigned int   biCompression;
    unsigned int   biSizeImage;
    int            biXPelsPerMeter;
    int            biYPelsPerMeter;
    unsigned int   biClrUsed;
    unsigned int   biClrImportant;
} BITMAPINFOHEADER;
#pragma pack(pop) //restaura el alineamiento

// Funci�n para convertir un p�xel BGR a escala de grises
unsigned char convertirAGris(unsigned char b, unsigned char g, unsigned char r) {
    return (unsigned char)(0.3 * r + 0.59 * g + 0.11 * b);
}

// Funci�n para convertir la imagen BMP a escala de grises
void convertirBMPBlancoNegro(const char *input_filename, const char *output_filename) { //abre el archivo BMP si no se puede abrir, muestra un error
    FILE *input_file = fopen(input_filename, "rb");
    if (input_file == NULL) {
        fprintf(stderr, "No se puede abrir el archivo %s\n", input_filename);
        return;
    }

    // Leer el encabezado del archivo BMP
    BITMAPFILEHEADER fileHeader;
    fread(&fileHeader, sizeof(BITMAPFILEHEADER), 1, input_file);

    // Leer el encabezado de la informaci�n BMP
    BITMAPINFOHEADER infoHeader;
    fread(&infoHeader, sizeof(BITMAPINFOHEADER), 1, input_file);


    if (fileHeader.bfType[0] != 'B' || fileHeader.bfType[1] != 'M' || infoHeader.biBitCount != 24) { //Verifica que el archivo tenga el formato correcto y sea de 24 bits
        fprintf(stderr, "El archivo no es un BMP de 24 bits\n");
        fclose(input_file);
        return;
    }

    // Crear el archivo de salida
    FILE *output_file = fopen(output_filename, "wb");
    if (output_file == NULL) {
        fprintf(stderr, "No se puede crear el archivo %s\n", output_filename);
        fclose(input_file);
        return;
    }

    // Escribir los encabezados al archivo de salida
    fwrite(&fileHeader, sizeof(BITMAPFILEHEADER), 1, output_file);
    fwrite(&infoHeader, sizeof(BITMAPINFOHEADER), 1, output_file);

    // Calcular el padding (relleno) de cada fila
    int padding = (4 - (infoHeader.biWidth * 3) % 4) % 4; //este calculo determina los bytes de relleno necesario

    // Leer, convertir y escribir cada fila de p�xeles
    for (int i = 0; i < infoHeader.biHeight; i++) {
        for (int j = 0; j < infoHeader.biWidth; j++) {
            unsigned char bgr[3];  // Buffer para un p�xel (B, G, R)
            fread(bgr, 3, 1, input_file);

            // Convertir el p�xel a escala de grises
            unsigned char gris = convertirAGris(bgr[0], bgr[1], bgr[2]);

            // Escribir el p�xel convertido en blanco y negro
            unsigned char gris_pixel[3] = {gris, gris, gris};
            fwrite(gris_pixel, 3, 1, output_file);
        }

        // Saltar el relleno (padding) en el archivo original
        fseek(input_file, padding, SEEK_CUR);

        // A�adir el relleno al archivo de salida
        unsigned char padding_bytes[3] = {0, 0, 0};  // M�ximo de 3 bytes de padding
        fwrite(padding_bytes, padding, 1, output_file);
    }

    // Cerrar los archivos
    fclose(input_file);
    fclose(output_file);

    printf("Imagen convertida a blanco y negro y guardada en %s\n", output_filename);
}

int main(int argc, char *argv[])
{
    const char *archivo_entrada = "avion.bmp"; //define el archivo de entrada
    const char *archivo_salida = "avion_bn.bmp"; // define el archivo de salida

    convertirBMPBlancoNegro(archivo_entrada, archivo_salida); //llama a la funcion

    return 0;
}
