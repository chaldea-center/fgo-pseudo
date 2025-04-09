void __fastcall DataAsset___ctor(DataAsset_o *this, System_Byte_array *bytes, const MethodInfo *method)
{
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_49BA065 & 1) == 0 )
  {
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, bytes);
    byte_49BA065 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object___ctor((UnityEngine_Object_o *)this, 0LL);
  this->fields.byteData = bytes;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.byteData, (int32_t)bytes, v5, v6);
}


void __fastcall DataAsset___ctor_38454376(DataAsset_o *this, System_String_o *text, const MethodInfo *method)
{
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_49BA066 & 1) == 0 )
  {
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, text);
    byte_49BA066 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object___ctor((UnityEngine_Object_o *)this, 0LL);
  this->fields.textData = text;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.textData, (int32_t)text, v5, v6);
}


System_Byte_array *__fastcall DataAsset__get_bytes(DataAsset_o *this, const MethodInfo *method)
{
  return this->fields.byteData;
}


System_String_o *__fastcall DataAsset__get_text(DataAsset_o *this, const MethodInfo *method)
{
  return this->fields.textData;
}