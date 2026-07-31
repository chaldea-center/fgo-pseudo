void Gender___cctor(const MethodInfo *method)
{
  __int64 v1; // x0
  __int64 v2; // x1
  System_String_o *v3; // x2
  System_String_o *v4; // x3
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7
  __int64 v9; // x19
  int32_t v10; // w1
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  int32_t v17; // w1
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  int32_t v24; // w1
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7

  if ( (byte_5937524 & 1) == 0 )
  {
    sub_21FFC50(&Gender_TypeInfo);
    sub_21FFC50(&string___TypeInfo);
    sub_21FFC50(&StringLiteral_6658/*"FEMALE"*/);
    sub_21FFC50(&StringLiteral_10119/*"OTHER"*/);
    sub_21FFC50(&StringLiteral_8882/*"MALE"*/);
    byte_5937524 = 1;
  }
  v1 = sub_21FFD10(string___TypeInfo, 3);
  if ( !v1 )
    sub_21FFECC(0, v2);
  v9 = v1;
  if ( !*(_DWORD *)(v1 + 24)
    || (v10 = StringLiteral_8882/*"MALE"*/,
        *(_QWORD *)(v1 + 32) = StringLiteral_8882/*"MALE"*/,
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v1 + 32), v10, v3, v4, v5, v6, v7, v8),
        (*(_DWORD *)(v9 + 24) & 0xFFFFFFFE) == 0)
    || (v17 = StringLiteral_6658/*"FEMALE"*/,
        *(_QWORD *)(v9 + 40) = StringLiteral_6658/*"FEMALE"*/,
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v9 + 40), v17, v11, v12, v13, v14, v15, v16),
        *(_DWORD *)(v9 + 24) <= 2u) )
  {
    sub_21FFED4(v1);
  }
  v24 = StringLiteral_10119/*"OTHER"*/;
  *(_QWORD *)(v9 + 48) = StringLiteral_10119/*"OTHER"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v9 + 48), v24, v18, v19, v20, v21, v22, v23);
  Gender_TypeInfo->static_fields->nameList = (struct System_String_array *)v9;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)Gender_TypeInfo->static_fields, v9, v25, v26, v27, v28, v29, v30);
}


void Gender___ctor(Gender_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t Gender__GetGenderTypeBySelectType(int32_t genderSelectType, const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v3; // x1
  int32_t genderType; // w8

  if ( genderSelectType <= 2 )
  {
    if ( genderSelectType != 1 && genderSelectType != 2 )
      return -1;
  }
  else
  {
    switch ( genderSelectType )
    {
      case 3:
        return UnityEngine_Random__Range_83187376(1, 3, 0);
      case 4:
        SelfUserGame = UserGameMaster__getSelfUserGame(0);
        if ( !SelfUserGame )
          goto LABEL_18;
        genderType = SelfUserGame->fields.genderType;
        if ( genderType == 1 )
        {
          return 2;
        }
        else if ( genderType == 2 )
        {
          return 1;
        }
        else
        {
          return -1;
        }
      case 5:
        SelfUserGame = UserGameMaster__getSelfUserGame(0);
        if ( SelfUserGame )
          return SelfUserGame->fields.genderType;
LABEL_18:
        sub_21FFECC(SelfUserGame, v3);
      default:
        return -1;
    }
  }
  return genderSelectType;
}


int32_t Gender__Parse(System_String_o *name, const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t v4; // w20
  Gender_c *v5; // x0
  struct System_String_array *nameList; // x8

  if ( (byte_5937522 & 1) == 0 )
  {
    sub_21FFC50(&Gender_TypeInfo);
    byte_5937522 = 1;
  }
  v4 = 0;
  while ( 1 )
  {
    v5 = Gender_TypeInfo;
    if ( !*(&Gender_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(Gender_TypeInfo, method, v2);
      v5 = Gender_TypeInfo;
    }
    nameList = v5->static_fields->nameList;
    if ( !nameList )
LABEL_16:
      sub_21FFECC(v5, method);
    if ( v4 >= SLODWORD(nameList->max_length) )
      return 3;
    if ( !*(&v5->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v5, method, v2);
      nameList = Gender_TypeInfo->static_fields->nameList;
      if ( !nameList )
        goto LABEL_16;
    }
    if ( (unsigned int)v4 >= LODWORD(nameList->max_length) )
      sub_21FFED4(v5);
    v5 = (Gender_c *)nameList->m_Items[v4];
    if ( !v5 )
      goto LABEL_16;
    ++v4;
    if ( System_String__Equals_75473208((System_String_o *)v5, name, 0) )
      return v4;
  }
}


int32_t Gender__ToData(System_String_o *name, const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t v4; // w20
  Gender_c *v5; // x0
  struct System_String_array *nameList; // x8

  if ( (byte_5937523 & 1) == 0 )
  {
    sub_21FFC50(&Gender_TypeInfo);
    byte_5937523 = 1;
  }
  v4 = 0;
  while ( 1 )
  {
    v5 = Gender_TypeInfo;
    if ( !*(&Gender_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(Gender_TypeInfo, method, v2);
      v5 = Gender_TypeInfo;
    }
    nameList = v5->static_fields->nameList;
    if ( !nameList )
LABEL_16:
      sub_21FFECC(v5, method);
    if ( v4 >= SLODWORD(nameList->max_length) )
      return 3;
    if ( !*(&v5->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v5, method, v2);
      nameList = Gender_TypeInfo->static_fields->nameList;
      if ( !nameList )
        goto LABEL_16;
    }
    if ( (unsigned int)v4 >= LODWORD(nameList->max_length) )
      sub_21FFED4(v5);
    v5 = (Gender_c *)nameList->m_Items[v4];
    if ( !v5 )
      goto LABEL_16;
    ++v4;
    if ( System_String__Equals_75473208((System_String_o *)v5, name, 0) )
      return v4;
  }
}


System_String_o *Gender__ToName(int32_t type, const MethodInfo *method)
{
  __int64 v2; // x2
  Gender_c *v4; // x0
  struct System_String_array *nameList; // x8

  if ( (byte_5937521 & 1) == 0 )
  {
    sub_21FFC50(&Gender_TypeInfo);
    byte_5937521 = 1;
  }
  v4 = Gender_TypeInfo;
  if ( !*(&Gender_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(Gender_TypeInfo, method, v2);
    v4 = Gender_TypeInfo;
  }
  nameList = v4->static_fields->nameList;
  if ( !nameList )
    sub_21FFECC(v4, method);
  if ( (unsigned int)(type - 1) >= LODWORD(nameList->max_length) )
    sub_21FFED4(v4);
  return nameList->m_Items[type - 1];
}