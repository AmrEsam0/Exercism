#if !defined(RNA_TRANSCRIPTION_H)
#define RNA_TRANSCRIPTION_H
#include <cstring>
#include <string>
using namespace std;

namespace rna_transcription {
char to_rna(char str);
string to_rna(string str);
}  // namespace rna_transcription

#endif  // RNA_TRANSCRIPTION_H