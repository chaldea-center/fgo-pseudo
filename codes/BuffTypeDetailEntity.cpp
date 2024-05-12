void __fastcall BuffTypeDetailEntity___ctor(BuffTypeDetailEntity_o *this, const MethodInfo *method)
{
  if ( (byte_438D80C & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_int___ctor__);
    byte_438D80C = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_21FB740 *)Method_DataEntityBase_int___ctor__);
}


bool __fastcall BuffTypeDetailEntity__CheckScript(
        BuffTypeDetailEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_438D807 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    byte_438D807 = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                       (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
                       (System_Xml_XmlQualifiedName_o *)key,
                       (const MethodInfo_2F7D86C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
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
  __int64 v7; // x1
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *script; // x0
  BuffTypeDetailEntity_o *v10; // x0
  System_String_o *v11; // x1
  System_String_o *v12; // x2
  const MethodInfo *v13; // x3

  v4 = defVal;
  if ( (byte_438D808 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_B775C4(&long_TypeInfo);
    byte_438D808 = 1;
  }
  if ( !BuffTypeDetailEntity__CheckScript(this, key, *(const MethodInfo **)&defVal) )
    return v4;
  script = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this->fields.script;
  if ( !script
    || (script = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                     script,
                                                                                     (System_Type_o *)key,
                                                                                     (const MethodInfo_2F7D534 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_B7769C(script, v7);
  }
  if ( script->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(script);
  sub_B77990(script);
  return (unsigned int)BuffTypeDetailEntity__GetScript_29614336(v10, v11, v12, v13);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall BuffTypeDetailEntity__GetScriptIntArray(
        BuffTypeDetailEntity_o *this,
        System_String_o *key,
        System_Int32_array *defValues,
        uint16_t separator,
        const MethodInfo *method)
{
  System_String_o *Script_29614336; // x21
  System_Char_array *v11; // x0
  System_Char_array *v12; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x19
  BuffTypeDetailEntity___c_c *v14; // x8
  struct BuffTypeDetailEntity___c_StaticFields *static_fields; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__3_0; // x20
  Il2CppObject *v17; // x21
  struct BuffTypeDetailEntity___c_StaticFields *v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x0
  __int64 v26; // x0

  if ( (byte_438D80A & 1) == 0 )
  {
    sub_B775C4(&char___TypeInfo);
    sub_B775C4(&Method_System_Linq_Enumerable_Select_string__int___);
    sub_B775C4(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_B775C4(&Method_System_Func_string__int___ctor__);
    sub_B775C4(&System_Func_string__int__TypeInfo);
    sub_B775C4(&Method_BuffTypeDetailEntity___c__GetScriptIntArray_b__3_0__);
    sub_B775C4(&BuffTypeDetailEntity___c_TypeInfo);
    byte_438D80A = 1;
  }
  Script_29614336 = BuffTypeDetailEntity__GetScript_29614336(this, key, 0LL, (const MethodInfo *)separator);
  if ( System_String__IsNullOrEmpty(Script_29614336, 0LL) )
    return defValues;
  v11 = (System_Char_array *)sub_B775DC(char___TypeInfo, 1LL);
  if ( !v11 )
    goto LABEL_17;
  v12 = v11;
  if ( !v11->max_length )
  {
    v26 = sub_B776C8(v11);
    sub_B77668(v26, 0LL);
  }
  v11->m_Items[2] = separator;
  if ( !Script_29614336 )
LABEL_17:
    sub_B7769C(v11, v12);
  v13 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(Script_29614336, v11, 0LL);
  v14 = BuffTypeDetailEntity___c_TypeInfo;
  if ( (BYTE3(BuffTypeDetailEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BuffTypeDetailEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BuffTypeDetailEntity___c_TypeInfo);
    v14 = BuffTypeDetailEntity___c_TypeInfo;
  }
  static_fields = v14->static_fields;
  _9__3_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( (BYTE3(v14->vtable._0_Equals.methodPtr) & 4) != 0 && !v14->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v14);
      static_fields = BuffTypeDetailEntity___c_TypeInfo->static_fields;
    }
    v17 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B77694(System_Func_string__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__3_0,
      v17,
      Method_BuffTypeDetailEntity___c__GetScriptIntArray_b__3_0__,
      (const MethodInfo_29E9E70 *)Method_System_Func_string__int___ctor__);
    v18 = BuffTypeDetailEntity___c_TypeInfo->static_fields;
    v18->__9__3_0 = (struct System_Func_string__int__o *)_9__3_0;
    sub_B77560(
      (BattleServantConfConponent_o *)&v18->__9__3_0,
      (System_Int32_array **)_9__3_0,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
  }
  v25 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                               v13,
                                                               (System_Func_TSource__TResult__o *)_9__3_0,
                                                               (const MethodInfo_1D38B10 *)Method_System_Linq_Enumerable_Select_string__int___);
  return System_Linq_Enumerable__ToArray_int_(
           v25,
           (const MethodInfo_1D3D440 *)Method_System_Linq_Enumerable_ToArray_int___);
}


System_String_o *__fastcall BuffTypeDetailEntity__GetScript_29614336(
        BuffTypeDetailEntity_o *this,
        System_String_o *key,
        System_String_o *defVal,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *script; // x0

  if ( (byte_438D809 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    byte_438D809 = 1;
  }
  if ( !BuffTypeDetailEntity__CheckScript(this, key, (const MethodInfo *)defVal) )
    return defVal;
  script = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this->fields.script;
  if ( !script
    || (script = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                     script,
                                                                                     (System_Type_o *)key,
                                                                                     (const MethodInfo_2F7D534 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_B7769C(script, v7);
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

  if ( (byte_438D80B & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_13101/*"ShowStateWarBoardEnemyEquip"*/);
    byte_438D80B = 1;
  }
  return BuffTypeDetailEntity__GetScript(this, (System_String_o *)StringLiteral_13101/*"ShowStateWarBoardEnemyEquip"*/, defVal, v3);
}


void __fastcall BuffTypeDetailEntity___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct BuffTypeDetailEntity___c_StaticFields *static_fields; // x0

  if ( (byte_4388544 & 1) == 0 )
  {
    sub_B775C4(&BuffTypeDetailEntity___c_TypeInfo);
    byte_4388544 = 1;
  }
  v1 = (Il2CppObject *)sub_B77694(BuffTypeDetailEntity___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = BuffTypeDetailEntity___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BuffTypeDetailEntity___c_o *)v1;
  sub_B77560(static_fields);
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