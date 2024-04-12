void __fastcall ItemType___ctor(ItemType_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_String_o *__fastcall ItemType__GetCountText(int32_t type, int32_t num, const MethodInfo *method)
{
  __int64 *v5; // x8
  System_String_o *v7; // x20
  Il2CppObject *v8; // x0
  int32_t v9; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42AF193 & 1) == 0 )
  {
    sub_B52984(&int_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_10967/*"QP_UNIT"*/);
    sub_B52984(&StringLiteral_8671/*"MANA_UNIT"*/);
    sub_B52984(&StringLiteral_12485/*"STONE_UNIT"*/);
    sub_B52984(&StringLiteral_6533/*"FRIEND_POINT_UNIT"*/);
    byte_42AF193 = 1;
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
      v5 = &StringLiteral_10967/*"QP_UNIT"*/;
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
        v5 = &StringLiteral_8671/*"MANA_UNIT"*/;
        goto LABEL_29;
      case 13:
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v5 = &StringLiteral_6533/*"FRIEND_POINT_UNIT"*/;
        goto LABEL_29;
      case 17:
LABEL_7:
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v5 = &StringLiteral_12485/*"STONE_UNIT"*/;
LABEL_29:
        v7 = LocalizationManager__Get((System_String_o *)*v5, 0LL);
        v9 = num;
        v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v9);
        return System_String__Format(v7, v8, 0LL);
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
  if ( (byte_42AF191 & 1) == 0 )
  {
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_3305/*"COMMON_COUNT_OPERATOR_CROSS"*/);
    byte_42AF191 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  return LocalizationManager__Get((System_String_o *)StringLiteral_3305/*"COMMON_COUNT_OPERATOR_CROSS"*/, 0LL);
}


System_String_o *__fastcall ItemType__get_PlusOperatorString(const MethodInfo *method)
{
  if ( (byte_42AF192 & 1) == 0 )
  {
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_3306/*"COMMON_COUNT_OPERATOR_PLUS"*/);
    byte_42AF192 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  return LocalizationManager__Get((System_String_o *)StringLiteral_3306/*"COMMON_COUNT_OPERATOR_PLUS"*/, 0LL);
}