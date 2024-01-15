void __fastcall GachaDetailEntity___ctor(GachaDetailEntity_o *this, const MethodInfo *method)
{
  if ( (byte_40FB36C & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_int___ctor__, method);
    byte_40FB36C = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_266F234 *)Method_DataEntityBase_int___ctor__);
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
  if ( (byte_40FB36A & 1) == 0 )
  {
    sub_B16FFC(&long_TypeInfo, key);
    byte_40FB36A = 1;
  }
  ScriptObj = GachaDetailEntity__GetScriptObj(this, key, *(const MethodInfo **)&defVal);
  if ( !ScriptObj )
    return v4;
  if ( ScriptObj->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(ScriptObj);
  v9 = (GachaDetailEntity_o *)sub_B173C8(ScriptObj);
  return (unsigned int)GachaDetailEntity__GetScriptIntArray(v9, v10, v11, v12);
}


System_Int32_array *__fastcall GachaDetailEntity__GetScriptIntArray(
        GachaDetailEntity_o *this,
        System_String_o *key,
        System_Int32_array *defVal,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *ScriptObjList; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  System_Collections_Generic_List_BattleActionData_HealData__o *v17; // x19
  GachaDetailEntity___c_c *v18; // x0
  struct GachaDetailEntity___c_StaticFields *static_fields; // x8
  System_Converter_BattleActionData_HealData__int__o *_9__8_0; // x20
  Il2CppObject *v21; // x21
  struct GachaDetailEntity___c_StaticFields *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Collections_Generic_List_int__o *v29; // x0

  if ( (byte_40FB36B & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Converter_object__int___ctor__, key);
    sub_B16FFC(&System_Converter_object__int__TypeInfo, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_object__ConvertAll_int___, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v9);
    sub_B16FFC(&Method_GachaDetailEntity___c__GetScriptIntArray_b__8_0__, v10);
    sub_B16FFC(&GachaDetailEntity___c_TypeInfo, v11);
    byte_40FB36B = 1;
  }
  ScriptObjList = GachaDetailEntity__GetScriptObjList(this, key, (const MethodInfo *)defVal);
  if ( !ScriptObjList )
    return defVal;
  v17 = (System_Collections_Generic_List_BattleActionData_HealData__o *)ScriptObjList;
  v18 = GachaDetailEntity___c_TypeInfo;
  if ( (BYTE3(GachaDetailEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !GachaDetailEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaDetailEntity___c_TypeInfo);
    v18 = GachaDetailEntity___c_TypeInfo;
  }
  static_fields = v18->static_fields;
  _9__8_0 = (System_Converter_BattleActionData_HealData__int__o *)static_fields->__9__8_0;
  if ( !_9__8_0 )
  {
    if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 && !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      static_fields = GachaDetailEntity___c_TypeInfo->static_fields;
    }
    v21 = (Il2CppObject *)static_fields->__9;
    _9__8_0 = (System_Converter_BattleActionData_HealData__int__o *)sub_B170CC(
                                                                      System_Converter_object__int__TypeInfo,
                                                                      v13,
                                                                      v14,
                                                                      v15,
                                                                      v16);
    System_Converter_BattleActionData_HealData__int____ctor(
      _9__8_0,
      v21,
      Method_GachaDetailEntity___c__GetScriptIntArray_b__8_0__,
      (const MethodInfo_266B524 *)Method_System_Converter_object__int___ctor__);
    v22 = GachaDetailEntity___c_TypeInfo->static_fields;
    v22->__9__8_0 = (struct System_Converter_object__int__o *)_9__8_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v22->__9__8_0,
      (System_Int32_array **)_9__8_0,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
  }
  v29 = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_BattleActionData_HealData___ConvertAll_int_(
                                                    v17,
                                                    (System_Converter_T__TOutput__o *)_9__8_0,
                                                    (const MethodInfo_18FDCCC *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
  if ( !v29 )
    sub_B170D4();
  return System_Collections_Generic_List_int___ToArray(
           v29,
           (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
}


Il2CppObject *__fastcall GachaDetailEntity__GetScriptObj(
        GachaDetailEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  Il2CppObject *result; // x0
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40FB368 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, key);
    byte_40FB368 = 1;
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
           (const MethodInfo_2DA5A18 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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
  System_Collections_Generic_List_object__o *result; // x0
  __int64 v6; // x9
  GachaDetailEntity_o *v7; // x0
  System_String_o *v8; // x1
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_40FB369 & 1) == 0 )
  {
    sub_B16FFC(&System_Collections_Generic_List_object__TypeInfo, key);
    byte_40FB369 = 1;
  }
  result = (System_Collections_Generic_List_object__o *)GachaDetailEntity__GetScriptObj(this, key, method);
  if ( result )
  {
    v6 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
    if ( *(&result->klass->_2.bitflags2 + 1) < (unsigned int)v6
      || (System_Collections_Generic_List_object__c *)result->klass->_2.typeHierarchy[v6 - 1] != System_Collections_Generic_List_object__TypeInfo )
    {
      v7 = (GachaDetailEntity_o *)sub_B173C8(result);
      return (System_Collections_Generic_List_object__o *)GachaDetailEntity__GetScriptInt(v7, v8, v9, v10);
    }
  }
  return result;
}


void __fastcall GachaDetailEntity___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F68D3 & 1) == 0 )
  {
    sub_B16FFC(&GachaDetailEntity___c_TypeInfo, v1);
    byte_40F68D3 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(GachaDetailEntity___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)GachaDetailEntity___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
  System_String_o *v4; // x0

  if ( (byte_40F68D4 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1/*""*/, x);
    byte_40F68D4 = 1;
  }
  if ( x )
    v4 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer, const MethodInfo *))x->klass->vtable[3].method)(
                              x,
                              x->klass->vtable[4].methodPtr,
                              method);
  else
    v4 = 0LL;
  if ( !v4 )
    v4 = (System_String_o *)StringLiteral_1/*""*/;
  return System_Int32__Parse(v4, 0LL);
}