void __fastcall StageEntity___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_49FEEE9 & 1) == 0 )
  {
    sub_1B64870(&StageEntity_TypeInfo, v1);
    byte_49FEEE9 = 1;
  }
  StageEntity_TypeInfo->static_fields->DEFAULT_ENEMY_ACTION_COUNT = 3;
}


void __fastcall StageEntity___ctor(StageEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FEEAE & 1) == 0 )
  {
    sub_1B64870(&Method_DataEntityBase_string___ctor__, method);
    byte_49FEEAE = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_30D5FF8 *)Method_DataEntityBase_string___ctor__);
}


void __fastcall StageEntity___ctor_39569028(StageEntity_o *this, StageEntity_o *cSrc, const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  struct System_String_o *name; // x1
  struct System_String_o **p_name; // x20

  if ( (byte_49FEEAF & 1) == 0 )
  {
    sub_1B64870(&Method_DataEntityBase_string___ctor__, cSrc);
    byte_49FEEAF = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_30D5FF8 *)Method_DataEntityBase_string___ctor__);
  if ( !cSrc )
    sub_1B64ACC(v5, v6);
  *(_QWORD *)&this->fields.questId = *(_QWORD *)&cSrc->fields.questId;
  name = cSrc->fields.name;
  this->fields.name = name;
  p_name = &this->fields.name;
  sub_1B64814((ServantStatusBattleListViewItem_o *)p_name, (int32_t)name, v7, v8);
  *((_DWORD *)p_name + 2) = cSrc->fields.wave;
  p_name[2] = (struct System_String_o *)cSrc->fields.npcDeckId;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall StageEntity__CreatePK(
        int32_t questId,
        int32_t questPhase,
        int32_t wave,
        const MethodInfo *method)
{
  if ( (byte_49FEEAD & 1) == 0 )
  {
    sub_1B64870(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&questPhase);
    byte_49FEEAD = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           questId,
           questPhase,
           wave,
           (const MethodInfo_2E39D7C *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall StageEntity__CreatePrimaryKey(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t questPhase; // w20
  int32_t questId; // w21
  int32_t wave; // w19

  if ( (byte_49FEEAC & 1) == 0 )
  {
    sub_1B64870(&StageEntity_TypeInfo, method);
    byte_49FEEAC = 1;
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

  if ( (byte_49FEEE6 & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_16609/*"addUniqueCameraIds"*/, defVal);
    byte_49FEEE6 = 1;
  }
  return StageEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_16609/*"addUniqueCameraIds"*/, defVal, v3);
}


System_Object_array *__fastcall StageEntity__GetAiActTypeAttackCommandCard(
        StageEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_Dictionary_object__object__o *script; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_49FEECC & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, method);
    sub_1B64870(&Method_System_Collections_Generic_List_object__ToArray__, v4);
    sub_1B64870(&System_Collections_Generic_List_object__TypeInfo, v5);
    sub_1B64870(&StringLiteral_16646/*"aiActTypeAttackCommandCard"*/, v6);
    byte_49FEECC = 1;
  }
  if ( !StageEntity__checkScript(this, (System_String_o *)StringLiteral_16646/*"aiActTypeAttackCommandCard"*/, v2) )
    return 0LL;
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script
    || (script = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                              script,
                                                                              (Il2CppObject *)StringLiteral_16646/*"aiActTypeAttackCommandCard"*/,
                                                                              (const MethodInfo_317B654 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL
    || (methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(script->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (System_Collections_Generic_List_object__c *)script->klass->_2.typeHierarchy[methodPtr_low - 1] != System_Collections_Generic_List_object__TypeInfo )
  {
    sub_1B64ACC(script, v7);
  }
  return System_Collections_Generic_List_object___ToArray(
           (System_Collections_Generic_List_object__o *)script,
           (const MethodInfo_34B15A8 *)Method_System_Collections_Generic_List_object__ToArray__);
}


int32_t __fastcall StageEntity__GetAiActTypeAttackCommandCardType(
        StageEntity_o *this,
        BattleServantData_o *enemyServantData,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Object_array *AiActTypeAttackCommandCard; // x0
  __int64 v11; // x1
  __int64 v12; // x8
  System_Object_array *v13; // x20
  unsigned __int64 v14; // x23
  Il2CppObject **m_Items; // x24
  System_Collections_Generic_Dictionary_object__object__o *v16; // x21
  __int64 methodPtr_low; // x10
  struct BattleDeckServantData_o *deckSvt; // x8
  int32_t npcId; // w29
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x2
  __int64 v23; // x3
  StageEntity_o *v24; // x0
  const MethodInfo *v25; // x1

  if ( (byte_49FEECD & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, enemyServantData);
    sub_1B64870(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v5);
    sub_1B64870(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v6);
    sub_1B64870(&long_TypeInfo, v7);
    sub_1B64870(&StringLiteral_22080/*"npcServantId"*/, v8);
    sub_1B64870(&StringLiteral_17694/*"cardType"*/, v9);
    byte_49FEECD = 1;
  }
  AiActTypeAttackCommandCard = StageEntity__GetAiActTypeAttackCommandCard(this, (const MethodInfo *)enemyServantData);
  if ( AiActTypeAttackCommandCard )
  {
    v12 = *(_QWORD *)&AiActTypeAttackCommandCard->max_length;
    v13 = AiActTypeAttackCommandCard;
    if ( (int)v12 < 1 )
    {
LABEL_18:
      LODWORD(AiActTypeAttackCommandCard) = 0;
    }
    else
    {
      v14 = 0LL;
      m_Items = AiActTypeAttackCommandCard->m_Items;
      while ( 1 )
      {
        if ( v14 >= (unsigned int)v12 )
          sub_1B64AD4(AiActTypeAttackCommandCard, v11);
        v16 = (System_Collections_Generic_Dictionary_object__object__o *)m_Items[v14];
        if ( v16 )
        {
          methodPtr_low = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr);
          if ( LOBYTE(v16->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
            && (System_Collections_Generic_Dictionary_string__object__c *)v16->klass->_2.typeHierarchy[methodPtr_low - 1] == System_Collections_Generic_Dictionary_string__object__TypeInfo )
          {
            AiActTypeAttackCommandCard = (System_Object_array *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                                                  (System_Collections_Generic_Dictionary_object__object__o *)m_Items[v14],
                                                                  (Il2CppObject *)StringLiteral_22080/*"npcServantId"*/,
                                                                  (const MethodInfo_317B8C8 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
            if ( ((unsigned __int8)AiActTypeAttackCommandCard & 1) != 0 )
            {
              if ( !enemyServantData )
                goto LABEL_24;
              deckSvt = enemyServantData->fields.deckSvt;
              if ( !deckSvt )
                goto LABEL_24;
              npcId = deckSvt->fields.npcId;
              AiActTypeAttackCommandCard = (System_Object_array *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                    v16,
                                                                    (Il2CppObject *)StringLiteral_22080/*"npcServantId"*/,
                                                                    (const MethodInfo_317B654 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
              if ( !AiActTypeAttackCommandCard )
                goto LABEL_24;
              if ( AiActTypeAttackCommandCard->obj.klass->_1.element_class != long_TypeInfo->_1.element_class )
                goto LABEL_25;
              AiActTypeAttackCommandCard = (System_Object_array *)j_il2cpp_object_unbox_0(
                                                                    AiActTypeAttackCommandCard,
                                                                    long_TypeInfo,
                                                                    v20,
                                                                    v21);
              if ( npcId == LODWORD(AiActTypeAttackCommandCard->obj.klass) )
              {
                AiActTypeAttackCommandCard = (System_Object_array *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                                                      v16,
                                                                      (Il2CppObject *)StringLiteral_17694/*"cardType"*/,
                                                                      (const MethodInfo_317B8C8 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
                if ( ((unsigned __int8)AiActTypeAttackCommandCard & 1) != 0 )
                  break;
              }
            }
          }
        }
        LODWORD(v12) = v13->max_length;
        if ( (__int64)++v14 >= (int)v12 )
          goto LABEL_18;
      }
      AiActTypeAttackCommandCard = (System_Object_array *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                            v16,
                                                            (Il2CppObject *)StringLiteral_17694/*"cardType"*/,
                                                            (const MethodInfo_317B654 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !AiActTypeAttackCommandCard )
LABEL_24:
        sub_1B64ACC(AiActTypeAttackCommandCard, v11);
      if ( AiActTypeAttackCommandCard->obj.klass->_1.element_class == long_TypeInfo->_1.element_class )
      {
        LODWORD(AiActTypeAttackCommandCard) = *(_DWORD *)j_il2cpp_object_unbox_0(
                                                           AiActTypeAttackCommandCard,
                                                           long_TypeInfo,
                                                           v22,
                                                           v23);
      }
      else
      {
LABEL_25:
        sub_1B64D8C(AiActTypeAttackCommandCard);
        LODWORD(AiActTypeAttackCommandCard) = StageEntity__IsDisableFieldMotion(v24, v25);
      }
    }
  }
  return (int)AiActTypeAttackCommandCard;
}


System_Collections_Generic_List_AiAllocationInfo__o *__fastcall StageEntity__GetAiAllocationInfoList(
        StageEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  Il2CppObject *Value_object; // x19
  StageEntity___c_c *v11; // x0
  System_Func_object__object__o *_9__68_0; // x20
  Il2CppObject *v13; // x21
  struct StageEntity___c_StaticFields *static_fields; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0

  if ( (byte_49FEEDF & 1) == 0 )
  {
    sub_1B64870(&Method_BasicHelper_GetValue_List_object____, method);
    sub_1B64870(&Method_System_Linq_Enumerable_Select_object__AiAllocationInfo___, v3);
    sub_1B64870(&Method_System_Linq_Enumerable_ToList_AiAllocationInfo___, v4);
    sub_1B64870(&System_Func_object__AiAllocationInfo__TypeInfo, v5);
    sub_1B64870(&Method_StageEntity___c__GetAiAllocationInfoList_b__68_0__, v6);
    sub_1B64870(&StageEntity___c_TypeInfo, v7);
    sub_1B64870(&StringLiteral_16647/*"aiAllocations"*/, v8);
    byte_49FEEDF = 1;
  }
  Value_object = BasicHelper__GetValue_object_(
                   this->fields.script,
                   (System_String_o *)StringLiteral_16647/*"aiAllocations"*/,
                   0LL,
                   (const MethodInfo_2E29AE4 *)Method_BasicHelper_GetValue_List_object____);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)Value_object, 0LL) )
    return 0LL;
  v11 = StageEntity___c_TypeInfo;
  if ( !StageEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(StageEntity___c_TypeInfo);
    v11 = StageEntity___c_TypeInfo;
  }
  _9__68_0 = (System_Func_object__object__o *)v11->static_fields->__9__68_0;
  if ( !_9__68_0 )
  {
    if ( !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      v11 = StageEntity___c_TypeInfo;
    }
    v13 = (Il2CppObject *)v11->static_fields->__9;
    _9__68_0 = (System_Func_object__object__o *)sub_1B64ABC(System_Func_object__AiAllocationInfo__TypeInfo);
    System_Func_object__object____ctor(_9__68_0, v13, Method_StageEntity___c__GetAiAllocationInfoList_b__68_0__, 0LL);
    static_fields = StageEntity___c_TypeInfo->static_fields;
    static_fields->__9__68_0 = (struct System_Func_object__AiAllocationInfo__o *)_9__68_0;
    sub_1B64814((ServantStatusBattleListViewItem_o *)&static_fields->__9__68_0, (int32_t)_9__68_0, v15, v16);
  }
  v17 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)Value_object,
                                                               (System_Func_TSource__TResult__o *)_9__68_0,
                                                               (const MethodInfo_2E6B688 *)Method_System_Linq_Enumerable_Select_object__AiAllocationInfo___);
  return (System_Collections_Generic_List_AiAllocationInfo__o *)System_Linq_Enumerable__ToList_object_(
                                                                  v17,
                                                                  (const MethodInfo_2E772F8 *)Method_System_Linq_Enumerable_ToList_AiAllocationInfo___);
}


System_Int32_array *__fastcall StageEntity__GetAssumedEffectId(StageEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FEEE3 & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_16876/*"assumedEffectId"*/, method);
    byte_49FEEE3 = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_16876/*"assumedEffectId"*/, 0LL);
}


System_String_array *__fastcall StageEntity__GetAssumedVoiceAssetNames(StageEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FEEE7 & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_16877/*"assumedVoiceAssetNames"*/, method);
    byte_49FEEE7 = 1;
  }
  return EntityScriptUtil__GetStringArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_16877/*"assumedVoiceAssetNames"*/, 0LL);
}


System_String_array *__fastcall StageEntity__GetBattleStartVoiceIdArray(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  Il2CppObject *ScriptObject; // x0
  System_Collections_Generic_List_object__o *v12; // x19
  __int64 methodPtr_low; // x10
  StageEntity___c_c *v15; // x0
  System_Converter_TInput__TOutput__o *_9__54_0; // x20
  Il2CppObject *v17; // x21
  struct StageEntity___c_StaticFields *static_fields; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  System_Collections_Generic_List_object__o *v21; // x0
  __int64 v22; // x1

  if ( (byte_49FEED3 & 1) == 0 )
  {
    sub_1B64870(&System_Converter_object__string__TypeInfo, method);
    sub_1B64870(&Method_System_Collections_Generic_List_object__ConvertAll_string___, v4);
    sub_1B64870(&Method_System_Collections_Generic_List_string__ToArray__, v5);
    sub_1B64870(&System_Collections_Generic_List_object__TypeInfo, v6);
    sub_1B64870(&string___TypeInfo, v7);
    sub_1B64870(&Method_StageEntity___c__GetBattleStartVoiceIdArray_b__54_0__, v8);
    sub_1B64870(&StageEntity___c_TypeInfo, v9);
    sub_1B64870(&StringLiteral_17053/*"battleStartVoiceIds"*/, v10);
    byte_49FEED3 = 1;
  }
  ScriptObject = StageEntity__GetScriptObject(this, (System_String_o *)StringLiteral_17053/*"battleStartVoiceIds"*/, v2);
  if ( !ScriptObject )
    return (System_String_array *)sub_1B64918(string___TypeInfo, 0LL);
  v12 = (System_Collections_Generic_List_object__o *)ScriptObject;
  methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(ScriptObject->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
    || (System_Collections_Generic_List_object__c *)ScriptObject->klass->_2.typeHierarchy[methodPtr_low - 1] != System_Collections_Generic_List_object__TypeInfo )
  {
    return (System_String_array *)sub_1B64918(string___TypeInfo, 0LL);
  }
  v15 = StageEntity___c_TypeInfo;
  if ( !StageEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(StageEntity___c_TypeInfo);
    v15 = StageEntity___c_TypeInfo;
  }
  _9__54_0 = (System_Converter_TInput__TOutput__o *)v15->static_fields->__9__54_0;
  if ( !_9__54_0 )
  {
    if ( !v15->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v15);
      v15 = StageEntity___c_TypeInfo;
    }
    v17 = (Il2CppObject *)v15->static_fields->__9;
    _9__54_0 = (System_Converter_TInput__TOutput__o *)sub_1B64ABC(System_Converter_object__string__TypeInfo);
    System_Converter_object__object____ctor(
      _9__54_0,
      v17,
      Method_StageEntity___c__GetBattleStartVoiceIdArray_b__54_0__,
      0LL);
    static_fields = StageEntity___c_TypeInfo->static_fields;
    static_fields->__9__54_0 = (struct System_Converter_object__string__o *)_9__54_0;
    sub_1B64814((ServantStatusBattleListViewItem_o *)&static_fields->__9__54_0, (int32_t)_9__54_0, v19, v20);
  }
  v21 = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___ConvertAll_object_(
                                                       v12,
                                                       (System_Converter_T__TOutput__o *)_9__54_0,
                                                       (const MethodInfo_2D71580 *)Method_System_Collections_Generic_List_object__ConvertAll_string___);
  if ( !v21 )
    sub_1B64ACC(0LL, v22);
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  v21,
                                  (const MethodInfo_34B15A8 *)Method_System_Collections_Generic_List_string__ToArray__);
}


int32_t __fastcall StageEntity__GetBattleStartVoiceServantId(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FEED1 & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_17054/*"battleStartVoiceSvtId"*/, method);
    byte_49FEED1 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_17054/*"battleStartVoiceSvtId"*/, 0, v2);
}


int32_t __fastcall StageEntity__GetBattleStartVoiceServantLimit(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FEED2 & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_17055/*"battleStartVoiceSvtLimit"*/, method);
    byte_49FEED2 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_17055/*"battleStartVoiceSvtLimit"*/, -1, v2);
}


System_Int32_array *__fastcall StageEntity__GetBossIdAndChangeBgmId(StageEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Int32_array *v4; // x2
  const MethodInfo *v5; // x3

  if ( (byte_49FEECB & 1) == 0 )
  {
    sub_1B64870(&int___TypeInfo, method);
    sub_1B64870(&StringLiteral_17315/*"bossIdAndChangeBgmId"*/, v3);
    byte_49FEECB = 1;
  }
  v4 = (System_Int32_array *)sub_1B64918(int___TypeInfo, 0LL);
  return StageEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_17315/*"bossIdAndChangeBgmId"*/, v4, v5);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall StageEntity__GetCutInSvtIds(StageEntity_o *this, bool isEnemy, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  System_String_o **v7; // x8

  if ( (byte_49FEEC8 & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_18945/*"enemyCutInSvtIds"*/, isEnemy);
    sub_1B64870(&StringLiteral_22467/*"playerCutInSvtIds"*/, v6);
    byte_49FEEC8 = 1;
  }
  if ( isEnemy )
    v7 = (System_String_o **)&StringLiteral_18945/*"enemyCutInSvtIds"*/;
  else
    v7 = (System_String_o **)&StringLiteral_22467/*"playerCutInSvtIds"*/;
  return StageEntity__getScriptIntArrayParam(this, *v7, 0LL, v3);
}


int32_t __fastcall StageEntity__GetEffectBgmId(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FEEC9 & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_18838/*"effectBgmId"*/, method);
    byte_49FEEC9 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_18838/*"effectBgmId"*/, -1, v2);
}


int32_t __fastcall StageEntity__GetEffectSvtId(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FEEC7 & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_18849/*"effectSvtId"*/, method);
    byte_49FEEC7 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_18849/*"effectSvtId"*/, 0, v2);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall StageEntity__GetEnemyAddOrderPosArray(
        StageEntity_o *this,
        int32_t enemyFieldPosCount,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Int32_array *ScriptIntArrayParam; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v12; // x19
  StageEntity___c_c *v13; // x0
  System_Func_int__int__o *_9__64_0; // x20
  Il2CppObject *v15; // x21
  struct StageEntity___c_StaticFields *static_fields; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x0

  if ( (byte_49FEEDB & 1) == 0 )
  {
    sub_1B64870(&Method_System_Linq_Enumerable_Select_int__int___, *(_QWORD *)&enemyFieldPosCount);
    sub_1B64870(&Method_System_Linq_Enumerable_ToArray_int___, v6);
    sub_1B64870(&System_Func_int__int__TypeInfo, v7);
    sub_1B64870(&Method_StageEntity___c__GetEnemyAddOrderPosArray_b__64_0__, v8);
    sub_1B64870(&StageEntity___c_TypeInfo, v9);
    sub_1B64870(&StringLiteral_18947/*"enemyEntryOrder"*/, v10);
    byte_49FEEDB = 1;
  }
  ScriptIntArrayParam = StageEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_18947/*"enemyEntryOrder"*/, 0LL, v3);
  if ( ScriptIntArrayParam )
  {
    v12 = (System_Collections_Generic_IEnumerable_TSource__o *)ScriptIntArrayParam;
    v13 = StageEntity___c_TypeInfo;
    if ( !StageEntity___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(StageEntity___c_TypeInfo);
      v13 = StageEntity___c_TypeInfo;
    }
    _9__64_0 = v13->static_fields->__9__64_0;
    if ( !_9__64_0 )
    {
      if ( !v13->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v13);
        v13 = StageEntity___c_TypeInfo;
      }
      v15 = (Il2CppObject *)v13->static_fields->__9;
      _9__64_0 = (System_Func_int__int__o *)sub_1B64ABC(System_Func_int__int__TypeInfo);
      System_Func_int__int____ctor(_9__64_0, v15, Method_StageEntity___c__GetEnemyAddOrderPosArray_b__64_0__, 0LL);
      static_fields = StageEntity___c_TypeInfo->static_fields;
      static_fields->__9__64_0 = _9__64_0;
      sub_1B64814((ServantStatusBattleListViewItem_o *)&static_fields->__9__64_0, (int32_t)_9__64_0, v17, v18);
    }
    v19 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__int_(
                                                                 v12,
                                                                 (System_Func_TSource__TResult__o *)_9__64_0,
                                                                 (const MethodInfo_2E68C50 *)Method_System_Linq_Enumerable_Select_int__int___);
  }
  else
  {
    v19 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Range(0, enemyFieldPosCount, 0LL);
  }
  return System_Linq_Enumerable__ToArray_int_(
           v19,
           (const MethodInfo_2E73508 *)Method_System_Linq_Enumerable_ToArray_int___);
}


int32_t __fastcall StageEntity__GetEnemyCountStartValue(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FEEE0 & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_18944/*"enemyCountStartValue"*/, method);
    byte_49FEEE0 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_18944/*"enemyCountStartValue"*/, 0, v2);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall StageEntity__GetEnemyEntryMaxCountEachTurn(
        StageEntity_o *this,
        int32_t defaultValue,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_49FEEDC & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_18946/*"enemyEntryMaxCountEachTurn"*/, *(_QWORD *)&defaultValue);
    byte_49FEEDC = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_18946/*"enemyEntryMaxCountEachTurn"*/, defaultValue, v3);
}


int32_t __fastcall StageEntity__GetEnemyFieldPosCount(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FEED4 & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_18949/*"enemyFieldPosCount"*/, method);
    byte_49FEED4 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_18949/*"enemyFieldPosCount"*/, 3, v2);
}


int32_t __fastcall StageEntity__GetFadeType(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FEEC6 & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_17051/*"battleStartFadeType"*/, method);
    byte_49FEEC6 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_17051/*"battleStartFadeType"*/, 0, v2);
}


System_Int32_array *__fastcall StageEntity__GetFieldCallServantId(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1
  System_Int32_array *result; // x0

  if ( (byte_49FEECF & 1) == 0 )
  {
    sub_1B64870(&int___TypeInfo, method);
    sub_1B64870(&StringLiteral_17633/*"call"*/, v4);
    byte_49FEECF = 1;
  }
  result = StageEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_17633/*"call"*/, 0LL, v2);
  if ( !result )
    return (System_Int32_array *)sub_1B64918(int___TypeInfo, 0LL);
  return result;
}


System_Int32_array *__fastcall StageEntity__GetFieldPosSkillId(StageEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Int32_array *v4; // x2
  const MethodInfo *v5; // x3

  if ( (byte_49FEEDD & 1) == 0 )
  {
    sub_1B64870(&int___TypeInfo, method);
    sub_1B64870(&StringLiteral_19333/*"fieldPosSkillId"*/, v3);
    byte_49FEEDD = 1;
  }
  v4 = (System_Int32_array *)sub_1B64918(int___TypeInfo, 0LL);
  return StageEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_19333/*"fieldPosSkillId"*/, v4, v5);
}


System_Int32_array *__fastcall StageEntity__GetFieldPosSkillLv(StageEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Int32_array *v4; // x2
  const MethodInfo *v5; // x3

  if ( (byte_49FEEDE & 1) == 0 )
  {
    sub_1B64870(&int___TypeInfo, method);
    sub_1B64870(&StringLiteral_19334/*"fieldPosSkillLv"*/, v3);
    byte_49FEEDE = 1;
  }
  v4 = (System_Int32_array *)sub_1B64918(int___TypeInfo, 0LL);
  return StageEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_19334/*"fieldPosSkillLv"*/, v4, v5);
}


System_Int32_array *__fastcall StageEntity__GetMultiEffectIds(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FEEC5 & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_21883/*"multiEffectIds"*/, method);
    byte_49FEEC5 = 1;
  }
  return StageEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_21883/*"multiEffectIds"*/, 0LL, v2);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall StageEntity__GetPriorityBG(StageEntity_o *this, int32_t def, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_49FEEE1 & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_22512/*"priorityBG"*/, *(_QWORD *)&def);
    byte_49FEEE1 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_22512/*"priorityBG"*/, def, v3);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall StageEntity__GetPriorityBgm(StageEntity_o *this, int32_t def, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  const MethodInfo *v7; // x3
  Il2CppObject *Master_object; // x0
  __int64 v10; // x1

  if ( (byte_49FEEE2 & 1) == 0 )
  {
    sub_1B64870(&Method_DataManager_GetMaster_BgmMaster___, *(_QWORD *)&def);
    sub_1B64870(&DataManager_TypeInfo, v5);
    sub_1B64870(&StringLiteral_22513/*"priorityBgm"*/, v6);
    byte_49FEEE2 = 1;
  }
  if ( StageEntity__checkScript(this, (System_String_o *)StringLiteral_22513/*"priorityBgm"*/, method) )
    return StageEntity__getScript(this, (System_String_o *)StringLiteral_22513/*"priorityBgm"*/, def, v7);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E3B674 *)Method_DataManager_GetMaster_BgmMaster___);
  if ( !Master_object )
    sub_1B64ACC(0LL, v10);
  return BgmMaster__GetBgmPriority((BgmMaster_o *)Master_object, this->fields.bgmId, def, 0LL);
}


int32_t __fastcall StageEntity__GetProhibitBgmChangeInTreasureDeviceAnim(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FEEE8 & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_22534/*"prohibitBgmChangeInTreasureDeviceAnim"*/, method);
    byte_49FEEE8 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_22534/*"prohibitBgmChangeInTreasureDeviceAnim"*/, 0, v2);
}


Il2CppObject *__fastcall StageEntity__GetScriptObject(
        StageEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49FEED0 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, key);
    byte_49FEED0 = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( !script )
    sub_1B64ACC(0LL, key);
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)script,
         (Il2CppObject *)key,
         &value,
         (const MethodInfo_317CEE0 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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

  if ( (byte_49FEECA & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_23394/*"startBgmOff"*/, method);
    byte_49FEECA = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_23394/*"startBgmOff"*/, 0, v2);
}


SubBgmPlayArgs_array *__fastcall StageEntity__GetSubBgmPlayArgsArray(StageEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  StageEntity___c_c *v7; // x0
  System_Func_object__object__o *_9__61_0; // x20
  Il2CppObject *v9; // x21
  struct StageEntity___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  int32_t v12; // w3

  if ( (byte_49FEED8 & 1) == 0 )
  {
    sub_1B64870(&Method_EntityScriptUtil_GetScriptValue_List_object___SubBgmPlayArgs_____, method);
    sub_1B64870(&System_Func_List_object___SubBgmPlayArgs____TypeInfo, v3);
    sub_1B64870(&Method_StageEntity___c__GetSubBgmPlayArgsArray_b__61_0__, v4);
    sub_1B64870(&StageEntity___c_TypeInfo, v5);
    sub_1B64870(&StringLiteral_23510/*"subBgms"*/, v6);
    byte_49FEED8 = 1;
  }
  v7 = StageEntity___c_TypeInfo;
  if ( !StageEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(StageEntity___c_TypeInfo);
    v7 = StageEntity___c_TypeInfo;
  }
  _9__61_0 = (System_Func_object__object__o *)v7->static_fields->__9__61_0;
  if ( !_9__61_0 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = StageEntity___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v7->static_fields->__9;
    _9__61_0 = (System_Func_object__object__o *)sub_1B64ABC(System_Func_List_object___SubBgmPlayArgs____TypeInfo);
    System_Func_object__object____ctor(_9__61_0, v9, Method_StageEntity___c__GetSubBgmPlayArgsArray_b__61_0__, 0LL);
    static_fields = StageEntity___c_TypeInfo->static_fields;
    static_fields->__9__61_0 = (struct System_Func_List_object___SubBgmPlayArgs____o *)_9__61_0;
    sub_1B64814((ServantStatusBattleListViewItem_o *)&static_fields->__9__61_0, (int32_t)_9__61_0, v11, v12);
  }
  return (SubBgmPlayArgs_array *)EntityScriptUtil__GetScriptValue_object__object_(
                                   this->fields.script,
                                   (System_String_o *)StringLiteral_23510/*"subBgms"*/,
                                   (System_Func_TSource__TDestination__o *)_9__61_0,
                                   0LL,
                                   (const MethodInfo_2E44394 *)Method_EntityScriptUtil_GetScriptValue_List_object___SubBgmPlayArgs_____);
}


int32_t __fastcall StageEntity__GetSubBgmsPriority(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FEED9 & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_23511/*"subBgmsPriority"*/, method);
    byte_49FEED9 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_23511/*"subBgmsPriority"*/, 0, v2);
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_49FEEC0 & 1) == 0 )
  {
    sub_1B64870(&int___TypeInfo, *(_QWORD *)&limitTurn);
    byte_49FEEC0 = 1;
  }
  result = (System_Int32_array *)sub_1B64918(int___TypeInfo, (unsigned int)limitTurn);
  if ( !result )
LABEL_15:
    sub_1B64ACC(result, v7);
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
        sub_1B64AD4(result, v7);
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

  if ( (byte_49FEEE5 & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_19331/*"fieldMotionIds"*/, defVal);
    byte_49FEEE5 = 1;
  }
  return StageEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_19331/*"fieldMotionIds"*/, defVal, v3);
}


bool __fastcall StageEntity__Is3_6BossBattle(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FEED5 & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_1477/*"3.6BossBattle"*/, method);
    byte_49FEED5 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_1477/*"3.6BossBattle"*/, 0, v2) > 0;
}


bool __fastcall StageEntity__IsDisableFieldMotion(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FEECE & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_18565/*"disableUniqueFieldMotion"*/, method);
    byte_49FEECE = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_18565/*"disableUniqueFieldMotion"*/, 0, v2) > 0;
}


bool __fastcall StageEntity__IsForceSetNormalEnemyStatusUI(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_49FEEDA & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_6752/*"ForceSetNormalEnemyStatusUI"*/, method);
    byte_49FEEDA = 1;
  }
  return StageEntity__checkScript(this, (System_String_o *)StringLiteral_6752/*"ForceSetNormalEnemyStatusUI"*/, v2);
}


bool __fastcall StageEntity__IsReleaseUnusedAssetsWhenEntryMember(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_49FEED7 & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_22760/*"releaseUnusedAssetsWhenEntryMember"*/, method);
    byte_49FEED7 = 1;
  }
  return StageEntity__checkScript(this, (System_String_o *)StringLiteral_22760/*"releaseUnusedAssetsWhenEntryMember"*/, v2);
}


bool __fastcall StageEntity__IsSkipWaveStartFadeInSe(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_49FEEE4 & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_23264/*"skipWaveStartFadeInSe"*/, method);
    byte_49FEEE4 = 1;
  }
  return StageEntity__checkScript(this, (System_String_o *)StringLiteral_23264/*"skipWaveStartFadeInSe"*/, v2);
}


bool __fastcall StageEntity__IsSpecifiedBattleStartVoice(StageEntity_o *this, const MethodInfo *method)
{
  int32_t BattleStartVoiceServantId; // w20
  const MethodInfo *v4; // x1

  BattleStartVoiceServantId = StageEntity__GetBattleStartVoiceServantId(this, method);
  return (BattleStartVoiceServantId > 0) & (StageEntity__GetBattleStartVoiceServantLimit(this, v4) >= 0);
}


bool __fastcall StageEntity__IsSpecifiedBattleStartVoice_39575140(
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

  if ( (byte_49FEEB9 & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_19515/*"fov"*/, method);
    byte_49FEEB9 = 1;
  }
  return StageEntity__checkScript(this, (System_String_o *)StringLiteral_19515/*"fov"*/, v2);
}


bool __fastcall StageEntity__checkScript(StageEntity_o *this, System_String_o *key, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_49FEEB0 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    byte_49FEEB0 = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                       (System_Collections_Generic_Dictionary_object__object__o *)script,
                       (Il2CppObject *)key,
                       (const MethodInfo_317B8C8 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)script;
}


bool __fastcall StageEntity__disableSystemFadeStartBattle(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FEEC4 & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_18563/*"disableSystemFadeStartBattle"*/, method);
    byte_49FEEC4 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_18563/*"disableSystemFadeStartBattle"*/, 0, v2) > 0;
}


int32_t __fastcall StageEntity__getBattleMasterImageId(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FEED6 & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_17049/*"battleMasterImageId"*/, method);
    byte_49FEED6 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_17049/*"battleMasterImageId"*/, 0, v2);
}


int32_t __fastcall StageEntity__getChangeBgId(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FEEBC & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_17737/*"changeBgId"*/, method);
    byte_49FEEBC = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_17737/*"changeBgId"*/, 0, v2);
}


int32_t __fastcall StageEntity__getChangeBgType(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FEEBD & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_17738/*"changeBgType"*/, method);
    byte_49FEEBD = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_17738/*"changeBgType"*/, 0, v2);
}


float __fastcall StageEntity__getCustomFOV(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_49FEEB8 & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_19515/*"fov"*/, method);
    byte_49FEEB8 = 1;
  }
  return StageEntity__getScriptFloat(this, (System_String_o *)StringLiteral_19515/*"fov"*/, 0.0, v2);
}


int32_t __fastcall StageEntity__getEnemyActCount(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1
  int32_t result; // w0
  StageEntity_c *v6; // x0

  if ( (byte_49FEEC2 & 1) == 0 )
  {
    sub_1B64870(&StageEntity_TypeInfo, method);
    sub_1B64870(&StringLiteral_5981/*"EnemyActCount"*/, v4);
    byte_49FEEC2 = 1;
  }
  result = StageEntity__getScript(this, (System_String_o *)StringLiteral_5981/*"EnemyActCount"*/, 0, v2);
  if ( result <= 0 )
  {
    v6 = StageEntity_TypeInfo;
    if ( !StageEntity_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(StageEntity_TypeInfo);
      v6 = StageEntity_TypeInfo;
    }
    return v6->static_fields->DEFAULT_ENEMY_ACTION_COUNT;
  }
  return result;
}


int32_t __fastcall StageEntity__getEnemyMasterBattleId(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1
  System_Int32_array *ScriptIntArrayParam; // x0
  const MethodInfo *v6; // x3
  System_Int32_array *v7; // x20
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v9; // x1

  if ( (byte_49FEEBB & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_18950/*"enemyMasterBattleId"*/, method);
    sub_1B64870(&StringLiteral_18951/*"enemyMasterBattleIdByPlayerGender"*/, v4);
    byte_49FEEBB = 1;
  }
  ScriptIntArrayParam = StageEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_18951/*"enemyMasterBattleIdByPlayerGender"*/, 0LL, v2);
  if ( !ScriptIntArrayParam )
    return StageEntity__getScript(this, (System_String_o *)StringLiteral_18950/*"enemyMasterBattleId"*/, 0, v6);
  v7 = ScriptIntArrayParam;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_13;
  if ( SelfUserGame->fields.genderType == 1 )
  {
    if ( v7->max_length )
      return v7->m_Items[1];
LABEL_14:
    sub_1B64AD4(SelfUserGame, v9);
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
LABEL_13:
    sub_1B64ACC(SelfUserGame, v9);
  if ( SelfUserGame->fields.genderType != 2 )
    return StageEntity__getScript(this, (System_String_o *)StringLiteral_18950/*"enemyMasterBattleId"*/, 0, v6);
  if ( v7->max_length <= 1 )
    goto LABEL_14;
  return v7->m_Items[2];
}


System_Object_array *__fastcall StageEntity__getFieldAis(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_Dictionary_object__object__o *script; // x0
  __int64 methodPtr_low; // x9
  StageEntity_o *v11; // x0
  int32_t v12; // w1
  const MethodInfo *v13; // x2

  if ( (byte_49FEEBE & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, method);
    sub_1B64870(&Method_System_Collections_Generic_List_object__ToArray__, v4);
    sub_1B64870(&System_Collections_Generic_List_object__TypeInfo, v5);
    sub_1B64870(&StringLiteral_16648/*"aiFieldIds"*/, v6);
    byte_49FEEBE = 1;
  }
  if ( !StageEntity__checkScript(this, (System_String_o *)StringLiteral_16648/*"aiFieldIds"*/, v2) )
    return 0LL;
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script
    || (script = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                              script,
                                                                              (Il2CppObject *)StringLiteral_16648/*"aiFieldIds"*/,
                                                                              (const MethodInfo_317B654 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_1B64ACC(script, v7);
  }
  methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(script->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
    && (System_Collections_Generic_List_object__c *)script->klass->_2.typeHierarchy[methodPtr_low - 1] == System_Collections_Generic_List_object__TypeInfo )
  {
    return System_Collections_Generic_List_object___ToArray(
             (System_Collections_Generic_List_object__o *)script,
             (const MethodInfo_34B15A8 *)Method_System_Collections_Generic_List_object__ToArray__);
  }
  sub_1B64D8C(script);
  return (System_Object_array *)StageEntity__getTurnEffect(v11, v12, v13);
}


int32_t __fastcall StageEntity__getLimitAct(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FEEB7 & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_8364/*"LimitAct"*/, method);
    byte_49FEEB7 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_8364/*"LimitAct"*/, 0, v2);
}


int32_t __fastcall StageEntity__getLimitTurn(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FEEB4 & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_23992/*"turn"*/, method);
    byte_49FEEB4 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_23992/*"turn"*/, 0, v2);
}


System_Int32_array *__fastcall StageEntity__getNoEntryIds(StageEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  Il2CppObject *v13; // x20
  System_Collections_Generic_List_object__c *v14; // x1
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  System_Collections_Generic_List_object__o *v16; // x19
  StageEntity___c_c *v17; // x8
  System_Converter_object__int__o *_9__36_0; // x20
  __int64 methodPtr_low; // x10
  Il2CppObject *v20; // x21
  struct StageEntity___c_StaticFields *static_fields; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  StageEntity_o *v25; // x0
  const MethodInfo *v26; // x1

  if ( (byte_49FEEC1 & 1) == 0 )
  {
    sub_1B64870(&System_Converter_object__int__TypeInfo, method);
    sub_1B64870(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v3);
    sub_1B64870(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v4);
    sub_1B64870(&int___TypeInfo, v5);
    sub_1B64870(&Method_System_Collections_Generic_List_object__ConvertAll_int___, v6);
    sub_1B64870(&Method_System_Collections_Generic_List_int__ToArray__, v7);
    sub_1B64870(&System_Collections_Generic_List_object__TypeInfo, v8);
    sub_1B64870(&Method_StageEntity___c__getNoEntryIds_b__36_0__, v9);
    sub_1B64870(&StageEntity___c_TypeInfo, v10);
    sub_1B64870(&StringLiteral_9452/*"NoEntryIds"*/, v11);
    byte_49FEEC1 = 1;
  }
  script = this->fields.script;
  if ( !script )
    return (System_Int32_array *)sub_1B64918(int___TypeInfo, 0LL);
  v13 = (Il2CppObject *)StringLiteral_9452/*"NoEntryIds"*/;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)StringLiteral_9452/*"NoEntryIds"*/,
          (const MethodInfo_317B8C8 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return (System_Int32_array *)sub_1B64918(int___TypeInfo, 0LL);
  Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !Item )
    goto LABEL_19;
  Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                      Item,
                                                                      v13,
                                                                      (const MethodInfo_317B654 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v16 = (System_Collections_Generic_List_object__o *)Item;
  v17 = StageEntity___c_TypeInfo;
  if ( !StageEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(StageEntity___c_TypeInfo);
    v17 = StageEntity___c_TypeInfo;
  }
  _9__36_0 = v17->static_fields->__9__36_0;
  if ( !v16
    || (v14 = System_Collections_Generic_List_object__TypeInfo,
        methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(v16->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low)
    && (System_Collections_Generic_List_object__c *)v16->klass->_2.typeHierarchy[methodPtr_low - 1] == System_Collections_Generic_List_object__TypeInfo )
  {
    if ( !_9__36_0 )
    {
      if ( !v17->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v17);
        v17 = StageEntity___c_TypeInfo;
      }
      v20 = (Il2CppObject *)v17->static_fields->__9;
      _9__36_0 = (System_Converter_object__int__o *)sub_1B64ABC(System_Converter_object__int__TypeInfo);
      System_Converter_object__int____ctor(_9__36_0, v20, Method_StageEntity___c__getNoEntryIds_b__36_0__, 0LL);
      static_fields = StageEntity___c_TypeInfo->static_fields;
      static_fields->__9__36_0 = _9__36_0;
      sub_1B64814((ServantStatusBattleListViewItem_o *)&static_fields->__9__36_0, (int32_t)_9__36_0, v22, v23);
    }
    if ( v16 )
    {
      Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_List_object___ConvertAll_int_(
                                                                          v16,
                                                                          (System_Converter_T__TOutput__o *)_9__36_0,
                                                                          (const MethodInfo_2D7147C *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
      if ( Item )
        return System_Collections_Generic_List_int___ToArray(
                 (System_Collections_Generic_List_int__o *)Item,
                 (const MethodInfo_3493D10 *)Method_System_Collections_Generic_List_int__ToArray__);
    }
LABEL_19:
    sub_1B64ACC(Item, v14);
  }
  sub_1B64D8C(v16);
  return (System_Int32_array *)StageEntity__getEnemyActCount(v25, v26);
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
  __int64 v8; // x1
  System_Collections_Generic_Dictionary_object__object__o *script; // x0
  __int64 v10; // x2
  __int64 v11; // x3
  int32_t result; // w0
  StageEntity_o *v13; // x0
  System_String_o *v14; // x1
  const MethodInfo *v15; // x2
  long double v16; // q0

  v4 = defVal;
  if ( (byte_49FEEB1 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, key);
    sub_1B64870(&long_TypeInfo, v7);
    byte_49FEEB1 = 1;
  }
  if ( !StageEntity__checkScript(this, key, *(const MethodInfo **)&defVal) )
    return v4;
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script
    || (script = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                              script,
                                                                              (Il2CppObject *)key,
                                                                              (const MethodInfo_317B654 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_1B64ACC(script, v8);
  }
  if ( script->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(script, long_TypeInfo, v10, v11);
  v16 = sub_1B64D8C(script);
  StageEntity__getScriptFloat(v13, v14, *(float *)&v16, v15);
  return result;
}


float __fastcall StageEntity__getScriptFloat(
        StageEntity_o *this,
        System_String_o *key,
        float defVal,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_Dictionary_object__object__o *script; // x0
  __int64 v10; // x2
  __int64 v11; // x3
  float result; // s0
  StageEntity_o *v13; // x0
  System_String_o *v14; // x1
  System_Int32_array *v15; // x2
  const MethodInfo *v16; // x3

  if ( (byte_49FEEB2 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, key);
    sub_1B64870(&double_TypeInfo, v7);
    byte_49FEEB2 = 1;
  }
  if ( !StageEntity__checkScript(this, key, method) )
    return defVal;
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script
    || (script = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                              script,
                                                                              (Il2CppObject *)key,
                                                                              (const MethodInfo_317B654 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_1B64ACC(script, v8);
  }
  if ( script->klass->_1.element_class == double_TypeInfo->_1.element_class )
    return *(double *)j_il2cpp_object_unbox_0(script, double_TypeInfo, v10, v11);
  sub_1B64D8C(script);
  StageEntity__getScriptIntArrayParam(v13, v14, v15, v16);
  return result;
}


System_Int32_array *__fastcall StageEntity__getScriptIntArrayParam(
        StageEntity_o *this,
        System_String_o *key,
        System_Int32_array *defVal,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_List_object__c *v13; // x1
  System_Collections_Generic_Dictionary_object__object__o *script; // x0
  System_Collections_Generic_List_object__o *v15; // x19
  StageEntity___c_c *v16; // x8
  System_Converter_object__int__o *_9__22_0; // x20
  __int64 methodPtr_low; // x10
  Il2CppObject *v19; // x21
  struct StageEntity___c_StaticFields *static_fields; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  StageEntity_o *v24; // x0
  const MethodInfo *v25; // x1

  if ( (byte_49FEEB3 & 1) == 0 )
  {
    sub_1B64870(&System_Converter_object__int__TypeInfo, key);
    sub_1B64870(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    sub_1B64870(&Method_System_Collections_Generic_List_object__ConvertAll_int___, v8);
    sub_1B64870(&Method_System_Collections_Generic_List_int__ToArray__, v9);
    sub_1B64870(&System_Collections_Generic_List_object__TypeInfo, v10);
    sub_1B64870(&Method_StageEntity___c__getScriptIntArrayParam_b__22_0__, v11);
    sub_1B64870(&StageEntity___c_TypeInfo, v12);
    byte_49FEEB3 = 1;
  }
  if ( !StageEntity__checkScript(this, key, (const MethodInfo *)defVal) )
    return defVal;
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script )
    goto LABEL_18;
  script = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                        script,
                                                                        (Il2CppObject *)key,
                                                                        (const MethodInfo_317B654 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v15 = (System_Collections_Generic_List_object__o *)script;
  v16 = StageEntity___c_TypeInfo;
  if ( !StageEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(StageEntity___c_TypeInfo);
    v16 = StageEntity___c_TypeInfo;
  }
  _9__22_0 = v16->static_fields->__9__22_0;
  if ( !v15
    || (v13 = System_Collections_Generic_List_object__TypeInfo,
        methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(v15->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low)
    && (System_Collections_Generic_List_object__c *)v15->klass->_2.typeHierarchy[methodPtr_low - 1] == System_Collections_Generic_List_object__TypeInfo )
  {
    if ( !_9__22_0 )
    {
      if ( !v16->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v16);
        v16 = StageEntity___c_TypeInfo;
      }
      v19 = (Il2CppObject *)v16->static_fields->__9;
      _9__22_0 = (System_Converter_object__int__o *)sub_1B64ABC(System_Converter_object__int__TypeInfo);
      System_Converter_object__int____ctor(_9__22_0, v19, Method_StageEntity___c__getScriptIntArrayParam_b__22_0__, 0LL);
      static_fields = StageEntity___c_TypeInfo->static_fields;
      static_fields->__9__22_0 = _9__22_0;
      sub_1B64814((ServantStatusBattleListViewItem_o *)&static_fields->__9__22_0, (int32_t)_9__22_0, v21, v22);
    }
    if ( v15 )
    {
      script = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_List_object___ConvertAll_int_(
                                                                            v15,
                                                                            (System_Converter_T__TOutput__o *)_9__22_0,
                                                                            (const MethodInfo_2D7147C *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
      if ( script )
        return System_Collections_Generic_List_int___ToArray(
                 (System_Collections_Generic_List_int__o *)script,
                 (const MethodInfo_3493D10 *)Method_System_Collections_Generic_List_int__ToArray__);
    }
LABEL_18:
    sub_1B64ACC(script, v13);
  }
  sub_1B64D8C(v15);
  return (System_Int32_array *)StageEntity__getLimitTurn(v24, v25);
}


int32_t __fastcall StageEntity__getShowTurnState(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FEEBA & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_23220/*"showTurn"*/, method);
    byte_49FEEBA = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_23220/*"showTurn"*/, 2, v2);
}


int32_t __fastcall StageEntity__getStartBattleAssetId(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FEEC3 & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_23392/*"startBattleAssetId"*/, method);
    byte_49FEEC3 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_23392/*"startBattleAssetId"*/, 0, v2);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall StageEntity__getTurnEffect(
        StageEntity_o *this,
        int32_t limitTurn,
        const MethodInfo *method)
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
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  System_Collections_Generic_List_object__c *v15; // x1
  void *v16; // x0
  Il2CppObject *Item; // x0
  System_Collections_Generic_List_object__o *v18; // x20
  __int64 methodPtr_low; // x9
  System_Converter_object__int__o *v20; // x21
  Il2CppObject *v21; // x22
  struct StageEntity___c_StaticFields *static_fields; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  StageEntity_o *v25; // x0
  const MethodInfo *v26; // x3
  int32_t v27; // w1
  System_Int32_array *v28; // x2

  if ( (byte_49FEEBF & 1) == 0 )
  {
    sub_1B64870(&System_Converter_object__int__TypeInfo, *(_QWORD *)&limitTurn);
    sub_1B64870(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v5);
    sub_1B64870(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v6);
    sub_1B64870(&int___TypeInfo, v7);
    sub_1B64870(&Method_System_Collections_Generic_List_object__ConvertAll_int___, v8);
    sub_1B64870(&Method_System_Collections_Generic_List_int__ToArray__, v9);
    sub_1B64870(&System_Collections_Generic_List_object__TypeInfo, v10);
    sub_1B64870(&Method_StageEntity___c__getTurnEffect_b__34_0__, v11);
    sub_1B64870(&StageEntity___c_TypeInfo, v12);
    sub_1B64870(&StringLiteral_23993/*"turnEffect"*/, v13);
    byte_49FEEBF = 1;
  }
  script = this->fields.script;
  if ( script
    && System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)script,
         (Il2CppObject *)StringLiteral_23993/*"turnEffect"*/,
         (const MethodInfo_317B8C8 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v16 = this->fields.script;
    if ( v16 )
    {
      Item = System_Collections_Generic_Dictionary_object__object___get_Item(
               (System_Collections_Generic_Dictionary_object__object__o *)v16,
               (Il2CppObject *)StringLiteral_23993/*"turnEffect"*/,
               (const MethodInfo_317B654 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      v18 = (System_Collections_Generic_List_object__o *)Item;
      if ( Item )
      {
        v15 = System_Collections_Generic_List_object__TypeInfo;
        methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
          || (System_Collections_Generic_List_object__c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] != System_Collections_Generic_List_object__TypeInfo )
        {
          sub_1B64D8C(Item);
          return StageEntity__GetTurnEffect(v25, v27, v28, v26);
        }
      }
      v16 = StageEntity___c_TypeInfo;
      if ( !StageEntity___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(StageEntity___c_TypeInfo);
        v16 = StageEntity___c_TypeInfo;
      }
      v20 = *(System_Converter_object__int__o **)(*((_QWORD *)v16 + 23) + 16LL);
      if ( !v20 )
      {
        if ( !*((_DWORD *)v16 + 56) )
        {
          j_il2cpp_runtime_class_init_0(v16);
          v16 = StageEntity___c_TypeInfo;
        }
        v21 = (Il2CppObject *)**((_QWORD **)v16 + 23);
        v20 = (System_Converter_object__int__o *)sub_1B64ABC(System_Converter_object__int__TypeInfo);
        System_Converter_object__int____ctor(v20, v21, Method_StageEntity___c__getTurnEffect_b__34_0__, 0LL);
        static_fields = StageEntity___c_TypeInfo->static_fields;
        static_fields->__9__34_0 = v20;
        sub_1B64814((ServantStatusBattleListViewItem_o *)&static_fields->__9__34_0, (int32_t)v20, v23, v24);
      }
      if ( v18 )
      {
        v16 = System_Collections_Generic_List_object___ConvertAll_int_(
                v18,
                (System_Converter_T__TOutput__o *)v20,
                (const MethodInfo_2D7147C *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
        if ( v16 )
        {
          v25 = (StageEntity_o *)System_Collections_Generic_List_int___ToArray(
                                   (System_Collections_Generic_List_int__o *)v16,
                                   (const MethodInfo_3493D10 *)Method_System_Collections_Generic_List_int__ToArray__);
          v27 = limitTurn;
          v28 = (System_Int32_array *)v25;
          return StageEntity__GetTurnEffect(v25, v27, v28, v26);
        }
      }
    }
    sub_1B64ACC(v16, v15);
  }
  return (System_Int32_array *)sub_1B64918(int___TypeInfo, 0LL);
}


int32_t __fastcall StageEntity__getTurnEffectType(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FEEB5 & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_23994/*"turnEffectType"*/, method);
    byte_49FEEB5 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_23994/*"turnEffectType"*/, 0, v2);
}


bool __fastcall StageEntity__getTurnElapsedEndBattleFlag(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FEEB6 & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_23995/*"turnElapsedEndBattle"*/, method);
    byte_49FEEB6 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_23995/*"turnElapsedEndBattle"*/, 0, v2) > 0;
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
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_49FEEEA & 1) == 0 )
  {
    sub_1B64870(&StageEntity___c_TypeInfo, v1);
    byte_49FEEEA = 1;
  }
  v2 = (Il2CppObject *)sub_1B64ABC(StageEntity___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  StageEntity___c_TypeInfo->static_fields->__9 = (struct StageEntity___c_o *)v2;
  sub_1B64814((ServantStatusBattleListViewItem_o *)StageEntity___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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

  if ( (byte_49FEEEE & 1) == 0 )
  {
    sub_1B64870(&AiAllocationInfo_TypeInfo, obj);
    byte_49FEEEE = 1;
  }
  v4 = (AiAllocationInfo_o *)sub_1B64ABC(AiAllocationInfo_TypeInfo);
  AiAllocationInfo___ctor(v4, obj, 0LL);
  return v4;
}


System_String_o *__fastcall StageEntity___c___GetBattleStartVoiceIdArray_b__54_0(
        StageEntity___c_o *this,
        Il2CppObject *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64ACC(this, 0LL);
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

  if ( (byte_49FEEED & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_1/*""*/, x);
    byte_49FEEED = 1;
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

  if ( (byte_49FEEEB & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_1/*""*/, x);
    byte_49FEEEB = 1;
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

  if ( (byte_49FEEEC & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_1/*""*/, x);
    byte_49FEEEC = 1;
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