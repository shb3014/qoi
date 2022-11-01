//
// Created by sungaoran on 2022/1/17.
//


#define STB_IMAGE_IMPLEMENTATION
#define STBI_ONLY_PNG
#define STBI_NO_LINEAR

#include "stb_image.h"

#define STB_IMAGE_WRITE_IMPLEMENTATION

#include "stb_image_write.h"

#define QOI_IMPLEMENTATION

#include "qoi.h"


#define STR_ENDS_WITH(S, E) (strcmp(S + strlen(S) - (sizeof(E)-1), E) == 0)

int main(int argc, char **argv) {
    if (argc < 3) {
        puts("Usage: qoiconv <infile> <outfile>");
        puts("Examples:");
        puts("  mqoiconv /input output.mqoi");
        exit(1);
    }
//    qoi_desc desc = {
//            .channels=3,
//            .width = 320,
//            .height = 240,
//            .colorspace= QOI_SRGB
//    };
//    printf("converting %s to %s\n",argv[1], argv[2]);
    printf("start to convert to mqoi %s | %s\n",argv[1],argv[2]);
    mqoi_encode(argv[1], argv[2]);
    return 0;
}