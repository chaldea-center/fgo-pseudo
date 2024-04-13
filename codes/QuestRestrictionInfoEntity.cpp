void __fastcall QuestRestrictionInfoEntity___ctor(QuestRestrictionInfoEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42ED2EA & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_string___ctor__, (_DWORD)method, v2, v3);
    byte_42ED2EA = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23FAD5C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall QuestRestrictionInfoEntity__CreatePK(
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  __int64 v3; // x3

  if ( (byte_42ED2E2 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_CreateMultiplePK_int__int___, phase, (_DWORD)method, v3);
    byte_42ED2E2 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           questId,
           phase,
           (const MethodInfo_1AE3018 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  System_Int32_array *ScriptIntArrayParam; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_String_array **v22; // x2
  MethodInfo *v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_Int32_array *v28; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  const MethodInfo *v35; // x3
  System_Int32_array *v36; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7

  if ( (byte_42ED2E9 & 1) == 0 )
  {
    sub_B5D5C4(
      &StringLiteral_21650/*"overwriteLimitCountSvtIds"*/,
      (_DWORD)overwriteLimitCountSvtIds,
      (_DWORD)overwriteLimitCounts,
      overwriteLimitCountIconIds);
    sub_B5D5C4(&StringLiteral_21651/*"overwriteLimitCounts"*/, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_21649/*"overwriteLimitCountIconIds"*/, v12, v13, v14);
    byte_42ED2E9 = 1;
  }
  ScriptIntArrayParam = QuestRestrictionInfoEntity__GetScriptIntArrayParam(
                          this,
                          (System_String_o *)StringLiteral_21650/*"overwriteLimitCountSvtIds"*/,
                          0LL,
                          (const MethodInfo *)overwriteLimitCountIconIds);
  *overwriteLimitCountSvtIds = ScriptIntArrayParam;
  sub_B5D560(
    (BattleServantConfConponent_o *)overwriteLimitCountSvtIds,
    (System_Int32_array **)ScriptIntArrayParam,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  if ( *overwriteLimitCountSvtIds )
  {
    v28 = QuestRestrictionInfoEntity__GetScriptIntArrayParam(this, (System_String_o *)StringLiteral_21651/*"overwriteLimitCounts"*/, 0LL, v23);
    *overwriteLimitCounts = v28;
    sub_B5D560(
      (BattleServantConfConponent_o *)overwriteLimitCounts,
      (System_Int32_array **)v28,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34);
    v36 = QuestRestrictionInfoEntity__GetScriptIntArrayParam(this, (System_String_o *)StringLiteral_21649/*"overwriteLimitCountIconIds"*/, 0LL, v35);
    *overwriteLimitCountIconIds = v36;
    sub_B5D560(
      (BattleServantConfConponent_o *)overwriteLimitCountIconIds,
      (System_Int32_array **)v36,
      v37,
      v38,
      v39,
      v40,
      v41,
      v42);
    return *overwriteLimitCounts != 0LL;
  }
  else
  {
    *overwriteLimitCounts = 0LL;
    sub_B5D560(
      (BattleServantConfConponent_o *)overwriteLimitCounts,
      0LL,
      v22,
      (System_String_array **)v23,
      v24,
      v25,
      v26,
      v27);
    *overwriteLimitCountIconIds = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)overwriteLimitCountIconIds, 0LL, v44, v45, v46, v47, v48, v49);
    return 0;
  }
}


System_Int32_array *__fastcall QuestRestrictionInfoEntity__GetScriptIntArrayParam(
        QuestRestrictionInfoEntity_o *this,
        System_String_o *key,
        System_Int32_array *defVal,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  System_Collections_Generic_List_object__o *ScriptObjListParam; // x0
  System_Collections_Generic_List_BattleActionData_HealData__o *v23; // x19
  QuestRestrictionInfoEntity___c_c *v24; // x0
  struct QuestRestrictionInfoEntity___c_StaticFields *static_fields; // x8
  System_Converter_BattleActionData_HealData__int__o *_9__10_0; // x20
  Il2CppObject *v27; // x21
  struct QuestRestrictionInfoEntity___c_StaticFields *v28; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_Collections_Generic_List_int__o *v35; // x0
  __int64 v36; // x1

  if ( (byte_42ED2E6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Converter_object__int___ctor__, (_DWORD)key, (_DWORD)defVal, method);
    sub_B5D5C4(&System_Converter_object__int__TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_object__ConvertAll_int___, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v13, v14, v15);
    sub_B5D5C4(&Method_QuestRestrictionInfoEntity___c__GetScriptIntArrayParam_b__10_0__, v16, v17, v18);
    sub_B5D5C4(&QuestRestrictionInfoEntity___c_TypeInfo, v19, v20, v21);
    byte_42ED2E6 = 1;
  }
  ScriptObjListParam = QuestRestrictionInfoEntity__GetScriptObjListParam(this, key, (const MethodInfo *)defVal);
  if ( !ScriptObjListParam )
    return defVal;
  v23 = (System_Collections_Generic_List_BattleActionData_HealData__o *)ScriptObjListParam;
  v24 = QuestRestrictionInfoEntity___c_TypeInfo;
  if ( (BYTE3(QuestRestrictionInfoEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestRestrictionInfoEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestRestrictionInfoEntity___c_TypeInfo);
    v24 = QuestRestrictionInfoEntity___c_TypeInfo;
  }
  static_fields = v24->static_fields;
  _9__10_0 = (System_Converter_BattleActionData_HealData__int__o *)static_fields->__9__10_0;
  if ( !_9__10_0 )
  {
    if ( (BYTE3(v24->vtable._0_Equals.methodPtr) & 4) != 0 && !v24->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v24);
      static_fields = QuestRestrictionInfoEntity___c_TypeInfo->static_fields;
    }
    v27 = (Il2CppObject *)static_fields->__9;
    _9__10_0 = (System_Converter_BattleActionData_HealData__int__o *)sub_B5D694(System_Converter_object__int__TypeInfo);
    System_Converter_BattleActionData_HealData__int____ctor(
      _9__10_0,
      v27,
      Method_QuestRestrictionInfoEntity___c__GetScriptIntArrayParam_b__10_0__,
      (const MethodInfo_23F6FAC *)Method_System_Converter_object__int___ctor__);
    v28 = QuestRestrictionInfoEntity___c_TypeInfo->static_fields;
    v28->__9__10_0 = (struct System_Converter_object__int__o *)_9__10_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v28->__9__10_0,
      (System_Int32_array **)_9__10_0,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34);
  }
  v35 = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_BattleActionData_HealData___ConvertAll_int_(
                                                    v23,
                                                    (System_Converter_T__TOutput__o *)_9__10_0,
                                                    (const MethodInfo_192E0B4 *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
  if ( !v35 )
    sub_B5D69C(0LL, v36);
  return System_Collections_Generic_List_int___ToArray(
           v35,
           (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  QuestRestrictionInfoEntity_o *v9; // x0
  System_String_o *v10; // x1
  const MethodInfo *v11; // x2

  v4 = defVal;
  if ( (byte_42ED2E4 & 1) == 0 )
  {
    sub_B5D5C4(&long_TypeInfo, (_DWORD)key, defVal, method);
    byte_42ED2E4 = 1;
  }
  ScriptObj = QuestRestrictionInfoEntity__GetScriptObj(this, key, *(const MethodInfo **)&defVal);
  if ( !ScriptObj )
    return v4;
  if ( ScriptObj->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(ScriptObj);
  sub_B5D990(ScriptObj);
  return (unsigned int)QuestRestrictionInfoEntity__GetScriptObjListParam(v9, v10, v11);
}


Il2CppObject *__fastcall QuestRestrictionInfoEntity__GetScriptObj(
        QuestRestrictionInfoEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  __int64 v3; // x3
  Il2CppObject *result; // x0
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42ED2E3 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__,
      (_DWORD)key,
      (_DWORD)method,
      v3);
    byte_42ED2E3 = 1;
  }
  value = 0LL;
  result = (Il2CppObject *)this->fields.script;
  if ( result )
  {
    value = 0LL;
    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)result,
           (System_Xml_XmlQualifiedName_o *)key,
           &value,
           (const MethodInfo_2F289BC *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      return (Il2CppObject *)value;
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
  __int64 v3; // x3
  System_Collections_Generic_List_object__o *result; // x0
  __int64 v7; // x9
  QuestRestrictionInfoEntity_o *v8; // x0
  System_String_o *v9; // x1
  System_Int32_array *v10; // x2
  const MethodInfo *v11; // x3

  if ( (byte_42ED2E5 & 1) == 0 )
  {
    sub_B5D5C4(&System_Collections_Generic_List_object__TypeInfo, (_DWORD)key, (_DWORD)method, v3);
    byte_42ED2E5 = 1;
  }
  result = (System_Collections_Generic_List_object__o *)QuestRestrictionInfoEntity__GetScriptObj(this, key, method);
  if ( result )
  {
    v7 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
    if ( *(&result->klass->_2.bitflags2 + 1) < (unsigned int)v7
      || (System_Collections_Generic_List_object__c *)result->klass->_2.typeHierarchy[v7 - 1] != System_Collections_Generic_List_object__TypeInfo )
    {
      sub_B5D990(result);
      return (System_Collections_Generic_List_object__o *)QuestRestrictionInfoEntity__GetScriptIntArrayParam(
                                                            v8,
                                                            v9,
                                                            v10,
                                                            v11);
    }
  }
  return result;
}


int32_t __fastcall QuestRestrictionInfoEntity__GetSingleForceSvtId(
        QuestRestrictionInfoEntity_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42ED2E7 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_22435/*"singleForceSvtId"*/, (_DWORD)method, v2, v3);
    byte_42ED2E7 = 1;
  }
  return QuestRestrictionInfoEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_22435/*"singleForceSvtId"*/, 0, v3);
}


int32_t __fastcall QuestRestrictionInfoEntity__GetUserEventDeckNo(
        QuestRestrictionInfoEntity_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42ED2E8 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_23285/*"useEventDeckNo"*/, (_DWORD)method, v2, v3);
    byte_42ED2E8 = 1;
  }
  return QuestRestrictionInfoEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_23285/*"useEventDeckNo"*/, 1, v3);
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42E7F0D & 1) == 0 )
  {
    sub_B5D5C4(&QuestRestrictionInfoEntity___c_TypeInfo, v1, v2, v3);
    byte_42E7F0D = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(QuestRestrictionInfoEntity___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = (BattleServantConfConponent_o *)QuestRestrictionInfoEntity___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v4;
  sub_B5D560(static_fields, (System_Int32_array **)v4, v6, v7, v8, v9, v10, v11);
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
  __int64 v3; // x3
  System_String_o *v5; // x0

  if ( (byte_42E7F0E & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)x, (_DWORD)method, v3);
    byte_42E7F0E = 1;
  }
  if ( x )
    v5 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer, const MethodInfo *))x->klass->vtable[3].method)(
                              x,
                              x->klass->vtable[4].methodPtr,
                              method);
  else
    v5 = 0LL;
  if ( !v5 )
    v5 = (System_String_o *)StringLiteral_1/*""*/;
  return System_Int32__Parse(v5, 0LL);
}