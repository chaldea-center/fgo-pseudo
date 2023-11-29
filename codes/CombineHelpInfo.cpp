void __fastcall CombineHelpInfo___ctor(
        CombineHelpInfo_o *this,
        int32_t kind,
        System_String_o *textCode,
        System_String_o *imageName,
        int32_t line,
        const MethodInfo *method)
{
  CombineHelpInfo_o *v10; // x23
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7

  v10 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v10->fields.kind = kind;
  v10->fields.textCode = textCode;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v10->fields.textCode,
    (System_Int32_array **)textCode,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v10->fields.imageName = imageName;
  v10 = (CombineHelpInfo_o *)((char *)v10 + 32);
  sub_B16F98((BattleServantConfConponent_o *)v10, (System_Int32_array **)imageName, v17, v18, v19, v20, v21, v22);
  LODWORD(v10->monitor) = line;
}