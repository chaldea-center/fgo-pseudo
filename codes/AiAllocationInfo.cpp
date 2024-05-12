void __fastcall AiAllocationInfo___ctor(AiAllocationInfo_o *this, Il2CppObject *obj, const MethodInfo *method)
{
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *v5; // x21
  __int64 v6; // x9
  Il2CppObject *ScriptValue_object__object; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  int32_t IntValue; // w0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  int32_t v21; // w20
  __int64 v22; // x0
  __int64 v23; // x1
  struct System_Int32_array *v24; // x1
  __int64 v25; // x0

  if ( (byte_438A467 & 1) == 0 )
  {
    sub_B775C4(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_B775C4(&Method_EntityScriptUtil_GetScriptValue_List_object___List_int____);
    sub_B775C4(&Method_EntityScriptValueConvertLogic_ObjectListToIntList__);
    sub_B775C4(&Method_System_Func_List_object___List_int____ctor__);
    sub_B775C4(&System_Func_List_object___List_int___TypeInfo);
    sub_B775C4(&int___TypeInfo);
    sub_B775C4(&StringLiteral_16615/*"aiIds"*/);
    sub_B775C4(&StringLiteral_20202/*"individuality"*/);
    sub_B775C4(&StringLiteral_16734/*"applySvtType"*/);
    byte_438A467 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v5 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B77694(System_Func_List_object___List_int___TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
    v5,
    0LL,
    Method_EntityScriptValueConvertLogic_ObjectListToIntList__,
    (const MethodInfo_29EAA10 *)Method_System_Func_List_object___List_int____ctor__);
  if ( obj )
  {
    v6 = *(&System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.bitflags2 + 1);
    if ( *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6
      || (System_Collections_Generic_Dictionary_string__object__c *)obj->klass->_2.typeHierarchy[v6 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
    {
      v22 = sub_B77990(obj);
      goto LABEL_13;
    }
  }
  ScriptValue_object__object = EntityScriptUtil__GetScriptValue_object__object_(
                                 (System_Collections_Generic_Dictionary_string__object__o *)obj,
                                 (System_String_o *)StringLiteral_16615/*"aiIds"*/,
                                 (System_Func_TSource__TDestination__o *)v5,
                                 0LL,
                                 (const MethodInfo_1D1A9A4 *)Method_EntityScriptUtil_GetScriptValue_List_object___List_int____);
  this->fields._AiIdList_k__BackingField = (struct System_Collections_Generic_List_int__o *)ScriptValue_object__object;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)ScriptValue_object__object,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  this->fields._ApplyType_k__BackingField = EntityScriptUtil__GetIntValue(
                                              (System_Collections_Generic_Dictionary_string__object__o *)obj,
                                              (System_String_o *)StringLiteral_16734/*"applySvtType"*/,
                                              0,
                                              0LL);
  IntValue = EntityScriptUtil__GetIntValue(
               (System_Collections_Generic_Dictionary_string__object__o *)obj,
               (System_String_o *)StringLiteral_20202/*"individuality"*/,
               0,
               0LL);
  if ( IntValue < 1 )
  {
    v24 = 0LL;
    goto LABEL_11;
  }
  v21 = IntValue;
  v22 = sub_B775DC(int___TypeInfo, 1LL);
  if ( !v22 )
LABEL_13:
    sub_B7769C(v22, v23);
  v24 = (struct System_Int32_array *)v22;
  if ( !*(_DWORD *)(v22 + 24) )
  {
    v25 = sub_B776C8(v22);
    sub_B77668(v25, 0LL);
  }
  *(_DWORD *)(v22 + 32) = v21;
LABEL_11:
  this->fields._AiIndividuality_k__BackingField = v24;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields._AiIndividuality_k__BackingField,
    (System_Int32_array **)v24,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
}


bool __fastcall AiAllocationInfo__IsMatch(
        AiAllocationInfo_o *this,
        BattleServantData_o *svt,
        System_Int32_array *svtIndividuality,
        const MethodInfo *method)
{
  _BOOL8 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  struct BattleDeckServantData_o *deckSvt; // x8

  v6 = Individuality__CheckIndividualities(svtIndividuality, this->fields._AiIndividuality_k__BackingField, 0LL);
  if ( !v6 )
    return 0;
  if ( !svt || (deckSvt = svt->fields.deckSvt) == 0LL )
    sub_B7769C(v6, v7);
  return AiAllocationInfo__IsMatchApplyType(this, deckSvt->fields.isFollowerSvt, svt->fields.followerType, v8);
}


bool __fastcall AiAllocationInfo__IsMatchApplyType(
        AiAllocationInfo_o *this,
        bool isFollowerSvt,
        int32_t followerType,
        const MethodInfo *method)
{
  int32_t ApplyType_k__BackingField; // w8
  int v5; // w9
  bool isNpc; // w0

  ApplyType_k__BackingField = this->fields._ApplyType_k__BackingField;
  if ( ApplyType_k__BackingField < 1 )
    return 1;
  if ( followerType == 1 )
  {
    v5 = 2;
  }
  else
  {
    isNpc = Follower__isNpc(followerType, 0LL);
    if ( !isNpc && isFollowerSvt )
      return 0;
    ApplyType_k__BackingField = this->fields._ApplyType_k__BackingField;
    if ( isNpc )
      v5 = 4;
    else
      v5 = 1;
  }
  return (ApplyType_k__BackingField & v5) != 0;
}


System_Collections_Generic_List_int__o *__fastcall AiAllocationInfo__get_AiIdList(
        AiAllocationInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._AiIdList_k__BackingField;
}


System_Int32_array *__fastcall AiAllocationInfo__get_AiIndividuality(
        AiAllocationInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._AiIndividuality_k__BackingField;
}


int32_t __fastcall AiAllocationInfo__get_ApplyType(AiAllocationInfo_o *this, const MethodInfo *method)
{
  return this->fields._ApplyType_k__BackingField;
}


void __fastcall AiAllocationInfo__set_AiIdList(
        AiAllocationInfo_o *this,
        System_Collections_Generic_List_int__o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._AiIdList_k__BackingField = value;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall AiAllocationInfo__set_AiIndividuality(
        AiAllocationInfo_o *this,
        System_Int32_array *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._AiIndividuality_k__BackingField = value;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields._AiIndividuality_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall AiAllocationInfo__set_ApplyType(AiAllocationInfo_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._ApplyType_k__BackingField = value;
}