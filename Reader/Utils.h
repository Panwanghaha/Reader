#ifndef __UTILS_H__
#define __UTILS_H__

#include "types.h"

class Utils
{
public:
	Utils(void);
	~Utils(void);

public:
	// md5
	static bool get_md5(void* data, size_t size, u128_t* result);

	// convert
	static wchar_t* ansi_to_unicode(char* str, int* len);
	static char* unicode_to_ansi(wchar_t* str, int* len);
	static wchar_t* utf8_to_unicode(char* str, int* len);
	static char* unicode_to_utf8(wchar_t* str, int* len);
	static void free_buffer(void* buffer);

    // encoding
    static type_t check_bom(const char *data, size_t size);
    static int is_ascii(const char *data, size_t size);    
    static int is_utf8(const char *data, size_t size);

	// le be
	static char* le_to_be(char* data, int len);
	static char* be_to_le(char* data, int len);
};

#endif