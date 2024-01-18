void __fastcall BuffTypeDetailEntity___ctor(BuffTypeDetailEntity_o *this, const MethodInfo *method)
{
  if ( (byte_418976E & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_int___ctor__, method);
    byte_418976E = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_24E3F7C *)Method_DataEntityBase_int___ctor__);
}


bool __fastcall BuffTypeDetailEntity__CheckScript(
        BuffTypeDetailEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_4189769 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    byte_4189769 = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                       (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
                       (System_Xml_XmlQualifiedName_o *)key,
                       (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
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
  __int64 v8; // x1
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *script; // x0
  BuffTypeDetailEntity_o *v11; // x0
  System_String_o *v12; // x1
  System_String_o *v13; // x2
  const MethodInfo *v14; // x3

  v4 = defVal;
  if ( (byte_418976A & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, key);
    sub_B2C35C(&long_TypeInfo, v7);
    byte_418976A = 1;
  }
  if ( !BuffTypeDetailEntity__CheckScript(this, key, *(const MethodInfo **)&defVal) )
    return v4;
  script = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this->fields.script;
  if ( !script
    || (script = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                     script,
                                                                                     (System_Type_o *)key,
                                                                                     (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_B2C434(script, v8);
  }
  if ( script->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(script);
  v11 = (BuffTypeDetailEntity_o *)sub_B2C728(script);
  return (unsigned int)BuffTypeDetailEntity__GetScript_28370784(v11, v12, v13, v14);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall BuffTypeDetailEntity__GetScriptIntArray(
        BuffTypeDetailEntity_o *this,
        System_String_o *key,
        System_Int32_array *defValues,
        uint16_t separator,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_String_o *Script_28370784; // x21
  System_Char_array *v17; // x0
  System_Char_array *v18; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x19
  BuffTypeDetailEntity___c_c *v20; // x8
  struct BuffTypeDetailEntity___c_StaticFields *static_fields; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__3_0; // x20
  Il2CppObject *v23; // x21
  struct BuffTypeDetailEntity___c_StaticFields *v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x0
  __int64 v32; // x0

  if ( (byte_418976C & 1) == 0 )
  {
    sub_B2C35C(&char___TypeInfo, key);
    sub_B2C35C(&Method_System_Linq_Enumerable_Select_string__int___, v9);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_int___, v10);
    sub_B2C35C(&Method_System_Func_string__int___ctor__, v11);
    sub_B2C35C(&System_Func_string__int__TypeInfo, v12);
    sub_B2C35C(&Method_BuffTypeDetailEntity___c__GetScriptIntArray_b__3_0__, v13);
    sub_B2C35C(&BuffTypeDetailEntity___c_TypeInfo, v14);
    byte_418976C = 1;
  }
  Script_28370784 = BuffTypeDetailEntity__GetScript_28370784(this, key, 0LL, (const MethodInfo *)separator);
  if ( System_String__IsNullOrEmpty(Script_28370784, 0LL) )
    return defValues;
  v17 = (System_Char_array *)sub_B2C374(char___TypeInfo, 1LL);
  if ( !v17 )
    goto LABEL_17;
  v18 = v17;
  if ( !v17->max_length )
  {
    v32 = sub_B2C460(v17);
    sub_B2C400(v32, 0LL);
  }
  v17->m_Items[2] = separator;
  if ( !Script_28370784 )
LABEL_17:
    sub_B2C434(v17, v18);
  v19 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(Script_28370784, v17, 0LL);
  v20 = BuffTypeDetailEntity___c_TypeInfo;
  if ( (BYTE3(BuffTypeDetailEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BuffTypeDetailEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BuffTypeDetailEntity___c_TypeInfo);
    v20 = BuffTypeDetailEntity___c_TypeInfo;
  }
  static_fields = v20->static_fields;
  _9__3_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( (BYTE3(v20->vtable._0_Equals.methodPtr) & 4) != 0 && !v20->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v20);
      static_fields = BuffTypeDetailEntity___c_TypeInfo->static_fields;
    }
    v23 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B2C42C(System_Func_string__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__3_0,
      v23,
      Method_BuffTypeDetailEntity___c__GetScriptIntArray_b__3_0__,
      (const MethodInfo_27127B0 *)Method_System_Func_string__int___ctor__);
    v24 = BuffTypeDetailEntity___c_TypeInfo->static_fields;
    v24->__9__3_0 = (struct System_Func_string__int__o *)_9__3_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v24->__9__3_0,
      (System_Int32_array **)_9__3_0,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
  }
  v31 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                               v19,
                                                               (System_Func_TSource__TResult__o *)_9__3_0,
                                                               (const MethodInfo_1A967E8 *)Method_System_Linq_Enumerable_Select_string__int___);
  return System_Linq_Enumerable__ToArray_int_(
           v31,
           (const MethodInfo_1A9AE24 *)Method_System_Linq_Enumerable_ToArray_int___);
}


System_String_o *__fastcall BuffTypeDetailEntity__GetScript_28370784(
        BuffTypeDetailEntity_o *this,
        System_String_o *key,
        System_String_o *defVal,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *script; // x0

  if ( (byte_418976B & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, key);
    byte_418976B = 1;
  }
  if ( !BuffTypeDetailEntity__CheckScript(this, key, (const MethodInfo *)defVal) )
    return defVal;
  script = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this->fields.script;
  if ( !script
    || (script = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                     script,
                                                                                     (System_Type_o *)key,
                                                                                     (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_B2C434(script, v7);
  }
  return (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_Type__IStoreExtension__o *, Il2CppMethodPointer))script->klass->vtable._3_ToString.method)(
                              script,
                              script->klass->vtable._4_unknown.methodPtr);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BuffTypeDetailEntity__GetShowStateWarBoardEnemyEquip(
        BuffTypeDetailEntity_o *this,
        int32_t defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_418976D & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_12858/*"ShowStateWarBoardEnemyEquip"*/, *(_QWORD *)&defVal);
    byte_418976D = 1;
  }
  return BuffTypeDetailEntity__GetScript(this, (System_String_o *)StringLiteral_12858/*"ShowStateWarBoardEnemyEquip"*/, defVal, v3);
}


void __fastcall BuffTypeDetailEntity___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct BuffTypeDetailEntity___c_StaticFields *static_fields; // x0

  if ( (byte_4184EB2 & 1) == 0 )
  {
    sub_B2C35C(&BuffTypeDetailEntity___c_TypeInfo, v1);
    byte_4184EB2 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(BuffTypeDetailEntity___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = BuffTypeDetailEntity___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BuffTypeDetailEntity___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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