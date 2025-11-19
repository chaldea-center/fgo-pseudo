void StageEntity___cctor(const MethodInfo *method)
{
  if ( (byte_4CB6F53 & 1) == 0 )
  {
    sub_1C6BA08(&StageEntity_TypeInfo);
    byte_4CB6F53 = 1;
  }
  StageEntity_TypeInfo->static_fields->DEFAULT_ENEMY_ACTION_COUNT = 3;
}


void StageEntity___ctor(StageEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CB6F0F & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataEntityBase_string___ctor__);
    byte_4CB6F0F = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_33F6C70 *)Method_DataEntityBase_string___ctor__);
}


void StageEntity___ctor_43175796(StageEntity_o *this, StageEntity_o *cSrc, const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct System_String_o *name; // x1
  struct System_String_o **p_name; // x20

  if ( (byte_4CB6F10 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataEntityBase_string___ctor__);
    byte_4CB6F10 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_33F6C70 *)Method_DataEntityBase_string___ctor__);
  if ( !cSrc )
    sub_1C6BC60(v5, v6);
  *(_QWORD *)&this->fields.questId = *(_QWORD *)&cSrc->fields.questId;
  name = cSrc->fields.name;
  this->fields.name = name;
  p_name = &this->fields.name;
  sub_1C6B9AC((CGThumbnailListItem_o *)p_name, (int32_t)name, v7, v8);
  *((_DWORD *)p_name + 2) = cSrc->fields.wave;
  p_name[2] = (struct System_String_o *)cSrc->fields.npcDeckId;
}


System_String_o *StageEntity__CreatePK(int32_t questId, int32_t questPhase, int32_t wave, const MethodInfo *method)
{
  if ( (byte_4CB6F0E & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_4CB6F0E = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           questId,
           questPhase,
           wave,
           (const MethodInfo_3139980 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *StageEntity__CreatePrimaryKey(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t questPhase; // w20
  int32_t questId; // w21
  int32_t wave; // w19

  if ( (byte_4CB6F0D & 1) == 0 )
  {
    sub_1C6BA08(&StageEntity_TypeInfo);
    byte_4CB6F0D = 1;
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

  if ( (byte_4CB6F51 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_19078/*"enemyExBattleUiPositionY"*/);
    byte_4CB6F51 = 1;
  }
  return (float)StageEntity__getScript(this, (System_String_o *)StringLiteral_19078/*"enemyExBattleUiPositionY"*/, 0, v2);
}


System_Int32_array *StageEntity__GetAddUniqueCameraIds(
        StageEntity_o *this,
        System_Int32_array *defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4CB6F44 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_16689/*"addUniqueCameraIds"*/);
    byte_4CB6F44 = 1;
  }
  return StageEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_16689/*"addUniqueCameraIds"*/, defVal, v3);
}


System_Object_array *StageEntity__GetAiActTypeAttackCommandCard(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_object__object__o *script; // x0
  __int64 naturalAligment; // x10

  if ( (byte_4CB6F28 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_object__ToArray__);
    sub_1C6BA08(&System_Collections_Generic_List_object__TypeInfo);
    sub_1C6BA08(&StringLiteral_16731/*"aiActTypeAttackCommandCard"*/);
    byte_4CB6F28 = 1;
  }
  if ( !StageEntity__checkScript(this, (System_String_o *)StringLiteral_16731/*"aiActTypeAttackCommandCard"*/, v2) )
    return 0;
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script
    || (script = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                              script,
                                                                              (Il2CppObject *)StringLiteral_16731/*"aiActTypeAttackCommandCard"*/,
                                                                              (const MethodInfo_34BB8BC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0
    || (naturalAligment = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment,
        script->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (System_Collections_Generic_List_object__c *)script->klass->_2.typeHierarchy[naturalAligment - 1] != System_Collections_Generic_List_object__TypeInfo )
  {
    sub_1C6BC60(script, v4);
  }
  return System_Collections_Generic_List_object___ToArray(
           (System_Collections_Generic_List_object__o *)script,
           (const MethodInfo_38024CC *)Method_System_Collections_Generic_List_object__ToArray__);
}


int32_t StageEntity__GetAiActTypeAttackCommandCardType(
        StageEntity_o *this,
        BattleServantData_o *enemyServantData,
        const MethodInfo *method)
{
  System_Object_array *AiActTypeAttackCommandCard; // x0
  il2cpp_array_size_t max_length; // x8
  System_Object_array *v7; // x20
  unsigned __int64 v8; // x23
  Il2CppObject **m_Items; // x24
  System_Collections_Generic_Dictionary_object__object__o *v10; // x21
  __int64 naturalAligment; // x10
  __int64 v12; // x1
  struct BattleDeckServantData_o *deckSvt; // x8
  int dropInfos; // w29
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x2
  __int64 v18; // x3
  StageEntity_o *v19; // x0
  const MethodInfo *v20; // x1

  if ( (byte_4CB6F29 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C6BA08(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1C6BA08(&long_TypeInfo);
    sub_1C6BA08(&StringLiteral_22411/*"npcServantId"*/);
    sub_1C6BA08(&StringLiteral_17777/*"cardType"*/);
    byte_4CB6F29 = 1;
  }
  AiActTypeAttackCommandCard = StageEntity__GetAiActTypeAttackCommandCard(this, (const MethodInfo *)enemyServantData);
  if ( AiActTypeAttackCommandCard )
  {
    max_length = AiActTypeAttackCommandCard->max_length;
    v7 = AiActTypeAttackCommandCard;
    if ( (int)max_length < 1 )
    {
LABEL_18:
      LODWORD(AiActTypeAttackCommandCard) = 0;
    }
    else
    {
      v8 = 0;
      m_Items = AiActTypeAttackCommandCard->m_Items;
      while ( 1 )
      {
        if ( v8 >= (unsigned int)max_length )
          sub_1C6BC68(AiActTypeAttackCommandCard);
        v10 = (System_Collections_Generic_Dictionary_object__object__o *)m_Items[v8];
        if ( v10 )
        {
          naturalAligment = System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.naturalAligment;
          if ( v10->klass->_2.naturalAligment >= (unsigned int)naturalAligment
            && (System_Collections_Generic_Dictionary_string__object__c *)v10->klass->_2.typeHierarchy[naturalAligment - 1] == System_Collections_Generic_Dictionary_string__object__TypeInfo )
          {
            AiActTypeAttackCommandCard = (System_Object_array *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                                                  (System_Collections_Generic_Dictionary_object__object__o *)m_Items[v8],
                                                                  (Il2CppObject *)StringLiteral_22411/*"npcServantId"*/,
                                                                  (const MethodInfo_34BBB30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
            if ( ((unsigned __int8)AiActTypeAttackCommandCard & 1) != 0 )
            {
              if ( !enemyServantData )
                goto LABEL_24;
              deckSvt = enemyServantData->fields.deckSvt;
              if ( !deckSvt )
                goto LABEL_24;
              dropInfos = (int)deckSvt->fields.dropInfos;
              AiActTypeAttackCommandCard = (System_Object_array *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                    v10,
                                                                    (Il2CppObject *)StringLiteral_22411/*"npcServantId"*/,
                                                                    (const MethodInfo_34BB8BC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
              if ( !AiActTypeAttackCommandCard )
                goto LABEL_24;
              if ( AiActTypeAttackCommandCard->obj.klass->_1.element_class != long_TypeInfo->_1.element_class )
                goto LABEL_25;
              AiActTypeAttackCommandCard = (System_Object_array *)j_il2cpp_object_unbox_0(
                                                                    AiActTypeAttackCommandCard,
                                                                    long_TypeInfo,
                                                                    v15,
                                                                    v16);
              if ( dropInfos == LODWORD(AiActTypeAttackCommandCard->obj.klass) )
              {
                AiActTypeAttackCommandCard = (System_Object_array *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                                                      v10,
                                                                      (Il2CppObject *)StringLiteral_17777/*"cardType"*/,
                                                                      (const MethodInfo_34BBB30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
                if ( ((unsigned __int8)AiActTypeAttackCommandCard & 1) != 0 )
                  break;
              }
            }
          }
        }
        LODWORD(max_length) = v7->max_length;
        if ( (__int64)++v8 >= (int)max_length )
          goto LABEL_18;
      }
      AiActTypeAttackCommandCard = (System_Object_array *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                            v10,
                                                            (Il2CppObject *)StringLiteral_17777/*"cardType"*/,
                                                            (const MethodInfo_34BB8BC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !AiActTypeAttackCommandCard )
LABEL_24:
        sub_1C6BC60(AiActTypeAttackCommandCard, v12);
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
        sub_1C6BFFC(AiActTypeAttackCommandCard);
        LODWORD(AiActTypeAttackCommandCard) = StageEntity__IsDisableFieldMotion(v19, v20);
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

  if ( (byte_4CB6F3C & 1) == 0 )
  {
    sub_1C6BA08(&Method_BasicHelper_GetValue_List_object____);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Select_object__AiAllocationInfo___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_ToList_AiAllocationInfo___);
    sub_1C6BA08(&System_Func_object__AiAllocationInfo__TypeInfo);
    sub_1C6BA08(&Method_StageEntity___c__GetAiAllocationInfoList_b__64_0__);
    sub_1C6BA08(&StageEntity___c_TypeInfo);
    sub_1C6BA08(&StringLiteral_16732/*"aiAllocations"*/);
    byte_4CB6F3C = 1;
  }
  Value_object = BasicHelper__GetValue_object_(
                   this->fields.script,
                   (System_String_o *)StringLiteral_16732/*"aiAllocations"*/,
                   0,
                   (const MethodInfo_3128A04 *)Method_BasicHelper_GetValue_List_object____);
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
    _9__64_0 = (System_Func_object__object__o *)sub_1C6BC54(System_Func_object__AiAllocationInfo__TypeInfo);
    System_Func_object__object____ctor(_9__64_0, v7, Method_StageEntity___c__GetAiAllocationInfoList_b__64_0__, 0);
    static_fields = StageEntity___c_TypeInfo->static_fields;
    static_fields->__9__64_0 = (struct System_Func_object__AiAllocationInfo__o *)_9__64_0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__64_0, (int32_t)_9__64_0, v9, v10);
  }
  v11 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)Value_object,
                                                               (System_Func_TSource__TResult__o *)_9__64_0,
                                                               (const MethodInfo_3171B10 *)Method_System_Linq_Enumerable_Select_object__AiAllocationInfo___);
  return (System_Collections_Generic_List_AiAllocationInfo__o *)System_Linq_Enumerable__ToList_object_(
                                                                  v11,
                                                                  (const MethodInfo_317FEE4 *)Method_System_Linq_Enumerable_ToList_AiAllocationInfo___);
}


System_Int32_array *StageEntity__GetAssumedBattleScriptIds(StageEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CB6F52 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_16934/*"assumedBattleScriptIds"*/);
    byte_4CB6F52 = 1;
  }
  return EntityScriptUtil__GetIntArray(this->fields.script, (System_String_o *)StringLiteral_16934/*"assumedBattleScriptIds"*/, 0, 0);
}


System_Int32_array *StageEntity__GetAssumedEffectId(StageEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CB6F40 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_16935/*"assumedEffectId"*/);
    byte_4CB6F40 = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_16935/*"assumedEffectId"*/, 0);
}


System_String_array *StageEntity__GetAssumedVoiceAssetNames(StageEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CB6F45 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_16936/*"assumedVoiceAssetNames"*/);
    byte_4CB6F45 = 1;
  }
  return EntityScriptUtil__GetStringArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_16936/*"assumedVoiceAssetNames"*/, 0);
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

  if ( (byte_4CB6F2F & 1) == 0 )
  {
    sub_1C6BA08(&System_Converter_object__string__TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_object__ConvertAll_string___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1C6BA08(&System_Collections_Generic_List_object__TypeInfo);
    sub_1C6BA08(&string___TypeInfo);
    sub_1C6BA08(&Method_StageEntity___c__GetBattleStartVoiceIdArray_b__49_0__);
    sub_1C6BA08(&StageEntity___c_TypeInfo);
    sub_1C6BA08(&StringLiteral_17101/*"battleStartVoiceIds"*/);
    byte_4CB6F2F = 1;
  }
  ScriptObject = StageEntity__GetScriptObject(this, (System_String_o *)StringLiteral_17101/*"battleStartVoiceIds"*/, v2);
  if ( !ScriptObject )
    return (System_String_array *)sub_1C6BAB0(string___TypeInfo, 0);
  v5 = (System_Collections_Generic_List_object__o *)ScriptObject;
  naturalAligment = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment;
  if ( ScriptObject->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (System_Collections_Generic_List_object__c *)ScriptObject->klass->_2.typeHierarchy[naturalAligment - 1] != System_Collections_Generic_List_object__TypeInfo )
  {
    return (System_String_array *)sub_1C6BAB0(string___TypeInfo, 0);
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
    _9__49_0 = (System_Converter_TInput__TOutput__o *)sub_1C6BC54(System_Converter_object__string__TypeInfo);
    System_Converter_object__object____ctor(
      _9__49_0,
      v10,
      Method_StageEntity___c__GetBattleStartVoiceIdArray_b__49_0__,
      0);
    static_fields = StageEntity___c_TypeInfo->static_fields;
    static_fields->__9__49_0 = (struct System_Converter_object__string__o *)_9__49_0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__49_0, (int32_t)_9__49_0, v12, v13);
  }
  v14 = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___ConvertAll_object_(
                                                       v5,
                                                       (System_Converter_T__TOutput__o *)_9__49_0,
                                                       (const MethodInfo_3060C94 *)Method_System_Collections_Generic_List_object__ConvertAll_string___);
  if ( !v14 )
    sub_1C6BC60(0, v15);
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  v14,
                                  (const MethodInfo_38024CC *)Method_System_Collections_Generic_List_string__ToArray__);
}


int32_t StageEntity__GetBattleStartVoiceServantId(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CB6F2D & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_17102/*"battleStartVoiceSvtId"*/);
    byte_4CB6F2D = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_17102/*"battleStartVoiceSvtId"*/, 0, v2);
}


int32_t StageEntity__GetBattleStartVoiceServantLimit(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CB6F2E & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_17103/*"battleStartVoiceSvtLimit"*/);
    byte_4CB6F2E = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_17103/*"battleStartVoiceSvtLimit"*/, -1, v2);
}


System_Int32_array *StageEntity__GetBossIdAndChangeBgmId(StageEntity_o *this, const MethodInfo *method)
{
  System_Int32_array *v3; // x2
  const MethodInfo *v4; // x3

  if ( (byte_4CB6F27 & 1) == 0 )
  {
    sub_1C6BA08(&int___TypeInfo);
    sub_1C6BA08(&StringLiteral_17367/*"bossIdAndChangeBgmId"*/);
    byte_4CB6F27 = 1;
  }
  v3 = (System_Int32_array *)sub_1C6BAB0(int___TypeInfo, 0);
  return StageEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_17367/*"bossIdAndChangeBgmId"*/, v3, v4);
}


System_Int32_array *StageEntity__GetCutInSvtIds(StageEntity_o *this, bool isEnemy, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  System_String_o **v6; // x8

  if ( (byte_4CB6F24 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_19074/*"enemyCutInSvtIds"*/);
    sub_1C6BA08(&StringLiteral_22810/*"playerCutInSvtIds"*/);
    byte_4CB6F24 = 1;
  }
  if ( isEnemy )
    v6 = (System_String_o **)&StringLiteral_19074/*"enemyCutInSvtIds"*/;
  else
    v6 = (System_String_o **)&StringLiteral_22810/*"playerCutInSvtIds"*/;
  return StageEntity__getScriptIntArrayParam(this, *v6, 0, v3);
}


int32_t StageEntity__GetEffectBgmId(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CB6F25 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_18951/*"effectBgmId"*/);
    byte_4CB6F25 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_18951/*"effectBgmId"*/, -1, v2);
}


int32_t StageEntity__GetEffectSvtId(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CB6F23 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_18964/*"effectSvtId"*/);
    byte_4CB6F23 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_18964/*"effectSvtId"*/, 0, v2);
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
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 i; // x22
  struct System_Int32_array *items; // x9
  _QWORD *v14; // x10
  __int64 size; // x11
  System_Collections_Generic_IEnumerable_int__o *v17; // x0

  if ( (byte_4CB6F38 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C6BA08(&StringLiteral_19076/*"enemyEntryOrder"*/);
    byte_4CB6F38 = 1;
  }
  ScriptIntArrayParam = StageEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_19076/*"enemyEntryOrder"*/, 0, v3);
  if ( ScriptIntArrayParam )
  {
    v7 = ScriptIntArrayParam;
    v8 = (System_Collections_Generic_List_int__o *)sub_1C6BC54(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v8,
      (const MethodInfo_37E30FC *)Method_System_Collections_Generic_List_int___ctor__);
    max_length = v7->max_length;
    if ( (int)max_length >= 1 )
    {
      for ( i = 0; (__int64)i < (int)max_length; ++i )
      {
        if ( i >= (unsigned int)max_length )
          sub_1C6BC68(v9);
        v10 = (unsigned int)(v7->m_Items[i] - 1);
        if ( (int)v10 < enemyFieldPosCount )
        {
          if ( !v8 )
            goto LABEL_18;
          items = v8->fields._items;
          v14 = Method_System_Collections_Generic_List_int__Add__;
          ++v8->fields._version;
          if ( !items )
            goto LABEL_18;
          size = v8->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v8,
              v10,
              *(const MethodInfo_37E3950 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
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
      sub_1C6BC60(v9, v10);
    return System_Collections_Generic_List_int___ToArray(
             v8,
             (const MethodInfo_37E5408 *)Method_System_Collections_Generic_List_int__ToArray__);
  }
  else
  {
    v17 = System_Linq_Enumerable__Range(0, enemyFieldPosCount, 0);
    return System_Linq_Enumerable__ToArray_int_(
             (System_Collections_Generic_IEnumerable_TSource__o *)v17,
             (const MethodInfo_317B0B0 *)Method_System_Linq_Enumerable_ToArray_int___);
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
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 i; // x22
  struct System_Int32_array *items; // x9
  _QWORD *v14; // x10
  __int64 size; // x11

  if ( (byte_4CB6F37 & 1) == 0 )
  {
    sub_1C6BA08(&int___TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C6BA08(&StringLiteral_19071/*"enemyAutoTargetOrder"*/);
    byte_4CB6F37 = 1;
  }
  ScriptIntArrayParam = StageEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_19071/*"enemyAutoTargetOrder"*/, 0, v3);
  if ( !ScriptIntArrayParam )
    return (System_Int32_array *)sub_1C6BAB0(int___TypeInfo, 0);
  v7 = ScriptIntArrayParam;
  v8 = (System_Collections_Generic_List_int__o *)sub_1C6BC54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v8,
    (const MethodInfo_37E30FC *)Method_System_Collections_Generic_List_int___ctor__);
  max_length = v7->max_length;
  if ( (int)max_length >= 1 )
  {
    for ( i = 0; (__int64)i < (int)max_length; ++i )
    {
      if ( i >= (unsigned int)max_length )
        sub_1C6BC68(v9);
      v10 = (unsigned int)(v7->m_Items[i] - 1);
      if ( (int)v10 < enemyFieldPosCount )
      {
        if ( !v8 )
          goto LABEL_18;
        items = v8->fields._items;
        v14 = Method_System_Collections_Generic_List_int__Add__;
        ++v8->fields._version;
        if ( !items )
          goto LABEL_18;
        size = v8->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v8,
            v10,
            *(const MethodInfo_37E3950 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
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
    sub_1C6BC60(v9, v10);
  return System_Collections_Generic_List_int___ToArray(
           v8,
           (const MethodInfo_37E5408 *)Method_System_Collections_Generic_List_int__ToArray__);
}


int32_t StageEntity__GetEnemyCountStartValue(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CB6F3D & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_19073/*"enemyCountStartValue"*/);
    byte_4CB6F3D = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_19073/*"enemyCountStartValue"*/, 0, v2);
}


int32_t StageEntity__GetEnemyEntryMaxCountEachTurn(StageEntity_o *this, int32_t defaultValue, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4CB6F39 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_19075/*"enemyEntryMaxCountEachTurn"*/);
    byte_4CB6F39 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_19075/*"enemyEntryMaxCountEachTurn"*/, defaultValue, v3);
}


int32_t StageEntity__GetEnemyFieldPosCount(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CB6F30 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_19079/*"enemyFieldPosCount"*/);
    byte_4CB6F30 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_19079/*"enemyFieldPosCount"*/, 3, v2);
}


System_Single_array *StageEntity__GetEnemyMasterCommandSpellIconPosition(StageEntity_o *this, const MethodInfo *method)
{
  long double inited; // q0
  _QWORD *v4; // x20
  System_Collections_Generic_Dictionary_string__object__o *script; // x19
  __int64 v6; // x8
  __int64 v7; // x0
  __int64 v8; // x0

  if ( (byte_4CB6F49 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Array_Empty_float___);
    sub_1C6BA08(&StringLiteral_19082/*"enemyMasterCommandSpellIconPosition"*/);
    byte_4CB6F49 = 1;
  }
  v4 = Method_System_Array_Empty_float___;
  script = this->fields.script;
  v6 = *((_QWORD *)Method_System_Array_Empty_float___ + 7);
  if ( !v6 )
  {
    sub_1C41AF8(Method_System_Array_Empty_float___);
    v6 = v4[7];
  }
  v7 = *(_QWORD *)(v6 + 16);
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1C41A9C(inited);
  if ( !*(_DWORD *)(v7 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v7);
  v8 = *(_QWORD *)(v4[7] + 16LL);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1C41A9C(inited);
  return EntityScriptUtil__GetFloatArray(
           script,
           (System_String_o *)StringLiteral_19082/*"enemyMasterCommandSpellIconPosition"*/,
           **(System_Single_array ***)(v8 + 184),
           0);
}


System_Int32_array *StageEntity__GetEnemyMasterCommandSpellIconSize(StageEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CB6F48 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_19083/*"enemyMasterCommandSpellIconSize"*/);
    byte_4CB6F48 = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_19083/*"enemyMasterCommandSpellIconSize"*/, 0);
}


int32_t StageEntity__GetEnemyUiId(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CB6F4F & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_6039/*"EnemyUiId"*/);
    byte_4CB6F4F = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_6039/*"EnemyUiId"*/, -1, v2);
}


int32_t StageEntity__GetFadeType(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CB6F22 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_17099/*"battleStartFadeType"*/);
    byte_4CB6F22 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_17099/*"battleStartFadeType"*/, 0, v2);
}


System_Int32_array *StageEntity__GetFieldCallServantId(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  System_Int32_array *result; // x0

  if ( (byte_4CB6F2B & 1) == 0 )
  {
    sub_1C6BA08(&int___TypeInfo);
    sub_1C6BA08(&StringLiteral_17710/*"call"*/);
    byte_4CB6F2B = 1;
  }
  result = StageEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_17710/*"call"*/, 0, v2);
  if ( !result )
    return (System_Int32_array *)sub_1C6BAB0(int___TypeInfo, 0);
  return result;
}


System_Int32_array *StageEntity__GetFieldPosSkillId(StageEntity_o *this, const MethodInfo *method)
{
  System_Int32_array *v3; // x2
  const MethodInfo *v4; // x3

  if ( (byte_4CB6F3A & 1) == 0 )
  {
    sub_1C6BA08(&int___TypeInfo);
    sub_1C6BA08(&StringLiteral_19489/*"fieldPosSkillId"*/);
    byte_4CB6F3A = 1;
  }
  v3 = (System_Int32_array *)sub_1C6BAB0(int___TypeInfo, 0);
  return StageEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_19489/*"fieldPosSkillId"*/, v3, v4);
}


System_Int32_array *StageEntity__GetFieldPosSkillLv(StageEntity_o *this, const MethodInfo *method)
{
  System_Int32_array *v3; // x2
  const MethodInfo *v4; // x3

  if ( (byte_4CB6F3B & 1) == 0 )
  {
    sub_1C6BA08(&int___TypeInfo);
    sub_1C6BA08(&StringLiteral_19490/*"fieldPosSkillLv"*/);
    byte_4CB6F3B = 1;
  }
  v3 = (System_Int32_array *)sub_1C6BAB0(int___TypeInfo, 0);
  return StageEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_19490/*"fieldPosSkillLv"*/, v3, v4);
}


System_Int32_array *StageEntity__GetMultiEffectIds(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CB6F21 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_22225/*"multiEffectIds"*/);
    byte_4CB6F21 = 1;
  }
  return StageEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_22225/*"multiEffectIds"*/, 0, v2);
}


int32_t StageEntity__GetPriorityBG(StageEntity_o *this, int32_t def, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4CB6F3E & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_22867/*"priorityBG"*/);
    byte_4CB6F3E = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_22867/*"priorityBG"*/, def, v3);
}


int32_t StageEntity__GetPriorityBgm(StageEntity_o *this, int32_t def, const MethodInfo *method)
{
  const MethodInfo *v5; // x3
  Il2CppObject *Master_object; // x0
  __int64 v8; // x1

  if ( (byte_4CB6F3F & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMaster_BgmMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_22868/*"priorityBgm"*/);
    byte_4CB6F3F = 1;
  }
  if ( StageEntity__checkScript(this, (System_String_o *)StringLiteral_22868/*"priorityBgm"*/, method) )
    return StageEntity__getScript(this, (System_String_o *)StringLiteral_22868/*"priorityBgm"*/, def, v5);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_BgmMaster___);
  if ( !Master_object )
    sub_1C6BC60(0, v8);
  return BgmMaster__GetBgmPriority((BgmMaster_o *)Master_object, this->fields.bgmId, def, 0);
}


int32_t StageEntity__GetProhibitBgmChangeInTreasureDeviceAnim(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CB6F46 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_22889/*"prohibitBgmChangeInTreasureDeviceAnim"*/);
    byte_4CB6F46 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_22889/*"prohibitBgmChangeInTreasureDeviceAnim"*/, 0, v2);
}


Il2CppObject *StageEntity__GetScriptObject(StageEntity_o *this, System_String_o *key, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4CB6F2C & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    byte_4CB6F2C = 1;
  }
  value = 0;
  script = this->fields.script;
  if ( !script )
    sub_1C6BC60(0, key);
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)script,
         (Il2CppObject *)key,
         &value,
         (const MethodInfo_34BD148 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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

  if ( (byte_4CB6F4C & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_10681/*"PlayerShadowImageId"*/);
    sub_1C6BA08(&StringLiteral_6037/*"EnemyShadowImageId"*/);
    byte_4CB6F4C = 1;
  }
  if ( isEnemy )
    v5 = (System_String_o **)&StringLiteral_6037/*"EnemyShadowImageId"*/;
  else
    v5 = (System_String_o **)&StringLiteral_10681/*"PlayerShadowImageId"*/;
  return EntityScriptUtil__GetIntValue(this->fields.script, *v5, 0, 0);
}


int32_t StageEntity__GetSpecialShadowEffectId(StageEntity_o *this, bool isEnemy, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_string__object__o *script; // x19
  __int64 *v6; // x8
  System_String_o *v7; // x20
  int32_t IntValue; // w2

  if ( (byte_4CB6F4B & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_12970/*"SpecialShadowEffectId"*/);
    sub_1C6BA08(&StringLiteral_10682/*"PlayerSpecialShadowEffectId"*/);
    sub_1C6BA08(&StringLiteral_6038/*"EnemySpecialShadowEffectId"*/);
    byte_4CB6F4B = 1;
  }
  script = this->fields.script;
  if ( isEnemy )
    v6 = &StringLiteral_6038/*"EnemySpecialShadowEffectId"*/;
  else
    v6 = &StringLiteral_10682/*"PlayerSpecialShadowEffectId"*/;
  v7 = (System_String_o *)*v6;
  IntValue = EntityScriptUtil__GetIntValue(script, (System_String_o *)StringLiteral_12970/*"SpecialShadowEffectId"*/, 0, 0);
  return EntityScriptUtil__GetIntValue(script, v7, IntValue, 0);
}


int32_t StageEntity__GetStartBgmOffFlag(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CB6F26 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_23752/*"startBgmOff"*/);
    byte_4CB6F26 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_23752/*"startBgmOff"*/, 0, v2);
}


SubBgmPlayArgs_array *StageEntity__GetSubBgmPlayArgsArray(StageEntity_o *this, const MethodInfo *method)
{
  StageEntity___c_c *v3; // x0
  System_Func_object__object__o *_9__56_0; // x20
  Il2CppObject *v5; // x21
  struct StageEntity___c_StaticFields *static_fields; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4CB6F34 & 1) == 0 )
  {
    sub_1C6BA08(&Method_EntityScriptUtil_GetScriptValue_List_object___SubBgmPlayArgs_____);
    sub_1C6BA08(&System_Func_List_object___SubBgmPlayArgs____TypeInfo);
    sub_1C6BA08(&Method_StageEntity___c__GetSubBgmPlayArgsArray_b__56_0__);
    sub_1C6BA08(&StageEntity___c_TypeInfo);
    sub_1C6BA08(&StringLiteral_23857/*"subBgms"*/);
    byte_4CB6F34 = 1;
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
    _9__56_0 = (System_Func_object__object__o *)sub_1C6BC54(System_Func_List_object___SubBgmPlayArgs____TypeInfo);
    System_Func_object__object____ctor(_9__56_0, v5, Method_StageEntity___c__GetSubBgmPlayArgsArray_b__56_0__, 0);
    static_fields = StageEntity___c_TypeInfo->static_fields;
    static_fields->__9__56_0 = (struct System_Func_List_object___SubBgmPlayArgs____o *)_9__56_0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__56_0, (int32_t)_9__56_0, v7, v8);
  }
  return (SubBgmPlayArgs_array *)EntityScriptUtil__GetScriptValue_object__object_(
                                   this->fields.script,
                                   (System_String_o *)StringLiteral_23857/*"subBgms"*/,
                                   (System_Func_TSource__TDestination__o *)_9__56_0,
                                   0,
                                   (const MethodInfo_3141B00 *)Method_EntityScriptUtil_GetScriptValue_List_object___SubBgmPlayArgs_____);
}


int32_t StageEntity__GetSubBgmsPriority(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CB6F35 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_23858/*"subBgmsPriority"*/);
    byte_4CB6F35 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_23858/*"subBgmsPriority"*/, 0, v2);
}


System_Int32_array *StageEntity__GetWaveFieldMotionIds(
        StageEntity_o *this,
        System_Int32_array *defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4CB6F43 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_19487/*"fieldMotionIds"*/);
    byte_4CB6F43 = 1;
  }
  return StageEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_19487/*"fieldMotionIds"*/, defVal, v3);
}


bool StageEntity__HasChangeBgKey(StageEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CB6F19 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_17821/*"changeBgId"*/);
    sub_1C6BA08(&StringLiteral_17822/*"changeBgType"*/);
    byte_4CB6F19 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_17821/*"changeBgId"*/, 0)
      || EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_17822/*"changeBgType"*/, 0);
}


bool StageEntity__HasEnemyExBattleUiPositionY(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4CB6F50 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_19078/*"enemyExBattleUiPositionY"*/);
    byte_4CB6F50 = 1;
  }
  return StageEntity__checkScript(this, (System_String_o *)StringLiteral_19078/*"enemyExBattleUiPositionY"*/, v2);
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

  if ( (byte_4CB6F4E & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Array_Empty_ExtraBattleUserInterfaceData_JsonConvertData___);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Any_ExtraBattleUserInterfaceData_JsonConvertData___);
    sub_1C6BA08(&Method_JsonManager_Deserialize_ExtraBattleUserInterfaceData_JsonConvertData_____);
    sub_1C6BA08(&JsonManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_19365/*"exBattleUI"*/);
    byte_4CB6F4E = 1;
  }
  v7 = Method_System_Array_Empty_ExtraBattleUserInterfaceData_JsonConvertData___;
  value = 0;
  v8 = *((_QWORD *)Method_System_Array_Empty_ExtraBattleUserInterfaceData_JsonConvertData___ + 7);
  if ( !v8 )
  {
    sub_1C41AF8(Method_System_Array_Empty_ExtraBattleUserInterfaceData_JsonConvertData___);
    v8 = v7[7];
  }
  v9 = *(_QWORD *)(v8 + 16);
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1C41A9C(inited);
  if ( !*(_DWORD *)(v9 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v9);
  v10 = *(_QWORD *)(v7[7] + 16LL);
  if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
    v10 = sub_1C41A9C(inited);
  v11 = *(ExtraBattleUserInterfaceData_JsonConvertData_array ***)(v10 + 184);
  v12 = *v11;
  *dataArray = *v11;
  sub_1C6B9AC((CGThumbnailListItem_o *)dataArray, (int32_t)v12, (int32_t)method, v3);
  script = this->fields.script;
  if ( !script )
    sub_1C6BC60(0, v13);
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)script,
         (Il2CppObject *)StringLiteral_19365/*"exBattleUI"*/,
         &value,
         (const MethodInfo_34BD148 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    v15 = value;
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v16 = (ExtraBattleUserInterfaceData_JsonConvertData_array *)JsonManager__Deserialize_object_(
                                                                  v15,
                                                                  (const MethodInfo_31AAEC8 *)Method_JsonManager_Deserialize_ExtraBattleUserInterfaceData_JsonConvertData_____);
    *dataArray = v16;
    sub_1C6B9AC((CGThumbnailListItem_o *)dataArray, (int32_t)v16, v17, v18);
  }
  return System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)*dataArray,
           (const MethodInfo_3146EE0 *)Method_System_Linq_Enumerable_Any_ExtraBattleUserInterfaceData_JsonConvertData___);
}


bool StageEntity__Is3_6BossBattle(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CB6F31 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_1372/*"3.6BossBattle"*/);
    byte_4CB6F31 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_1372/*"3.6BossBattle"*/, 0, v2) > 0;
}


bool StageEntity__IsClearFieldBuffWhenWaveStart(StageEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CB6F4D & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_18020/*"clearFieldBuffWhenWaveStart"*/);
    byte_4CB6F4D = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_18020/*"clearFieldBuffWhenWaveStart"*/, 0, 0) != 0;
}


bool StageEntity__IsDisableFieldMotion(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CB6F2A & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_18671/*"disableUniqueFieldMotion"*/);
    byte_4CB6F2A = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_18671/*"disableUniqueFieldMotion"*/, 0, v2) > 0;
}


bool StageEntity__IsForceSetNormalEnemyStatusUI(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4CB6F36 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_6810/*"ForceSetNormalEnemyStatusUI"*/);
    byte_4CB6F36 = 1;
  }
  return StageEntity__checkScript(this, (System_String_o *)StringLiteral_6810/*"ForceSetNormalEnemyStatusUI"*/, v2);
}


bool StageEntity__IsReleaseUnusedAssetsWhenEntryMember(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4CB6F33 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_23119/*"releaseUnusedAssetsWhenEntryMember"*/);
    byte_4CB6F33 = 1;
  }
  return StageEntity__checkScript(this, (System_String_o *)StringLiteral_23119/*"releaseUnusedAssetsWhenEntryMember"*/, v2);
}


bool StageEntity__IsShowEnemyMasterIconOnWaveStart(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4CB6F47 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_23576/*"showEnemyMasterIconOnWaveStart"*/);
    byte_4CB6F47 = 1;
  }
  return StageEntity__checkScript(this, (System_String_o *)StringLiteral_23576/*"showEnemyMasterIconOnWaveStart"*/, v2);
}


bool StageEntity__IsSkipWaveStartEffect(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CB6F42 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_23625/*"skipWaveStartEffect"*/);
    byte_4CB6F42 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_23625/*"skipWaveStartEffect"*/, 0, v2) > 0;
}


bool StageEntity__IsSkipWaveStartFadeInSe(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4CB6F41 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_23626/*"skipWaveStartFadeInSe"*/);
    byte_4CB6F41 = 1;
  }
  return StageEntity__checkScript(this, (System_String_o *)StringLiteral_23626/*"skipWaveStartFadeInSe"*/, v2);
}


bool StageEntity__IsSpecifiedBattleStartVoice(StageEntity_o *this, const MethodInfo *method)
{
  int32_t BattleStartVoiceServantId; // w20
  const MethodInfo *v4; // x1

  BattleStartVoiceServantId = StageEntity__GetBattleStartVoiceServantId(this, method);
  return (BattleStartVoiceServantId > 0) & (StageEntity__GetBattleStartVoiceServantLimit(this, v4) >= 0);
}


bool StageEntity__IsSpecifiedBattleStartVoice_43180984(
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
  int max_length; // w8
  CommonReleaseMaster_o *v27; // x22
  unsigned int v28; // w23
  Il2CppObject *v29; // x24

  if ( (byte_4CB6F4A & 1) == 0 )
  {
    sub_1C6BA08(&Method_BasicHelper_GetValue_string__object___);
    sub_1C6BA08(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_System_Linq_Enumerable_OrderByDescending_BattleTreasureDeviceSequenceSelectType__int___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_ToArray_BattleTreasureDeviceSequenceSelectType___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Where_BattleTreasureDeviceSequenceSelectType___);
    sub_1C6BA08(&System_Func_BattleTreasureDeviceSequenceSelectType__bool__TypeInfo);
    sub_1C6BA08(&System_Func_BattleTreasureDeviceSequenceSelectType__int__TypeInfo);
    sub_1C6BA08(&Method_JsonManager_DeserializeArray_BattleTreasureDeviceSequenceSelectType___);
    sub_1C6BA08(&JsonManager_TypeInfo);
    sub_1C6BA08(&Method_StageEntity___c__TryGetOverwritePlayerSequenceSelectTypeByGender_b__78_1__);
    sub_1C6BA08(&Method_StageEntity___c__DisplayClass78_0__TryGetOverwritePlayerSequenceSelectTypeByGender_b__0__);
    sub_1C6BA08(&StageEntity___c__DisplayClass78_0_TypeInfo);
    sub_1C6BA08(&StageEntity___c_TypeInfo);
    sub_1C6BA08(&StringLiteral_22657/*"overwritePlayerSequenceSelectTypeByGender"*/);
    byte_4CB6F4A = 1;
  }
  v9 = sub_1C6BC54(StageEntity___c__DisplayClass78_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_28;
  *(_DWORD *)(v9 + 16) = servantId;
  *genderSelectType = -1;
  *patternId = -1;
  Value_object__object = BasicHelper__GetValue_object__object_(
                           (System_Collections_Generic_Dictionary_K__V__o *)this->fields.script,
                           (Il2CppObject *)StringLiteral_22657/*"overwritePlayerSequenceSelectTypeByGender"*/,
                           0,
                           (const MethodInfo_31291B0 *)Method_BasicHelper_GetValue_string__object___);
  if ( !Value_object__object )
    return (char)Value_object__object;
  v13 = Value_object__object;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v14 = (System_Collections_Generic_IEnumerable_TSource__o *)JsonManager__DeserializeArray_object_(
                                                               v13,
                                                               (const MethodInfo_31AB018 *)Method_JsonManager_DeserializeArray_BattleTreasureDeviceSequenceSelectType___);
  v15 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_BattleTreasureDeviceSequenceSelectType__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v15,
    (Il2CppObject *)v9,
    Method_StageEntity___c__DisplayClass78_0__TryGetOverwritePlayerSequenceSelectTypeByGender_b__0__,
    0);
  v16 = System_Linq_Enumerable__Where_object_(
          v14,
          (System_Func_TSource__bool__o *)v15,
          (const MethodInfo_3182364 *)Method_System_Linq_Enumerable_Where_BattleTreasureDeviceSequenceSelectType___);
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
    _9__78_1 = (System_Func_object__int__o *)sub_1C6BC54(System_Func_BattleTreasureDeviceSequenceSelectType__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__78_1,
      v20,
      Method_StageEntity___c__TryGetOverwritePlayerSequenceSelectTypeByGender_b__78_1__,
      0);
    static_fields = StageEntity___c_TypeInfo->static_fields;
    static_fields->__9__78_1 = (struct System_Func_BattleTreasureDeviceSequenceSelectType__int__o *)_9__78_1;
    sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__78_1, (int32_t)_9__78_1, v22, v23);
  }
  v24 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                               v18,
                                                               (System_Func_TSource__TKey__o *)_9__78_1,
                                                               (const MethodInfo_316B118 *)Method_System_Linq_Enumerable_OrderByDescending_BattleTreasureDeviceSequenceSelectType__int___);
  v25 = System_Linq_Enumerable__ToArray_object_(
          v24,
          (const MethodInfo_317B248 *)Method_System_Linq_Enumerable_ToArray_BattleTreasureDeviceSequenceSelectType___);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v25, 0) )
    goto LABEL_25;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !v25 )
LABEL_28:
    sub_1C6BC60(Master_object, monitor_high);
  max_length = v25->max_length;
  if ( max_length < 1 )
  {
LABEL_25:
    LOBYTE(Value_object__object) = 0;
    return (char)Value_object__object;
  }
  v27 = (CommonReleaseMaster_o *)Master_object;
  v28 = 0;
  while ( 1 )
  {
    if ( v28 >= max_length )
      sub_1C6BC68(Master_object);
    v29 = v25->m_Items[v28];
    if ( !v29 )
      goto LABEL_28;
    monitor_high = HIDWORD(v29[1].monitor);
    if ( (int)monitor_high < 1 )
      break;
    if ( !v27 )
      goto LABEL_28;
    Master_object = (Il2CppObject *)CommonReleaseMaster__IsOpen(v27, monitor_high, 0, 0, 0);
    if ( ((unsigned __int8)Master_object & 1) != 0 )
      break;
    max_length = v25->max_length;
    if ( (int)++v28 >= max_length )
      goto LABEL_25;
  }
  LOBYTE(Value_object__object) = 1;
  *genderSelectType = HIDWORD(v29[1].klass);
  *patternId = (int32_t)v29[1].monitor;
  return (char)Value_object__object;
}


bool StageEntity__checkCustomFOV(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4CB6F16 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_19689/*"fov"*/);
    byte_4CB6F16 = 1;
  }
  return StageEntity__checkScript(this, (System_String_o *)StringLiteral_19689/*"fov"*/, v2);
}


bool StageEntity__checkScript(StageEntity_o *this, System_String_o *key, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_4CB6F11 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    byte_4CB6F11 = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                       (System_Collections_Generic_Dictionary_object__object__o *)script,
                       (Il2CppObject *)key,
                       (const MethodInfo_34BBB30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)script;
}


bool StageEntity__disableSystemFadeStartBattle(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CB6F20 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_18670/*"disableSystemFadeStartBattle"*/);
    byte_4CB6F20 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_18670/*"disableSystemFadeStartBattle"*/, 0, v2) > 0;
}


int32_t StageEntity__getBattleMasterImageId(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CB6F32 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_17092/*"battleMasterImageId"*/);
    byte_4CB6F32 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_17092/*"battleMasterImageId"*/, 0, v2);
}


int32_t StageEntity__getChangeBgId(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CB6F1A & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_17821/*"changeBgId"*/);
    byte_4CB6F1A = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_17821/*"changeBgId"*/, 0, v2);
}


int32_t StageEntity__getChangeBgType(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CB6F1B & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_17822/*"changeBgType"*/);
    byte_4CB6F1B = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_17822/*"changeBgType"*/, 0, v2);
}


float StageEntity__getCustomFOV(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4CB6F15 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_19689/*"fov"*/);
    byte_4CB6F15 = 1;
  }
  return StageEntity__getScriptFloat(this, (System_String_o *)StringLiteral_19689/*"fov"*/, 0.0, v2);
}


int32_t StageEntity__getEnemyActCount(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t result; // w0
  StageEntity_c *v5; // x0

  if ( (byte_4CB6F1E & 1) == 0 )
  {
    sub_1C6BA08(&StageEntity_TypeInfo);
    sub_1C6BA08(&StringLiteral_6033/*"EnemyActCount"*/);
    byte_4CB6F1E = 1;
  }
  result = StageEntity__getScript(this, (System_String_o *)StringLiteral_6033/*"EnemyActCount"*/, 0, v2);
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

  if ( (byte_4CB6F18 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_19080/*"enemyMasterBattleId"*/);
    sub_1C6BA08(&StringLiteral_19081/*"enemyMasterBattleIdByPlayerGender"*/);
    byte_4CB6F18 = 1;
  }
  ScriptIntArrayParam = StageEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_19081/*"enemyMasterBattleIdByPlayerGender"*/, 0, v2);
  if ( !ScriptIntArrayParam )
    return StageEntity__getScript(this, (System_String_o *)StringLiteral_19080/*"enemyMasterBattleId"*/, 0, v5);
  v6 = ScriptIntArrayParam;
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame )
    goto LABEL_13;
  if ( SelfUserGame->fields.genderType == 1 )
  {
    if ( LODWORD(v6->max_length) )
      return v6->m_Items[0];
LABEL_14:
    sub_1C6BC68(SelfUserGame);
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame )
LABEL_13:
    sub_1C6BC60(SelfUserGame, v8);
  if ( SelfUserGame->fields.genderType != 2 )
    return StageEntity__getScript(this, (System_String_o *)StringLiteral_19080/*"enemyMasterBattleId"*/, 0, v5);
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

  if ( (byte_4CB6F1C & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_object__ToArray__);
    sub_1C6BA08(&System_Collections_Generic_List_object__TypeInfo);
    sub_1C6BA08(&StringLiteral_16733/*"aiFieldIds"*/);
    byte_4CB6F1C = 1;
  }
  if ( !StageEntity__checkScript(this, (System_String_o *)StringLiteral_16733/*"aiFieldIds"*/, v2) )
    return 0;
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script
    || (script = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                              script,
                                                                              (Il2CppObject *)StringLiteral_16733/*"aiFieldIds"*/,
                                                                              (const MethodInfo_34BB8BC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0 )
  {
    sub_1C6BC60(script, v4);
  }
  naturalAligment = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment;
  if ( script->klass->_2.naturalAligment >= (unsigned int)naturalAligment
    && (System_Collections_Generic_List_object__c *)script->klass->_2.typeHierarchy[naturalAligment - 1] == System_Collections_Generic_List_object__TypeInfo )
  {
    return System_Collections_Generic_List_object___ToArray(
             (System_Collections_Generic_List_object__o *)script,
             (const MethodInfo_38024CC *)Method_System_Collections_Generic_List_object__ToArray__);
  }
  sub_1C6BFFC(script);
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

  if ( (byte_4CB6F1D & 1) == 0 )
  {
    sub_1C6BA08(&System_Converter_object__int__TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C6BA08(&int___TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_object__ConvertAll_int___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C6BA08(&System_Collections_Generic_List_object__TypeInfo);
    sub_1C6BA08(&Method_StageEntity___c__getNoEntryIds_b__31_0__);
    sub_1C6BA08(&StageEntity___c_TypeInfo);
    sub_1C6BA08(&StringLiteral_9505/*"NoEntryIds"*/);
    byte_4CB6F1D = 1;
  }
  script = this->fields.script;
  if ( !script )
    return (System_Int32_array *)sub_1C6BAB0(int___TypeInfo, 0);
  v4 = (Il2CppObject *)StringLiteral_9505/*"NoEntryIds"*/;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)StringLiteral_9505/*"NoEntryIds"*/,
          (const MethodInfo_34BBB30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return (System_Int32_array *)sub_1C6BAB0(int___TypeInfo, 0);
  Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !Item )
    goto LABEL_19;
  Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                      Item,
                                                                      v4,
                                                                      (const MethodInfo_34BB8BC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
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
      _9__31_0 = (System_Converter_object__int__o *)sub_1C6BC54(System_Converter_object__int__TypeInfo);
      System_Converter_object__int____ctor(_9__31_0, v11, Method_StageEntity___c__getNoEntryIds_b__31_0__, 0);
      static_fields = StageEntity___c_TypeInfo->static_fields;
      static_fields->__9__31_0 = _9__31_0;
      sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__31_0, (int32_t)_9__31_0, v13, v14);
    }
    if ( v7 )
    {
      Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_List_object___ConvertAll_int_(
                                                                          v7,
                                                                          (System_Converter_T__TOutput__o *)_9__31_0,
                                                                          (const MethodInfo_3060B90 *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
      if ( Item )
        return System_Collections_Generic_List_int___ToArray(
                 (System_Collections_Generic_List_int__o *)Item,
                 (const MethodInfo_37E5408 *)Method_System_Collections_Generic_List_int__ToArray__);
    }
LABEL_19:
    sub_1C6BC60(Item, v5);
  }
  sub_1C6BFFC(v7);
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
  if ( (byte_4CB6F12 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C6BA08(&long_TypeInfo);
    byte_4CB6F12 = 1;
  }
  if ( !StageEntity__checkScript(this, key, *(const MethodInfo **)&defVal) )
    return v4;
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script
    || (script = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                              script,
                                                                              (Il2CppObject *)key,
                                                                              (const MethodInfo_34BB8BC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0 )
  {
    sub_1C6BC60(script, v7);
  }
  if ( script->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(script, long_TypeInfo, v9, v10);
  v15 = sub_1C6BFFC(script);
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

  if ( (byte_4CB6F13 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C6BA08(&double_TypeInfo);
    byte_4CB6F13 = 1;
  }
  if ( !StageEntity__checkScript(this, key, method) )
    return defVal;
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script
    || (script = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                              script,
                                                                              (Il2CppObject *)key,
                                                                              (const MethodInfo_34BB8BC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0 )
  {
    sub_1C6BC60(script, v7);
  }
  if ( script->klass->_1.element_class == double_TypeInfo->_1.element_class )
    return *(double *)j_il2cpp_object_unbox_0(script, double_TypeInfo, v9, v10);
  sub_1C6BFFC(script);
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

  if ( (byte_4CB6F14 & 1) == 0 )
  {
    sub_1C6BA08(&System_Converter_object__int__TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_object__ConvertAll_int___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C6BA08(&System_Collections_Generic_List_object__TypeInfo);
    sub_1C6BA08(&Method_StageEntity___c__getScriptIntArrayParam_b__22_0__);
    sub_1C6BA08(&StageEntity___c_TypeInfo);
    byte_4CB6F14 = 1;
  }
  if ( !StageEntity__checkScript(this, key, (const MethodInfo *)defVal) )
    return defVal;
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script )
    goto LABEL_18;
  script = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                        script,
                                                                        (Il2CppObject *)key,
                                                                        (const MethodInfo_34BB8BC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
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
      _9__22_0 = (System_Converter_object__int__o *)sub_1C6BC54(System_Converter_object__int__TypeInfo);
      System_Converter_object__int____ctor(_9__22_0, v13, Method_StageEntity___c__getScriptIntArrayParam_b__22_0__, 0);
      static_fields = StageEntity___c_TypeInfo->static_fields;
      static_fields->__9__22_0 = _9__22_0;
      sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__22_0, (int32_t)_9__22_0, v15, v16);
    }
    if ( v9 )
    {
      script = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_List_object___ConvertAll_int_(
                                                                            v9,
                                                                            (System_Converter_T__TOutput__o *)_9__22_0,
                                                                            (const MethodInfo_3060B90 *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
      if ( script )
        return System_Collections_Generic_List_int___ToArray(
                 (System_Collections_Generic_List_int__o *)script,
                 (const MethodInfo_37E5408 *)Method_System_Collections_Generic_List_int__ToArray__);
    }
LABEL_18:
    sub_1C6BC60(script, v7);
  }
  sub_1C6BFFC(v9);
  StageEntity__getCustomFOV(v18, v19);
  return result;
}


int32_t StageEntity__getShowTurnState(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CB6F17 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_23579/*"showTurn"*/);
    byte_4CB6F17 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_23579/*"showTurn"*/, 2, v2);
}


int32_t StageEntity__getStartBattleAssetId(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CB6F1F & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_23750/*"startBattleAssetId"*/);
    byte_4CB6F1F = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_23750/*"startBattleAssetId"*/, 0, v2);
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

  if ( (byte_4CB6F54 & 1) == 0 )
  {
    sub_1C6BA08(&StageEntity___c_TypeInfo);
    byte_4CB6F54 = 1;
  }
  v1 = (Il2CppObject *)sub_1C6BC54(StageEntity___c_TypeInfo);
  System_Object___ctor(v1, 0);
  StageEntity___c_TypeInfo->static_fields->__9 = (struct StageEntity___c_o *)v1;
  sub_1C6B9AC((CGThumbnailListItem_o *)StageEntity___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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

  if ( (byte_4CB6F57 & 1) == 0 )
  {
    sub_1C6BA08(&AiAllocationInfo_TypeInfo);
    byte_4CB6F57 = 1;
  }
  v4 = (AiAllocationInfo_o *)sub_1C6BC54(AiAllocationInfo_TypeInfo);
  AiAllocationInfo___ctor(v4, obj, 0);
  return v4;
}


System_String_o *StageEntity___c___GetBattleStartVoiceIdArray_b__49_0(
        StageEntity___c_o *this,
        Il2CppObject *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C6BC60(this, 0);
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
    sub_1C6BC60(this, 0);
  return x->fields.priority;
}


int32_t StageEntity___c___getNoEntryIds_b__31_0(StageEntity___c_o *this, Il2CppObject *x, const MethodInfo *method)
{
  System_String_o *v4; // x0

  if ( (byte_4CB6F56 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB6F56 = 1;
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

  if ( (byte_4CB6F55 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB6F55 = 1;
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
    sub_1C6BC60(this, 0);
  return x->fields.svtId == this->fields.servantId;
}