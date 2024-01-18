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
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *v13; // x21
  __int64 v14; // x9
  Il2CppObject *ScriptValue_object__object; // x0
  int32_t IntValue; // w0
  int32_t v17; // w20
  __int64 v18; // x0
  __int64 v19; // x1
  struct System_Int32_array *v20; // x1
  __int64 v21; // x0

  if ( (byte_4185A57 & 1) == 0 )
  {
    sub_B2C35C(&System_Collections_Generic_Dictionary_string__object__TypeInfo, obj);
    sub_B2C35C(&Method_EntityScriptUtil_GetScriptValue_List_object___List_int____, v5);
    sub_B2C35C(&Method_EntityScriptValueConvertLogic_ObjectListToIntList__, v6);
    sub_B2C35C(&Method_System_Func_List_object___List_int____ctor__, v7);
    sub_B2C35C(&System_Func_List_object___List_int___TypeInfo, v8);
    sub_B2C35C(&int___TypeInfo, v9);
    sub_B2C35C(&StringLiteral_16295/*"aiIds"*/, v10);
    sub_B2C35C(&StringLiteral_19797/*"individuality"*/, v11);
    sub_B2C35C(&StringLiteral_16413/*"applySvtType"*/, v12);
    byte_4185A57 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v13 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B2C42C(System_Func_List_object___List_int___TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
    v13,
    0LL,
    Method_EntityScriptValueConvertLogic_ObjectListToIntList__,
    (const MethodInfo_2713350 *)Method_System_Func_List_object___List_int____ctor__);
  if ( obj )
  {
    v14 = *(&System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.bitflags2 + 1);
    if ( *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v14
      || (System_Collections_Generic_Dictionary_string__object__c *)obj->klass->_2.typeHierarchy[v14 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
    {
      v18 = sub_B2C728(obj);
      goto LABEL_13;
    }
  }
  ScriptValue_object__object = EntityScriptUtil__GetScriptValue_object__object_(
                                 (System_Collections_Generic_Dictionary_string__object__o *)obj,
                                 (System_String_o *)StringLiteral_16295/*"aiIds"*/,
                                 (System_Func_TSource__TDestination__o *)v13,
                                 0LL,
                                 (const MethodInfo_1735FA0 *)Method_EntityScriptUtil_GetScriptValue_List_object___List_int____);
  this->fields._AiIdList_k__BackingField = (struct System_Collections_Generic_List_int__o *)ScriptValue_object__object;
  sub_B2C2F8(&this->fields, ScriptValue_object__object);
  this->fields._ApplyType_k__BackingField = EntityScriptUtil__GetIntValue(
                                              (System_Collections_Generic_Dictionary_string__object__o *)obj,
                                              (System_String_o *)StringLiteral_16413/*"applySvtType"*/,
                                              0,
                                              0LL);
  IntValue = EntityScriptUtil__GetIntValue(
               (System_Collections_Generic_Dictionary_string__object__o *)obj,
               (System_String_o *)StringLiteral_19797/*"individuality"*/,
               0,
               0LL);
  if ( IntValue < 1 )
  {
    v20 = 0LL;
    goto LABEL_11;
  }
  v17 = IntValue;
  v18 = sub_B2C374(int___TypeInfo, 1LL);
  if ( !v18 )
LABEL_13:
    sub_B2C434(v18, v19);
  v20 = (struct System_Int32_array *)v18;
  if ( !*(_DWORD *)(v18 + 24) )
  {
    v21 = sub_B2C460(v18);
    sub_B2C400(v21, 0LL);
  }
  *(_DWORD *)(v18 + 32) = v17;
LABEL_11:
  this->fields._AiIndividuality_k__BackingField = v20;
  sub_B2C2F8(&this->fields._AiIndividuality_k__BackingField, v20);
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
    sub_B2C434(v6, v7);
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
  this->fields._AiIdList_k__BackingField = value;
  sub_B2C2F8(&this->fields, value);
}


void __fastcall AiAllocationInfo__set_AiIndividuality(
        AiAllocationInfo_o *this,
        System_Int32_array *value,
        const MethodInfo *method)
{
  this->fields._AiIndividuality_k__BackingField = value;
  sub_B2C2F8(&this->fields._AiIndividuality_k__BackingField, value);
}


void __fastcall AiAllocationInfo__set_ApplyType(AiAllocationInfo_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._ApplyType_k__BackingField = value;
}