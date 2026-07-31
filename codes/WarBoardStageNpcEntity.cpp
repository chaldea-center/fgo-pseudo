void WarBoardStageNpcEntity___ctor(WarBoardStageNpcEntity_o *this, const MethodInfo *method)
{
  struct System_String_o *v3; // x1
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  struct System_Int32_array **p_tacticalIds; // x19
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7

  if ( (byte_59399F1 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_59399F1 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
  v3 = (struct System_String_o *)StringLiteral_1/*""*/;
  *(_QWORD *)&this->fields.stageId = 0;
  this->fields.groupId = 0;
  this->fields.masterName = v3;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.masterName, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  this->fields.masterImageId = 0;
  this->fields.servants = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.servants, 0, v10, v11, v12, v13, v14, v15);
  this->fields.svtEquipIds = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.svtEquipIds, 0, v16, v17, v18, v19, v20, v21);
  this->fields.aiIds = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.aiIds, 0, v22, v23, v24, v25, v26, v27);
  this->fields.ratingBaseIds = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.ratingBaseIds, 0, v28, v29, v30, v31, v32, v33);
  this->fields.tacticalIds = 0;
  p_tacticalIds = &this->fields.tacticalIds;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p_tacticalIds, 0, v35, v36, v37, v38, v39, v40);
  *(_OWORD *)(p_tacticalIds + 1) = xmmword_E92AE0;
  p_tacticalIds[3] = (struct System_Int32_array *)&byte_5;
}


System_String_o *WarBoardStageNpcEntity__CreatePK(
        int32_t stageId,
        int32_t forceId,
        int32_t groupId,
        const MethodInfo *method)
{
  if ( (byte_59399F0 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_59399F0 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           stageId,
           forceId,
           groupId,
           (const MethodInfo_38213FC *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *WarBoardStageNpcEntity__CreatePrimaryKey(WarBoardStageNpcEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return WarBoardStageNpcEntity__CreatePK(this->fields.stageId, this->fields.forceId, this->fields.groupId, v2);
}


System_Int32_array *WarBoardStageNpcEntity__GetDefenseTarget(WarBoardStageNpcEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  long double v3; // q0
  _QWORD *v5; // x20
  __int64 v6; // x8
  __int64 v7; // x0
  __int64 v8; // x0

  if ( (byte_59399F5 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Array_Empty_int___);
    sub_21FFC50(&StringLiteral_19343/*"defenseTarget"*/);
    byte_59399F5 = 1;
  }
  v5 = Method_System_Array_Empty_int___;
  v6 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v6 )
  {
    sub_2237B54(Method_System_Array_Empty_int___);
    v6 = v5[7];
  }
  v7 = *(_QWORD *)(v6 + 16);
  if ( (*(_WORD *)(v7 + 309) & 1) == 0 )
    v7 = sub_2237AF8(v3);
  if ( !*(_DWORD *)(v7 + 228) )
    *(__n128 *)&v3 = j_il2cpp_runtime_class_init_0(v7, method);
  v8 = *(_QWORD *)(v5[7] + 16LL);
  if ( (*(_WORD *)(v8 + 309) & 1) == 0 )
    v8 = sub_2237AF8(v3);
  return WarBoardStageNpcEntity__getScriptIntArrayParam(
           this,
           (System_String_o *)StringLiteral_19343/*"defenseTarget"*/,
           **(System_Int32_array ***)(v8 + 184),
           v2);
}


System_Int32_array *WarBoardStageNpcEntity__getScriptIntArrayParam(
        WarBoardStageNpcEntity_o *this,
        System_String_o *key,
        System_Int32_array *defVal,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ScriptObjListParam; // x0
  __int64 v8; // x1
  System_Collections_Generic_List_object__o *v9; // x19
  WarBoardStageNpcEntity___c_c *v10; // x0
  struct WarBoardStageNpcEntity___c_StaticFields *static_fields; // x8
  System_Converter_object__int__o *_9__21_0; // x20
  Il2CppObject *v13; // x21
  struct WarBoardStageNpcEntity___c_StaticFields *v14; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  System_Collections_Generic_List_int__o *v21; // x0
  __int64 v22; // x1

  if ( (byte_59399F3 & 1) == 0 )
  {
    sub_21FFC50(&System_Converter_object__int__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_object__ConvertAll_int___);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_21FFC50(&Method_WarBoardStageNpcEntity___c__getScriptIntArrayParam_b__21_0__);
    sub_21FFC50(&WarBoardStageNpcEntity___c_TypeInfo);
    byte_59399F3 = 1;
  }
  ScriptObjListParam = WarBoardStageNpcEntity__getScriptObjListParam(this, key, (const MethodInfo *)defVal);
  if ( !ScriptObjListParam )
    return defVal;
  v9 = ScriptObjListParam;
  v10 = WarBoardStageNpcEntity___c_TypeInfo;
  if ( !*(&WarBoardStageNpcEntity___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(WarBoardStageNpcEntity___c_TypeInfo, v8);
    v10 = WarBoardStageNpcEntity___c_TypeInfo;
  }
  static_fields = v10->static_fields;
  _9__21_0 = static_fields->__9__21_0;
  if ( !_9__21_0 )
  {
    if ( !*(&v10->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v10, v8);
      static_fields = WarBoardStageNpcEntity___c_TypeInfo->static_fields;
    }
    v13 = (Il2CppObject *)static_fields->__9;
    _9__21_0 = (System_Converter_object__int__o *)sub_21FFEBC(System_Converter_object__int__TypeInfo);
    System_Converter_object__int____ctor(
      _9__21_0,
      v13,
      Method_WarBoardStageNpcEntity___c__getScriptIntArrayParam_b__21_0__,
      0);
    v14 = WarBoardStageNpcEntity___c_TypeInfo->static_fields;
    v14->__9__21_0 = _9__21_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v14->__9__21_0, (int32_t)_9__21_0, v15, v16, v17, v18, v19, v20);
  }
  v21 = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_object___ConvertAll_int_(
                                                    v9,
                                                    (System_Converter_T__TOutput__o *)_9__21_0,
                                                    (const MethodInfo_36A5754 *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
  if ( !v21 )
    sub_21FFECC(0, v22);
  return System_Collections_Generic_List_int___ToArray(
           v21,
           (const MethodInfo_4434BB8 *)Method_System_Collections_Generic_List_int__ToArray__);
}


Il2CppObject *WarBoardStageNpcEntity__getScriptObj(
        WarBoardStageNpcEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  Il2CppObject *result; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_59399F4 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    byte_59399F4 = 1;
  }
  result = (Il2CppObject *)this->fields.script;
  value = 0;
  if ( result )
  {
    value = 0;
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)result,
           (Il2CppObject *)key,
           &value,
           (const MethodInfo_3FCBFD0 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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


System_Collections_Generic_List_object__o *WarBoardStageNpcEntity__getScriptObjListParam(
        WarBoardStageNpcEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *result; // x0
  __int64 v6; // x2
  __int64 naturalAligment; // x9
  WarBoardStageNpcEntity_o *v8; // x0
  System_String_o *v9; // x1
  const MethodInfo *v10; // x2

  if ( (byte_59399F2 & 1) == 0 )
  {
    sub_21FFC50(&System_Collections_Generic_List_object__TypeInfo);
    byte_59399F2 = 1;
  }
  result = (System_Collections_Generic_List_object__o *)WarBoardStageNpcEntity__getScriptObj(this, key, method);
  if ( result )
  {
    naturalAligment = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment;
    if ( result->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (System_Collections_Generic_List_object__c *)result->klass->_2.typeHierarchy[naturalAligment - 1] != System_Collections_Generic_List_object__TypeInfo )
    {
      sub_220024C(result, System_Collections_Generic_List_object__TypeInfo, v6);
      return (System_Collections_Generic_List_object__o *)WarBoardStageNpcEntity__getScriptObj(v8, v9, v10);
    }
  }
  return result;
}


void WarBoardStageNpcEntity___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_59399F6 & 1) == 0 )
  {
    sub_21FFC50(&WarBoardStageNpcEntity___c_TypeInfo);
    byte_59399F6 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(WarBoardStageNpcEntity___c_TypeInfo);
  System_Object___ctor(v1, 0);
  WarBoardStageNpcEntity___c_TypeInfo->static_fields->__9 = (struct WarBoardStageNpcEntity___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)WarBoardStageNpcEntity___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void WarBoardStageNpcEntity___c___ctor(WarBoardStageNpcEntity___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t WarBoardStageNpcEntity___c___getScriptIntArrayParam_b__21_0(
        WarBoardStageNpcEntity___c_o *this,
        Il2CppObject *x,
        const MethodInfo *method)
{
  System_String_o *v4; // x0

  if ( (byte_59399F7 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_59399F7 = 1;
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