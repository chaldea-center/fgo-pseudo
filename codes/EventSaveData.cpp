void __fastcall EventSaveData___ctor(EventSaveData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_String_array *__fastcall EventSaveData__GetValueByArray(
        EventSaveData_o *this,
        uint16_t separator,
        const MethodInfo *method)
{
  System_String_array *result; // x0

  result = (System_String_array *)this->fields.value;
  if ( result )
    return System_String__Split((System_String_o *)result, separator, 0, 0LL);
  return result;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventSaveData__SetValueByArray(
        EventSaveData_o *this,
        System_String_array *valueArray,
        uint16_t separator,
        const MethodInfo *method)
{
  System_String_o *v6; // x0
  struct System_String_o *v7; // x0
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  uint16_t v14; // [xsp+Ch] [xbp-24h] BYREF

  v14 = separator;
  if ( (byte_4B13671 & 1) == 0 )
  {
    sub_1BCA7E0(&char_TypeInfo, valueArray, separator);
    byte_4B13671 = 1;
  }
  if ( valueArray )
  {
    if ( !char_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(char_TypeInfo, valueArray);
    v6 = System_Char__ToString((uint16_t)&v14, 0LL);
    v7 = System_String__Join(v6, valueArray, 0LL);
    this->fields.value = v7;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.value, (int64_t)v7, v8, v9, v10, v11, v12, v13);
  }
}