void AiAllocationInfo___ctor(AiAllocationInfo_o *this, Il2CppObject *obj, const MethodInfo *method)
{
  System_Func_object__object__o *v5; // x21
  __int64 naturalAligment; // x9
  Il2CppObject *ScriptValue_object__object; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t IntValue; // w0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w20
  __int64 v14; // x0
  __int64 v15; // x1
  struct System_Int32_array *v16; // x1

  if ( (byte_4CB5D0F & 1) == 0 )
  {
    sub_1C6BA08(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1C6BA08(&Method_EntityScriptUtil_GetScriptValue_List_object___List_int____);
    sub_1C6BA08(&Method_EntityScriptValueConvertLogic_ObjectListToIntList__);
    sub_1C6BA08(&System_Func_List_object___List_int___TypeInfo);
    sub_1C6BA08(&int___TypeInfo);
    sub_1C6BA08(&StringLiteral_16735/*"aiIds"*/);
    sub_1C6BA08(&StringLiteral_20841/*"individuality"*/);
    sub_1C6BA08(&StringLiteral_16841/*"applySvtType"*/);
    byte_4CB5D0F = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  v5 = (System_Func_object__object__o *)sub_1C6BC54(System_Func_List_object___List_int___TypeInfo);
  System_Func_object__object____ctor(v5, 0, Method_EntityScriptValueConvertLogic_ObjectListToIntList__, 0);
  if ( obj )
  {
    naturalAligment = System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.naturalAligment;
    if ( obj->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (System_Collections_Generic_Dictionary_string__object__c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
    {
      sub_1C6BFFC(obj);
      goto LABEL_13;
    }
  }
  ScriptValue_object__object = EntityScriptUtil__GetScriptValue_object__object_(
                                 (System_Collections_Generic_Dictionary_string__object__o *)obj,
                                 (System_String_o *)StringLiteral_16735/*"aiIds"*/,
                                 (System_Func_TSource__TDestination__o *)v5,
                                 0,
                                 (const MethodInfo_3141B00 *)Method_EntityScriptUtil_GetScriptValue_List_object___List_int____);
  this->fields._AiIdList_k__BackingField = (struct System_Collections_Generic_List_int__o *)ScriptValue_object__object;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields, (int32_t)ScriptValue_object__object, v8, v9);
  this->fields._ApplyType_k__BackingField = EntityScriptUtil__GetIntValue(
                                              (System_Collections_Generic_Dictionary_string__object__o *)obj,
                                              (System_String_o *)StringLiteral_16841/*"applySvtType"*/,
                                              0,
                                              0);
  IntValue = EntityScriptUtil__GetIntValue(
               (System_Collections_Generic_Dictionary_string__object__o *)obj,
               (System_String_o *)StringLiteral_20841/*"individuality"*/,
               0,
               0);
  if ( IntValue < 1 )
  {
    v16 = 0;
    goto LABEL_11;
  }
  v13 = IntValue;
  v14 = sub_1C6BAB0(int___TypeInfo, 1);
  if ( !v14 )
LABEL_13:
    sub_1C6BC60(v14, v15);
  v16 = (struct System_Int32_array *)v14;
  if ( !*(_DWORD *)(v14 + 24) )
    sub_1C6BC68(v14);
  *(_DWORD *)(v14 + 32) = v13;
LABEL_11:
  this->fields._AiIndividuality_k__BackingField = v16;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields._AiIndividuality_k__BackingField, (int32_t)v16, v11, v12);
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

  if ( (byte_4CB5D10 & 1) == 0 )
  {
    sub_1C6BA08(&Individuality_TypeInfo);
    byte_4CB5D10 = 1;
  }
  AiIndividuality_k__BackingField = this->fields._AiIndividuality_k__BackingField;
  if ( !Individuality_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Individuality_TypeInfo);
  v8 = Individuality__CheckIndividualities(svtIndividuality, AiIndividuality_k__BackingField, 0);
  if ( !v8 )
    return 0;
  if ( !svt || (deckSvt = svt->fields.deckSvt) == 0 )
    sub_1C6BC60(v8, v9);
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
  const MethodInfo *v3; // x3

  this->fields._AiIdList_k__BackingField = value;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields, (int32_t)value, (int32_t)method, v3);
}


void AiAllocationInfo__set_AiIndividuality(
        AiAllocationInfo_o *this,
        System_Int32_array *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._AiIndividuality_k__BackingField = value;
  sub_1C6B9AC(
    (CGThumbnailListItem_o *)&this->fields._AiIndividuality_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void AiAllocationInfo__set_ApplyType(AiAllocationInfo_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._ApplyType_k__BackingField = value;
}