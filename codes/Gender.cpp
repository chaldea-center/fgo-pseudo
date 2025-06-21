void __fastcall Gender___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  const MethodInfo *v9; // x3
  __int64 v10; // x19
  int32_t v11; // w1
  const MethodInfo *v12; // x3
  int32_t v13; // w1
  const MethodInfo *v14; // x3
  int32_t v15; // w1
  int32_t v16; // w2
  const MethodInfo *v17; // x3

  if ( (byte_4B1B429 & 1) == 0 )
  {
    sub_1BCAFF8(&Gender_TypeInfo, v1);
    sub_1BCAFF8(&string___TypeInfo, v2);
    sub_1BCAFF8(&StringLiteral_6348/*"FEMALE"*/, v3);
    sub_1BCAFF8(&StringLiteral_9659/*"OTHER"*/, v4);
    sub_1BCAFF8(&StringLiteral_8462/*"MALE"*/, v5);
    byte_4B1B429 = 1;
  }
  v6 = sub_1BCB0A0(string___TypeInfo, 3LL);
  if ( !v6 )
    sub_1BCB254(0LL, v7);
  v10 = v6;
  if ( !*(_DWORD *)(v6 + 24)
    || (v11 = StringLiteral_8462/*"MALE"*/,
        *(_QWORD *)(v6 + 32) = StringLiteral_8462/*"MALE"*/,
        sub_1BCAF9C((CGThumbnailListItem_o *)(v6 + 32), v11, v8, v9),
        *(_DWORD *)(v10 + 24) <= 1u)
    || (v13 = StringLiteral_6348/*"FEMALE"*/,
        *(_QWORD *)(v10 + 40) = StringLiteral_6348/*"FEMALE"*/,
        sub_1BCAF9C((CGThumbnailListItem_o *)(v10 + 40), v13, v8, v12),
        *(_DWORD *)(v10 + 24) <= 2u) )
  {
    sub_1BCB25C(v6, v7, v8);
  }
  v15 = StringLiteral_9659/*"OTHER"*/;
  *(_QWORD *)(v10 + 48) = StringLiteral_9659/*"OTHER"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v10 + 48), v15, v8, v14);
  Gender_TypeInfo->static_fields->nameList = (struct System_String_array *)v10;
  sub_1BCAF9C((CGThumbnailListItem_o *)Gender_TypeInfo->static_fields, v10, v16, v17);
}


void __fastcall Gender___ctor(Gender_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.type = 3;
}


void __fastcall Gender___ctor_39616232(Gender_o *this, int32_t type, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.type = type;
}


void __fastcall Gender___ctor_39616272(Gender_o *this, System_String_o *name, const MethodInfo *method)
{
  const MethodInfo *v5; // x1

  if ( (byte_4B1B426 & 1) == 0 )
  {
    sub_1BCAFF8(&Gender_TypeInfo, name);
    byte_4B1B426 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !Gender_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Gender_TypeInfo);
  this->fields.type = Gender__Parse(name, v5);
}


int32_t __fastcall Gender__Get(Gender_o *this, const MethodInfo *method)
{
  return this->fields.type;
}


int32_t __fastcall Gender__GetTreasureDeviceSequenceGenderType(int32_t genderSelectType, const MethodInfo *method)
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
      return UnityEngine_Random__Range_70096296(1, 3, 0LL);
    case 4:
      SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
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
      SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
      if ( !SelfUserGame )
LABEL_14:
        sub_1BCB254(SelfUserGame, v3);
      genderSelectType = SelfUserGame->fields.genderType;
      break;
    default:
      genderSelectType = -1;
      break;
  }
  return genderSelectType;
}


int32_t __fastcall Gender__Parse(System_String_o *name, const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t v4; // w20
  Gender_c *v5; // x0
  struct System_String_array *nameList; // x8

  if ( (byte_4B1B424 & 1) == 0 )
  {
    sub_1BCAFF8(&Gender_TypeInfo, method);
    byte_4B1B424 = 1;
  }
  v4 = 0;
  while ( 1 )
  {
    v5 = Gender_TypeInfo;
    if ( !Gender_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Gender_TypeInfo);
      v5 = Gender_TypeInfo;
    }
    nameList = v5->static_fields->nameList;
    if ( !nameList )
LABEL_16:
      sub_1BCB254(v5, method);
    if ( v4 >= (signed int)nameList->max_length )
      return 3;
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      nameList = Gender_TypeInfo->static_fields->nameList;
      if ( !nameList )
        goto LABEL_16;
    }
    if ( v4 >= nameList->max_length )
      sub_1BCB25C(v5, method, v2);
    v5 = (Gender_c *)nameList->m_Items[v4];
    if ( !v5 )
      goto LABEL_16;
    ++v4;
    if ( System_String__Equals_62485728((System_String_o *)v5, name, 0LL) )
      return v4;
  }
}


void __fastcall Gender__Set(Gender_o *this, int32_t type, const MethodInfo *method)
{
  this->fields.type = type;
}


void __fastcall Gender__Set_39616516(Gender_o *this, System_String_o *name, const MethodInfo *method)
{
  if ( (byte_4B1B428 & 1) == 0 )
  {
    sub_1BCAFF8(&Gender_TypeInfo, name);
    byte_4B1B428 = 1;
  }
  if ( !Gender_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Gender_TypeInfo);
  this->fields.type = Gender__Parse(name, (const MethodInfo *)name);
}


int32_t __fastcall Gender__ToData(System_String_o *name, const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t v4; // w20
  Gender_c *v5; // x0
  struct System_String_array *nameList; // x8

  if ( (byte_4B1B425 & 1) == 0 )
  {
    sub_1BCAFF8(&Gender_TypeInfo, method);
    byte_4B1B425 = 1;
  }
  v4 = 0;
  while ( 1 )
  {
    v5 = Gender_TypeInfo;
    if ( !Gender_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Gender_TypeInfo);
      v5 = Gender_TypeInfo;
    }
    nameList = v5->static_fields->nameList;
    if ( !nameList )
LABEL_16:
      sub_1BCB254(v5, method);
    if ( v4 >= (signed int)nameList->max_length )
      return 3;
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      nameList = Gender_TypeInfo->static_fields->nameList;
      if ( !nameList )
        goto LABEL_16;
    }
    if ( v4 >= nameList->max_length )
      sub_1BCB25C(v5, method, v2);
    v5 = (Gender_c *)nameList->m_Items[v4];
    if ( !v5 )
      goto LABEL_16;
    ++v4;
    if ( System_String__Equals_62485728((System_String_o *)v5, name, 0LL) )
      return v4;
  }
}


int32_t __fastcall Gender__ToInteger(Gender_o *this, const MethodInfo *method)
{
  return this->fields.type;
}


System_String_o *__fastcall Gender__ToName(int32_t type, const MethodInfo *method)
{
  __int64 v2; // x2
  Gender_c *v4; // x0
  struct System_String_array *nameList; // x8

  if ( (byte_4B1B423 & 1) == 0 )
  {
    sub_1BCAFF8(&Gender_TypeInfo, method);
    byte_4B1B423 = 1;
  }
  v4 = Gender_TypeInfo;
  if ( !Gender_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Gender_TypeInfo);
    v4 = Gender_TypeInfo;
  }
  nameList = v4->static_fields->nameList;
  if ( !nameList )
    sub_1BCB254(v4, method);
  if ( type - 1 >= nameList->max_length )
    sub_1BCB25C(v4, method, v2);
  return nameList->m_Items[type - 1];
}


System_String_o *__fastcall Gender__ToString(Gender_o *this, const MethodInfo *method)
{
  int32_t type; // w19

  if ( (byte_4B1B427 & 1) == 0 )
  {
    sub_1BCAFF8(&Gender_TypeInfo, method);
    byte_4B1B427 = 1;
  }
  type = this->fields.type;
  if ( !Gender_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Gender_TypeInfo);
  return Gender__ToName(type, method);
}


int32_t __fastcall Gender__get_Value(Gender_o *this, const MethodInfo *method)
{
  return this->fields.type;
}


void __fastcall Gender__set_Value(Gender_o *this, int32_t value, const MethodInfo *method)
{
  this->fields.type = value;
}