void __fastcall QuestRestrictionInfoEntity___ctor(QuestRestrictionInfoEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42B495C & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_string___ctor__);
    byte_42B495C = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23E2224 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall QuestRestrictionInfoEntity__CreatePK(
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  if ( (byte_42B4954 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_42B4954 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           questId,
           phase,
           (const MethodInfo_1A4DF50 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_String_array **v16; // x2
  MethodInfo *v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Int32_array *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  const MethodInfo *v29; // x3
  System_Int32_array *v30; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7

  if ( (byte_42B495B & 1) == 0 )
  {
    sub_B52984(&StringLiteral_21539/*"overwriteLimitCountSvtIds"*/);
    sub_B52984(&StringLiteral_21540/*"overwriteLimitCounts"*/);
    sub_B52984(&StringLiteral_21538/*"overwriteLimitCountIconIds"*/);
    byte_42B495B = 1;
  }
  ScriptIntArrayParam = QuestRestrictionInfoEntity__GetScriptIntArrayParam(
                          this,
                          (System_String_o *)StringLiteral_21539/*"overwriteLimitCountSvtIds"*/,
                          0LL,
                          (const MethodInfo *)overwriteLimitCountIconIds);
  *overwriteLimitCountSvtIds = ScriptIntArrayParam;
  sub_B52920(
    (BattleServantConfConponent_o *)overwriteLimitCountSvtIds,
    (System_Int32_array **)ScriptIntArrayParam,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  if ( *overwriteLimitCountSvtIds )
  {
    v22 = QuestRestrictionInfoEntity__GetScriptIntArrayParam(this, (System_String_o *)StringLiteral_21540/*"overwriteLimitCounts"*/, 0LL, v17);
    *overwriteLimitCounts = v22;
    sub_B52920(
      (BattleServantConfConponent_o *)overwriteLimitCounts,
      (System_Int32_array **)v22,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
    v30 = QuestRestrictionInfoEntity__GetScriptIntArrayParam(this, (System_String_o *)StringLiteral_21538/*"overwriteLimitCountIconIds"*/, 0LL, v29);
    *overwriteLimitCountIconIds = v30;
    sub_B52920(
      (BattleServantConfConponent_o *)overwriteLimitCountIconIds,
      (System_Int32_array **)v30,
      v31,
      v32,
      v33,
      v34,
      v35,
      v36);
    return *overwriteLimitCounts != 0LL;
  }
  else
  {
    *overwriteLimitCounts = 0LL;
    sub_B52920(
      (BattleServantConfConponent_o *)overwriteLimitCounts,
      0LL,
      v16,
      (System_String_array **)v17,
      v18,
      v19,
      v20,
      v21);
    *overwriteLimitCountIconIds = 0LL;
    sub_B52920((BattleServantConfConponent_o *)overwriteLimitCountIconIds, 0LL, v38, v39, v40, v41, v42, v43);
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
  System_Collections_Generic_List_BattleActionData_HealData__o *v8; // x19
  QuestRestrictionInfoEntity___c_c *v9; // x0
  struct QuestRestrictionInfoEntity___c_StaticFields *static_fields; // x8
  System_Converter_BattleActionData_HealData__int__o *_9__10_0; // x20
  Il2CppObject *v12; // x21
  struct QuestRestrictionInfoEntity___c_StaticFields *v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Collections_Generic_List_int__o *v20; // x0
  __int64 v21; // x1

  if ( (byte_42B4958 & 1) == 0 )
  {
    sub_B52984(&Method_System_Converter_object__int___ctor__);
    sub_B52984(&System_Converter_object__int__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_object__ConvertAll_int___);
    sub_B52984(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B52984(&Method_QuestRestrictionInfoEntity___c__GetScriptIntArrayParam_b__10_0__);
    sub_B52984(&QuestRestrictionInfoEntity___c_TypeInfo);
    byte_42B4958 = 1;
  }
  ScriptObjListParam = QuestRestrictionInfoEntity__GetScriptObjListParam(this, key, (const MethodInfo *)defVal);
  if ( !ScriptObjListParam )
    return defVal;
  v8 = (System_Collections_Generic_List_BattleActionData_HealData__o *)ScriptObjListParam;
  v9 = QuestRestrictionInfoEntity___c_TypeInfo;
  if ( (BYTE3(QuestRestrictionInfoEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestRestrictionInfoEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestRestrictionInfoEntity___c_TypeInfo);
    v9 = QuestRestrictionInfoEntity___c_TypeInfo;
  }
  static_fields = v9->static_fields;
  _9__10_0 = (System_Converter_BattleActionData_HealData__int__o *)static_fields->__9__10_0;
  if ( !_9__10_0 )
  {
    if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      static_fields = QuestRestrictionInfoEntity___c_TypeInfo->static_fields;
    }
    v12 = (Il2CppObject *)static_fields->__9;
    _9__10_0 = (System_Converter_BattleActionData_HealData__int__o *)sub_B52A54(System_Converter_object__int__TypeInfo);
    System_Converter_BattleActionData_HealData__int____ctor(
      _9__10_0,
      v12,
      Method_QuestRestrictionInfoEntity___c__GetScriptIntArrayParam_b__10_0__,
      (const MethodInfo_23DE474 *)Method_System_Converter_object__int___ctor__);
    v13 = QuestRestrictionInfoEntity___c_TypeInfo->static_fields;
    v13->__9__10_0 = (struct System_Converter_object__int__o *)_9__10_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v13->__9__10_0,
      (System_Int32_array **)_9__10_0,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
  }
  v20 = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_BattleActionData_HealData___ConvertAll_int_(
                                                    v8,
                                                    (System_Converter_T__TOutput__o *)_9__10_0,
                                                    (const MethodInfo_191393C *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
  if ( !v20 )
    sub_B52A5C(0LL, v21);
  return System_Collections_Generic_List_int___ToArray(
           v20,
           (const MethodInfo_30590BC *)Method_System_Collections_Generic_List_int__ToArray__);
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
  if ( (byte_42B4956 & 1) == 0 )
  {
    sub_B52984(&long_TypeInfo);
    byte_42B4956 = 1;
  }
  ScriptObj = QuestRestrictionInfoEntity__GetScriptObj(this, key, *(const MethodInfo **)&defVal);
  if ( !ScriptObj )
    return v4;
  if ( ScriptObj->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(ScriptObj);
  sub_B52D50(ScriptObj);
  return (unsigned int)QuestRestrictionInfoEntity__GetScriptObjListParam(v9, v10, v11);
}


Il2CppObject *__fastcall QuestRestrictionInfoEntity__GetScriptObj(
        QuestRestrictionInfoEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  Il2CppObject *result; // x0
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42B4955 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    byte_42B4955 = 1;
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
           (const MethodInfo_2F1D600 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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

  if ( (byte_42B4957 & 1) == 0 )
  {
    sub_B52984(&System_Collections_Generic_List_object__TypeInfo);
    byte_42B4957 = 1;
  }
  result = (System_Collections_Generic_List_object__o *)QuestRestrictionInfoEntity__GetScriptObj(this, key, method);
  if ( result )
  {
    v6 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
    if ( *(&result->klass->_2.bitflags2 + 1) < (unsigned int)v6
      || (System_Collections_Generic_List_object__c *)result->klass->_2.typeHierarchy[v6 - 1] != System_Collections_Generic_List_object__TypeInfo )
    {
      sub_B52D50(result);
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

  if ( (byte_42B4959 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_22320/*"singleForceSvtId"*/);
    byte_42B4959 = 1;
  }
  return QuestRestrictionInfoEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_22320/*"singleForceSvtId"*/, 0, v2);
}


int32_t __fastcall QuestRestrictionInfoEntity__GetUserEventDeckNo(
        QuestRestrictionInfoEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_42B495A & 1) == 0 )
  {
    sub_B52984(&StringLiteral_23170/*"useEventDeckNo"*/);
    byte_42B495A = 1;
  }
  return QuestRestrictionInfoEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_23170/*"useEventDeckNo"*/, 1, v2);
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
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_42AF269 & 1) == 0 )
  {
    sub_B52984(&QuestRestrictionInfoEntity___c_TypeInfo);
    byte_42AF269 = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(QuestRestrictionInfoEntity___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)QuestRestrictionInfoEntity___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B52920(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
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

  if ( (byte_42AF26A & 1) == 0 )
  {
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42AF26A = 1;
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