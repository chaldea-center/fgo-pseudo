void __fastcall GachaDetailEntity___ctor(GachaDetailEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C221E8 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataEntityBase_int___ctor__, method);
    byte_4C221E8 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3298964 *)Method_DataEntityBase_int___ctor__);
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
  __int64 v8; // x2
  __int64 v9; // x3
  GachaDetailEntity_o *v11; // x0
  System_String_o *v12; // x1
  System_Int32_array *v13; // x2
  const MethodInfo *v14; // x3

  v4 = defVal;
  if ( (byte_4C221E6 & 1) == 0 )
  {
    sub_1C3B764(&long_TypeInfo, key);
    byte_4C221E6 = 1;
  }
  ScriptObj = GachaDetailEntity__GetScriptObj(this, key, *(const MethodInfo **)&defVal);
  if ( !ScriptObj )
    return v4;
  if ( ScriptObj->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(ScriptObj, long_TypeInfo, v8, v9);
  sub_1C3BC80(ScriptObj);
  return (unsigned int)GachaDetailEntity__GetScriptIntArray(v11, v12, v13, v14);
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
  System_Collections_Generic_List_object__o *ScriptObjList; // x0
  System_Collections_Generic_List_object__o *v12; // x19
  GachaDetailEntity___c_c *v13; // x0
  System_Converter_object__int__o *_9__8_0; // x20
  Il2CppObject *v15; // x21
  struct GachaDetailEntity___c_StaticFields *static_fields; // x0
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  System_Collections_Generic_List_int__o *v23; // x0
  __int64 v24; // x1

  if ( (byte_4C221E7 & 1) == 0 )
  {
    sub_1C3B764(&System_Converter_object__int__TypeInfo, key);
    sub_1C3B764(&Method_System_Collections_Generic_List_object__ConvertAll_int___, v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_int__ToArray__, v8);
    sub_1C3B764(&Method_GachaDetailEntity___c__GetScriptIntArray_b__8_0__, v9);
    sub_1C3B764(&GachaDetailEntity___c_TypeInfo, v10);
    byte_4C221E7 = 1;
  }
  ScriptObjList = GachaDetailEntity__GetScriptObjList(this, key, (const MethodInfo *)defVal);
  if ( !ScriptObjList )
    return defVal;
  v12 = ScriptObjList;
  v13 = GachaDetailEntity___c_TypeInfo;
  if ( !GachaDetailEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaDetailEntity___c_TypeInfo);
    v13 = GachaDetailEntity___c_TypeInfo;
  }
  _9__8_0 = v13->static_fields->__9__8_0;
  if ( !_9__8_0 )
  {
    if ( !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13);
      v13 = GachaDetailEntity___c_TypeInfo;
    }
    v15 = (Il2CppObject *)v13->static_fields->__9;
    _9__8_0 = (System_Converter_object__int__o *)sub_1C3B9B0(System_Converter_object__int__TypeInfo);
    System_Converter_object__int____ctor(_9__8_0, v15, Method_GachaDetailEntity___c__GetScriptIntArray_b__8_0__, 0LL);
    static_fields = GachaDetailEntity___c_TypeInfo->static_fields;
    static_fields->__9__8_0 = _9__8_0;
    sub_1C3B708((PartyOrganizationUtility_o *)&static_fields->__9__8_0, (int64_t)_9__8_0, v17, v18, v19, v20, v21, v22);
  }
  v23 = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_object___ConvertAll_int_(
                                                    v12,
                                                    (System_Converter_T__TOutput__o *)_9__8_0,
                                                    (const MethodInfo_2F1F8D4 *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
  if ( !v23 )
    sub_1C3B9C0(0LL, v24);
  return System_Collections_Generic_List_int___ToArray(
           v23,
           (const MethodInfo_3670700 *)Method_System_Collections_Generic_List_int__ToArray__);
}


Il2CppObject *__fastcall GachaDetailEntity__GetScriptObj(
        GachaDetailEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  Il2CppObject *result; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C221E4 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, key);
    byte_4C221E4 = 1;
  }
  result = (Il2CppObject *)this->fields.script;
  if ( result )
  {
    value = 0LL;
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)result,
           (Il2CppObject *)key,
           &value,
           (const MethodInfo_3356F74 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      return value;
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
  __int64 methodPtr_low; // x9
  GachaDetailEntity_o *v7; // x0
  System_String_o *v8; // x1
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4C221E5 & 1) == 0 )
  {
    sub_1C3B764(&System_Collections_Generic_List_object__TypeInfo, key);
    byte_4C221E5 = 1;
  }
  result = (System_Collections_Generic_List_object__o *)GachaDetailEntity__GetScriptObj(this, key, method);
  if ( result )
  {
    methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (System_Collections_Generic_List_object__c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != System_Collections_Generic_List_object__TypeInfo )
    {
      sub_1C3BC80(result);
      return (System_Collections_Generic_List_object__o *)GachaDetailEntity__GetScriptInt(v7, v8, v9, v10);
    }
  }
  return result;
}


void __fastcall GachaDetailEntity___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4C221E9 & 1) == 0 )
  {
    sub_1C3B764(&GachaDetailEntity___c_TypeInfo, v1);
    byte_4C221E9 = 1;
  }
  v2 = (Il2CppObject *)sub_1C3B9B0(GachaDetailEntity___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  GachaDetailEntity___c_TypeInfo->static_fields->__9 = (struct GachaDetailEntity___c_o *)v2;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)GachaDetailEntity___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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

  if ( (byte_4C221EA & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_1/*""*/, x);
    byte_4C221EA = 1;
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