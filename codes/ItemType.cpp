void ItemType___ctor(ItemType_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_String_o *ItemType__GetCountText(int32_t type, int32_t num, const MethodInfo *method)
{
  __int64 *v5; // x8
  System_String_o *v6; // x20
  Il2CppObject *v7; // x0
  int32_t v9; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4D2B745 & 1) == 0 )
  {
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&StringLiteral_10856/*"QP_UNIT"*/);
    sub_1C94098(&StringLiteral_8557/*"MANA_UNIT"*/);
    sub_1C94098(&StringLiteral_12452/*"STONE_UNIT"*/);
    sub_1C94098(&StringLiteral_6563/*"FRIEND_POINT_UNIT"*/);
    byte_4D2B745 = 1;
  }
  if ( type <= 13 )
  {
    if ( type > 4 )
    {
      if ( type == 5 )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v5 = &StringLiteral_8557/*"MANA_UNIT"*/;
      }
      else
      {
        if ( type != 13 )
          goto LABEL_19;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v5 = &StringLiteral_6563/*"FRIEND_POINT_UNIT"*/;
      }
LABEL_13:
      v6 = LocalizationManager__Get((System_String_o *)*v5, 0);
      v9 = num;
      v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v9);
      return System_String__Format(v6, v7, 0);
    }
    if ( type == 1 )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v5 = &StringLiteral_10856/*"QP_UNIT"*/;
      goto LABEL_13;
    }
    if ( type != 2 )
      goto LABEL_19;
LABEL_10:
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v5 = &StringLiteral_12452/*"STONE_UNIT"*/;
    goto LABEL_13;
  }
  if ( type == 17 || type == 36 )
    goto LABEL_10;
LABEL_19:
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__GetUnitInfo(num, 0);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *ItemType__GetCountableString(int32_t type, const MethodInfo *method)
{
  if ( (unsigned int)type <= 0x10 && ((1 << type) & 0x16002) != 0 )
    return ItemType__get_PlusOperatorString(*(const MethodInfo **)&type);
  else
    return ItemType__get_CrossOperatorString(*(const MethodInfo **)&type);
}


bool ItemType__IsCountableWithPlus(int32_t type, const MethodInfo *method)
{
  return (unsigned int)type <= 0xE && ((1 << type) & 0x6002) != 0 || type == 16;
}


System_String_o *ItemType__get_CrossOperatorString(const MethodInfo *method)
{
  if ( (byte_4D2B743 & 1) == 0 )
  {
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&StringLiteral_3704/*"COMMON_COUNT_OPERATOR_CROSS"*/);
    byte_4D2B743 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__Get((System_String_o *)StringLiteral_3704/*"COMMON_COUNT_OPERATOR_CROSS"*/, 0);
}


System_String_o *ItemType__get_PlusOperatorString(const MethodInfo *method)
{
  if ( (byte_4D2B744 & 1) == 0 )
  {
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&StringLiteral_3705/*"COMMON_COUNT_OPERATOR_PLUS"*/);
    byte_4D2B744 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__Get((System_String_o *)StringLiteral_3705/*"COMMON_COUNT_OPERATOR_PLUS"*/, 0);
}