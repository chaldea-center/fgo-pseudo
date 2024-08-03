void __fastcall ItemType___ctor(ItemType_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ItemType__GetCountText(int32_t type, int32_t num, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 *v10; // x8
  System_String_o *v11; // x20
  Il2CppObject *v12; // x0
  int32_t v14; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_49FB448 & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, *(_QWORD *)&num);
    sub_1B640C8(&LocalizationManager_TypeInfo, v5);
    sub_1B640C8(&StringLiteral_10767/*"QP_UNIT"*/, v6);
    sub_1B640C8(&StringLiteral_8468/*"MANA_UNIT"*/, v7);
    sub_1B640C8(&StringLiteral_12247/*"STONE_UNIT"*/, v8);
    sub_1B640C8(&StringLiteral_6496/*"FRIEND_POINT_UNIT"*/, v9);
    byte_49FB448 = 1;
  }
  if ( type <= 13 )
  {
    if ( type > 4 )
    {
      if ( type == 5 )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v10 = &StringLiteral_8468/*"MANA_UNIT"*/;
      }
      else
      {
        if ( type != 13 )
          goto LABEL_19;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v10 = &StringLiteral_6496/*"FRIEND_POINT_UNIT"*/;
      }
LABEL_13:
      v11 = LocalizationManager__Get((System_String_o *)*v10, 0LL);
      v14 = num;
      v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v14);
      return System_String__Format(v11, v12, 0LL);
    }
    if ( type == 1 )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v10 = &StringLiteral_10767/*"QP_UNIT"*/;
      goto LABEL_13;
    }
    if ( type != 2 )
      goto LABEL_19;
LABEL_10:
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v10 = &StringLiteral_12247/*"STONE_UNIT"*/;
    goto LABEL_13;
  }
  if ( type == 17 || type == 36 )
    goto LABEL_10;
LABEL_19:
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__GetUnitInfo(num, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ItemType__GetCountableString(int32_t type, const MethodInfo *method)
{
  if ( (unsigned int)type <= 0x10 && ((1 << type) & 0x16002) != 0 )
    return ItemType__get_PlusOperatorString(*(const MethodInfo **)&type);
  else
    return ItemType__get_CrossOperatorString(*(const MethodInfo **)&type);
}


bool __fastcall ItemType__IsCountableWithPlus(int32_t type, const MethodInfo *method)
{
  return (unsigned int)type <= 0xE && ((1 << type) & 0x6002) != 0 || type == 16;
}


System_String_o *__fastcall ItemType__get_CrossOperatorString(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1

  if ( (byte_49FB446 & 1) == 0 )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, v1);
    sub_1B640C8(&StringLiteral_3745/*"COMMON_COUNT_OPERATOR_CROSS"*/, v2);
    byte_49FB446 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__Get((System_String_o *)StringLiteral_3745/*"COMMON_COUNT_OPERATOR_CROSS"*/, 0LL);
}


System_String_o *__fastcall ItemType__get_PlusOperatorString(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1

  if ( (byte_49FB447 & 1) == 0 )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, v1);
    sub_1B640C8(&StringLiteral_3746/*"COMMON_COUNT_OPERATOR_PLUS"*/, v2);
    byte_49FB447 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__Get((System_String_o *)StringLiteral_3746/*"COMMON_COUNT_OPERATOR_PLUS"*/, 0LL);
}