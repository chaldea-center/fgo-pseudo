void __fastcall AiAllocationInfo___ctor(AiAllocationInfo_o *this, Il2CppObject *obj, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *v30; // x21
  __int64 v31; // x9
  Il2CppObject *ScriptValue_object__object; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  int32_t IntValue; // w0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  int32_t v46; // w20
  __int64 v47; // x0
  __int64 v48; // x1
  struct System_Int32_array *v49; // x1
  __int64 v50; // x0

  if ( (byte_42E6836 & 1) == 0 )
  {
    sub_B5D5C4(&System_Collections_Generic_Dictionary_string__object__TypeInfo, (_DWORD)obj, (_DWORD)method, v3);
    sub_B5D5C4(&Method_EntityScriptUtil_GetScriptValue_List_object___List_int____, v6, v7, v8);
    sub_B5D5C4(&Method_EntityScriptValueConvertLogic_ObjectListToIntList__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Func_List_object___List_int____ctor__, v12, v13, v14);
    sub_B5D5C4(&System_Func_List_object___List_int___TypeInfo, v15, v16, v17);
    sub_B5D5C4(&int___TypeInfo, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_16493/*"aiIds"*/, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_20048/*"individuality"*/, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_16611/*"applySvtType"*/, v27, v28, v29);
    byte_42E6836 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v30 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B5D694(System_Func_List_object___List_int___TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
    v30,
    0LL,
    Method_EntityScriptValueConvertLogic_ObjectListToIntList__,
    (const MethodInfo_2C3041C *)Method_System_Func_List_object___List_int____ctor__);
  if ( obj )
  {
    v31 = *(&System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.bitflags2 + 1);
    if ( *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v31
      || (System_Collections_Generic_Dictionary_string__object__c *)obj->klass->_2.typeHierarchy[v31 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
    {
      v47 = sub_B5D990(obj);
      goto LABEL_13;
    }
  }
  ScriptValue_object__object = EntityScriptUtil__GetScriptValue_object__object_(
                                 (System_Collections_Generic_Dictionary_string__object__o *)obj,
                                 (System_String_o *)StringLiteral_16493/*"aiIds"*/,
                                 (System_Func_TSource__TDestination__o *)v30,
                                 0LL,
                                 (const MethodInfo_1AE6800 *)Method_EntityScriptUtil_GetScriptValue_List_object___List_int____);
  this->fields._AiIdList_k__BackingField = (struct System_Collections_Generic_List_int__o *)ScriptValue_object__object;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)ScriptValue_object__object,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  this->fields._ApplyType_k__BackingField = EntityScriptUtil__GetIntValue(
                                              (System_Collections_Generic_Dictionary_string__object__o *)obj,
                                              (System_String_o *)StringLiteral_16611/*"applySvtType"*/,
                                              0,
                                              0LL);
  IntValue = EntityScriptUtil__GetIntValue(
               (System_Collections_Generic_Dictionary_string__object__o *)obj,
               (System_String_o *)StringLiteral_20048/*"individuality"*/,
               0,
               0LL);
  if ( IntValue < 1 )
  {
    v49 = 0LL;
    goto LABEL_11;
  }
  v46 = IntValue;
  v47 = sub_B5D5DC(int___TypeInfo, 1LL);
  if ( !v47 )
LABEL_13:
    sub_B5D69C(v47, v48);
  v49 = (struct System_Int32_array *)v47;
  if ( !*(_DWORD *)(v47 + 24) )
  {
    v50 = sub_B5D6C8(v47);
    sub_B5D668(v50, 0LL);
  }
  *(_DWORD *)(v47 + 32) = v46;
LABEL_11:
  this->fields._AiIndividuality_k__BackingField = v49;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._AiIndividuality_k__BackingField,
    (System_Int32_array **)v49,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
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
    sub_B5D69C(v6, v7);
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
  sub_B5D560(
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
  sub_B5D560(
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