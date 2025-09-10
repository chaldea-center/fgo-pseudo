void Gender___cctor(const MethodInfo *method)
{
  __int64 v1; // x0
  __int64 v2; // x1
  __int64 v3; // x2
  const MethodInfo *v4; // x3
  __int64 v5; // x19
  int32_t v6; // w1
  const MethodInfo *v7; // x3
  int32_t v8; // w1
  const MethodInfo *v9; // x3
  int32_t v10; // w1
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  if ( (byte_4C261C3 & 1) == 0 )
  {
    sub_1C2D490(&Gender_TypeInfo);
    sub_1C2D490(&string___TypeInfo);
    sub_1C2D490(&StringLiteral_6390/*"FEMALE"*/);
    sub_1C2D490(&StringLiteral_9728/*"OTHER"*/);
    sub_1C2D490(&StringLiteral_8526/*"MALE"*/);
    byte_4C261C3 = 1;
  }
  v1 = sub_1C2D538(string___TypeInfo, 3);
  if ( !v1 )
    sub_1C2D6EC(0, v2);
  v5 = v1;
  if ( !*(_DWORD *)(v1 + 24)
    || (v6 = StringLiteral_8526/*"MALE"*/,
        *(_QWORD *)(v1 + 32) = StringLiteral_8526/*"MALE"*/,
        sub_1C2D434((CGThumbnailListItem_o *)(v1 + 32), v6, v3, v4),
        *(_DWORD *)(v5 + 24) <= 1u)
    || (v8 = StringLiteral_6390/*"FEMALE"*/,
        *(_QWORD *)(v5 + 40) = StringLiteral_6390/*"FEMALE"*/,
        sub_1C2D434((CGThumbnailListItem_o *)(v5 + 40), v8, v3, v7),
        *(_DWORD *)(v5 + 24) <= 2u) )
  {
    sub_1C2D6F4(v1, v2, v3);
  }
  v10 = StringLiteral_9728/*"OTHER"*/;
  *(_QWORD *)(v5 + 48) = StringLiteral_9728/*"OTHER"*/;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 48), v10, v3, v9);
  Gender_TypeInfo->static_fields->nameList = (struct System_String_array *)v5;
  sub_1C2D434((CGThumbnailListItem_o *)Gender_TypeInfo->static_fields, v5, v11, v12);
}


void Gender___ctor(Gender_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.type = 3;
}


void Gender___ctor_40204680(Gender_o *this, int32_t type, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.type = type;
}


void Gender___ctor_40204720(Gender_o *this, System_String_o *name, const MethodInfo *method)
{
  const MethodInfo *v5; // x1

  if ( (byte_4C261C0 & 1) == 0 )
  {
    sub_1C2D490(&Gender_TypeInfo);
    byte_4C261C0 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !Gender_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Gender_TypeInfo);
  this->fields.type = Gender__Parse(name, v5);
}


int32_t Gender__Get(Gender_o *this, const MethodInfo *method)
{
  return this->fields.type;
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
      return UnityEngine_Random__Range_71123924(1, 3, 0);
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
        sub_1C2D6EC(SelfUserGame, v3);
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
  __int64 v2; // x2
  int32_t v4; // w20
  Gender_c *v5; // x0
  struct System_String_array *nameList; // x8

  if ( (byte_4C261BE & 1) == 0 )
  {
    sub_1C2D490(&Gender_TypeInfo);
    byte_4C261BE = 1;
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
      sub_1C2D6EC(v5, method);
    if ( v4 >= SLODWORD(nameList->max_length) )
      return 3;
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      nameList = Gender_TypeInfo->static_fields->nameList;
      if ( !nameList )
        goto LABEL_16;
    }
    if ( (unsigned int)v4 >= LODWORD(nameList->max_length) )
      sub_1C2D6F4(v5, method, v2);
    v5 = (Gender_c *)nameList->m_Items[v4];
    if ( !v5 )
      goto LABEL_16;
    ++v4;
    if ( System_String__Equals_63493168((System_String_o *)v5, name, 0) )
      return v4;
  }
}


void Gender__Set(Gender_o *this, int32_t type, const MethodInfo *method)
{
  this->fields.type = type;
}


void Gender__Set_40204964(Gender_o *this, System_String_o *name, const MethodInfo *method)
{
  if ( (byte_4C261C2 & 1) == 0 )
  {
    sub_1C2D490(&Gender_TypeInfo);
    byte_4C261C2 = 1;
  }
  if ( !Gender_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Gender_TypeInfo);
  this->fields.type = Gender__Parse(name, (const MethodInfo *)name);
}


int32_t Gender__ToData(System_String_o *name, const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t v4; // w20
  Gender_c *v5; // x0
  struct System_String_array *nameList; // x8

  if ( (byte_4C261BF & 1) == 0 )
  {
    sub_1C2D490(&Gender_TypeInfo);
    byte_4C261BF = 1;
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
      sub_1C2D6EC(v5, method);
    if ( v4 >= SLODWORD(nameList->max_length) )
      return 3;
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      nameList = Gender_TypeInfo->static_fields->nameList;
      if ( !nameList )
        goto LABEL_16;
    }
    if ( (unsigned int)v4 >= LODWORD(nameList->max_length) )
      sub_1C2D6F4(v5, method, v2);
    v5 = (Gender_c *)nameList->m_Items[v4];
    if ( !v5 )
      goto LABEL_16;
    ++v4;
    if ( System_String__Equals_63493168((System_String_o *)v5, name, 0) )
      return v4;
  }
}


int32_t Gender__ToInteger(Gender_o *this, const MethodInfo *method)
{
  return this->fields.type;
}


System_String_o *Gender__ToName(int32_t type, const MethodInfo *method)
{
  __int64 v2; // x2
  Gender_c *v4; // x0
  struct System_String_array *nameList; // x8

  if ( (byte_4C261BD & 1) == 0 )
  {
    sub_1C2D490(&Gender_TypeInfo);
    byte_4C261BD = 1;
  }
  v4 = Gender_TypeInfo;
  if ( !Gender_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Gender_TypeInfo);
    v4 = Gender_TypeInfo;
  }
  nameList = v4->static_fields->nameList;
  if ( !nameList )
    sub_1C2D6EC(v4, method);
  if ( (unsigned int)(type - 1) >= LODWORD(nameList->max_length) )
    sub_1C2D6F4(v4, method, v2);
  return nameList->m_Items[type - 1];
}


System_String_o *Gender__ToString(Gender_o *this, const MethodInfo *method)
{
  int32_t type; // w19

  if ( (byte_4C261C1 & 1) == 0 )
  {
    sub_1C2D490(&Gender_TypeInfo);
    byte_4C261C1 = 1;
  }
  type = this->fields.type;
  if ( !Gender_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Gender_TypeInfo);
  return Gender__ToName(type, method);
}


int32_t Gender__get_Value(Gender_o *this, const MethodInfo *method)
{
  return this->fields.type;
}


void Gender__set_Value(Gender_o *this, int32_t value, const MethodInfo *method)
{
  this->fields.type = value;
}