void __fastcall QuestRestrictionInfoEntity___ctor(QuestRestrictionInfoEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4217CD4 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataEntityBase_string___ctor__, method);
    byte_4217CD4 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_2669B20 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall QuestRestrictionInfoEntity__CreatePK(
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  if ( (byte_4217CCC & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&phase);
    byte_4217CCC = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           questId,
           phase,
           (const MethodInfo_171341C *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_String_array **v18; // x2
  MethodInfo *v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Int32_array *v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  const MethodInfo *v31; // x3
  System_Int32_array *v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7

  if ( (byte_4217CD3 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_21438/*"overwriteLimitCountSvtIds"*/, overwriteLimitCountSvtIds);
    sub_B0D8A4(&StringLiteral_21439/*"overwriteLimitCounts"*/, v9);
    sub_B0D8A4(&StringLiteral_21437/*"overwriteLimitCountIconIds"*/, v10);
    byte_4217CD3 = 1;
  }
  ScriptIntArrayParam = QuestRestrictionInfoEntity__GetScriptIntArrayParam(
                          this,
                          (System_String_o *)StringLiteral_21438/*"overwriteLimitCountSvtIds"*/,
                          0LL,
                          (const MethodInfo *)overwriteLimitCountIconIds);
  *overwriteLimitCountSvtIds = ScriptIntArrayParam;
  sub_B0D840(
    (BattleServantConfConponent_o *)overwriteLimitCountSvtIds,
    (System_Int32_array **)ScriptIntArrayParam,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  if ( *overwriteLimitCountSvtIds )
  {
    v24 = QuestRestrictionInfoEntity__GetScriptIntArrayParam(this, (System_String_o *)StringLiteral_21439/*"overwriteLimitCounts"*/, 0LL, v19);
    *overwriteLimitCounts = v24;
    sub_B0D840(
      (BattleServantConfConponent_o *)overwriteLimitCounts,
      (System_Int32_array **)v24,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
    v32 = QuestRestrictionInfoEntity__GetScriptIntArrayParam(this, (System_String_o *)StringLiteral_21437/*"overwriteLimitCountIconIds"*/, 0LL, v31);
    *overwriteLimitCountIconIds = v32;
    sub_B0D840(
      (BattleServantConfConponent_o *)overwriteLimitCountIconIds,
      (System_Int32_array **)v32,
      v33,
      v34,
      v35,
      v36,
      v37,
      v38);
    return *overwriteLimitCounts != 0LL;
  }
  else
  {
    *overwriteLimitCounts = 0LL;
    sub_B0D840(
      (BattleServantConfConponent_o *)overwriteLimitCounts,
      0LL,
      v18,
      (System_String_array **)v19,
      v20,
      v21,
      v22,
      v23);
    *overwriteLimitCountIconIds = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)overwriteLimitCountIconIds, 0LL, v40, v41, v42, v43, v44, v45);
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
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *ScriptObjListParam; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  System_Collections_Generic_List_BattleActionData_HealData__o *v15; // x19
  QuestRestrictionInfoEntity___c_c *v16; // x0
  struct QuestRestrictionInfoEntity___c_StaticFields *static_fields; // x8
  System_Converter_BattleActionData_HealData__int__o *_9__10_0; // x20
  Il2CppObject *v19; // x21
  struct QuestRestrictionInfoEntity___c_StaticFields *v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Collections_Generic_List_int__o *v27; // x0

  if ( (byte_4217CD0 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Converter_object__int___ctor__, key);
    sub_B0D8A4(&System_Converter_object__int__TypeInfo, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_object__ConvertAll_int___, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__ToArray__, v9);
    sub_B0D8A4(&Method_QuestRestrictionInfoEntity___c__GetScriptIntArrayParam_b__10_0__, v10);
    sub_B0D8A4(&QuestRestrictionInfoEntity___c_TypeInfo, v11);
    byte_4217CD0 = 1;
  }
  ScriptObjListParam = QuestRestrictionInfoEntity__GetScriptObjListParam(this, key, (const MethodInfo *)defVal);
  if ( !ScriptObjListParam )
    return defVal;
  v15 = (System_Collections_Generic_List_BattleActionData_HealData__o *)ScriptObjListParam;
  v16 = QuestRestrictionInfoEntity___c_TypeInfo;
  if ( (BYTE3(QuestRestrictionInfoEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestRestrictionInfoEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestRestrictionInfoEntity___c_TypeInfo);
    v16 = QuestRestrictionInfoEntity___c_TypeInfo;
  }
  static_fields = v16->static_fields;
  _9__10_0 = (System_Converter_BattleActionData_HealData__int__o *)static_fields->__9__10_0;
  if ( !_9__10_0 )
  {
    if ( (BYTE3(v16->vtable._0_Equals.methodPtr) & 4) != 0 && !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16);
      static_fields = QuestRestrictionInfoEntity___c_TypeInfo->static_fields;
    }
    v19 = (Il2CppObject *)static_fields->__9;
    _9__10_0 = (System_Converter_BattleActionData_HealData__int__o *)sub_B0D974(
                                                                       System_Converter_object__int__TypeInfo,
                                                                       v13,
                                                                       v14);
    System_Converter_BattleActionData_HealData__int____ctor(
      _9__10_0,
      v19,
      Method_QuestRestrictionInfoEntity___c__GetScriptIntArrayParam_b__10_0__,
      (const MethodInfo_2665D70 *)Method_System_Converter_object__int___ctor__);
    v20 = QuestRestrictionInfoEntity___c_TypeInfo->static_fields;
    v20->__9__10_0 = (struct System_Converter_object__int__o *)_9__10_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v20->__9__10_0,
      (System_Int32_array **)_9__10_0,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
  }
  v27 = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_BattleActionData_HealData___ConvertAll_int_(
                                                    v15,
                                                    (System_Converter_T__TOutput__o *)_9__10_0,
                                                    (const MethodInfo_189F76C *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
  if ( !v27 )
    sub_B0D97C(0LL);
  return System_Collections_Generic_List_int___ToArray(
           v27,
           (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
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
  if ( (byte_4217CCE & 1) == 0 )
  {
    sub_B0D8A4(&long_TypeInfo, key);
    byte_4217CCE = 1;
  }
  ScriptObj = QuestRestrictionInfoEntity__GetScriptObj(this, key, *(const MethodInfo **)&defVal);
  if ( !ScriptObj )
    return v4;
  if ( ScriptObj->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(ScriptObj);
  sub_B0DC70(ScriptObj);
  return (unsigned int)QuestRestrictionInfoEntity__GetScriptObjListParam(v9, v10, v11);
}


Il2CppObject *__fastcall QuestRestrictionInfoEntity__GetScriptObj(
        QuestRestrictionInfoEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  Il2CppObject *result; // x0
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4217CCD & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, key);
    byte_4217CCD = 1;
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
           (const MethodInfo_2E4CA68 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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
  System_Collections_Generic_List_object__o *result; // x0
  __int64 v6; // x9
  QuestRestrictionInfoEntity_o *v7; // x0
  System_String_o *v8; // x1
  System_Int32_array *v9; // x2
  const MethodInfo *v10; // x3

  if ( (byte_4217CCF & 1) == 0 )
  {
    sub_B0D8A4(&System_Collections_Generic_List_object__TypeInfo, key);
    byte_4217CCF = 1;
  }
  result = (System_Collections_Generic_List_object__o *)QuestRestrictionInfoEntity__GetScriptObj(this, key, method);
  if ( result )
  {
    v6 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
    if ( *(&result->klass->_2.bitflags2 + 1) < (unsigned int)v6
      || (System_Collections_Generic_List_object__c *)result->klass->_2.typeHierarchy[v6 - 1] != System_Collections_Generic_List_object__TypeInfo )
    {
      sub_B0DC70(result);
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

  if ( (byte_4217CD1 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_22208/*"singleForceSvtId"*/, method);
    byte_4217CD1 = 1;
  }
  return QuestRestrictionInfoEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_22208/*"singleForceSvtId"*/, 0, v2);
}


int32_t __fastcall QuestRestrictionInfoEntity__GetUserEventDeckNo(
        QuestRestrictionInfoEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4217CD2 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_23056/*"useEventDeckNo"*/, method);
    byte_4217CD2 = 1;
  }
  return QuestRestrictionInfoEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_23056/*"useEventDeckNo"*/, 1, v2);
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
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct QuestRestrictionInfoEntity___c_StaticFields *static_fields; // x0

  if ( (byte_42124E9 & 1) == 0 )
  {
    sub_B0D8A4(&QuestRestrictionInfoEntity___c_TypeInfo, v1);
    byte_42124E9 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(QuestRestrictionInfoEntity___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = QuestRestrictionInfoEntity___c_TypeInfo->static_fields;
  static_fields->__9 = (struct QuestRestrictionInfoEntity___c_o *)v3;
  sub_B0D840(static_fields, v3);
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

  if ( (byte_42124EA & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_1/*""*/, x);
    byte_42124EA = 1;
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