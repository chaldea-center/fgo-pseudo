void __fastcall Gender___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_Int32_array **v14; // x19
  __int64 v15; // x0
  System_Int32_array **v16; // x1
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7

  if ( (byte_40FF558 & 1) == 0 )
  {
    sub_B16FFC(&Gender_TypeInfo, v1);
    sub_B16FFC(&string___TypeInfo, v3);
    sub_B16FFC(&StringLiteral_6313, v4);
    sub_B16FFC(&StringLiteral_9808, v5);
    sub_B16FFC(&StringLiteral_8588, v6);
    byte_40FF558 = 1;
  }
  v7 = sub_B17014(string___TypeInfo, 3LL, v2);
  if ( !v7 )
    sub_B170D4();
  v14 = (System_Int32_array **)v7;
  v15 = StringLiteral_8588;
  if ( StringLiteral_8588 )
  {
    v15 = sub_B170BC(StringLiteral_8588, *(_QWORD *)&(*v14)->m_Items[9]);
    if ( !v15 )
      goto LABEL_21;
    v16 = (System_Int32_array **)StringLiteral_8588;
  }
  else
  {
    v16 = 0LL;
  }
  if ( !*((_DWORD *)v14 + 6) )
    goto LABEL_20;
  v14[4] = (System_Int32_array *)v16;
  sub_B16F98((BattleServantConfConponent_o *)(v14 + 4), v16, v8, v9, v10, v11, v12, v13);
  v15 = StringLiteral_6313;
  if ( StringLiteral_6313 )
  {
    v15 = sub_B170BC(StringLiteral_6313, *(_QWORD *)&(*v14)->m_Items[9]);
    if ( !v15 )
      goto LABEL_21;
    v16 = (System_Int32_array **)StringLiteral_6313;
  }
  else
  {
    v16 = 0LL;
  }
  if ( *((_DWORD *)v14 + 6) <= 1u )
    goto LABEL_20;
  v14[5] = (System_Int32_array *)v16;
  sub_B16F98((BattleServantConfConponent_o *)(v14 + 5), v16, v8, v17, v18, v19, v20, v21);
  v15 = StringLiteral_9808;
  if ( StringLiteral_9808 )
  {
    v15 = sub_B170BC(StringLiteral_9808, *(_QWORD *)&(*v14)->m_Items[9]);
    if ( v15 )
    {
      v16 = (System_Int32_array **)StringLiteral_9808;
      goto LABEL_18;
    }
LABEL_21:
    sub_B170F4(v15);
    sub_B170A0();
  }
  v16 = 0LL;
LABEL_18:
  if ( *((_DWORD *)v14 + 6) <= 2u )
  {
LABEL_20:
    sub_B17100(v15, v16, v8);
    sub_B170A0();
  }
  v14[6] = (System_Int32_array *)v16;
  sub_B16F98((BattleServantConfConponent_o *)(v14 + 6), v16, v8, v22, v23, v24, v25, v26);
  static_fields = (BattleServantConfConponent_o *)Gender_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v14;
  sub_B16F98(static_fields, v14, v28, v29, v30, v31, v32, v33);
}


void __fastcall Gender___ctor(Gender_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.type = 3;
}


void __fastcall Gender___ctor_34077204(Gender_o *this, int32_t type, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.type = type;
}


void __fastcall Gender___ctor_34077248(Gender_o *this, System_String_o *name, const MethodInfo *method)
{
  const MethodInfo *v5; // x1

  if ( (byte_40FF555 & 1) == 0 )
  {
    sub_B16FFC(&Gender_TypeInfo, name);
    byte_40FF555 = 1;
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
  __int64 v2; // x2
  int32_t v4; // w20
  Gender_c *v5; // x0
  struct System_String_array *nameList; // x8
  System_String_o *v7; // x0

  if ( (byte_40FF553 & 1) == 0 )
  {
    sub_B16FFC(&Gender_TypeInfo, method);
    byte_40FF553 = 1;
  }
  v4 = 0;
  while ( 1 )
  {
    v5 = Gender_TypeInfo;
    if ( (BYTE3(Gender_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Gender_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Gender_TypeInfo);
      v5 = Gender_TypeInfo;
    }
    nameList = v5->static_fields->nameList;
    if ( !nameList )
LABEL_18:
      sub_B170D4();
    if ( v4 >= (signed int)nameList->max_length )
      return 3;
    if ( (BYTE3(v5->vtable._0_Equals.methodPtr) & 4) != 0 && !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      nameList = Gender_TypeInfo->static_fields->nameList;
      if ( !nameList )
        goto LABEL_18;
    }
    if ( v4 >= nameList->max_length )
    {
      sub_B17100(v5, method, v2);
      sub_B170A0();
    }
    v7 = nameList->m_Items[v4];
    if ( !v7 )
      goto LABEL_18;
    ++v4;
    if ( System_String__Equals_43731072(v7, name, 0LL) )
      return v4;
  }
}


void __fastcall Gender__Set(Gender_o *this, int32_t type, const MethodInfo *method)
{
  this->fields.type = type;
}


void __fastcall Gender__Set_34077516(Gender_o *this, System_String_o *name, const MethodInfo *method)
{
  if ( (byte_40FF557 & 1) == 0 )
  {
    sub_B16FFC(&Gender_TypeInfo, name);
    byte_40FF557 = 1;
  }
  if ( (BYTE3(Gender_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Gender_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Gender_TypeInfo);
  this->fields.type = Gender__Parse(name, (const MethodInfo *)name);
}


int32_t __fastcall Gender__ToData(System_String_o *name, const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t v4; // w20
  Gender_c *v5; // x0
  struct System_String_array *nameList; // x8
  System_String_o *v7; // x0

  if ( (byte_40FF554 & 1) == 0 )
  {
    sub_B16FFC(&Gender_TypeInfo, method);
    byte_40FF554 = 1;
  }
  v4 = 0;
  while ( 1 )
  {
    v5 = Gender_TypeInfo;
    if ( (BYTE3(Gender_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Gender_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Gender_TypeInfo);
      v5 = Gender_TypeInfo;
    }
    nameList = v5->static_fields->nameList;
    if ( !nameList )
LABEL_18:
      sub_B170D4();
    if ( v4 >= (signed int)nameList->max_length )
      return 3;
    if ( (BYTE3(v5->vtable._0_Equals.methodPtr) & 4) != 0 && !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      nameList = Gender_TypeInfo->static_fields->nameList;
      if ( !nameList )
        goto LABEL_18;
    }
    if ( v4 >= nameList->max_length )
    {
      sub_B17100(v5, method, v2);
      sub_B170A0();
    }
    v7 = nameList->m_Items[v4];
    if ( !v7 )
      goto LABEL_18;
    ++v4;
    if ( System_String__Equals_43731072(v7, name, 0LL) )
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

  if ( (byte_40FF552 & 1) == 0 )
  {
    sub_B16FFC(&Gender_TypeInfo, method);
    byte_40FF552 = 1;
  }
  v4 = Gender_TypeInfo;
  if ( (BYTE3(Gender_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Gender_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Gender_TypeInfo);
    v4 = Gender_TypeInfo;
  }
  nameList = v4->static_fields->nameList;
  if ( !nameList )
    sub_B170D4();
  if ( type - 1 >= nameList->max_length )
  {
    sub_B17100(v4, method, v2);
    sub_B170A0();
  }
  return nameList->m_Items[type - 1];
}


System_String_o *__fastcall Gender__ToString(Gender_o *this, const MethodInfo *method)
{
  int32_t type; // w19

  if ( (byte_40FF556 & 1) == 0 )
  {
    sub_B16FFC(&Gender_TypeInfo, method);
    byte_40FF556 = 1;
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