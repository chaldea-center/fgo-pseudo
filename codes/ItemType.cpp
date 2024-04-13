void __fastcall ItemType___ctor(ItemType_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_String_o *__fastcall ItemType__GetCountText(int32_t type, int32_t num, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  __int64 *v21; // x8
  System_String_o *v23; // x20
  Il2CppObject *v24; // x0
  int32_t v25; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42E7D1A & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, num, (_DWORD)method, v3);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_11013/*"QP_UNIT"*/, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_8708/*"MANA_UNIT"*/, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_12544/*"STONE_UNIT"*/, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_6569/*"FRIEND_POINT_UNIT"*/, v18, v19, v20);
    byte_42E7D1A = 1;
  }
  if ( type <= 4 )
  {
    if ( type == 1 )
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v21 = &StringLiteral_11013/*"QP_UNIT"*/;
      goto LABEL_29;
    }
    if ( type == 2 )
      goto LABEL_7;
  }
  else
  {
    switch ( type )
    {
      case 5:
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v21 = &StringLiteral_8708/*"MANA_UNIT"*/;
        goto LABEL_29;
      case 13:
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v21 = &StringLiteral_6569/*"FRIEND_POINT_UNIT"*/;
        goto LABEL_29;
      case 17:
LABEL_7:
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v21 = &StringLiteral_12544/*"STONE_UNIT"*/;
LABEL_29:
        v23 = LocalizationManager__Get((System_String_o *)*v21, 0LL);
        v25 = num;
        v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v25);
        return System_String__Format(v23, v24, 0LL);
    }
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3

  if ( (byte_42E7D18 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&StringLiteral_3338/*"COMMON_COUNT_OPERATOR_CROSS"*/, v4, v5, v6);
    byte_42E7D18 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  return LocalizationManager__Get((System_String_o *)StringLiteral_3338/*"COMMON_COUNT_OPERATOR_CROSS"*/, 0LL);
}


System_String_o *__fastcall ItemType__get_PlusOperatorString(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3

  if ( (byte_42E7D19 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&StringLiteral_3339/*"COMMON_COUNT_OPERATOR_PLUS"*/, v4, v5, v6);
    byte_42E7D19 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  return LocalizationManager__Get((System_String_o *)StringLiteral_3339/*"COMMON_COUNT_OPERATOR_PLUS"*/, 0LL);
}