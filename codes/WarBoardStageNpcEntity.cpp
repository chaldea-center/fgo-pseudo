void __fastcall WarBoardStageNpcEntity___ctor(WarBoardStageNpcEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  void *v6; // x1
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  struct System_Int32_array **p_tacticalIds; // x19
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7

  if ( (byte_4B17245 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_string___ctor__, method, v2);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v4, v5);
    byte_4B17245 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31B2CB8 *)Method_DataEntityBase_string___ctor__);
  *(_QWORD *)&this->fields.stageId = 0LL;
  this->fields.groupId = 0;
  v6 = StringLiteral_1/*""*/;
  this->fields.masterName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.masterName, (int64_t)v6, v7, v8, v9, v10, v11, v12);
  this->fields.masterImageId = 0;
  this->fields.servants = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.servants, 0LL, v13, v14, v15, v16, v17, v18);
  this->fields.svtEquipIds = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.svtEquipIds, 0LL, v19, v20, v21, v22, v23, v24);
  this->fields.aiIds = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.aiIds, 0LL, v25, v26, v27, v28, v29, v30);
  this->fields.ratingBaseIds = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.ratingBaseIds, 0LL, v31, v32, v33, v34, v35, v36);
  this->fields.tacticalIds = 0LL;
  p_tacticalIds = &this->fields.tacticalIds;
  sub_1BCA784((PartyOrganizationUtility_o *)p_tacticalIds, 0LL, v38, v39, v40, v41, v42, v43);
  *(_OWORD *)(p_tacticalIds + 1) = xmmword_BD1E90;
  p_tacticalIds[3] = (struct System_Int32_array *)&byte_5;
}


void __fastcall WarBoardStageNpcEntity___ctor_41089820(
        WarBoardStageNpcEntity_o *this,
        WarBoardStageNpcEntity_o *cSrc,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  struct System_String_o *masterName; // x1
  struct System_Int64_array *servants; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  struct System_Int64_array *svtEquipIds; // x1
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  struct System_Int32_array *aiIds; // x1
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  struct System_Int32_array *ratingBaseIds; // x1
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  struct System_Int32_array *tacticalIds; // x1
  struct System_Int32_array **p_tacticalIds; // x20
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7

  if ( (byte_4B17246 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_string___ctor__, cSrc, method);
    byte_4B17246 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31B2CB8 *)Method_DataEntityBase_string___ctor__);
  if ( !cSrc )
    sub_1BCAA3C(v5, v6);
  *(_QWORD *)&this->fields.stageId = *(_QWORD *)&cSrc->fields.stageId;
  this->fields.groupId = cSrc->fields.groupId;
  masterName = cSrc->fields.masterName;
  this->fields.masterName = masterName;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.masterName, (int64_t)masterName, v7, v8, v9, v10, v11, v12);
  this->fields.masterImageId = cSrc->fields.masterImageId;
  servants = cSrc->fields.servants;
  this->fields.servants = servants;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.servants, (int64_t)servants, v15, v16, v17, v18, v19, v20);
  svtEquipIds = cSrc->fields.svtEquipIds;
  this->fields.svtEquipIds = svtEquipIds;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.svtEquipIds,
    (int64_t)svtEquipIds,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  aiIds = cSrc->fields.aiIds;
  this->fields.aiIds = aiIds;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.aiIds, (int64_t)aiIds, v29, v30, v31, v32, v33, v34);
  ratingBaseIds = cSrc->fields.ratingBaseIds;
  this->fields.ratingBaseIds = ratingBaseIds;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.ratingBaseIds,
    (int64_t)ratingBaseIds,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  tacticalIds = cSrc->fields.tacticalIds;
  this->fields.tacticalIds = tacticalIds;
  p_tacticalIds = &this->fields.tacticalIds;
  sub_1BCA784((PartyOrganizationUtility_o *)p_tacticalIds, (int64_t)tacticalIds, v44, v45, v46, v47, v48, v49);
  *(_OWORD *)(p_tacticalIds + 1) = *(_OWORD *)&cSrc->fields.searchDepth;
  p_tacticalIds[3] = *(struct System_Int32_array **)&cSrc->fields.calcEllipsisMin;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall WarBoardStageNpcEntity__CreatePK(
        int32_t stageId,
        int32_t forceId,
        int32_t groupId,
        const MethodInfo *method)
{
  if ( (byte_4B17244 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&forceId, *(_QWORD *)&groupId);
    byte_4B17244 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           stageId,
           forceId,
           groupId,
           (const MethodInfo_2F11344 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
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
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  long double inited; // q0
  __int64 v6; // x1
  __int64 v7; // x2
  _QWORD *v8; // x20
  __int64 v9; // x8
  __int64 v10; // x0
  __int64 v11; // x0

  if ( (byte_4B1724A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_Empty_int___, method, v2);
    sub_1BCA7E0(&StringLiteral_18734/*"defenseTarget"*/, v6, v7);
    byte_4B1724A = 1;
  }
  v8 = Method_System_Array_Empty_int___;
  v9 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v9 )
  {
    sub_1C1C718(Method_System_Array_Empty_int___, method);
    v9 = v8[7];
  }
  v10 = *(_QWORD *)(v9 + 16);
  if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
    v10 = sub_1C1C6BC(inited);
  if ( !*(_DWORD *)(v10 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v10, method);
  v11 = *(_QWORD *)(v8[7] + 16LL);
  if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
    v11 = sub_1C1C6BC(inited);
  return WarBoardStageNpcEntity__getScriptIntArrayParam(
           this,
           (System_String_o *)StringLiteral_18734/*"defenseTarget"*/,
           **(System_Int32_array ***)(v11 + 184),
           v3);
}


System_Int32_array *__fastcall WarBoardStageNpcEntity__getScriptIntArrayParam(
        WarBoardStageNpcEntity_o *this,
        System_String_o *key,
        System_Int32_array *defVal,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  System_Collections_Generic_List_object__o *ScriptObjListParam; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  System_Collections_Generic_List_object__o *v19; // x19
  WarBoardStageNpcEntity___c_c *v20; // x0
  System_Converter_object__int__o *_9__22_0; // x20
  Il2CppObject *v22; // x21
  struct WarBoardStageNpcEntity___c_StaticFields *static_fields; // x0
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  System_Collections_Generic_List_int__o *v30; // x0
  __int64 v31; // x1

  if ( (byte_4B17248 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Converter_object__int__TypeInfo, key, defVal);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_object__ConvertAll_int___, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v9, v10);
    sub_1BCA7E0(&Method_WarBoardStageNpcEntity___c__getScriptIntArrayParam_b__22_0__, v11, v12);
    sub_1BCA7E0(&WarBoardStageNpcEntity___c_TypeInfo, v13, v14);
    byte_4B17248 = 1;
  }
  ScriptObjListParam = WarBoardStageNpcEntity__getScriptObjListParam(this, key, (const MethodInfo *)defVal);
  if ( !ScriptObjListParam )
    return defVal;
  v19 = ScriptObjListParam;
  v20 = WarBoardStageNpcEntity___c_TypeInfo;
  if ( !WarBoardStageNpcEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardStageNpcEntity___c_TypeInfo, v16);
    v20 = WarBoardStageNpcEntity___c_TypeInfo;
  }
  _9__22_0 = v20->static_fields->__9__22_0;
  if ( !_9__22_0 )
  {
    if ( !v20->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v20, v16);
      v20 = WarBoardStageNpcEntity___c_TypeInfo;
    }
    v22 = (Il2CppObject *)v20->static_fields->__9;
    _9__22_0 = (System_Converter_object__int__o *)sub_1BCAA2C(System_Converter_object__int__TypeInfo, v16, v17, v18);
    System_Converter_object__int____ctor(
      _9__22_0,
      v22,
      Method_WarBoardStageNpcEntity___c__getScriptIntArrayParam_b__22_0__,
      0LL);
    static_fields = WarBoardStageNpcEntity___c_TypeInfo->static_fields;
    static_fields->__9__22_0 = _9__22_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__22_0,
      (int64_t)_9__22_0,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29);
  }
  v30 = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_object___ConvertAll_int_(
                                                    v19,
                                                    (System_Converter_T__TOutput__o *)_9__22_0,
                                                    (const MethodInfo_2E42B5C *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
  if ( !v30 )
    sub_1BCAA3C(0LL, v31);
  return System_Collections_Generic_List_int___ToArray(
           v30,
           (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
}


Il2CppObject *__fastcall WarBoardStageNpcEntity__getScriptObj(
        WarBoardStageNpcEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  Il2CppObject *result; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B17249 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, key, method);
    byte_4B17249 = 1;
  }
  result = (Il2CppObject *)this->fields.script;
  if ( result )
  {
    value = 0LL;
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)result,
           (Il2CppObject *)key,
           &value,
           (const MethodInfo_3266A6C *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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


System_Collections_Generic_List_object__o *__fastcall WarBoardStageNpcEntity__getScriptObjListParam(
        WarBoardStageNpcEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *result; // x0
  __int64 methodPtr_low; // x9
  WarBoardStageNpcEntity_o *v7; // x0
  System_String_o *v8; // x1
  const MethodInfo *v9; // x2

  if ( (byte_4B17247 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Collections_Generic_List_object__TypeInfo, key, method);
    byte_4B17247 = 1;
  }
  result = (System_Collections_Generic_List_object__o *)WarBoardStageNpcEntity__getScriptObj(this, key, method);
  if ( result )
  {
    methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (System_Collections_Generic_List_object__c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != System_Collections_Generic_List_object__TypeInfo )
    {
      sub_1BCACFC(result);
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
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B1724B & 1) == 0 )
  {
    sub_1BCA7E0(&WarBoardStageNpcEntity___c_TypeInfo, v1, v2);
    byte_4B1724B = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(WarBoardStageNpcEntity___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  WarBoardStageNpcEntity___c_TypeInfo->static_fields->__9 = (struct WarBoardStageNpcEntity___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)WarBoardStageNpcEntity___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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

  if ( (byte_4B1724C & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, x, method);
    byte_4B1724C = 1;
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