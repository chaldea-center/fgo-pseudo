void __fastcall Gender___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_Int32_array **v14; // x19
  __int64 v15; // x0
  System_Int32_array **v16; // x1
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Int32_array **v23; // x1
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_Int32_array **v30; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  __int64 v38; // x0
  __int64 v39; // x0

  if ( (byte_418B040 & 1) == 0 )
  {
    sub_B2C35C(&Gender_TypeInfo, v1);
    sub_B2C35C(&string___TypeInfo, v2);
    sub_B2C35C(&StringLiteral_6331/*"FEMALE"*/, v3);
    sub_B2C35C(&StringLiteral_9840/*"OTHER"*/, v4);
    sub_B2C35C(&StringLiteral_8617/*"MALE"*/, v5);
    byte_418B040 = 1;
  }
  v6 = sub_B2C374(string___TypeInfo, 3LL);
  if ( !v6 )
    sub_B2C434(0LL, v7);
  v14 = (System_Int32_array **)v6;
  v15 = StringLiteral_8617/*"MALE"*/;
  if ( StringLiteral_8617/*"MALE"*/ )
  {
    v15 = sub_B2C41C(StringLiteral_8617/*"MALE"*/, *(_QWORD *)&(*v14)->m_Items[9]);
    if ( !v15 )
      goto LABEL_21;
    v16 = (System_Int32_array **)StringLiteral_8617/*"MALE"*/;
  }
  else
  {
    v16 = 0LL;
  }
  if ( !*((_DWORD *)v14 + 6) )
    goto LABEL_20;
  v14[4] = (System_Int32_array *)v16;
  sub_B2C2F8((BattleServantConfConponent_o *)(v14 + 4), v16, v8, v9, v10, v11, v12, v13);
  v15 = StringLiteral_6331/*"FEMALE"*/;
  if ( StringLiteral_6331/*"FEMALE"*/ )
  {
    v15 = sub_B2C41C(StringLiteral_6331/*"FEMALE"*/, *(_QWORD *)&(*v14)->m_Items[9]);
    if ( !v15 )
      goto LABEL_21;
    v23 = (System_Int32_array **)StringLiteral_6331/*"FEMALE"*/;
  }
  else
  {
    v23 = 0LL;
  }
  if ( *((_DWORD *)v14 + 6) <= 1u )
    goto LABEL_20;
  v14[5] = (System_Int32_array *)v23;
  sub_B2C2F8((BattleServantConfConponent_o *)(v14 + 5), v23, v17, v18, v19, v20, v21, v22);
  v15 = StringLiteral_9840/*"OTHER"*/;
  if ( StringLiteral_9840/*"OTHER"*/ )
  {
    v15 = sub_B2C41C(StringLiteral_9840/*"OTHER"*/, *(_QWORD *)&(*v14)->m_Items[9]);
    if ( v15 )
    {
      v30 = (System_Int32_array **)StringLiteral_9840/*"OTHER"*/;
      goto LABEL_18;
    }
LABEL_21:
    v39 = sub_B2C454(v15);
    sub_B2C400(v39, 0LL);
  }
  v30 = 0LL;
LABEL_18:
  if ( *((_DWORD *)v14 + 6) <= 2u )
  {
LABEL_20:
    v38 = sub_B2C460(v15);
    sub_B2C400(v38, 0LL);
  }
  v14[6] = (System_Int32_array *)v30;
  sub_B2C2F8((BattleServantConfConponent_o *)(v14 + 6), v30, v24, v25, v26, v27, v28, v29);
  static_fields = (BattleServantConfConponent_o *)Gender_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v14;
  sub_B2C2F8(static_fields, v14, v32, v33, v34, v35, v36, v37);
}


void __fastcall Gender___ctor(Gender_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.type = 3;
}


void __fastcall Gender___ctor_31340540(Gender_o *this, int32_t type, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.type = type;
}


void __fastcall Gender___ctor_31340584(Gender_o *this, System_String_o *name, const MethodInfo *method)
{
  const MethodInfo *v5; // x1

  if ( (byte_418B03D & 1) == 0 )
  {
    sub_B2C35C(&Gender_TypeInfo, name);
    byte_418B03D = 1;
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

  if ( (byte_418B03B & 1) == 0 )
  {
    sub_B2C35C(&Gender_TypeInfo, method);
    byte_418B03B = 1;
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
      sub_B2C434(v4, method);
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
      v7 = sub_B2C460(v4);
      sub_B2C400(v7, 0LL);
    }
    v4 = (Gender_c *)nameList->m_Items[v3];
    if ( !v4 )
      goto LABEL_18;
    ++v3;
    if ( System_String__Equals_44292872((System_String_o *)v4, name, 0LL) )
      return v3;
  }
}


void __fastcall Gender__Set(Gender_o *this, int32_t type, const MethodInfo *method)
{
  this->fields.type = type;
}


void __fastcall Gender__Set_31340852(Gender_o *this, System_String_o *name, const MethodInfo *method)
{
  if ( (byte_418B03F & 1) == 0 )
  {
    sub_B2C35C(&Gender_TypeInfo, name);
    byte_418B03F = 1;
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

  if ( (byte_418B03C & 1) == 0 )
  {
    sub_B2C35C(&Gender_TypeInfo, method);
    byte_418B03C = 1;
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
      sub_B2C434(v4, method);
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
      v7 = sub_B2C460(v4);
      sub_B2C400(v7, 0LL);
    }
    v4 = (Gender_c *)nameList->m_Items[v3];
    if ( !v4 )
      goto LABEL_18;
    ++v3;
    if ( System_String__Equals_44292872((System_String_o *)v4, name, 0LL) )
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

  if ( (byte_418B03A & 1) == 0 )
  {
    sub_B2C35C(&Gender_TypeInfo, method);
    byte_418B03A = 1;
  }
  v3 = Gender_TypeInfo;
  if ( (BYTE3(Gender_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Gender_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Gender_TypeInfo);
    v3 = Gender_TypeInfo;
  }
  nameList = v3->static_fields->nameList;
  if ( !nameList )
    sub_B2C434(v3, method);
  if ( type - 1 >= nameList->max_length )
  {
    v6 = sub_B2C460(v3);
    sub_B2C400(v6, 0LL);
  }
  return nameList->m_Items[type - 1];
}


System_String_o *__fastcall Gender__ToString(Gender_o *this, const MethodInfo *method)
{
  int32_t type; // w19

  if ( (byte_418B03E & 1) == 0 )
  {
    sub_B2C35C(&Gender_TypeInfo, method);
    byte_418B03E = 1;
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