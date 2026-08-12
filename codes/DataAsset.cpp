void DataAsset___ctor(DataAsset_o *this, System_Byte_array *bytes, const MethodInfo *method)
{
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  if ( (byte_596F8F7 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596F8F7 = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, bytes, method);
  UnityEngine_Object___ctor((UnityEngine_Object_o *)this, 0);
  this->fields.byteData = bytes;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.byteData, (int32_t)bytes, v5, v6, v7, v8, v9, v10);
}


void DataAsset___ctor_47629472(DataAsset_o *this, System_String_o *text, const MethodInfo *method)
{
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  if ( (byte_596F8F8 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596F8F8 = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, text, method);
  UnityEngine_Object___ctor((UnityEngine_Object_o *)this, 0);
  this->fields.textData = text;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.textData, (int32_t)text, v5, v6, v7, v8, v9, v10);
}


System_Byte_array *DataAsset__get_bytes(DataAsset_o *this, const MethodInfo *method)
{
  return this->fields.byteData;
}


System_String_o *DataAsset__get_text(DataAsset_o *this, const MethodInfo *method)
{
  return this->fields.textData;
}