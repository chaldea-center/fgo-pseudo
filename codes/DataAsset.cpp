void DataAsset___ctor(DataAsset_o *this, System_Byte_array *bytes, const MethodInfo *method)
{
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7

  if ( (byte_4CC6526 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC6526 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object___ctor((UnityEngine_Object_o *)this, 0);
  this->fields.byteData = bytes;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.byteData, (int32_t)bytes, v5, v6, v7, v8, v9, v10);
}


void DataAsset___ctor_40940920(DataAsset_o *this, System_String_o *text, const MethodInfo *method)
{
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7

  if ( (byte_4CC6527 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC6527 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object___ctor((UnityEngine_Object_o *)this, 0);
  this->fields.textData = text;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.textData, (int32_t)text, v5, v6, v7, v8, v9, v10);
}


System_Byte_array *DataAsset__get_bytes(DataAsset_o *this, const MethodInfo *method)
{
  return this->fields.byteData;
}


System_String_o *DataAsset__get_text(DataAsset_o *this, const MethodInfo *method)
{
  return this->fields.textData;
}