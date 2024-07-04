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
  System_String_o *v12; // x20
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  Il2CppObject *v16; // x0
  int32_t v17; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_48E1887 & 1) == 0 )
  {
    sub_1B00CCC(&int_TypeInfo, *(_QWORD *)&num);
    sub_1B00CCC(&LocalizationManager_TypeInfo, v5);
    sub_1B00CCC(&StringLiteral_10684/*"QP_UNIT"*/, v6);
    sub_1B00CCC(&StringLiteral_8414/*"MANA_UNIT"*/, v7);
    sub_1B00CCC(&StringLiteral_12098/*"STONE_UNIT"*/, v8);
    sub_1B00CCC(&StringLiteral_6459/*"FRIEND_POINT_UNIT"*/, v9);
    byte_48E1887 = 1;
  }
  if ( type <= 4 )
  {
    if ( type == 1 )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v10 = &StringLiteral_10684/*"QP_UNIT"*/;
      goto LABEL_24;
    }
    if ( type == 2 )
      goto LABEL_7;
  }
  else
  {
    switch ( type )
    {
      case 5:
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v10 = &StringLiteral_8414/*"MANA_UNIT"*/;
        goto LABEL_24;
      case 13:
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v10 = &StringLiteral_6459/*"FRIEND_POINT_UNIT"*/;
        goto LABEL_24;
      case 17:
LABEL_7:
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v10 = &StringLiteral_12098/*"STONE_UNIT"*/;
LABEL_24:
        v12 = LocalizationManager__Get((System_String_o *)*v10, 0LL);
        v17 = num;
        v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v17, v13, v14, v15);
        return System_String__Format(v12, v16, 0LL);
    }
  }
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

  if ( (byte_48E1885 & 1) == 0 )
  {
    sub_1B00CCC(&LocalizationManager_TypeInfo, v1);
    sub_1B00CCC(&StringLiteral_3726/*"COMMON_COUNT_OPERATOR_CROSS"*/, v2);
    byte_48E1885 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__Get((System_String_o *)StringLiteral_3726/*"COMMON_COUNT_OPERATOR_CROSS"*/, 0LL);
}


System_String_o *__fastcall ItemType__get_PlusOperatorString(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1

  if ( (byte_48E1886 & 1) == 0 )
  {
    sub_1B00CCC(&LocalizationManager_TypeInfo, v1);
    sub_1B00CCC(&StringLiteral_3727/*"COMMON_COUNT_OPERATOR_PLUS"*/, v2);
    byte_48E1886 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__Get((System_String_o *)StringLiteral_3727/*"COMMON_COUNT_OPERATOR_PLUS"*/, 0LL);
}