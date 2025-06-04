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
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t IntValue; // w0
  __int64 v18; // x2
  const MethodInfo *v19; // x3
  int32_t v20; // w20
  __int64 v21; // x0
  __int64 v22; // x1
  struct System_Int32_array *v23; // x1

  if ( (byte_4B01AA2 & 1) == 0 )
  {
    sub_1BC3008(&System_Collections_Generic_Dictionary_string__object__TypeInfo, obj);
    sub_1BC3008(&Method_EntityScriptUtil_GetScriptValue_List_object___List_int____, v5);
    sub_1BC3008(&Method_EntityScriptValueConvertLogic_ObjectListToIntList__, v6);
    sub_1BC3008(&System_Func_List_object___List_int___TypeInfo, v7);
    sub_1BC3008(&int___TypeInfo, v8);
    sub_1BC3008(&StringLiteral_16574/*"aiIds"*/, v9);
    sub_1BC3008(&StringLiteral_20574/*"individuality"*/, v10);
    sub_1BC3008(&StringLiteral_16679/*"applySvtType"*/, v11);
    byte_4B01AA2 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v12 = (System_Func_object__object__o *)sub_1BC3254(System_Func_List_object___List_int___TypeInfo);
  System_Func_object__object____ctor(v12, 0LL, Method_EntityScriptValueConvertLogic_ObjectListToIntList__, 0LL);
  if ( obj )
  {
    methodPtr_low = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(obj->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
      || (System_Collections_Generic_Dictionary_string__object__c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
    {
      sub_1BC3524(obj);
      goto LABEL_13;
    }
  }
  ScriptValue_object__object = EntityScriptUtil__GetScriptValue_object__object_(
                                 (System_Collections_Generic_Dictionary_string__object__o *)obj,
                                 (System_String_o *)StringLiteral_16574/*"aiIds"*/,
                                 (System_Func_TSource__TDestination__o *)v12,
                                 0LL,
                                 (const MethodInfo_30085FC *)Method_EntityScriptUtil_GetScriptValue_List_object___List_int____);
  this->fields._AiIdList_k__BackingField = (struct System_Collections_Generic_List_int__o *)ScriptValue_object__object;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields, (int32_t)ScriptValue_object__object, v15, v16);
  this->fields._ApplyType_k__BackingField = EntityScriptUtil__GetIntValue(
                                              (System_Collections_Generic_Dictionary_string__object__o *)obj,
                                              (System_String_o *)StringLiteral_16679/*"applySvtType"*/,
                                              0,
                                              0LL);
  IntValue = EntityScriptUtil__GetIntValue(
               (System_Collections_Generic_Dictionary_string__object__o *)obj,
               (System_String_o *)StringLiteral_20574/*"individuality"*/,
               0,
               0LL);
  if ( IntValue < 1 )
  {
    v23 = 0LL;
    goto LABEL_11;
  }
  v20 = IntValue;
  v21 = sub_1BC30B0(int___TypeInfo, 1LL);
  if ( !v21 )
LABEL_13:
    sub_1BC3264(v21, v22);
  v23 = (struct System_Int32_array *)v21;
  if ( !*(_DWORD *)(v21 + 24) )
    sub_1BC326C(v21, v21, v18);
  *(_DWORD *)(v21 + 32) = v20;
LABEL_11:
  this->fields._AiIndividuality_k__BackingField = v23;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields._AiIndividuality_k__BackingField, (int32_t)v23, v18, v19);
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

  if ( (byte_4B01AA3 & 1) == 0 )
  {
    sub_1BC3008(&Individuality_TypeInfo, svt);
    byte_4B01AA3 = 1;
  }
  AiIndividuality_k__BackingField = this->fields._AiIndividuality_k__BackingField;
  if ( !Individuality_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Individuality_TypeInfo);
  v8 = Individuality__CheckIndividualities(svtIndividuality, AiIndividuality_k__BackingField, 0LL);
  if ( !v8 )
    return 0;
  if ( !svt || (deckSvt = svt->fields.deckSvt) == 0LL )
    sub_1BC3264(v8, v9);
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
  const MethodInfo *v3; // x3

  this->fields._AiIdList_k__BackingField = value;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields, (int32_t)value, (int32_t)method, v3);
}


void __fastcall AiAllocationInfo__set_AiIndividuality(
        AiAllocationInfo_o *this,
        System_Int32_array *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._AiIndividuality_k__BackingField = value;
  sub_1BC2FAC(
    (CGThumbnailListItem_o *)&this->fields._AiIndividuality_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall AiAllocationInfo__set_ApplyType(AiAllocationInfo_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._ApplyType_k__BackingField = value;
}