void __fastcall Gender___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x0
  __int64 v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  int64_t v14; // x19
  int64_t v15; // x1
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  int64_t v22; // x1
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  int64_t v29; // x1
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7

  if ( (byte_4C20EF3 & 1) == 0 )
  {
    sub_1C3B764(&Gender_TypeInfo, v1);
    sub_1C3B764(&string___TypeInfo, v2);
    sub_1C3B764(&StringLiteral_6527/*"Favorites"*/, v3);
    sub_1C3B764(&StringLiteral_9923/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_EQUIP_CANCEL"*/, v4);
    sub_1C3B764(&StringLiteral_8681/*"MapGimmickEffect_GappolyPiece_2"*/, v5);
    byte_4C20EF3 = 1;
  }
  v6 = sub_1C3B80C(string___TypeInfo, 3LL);
  if ( !v6 )
    sub_1C3B9C0(0LL, v7);
  v14 = v6;
  if ( !*(_DWORD *)(v6 + 24)
    || (v15 = StringLiteral_8681/*"MapGimmickEffect_GappolyPiece_2"*/,
        *(_QWORD *)(v6 + 32) = StringLiteral_8681/*"MapGimmickEffect_GappolyPiece_2"*/,
        sub_1C3B708((PartyOrganizationUtility_o *)(v6 + 32), v15, v8, v9, v10, v11, v12, v13),
        *(_DWORD *)(v14 + 24) <= 1u)
    || (v22 = StringLiteral_6527/*"Favorites"*/,
        *(_QWORD *)(v14 + 40) = StringLiteral_6527/*"Favorites"*/,
        sub_1C3B708((PartyOrganizationUtility_o *)(v14 + 40), v22, v16, v17, v18, v19, v20, v21),
        *(_DWORD *)(v14 + 24) <= 2u) )
  {
    sub_1C3B9C8(v6, v7);
  }
  v29 = StringLiteral_9923/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_EQUIP_CANCEL"*/;
  *(_QWORD *)(v14 + 48) = StringLiteral_9923/*"PARTY_ORGANIZATION_CONFIRM_REMOVE_EQUIP_CANCEL"*/;
  sub_1C3B708((PartyOrganizationUtility_o *)(v14 + 48), v29, v23, v24, v25, v26, v27, v28);
  Gender_TypeInfo->static_fields->nameList = (struct System_String_array *)v14;
  sub_1C3B708((PartyOrganizationUtility_o *)Gender_TypeInfo->static_fields, v14, v30, v31, v32, v33, v34, v35);
}


void __fastcall Gender___ctor(Gender_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.type = 3;
}


void __fastcall Gender___ctor_39107700(Gender_o *this, int32_t type, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.type = type;
}


void __fastcall Gender___ctor_39107740(Gender_o *this, System_String_o *name, const MethodInfo *method)
{
  const MethodInfo *v5; // x1

  if ( (byte_4C20EF0 & 1) == 0 )
  {
    sub_1C3B764(&Gender_TypeInfo, name);
    byte_4C20EF0 = 1;
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
      return UnityEngine_Random__Range_71082488(1, 3, 0LL);
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
        sub_1C3B9C0(SelfUserGame, v3);
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

  if ( (byte_4C20EEE & 1) == 0 )
  {
    sub_1C3B764(&Gender_TypeInfo, method);
    byte_4C20EEE = 1;
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
      sub_1C3B9C0(v4, method);
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
      sub_1C3B9C8(v4, method);
    v4 = (Gender_c *)nameList->m_Items[v3];
    if ( !v4 )
      goto LABEL_16;
    ++v3;
    if ( System_String__Equals_63376928((System_String_o *)v4, name, 0LL) )
      return v3;
  }
}


void __fastcall Gender__Set(Gender_o *this, int32_t type, const MethodInfo *method)
{
  this->fields.type = type;
}


void __fastcall Gender__Set_39107984(Gender_o *this, System_String_o *name, const MethodInfo *method)
{
  if ( (byte_4C20EF2 & 1) == 0 )
  {
    sub_1C3B764(&Gender_TypeInfo, name);
    byte_4C20EF2 = 1;
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

  if ( (byte_4C20EEF & 1) == 0 )
  {
    sub_1C3B764(&Gender_TypeInfo, method);
    byte_4C20EEF = 1;
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
      sub_1C3B9C0(v4, method);
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
      sub_1C3B9C8(v4, method);
    v4 = (Gender_c *)nameList->m_Items[v3];
    if ( !v4 )
      goto LABEL_16;
    ++v3;
    if ( System_String__Equals_63376928((System_String_o *)v4, name, 0LL) )
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

  if ( (byte_4C20EED & 1) == 0 )
  {
    sub_1C3B764(&Gender_TypeInfo, method);
    byte_4C20EED = 1;
  }
  v3 = Gender_TypeInfo;
  if ( !Gender_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Gender_TypeInfo);
    v3 = Gender_TypeInfo;
  }
  nameList = v3->static_fields->nameList;
  if ( !nameList )
    sub_1C3B9C0(v3, method);
  if ( type - 1 >= nameList->max_length )
    sub_1C3B9C8(v3, method);
  return nameList->m_Items[type - 1];
}


System_String_o *__fastcall Gender__ToString(Gender_o *this, const MethodInfo *method)
{
  int32_t type; // w19

  if ( (byte_4C20EF1 & 1) == 0 )
  {
    sub_1C3B764(&Gender_TypeInfo, method);
    byte_4C20EF1 = 1;
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