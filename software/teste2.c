/* ---- IO Device Locations ---- */
#define REG32 (volatile unsigned int*)
#define GPIO_OUT (*(REG32 (0xFFFFFE020)))
#define GPIO_IN  (*(REG32 (0xFFFFFE024)))

#define TO_INTEGER(x)   (0x7FF & ((x.stall_go_out<<10)|(x.tx<<9)|(x.eop_out<<8)|(x.data_out)))

#define WIDTH 50
#define HEIGHT 50

unsigned char image[] = { 0x54, 0x54, 0x0A, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0A, 0x0A, 0x0A, 0x0A, 0x00, 0x00, 0x0A, 0x0A, 0x0A, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0A, 0x0A, 0x00, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0B, 0x4B, 0x0A, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0A, 0x0A, 0x0B,
0x54, 0x0C, 0x0A, 0x00, 0x00, 0x00, 0x0A, 0x4C, 0x55, 0x4D, 0x0A, 0x55, 0x55, 0x54, 0x0A, 0x0A, 0x54, 0x5C, 0x4C, 0x0B, 0x4C, 0x55, 0x55, 0x55, 0x0C, 0x0B, 0x0A, 0x54, 0x54, 0x0B, 0x0A, 0x0A, 0x0B, 0x0B, 0x5D, 0x54, 0x0A, 0x00, 0x54, 0x5C, 0x54, 0x0A, 0x5C, 0x54, 0x00, 0x00, 0x00, 0x0A, 0x0A, 0x0C,
0x4B, 0x0B, 0x0A, 0x00, 0x00, 0x00, 0x0B, 0x4D, 0x0B, 0x01, 0x0B, 0x0B, 0x0B, 0x4C, 0x0A, 0x54, 0x4A, 0x0A, 0x4C, 0x0C, 0x0B, 0x0B, 0x4B, 0x0B, 0x55, 0x01, 0x0B, 0x0B, 0x4B, 0x54, 0x0A, 0x0A, 0x54, 0x4C, 0x0B, 0x0A, 0x0B, 0x00, 0x4C, 0x0A, 0x0A, 0x4D, 0x4A, 0x0B, 0x00, 0x00, 0x00, 0x0A, 0x0A, 0x0C,
0x0A, 0x0A, 0x0A, 0x0A, 0x00, 0x00, 0x0A, 0x54, 0xF6, 0x9D, 0x55, 0xFF, 0xF7, 0x55, 0x00, 0x4B, 0xF6, 0xF6, 0x0B, 0x55, 0x9D, 0xF6, 0xF6, 0xF6, 0x07, 0x4B, 0x0A, 0x07, 0xF6, 0x54, 0x0A, 0x0B, 0x14, 0x55, 0xF6, 0x07, 0x55, 0x0A, 0x4C, 0xF6, 0xA5, 0x4E, 0xF6, 0x07, 0x00, 0x00, 0x00, 0x00, 0x0A, 0x0B,
0x00, 0x0A, 0x0A, 0x0A, 0x0A, 0x00, 0x0A, 0x55, 0xF6, 0xAF, 0x4C, 0xFF, 0xA4, 0x5E, 0x00, 0x4B, 0xF6, 0xF6, 0x0B, 0x55, 0x9D, 0xFF, 0xF6, 0xF6, 0xF6, 0x0A, 0x0B, 0x07, 0xF6, 0x54, 0x0A, 0x0B, 0x0C, 0x55, 0xF6, 0x07, 0x9E, 0x0A, 0x4C, 0xFF, 0xA5, 0x4E, 0xF6, 0xEE, 0x00, 0x00, 0x00, 0x00, 0x0A, 0x0B,
0x00, 0x0A, 0x4A, 0x0A, 0x0A, 0x00, 0x00, 0x0A, 0xF6, 0xF6, 0x0A, 0xF6, 0x0B, 0x01, 0x0A, 0x43, 0xF6, 0xF6, 0x4C, 0x55, 0x9D, 0xF6, 0xA5, 0xF6, 0xFF, 0x9C, 0x0C, 0x07, 0xF6, 0x54, 0x0A, 0x0B, 0x0D, 0x4D, 0xF6, 0x07, 0x4C, 0x00, 0x4B, 0xFF, 0x9D, 0x56, 0xF6, 0xAE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0A,
0x00, 0x0A, 0x0A, 0x0A, 0x0A, 0x00, 0x0A, 0x0A, 0x07, 0xFF, 0xFF, 0xF7, 0x0C, 0x0B, 0x0C, 0xAE, 0xF6, 0xF6, 0x07, 0x54, 0xA5, 0xFF, 0xAE, 0x54, 0xF6, 0xAD, 0x4D, 0x08, 0xF6, 0x55, 0x0A, 0x0C, 0x0D, 0x4B, 0xF6, 0xF6, 0x4B, 0x0C, 0x4B, 0xFF, 0x5C, 0x56, 0xFF, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x0A, 0x0B, 0x0B, 0x0A, 0x00, 0x9D, 0x0A, 0xAE, 0xF6, 0xFF, 0x9C, 0x0B, 0x14, 0x0D, 0x07, 0xA4, 0xFF, 0x07, 0x55, 0xA5, 0xF6, 0x5C, 0x07, 0xF6, 0x54, 0x0E, 0x08, 0xF6, 0x55, 0x0A, 0x15, 0x56, 0x5C, 0xF7, 0xF6, 0x54, 0x4D, 0x4B, 0xFF, 0x5C, 0x56, 0xF6, 0xF7, 0x0A, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x0A, 0x0B, 0x4C, 0x0B, 0x0A, 0x5D, 0x53, 0x5D, 0xF6, 0xFF, 0x53, 0x0B, 0x15, 0x0D, 0xF6, 0x5B, 0xFF, 0x08, 0x54, 0x9D, 0xF6, 0xEF, 0xF6, 0xF6, 0x4B, 0x0E, 0x08, 0xF6, 0x55, 0x0A, 0x55, 0x56, 0x9D, 0xA5, 0xF6, 0x5C, 0x55, 0x4C, 0xFF, 0x5C, 0x4E, 0xF6, 0xF7, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x0A, 0x0B, 0x0C, 0x54, 0x0C, 0x54, 0x00, 0x00, 0x0B, 0xF6, 0xF6, 0x4C, 0x0C, 0x15, 0x57, 0x08, 0x4A, 0xF6, 0x08, 0x5E, 0x9C, 0xFF, 0x08, 0xFF, 0x08, 0x4C, 0x0E, 0xF6, 0xF6, 0x55, 0x0A, 0x5D, 0x56, 0xF6, 0x9B, 0xF6, 0xAE, 0x56, 0x4C, 0xFF, 0x9D, 0x4D, 0xF6, 0xF7, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x00,
0x0A, 0x0B, 0x0C, 0x55, 0x0C, 0x0B, 0x0A, 0x00, 0x5D, 0xFF, 0xF6, 0x0A, 0x0C, 0x5E, 0x15, 0x08, 0x0A, 0x08, 0xF6, 0x54, 0x5C, 0xFF, 0x08, 0x08, 0x08, 0x53, 0x0E, 0xF6, 0xF6, 0x55, 0x0A, 0x56, 0x4C, 0xF6, 0x53, 0xF6, 0xF7, 0x54, 0x4C, 0xF6, 0xAE, 0x4E, 0xF6, 0xF7, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A,
0x0C, 0x0C, 0x0C, 0x55, 0x0C, 0x0B, 0x0A, 0x0A, 0xF6, 0xF6, 0xF6, 0x9D, 0x0D, 0x15, 0x15, 0xF6, 0x07, 0xF6, 0xF6, 0xAF, 0x5C, 0xF6, 0x9D, 0x0A, 0xF6, 0xF6, 0x56, 0x07, 0xFF, 0x56, 0x0B, 0x0C, 0x0B, 0xF6, 0x07, 0xF6, 0x08, 0x0B, 0x01, 0xF6, 0x5C, 0x57, 0xF6, 0xF7, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A,
0x0C, 0x0C, 0x0C, 0x55, 0x0C, 0x0B, 0x0A, 0x0A, 0x08, 0xF6, 0xF6, 0xA6, 0x0D, 0x1E, 0x15, 0xF6, 0x08, 0xFF, 0xF6, 0x5E, 0x9D, 0xF6, 0x9D, 0x0B, 0xF6, 0xF6, 0x56, 0x08, 0xF6, 0x56, 0x0B, 0x0C, 0x0A, 0xF6, 0x08, 0xF6, 0x08, 0x0B, 0x0C, 0xF6, 0x9D, 0x57, 0xF6, 0xF7, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A,
0x15, 0x5E, 0x5E, 0x0C, 0x0C, 0x0B, 0x0B, 0x55, 0xF6, 0xF6, 0x53, 0xF6, 0x0C, 0x16, 0x55, 0xFF, 0x54, 0xF7, 0xFF, 0x5E, 0x5C, 0xFF, 0xF6, 0x53, 0xF6, 0x07, 0x5F, 0x07, 0xF6, 0x4C, 0x54, 0x01, 0x5D, 0xF6, 0x53, 0xF6, 0xF6, 0x5C, 0x4C, 0xF6, 0xA4, 0x56, 0xF6, 0xF7, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A,
0x15, 0x1E, 0x55, 0x0C, 0x0C, 0x0B, 0x0B, 0x15, 0xF6, 0xF6, 0x54, 0xF6, 0xA7, 0x16, 0x0D, 0xF6, 0x54, 0x5C, 0xF6, 0x56, 0x9D, 0xF6, 0xA5, 0x07, 0xF6, 0x07, 0x0D, 0x07, 0xF6, 0x0A, 0x0A, 0x55, 0xA6, 0xF6, 0x54, 0xF6, 0xF6, 0xA5, 0x4D, 0xF6, 0x07, 0x4C, 0xF6, 0xAD, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A,
0x14, 0x55, 0x0D, 0x0C, 0x0C, 0x0B, 0x0C, 0x55, 0xF6, 0xA5, 0x5E, 0x08, 0xAE, 0x56, 0xEF, 0xF6, 0x4D, 0x0B, 0xF6, 0x5F, 0x5D, 0xF6, 0xF6, 0xF6, 0xF6, 0xB7, 0xAF, 0x07, 0xF6, 0xF6, 0xF6, 0x56, 0xF6, 0xF6, 0x56, 0x07, 0xF6, 0xEE, 0x55, 0x08, 0xF6, 0xF6, 0x07, 0x53, 0x0A, 0x0A, 0x0A, 0x0C, 0x0A, 0x0A,
0x0C, 0x67, 0x56, 0x55, 0x55, 0x14, 0x55, 0x4C, 0x07, 0x4B, 0x56, 0x07, 0xEE, 0x01, 0x5C, 0x08, 0x55, 0x0B, 0x07, 0x5E, 0x5D, 0xF6, 0x08, 0xF6, 0xEF, 0x1C, 0xF6, 0x08, 0x08, 0x08, 0x08, 0x55, 0x9B, 0x08, 0x55, 0xA5, 0x08, 0x07, 0x4D, 0x4B, 0x08, 0x08, 0x4B, 0x54, 0x0B, 0x0B, 0x0B, 0x0B, 0x0A, 0x0A,
0x14, 0x5E, 0x5E, 0x56, 0x15, 0x15, 0x67, 0x55, 0x0A, 0x0C, 0x16, 0x0B, 0x0B, 0x0C, 0x0C, 0x0B, 0xA7, 0x15, 0x0A, 0x56, 0x01, 0x0B, 0x0A, 0x0A, 0x4C, 0x1E, 0xB7, 0x0B, 0x0A, 0x5C, 0x0A, 0x56, 0x0B, 0x0A, 0x4D, 0x0B, 0x0A, 0x0A, 0x0C, 0x54, 0x0B, 0x0B, 0x54, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0A, 0x0A,
0x0C, 0x15, 0x5E, 0x5E, 0x1E, 0x67, 0x6F, 0x6F, 0x67, 0xB7, 0x16, 0x15, 0x15, 0x15, 0x15, 0x16, 0x15, 0x15, 0x16, 0x2F, 0x2F, 0x27, 0x27, 0x27, 0x27, 0x27, 0x2F, 0x1E, 0x1E, 0x1E, 0x1E, 0x15, 0x14, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x14, 0x55, 0x15, 0x1E, 0x15, 0x14, 0x14, 0x0C, 0x0B, 0x0A,
0x0C, 0x15, 0x5E, 0x5E, 0x1E, 0x67, 0x6F, 0x6F, 0x67, 0x6F, 0x16, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x1E, 0x2F, 0x2F, 0x27, 0x67, 0x67, 0x27, 0x2F, 0x2F, 0x1F, 0x1E, 0x1E, 0x1F, 0x15, 0x1E, 0x15, 0x15, 0x15, 0x15, 0x15, 0x16, 0x15, 0x0C, 0x14, 0x15, 0x1E, 0x16, 0x15, 0x15, 0x0C, 0x0B, 0x0A,
0x15, 0x15, 0x15, 0x1E, 0x1E, 0x67, 0x6F, 0x6F, 0x27, 0x1E, 0x16, 0x15, 0x15, 0x15, 0x15, 0x15, 0x16, 0x16, 0x1E, 0x6F, 0x2F, 0x2F, 0x6F, 0x6F, 0x6F, 0x6F, 0x6F, 0x6F, 0xB7, 0x66, 0x67, 0x1E, 0x6F, 0x6F, 0x1E, 0x15, 0x15, 0x1E, 0x5F, 0x16, 0x15, 0x15, 0x15, 0x15, 0x15, 0x0C, 0x14, 0x0C, 0x0B, 0x0A,
0x15, 0x15, 0x15, 0x1E, 0x1E, 0x27, 0x6F, 0x6F, 0x1E, 0x1E, 0x16, 0x15, 0x15, 0x15, 0x15, 0x16, 0x1E, 0x1E, 0x1F, 0x6F, 0x2F, 0x6F, 0x6F, 0xB7, 0xB7, 0x6F, 0x6F, 0xAF, 0xB7, 0xB7, 0xB7, 0x1E, 0x27, 0x27, 0x67, 0x15, 0x15, 0x1E, 0x1F, 0x16, 0x15, 0x15, 0x15, 0x15, 0x15, 0x55, 0x14, 0x14, 0x0B, 0x0A,
0x15, 0x15, 0x55, 0x1E, 0x1F, 0x1F, 0x6F, 0x6F, 0x1F, 0x1F, 0x1E, 0x15, 0x15, 0x15, 0x15, 0x1E, 0x1E, 0x1E, 0x27, 0x2F, 0x77, 0xBF, 0xEF, 0x5D, 0xEE, 0xF6, 0xF6, 0xB6, 0xAF, 0xAE, 0xF6, 0x6F, 0x27, 0x2F, 0x6F, 0x1E, 0x1E, 0x1E, 0x6F, 0x27, 0x1E, 0x16, 0x56, 0x56, 0x0E, 0x56, 0x4D, 0x15, 0x0C, 0x0A,
0x15, 0x15, 0x55, 0x1E, 0x1F, 0x1F, 0x6F, 0x6F, 0x1F, 0x1F, 0x1E, 0x15, 0x15, 0x15, 0x15, 0x1E, 0x1E, 0x1E, 0x27, 0x2F, 0x77, 0xBF, 0xEF, 0x5D, 0xEE, 0xF6, 0xF6, 0xB6, 0xAF, 0xAE, 0xF6, 0x6F, 0x27, 0x2F, 0x6F, 0x1E, 0x1E, 0x1E, 0x6F, 0x27, 0x1E, 0x16, 0x56, 0x56, 0x0E, 0x56, 0x4D, 0x15, 0x0C, 0x0A,
0x15, 0x0C, 0x0D, 0x16, 0x16, 0x1F, 0x2F, 0x6F, 0x1F, 0x1F, 0x1E, 0x16, 0x16, 0x1E, 0x1F, 0x1F, 0x27, 0x27, 0x27, 0x6F, 0x6F, 0xF6, 0xF6, 0x5C, 0x07, 0xEF, 0xB7, 0xB7, 0xA5, 0xF6, 0xF6, 0xB7, 0x6F, 0x6F, 0x6F, 0x27, 0x27, 0x2F, 0x77, 0x27, 0x1F, 0x1E, 0x0E, 0x4E, 0x4E, 0x4D, 0x4E, 0x15, 0x0C, 0x0B,
0x15, 0x55, 0x4D, 0x56, 0x56, 0x1E, 0x2F, 0x2F, 0x27, 0x27, 0x27, 0x1E, 0x1E, 0x1F, 0x1F, 0x27, 0x27, 0x27, 0x2F, 0x77, 0x6F, 0xF6, 0xF6, 0x08, 0xF6, 0xAF, 0x67, 0xAF, 0xF6, 0xF6, 0xF6, 0xAF, 0x6F, 0x6F, 0x6F, 0x6F, 0x2F, 0x6F, 0x77, 0x27, 0x1E, 0x1F, 0x0E, 0x0E, 0x0E, 0x4E, 0x55, 0x15, 0x14, 0x0C,
0x15, 0x4D, 0x4E, 0x4E, 0x4E, 0x5E, 0x2F, 0x2F, 0x27, 0x1F, 0x27, 0x27, 0x27, 0x1E, 0x27, 0x27, 0x27, 0x27, 0x2F, 0x6F, 0x66, 0xF6, 0xF6, 0xF6, 0xB7, 0x67, 0x5F, 0x67, 0xEF, 0xF6, 0xF6, 0xAF, 0x67, 0x67, 0x2F, 0x77, 0x6F, 0x77, 0x77, 0x27, 0x1E, 0x1F, 0x0E, 0x4E, 0x0E, 0x0D, 0x15, 0x15, 0x14, 0x0C,
0x1E, 0x0D, 0x4D, 0x4D, 0x4D, 0x56, 0x2F, 0x27, 0x27, 0x27, 0x27, 0x27, 0x27, 0x27, 0x27, 0x27, 0x27, 0x27, 0x27, 0x67, 0x55, 0x5D, 0xA5, 0x5D, 0x55, 0x1F, 0x1F, 0x5F, 0x56, 0xAF, 0xEF, 0x55, 0x56, 0x1E, 0x77, 0x77, 0x77, 0x77, 0x77, 0x27, 0x27, 0x5F, 0x0D, 0x0D, 0x0D, 0x15, 0x67, 0x15, 0x14, 0x15,
0x1E, 0x0D, 0x4D, 0x4D, 0x4D, 0x15, 0x27, 0x27, 0x27, 0x27, 0x27, 0x27, 0x27, 0x67, 0x27, 0x27, 0x27, 0x27, 0x27, 0x5E, 0x15, 0x54, 0x54, 0x4C, 0x0D, 0x1F, 0x1F, 0x5F, 0x55, 0xA6, 0xAF, 0x55, 0x56, 0x16, 0x77, 0x77, 0x77, 0x77, 0x77, 0x27, 0x67, 0x5F, 0x0D, 0x0D, 0x0D, 0x15, 0x5E, 0x15, 0x14, 0x1D,
0x1E, 0x56, 0x55, 0x0D, 0x0D, 0x56, 0x67, 0x1F, 0x27, 0x27, 0x6F, 0x6F, 0x27, 0x67, 0x27, 0x27, 0x27, 0x27, 0x67, 0x0D, 0x0D, 0x01, 0x0C, 0x01, 0x01, 0x17, 0x17, 0x57, 0x0E, 0x0C, 0x4D, 0x0D, 0x0D, 0x56, 0x6F, 0x77, 0x77, 0x77, 0x77, 0x2F, 0x67, 0x1E, 0x01, 0x4D, 0x15, 0x1E, 0x5E, 0x14, 0x14, 0x1E,
0x27, 0x5E, 0x56, 0x0D, 0x4D, 0x0D, 0x15, 0x5F, 0x27, 0x27, 0x77, 0x6F, 0x2F, 0x2F, 0x27, 0x2F, 0x27, 0x67, 0x5F, 0x4D, 0x0C, 0x01, 0x0C, 0x0C, 0x01, 0x0D, 0x57, 0x0E, 0x0C, 0x0B, 0x0C, 0x0C, 0x0C, 0x4D, 0x1F, 0x77, 0x2F, 0x2F, 0x2F, 0x67, 0x1E, 0x0D, 0x0D, 0x0D, 0x5E, 0x1E, 0x15, 0x15, 0x14, 0x1E,
0x27, 0x5E, 0x56, 0x0D, 0x4D, 0x0D, 0x15, 0x5F, 0x27, 0x27, 0x77, 0x6F, 0x2F, 0x2F, 0x27, 0x2F, 0x27, 0x67, 0x5F, 0x4D, 0x0C, 0x01, 0x0C, 0x0C, 0x01, 0x0D, 0x57, 0x0E, 0x0C, 0x0B, 0x0C, 0x0C, 0x0C, 0x4D, 0x1F, 0x77, 0x2F, 0x2F, 0x2F, 0x67, 0x1E, 0x0D, 0x0D, 0x0D, 0x5E, 0x1E, 0x15, 0x15, 0x14, 0x1E,
0x27, 0x27, 0x2F, 0x6F, 0x67, 0x55, 0x0D, 0x0D, 0x67, 0x67, 0x2F, 0x2F, 0x2F, 0x2F, 0x6F, 0x1E, 0x56, 0x56, 0x4E, 0x0C, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0B, 0x0C, 0x4E, 0x56, 0x1F, 0x6F, 0x67, 0x15, 0x0D, 0x0D, 0x15, 0x5E, 0x1E, 0x67, 0x67, 0x15, 0x1E, 0x67,
0x27, 0x2F, 0x2F, 0x6F, 0x6F, 0x15, 0x4E, 0x0D, 0x5E, 0x77, 0x2F, 0x2F, 0x2F, 0x2F, 0x6F, 0x56, 0x56, 0x4E, 0x4E, 0x0C, 0x0B, 0x0C, 0x0C, 0x0C, 0x4C, 0x4C, 0x4C, 0x0B, 0x0B, 0x0B, 0x0B, 0x0A, 0x0B, 0x0C, 0x4E, 0x57, 0x1F, 0x6F, 0x27, 0x0D, 0x4D, 0x0D, 0x16, 0x5E, 0x1E, 0x27, 0x16, 0x55, 0x15, 0x1E,
0x2F, 0x2F, 0x2F, 0x77, 0x77, 0x67, 0x0D, 0x4D, 0x0D, 0x1E, 0x67, 0x6F, 0x2F, 0x37, 0x6F, 0x16, 0x0E, 0x0E, 0x4E, 0x0C, 0x0D, 0x0C, 0x0D, 0x0D, 0x0C, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0C, 0x0C, 0x0C, 0x0D, 0x4E, 0x56, 0x5F, 0x6F, 0x16, 0x4D, 0x4D, 0x0D, 0x5E, 0x1E, 0x1E, 0x15, 0x15, 0x15, 0x15, 0x15,
0x2F, 0x2F, 0x37, 0x77, 0x77, 0x6F, 0x0D, 0x4D, 0x0D, 0x15, 0x67, 0x2F, 0x2F, 0x37, 0x6F, 0x5F, 0x0E, 0x0E, 0x4E, 0x0C, 0x0D, 0x0C, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0C, 0x0C, 0x0D, 0x4E, 0x56, 0x5E, 0x67, 0x16, 0x4D, 0x4D, 0x0D, 0x67, 0x1E, 0x15, 0x15, 0x0D, 0x15, 0x15, 0x15,
0x37, 0x37, 0x37, 0x37, 0x37, 0x77, 0x5F, 0x16, 0x4D, 0x0D, 0x15, 0x77, 0x77, 0x77, 0x77, 0x67, 0x0D, 0x0D, 0x0D, 0x01, 0x01, 0x01, 0x01, 0x0C, 0x0C, 0x0C, 0x0C, 0x01, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x4D, 0x4D, 0x0D, 0x4E, 0x56, 0x4E, 0x0D, 0x0D, 0x5E, 0x1E, 0x1E, 0x16, 0x0C, 0x0C, 0x15, 0x15, 0x15,
0x37, 0x37, 0x37, 0x37, 0x37, 0x37, 0x67, 0x1E, 0x56, 0x0D, 0x0D, 0x6F, 0x77, 0x77, 0x77, 0x67, 0x0D, 0x0D, 0x0D, 0x01, 0x01, 0x01, 0x01, 0x0C, 0x01, 0x01, 0x0C, 0x01, 0x0D, 0x01, 0x0D, 0x0D, 0x0D, 0x0D, 0x4D, 0x4D, 0x0D, 0x4E, 0x4E, 0x0D, 0x56, 0x5F, 0x1E, 0x15, 0x15, 0x0C, 0x0C, 0x0C, 0x15, 0x15,
0x37, 0x77, 0x37, 0x2F, 0x2F, 0x2F, 0x77, 0x6F, 0x16, 0x0E, 0x4D, 0x0D, 0x6F, 0x6F, 0x2F, 0x6F, 0x5E, 0x4C, 0x0C, 0x0D, 0x01, 0x0C, 0x0C, 0x01, 0x01, 0x01, 0x0C, 0x0D, 0x0D, 0x0D, 0x4D, 0x0D, 0x0C, 0x01, 0x01, 0x4D, 0x4D, 0x4E, 0x0D, 0x16, 0x67, 0x27, 0x15, 0x16, 0x15, 0x0C, 0x0B, 0x0C, 0x67, 0x27,
0x37, 0x37, 0x77, 0x37, 0x37, 0x2F, 0x37, 0x77, 0x16, 0x0E, 0x0D, 0x0D, 0x15, 0x27, 0x2F, 0x6F, 0x67, 0x0C, 0x0C, 0x4D, 0x01, 0x0C, 0x0C, 0x01, 0x01, 0x0C, 0x0C, 0x0D, 0x0D, 0x0D, 0x0D, 0x0C, 0x01, 0x01, 0x0C, 0x0D, 0x0D, 0x4E, 0x0D, 0x67, 0x67, 0x27, 0x15, 0x1E, 0x15, 0x0C, 0x0C, 0x0C, 0x67, 0x67,
0x3F, 0x7F, 0x77, 0x37, 0x37, 0x2F, 0x37, 0x77, 0x5F, 0x56, 0x0D, 0x4D, 0x0D, 0x15, 0x27, 0x2F, 0x67, 0x0C, 0x01, 0x01, 0x01, 0x0C, 0x0C, 0x01, 0x01, 0x0C, 0x0C, 0x0D, 0x0D, 0x0D, 0x0D, 0x01, 0x01, 0x0C, 0x4C, 0x0D, 0x0D, 0x0D, 0x56, 0x6F, 0x2F, 0x27, 0x1E, 0x15, 0x1E, 0x15, 0x0C, 0x55, 0x67, 0x27,
0xFB, 0x7F, 0x77, 0x2F, 0x2F, 0x27, 0x2F, 0x37, 0x6F, 0x5E, 0x16, 0x4D, 0x0D, 0x0E, 0x1F, 0x6F, 0x67, 0x0C, 0x0D, 0x4D, 0x0C, 0x0C, 0x0C, 0x01, 0x0C, 0x01, 0x01, 0x0D, 0x4D, 0x0D, 0x0D, 0x01, 0x0C, 0x0C, 0x0C, 0x0D, 0x0D, 0x0D, 0x1E, 0x6F, 0x2F, 0x6F, 0x1F, 0x1E, 0x16, 0x5E, 0x15, 0x5E, 0x6F, 0x6F,
0x3F, 0x7F, 0x77, 0x37, 0x2F, 0x2F, 0x2F, 0x2F, 0x6F, 0x67, 0x16, 0x4D, 0x4D, 0x0D, 0x16, 0x6F, 0x67, 0x0C, 0x0D, 0x4D, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x01, 0x0D, 0x4D, 0x0D, 0x0D, 0x01, 0x0C, 0x01, 0x0C, 0x0D, 0x4D, 0x0D, 0x1E, 0x2F, 0x2F, 0x6F, 0x1E, 0x1F, 0x15, 0x5E, 0x15, 0x67, 0x6F, 0x6F,
0xFB, 0xFB, 0x7F, 0x77, 0x7F, 0x2F, 0x37, 0x2F, 0x7F, 0x7F, 0x77, 0x56, 0x4E, 0x4E, 0x0D, 0x0C, 0x0D, 0x4D, 0x0C, 0x4D, 0x0D, 0x0C, 0x0D, 0x4D, 0x0C, 0x01, 0x0C, 0x0D, 0x0C, 0x01, 0x0C, 0x0C, 0x0C, 0x01, 0x4C, 0x4D, 0x0D, 0x15, 0x77, 0x37, 0x77, 0x2F, 0x27, 0x1E, 0x27, 0x16, 0x16, 0x67, 0x27, 0x77,
0xFB, 0xFB, 0x7F, 0x77, 0x7F, 0x2F, 0x37, 0x2F, 0x7F, 0x7F, 0x77, 0x56, 0x4E, 0x4E, 0x0D, 0x0C, 0x0D, 0x4D, 0x0C, 0x4D, 0x0D, 0x0C, 0x0D, 0x4D, 0x0C, 0x01, 0x0C, 0x0D, 0x0C, 0x01, 0x0C, 0x0C, 0x0C, 0x01, 0x4C, 0x4D, 0x0D, 0x15, 0x77, 0x37, 0x77, 0x2F, 0x27, 0x1E, 0x27, 0x16, 0x16, 0x67, 0x27, 0x77,
0x3F, 0x37, 0x2F, 0x27, 0x27, 0x5F, 0x27, 0x27, 0x7F, 0x7F, 0x7F, 0x77, 0x1E, 0x56, 0x15, 0x0D, 0x0C, 0x01, 0x0C, 0x0C, 0x0C, 0x01, 0x01, 0x01, 0x01, 0x0C, 0x01, 0x0C, 0x01, 0x01, 0x01, 0x0C, 0x0C, 0x01, 0x0C, 0x56, 0x1E, 0x77, 0x77, 0x77, 0x2F, 0x2F, 0x27, 0x67, 0x5E, 0x15, 0x15, 0x15, 0x1F, 0x67,
0x37, 0x37, 0x2F, 0x27, 0x27, 0x1E, 0x27, 0x27, 0x7F, 0x7F, 0x7F, 0x77, 0x26, 0x56, 0x16, 0x0D, 0x0C, 0x01, 0x0C, 0x01, 0x0C, 0x01, 0x0C, 0x01, 0x01, 0x0C, 0x01, 0x01, 0x01, 0x0C, 0x0C, 0x0D, 0x0D, 0x0C, 0x0D, 0x56, 0x1E, 0x77, 0x77, 0x77, 0x2F, 0x2F, 0x27, 0x27, 0x67, 0x15, 0x15, 0x0D, 0x1E, 0x67,
0x37, 0x2F, 0x2F, 0x2F, 0x27, 0x16, 0x1E, 0x27, 0x7F, 0x7F, 0x3F, 0x77, 0x77, 0x67, 0x16, 0x0D, 0x0C, 0x01, 0x01, 0x0C, 0x4C, 0x0C, 0x0C, 0x0C, 0x01, 0x0C, 0x01, 0x01, 0x01, 0x0C, 0x01, 0x0D, 0x0D, 0x0D, 0x0D, 0x55, 0x67, 0x77, 0x77, 0x2F, 0x6F, 0x6F, 0x67, 0x1E, 0x67, 0x5E, 0xAF, 0x0C, 0x15, 0x67,
0x37, 0x2F, 0x27, 0x27, 0x27, 0x1E, 0x1F, 0x27, 0x77, 0x37, 0x37, 0x77, 0x7F, 0x77, 0x1E, 0x0D, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x4D, 0x0C, 0x01, 0x0C, 0x01, 0x01, 0x0C, 0x0D, 0x0D, 0x4E, 0x4D, 0x01, 0x4D, 0x0D, 0x77, 0x77, 0x2F, 0x27, 0x27, 0x27, 0x67, 0x1F, 0x6F, 0x5F, 0x55, 0x0C, 0x0C, 0x15,
0x37, 0x6F, 0x27, 0x27, 0x27, 0x1E, 0x1F, 0x67, 0x77, 0x77, 0x77, 0x7F, 0x7F, 0x77, 0x66, 0x5F, 0x4D, 0x4C, 0x4C, 0x0D, 0x0C, 0x4D, 0x4D, 0x0D, 0x0D, 0x0D, 0x0C, 0x0C, 0x0C, 0x0C, 0x0D, 0x0D, 0x55, 0x0D, 0x55, 0x5E, 0x6F, 0x77, 0x6F, 0x27, 0x67, 0x6F, 0x67, 0x67, 0x67, 0x67, 0x15, 0x0B, 0x0C, 0x14,
 };
 
struct ArkeOutputInterface {
    char data_out;
    char eop_out : 1;
    char tx : 1;
    char stall_go_out : 1;
};

int main(void) {
  
	int i, j;
	struct ArkeOutputInterface arke_oif;
	
	int stall_go_in;
	stall_go_in = ((GPIO_IN>>10) & 0x1);
	
			// init
			arke_oif.data_out = 0;
			arke_oif.eop_out = 0; 
			arke_oif.tx = 0;
			arke_oif.stall_go_out = 1;
			
			GPIO_OUT = TO_INTEGER(arke_oif);
			
	for(i=0; i<HEIGHT; i++) {
		for(j=0; j<WIDTH; j++) {
			
			// header
			arke_oif.data_out = 3;
			arke_oif.tx = 1;
			
			stall_go_in = ((GPIO_IN>>10) & 0x1);
			while(stall_go_in != 1) stall_go_in = ((GPIO_IN>>10) & 0x1);
			GPIO_OUT = TO_INTEGER(arke_oif);
			
			arke_oif.tx = 0;
			
			GPIO_OUT = TO_INTEGER(arke_oif);
			
			// line address
			arke_oif.data_out = i;
			arke_oif.tx = 1;
		
			stall_go_in = ((GPIO_IN>>10) & 0x1);
			while(stall_go_in != 1) stall_go_in = ((GPIO_IN>>10) & 0x1);
			GPIO_OUT = TO_INTEGER(arke_oif);
			
			arke_oif.tx = 0;
		
			GPIO_OUT = TO_INTEGER(arke_oif);
			
			// column address
			arke_oif.data_out = j;
			arke_oif.tx = 1;
			
			stall_go_in = ((GPIO_IN>>10) & 0x1);
			while(stall_go_in != 1) stall_go_in = ((GPIO_IN>>10) & 0x1);
			GPIO_OUT = TO_INTEGER(arke_oif);
			
			arke_oif.tx = 0;
		
			GPIO_OUT = TO_INTEGER(arke_oif);
			
			// pixel
			
			arke_oif.data_out = image[i*WIDTH+j];
											
			arke_oif.tx = 1;
			arke_oif.eop_out = 1;
			
			stall_go_in = ((GPIO_IN>>10) & 0x1);
			while(stall_go_in != 1) stall_go_in = ((GPIO_IN>>10) & 0x1);
			GPIO_OUT = TO_INTEGER(arke_oif);
			
			arke_oif.tx = 0;
			arke_oif.eop_out = 0;
		
			GPIO_OUT = TO_INTEGER(arke_oif);
			
		}
		
		
	}
	
	for(i=0; i<HEIGHT; i++) {
		for(j=0; j<WIDTH; j++) {
			
			// header
			arke_oif.data_out = 3;
			arke_oif.tx = 1;
			
			stall_go_in = ((GPIO_IN>>10) & 0x1);
			while(stall_go_in != 1) stall_go_in = ((GPIO_IN>>10) & 0x1);
			GPIO_OUT = TO_INTEGER(arke_oif);
			
			arke_oif.tx = 0;
			
			GPIO_OUT = TO_INTEGER(arke_oif);
			
			// line address
			arke_oif.data_out = i+100;
			arke_oif.tx = 1;
		
			stall_go_in = ((GPIO_IN>>10) & 0x1);
			while(stall_go_in != 1) stall_go_in = ((GPIO_IN>>10) & 0x1);
			GPIO_OUT = TO_INTEGER(arke_oif);
			
			arke_oif.tx = 0;
		
			GPIO_OUT = TO_INTEGER(arke_oif);
			
			// column address
			arke_oif.data_out = j;
			arke_oif.tx = 1;
			
			stall_go_in = ((GPIO_IN>>10) & 0x1);
			while(stall_go_in != 1) stall_go_in = ((GPIO_IN>>10) & 0x1);
			GPIO_OUT = TO_INTEGER(arke_oif);
			
			arke_oif.tx = 0;
		
			GPIO_OUT = TO_INTEGER(arke_oif);
			
			// pixel
			
			arke_oif.data_out = image[i*WIDTH+j];
											
			arke_oif.tx = 1;
			arke_oif.eop_out = 1;
			
			stall_go_in = ((GPIO_IN>>10) & 0x1);
			while(stall_go_in != 1) stall_go_in = ((GPIO_IN>>10) & 0x1);
			GPIO_OUT = TO_INTEGER(arke_oif);
			
			arke_oif.tx = 0;
			arke_oif.eop_out = 0;
		
			GPIO_OUT = TO_INTEGER(arke_oif);
			
		}
	}
	
	return 0;

}