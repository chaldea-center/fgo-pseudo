void __fastcall StageEntity___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4B02C35 & 1) == 0 )
  {
    sub_1BC3008(&StageEntity_TypeInfo, v1);
    byte_4B02C35 = 1;
  }
  StageEntity_TypeInfo->static_fields->DEFAULT_ENEMY_ACTION_COUNT = 3;
}


void __fastcall StageEntity___ctor(StageEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B02BF7 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataEntityBase_string___ctor__, method);
    byte_4B02BF7 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_32ACC04 *)Method_DataEntityBase_string___ctor__);
}


void __fastcall StageEntity___ctor_41913044(StageEntity_o *this, StageEntity_o *cSrc, const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct System_String_o *name; // x1
  struct System_String_o **p_name; // x20

  if ( (byte_4B02BF8 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataEntityBase_string___ctor__, cSrc);
    byte_4B02BF8 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_32ACC04 *)Method_DataEntityBase_string___ctor__);
  if ( !cSrc )
    sub_1BC3264(v5, v6);
  *(_QWORD *)&this->fields.questId = *(_QWORD *)&cSrc->fields.questId;
  name = cSrc->fields.name;
  this->fields.name = name;
  p_name = &this->fields.name;
  sub_1BC2FAC((CGThumbnailListItem_o *)p_name, (int32_t)name, v7, v8);
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
  if ( (byte_4B02BF6 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&questPhase);
    byte_4B02BF6 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           questId,
           questPhase,
           wave,
           (const MethodInfo_300047C *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall StageEntity__CreatePrimaryKey(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t questPhase; // w20
  int32_t questId; // w21
  int32_t wave; // w19

  if ( (byte_4B02BF5 & 1) == 0 )
  {
    sub_1BC3008(&StageEntity_TypeInfo, method);
    byte_4B02BF5 = 1;
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

  if ( (byte_4B02C2A & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_16534/*"addUniqueCameraIds"*/, defVal);
    byte_4B02C2A = 1;
  }
  return StageEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_16534/*"addUniqueCameraIds"*/, defVal, v3);
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

  if ( (byte_4B02C10 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, method);
    sub_1BC3008(&Method_System_Collections_Generic_List_object__ToArray__, v4);
    sub_1BC3008(&System_Collections_Generic_List_object__TypeInfo, v5);
    sub_1BC3008(&StringLiteral_16570/*"aiActTypeAttackCommandCard"*/, v6);
    byte_4B02C10 = 1;
  }
  if ( !StageEntity__checkScript(this, (System_String_o *)StringLiteral_16570/*"aiActTypeAttackCommandCard"*/, v2) )
    return 0LL;
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script
    || (script = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                              script,
                                                                              (Il2CppObject *)StringLiteral_16570/*"aiActTypeAttackCommandCard"*/,
                                                                              (const MethodInfo_336CF68 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL
    || (methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(script->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (System_Collections_Generic_List_object__c *)script->klass->_2.typeHierarchy[methodPtr_low - 1] != System_Collections_Generic_List_object__TypeInfo )
  {
    sub_1BC3264(script, v7);
  }
  return System_Collections_Generic_List_object___ToArray(
           (System_Collections_Generic_List_object__o *)script,
           (const MethodInfo_36A2998 *)Method_System_Collections_Generic_List_object__ToArray__);
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
  __int64 v12; // x2
  __int64 v13; // x8
  System_Object_array *v14; // x20
  unsigned __int64 v15; // x23
  Il2CppObject **m_Items; // x24
  System_Collections_Generic_Dictionary_object__object__o *v17; // x21
  __int64 methodPtr_low; // x10
  struct BattleDeckServantData_o *deckSvt; // x8
  int dropInfos; // w29
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x2
  __int64 v24; // x3
  StageEntity_o *v25; // x0
  const MethodInfo *v26; // x1

  if ( (byte_4B02C11 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, enemyServantData);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v5);
    sub_1BC3008(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v6);
    sub_1BC3008(&long_TypeInfo, v7);
    sub_1BC3008(&StringLiteral_22106/*"npcServantId"*/, v8);
    sub_1BC3008(&StringLiteral_17602/*"cardType"*/, v9);
    byte_4B02C11 = 1;
  }
  AiActTypeAttackCommandCard = StageEntity__GetAiActTypeAttackCommandCard(this, (const MethodInfo *)enemyServantData);
  if ( AiActTypeAttackCommandCard )
  {
    v13 = *(_QWORD *)&AiActTypeAttackCommandCard->max_length;
    v14 = AiActTypeAttackCommandCard;
    if ( (int)v13 < 1 )
    {
LABEL_18:
      LODWORD(AiActTypeAttackCommandCard) = 0;
    }
    else
    {
      v15 = 0LL;
      m_Items = AiActTypeAttackCommandCard->m_Items;
      while ( 1 )
      {
        if ( v15 >= (unsigned int)v13 )
          sub_1BC326C(AiActTypeAttackCommandCard, v11, v12);
        v17 = (System_Collections_Generic_Dictionary_object__object__o *)m_Items[v15];
        if ( v17 )
        {
          methodPtr_low = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr);
          if ( LOBYTE(v17->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
            && (System_Collections_Generic_Dictionary_string__object__c *)v17->klass->_2.typeHierarchy[methodPtr_low - 1] == System_Collections_Generic_Dictionary_string__object__TypeInfo )
          {
            AiActTypeAttackCommandCard = (System_Object_array *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                                                  (System_Collections_Generic_Dictionary_object__object__o *)m_Items[v15],
                                                                  (Il2CppObject *)StringLiteral_22106/*"npcServantId"*/,
                                                                  (const MethodInfo_336D1DC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
            if ( ((unsigned __int8)AiActTypeAttackCommandCard & 1) != 0 )
            {
              if ( !enemyServantData )
                goto LABEL_24;
              deckSvt = enemyServantData->fields.deckSvt;
              if ( !deckSvt )
                goto LABEL_24;
              dropInfos = (int)deckSvt->fields.dropInfos;
              AiActTypeAttackCommandCard = (System_Object_array *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                    v17,
                                                                    (Il2CppObject *)StringLiteral_22106/*"npcServantId"*/,
                                                                    (const MethodInfo_336CF68 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
              if ( !AiActTypeAttackCommandCard )
                goto LABEL_24;
              if ( AiActTypeAttackCommandCard->obj.klass->_1.element_class != long_TypeInfo->_1.element_class )
                goto LABEL_25;
              AiActTypeAttackCommandCard = (System_Object_array *)j_il2cpp_object_unbox_0(
                                                                    AiActTypeAttackCommandCard,
                                                                    long_TypeInfo,
                                                                    v21,
                                                                    v22);
              if ( dropInfos == LODWORD(AiActTypeAttackCommandCard->obj.klass) )
              {
                AiActTypeAttackCommandCard = (System_Object_array *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                                                      v17,
                                                                      (Il2CppObject *)StringLiteral_17602/*"cardType"*/,
                                                                      (const MethodInfo_336D1DC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
                if ( ((unsigned __int8)AiActTypeAttackCommandCard & 1) != 0 )
                  break;
              }
            }
          }
        }
        LODWORD(v13) = v14->max_length;
        if ( (__int64)++v15 >= (int)v13 )
          goto LABEL_18;
      }
      AiActTypeAttackCommandCard = (System_Object_array *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                            v17,
                                                            (Il2CppObject *)StringLiteral_17602/*"cardType"*/,
                                                            (const MethodInfo_336CF68 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !AiActTypeAttackCommandCard )
LABEL_24:
        sub_1BC3264(AiActTypeAttackCommandCard, v11);
      if ( AiActTypeAttackCommandCard->obj.klass->_1.element_class == long_TypeInfo->_1.element_class )
      {
        LODWORD(AiActTypeAttackCommandCard) = *(_DWORD *)j_il2cpp_object_unbox_0(
                                                           AiActTypeAttackCommandCard,
                                                           long_TypeInfo,
                                                           v23,
                                                           v24);
      }
      else
      {
LABEL_25:
        sub_1BC3524(AiActTypeAttackCommandCard);
        LODWORD(AiActTypeAttackCommandCard) = StageEntity__IsDisableFieldMotion(v25, v26);
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
  System_Func_object__object__o *_9__63_0; // x20
  Il2CppObject *v13; // x21
  struct StageEntity___c_StaticFields *static_fields; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0

  if ( (byte_4B02C23 & 1) == 0 )
  {
    sub_1BC3008(&Method_BasicHelper_GetValue_List_object____, method);
    sub_1BC3008(&Method_System_Linq_Enumerable_Select_object__AiAllocationInfo___, v3);
    sub_1BC3008(&Method_System_Linq_Enumerable_ToList_AiAllocationInfo___, v4);
    sub_1BC3008(&System_Func_object__AiAllocationInfo__TypeInfo, v5);
    sub_1BC3008(&Method_StageEntity___c__GetAiAllocationInfoList_b__63_0__, v6);
    sub_1BC3008(&StageEntity___c_TypeInfo, v7);
    sub_1BC3008(&StringLiteral_16571/*"aiAllocations"*/, v8);
    byte_4B02C23 = 1;
  }
  Value_object = BasicHelper__GetValue_object_(
                   this->fields.script,
                   (System_String_o *)StringLiteral_16571/*"aiAllocations"*/,
                   0LL,
                   (const MethodInfo_2FEF8B0 *)Method_BasicHelper_GetValue_List_object____);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)Value_object, 0LL) )
    return 0LL;
  v11 = StageEntity___c_TypeInfo;
  if ( !StageEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(StageEntity___c_TypeInfo);
    v11 = StageEntity___c_TypeInfo;
  }
  _9__63_0 = (System_Func_object__object__o *)v11->static_fields->__9__63_0;
  if ( !_9__63_0 )
  {
    if ( !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      v11 = StageEntity___c_TypeInfo;
    }
    v13 = (Il2CppObject *)v11->static_fields->__9;
    _9__63_0 = (System_Func_object__object__o *)sub_1BC3254(System_Func_object__AiAllocationInfo__TypeInfo);
    System_Func_object__object____ctor(_9__63_0, v13, Method_StageEntity___c__GetAiAllocationInfoList_b__63_0__, 0LL);
    static_fields = StageEntity___c_TypeInfo->static_fields;
    static_fields->__9__63_0 = (struct System_Func_object__AiAllocationInfo__o *)_9__63_0;
    sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->__9__63_0, (int32_t)_9__63_0, v15, v16);
  }
  v17 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)Value_object,
                                                               (System_Func_TSource__TResult__o *)_9__63_0,
                                                               (const MethodInfo_3036320 *)Method_System_Linq_Enumerable_Select_object__AiAllocationInfo___);
  return (System_Collections_Generic_List_AiAllocationInfo__o *)System_Linq_Enumerable__ToList_object_(
                                                                  v17,
                                                                  (const MethodInfo_3042DE0 *)Method_System_Linq_Enumerable_ToList_AiAllocationInfo___);
}


System_Int32_array *__fastcall StageEntity__GetAssumedEffectId(StageEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B02C27 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_16772/*"assumedEffectId"*/, method);
    byte_4B02C27 = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_16772/*"assumedEffectId"*/, 0LL);
}


System_String_array *__fastcall StageEntity__GetAssumedVoiceAssetNames(StageEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B02C2B & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_16773/*"assumedVoiceAssetNames"*/, method);
    byte_4B02C2B = 1;
  }
  return EntityScriptUtil__GetStringArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_16773/*"assumedVoiceAssetNames"*/, 0LL);
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
  System_Converter_TInput__TOutput__o *_9__49_0; // x20
  Il2CppObject *v17; // x21
  struct StageEntity___c_StaticFields *static_fields; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  System_Collections_Generic_List_object__o *v21; // x0
  __int64 v22; // x1

  if ( (byte_4B02C17 & 1) == 0 )
  {
    sub_1BC3008(&System_Converter_object__string__TypeInfo, method);
    sub_1BC3008(&Method_System_Collections_Generic_List_object__ConvertAll_string___, v4);
    sub_1BC3008(&Method_System_Collections_Generic_List_string__ToArray__, v5);
    sub_1BC3008(&System_Collections_Generic_List_object__TypeInfo, v6);
    sub_1BC3008(&string___TypeInfo, v7);
    sub_1BC3008(&Method_StageEntity___c__GetBattleStartVoiceIdArray_b__49_0__, v8);
    sub_1BC3008(&StageEntity___c_TypeInfo, v9);
    sub_1BC3008(&StringLiteral_16937/*"battleStartVoiceIds"*/, v10);
    byte_4B02C17 = 1;
  }
  ScriptObject = StageEntity__GetScriptObject(this, (System_String_o *)StringLiteral_16937/*"battleStartVoiceIds"*/, v2);
  if ( !ScriptObject )
    return (System_String_array *)sub_1BC30B0(string___TypeInfo, 0LL);
  v12 = (System_Collections_Generic_List_object__o *)ScriptObject;
  methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(ScriptObject->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
    || (System_Collections_Generic_List_object__c *)ScriptObject->klass->_2.typeHierarchy[methodPtr_low - 1] != System_Collections_Generic_List_object__TypeInfo )
  {
    return (System_String_array *)sub_1BC30B0(string___TypeInfo, 0LL);
  }
  v15 = StageEntity___c_TypeInfo;
  if ( !StageEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(StageEntity___c_TypeInfo);
    v15 = StageEntity___c_TypeInfo;
  }
  _9__49_0 = (System_Converter_TInput__TOutput__o *)v15->static_fields->__9__49_0;
  if ( !_9__49_0 )
  {
    if ( !v15->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v15);
      v15 = StageEntity___c_TypeInfo;
    }
    v17 = (Il2CppObject *)v15->static_fields->__9;
    _9__49_0 = (System_Converter_TInput__TOutput__o *)sub_1BC3254(System_Converter_object__string__TypeInfo);
    System_Converter_object__object____ctor(
      _9__49_0,
      v17,
      Method_StageEntity___c__GetBattleStartVoiceIdArray_b__49_0__,
      0LL);
    static_fields = StageEntity___c_TypeInfo->static_fields;
    static_fields->__9__49_0 = (struct System_Converter_object__string__o *)_9__49_0;
    sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->__9__49_0, (int32_t)_9__49_0, v19, v20);
  }
  v21 = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___ConvertAll_object_(
                                                       v12,
                                                       (System_Converter_T__TOutput__o *)_9__49_0,
                                                       (const MethodInfo_2F31584 *)Method_System_Collections_Generic_List_object__ConvertAll_string___);
  if ( !v21 )
    sub_1BC3264(0LL, v22);
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  v21,
                                  (const MethodInfo_36A2998 *)Method_System_Collections_Generic_List_string__ToArray__);
}


int32_t __fastcall StageEntity__GetBattleStartVoiceServantId(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B02C15 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_16938/*"battleStartVoiceSvtId"*/, method);
    byte_4B02C15 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_16938/*"battleStartVoiceSvtId"*/, 0, v2);
}


int32_t __fastcall StageEntity__GetBattleStartVoiceServantLimit(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B02C16 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_16939/*"battleStartVoiceSvtLimit"*/, method);
    byte_4B02C16 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_16939/*"battleStartVoiceSvtLimit"*/, -1, v2);
}


System_Int32_array *__fastcall StageEntity__GetBossIdAndChangeBgmId(StageEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Int32_array *v4; // x2
  const MethodInfo *v5; // x3

  if ( (byte_4B02C0F & 1) == 0 )
  {
    sub_1BC3008(&int___TypeInfo, method);
    sub_1BC3008(&StringLiteral_17202/*"bossIdAndChangeBgmId"*/, v3);
    byte_4B02C0F = 1;
  }
  v4 = (System_Int32_array *)sub_1BC30B0(int___TypeInfo, 0LL);
  return StageEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_17202/*"bossIdAndChangeBgmId"*/, v4, v5);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall StageEntity__GetCutInSvtIds(StageEntity_o *this, bool isEnemy, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  System_String_o **v7; // x8

  if ( (byte_4B02C0C & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_18844/*"enemyCutInSvtIds"*/, isEnemy);
    sub_1BC3008(&StringLiteral_22495/*"playerCutInSvtIds"*/, v6);
    byte_4B02C0C = 1;
  }
  if ( isEnemy )
    v7 = (System_String_o **)&StringLiteral_18844/*"enemyCutInSvtIds"*/;
  else
    v7 = (System_String_o **)&StringLiteral_22495/*"playerCutInSvtIds"*/;
  return StageEntity__getScriptIntArrayParam(this, *v7, 0LL, v3);
}


int32_t __fastcall StageEntity__GetEffectBgmId(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B02C0D & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_18736/*"effectBgmId"*/, method);
    byte_4B02C0D = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_18736/*"effectBgmId"*/, -1, v2);
}


int32_t __fastcall StageEntity__GetEffectSvtId(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B02C0B & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_18749/*"effectSvtId"*/, method);
    byte_4B02C0B = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_18749/*"effectSvtId"*/, 0, v2);
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
  System_Int32_array *v12; // x20
  System_Collections_Generic_List_int__o *v13; // x21
  __int64 v14; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x8
  unsigned __int64 i; // x22
  struct System_Int32_array *items; // x9
  _QWORD *v20; // x10
  __int64 size; // x11
  System_Collections_Generic_IEnumerable_int__o *v23; // x0

  if ( (byte_4B02C1F & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Linq_Enumerable_ToArray_int___, *(_QWORD *)&enemyFieldPosCount);
    sub_1BC3008(&Method_System_Collections_Generic_List_int__Add__, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_int__ToArray__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_int___ctor__, v8);
    sub_1BC3008(&System_Collections_Generic_List_int__TypeInfo, v9);
    sub_1BC3008(&StringLiteral_18846/*"enemyEntryOrder"*/, v10);
    byte_4B02C1F = 1;
  }
  ScriptIntArrayParam = StageEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_18846/*"enemyEntryOrder"*/, 0LL, v3);
  if ( ScriptIntArrayParam )
  {
    v12 = ScriptIntArrayParam;
    v13 = (System_Collections_Generic_List_int__o *)sub_1BC3254(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v13,
      (const MethodInfo_36835C8 *)Method_System_Collections_Generic_List_int___ctor__);
    v17 = *(_QWORD *)&v12->max_length;
    if ( (int)v17 >= 1 )
    {
      for ( i = 0LL; (__int64)i < (int)v17; ++i )
      {
        if ( i >= (unsigned int)v17 )
          sub_1BC326C(v14, v15, v16);
        v15 = (unsigned int)(v12->m_Items[i + 1] - 1);
        if ( (int)v15 < enemyFieldPosCount )
        {
          if ( !v13 )
            goto LABEL_18;
          items = v13->fields._items;
          v20 = Method_System_Collections_Generic_List_int__Add__;
          ++v13->fields._version;
          if ( !items )
            goto LABEL_18;
          size = v13->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v13,
              v15,
              *(const MethodInfo_3683E1C **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
            LODWORD(v17) = v12->max_length;
          }
          else
          {
            v13->fields._size = size + 1;
            items->m_Items[size + 1] = v15;
          }
        }
      }
    }
    if ( !v13 )
LABEL_18:
      sub_1BC3264(v14, v15);
    return System_Collections_Generic_List_int___ToArray(
             v13,
             (const MethodInfo_36858D4 *)Method_System_Collections_Generic_List_int__ToArray__);
  }
  else
  {
    v23 = System_Linq_Enumerable__Range(0, enemyFieldPosCount, 0LL);
    return System_Linq_Enumerable__ToArray_int_(
             (System_Collections_Generic_IEnumerable_TSource__o *)v23,
             (const MethodInfo_303E3B4 *)Method_System_Linq_Enumerable_ToArray_int___);
  }
}


int32_t __fastcall StageEntity__GetEnemyCountStartValue(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B02C24 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_18843/*"enemyCountStartValue"*/, method);
    byte_4B02C24 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_18843/*"enemyCountStartValue"*/, 0, v2);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall StageEntity__GetEnemyEntryMaxCountEachTurn(
        StageEntity_o *this,
        int32_t defaultValue,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4B02C20 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_18845/*"enemyEntryMaxCountEachTurn"*/, *(_QWORD *)&defaultValue);
    byte_4B02C20 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_18845/*"enemyEntryMaxCountEachTurn"*/, defaultValue, v3);
}


int32_t __fastcall StageEntity__GetEnemyFieldPosCount(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B02C18 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_18848/*"enemyFieldPosCount"*/, method);
    byte_4B02C18 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_18848/*"enemyFieldPosCount"*/, 3, v2);
}


System_Single_array *__fastcall StageEntity__GetEnemyMasterCommandSpellIconPosition(
        StageEntity_o *this,
        const MethodInfo *method)
{
  long double inited; // q0
  __int64 v4; // x1
  _QWORD *v5; // x20
  System_Collections_Generic_Dictionary_string__object__o *script; // x19
  __int64 v7; // x8
  __int64 v8; // x0
  __int64 v9; // x0

  if ( (byte_4B02C2F & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Array_Empty_float___, method);
    sub_1BC3008(&StringLiteral_18851/*"enemyMasterCommandSpellIconPosition"*/, v4);
    byte_4B02C2F = 1;
  }
  v5 = Method_System_Array_Empty_float___;
  script = this->fields.script;
  v7 = *((_QWORD *)Method_System_Array_Empty_float___ + 7);
  if ( !v7 )
  {
    sub_1C134C8(Method_System_Array_Empty_float___);
    v7 = v5[7];
  }
  v8 = *(_QWORD *)(v7 + 16);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1C1346C(inited);
  if ( !*(_DWORD *)(v8 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v8);
  v9 = *(_QWORD *)(v5[7] + 16LL);
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1C1346C(inited);
  return EntityScriptUtil__GetFloatArray(
           script,
           (System_String_o *)StringLiteral_18851/*"enemyMasterCommandSpellIconPosition"*/,
           **(System_Single_array ***)(v9 + 184),
           0LL);
}


System_Int32_array *__fastcall StageEntity__GetEnemyMasterCommandSpellIconSize(
        StageEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B02C2E & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_18852/*"enemyMasterCommandSpellIconSize"*/, method);
    byte_4B02C2E = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_18852/*"enemyMasterCommandSpellIconSize"*/, 0LL);
}


int32_t __fastcall StageEntity__GetFadeType(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B02C0A & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_16935/*"battleStartFadeType"*/, method);
    byte_4B02C0A = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_16935/*"battleStartFadeType"*/, 0, v2);
}


System_Int32_array *__fastcall StageEntity__GetFieldCallServantId(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1
  System_Int32_array *result; // x0

  if ( (byte_4B02C13 & 1) == 0 )
  {
    sub_1BC3008(&int___TypeInfo, method);
    sub_1BC3008(&StringLiteral_17537/*"call"*/, v4);
    byte_4B02C13 = 1;
  }
  result = StageEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_17537/*"call"*/, 0LL, v2);
  if ( !result )
    return (System_Int32_array *)sub_1BC30B0(int___TypeInfo, 0LL);
  return result;
}


System_Int32_array *__fastcall StageEntity__GetFieldPosSkillId(StageEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Int32_array *v4; // x2
  const MethodInfo *v5; // x3

  if ( (byte_4B02C21 & 1) == 0 )
  {
    sub_1BC3008(&int___TypeInfo, method);
    sub_1BC3008(&StringLiteral_19242/*"fieldPosSkillId"*/, v3);
    byte_4B02C21 = 1;
  }
  v4 = (System_Int32_array *)sub_1BC30B0(int___TypeInfo, 0LL);
  return StageEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_19242/*"fieldPosSkillId"*/, v4, v5);
}


System_Int32_array *__fastcall StageEntity__GetFieldPosSkillLv(StageEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Int32_array *v4; // x2
  const MethodInfo *v5; // x3

  if ( (byte_4B02C22 & 1) == 0 )
  {
    sub_1BC3008(&int___TypeInfo, method);
    sub_1BC3008(&StringLiteral_19243/*"fieldPosSkillLv"*/, v3);
    byte_4B02C22 = 1;
  }
  v4 = (System_Int32_array *)sub_1BC30B0(int___TypeInfo, 0LL);
  return StageEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_19243/*"fieldPosSkillLv"*/, v4, v5);
}


System_Int32_array *__fastcall StageEntity__GetMultiEffectIds(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B02C09 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_21921/*"multiEffectIds"*/, method);
    byte_4B02C09 = 1;
  }
  return StageEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_21921/*"multiEffectIds"*/, 0LL, v2);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall StageEntity__GetPriorityBG(StageEntity_o *this, int32_t def, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4B02C25 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_22550/*"priorityBG"*/, *(_QWORD *)&def);
    byte_4B02C25 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_22550/*"priorityBG"*/, def, v3);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall StageEntity__GetPriorityBgm(StageEntity_o *this, int32_t def, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  const MethodInfo *v7; // x3
  Il2CppObject *Master_object; // x0
  __int64 v10; // x1

  if ( (byte_4B02C26 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMaster_BgmMaster___, *(_QWORD *)&def);
    sub_1BC3008(&DataManager_TypeInfo, v5);
    sub_1BC3008(&StringLiteral_22551/*"priorityBgm"*/, v6);
    byte_4B02C26 = 1;
  }
  if ( StageEntity__checkScript(this, (System_String_o *)StringLiteral_22551/*"priorityBgm"*/, method) )
    return StageEntity__getScript(this, (System_String_o *)StringLiteral_22551/*"priorityBgm"*/, def, v7);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_BgmMaster___);
  if ( !Master_object )
    sub_1BC3264(0LL, v10);
  return BgmMaster__GetBgmPriority((BgmMaster_o *)Master_object, this->fields.bgmId, def, 0LL);
}


int32_t __fastcall StageEntity__GetProhibitBgmChangeInTreasureDeviceAnim(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B02C2C & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_22572/*"prohibitBgmChangeInTreasureDeviceAnim"*/, method);
    byte_4B02C2C = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_22572/*"prohibitBgmChangeInTreasureDeviceAnim"*/, 0, v2);
}


Il2CppObject *__fastcall StageEntity__GetScriptObject(
        StageEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B02C14 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, key);
    byte_4B02C14 = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( !script )
    sub_1BC3264(0LL, key);
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)script,
         (Il2CppObject *)key,
         &value,
         (const MethodInfo_336E7F4 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    return value;
  }
  else
  {
    return 0LL;
  }
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall StageEntity__GetShadowImageId(StageEntity_o *this, bool isEnemy, const MethodInfo *method)
{
  __int64 v5; // x1
  System_String_o **v6; // x8

  if ( (byte_4B02C32 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_10590/*"PlayerShadowImageId"*/, isEnemy);
    sub_1BC3008(&StringLiteral_5992/*"EnemyShadowImageId"*/, v5);
    byte_4B02C32 = 1;
  }
  if ( isEnemy )
    v6 = (System_String_o **)&StringLiteral_5992/*"EnemyShadowImageId"*/;
  else
    v6 = (System_String_o **)&StringLiteral_10590/*"PlayerShadowImageId"*/;
  return EntityScriptUtil__GetIntValue(this->fields.script, *v6, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall StageEntity__GetSpecialShadowEffectId(StageEntity_o *this, bool isEnemy, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_Dictionary_string__object__o *script; // x19
  __int64 *v8; // x8
  System_String_o *v9; // x20
  int32_t IntValue; // w2

  if ( (byte_4B02C31 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_12841/*"SpecialShadowEffectId"*/, isEnemy);
    sub_1BC3008(&StringLiteral_10591/*"PlayerSpecialShadowEffectId"*/, v5);
    sub_1BC3008(&StringLiteral_5993/*"EnemySpecialShadowEffectId"*/, v6);
    byte_4B02C31 = 1;
  }
  script = this->fields.script;
  if ( isEnemy )
    v8 = &StringLiteral_5993/*"EnemySpecialShadowEffectId"*/;
  else
    v8 = &StringLiteral_10591/*"PlayerSpecialShadowEffectId"*/;
  v9 = (System_String_o *)*v8;
  IntValue = EntityScriptUtil__GetIntValue(script, (System_String_o *)StringLiteral_12841/*"SpecialShadowEffectId"*/, 0, 0LL);
  return EntityScriptUtil__GetIntValue(script, v9, IntValue, 0LL);
}


int32_t __fastcall StageEntity__GetStartBgmOffFlag(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B02C0E & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_23425/*"startBgmOff"*/, method);
    byte_4B02C0E = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_23425/*"startBgmOff"*/, 0, v2);
}


SubBgmPlayArgs_array *__fastcall StageEntity__GetSubBgmPlayArgsArray(StageEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  StageEntity___c_c *v7; // x0
  System_Func_object__object__o *_9__56_0; // x20
  Il2CppObject *v9; // x21
  struct StageEntity___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  if ( (byte_4B02C1C & 1) == 0 )
  {
    sub_1BC3008(&Method_EntityScriptUtil_GetScriptValue_List_object___SubBgmPlayArgs_____, method);
    sub_1BC3008(&System_Func_List_object___SubBgmPlayArgs____TypeInfo, v3);
    sub_1BC3008(&Method_StageEntity___c__GetSubBgmPlayArgsArray_b__56_0__, v4);
    sub_1BC3008(&StageEntity___c_TypeInfo, v5);
    sub_1BC3008(&StringLiteral_23529/*"subBgms"*/, v6);
    byte_4B02C1C = 1;
  }
  v7 = StageEntity___c_TypeInfo;
  if ( !StageEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(StageEntity___c_TypeInfo);
    v7 = StageEntity___c_TypeInfo;
  }
  _9__56_0 = (System_Func_object__object__o *)v7->static_fields->__9__56_0;
  if ( !_9__56_0 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = StageEntity___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v7->static_fields->__9;
    _9__56_0 = (System_Func_object__object__o *)sub_1BC3254(System_Func_List_object___SubBgmPlayArgs____TypeInfo);
    System_Func_object__object____ctor(_9__56_0, v9, Method_StageEntity___c__GetSubBgmPlayArgsArray_b__56_0__, 0LL);
    static_fields = StageEntity___c_TypeInfo->static_fields;
    static_fields->__9__56_0 = (struct System_Func_List_object___SubBgmPlayArgs____o *)_9__56_0;
    sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->__9__56_0, (int32_t)_9__56_0, v11, v12);
  }
  return (SubBgmPlayArgs_array *)EntityScriptUtil__GetScriptValue_object__object_(
                                   this->fields.script,
                                   (System_String_o *)StringLiteral_23529/*"subBgms"*/,
                                   (System_Func_TSource__TDestination__o *)_9__56_0,
                                   0LL,
                                   (const MethodInfo_30085FC *)Method_EntityScriptUtil_GetScriptValue_List_object___SubBgmPlayArgs_____);
}


int32_t __fastcall StageEntity__GetSubBgmsPriority(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B02C1D & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_23530/*"subBgmsPriority"*/, method);
    byte_4B02C1D = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_23530/*"subBgmsPriority"*/, 0, v2);
}


System_Int32_array *__fastcall StageEntity__GetWaveFieldMotionIds(
        StageEntity_o *this,
        System_Int32_array *defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4B02C29 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_19240/*"fieldMotionIds"*/, defVal);
    byte_4B02C29 = 1;
  }
  return StageEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_19240/*"fieldMotionIds"*/, defVal, v3);
}


bool __fastcall StageEntity__HasChangeBgKey(StageEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1

  if ( (byte_4B02C01 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_17645/*"changeBgId"*/, method);
    sub_1BC3008(&StringLiteral_17646/*"changeBgType"*/, v3);
    byte_4B02C01 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_17645/*"changeBgId"*/, 0LL)
      || EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_17646/*"changeBgType"*/, 0LL);
}


bool __fastcall StageEntity__HasExtraBattleUserInterfaceData(
        StageEntity_o *this,
        ExtraBattleUserInterfaceData_JsonConvertData_array **dataArray,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  long double inited; // q0
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  _QWORD *v12; // x21
  __int64 v13; // x8
  __int64 v14; // x0
  __int64 v15; // x0
  ExtraBattleUserInterfaceData_JsonConvertData_array **v16; // x8
  ExtraBattleUserInterfaceData_JsonConvertData_array *v17; // x1
  __int64 v18; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  Il2CppObject *v20; // x20
  ExtraBattleUserInterfaceData_JsonConvertData_array *v21; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B02C34 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Array_Empty_ExtraBattleUserInterfaceData_JsonConvertData___, dataArray);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v7);
    sub_1BC3008(&Method_System_Linq_Enumerable_Any_ExtraBattleUserInterfaceData_JsonConvertData___, v8);
    sub_1BC3008(&Method_JsonManager_Deserialize_ExtraBattleUserInterfaceData_JsonConvertData_____, v9);
    sub_1BC3008(&JsonManager_TypeInfo, v10);
    sub_1BC3008(&StringLiteral_19130/*"exBattleUI"*/, v11);
    byte_4B02C34 = 1;
  }
  v12 = Method_System_Array_Empty_ExtraBattleUserInterfaceData_JsonConvertData___;
  value = 0LL;
  v13 = *((_QWORD *)Method_System_Array_Empty_ExtraBattleUserInterfaceData_JsonConvertData___ + 7);
  if ( !v13 )
  {
    sub_1C134C8(Method_System_Array_Empty_ExtraBattleUserInterfaceData_JsonConvertData___);
    v13 = v12[7];
  }
  v14 = *(_QWORD *)(v13 + 16);
  if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
    v14 = sub_1C1346C(inited);
  if ( !*(_DWORD *)(v14 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v14);
  v15 = *(_QWORD *)(v12[7] + 16LL);
  if ( (*(_BYTE *)(v15 + 309) & 1) == 0 )
    v15 = sub_1C1346C(inited);
  v16 = *(ExtraBattleUserInterfaceData_JsonConvertData_array ***)(v15 + 184);
  v17 = *v16;
  *dataArray = *v16;
  sub_1BC2FAC((CGThumbnailListItem_o *)dataArray, (int32_t)v17, (int32_t)method, v3);
  script = this->fields.script;
  if ( !script )
    sub_1BC3264(0LL, v18);
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)script,
         (Il2CppObject *)StringLiteral_19130/*"exBattleUI"*/,
         &value,
         (const MethodInfo_336E7F4 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    v20 = value;
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v21 = (ExtraBattleUserInterfaceData_JsonConvertData_array *)JsonManager__Deserialize_object_(
                                                                  v20,
                                                                  (const MethodInfo_306D7CC *)Method_JsonManager_Deserialize_ExtraBattleUserInterfaceData_JsonConvertData_____);
    *dataArray = v21;
    sub_1BC2FAC((CGThumbnailListItem_o *)dataArray, (int32_t)v21, v22, v23);
  }
  return System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)*dataArray,
           (const MethodInfo_300D9DC *)Method_System_Linq_Enumerable_Any_ExtraBattleUserInterfaceData_JsonConvertData___);
}


bool __fastcall StageEntity__Is3_6BossBattle(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B02C19 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_1370/*"3.6BossBattle"*/, method);
    byte_4B02C19 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_1370/*"3.6BossBattle"*/, 0, v2) > 0;
}


bool __fastcall StageEntity__IsClearFieldBuffWhenWaveStart(StageEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B02C33 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_17840/*"clearFieldBuffWhenWaveStart"*/, method);
    byte_4B02C33 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_17840/*"clearFieldBuffWhenWaveStart"*/, 0, 0LL) != 0;
}


bool __fastcall StageEntity__IsDisableFieldMotion(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B02C12 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_18465/*"disableUniqueFieldMotion"*/, method);
    byte_4B02C12 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_18465/*"disableUniqueFieldMotion"*/, 0, v2) > 0;
}


bool __fastcall StageEntity__IsForceSetNormalEnemyStatusUI(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4B02C1E & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_6759/*"ForceSetNormalEnemyStatusUI"*/, method);
    byte_4B02C1E = 1;
  }
  return StageEntity__checkScript(this, (System_String_o *)StringLiteral_6759/*"ForceSetNormalEnemyStatusUI"*/, v2);
}


bool __fastcall StageEntity__IsReleaseUnusedAssetsWhenEntryMember(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4B02C1B & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_22799/*"releaseUnusedAssetsWhenEntryMember"*/, method);
    byte_4B02C1B = 1;
  }
  return StageEntity__checkScript(this, (System_String_o *)StringLiteral_22799/*"releaseUnusedAssetsWhenEntryMember"*/, v2);
}


bool __fastcall StageEntity__IsShowEnemyMasterIconOnWaveStart(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4B02C2D & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_23254/*"showEnemyMasterIconOnWaveStart"*/, method);
    byte_4B02C2D = 1;
  }
  return StageEntity__checkScript(this, (System_String_o *)StringLiteral_23254/*"showEnemyMasterIconOnWaveStart"*/, v2);
}


bool __fastcall StageEntity__IsSkipWaveStartFadeInSe(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4B02C28 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_23301/*"skipWaveStartFadeInSe"*/, method);
    byte_4B02C28 = 1;
  }
  return StageEntity__checkScript(this, (System_String_o *)StringLiteral_23301/*"skipWaveStartFadeInSe"*/, v2);
}


bool __fastcall StageEntity__IsSpecifiedBattleStartVoice(StageEntity_o *this, const MethodInfo *method)
{
  int32_t BattleStartVoiceServantId; // w20
  const MethodInfo *v4; // x1

  BattleStartVoiceServantId = StageEntity__GetBattleStartVoiceServantId(this, method);
  return (BattleStartVoiceServantId > 0) & (StageEntity__GetBattleStartVoiceServantLimit(this, v4) >= 0);
}


bool __fastcall StageEntity__IsSpecifiedBattleStartVoice_41918232(
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


// local variable allocation has failed, the output may be wrong!
bool __fastcall StageEntity__TryGetOverwritePlayerSequenceSelectTypeByGender(
        StageEntity_o *this,
        int32_t servantId,
        int32_t *genderSelectType,
        int32_t *patternId,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x23
  Il2CppObject *Master_object; // x0
  __int64 monitor_high; // x1
  Il2CppObject *Value_object__object; // x0
  Il2CppObject *v27; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x21
  System_Func_object__bool__o *v29; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x0
  StageEntity___c_c *v31; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x21
  System_Func_object__int__o *_9__76_1; // x22
  Il2CppObject *v34; // x23
  struct StageEntity___c_StaticFields *static_fields; // x0
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v38; // x0
  System_Object_array *v39; // x21
  __int64 v40; // x2
  int max_length; // w8
  CommonReleaseMaster_o *v42; // x22
  unsigned int v43; // w23
  Il2CppObject *v44; // x24

  if ( (byte_4B02C30 & 1) == 0 )
  {
    sub_1BC3008(&Method_BasicHelper_GetValue_string__object___, *(_QWORD *)&servantId);
    sub_1BC3008(&Method_DataManager_GetMaster_CommonReleaseMaster___, v9);
    sub_1BC3008(&DataManager_TypeInfo, v10);
    sub_1BC3008(&Method_System_Linq_Enumerable_OrderByDescending_BattleTreasureDeviceSequenceSelectType__int___, v11);
    sub_1BC3008(&Method_System_Linq_Enumerable_ToArray_BattleTreasureDeviceSequenceSelectType___, v12);
    sub_1BC3008(&Method_System_Linq_Enumerable_Where_BattleTreasureDeviceSequenceSelectType___, v13);
    sub_1BC3008(&System_Func_BattleTreasureDeviceSequenceSelectType__bool__TypeInfo, v14);
    sub_1BC3008(&System_Func_BattleTreasureDeviceSequenceSelectType__int__TypeInfo, v15);
    sub_1BC3008(&Method_JsonManager_DeserializeArray_BattleTreasureDeviceSequenceSelectType___, v16);
    sub_1BC3008(&JsonManager_TypeInfo, v17);
    sub_1BC3008(&Method_StageEntity___c__TryGetOverwritePlayerSequenceSelectTypeByGender_b__76_1__, v18);
    sub_1BC3008(&Method_StageEntity___c__DisplayClass76_0__TryGetOverwritePlayerSequenceSelectTypeByGender_b__0__, v19);
    sub_1BC3008(&StageEntity___c__DisplayClass76_0_TypeInfo, v20);
    sub_1BC3008(&StageEntity___c_TypeInfo, v21);
    sub_1BC3008(&StringLiteral_22346/*"overwritePlayerSequenceSelectTypeByGender"*/, v22);
    byte_4B02C30 = 1;
  }
  v23 = sub_1BC3254(StageEntity___c__DisplayClass76_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v23, 0LL);
  if ( !v23 )
    goto LABEL_28;
  *(_DWORD *)(v23 + 16) = servantId;
  *genderSelectType = -1;
  *patternId = -1;
  Value_object__object = BasicHelper__GetValue_object__object_(
                           (System_Collections_Generic_Dictionary_K__V__o *)this->fields.script,
                           (Il2CppObject *)StringLiteral_22346/*"overwritePlayerSequenceSelectTypeByGender"*/,
                           0LL,
                           (const MethodInfo_2FF005C *)Method_BasicHelper_GetValue_string__object___);
  if ( !Value_object__object )
    return (char)Value_object__object;
  v27 = Value_object__object;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v28 = (System_Collections_Generic_IEnumerable_TSource__o *)JsonManager__DeserializeArray_object_(
                                                               v27,
                                                               (const MethodInfo_306D91C *)Method_JsonManager_DeserializeArray_BattleTreasureDeviceSequenceSelectType___);
  v29 = (System_Func_object__bool__o *)sub_1BC3254(System_Func_BattleTreasureDeviceSequenceSelectType__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v29,
    (Il2CppObject *)v23,
    Method_StageEntity___c__DisplayClass76_0__TryGetOverwritePlayerSequenceSelectTypeByGender_b__0__,
    0LL);
  v30 = System_Linq_Enumerable__Where_object_(
          v28,
          (System_Func_TSource__bool__o *)v29,
          (const MethodInfo_3044F10 *)Method_System_Linq_Enumerable_Where_BattleTreasureDeviceSequenceSelectType___);
  v31 = StageEntity___c_TypeInfo;
  v32 = v30;
  if ( !StageEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(StageEntity___c_TypeInfo);
    v31 = StageEntity___c_TypeInfo;
  }
  _9__76_1 = (System_Func_object__int__o *)v31->static_fields->__9__76_1;
  if ( !_9__76_1 )
  {
    if ( !v31->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v31);
      v31 = StageEntity___c_TypeInfo;
    }
    v34 = (Il2CppObject *)v31->static_fields->__9;
    _9__76_1 = (System_Func_object__int__o *)sub_1BC3254(System_Func_BattleTreasureDeviceSequenceSelectType__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__76_1,
      v34,
      Method_StageEntity___c__TryGetOverwritePlayerSequenceSelectTypeByGender_b__76_1__,
      0LL);
    static_fields = StageEntity___c_TypeInfo->static_fields;
    static_fields->__9__76_1 = (struct System_Func_BattleTreasureDeviceSequenceSelectType__int__o *)_9__76_1;
    sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->__9__76_1, (int32_t)_9__76_1, v36, v37);
  }
  v38 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                               v32,
                                                               (System_Func_TSource__TKey__o *)_9__76_1,
                                                               (const MethodInfo_302DA1C *)Method_System_Linq_Enumerable_OrderByDescending_BattleTreasureDeviceSequenceSelectType__int___);
  v39 = System_Linq_Enumerable__ToArray_object_(
          v38,
          (const MethodInfo_303E54C *)Method_System_Linq_Enumerable_ToArray_BattleTreasureDeviceSequenceSelectType___);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v39, 0LL) )
    goto LABEL_25;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !v39 )
LABEL_28:
    sub_1BC3264(Master_object, monitor_high);
  max_length = v39->max_length;
  if ( max_length < 1 )
  {
LABEL_25:
    LOBYTE(Value_object__object) = 0;
    return (char)Value_object__object;
  }
  v42 = (CommonReleaseMaster_o *)Master_object;
  v43 = 0;
  while ( 1 )
  {
    if ( v43 >= max_length )
      sub_1BC326C(Master_object, monitor_high, v40);
    v44 = v39->m_Items[v43];
    if ( !v44 )
      goto LABEL_28;
    monitor_high = HIDWORD(v44[1].monitor);
    if ( (int)monitor_high < 1 )
      break;
    if ( !v42 )
      goto LABEL_28;
    Master_object = (Il2CppObject *)CommonReleaseMaster__IsOpen(v42, monitor_high, 0LL, 0, 0LL);
    if ( ((unsigned __int8)Master_object & 1) != 0 )
      break;
    max_length = v39->max_length;
    if ( (int)++v43 >= max_length )
      goto LABEL_25;
  }
  LOBYTE(Value_object__object) = 1;
  *genderSelectType = HIDWORD(v44[1].klass);
  *patternId = (int32_t)v44[1].monitor;
  return (char)Value_object__object;
}


bool __fastcall StageEntity__checkCustomFOV(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4B02BFE & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_19440/*"fov"*/, method);
    byte_4B02BFE = 1;
  }
  return StageEntity__checkScript(this, (System_String_o *)StringLiteral_19440/*"fov"*/, v2);
}


bool __fastcall StageEntity__checkScript(StageEntity_o *this, System_String_o *key, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_4B02BF9 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    byte_4B02BF9 = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                       (System_Collections_Generic_Dictionary_object__object__o *)script,
                       (Il2CppObject *)key,
                       (const MethodInfo_336D1DC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)script;
}


bool __fastcall StageEntity__disableSystemFadeStartBattle(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B02C08 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_18463/*"disableSystemFadeStartBattle"*/, method);
    byte_4B02C08 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_18463/*"disableSystemFadeStartBattle"*/, 0, v2) > 0;
}


int32_t __fastcall StageEntity__getBattleMasterImageId(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B02C1A & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_16929/*"battleMasterImageId"*/, method);
    byte_4B02C1A = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_16929/*"battleMasterImageId"*/, 0, v2);
}


int32_t __fastcall StageEntity__getChangeBgId(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B02C02 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_17645/*"changeBgId"*/, method);
    byte_4B02C02 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_17645/*"changeBgId"*/, 0, v2);
}


int32_t __fastcall StageEntity__getChangeBgType(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B02C03 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_17646/*"changeBgType"*/, method);
    byte_4B02C03 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_17646/*"changeBgType"*/, 0, v2);
}


float __fastcall StageEntity__getCustomFOV(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4B02BFD & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_19440/*"fov"*/, method);
    byte_4B02BFD = 1;
  }
  return StageEntity__getScriptFloat(this, (System_String_o *)StringLiteral_19440/*"fov"*/, 0.0, v2);
}


int32_t __fastcall StageEntity__getEnemyActCount(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1
  int32_t result; // w0
  StageEntity_c *v6; // x0

  if ( (byte_4B02C06 & 1) == 0 )
  {
    sub_1BC3008(&StageEntity_TypeInfo, method);
    sub_1BC3008(&StringLiteral_5988/*"EnemyActCount"*/, v4);
    byte_4B02C06 = 1;
  }
  result = StageEntity__getScript(this, (System_String_o *)StringLiteral_5988/*"EnemyActCount"*/, 0, v2);
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
  __int64 v10; // x2

  if ( (byte_4B02C00 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_18849/*"enemyMasterBattleId"*/, method);
    sub_1BC3008(&StringLiteral_18850/*"enemyMasterBattleIdByPlayerGender"*/, v4);
    byte_4B02C00 = 1;
  }
  ScriptIntArrayParam = StageEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_18850/*"enemyMasterBattleIdByPlayerGender"*/, 0LL, v2);
  if ( !ScriptIntArrayParam )
    return StageEntity__getScript(this, (System_String_o *)StringLiteral_18849/*"enemyMasterBattleId"*/, 0, v6);
  v7 = ScriptIntArrayParam;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_13;
  if ( SelfUserGame->fields.genderType == 1 )
  {
    if ( v7->max_length )
      return v7->m_Items[1];
LABEL_14:
    sub_1BC326C(SelfUserGame, v9, v10);
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
LABEL_13:
    sub_1BC3264(SelfUserGame, v9);
  if ( SelfUserGame->fields.genderType != 2 )
    return StageEntity__getScript(this, (System_String_o *)StringLiteral_18849/*"enemyMasterBattleId"*/, 0, v6);
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
  const MethodInfo *v12; // x1

  if ( (byte_4B02C04 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, method);
    sub_1BC3008(&Method_System_Collections_Generic_List_object__ToArray__, v4);
    sub_1BC3008(&System_Collections_Generic_List_object__TypeInfo, v5);
    sub_1BC3008(&StringLiteral_16572/*"aiFieldIds"*/, v6);
    byte_4B02C04 = 1;
  }
  if ( !StageEntity__checkScript(this, (System_String_o *)StringLiteral_16572/*"aiFieldIds"*/, v2) )
    return 0LL;
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script
    || (script = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                              script,
                                                                              (Il2CppObject *)StringLiteral_16572/*"aiFieldIds"*/,
                                                                              (const MethodInfo_336CF68 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_1BC3264(script, v7);
  }
  methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(script->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
    && (System_Collections_Generic_List_object__c *)script->klass->_2.typeHierarchy[methodPtr_low - 1] == System_Collections_Generic_List_object__TypeInfo )
  {
    return System_Collections_Generic_List_object___ToArray(
             (System_Collections_Generic_List_object__o *)script,
             (const MethodInfo_36A2998 *)Method_System_Collections_Generic_List_object__ToArray__);
  }
  sub_1BC3524(script);
  return (System_Object_array *)StageEntity__getNoEntryIds(v11, v12);
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
  System_Converter_object__int__o *_9__31_0; // x20
  __int64 methodPtr_low; // x10
  Il2CppObject *v20; // x21
  struct StageEntity___c_StaticFields *static_fields; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  StageEntity_o *v25; // x0
  const MethodInfo *v26; // x1

  if ( (byte_4B02C05 & 1) == 0 )
  {
    sub_1BC3008(&System_Converter_object__int__TypeInfo, method);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v3);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v4);
    sub_1BC3008(&int___TypeInfo, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_object__ConvertAll_int___, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_int__ToArray__, v7);
    sub_1BC3008(&System_Collections_Generic_List_object__TypeInfo, v8);
    sub_1BC3008(&Method_StageEntity___c__getNoEntryIds_b__31_0__, v9);
    sub_1BC3008(&StageEntity___c_TypeInfo, v10);
    sub_1BC3008(&StringLiteral_9422/*"NoEntryIds"*/, v11);
    byte_4B02C05 = 1;
  }
  script = this->fields.script;
  if ( !script )
    return (System_Int32_array *)sub_1BC30B0(int___TypeInfo, 0LL);
  v13 = (Il2CppObject *)StringLiteral_9422/*"NoEntryIds"*/;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)StringLiteral_9422/*"NoEntryIds"*/,
          (const MethodInfo_336D1DC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return (System_Int32_array *)sub_1BC30B0(int___TypeInfo, 0LL);
  Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !Item )
    goto LABEL_19;
  Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                      Item,
                                                                      v13,
                                                                      (const MethodInfo_336CF68 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v16 = (System_Collections_Generic_List_object__o *)Item;
  v17 = StageEntity___c_TypeInfo;
  if ( !StageEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(StageEntity___c_TypeInfo);
    v17 = StageEntity___c_TypeInfo;
  }
  _9__31_0 = v17->static_fields->__9__31_0;
  if ( !v16
    || (v14 = System_Collections_Generic_List_object__TypeInfo,
        methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(v16->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low)
    && (System_Collections_Generic_List_object__c *)v16->klass->_2.typeHierarchy[methodPtr_low - 1] == System_Collections_Generic_List_object__TypeInfo )
  {
    if ( !_9__31_0 )
    {
      if ( !v17->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v17);
        v17 = StageEntity___c_TypeInfo;
      }
      v20 = (Il2CppObject *)v17->static_fields->__9;
      _9__31_0 = (System_Converter_object__int__o *)sub_1BC3254(System_Converter_object__int__TypeInfo);
      System_Converter_object__int____ctor(_9__31_0, v20, Method_StageEntity___c__getNoEntryIds_b__31_0__, 0LL);
      static_fields = StageEntity___c_TypeInfo->static_fields;
      static_fields->__9__31_0 = _9__31_0;
      sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->__9__31_0, (int32_t)_9__31_0, v22, v23);
    }
    if ( v16 )
    {
      Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_List_object___ConvertAll_int_(
                                                                          v16,
                                                                          (System_Converter_T__TOutput__o *)_9__31_0,
                                                                          (const MethodInfo_2F31480 *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
      if ( Item )
        return System_Collections_Generic_List_int___ToArray(
                 (System_Collections_Generic_List_int__o *)Item,
                 (const MethodInfo_36858D4 *)Method_System_Collections_Generic_List_int__ToArray__);
    }
LABEL_19:
    sub_1BC3264(Item, v14);
  }
  sub_1BC3524(v16);
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
  if ( (byte_4B02BFA & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, key);
    sub_1BC3008(&long_TypeInfo, v7);
    byte_4B02BFA = 1;
  }
  if ( !StageEntity__checkScript(this, key, *(const MethodInfo **)&defVal) )
    return v4;
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script
    || (script = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                              script,
                                                                              (Il2CppObject *)key,
                                                                              (const MethodInfo_336CF68 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_1BC3264(script, v8);
  }
  if ( script->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(script, long_TypeInfo, v10, v11);
  v16 = sub_1BC3524(script);
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

  if ( (byte_4B02BFB & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, key);
    sub_1BC3008(&double_TypeInfo, v7);
    byte_4B02BFB = 1;
  }
  if ( !StageEntity__checkScript(this, key, method) )
    return defVal;
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script
    || (script = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                              script,
                                                                              (Il2CppObject *)key,
                                                                              (const MethodInfo_336CF68 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_1BC3264(script, v8);
  }
  if ( script->klass->_1.element_class == double_TypeInfo->_1.element_class )
    return *(double *)j_il2cpp_object_unbox_0(script, double_TypeInfo, v10, v11);
  sub_1BC3524(script);
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
  const MethodInfo *v22; // x3
  System_Int32_array *result; // x0
  StageEntity_o *v24; // x0
  const MethodInfo *v25; // x1

  if ( (byte_4B02BFC & 1) == 0 )
  {
    sub_1BC3008(&System_Converter_object__int__TypeInfo, key);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_object__ConvertAll_int___, v8);
    sub_1BC3008(&Method_System_Collections_Generic_List_int__ToArray__, v9);
    sub_1BC3008(&System_Collections_Generic_List_object__TypeInfo, v10);
    sub_1BC3008(&Method_StageEntity___c__getScriptIntArrayParam_b__22_0__, v11);
    sub_1BC3008(&StageEntity___c_TypeInfo, v12);
    byte_4B02BFC = 1;
  }
  if ( !StageEntity__checkScript(this, key, (const MethodInfo *)defVal) )
    return defVal;
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script )
    goto LABEL_18;
  script = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                        script,
                                                                        (Il2CppObject *)key,
                                                                        (const MethodInfo_336CF68 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
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
      _9__22_0 = (System_Converter_object__int__o *)sub_1BC3254(System_Converter_object__int__TypeInfo);
      System_Converter_object__int____ctor(_9__22_0, v19, Method_StageEntity___c__getScriptIntArrayParam_b__22_0__, 0LL);
      static_fields = StageEntity___c_TypeInfo->static_fields;
      static_fields->__9__22_0 = _9__22_0;
      sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->__9__22_0, (int32_t)_9__22_0, v21, v22);
    }
    if ( v15 )
    {
      script = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_List_object___ConvertAll_int_(
                                                                            v15,
                                                                            (System_Converter_T__TOutput__o *)_9__22_0,
                                                                            (const MethodInfo_2F31480 *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
      if ( script )
        return System_Collections_Generic_List_int___ToArray(
                 (System_Collections_Generic_List_int__o *)script,
                 (const MethodInfo_36858D4 *)Method_System_Collections_Generic_List_int__ToArray__);
    }
LABEL_18:
    sub_1BC3264(script, v13);
  }
  sub_1BC3524(v15);
  StageEntity__getCustomFOV(v24, v25);
  return result;
}


int32_t __fastcall StageEntity__getShowTurnState(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B02BFF & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_23257/*"showTurn"*/, method);
    byte_4B02BFF = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_23257/*"showTurn"*/, 2, v2);
}


int32_t __fastcall StageEntity__getStartBattleAssetId(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B02C07 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_23423/*"startBattleAssetId"*/, method);
    byte_4B02C07 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_23423/*"startBattleAssetId"*/, 0, v2);
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
  const MethodInfo *v4; // x3

  if ( (byte_4B02C36 & 1) == 0 )
  {
    sub_1BC3008(&StageEntity___c_TypeInfo, v1);
    byte_4B02C36 = 1;
  }
  v2 = (Il2CppObject *)sub_1BC3254(StageEntity___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  StageEntity___c_TypeInfo->static_fields->__9 = (struct StageEntity___c_o *)v2;
  sub_1BC2FAC((CGThumbnailListItem_o *)StageEntity___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall StageEntity___c___ctor(StageEntity___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


AiAllocationInfo_o *__fastcall StageEntity___c___GetAiAllocationInfoList_b__63_0(
        StageEntity___c_o *this,
        Il2CppObject *obj,
        const MethodInfo *method)
{
  AiAllocationInfo_o *v4; // x20

  if ( (byte_4B02C39 & 1) == 0 )
  {
    sub_1BC3008(&AiAllocationInfo_TypeInfo, obj);
    byte_4B02C39 = 1;
  }
  v4 = (AiAllocationInfo_o *)sub_1BC3254(AiAllocationInfo_TypeInfo);
  AiAllocationInfo___ctor(v4, obj, 0LL);
  return v4;
}


System_String_o *__fastcall StageEntity___c___GetBattleStartVoiceIdArray_b__49_0(
        StageEntity___c_o *this,
        Il2CppObject *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BC3264(this, 0LL);
  return (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))x->klass->vtable[3].method)(
                              x,
                              x->klass->vtable[4].methodPtr);
}


SubBgmPlayArgs_array *__fastcall StageEntity___c___GetSubBgmPlayArgsArray_b__56_0(
        StageEntity___c_o *this,
        System_Collections_Generic_List_object__o *f,
        const MethodInfo *method)
{
  return SubBgmPlayArgs__ConvertFromEntityScript(f, 0LL);
}


int32_t __fastcall StageEntity___c___TryGetOverwritePlayerSequenceSelectTypeByGender_b__76_1(
        StageEntity___c_o *this,
        BattleTreasureDeviceSequenceSelectType_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BC3264(this, 0LL);
  return x->fields.priority;
}


int32_t __fastcall StageEntity___c___getNoEntryIds_b__31_0(
        StageEntity___c_o *this,
        Il2CppObject *x,
        const MethodInfo *method)
{
  System_String_o *v4; // x0

  if ( (byte_4B02C38 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_1/*""*/, x);
    byte_4B02C38 = 1;
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

  if ( (byte_4B02C37 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_1/*""*/, x);
    byte_4B02C37 = 1;
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


void __fastcall StageEntity___c__DisplayClass76_0___ctor(
        StageEntity___c__DisplayClass76_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall StageEntity___c__DisplayClass76_0___TryGetOverwritePlayerSequenceSelectTypeByGender_b__0(
        StageEntity___c__DisplayClass76_0_o *this,
        BattleTreasureDeviceSequenceSelectType_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BC3264(this, 0LL);
  return x->fields.svtId == this->fields.servantId;
}