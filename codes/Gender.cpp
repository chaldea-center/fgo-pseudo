void __fastcall Gender___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  __int64 v10; // x19
  int32_t v11; // w1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w1
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w1
  int32_t v18; // w2
  const MethodInfo *v19; // x3

  if ( (byte_49B9E05 & 1) == 0 )
  {
    sub_1B4CF90(&Gender_TypeInfo, v1);
    sub_1B4CF90(&string___TypeInfo, v2);
    sub_1B4CF90(&StringLiteral_6290/*"FEMALE"*/, v3);
    sub_1B4CF90(&StringLiteral_9533/*"OTHER"*/, v4);
    sub_1B4CF90(&StringLiteral_8337/*"MALE"*/, v5);
    byte_49B9E05 = 1;
  }
  v6 = sub_1B4D038(string___TypeInfo, 3LL);
  if ( !v6 )
    sub_1B4D1EC(0LL, v7);
  v10 = v6;
  if ( !*(_DWORD *)(v6 + 24)
    || (v11 = StringLiteral_8337/*"MALE"*/,
        *(_QWORD *)(v6 + 32) = StringLiteral_8337/*"MALE"*/,
        sub_1B4CF34((CGThumbnailListItem_o *)(v6 + 32), v11, v8, v9),
        *(_DWORD *)(v10 + 24) <= 1u)
    || (v14 = StringLiteral_6290/*"FEMALE"*/,
        *(_QWORD *)(v10 + 40) = StringLiteral_6290/*"FEMALE"*/,
        sub_1B4CF34((CGThumbnailListItem_o *)(v10 + 40), v14, v12, v13),
        *(_DWORD *)(v10 + 24) <= 2u) )
  {
    sub_1B4D1F4(v6, v7);
  }
  v17 = StringLiteral_9533/*"OTHER"*/;
  *(_QWORD *)(v10 + 48) = StringLiteral_9533/*"OTHER"*/;
  sub_1B4CF34((CGThumbnailListItem_o *)(v10 + 48), v17, v15, v16);
  Gender_TypeInfo->static_fields->nameList = (struct System_String_array *)v10;
  sub_1B4CF34((CGThumbnailListItem_o *)Gender_TypeInfo->static_fields, v10, v18, v19);
}


void __fastcall Gender___ctor(Gender_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.type = 3;
}


void __fastcall Gender___ctor_38223036(Gender_o *this, int32_t type, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.type = type;
}


void __fastcall Gender___ctor_38223076(Gender_o *this, System_String_o *name, const MethodInfo *method)
{
  const MethodInfo *v5; // x1

  if ( (byte_49B9E02 & 1) == 0 )
  {
    sub_1B4CF90(&Gender_TypeInfo, name);
    byte_49B9E02 = 1;
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
      return UnityEngine_Random__Range_68764200(1, 3, 0LL);
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
        sub_1B4D1EC(SelfUserGame, v3);
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
  int32_t v3; // w20
  Gender_c *v4; // x0
  struct System_String_array *nameList; // x8

  if ( (byte_49B9E00 & 1) == 0 )
  {
    sub_1B4CF90(&Gender_TypeInfo, method);
    byte_49B9E00 = 1;
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
      sub_1B4D1EC(v4, method);
    if ( v3 >= (signed int)nameList->max_length )
      return 3;
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      nameList = Gender_TypeInfo->static_fields->nameList;
      if ( !nameList )
        goto LABEL_16;
    }
    if ( v3 >= nameList->max_length )
      sub_1B4D1F4(v4, method);
    v4 = (Gender_c *)nameList->m_Items[v3];
    if ( !v4 )
      goto LABEL_16;
    ++v3;
    if ( System_String__Equals_61128772((System_String_o *)v4, name, 0LL) )
      return v3;
  }
}


void __fastcall Gender__Set(Gender_o *this, int32_t type, const MethodInfo *method)
{
  this->fields.type = type;
}


void __fastcall Gender__Set_38223320(Gender_o *this, System_String_o *name, const MethodInfo *method)
{
  if ( (byte_49B9E04 & 1) == 0 )
  {
    sub_1B4CF90(&Gender_TypeInfo, name);
    byte_49B9E04 = 1;
  }
  if ( !Gender_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Gender_TypeInfo);
  this->fields.type = Gender__Parse(name, (const MethodInfo *)name);
}


int32_t __fastcall Gender__ToData(System_String_o *name, const MethodInfo *method)
{
  int32_t v3; // w20
  Gender_c *v4; // x0
  struct System_String_array *nameList; // x8

  if ( (byte_49B9E01 & 1) == 0 )
  {
    sub_1B4CF90(&Gender_TypeInfo, method);
    byte_49B9E01 = 1;
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
      sub_1B4D1EC(v4, method);
    if ( v3 >= (signed int)nameList->max_length )
      return 3;
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      nameList = Gender_TypeInfo->static_fields->nameList;
      if ( !nameList )
        goto LABEL_16;
    }
    if ( v3 >= nameList->max_length )
      sub_1B4D1F4(v4, method);
    v4 = (Gender_c *)nameList->m_Items[v3];
    if ( !v4 )
      goto LABEL_16;
    ++v3;
    if ( System_String__Equals_61128772((System_String_o *)v4, name, 0LL) )
      return v3;
  }
}


int32_t __fastcall Gender__ToInteger(Gender_o *this, const MethodInfo *method)
{
  return this->fields.type;
}


System_String_o *__fastcall Gender__ToName(int32_t type, const MethodInfo *method)
{
  Gender_c *v3; // x0
  struct System_String_array *nameList; // x8

  if ( (byte_49B9DFF & 1) == 0 )
  {
    sub_1B4CF90(&Gender_TypeInfo, method);
    byte_49B9DFF = 1;
  }
  v3 = Gender_TypeInfo;
  if ( !Gender_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Gender_TypeInfo);
    v3 = Gender_TypeInfo;
  }
  nameList = v3->static_fields->nameList;
  if ( !nameList )
    sub_1B4D1EC(v3, method);
  if ( type - 1 >= nameList->max_length )
    sub_1B4D1F4(v3, method);
  return nameList->m_Items[type - 1];
}


System_String_o *__fastcall Gender__ToString(Gender_o *this, const MethodInfo *method)
{
  int32_t type; // w19

  if ( (byte_49B9E03 & 1) == 0 )
  {
    sub_1B4CF90(&Gender_TypeInfo, method);
    byte_49B9E03 = 1;
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