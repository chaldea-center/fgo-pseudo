void __fastcall BuffTypeDetailEntity___ctor(BuffTypeDetailEntity_o *this, const MethodInfo *method)
{
  if ( (byte_40FB4FD & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_int___ctor__, method);
    byte_40FB4FD = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_266F234 *)Method_DataEntityBase_int___ctor__);
}


bool __fastcall BuffTypeDetailEntity__CheckScript(
        BuffTypeDetailEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_40FB4F8 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    byte_40FB4F8 = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                       (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
                       (System_Xml_XmlQualifiedName_o *)key,
                       (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
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
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0
  BuffTypeDetailEntity_o *v11; // x0
  System_String_o *v12; // x1
  System_String_o *v13; // x2
  const MethodInfo *v14; // x3

  v4 = defVal;
  if ( (byte_40FB4F9 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, key);
    sub_B16FFC(&long_TypeInfo, v7);
    byte_40FB4F9 = 1;
  }
  if ( !BuffTypeDetailEntity__CheckScript(this, key, *(const MethodInfo **)&defVal) )
    return v4;
  script = this->fields.script;
  if ( !script
    || (Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                 (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)script,
                 (System_Type_o *)key,
                 (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_B170D4();
  }
  if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(Item);
  v11 = (BuffTypeDetailEntity_o *)sub_B173C8(Item);
  return (unsigned int)BuffTypeDetailEntity__GetScript_27615864(v11, v12, v13, v14);
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
  System_String_o *Script_27615864; // x21
  __int64 v16; // x2
  System_Char_array *v18; // x0
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x19
  BuffTypeDetailEntity___c_c *v25; // x8
  struct BuffTypeDetailEntity___c_StaticFields *static_fields; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__3_0; // x20
  Il2CppObject *v28; // x21
  struct BuffTypeDetailEntity___c_StaticFields *v29; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x0

  if ( (byte_40FB4FB & 1) == 0 )
  {
    sub_B16FFC(&char___TypeInfo, key);
    sub_B16FFC(&Method_System_Linq_Enumerable_Select_string__int___, v9);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_int___, v10);
    sub_B16FFC(&Method_System_Func_string__int___ctor__, v11);
    sub_B16FFC(&System_Func_string__int__TypeInfo, v12);
    sub_B16FFC(&Method_BuffTypeDetailEntity___c__GetScriptIntArray_b__3_0__, v13);
    sub_B16FFC(&BuffTypeDetailEntity___c_TypeInfo, v14);
    byte_40FB4FB = 1;
  }
  Script_27615864 = BuffTypeDetailEntity__GetScript_27615864(this, key, 0LL, (const MethodInfo *)separator);
  if ( System_String__IsNullOrEmpty(Script_27615864, 0LL) )
    return defValues;
  v18 = (System_Char_array *)sub_B17014(char___TypeInfo, 1LL, v16);
  if ( !v18 )
    goto LABEL_17;
  if ( !v18->max_length )
  {
    sub_B17100(v18, v18, v19);
    sub_B170A0();
  }
  v18->m_Items[2] = separator;
  if ( !Script_27615864 )
LABEL_17:
    sub_B170D4();
  v24 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(Script_27615864, v18, 0LL);
  v25 = BuffTypeDetailEntity___c_TypeInfo;
  if ( (BYTE3(BuffTypeDetailEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BuffTypeDetailEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BuffTypeDetailEntity___c_TypeInfo);
    v25 = BuffTypeDetailEntity___c_TypeInfo;
  }
  static_fields = v25->static_fields;
  _9__3_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( (BYTE3(v25->vtable._0_Equals.methodPtr) & 4) != 0 && !v25->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v25);
      static_fields = BuffTypeDetailEntity___c_TypeInfo->static_fields;
    }
    v28 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B170CC(
                                                                                System_Func_string__int__TypeInfo,
                                                                                v20,
                                                                                v21,
                                                                                v22,
                                                                                v23);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__3_0,
      v28,
      Method_BuffTypeDetailEntity___c__GetScriptIntArray_b__3_0__,
      (const MethodInfo_2B6B6EC *)Method_System_Func_string__int___ctor__);
    v29 = BuffTypeDetailEntity___c_TypeInfo->static_fields;
    v29->__9__3_0 = (struct System_Func_string__int__o *)_9__3_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v29->__9__3_0,
      (System_Int32_array **)_9__3_0,
      v30,
      v31,
      v32,
      v33,
      v34,
      v35);
  }
  v36 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                               v24,
                                                               (System_Func_TSource__TResult__o *)_9__3_0,
                                                               (const MethodInfo_19C05C4 *)Method_System_Linq_Enumerable_Select_string__int___);
  return System_Linq_Enumerable__ToArray_int_(
           v36,
           (const MethodInfo_19C4A28 *)Method_System_Linq_Enumerable_ToArray_int___);
}


System_String_o *__fastcall BuffTypeDetailEntity__GetScript_27615864(
        BuffTypeDetailEntity_o *this,
        System_String_o *key,
        System_String_o *defVal,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0

  if ( (byte_40FB4FA & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, key);
    byte_40FB4FA = 1;
  }
  if ( !BuffTypeDetailEntity__CheckScript(this, key, (const MethodInfo *)defVal) )
    return defVal;
  script = this->fields.script;
  if ( !script
    || (Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                 (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)script,
                 (System_Type_o *)key,
                 (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_B170D4();
  }
  return (System_String_o *)((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                              Item,
                              Item->klass->vtable[4].methodPtr);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BuffTypeDetailEntity__GetShowStateWarBoardEnemyEquip(
        BuffTypeDetailEntity_o *this,
        int32_t defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_40FB4FC & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_12802/*"ShowStateWarBoardEnemyEquip"*/, *(_QWORD *)&defVal);
    byte_40FB4FC = 1;
  }
  return BuffTypeDetailEntity__GetScript(this, (System_String_o *)StringLiteral_12802/*"ShowStateWarBoardEnemyEquip"*/, defVal, v3);
}


void __fastcall BuffTypeDetailEntity___c___cctor(const MethodInfo *method)
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

  if ( (byte_40F70AA & 1) == 0 )
  {
    sub_B16FFC(&BuffTypeDetailEntity___c_TypeInfo, v1);
    byte_40F70AA = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(BuffTypeDetailEntity___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)BuffTypeDetailEntity___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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