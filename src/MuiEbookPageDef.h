// DON'T EDIT MANUALLY !!!!
// auto-generated by gen_txt.py !!!!

using namespace sertxt;

struct EbookPageDef {
    const char* name;
    const char* style;
};

extern const StructMetadata gEbookPageDefMetadata;

inline EbookPageDef* DeserializeEbookPageDef(char* data, size_t dataLen) {
    auto s = std::string_view(data, dataLen);
    return (EbookPageDef*)Deserialize(s, &gEbookPageDefMetadata);
}

inline EbookPageDef* DeserializeEbookPageDef(TxtNode* root) {
    return (EbookPageDef*)Deserialize(root, &gEbookPageDefMetadata);
}

inline OwnedData SerializeEbookPageDef(EbookPageDef* val) {
    return Serialize((const uint8_t*)val, &gEbookPageDefMetadata);
}

inline void FreeEbookPageDef(EbookPageDef* val) {
    FreeStruct((uint8_t*)val, &gEbookPageDefMetadata);
}
