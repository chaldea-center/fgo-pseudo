void __fastcall WarBoardStageNpcEntity___ctor(WarBoardStageNpcEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Int32_array **v8; // x1
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  struct System_Int32_array **p_tacticalIds; // x19
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7

  if ( (byte_42EABD9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_string___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_1/*""*/, v5, v6, v7);
    byte_42EABD9 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23FAD5C *)Method_DataEntityBase_string___ctor__);
  *(_QWORD *)&this->fields.stageId = 0LL;
  this->fields.groupId = 0;
  v8 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.masterName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.masterName, v8, v9, v10, v11, v12, v13, v14);
  this->fields.masterImageId = 0;
  this->fields.servants = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.servants, 0LL, v15, v16, v17, v18, v19, v20);
  this->fields.svtEquipIds = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.svtEquipIds, 0LL, v21, v22, v23, v24, v25, v26);
  this->fields.aiIds = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.aiIds, 0LL, v27, v28, v29, v30, v31, v32);
  this->fields.ratingBaseIds = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.ratingBaseIds, 0LL, v33, v34, v35, v36, v37, v38);
  this->fields.tacticalIds = 0LL;
  p_tacticalIds = &this->fields.tacticalIds;
  sub_B5D560((BattleServantConfConponent_o *)p_tacticalIds, 0LL, v40, v41, v42, v43, v44, v45);
  p_tacticalIds[3] = (struct System_Int32_array *)&byte_5;
  *(_OWORD *)(p_tacticalIds + 1) = xmmword_32A5210;
}


void __fastcall WarBoardStageNpcEntity___ctor_29181272(
        WarBoardStageNpcEntity_o *this,
        WarBoardStageNpcEntity_o *cSrc,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  struct System_String_o *masterName; // x1
  struct System_Int64_array *servants; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  struct System_Int64_array *svtEquipIds; // x1
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  struct System_Int32_array *aiIds; // x1
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  struct System_Int32_array *ratingBaseIds; // x1
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  struct System_Int32_array *tacticalIds; // x1
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7

  if ( (byte_42EABDA & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_string___ctor__, (_DWORD)cSrc, (_DWORD)method, v3);
    byte_42EABDA = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23FAD5C *)Method_DataEntityBase_string___ctor__);
  if ( !cSrc )
    sub_B5D69C(v6, v7);
  this->fields.stageId = cSrc->fields.stageId;
  this->fields.forceId = cSrc->fields.forceId;
  this->fields.groupId = cSrc->fields.groupId;
  masterName = cSrc->fields.masterName;
  this->fields.masterName = masterName;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.masterName,
    (System_Int32_array **)masterName,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  this->fields.masterImageId = cSrc->fields.masterImageId;
  servants = cSrc->fields.servants;
  this->fields.servants = servants;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.servants,
    (System_Int32_array **)servants,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  svtEquipIds = cSrc->fields.svtEquipIds;
  this->fields.svtEquipIds = svtEquipIds;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.svtEquipIds,
    (System_Int32_array **)svtEquipIds,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  aiIds = cSrc->fields.aiIds;
  this->fields.aiIds = aiIds;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.aiIds,
    (System_Int32_array **)aiIds,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  ratingBaseIds = cSrc->fields.ratingBaseIds;
  this->fields.ratingBaseIds = ratingBaseIds;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.ratingBaseIds,
    (System_Int32_array **)ratingBaseIds,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  tacticalIds = cSrc->fields.tacticalIds;
  this->fields.tacticalIds = tacticalIds;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.tacticalIds,
    (System_Int32_array **)tacticalIds,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
  this->fields.searchDepth = cSrc->fields.searchDepth;
  this->fields.pickValue = cSrc->fields.pickValue;
  this->fields.defenseArea = cSrc->fields.defenseArea;
  this->fields.calcEllipsis = cSrc->fields.calcEllipsis;
  this->fields.calcEllipsisMin = cSrc->fields.calcEllipsisMin;
  this->fields.lowerThinkingValue = cSrc->fields.lowerThinkingValue;
}


System_String_o *__fastcall WarBoardStageNpcEntity__CreatePK(
        int32_t stageId,
        int32_t forceId,
        int32_t groupId,
        const MethodInfo *method)
{
  if ( (byte_42EABD8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, forceId, groupId, method);
    byte_42EABD8 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           stageId,
           forceId,
           groupId,
           (const MethodInfo_1AE3440 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall WarBoardStageNpcEntity__CreatePrimaryKey(
        WarBoardStageNpcEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return WarBoardStageNpcEntity__CreatePK(this->fields.stageId, this->fields.forceId, this->fields.groupId, v2);
}


System_Int32_array *__fastcall WarBoardStageNpcEntity__GetDefenseTarget(
        WarBoardStageNpcEntity_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  _QWORD **v8; // x21
  __int64 v9; // x20
  __int16 v10; // w8
  __int64 v11; // x20
  __int64 v12; // x20
  __int64 v13; // x20

  if ( (byte_42EABDE & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Array_Empty_int___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_18169/*"defenseTarget"*/, v5, v6, v7);
    byte_42EABDE = 1;
  }
  v8 = (_QWORD **)Method_System_Array_Empty_int___;
  v9 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
  v10 = *(_WORD *)(v9 + 306);
  if ( (v10 & 1) == 0 )
  {
    sub_AF52C4(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
    v10 = *(_WORD *)(v9 + 306);
  }
  if ( (v10 & 0x400) != 0 )
  {
    v11 = *v8[6];
    if ( (*(_BYTE *)(v11 + 306) & 1) == 0 )
      sub_AF52C4(*v8[6]);
    if ( !*(_DWORD *)(v11 + 224) )
    {
      v12 = *v8[6];
      if ( (*(_BYTE *)(v12 + 306) & 1) == 0 )
        sub_AF52C4(*v8[6]);
      j_il2cpp_runtime_class_init_0(v12);
    }
  }
  v13 = *v8[6];
  if ( (*(_BYTE *)(v13 + 306) & 1) == 0 )
    sub_AF52C4(*v8[6]);
  return WarBoardStageNpcEntity__getScriptIntArrayParam(
           this,
           (System_String_o *)StringLiteral_18169/*"defenseTarget"*/,
           **(System_Int32_array ***)(v13 + 184),
           v3);
}


System_Int32_array *__fastcall WarBoardStageNpcEntity__getScriptIntArrayParam(
        WarBoardStageNpcEntity_o *this,
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
  WarBoardStageNpcEntity___c_c *v24; // x0
  struct WarBoardStageNpcEntity___c_StaticFields *static_fields; // x8
  System_Converter_BattleActionData_HealData__int__o *_9__22_0; // x20
  Il2CppObject *v27; // x21
  struct WarBoardStageNpcEntity___c_StaticFields *v28; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_Collections_Generic_List_int__o *v35; // x0
  __int64 v36; // x1

  if ( (byte_42EABDC & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Converter_object__int___ctor__, (_DWORD)key, (_DWORD)defVal, method);
    sub_B5D5C4(&System_Converter_object__int__TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_object__ConvertAll_int___, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v13, v14, v15);
    sub_B5D5C4(&Method_WarBoardStageNpcEntity___c__getScriptIntArrayParam_b__22_0__, v16, v17, v18);
    sub_B5D5C4(&WarBoardStageNpcEntity___c_TypeInfo, v19, v20, v21);
    byte_42EABDC = 1;
  }
  ScriptObjListParam = WarBoardStageNpcEntity__getScriptObjListParam(this, key, (const MethodInfo *)defVal);
  if ( !ScriptObjListParam )
    return defVal;
  v23 = (System_Collections_Generic_List_BattleActionData_HealData__o *)ScriptObjListParam;
  v24 = WarBoardStageNpcEntity___c_TypeInfo;
  if ( (BYTE3(WarBoardStageNpcEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardStageNpcEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardStageNpcEntity___c_TypeInfo);
    v24 = WarBoardStageNpcEntity___c_TypeInfo;
  }
  static_fields = v24->static_fields;
  _9__22_0 = (System_Converter_BattleActionData_HealData__int__o *)static_fields->__9__22_0;
  if ( !_9__22_0 )
  {
    if ( (BYTE3(v24->vtable._0_Equals.methodPtr) & 4) != 0 && !v24->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v24);
      static_fields = WarBoardStageNpcEntity___c_TypeInfo->static_fields;
    }
    v27 = (Il2CppObject *)static_fields->__9;
    _9__22_0 = (System_Converter_BattleActionData_HealData__int__o *)sub_B5D694(System_Converter_object__int__TypeInfo);
    System_Converter_BattleActionData_HealData__int____ctor(
      _9__22_0,
      v27,
      Method_WarBoardStageNpcEntity___c__getScriptIntArrayParam_b__22_0__,
      (const MethodInfo_23F6FAC *)Method_System_Converter_object__int___ctor__);
    v28 = WarBoardStageNpcEntity___c_TypeInfo->static_fields;
    v28->__9__22_0 = (struct System_Converter_object__int__o *)_9__22_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v28->__9__22_0,
      (System_Int32_array **)_9__22_0,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34);
  }
  v35 = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_BattleActionData_HealData___ConvertAll_int_(
                                                    v23,
                                                    (System_Converter_T__TOutput__o *)_9__22_0,
                                                    (const MethodInfo_192E0B4 *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
  if ( !v35 )
    sub_B5D69C(0LL, v36);
  return System_Collections_Generic_List_int___ToArray(
           v35,
           (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
}


Il2CppObject *__fastcall WarBoardStageNpcEntity__getScriptObj(
        WarBoardStageNpcEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  __int64 v3; // x3
  Il2CppObject *result; // x0
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42EABDD & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__,
      (_DWORD)key,
      (_DWORD)method,
      v3);
    byte_42EABDD = 1;
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


System_Collections_Generic_List_object__o *__fastcall WarBoardStageNpcEntity__getScriptObjListParam(
        WarBoardStageNpcEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Collections_Generic_List_object__o *result; // x0
  __int64 v7; // x9
  WarBoardStageNpcEntity_o *v8; // x0
  System_String_o *v9; // x1
  const MethodInfo *v10; // x2

  if ( (byte_42EABDB & 1) == 0 )
  {
    sub_B5D5C4(&System_Collections_Generic_List_object__TypeInfo, (_DWORD)key, (_DWORD)method, v3);
    byte_42EABDB = 1;
  }
  result = (System_Collections_Generic_List_object__o *)WarBoardStageNpcEntity__getScriptObj(this, key, method);
  if ( result )
  {
    v7 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
    if ( *(&result->klass->_2.bitflags2 + 1) < (unsigned int)v7
      || (System_Collections_Generic_List_object__c *)result->klass->_2.typeHierarchy[v7 - 1] != System_Collections_Generic_List_object__TypeInfo )
    {
      sub_B5D990(result);
      return (System_Collections_Generic_List_object__o *)WarBoardStageNpcEntity__getScriptObj(v8, v9, v10);
    }
  }
  return result;
}


void __fastcall WarBoardStageNpcEntity___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct WarBoardStageNpcEntity___c_StaticFields *static_fields; // x0

  if ( (byte_42E5FDA & 1) == 0 )
  {
    sub_B5D5C4(&WarBoardStageNpcEntity___c_TypeInfo, v1, v2, v3);
    byte_42E5FDA = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(WarBoardStageNpcEntity___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = WarBoardStageNpcEntity___c_TypeInfo->static_fields;
  static_fields->__9 = (struct WarBoardStageNpcEntity___c_o *)v4;
  sub_B5D560(static_fields);
}


void __fastcall WarBoardStageNpcEntity___c___ctor(WarBoardStageNpcEntity___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall WarBoardStageNpcEntity___c___getScriptIntArrayParam_b__22_0(
        WarBoardStageNpcEntity___c_o *this,
        Il2CppObject *x,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_String_o *v5; // x0

  if ( (byte_42E5FDB & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)x, (_DWORD)method, v3);
    byte_42E5FDB = 1;
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