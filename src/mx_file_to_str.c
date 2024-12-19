#include "libmx.h"

char *mx_file_to_str(const char *file) {
    int rwd = open(file, O_RDONLY);
	if(rwd < 0)
		return NULL;
	char ch;
	char *str = mx_strnew(0);
	while (read(rwd, &ch, 1)){
		char *t = mx_strnew(1);
		t[0] = ch;
		str = mx_strjoin(str, t);
	}
	close(rwd);
    return str;
}


