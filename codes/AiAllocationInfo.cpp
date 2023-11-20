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
  __int64 v15; // x3
  __int64 v16; // x4
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *v17; // x21
  __int64 v18; // x9
  Il2CppObject *ScriptValue_object__object; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  int32_t IntValue; // w0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  int32_t v33; // w20
  __int64 v34; // x0
  struct System_Int32_array *v35; // x1

  if ( (byte_40F7EB9 & 1) == 0 )
  {
    sub_B16FFC(&System_Collections_Generic_Dictionary_string__object__TypeInfo, obj);
    sub_B16FFC(&Method_EntityScriptUtil_GetScriptValue_List_object___List_int____, v5);
    sub_B16FFC(&Method_EntityScriptValueConvertLogic_ObjectListToIntList__, v6);
    sub_B16FFC(&Method_System_Func_List_object___List_int____ctor__, v7);
    sub_B16FFC(&System_Func_List_object___List_int___TypeInfo, v8);
    sub_B16FFC(&int___TypeInfo, v9);
    sub_B16FFC(&StringLiteral_16230, v10);
    sub_B16FFC(&StringLiteral_19723, v11);
    sub_B16FFC(&StringLiteral_16349, v12);
    byte_40F7EB9 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v17 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B170CC(
                                                                                          System_Func_List_object___List_int___TypeInfo,
                                                                                          v13,
                                                                                          v14,
                                                                                          v15,
                                                                                          v16);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
    v17,
    0LL,
    Method_EntityScriptValueConvertLogic_ObjectListToIntList__,
    (const MethodInfo_2B6C28C *)Method_System_Func_List_object___List_int____ctor__);
  if ( obj )
  {
    v18 = *(&System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.bitflags2 + 1);
    if ( *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v18
      || (System_Collections_Generic_Dictionary_string__object__c *)obj->klass->_2.typeHierarchy[v18 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
    {
      sub_B173C8(obj);
      goto LABEL_13;
    }
  }
  ScriptValue_object__object = EntityScriptUtil__GetScriptValue_object__object_(
                                 (System_Collections_Generic_Dictionary_string__object__o *)obj,
                                 (System_String_o *)StringLiteral_16230,
                                 (System_Func_TSource__TDestination__o *)v17,
                                 0LL,
                                 (const MethodInfo_18C5838 *)Method_EntityScriptUtil_GetScriptValue_List_object___List_int____);
  this->fields._AiIdList_k__BackingField = (struct System_Collections_Generic_List_int__o *)ScriptValue_object__object;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)ScriptValue_object__object,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  this->fields._ApplyType_k__BackingField = EntityScriptUtil__GetIntValue(
                                              (System_Collections_Generic_Dictionary_string__object__o *)obj,
                                              (System_String_o *)StringLiteral_16349,
                                              0,
                                              0LL);
  IntValue = EntityScriptUtil__GetIntValue(
               (System_Collections_Generic_Dictionary_string__object__o *)obj,
               (System_String_o *)StringLiteral_19723,
               0,
               0LL);
  if ( IntValue < 1 )
  {
    v35 = 0LL;
    goto LABEL_11;
  }
  v33 = IntValue;
  v34 = sub_B17014(int___TypeInfo, 1LL, v27);
  if ( !v34 )
LABEL_13:
    sub_B170D4();
  v35 = (struct System_Int32_array *)v34;
  if ( !*(_DWORD *)(v34 + 24) )
  {
    sub_B17100(v34, v34, v27);
    sub_B170A0();
  }
  *(_DWORD *)(v34 + 32) = v33;
LABEL_11:
  this->fields._AiIndividuality_k__BackingField = v35;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._AiIndividuality_k__BackingField,
    (System_Int32_array **)v35,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
}


bool __fastcall AiAllocationInfo__IsMatch(
        AiAllocationInfo_o *this,
        BattleServantData_o *svt,
        System_Int32_array *svtIndividuality,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x3
  struct BattleDeckServantData_o *deckSvt; // x8

  if ( !Individuality__CheckIndividualities(svtIndividuality, this->fields._AiIndividuality_k__BackingField, 0LL) )
    return 0;
  if ( !svt || (deckSvt = svt->fields.deckSvt) == 0LL )
    sub_B170D4();
  return AiAllocationInfo__IsMatchApplyType(this, deckSvt->fields.isFollowerSvt, svt->fields.followerType, v6);
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
  sub_B16F98(
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
  sub_B16F98(
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