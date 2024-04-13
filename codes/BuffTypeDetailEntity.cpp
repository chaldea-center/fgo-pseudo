void __fastcall BuffTypeDetailEntity___ctor(BuffTypeDetailEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EA628 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_int___ctor__, (_DWORD)method, v2, v3);
    byte_42EA628 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_23FACBC *)Method_DataEntityBase_int___ctor__);
}


bool __fastcall BuffTypeDetailEntity__CheckScript(
        BuffTypeDetailEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_42EA623 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__,
      (_DWORD)key,
      (_DWORD)method,
      v3);
    byte_42EA623 = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                       (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
                       (System_Xml_XmlQualifiedName_o *)key,
                       (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)script;
}


int32_t __fastcall BuffTypeDetailEntity__CreatePrimaryKey(BuffTypeDetailEntity_o *this, const MethodInfo *method)
{
  return this->fields.buffType;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BuffTypeDetailEntity__GetScript(
        BuffTypeDetailEntity_o *this,
        System_String_o *key,
        int32_t defVal,
        const MethodInfo *method)
{
  int32_t v4; // w20
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  __int64 v10; // x1
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *script; // x0
  BuffTypeDetailEntity_o *v13; // x0
  System_String_o *v14; // x1
  System_String_o *v15; // x2
  const MethodInfo *v16; // x3

  v4 = defVal;
  if ( (byte_42EA624 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, (_DWORD)key, defVal, method);
    sub_B5D5C4(&long_TypeInfo, v7, v8, v9);
    byte_42EA624 = 1;
  }
  if ( !BuffTypeDetailEntity__CheckScript(this, key, *(const MethodInfo **)&defVal) )
    return v4;
  script = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this->fields.script;
  if ( !script
    || (script = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                     script,
                                                                                     (System_Type_o *)key,
                                                                                     (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_B5D69C(script, v10);
  }
  if ( script->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(script);
  v13 = (BuffTypeDetailEntity_o *)sub_B5D990(script);
  return (unsigned int)BuffTypeDetailEntity__GetScript_28586468(v13, v14, v15, v16);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall BuffTypeDetailEntity__GetScriptIntArray(
        BuffTypeDetailEntity_o *this,
        System_String_o *key,
        System_Int32_array *defValues,
        uint16_t separator,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  System_String_o *Script_28586468; // x21
  System_Char_array *v29; // x0
  System_Char_array *v30; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x19
  BuffTypeDetailEntity___c_c *v32; // x8
  struct BuffTypeDetailEntity___c_StaticFields *static_fields; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__3_0; // x20
  Il2CppObject *v35; // x21
  struct BuffTypeDetailEntity___c_StaticFields *v36; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v43; // x0
  __int64 v44; // x0

  if ( (byte_42EA626 & 1) == 0 )
  {
    sub_B5D5C4(&char___TypeInfo, (_DWORD)key, (_DWORD)defValues, separator);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Select_string__int___, v9, v10, v11);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_int___, v12, v13, v14);
    sub_B5D5C4(&Method_System_Func_string__int___ctor__, v15, v16, v17);
    sub_B5D5C4(&System_Func_string__int__TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_BuffTypeDetailEntity___c__GetScriptIntArray_b__3_0__, v21, v22, v23);
    sub_B5D5C4(&BuffTypeDetailEntity___c_TypeInfo, v24, v25, v26);
    byte_42EA626 = 1;
  }
  Script_28586468 = BuffTypeDetailEntity__GetScript_28586468(this, key, 0LL, (const MethodInfo *)separator);
  if ( System_String__IsNullOrEmpty(Script_28586468, 0LL) )
    return defValues;
  v29 = (System_Char_array *)sub_B5D5DC(char___TypeInfo, 1LL);
  if ( !v29 )
    goto LABEL_17;
  v30 = v29;
  if ( !v29->max_length )
  {
    v44 = sub_B5D6C8(v29);
    sub_B5D668(v44, 0LL);
  }
  v29->m_Items[2] = separator;
  if ( !Script_28586468 )
LABEL_17:
    sub_B5D69C(v29, v30);
  v31 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(Script_28586468, v29, 0LL);
  v32 = BuffTypeDetailEntity___c_TypeInfo;
  if ( (BYTE3(BuffTypeDetailEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BuffTypeDetailEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BuffTypeDetailEntity___c_TypeInfo);
    v32 = BuffTypeDetailEntity___c_TypeInfo;
  }
  static_fields = v32->static_fields;
  _9__3_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( (BYTE3(v32->vtable._0_Equals.methodPtr) & 4) != 0 && !v32->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v32);
      static_fields = BuffTypeDetailEntity___c_TypeInfo->static_fields;
    }
    v35 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_string__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__3_0,
      v35,
      Method_BuffTypeDetailEntity___c__GetScriptIntArray_b__3_0__,
      (const MethodInfo_2C2F87C *)Method_System_Func_string__int___ctor__);
    v36 = BuffTypeDetailEntity___c_TypeInfo->static_fields;
    v36->__9__3_0 = (struct System_Func_string__int__o *)_9__3_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v36->__9__3_0,
      (System_Int32_array **)_9__3_0,
      v37,
      v38,
      v39,
      v40,
      v41,
      v42);
  }
  v43 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                               v31,
                                                               (System_Func_TSource__TResult__o *)_9__3_0,
                                                               (const MethodInfo_1CB2FF4 *)Method_System_Linq_Enumerable_Select_string__int___);
  return System_Linq_Enumerable__ToArray_int_(
           v43,
           (const MethodInfo_1CB76BC *)Method_System_Linq_Enumerable_ToArray_int___);
}


System_String_o *__fastcall BuffTypeDetailEntity__GetScript_28586468(
        BuffTypeDetailEntity_o *this,
        System_String_o *key,
        System_String_o *defVal,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *script; // x0

  if ( (byte_42EA625 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__object__get_Item__,
      (_DWORD)key,
      (_DWORD)defVal,
      method);
    byte_42EA625 = 1;
  }
  if ( !BuffTypeDetailEntity__CheckScript(this, key, (const MethodInfo *)defVal) )
    return defVal;
  script = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this->fields.script;
  if ( !script
    || (script = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                     script,
                                                                                     (System_Type_o *)key,
                                                                                     (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_B5D69C(script, v7);
  }
  return (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_Type__IStoreExtension__o *, Il2CppMethodPointer))script->klass->vtable._3_ToString.method)(
                              script,
                              script->klass->vtable._4_unknown.methodPtr);
}


int32_t __fastcall BuffTypeDetailEntity__GetShowStateWarBoardEnemyEquip(
        BuffTypeDetailEntity_o *this,
        int32_t defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_42EA627 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_13014/*"ShowStateWarBoardEnemyEquip"*/, defVal, (_DWORD)method, v3);
    byte_42EA627 = 1;
  }
  return BuffTypeDetailEntity__GetScript(this, (System_String_o *)StringLiteral_13014/*"ShowStateWarBoardEnemyEquip"*/, defVal, v3);
}


void __fastcall BuffTypeDetailEntity___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct BuffTypeDetailEntity___c_StaticFields *static_fields; // x0

  if ( (byte_42E5E3A & 1) == 0 )
  {
    sub_B5D5C4(&BuffTypeDetailEntity___c_TypeInfo, v1, v2, v3);
    byte_42E5E3A = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(BuffTypeDetailEntity___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = BuffTypeDetailEntity___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BuffTypeDetailEntity___c_o *)v4;
  sub_B5D560(static_fields);
}


void __fastcall BuffTypeDetailEntity___c___ctor(BuffTypeDetailEntity___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall BuffTypeDetailEntity___c___GetScriptIntArray_b__3_0(
        BuffTypeDetailEntity___c_o *this,
        System_String_o *a,
        const MethodInfo *method)
{
  return System_Int32__Parse(a, 0LL);
}