#include <stdio.h>
#include "lib_ppm.h"


struct pixel_s {
unsigned char r, g, b;
};


struct image_s {
int width;
int height;
struct pixel_s *pix;
};


int read_ppm(char *file, struct image_s *image);
int write_ppm(char *file, struct image_s *image);
int free_ppm(struct image_s *image);



int main(){
    struct image_s data;
    struct image_s *image = &data;
    int r = read_ppm("image.ppm", image);
}




