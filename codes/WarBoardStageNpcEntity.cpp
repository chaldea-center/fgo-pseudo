void __fastcall WarBoardStageNpcEntity___ctor(WarBoardStageNpcEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Int32_array **v4; // x1
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  struct System_Int32_array **p_tacticalIds; // x19
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7

  if ( (byte_40FBB0C & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_string___ctor__, method);
    sub_B16FFC(&StringLiteral_1/*""*/, v3);
    byte_40FBB0C = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_266F2D4 *)Method_DataEntityBase_string___ctor__);
  *(_QWORD *)&this->fields.stageId = 0LL;
  this->fields.groupId = 0;
  v4 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.masterName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.masterName, v4, v5, v6, v7, v8, v9, v10);
  this->fields.masterImageId = 0;
  this->fields.servants = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.servants, 0LL, v11, v12, v13, v14, v15, v16);
  this->fields.svtEquipIds = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.svtEquipIds, 0LL, v17, v18, v19, v20, v21, v22);
  this->fields.aiIds = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.aiIds, 0LL, v23, v24, v25, v26, v27, v28);
  this->fields.ratingBaseIds = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.ratingBaseIds, 0LL, v29, v30, v31, v32, v33, v34);
  this->fields.tacticalIds = 0LL;
  p_tacticalIds = &this->fields.tacticalIds;
  sub_B16F98((BattleServantConfConponent_o *)p_tacticalIds, 0LL, v36, v37, v38, v39, v40, v41);
  p_tacticalIds[3] = (struct System_Int32_array *)&byte_5;
  *(_OWORD *)(p_tacticalIds + 1) = xmmword_3137750;
}


void __fastcall WarBoardStageNpcEntity___ctor_28230348(
        WarBoardStageNpcEntity_o *this,
        WarBoardStageNpcEntity_o *cSrc,
        const MethodInfo *method)
{
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  struct System_String_o *masterName; // x1
  struct System_Int64_array *servants; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  struct System_Int64_array *svtEquipIds; // x1
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  struct System_Int32_array *aiIds; // x1
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  struct System_Int32_array *ratingBaseIds; // x1
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  struct System_Int32_array *tacticalIds; // x1
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7

  if ( (byte_40FBB0D & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_string___ctor__, cSrc);
    byte_40FBB0D = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_266F2D4 *)Method_DataEntityBase_string___ctor__);
  if ( !cSrc )
    sub_B170D4();
  this->fields.stageId = cSrc->fields.stageId;
  this->fields.forceId = cSrc->fields.forceId;
  this->fields.groupId = cSrc->fields.groupId;
  masterName = cSrc->fields.masterName;
  this->fields.masterName = masterName;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.masterName,
    (System_Int32_array **)masterName,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  this->fields.masterImageId = cSrc->fields.masterImageId;
  servants = cSrc->fields.servants;
  this->fields.servants = servants;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.servants,
    (System_Int32_array **)servants,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  svtEquipIds = cSrc->fields.svtEquipIds;
  this->fields.svtEquipIds = svtEquipIds;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.svtEquipIds,
    (System_Int32_array **)svtEquipIds,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  aiIds = cSrc->fields.aiIds;
  this->fields.aiIds = aiIds;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.aiIds,
    (System_Int32_array **)aiIds,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  ratingBaseIds = cSrc->fields.ratingBaseIds;
  this->fields.ratingBaseIds = ratingBaseIds;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.ratingBaseIds,
    (System_Int32_array **)ratingBaseIds,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  tacticalIds = cSrc->fields.tacticalIds;
  this->fields.tacticalIds = tacticalIds;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.tacticalIds,
    (System_Int32_array **)tacticalIds,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  this->fields.searchDepth = cSrc->fields.searchDepth;
  this->fields.pickValue = cSrc->fields.pickValue;
  this->fields.defenseArea = cSrc->fields.defenseArea;
  this->fields.calcEllipsis = cSrc->fields.calcEllipsis;
  this->fields.calcEllipsisMin = cSrc->fields.calcEllipsisMin;
  this->fields.lowerThinkingValue = cSrc->fields.lowerThinkingValue;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall WarBoardStageNpcEntity__CreatePK(
        int32_t stageId,
        int32_t forceId,
        int32_t groupId,
        const MethodInfo *method)
{
  if ( (byte_40FBB0B & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&forceId);
    byte_40FBB0B = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           stageId,
           forceId,
           groupId,
           (const MethodInfo_18C25C8 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
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
  __int64 v4; // x1
  _QWORD **v5; // x21
  __int64 v6; // x20
  __int16 v7; // w8
  __int64 v8; // x20
  __int64 v9; // x20
  __int64 v10; // x20

  if ( (byte_40FBB11 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_Empty_int___, method);
    sub_B16FFC(&StringLiteral_17877/*"defenseTarget"*/, v4);
    byte_40FBB11 = 1;
  }
  v5 = (_QWORD **)Method_System_Array_Empty_int___;
  v6 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
  v7 = *(_WORD *)(v6 + 306);
  if ( (v7 & 1) == 0 )
  {
    sub_AAFCFC(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
    v7 = *(_WORD *)(v6 + 306);
  }
  if ( (v7 & 0x400) != 0 )
  {
    v8 = *v5[6];
    if ( (*(_BYTE *)(v8 + 306) & 1) == 0 )
      sub_AAFCFC(*v5[6]);
    if ( !*(_DWORD *)(v8 + 224) )
    {
      v9 = *v5[6];
      if ( (*(_BYTE *)(v9 + 306) & 1) == 0 )
        sub_AAFCFC(*v5[6]);
      j_il2cpp_runtime_class_init_0(v9);
    }
  }
  v10 = *v5[6];
  if ( (*(_BYTE *)(v10 + 306) & 1) == 0 )
    sub_AAFCFC(*v5[6]);
  return WarBoardStageNpcEntity__getScriptIntArrayParam(
           this,
           (System_String_o *)StringLiteral_17877/*"defenseTarget"*/,
           **(System_Int32_array ***)(v10 + 184),
           v2);
}


System_Int32_array *__fastcall WarBoardStageNpcEntity__getScriptIntArrayParam(
        WarBoardStageNpcEntity_o *this,
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
  __int64 v15; // x3
  __int64 v16; // x4
  System_Collections_Generic_List_BattleActionData_HealData__o *v17; // x19
  WarBoardStageNpcEntity___c_c *v18; // x0
  struct WarBoardStageNpcEntity___c_StaticFields *static_fields; // x8
  System_Converter_BattleActionData_HealData__int__o *_9__22_0; // x20
  Il2CppObject *v21; // x21
  struct WarBoardStageNpcEntity___c_StaticFields *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Collections_Generic_List_int__o *v29; // x0

  if ( (byte_40FBB0F & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Converter_object__int___ctor__, key);
    sub_B16FFC(&System_Converter_object__int__TypeInfo, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_object__ConvertAll_int___, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v9);
    sub_B16FFC(&Method_WarBoardStageNpcEntity___c__getScriptIntArrayParam_b__22_0__, v10);
    sub_B16FFC(&WarBoardStageNpcEntity___c_TypeInfo, v11);
    byte_40FBB0F = 1;
  }
  ScriptObjListParam = WarBoardStageNpcEntity__getScriptObjListParam(this, key, (const MethodInfo *)defVal);
  if ( !ScriptObjListParam )
    return defVal;
  v17 = (System_Collections_Generic_List_BattleActionData_HealData__o *)ScriptObjListParam;
  v18 = WarBoardStageNpcEntity___c_TypeInfo;
  if ( (BYTE3(WarBoardStageNpcEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardStageNpcEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardStageNpcEntity___c_TypeInfo);
    v18 = WarBoardStageNpcEntity___c_TypeInfo;
  }
  static_fields = v18->static_fields;
  _9__22_0 = (System_Converter_BattleActionData_HealData__int__o *)static_fields->__9__22_0;
  if ( !_9__22_0 )
  {
    if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 && !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      static_fields = WarBoardStageNpcEntity___c_TypeInfo->static_fields;
    }
    v21 = (Il2CppObject *)static_fields->__9;
    _9__22_0 = (System_Converter_BattleActionData_HealData__int__o *)sub_B170CC(
                                                                       System_Converter_object__int__TypeInfo,
                                                                       v13,
                                                                       v14,
                                                                       v15,
                                                                       v16);
    System_Converter_BattleActionData_HealData__int____ctor(
      _9__22_0,
      v21,
      Method_WarBoardStageNpcEntity___c__getScriptIntArrayParam_b__22_0__,
      (const MethodInfo_266B524 *)Method_System_Converter_object__int___ctor__);
    v22 = WarBoardStageNpcEntity___c_TypeInfo->static_fields;
    v22->__9__22_0 = (struct System_Converter_object__int__o *)_9__22_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v22->__9__22_0,
      (System_Int32_array **)_9__22_0,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
  }
  v29 = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_BattleActionData_HealData___ConvertAll_int_(
                                                    v17,
                                                    (System_Converter_T__TOutput__o *)_9__22_0,
                                                    (const MethodInfo_18FDCCC *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
  if ( !v29 )
    sub_B170D4();
  return System_Collections_Generic_List_int___ToArray(
           v29,
           (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
}


Il2CppObject *__fastcall WarBoardStageNpcEntity__getScriptObj(
        WarBoardStageNpcEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  Il2CppObject *result; // x0
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40FBB10 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, key);
    byte_40FBB10 = 1;
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
           (const MethodInfo_2DA5A18 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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

  if ( (byte_40FBB0E & 1) == 0 )
  {
    sub_B16FFC(&System_Collections_Generic_List_object__TypeInfo, key);
    byte_40FBB0E = 1;
  }
  result = (System_Collections_Generic_List_object__o *)WarBoardStageNpcEntity__getScriptObj(this, key, method);
  if ( result )
  {
    v6 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
    if ( *(&result->klass->_2.bitflags2 + 1) < (unsigned int)v6
      || (System_Collections_Generic_List_object__c *)result->klass->_2.typeHierarchy[v6 - 1] != System_Collections_Generic_List_object__TypeInfo )
    {
      v7 = (WarBoardStageNpcEntity_o *)sub_B173C8(result);
      return (System_Collections_Generic_List_object__o *)WarBoardStageNpcEntity__getScriptObj(v7, v8, v9);
    }
  }
  return result;
}


void __fastcall WarBoardStageNpcEntity___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F787F & 1) == 0 )
  {
    sub_B16FFC(&WarBoardStageNpcEntity___c_TypeInfo, v1);
    byte_40F787F = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(WarBoardStageNpcEntity___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)WarBoardStageNpcEntity___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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

  if ( (byte_40F7880 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1/*""*/, x);
    byte_40F7880 = 1;
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