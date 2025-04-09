void __fastcall BuffTypeDetailEntity___ctor(BuffTypeDetailEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49BABC4 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataEntityBase_int___ctor__, method);
    byte_49BABC4 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_319B4B8 *)Method_DataEntityBase_int___ctor__);
}


bool __fastcall BuffTypeDetailEntity__CheckScript(
        BuffTypeDetailEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_49BABBF & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    byte_49BABBF = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                       (System_Collections_Generic_Dictionary_object__object__o *)script,
                       (Il2CppObject *)key,
                       (const MethodInfo_3257D0C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
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
  System_Collections_Generic_Dictionary_object__object__o *script; // x0
  __int64 v10; // x2
  __int64 v11; // x3
  BuffTypeDetailEntity_o *v13; // x0
  System_String_o *v14; // x1
  System_String_o *v15; // x2
  const MethodInfo *v16; // x3

  v4 = defVal;
  if ( (byte_49BABC0 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, key);
    sub_1B4CF90(&long_TypeInfo, v7);
    byte_49BABC0 = 1;
  }
  if ( !BuffTypeDetailEntity__CheckScript(this, key, *(const MethodInfo **)&defVal) )
    return v4;
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script
    || (script = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                              script,
                                                                              (Il2CppObject *)key,
                                                                              (const MethodInfo_3257A98 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_1B4D1EC(script, v8);
  }
  if ( script->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(script, long_TypeInfo, v10, v11);
  sub_1B4D4AC(script);
  return (unsigned int)BuffTypeDetailEntity__GetScript_39560796(v13, v14, v15, v16);
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
  System_String_o *Script_39560796; // x21
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v15; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x19
  BuffTypeDetailEntity___c_c *v18; // x8
  System_Func_object__int__o *_9__3_0; // x20
  Il2CppObject *v20; // x21
  struct BuffTypeDetailEntity___c_StaticFields *static_fields; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x0

  if ( (byte_49BABC2 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Linq_Enumerable_Select_string__int___, key);
    sub_1B4CF90(&Method_System_Linq_Enumerable_ToArray_int___, v9);
    sub_1B4CF90(&System_Func_string__int__TypeInfo, v10);
    sub_1B4CF90(&Method_BuffTypeDetailEntity___c__GetScriptIntArray_b__3_0__, v11);
    sub_1B4CF90(&BuffTypeDetailEntity___c_TypeInfo, v12);
    byte_49BABC2 = 1;
  }
  Script_39560796 = BuffTypeDetailEntity__GetScript_39560796(this, key, 0LL, (const MethodInfo *)separator);
  IsNullOrEmpty = System_String__IsNullOrEmpty(Script_39560796, 0LL);
  if ( IsNullOrEmpty )
    return defValues;
  if ( !Script_39560796 )
    sub_1B4D1EC(IsNullOrEmpty, v15);
  v17 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(Script_39560796, separator, 0, 0LL);
  v18 = BuffTypeDetailEntity___c_TypeInfo;
  if ( !BuffTypeDetailEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BuffTypeDetailEntity___c_TypeInfo);
    v18 = BuffTypeDetailEntity___c_TypeInfo;
  }
  _9__3_0 = (System_Func_object__int__o *)v18->static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      v18 = BuffTypeDetailEntity___c_TypeInfo;
    }
    v20 = (Il2CppObject *)v18->static_fields->__9;
    _9__3_0 = (System_Func_object__int__o *)sub_1B4D1DC(System_Func_string__int__TypeInfo);
    System_Func_object__int____ctor(_9__3_0, v20, Method_BuffTypeDetailEntity___c__GetScriptIntArray_b__3_0__, 0LL);
    static_fields = BuffTypeDetailEntity___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Func_string__int__o *)_9__3_0;
    sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__3_0, (int32_t)_9__3_0, v22, v23);
  }
  v24 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v17,
                                                               (System_Func_TSource__TResult__o *)_9__3_0,
                                                               (const MethodInfo_2F338DC *)Method_System_Linq_Enumerable_Select_string__int___);
  return System_Linq_Enumerable__ToArray_int_(
           v24,
           (const MethodInfo_2F3C24C *)Method_System_Linq_Enumerable_ToArray_int___);
}


System_String_o *__fastcall BuffTypeDetailEntity__GetScript_39560796(
        BuffTypeDetailEntity_o *this,
        System_String_o *key,
        System_String_o *defVal,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_Collections_Generic_Dictionary_object__object__o *script; // x0

  if ( (byte_49BABC1 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, key);
    byte_49BABC1 = 1;
  }
  if ( !BuffTypeDetailEntity__CheckScript(this, key, (const MethodInfo *)defVal) )
    return defVal;
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script
    || (script = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                              script,
                                                                              (Il2CppObject *)key,
                                                                              (const MethodInfo_3257A98 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_1B4D1EC(script, v7);
  }
  return (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_object__object__o *, Il2CppMethodPointer))script->klass->vtable._3_ToString.method)(
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

  if ( (byte_49BABC3 & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_12571/*"ShowStateWarBoardEnemyEquip"*/, *(_QWORD *)&defVal);
    byte_49BABC3 = 1;
  }
  return BuffTypeDetailEntity__GetScript(this, (System_String_o *)StringLiteral_12571/*"ShowStateWarBoardEnemyEquip"*/, defVal, v3);
}


void __fastcall BuffTypeDetailEntity___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_49BABC5 & 1) == 0 )
  {
    sub_1B4CF90(&BuffTypeDetailEntity___c_TypeInfo, v1);
    byte_49BABC5 = 1;
  }
  v2 = (Il2CppObject *)sub_1B4D1DC(BuffTypeDetailEntity___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BuffTypeDetailEntity___c_TypeInfo->static_fields->__9 = (struct BuffTypeDetailEntity___c_o *)v2;
  sub_1B4CF34((CGThumbnailListItem_o *)BuffTypeDetailEntity___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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