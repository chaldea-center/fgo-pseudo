void __fastcall Gender___cctor(const MethodInfo *method)
{
  __int64 v1; // x0
  __int64 v2; // x1
  int32_t v3; // w2
  int32_t v4; // w3
  __int64 v5; // x19
  int32_t v6; // w1
  int32_t v7; // w2
  int32_t v8; // w3
  int32_t v9; // w1
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w1
  int32_t v13; // w2
  int32_t v14; // w3

  if ( (byte_4A5A153 & 1) == 0 )
  {
    sub_1B885B0(&Gender_TypeInfo);
    sub_1B885B0(&string___TypeInfo);
    sub_1B885B0(&StringLiteral_6362/*"FEMALE"*/);
    sub_1B885B0(&StringLiteral_9730/*"OTHER"*/);
    sub_1B885B0(&StringLiteral_8504/*"MALE"*/);
    byte_4A5A153 = 1;
  }
  v1 = sub_1B88658(string___TypeInfo, 3LL);
  if ( !v1 )
    sub_1B8880C(0LL, v2);
  v5 = v1;
  if ( !*(_DWORD *)(v1 + 24)
    || (v6 = StringLiteral_8504/*"MALE"*/,
        *(_QWORD *)(v1 + 32) = StringLiteral_8504/*"MALE"*/,
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v1 + 32), v6, v3, v4),
        *(_DWORD *)(v5 + 24) <= 1u)
    || (v9 = StringLiteral_6362/*"FEMALE"*/,
        *(_QWORD *)(v5 + 40) = StringLiteral_6362/*"FEMALE"*/,
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 40), v9, v7, v8),
        *(_DWORD *)(v5 + 24) <= 2u) )
  {
    sub_1B88814(v1, v2);
  }
  v12 = StringLiteral_9730/*"OTHER"*/;
  *(_QWORD *)(v5 + 48) = StringLiteral_9730/*"OTHER"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 48), v12, v10, v11);
  Gender_TypeInfo->static_fields->nameList = (struct System_String_array *)v5;
  sub_1B88554((ServantStatusBattleListViewItem_o *)Gender_TypeInfo->static_fields, v5, v13, v14);
}


void __fastcall Gender___ctor(Gender_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.type = 3;
}


void __fastcall Gender___ctor_37687104(Gender_o *this, int32_t type, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.type = type;
}


void __fastcall Gender___ctor_37687144(Gender_o *this, System_String_o *name, const MethodInfo *method)
{
  const MethodInfo *v5; // x1

  if ( (byte_4A5A150 & 1) == 0 )
  {
    sub_1B885B0(&Gender_TypeInfo);
    byte_4A5A150 = 1;
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


int32_t __fastcall Gender__Parse(System_String_o *name, const MethodInfo *method)
{
  int32_t v3; // w20
  Gender_c *v4; // x0
  struct System_String_array *nameList; // x8

  if ( (byte_4A5A14E & 1) == 0 )
  {
    sub_1B885B0(&Gender_TypeInfo);
    byte_4A5A14E = 1;
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
      sub_1B8880C(v4, method);
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
      sub_1B88814(v4, method);
    v4 = (Gender_c *)nameList->m_Items[v3];
    if ( !v4 )
      goto LABEL_16;
    ++v3;
    if ( System_String__Equals_61715348((System_String_o *)v4, name, 0LL) )
      return v3;
  }
}


void __fastcall Gender__Set(Gender_o *this, int32_t type, const MethodInfo *method)
{
  this->fields.type = type;
}


void __fastcall Gender__Set_37687388(Gender_o *this, System_String_o *name, const MethodInfo *method)
{
  if ( (byte_4A5A152 & 1) == 0 )
  {
    sub_1B885B0(&Gender_TypeInfo);
    byte_4A5A152 = 1;
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

  if ( (byte_4A5A14F & 1) == 0 )
  {
    sub_1B885B0(&Gender_TypeInfo);
    byte_4A5A14F = 1;
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
      sub_1B8880C(v4, method);
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
      sub_1B88814(v4, method);
    v4 = (Gender_c *)nameList->m_Items[v3];
    if ( !v4 )
      goto LABEL_16;
    ++v3;
    if ( System_String__Equals_61715348((System_String_o *)v4, name, 0LL) )
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

  if ( (byte_4A5A14D & 1) == 0 )
  {
    sub_1B885B0(&Gender_TypeInfo);
    byte_4A5A14D = 1;
  }
  v3 = Gender_TypeInfo;
  if ( !Gender_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Gender_TypeInfo);
    v3 = Gender_TypeInfo;
  }
  nameList = v3->static_fields->nameList;
  if ( !nameList )
    sub_1B8880C(v3, method);
  if ( type - 1 >= nameList->max_length )
    sub_1B88814(v3, method);
  return nameList->m_Items[type - 1];
}


System_String_o *__fastcall Gender__ToString(Gender_o *this, const MethodInfo *method)
{
  int32_t type; // w19

  if ( (byte_4A5A151 & 1) == 0 )
  {
    sub_1B885B0(&Gender_TypeInfo);
    byte_4A5A151 = 1;
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