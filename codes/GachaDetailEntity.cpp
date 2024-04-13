void __fastcall GachaDetailEntity___ctor(GachaDetailEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EC5FF & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_int___ctor__, (_DWORD)method, v2, v3);
    byte_42EC5FF = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_23FACBC *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall GachaDetailEntity__CreatePrimaryKey(GachaDetailEntity_o *this, const MethodInfo *method)
{
  return this->fields.gachaId;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall GachaDetailEntity__GetScriptInt(
        GachaDetailEntity_o *this,
        System_String_o *key,
        int32_t defVal,
        const MethodInfo *method)
{
  int32_t v4; // w19
  Il2CppObject *ScriptObj; // x0
  GachaDetailEntity_o *v9; // x0
  System_String_o *v10; // x1
  System_Int32_array *v11; // x2
  const MethodInfo *v12; // x3

  v4 = defVal;
  if ( (byte_42EC5FD & 1) == 0 )
  {
    sub_B5D5C4(&long_TypeInfo, (_DWORD)key, defVal, method);
    byte_42EC5FD = 1;
  }
  ScriptObj = GachaDetailEntity__GetScriptObj(this, key, *(const MethodInfo **)&defVal);
  if ( !ScriptObj )
    return v4;
  if ( ScriptObj->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(ScriptObj);
  sub_B5D990(ScriptObj);
  return (unsigned int)GachaDetailEntity__GetScriptIntArray(v9, v10, v11, v12);
}


System_Int32_array *__fastcall GachaDetailEntity__GetScriptIntArray(
        GachaDetailEntity_o *this,
        System_String_o *key,
        System_Int32_array *defVal,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  System_Collections_Generic_List_object__o *ScriptObjList; // x0
  System_Collections_Generic_List_BattleActionData_HealData__o *v23; // x19
  GachaDetailEntity___c_c *v24; // x0
  struct GachaDetailEntity___c_StaticFields *static_fields; // x8
  System_Converter_BattleActionData_HealData__int__o *_9__8_0; // x20
  Il2CppObject *v27; // x21
  struct GachaDetailEntity___c_StaticFields *v28; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_Collections_Generic_List_int__o *v35; // x0
  __int64 v36; // x1

  if ( (byte_42EC5FE & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Converter_object__int___ctor__, (_DWORD)key, (_DWORD)defVal, method);
    sub_B5D5C4(&System_Converter_object__int__TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_object__ConvertAll_int___, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v13, v14, v15);
    sub_B5D5C4(&Method_GachaDetailEntity___c__GetScriptIntArray_b__8_0__, v16, v17, v18);
    sub_B5D5C4(&GachaDetailEntity___c_TypeInfo, v19, v20, v21);
    byte_42EC5FE = 1;
  }
  ScriptObjList = GachaDetailEntity__GetScriptObjList(this, key, (const MethodInfo *)defVal);
  if ( !ScriptObjList )
    return defVal;
  v23 = (System_Collections_Generic_List_BattleActionData_HealData__o *)ScriptObjList;
  v24 = GachaDetailEntity___c_TypeInfo;
  if ( (BYTE3(GachaDetailEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !GachaDetailEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaDetailEntity___c_TypeInfo);
    v24 = GachaDetailEntity___c_TypeInfo;
  }
  static_fields = v24->static_fields;
  _9__8_0 = (System_Converter_BattleActionData_HealData__int__o *)static_fields->__9__8_0;
  if ( !_9__8_0 )
  {
    if ( (BYTE3(v24->vtable._0_Equals.methodPtr) & 4) != 0 && !v24->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v24);
      static_fields = GachaDetailEntity___c_TypeInfo->static_fields;
    }
    v27 = (Il2CppObject *)static_fields->__9;
    _9__8_0 = (System_Converter_BattleActionData_HealData__int__o *)sub_B5D694(System_Converter_object__int__TypeInfo);
    System_Converter_BattleActionData_HealData__int____ctor(
      _9__8_0,
      v27,
      Method_GachaDetailEntity___c__GetScriptIntArray_b__8_0__,
      (const MethodInfo_23F6FAC *)Method_System_Converter_object__int___ctor__);
    v28 = GachaDetailEntity___c_TypeInfo->static_fields;
    v28->__9__8_0 = (struct System_Converter_object__int__o *)_9__8_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v28->__9__8_0,
      (System_Int32_array **)_9__8_0,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34);
  }
  v35 = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_BattleActionData_HealData___ConvertAll_int_(
                                                    v23,
                                                    (System_Converter_T__TOutput__o *)_9__8_0,
                                                    (const MethodInfo_192E0B4 *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
  if ( !v35 )
    sub_B5D69C(0LL, v36);
  return System_Collections_Generic_List_int___ToArray(
           v35,
           (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
}


Il2CppObject *__fastcall GachaDetailEntity__GetScriptObj(
        GachaDetailEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  __int64 v3; // x3
  Il2CppObject *result; // x0
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42EC5FB & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__,
      (_DWORD)key,
      (_DWORD)method,
      v3);
    byte_42EC5FB = 1;
  }
  value = 0LL;
  result = (Il2CppObject *)this->fields.script;
  if ( result )
  {
    value = 0LL;
    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)result,
           (System_Xml_XmlQualifiedName_o *)key,
           &value,
           (const MethodInfo_2F289BC *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      return (Il2CppObject *)value;
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}


System_Collections_Generic_List_object__o *__fastcall GachaDetailEntity__GetScriptObjList(
        GachaDetailEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Collections_Generic_List_object__o *result; // x0
  __int64 v7; // x9
  GachaDetailEntity_o *v8; // x0
  System_String_o *v9; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_42EC5FC & 1) == 0 )
  {
    sub_B5D5C4(&System_Collections_Generic_List_object__TypeInfo, (_DWORD)key, (_DWORD)method, v3);
    byte_42EC5FC = 1;
  }
  result = (System_Collections_Generic_List_object__o *)GachaDetailEntity__GetScriptObj(this, key, method);
  if ( result )
  {
    v7 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
    if ( *(&result->klass->_2.bitflags2 + 1) < (unsigned int)v7
      || (System_Collections_Generic_List_object__c *)result->klass->_2.typeHierarchy[v7 - 1] != System_Collections_Generic_List_object__TypeInfo )
    {
      sub_B5D990(result);
      return (System_Collections_Generic_List_object__o *)GachaDetailEntity__GetScriptInt(v8, v9, v10, v11);
    }
  }
  return result;
}


void __fastcall GachaDetailEntity___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct GachaDetailEntity___c_StaticFields *static_fields; // x0

  if ( (byte_42E56EC & 1) == 0 )
  {
    sub_B5D5C4(&GachaDetailEntity___c_TypeInfo, v1, v2, v3);
    byte_42E56EC = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(GachaDetailEntity___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = GachaDetailEntity___c_TypeInfo->static_fields;
  static_fields->__9 = (struct GachaDetailEntity___c_o *)v4;
  sub_B5D560(static_fields);
}


void __fastcall GachaDetailEntity___c___ctor(GachaDetailEntity___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall GachaDetailEntity___c___GetScriptIntArray_b__8_0(
        GachaDetailEntity___c_o *this,
        Il2CppObject *x,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_String_o *v5; // x0

  if ( (byte_42E56ED & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)x, (_DWORD)method, v3);
    byte_42E56ED = 1;
  }
  if ( x )
    v5 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer, const MethodInfo *))x->klass->vtable[3].method)(
                              x,
                              x->klass->vtable[4].methodPtr,
                              method);
  else
    v5 = 0LL;
  if ( !v5 )
    v5 = (System_String_o *)StringLiteral_1/*""*/;
  return System_Int32__Parse(v5, 0LL);
}