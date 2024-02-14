void __fastcall AiAllocationInfo___ctor(AiAllocationInfo_o *this, Il2CppObject *obj, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x2
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *v15; // x21
  __int64 v16; // x9
  Il2CppObject *ScriptValue_object__object; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  int32_t IntValue; // w0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  int32_t v31; // w20
  __int64 v32; // x0
  struct System_Int32_array *v33; // x1
  __int64 v34; // x0

  if ( (byte_4212948 & 1) == 0 )
  {
    sub_B0D8A4(&System_Collections_Generic_Dictionary_string__object__TypeInfo, obj);
    sub_B0D8A4(&Method_EntityScriptUtil_GetScriptValue_List_object___List_int____, v5);
    sub_B0D8A4(&Method_EntityScriptValueConvertLogic_ObjectListToIntList__, v6);
    sub_B0D8A4(&Method_System_Func_List_object___List_int____ctor__, v7);
    sub_B0D8A4(&System_Func_List_object___List_int___TypeInfo, v8);
    sub_B0D8A4(&int___TypeInfo, v9);
    sub_B0D8A4(&StringLiteral_16344/*"aiIds"*/, v10);
    sub_B0D8A4(&StringLiteral_19859/*"individuality"*/, v11);
    sub_B0D8A4(&StringLiteral_16462/*"applySvtType"*/, v12);
    byte_4212948 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v15 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B0D974(
                                                                                          System_Func_List_object___List_int___TypeInfo,
                                                                                          v13,
                                                                                          v14);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
    v15,
    0LL,
    Method_EntityScriptValueConvertLogic_ObjectListToIntList__,
    (const MethodInfo_261A104 *)Method_System_Func_List_object___List_int____ctor__);
  if ( obj )
  {
    v16 = *(&System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.bitflags2 + 1);
    if ( *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v16
      || (System_Collections_Generic_Dictionary_string__object__c *)obj->klass->_2.typeHierarchy[v16 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
    {
      v32 = sub_B0DC70(obj);
      goto LABEL_13;
    }
  }
  ScriptValue_object__object = EntityScriptUtil__GetScriptValue_object__object_(
                                 (System_Collections_Generic_Dictionary_string__object__o *)obj,
                                 (System_String_o *)StringLiteral_16344/*"aiIds"*/,
                                 (System_Func_TSource__TDestination__o *)v15,
                                 0LL,
                                 (const MethodInfo_1716B5C *)Method_EntityScriptUtil_GetScriptValue_List_object___List_int____);
  this->fields._AiIdList_k__BackingField = (struct System_Collections_Generic_List_int__o *)ScriptValue_object__object;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)ScriptValue_object__object,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  this->fields._ApplyType_k__BackingField = EntityScriptUtil__GetIntValue(
                                              (System_Collections_Generic_Dictionary_string__object__o *)obj,
                                              (System_String_o *)StringLiteral_16462/*"applySvtType"*/,
                                              0,
                                              0LL);
  IntValue = EntityScriptUtil__GetIntValue(
               (System_Collections_Generic_Dictionary_string__object__o *)obj,
               (System_String_o *)StringLiteral_19859/*"individuality"*/,
               0,
               0LL);
  if ( IntValue < 1 )
  {
    v33 = 0LL;
    goto LABEL_11;
  }
  v31 = IntValue;
  v32 = sub_B0D8BC(int___TypeInfo, 1LL);
  if ( !v32 )
LABEL_13:
    sub_B0D97C(v32);
  v33 = (struct System_Int32_array *)v32;
  if ( !*(_DWORD *)(v32 + 24) )
  {
    v34 = sub_B0D9A8(v32);
    sub_B0D948(v34, 0LL);
  }
  *(_DWORD *)(v32 + 32) = v31;
LABEL_11:
  this->fields._AiIndividuality_k__BackingField = v33;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._AiIndividuality_k__BackingField,
    (System_Int32_array **)v33,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
}


bool __fastcall AiAllocationInfo__IsMatch(
        AiAllocationInfo_o *this,
        BattleServantData_o *svt,
        System_Int32_array *svtIndividuality,
        const MethodInfo *method)
{
  _BOOL8 v6; // x0
  const MethodInfo *v7; // x3
  struct BattleDeckServantData_o *deckSvt; // x8

  v6 = Individuality__CheckIndividualities(svtIndividuality, this->fields._AiIndividuality_k__BackingField, 0LL);
  if ( !v6 )
    return 0;
  if ( !svt || (deckSvt = svt->fields.deckSvt) == 0LL )
    sub_B0D97C(v6);
  return AiAllocationInfo__IsMatchApplyType(this, deckSvt->fields.isFollowerSvt, svt->fields.followerType, v7);
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
  sub_B0D840(
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
  sub_B0D840(
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