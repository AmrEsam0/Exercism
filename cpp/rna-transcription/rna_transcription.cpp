#include "rna_transcription.h"

namespace rna_transcription {
char to_rna(char str) {
    char result = str;
    if (str == 'G') {
        result = 'C';
    } else if (str == 'C') {
        result = 'G';
    } else if (str == 'T') {
        result = 'A';
    } else if (str == 'A') {
        result = 'U';
    } else {
        return result;
    }

    return result;
}

string to_rna(string str) {
    string result = "";
    for (int i = 0; i < int(str.length()); i++) {
        result += to_rna(str[i]);
    }
    return result;
}
}  // namespace rna_transcription
