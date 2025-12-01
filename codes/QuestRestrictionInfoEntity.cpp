void QuestRestrictionInfoEntity___ctor(QuestRestrictionInfoEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CC7B65 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataEntityBase_string___ctor__);
    byte_4CC7B65 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3406A14 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *QuestRestrictionInfoEntity__CreatePK(int32_t questId, int32_t phase, const MethodInfo *method)
{
  if ( (byte_4CC7B5D & 1) == 0 )
  {
    sub_1C713B0(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4CC7B5D = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           questId,
           phase,
           (const MethodInfo_3149294 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  System_Int32_array *v22; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  const MethodInfo *v29; // x3
  System_Int32_array *v30; // x0
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7
  int32_t v38; // w2
  int32_t v39; // w3
  System_String_o *v40; // x4
  int32_t v41; // w5
  int64_t v42; // x6
  System_String_o *v43; // x7

  if ( (byte_4CC7B64 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_22668/*"overwriteLimitCountSvtIds"*/);
    sub_1C713B0(&StringLiteral_22669/*"overwriteLimitCounts"*/);
    sub_1C713B0(&StringLiteral_22666/*"overwriteLimitCountIconIds"*/);
    byte_4CC7B64 = 1;
  }
  ScriptIntArrayParam = QuestRestrictionInfoEntity__GetScriptIntArrayParam(
                          this,
                          (System_String_o *)StringLiteral_22668/*"overwriteLimitCountSvtIds"*/,
                          0,
                          (const MethodInfo *)overwriteLimitCountIconIds);
  *overwriteLimitCountSvtIds = ScriptIntArrayParam;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)overwriteLimitCountSvtIds,
    (int32_t)ScriptIntArrayParam,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  if ( *overwriteLimitCountSvtIds )
  {
    v22 = QuestRestrictionInfoEntity__GetScriptIntArrayParam(this, (System_String_o *)StringLiteral_22669/*"overwriteLimitCounts"*/, 0, v17);
    *overwriteLimitCounts = v22;
    sub_1C71354((GrandQuestFolderBoardItem_o *)overwriteLimitCounts, (int32_t)v22, v23, v24, v25, v26, v27, v28);
    v30 = QuestRestrictionInfoEntity__GetScriptIntArrayParam(this, (System_String_o *)StringLiteral_22666/*"overwriteLimitCountIconIds"*/, 0, v29);
    *overwriteLimitCountIconIds = v30;
    sub_1C71354((GrandQuestFolderBoardItem_o *)overwriteLimitCountIconIds, (int32_t)v30, v31, v32, v33, v34, v35, v36);
    return *overwriteLimitCounts != 0;
  }
  else
  {
    *overwriteLimitCounts = 0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)overwriteLimitCounts, 0, v16, (int32_t)v17, v18, v19, v20, v21);
    *overwriteLimitCountIconIds = 0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)overwriteLimitCountIconIds, 0, v38, v39, v40, v41, v42, v43);
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
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  System_Collections_Generic_List_int__o *v19; // x0
  __int64 v20; // x1

  if ( (byte_4CC7B61 & 1) == 0 )
  {
    sub_1C713B0(&System_Converter_object__int__TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_object__ConvertAll_int___);
    sub_1C713B0(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C713B0(&Method_QuestRestrictionInfoEntity___c__GetScriptIntArrayParam_b__10_0__);
    sub_1C713B0(&QuestRestrictionInfoEntity___c_TypeInfo);
    byte_4CC7B61 = 1;
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
    _9__10_0 = (System_Converter_object__int__o *)sub_1C715FC(System_Converter_object__int__TypeInfo);
    System_Converter_object__int____ctor(
      _9__10_0,
      v11,
      Method_QuestRestrictionInfoEntity___c__GetScriptIntArrayParam_b__10_0__,
      0);
    static_fields = QuestRestrictionInfoEntity___c_TypeInfo->static_fields;
    static_fields->__9__10_0 = _9__10_0;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__10_0,
      (int32_t)_9__10_0,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
  }
  v19 = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_object___ConvertAll_int_(
                                                    v8,
                                                    (System_Converter_T__TOutput__o *)_9__10_0,
                                                    (const MethodInfo_3070934 *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
  if ( !v19 )
    sub_1C71608(0, v20);
  return System_Collections_Generic_List_int___ToArray(
           v19,
           (const MethodInfo_37F51AC *)Method_System_Collections_Generic_List_int__ToArray__);
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
  if ( (byte_4CC7B5F & 1) == 0 )
  {
    sub_1C713B0(&long_TypeInfo);
    byte_4CC7B5F = 1;
  }
  ScriptObj = QuestRestrictionInfoEntity__GetScriptObj(this, key, *(const MethodInfo **)&defVal);
  if ( !ScriptObj )
    return v4;
  if ( ScriptObj->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(ScriptObj, long_TypeInfo, v8, v9);
  sub_1C719A4(ScriptObj);
  return (unsigned int)QuestRestrictionInfoEntity__GetScriptObjListParam(v11, v12, v13);
}


Il2CppObject *QuestRestrictionInfoEntity__GetScriptObj(
        QuestRestrictionInfoEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  Il2CppObject *result; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4CC7B5E & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    byte_4CC7B5E = 1;
  }
  result = (Il2CppObject *)this->fields.script;
  if ( result )
  {
    value = 0;
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)result,
           (Il2CppObject *)key,
           &value,
           (const MethodInfo_34CCEEC *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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

  if ( (byte_4CC7B60 & 1) == 0 )
  {
    sub_1C713B0(&System_Collections_Generic_List_object__TypeInfo);
    byte_4CC7B60 = 1;
  }
  result = (System_Collections_Generic_List_object__o *)QuestRestrictionInfoEntity__GetScriptObj(this, key, method);
  if ( result )
  {
    naturalAligment = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment;
    if ( result->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (System_Collections_Generic_List_object__c *)result->klass->_2.typeHierarchy[naturalAligment - 1] != System_Collections_Generic_List_object__TypeInfo )
    {
      sub_1C719A4(result);
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

  if ( (byte_4CC7B62 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_23620/*"singleForceSvtId"*/);
    byte_4CC7B62 = 1;
  }
  return QuestRestrictionInfoEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_23620/*"singleForceSvtId"*/, 0, v2);
}


int32_t QuestRestrictionInfoEntity__GetUserEventDeckNo(QuestRestrictionInfoEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CC7B63 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_24602/*"useEventDeckNo"*/);
    byte_4CC7B63 = 1;
  }
  return QuestRestrictionInfoEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_24602/*"useEventDeckNo"*/, 1, v2);
}


bool QuestRestrictionInfoEntity__HasFlag(QuestRestrictionInfoEntity_o *this, int64_t flag, const MethodInfo *method)
{
  return (this->fields.flag & flag) != 0;
}


void QuestRestrictionInfoEntity___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CC7B66 & 1) == 0 )
  {
    sub_1C713B0(&QuestRestrictionInfoEntity___c_TypeInfo);
    byte_4CC7B66 = 1;
  }
  v1 = (Il2CppObject *)sub_1C715FC(QuestRestrictionInfoEntity___c_TypeInfo);
  System_Object___ctor(v1, 0);
  QuestRestrictionInfoEntity___c_TypeInfo->static_fields->__9 = (struct QuestRestrictionInfoEntity___c_o *)v1;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)QuestRestrictionInfoEntity___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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

  if ( (byte_4CC7B67 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC7B67 = 1;
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