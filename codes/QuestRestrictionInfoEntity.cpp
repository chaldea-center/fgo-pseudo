void __fastcall QuestRestrictionInfoEntity___ctor(QuestRestrictionInfoEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4AB62E7 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataEntityBase_string___ctor__, method);
    byte_4AB62E7 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3163C08 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall QuestRestrictionInfoEntity__CreatePK(
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  if ( (byte_4AB62DF & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&phase);
    byte_4AB62DF = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           questId,
           phase,
           (const MethodInfo_2EC2598 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall QuestRestrictionInfoEntity__CreatePrimaryKey(
        QuestRestrictionInfoEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return QuestRestrictionInfoEntity__CreatePK(this->fields.questId, this->fields.phase, v2);
}


bool __fastcall QuestRestrictionInfoEntity__GetOverwriteLimitCountSvtIds(
        QuestRestrictionInfoEntity_o *this,
        System_Int32_array **overwriteLimitCountSvtIds,
        System_Int32_array **overwriteLimitCounts,
        System_Int32_array **overwriteLimitCountIconIds,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  System_Int32_array *ScriptIntArrayParam; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  System_Int32_array *v16; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  const MethodInfo *v19; // x3
  System_Int32_array *v20; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  int32_t v24; // w2
  int32_t v25; // w3

  if ( (byte_4AB62E6 & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_22430/*"overwriteLimitCountSvtIds"*/, overwriteLimitCountSvtIds);
    sub_1BAB41C(&StringLiteral_22431/*"overwriteLimitCounts"*/, v9);
    sub_1BAB41C(&StringLiteral_22429/*"overwriteLimitCountIconIds"*/, v10);
    byte_4AB62E6 = 1;
  }
  ScriptIntArrayParam = QuestRestrictionInfoEntity__GetScriptIntArrayParam(
                          this,
                          (System_String_o *)StringLiteral_22430/*"overwriteLimitCountSvtIds"*/,
                          0LL,
                          (const MethodInfo *)overwriteLimitCountIconIds);
  *overwriteLimitCountSvtIds = ScriptIntArrayParam;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)overwriteLimitCountSvtIds, (int32_t)ScriptIntArrayParam, v12, v13);
  if ( *overwriteLimitCountSvtIds )
  {
    v16 = QuestRestrictionInfoEntity__GetScriptIntArrayParam(this, (System_String_o *)StringLiteral_22431/*"overwriteLimitCounts"*/, 0LL, v15);
    *overwriteLimitCounts = v16;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)overwriteLimitCounts, (int32_t)v16, v17, v18);
    v20 = QuestRestrictionInfoEntity__GetScriptIntArrayParam(this, (System_String_o *)StringLiteral_22429/*"overwriteLimitCountIconIds"*/, 0LL, v19);
    *overwriteLimitCountIconIds = v20;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)overwriteLimitCountIconIds, (int32_t)v20, v21, v22);
    return *overwriteLimitCounts != 0LL;
  }
  else
  {
    *overwriteLimitCounts = 0LL;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)overwriteLimitCounts, 0, v14, (int32_t)v15);
    *overwriteLimitCountIconIds = 0LL;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)overwriteLimitCountIconIds, 0, v24, v25);
    return 0;
  }
}


System_Int32_array *__fastcall QuestRestrictionInfoEntity__GetScriptIntArrayParam(
        QuestRestrictionInfoEntity_o *this,
        System_String_o *key,
        System_Int32_array *defVal,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *ScriptObjListParam; // x0
  System_Collections_Generic_List_object__o *v12; // x19
  QuestRestrictionInfoEntity___c_c *v13; // x0
  System_Converter_object__int__o *_9__10_0; // x20
  Il2CppObject *v15; // x21
  struct QuestRestrictionInfoEntity___c_StaticFields *static_fields; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_Collections_Generic_List_int__o *v19; // x0
  __int64 v20; // x1

  if ( (byte_4AB62E3 & 1) == 0 )
  {
    sub_1BAB41C(&System_Converter_object__int__TypeInfo, key);
    sub_1BAB41C(&Method_System_Collections_Generic_List_object__ConvertAll_int___, v7);
    sub_1BAB41C(&Method_System_Collections_Generic_List_int__ToArray__, v8);
    sub_1BAB41C(&Method_QuestRestrictionInfoEntity___c__GetScriptIntArrayParam_b__10_0__, v9);
    sub_1BAB41C(&QuestRestrictionInfoEntity___c_TypeInfo, v10);
    byte_4AB62E3 = 1;
  }
  ScriptObjListParam = QuestRestrictionInfoEntity__GetScriptObjListParam(this, key, (const MethodInfo *)defVal);
  if ( !ScriptObjListParam )
    return defVal;
  v12 = ScriptObjListParam;
  v13 = QuestRestrictionInfoEntity___c_TypeInfo;
  if ( !QuestRestrictionInfoEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestRestrictionInfoEntity___c_TypeInfo);
    v13 = QuestRestrictionInfoEntity___c_TypeInfo;
  }
  _9__10_0 = v13->static_fields->__9__10_0;
  if ( !_9__10_0 )
  {
    if ( !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13);
      v13 = QuestRestrictionInfoEntity___c_TypeInfo;
    }
    v15 = (Il2CppObject *)v13->static_fields->__9;
    _9__10_0 = (System_Converter_object__int__o *)sub_1BAB668(System_Converter_object__int__TypeInfo);
    System_Converter_object__int____ctor(
      _9__10_0,
      v15,
      Method_QuestRestrictionInfoEntity___c__GetScriptIntArrayParam_b__10_0__,
      0LL);
    static_fields = QuestRestrictionInfoEntity___c_TypeInfo->static_fields;
    static_fields->__9__10_0 = _9__10_0;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&static_fields->__9__10_0, (int32_t)_9__10_0, v17, v18);
  }
  v19 = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_object___ConvertAll_int_(
                                                    v12,
                                                    (System_Converter_T__TOutput__o *)_9__10_0,
                                                    (const MethodInfo_2DF5A9C *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
  if ( !v19 )
    sub_1BAB678(0LL, v20);
  return System_Collections_Generic_List_int___ToArray(
           v19,
           (const MethodInfo_3532350 *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall QuestRestrictionInfoEntity__GetScriptIntParam(
        QuestRestrictionInfoEntity_o *this,
        System_String_o *key,
        int32_t defVal,
        const MethodInfo *method)
{
  int32_t v4; // w19
  Il2CppObject *ScriptObj; // x0
  __int64 v8; // x2
  __int64 v9; // x3
  QuestRestrictionInfoEntity_o *v11; // x0
  System_String_o *v12; // x1
  const MethodInfo *v13; // x2

  v4 = defVal;
  if ( (byte_4AB62E1 & 1) == 0 )
  {
    sub_1BAB41C(&long_TypeInfo, key);
    byte_4AB62E1 = 1;
  }
  ScriptObj = QuestRestrictionInfoEntity__GetScriptObj(this, key, *(const MethodInfo **)&defVal);
  if ( !ScriptObj )
    return v4;
  if ( ScriptObj->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(ScriptObj, long_TypeInfo, v8, v9);
  sub_1BAB938(ScriptObj);
  return (unsigned int)QuestRestrictionInfoEntity__GetScriptObjListParam(v11, v12, v13);
}


Il2CppObject *__fastcall QuestRestrictionInfoEntity__GetScriptObj(
        QuestRestrictionInfoEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  Il2CppObject *result; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4AB62E0 & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, key);
    byte_4AB62E0 = 1;
  }
  result = (Il2CppObject *)this->fields.script;
  if ( result )
  {
    value = 0LL;
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)result,
           (Il2CppObject *)key,
           &value,
           (const MethodInfo_3214D58 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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


System_Collections_Generic_List_object__o *__fastcall QuestRestrictionInfoEntity__GetScriptObjListParam(
        QuestRestrictionInfoEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *result; // x0
  __int64 methodPtr_low; // x9
  QuestRestrictionInfoEntity_o *v7; // x0
  System_String_o *v8; // x1
  System_Int32_array *v9; // x2
  const MethodInfo *v10; // x3

  if ( (byte_4AB62E2 & 1) == 0 )
  {
    sub_1BAB41C(&System_Collections_Generic_List_object__TypeInfo, key);
    byte_4AB62E2 = 1;
  }
  result = (System_Collections_Generic_List_object__o *)QuestRestrictionInfoEntity__GetScriptObj(this, key, method);
  if ( result )
  {
    methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (System_Collections_Generic_List_object__c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != System_Collections_Generic_List_object__TypeInfo )
    {
      sub_1BAB938(result);
      return (System_Collections_Generic_List_object__o *)QuestRestrictionInfoEntity__GetScriptIntArrayParam(
                                                            v7,
                                                            v8,
                                                            v9,
                                                            v10);
    }
  }
  return result;
}


int32_t __fastcall QuestRestrictionInfoEntity__GetSingleForceSvtId(
        QuestRestrictionInfoEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4AB62E4 & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_23372/*"singleForceSvtId"*/, method);
    byte_4AB62E4 = 1;
  }
  return QuestRestrictionInfoEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_23372/*"singleForceSvtId"*/, 0, v2);
}


int32_t __fastcall QuestRestrictionInfoEntity__GetUserEventDeckNo(
        QuestRestrictionInfoEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4AB62E5 & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_24396/*"useEventDeckNo"*/, method);
    byte_4AB62E5 = 1;
  }
  return QuestRestrictionInfoEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_24396/*"useEventDeckNo"*/, 1, v2);
}


bool __fastcall QuestRestrictionInfoEntity__HasFlag(
        QuestRestrictionInfoEntity_o *this,
        int64_t flag,
        const MethodInfo *method)
{
  return (this->fields.flag & flag) != 0;
}


void __fastcall QuestRestrictionInfoEntity___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_4AB62E8 & 1) == 0 )
  {
    sub_1BAB41C(&QuestRestrictionInfoEntity___c_TypeInfo, v1);
    byte_4AB62E8 = 1;
  }
  v2 = (Il2CppObject *)sub_1BAB668(QuestRestrictionInfoEntity___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  QuestRestrictionInfoEntity___c_TypeInfo->static_fields->__9 = (struct QuestRestrictionInfoEntity___c_o *)v2;
  sub_1BAB3C0(
    (ServantStatusBattleListViewItem_o *)QuestRestrictionInfoEntity___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
}


void __fastcall QuestRestrictionInfoEntity___c___ctor(QuestRestrictionInfoEntity___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall QuestRestrictionInfoEntity___c___GetScriptIntArrayParam_b__10_0(
        QuestRestrictionInfoEntity___c_o *this,
        Il2CppObject *x,
        const MethodInfo *method)
{
  System_String_o *v4; // x0

  if ( (byte_4AB62E9 & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_1/*""*/, x);
    byte_4AB62E9 = 1;
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