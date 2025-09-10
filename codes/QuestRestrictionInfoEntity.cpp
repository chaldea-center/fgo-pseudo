void QuestRestrictionInfoEntity___ctor(QuestRestrictionInfoEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C27A28 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_string___ctor__);
    byte_4C27A28 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_338592C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *QuestRestrictionInfoEntity__CreatePK(int32_t questId, int32_t phase, const MethodInfo *method)
{
  if ( (byte_4C27A20 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4C27A20 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           questId,
           phase,
           (const MethodInfo_30CCAD8 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *QuestRestrictionInfoEntity__CreatePrimaryKey(
        QuestRestrictionInfoEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return QuestRestrictionInfoEntity__CreatePK(this->fields.questId, this->fields.phase, v2);
}


bool QuestRestrictionInfoEntity__GetOverwriteLimitCountSvtIds(
        QuestRestrictionInfoEntity_o *this,
        System_Int32_array **overwriteLimitCountSvtIds,
        System_Int32_array **overwriteLimitCounts,
        System_Int32_array **overwriteLimitCountIconIds,
        const MethodInfo *method)
{
  System_Int32_array *ScriptIntArrayParam; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  System_Int32_array *v14; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x3
  System_Int32_array *v18; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  int32_t v22; // w2
  const MethodInfo *v23; // x3

  if ( (byte_4C27A27 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_22542/*"overwriteLimitCountSvtIds"*/);
    sub_1C2D490(&StringLiteral_22543/*"overwriteLimitCounts"*/);
    sub_1C2D490(&StringLiteral_22540/*"overwriteLimitCountIconIds"*/);
    byte_4C27A27 = 1;
  }
  ScriptIntArrayParam = QuestRestrictionInfoEntity__GetScriptIntArrayParam(
                          this,
                          (System_String_o *)StringLiteral_22542/*"overwriteLimitCountSvtIds"*/,
                          0,
                          (const MethodInfo *)overwriteLimitCountIconIds);
  *overwriteLimitCountSvtIds = ScriptIntArrayParam;
  sub_1C2D434((CGThumbnailListItem_o *)overwriteLimitCountSvtIds, (int32_t)ScriptIntArrayParam, v10, v11);
  if ( *overwriteLimitCountSvtIds )
  {
    v14 = QuestRestrictionInfoEntity__GetScriptIntArrayParam(this, (System_String_o *)StringLiteral_22543/*"overwriteLimitCounts"*/, 0, v13);
    *overwriteLimitCounts = v14;
    sub_1C2D434((CGThumbnailListItem_o *)overwriteLimitCounts, (int32_t)v14, v15, v16);
    v18 = QuestRestrictionInfoEntity__GetScriptIntArrayParam(this, (System_String_o *)StringLiteral_22540/*"overwriteLimitCountIconIds"*/, 0, v17);
    *overwriteLimitCountIconIds = v18;
    sub_1C2D434((CGThumbnailListItem_o *)overwriteLimitCountIconIds, (int32_t)v18, v19, v20);
    return *overwriteLimitCounts != 0;
  }
  else
  {
    *overwriteLimitCounts = 0;
    sub_1C2D434((CGThumbnailListItem_o *)overwriteLimitCounts, 0, v12, v13);
    *overwriteLimitCountIconIds = 0;
    sub_1C2D434((CGThumbnailListItem_o *)overwriteLimitCountIconIds, 0, v22, v23);
    return 0;
  }
}


System_Int32_array *QuestRestrictionInfoEntity__GetScriptIntArrayParam(
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
  const MethodInfo *v14; // x3
  System_Collections_Generic_List_int__o *v15; // x0
  __int64 v16; // x1

  if ( (byte_4C27A24 & 1) == 0 )
  {
    sub_1C2D490(&System_Converter_object__int__TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_object__ConvertAll_int___);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C2D490(&Method_QuestRestrictionInfoEntity___c__GetScriptIntArrayParam_b__10_0__);
    sub_1C2D490(&QuestRestrictionInfoEntity___c_TypeInfo);
    byte_4C27A24 = 1;
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
    _9__10_0 = (System_Converter_object__int__o *)sub_1C2D6DC(System_Converter_object__int__TypeInfo);
    System_Converter_object__int____ctor(
      _9__10_0,
      v11,
      Method_QuestRestrictionInfoEntity___c__GetScriptIntArrayParam_b__10_0__,
      0);
    static_fields = QuestRestrictionInfoEntity___c_TypeInfo->static_fields;
    static_fields->__9__10_0 = _9__10_0;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__10_0, (int32_t)_9__10_0, v13, v14);
  }
  v15 = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_object___ConvertAll_int_(
                                                    v8,
                                                    (System_Converter_T__TOutput__o *)_9__10_0,
                                                    (const MethodInfo_2FF5E6C *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
  if ( !v15 )
    sub_1C2D6EC(0, v16);
  return System_Collections_Generic_List_int___ToArray(
           v15,
           (const MethodInfo_376E618 *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
int32_t QuestRestrictionInfoEntity__GetScriptIntParam(
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
  if ( (byte_4C27A22 & 1) == 0 )
  {
    sub_1C2D490(&long_TypeInfo);
    byte_4C27A22 = 1;
  }
  ScriptObj = QuestRestrictionInfoEntity__GetScriptObj(this, key, *(const MethodInfo **)&defVal);
  if ( !ScriptObj )
    return v4;
  if ( ScriptObj->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(ScriptObj, long_TypeInfo, v8, v9);
  sub_1C2D9AC(ScriptObj);
  return (unsigned int)QuestRestrictionInfoEntity__GetScriptObjListParam(v11, v12, v13);
}


Il2CppObject *QuestRestrictionInfoEntity__GetScriptObj(
        QuestRestrictionInfoEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  Il2CppObject *result; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C27A21 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    byte_4C27A21 = 1;
  }
  result = (Il2CppObject *)this->fields.script;
  if ( result )
  {
    value = 0;
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)result,
           (Il2CppObject *)key,
           &value,
           (const MethodInfo_344BB34 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      return value;
    }
    else
    {
      return 0;
    }
  }
  return result;
}


System_Collections_Generic_List_object__o *QuestRestrictionInfoEntity__GetScriptObjListParam(
        QuestRestrictionInfoEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *result; // x0
  __int64 naturalAligment; // x9
  QuestRestrictionInfoEntity_o *v7; // x0
  System_String_o *v8; // x1
  System_Int32_array *v9; // x2
  const MethodInfo *v10; // x3

  if ( (byte_4C27A23 & 1) == 0 )
  {
    sub_1C2D490(&System_Collections_Generic_List_object__TypeInfo);
    byte_4C27A23 = 1;
  }
  result = (System_Collections_Generic_List_object__o *)QuestRestrictionInfoEntity__GetScriptObj(this, key, method);
  if ( result )
  {
    naturalAligment = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment;
    if ( result->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (System_Collections_Generic_List_object__c *)result->klass->_2.typeHierarchy[naturalAligment - 1] != System_Collections_Generic_List_object__TypeInfo )
    {
      sub_1C2D9AC(result);
      return (System_Collections_Generic_List_object__o *)QuestRestrictionInfoEntity__GetScriptIntArrayParam(
                                                            v7,
                                                            v8,
                                                            v9,
                                                            v10);
    }
  }
  return result;
}


int32_t QuestRestrictionInfoEntity__GetSingleForceSvtId(QuestRestrictionInfoEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C27A25 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_23486/*"singleForceSvtId"*/);
    byte_4C27A25 = 1;
  }
  return QuestRestrictionInfoEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_23486/*"singleForceSvtId"*/, 0, v2);
}


int32_t QuestRestrictionInfoEntity__GetUserEventDeckNo(QuestRestrictionInfoEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C27A26 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_24457/*"useEventDeckNo"*/);
    byte_4C27A26 = 1;
  }
  return QuestRestrictionInfoEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_24457/*"useEventDeckNo"*/, 1, v2);
}


bool QuestRestrictionInfoEntity__HasFlag(QuestRestrictionInfoEntity_o *this, int64_t flag, const MethodInfo *method)
{
  return (this->fields.flag & flag) != 0;
}


void QuestRestrictionInfoEntity___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C27A29 & 1) == 0 )
  {
    sub_1C2D490(&QuestRestrictionInfoEntity___c_TypeInfo);
    byte_4C27A29 = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(QuestRestrictionInfoEntity___c_TypeInfo);
  System_Object___ctor(v1, 0);
  QuestRestrictionInfoEntity___c_TypeInfo->static_fields->__9 = (struct QuestRestrictionInfoEntity___c_o *)v1;
  sub_1C2D434((CGThumbnailListItem_o *)QuestRestrictionInfoEntity___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void QuestRestrictionInfoEntity___c___ctor(QuestRestrictionInfoEntity___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t QuestRestrictionInfoEntity___c___GetScriptIntArrayParam_b__10_0(
        QuestRestrictionInfoEntity___c_o *this,
        Il2CppObject *x,
        const MethodInfo *method)
{
  System_String_o *v4; // x0

  if ( (byte_4C27A2A & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C27A2A = 1;
  }
  if ( x )
    v4 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *, const MethodInfo *))x->klass->vtable[3].methodPtr)(
                              x,
                              x->klass->vtable[3].method,
                              method);
  else
    v4 = 0;
  if ( !v4 )
    v4 = (System_String_o *)StringLiteral_1/*""*/;
  return System_Int32__Parse(v4, 0);
}