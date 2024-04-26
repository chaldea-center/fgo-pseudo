void __fastcall WarBoardStageNpcEntity___ctor(WarBoardStageNpcEntity_o *this, const MethodInfo *method)
{
  System_Int32_array **v3; // x1
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  struct System_Int32_array **p_tacticalIds; // x19
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7

  if ( (byte_4353A85 & 1) == 0 )
  {
    sub_B70694(&Method_DataEntityBase_string___ctor__);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_4353A85 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_21C038C *)Method_DataEntityBase_string___ctor__);
  *(_QWORD *)&this->fields.stageId = 0LL;
  this->fields.groupId = 0;
  v3 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.masterName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.masterName, v3, v4, v5, v6, v7, v8, v9);
  this->fields.masterImageId = 0;
  this->fields.servants = 0LL;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.servants, 0LL, v10, v11, v12, v13, v14, v15);
  this->fields.svtEquipIds = 0LL;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.svtEquipIds, 0LL, v16, v17, v18, v19, v20, v21);
  this->fields.aiIds = 0LL;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.aiIds, 0LL, v22, v23, v24, v25, v26, v27);
  this->fields.ratingBaseIds = 0LL;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.ratingBaseIds, 0LL, v28, v29, v30, v31, v32, v33);
  this->fields.tacticalIds = 0LL;
  p_tacticalIds = &this->fields.tacticalIds;
  sub_B70630((BattleServantConfConponent_o *)p_tacticalIds, 0LL, v35, v36, v37, v38, v39, v40);
  p_tacticalIds[3] = (struct System_Int32_array *)&byte_5;
  *(_OWORD *)(p_tacticalIds + 1) = xmmword_32ECDD0;
}


void __fastcall WarBoardStageNpcEntity___ctor_28700820(
        WarBoardStageNpcEntity_o *this,
        WarBoardStageNpcEntity_o *cSrc,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  struct System_String_o *masterName; // x1
  struct System_Int64_array *servants; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  struct System_Int64_array *svtEquipIds; // x1
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  struct System_Int32_array *aiIds; // x1
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  struct System_Int32_array *ratingBaseIds; // x1
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  struct System_Int32_array *tacticalIds; // x1
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7

  if ( (byte_4353A86 & 1) == 0 )
  {
    sub_B70694(&Method_DataEntityBase_string___ctor__);
    byte_4353A86 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_21C038C *)Method_DataEntityBase_string___ctor__);
  if ( !cSrc )
    sub_B7076C(v5, v6);
  this->fields.stageId = cSrc->fields.stageId;
  this->fields.forceId = cSrc->fields.forceId;
  this->fields.groupId = cSrc->fields.groupId;
  masterName = cSrc->fields.masterName;
  this->fields.masterName = masterName;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.masterName,
    (System_Int32_array **)masterName,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  this->fields.masterImageId = cSrc->fields.masterImageId;
  servants = cSrc->fields.servants;
  this->fields.servants = servants;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.servants,
    (System_Int32_array **)servants,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  svtEquipIds = cSrc->fields.svtEquipIds;
  this->fields.svtEquipIds = svtEquipIds;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.svtEquipIds,
    (System_Int32_array **)svtEquipIds,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  aiIds = cSrc->fields.aiIds;
  this->fields.aiIds = aiIds;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.aiIds,
    (System_Int32_array **)aiIds,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  ratingBaseIds = cSrc->fields.ratingBaseIds;
  this->fields.ratingBaseIds = ratingBaseIds;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.ratingBaseIds,
    (System_Int32_array **)ratingBaseIds,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  tacticalIds = cSrc->fields.tacticalIds;
  this->fields.tacticalIds = tacticalIds;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.tacticalIds,
    (System_Int32_array **)tacticalIds,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
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
  if ( (byte_4353A84 & 1) == 0 )
  {
    sub_B70694(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_4353A84 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           stageId,
           forceId,
           groupId,
           (const MethodInfo_1CA2794 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
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
  const MethodInfo *v2; // x3
  _QWORD **v4; // x21
  __int64 v5; // x20
  __int16 v6; // w8
  __int64 v7; // x20
  __int64 v8; // x20
  __int64 v9; // x20

  if ( (byte_4353A8A & 1) == 0 )
  {
    sub_B70694(&Method_System_Array_Empty_int___);
    sub_B70694(&StringLiteral_18216/*"defenseTarget"*/);
    byte_4353A8A = 1;
  }
  v4 = (_QWORD **)Method_System_Array_Empty_int___;
  v5 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
  v6 = *(_WORD *)(v5 + 306);
  if ( (v6 & 1) == 0 )
  {
    sub_B08394(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
    v6 = *(_WORD *)(v5 + 306);
  }
  if ( (v6 & 0x400) != 0 )
  {
    v7 = *v4[6];
    if ( (*(_BYTE *)(v7 + 306) & 1) == 0 )
      sub_B08394(*v4[6]);
    if ( !*(_DWORD *)(v7 + 224) )
    {
      v8 = *v4[6];
      if ( (*(_BYTE *)(v8 + 306) & 1) == 0 )
        sub_B08394(*v4[6]);
      j_il2cpp_runtime_class_init_0(v8);
    }
  }
  v9 = *v4[6];
  if ( (*(_BYTE *)(v9 + 306) & 1) == 0 )
    sub_B08394(*v4[6]);
  return WarBoardStageNpcEntity__getScriptIntArrayParam(
           this,
           (System_String_o *)StringLiteral_18216/*"defenseTarget"*/,
           **(System_Int32_array ***)(v9 + 184),
           v2);
}


System_Int32_array *__fastcall WarBoardStageNpcEntity__getScriptIntArrayParam(
        WarBoardStageNpcEntity_o *this,
        System_String_o *key,
        System_Int32_array *defVal,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ScriptObjListParam; // x0
  System_Collections_Generic_List_BattleActionData_HealData__o *v8; // x19
  WarBoardStageNpcEntity___c_c *v9; // x0
  struct WarBoardStageNpcEntity___c_StaticFields *static_fields; // x8
  System_Converter_BattleActionData_HealData__int__o *_9__22_0; // x20
  Il2CppObject *v12; // x21
  struct WarBoardStageNpcEntity___c_StaticFields *v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Collections_Generic_List_int__o *v20; // x0
  __int64 v21; // x1

  if ( (byte_4353A88 & 1) == 0 )
  {
    sub_B70694(&Method_System_Converter_object__int___ctor__);
    sub_B70694(&System_Converter_object__int__TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_object__ConvertAll_int___);
    sub_B70694(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B70694(&Method_WarBoardStageNpcEntity___c__getScriptIntArrayParam_b__22_0__);
    sub_B70694(&WarBoardStageNpcEntity___c_TypeInfo);
    byte_4353A88 = 1;
  }
  ScriptObjListParam = WarBoardStageNpcEntity__getScriptObjListParam(this, key, (const MethodInfo *)defVal);
  if ( !ScriptObjListParam )
    return defVal;
  v8 = (System_Collections_Generic_List_BattleActionData_HealData__o *)ScriptObjListParam;
  v9 = WarBoardStageNpcEntity___c_TypeInfo;
  if ( (BYTE3(WarBoardStageNpcEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardStageNpcEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardStageNpcEntity___c_TypeInfo);
    v9 = WarBoardStageNpcEntity___c_TypeInfo;
  }
  static_fields = v9->static_fields;
  _9__22_0 = (System_Converter_BattleActionData_HealData__int__o *)static_fields->__9__22_0;
  if ( !_9__22_0 )
  {
    if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      static_fields = WarBoardStageNpcEntity___c_TypeInfo->static_fields;
    }
    v12 = (Il2CppObject *)static_fields->__9;
    _9__22_0 = (System_Converter_BattleActionData_HealData__int__o *)sub_B70764(System_Converter_object__int__TypeInfo);
    System_Converter_BattleActionData_HealData__int____ctor(
      _9__22_0,
      v12,
      Method_WarBoardStageNpcEntity___c__getScriptIntArrayParam_b__22_0__,
      (const MethodInfo_21BC5DC *)Method_System_Converter_object__int___ctor__);
    v13 = WarBoardStageNpcEntity___c_TypeInfo->static_fields;
    v13->__9__22_0 = (struct System_Converter_object__int__o *)_9__22_0;
    sub_B70630(
      (BattleServantConfConponent_o *)&v13->__9__22_0,
      (System_Int32_array **)_9__22_0,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
  }
  v20 = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_BattleActionData_HealData___ConvertAll_int_(
                                                    v8,
                                                    (System_Converter_T__TOutput__o *)_9__22_0,
                                                    (const MethodInfo_195743C *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
  if ( !v20 )
    sub_B7076C(0LL, v21);
  return System_Collections_Generic_List_int___ToArray(
           v20,
           (const MethodInfo_30B82E4 *)Method_System_Collections_Generic_List_int__ToArray__);
}


Il2CppObject *__fastcall WarBoardStageNpcEntity__getScriptObj(
        WarBoardStageNpcEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  Il2CppObject *result; // x0
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4353A89 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    byte_4353A89 = 1;
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
           (const MethodInfo_2F517E8 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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
  System_Collections_Generic_List_object__o *result; // x0
  __int64 v6; // x9
  WarBoardStageNpcEntity_o *v7; // x0
  System_String_o *v8; // x1
  const MethodInfo *v9; // x2

  if ( (byte_4353A87 & 1) == 0 )
  {
    sub_B70694(&System_Collections_Generic_List_object__TypeInfo);
    byte_4353A87 = 1;
  }
  result = (System_Collections_Generic_List_object__o *)WarBoardStageNpcEntity__getScriptObj(this, key, method);
  if ( result )
  {
    v6 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
    if ( *(&result->klass->_2.bitflags2 + 1) < (unsigned int)v6
      || (System_Collections_Generic_List_object__c *)result->klass->_2.typeHierarchy[v6 - 1] != System_Collections_Generic_List_object__TypeInfo )
    {
      sub_B70A60(result);
      return (System_Collections_Generic_List_object__o *)WarBoardStageNpcEntity__getScriptObj(v7, v8, v9);
    }
  }
  return result;
}


void __fastcall WarBoardStageNpcEntity___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_434FCA5 & 1) == 0 )
  {
    sub_B70694(&WarBoardStageNpcEntity___c_TypeInfo);
    byte_434FCA5 = 1;
  }
  v1 = (Il2CppObject *)sub_B70764(WarBoardStageNpcEntity___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)WarBoardStageNpcEntity___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B70630(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
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
  System_String_o *v4; // x0

  if ( (byte_434FCA6 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_1/*""*/);
    byte_434FCA6 = 1;
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