#include <stdint.h>

#define STB_IMAGE_WRITE_IMPLEMENTATION
//#include "stb_image_write.h"

#define CHANNEL_NUM 3

int main() {
    int width = 800;
    int height = 800;

    uint8_t* rgb_image;
    rgb_image = malloc(width*height*CHANNEL_NUM);

    // Write your code to populate rgb_image here

    stbi_write_png("image.png", width, height, CHANNEL_NUM, rgb_image, width*CHANNEL_NUM);

    return 0;
}
//#include <stdint.h>
//
//#define STB_IMAGE_IMPLEMENTATION
//#include "stb_image.h"
//
//int main() {
//    int width, height, bpp;
//
//    uint8_t* rgb_image = stbi_load("image.png", &width, &height, &bpp, 3);
//
//    stbi_image_free(rgb_image);
//
//    return 0;
//}
