void AiAllocationInfo___ctor(AiAllocationInfo_o *this, Il2CppObject *obj, const MethodInfo *method)
{
  System_Func_object__object__o *v5; // x21
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 naturalAligment; // x9
  Il2CppObject *ScriptValue_object__object; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  int32_t IntValue; // w0
  System_String_o *v17; // x1
  int32_t v18; // w0
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  int32_t v25; // w20
  __int64 v26; // x0
  __int64 v27; // x1
  struct System_Int32_array *v28; // x1

  if ( (byte_59380CC & 1) == 0 )
  {
    sub_21FFC50(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_21FFC50(&Method_EntityScriptUtil_GetScriptValue_List_object___List_int____);
    sub_21FFC50(&Method_EntityScriptValueConvertLogic_ObjectListToIntList__);
    sub_21FFC50(&System_Func_List_object___List_int___TypeInfo);
    sub_21FFC50(&int___TypeInfo);
    sub_21FFC50(&StringLiteral_17384/*"aiIds"*/);
    sub_21FFC50(&StringLiteral_21740/*"individuality"*/);
    sub_21FFC50(&StringLiteral_17503/*"applySvtType"*/);
    byte_59380CC = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  v5 = (System_Func_object__object__o *)sub_21FFEBC(System_Func_List_object___List_int___TypeInfo);
  System_Func_object__object____ctor(v5, 0, Method_EntityScriptValueConvertLogic_ObjectListToIntList__, 0);
  if ( obj )
  {
    naturalAligment = System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.naturalAligment;
    if ( obj->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (System_Collections_Generic_Dictionary_string__object__c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
    {
      sub_220024C(obj, System_Collections_Generic_Dictionary_string__object__TypeInfo, v6, v7);
      goto LABEL_13;
    }
  }
  ScriptValue_object__object = EntityScriptUtil__GetScriptValue_object__object_(
                                 (System_Collections_Generic_Dictionary_string__object__o *)obj,
                                 (System_String_o *)StringLiteral_17384/*"aiIds"*/,
                                 (System_Func_TSource__TDestination__o *)v5,
                                 0,
                                 (const MethodInfo_382DCA0 *)Method_EntityScriptUtil_GetScriptValue_List_object___List_int____);
  this->fields._AiIdList_k__BackingField = (struct System_Collections_Generic_List_int__o *)ScriptValue_object__object;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields,
    (int32_t)ScriptValue_object__object,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  IntValue = EntityScriptUtil__GetIntValue(
               (System_Collections_Generic_Dictionary_string__object__o *)obj,
               (System_String_o *)StringLiteral_17503/*"applySvtType"*/,
               0,
               0);
  v17 = (System_String_o *)StringLiteral_21740/*"individuality"*/;
  this->fields._ApplyType_k__BackingField = IntValue;
  v18 = EntityScriptUtil__GetIntValue((System_Collections_Generic_Dictionary_string__object__o *)obj, v17, 0, 0);
  if ( v18 < 1 )
  {
    v28 = 0;
    goto LABEL_11;
  }
  v25 = v18;
  v26 = sub_21FFD10(int___TypeInfo, 1);
  if ( !v26 )
LABEL_13:
    sub_21FFECC(v26, v27);
  v28 = (struct System_Int32_array *)v26;
  if ( !*(_DWORD *)(v26 + 24) )
    sub_21FFED4(v26);
  *(_DWORD *)(v26 + 32) = v25;
LABEL_11:
  this->fields._AiIndividuality_k__BackingField = v28;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._AiIndividuality_k__BackingField,
    (int32_t)v28,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
}


bool AiAllocationInfo__IsMatch(
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

  if ( (byte_59380CD & 1) == 0 )
  {
    sub_21FFC50(&Individuality_TypeInfo);
    byte_59380CD = 1;
  }
  AiIndividuality_k__BackingField = this->fields._AiIndividuality_k__BackingField;
  if ( !*(&Individuality_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(Individuality_TypeInfo, svt);
  v8 = Individuality__CheckIndividualities(svtIndividuality, AiIndividuality_k__BackingField, 0);
  if ( !v8 )
    return 0;
  if ( !svt || (deckSvt = svt->fields.deckSvt) == 0 )
    sub_21FFECC(v8, v9);
  return AiAllocationInfo__IsMatchApplyType(this, deckSvt->fields.isFollowerSvt, svt->fields.followerType, v10);
}


bool AiAllocationInfo__IsMatchApplyType(
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
    isNpc = Follower__isNpc(followerType, 0);
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


System_Collections_Generic_List_int__o *AiAllocationInfo__get_AiIdList(
        AiAllocationInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._AiIdList_k__BackingField;
}


System_Int32_array *AiAllocationInfo__get_AiIndividuality(AiAllocationInfo_o *this, const MethodInfo *method)
{
  return this->fields._AiIndividuality_k__BackingField;
}


int32_t AiAllocationInfo__get_ApplyType(AiAllocationInfo_o *this, const MethodInfo *method)
{
  return this->fields._ApplyType_k__BackingField;
}


void AiAllocationInfo__set_AiIdList(
        AiAllocationInfo_o *this,
        System_Collections_Generic_List_int__o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._AiIdList_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void AiAllocationInfo__set_AiIndividuality(
        AiAllocationInfo_o *this,
        System_Int32_array *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._AiIndividuality_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._AiIndividuality_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void AiAllocationInfo__set_ApplyType(AiAllocationInfo_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._ApplyType_k__BackingField = value;
}