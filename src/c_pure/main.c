
#include "koch_snow_flake.h"
#include "heart_curve.h"
#include "line.h"
#include "svpng.inc"
#include "light.h"

#define W 512
#define H 512

static char *image;

int main(void){
    // showKoch();
//    showHeartCharacter();
//    showHeartPattern();
    // show3DHeart();

    // FILE *fp = fopen("heart_3d_test.png", "wb");
    // image = save3DHeart();
    // svpng(fp, W, H, image, 1);

//    FILE *fp = fopen("line_bresenham.png", "wb");
//    image = drawLineWithSimpleBresenham();
//    svpng(fp, W, H, image, 0);

    // FILE *fp = fopen("line_sample.png", "wb");
    // image = drawLineWithSample();
    // svpng(fp, W, H, image, 0);

    // FILE *fp = fopen("line_anti_aliasing.png", "wb");
    // image = drawLineWithAntiAliasing();
    // svpng(fp, W, H, image, 0);

    // FILE *fp = fopen("line_sdf.png", "wb");
    // image = drawLineWithSDF();
    // svpng(fp, W, H, image, 0);

//    FILE *fp = fopen("line_sdf_aabb.png", "wb");
//    image = drawLineWithAABBSDF();
//    svpng(fp, W, H, image, 0);

    // FILE *fp = fopen("line_stitch_heart.png", "wb");
    // image = drawStitchHeart();
    // svpng(fp, W, H, image, 0);

    // FILE *fp = fopen("light_basic.png", "wb");
    // image = drawBasicLight();
    // svpng(fp, W, H, image, 0);
    
    // FILE *fp = fopen("light_geomitry_basic.png", "wb");
    // image = drawCSGLight();
    // svpng(fp, W, H, image, 0);

    // FILE *fp = fopen("light_geomitry_shape.png", "wb");
    // image = drawShapes();
    // svpng(fp, W, H, image, 0);

    // FILE *fp = fopen("light_m.png", "wb");
    // image = drawM();
    // svpng(fp, W, H, image, 0);

    // FILE *fp = fopen("light_gradient.png", "wb");
    // image = drawGradient();
    // svpng(fp, W, H, image, 0);

    FILE *fp = fopen("light_reflect.png", "wb");
    image = drawReflect();
    svpng(fp, W, H, image, 0);

    fclose(fp);
    return 0;
}