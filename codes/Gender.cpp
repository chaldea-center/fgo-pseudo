void __fastcall Gender___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  __int64 v16; // x0
  __int64 v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Int32_array **v24; // x19
  __int64 v25; // x0
  System_Int32_array **v26; // x1
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Int32_array **v33; // x1
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_Int32_array **v40; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  __int64 v48; // x0
  __int64 v49; // x0

  if ( (byte_42EC666 & 1) == 0 )
  {
    sub_B5D5C4(&Gender_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&string___TypeInfo, v4, v5, v6);
    sub_B5D5C4(&StringLiteral_6410/*"FEMALE"*/, v7, v8, v9);
    sub_B5D5C4(&StringLiteral_9946/*"OTHER"*/, v10, v11, v12);
    sub_B5D5C4(&StringLiteral_8704/*"MALE"*/, v13, v14, v15);
    byte_42EC666 = 1;
  }
  v16 = sub_B5D5DC(string___TypeInfo, 3LL);
  if ( !v16 )
    sub_B5D69C(0LL, v17);
  v24 = (System_Int32_array **)v16;
  v25 = StringLiteral_8704/*"MALE"*/;
  if ( StringLiteral_8704/*"MALE"*/ )
  {
    v25 = sub_B5D684(StringLiteral_8704/*"MALE"*/, *(_QWORD *)&(*v24)->m_Items[9]);
    if ( !v25 )
      goto LABEL_21;
    v26 = (System_Int32_array **)StringLiteral_8704/*"MALE"*/;
  }
  else
  {
    v26 = 0LL;
  }
  if ( !*((_DWORD *)v24 + 6) )
    goto LABEL_20;
  v24[4] = (System_Int32_array *)v26;
  sub_B5D560((BattleServantConfConponent_o *)(v24 + 4), v26, v18, v19, v20, v21, v22, v23);
  v25 = StringLiteral_6410/*"FEMALE"*/;
  if ( StringLiteral_6410/*"FEMALE"*/ )
  {
    v25 = sub_B5D684(StringLiteral_6410/*"FEMALE"*/, *(_QWORD *)&(*v24)->m_Items[9]);
    if ( !v25 )
      goto LABEL_21;
    v33 = (System_Int32_array **)StringLiteral_6410/*"FEMALE"*/;
  }
  else
  {
    v33 = 0LL;
  }
  if ( *((_DWORD *)v24 + 6) <= 1u )
    goto LABEL_20;
  v24[5] = (System_Int32_array *)v33;
  sub_B5D560((BattleServantConfConponent_o *)(v24 + 5), v33, v27, v28, v29, v30, v31, v32);
  v25 = StringLiteral_9946/*"OTHER"*/;
  if ( StringLiteral_9946/*"OTHER"*/ )
  {
    v25 = sub_B5D684(StringLiteral_9946/*"OTHER"*/, *(_QWORD *)&(*v24)->m_Items[9]);
    if ( v25 )
    {
      v40 = (System_Int32_array **)StringLiteral_9946/*"OTHER"*/;
      goto LABEL_18;
    }
LABEL_21:
    v49 = sub_B5D6BC(v25);
    sub_B5D668(v49, 0LL);
  }
  v40 = 0LL;
LABEL_18:
  if ( *((_DWORD *)v24 + 6) <= 2u )
  {
LABEL_20:
    v48 = sub_B5D6C8(v25);
    sub_B5D668(v48, 0LL);
  }
  v24[6] = (System_Int32_array *)v40;
  sub_B5D560((BattleServantConfConponent_o *)(v24 + 6), v40, v34, v35, v36, v37, v38, v39);
  static_fields = (BattleServantConfConponent_o *)Gender_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v24;
  sub_B5D560(static_fields, v24, v42, v43, v44, v45, v46, v47);
}


void __fastcall Gender___ctor(Gender_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.type = 3;
}


void __fastcall Gender___ctor_32445112(Gender_o *this, int32_t type, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.type = type;
}


void __fastcall Gender___ctor_32445156(Gender_o *this, System_String_o *name, const MethodInfo *method)
{
  __int64 v3; // x3
  const MethodInfo *v6; // x1

  if ( (byte_42EC663 & 1) == 0 )
  {
    sub_B5D5C4(&Gender_TypeInfo, (_DWORD)name, (_DWORD)method, v3);
    byte_42EC663 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( (BYTE3(Gender_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Gender_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Gender_TypeInfo);
  this->fields.type = Gender__Parse(name, v6);
}


int32_t __fastcall Gender__Get(Gender_o *this, const MethodInfo *method)
{
  return this->fields.type;
}


int32_t __fastcall Gender__Parse(System_String_o *name, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int32_t v5; // w20
  Gender_c *v6; // x0
  struct System_String_array *nameList; // x8
  __int64 v9; // x0

  if ( (byte_42EC661 & 1) == 0 )
  {
    sub_B5D5C4(&Gender_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EC661 = 1;
  }
  v5 = 0;
  while ( 1 )
  {
    v6 = Gender_TypeInfo;
    if ( (BYTE3(Gender_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Gender_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Gender_TypeInfo);
      v6 = Gender_TypeInfo;
    }
    nameList = v6->static_fields->nameList;
    if ( !nameList )
LABEL_18:
      sub_B5D69C(v6, method);
    if ( v5 >= (signed int)nameList->max_length )
      return 3;
    if ( (BYTE3(v6->vtable._0_Equals.methodPtr) & 4) != 0 && !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      nameList = Gender_TypeInfo->static_fields->nameList;
      if ( !nameList )
        goto LABEL_18;
    }
    if ( v5 >= nameList->max_length )
    {
      v9 = sub_B5D6C8(v6);
      sub_B5D668(v9, 0LL);
    }
    v6 = (Gender_c *)nameList->m_Items[v5];
    if ( !v6 )
      goto LABEL_18;
    ++v5;
    if ( System_String__Equals_44565128((System_String_o *)v6, name, 0LL) )
      return v5;
  }
}


void __fastcall Gender__Set(Gender_o *this, int32_t type, const MethodInfo *method)
{
  this->fields.type = type;
}


void __fastcall Gender__Set_32445424(Gender_o *this, System_String_o *name, const MethodInfo *method)
{
  __int64 v3; // x3

  if ( (byte_42EC665 & 1) == 0 )
  {
    sub_B5D5C4(&Gender_TypeInfo, (_DWORD)name, (_DWORD)method, v3);
    byte_42EC665 = 1;
  }
  if ( (BYTE3(Gender_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Gender_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Gender_TypeInfo);
  this->fields.type = Gender__Parse(name, (const MethodInfo *)name);
}


int32_t __fastcall Gender__ToData(System_String_o *name, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int32_t v5; // w20
  Gender_c *v6; // x0
  struct System_String_array *nameList; // x8
  __int64 v9; // x0

  if ( (byte_42EC662 & 1) == 0 )
  {
    sub_B5D5C4(&Gender_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EC662 = 1;
  }
  v5 = 0;
  while ( 1 )
  {
    v6 = Gender_TypeInfo;
    if ( (BYTE3(Gender_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Gender_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Gender_TypeInfo);
      v6 = Gender_TypeInfo;
    }
    nameList = v6->static_fields->nameList;
    if ( !nameList )
LABEL_18:
      sub_B5D69C(v6, method);
    if ( v5 >= (signed int)nameList->max_length )
      return 3;
    if ( (BYTE3(v6->vtable._0_Equals.methodPtr) & 4) != 0 && !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      nameList = Gender_TypeInfo->static_fields->nameList;
      if ( !nameList )
        goto LABEL_18;
    }
    if ( v5 >= nameList->max_length )
    {
      v9 = sub_B5D6C8(v6);
      sub_B5D668(v9, 0LL);
    }
    v6 = (Gender_c *)nameList->m_Items[v5];
    if ( !v6 )
      goto LABEL_18;
    ++v5;
    if ( System_String__Equals_44565128((System_String_o *)v6, name, 0LL) )
      return v5;
  }
}


int32_t __fastcall Gender__ToInteger(Gender_o *this, const MethodInfo *method)
{
  return this->fields.type;
}


System_String_o *__fastcall Gender__ToName(int32_t type, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  Gender_c *v5; // x0
  struct System_String_array *nameList; // x8
  __int64 v8; // x0

  if ( (byte_42EC660 & 1) == 0 )
  {
    sub_B5D5C4(&Gender_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EC660 = 1;
  }
  v5 = Gender_TypeInfo;
  if ( (BYTE3(Gender_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Gender_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Gender_TypeInfo);
    v5 = Gender_TypeInfo;
  }
  nameList = v5->static_fields->nameList;
  if ( !nameList )
    sub_B5D69C(v5, method);
  if ( type - 1 >= nameList->max_length )
  {
    v8 = sub_B5D6C8(v5);
    sub_B5D668(v8, 0LL);
  }
  return nameList->m_Items[type - 1];
}


System_String_o *__fastcall Gender__ToString(Gender_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int32_t type; // w19

  if ( (byte_42EC664 & 1) == 0 )
  {
    sub_B5D5C4(&Gender_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EC664 = 1;
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