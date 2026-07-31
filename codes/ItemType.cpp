void ItemType___ctor(ItemType_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *ItemType__GetCountText(int32_t type, int32_t num, const MethodInfo *method)
{
  __int64 *v5; // x8
  System_String_o *v6; // x20
  Il2CppObject *v7; // x0
  int32_t v9; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_5937559 & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_11269/*"QP_UNIT"*/);
    sub_21FFC50(&StringLiteral_8886/*"MANA_UNIT"*/);
    sub_21FFC50(&StringLiteral_12895/*"STONE_UNIT"*/);
    sub_21FFC50(&StringLiteral_6829/*"FRIEND_POINT_UNIT"*/);
    byte_5937559 = 1;
  }
  if ( type <= 13 )
  {
    if ( type > 4 )
    {
      if ( type == 5 )
      {
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&num, method);
        v5 = &StringLiteral_8886/*"MANA_UNIT"*/;
      }
      else
      {
        if ( type != 13 )
          goto LABEL_19;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&num, method);
        v5 = &StringLiteral_6829/*"FRIEND_POINT_UNIT"*/;
      }
LABEL_13:
      v6 = LocalizationManager__Get((System_String_o *)*v5, 0);
      v9 = num;
      v7 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v9);
      return System_String__Format(v6, v7, 0);
    }
    if ( type == 1 )
    {
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&num, method);
      v5 = &StringLiteral_11269/*"QP_UNIT"*/;
      goto LABEL_13;
    }
    if ( type != 2 )
      goto LABEL_19;
LABEL_10:
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&num, method);
    v5 = &StringLiteral_12895/*"STONE_UNIT"*/;
    goto LABEL_13;
  }
  if ( type == 17 || type == 36 )
    goto LABEL_10;
LABEL_19:
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&num, method);
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
  return ((unsigned int)type < 0x11) & (0x16002u >> type);
}


System_String_o *ItemType__get_CrossOperatorString(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_5937557 & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_3837/*"COMMON_COUNT_OPERATOR_CROSS"*/);
    byte_5937557 = 1;
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v1, v2);
  return LocalizationManager__Get((System_String_o *)StringLiteral_3837/*"COMMON_COUNT_OPERATOR_CROSS"*/, 0);
}


System_String_o *ItemType__get_PlusOperatorString(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_5937558 & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_3838/*"COMMON_COUNT_OPERATOR_PLUS"*/);
    byte_5937558 = 1;
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v1, v2);
  return LocalizationManager__Get((System_String_o *)StringLiteral_3838/*"COMMON_COUNT_OPERATOR_PLUS"*/, 0);
}