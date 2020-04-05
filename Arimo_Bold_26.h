// Created by http://oleddisplay.squix.ch/ Consider a donation
// In case of problems make sure that you are using the font file with the correct version!
const uint8_t Arimo_Bold_26Bitmaps[] PROGMEM = {

	// Bitmap Data:
	0x00, // ' '
	0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x0F,0xFF, // '!'
	0xE7,0xE7,0xE7,0xE7,0xE7,0xE7, // '"'
	0x06,0x18,0x18,0xC0,0xC3,0x03,0x0C,0x0C,0x31,0xFF,0xF7,0xFF,0xC6,0x18,0x18,0x60,0x61,0x81,0x84,0x3F,0xFE,0xFF,0xF8,0xC3,0x03,0x0C,0x0C,0x60,0x31,0x81,0x86,0x00, // '#'
	0x01,0x00,0x1F,0xC0,0xFF,0xE1,0xFF,0xE7,0x93,0xCF,0x27,0x9E,0x40,0x3E,0x80,0x3F,0x00,0x7F,0xC0,0x3F,0xE0,0x1F,0xE0,0x17,0xE0,0x23,0xDC,0x47,0xBC,0x8F,0x79,0x3C,0x7F,0xF8,0x3F,0xC0,0x08,0x00,0x10,0x00, // '$'
	0x3E,0x00,0xC1,0xFC,0x06,0x0F,0x70,0x38,0x38,0xE0,0xC0,0xE3,0x86,0x03,0x8E,0x38,0x0E,0x38,0xC0,0x38,0xE6,0x7C,0xE7,0x33,0xF9,0xFC,0xDE,0xE3,0xE6,0x71,0xC0,0x31,0xC7,0x00,0xC7,0x1C,0x06,0x1C,0x70,0x30,0x71,0xC0,0xC1,0xCE,0x06,0x03,0xF8,0x30,0x07,0xC0, // '%'
	0x07,0xE0,0x07,0xF8,0x07,0x9E,0x03,0x87,0x01,0xC3,0x80,0xE3,0xC0,0x7F,0xC0,0x1F,0x80,0x1F,0x80,0x3F,0x83,0x9F,0xE3,0x9E,0x71,0xCE,0x1C,0xE7,0x0F,0xE3,0x83,0xF0,0xE0,0xF8,0x7F,0xFF,0x8F,0xC3,0xC0, // '&'
	0xFF,0xFF,0xC0, // '''
	0x0E,0x1E,0x1C,0x3C,0x78,0x78,0x78,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0x78,0x78,0x78,0x3C,0x3C,0x1E,0x0E, // '('
	0x70,0x78,0x38,0x3C,0x1E,0x1E,0x1E,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x1E,0x1E,0x1E,0x3C,0x38,0x78,0x70, // ')'
	0x0E,0x01,0xC1,0x39,0x3F,0xEF,0xFE,0x3E,0x0F,0xC1,0xDC,0x71,0x80,0x20, // '*'
	0x07,0x00,0x38,0x01,0xC0,0x0E,0x00,0x70,0x7F,0xFF,0xFF,0xFF,0xFF,0x07,0x00,0x38,0x01,0xC0,0x0E,0x00,0x70,0x00, // '+'
	0xFF,0xFF,0x33,0x66, // ','
	0xFF,0xFF,0xF8, // '-'
	0xFF,0xFF, // '.'
	0x0E,0x1C,0x78,0xE1,0xC3,0x87,0x0E,0x38,0x70,0xE1,0xC3,0x8E,0x1C,0x38,0x70,0xE3,0xC7,0x00, // '/'
	0x0F,0x81,0xFF,0x1F,0xFC,0xF1,0xEF,0x07,0x78,0x3F,0xC1,0xFE,0x0F,0xF0,0x7F,0x83,0xFC,0x1F,0xE0,0xFF,0x07,0xB8,0x79,0xE3,0xCF,0xFE,0x3F,0xE0,0x7C,0x00, // '0'
	0x0F,0x03,0xF0,0x7F,0x0F,0xF0,0xCF,0x08,0xF0,0x0F,0x00,0xF0,0x0F,0x00,0xF0,0x0F,0x00,0xF0,0x0F,0x00,0xF0,0x0F,0x00,0xF0,0xFF,0xFF,0xFF, // '1'
	0x1F,0x81,0xFF,0x1F,0xF8,0xE3,0xEF,0x0F,0x00,0x78,0x03,0xC0,0x3C,0x03,0xE0,0x3E,0x03,0xE0,0x3C,0x03,0xC0,0x3C,0x03,0xC0,0x1F,0xFF,0xFF,0xFF,0xFF,0xC0, // '2'
	0x07,0xE0,0x7F,0xE3,0xFF,0xCF,0x1F,0x78,0x3C,0x00,0xF0,0x07,0x81,0xFC,0x07,0xC0,0x1F,0xE0,0x07,0x80,0x0F,0x08,0x3D,0xE0,0xF7,0xC7,0xCF,0xFE,0x1F,0xF0,0x1F,0x80, // '3'
	0x01,0xF0,0x0F,0xC0,0x3F,0x01,0xFC,0x07,0xF0,0x3B,0xC1,0xCF,0x07,0x3C,0x38,0xF0,0xC3,0xC7,0x0F,0x38,0x3C,0xFF,0xFF,0xFF,0xF0,0x0F,0x00,0x3C,0x00,0xF0,0x03,0xC0, // '4'
	0x7F,0xF3,0xFF,0x9E,0x00,0xF0,0x07,0x80,0x3C,0x01,0xEF,0x0F,0xFE,0x7F,0xF3,0xC7,0xC0,0x1E,0x00,0xF0,0x07,0xF8,0x3D,0xE3,0xEF,0xFE,0x3F,0xE0,0x7C,0x00, // '5'
	0x0F,0xC0,0xFF,0x0F,0xFC,0xF1,0xE7,0x86,0x78,0x03,0xC0,0x1E,0xF8,0xFF,0xF7,0xC7,0xBC,0x1F,0xE0,0xFF,0x07,0xBC,0x3D,0xE3,0xEF,0xFE,0x3F,0xE0,0x7E,0x00, // '6'
	0xFF,0xFF,0xFF,0xFF,0xF0,0x0F,0x00,0xE0,0x1C,0x03,0xC0,0x38,0x07,0x80,0xF0,0x0F,0x01,0xE0,0x1E,0x01,0xE0,0x3C,0x03,0xC0,0x3C,0x03,0xC0, // '7'
	0x1F,0xC3,0xFF,0xBE,0x3F,0xE0,0xFF,0x07,0xF8,0x3D,0xE3,0xC7,0xFC,0x3F,0xE3,0xC7,0xBC,0x1F,0xE0,0xFF,0x07,0xF8,0x3F,0xC1,0xEF,0x1E,0x3F,0xE0,0xFE,0x00, // '8'
	0x1F,0x81,0xFF,0x1F,0xFD,0xF1,0xEF,0x0F,0x78,0x3F,0xC1,0xFE,0x0F,0x78,0xFB,0xFF,0xC7,0xDE,0x00,0xF0,0x07,0xF8,0x79,0xE3,0xCF,0xFC,0x3F,0xC0,0xFC,0x00, // '9'
	0xFF,0xF0,0x00,0x00,0x00,0xFF,0xF0, // ':'
	0x7B,0xDE,0x00,0x00,0x00,0x00,0x1E,0xF7,0x8C,0x67,0x70, // ';'
	0x00,0x00,0x01,0xC0,0x7E,0x0F,0xE3,0xFC,0x7F,0x03,0xE0,0x1C,0x00,0xF8,0x07,0xF8,0x07,0xF0,0x0F,0xF0,0x0F,0x80,0x0C,0x00,0x00, // '<'
	0xFF,0xFF,0xFF,0xFF,0xFE,0x00,0x00,0x00,0x00,0x00,0x00,0x1F,0xFF,0xFF,0xFF,0xFF,0xC0, // '='
	0x00,0x07,0x00,0x3F,0x00,0xFE,0x01,0xFE,0x01,0xFC,0x03,0xE0,0x07,0x00,0xF8,0x3F,0xC7,0xF1,0xFE,0x0F,0x80,0x60,0x00,0x00,0x00, // '>'
	0x0F,0xC0,0x7F,0xC3,0xFF,0x9E,0x1F,0x78,0x3F,0xC0,0xF0,0x03,0xC0,0x1E,0x00,0xF8,0x07,0xC0,0x3C,0x01,0xE0,0x07,0x80,0x00,0x00,0x00,0x01,0xE0,0x07,0x80,0x1E,0x00, // '?'
	0x00,0x7F,0x00,0x0F,0xFF,0x00,0x78,0x1E,0x07,0x80,0x1C,0x18,0x7C,0xF8,0xC3,0xFA,0x67,0x1C,0x78,0xD8,0xC0,0xE3,0xE3,0x03,0x8F,0x18,0x0E,0x3C,0x60,0x30,0xF1,0x80,0xC3,0xC6,0x07,0x1B,0x18,0x1C,0x6C,0x71,0xF3,0x38,0xFE,0xFC,0x61,0xE1,0xC1,0xC0,0x00,0x03,0x80,0x04,0x07,0x80,0xF0,0x0F,0xFF,0x80,0x07,0xF0,0x00, // '@'
	0x01,0xF0,0x00,0x3E,0x00,0x0F,0xE0,0x01,0xDC,0x00,0x3B,0x80,0x0F,0x78,0x01,0xCF,0x00,0x78,0xE0,0x0F,0x1E,0x01,0xC3,0xC0,0x78,0x38,0x0F,0xFF,0x81,0xFF,0xF0,0x7F,0xFE,0x0F,0x01,0xE1,0xC0,0x3C,0x78,0x03,0xCF,0x00,0x78, // 'A'
	0xFF,0xF0,0xFF,0xFC,0xFF,0xFE,0xF0,0x3E,0xF0,0x1E,0xF0,0x1E,0xF0,0x3C,0xFF,0xFC,0xFF,0xF0,0xFF,0xFC,0xF0,0x1E,0xF0,0x0F,0xF0,0x0F,0xF0,0x0F,0xF0,0x1F,0xFF,0xFE,0xFF,0xFC,0xFF,0xF0, // 'B'
	0x07,0xF0,0x07,0xFF,0x03,0xFF,0xF1,0xF8,0x3C,0x78,0x07,0xBE,0x00,0x8F,0x00,0x03,0xC0,0x00,0xF0,0x00,0x3C,0x00,0x0F,0x00,0x03,0xC0,0x00,0x78,0x03,0x1E,0x01,0xE7,0xE0,0xF0,0xFF,0xFC,0x1F,0xFC,0x00,0xFC,0x00, // 'C'
	0xFF,0xC0,0xFF,0xF0,0xFF,0xFC,0xF0,0x7E,0xF0,0x1E,0xF0,0x1F,0xF0,0x0F,0xF0,0x0F,0xF0,0x0F,0xF0,0x0F,0xF0,0x0F,0xF0,0x0F,0xF0,0x1E,0xF0,0x3E,0xF0,0x7C,0xFF,0xFC,0xFF,0xF8,0xFF,0xC0, // 'D'
	0xFF,0xFD,0xFF,0xFB,0xFF,0xF7,0x80,0x0F,0x00,0x1E,0x00,0x3C,0x00,0x7F,0xFE,0xFF,0xFD,0xFF,0xFB,0xC0,0x07,0x80,0x0F,0x00,0x1E,0x00,0x3C,0x00,0x7F,0xFF,0xFF,0xFF,0xFF,0xFC, // 'E'
	0xFF,0xFF,0xFF,0xFF,0xFF,0xE0,0x0F,0x00,0x78,0x03,0xC0,0x1E,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0xE0,0x0F,0x00,0x78,0x03,0xC0,0x1E,0x00,0xF0,0x07,0x80,0x00, // 'F'
	0x03,0xF8,0x07,0xFF,0x83,0xFF,0xF1,0xF8,0x3E,0x78,0x07,0xFE,0x00,0x0F,0x00,0x03,0xC0,0x00,0xF0,0x3F,0xFC,0x0F,0xFF,0x03,0xFF,0xC0,0x0F,0x78,0x03,0xDE,0x00,0xF7,0xE0,0xFC,0xFF,0xFE,0x1F,0xFF,0x00,0xFE,0x00, // 'G'
	0xF0,0x1F,0xE0,0x3F,0xC0,0x7F,0x80,0xFF,0x01,0xFE,0x03,0xFC,0x07,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xC0,0x7F,0x80,0xFF,0x01,0xFE,0x03,0xFC,0x07,0xF8,0x0F,0xF0,0x1F,0xE0,0x3C, // 'H'
	0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF, // 'I'
	0x07,0xF8,0x3F,0xC1,0xFE,0x00,0xF0,0x07,0x80,0x3C,0x01,0xE0,0x0F,0x00,0x78,0x03,0xC0,0x1E,0x00,0xF1,0x07,0xBC,0x3D,0xE3,0xEF,0xFE,0x3F,0xE0,0x7E,0x00, // 'J'
	0xF0,0x0F,0x3C,0x07,0x8F,0x03,0xC3,0xC1,0xE0,0xF0,0xF0,0x3C,0x78,0x0F,0x3C,0x03,0xDE,0x00,0xFF,0x80,0x3F,0xF0,0x0F,0x9E,0x03,0xC3,0xC0,0xF0,0xF8,0x3C,0x1E,0x0F,0x03,0xC3,0xC0,0x78,0xF0,0x1F,0x3C,0x03,0xE0, // 'K'
	0xF0,0x03,0xC0,0x0F,0x00,0x3C,0x00,0xF0,0x03,0xC0,0x0F,0x00,0x3C,0x00,0xF0,0x03,0xC0,0x0F,0x00,0x3C,0x00,0xF0,0x03,0xC0,0x0F,0x00,0x3F,0xFF,0xFF,0xFF,0xFF,0xF0, // 'L'
	0xF8,0x07,0xFF,0x00,0xFF,0xF0,0x3F,0xFE,0x07,0xFF,0xC0,0xFF,0xDC,0x3B,0xFB,0x87,0x7F,0x70,0xEF,0xE7,0x39,0xFC,0xE7,0x3F,0x9C,0xE7,0xF1,0xDC,0xFE,0x3F,0x1F,0xC7,0xE3,0xF8,0x7C,0x7F,0x0F,0x0F,0xE1,0xE1,0xFC,0x3C,0x3C, // 'M'
	0xF8,0x0F,0xFC,0x0F,0xFC,0x0F,0xFE,0x0F,0xFE,0x0F,0xFF,0x0F,0xF7,0x0F,0xF7,0x8F,0xF3,0x8F,0xF1,0xCF,0xF1,0xCF,0xF0,0xEF,0xF0,0xFF,0xF0,0x7F,0xF0,0x7F,0xF0,0x3F,0xF0,0x3F,0xF0,0x1F, // 'N'
	0x03,0xF0,0x07,0xFF,0x03,0xFF,0xF1,0xF8,0x7E,0x78,0x07,0xBE,0x01,0xEF,0x00,0x3F,0xC0,0x0F,0xF0,0x03,0xFC,0x00,0xFF,0x00,0x3F,0xC0,0x0F,0x78,0x07,0x9E,0x01,0xE7,0xE1,0xF0,0xFF,0xFC,0x1F,0xFC,0x00,0xFC,0x00, // 'O'
	0xFF,0xE1,0xFF,0xF3,0xFF,0xF7,0x81,0xFF,0x01,0xFE,0x03,0xFC,0x07,0xF8,0x0F,0xF0,0x3D,0xFF,0xFB,0xFF,0xE7,0xFF,0x0F,0x00,0x1E,0x00,0x3C,0x00,0x78,0x00,0xF0,0x01,0xE0,0x00, // 'P'
	0x03,0xF0,0x07,0xFF,0x83,0xFF,0xF1,0xF8,0x7E,0x78,0x07,0x9E,0x01,0xEF,0x00,0x3F,0xC0,0x0F,0xF0,0x03,0xFC,0x00,0xFF,0x00,0x3F,0xC0,0x0F,0xF8,0x07,0x9E,0x01,0xE7,0xC0,0xF0,0xFF,0xFC,0x1F,0xFC,0x01,0xFC,0x00,0x0F,0x00,0x03,0xE0,0x00,0x7F,0x00,0x1F,0xC0,0x01,0xF0, // 'Q'
	0xFF,0xF0,0x7F,0xFE,0x3F,0xFF,0x9E,0x03,0xEF,0x00,0xF7,0x80,0x7B,0xC0,0x3D,0xE0,0x3E,0xFF,0xFE,0x7F,0xFE,0x3F,0xFC,0x1E,0x0F,0x0F,0x07,0x87,0x81,0xE3,0xC0,0xF9,0xE0,0x3C,0xF0,0x0F,0x78,0x07,0xC0, // 'R'
	0x0F,0xF0,0x3F,0xFC,0x3C,0x3E,0x78,0x1E,0x78,0x00,0x7C,0x00,0x7F,0x00,0x3F,0xF0,0x1F,0xFC,0x07,0xFE,0x00,0x3F,0x00,0x0F,0x10,0x0F,0xF8,0x0F,0x7C,0x1F,0x7F,0xFE,0x3F,0xFC,0x0F,0xF0, // 'S'
	0xFF,0xFF,0xFF,0xFF,0xFF,0xF8,0x1E,0x00,0x3C,0x00,0x78,0x00,0xF0,0x01,0xE0,0x03,0xC0,0x07,0x80,0x0F,0x00,0x1E,0x00,0x3C,0x00,0x78,0x00,0xF0,0x01,0xE0,0x03,0xC0,0x07,0x80, // 'T'
	0xF0,0x0F,0xF0,0x0F,0xF0,0x0F,0xF0,0x0F,0xF0,0x0F,0xF0,0x0F,0xF0,0x0F,0xF0,0x0F,0xF0,0x0F,0xF0,0x0F,0xF0,0x0F,0xF0,0x0F,0xF0,0x0F,0xF8,0x1F,0x7C,0x3E,0x7F,0xFE,0x3F,0xF8,0x0F,0xE0, // 'U'
	0xF0,0x07,0x9E,0x01,0xE7,0x80,0xF1,0xE0,0x3C,0x3C,0x0F,0x0F,0x03,0x81,0xC1,0xE0,0x70,0x70,0x1E,0x1C,0x03,0x8F,0x00,0xE3,0x80,0x3C,0xE0,0x07,0x78,0x01,0xDC,0x00,0x3F,0x00,0x0F,0xC0,0x03,0xE0,0x00,0x78,0x00, // 'V'
	0xF0,0x3E,0x07,0x78,0x1F,0x07,0x9C,0x0F,0x83,0xCF,0x0F,0xC1,0xE7,0x87,0xE0,0xE3,0xC3,0xB8,0x70,0xE1,0xDC,0x78,0x71,0xEE,0x3C,0x3C,0xE7,0x1C,0x1E,0x73,0xCE,0x07,0x38,0xEF,0x03,0x9C,0x77,0x81,0xFC,0x3B,0x80,0xFE,0x1D,0xC0,0x3F,0x07,0xE0,0x1F,0x83,0xF0,0x0F,0x81,0xF0,0x03,0xC0,0xF8,0x00, // 'W'
	0x78,0x0F,0x0F,0x03,0xC3,0xC1,0xE0,0x78,0xF0,0x0F,0x3C,0x03,0xDE,0x00,0x7F,0x00,0x0F,0xC0,0x03,0xE0,0x00,0xFC,0x00,0x7F,0x00,0x3D,0xE0,0x0F,0x3C,0x07,0x8F,0x01,0xC1,0xE0,0xF0,0x3C,0x78,0x0F,0x1E,0x01,0xE0, // 'X'
	0x78,0x07,0x8E,0x01,0xC3,0xC0,0xF0,0x78,0x78,0x1E,0x1E,0x03,0xCF,0x00,0x73,0x80,0x1F,0xE0,0x03,0xF0,0x00,0xFC,0x00,0x1E,0x00,0x07,0x80,0x01,0xE0,0x00,0x78,0x00,0x1E,0x00,0x07,0x80,0x01,0xE0,0x00,0x78,0x00, // 'Y'
	0x7F,0xFD,0xFF,0xF7,0xFF,0xC0,0x1E,0x00,0x78,0x03,0xC0,0x1E,0x00,0xF0,0x07,0x80,0x1E,0x00,0xF0,0x07,0x80,0x3C,0x01,0xE0,0x07,0x80,0x3F,0xFF,0xFF,0xFF,0xFF,0xF0, // 'Z'
	0xFF,0xFF,0xC7,0x8F,0x1E,0x3C,0x78,0xF1,0xE3,0xC7,0x8F,0x1E,0x3C,0x78,0xF1,0xE3,0xC7,0x8F,0x1E,0x3F,0xFF, // '['
	0xE0,0xE1,0xC3,0x87,0x0E,0x1E,0x1C,0x38,0x70,0xE1,0xC1,0xC3,0x87,0x0E,0x1C,0x1C,0x38,0x70, // '\'
	0xFF,0xFF,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0xFF,0xFF, // ']'
	0x07,0xC0,0x0F,0x80,0x3B,0x80,0x77,0x00,0xC7,0x03,0x8E,0x07,0x0C,0x1C,0x1C,0x38,0x38,0xE0,0x39,0xC0,0x73,0x00,0x70, // '^'
	0x7F,0xFF, // '_'
	0xF0,0xF0,0xF0,0x60, // '`'
	0x1F,0x80,0xFF,0x87,0x9E,0x1E,0x3C,0x00,0xF0,0xFF,0xC7,0xFF,0x3E,0x3C,0xF0,0xF3,0xC3,0xCF,0x1F,0x3C,0x7C,0x7F,0x7C,0xF0,0xF0, // 'a'
	0x78,0x01,0xE0,0x07,0x80,0x1E,0x00,0x78,0x01,0xE7,0x87,0xFF,0x9F,0x1E,0x7C,0x3D,0xE0,0xF7,0x83,0xDE,0x0F,0x78,0x3D,0xE0,0xF7,0x83,0xDF,0x1F,0x7C,0x79,0xFF,0xC7,0x9E,0x00, // 'b'
	0x0F,0x81,0xFF,0x1E,0x3C,0xF0,0xFF,0x00,0x78,0x03,0xC0,0x1E,0x00,0xF0,0x07,0x83,0xDE,0x1E,0xF1,0xE3,0xFE,0x07,0xC0, // 'c'
	0x00,0x78,0x03,0xC0,0x1E,0x00,0xF0,0x07,0x8F,0x3C,0xFF,0xEF,0x1F,0xF8,0xFF,0x83,0xFC,0x1F,0xE0,0xFF,0x07,0xF8,0x3F,0xC1,0xFE,0x1F,0x78,0xF9,0xFF,0xC7,0x9E, // 'd'
	0x0F,0x81,0xFF,0x1E,0x3C,0xE0,0xEF,0x07,0xFF,0xFF,0xFF,0xFE,0x00,0xF0,0x07,0x80,0x1E,0x1E,0xF1,0xE3,0xFE,0x07,0xE0, // 'e'
	0x0F,0x3F,0x3C,0x3C,0x3C,0xFF,0xFF,0x3C,0x3C,0x3C,0x3C,0x3C,0x3C,0x3C,0x3C,0x3C,0x3C,0x3C,0x3C, // 'f'
	0x1E,0x79,0xFF,0xDE,0x3F,0xF1,0xFF,0x07,0xF8,0x3F,0xC1,0xFE,0x0F,0xF0,0x7F,0x83,0xFC,0x3E,0xF1,0xF7,0xFF,0x8F,0x3C,0x01,0xE2,0x0F,0x78,0xF1,0xFF,0x07,0xF0, // 'g'
	0xF0,0x07,0x80,0x3C,0x01,0xE0,0x0F,0x00,0x79,0xF3,0xDF,0xDF,0x1F,0xF8,0x7F,0x83,0xFC,0x1F,0xE0,0xFF,0x07,0xF8,0x3F,0xC1,0xFE,0x0F,0xF0,0x7F,0x83,0xFC,0x1E, // 'h'
	0xFF,0x00,0x0F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF0, // 'i'
	0x3C,0xF0,0x00,0x00,0xF3,0xCF,0x3C,0xF3,0xCF,0x3C,0xF3,0xCF,0x3C,0xF3,0xCF,0x3C,0xFF,0xBC, // 'j'
	0xF0,0x03,0xC0,0x0F,0x00,0x3C,0x00,0xF0,0x03,0xC3,0xCF,0x0E,0x3C,0x78,0xF3,0xC3,0xDE,0x0F,0xF0,0x3F,0xE0,0xFF,0x83,0xCF,0x0F,0x1C,0x3C,0x78,0xF0,0xF3,0xC3,0xCF,0x07,0x80, // 'k'
	0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF0, // 'l'
	0xF3,0xC3,0xCF,0xFE,0xFE,0xF9,0xF9,0xFF,0x0F,0x0F,0xF0,0xF0,0xFF,0x0F,0x0F,0xF0,0xF0,0xFF,0x0F,0x0F,0xF0,0xF0,0xFF,0x0F,0x0F,0xF0,0xF0,0xFF,0x0F,0x0F,0xF0,0xF0,0xFF,0x0F,0x0F, // 'm'
	0xF3,0xE7,0xBF,0xBE,0x3F,0xF0,0xFF,0x07,0xF8,0x3F,0xC1,0xFE,0x0F,0xF0,0x7F,0x83,0xFC,0x1F,0xE0,0xFF,0x07,0xF8,0x3C, // 'n'
	0x0F,0xC0,0xFF,0xC7,0x87,0x9E,0x1E,0xF0,0x3F,0xC0,0xFF,0x03,0xFC,0x0F,0xF0,0x3F,0xC0,0xF7,0x87,0x9E,0x3E,0x3F,0xF0,0x3F,0x00, // 'o'
	0x79,0xE1,0xFF,0xC7,0xC7,0x9F,0x1F,0x78,0x3D,0xE0,0xF7,0x83,0xDE,0x0F,0x78,0x3D,0xE0,0xF7,0xC7,0xDF,0x1E,0x7F,0xF1,0xE7,0x87,0x80,0x1E,0x00,0x78,0x01,0xE0,0x07,0x80,0x00, // 'p'
	0x1E,0x79,0xFF,0xDE,0x3F,0xF1,0xFF,0x07,0xF8,0x3F,0xC1,0xFE,0x0F,0xF0,0x7F,0x83,0xFC,0x3E,0xF1,0xF7,0xFF,0x8F,0x3C,0x01,0xE0,0x0F,0x00,0x78,0x03,0xC0,0x1E, // 'q'
	0xF7,0xF7,0xFF,0xF8,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0,0xF0, // 'r'
	0x0F,0xC1,0xFF,0x9E,0x3C,0xF0,0xE7,0xC0,0x3F,0xC0,0xFF,0x83,0xFE,0x03,0xF8,0x03,0xDC,0x1E,0xF0,0xF3,0xFF,0x0F,0xE0, // 's'
	0x1C,0x1C,0x3C,0xFF,0xFF,0x3C,0x3C,0x3C,0x3C,0x3C,0x3C,0x3C,0x3C,0x3C,0x3C,0x3F,0x1F, // 't'
	0xF0,0x7B,0xC1,0xEF,0x07,0xBC,0x1E,0xF0,0x7B,0xC1,0xEF,0x07,0xBC,0x1E,0xF0,0x7B,0xC1,0xEF,0x0F,0xBE,0x3E,0x7F,0x78,0xF9,0xE0, // 'u'
	0xF0,0x3C,0xE0,0x79,0xE0,0xE3,0xC3,0xC3,0x87,0x87,0x8E,0x0F,0x1C,0x0E,0x78,0x1C,0xE0,0x3D,0xC0,0x3F,0x80,0x7E,0x00,0xFC,0x00,0xF0,0x00, // 'v'
	0x70,0x78,0x39,0xE1,0xE0,0xE3,0x87,0xC7,0x8E,0x3F,0x1C,0x38,0xFC,0x70,0xE3,0x31,0xC1,0xDC,0xE7,0x07,0x73,0xB8,0x1D,0xC6,0xE0,0x76,0x1B,0x80,0xD8,0x7E,0x03,0xE1,0xF0,0x0F,0x83,0xC0,0x3C,0x0F,0x00, // 'w'
	0x78,0x3C,0xF0,0xF0,0xF1,0xC0,0xF7,0x80,0xFE,0x01,0xF8,0x01,0xE0,0x03,0xE0,0x0F,0xC0,0x3D,0xC0,0x73,0xC1,0xE3,0xC7,0x87,0x8E,0x07,0x80, // 'x'
	0x78,0x1E,0xF0,0x38,0xE0,0xF1,0xE1,0xE1,0xC3,0x83,0x87,0x07,0x9E,0x07,0x38,0x0E,0x70,0x0F,0xC0,0x1F,0x80,0x3F,0x00,0x3C,0x00,0x78,0x00,0xE0,0x01,0xC0,0x07,0x00,0x7E,0x00,0xF8,0x00, // 'y'
	0xFF,0xDF,0xF8,0x0F,0x03,0xC0,0xF0,0x1E,0x07,0x80,0xE0,0x3C,0x07,0x01,0xC0,0x78,0x0F,0xFF,0xFF,0xC0, // 'z'
	0x07,0xC3,0xF1,0xF0,0x78,0x1E,0x07,0x81,0xE0,0x78,0x1E,0x07,0x83,0xC3,0xE0,0xF8,0x0F,0x01,0xE0,0x78,0x1E,0x07,0x81,0xE0,0x78,0x1E,0x07,0xC0,0xFC,0x1F, // '{'
	0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF, // '|'
	0xF8,0x3F,0x03,0xE0,0x78,0x1E,0x07,0x81,0xE0,0x78,0x1E,0x07,0x80,0xF0,0x1F,0x07,0xC3,0xC1,0xE0,0x78,0x1E,0x07,0x81,0xE0,0x78,0x1E,0x0F,0x8F,0xC3,0xE0 // '}'
};
const GFXglyph Arimo_Bold_26Glyphs[] PROGMEM = {
// bitmapOffset, width, height, xAdvance, xOffset, yOffset
	  {     0,   1,   1,   8,    0,    0 }, // ' '
	  {     1,   4,  18,  11,    3,  -18 }, // '!'
	  {    10,   8,   6,  13,    2,  -18 }, // '"'
	  {    16,  14,  18,  17,    1,  -18 }, // '#'
	  {    48,  15,  21,  17,    0,  -19 }, // '$'
	  {    88,  22,  18,  25,    1,  -18 }, // '%'
	  {   138,  17,  18,  20,    1,  -18 }, // '&'
	  {   177,   3,   6,   8,    2,  -18 }, // '''
	  {   180,   8,  24,  10,    1,  -19 }, // '('
	  {   204,   8,  24,  10,    0,  -19 }, // ')'
	  {   228,  11,  10,  12,    0,  -18 }, // '*'
	  {   242,  13,  13,  16,    1,  -15 }, // '+'
	  {   264,   4,   8,   8,    1,   -4 }, // ','
	  {   268,   7,   3,  10,    1,   -8 }, // '-'
	  {   271,   4,   4,   9,    2,   -4 }, // '.'
	  {   273,   7,  20,   8,    0,  -19 }, // '/'
	  {   291,  13,  18,  16,    1,  -18 }, // '0'
	  {   321,  12,  18,  16,    2,  -18 }, // '1'
	  {   348,  13,  18,  16,    1,  -18 }, // '2'
	  {   378,  14,  18,  16,    0,  -18 }, // '3'
	  {   410,  14,  18,  17,    1,  -18 }, // '4'
	  {   442,  13,  18,  16,    1,  -18 }, // '5'
	  {   472,  13,  18,  16,    1,  -18 }, // '6'
	  {   502,  12,  18,  15,    1,  -18 }, // '7'
	  {   529,  13,  18,  16,    1,  -18 }, // '8'
	  {   559,  13,  18,  16,    1,  -18 }, // '9'
	  {   589,   4,  13,  10,    2,  -13 }, // ':'
	  {   596,   5,  17,  10,    2,  -13 }, // ';'
	  {   607,  13,  15,  16,    1,  -16 }, // '<'
	  {   632,  13,  10,  16,    1,  -14 }, // '='
	  {   649,  13,  15,  16,    1,  -16 }, // '>'
	  {   674,  14,  18,  17,    1,  -18 }, // '?'
	  {   706,  22,  22,  26,    1,  -18 }, // '@'
	  {   767,  19,  18,  20,    0,  -18 }, // 'A'
	  {   810,  16,  18,  20,    2,  -18 }, // 'B'
	  {   846,  18,  18,  20,    1,  -18 }, // 'C'
	  {   887,  16,  18,  20,    2,  -18 }, // 'D'
	  {   923,  15,  18,  19,    2,  -18 }, // 'E'
	  {   957,  13,  18,  17,    2,  -18 }, // 'F'
	  {   987,  18,  18,  22,    1,  -18 }, // 'G'
	  {  1028,  15,  18,  20,    2,  -18 }, // 'H'
	  {  1062,   4,  18,   9,    2,  -18 }, // 'I'
	  {  1071,  13,  18,  16,    0,  -18 }, // 'J'
	  {  1101,  18,  18,  20,    2,  -18 }, // 'K'
	  {  1142,  14,  18,  17,    2,  -18 }, // 'L'
	  {  1174,  19,  18,  24,    2,  -18 }, // 'M'
	  {  1217,  16,  18,  21,    2,  -18 }, // 'N'
	  {  1253,  18,  18,  21,    1,  -18 }, // 'O'
	  {  1294,  15,  18,  19,    2,  -18 }, // 'P'
	  {  1328,  18,  23,  21,    1,  -18 }, // 'Q'
	  {  1380,  17,  18,  20,    2,  -18 }, // 'R'
	  {  1419,  16,  18,  19,    1,  -18 }, // 'S'
	  {  1455,  15,  18,  18,    1,  -18 }, // 'T'
	  {  1489,  16,  18,  21,    2,  -18 }, // 'U'
	  {  1525,  18,  18,  18,    0,  -18 }, // 'V'
	  {  1566,  25,  18,  26,    0,  -18 }, // 'W'
	  {  1623,  18,  18,  18,    0,  -18 }, // 'X'
	  {  1664,  18,  18,  19,    0,  -18 }, // 'Y'
	  {  1705,  14,  18,  17,    1,  -18 }, // 'Z'
	  {  1737,   7,  24,  10,    1,  -19 }, // '['
	  {  1758,   7,  20,   8,    0,  -19 }, // '\'
	  {  1776,   8,  24,  10,    0,  -19 }, // ']'
	  {  1800,  15,  12,  16,    0,  -18 }, // '^'
	  {  1823,  16,   1,  15,   -1,    2 }, // '_'
	  {  1825,   7,   4,  10,    1,  -19 }, // '`'
	  {  1829,  14,  14,  16,    1,  -14 }, // 'a'
	  {  1854,  14,  19,  17,    1,  -19 }, // 'b'
	  {  1888,  13,  14,  16,    1,  -14 }, // 'c'
	  {  1911,  13,  19,  17,    1,  -19 }, // 'd'
	  {  1942,  13,  14,  16,    1,  -14 }, // 'e'
	  {  1965,   8,  19,  10,    1,  -19 }, // 'f'
	  {  1984,  13,  19,  17,    1,  -14 }, // 'g'
	  {  2015,  13,  19,  18,    2,  -19 }, // 'h'
	  {  2046,   4,  19,   9,    2,  -19 }, // 'i'
	  {  2056,   6,  24,   9,    0,  -19 }, // 'j'
	  {  2074,  14,  19,  16,    2,  -19 }, // 'k'
	  {  2108,   4,  19,   9,    2,  -19 }, // 'l'
	  {  2118,  20,  14,  25,    2,  -14 }, // 'm'
	  {  2153,  13,  14,  18,    2,  -14 }, // 'n'
	  {  2176,  14,  14,  17,    1,  -14 }, // 'o'
	  {  2201,  14,  19,  17,    1,  -14 }, // 'p'
	  {  2235,  13,  19,  17,    1,  -14 }, // 'q'
	  {  2266,   8,  14,  12,    2,  -14 }, // 'r'
	  {  2280,  13,  14,  15,    0,  -14 }, // 's'
	  {  2303,   8,  17,  11,    1,  -17 }, // 't'
	  {  2320,  14,  14,  18,    2,  -14 }, // 'u'
	  {  2345,  15,  14,  15,    0,  -14 }, // 'v'
	  {  2372,  22,  14,  21,   -1,  -14 }, // 'w'
	  {  2411,  15,  14,  15,    0,  -14 }, // 'x'
	  {  2438,  15,  19,  15,   -1,  -14 }, // 'y'
	  {  2474,  11,  14,  14,    1,  -14 }, // 'z'
	  {  2494,  10,  24,  12,    1,  -19 }, // '{'
	  {  2524,   4,  24,   9,    2,  -19 }, // '|'
	  {  2536,  10,  24,  12,    1,  -19 } // '}'
};
const GFXfont Arimo_Bold_26 PROGMEM = {
(uint8_t  *)Arimo_Bold_26Bitmaps,(GFXglyph *)Arimo_Bold_26Glyphs,0x20, 0x7E, 31};