void __fastcall ItemType___ctor(ItemType_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_String_o *__fastcall ItemType__GetCountText(int32_t type, int32_t num, const MethodInfo *method)
{
  __int64 *v5; // x8
  System_String_o *v6; // x20
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  Il2CppObject *v10; // x0
  int32_t v12; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4A5A17C & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_10819/*"QP_UNIT"*/);
    sub_1B885B0(&StringLiteral_8508/*"MANA_UNIT"*/);
    sub_1B885B0(&StringLiteral_12302/*"STONE_UNIT"*/);
    sub_1B885B0(&StringLiteral_6524/*"FRIEND_POINT_UNIT"*/);
    byte_4A5A17C = 1;
  }
  if ( type <= 13 )
  {
    if ( type > 4 )
    {
      if ( type == 5 )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v5 = &StringLiteral_8508/*"MANA_UNIT"*/;
      }
      else
      {
        if ( type != 13 )
          goto LABEL_19;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v5 = &StringLiteral_6524/*"FRIEND_POINT_UNIT"*/;
      }
LABEL_13:
      v6 = LocalizationManager__Get((System_String_o *)*v5, 0LL);
      v12 = num;
      v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v12, v7, v8, v9);
      return System_String__Format(v6, v10, 0LL);
    }
    if ( type == 1 )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v5 = &StringLiteral_10819/*"QP_UNIT"*/;
      goto LABEL_13;
    }
    if ( type != 2 )
      goto LABEL_19;
LABEL_10:
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v5 = &StringLiteral_12302/*"STONE_UNIT"*/;
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
  if ( (byte_4A5A17A & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_3768/*"COMMON_COUNT_OPERATOR_CROSS"*/);
    byte_4A5A17A = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__Get((System_String_o *)StringLiteral_3768/*"COMMON_COUNT_OPERATOR_CROSS"*/, 0LL);
}


System_String_o *__fastcall ItemType__get_PlusOperatorString(const MethodInfo *method)
{
  if ( (byte_4A5A17B & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_3769/*"COMMON_COUNT_OPERATOR_PLUS"*/);
    byte_4A5A17B = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__Get((System_String_o *)StringLiteral_3769/*"COMMON_COUNT_OPERATOR_PLUS"*/, 0LL);
}