void __fastcall BuffTypeDetailEntity___ctor(BuffTypeDetailEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5AECC & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_int___ctor__);
    byte_4A5AECC = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_311D734 *)Method_DataEntityBase_int___ctor__);
}


bool __fastcall BuffTypeDetailEntity__CheckScript(
        BuffTypeDetailEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_4A5AEC7 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    byte_4A5AEC7 = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                       (System_Collections_Generic_Dictionary_object__object__o *)script,
                       (Il2CppObject *)key,
                       (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
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
  System_Collections_Generic_Dictionary_object__object__o *script; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  BuffTypeDetailEntity_o *v12; // x0
  System_String_o *v13; // x1
  System_String_o *v14; // x2
  const MethodInfo *v15; // x3

  v4 = defVal;
  if ( (byte_4A5AEC8 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1B885B0(&long_TypeInfo);
    byte_4A5AEC8 = 1;
  }
  if ( !BuffTypeDetailEntity__CheckScript(this, key, *(const MethodInfo **)&defVal) )
    return v4;
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script
    || (script = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                              script,
                                                                              (Il2CppObject *)key,
                                                                              (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_1B8880C(script, v7);
  }
  if ( script->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(script, long_TypeInfo, v9, v10);
  sub_1B88ACC(script);
  return (unsigned int)BuffTypeDetailEntity__GetScript_39005052(v12, v13, v14, v15);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall BuffTypeDetailEntity__GetScriptIntArray(
        BuffTypeDetailEntity_o *this,
        System_String_o *key,
        System_Int32_array *defValues,
        uint16_t separator,
        const MethodInfo *method)
{
  System_String_o *Script_39005052; // x21
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v11; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x19
  BuffTypeDetailEntity___c_c *v14; // x8
  System_Func_object__int__o *_9__3_0; // x20
  Il2CppObject *v16; // x21
  struct BuffTypeDetailEntity___c_StaticFields *static_fields; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x0

  if ( (byte_4A5AECA & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_Select_string__int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1B885B0(&System_Func_string__int__TypeInfo);
    sub_1B885B0(&Method_BuffTypeDetailEntity___c__GetScriptIntArray_b__3_0__);
    sub_1B885B0(&BuffTypeDetailEntity___c_TypeInfo);
    byte_4A5AECA = 1;
  }
  Script_39005052 = BuffTypeDetailEntity__GetScript_39005052(this, key, 0LL, (const MethodInfo *)separator);
  IsNullOrEmpty = System_String__IsNullOrEmpty(Script_39005052, 0LL);
  if ( IsNullOrEmpty )
    return defValues;
  if ( !Script_39005052 )
    sub_1B8880C(IsNullOrEmpty, v11);
  v13 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(Script_39005052, separator, 0, 0LL);
  v14 = BuffTypeDetailEntity___c_TypeInfo;
  if ( !BuffTypeDetailEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BuffTypeDetailEntity___c_TypeInfo);
    v14 = BuffTypeDetailEntity___c_TypeInfo;
  }
  _9__3_0 = (System_Func_object__int__o *)v14->static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !v14->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v14);
      v14 = BuffTypeDetailEntity___c_TypeInfo;
    }
    v16 = (Il2CppObject *)v14->static_fields->__9;
    _9__3_0 = (System_Func_object__int__o *)sub_1B887FC(System_Func_string__int__TypeInfo);
    System_Func_object__int____ctor(_9__3_0, v16, Method_BuffTypeDetailEntity___c__GetScriptIntArray_b__3_0__, 0LL);
    static_fields = BuffTypeDetailEntity___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Func_string__int__o *)_9__3_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__3_0, (int32_t)_9__3_0, v18, v19);
  }
  v20 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v13,
                                                               (System_Func_TSource__TResult__o *)_9__3_0,
                                                               (const MethodInfo_2EAFB30 *)Method_System_Linq_Enumerable_Select_string__int___);
  return System_Linq_Enumerable__ToArray_int_(
           v20,
           (const MethodInfo_2EB854C *)Method_System_Linq_Enumerable_ToArray_int___);
}


System_String_o *__fastcall BuffTypeDetailEntity__GetScript_39005052(
        BuffTypeDetailEntity_o *this,
        System_String_o *key,
        System_String_o *defVal,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_Collections_Generic_Dictionary_object__object__o *script; // x0

  if ( (byte_4A5AEC9 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    byte_4A5AEC9 = 1;
  }
  if ( !BuffTypeDetailEntity__CheckScript(this, key, (const MethodInfo *)defVal) )
    return defVal;
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script
    || (script = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                              script,
                                                                              (Il2CppObject *)key,
                                                                              (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_1B8880C(script, v7);
  }
  return (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_object__object__o *, Il2CppMethodPointer))script->klass->vtable._3_ToString.method)(
                              script,
                              script->klass->vtable._4_unknown.methodPtr);
}


int32_t __fastcall BuffTypeDetailEntity__GetShowStateWarBoardEnemyEquip(
        BuffTypeDetailEntity_o *this,
        int32_t defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4A5AECB & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_12764/*"ShowStateWarBoardEnemyEquip"*/);
    byte_4A5AECB = 1;
  }
  return BuffTypeDetailEntity__GetScript(this, (System_String_o *)StringLiteral_12764/*"ShowStateWarBoardEnemyEquip"*/, defVal, v3);
}


void __fastcall BuffTypeDetailEntity___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5AECD & 1) == 0 )
  {
    sub_1B885B0(&BuffTypeDetailEntity___c_TypeInfo);
    byte_4A5AECD = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(BuffTypeDetailEntity___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  BuffTypeDetailEntity___c_TypeInfo->static_fields->__9 = (struct BuffTypeDetailEntity___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)BuffTypeDetailEntity___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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