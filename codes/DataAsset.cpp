void __fastcall DataAsset___ctor(DataAsset_o *this, System_Byte_array *bytes, const MethodInfo *method)
{
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4C21151 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, bytes);
    byte_4C21151 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object___ctor((UnityEngine_Object_o *)this, 0LL);
  this->fields.byteData = bytes;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.byteData, (int64_t)bytes, v5, v6, v7, v8, v9, v10);
}


void __fastcall DataAsset___ctor_39337960(DataAsset_o *this, System_String_o *text, const MethodInfo *method)
{
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4C21152 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, text);
    byte_4C21152 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object___ctor((UnityEngine_Object_o *)this, 0LL);
  this->fields.textData = text;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.textData, (int64_t)text, v5, v6, v7, v8, v9, v10);
}


System_Byte_array *__fastcall DataAsset__get_bytes(DataAsset_o *this, const MethodInfo *method)
{
  return this->fields.byteData;
}


System_String_o *__fastcall DataAsset__get_text(DataAsset_o *this, const MethodInfo *method)
{
  return this->fields.textData;
}