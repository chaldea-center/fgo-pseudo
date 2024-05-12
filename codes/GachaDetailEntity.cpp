void __fastcall GachaDetailEntity___ctor(GachaDetailEntity_o *this, const MethodInfo *method)
{
  if ( (byte_438F14C & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_int___ctor__);
    byte_438F14C = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_21FB740 *)Method_DataEntityBase_int___ctor__);
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
  if ( (byte_438F14A & 1) == 0 )
  {
    sub_B775C4(&long_TypeInfo);
    byte_438F14A = 1;
  }
  ScriptObj = GachaDetailEntity__GetScriptObj(this, key, *(const MethodInfo **)&defVal);
  if ( !ScriptObj )
    return v4;
  if ( ScriptObj->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(ScriptObj);
  sub_B77990(ScriptObj);
  return (unsigned int)GachaDetailEntity__GetScriptIntArray(v9, v10, v11, v12);
}


System_Int32_array *__fastcall GachaDetailEntity__GetScriptIntArray(
        GachaDetailEntity_o *this,
        System_String_o *key,
        System_Int32_array *defVal,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ScriptObjList; // x0
  System_Collections_Generic_List_BattleActionData_HealData__o *v8; // x19
  GachaDetailEntity___c_c *v9; // x0
  struct GachaDetailEntity___c_StaticFields *static_fields; // x8
  System_Converter_BattleActionData_HealData__int__o *_9__8_0; // x20
  Il2CppObject *v12; // x21
  struct GachaDetailEntity___c_StaticFields *v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Collections_Generic_List_int__o *v20; // x0
  __int64 v21; // x1

  if ( (byte_438F14B & 1) == 0 )
  {
    sub_B775C4(&Method_System_Converter_object__int___ctor__);
    sub_B775C4(&System_Converter_object__int__TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_object__ConvertAll_int___);
    sub_B775C4(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B775C4(&Method_GachaDetailEntity___c__GetScriptIntArray_b__8_0__);
    sub_B775C4(&GachaDetailEntity___c_TypeInfo);
    byte_438F14B = 1;
  }
  ScriptObjList = GachaDetailEntity__GetScriptObjList(this, key, (const MethodInfo *)defVal);
  if ( !ScriptObjList )
    return defVal;
  v8 = (System_Collections_Generic_List_BattleActionData_HealData__o *)ScriptObjList;
  v9 = GachaDetailEntity___c_TypeInfo;
  if ( (BYTE3(GachaDetailEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !GachaDetailEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaDetailEntity___c_TypeInfo);
    v9 = GachaDetailEntity___c_TypeInfo;
  }
  static_fields = v9->static_fields;
  _9__8_0 = (System_Converter_BattleActionData_HealData__int__o *)static_fields->__9__8_0;
  if ( !_9__8_0 )
  {
    if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      static_fields = GachaDetailEntity___c_TypeInfo->static_fields;
    }
    v12 = (Il2CppObject *)static_fields->__9;
    _9__8_0 = (System_Converter_BattleActionData_HealData__int__o *)sub_B77694(System_Converter_object__int__TypeInfo);
    System_Converter_BattleActionData_HealData__int____ctor(
      _9__8_0,
      v12,
      Method_GachaDetailEntity___c__GetScriptIntArray_b__8_0__,
      (const MethodInfo_21F7A30 *)Method_System_Converter_object__int___ctor__);
    v13 = GachaDetailEntity___c_TypeInfo->static_fields;
    v13->__9__8_0 = (struct System_Converter_object__int__o *)_9__8_0;
    sub_B77560(
      (BattleServantConfConponent_o *)&v13->__9__8_0,
      (System_Int32_array **)_9__8_0,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
  }
  v20 = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_BattleActionData_HealData___ConvertAll_int_(
                                                    v8,
                                                    (System_Converter_T__TOutput__o *)_9__8_0,
                                                    (const MethodInfo_19AECA8 *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
  if ( !v20 )
    sub_B7769C(0LL, v21);
  return System_Collections_Generic_List_int___ToArray(
           v20,
           (const MethodInfo_30E7EF4 *)Method_System_Collections_Generic_List_int__ToArray__);
}


Il2CppObject *__fastcall GachaDetailEntity__GetScriptObj(
        GachaDetailEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  Il2CppObject *result; // x0
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_438F148 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    byte_438F148 = 1;
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
           (const MethodInfo_2F7F3F8 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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

  if ( (byte_438F149 & 1) == 0 )
  {
    sub_B775C4(&System_Collections_Generic_List_object__TypeInfo);
    byte_438F149 = 1;
  }
  result = (System_Collections_Generic_List_object__o *)GachaDetailEntity__GetScriptObj(this, key, method);
  if ( result )
  {
    v6 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
    if ( *(&result->klass->_2.bitflags2 + 1) < (unsigned int)v6
      || (System_Collections_Generic_List_object__c *)result->klass->_2.typeHierarchy[v6 - 1] != System_Collections_Generic_List_object__TypeInfo )
    {
      sub_B77990(result);
      return (System_Collections_Generic_List_object__o *)GachaDetailEntity__GetScriptInt(v7, v8, v9, v10);
    }
  }
  return result;
}


void __fastcall GachaDetailEntity___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct GachaDetailEntity___c_StaticFields *static_fields; // x0

  if ( (byte_43880A8 & 1) == 0 )
  {
    sub_B775C4(&GachaDetailEntity___c_TypeInfo);
    byte_43880A8 = 1;
  }
  v1 = (Il2CppObject *)sub_B77694(GachaDetailEntity___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = GachaDetailEntity___c_TypeInfo->static_fields;
  static_fields->__9 = (struct GachaDetailEntity___c_o *)v1;
  sub_B77560(static_fields);
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

  if ( (byte_43880A9 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_43880A9 = 1;
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