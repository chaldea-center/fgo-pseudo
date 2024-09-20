void __fastcall DataAsset___ctor(DataAsset_o *this, System_Byte_array *bytes, const MethodInfo *method)
{
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_4A5A3A2 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5A3A2 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object___ctor((UnityEngine_Object_o *)this, 0LL);
  this->fields.byteData = bytes;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.byteData, (int32_t)bytes, v5, v6);
}


void __fastcall DataAsset___ctor_37913940(DataAsset_o *this, System_String_o *text, const MethodInfo *method)
{
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_4A5A3A3 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5A3A3 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object___ctor((UnityEngine_Object_o *)this, 0LL);
  this->fields.textData = text;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.textData, (int32_t)text, v5, v6);
}


System_Byte_array *__fastcall DataAsset__get_bytes(DataAsset_o *this, const MethodInfo *method)
{
  return this->fields.byteData;
}


System_String_o *__fastcall DataAsset__get_text(DataAsset_o *this, const MethodInfo *method)
{
  return this->fields.textData;
}