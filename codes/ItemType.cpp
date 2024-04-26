void __fastcall ItemType___ctor(ItemType_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_String_o *__fastcall ItemType__GetCountText(int32_t type, int32_t num, const MethodInfo *method)
{
  __int64 *v5; // x8
  System_String_o *v7; // x20
  __int64 v8; // x2
  Il2CppObject *v9; // x0
  int32_t v10; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4351177 & 1) == 0 )
  {
    sub_B70694(&int_TypeInfo);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&StringLiteral_11034/*"QP_UNIT"*/);
    sub_B70694(&StringLiteral_8723/*"MANA_UNIT"*/);
    sub_B70694(&StringLiteral_12565/*"STONE_UNIT"*/);
    sub_B70694(&StringLiteral_6582/*"FRIEND_POINT_UNIT"*/);
    byte_4351177 = 1;
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
      v5 = &StringLiteral_11034/*"QP_UNIT"*/;
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
        v5 = &StringLiteral_8723/*"MANA_UNIT"*/;
        goto LABEL_29;
      case 13:
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v5 = &StringLiteral_6582/*"FRIEND_POINT_UNIT"*/;
        goto LABEL_29;
      case 17:
LABEL_7:
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v5 = &StringLiteral_12565/*"STONE_UNIT"*/;
LABEL_29:
        v7 = LocalizationManager__Get((System_String_o *)*v5, 0LL);
        v10 = num;
        v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v10, v8);
        return System_String__Format(v7, v9, 0LL);
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
  if ( (byte_4351175 & 1) == 0 )
  {
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&StringLiteral_3347/*"COMMON_COUNT_OPERATOR_CROSS"*/);
    byte_4351175 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  return LocalizationManager__Get((System_String_o *)StringLiteral_3347/*"COMMON_COUNT_OPERATOR_CROSS"*/, 0LL);
}


System_String_o *__fastcall ItemType__get_PlusOperatorString(const MethodInfo *method)
{
  if ( (byte_4351176 & 1) == 0 )
  {
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&StringLiteral_3348/*"COMMON_COUNT_OPERATOR_PLUS"*/);
    byte_4351176 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  return LocalizationManager__Get((System_String_o *)StringLiteral_3348/*"COMMON_COUNT_OPERATOR_PLUS"*/, 0LL);
}