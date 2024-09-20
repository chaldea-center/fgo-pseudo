void __fastcall QuestRestrictionInfoEntity___ctor(QuestRestrictionInfoEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B6EA & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_string___ctor__);
    byte_4A5B6EA = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_311D7AC *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall QuestRestrictionInfoEntity__CreatePK(
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  if ( (byte_4A5B6E2 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4A5B6E2 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           questId,
           phase,
           (const MethodInfo_2E7DB2C *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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
  System_Int32_array *ScriptIntArrayParam; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  System_Int32_array *v14; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  const MethodInfo *v17; // x3
  System_Int32_array *v18; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  int32_t v22; // w2
  int32_t v23; // w3

  if ( (byte_4A5B6E9 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_22393/*"overwriteLimitCountSvtIds"*/);
    sub_1B885B0(&StringLiteral_22394/*"overwriteLimitCounts"*/);
    sub_1B885B0(&StringLiteral_22392/*"overwriteLimitCountIconIds"*/);
    byte_4A5B6E9 = 1;
  }
  ScriptIntArrayParam = QuestRestrictionInfoEntity__GetScriptIntArrayParam(
                          this,
                          (System_String_o *)StringLiteral_22393/*"overwriteLimitCountSvtIds"*/,
                          0LL,
                          (const MethodInfo *)overwriteLimitCountIconIds);
  *overwriteLimitCountSvtIds = ScriptIntArrayParam;
  sub_1B88554((ServantStatusBattleListViewItem_o *)overwriteLimitCountSvtIds, (int32_t)ScriptIntArrayParam, v10, v11);
  if ( *overwriteLimitCountSvtIds )
  {
    v14 = QuestRestrictionInfoEntity__GetScriptIntArrayParam(this, (System_String_o *)StringLiteral_22394/*"overwriteLimitCounts"*/, 0LL, v13);
    *overwriteLimitCounts = v14;
    sub_1B88554((ServantStatusBattleListViewItem_o *)overwriteLimitCounts, (int32_t)v14, v15, v16);
    v18 = QuestRestrictionInfoEntity__GetScriptIntArrayParam(this, (System_String_o *)StringLiteral_22392/*"overwriteLimitCountIconIds"*/, 0LL, v17);
    *overwriteLimitCountIconIds = v18;
    sub_1B88554((ServantStatusBattleListViewItem_o *)overwriteLimitCountIconIds, (int32_t)v18, v19, v20);
    return *overwriteLimitCounts != 0LL;
  }
  else
  {
    *overwriteLimitCounts = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)overwriteLimitCounts, 0, v12, (int32_t)v13);
    *overwriteLimitCountIconIds = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)overwriteLimitCountIconIds, 0, v22, v23);
    return 0;
  }
}


System_Int32_array *__fastcall QuestRestrictionInfoEntity__GetScriptIntArrayParam(
        QuestRestrictionInfoEntity_o *this,
        System_String_o *key,
        System_Int32_array *defVal,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ScriptObjListParam; // x0
  System_Collections_Generic_List_object__o *v8; // x19
  QuestRestrictionInfoEntity___c_c *v9; // x0
  System_Converter_object__int__o *_9__10_0; // x20
  Il2CppObject *v11; // x21
  struct QuestRestrictionInfoEntity___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  System_Collections_Generic_List_int__o *v15; // x0
  __int64 v16; // x1

  if ( (byte_4A5B6E6 & 1) == 0 )
  {
    sub_1B885B0(&System_Converter_object__int__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_object__ConvertAll_int___);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1B885B0(&Method_QuestRestrictionInfoEntity___c__GetScriptIntArrayParam_b__10_0__);
    sub_1B885B0(&QuestRestrictionInfoEntity___c_TypeInfo);
    byte_4A5B6E6 = 1;
  }
  ScriptObjListParam = QuestRestrictionInfoEntity__GetScriptObjListParam(this, key, (const MethodInfo *)defVal);
  if ( !ScriptObjListParam )
    return defVal;
  v8 = ScriptObjListParam;
  v9 = QuestRestrictionInfoEntity___c_TypeInfo;
  if ( !QuestRestrictionInfoEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestRestrictionInfoEntity___c_TypeInfo);
    v9 = QuestRestrictionInfoEntity___c_TypeInfo;
  }
  _9__10_0 = v9->static_fields->__9__10_0;
  if ( !_9__10_0 )
  {
    if ( !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      v9 = QuestRestrictionInfoEntity___c_TypeInfo;
    }
    v11 = (Il2CppObject *)v9->static_fields->__9;
    _9__10_0 = (System_Converter_object__int__o *)sub_1B887FC(System_Converter_object__int__TypeInfo);
    System_Converter_object__int____ctor(
      _9__10_0,
      v11,
      Method_QuestRestrictionInfoEntity___c__GetScriptIntArrayParam_b__10_0__,
      0LL);
    static_fields = QuestRestrictionInfoEntity___c_TypeInfo->static_fields;
    static_fields->__9__10_0 = _9__10_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__10_0, (int32_t)_9__10_0, v13, v14);
  }
  v15 = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_object___ConvertAll_int_(
                                                    v8,
                                                    (System_Converter_T__TOutput__o *)_9__10_0,
                                                    (const MethodInfo_2DB31F4 *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
  if ( !v15 )
    sub_1B8880C(0LL, v16);
  return System_Collections_Generic_List_int___ToArray(
           v15,
           (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  if ( (byte_4A5B6E4 & 1) == 0 )
  {
    sub_1B885B0(&long_TypeInfo);
    byte_4A5B6E4 = 1;
  }
  ScriptObj = QuestRestrictionInfoEntity__GetScriptObj(this, key, *(const MethodInfo **)&defVal);
  if ( !ScriptObj )
    return v4;
  if ( ScriptObj->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(ScriptObj, long_TypeInfo, v8, v9);
  sub_1B88ACC(ScriptObj);
  return (unsigned int)QuestRestrictionInfoEntity__GetScriptObjListParam(v11, v12, v13);
}


Il2CppObject *__fastcall QuestRestrictionInfoEntity__GetScriptObj(
        QuestRestrictionInfoEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  Il2CppObject *result; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5B6E3 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    byte_4A5B6E3 = 1;
  }
  result = (Il2CppObject *)this->fields.script;
  if ( result )
  {
    value = 0LL;
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)result,
           (Il2CppObject *)key,
           &value,
           (const MethodInfo_31C89D4 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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

  if ( (byte_4A5B6E5 & 1) == 0 )
  {
    sub_1B885B0(&System_Collections_Generic_List_object__TypeInfo);
    byte_4A5B6E5 = 1;
  }
  result = (System_Collections_Generic_List_object__o *)QuestRestrictionInfoEntity__GetScriptObj(this, key, method);
  if ( result )
  {
    methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (System_Collections_Generic_List_object__c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != System_Collections_Generic_List_object__TypeInfo )
    {
      sub_1B88ACC(result);
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

  if ( (byte_4A5B6E7 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_23333/*"singleForceSvtId"*/);
    byte_4A5B6E7 = 1;
  }
  return QuestRestrictionInfoEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_23333/*"singleForceSvtId"*/, 0, v2);
}


int32_t __fastcall QuestRestrictionInfoEntity__GetUserEventDeckNo(
        QuestRestrictionInfoEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5B6E8 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_24356/*"useEventDeckNo"*/);
    byte_4A5B6E8 = 1;
  }
  return QuestRestrictionInfoEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_24356/*"useEventDeckNo"*/, 1, v2);
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
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5B6EB & 1) == 0 )
  {
    sub_1B885B0(&QuestRestrictionInfoEntity___c_TypeInfo);
    byte_4A5B6EB = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(QuestRestrictionInfoEntity___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  QuestRestrictionInfoEntity___c_TypeInfo->static_fields->__9 = (struct QuestRestrictionInfoEntity___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)QuestRestrictionInfoEntity___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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

  if ( (byte_4A5B6EC & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5B6EC = 1;
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