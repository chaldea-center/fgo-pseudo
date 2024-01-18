void __fastcall DataAsset___ctor(DataAsset_o *this, System_Byte_array *bytes, const MethodInfo *method)
{
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_4189038 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, bytes);
    byte_4189038 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object___ctor((UnityEngine_Object_o *)this, 0LL);
  this->fields.byteData = bytes;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.byteData,
    (System_Int32_array **)bytes,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall DataAsset___ctor_27465432(DataAsset_o *this, System_String_o *text, const MethodInfo *method)
{
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_4189039 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, text);
    byte_4189039 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object___ctor((UnityEngine_Object_o *)this, 0LL);
  this->fields.textData = text;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.textData,
    (System_Int32_array **)text,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


System_Byte_array *__fastcall DataAsset__get_bytes(DataAsset_o *this, const MethodInfo *method)
{
  return this->fields.byteData;
}


System_String_o *__fastcall DataAsset__get_text(DataAsset_o *this, const MethodInfo *method)
{
  return this->fields.textData;
}