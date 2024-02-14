void __fastcall Gender___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_Int32_array **v13; // x19
  __int64 v14; // x0
  System_Int32_array **v15; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Int32_array **v22; // x1
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Int32_array **v29; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  __int64 v37; // x0
  __int64 v38; // x0

  if ( (byte_42180B9 & 1) == 0 )
  {
    sub_B0D8A4(&Gender_TypeInfo, v1);
    sub_B0D8A4(&string___TypeInfo, v2);
    sub_B0D8A4(&StringLiteral_6348/*"FEMALE"*/, v3);
    sub_B0D8A4(&StringLiteral_9864/*"OTHER"*/, v4);
    sub_B0D8A4(&StringLiteral_8639/*"MALE"*/, v5);
    byte_42180B9 = 1;
  }
  v6 = sub_B0D8BC(string___TypeInfo, 3LL);
  if ( !v6 )
    sub_B0D97C(0LL);
  v13 = (System_Int32_array **)v6;
  v14 = StringLiteral_8639/*"MALE"*/;
  if ( StringLiteral_8639/*"MALE"*/ )
  {
    v14 = sub_B0D964(StringLiteral_8639/*"MALE"*/, *(_QWORD *)&(*v13)->m_Items[9]);
    if ( !v14 )
      goto LABEL_21;
    v15 = (System_Int32_array **)StringLiteral_8639/*"MALE"*/;
  }
  else
  {
    v15 = 0LL;
  }
  if ( !*((_DWORD *)v13 + 6) )
    goto LABEL_20;
  v13[4] = (System_Int32_array *)v15;
  sub_B0D840((BattleServantConfConponent_o *)(v13 + 4), v15, v7, v8, v9, v10, v11, v12);
  v14 = StringLiteral_6348/*"FEMALE"*/;
  if ( StringLiteral_6348/*"FEMALE"*/ )
  {
    v14 = sub_B0D964(StringLiteral_6348/*"FEMALE"*/, *(_QWORD *)&(*v13)->m_Items[9]);
    if ( !v14 )
      goto LABEL_21;
    v22 = (System_Int32_array **)StringLiteral_6348/*"FEMALE"*/;
  }
  else
  {
    v22 = 0LL;
  }
  if ( *((_DWORD *)v13 + 6) <= 1u )
    goto LABEL_20;
  v13[5] = (System_Int32_array *)v22;
  sub_B0D840((BattleServantConfConponent_o *)(v13 + 5), v22, v16, v17, v18, v19, v20, v21);
  v14 = StringLiteral_9864/*"OTHER"*/;
  if ( StringLiteral_9864/*"OTHER"*/ )
  {
    v14 = sub_B0D964(StringLiteral_9864/*"OTHER"*/, *(_QWORD *)&(*v13)->m_Items[9]);
    if ( v14 )
    {
      v29 = (System_Int32_array **)StringLiteral_9864/*"OTHER"*/;
      goto LABEL_18;
    }
LABEL_21:
    v38 = sub_B0D99C(v14);
    sub_B0D948(v38, 0LL);
  }
  v29 = 0LL;
LABEL_18:
  if ( *((_DWORD *)v13 + 6) <= 2u )
  {
LABEL_20:
    v37 = sub_B0D9A8(v14);
    sub_B0D948(v37, 0LL);
  }
  v13[6] = (System_Int32_array *)v29;
  sub_B0D840((BattleServantConfConponent_o *)(v13 + 6), v29, v23, v24, v25, v26, v27, v28);
  static_fields = (BattleServantConfConponent_o *)Gender_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v13;
  sub_B0D840(static_fields, v13, v31, v32, v33, v34, v35, v36);
}


void __fastcall Gender___ctor(Gender_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.type = 3;
}


void __fastcall Gender___ctor_31193304(Gender_o *this, int32_t type, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.type = type;
}


void __fastcall Gender___ctor_31193348(Gender_o *this, System_String_o *name, const MethodInfo *method)
{
  const MethodInfo *v5; // x1

  if ( (byte_42180B6 & 1) == 0 )
  {
    sub_B0D8A4(&Gender_TypeInfo, name);
    byte_42180B6 = 1;
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

  if ( (byte_42180B4 & 1) == 0 )
  {
    sub_B0D8A4(&Gender_TypeInfo, method);
    byte_42180B4 = 1;
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
      sub_B0D97C(v4);
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
      v7 = sub_B0D9A8(v4);
      sub_B0D948(v7, 0LL);
    }
    v4 = (Gender_c *)nameList->m_Items[v3];
    if ( !v4 )
      goto LABEL_18;
    ++v3;
    if ( System_String__Equals_43837244((System_String_o *)v4, name, 0LL) )
      return v3;
  }
}


void __fastcall Gender__Set(Gender_o *this, int32_t type, const MethodInfo *method)
{
  this->fields.type = type;
}


void __fastcall Gender__Set_31193616(Gender_o *this, System_String_o *name, const MethodInfo *method)
{
  if ( (byte_42180B8 & 1) == 0 )
  {
    sub_B0D8A4(&Gender_TypeInfo, name);
    byte_42180B8 = 1;
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

  if ( (byte_42180B5 & 1) == 0 )
  {
    sub_B0D8A4(&Gender_TypeInfo, method);
    byte_42180B5 = 1;
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
      sub_B0D97C(v4);
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
      v7 = sub_B0D9A8(v4);
      sub_B0D948(v7, 0LL);
    }
    v4 = (Gender_c *)nameList->m_Items[v3];
    if ( !v4 )
      goto LABEL_18;
    ++v3;
    if ( System_String__Equals_43837244((System_String_o *)v4, name, 0LL) )
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

  if ( (byte_42180B3 & 1) == 0 )
  {
    sub_B0D8A4(&Gender_TypeInfo, method);
    byte_42180B3 = 1;
  }
  v3 = Gender_TypeInfo;
  if ( (BYTE3(Gender_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Gender_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Gender_TypeInfo);
    v3 = Gender_TypeInfo;
  }
  nameList = v3->static_fields->nameList;
  if ( !nameList )
    sub_B0D97C(v3);
  if ( type - 1 >= nameList->max_length )
  {
    v6 = sub_B0D9A8(v3);
    sub_B0D948(v6, 0LL);
  }
  return nameList->m_Items[type - 1];
}


System_String_o *__fastcall Gender__ToString(Gender_o *this, const MethodInfo *method)
{
  int32_t type; // w19

  if ( (byte_42180B7 & 1) == 0 )
  {
    sub_B0D8A4(&Gender_TypeInfo, method);
    byte_42180B7 = 1;
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