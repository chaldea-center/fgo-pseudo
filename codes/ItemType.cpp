void __fastcall ItemType___ctor(ItemType_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ItemType__GetCountText(int32_t type, int32_t num, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 *v15; // x8
  System_String_o *v16; // x20
  Il2CppObject *v17; // x0
  int32_t v19; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B151E5 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, *(_QWORD *)&num, method);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&StringLiteral_10955/*"QP_UNIT"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_8634/*"MANA_UNIT"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_12458/*"STONE_UNIT"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_6643/*"FRIEND_POINT_UNIT"*/, v13, v14);
    byte_4B151E5 = 1;
  }
  if ( type <= 13 )
  {
    if ( type > 4 )
    {
      if ( type == 5 )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&num);
        v15 = &StringLiteral_8634/*"MANA_UNIT"*/;
      }
      else
      {
        if ( type != 13 )
          goto LABEL_19;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&num);
        v15 = &StringLiteral_6643/*"FRIEND_POINT_UNIT"*/;
      }
LABEL_13:
      v16 = LocalizationManager__Get((System_String_o *)*v15, 0LL);
      v19 = num;
      v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v19);
      return System_String__Format(v16, v17, 0LL);
    }
    if ( type == 1 )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&num);
      v15 = &StringLiteral_10955/*"QP_UNIT"*/;
      goto LABEL_13;
    }
    if ( type != 2 )
      goto LABEL_19;
LABEL_10:
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&num);
    v15 = &StringLiteral_12458/*"STONE_UNIT"*/;
    goto LABEL_13;
  }
  if ( type == 17 || type == 36 )
    goto LABEL_10;
LABEL_19:
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&num);
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
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2

  if ( (byte_4B151E3 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_3800/*"COMMON_COUNT_OPERATOR_CROSS"*/, v3, v4);
    byte_4B151E3 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v1);
  return LocalizationManager__Get((System_String_o *)StringLiteral_3800/*"COMMON_COUNT_OPERATOR_CROSS"*/, 0LL);
}


System_String_o *__fastcall ItemType__get_PlusOperatorString(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2

  if ( (byte_4B151E4 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_3801/*"COMMON_COUNT_OPERATOR_PLUS"*/, v3, v4);
    byte_4B151E4 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v1);
  return LocalizationManager__Get((System_String_o *)StringLiteral_3801/*"COMMON_COUNT_OPERATOR_PLUS"*/, 0LL);
}