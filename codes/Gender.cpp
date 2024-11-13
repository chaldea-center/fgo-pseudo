void __fastcall Gender___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x0
  __int64 v12; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  int64_t v19; // x19
  int64_t v20; // x1
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  int64_t v27; // x1
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  int64_t v34; // x1
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7

  if ( (byte_4B151B1 & 1) == 0 )
  {
    sub_1BCA7E0(&Gender_TypeInfo, v1, v2);
    sub_1BCA7E0(&string___TypeInfo, v3, v4);
    sub_1BCA7E0(&StringLiteral_6485/*"FEMALE"*/, v5, v6);
    sub_1BCA7E0(&StringLiteral_9863/*"OTHER"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_8630/*"MALE"*/, v9, v10);
    byte_4B151B1 = 1;
  }
  v11 = sub_1BCA888(string___TypeInfo, 3LL);
  if ( !v11 )
    sub_1BCAA3C(0LL, v12);
  v19 = v11;
  if ( !*(_DWORD *)(v11 + 24)
    || (v20 = StringLiteral_8630/*"MALE"*/,
        *(_QWORD *)(v11 + 32) = StringLiteral_8630/*"MALE"*/,
        sub_1BCA784((PartyOrganizationUtility_o *)(v11 + 32), v20, v13, v14, v15, v16, v17, v18),
        *(_DWORD *)(v19 + 24) <= 1u)
    || (v27 = StringLiteral_6485/*"FEMALE"*/,
        *(_QWORD *)(v19 + 40) = StringLiteral_6485/*"FEMALE"*/,
        sub_1BCA784((PartyOrganizationUtility_o *)(v19 + 40), v27, v21, v22, v23, v24, v25, v26),
        *(_DWORD *)(v19 + 24) <= 2u) )
  {
    sub_1BCAA44(v11, v12);
  }
  v34 = StringLiteral_9863/*"OTHER"*/;
  *(_QWORD *)(v19 + 48) = StringLiteral_9863/*"OTHER"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v19 + 48), v34, v28, v29, v30, v31, v32, v33);
  Gender_TypeInfo->static_fields->nameList = (struct System_String_array *)v19;
  sub_1BCA784((PartyOrganizationUtility_o *)Gender_TypeInfo->static_fields, v19, v35, v36, v37, v38, v39, v40);
}


void __fastcall Gender___ctor(Gender_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.type = 3;
}


void __fastcall Gender___ctor_38400792(Gender_o *this, int32_t type, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.type = type;
}


void __fastcall Gender___ctor_38400832(Gender_o *this, System_String_o *name, const MethodInfo *method)
{
  const MethodInfo *v5; // x1

  if ( (byte_4B151AE & 1) == 0 )
  {
    sub_1BCA7E0(&Gender_TypeInfo, name, method);
    byte_4B151AE = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !Gender_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Gender_TypeInfo, v5);
  this->fields.type = Gender__Parse(name, v5);
}


int32_t __fastcall Gender__Get(Gender_o *this, const MethodInfo *method)
{
  return this->fields.type;
}


int32_t __fastcall Gender__Parse(System_String_o *name, const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t v4; // w20
  Gender_c *v5; // x0
  struct System_String_array *nameList; // x8

  if ( (byte_4B151AC & 1) == 0 )
  {
    sub_1BCA7E0(&Gender_TypeInfo, method, v2);
    byte_4B151AC = 1;
  }
  v4 = 0;
  while ( 1 )
  {
    v5 = Gender_TypeInfo;
    if ( !Gender_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Gender_TypeInfo, method);
      v5 = Gender_TypeInfo;
    }
    nameList = v5->static_fields->nameList;
    if ( !nameList )
LABEL_16:
      sub_1BCAA3C(v5, method);
    if ( v4 >= (signed int)nameList->max_length )
      return 3;
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5, method);
      nameList = Gender_TypeInfo->static_fields->nameList;
      if ( !nameList )
        goto LABEL_16;
    }
    if ( v4 >= nameList->max_length )
      sub_1BCAA44(v5, method);
    v5 = (Gender_c *)nameList->m_Items[v4];
    if ( !v5 )
      goto LABEL_16;
    ++v4;
    if ( System_String__Equals_62409536((System_String_o *)v5, name, 0LL) )
      return v4;
  }
}


void __fastcall Gender__Set(Gender_o *this, int32_t type, const MethodInfo *method)
{
  this->fields.type = type;
}


void __fastcall Gender__Set_38401076(Gender_o *this, System_String_o *name, const MethodInfo *method)
{
  if ( (byte_4B151B0 & 1) == 0 )
  {
    sub_1BCA7E0(&Gender_TypeInfo, name, method);
    byte_4B151B0 = 1;
  }
  if ( !Gender_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Gender_TypeInfo, name);
  this->fields.type = Gender__Parse(name, (const MethodInfo *)name);
}


int32_t __fastcall Gender__ToData(System_String_o *name, const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t v4; // w20
  Gender_c *v5; // x0
  struct System_String_array *nameList; // x8

  if ( (byte_4B151AD & 1) == 0 )
  {
    sub_1BCA7E0(&Gender_TypeInfo, method, v2);
    byte_4B151AD = 1;
  }
  v4 = 0;
  while ( 1 )
  {
    v5 = Gender_TypeInfo;
    if ( !Gender_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Gender_TypeInfo, method);
      v5 = Gender_TypeInfo;
    }
    nameList = v5->static_fields->nameList;
    if ( !nameList )
LABEL_16:
      sub_1BCAA3C(v5, method);
    if ( v4 >= (signed int)nameList->max_length )
      return 3;
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5, method);
      nameList = Gender_TypeInfo->static_fields->nameList;
      if ( !nameList )
        goto LABEL_16;
    }
    if ( v4 >= nameList->max_length )
      sub_1BCAA44(v5, method);
    v5 = (Gender_c *)nameList->m_Items[v4];
    if ( !v5 )
      goto LABEL_16;
    ++v4;
    if ( System_String__Equals_62409536((System_String_o *)v5, name, 0LL) )
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

  if ( (byte_4B151AB & 1) == 0 )
  {
    sub_1BCA7E0(&Gender_TypeInfo, method, v2);
    byte_4B151AB = 1;
  }
  v4 = Gender_TypeInfo;
  if ( !Gender_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Gender_TypeInfo, method);
    v4 = Gender_TypeInfo;
  }
  nameList = v4->static_fields->nameList;
  if ( !nameList )
    sub_1BCAA3C(v4, method);
  if ( type - 1 >= nameList->max_length )
    sub_1BCAA44(v4, method);
  return nameList->m_Items[type - 1];
}


System_String_o *__fastcall Gender__ToString(Gender_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t type; // w19

  if ( (byte_4B151AF & 1) == 0 )
  {
    sub_1BCA7E0(&Gender_TypeInfo, method, v2);
    byte_4B151AF = 1;
  }
  type = this->fields.type;
  if ( !Gender_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Gender_TypeInfo, method);
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