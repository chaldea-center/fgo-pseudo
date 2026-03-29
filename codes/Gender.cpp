void Gender___cctor(const MethodInfo *method)
{
  __int64 v1; // x0
  __int64 v2; // x1
  int32_t v3; // w2
  int32_t v4; // w3
  System_String_o *v5; // x4
  int32_t v6; // w5
  int64_t v7; // x6
  System_String_o *v8; // x7
  __int64 v9; // x19
  int32_t v10; // w1
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  int32_t v17; // w1
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  int32_t v24; // w1
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7

  if ( (byte_4D2F8B9 & 1) == 0 )
  {
    sub_1C93AD4(&Gender_TypeInfo);
    sub_1C93AD4(&string___TypeInfo);
    sub_1C93AD4(&StringLiteral_6429/*"FEMALE"*/);
    sub_1C93AD4(&StringLiteral_9789/*"OTHER"*/);
    sub_1C93AD4(&StringLiteral_8582/*"MALE"*/);
    byte_4D2F8B9 = 1;
  }
  v1 = sub_1C93B7C(string___TypeInfo, 3);
  if ( !v1 )
    sub_1C93D2C(0, v2);
  v9 = v1;
  if ( !*(_DWORD *)(v1 + 24)
    || (v10 = StringLiteral_8582/*"MALE"*/,
        *(_QWORD *)(v1 + 32) = StringLiteral_8582/*"MALE"*/,
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v1 + 32), v10, v3, v4, v5, v6, v7, v8),
        *(_DWORD *)(v9 + 24) <= 1u)
    || (v17 = StringLiteral_6429/*"FEMALE"*/,
        *(_QWORD *)(v9 + 40) = StringLiteral_6429/*"FEMALE"*/,
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v9 + 40), v17, v11, v12, v13, v14, v15, v16),
        *(_DWORD *)(v9 + 24) <= 2u) )
  {
    sub_1C93D34(v1);
  }
  v24 = StringLiteral_9789/*"OTHER"*/;
  *(_QWORD *)(v9 + 48) = StringLiteral_9789/*"OTHER"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v9 + 48), v24, v18, v19, v20, v21, v22, v23);
  Gender_TypeInfo->static_fields->nameList = (struct System_String_array *)v9;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)Gender_TypeInfo->static_fields, v9, v25, v26, v27, v28, v29, v30);
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

  switch ( genderSelectType )
  {
    case 1:
      return 1;
    case 2:
      return genderSelectType;
    case 3:
      return UnityEngine_Random__Range_72079620(1, 3, 0);
    case 4:
      SelfUserGame = UserGameMaster__getSelfUserGame(0);
      if ( !SelfUserGame )
        goto LABEL_14;
      genderType = SelfUserGame->fields.genderType;
      if ( genderType == 1 )
      {
        genderSelectType = 2;
      }
      else if ( genderType == 2 )
      {
        genderSelectType = 1;
      }
      else
      {
        genderSelectType = -1;
      }
      break;
    case 5:
      SelfUserGame = UserGameMaster__getSelfUserGame(0);
      if ( !SelfUserGame )
LABEL_14:
        sub_1C93D2C(SelfUserGame, v3);
      genderSelectType = SelfUserGame->fields.genderType;
      break;
    default:
      genderSelectType = -1;
      break;
  }
  return genderSelectType;
}


int32_t Gender__Parse(System_String_o *name, const MethodInfo *method)
{
  int32_t v3; // w20
  Gender_c *v4; // x0
  struct System_String_array *nameList; // x8

  if ( (byte_4D2F8B7 & 1) == 0 )
  {
    sub_1C93AD4(&Gender_TypeInfo);
    byte_4D2F8B7 = 1;
  }
  v3 = 0;
  while ( 1 )
  {
    v4 = Gender_TypeInfo;
    if ( !Gender_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Gender_TypeInfo);
      v4 = Gender_TypeInfo;
    }
    nameList = v4->static_fields->nameList;
    if ( !nameList )
LABEL_16:
      sub_1C93D2C(v4, method);
    if ( v3 >= SLODWORD(nameList->max_length) )
      return 3;
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      nameList = Gender_TypeInfo->static_fields->nameList;
      if ( !nameList )
        goto LABEL_16;
    }
    if ( (unsigned int)v3 >= LODWORD(nameList->max_length) )
      sub_1C93D34(v4);
    v4 = (Gender_c *)nameList->m_Items[v3];
    if ( !v4 )
      goto LABEL_16;
    ++v3;
    if ( System_String__Equals_64461044((System_String_o *)v4, name, 0) )
      return v3;
  }
}


int32_t Gender__ToData(System_String_o *name, const MethodInfo *method)
{
  int32_t v3; // w20
  Gender_c *v4; // x0
  struct System_String_array *nameList; // x8

  if ( (byte_4D2F8B8 & 1) == 0 )
  {
    sub_1C93AD4(&Gender_TypeInfo);
    byte_4D2F8B8 = 1;
  }
  v3 = 0;
  while ( 1 )
  {
    v4 = Gender_TypeInfo;
    if ( !Gender_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Gender_TypeInfo);
      v4 = Gender_TypeInfo;
    }
    nameList = v4->static_fields->nameList;
    if ( !nameList )
LABEL_16:
      sub_1C93D2C(v4, method);
    if ( v3 >= SLODWORD(nameList->max_length) )
      return 3;
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      nameList = Gender_TypeInfo->static_fields->nameList;
      if ( !nameList )
        goto LABEL_16;
    }
    if ( (unsigned int)v3 >= LODWORD(nameList->max_length) )
      sub_1C93D34(v4);
    v4 = (Gender_c *)nameList->m_Items[v3];
    if ( !v4 )
      goto LABEL_16;
    ++v3;
    if ( System_String__Equals_64461044((System_String_o *)v4, name, 0) )
      return v3;
  }
}


System_String_o *Gender__ToName(int32_t type, const MethodInfo *method)
{
  Gender_c *v3; // x0
  struct System_String_array *nameList; // x8

  if ( (byte_4D2F8B6 & 1) == 0 )
  {
    sub_1C93AD4(&Gender_TypeInfo);
    byte_4D2F8B6 = 1;
  }
  v3 = Gender_TypeInfo;
  if ( !Gender_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Gender_TypeInfo);
    v3 = Gender_TypeInfo;
  }
  nameList = v3->static_fields->nameList;
  if ( !nameList )
    sub_1C93D2C(v3, method);
  if ( (unsigned int)(type - 1) >= LODWORD(nameList->max_length) )
    sub_1C93D34(v3);
  return nameList->m_Items[type - 1];
}