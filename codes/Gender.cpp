void __fastcall Gender___cctor(const MethodInfo *method)
{
  __int64 v1; // x0
  __int64 v2; // x1
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  System_Int32_array **v9; // x19
  __int64 v10; // x0
  System_Int32_array **v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_Int32_array **v18; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Int32_array **v25; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  __int64 v33; // x0
  __int64 v34; // x0

  if ( (byte_4355AB1 & 1) == 0 )
  {
    sub_B70694(&Gender_TypeInfo);
    sub_B70694(&string___TypeInfo);
    sub_B70694(&StringLiteral_6423/*"FEMALE"*/);
    sub_B70694(&StringLiteral_9962/*"OTHER"*/);
    sub_B70694(&StringLiteral_8719/*"MALE"*/);
    byte_4355AB1 = 1;
  }
  v1 = sub_B706AC(string___TypeInfo, 3LL);
  if ( !v1 )
    sub_B7076C(0LL, v2);
  v9 = (System_Int32_array **)v1;
  v10 = StringLiteral_8719/*"MALE"*/;
  if ( StringLiteral_8719/*"MALE"*/ )
  {
    v10 = sub_B70754(StringLiteral_8719/*"MALE"*/, *(_QWORD *)&(*v9)->m_Items[9]);
    if ( !v10 )
      goto LABEL_21;
    v11 = (System_Int32_array **)StringLiteral_8719/*"MALE"*/;
  }
  else
  {
    v11 = 0LL;
  }
  if ( !*((_DWORD *)v9 + 6) )
    goto LABEL_20;
  v9[4] = (System_Int32_array *)v11;
  sub_B70630((BattleServantConfConponent_o *)(v9 + 4), v11, v3, v4, v5, v6, v7, v8);
  v10 = StringLiteral_6423/*"FEMALE"*/;
  if ( StringLiteral_6423/*"FEMALE"*/ )
  {
    v10 = sub_B70754(StringLiteral_6423/*"FEMALE"*/, *(_QWORD *)&(*v9)->m_Items[9]);
    if ( !v10 )
      goto LABEL_21;
    v18 = (System_Int32_array **)StringLiteral_6423/*"FEMALE"*/;
  }
  else
  {
    v18 = 0LL;
  }
  if ( *((_DWORD *)v9 + 6) <= 1u )
    goto LABEL_20;
  v9[5] = (System_Int32_array *)v18;
  sub_B70630((BattleServantConfConponent_o *)(v9 + 5), v18, v12, v13, v14, v15, v16, v17);
  v10 = StringLiteral_9962/*"OTHER"*/;
  if ( StringLiteral_9962/*"OTHER"*/ )
  {
    v10 = sub_B70754(StringLiteral_9962/*"OTHER"*/, *(_QWORD *)&(*v9)->m_Items[9]);
    if ( v10 )
    {
      v25 = (System_Int32_array **)StringLiteral_9962/*"OTHER"*/;
      goto LABEL_18;
    }
LABEL_21:
    v34 = sub_B7078C(v10);
    sub_B70738(v34, 0LL);
  }
  v25 = 0LL;
LABEL_18:
  if ( *((_DWORD *)v9 + 6) <= 2u )
  {
LABEL_20:
    v33 = sub_B70798(v10);
    sub_B70738(v33, 0LL);
  }
  v9[6] = (System_Int32_array *)v25;
  sub_B70630((BattleServantConfConponent_o *)(v9 + 6), v25, v19, v20, v21, v22, v23, v24);
  static_fields = (BattleServantConfConponent_o *)Gender_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v9;
  sub_B70630(static_fields, v9, v27, v28, v29, v30, v31, v32);
}


void __fastcall Gender___ctor(Gender_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.type = 3;
}


void __fastcall Gender___ctor_32512044(Gender_o *this, int32_t type, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.type = type;
}


void __fastcall Gender___ctor_32512088(Gender_o *this, System_String_o *name, const MethodInfo *method)
{
  const MethodInfo *v5; // x1

  if ( (byte_4355AAE & 1) == 0 )
  {
    sub_B70694(&Gender_TypeInfo);
    byte_4355AAE = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( (BYTE3(Gender_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Gender_TypeInfo->_2.cctor_finished )
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
  __int64 v7; // x0

  if ( (byte_4355AAC & 1) == 0 )
  {
    sub_B70694(&Gender_TypeInfo);
    byte_4355AAC = 1;
  }
  v3 = 0;
  while ( 1 )
  {
    v4 = Gender_TypeInfo;
    if ( (BYTE3(Gender_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Gender_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Gender_TypeInfo);
      v4 = Gender_TypeInfo;
    }
    nameList = v4->static_fields->nameList;
    if ( !nameList )
LABEL_18:
      sub_B7076C(v4, method);
    if ( v3 >= (signed int)nameList->max_length )
      return 3;
    if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      nameList = Gender_TypeInfo->static_fields->nameList;
      if ( !nameList )
        goto LABEL_18;
    }
    if ( v3 >= nameList->max_length )
    {
      v7 = sub_B70798(v4);
      sub_B70738(v7, 0LL);
    }
    v4 = (Gender_c *)nameList->m_Items[v3];
    if ( !v4 )
      goto LABEL_18;
    ++v3;
    if ( System_String__Equals_44745508((System_String_o *)v4, name, 0LL) )
      return v3;
  }
}


void __fastcall Gender__Set(Gender_o *this, int32_t type, const MethodInfo *method)
{
  this->fields.type = type;
}


void __fastcall Gender__Set_32512356(Gender_o *this, System_String_o *name, const MethodInfo *method)
{
  if ( (byte_4355AB0 & 1) == 0 )
  {
    sub_B70694(&Gender_TypeInfo);
    byte_4355AB0 = 1;
  }
  if ( (BYTE3(Gender_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Gender_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Gender_TypeInfo);
  this->fields.type = Gender__Parse(name, (const MethodInfo *)name);
}


int32_t __fastcall Gender__ToData(System_String_o *name, const MethodInfo *method)
{
  int32_t v3; // w20
  Gender_c *v4; // x0
  struct System_String_array *nameList; // x8
  __int64 v7; // x0

  if ( (byte_4355AAD & 1) == 0 )
  {
    sub_B70694(&Gender_TypeInfo);
    byte_4355AAD = 1;
  }
  v3 = 0;
  while ( 1 )
  {
    v4 = Gender_TypeInfo;
    if ( (BYTE3(Gender_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Gender_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Gender_TypeInfo);
      v4 = Gender_TypeInfo;
    }
    nameList = v4->static_fields->nameList;
    if ( !nameList )
LABEL_18:
      sub_B7076C(v4, method);
    if ( v3 >= (signed int)nameList->max_length )
      return 3;
    if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      nameList = Gender_TypeInfo->static_fields->nameList;
      if ( !nameList )
        goto LABEL_18;
    }
    if ( v3 >= nameList->max_length )
    {
      v7 = sub_B70798(v4);
      sub_B70738(v7, 0LL);
    }
    v4 = (Gender_c *)nameList->m_Items[v3];
    if ( !v4 )
      goto LABEL_18;
    ++v3;
    if ( System_String__Equals_44745508((System_String_o *)v4, name, 0LL) )
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
  __int64 v6; // x0

  if ( (byte_4355AAB & 1) == 0 )
  {
    sub_B70694(&Gender_TypeInfo);
    byte_4355AAB = 1;
  }
  v3 = Gender_TypeInfo;
  if ( (BYTE3(Gender_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Gender_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Gender_TypeInfo);
    v3 = Gender_TypeInfo;
  }
  nameList = v3->static_fields->nameList;
  if ( !nameList )
    sub_B7076C(v3, method);
  if ( type - 1 >= nameList->max_length )
  {
    v6 = sub_B70798(v3);
    sub_B70738(v6, 0LL);
  }
  return nameList->m_Items[type - 1];
}


System_String_o *__fastcall Gender__ToString(Gender_o *this, const MethodInfo *method)
{
  int32_t type; // w19

  if ( (byte_4355AAF & 1) == 0 )
  {
    sub_B70694(&Gender_TypeInfo);
    byte_4355AAF = 1;
  }
  type = this->fields.type;
  if ( (BYTE3(Gender_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Gender_TypeInfo->_2.cctor_finished )
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