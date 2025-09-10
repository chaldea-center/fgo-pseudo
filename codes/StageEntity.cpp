void StageEntity___cctor(const MethodInfo *method)
{
  if ( (byte_4C27F32 & 1) == 0 )
  {
    sub_1C2D490(&StageEntity_TypeInfo);
    byte_4C27F32 = 1;
  }
  StageEntity_TypeInfo->static_fields->DEFAULT_ENEMY_ACTION_COUNT = 3;
}


void StageEntity___ctor(StageEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C27EEF & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_string___ctor__);
    byte_4C27EEF = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_338592C *)Method_DataEntityBase_string___ctor__);
}


void StageEntity___ctor_42699112(StageEntity_o *this, StageEntity_o *cSrc, const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct System_String_o *name; // x1
  struct System_String_o **p_name; // x20

  if ( (byte_4C27EF0 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_string___ctor__);
    byte_4C27EF0 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_338592C *)Method_DataEntityBase_string___ctor__);
  if ( !cSrc )
    sub_1C2D6EC(v5, v6);
  *(_QWORD *)&this->fields.questId = *(_QWORD *)&cSrc->fields.questId;
  name = cSrc->fields.name;
  this->fields.name = name;
  p_name = &this->fields.name;
  sub_1C2D434((CGThumbnailListItem_o *)p_name, (int32_t)name, v7, v8);
  *((_DWORD *)p_name + 2) = cSrc->fields.wave;
  p_name[2] = (struct System_String_o *)cSrc->fields.npcDeckId;
}


System_String_o *StageEntity__CreatePK(int32_t questId, int32_t questPhase, int32_t wave, const MethodInfo *method)
{
  if ( (byte_4C27EEE & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_4C27EEE = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           questId,
           questPhase,
           wave,
           (const MethodInfo_30CCF68 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *StageEntity__CreatePrimaryKey(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t questPhase; // w20
  int32_t questId; // w21
  int32_t wave; // w19

  if ( (byte_4C27EED & 1) == 0 )
  {
    sub_1C2D490(&StageEntity_TypeInfo);
    byte_4C27EED = 1;
  }
  questId = this->fields.questId;
  questPhase = this->fields.questPhase;
  wave = this->fields.wave;
  if ( !StageEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(StageEntity_TypeInfo);
  return StageEntity__CreatePK(questId, questPhase, wave, v2);
}


float StageEntity__EnemyExBattleUiPositionY(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C27F31 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_19017/*"enemyExBattleUiPositionY"*/);
    byte_4C27F31 = 1;
  }
  return (float)StageEntity__getScript(this, (System_String_o *)StringLiteral_19017/*"enemyExBattleUiPositionY"*/, 0, v2);
}


System_Int32_array *StageEntity__GetAddUniqueCameraIds(
        StageEntity_o *this,
        System_Int32_array *defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4C27F24 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_16679/*"addUniqueCameraIds"*/);
    byte_4C27F24 = 1;
  }
  return StageEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_16679/*"addUniqueCameraIds"*/, defVal, v3);
}


System_Object_array *StageEntity__GetAiActTypeAttackCommandCard(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_object__object__o *script; // x0
  __int64 naturalAligment; // x10

  if ( (byte_4C27F08 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C2D490(&Method_System_Collections_Generic_List_object__ToArray__);
    sub_1C2D490(&System_Collections_Generic_List_object__TypeInfo);
    sub_1C2D490(&StringLiteral_16715/*"aiActTypeAttackCommandCard"*/);
    byte_4C27F08 = 1;
  }
  if ( !StageEntity__checkScript(this, (System_String_o *)StringLiteral_16715/*"aiActTypeAttackCommandCard"*/, v2) )
    return 0;
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script
    || (script = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                              script,
                                                                              (Il2CppObject *)StringLiteral_16715/*"aiActTypeAttackCommandCard"*/,
                                                                              (const MethodInfo_344A2A8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0
    || (naturalAligment = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment,
        script->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (System_Collections_Generic_List_object__c *)script->klass->_2.typeHierarchy[naturalAligment - 1] != System_Collections_Generic_List_object__TypeInfo )
  {
    sub_1C2D6EC(script, v4);
  }
  return System_Collections_Generic_List_object___ToArray(
           (System_Collections_Generic_List_object__o *)script,
           (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_object__ToArray__);
}


int32_t StageEntity__GetAiActTypeAttackCommandCardType(
        StageEntity_o *this,
        BattleServantData_o *enemyServantData,
        const MethodInfo *method)
{
  System_Object_array *AiActTypeAttackCommandCard; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  il2cpp_array_size_t max_length; // x8
  System_Object_array *v9; // x20
  unsigned __int64 v10; // x23
  Il2CppObject **m_Items; // x24
  System_Collections_Generic_Dictionary_object__object__o *v12; // x21
  __int64 naturalAligment; // x10
  struct BattleDeckServantData_o *deckSvt; // x8
  int dropInfos; // w29
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x2
  __int64 v19; // x3
  StageEntity_o *v20; // x0
  const MethodInfo *v21; // x1

  if ( (byte_4C27F09 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C2D490(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1C2D490(&long_TypeInfo);
    sub_1C2D490(&StringLiteral_22305/*"npcServantId"*/);
    sub_1C2D490(&StringLiteral_17754/*"cardType"*/);
    byte_4C27F09 = 1;
  }
  AiActTypeAttackCommandCard = StageEntity__GetAiActTypeAttackCommandCard(this, (const MethodInfo *)enemyServantData);
  if ( AiActTypeAttackCommandCard )
  {
    max_length = AiActTypeAttackCommandCard->max_length;
    v9 = AiActTypeAttackCommandCard;
    if ( (int)max_length < 1 )
    {
LABEL_18:
      LODWORD(AiActTypeAttackCommandCard) = 0;
    }
    else
    {
      v10 = 0;
      m_Items = AiActTypeAttackCommandCard->m_Items;
      while ( 1 )
      {
        if ( v10 >= (unsigned int)max_length )
          sub_1C2D6F4(AiActTypeAttackCommandCard, v6, v7);
        v12 = (System_Collections_Generic_Dictionary_object__object__o *)m_Items[v10];
        if ( v12 )
        {
          naturalAligment = System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.naturalAligment;
          if ( v12->klass->_2.naturalAligment >= (unsigned int)naturalAligment
            && (System_Collections_Generic_Dictionary_string__object__c *)v12->klass->_2.typeHierarchy[naturalAligment - 1] == System_Collections_Generic_Dictionary_string__object__TypeInfo )
          {
            AiActTypeAttackCommandCard = (System_Object_array *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                                                  (System_Collections_Generic_Dictionary_object__object__o *)m_Items[v10],
                                                                  (Il2CppObject *)StringLiteral_22305/*"npcServantId"*/,
                                                                  (const MethodInfo_344A51C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
            if ( ((unsigned __int8)AiActTypeAttackCommandCard & 1) != 0 )
            {
              if ( !enemyServantData )
                goto LABEL_24;
              deckSvt = enemyServantData->fields.deckSvt;
              if ( !deckSvt )
                goto LABEL_24;
              dropInfos = (int)deckSvt->fields.dropInfos;
              AiActTypeAttackCommandCard = (System_Object_array *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                    v12,
                                                                    (Il2CppObject *)StringLiteral_22305/*"npcServantId"*/,
                                                                    (const MethodInfo_344A2A8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
              if ( !AiActTypeAttackCommandCard )
                goto LABEL_24;
              if ( AiActTypeAttackCommandCard->obj.klass->_1.element_class != long_TypeInfo->_1.element_class )
                goto LABEL_25;
              AiActTypeAttackCommandCard = (System_Object_array *)j_il2cpp_object_unbox_0(
                                                                    AiActTypeAttackCommandCard,
                                                                    long_TypeInfo,
                                                                    v16,
                                                                    v17);
              if ( dropInfos == LODWORD(AiActTypeAttackCommandCard->obj.klass) )
              {
                AiActTypeAttackCommandCard = (System_Object_array *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                                                      v12,
                                                                      (Il2CppObject *)StringLiteral_17754/*"cardType"*/,
                                                                      (const MethodInfo_344A51C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
                if ( ((unsigned __int8)AiActTypeAttackCommandCard & 1) != 0 )
                  break;
              }
            }
          }
        }
        LODWORD(max_length) = v9->max_length;
        if ( (__int64)++v10 >= (int)max_length )
          goto LABEL_18;
      }
      AiActTypeAttackCommandCard = (System_Object_array *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                            v12,
                                                            (Il2CppObject *)StringLiteral_17754/*"cardType"*/,
                                                            (const MethodInfo_344A2A8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !AiActTypeAttackCommandCard )
LABEL_24:
        sub_1C2D6EC(AiActTypeAttackCommandCard, v6);
      if ( AiActTypeAttackCommandCard->obj.klass->_1.element_class == long_TypeInfo->_1.element_class )
      {
        LODWORD(AiActTypeAttackCommandCard) = *(_DWORD *)j_il2cpp_object_unbox_0(
                                                           AiActTypeAttackCommandCard,
                                                           long_TypeInfo,
                                                           v18,
                                                           v19);
      }
      else
      {
LABEL_25:
        sub_1C2D9AC(AiActTypeAttackCommandCard);
        LODWORD(AiActTypeAttackCommandCard) = StageEntity__IsDisableFieldMotion(v20, v21);
      }
    }
  }
  return (int)AiActTypeAttackCommandCard;
}


System_Collections_Generic_List_AiAllocationInfo__o *StageEntity__GetAiAllocationInfoList(
        StageEntity_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Value_object; // x19
  StageEntity___c_c *v5; // x0
  System_Func_object__object__o *_9__64_0; // x20
  Il2CppObject *v7; // x21
  struct StageEntity___c_StaticFields *static_fields; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x0

  if ( (byte_4C27F1C & 1) == 0 )
  {
    sub_1C2D490(&Method_BasicHelper_GetValue_List_object____);
    sub_1C2D490(&Method_System_Linq_Enumerable_Select_object__AiAllocationInfo___);
    sub_1C2D490(&Method_System_Linq_Enumerable_ToList_AiAllocationInfo___);
    sub_1C2D490(&System_Func_object__AiAllocationInfo__TypeInfo);
    sub_1C2D490(&Method_StageEntity___c__GetAiAllocationInfoList_b__64_0__);
    sub_1C2D490(&StageEntity___c_TypeInfo);
    sub_1C2D490(&StringLiteral_16716/*"aiAllocations"*/);
    byte_4C27F1C = 1;
  }
  Value_object = BasicHelper__GetValue_object_(
                   this->fields.script,
                   (System_String_o *)StringLiteral_16716/*"aiAllocations"*/,
                   0,
                   (const MethodInfo_30BC2C4 *)Method_BasicHelper_GetValue_List_object____);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)Value_object, 0) )
    return 0;
  v5 = StageEntity___c_TypeInfo;
  if ( !StageEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(StageEntity___c_TypeInfo);
    v5 = StageEntity___c_TypeInfo;
  }
  _9__64_0 = (System_Func_object__object__o *)v5->static_fields->__9__64_0;
  if ( !_9__64_0 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = StageEntity___c_TypeInfo;
    }
    v7 = (Il2CppObject *)v5->static_fields->__9;
    _9__64_0 = (System_Func_object__object__o *)sub_1C2D6DC(System_Func_object__AiAllocationInfo__TypeInfo);
    System_Func_object__object____ctor(_9__64_0, v7, Method_StageEntity___c__GetAiAllocationInfoList_b__64_0__, 0);
    static_fields = StageEntity___c_TypeInfo->static_fields;
    static_fields->__9__64_0 = (struct System_Func_object__AiAllocationInfo__o *)_9__64_0;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__64_0, (int32_t)_9__64_0, v9, v10);
  }
  v11 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)Value_object,
                                                               (System_Func_TSource__TResult__o *)_9__64_0,
                                                               (const MethodInfo_310501C *)Method_System_Linq_Enumerable_Select_object__AiAllocationInfo___);
  return (System_Collections_Generic_List_AiAllocationInfo__o *)System_Linq_Enumerable__ToList_object_(
                                                                  v11,
                                                                  (const MethodInfo_3112C88 *)Method_System_Linq_Enumerable_ToList_AiAllocationInfo___);
}


System_Int32_array *StageEntity__GetAssumedEffectId(StageEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C27F20 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_16917/*"assumedEffectId"*/);
    byte_4C27F20 = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_16917/*"assumedEffectId"*/, 0);
}


System_String_array *StageEntity__GetAssumedVoiceAssetNames(StageEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C27F25 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_16918/*"assumedVoiceAssetNames"*/);
    byte_4C27F25 = 1;
  }
  return EntityScriptUtil__GetStringArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_16918/*"assumedVoiceAssetNames"*/, 0);
}


System_String_array *StageEntity__GetBattleStartVoiceIdArray(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  Il2CppObject *ScriptObject; // x0
  System_Collections_Generic_List_object__o *v5; // x19
  __int64 naturalAligment; // x10
  StageEntity___c_c *v8; // x0
  System_Converter_TInput__TOutput__o *_9__49_0; // x20
  Il2CppObject *v10; // x21
  struct StageEntity___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  System_Collections_Generic_List_object__o *v14; // x0
  __int64 v15; // x1

  if ( (byte_4C27F0F & 1) == 0 )
  {
    sub_1C2D490(&System_Converter_object__string__TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_object__ConvertAll_string___);
    sub_1C2D490(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1C2D490(&System_Collections_Generic_List_object__TypeInfo);
    sub_1C2D490(&string___TypeInfo);
    sub_1C2D490(&Method_StageEntity___c__GetBattleStartVoiceIdArray_b__49_0__);
    sub_1C2D490(&StageEntity___c_TypeInfo);
    sub_1C2D490(&StringLiteral_17082/*"battleStartVoiceIds"*/);
    byte_4C27F0F = 1;
  }
  ScriptObject = StageEntity__GetScriptObject(this, (System_String_o *)StringLiteral_17082/*"battleStartVoiceIds"*/, v2);
  if ( !ScriptObject )
    return (System_String_array *)sub_1C2D538(string___TypeInfo, 0);
  v5 = (System_Collections_Generic_List_object__o *)ScriptObject;
  naturalAligment = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment;
  if ( ScriptObject->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (System_Collections_Generic_List_object__c *)ScriptObject->klass->_2.typeHierarchy[naturalAligment - 1] != System_Collections_Generic_List_object__TypeInfo )
  {
    return (System_String_array *)sub_1C2D538(string___TypeInfo, 0);
  }
  v8 = StageEntity___c_TypeInfo;
  if ( !StageEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(StageEntity___c_TypeInfo);
    v8 = StageEntity___c_TypeInfo;
  }
  _9__49_0 = (System_Converter_TInput__TOutput__o *)v8->static_fields->__9__49_0;
  if ( !_9__49_0 )
  {
    if ( !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      v8 = StageEntity___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v8->static_fields->__9;
    _9__49_0 = (System_Converter_TInput__TOutput__o *)sub_1C2D6DC(System_Converter_object__string__TypeInfo);
    System_Converter_object__object____ctor(
      _9__49_0,
      v10,
      Method_StageEntity___c__GetBattleStartVoiceIdArray_b__49_0__,
      0);
    static_fields = StageEntity___c_TypeInfo->static_fields;
    static_fields->__9__49_0 = (struct System_Converter_object__string__o *)_9__49_0;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__49_0, (int32_t)_9__49_0, v12, v13);
  }
  v14 = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___ConvertAll_object_(
                                                       v5,
                                                       (System_Converter_T__TOutput__o *)_9__49_0,
                                                       (const MethodInfo_2FF5F70 *)Method_System_Collections_Generic_List_object__ConvertAll_string___);
  if ( !v14 )
    sub_1C2D6EC(0, v15);
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  v14,
                                  (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_string__ToArray__);
}


int32_t StageEntity__GetBattleStartVoiceServantId(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C27F0D & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_17083/*"battleStartVoiceSvtId"*/);
    byte_4C27F0D = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_17083/*"battleStartVoiceSvtId"*/, 0, v2);
}


int32_t StageEntity__GetBattleStartVoiceServantLimit(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C27F0E & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_17084/*"battleStartVoiceSvtLimit"*/);
    byte_4C27F0E = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_17084/*"battleStartVoiceSvtLimit"*/, -1, v2);
}


System_Int32_array *StageEntity__GetBossIdAndChangeBgmId(StageEntity_o *this, const MethodInfo *method)
{
  System_Int32_array *v3; // x2
  const MethodInfo *v4; // x3

  if ( (byte_4C27F07 & 1) == 0 )
  {
    sub_1C2D490(&int___TypeInfo);
    sub_1C2D490(&StringLiteral_17347/*"bossIdAndChangeBgmId"*/);
    byte_4C27F07 = 1;
  }
  v3 = (System_Int32_array *)sub_1C2D538(int___TypeInfo, 0);
  return StageEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_17347/*"bossIdAndChangeBgmId"*/, v3, v4);
}


System_Int32_array *StageEntity__GetCutInSvtIds(StageEntity_o *this, bool isEnemy, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  System_String_o **v6; // x8

  if ( (byte_4C27F04 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_19013/*"enemyCutInSvtIds"*/);
    sub_1C2D490(&StringLiteral_22701/*"playerCutInSvtIds"*/);
    byte_4C27F04 = 1;
  }
  if ( isEnemy )
    v6 = (System_String_o **)&StringLiteral_19013/*"enemyCutInSvtIds"*/;
  else
    v6 = (System_String_o **)&StringLiteral_22701/*"playerCutInSvtIds"*/;
  return StageEntity__getScriptIntArrayParam(this, *v6, 0, v3);
}


int32_t StageEntity__GetEffectBgmId(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C27F05 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_18903/*"effectBgmId"*/);
    byte_4C27F05 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_18903/*"effectBgmId"*/, -1, v2);
}


int32_t StageEntity__GetEffectSvtId(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C27F03 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_18916/*"effectSvtId"*/);
    byte_4C27F03 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_18916/*"effectSvtId"*/, 0, v2);
}


System_Int32_array *StageEntity__GetEnemyAddOrderPosArray(
        StageEntity_o *this,
        int32_t enemyFieldPosCount,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  System_Int32_array *ScriptIntArrayParam; // x0
  System_Int32_array *v7; // x20
  System_Collections_Generic_List_int__o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 i; // x22
  struct System_Int32_array *items; // x9
  _QWORD *v15; // x10
  __int64 size; // x11
  System_Collections_Generic_IEnumerable_int__o *v18; // x0

  if ( (byte_4C27F18 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C2D490(&StringLiteral_19015/*"enemyEntryOrder"*/);
    byte_4C27F18 = 1;
  }
  ScriptIntArrayParam = StageEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_19015/*"enemyEntryOrder"*/, 0, v3);
  if ( ScriptIntArrayParam )
  {
    v7 = ScriptIntArrayParam;
    v8 = (System_Collections_Generic_List_int__o *)sub_1C2D6DC(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v8,
      (const MethodInfo_376C30C *)Method_System_Collections_Generic_List_int___ctor__);
    max_length = v7->max_length;
    if ( (int)max_length >= 1 )
    {
      for ( i = 0; (__int64)i < (int)max_length; ++i )
      {
        if ( i >= (unsigned int)max_length )
          sub_1C2D6F4(v9, v10, v11);
        v10 = (unsigned int)(v7->m_Items[i] - 1);
        if ( (int)v10 < enemyFieldPosCount )
        {
          if ( !v8 )
            goto LABEL_18;
          items = v8->fields._items;
          v15 = Method_System_Collections_Generic_List_int__Add__;
          ++v8->fields._version;
          if ( !items )
            goto LABEL_18;
          size = v8->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v8,
              v10,
              *(const MethodInfo_376CB60 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
            LODWORD(max_length) = v7->max_length;
          }
          else
          {
            v8->fields._size = size + 1;
            items->m_Items[size] = v10;
          }
        }
      }
    }
    if ( !v8 )
LABEL_18:
      sub_1C2D6EC(v9, v10);
    return System_Collections_Generic_List_int___ToArray(
             v8,
             (const MethodInfo_376E618 *)Method_System_Collections_Generic_List_int__ToArray__);
  }
  else
  {
    v18 = System_Linq_Enumerable__Range(0, enemyFieldPosCount, 0);
    return System_Linq_Enumerable__ToArray_int_(
             (System_Collections_Generic_IEnumerable_TSource__o *)v18,
             (const MethodInfo_310DE54 *)Method_System_Linq_Enumerable_ToArray_int___);
  }
}


System_Int32_array *StageEntity__GetEnemyAutoTargetOrder(
        StageEntity_o *this,
        int32_t enemyFieldPosCount,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  System_Int32_array *ScriptIntArrayParam; // x0
  System_Int32_array *v7; // x20
  System_Collections_Generic_List_int__o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 i; // x22
  struct System_Int32_array *items; // x9
  _QWORD *v15; // x10
  __int64 size; // x11

  if ( (byte_4C27F17 & 1) == 0 )
  {
    sub_1C2D490(&int___TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C2D490(&StringLiteral_19010/*"enemyAutoTargetOrder"*/);
    byte_4C27F17 = 1;
  }
  ScriptIntArrayParam = StageEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_19010/*"enemyAutoTargetOrder"*/, 0, v3);
  if ( !ScriptIntArrayParam )
    return (System_Int32_array *)sub_1C2D538(int___TypeInfo, 0);
  v7 = ScriptIntArrayParam;
  v8 = (System_Collections_Generic_List_int__o *)sub_1C2D6DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v8,
    (const MethodInfo_376C30C *)Method_System_Collections_Generic_List_int___ctor__);
  max_length = v7->max_length;
  if ( (int)max_length >= 1 )
  {
    for ( i = 0; (__int64)i < (int)max_length; ++i )
    {
      if ( i >= (unsigned int)max_length )
        sub_1C2D6F4(v9, v10, v11);
      v10 = (unsigned int)(v7->m_Items[i] - 1);
      if ( (int)v10 < enemyFieldPosCount )
      {
        if ( !v8 )
          goto LABEL_18;
        items = v8->fields._items;
        v15 = Method_System_Collections_Generic_List_int__Add__;
        ++v8->fields._version;
        if ( !items )
          goto LABEL_18;
        size = v8->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v8,
            v10,
            *(const MethodInfo_376CB60 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
          LODWORD(max_length) = v7->max_length;
        }
        else
        {
          v8->fields._size = size + 1;
          items->m_Items[size] = v10;
        }
      }
    }
  }
  if ( !v8 )
LABEL_18:
    sub_1C2D6EC(v9, v10);
  return System_Collections_Generic_List_int___ToArray(
           v8,
           (const MethodInfo_376E618 *)Method_System_Collections_Generic_List_int__ToArray__);
}


int32_t StageEntity__GetEnemyCountStartValue(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C27F1D & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_19012/*"enemyCountStartValue"*/);
    byte_4C27F1D = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_19012/*"enemyCountStartValue"*/, 0, v2);
}


int32_t StageEntity__GetEnemyEntryMaxCountEachTurn(StageEntity_o *this, int32_t defaultValue, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4C27F19 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_19014/*"enemyEntryMaxCountEachTurn"*/);
    byte_4C27F19 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_19014/*"enemyEntryMaxCountEachTurn"*/, defaultValue, v3);
}


int32_t StageEntity__GetEnemyFieldPosCount(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C27F10 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_19018/*"enemyFieldPosCount"*/);
    byte_4C27F10 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_19018/*"enemyFieldPosCount"*/, 3, v2);
}


System_Single_array *StageEntity__GetEnemyMasterCommandSpellIconPosition(StageEntity_o *this, const MethodInfo *method)
{
  long double inited; // q0
  _QWORD *v4; // x20
  System_Collections_Generic_Dictionary_string__object__o *script; // x19
  __int64 v6; // x8
  __int64 v7; // x0
  __int64 v8; // x0

  if ( (byte_4C27F29 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Array_Empty_float___);
    sub_1C2D490(&StringLiteral_19021/*"enemyMasterCommandSpellIconPosition"*/);
    byte_4C27F29 = 1;
  }
  v4 = Method_System_Array_Empty_float___;
  script = this->fields.script;
  v6 = *((_QWORD *)Method_System_Array_Empty_float___ + 7);
  if ( !v6 )
  {
    sub_1C7DC00(Method_System_Array_Empty_float___);
    v6 = v4[7];
  }
  v7 = *(_QWORD *)(v6 + 16);
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1C7DBA4(inited);
  if ( !*(_DWORD *)(v7 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v7);
  v8 = *(_QWORD *)(v4[7] + 16LL);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1C7DBA4(inited);
  return EntityScriptUtil__GetFloatArray(
           script,
           (System_String_o *)StringLiteral_19021/*"enemyMasterCommandSpellIconPosition"*/,
           **(System_Single_array ***)(v8 + 184),
           0);
}


System_Int32_array *StageEntity__GetEnemyMasterCommandSpellIconSize(StageEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C27F28 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_19022/*"enemyMasterCommandSpellIconSize"*/);
    byte_4C27F28 = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_19022/*"enemyMasterCommandSpellIconSize"*/, 0);
}


int32_t StageEntity__GetEnemyUiId(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C27F2F & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_6040/*"EnemyUiId"*/);
    byte_4C27F2F = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_6040/*"EnemyUiId"*/, -1, v2);
}


int32_t StageEntity__GetFadeType(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C27F02 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_17080/*"battleStartFadeType"*/);
    byte_4C27F02 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_17080/*"battleStartFadeType"*/, 0, v2);
}


System_Int32_array *StageEntity__GetFieldCallServantId(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  System_Int32_array *result; // x0

  if ( (byte_4C27F0B & 1) == 0 )
  {
    sub_1C2D490(&int___TypeInfo);
    sub_1C2D490(&StringLiteral_17689/*"call"*/);
    byte_4C27F0B = 1;
  }
  result = StageEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_17689/*"call"*/, 0, v2);
  if ( !result )
    return (System_Int32_array *)sub_1C2D538(int___TypeInfo, 0);
  return result;
}


System_Int32_array *StageEntity__GetFieldPosSkillId(StageEntity_o *this, const MethodInfo *method)
{
  System_Int32_array *v3; // x2
  const MethodInfo *v4; // x3

  if ( (byte_4C27F1A & 1) == 0 )
  {
    sub_1C2D490(&int___TypeInfo);
    sub_1C2D490(&StringLiteral_19414/*"fieldPosSkillId"*/);
    byte_4C27F1A = 1;
  }
  v3 = (System_Int32_array *)sub_1C2D538(int___TypeInfo, 0);
  return StageEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_19414/*"fieldPosSkillId"*/, v3, v4);
}


System_Int32_array *StageEntity__GetFieldPosSkillLv(StageEntity_o *this, const MethodInfo *method)
{
  System_Int32_array *v3; // x2
  const MethodInfo *v4; // x3

  if ( (byte_4C27F1B & 1) == 0 )
  {
    sub_1C2D490(&int___TypeInfo);
    sub_1C2D490(&StringLiteral_19415/*"fieldPosSkillLv"*/);
    byte_4C27F1B = 1;
  }
  v3 = (System_Int32_array *)sub_1C2D538(int___TypeInfo, 0);
  return StageEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_19415/*"fieldPosSkillLv"*/, v3, v4);
}


System_Int32_array *StageEntity__GetMultiEffectIds(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C27F01 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_22119/*"multiEffectIds"*/);
    byte_4C27F01 = 1;
  }
  return StageEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_22119/*"multiEffectIds"*/, 0, v2);
}


int32_t StageEntity__GetPriorityBG(StageEntity_o *this, int32_t def, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4C27F1E & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_22756/*"priorityBG"*/);
    byte_4C27F1E = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_22756/*"priorityBG"*/, def, v3);
}


int32_t StageEntity__GetPriorityBgm(StageEntity_o *this, int32_t def, const MethodInfo *method)
{
  const MethodInfo *v5; // x3
  Il2CppObject *Master_object; // x0
  __int64 v8; // x1

  if ( (byte_4C27F1F & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_BgmMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&StringLiteral_22757/*"priorityBgm"*/);
    byte_4C27F1F = 1;
  }
  if ( StageEntity__checkScript(this, (System_String_o *)StringLiteral_22757/*"priorityBgm"*/, method) )
    return StageEntity__getScript(this, (System_String_o *)StringLiteral_22757/*"priorityBgm"*/, def, v5);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_BgmMaster___);
  if ( !Master_object )
    sub_1C2D6EC(0, v8);
  return BgmMaster__GetBgmPriority((BgmMaster_o *)Master_object, this->fields.bgmId, def, 0);
}


int32_t StageEntity__GetProhibitBgmChangeInTreasureDeviceAnim(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C27F26 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_22777/*"prohibitBgmChangeInTreasureDeviceAnim"*/);
    byte_4C27F26 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_22777/*"prohibitBgmChangeInTreasureDeviceAnim"*/, 0, v2);
}


Il2CppObject *StageEntity__GetScriptObject(StageEntity_o *this, System_String_o *key, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C27F0C & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    byte_4C27F0C = 1;
  }
  value = 0;
  script = this->fields.script;
  if ( !script )
    sub_1C2D6EC(0, key);
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)script,
         (Il2CppObject *)key,
         &value,
         (const MethodInfo_344BB34 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    return value;
  }
  else
  {
    return 0;
  }
}


int32_t StageEntity__GetShadowImageId(StageEntity_o *this, bool isEnemy, const MethodInfo *method)
{
  System_String_o **v5; // x8

  if ( (byte_4C27F2C & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_10676/*"PlayerShadowImageId"*/);
    sub_1C2D490(&StringLiteral_6038/*"EnemyShadowImageId"*/);
    byte_4C27F2C = 1;
  }
  if ( isEnemy )
    v5 = (System_String_o **)&StringLiteral_6038/*"EnemyShadowImageId"*/;
  else
    v5 = (System_String_o **)&StringLiteral_10676/*"PlayerShadowImageId"*/;
  return EntityScriptUtil__GetIntValue(this->fields.script, *v5, 0, 0);
}


int32_t StageEntity__GetSpecialShadowEffectId(StageEntity_o *this, bool isEnemy, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_string__object__o *script; // x19
  __int64 *v6; // x8
  System_String_o *v7; // x20
  int32_t IntValue; // w2

  if ( (byte_4C27F2B & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_12962/*"SpecialShadowEffectId"*/);
    sub_1C2D490(&StringLiteral_10677/*"PlayerSpecialShadowEffectId"*/);
    sub_1C2D490(&StringLiteral_6039/*"EnemySpecialShadowEffectId"*/);
    byte_4C27F2B = 1;
  }
  script = this->fields.script;
  if ( isEnemy )
    v6 = &StringLiteral_6039/*"EnemySpecialShadowEffectId"*/;
  else
    v6 = &StringLiteral_10677/*"PlayerSpecialShadowEffectId"*/;
  v7 = (System_String_o *)*v6;
  IntValue = EntityScriptUtil__GetIntValue(script, (System_String_o *)StringLiteral_12962/*"SpecialShadowEffectId"*/, 0, 0);
  return EntityScriptUtil__GetIntValue(script, v7, IntValue, 0);
}


int32_t StageEntity__GetStartBgmOffFlag(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C27F06 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_23636/*"startBgmOff"*/);
    byte_4C27F06 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_23636/*"startBgmOff"*/, 0, v2);
}


SubBgmPlayArgs_array *StageEntity__GetSubBgmPlayArgsArray(StageEntity_o *this, const MethodInfo *method)
{
  StageEntity___c_c *v3; // x0
  System_Func_object__object__o *_9__56_0; // x20
  Il2CppObject *v5; // x21
  struct StageEntity___c_StaticFields *static_fields; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C27F14 & 1) == 0 )
  {
    sub_1C2D490(&Method_EntityScriptUtil_GetScriptValue_List_object___SubBgmPlayArgs_____);
    sub_1C2D490(&System_Func_List_object___SubBgmPlayArgs____TypeInfo);
    sub_1C2D490(&Method_StageEntity___c__GetSubBgmPlayArgsArray_b__56_0__);
    sub_1C2D490(&StageEntity___c_TypeInfo);
    sub_1C2D490(&StringLiteral_23741/*"subBgms"*/);
    byte_4C27F14 = 1;
  }
  v3 = StageEntity___c_TypeInfo;
  if ( !StageEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(StageEntity___c_TypeInfo);
    v3 = StageEntity___c_TypeInfo;
  }
  _9__56_0 = (System_Func_object__object__o *)v3->static_fields->__9__56_0;
  if ( !_9__56_0 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = StageEntity___c_TypeInfo;
    }
    v5 = (Il2CppObject *)v3->static_fields->__9;
    _9__56_0 = (System_Func_object__object__o *)sub_1C2D6DC(System_Func_List_object___SubBgmPlayArgs____TypeInfo);
    System_Func_object__object____ctor(_9__56_0, v5, Method_StageEntity___c__GetSubBgmPlayArgsArray_b__56_0__, 0);
    static_fields = StageEntity___c_TypeInfo->static_fields;
    static_fields->__9__56_0 = (struct System_Func_List_object___SubBgmPlayArgs____o *)_9__56_0;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__56_0, (int32_t)_9__56_0, v7, v8);
  }
  return (SubBgmPlayArgs_array *)EntityScriptUtil__GetScriptValue_object__object_(
                                   this->fields.script,
                                   (System_String_o *)StringLiteral_23741/*"subBgms"*/,
                                   (System_Func_TSource__TDestination__o *)_9__56_0,
                                   0,
                                   (const MethodInfo_30D50E8 *)Method_EntityScriptUtil_GetScriptValue_List_object___SubBgmPlayArgs_____);
}


int32_t StageEntity__GetSubBgmsPriority(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C27F15 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_23742/*"subBgmsPriority"*/);
    byte_4C27F15 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_23742/*"subBgmsPriority"*/, 0, v2);
}


System_Int32_array *StageEntity__GetWaveFieldMotionIds(
        StageEntity_o *this,
        System_Int32_array *defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4C27F23 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_19412/*"fieldMotionIds"*/);
    byte_4C27F23 = 1;
  }
  return StageEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_19412/*"fieldMotionIds"*/, defVal, v3);
}


bool StageEntity__HasChangeBgKey(StageEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C27EF9 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_17798/*"changeBgId"*/);
    sub_1C2D490(&StringLiteral_17799/*"changeBgType"*/);
    byte_4C27EF9 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_17798/*"changeBgId"*/, 0)
      || EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_17799/*"changeBgType"*/, 0);
}


bool StageEntity__HasEnemyExBattleUiPositionY(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4C27F30 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_19017/*"enemyExBattleUiPositionY"*/);
    byte_4C27F30 = 1;
  }
  return StageEntity__checkScript(this, (System_String_o *)StringLiteral_19017/*"enemyExBattleUiPositionY"*/, v2);
}


bool StageEntity__HasExtraBattleUserInterfaceData(
        StageEntity_o *this,
        ExtraBattleUserInterfaceData_JsonConvertData_array **dataArray,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  long double inited; // q0
  _QWORD *v7; // x21
  __int64 v8; // x8
  __int64 v9; // x0
  __int64 v10; // x0
  ExtraBattleUserInterfaceData_JsonConvertData_array **v11; // x8
  ExtraBattleUserInterfaceData_JsonConvertData_array *v12; // x1
  __int64 v13; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  Il2CppObject *v15; // x20
  ExtraBattleUserInterfaceData_JsonConvertData_array *v16; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C27F2E & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Array_Empty_ExtraBattleUserInterfaceData_JsonConvertData___);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1C2D490(&Method_System_Linq_Enumerable_Any_ExtraBattleUserInterfaceData_JsonConvertData___);
    sub_1C2D490(&Method_JsonManager_Deserialize_ExtraBattleUserInterfaceData_JsonConvertData_____);
    sub_1C2D490(&JsonManager_TypeInfo);
    sub_1C2D490(&StringLiteral_19302/*"exBattleUI"*/);
    byte_4C27F2E = 1;
  }
  v7 = Method_System_Array_Empty_ExtraBattleUserInterfaceData_JsonConvertData___;
  value = 0;
  v8 = *((_QWORD *)Method_System_Array_Empty_ExtraBattleUserInterfaceData_JsonConvertData___ + 7);
  if ( !v8 )
  {
    sub_1C7DC00(Method_System_Array_Empty_ExtraBattleUserInterfaceData_JsonConvertData___);
    v8 = v7[7];
  }
  v9 = *(_QWORD *)(v8 + 16);
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1C7DBA4(inited);
  if ( !*(_DWORD *)(v9 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v9);
  v10 = *(_QWORD *)(v7[7] + 16LL);
  if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
    v10 = sub_1C7DBA4(inited);
  v11 = *(ExtraBattleUserInterfaceData_JsonConvertData_array ***)(v10 + 184);
  v12 = *v11;
  *dataArray = *v11;
  sub_1C2D434((CGThumbnailListItem_o *)dataArray, (int32_t)v12, (int32_t)method, v3);
  script = this->fields.script;
  if ( !script )
    sub_1C2D6EC(0, v13);
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)script,
         (Il2CppObject *)StringLiteral_19302/*"exBattleUI"*/,
         &value,
         (const MethodInfo_344BB34 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    v15 = value;
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v16 = (ExtraBattleUserInterfaceData_JsonConvertData_array *)JsonManager__Deserialize_object_(
                                                                  v15,
                                                                  (const MethodInfo_313DC6C *)Method_JsonManager_Deserialize_ExtraBattleUserInterfaceData_JsonConvertData_____);
    *dataArray = v16;
    sub_1C2D434((CGThumbnailListItem_o *)dataArray, (int32_t)v16, v17, v18);
  }
  return System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)*dataArray,
           (const MethodInfo_30DA4C8 *)Method_System_Linq_Enumerable_Any_ExtraBattleUserInterfaceData_JsonConvertData___);
}


bool StageEntity__Is3_6BossBattle(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C27F11 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_1379/*"3.6BossBattle"*/);
    byte_4C27F11 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_1379/*"3.6BossBattle"*/, 0, v2) > 0;
}


bool StageEntity__IsClearFieldBuffWhenWaveStart(StageEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C27F2D & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_17997/*"clearFieldBuffWhenWaveStart"*/);
    byte_4C27F2D = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_17997/*"clearFieldBuffWhenWaveStart"*/, 0, 0) != 0;
}


bool StageEntity__IsDisableFieldMotion(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C27F0A & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_18629/*"disableUniqueFieldMotion"*/);
    byte_4C27F0A = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_18629/*"disableUniqueFieldMotion"*/, 0, v2) > 0;
}


bool StageEntity__IsForceSetNormalEnemyStatusUI(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4C27F16 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_6811/*"ForceSetNormalEnemyStatusUI"*/);
    byte_4C27F16 = 1;
  }
  return StageEntity__checkScript(this, (System_String_o *)StringLiteral_6811/*"ForceSetNormalEnemyStatusUI"*/, v2);
}


bool StageEntity__IsReleaseUnusedAssetsWhenEntryMember(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4C27F13 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_23004/*"releaseUnusedAssetsWhenEntryMember"*/);
    byte_4C27F13 = 1;
  }
  return StageEntity__checkScript(this, (System_String_o *)StringLiteral_23004/*"releaseUnusedAssetsWhenEntryMember"*/, v2);
}


bool StageEntity__IsShowEnemyMasterIconOnWaveStart(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4C27F27 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_23464/*"showEnemyMasterIconOnWaveStart"*/);
    byte_4C27F27 = 1;
  }
  return StageEntity__checkScript(this, (System_String_o *)StringLiteral_23464/*"showEnemyMasterIconOnWaveStart"*/, v2);
}


bool StageEntity__IsSkipWaveStartEffect(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C27F22 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_23511/*"skipWaveStartEffect"*/);
    byte_4C27F22 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_23511/*"skipWaveStartEffect"*/, 0, v2) > 0;
}


bool StageEntity__IsSkipWaveStartFadeInSe(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4C27F21 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_23512/*"skipWaveStartFadeInSe"*/);
    byte_4C27F21 = 1;
  }
  return StageEntity__checkScript(this, (System_String_o *)StringLiteral_23512/*"skipWaveStartFadeInSe"*/, v2);
}


bool StageEntity__IsSpecifiedBattleStartVoice(StageEntity_o *this, const MethodInfo *method)
{
  int32_t BattleStartVoiceServantId; // w20
  const MethodInfo *v4; // x1

  BattleStartVoiceServantId = StageEntity__GetBattleStartVoiceServantId(this, method);
  return (BattleStartVoiceServantId > 0) & (StageEntity__GetBattleStartVoiceServantLimit(this, v4) >= 0);
}


bool StageEntity__IsSpecifiedBattleStartVoice_42704300(
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


bool StageEntity__TryGetOverwritePlayerSequenceSelectTypeByGender(
        StageEntity_o *this,
        int32_t servantId,
        int32_t *genderSelectType,
        int32_t *patternId,
        const MethodInfo *method)
{
  __int64 v9; // x23
  Il2CppObject *Master_object; // x0
  __int64 monitor_high; // x1
  Il2CppObject *Value_object__object; // x0
  Il2CppObject *v13; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x21
  System_Func_object__bool__o *v15; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0
  StageEntity___c_c *v17; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x21
  System_Func_object__int__o *_9__78_1; // x22
  Il2CppObject *v20; // x23
  struct StageEntity___c_StaticFields *static_fields; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x0
  System_Object_array *v25; // x21
  __int64 v26; // x2
  int max_length; // w8
  CommonReleaseMaster_o *v28; // x22
  unsigned int v29; // w23
  Il2CppObject *v30; // x24

  if ( (byte_4C27F2A & 1) == 0 )
  {
    sub_1C2D490(&Method_BasicHelper_GetValue_string__object___);
    sub_1C2D490(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_System_Linq_Enumerable_OrderByDescending_BattleTreasureDeviceSequenceSelectType__int___);
    sub_1C2D490(&Method_System_Linq_Enumerable_ToArray_BattleTreasureDeviceSequenceSelectType___);
    sub_1C2D490(&Method_System_Linq_Enumerable_Where_BattleTreasureDeviceSequenceSelectType___);
    sub_1C2D490(&System_Func_BattleTreasureDeviceSequenceSelectType__bool__TypeInfo);
    sub_1C2D490(&System_Func_BattleTreasureDeviceSequenceSelectType__int__TypeInfo);
    sub_1C2D490(&Method_JsonManager_DeserializeArray_BattleTreasureDeviceSequenceSelectType___);
    sub_1C2D490(&JsonManager_TypeInfo);
    sub_1C2D490(&Method_StageEntity___c__TryGetOverwritePlayerSequenceSelectTypeByGender_b__78_1__);
    sub_1C2D490(&Method_StageEntity___c__DisplayClass78_0__TryGetOverwritePlayerSequenceSelectTypeByGender_b__0__);
    sub_1C2D490(&StageEntity___c__DisplayClass78_0_TypeInfo);
    sub_1C2D490(&StageEntity___c_TypeInfo);
    sub_1C2D490(&StringLiteral_22549/*"overwritePlayerSequenceSelectTypeByGender"*/);
    byte_4C27F2A = 1;
  }
  v9 = sub_1C2D6DC(StageEntity___c__DisplayClass78_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_28;
  *(_DWORD *)(v9 + 16) = servantId;
  *genderSelectType = -1;
  *patternId = -1;
  Value_object__object = BasicHelper__GetValue_object__object_(
                           (System_Collections_Generic_Dictionary_K__V__o *)this->fields.script,
                           (Il2CppObject *)StringLiteral_22549/*"overwritePlayerSequenceSelectTypeByGender"*/,
                           0,
                           (const MethodInfo_30BCA70 *)Method_BasicHelper_GetValue_string__object___);
  if ( !Value_object__object )
    return (char)Value_object__object;
  v13 = Value_object__object;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v14 = (System_Collections_Generic_IEnumerable_TSource__o *)JsonManager__DeserializeArray_object_(
                                                               v13,
                                                               (const MethodInfo_313DDBC *)Method_JsonManager_DeserializeArray_BattleTreasureDeviceSequenceSelectType___);
  v15 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_BattleTreasureDeviceSequenceSelectType__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v15,
    (Il2CppObject *)v9,
    Method_StageEntity___c__DisplayClass78_0__TryGetOverwritePlayerSequenceSelectTypeByGender_b__0__,
    0);
  v16 = System_Linq_Enumerable__Where_object_(
          v14,
          (System_Func_TSource__bool__o *)v15,
          (const MethodInfo_3115108 *)Method_System_Linq_Enumerable_Where_BattleTreasureDeviceSequenceSelectType___);
  v17 = StageEntity___c_TypeInfo;
  v18 = v16;
  if ( !StageEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(StageEntity___c_TypeInfo);
    v17 = StageEntity___c_TypeInfo;
  }
  _9__78_1 = (System_Func_object__int__o *)v17->static_fields->__9__78_1;
  if ( !_9__78_1 )
  {
    if ( !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      v17 = StageEntity___c_TypeInfo;
    }
    v20 = (Il2CppObject *)v17->static_fields->__9;
    _9__78_1 = (System_Func_object__int__o *)sub_1C2D6DC(System_Func_BattleTreasureDeviceSequenceSelectType__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__78_1,
      v20,
      Method_StageEntity___c__TryGetOverwritePlayerSequenceSelectTypeByGender_b__78_1__,
      0);
    static_fields = StageEntity___c_TypeInfo->static_fields;
    static_fields->__9__78_1 = (struct System_Func_BattleTreasureDeviceSequenceSelectType__int__o *)_9__78_1;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__78_1, (int32_t)_9__78_1, v22, v23);
  }
  v24 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                               v18,
                                                               (System_Func_TSource__TKey__o *)_9__78_1,
                                                               (const MethodInfo_30FE624 *)Method_System_Linq_Enumerable_OrderByDescending_BattleTreasureDeviceSequenceSelectType__int___);
  v25 = System_Linq_Enumerable__ToArray_object_(
          v24,
          (const MethodInfo_310DFEC *)Method_System_Linq_Enumerable_ToArray_BattleTreasureDeviceSequenceSelectType___);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v25, 0) )
    goto LABEL_25;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !v25 )
LABEL_28:
    sub_1C2D6EC(Master_object, monitor_high);
  max_length = v25->max_length;
  if ( max_length < 1 )
  {
LABEL_25:
    LOBYTE(Value_object__object) = 0;
    return (char)Value_object__object;
  }
  v28 = (CommonReleaseMaster_o *)Master_object;
  v29 = 0;
  while ( 1 )
  {
    if ( v29 >= max_length )
      sub_1C2D6F4(Master_object, monitor_high, v26);
    v30 = v25->m_Items[v29];
    if ( !v30 )
      goto LABEL_28;
    monitor_high = HIDWORD(v30[1].monitor);
    if ( (int)monitor_high < 1 )
      break;
    if ( !v28 )
      goto LABEL_28;
    Master_object = (Il2CppObject *)CommonReleaseMaster__IsOpen(v28, monitor_high, 0, 0, 0);
    if ( ((unsigned __int8)Master_object & 1) != 0 )
      break;
    max_length = v25->max_length;
    if ( (int)++v29 >= max_length )
      goto LABEL_25;
  }
  LOBYTE(Value_object__object) = 1;
  *genderSelectType = HIDWORD(v30[1].klass);
  *patternId = (int32_t)v30[1].monitor;
  return (char)Value_object__object;
}


bool StageEntity__checkCustomFOV(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4C27EF6 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_19611/*"fov"*/);
    byte_4C27EF6 = 1;
  }
  return StageEntity__checkScript(this, (System_String_o *)StringLiteral_19611/*"fov"*/, v2);
}


bool StageEntity__checkScript(StageEntity_o *this, System_String_o *key, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_4C27EF1 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    byte_4C27EF1 = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                       (System_Collections_Generic_Dictionary_object__object__o *)script,
                       (Il2CppObject *)key,
                       (const MethodInfo_344A51C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)script;
}


bool StageEntity__disableSystemFadeStartBattle(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C27F00 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_18627/*"disableSystemFadeStartBattle"*/);
    byte_4C27F00 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_18627/*"disableSystemFadeStartBattle"*/, 0, v2) > 0;
}


int32_t StageEntity__getBattleMasterImageId(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C27F12 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_17074/*"battleMasterImageId"*/);
    byte_4C27F12 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_17074/*"battleMasterImageId"*/, 0, v2);
}


int32_t StageEntity__getChangeBgId(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C27EFA & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_17798/*"changeBgId"*/);
    byte_4C27EFA = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_17798/*"changeBgId"*/, 0, v2);
}


int32_t StageEntity__getChangeBgType(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C27EFB & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_17799/*"changeBgType"*/);
    byte_4C27EFB = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_17799/*"changeBgType"*/, 0, v2);
}


float StageEntity__getCustomFOV(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4C27EF5 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_19611/*"fov"*/);
    byte_4C27EF5 = 1;
  }
  return StageEntity__getScriptFloat(this, (System_String_o *)StringLiteral_19611/*"fov"*/, 0.0, v2);
}


int32_t StageEntity__getEnemyActCount(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t result; // w0
  StageEntity_c *v5; // x0

  if ( (byte_4C27EFE & 1) == 0 )
  {
    sub_1C2D490(&StageEntity_TypeInfo);
    sub_1C2D490(&StringLiteral_6034/*"EnemyActCount"*/);
    byte_4C27EFE = 1;
  }
  result = StageEntity__getScript(this, (System_String_o *)StringLiteral_6034/*"EnemyActCount"*/, 0, v2);
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


int32_t StageEntity__getEnemyMasterBattleId(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  System_Int32_array *ScriptIntArrayParam; // x0
  const MethodInfo *v5; // x3
  System_Int32_array *v6; // x20
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v8; // x1
  __int64 v9; // x2

  if ( (byte_4C27EF8 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_19019/*"enemyMasterBattleId"*/);
    sub_1C2D490(&StringLiteral_19020/*"enemyMasterBattleIdByPlayerGender"*/);
    byte_4C27EF8 = 1;
  }
  ScriptIntArrayParam = StageEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_19020/*"enemyMasterBattleIdByPlayerGender"*/, 0, v2);
  if ( !ScriptIntArrayParam )
    return StageEntity__getScript(this, (System_String_o *)StringLiteral_19019/*"enemyMasterBattleId"*/, 0, v5);
  v6 = ScriptIntArrayParam;
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame )
    goto LABEL_13;
  if ( SelfUserGame->fields.genderType == 1 )
  {
    if ( LODWORD(v6->max_length) )
      return v6->m_Items[0];
LABEL_14:
    sub_1C2D6F4(SelfUserGame, v8, v9);
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame )
LABEL_13:
    sub_1C2D6EC(SelfUserGame, v8);
  if ( SelfUserGame->fields.genderType != 2 )
    return StageEntity__getScript(this, (System_String_o *)StringLiteral_19019/*"enemyMasterBattleId"*/, 0, v5);
  if ( LODWORD(v6->max_length) <= 1 )
    goto LABEL_14;
  return v6->m_Items[1];
}


System_Object_array *StageEntity__getFieldAis(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_object__object__o *script; // x0
  __int64 naturalAligment; // x9
  StageEntity_o *v8; // x0
  const MethodInfo *v9; // x1

  if ( (byte_4C27EFC & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C2D490(&Method_System_Collections_Generic_List_object__ToArray__);
    sub_1C2D490(&System_Collections_Generic_List_object__TypeInfo);
    sub_1C2D490(&StringLiteral_16717/*"aiFieldIds"*/);
    byte_4C27EFC = 1;
  }
  if ( !StageEntity__checkScript(this, (System_String_o *)StringLiteral_16717/*"aiFieldIds"*/, v2) )
    return 0;
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script
    || (script = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                              script,
                                                                              (Il2CppObject *)StringLiteral_16717/*"aiFieldIds"*/,
                                                                              (const MethodInfo_344A2A8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0 )
  {
    sub_1C2D6EC(script, v4);
  }
  naturalAligment = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment;
  if ( script->klass->_2.naturalAligment >= (unsigned int)naturalAligment
    && (System_Collections_Generic_List_object__c *)script->klass->_2.typeHierarchy[naturalAligment - 1] == System_Collections_Generic_List_object__TypeInfo )
  {
    return System_Collections_Generic_List_object___ToArray(
             (System_Collections_Generic_List_object__o *)script,
             (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_object__ToArray__);
  }
  sub_1C2D9AC(script);
  return (System_Object_array *)StageEntity__getNoEntryIds(v8, v9);
}


System_Int32_array *StageEntity__getNoEntryIds(StageEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  Il2CppObject *v4; // x20
  System_Collections_Generic_List_object__c *v5; // x1
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  System_Collections_Generic_List_object__o *v7; // x19
  StageEntity___c_c *v8; // x8
  System_Converter_object__int__o *_9__31_0; // x20
  __int64 naturalAligment; // x10
  Il2CppObject *v11; // x21
  struct StageEntity___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  StageEntity_o *v16; // x0
  const MethodInfo *v17; // x1

  if ( (byte_4C27EFD & 1) == 0 )
  {
    sub_1C2D490(&System_Converter_object__int__TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C2D490(&int___TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_object__ConvertAll_int___);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C2D490(&System_Collections_Generic_List_object__TypeInfo);
    sub_1C2D490(&Method_StageEntity___c__getNoEntryIds_b__31_0__);
    sub_1C2D490(&StageEntity___c_TypeInfo);
    sub_1C2D490(&StringLiteral_9502/*"NoEntryIds"*/);
    byte_4C27EFD = 1;
  }
  script = this->fields.script;
  if ( !script )
    return (System_Int32_array *)sub_1C2D538(int___TypeInfo, 0);
  v4 = (Il2CppObject *)StringLiteral_9502/*"NoEntryIds"*/;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)StringLiteral_9502/*"NoEntryIds"*/,
          (const MethodInfo_344A51C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return (System_Int32_array *)sub_1C2D538(int___TypeInfo, 0);
  Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !Item )
    goto LABEL_19;
  Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                      Item,
                                                                      v4,
                                                                      (const MethodInfo_344A2A8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v7 = (System_Collections_Generic_List_object__o *)Item;
  v8 = StageEntity___c_TypeInfo;
  if ( !StageEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(StageEntity___c_TypeInfo);
    v8 = StageEntity___c_TypeInfo;
  }
  _9__31_0 = v8->static_fields->__9__31_0;
  if ( !v7
    || (v5 = System_Collections_Generic_List_object__TypeInfo,
        naturalAligment = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment,
        v7->klass->_2.naturalAligment >= (unsigned int)naturalAligment)
    && (System_Collections_Generic_List_object__c *)v7->klass->_2.typeHierarchy[naturalAligment - 1] == System_Collections_Generic_List_object__TypeInfo )
  {
    if ( !_9__31_0 )
    {
      if ( !v8->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v8);
        v8 = StageEntity___c_TypeInfo;
      }
      v11 = (Il2CppObject *)v8->static_fields->__9;
      _9__31_0 = (System_Converter_object__int__o *)sub_1C2D6DC(System_Converter_object__int__TypeInfo);
      System_Converter_object__int____ctor(_9__31_0, v11, Method_StageEntity___c__getNoEntryIds_b__31_0__, 0);
      static_fields = StageEntity___c_TypeInfo->static_fields;
      static_fields->__9__31_0 = _9__31_0;
      sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__31_0, (int32_t)_9__31_0, v13, v14);
    }
    if ( v7 )
    {
      Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_List_object___ConvertAll_int_(
                                                                          v7,
                                                                          (System_Converter_T__TOutput__o *)_9__31_0,
                                                                          (const MethodInfo_2FF5E6C *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
      if ( Item )
        return System_Collections_Generic_List_int___ToArray(
                 (System_Collections_Generic_List_int__o *)Item,
                 (const MethodInfo_376E618 *)Method_System_Collections_Generic_List_int__ToArray__);
    }
LABEL_19:
    sub_1C2D6EC(Item, v5);
  }
  sub_1C2D9AC(v7);
  return (System_Int32_array *)StageEntity__getEnemyActCount(v16, v17);
}


int32_t StageEntity__getPhase(StageEntity_o *this, const MethodInfo *method)
{
  return this->fields.questPhase;
}


int32_t StageEntity__getQuestId(StageEntity_o *this, const MethodInfo *method)
{
  return this->fields.questId;
}


// local variable allocation has failed, the output may be wrong!
int32_t StageEntity__getScript(StageEntity_o *this, System_String_o *key, int32_t defVal, const MethodInfo *method)
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
  if ( (byte_4C27EF2 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C2D490(&long_TypeInfo);
    byte_4C27EF2 = 1;
  }
  if ( !StageEntity__checkScript(this, key, *(const MethodInfo **)&defVal) )
    return v4;
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script
    || (script = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                              script,
                                                                              (Il2CppObject *)key,
                                                                              (const MethodInfo_344A2A8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0 )
  {
    sub_1C2D6EC(script, v7);
  }
  if ( script->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(script, long_TypeInfo, v9, v10);
  v15 = sub_1C2D9AC(script);
  StageEntity__getScriptFloat(v12, v13, *(float *)&v15, v14);
  return result;
}


float StageEntity__getScriptFloat(StageEntity_o *this, System_String_o *key, float defVal, const MethodInfo *method)
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

  if ( (byte_4C27EF3 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C2D490(&double_TypeInfo);
    byte_4C27EF3 = 1;
  }
  if ( !StageEntity__checkScript(this, key, method) )
    return defVal;
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script
    || (script = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                              script,
                                                                              (Il2CppObject *)key,
                                                                              (const MethodInfo_344A2A8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0 )
  {
    sub_1C2D6EC(script, v7);
  }
  if ( script->klass->_1.element_class == double_TypeInfo->_1.element_class )
    return *(double *)j_il2cpp_object_unbox_0(script, double_TypeInfo, v9, v10);
  sub_1C2D9AC(script);
  StageEntity__getScriptIntArrayParam(v12, v13, v14, v15);
  return result;
}


System_Int32_array *StageEntity__getScriptIntArrayParam(
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
  __int64 naturalAligment; // x10
  Il2CppObject *v13; // x21
  struct StageEntity___c_StaticFields *static_fields; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  System_Int32_array *result; // x0
  StageEntity_o *v18; // x0
  const MethodInfo *v19; // x1

  if ( (byte_4C27EF4 & 1) == 0 )
  {
    sub_1C2D490(&System_Converter_object__int__TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C2D490(&Method_System_Collections_Generic_List_object__ConvertAll_int___);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C2D490(&System_Collections_Generic_List_object__TypeInfo);
    sub_1C2D490(&Method_StageEntity___c__getScriptIntArrayParam_b__22_0__);
    sub_1C2D490(&StageEntity___c_TypeInfo);
    byte_4C27EF4 = 1;
  }
  if ( !StageEntity__checkScript(this, key, (const MethodInfo *)defVal) )
    return defVal;
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script )
    goto LABEL_18;
  script = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                        script,
                                                                        (Il2CppObject *)key,
                                                                        (const MethodInfo_344A2A8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
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
        naturalAligment = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment,
        v9->klass->_2.naturalAligment >= (unsigned int)naturalAligment)
    && (System_Collections_Generic_List_object__c *)v9->klass->_2.typeHierarchy[naturalAligment - 1] == System_Collections_Generic_List_object__TypeInfo )
  {
    if ( !_9__22_0 )
    {
      if ( !v10->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v10);
        v10 = StageEntity___c_TypeInfo;
      }
      v13 = (Il2CppObject *)v10->static_fields->__9;
      _9__22_0 = (System_Converter_object__int__o *)sub_1C2D6DC(System_Converter_object__int__TypeInfo);
      System_Converter_object__int____ctor(_9__22_0, v13, Method_StageEntity___c__getScriptIntArrayParam_b__22_0__, 0);
      static_fields = StageEntity___c_TypeInfo->static_fields;
      static_fields->__9__22_0 = _9__22_0;
      sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__22_0, (int32_t)_9__22_0, v15, v16);
    }
    if ( v9 )
    {
      script = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_List_object___ConvertAll_int_(
                                                                            v9,
                                                                            (System_Converter_T__TOutput__o *)_9__22_0,
                                                                            (const MethodInfo_2FF5E6C *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
      if ( script )
        return System_Collections_Generic_List_int___ToArray(
                 (System_Collections_Generic_List_int__o *)script,
                 (const MethodInfo_376E618 *)Method_System_Collections_Generic_List_int__ToArray__);
    }
LABEL_18:
    sub_1C2D6EC(script, v7);
  }
  sub_1C2D9AC(v9);
  StageEntity__getCustomFOV(v18, v19);
  return result;
}


int32_t StageEntity__getShowTurnState(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C27EF7 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_23467/*"showTurn"*/);
    byte_4C27EF7 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_23467/*"showTurn"*/, 2, v2);
}


int32_t StageEntity__getStartBattleAssetId(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C27EFF & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_23634/*"startBattleAssetId"*/);
    byte_4C27EFF = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_23634/*"startBattleAssetId"*/, 0, v2);
}


int32_t StageEntity__getWave(StageEntity_o *this, const MethodInfo *method)
{
  return this->fields.wave;
}


bool StageEntity__isNotDisplayRemain(StageEntity_o *this, const MethodInfo *method)
{
  return this->fields.enemyInfo == 2;
}


void StageEntity___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C27F33 & 1) == 0 )
  {
    sub_1C2D490(&StageEntity___c_TypeInfo);
    byte_4C27F33 = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(StageEntity___c_TypeInfo);
  System_Object___ctor(v1, 0);
  StageEntity___c_TypeInfo->static_fields->__9 = (struct StageEntity___c_o *)v1;
  sub_1C2D434((CGThumbnailListItem_o *)StageEntity___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void StageEntity___c___ctor(StageEntity___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


AiAllocationInfo_o *StageEntity___c___GetAiAllocationInfoList_b__64_0(
        StageEntity___c_o *this,
        Il2CppObject *obj,
        const MethodInfo *method)
{
  AiAllocationInfo_o *v4; // x20

  if ( (byte_4C27F36 & 1) == 0 )
  {
    sub_1C2D490(&AiAllocationInfo_TypeInfo);
    byte_4C27F36 = 1;
  }
  v4 = (AiAllocationInfo_o *)sub_1C2D6DC(AiAllocationInfo_TypeInfo);
  AiAllocationInfo___ctor(v4, obj, 0);
  return v4;
}


System_String_o *StageEntity___c___GetBattleStartVoiceIdArray_b__49_0(
        StageEntity___c_o *this,
        Il2CppObject *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C2D6EC(this, 0);
  return (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))x->klass->vtable[3].methodPtr)(
                              x,
                              x->klass->vtable[3].method);
}


SubBgmPlayArgs_array *StageEntity___c___GetSubBgmPlayArgsArray_b__56_0(
        StageEntity___c_o *this,
        System_Collections_Generic_List_object__o *f,
        const MethodInfo *method)
{
  return SubBgmPlayArgs__ConvertFromEntityScript(f, 0);
}


int32_t StageEntity___c___TryGetOverwritePlayerSequenceSelectTypeByGender_b__78_1(
        StageEntity___c_o *this,
        BattleTreasureDeviceSequenceSelectType_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C2D6EC(this, 0);
  return x->fields.priority;
}


int32_t StageEntity___c___getNoEntryIds_b__31_0(StageEntity___c_o *this, Il2CppObject *x, const MethodInfo *method)
{
  System_String_o *v4; // x0

  if ( (byte_4C27F35 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C27F35 = 1;
  }
  if ( x )
    v4 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *, const MethodInfo *))x->klass->vtable[3].methodPtr)(
                              x,
                              x->klass->vtable[3].method,
                              method);
  else
    v4 = 0;
  if ( !v4 )
    v4 = (System_String_o *)StringLiteral_1/*""*/;
  return System_Int32__Parse(v4, 0);
}


int32_t StageEntity___c___getScriptIntArrayParam_b__22_0(
        StageEntity___c_o *this,
        Il2CppObject *x,
        const MethodInfo *method)
{
  System_String_o *v4; // x0

  if ( (byte_4C27F34 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C27F34 = 1;
  }
  if ( x )
    v4 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *, const MethodInfo *))x->klass->vtable[3].methodPtr)(
                              x,
                              x->klass->vtable[3].method,
                              method);
  else
    v4 = 0;
  if ( !v4 )
    v4 = (System_String_o *)StringLiteral_1/*""*/;
  return System_Int32__Parse(v4, 0);
}


void StageEntity___c__DisplayClass78_0___ctor(StageEntity___c__DisplayClass78_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool StageEntity___c__DisplayClass78_0___TryGetOverwritePlayerSequenceSelectTypeByGender_b__0(
        StageEntity___c__DisplayClass78_0_o *this,
        BattleTreasureDeviceSequenceSelectType_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C2D6EC(this, 0);
  return x->fields.svtId == this->fields.servantId;
}