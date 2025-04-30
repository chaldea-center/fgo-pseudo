void __fastcall CombineHelpInfo___ctor(
        CombineHelpInfo_o *this,
        int32_t kind,
        System_String_o *textCode,
        System_String_o *imageName,
        int32_t line,
        const MethodInfo *method)
{
  CombineHelpInfo_o *v10; // x23
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3

  v10 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v10->fields.kind = kind;
  v10->fields.textCode = textCode;
  sub_1B8635C((CGThumbnailListItem_o *)&v10->fields.textCode, (int32_t)textCode, v11, v12);
  v10->fields.imageName = imageName;
  v10 = (CombineHelpInfo_o *)((char *)v10 + 32);
  sub_1B8635C((CGThumbnailListItem_o *)v10, (int32_t)imageName, v13, v14);
  LODWORD(v10->monitor) = line;
}