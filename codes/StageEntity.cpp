void __fastcall StageEntity___cctor(const MethodInfo *method)
{
  if ( (byte_4A5BC43 & 1) == 0 )
  {
    sub_1B885B0(&StageEntity_TypeInfo);
    byte_4A5BC43 = 1;
  }
  StageEntity_TypeInfo->static_fields->DEFAULT_ENEMY_ACTION_COUNT = 3;
}


void __fastcall StageEntity___ctor(StageEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5BC07 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_string___ctor__);
    byte_4A5BC07 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_311D7AC *)Method_DataEntityBase_string___ctor__);
}


void __fastcall StageEntity___ctor_39981208(StageEntity_o *this, StageEntity_o *cSrc, const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  struct System_String_o *name; // x1
  struct System_String_o **p_name; // x20

  if ( (byte_4A5BC08 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_string___ctor__);
    byte_4A5BC08 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_311D7AC *)Method_DataEntityBase_string___ctor__);
  if ( !cSrc )
    sub_1B8880C(v5, v6);
  *(_QWORD *)&this->fields.questId = *(_QWORD *)&cSrc->fields.questId;
  name = cSrc->fields.name;
  this->fields.name = name;
  p_name = &this->fields.name;
  sub_1B88554((ServantStatusBattleListViewItem_o *)p_name, (int32_t)name, v7, v8);
  *((_DWORD *)p_name + 2) = cSrc->fields.wave;
  p_name[2] = (struct System_String_o *)cSrc->fields.npcDeckId;
}


System_String_o *__fastcall StageEntity__CreatePK(
        int32_t questId,
        int32_t questPhase,
        int32_t wave,
        const MethodInfo *method)
{
  if ( (byte_4A5BC06 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_4A5BC06 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           questId,
           questPhase,
           wave,
           (const MethodInfo_2E7DFBC *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall StageEntity__CreatePrimaryKey(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t questPhase; // w20
  int32_t questId; // w21
  int32_t wave; // w19

  if ( (byte_4A5BC05 & 1) == 0 )
  {
    sub_1B885B0(&StageEntity_TypeInfo);
    byte_4A5BC05 = 1;
  }
  questId = this->fields.questId;
  questPhase = this->fields.questPhase;
  wave = this->fields.wave;
  if ( !StageEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(StageEntity_TypeInfo);
  return StageEntity__CreatePK(questId, questPhase, wave, v2);
}


System_Int32_array *__fastcall StageEntity__GetAddUniqueCameraIds(
        StageEntity_o *this,
        System_Int32_array *defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4A5BC3F & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_16676/*"addUniqueCameraIds"*/);
    byte_4A5BC3F = 1;
  }
  return StageEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_16676/*"addUniqueCameraIds"*/, defVal, v3);
}


System_Object_array *__fastcall StageEntity__GetAiActTypeAttackCommandCard(
        StageEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_object__object__o *script; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4A5BC25 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_object__ToArray__);
    sub_1B885B0(&System_Collections_Generic_List_object__TypeInfo);
    sub_1B885B0(&StringLiteral_16713/*"aiActTypeAttackCommandCard"*/);
    byte_4A5BC25 = 1;
  }
  if ( !StageEntity__checkScript(this, (System_String_o *)StringLiteral_16713/*"aiActTypeAttackCommandCard"*/, v2) )
    return 0LL;
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script
    || (script = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                              script,
                                                                              (Il2CppObject *)StringLiteral_16713/*"aiActTypeAttackCommandCard"*/,
                                                                              (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL
    || (methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(script->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (System_Collections_Generic_List_object__c *)script->klass->_2.typeHierarchy[methodPtr_low - 1] != System_Collections_Generic_List_object__TypeInfo )
  {
    sub_1B8880C(script, v4);
  }
  return System_Collections_Generic_List_object___ToArray(
           (System_Collections_Generic_List_object__o *)script,
           (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_object__ToArray__);
}


int32_t __fastcall StageEntity__GetAiActTypeAttackCommandCardType(
        StageEntity_o *this,
        BattleServantData_o *enemyServantData,
        const MethodInfo *method)
{
  System_Object_array *AiActTypeAttackCommandCard; // x0
  __int64 v6; // x1
  __int64 v7; // x8
  System_Object_array *v8; // x20
  unsigned __int64 v9; // x23
  Il2CppObject **m_Items; // x24
  System_Collections_Generic_Dictionary_object__object__o *v11; // x21
  __int64 methodPtr_low; // x10
  struct BattleDeckServantData_o *deckSvt; // x8
  int32_t npcId; // w29
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x2
  __int64 v18; // x3
  StageEntity_o *v19; // x0
  const MethodInfo *v20; // x1

  if ( (byte_4A5BC26 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1B885B0(&long_TypeInfo);
    sub_1B885B0(&StringLiteral_22165/*"npcServantId"*/);
    sub_1B885B0(&StringLiteral_17762/*"cardType"*/);
    byte_4A5BC26 = 1;
  }
  AiActTypeAttackCommandCard = StageEntity__GetAiActTypeAttackCommandCard(this, (const MethodInfo *)enemyServantData);
  if ( AiActTypeAttackCommandCard )
  {
    v7 = *(_QWORD *)&AiActTypeAttackCommandCard->max_length;
    v8 = AiActTypeAttackCommandCard;
    if ( (int)v7 < 1 )
    {
LABEL_18:
      LODWORD(AiActTypeAttackCommandCard) = 0;
    }
    else
    {
      v9 = 0LL;
      m_Items = AiActTypeAttackCommandCard->m_Items;
      while ( 1 )
      {
        if ( v9 >= (unsigned int)v7 )
          sub_1B88814(AiActTypeAttackCommandCard, v6);
        v11 = (System_Collections_Generic_Dictionary_object__object__o *)m_Items[v9];
        if ( v11 )
        {
          methodPtr_low = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr);
          if ( LOBYTE(v11->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
            && (System_Collections_Generic_Dictionary_string__object__c *)v11->klass->_2.typeHierarchy[methodPtr_low - 1] == System_Collections_Generic_Dictionary_string__object__TypeInfo )
          {
            AiActTypeAttackCommandCard = (System_Object_array *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                                                  (System_Collections_Generic_Dictionary_object__object__o *)m_Items[v9],
                                                                  (Il2CppObject *)StringLiteral_22165/*"npcServantId"*/,
                                                                  (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
            if ( ((unsigned __int8)AiActTypeAttackCommandCard & 1) != 0 )
            {
              if ( !enemyServantData )
                goto LABEL_24;
              deckSvt = enemyServantData->fields.deckSvt;
              if ( !deckSvt )
                goto LABEL_24;
              npcId = deckSvt->fields.npcId;
              AiActTypeAttackCommandCard = (System_Object_array *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                    v11,
                                                                    (Il2CppObject *)StringLiteral_22165/*"npcServantId"*/,
                                                                    (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
              if ( !AiActTypeAttackCommandCard )
                goto LABEL_24;
              if ( AiActTypeAttackCommandCard->obj.klass->_1.element_class != long_TypeInfo->_1.element_class )
                goto LABEL_25;
              AiActTypeAttackCommandCard = (System_Object_array *)j_il2cpp_object_unbox_0(
                                                                    AiActTypeAttackCommandCard,
                                                                    long_TypeInfo,
                                                                    v15,
                                                                    v16);
              if ( npcId == LODWORD(AiActTypeAttackCommandCard->obj.klass) )
              {
                AiActTypeAttackCommandCard = (System_Object_array *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                                                      v11,
                                                                      (Il2CppObject *)StringLiteral_17762/*"cardType"*/,
                                                                      (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
                if ( ((unsigned __int8)AiActTypeAttackCommandCard & 1) != 0 )
                  break;
              }
            }
          }
        }
        LODWORD(v7) = v8->max_length;
        if ( (__int64)++v9 >= (int)v7 )
          goto LABEL_18;
      }
      AiActTypeAttackCommandCard = (System_Object_array *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                            v11,
                                                            (Il2CppObject *)StringLiteral_17762/*"cardType"*/,
                                                            (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !AiActTypeAttackCommandCard )
LABEL_24:
        sub_1B8880C(AiActTypeAttackCommandCard, v6);
      if ( AiActTypeAttackCommandCard->obj.klass->_1.element_class == long_TypeInfo->_1.element_class )
      {
        LODWORD(AiActTypeAttackCommandCard) = *(_DWORD *)j_il2cpp_object_unbox_0(
                                                           AiActTypeAttackCommandCard,
                                                           long_TypeInfo,
                                                           v17,
                                                           v18);
      }
      else
      {
LABEL_25:
        sub_1B88ACC(AiActTypeAttackCommandCard);
        LODWORD(AiActTypeAttackCommandCard) = StageEntity__IsDisableFieldMotion(v19, v20);
      }
    }
  }
  return (int)AiActTypeAttackCommandCard;
}


System_Collections_Generic_List_AiAllocationInfo__o *__fastcall StageEntity__GetAiAllocationInfoList(
        StageEntity_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Value_object; // x19
  StageEntity___c_c *v5; // x0
  System_Func_object__object__o *_9__68_0; // x20
  Il2CppObject *v7; // x21
  struct StageEntity___c_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x0

  if ( (byte_4A5BC38 & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_GetValue_List_object____);
    sub_1B885B0(&Method_System_Linq_Enumerable_Select_object__AiAllocationInfo___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToList_AiAllocationInfo___);
    sub_1B885B0(&System_Func_object__AiAllocationInfo__TypeInfo);
    sub_1B885B0(&Method_StageEntity___c__GetAiAllocationInfoList_b__68_0__);
    sub_1B885B0(&StageEntity___c_TypeInfo);
    sub_1B885B0(&StringLiteral_16714/*"aiAllocations"*/);
    byte_4A5BC38 = 1;
  }
  Value_object = BasicHelper__GetValue_object_(
                   this->fields.script,
                   (System_String_o *)StringLiteral_16714/*"aiAllocations"*/,
                   0LL,
                   (const MethodInfo_2E6DC68 *)Method_BasicHelper_GetValue_List_object____);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)Value_object, 0LL) )
    return 0LL;
  v5 = StageEntity___c_TypeInfo;
  if ( !StageEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(StageEntity___c_TypeInfo);
    v5 = StageEntity___c_TypeInfo;
  }
  _9__68_0 = (System_Func_object__object__o *)v5->static_fields->__9__68_0;
  if ( !_9__68_0 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = StageEntity___c_TypeInfo;
    }
    v7 = (Il2CppObject *)v5->static_fields->__9;
    _9__68_0 = (System_Func_object__object__o *)sub_1B887FC(System_Func_object__AiAllocationInfo__TypeInfo);
    System_Func_object__object____ctor(_9__68_0, v7, Method_StageEntity___c__GetAiAllocationInfoList_b__68_0__, 0LL);
    static_fields = StageEntity___c_TypeInfo->static_fields;
    static_fields->__9__68_0 = (struct System_Func_object__AiAllocationInfo__o *)_9__68_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__68_0, (int32_t)_9__68_0, v9, v10);
  }
  v11 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)Value_object,
                                                               (System_Func_TSource__TResult__o *)_9__68_0,
                                                               (const MethodInfo_2EB040C *)Method_System_Linq_Enumerable_Select_object__AiAllocationInfo___);
  return (System_Collections_Generic_List_AiAllocationInfo__o *)System_Linq_Enumerable__ToList_object_(
                                                                  v11,
                                                                  (const MethodInfo_2EBBFFC *)Method_System_Linq_Enumerable_ToList_AiAllocationInfo___);
}


System_Int32_array *__fastcall StageEntity__GetAssumedEffectId(StageEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5BC3C & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_16943/*"assumedEffectId"*/);
    byte_4A5BC3C = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_16943/*"assumedEffectId"*/, 0LL);
}


System_String_array *__fastcall StageEntity__GetAssumedVoiceAssetNames(StageEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5BC40 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_16944/*"assumedVoiceAssetNames"*/);
    byte_4A5BC40 = 1;
  }
  return EntityScriptUtil__GetStringArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_16944/*"assumedVoiceAssetNames"*/, 0LL);
}


System_String_array *__fastcall StageEntity__GetBattleStartVoiceIdArray(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  Il2CppObject *ScriptObject; // x0
  System_Collections_Generic_List_object__o *v5; // x19
  __int64 methodPtr_low; // x10
  StageEntity___c_c *v8; // x0
  System_Converter_TInput__TOutput__o *_9__54_0; // x20
  Il2CppObject *v10; // x21
  struct StageEntity___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_Collections_Generic_List_object__o *v14; // x0
  __int64 v15; // x1

  if ( (byte_4A5BC2C & 1) == 0 )
  {
    sub_1B885B0(&System_Converter_object__string__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_object__ConvertAll_string___);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1B885B0(&System_Collections_Generic_List_object__TypeInfo);
    sub_1B885B0(&string___TypeInfo);
    sub_1B885B0(&Method_StageEntity___c__GetBattleStartVoiceIdArray_b__54_0__);
    sub_1B885B0(&StageEntity___c_TypeInfo);
    sub_1B885B0(&StringLiteral_17119/*"battleStartVoiceIds"*/);
    byte_4A5BC2C = 1;
  }
  ScriptObject = StageEntity__GetScriptObject(this, (System_String_o *)StringLiteral_17119/*"battleStartVoiceIds"*/, v2);
  if ( !ScriptObject )
    return (System_String_array *)sub_1B88658(string___TypeInfo, 0LL);
  v5 = (System_Collections_Generic_List_object__o *)ScriptObject;
  methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(ScriptObject->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
    || (System_Collections_Generic_List_object__c *)ScriptObject->klass->_2.typeHierarchy[methodPtr_low - 1] != System_Collections_Generic_List_object__TypeInfo )
  {
    return (System_String_array *)sub_1B88658(string___TypeInfo, 0LL);
  }
  v8 = StageEntity___c_TypeInfo;
  if ( !StageEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(StageEntity___c_TypeInfo);
    v8 = StageEntity___c_TypeInfo;
  }
  _9__54_0 = (System_Converter_TInput__TOutput__o *)v8->static_fields->__9__54_0;
  if ( !_9__54_0 )
  {
    if ( !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      v8 = StageEntity___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v8->static_fields->__9;
    _9__54_0 = (System_Converter_TInput__TOutput__o *)sub_1B887FC(System_Converter_object__string__TypeInfo);
    System_Converter_object__object____ctor(
      _9__54_0,
      v10,
      Method_StageEntity___c__GetBattleStartVoiceIdArray_b__54_0__,
      0LL);
    static_fields = StageEntity___c_TypeInfo->static_fields;
    static_fields->__9__54_0 = (struct System_Converter_object__string__o *)_9__54_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__54_0, (int32_t)_9__54_0, v12, v13);
  }
  v14 = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___ConvertAll_object_(
                                                       v5,
                                                       (System_Converter_T__TOutput__o *)_9__54_0,
                                                       (const MethodInfo_2DB32F8 *)Method_System_Collections_Generic_List_object__ConvertAll_string___);
  if ( !v14 )
    sub_1B8880C(0LL, v15);
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  v14,
                                  (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_string__ToArray__);
}


int32_t __fastcall StageEntity__GetBattleStartVoiceServantId(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5BC2A & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_17120/*"battleStartVoiceSvtId"*/);
    byte_4A5BC2A = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_17120/*"battleStartVoiceSvtId"*/, 0, v2);
}


int32_t __fastcall StageEntity__GetBattleStartVoiceServantLimit(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5BC2B & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_17121/*"battleStartVoiceSvtLimit"*/);
    byte_4A5BC2B = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_17121/*"battleStartVoiceSvtLimit"*/, -1, v2);
}


System_Int32_array *__fastcall StageEntity__GetBossIdAndChangeBgmId(StageEntity_o *this, const MethodInfo *method)
{
  System_Int32_array *v3; // x2
  const MethodInfo *v4; // x3

  if ( (byte_4A5BC24 & 1) == 0 )
  {
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&StringLiteral_17383/*"bossIdAndChangeBgmId"*/);
    byte_4A5BC24 = 1;
  }
  v3 = (System_Int32_array *)sub_1B88658(int___TypeInfo, 0LL);
  return StageEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_17383/*"bossIdAndChangeBgmId"*/, v3, v4);
}


System_Int32_array *__fastcall StageEntity__GetCutInSvtIds(StageEntity_o *this, bool isEnemy, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  System_String_o **v6; // x8

  if ( (byte_4A5BC21 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_19016/*"enemyCutInSvtIds"*/);
    sub_1B885B0(&StringLiteral_22555/*"playerCutInSvtIds"*/);
    byte_4A5BC21 = 1;
  }
  if ( isEnemy )
    v6 = (System_String_o **)&StringLiteral_19016/*"enemyCutInSvtIds"*/;
  else
    v6 = (System_String_o **)&StringLiteral_22555/*"playerCutInSvtIds"*/;
  return StageEntity__getScriptIntArrayParam(this, *v6, 0LL, v3);
}


int32_t __fastcall StageEntity__GetEffectBgmId(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5BC22 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_18909/*"effectBgmId"*/);
    byte_4A5BC22 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_18909/*"effectBgmId"*/, -1, v2);
}


int32_t __fastcall StageEntity__GetEffectSvtId(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5BC20 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_18920/*"effectSvtId"*/);
    byte_4A5BC20 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_18920/*"effectSvtId"*/, 0, v2);
}


System_Int32_array *__fastcall StageEntity__GetEnemyAddOrderPosArray(
        StageEntity_o *this,
        int32_t enemyFieldPosCount,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  System_Int32_array *ScriptIntArrayParam; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v7; // x19
  StageEntity___c_c *v8; // x0
  System_Func_int__int__o *_9__64_0; // x20
  Il2CppObject *v10; // x21
  struct StageEntity___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x0

  if ( (byte_4A5BC34 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_Select_int__int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1B885B0(&System_Func_int__int__TypeInfo);
    sub_1B885B0(&Method_StageEntity___c__GetEnemyAddOrderPosArray_b__64_0__);
    sub_1B885B0(&StageEntity___c_TypeInfo);
    sub_1B885B0(&StringLiteral_19018/*"enemyEntryOrder"*/);
    byte_4A5BC34 = 1;
  }
  ScriptIntArrayParam = StageEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_19018/*"enemyEntryOrder"*/, 0LL, v3);
  if ( ScriptIntArrayParam )
  {
    v7 = (System_Collections_Generic_IEnumerable_TSource__o *)ScriptIntArrayParam;
    v8 = StageEntity___c_TypeInfo;
    if ( !StageEntity___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(StageEntity___c_TypeInfo);
      v8 = StageEntity___c_TypeInfo;
    }
    _9__64_0 = v8->static_fields->__9__64_0;
    if ( !_9__64_0 )
    {
      if ( !v8->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v8);
        v8 = StageEntity___c_TypeInfo;
      }
      v10 = (Il2CppObject *)v8->static_fields->__9;
      _9__64_0 = (System_Func_int__int__o *)sub_1B887FC(System_Func_int__int__TypeInfo);
      System_Func_int__int____ctor(_9__64_0, v10, Method_StageEntity___c__GetEnemyAddOrderPosArray_b__64_0__, 0LL);
      static_fields = StageEntity___c_TypeInfo->static_fields;
      static_fields->__9__64_0 = _9__64_0;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__64_0, (int32_t)_9__64_0, v12, v13);
    }
    v14 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__int_(
                                                                 v7,
                                                                 (System_Func_TSource__TResult__o *)_9__64_0,
                                                                 (const MethodInfo_2EAD6E0 *)Method_System_Linq_Enumerable_Select_int__int___);
  }
  else
  {
    v14 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Range(0, enemyFieldPosCount, 0LL);
  }
  return System_Linq_Enumerable__ToArray_int_(
           v14,
           (const MethodInfo_2EB854C *)Method_System_Linq_Enumerable_ToArray_int___);
}


int32_t __fastcall StageEntity__GetEnemyCountStartValue(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5BC39 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_19015/*"enemyCountStartValue"*/);
    byte_4A5BC39 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_19015/*"enemyCountStartValue"*/, 0, v2);
}


int32_t __fastcall StageEntity__GetEnemyEntryMaxCountEachTurn(
        StageEntity_o *this,
        int32_t defaultValue,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4A5BC35 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_19017/*"enemyEntryMaxCountEachTurn"*/);
    byte_4A5BC35 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_19017/*"enemyEntryMaxCountEachTurn"*/, defaultValue, v3);
}


int32_t __fastcall StageEntity__GetEnemyFieldPosCount(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5BC2D & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_19020/*"enemyFieldPosCount"*/);
    byte_4A5BC2D = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_19020/*"enemyFieldPosCount"*/, 3, v2);
}


int32_t __fastcall StageEntity__GetFadeType(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5BC1F & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_17117/*"battleStartFadeType"*/);
    byte_4A5BC1F = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_17117/*"battleStartFadeType"*/, 0, v2);
}


System_Int32_array *__fastcall StageEntity__GetFieldCallServantId(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  System_Int32_array *result; // x0

  if ( (byte_4A5BC28 & 1) == 0 )
  {
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&StringLiteral_17701/*"call"*/);
    byte_4A5BC28 = 1;
  }
  result = StageEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_17701/*"call"*/, 0LL, v2);
  if ( !result )
    return (System_Int32_array *)sub_1B88658(int___TypeInfo, 0LL);
  return result;
}


System_Int32_array *__fastcall StageEntity__GetFieldPosSkillId(StageEntity_o *this, const MethodInfo *method)
{
  System_Int32_array *v3; // x2
  const MethodInfo *v4; // x3

  if ( (byte_4A5BC36 & 1) == 0 )
  {
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&StringLiteral_19407/*"fieldPosSkillId"*/);
    byte_4A5BC36 = 1;
  }
  v3 = (System_Int32_array *)sub_1B88658(int___TypeInfo, 0LL);
  return StageEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_19407/*"fieldPosSkillId"*/, v3, v4);
}


System_Int32_array *__fastcall StageEntity__GetFieldPosSkillLv(StageEntity_o *this, const MethodInfo *method)
{
  System_Int32_array *v3; // x2
  const MethodInfo *v4; // x3

  if ( (byte_4A5BC37 & 1) == 0 )
  {
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&StringLiteral_19408/*"fieldPosSkillLv"*/);
    byte_4A5BC37 = 1;
  }
  v3 = (System_Int32_array *)sub_1B88658(int___TypeInfo, 0LL);
  return StageEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_19408/*"fieldPosSkillLv"*/, v3, v4);
}


System_Int32_array *__fastcall StageEntity__GetMultiEffectIds(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5BC1E & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_21967/*"multiEffectIds"*/);
    byte_4A5BC1E = 1;
  }
  return StageEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_21967/*"multiEffectIds"*/, 0LL, v2);
}


int32_t __fastcall StageEntity__GetPriorityBG(StageEntity_o *this, int32_t def, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4A5BC3A & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_22601/*"priorityBG"*/);
    byte_4A5BC3A = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_22601/*"priorityBG"*/, def, v3);
}


int32_t __fastcall StageEntity__GetPriorityBgm(StageEntity_o *this, int32_t def, const MethodInfo *method)
{
  const MethodInfo *v5; // x3
  Il2CppObject *Master_object; // x0
  __int64 v8; // x1

  if ( (byte_4A5BC3B & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_BgmMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&StringLiteral_22602/*"priorityBgm"*/);
    byte_4A5BC3B = 1;
  }
  if ( StageEntity__checkScript(this, (System_String_o *)StringLiteral_22602/*"priorityBgm"*/, method) )
    return StageEntity__getScript(this, (System_String_o *)StringLiteral_22602/*"priorityBgm"*/, def, v5);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_BgmMaster___);
  if ( !Master_object )
    sub_1B8880C(0LL, v8);
  return BgmMaster__GetBgmPriority((BgmMaster_o *)Master_object, this->fields.bgmId, def, 0LL);
}


int32_t __fastcall StageEntity__GetProhibitBgmChangeInTreasureDeviceAnim(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5BC41 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_22623/*"prohibitBgmChangeInTreasureDeviceAnim"*/);
    byte_4A5BC41 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_22623/*"prohibitBgmChangeInTreasureDeviceAnim"*/, 0, v2);
}


Il2CppObject *__fastcall StageEntity__GetScriptObject(
        StageEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5BC29 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    byte_4A5BC29 = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( !script )
    sub_1B8880C(0LL, key);
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)script,
         (Il2CppObject *)key,
         &value,
         (const MethodInfo_31C89D4 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    return value;
  }
  else
  {
    return 0LL;
  }
}


int32_t __fastcall StageEntity__GetStartBgmOffFlag(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5BC23 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_23487/*"startBgmOff"*/);
    byte_4A5BC23 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_23487/*"startBgmOff"*/, 0, v2);
}


SubBgmPlayArgs_array *__fastcall StageEntity__GetSubBgmPlayArgsArray(StageEntity_o *this, const MethodInfo *method)
{
  StageEntity___c_c *v3; // x0
  System_Func_object__object__o *_9__61_0; // x20
  Il2CppObject *v5; // x21
  struct StageEntity___c_StaticFields *static_fields; // x0
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_4A5BC31 & 1) == 0 )
  {
    sub_1B885B0(&Method_EntityScriptUtil_GetScriptValue_List_object___SubBgmPlayArgs_____);
    sub_1B885B0(&System_Func_List_object___SubBgmPlayArgs____TypeInfo);
    sub_1B885B0(&Method_StageEntity___c__GetSubBgmPlayArgsArray_b__61_0__);
    sub_1B885B0(&StageEntity___c_TypeInfo);
    sub_1B885B0(&StringLiteral_23603/*"subBgms"*/);
    byte_4A5BC31 = 1;
  }
  v3 = StageEntity___c_TypeInfo;
  if ( !StageEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(StageEntity___c_TypeInfo);
    v3 = StageEntity___c_TypeInfo;
  }
  _9__61_0 = (System_Func_object__object__o *)v3->static_fields->__9__61_0;
  if ( !_9__61_0 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = StageEntity___c_TypeInfo;
    }
    v5 = (Il2CppObject *)v3->static_fields->__9;
    _9__61_0 = (System_Func_object__object__o *)sub_1B887FC(System_Func_List_object___SubBgmPlayArgs____TypeInfo);
    System_Func_object__object____ctor(_9__61_0, v5, Method_StageEntity___c__GetSubBgmPlayArgsArray_b__61_0__, 0LL);
    static_fields = StageEntity___c_TypeInfo->static_fields;
    static_fields->__9__61_0 = (struct System_Func_List_object___SubBgmPlayArgs____o *)_9__61_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__61_0, (int32_t)_9__61_0, v7, v8);
  }
  return (SubBgmPlayArgs_array *)EntityScriptUtil__GetScriptValue_object__object_(
                                   this->fields.script,
                                   (System_String_o *)StringLiteral_23603/*"subBgms"*/,
                                   (System_Func_TSource__TDestination__o *)_9__61_0,
                                   0LL,
                                   (const MethodInfo_2E885D4 *)Method_EntityScriptUtil_GetScriptValue_List_object___SubBgmPlayArgs_____);
}


int32_t __fastcall StageEntity__GetSubBgmsPriority(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5BC32 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_23604/*"subBgmsPriority"*/);
    byte_4A5BC32 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_23604/*"subBgmsPriority"*/, 0, v2);
}


System_Int32_array *__fastcall StageEntity__GetTurnEffect(
        StageEntity_o *this,
        int32_t limitTurn,
        System_Int32_array *turnlist,
        const MethodInfo *method)
{
  System_Int32_array *result; // x0
  __int64 v7; // x1
  unsigned __int64 v8; // x8
  il2cpp_array_size_t v9; // w9
  int32_t v10; // w10
  unsigned __int64 v11; // x11
  il2cpp_array_size_t max_length; // w13

  if ( (byte_4A5BC19 & 1) == 0 )
  {
    sub_1B885B0(&int___TypeInfo);
    byte_4A5BC19 = 1;
  }
  result = (System_Int32_array *)sub_1B88658(int___TypeInfo, (unsigned int)limitTurn);
  if ( !result )
LABEL_15:
    sub_1B8880C(result, v7);
  if ( (int)*(_QWORD *)&result->max_length >= 1 )
  {
    v8 = (unsigned int)*(_QWORD *)&result->max_length;
    v9 = 0;
    v10 = 0;
    v11 = 0LL;
    do
    {
      if ( v11 >= v8 )
LABEL_14:
        sub_1B88814(result, v7);
      result->m_Items[v11 + 1] = v10;
      if ( !turnlist )
        goto LABEL_15;
      max_length = turnlist->max_length;
      if ( (int)v9 < (int)max_length )
      {
        if ( v9 >= max_length )
          goto LABEL_14;
        if ( v11 == turnlist->m_Items[v9 + 1] - 1 )
        {
          ++v10;
          ++v9;
        }
      }
      ++v11;
    }
    while ( v8 != v11 );
  }
  return result;
}


System_Int32_array *__fastcall StageEntity__GetWaveFieldMotionIds(
        StageEntity_o *this,
        System_Int32_array *defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4A5BC3E & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_19405/*"fieldMotionIds"*/);
    byte_4A5BC3E = 1;
  }
  return StageEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_19405/*"fieldMotionIds"*/, defVal, v3);
}


bool __fastcall StageEntity__Is3_6BossBattle(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5BC2E & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_1476/*"3.6BossBattle"*/);
    byte_4A5BC2E = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_1476/*"3.6BossBattle"*/, 0, v2) > 0;
}


bool __fastcall StageEntity__IsDisableFieldMotion(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5BC27 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_18634/*"disableUniqueFieldMotion"*/);
    byte_4A5BC27 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_18634/*"disableUniqueFieldMotion"*/, 0, v2) > 0;
}


bool __fastcall StageEntity__IsForceSetNormalEnemyStatusUI(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4A5BC33 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_6780/*"ForceSetNormalEnemyStatusUI"*/);
    byte_4A5BC33 = 1;
  }
  return StageEntity__checkScript(this, (System_String_o *)StringLiteral_6780/*"ForceSetNormalEnemyStatusUI"*/, v2);
}


bool __fastcall StageEntity__IsReleaseUnusedAssetsWhenEntryMember(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4A5BC30 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_22851/*"releaseUnusedAssetsWhenEntryMember"*/);
    byte_4A5BC30 = 1;
  }
  return StageEntity__checkScript(this, (System_String_o *)StringLiteral_22851/*"releaseUnusedAssetsWhenEntryMember"*/, v2);
}


bool __fastcall StageEntity__IsShowEnemyMasterIconOnWaveStart(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4A5BC42 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_23312/*"showEnemyMasterIconOnWaveStart"*/);
    byte_4A5BC42 = 1;
  }
  return StageEntity__checkScript(this, (System_String_o *)StringLiteral_23312/*"showEnemyMasterIconOnWaveStart"*/, v2);
}


bool __fastcall StageEntity__IsSkipWaveStartFadeInSe(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4A5BC3D & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_23358/*"skipWaveStartFadeInSe"*/);
    byte_4A5BC3D = 1;
  }
  return StageEntity__checkScript(this, (System_String_o *)StringLiteral_23358/*"skipWaveStartFadeInSe"*/, v2);
}


bool __fastcall StageEntity__IsSpecifiedBattleStartVoice(StageEntity_o *this, const MethodInfo *method)
{
  int32_t BattleStartVoiceServantId; // w20
  const MethodInfo *v4; // x1

  BattleStartVoiceServantId = StageEntity__GetBattleStartVoiceServantId(this, method);
  return (BattleStartVoiceServantId > 0) & (StageEntity__GetBattleStartVoiceServantLimit(this, v4) >= 0);
}


bool __fastcall StageEntity__IsSpecifiedBattleStartVoice_39987320(
        StageEntity_o *this,
        int32_t *servantId,
        int32_t *limit,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x1
  int32_t BattleStartVoiceServantLimit; // w0

  *servantId = StageEntity__GetBattleStartVoiceServantId(this, (const MethodInfo *)servantId);
  BattleStartVoiceServantLimit = StageEntity__GetBattleStartVoiceServantLimit(this, v7);
  *limit = BattleStartVoiceServantLimit;
  return BattleStartVoiceServantLimit >= 0 && *servantId > 0;
}


bool __fastcall StageEntity__checkCustomFOV(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4A5BC12 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_19590/*"fov"*/);
    byte_4A5BC12 = 1;
  }
  return StageEntity__checkScript(this, (System_String_o *)StringLiteral_19590/*"fov"*/, v2);
}


bool __fastcall StageEntity__checkScript(StageEntity_o *this, System_String_o *key, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_4A5BC09 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    byte_4A5BC09 = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                       (System_Collections_Generic_Dictionary_object__object__o *)script,
                       (Il2CppObject *)key,
                       (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)script;
}


bool __fastcall StageEntity__disableSystemFadeStartBattle(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5BC1D & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_18632/*"disableSystemFadeStartBattle"*/);
    byte_4A5BC1D = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_18632/*"disableSystemFadeStartBattle"*/, 0, v2) > 0;
}


int32_t __fastcall StageEntity__getBattleMasterImageId(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5BC2F & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_17115/*"battleMasterImageId"*/);
    byte_4A5BC2F = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_17115/*"battleMasterImageId"*/, 0, v2);
}


int32_t __fastcall StageEntity__getChangeBgId(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5BC15 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_17805/*"changeBgId"*/);
    byte_4A5BC15 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_17805/*"changeBgId"*/, 0, v2);
}


int32_t __fastcall StageEntity__getChangeBgType(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5BC16 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_17806/*"changeBgType"*/);
    byte_4A5BC16 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_17806/*"changeBgType"*/, 0, v2);
}


float __fastcall StageEntity__getCustomFOV(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4A5BC11 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_19590/*"fov"*/);
    byte_4A5BC11 = 1;
  }
  return StageEntity__getScriptFloat(this, (System_String_o *)StringLiteral_19590/*"fov"*/, 0.0, v2);
}


int32_t __fastcall StageEntity__getEnemyActCount(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t result; // w0
  StageEntity_c *v5; // x0

  if ( (byte_4A5BC1B & 1) == 0 )
  {
    sub_1B885B0(&StageEntity_TypeInfo);
    sub_1B885B0(&StringLiteral_6007/*"EnemyActCount"*/);
    byte_4A5BC1B = 1;
  }
  result = StageEntity__getScript(this, (System_String_o *)StringLiteral_6007/*"EnemyActCount"*/, 0, v2);
  if ( result <= 0 )
  {
    v5 = StageEntity_TypeInfo;
    if ( !StageEntity_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(StageEntity_TypeInfo);
      v5 = StageEntity_TypeInfo;
    }
    return v5->static_fields->DEFAULT_ENEMY_ACTION_COUNT;
  }
  return result;
}


int32_t __fastcall StageEntity__getEnemyMasterBattleId(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  System_Int32_array *ScriptIntArrayParam; // x0
  const MethodInfo *v5; // x3
  System_Int32_array *v6; // x20
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v8; // x1

  if ( (byte_4A5BC14 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_19021/*"enemyMasterBattleId"*/);
    sub_1B885B0(&StringLiteral_19022/*"enemyMasterBattleIdByPlayerGender"*/);
    byte_4A5BC14 = 1;
  }
  ScriptIntArrayParam = StageEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_19022/*"enemyMasterBattleIdByPlayerGender"*/, 0LL, v2);
  if ( !ScriptIntArrayParam )
    return StageEntity__getScript(this, (System_String_o *)StringLiteral_19021/*"enemyMasterBattleId"*/, 0, v5);
  v6 = ScriptIntArrayParam;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_13;
  if ( SelfUserGame->fields.genderType == 1 )
  {
    if ( v6->max_length )
      return v6->m_Items[1];
LABEL_14:
    sub_1B88814(SelfUserGame, v8);
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
LABEL_13:
    sub_1B8880C(SelfUserGame, v8);
  if ( SelfUserGame->fields.genderType != 2 )
    return StageEntity__getScript(this, (System_String_o *)StringLiteral_19021/*"enemyMasterBattleId"*/, 0, v5);
  if ( v6->max_length <= 1 )
    goto LABEL_14;
  return v6->m_Items[2];
}


System_Object_array *__fastcall StageEntity__getFieldAis(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_object__object__o *script; // x0
  __int64 methodPtr_low; // x9
  StageEntity_o *v8; // x0
  int32_t v9; // w1
  const MethodInfo *v10; // x2

  if ( (byte_4A5BC17 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_object__ToArray__);
    sub_1B885B0(&System_Collections_Generic_List_object__TypeInfo);
    sub_1B885B0(&StringLiteral_16715/*"aiFieldIds"*/);
    byte_4A5BC17 = 1;
  }
  if ( !StageEntity__checkScript(this, (System_String_o *)StringLiteral_16715/*"aiFieldIds"*/, v2) )
    return 0LL;
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script
    || (script = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                              script,
                                                                              (Il2CppObject *)StringLiteral_16715/*"aiFieldIds"*/,
                                                                              (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_1B8880C(script, v4);
  }
  methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(script->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
    && (System_Collections_Generic_List_object__c *)script->klass->_2.typeHierarchy[methodPtr_low - 1] == System_Collections_Generic_List_object__TypeInfo )
  {
    return System_Collections_Generic_List_object___ToArray(
             (System_Collections_Generic_List_object__o *)script,
             (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_object__ToArray__);
  }
  sub_1B88ACC(script);
  return (System_Object_array *)StageEntity__getTurnEffect(v8, v9, v10);
}


int32_t __fastcall StageEntity__getLimitAct(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5BC10 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_8402/*"LimitAct"*/);
    byte_4A5BC10 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_8402/*"LimitAct"*/, 0, v2);
}


int32_t __fastcall StageEntity__getLimitTurn(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5BC0D & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_24087/*"turn"*/);
    byte_4A5BC0D = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_24087/*"turn"*/, 0, v2);
}


System_Int32_array *__fastcall StageEntity__getNoEntryIds(StageEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  Il2CppObject *v4; // x20
  System_Collections_Generic_List_object__c *v5; // x1
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  System_Collections_Generic_List_object__o *v7; // x19
  StageEntity___c_c *v8; // x8
  System_Converter_object__int__o *_9__36_0; // x20
  __int64 methodPtr_low; // x10
  Il2CppObject *v11; // x21
  struct StageEntity___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  StageEntity_o *v16; // x0
  const MethodInfo *v17; // x1

  if ( (byte_4A5BC1A & 1) == 0 )
  {
    sub_1B885B0(&System_Converter_object__int__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_object__ConvertAll_int___);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1B885B0(&System_Collections_Generic_List_object__TypeInfo);
    sub_1B885B0(&Method_StageEntity___c__getNoEntryIds_b__36_0__);
    sub_1B885B0(&StageEntity___c_TypeInfo);
    sub_1B885B0(&StringLiteral_9493/*"NoEntryIds"*/);
    byte_4A5BC1A = 1;
  }
  script = this->fields.script;
  if ( !script )
    return (System_Int32_array *)sub_1B88658(int___TypeInfo, 0LL);
  v4 = (Il2CppObject *)StringLiteral_9493/*"NoEntryIds"*/;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)StringLiteral_9493/*"NoEntryIds"*/,
          (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return (System_Int32_array *)sub_1B88658(int___TypeInfo, 0LL);
  Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !Item )
    goto LABEL_19;
  Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                      Item,
                                                                      v4,
                                                                      (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v7 = (System_Collections_Generic_List_object__o *)Item;
  v8 = StageEntity___c_TypeInfo;
  if ( !StageEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(StageEntity___c_TypeInfo);
    v8 = StageEntity___c_TypeInfo;
  }
  _9__36_0 = v8->static_fields->__9__36_0;
  if ( !v7
    || (v5 = System_Collections_Generic_List_object__TypeInfo,
        methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(v7->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low)
    && (System_Collections_Generic_List_object__c *)v7->klass->_2.typeHierarchy[methodPtr_low - 1] == System_Collections_Generic_List_object__TypeInfo )
  {
    if ( !_9__36_0 )
    {
      if ( !v8->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v8);
        v8 = StageEntity___c_TypeInfo;
      }
      v11 = (Il2CppObject *)v8->static_fields->__9;
      _9__36_0 = (System_Converter_object__int__o *)sub_1B887FC(System_Converter_object__int__TypeInfo);
      System_Converter_object__int____ctor(_9__36_0, v11, Method_StageEntity___c__getNoEntryIds_b__36_0__, 0LL);
      static_fields = StageEntity___c_TypeInfo->static_fields;
      static_fields->__9__36_0 = _9__36_0;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__36_0, (int32_t)_9__36_0, v13, v14);
    }
    if ( v7 )
    {
      Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_List_object___ConvertAll_int_(
                                                                          v7,
                                                                          (System_Converter_T__TOutput__o *)_9__36_0,
                                                                          (const MethodInfo_2DB31F4 *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
      if ( Item )
        return System_Collections_Generic_List_int___ToArray(
                 (System_Collections_Generic_List_int__o *)Item,
                 (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__);
    }
LABEL_19:
    sub_1B8880C(Item, v5);
  }
  sub_1B88ACC(v7);
  return (System_Int32_array *)StageEntity__getEnemyActCount(v16, v17);
}


int32_t __fastcall StageEntity__getPhase(StageEntity_o *this, const MethodInfo *method)
{
  return this->fields.questPhase;
}


int32_t __fastcall StageEntity__getQuestId(StageEntity_o *this, const MethodInfo *method)
{
  return this->fields.questId;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall StageEntity__getScript(
        StageEntity_o *this,
        System_String_o *key,
        int32_t defVal,
        const MethodInfo *method)
{
  int32_t v4; // w20
  __int64 v7; // x1
  System_Collections_Generic_Dictionary_object__object__o *script; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  int32_t result; // w0
  StageEntity_o *v12; // x0
  System_String_o *v13; // x1
  const MethodInfo *v14; // x2
  long double v15; // q0

  v4 = defVal;
  if ( (byte_4A5BC0A & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1B885B0(&long_TypeInfo);
    byte_4A5BC0A = 1;
  }
  if ( !StageEntity__checkScript(this, key, *(const MethodInfo **)&defVal) )
    return v4;
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script
    || (script = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                              script,
                                                                              (Il2CppObject *)key,
                                                                              (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_1B8880C(script, v7);
  }
  if ( script->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(script, long_TypeInfo, v9, v10);
  v15 = sub_1B88ACC(script);
  StageEntity__getScriptFloat(v12, v13, *(float *)&v15, v14);
  return result;
}


float __fastcall StageEntity__getScriptFloat(
        StageEntity_o *this,
        System_String_o *key,
        float defVal,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_Collections_Generic_Dictionary_object__object__o *script; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  float result; // s0
  StageEntity_o *v12; // x0
  System_String_o *v13; // x1
  System_Int32_array *v14; // x2
  const MethodInfo *v15; // x3

  if ( (byte_4A5BC0B & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1B885B0(&double_TypeInfo);
    byte_4A5BC0B = 1;
  }
  if ( !StageEntity__checkScript(this, key, method) )
    return defVal;
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script
    || (script = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                              script,
                                                                              (Il2CppObject *)key,
                                                                              (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_1B8880C(script, v7);
  }
  if ( script->klass->_1.element_class == double_TypeInfo->_1.element_class )
    return *(double *)j_il2cpp_object_unbox_0(script, double_TypeInfo, v9, v10);
  sub_1B88ACC(script);
  StageEntity__getScriptIntArrayParam(v12, v13, v14, v15);
  return result;
}


System_Int32_array *__fastcall StageEntity__getScriptIntArrayParam(
        StageEntity_o *this,
        System_String_o *key,
        System_Int32_array *defVal,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__c *v7; // x1
  System_Collections_Generic_Dictionary_object__object__o *script; // x0
  System_Collections_Generic_List_object__o *v9; // x19
  StageEntity___c_c *v10; // x8
  System_Converter_object__int__o *_9__22_0; // x20
  __int64 methodPtr_low; // x10
  Il2CppObject *v13; // x21
  struct StageEntity___c_StaticFields *static_fields; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  StageEntity_o *v18; // x0
  const MethodInfo *v19; // x1

  if ( (byte_4A5BC0C & 1) == 0 )
  {
    sub_1B885B0(&System_Converter_object__int__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_object__ConvertAll_int___);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1B885B0(&System_Collections_Generic_List_object__TypeInfo);
    sub_1B885B0(&Method_StageEntity___c__getScriptIntArrayParam_b__22_0__);
    sub_1B885B0(&StageEntity___c_TypeInfo);
    byte_4A5BC0C = 1;
  }
  if ( !StageEntity__checkScript(this, key, (const MethodInfo *)defVal) )
    return defVal;
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script )
    goto LABEL_18;
  script = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                        script,
                                                                        (Il2CppObject *)key,
                                                                        (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v9 = (System_Collections_Generic_List_object__o *)script;
  v10 = StageEntity___c_TypeInfo;
  if ( !StageEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(StageEntity___c_TypeInfo);
    v10 = StageEntity___c_TypeInfo;
  }
  _9__22_0 = v10->static_fields->__9__22_0;
  if ( !v9
    || (v7 = System_Collections_Generic_List_object__TypeInfo,
        methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(v9->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low)
    && (System_Collections_Generic_List_object__c *)v9->klass->_2.typeHierarchy[methodPtr_low - 1] == System_Collections_Generic_List_object__TypeInfo )
  {
    if ( !_9__22_0 )
    {
      if ( !v10->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v10);
        v10 = StageEntity___c_TypeInfo;
      }
      v13 = (Il2CppObject *)v10->static_fields->__9;
      _9__22_0 = (System_Converter_object__int__o *)sub_1B887FC(System_Converter_object__int__TypeInfo);
      System_Converter_object__int____ctor(_9__22_0, v13, Method_StageEntity___c__getScriptIntArrayParam_b__22_0__, 0LL);
      static_fields = StageEntity___c_TypeInfo->static_fields;
      static_fields->__9__22_0 = _9__22_0;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__22_0, (int32_t)_9__22_0, v15, v16);
    }
    if ( v9 )
    {
      script = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_List_object___ConvertAll_int_(
                                                                            v9,
                                                                            (System_Converter_T__TOutput__o *)_9__22_0,
                                                                            (const MethodInfo_2DB31F4 *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
      if ( script )
        return System_Collections_Generic_List_int___ToArray(
                 (System_Collections_Generic_List_int__o *)script,
                 (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__);
    }
LABEL_18:
    sub_1B8880C(script, v7);
  }
  sub_1B88ACC(v9);
  return (System_Int32_array *)StageEntity__getLimitTurn(v18, v19);
}


int32_t __fastcall StageEntity__getShowTurnState(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5BC13 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_23314/*"showTurn"*/);
    byte_4A5BC13 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_23314/*"showTurn"*/, 2, v2);
}


int32_t __fastcall StageEntity__getStartBattleAssetId(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5BC1C & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_23485/*"startBattleAssetId"*/);
    byte_4A5BC1C = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_23485/*"startBattleAssetId"*/, 0, v2);
}


System_Int32_array *__fastcall StageEntity__getTurnEffect(
        StageEntity_o *this,
        int32_t limitTurn,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  System_Collections_Generic_List_object__c *v6; // x1
  void *v7; // x0
  Il2CppObject *Item; // x0
  System_Collections_Generic_List_object__o *v9; // x20
  __int64 methodPtr_low; // x9
  System_Converter_object__int__o *v11; // x21
  Il2CppObject *v12; // x22
  struct StageEntity___c_StaticFields *static_fields; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  StageEntity_o *v16; // x0
  const MethodInfo *v17; // x3
  int32_t v18; // w1
  System_Int32_array *v19; // x2

  if ( (byte_4A5BC18 & 1) == 0 )
  {
    sub_1B885B0(&System_Converter_object__int__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_object__ConvertAll_int___);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1B885B0(&System_Collections_Generic_List_object__TypeInfo);
    sub_1B885B0(&Method_StageEntity___c__getTurnEffect_b__34_0__);
    sub_1B885B0(&StageEntity___c_TypeInfo);
    sub_1B885B0(&StringLiteral_24088/*"turnEffect"*/);
    byte_4A5BC18 = 1;
  }
  script = this->fields.script;
  if ( script
    && System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)script,
         (Il2CppObject *)StringLiteral_24088/*"turnEffect"*/,
         (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v7 = this->fields.script;
    if ( v7 )
    {
      Item = System_Collections_Generic_Dictionary_object__object___get_Item(
               (System_Collections_Generic_Dictionary_object__object__o *)v7,
               (Il2CppObject *)StringLiteral_24088/*"turnEffect"*/,
               (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      v9 = (System_Collections_Generic_List_object__o *)Item;
      if ( Item )
      {
        v6 = System_Collections_Generic_List_object__TypeInfo;
        methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
          || (System_Collections_Generic_List_object__c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] != System_Collections_Generic_List_object__TypeInfo )
        {
          sub_1B88ACC(Item);
          return StageEntity__GetTurnEffect(v16, v18, v19, v17);
        }
      }
      v7 = StageEntity___c_TypeInfo;
      if ( !StageEntity___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(StageEntity___c_TypeInfo);
        v7 = StageEntity___c_TypeInfo;
      }
      v11 = *(System_Converter_object__int__o **)(*((_QWORD *)v7 + 23) + 16LL);
      if ( !v11 )
      {
        if ( !*((_DWORD *)v7 + 56) )
        {
          j_il2cpp_runtime_class_init_0(v7);
          v7 = StageEntity___c_TypeInfo;
        }
        v12 = (Il2CppObject *)**((_QWORD **)v7 + 23);
        v11 = (System_Converter_object__int__o *)sub_1B887FC(System_Converter_object__int__TypeInfo);
        System_Converter_object__int____ctor(v11, v12, Method_StageEntity___c__getTurnEffect_b__34_0__, 0LL);
        static_fields = StageEntity___c_TypeInfo->static_fields;
        static_fields->__9__34_0 = v11;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__34_0, (int32_t)v11, v14, v15);
      }
      if ( v9 )
      {
        v7 = System_Collections_Generic_List_object___ConvertAll_int_(
               v9,
               (System_Converter_T__TOutput__o *)v11,
               (const MethodInfo_2DB31F4 *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
        if ( v7 )
        {
          v16 = (StageEntity_o *)System_Collections_Generic_List_int___ToArray(
                                   (System_Collections_Generic_List_int__o *)v7,
                                   (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__);
          v18 = limitTurn;
          v19 = (System_Int32_array *)v16;
          return StageEntity__GetTurnEffect(v16, v18, v19, v17);
        }
      }
    }
    sub_1B8880C(v7, v6);
  }
  return (System_Int32_array *)sub_1B88658(int___TypeInfo, 0LL);
}


int32_t __fastcall StageEntity__getTurnEffectType(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5BC0E & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_24089/*"turnEffectType"*/);
    byte_4A5BC0E = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_24089/*"turnEffectType"*/, 0, v2);
}


bool __fastcall StageEntity__getTurnElapsedEndBattleFlag(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5BC0F & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_24090/*"turnElapsedEndBattle"*/);
    byte_4A5BC0F = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_24090/*"turnElapsedEndBattle"*/, 0, v2) > 0;
}


int32_t __fastcall StageEntity__getWave(StageEntity_o *this, const MethodInfo *method)
{
  return this->fields.wave;
}


bool __fastcall StageEntity__isNotDisplayRemain(StageEntity_o *this, const MethodInfo *method)
{
  return this->fields.enemyInfo == 2;
}


void __fastcall StageEntity___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5BC44 & 1) == 0 )
  {
    sub_1B885B0(&StageEntity___c_TypeInfo);
    byte_4A5BC44 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(StageEntity___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  StageEntity___c_TypeInfo->static_fields->__9 = (struct StageEntity___c_o *)v1;
  sub_1B88554((ServantStatusBattleListViewItem_o *)StageEntity___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void __fastcall StageEntity___c___ctor(StageEntity___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


AiAllocationInfo_o *__fastcall StageEntity___c___GetAiAllocationInfoList_b__68_0(
        StageEntity___c_o *this,
        Il2CppObject *obj,
        const MethodInfo *method)
{
  AiAllocationInfo_o *v4; // x20

  if ( (byte_4A5BC48 & 1) == 0 )
  {
    sub_1B885B0(&AiAllocationInfo_TypeInfo);
    byte_4A5BC48 = 1;
  }
  v4 = (AiAllocationInfo_o *)sub_1B887FC(AiAllocationInfo_TypeInfo);
  AiAllocationInfo___ctor(v4, obj, 0LL);
  return v4;
}


System_String_o *__fastcall StageEntity___c___GetBattleStartVoiceIdArray_b__54_0(
        StageEntity___c_o *this,
        Il2CppObject *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  return (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))x->klass->vtable[3].method)(
                              x,
                              x->klass->vtable[4].methodPtr);
}


int32_t __fastcall StageEntity___c___GetEnemyAddOrderPosArray_b__64_0(
        StageEntity___c_o *this,
        int32_t i,
        const MethodInfo *method)
{
  return i - 1;
}


SubBgmPlayArgs_array *__fastcall StageEntity___c___GetSubBgmPlayArgsArray_b__61_0(
        StageEntity___c_o *this,
        System_Collections_Generic_List_object__o *f,
        const MethodInfo *method)
{
  return SubBgmPlayArgs__ConvertFromEntityScript(f, 0LL);
}


int32_t __fastcall StageEntity___c___getNoEntryIds_b__36_0(
        StageEntity___c_o *this,
        Il2CppObject *x,
        const MethodInfo *method)
{
  System_String_o *v4; // x0

  if ( (byte_4A5BC47 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5BC47 = 1;
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


int32_t __fastcall StageEntity___c___getScriptIntArrayParam_b__22_0(
        StageEntity___c_o *this,
        Il2CppObject *x,
        const MethodInfo *method)
{
  System_String_o *v4; // x0

  if ( (byte_4A5BC45 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5BC45 = 1;
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


int32_t __fastcall StageEntity___c___getTurnEffect_b__34_0(
        StageEntity___c_o *this,
        Il2CppObject *x,
        const MethodInfo *method)
{
  System_String_o *v4; // x0

  if ( (byte_4A5BC46 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5BC46 = 1;
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