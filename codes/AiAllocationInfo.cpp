void __fastcall AiAllocationInfo___ctor(AiAllocationInfo_o *this, Il2CppObject *obj, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Func_object__object__o *v12; // x21
  __int64 methodPtr_low; // x9
  Il2CppObject *ScriptValue_object__object; // x0
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  int32_t IntValue; // w0
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  int32_t v28; // w20
  __int64 v29; // x0
  __int64 v30; // x1
  struct System_Int32_array *v31; // x1

  if ( (byte_4BFD20B & 1) == 0 )
  {
    sub_1C2E12C(&System_Collections_Generic_Dictionary_string__object__TypeInfo, obj);
    sub_1C2E12C(&Method_EntityScriptUtil_GetScriptValue_List_object___List_int____, v5);
    sub_1C2E12C(&Method_EntityScriptValueConvertLogic_ObjectListToIntList__, v6);
    sub_1C2E12C(&System_Func_List_object___List_int___TypeInfo, v7);
    sub_1C2E12C(&int___TypeInfo, v8);
    sub_1C2E12C(&StringLiteral_17013/*"aiIds"*/, v9);
    sub_1C2E12C(&StringLiteral_21028/*"individuality"*/, v10);
    sub_1C2E12C(&StringLiteral_17147/*"applySvtType"*/, v11);
    byte_4BFD20B = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v12 = (System_Func_object__object__o *)sub_1C2E378(System_Func_List_object___List_int___TypeInfo);
  System_Func_object__object____ctor(v12, 0LL, Method_EntityScriptValueConvertLogic_ObjectListToIntList__, 0LL);
  if ( obj )
  {
    methodPtr_low = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(obj->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
      || (System_Collections_Generic_Dictionary_string__object__c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
    {
      sub_1C2E648(obj);
      goto LABEL_13;
    }
  }
  ScriptValue_object__object = EntityScriptUtil__GetScriptValue_object__object_(
                                 (System_Collections_Generic_Dictionary_string__object__o *)obj,
                                 (System_String_o *)StringLiteral_17013/*"aiIds"*/,
                                 (System_Func_TSource__TDestination__o *)v12,
                                 0LL,
                                 (const MethodInfo_2FD7FC8 *)Method_EntityScriptUtil_GetScriptValue_List_object___List_int____);
  this->fields._AiIdList_k__BackingField = (struct System_Collections_Generic_List_int__o *)ScriptValue_object__object;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields,
    (int64_t)ScriptValue_object__object,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  this->fields._ApplyType_k__BackingField = EntityScriptUtil__GetIntValue(
                                              (System_Collections_Generic_Dictionary_string__object__o *)obj,
                                              (System_String_o *)StringLiteral_17147/*"applySvtType"*/,
                                              0,
                                              0LL);
  IntValue = EntityScriptUtil__GetIntValue(
               (System_Collections_Generic_Dictionary_string__object__o *)obj,
               (System_String_o *)StringLiteral_21028/*"individuality"*/,
               0,
               0LL);
  if ( IntValue < 1 )
  {
    v31 = 0LL;
    goto LABEL_11;
  }
  v28 = IntValue;
  v29 = sub_1C2E1D4(int___TypeInfo, 1LL);
  if ( !v29 )
LABEL_13:
    sub_1C2E388(v29, v30);
  v31 = (struct System_Int32_array *)v29;
  if ( !*(_DWORD *)(v29 + 24) )
    sub_1C2E390(v29, v29);
  *(_DWORD *)(v29 + 32) = v28;
LABEL_11:
  this->fields._AiIndividuality_k__BackingField = v31;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields._AiIndividuality_k__BackingField,
    (int64_t)v31,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
}


bool __fastcall AiAllocationInfo__IsMatch(
        AiAllocationInfo_o *this,
        BattleServantData_o *svt,
        System_Int32_array *svtIndividuality,
        const MethodInfo *method)
{
  System_Int32_array *AiIndividuality_k__BackingField; // x22
  _BOOL8 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x3
  struct BattleDeckServantData_o *deckSvt; // x8

  if ( (byte_4BFD20C & 1) == 0 )
  {
    sub_1C2E12C(&Individuality_TypeInfo, svt);
    byte_4BFD20C = 1;
  }
  AiIndividuality_k__BackingField = this->fields._AiIndividuality_k__BackingField;
  if ( !Individuality_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Individuality_TypeInfo);
  v8 = Individuality__CheckIndividualities(svtIndividuality, AiIndividuality_k__BackingField, 0LL);
  if ( !v8 )
    return 0;
  if ( !svt || (deckSvt = svt->fields.deckSvt) == 0LL )
    sub_1C2E388(v8, v9);
  return AiAllocationInfo__IsMatchApplyType(this, deckSvt->fields.isFollowerSvt, svt->fields.followerType, v10);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._AiIdList_k__BackingField = value;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields, (int64_t)value, (int64_t)method, v3, v4, v5, v6, v7);
}


void __fastcall AiAllocationInfo__set_AiIndividuality(
        AiAllocationInfo_o *this,
        System_Int32_array *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._AiIndividuality_k__BackingField = value;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields._AiIndividuality_k__BackingField,
    (int64_t)value,
    (int64_t)method,
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