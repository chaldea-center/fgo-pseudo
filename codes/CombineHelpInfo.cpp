void CombineHelpInfo___ctor(
        CombineHelpInfo_o *this,
        int32_t kind,
        System_String_o *textCode,
        System_String_o *imageName,
        int32_t line,
        const MethodInfo *method)
{
  CombineHelpInfo_o *v10; // x23
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7

  v10 = this;
  System_Object___ctor((Il2CppObject *)this, 0);
  v10->fields.kind = kind;
  v10->fields.textCode = textCode;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v10->fields.textCode,
    (int32_t)textCode,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v10->fields.imageName = imageName;
  v10 = (CombineHelpInfo_o *)((char *)v10 + 32);
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)v10, (int32_t)imageName, v17, v18, v19, v20, v21, v22);
  LODWORD(v10->monitor) = line;
}