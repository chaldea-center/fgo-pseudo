void __fastcall StageEntity___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4B45687 & 1) == 0 )
  {
    sub_1BDB878(&StageEntity_TypeInfo, v1);
    byte_4B45687 = 1;
  }
  StageEntity_TypeInfo->static_fields->DEFAULT_ENEMY_ACTION_COUNT = 3;
}


void __fastcall StageEntity___ctor(StageEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B45643 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataEntityBase_string___ctor__, method);
    byte_4B45643 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_32DF9D0 *)Method_DataEntityBase_string___ctor__);
}


void __fastcall StageEntity___ctor_41875860(StageEntity_o *this, StageEntity_o *cSrc, const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct System_String_o *name; // x1
  struct System_String_o **p_name; // x20

  if ( (byte_4B45644 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataEntityBase_string___ctor__, cSrc);
    byte_4B45644 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_32DF9D0 *)Method_DataEntityBase_string___ctor__);
  if ( !cSrc )
    sub_1BDBAD4(v5, v6);
  *(_QWORD *)&this->fields.questId = *(_QWORD *)&cSrc->fields.questId;
  name = cSrc->fields.name;
  this->fields.name = name;
  p_name = &this->fields.name;
  sub_1BDB81C((CGThumbnailListItem_o *)p_name, (int32_t)name, v7, v8);
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
  if ( (byte_4B45642 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&questPhase);
    byte_4B45642 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           questId,
           questPhase,
           wave,
           (const MethodInfo_3031F74 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall StageEntity__CreatePrimaryKey(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t questPhase; // w20
  int32_t questId; // w21
  int32_t wave; // w19

  if ( (byte_4B45641 & 1) == 0 )
  {
    sub_1BDB878(&StageEntity_TypeInfo, method);
    byte_4B45641 = 1;
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

  if ( (byte_4B4567C & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_16667/*"addUniqueCameraIds"*/, defVal);
    byte_4B4567C = 1;
  }
  return StageEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_16667/*"addUniqueCameraIds"*/, defVal, v3);
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

  if ( (byte_4B45662 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, method);
    sub_1BDB878(&Method_System_Collections_Generic_List_object__ToArray__, v4);
    sub_1BDB878(&System_Collections_Generic_List_object__TypeInfo, v5);
    sub_1BDB878(&StringLiteral_16705/*"aiActTypeAttackCommandCard"*/, v6);
    byte_4B45662 = 1;
  }
  if ( !StageEntity__checkScript(this, (System_String_o *)StringLiteral_16705/*"aiActTypeAttackCommandCard"*/, v2) )
    return 0LL;
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script
    || (script = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                              script,
                                                                              (Il2CppObject *)StringLiteral_16705/*"aiActTypeAttackCommandCard"*/,
                                                                              (const MethodInfo_33A01B0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL
    || (methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(script->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (System_Collections_Generic_List_object__c *)script->klass->_2.typeHierarchy[methodPtr_low - 1] != System_Collections_Generic_List_object__TypeInfo )
  {
    sub_1BDBAD4(script, v7);
  }
  return System_Collections_Generic_List_object___ToArray(
           (System_Collections_Generic_List_object__o *)script,
           (const MethodInfo_36D791C *)Method_System_Collections_Generic_List_object__ToArray__);
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

  if ( (byte_4B45663 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, enemyServantData);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v5);
    sub_1BDB878(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v6);
    sub_1BDB878(&long_TypeInfo, v7);
    sub_1BDB878(&StringLiteral_22344/*"npcServantId"*/, v8);
    sub_1BDB878(&StringLiteral_17770/*"cardType"*/, v9);
    byte_4B45663 = 1;
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
          sub_1BDBADC(AiActTypeAttackCommandCard, v11, v12);
        v17 = (System_Collections_Generic_Dictionary_object__object__o *)m_Items[v15];
        if ( v17 )
        {
          methodPtr_low = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr);
          if ( LOBYTE(v17->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
            && (System_Collections_Generic_Dictionary_string__object__c *)v17->klass->_2.typeHierarchy[methodPtr_low - 1] == System_Collections_Generic_Dictionary_string__object__TypeInfo )
          {
            AiActTypeAttackCommandCard = (System_Object_array *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                                                  (System_Collections_Generic_Dictionary_object__object__o *)m_Items[v15],
                                                                  (Il2CppObject *)StringLiteral_22344/*"npcServantId"*/,
                                                                  (const MethodInfo_33A0424 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
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
                                                                    (Il2CppObject *)StringLiteral_22344/*"npcServantId"*/,
                                                                    (const MethodInfo_33A01B0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
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
                                                                      (Il2CppObject *)StringLiteral_17770/*"cardType"*/,
                                                                      (const MethodInfo_33A0424 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
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
                                                            (Il2CppObject *)StringLiteral_17770/*"cardType"*/,
                                                            (const MethodInfo_33A01B0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !AiActTypeAttackCommandCard )
LABEL_24:
        sub_1BDBAD4(AiActTypeAttackCommandCard, v11);
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
        sub_1BDBD94(AiActTypeAttackCommandCard);
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
  System_Func_object__object__o *_9__69_0; // x20
  Il2CppObject *v13; // x21
  struct StageEntity___c_StaticFields *static_fields; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0

  if ( (byte_4B45675 & 1) == 0 )
  {
    sub_1BDB878(&Method_BasicHelper_GetValue_List_object____, method);
    sub_1BDB878(&Method_System_Linq_Enumerable_Select_object__AiAllocationInfo___, v3);
    sub_1BDB878(&Method_System_Linq_Enumerable_ToList_AiAllocationInfo___, v4);
    sub_1BDB878(&System_Func_object__AiAllocationInfo__TypeInfo, v5);
    sub_1BDB878(&Method_StageEntity___c__GetAiAllocationInfoList_b__69_0__, v6);
    sub_1BDB878(&StageEntity___c_TypeInfo, v7);
    sub_1BDB878(&StringLiteral_16706/*"aiAllocations"*/, v8);
    byte_4B45675 = 1;
  }
  Value_object = BasicHelper__GetValue_object_(
                   this->fields.script,
                   (System_String_o *)StringLiteral_16706/*"aiAllocations"*/,
                   0LL,
                   (const MethodInfo_30213D0 *)Method_BasicHelper_GetValue_List_object____);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)Value_object, 0LL) )
    return 0LL;
  v11 = StageEntity___c_TypeInfo;
  if ( !StageEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(StageEntity___c_TypeInfo);
    v11 = StageEntity___c_TypeInfo;
  }
  _9__69_0 = (System_Func_object__object__o *)v11->static_fields->__9__69_0;
  if ( !_9__69_0 )
  {
    if ( !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      v11 = StageEntity___c_TypeInfo;
    }
    v13 = (Il2CppObject *)v11->static_fields->__9;
    _9__69_0 = (System_Func_object__object__o *)sub_1BDBAC4(System_Func_object__AiAllocationInfo__TypeInfo);
    System_Func_object__object____ctor(_9__69_0, v13, Method_StageEntity___c__GetAiAllocationInfoList_b__69_0__, 0LL);
    static_fields = StageEntity___c_TypeInfo->static_fields;
    static_fields->__9__69_0 = (struct System_Func_object__AiAllocationInfo__o *)_9__69_0;
    sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->__9__69_0, (int32_t)_9__69_0, v15, v16);
  }
  v17 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)Value_object,
                                                               (System_Func_TSource__TResult__o *)_9__69_0,
                                                               (const MethodInfo_3068484 *)Method_System_Linq_Enumerable_Select_object__AiAllocationInfo___);
  return (System_Collections_Generic_List_AiAllocationInfo__o *)System_Linq_Enumerable__ToList_object_(
                                                                  v17,
                                                                  (const MethodInfo_307503C *)Method_System_Linq_Enumerable_ToList_AiAllocationInfo___);
}


System_Int32_array *__fastcall StageEntity__GetAssumedEffectId(StageEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B45679 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_16929/*"assumedEffectId"*/, method);
    byte_4B45679 = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_16929/*"assumedEffectId"*/, 0LL);
}


System_String_array *__fastcall StageEntity__GetAssumedVoiceAssetNames(StageEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B4567D & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_16930/*"assumedVoiceAssetNames"*/, method);
    byte_4B4567D = 1;
  }
  return EntityScriptUtil__GetStringArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_16930/*"assumedVoiceAssetNames"*/, 0LL);
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
  System_Converter_TInput__TOutput__o *_9__55_0; // x20
  Il2CppObject *v17; // x21
  struct StageEntity___c_StaticFields *static_fields; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  System_Collections_Generic_List_object__o *v21; // x0
  __int64 v22; // x1

  if ( (byte_4B45669 & 1) == 0 )
  {
    sub_1BDB878(&System_Converter_object__string__TypeInfo, method);
    sub_1BDB878(&Method_System_Collections_Generic_List_object__ConvertAll_string___, v4);
    sub_1BDB878(&Method_System_Collections_Generic_List_string__ToArray__, v5);
    sub_1BDB878(&System_Collections_Generic_List_object__TypeInfo, v6);
    sub_1BDB878(&string___TypeInfo, v7);
    sub_1BDB878(&Method_StageEntity___c__GetBattleStartVoiceIdArray_b__55_0__, v8);
    sub_1BDB878(&StageEntity___c_TypeInfo, v9);
    sub_1BDB878(&StringLiteral_17102/*"battleStartVoiceIds"*/, v10);
    byte_4B45669 = 1;
  }
  ScriptObject = StageEntity__GetScriptObject(this, (System_String_o *)StringLiteral_17102/*"battleStartVoiceIds"*/, v2);
  if ( !ScriptObject )
    return (System_String_array *)sub_1BDB920(string___TypeInfo, 0LL);
  v12 = (System_Collections_Generic_List_object__o *)ScriptObject;
  methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(ScriptObject->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
    || (System_Collections_Generic_List_object__c *)ScriptObject->klass->_2.typeHierarchy[methodPtr_low - 1] != System_Collections_Generic_List_object__TypeInfo )
  {
    return (System_String_array *)sub_1BDB920(string___TypeInfo, 0LL);
  }
  v15 = StageEntity___c_TypeInfo;
  if ( !StageEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(StageEntity___c_TypeInfo);
    v15 = StageEntity___c_TypeInfo;
  }
  _9__55_0 = (System_Converter_TInput__TOutput__o *)v15->static_fields->__9__55_0;
  if ( !_9__55_0 )
  {
    if ( !v15->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v15);
      v15 = StageEntity___c_TypeInfo;
    }
    v17 = (Il2CppObject *)v15->static_fields->__9;
    _9__55_0 = (System_Converter_TInput__TOutput__o *)sub_1BDBAC4(System_Converter_object__string__TypeInfo);
    System_Converter_object__object____ctor(
      _9__55_0,
      v17,
      Method_StageEntity___c__GetBattleStartVoiceIdArray_b__55_0__,
      0LL);
    static_fields = StageEntity___c_TypeInfo->static_fields;
    static_fields->__9__55_0 = (struct System_Converter_object__string__o *)_9__55_0;
    sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->__9__55_0, (int32_t)_9__55_0, v19, v20);
  }
  v21 = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___ConvertAll_object_(
                                                       v12,
                                                       (System_Converter_T__TOutput__o *)_9__55_0,
                                                       (const MethodInfo_2F62ED4 *)Method_System_Collections_Generic_List_object__ConvertAll_string___);
  if ( !v21 )
    sub_1BDBAD4(0LL, v22);
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  v21,
                                  (const MethodInfo_36D791C *)Method_System_Collections_Generic_List_string__ToArray__);
}


int32_t __fastcall StageEntity__GetBattleStartVoiceServantId(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B45667 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_17103/*"battleStartVoiceSvtId"*/, method);
    byte_4B45667 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_17103/*"battleStartVoiceSvtId"*/, 0, v2);
}


int32_t __fastcall StageEntity__GetBattleStartVoiceServantLimit(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B45668 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_17104/*"battleStartVoiceSvtLimit"*/, method);
    byte_4B45668 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_17104/*"battleStartVoiceSvtLimit"*/, -1, v2);
}


System_Int32_array *__fastcall StageEntity__GetBossIdAndChangeBgmId(StageEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Int32_array *v4; // x2
  const MethodInfo *v5; // x3

  if ( (byte_4B45661 & 1) == 0 )
  {
    sub_1BDB878(&int___TypeInfo, method);
    sub_1BDB878(&StringLiteral_17367/*"bossIdAndChangeBgmId"*/, v3);
    byte_4B45661 = 1;
  }
  v4 = (System_Int32_array *)sub_1BDB920(int___TypeInfo, 0LL);
  return StageEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_17367/*"bossIdAndChangeBgmId"*/, v4, v5);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall StageEntity__GetCutInSvtIds(StageEntity_o *this, bool isEnemy, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  System_String_o **v7; // x8

  if ( (byte_4B4565E & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_19031/*"enemyCutInSvtIds"*/, isEnemy);
    sub_1BDB878(&StringLiteral_22740/*"playerCutInSvtIds"*/, v6);
    byte_4B4565E = 1;
  }
  if ( isEnemy )
    v7 = (System_String_o **)&StringLiteral_19031/*"enemyCutInSvtIds"*/;
  else
    v7 = (System_String_o **)&StringLiteral_22740/*"playerCutInSvtIds"*/;
  return StageEntity__getScriptIntArrayParam(this, *v7, 0LL, v3);
}


int32_t __fastcall StageEntity__GetEffectBgmId(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B4565F & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_18922/*"effectBgmId"*/, method);
    byte_4B4565F = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_18922/*"effectBgmId"*/, -1, v2);
}


int32_t __fastcall StageEntity__GetEffectSvtId(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B4565D & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_18935/*"effectSvtId"*/, method);
    byte_4B4565D = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_18935/*"effectSvtId"*/, 0, v2);
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

  if ( (byte_4B45671 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Linq_Enumerable_ToArray_int___, *(_QWORD *)&enemyFieldPosCount);
    sub_1BDB878(&Method_System_Collections_Generic_List_int__Add__, v6);
    sub_1BDB878(&Method_System_Collections_Generic_List_int__ToArray__, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_int___ctor__, v8);
    sub_1BDB878(&System_Collections_Generic_List_int__TypeInfo, v9);
    sub_1BDB878(&StringLiteral_19033/*"enemyEntryOrder"*/, v10);
    byte_4B45671 = 1;
  }
  ScriptIntArrayParam = StageEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_19033/*"enemyEntryOrder"*/, 0LL, v3);
  if ( ScriptIntArrayParam )
  {
    v12 = ScriptIntArrayParam;
    v13 = (System_Collections_Generic_List_int__o *)sub_1BDBAC4(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v13,
      (const MethodInfo_36B854C *)Method_System_Collections_Generic_List_int___ctor__);
    v17 = *(_QWORD *)&v12->max_length;
    if ( (int)v17 >= 1 )
    {
      for ( i = 0LL; (__int64)i < (int)v17; ++i )
      {
        if ( i >= (unsigned int)v17 )
          sub_1BDBADC(v14, v15, v16);
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
              *(const MethodInfo_36B8DA0 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
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
      sub_1BDBAD4(v14, v15);
    return System_Collections_Generic_List_int___ToArray(
             v13,
             (const MethodInfo_36BA858 *)Method_System_Collections_Generic_List_int__ToArray__);
  }
  else
  {
    v23 = System_Linq_Enumerable__Range(0, enemyFieldPosCount, 0LL);
    return System_Linq_Enumerable__ToArray_int_(
             (System_Collections_Generic_IEnumerable_TSource__o *)v23,
             (const MethodInfo_3070610 *)Method_System_Linq_Enumerable_ToArray_int___);
  }
}


int32_t __fastcall StageEntity__GetEnemyCountStartValue(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B45676 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_19030/*"enemyCountStartValue"*/, method);
    byte_4B45676 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_19030/*"enemyCountStartValue"*/, 0, v2);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall StageEntity__GetEnemyEntryMaxCountEachTurn(
        StageEntity_o *this,
        int32_t defaultValue,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4B45672 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_19032/*"enemyEntryMaxCountEachTurn"*/, *(_QWORD *)&defaultValue);
    byte_4B45672 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_19032/*"enemyEntryMaxCountEachTurn"*/, defaultValue, v3);
}


int32_t __fastcall StageEntity__GetEnemyFieldPosCount(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B4566A & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_19035/*"enemyFieldPosCount"*/, method);
    byte_4B4566A = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_19035/*"enemyFieldPosCount"*/, 3, v2);
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

  if ( (byte_4B45681 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Array_Empty_float___, method);
    sub_1BDB878(&StringLiteral_19038/*"enemyMasterCommandSpellIconPosition"*/, v4);
    byte_4B45681 = 1;
  }
  v5 = Method_System_Array_Empty_float___;
  script = this->fields.script;
  v7 = *((_QWORD *)Method_System_Array_Empty_float___ + 7);
  if ( !v7 )
  {
    sub_1C2BF64(Method_System_Array_Empty_float___);
    v7 = v5[7];
  }
  v8 = *(_QWORD *)(v7 + 16);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1C2BF08(inited);
  if ( !*(_DWORD *)(v8 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v8);
  v9 = *(_QWORD *)(v5[7] + 16LL);
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1C2BF08(inited);
  return EntityScriptUtil__GetFloatArray(
           script,
           (System_String_o *)StringLiteral_19038/*"enemyMasterCommandSpellIconPosition"*/,
           **(System_Single_array ***)(v9 + 184),
           0LL);
}


System_Int32_array *__fastcall StageEntity__GetEnemyMasterCommandSpellIconSize(
        StageEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B45680 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_19039/*"enemyMasterCommandSpellIconSize"*/, method);
    byte_4B45680 = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_19039/*"enemyMasterCommandSpellIconSize"*/, 0LL);
}


int32_t __fastcall StageEntity__GetFadeType(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B4565C & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_17100/*"battleStartFadeType"*/, method);
    byte_4B4565C = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_17100/*"battleStartFadeType"*/, 0, v2);
}


System_Int32_array *__fastcall StageEntity__GetFieldCallServantId(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1
  System_Int32_array *result; // x0

  if ( (byte_4B45665 & 1) == 0 )
  {
    sub_1BDB878(&int___TypeInfo, method);
    sub_1BDB878(&StringLiteral_17705/*"call"*/, v4);
    byte_4B45665 = 1;
  }
  result = StageEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_17705/*"call"*/, 0LL, v2);
  if ( !result )
    return (System_Int32_array *)sub_1BDB920(int___TypeInfo, 0LL);
  return result;
}


System_Int32_array *__fastcall StageEntity__GetFieldPosSkillId(StageEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Int32_array *v4; // x2
  const MethodInfo *v5; // x3

  if ( (byte_4B45673 & 1) == 0 )
  {
    sub_1BDB878(&int___TypeInfo, method);
    sub_1BDB878(&StringLiteral_19433/*"fieldPosSkillId"*/, v3);
    byte_4B45673 = 1;
  }
  v4 = (System_Int32_array *)sub_1BDB920(int___TypeInfo, 0LL);
  return StageEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_19433/*"fieldPosSkillId"*/, v4, v5);
}


System_Int32_array *__fastcall StageEntity__GetFieldPosSkillLv(StageEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Int32_array *v4; // x2
  const MethodInfo *v5; // x3

  if ( (byte_4B45674 & 1) == 0 )
  {
    sub_1BDB878(&int___TypeInfo, method);
    sub_1BDB878(&StringLiteral_19434/*"fieldPosSkillLv"*/, v3);
    byte_4B45674 = 1;
  }
  v4 = (System_Int32_array *)sub_1BDB920(int___TypeInfo, 0LL);
  return StageEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_19434/*"fieldPosSkillLv"*/, v4, v5);
}


System_Int32_array *__fastcall StageEntity__GetMultiEffectIds(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B4565B & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_22153/*"multiEffectIds"*/, method);
    byte_4B4565B = 1;
  }
  return StageEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_22153/*"multiEffectIds"*/, 0LL, v2);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall StageEntity__GetPriorityBG(StageEntity_o *this, int32_t def, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4B45677 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_22795/*"priorityBG"*/, *(_QWORD *)&def);
    byte_4B45677 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_22795/*"priorityBG"*/, def, v3);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall StageEntity__GetPriorityBgm(StageEntity_o *this, int32_t def, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  const MethodInfo *v7; // x3
  Il2CppObject *Master_object; // x0
  __int64 v10; // x1

  if ( (byte_4B45678 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMaster_BgmMaster___, *(_QWORD *)&def);
    sub_1BDB878(&DataManager_TypeInfo, v5);
    sub_1BDB878(&StringLiteral_22796/*"priorityBgm"*/, v6);
    byte_4B45678 = 1;
  }
  if ( StageEntity__checkScript(this, (System_String_o *)StringLiteral_22796/*"priorityBgm"*/, method) )
    return StageEntity__getScript(this, (System_String_o *)StringLiteral_22796/*"priorityBgm"*/, def, v7);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_BgmMaster___);
  if ( !Master_object )
    sub_1BDBAD4(0LL, v10);
  return BgmMaster__GetBgmPriority((BgmMaster_o *)Master_object, this->fields.bgmId, def, 0LL);
}


int32_t __fastcall StageEntity__GetProhibitBgmChangeInTreasureDeviceAnim(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B4567E & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_22817/*"prohibitBgmChangeInTreasureDeviceAnim"*/, method);
    byte_4B4567E = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_22817/*"prohibitBgmChangeInTreasureDeviceAnim"*/, 0, v2);
}


Il2CppObject *__fastcall StageEntity__GetScriptObject(
        StageEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B45666 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, key);
    byte_4B45666 = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( !script )
    sub_1BDBAD4(0LL, key);
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)script,
         (Il2CppObject *)key,
         &value,
         (const MethodInfo_33A1A3C *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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

  if ( (byte_4B45684 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_10678/*"PlayerShadowImageId"*/, isEnemy);
    sub_1BDB878(&StringLiteral_6057/*"EnemyShadowImageId"*/, v5);
    byte_4B45684 = 1;
  }
  if ( isEnemy )
    v6 = (System_String_o **)&StringLiteral_6057/*"EnemyShadowImageId"*/;
  else
    v6 = (System_String_o **)&StringLiteral_10678/*"PlayerShadowImageId"*/;
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

  if ( (byte_4B45683 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_12937/*"SpecialShadowEffectId"*/, isEnemy);
    sub_1BDB878(&StringLiteral_10679/*"PlayerSpecialShadowEffectId"*/, v5);
    sub_1BDB878(&StringLiteral_6058/*"EnemySpecialShadowEffectId"*/, v6);
    byte_4B45683 = 1;
  }
  script = this->fields.script;
  if ( isEnemy )
    v8 = &StringLiteral_6058/*"EnemySpecialShadowEffectId"*/;
  else
    v8 = &StringLiteral_10679/*"PlayerSpecialShadowEffectId"*/;
  v9 = (System_String_o *)*v8;
  IntValue = EntityScriptUtil__GetIntValue(script, (System_String_o *)StringLiteral_12937/*"SpecialShadowEffectId"*/, 0, 0LL);
  return EntityScriptUtil__GetIntValue(script, v9, IntValue, 0LL);
}


int32_t __fastcall StageEntity__GetStartBgmOffFlag(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B45660 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_23689/*"startBgmOff"*/, method);
    byte_4B45660 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_23689/*"startBgmOff"*/, 0, v2);
}


SubBgmPlayArgs_array *__fastcall StageEntity__GetSubBgmPlayArgsArray(StageEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  StageEntity___c_c *v7; // x0
  System_Func_object__object__o *_9__62_0; // x20
  Il2CppObject *v9; // x21
  struct StageEntity___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  if ( (byte_4B4566E & 1) == 0 )
  {
    sub_1BDB878(&Method_EntityScriptUtil_GetScriptValue_List_object___SubBgmPlayArgs_____, method);
    sub_1BDB878(&System_Func_List_object___SubBgmPlayArgs____TypeInfo, v3);
    sub_1BDB878(&Method_StageEntity___c__GetSubBgmPlayArgsArray_b__62_0__, v4);
    sub_1BDB878(&StageEntity___c_TypeInfo, v5);
    sub_1BDB878(&StringLiteral_23794/*"subBgms"*/, v6);
    byte_4B4566E = 1;
  }
  v7 = StageEntity___c_TypeInfo;
  if ( !StageEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(StageEntity___c_TypeInfo);
    v7 = StageEntity___c_TypeInfo;
  }
  _9__62_0 = (System_Func_object__object__o *)v7->static_fields->__9__62_0;
  if ( !_9__62_0 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = StageEntity___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v7->static_fields->__9;
    _9__62_0 = (System_Func_object__object__o *)sub_1BDBAC4(System_Func_List_object___SubBgmPlayArgs____TypeInfo);
    System_Func_object__object____ctor(_9__62_0, v9, Method_StageEntity___c__GetSubBgmPlayArgsArray_b__62_0__, 0LL);
    static_fields = StageEntity___c_TypeInfo->static_fields;
    static_fields->__9__62_0 = (struct System_Func_List_object___SubBgmPlayArgs____o *)_9__62_0;
    sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->__9__62_0, (int32_t)_9__62_0, v11, v12);
  }
  return (SubBgmPlayArgs_array *)EntityScriptUtil__GetScriptValue_object__object_(
                                   this->fields.script,
                                   (System_String_o *)StringLiteral_23794/*"subBgms"*/,
                                   (System_Func_TSource__TDestination__o *)_9__62_0,
                                   0LL,
                                   (const MethodInfo_303A0F4 *)Method_EntityScriptUtil_GetScriptValue_List_object___SubBgmPlayArgs_____);
}


int32_t __fastcall StageEntity__GetSubBgmsPriority(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B4566F & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_23795/*"subBgmsPriority"*/, method);
    byte_4B4566F = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_23795/*"subBgmsPriority"*/, 0, v2);
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
  __int64 v8; // x2
  unsigned __int64 v9; // x8
  il2cpp_array_size_t v10; // w9
  int32_t v11; // w10
  unsigned __int64 v12; // x11
  il2cpp_array_size_t max_length; // w13

  if ( (byte_4B45656 & 1) == 0 )
  {
    sub_1BDB878(&int___TypeInfo, *(_QWORD *)&limitTurn);
    byte_4B45656 = 1;
  }
  result = (System_Int32_array *)sub_1BDB920(int___TypeInfo, (unsigned int)limitTurn);
  if ( !result )
LABEL_15:
    sub_1BDBAD4(result, v7);
  if ( (int)*(_QWORD *)&result->max_length >= 1 )
  {
    v9 = (unsigned int)*(_QWORD *)&result->max_length;
    v10 = 0;
    v11 = 0;
    v12 = 0LL;
    do
    {
      if ( v12 >= v9 )
LABEL_14:
        sub_1BDBADC(result, v7, v8);
      result->m_Items[v12 + 1] = v11;
      if ( !turnlist )
        goto LABEL_15;
      max_length = turnlist->max_length;
      if ( (int)v10 < (int)max_length )
      {
        if ( v10 >= max_length )
          goto LABEL_14;
        if ( v12 == turnlist->m_Items[v10 + 1] - 1 )
        {
          ++v11;
          ++v10;
        }
      }
      ++v12;
    }
    while ( v9 != v12 );
  }
  return result;
}


System_Int32_array *__fastcall StageEntity__GetWaveFieldMotionIds(
        StageEntity_o *this,
        System_Int32_array *defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4B4567B & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_19431/*"fieldMotionIds"*/, defVal);
    byte_4B4567B = 1;
  }
  return StageEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_19431/*"fieldMotionIds"*/, defVal, v3);
}


bool __fastcall StageEntity__HasChangeBgKey(StageEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1

  if ( (byte_4B45651 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_17813/*"changeBgId"*/, method);
    sub_1BDB878(&StringLiteral_17814/*"changeBgType"*/, v3);
    byte_4B45651 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_17813/*"changeBgId"*/, 0LL)
      || EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_17814/*"changeBgType"*/, 0LL);
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

  if ( (byte_4B45686 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Array_Empty_ExtraBattleUserInterfaceData_JsonConvertData___, dataArray);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v7);
    sub_1BDB878(&Method_System_Linq_Enumerable_Any_ExtraBattleUserInterfaceData_JsonConvertData___, v8);
    sub_1BDB878(&Method_JsonManager_Deserialize_ExtraBattleUserInterfaceData_JsonConvertData_____, v9);
    sub_1BDB878(&JsonManager_TypeInfo, v10);
    sub_1BDB878(&StringLiteral_19319/*"exBattleUI"*/, v11);
    byte_4B45686 = 1;
  }
  v12 = Method_System_Array_Empty_ExtraBattleUserInterfaceData_JsonConvertData___;
  value = 0LL;
  v13 = *((_QWORD *)Method_System_Array_Empty_ExtraBattleUserInterfaceData_JsonConvertData___ + 7);
  if ( !v13 )
  {
    sub_1C2BF64(Method_System_Array_Empty_ExtraBattleUserInterfaceData_JsonConvertData___);
    v13 = v12[7];
  }
  v14 = *(_QWORD *)(v13 + 16);
  if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
    v14 = sub_1C2BF08(inited);
  if ( !*(_DWORD *)(v14 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v14);
  v15 = *(_QWORD *)(v12[7] + 16LL);
  if ( (*(_BYTE *)(v15 + 309) & 1) == 0 )
    v15 = sub_1C2BF08(inited);
  v16 = *(ExtraBattleUserInterfaceData_JsonConvertData_array ***)(v15 + 184);
  v17 = *v16;
  *dataArray = *v16;
  sub_1BDB81C((CGThumbnailListItem_o *)dataArray, (int32_t)v17, (int32_t)method, v3);
  script = this->fields.script;
  if ( !script )
    sub_1BDBAD4(0LL, v18);
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)script,
         (Il2CppObject *)StringLiteral_19319/*"exBattleUI"*/,
         &value,
         (const MethodInfo_33A1A3C *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    v20 = value;
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v21 = (ExtraBattleUserInterfaceData_JsonConvertData_array *)JsonManager__Deserialize_object_(
                                                                  v20,
                                                                  (const MethodInfo_30A0354 *)Method_JsonManager_Deserialize_ExtraBattleUserInterfaceData_JsonConvertData_____);
    *dataArray = v21;
    sub_1BDB81C((CGThumbnailListItem_o *)dataArray, (int32_t)v21, v22, v23);
  }
  return System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)*dataArray,
           (const MethodInfo_303F5F0 *)Method_System_Linq_Enumerable_Any_ExtraBattleUserInterfaceData_JsonConvertData___);
}


bool __fastcall StageEntity__Is3_6BossBattle(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B4566B & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_1401/*"3.6BossBattle"*/, method);
    byte_4B4566B = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_1401/*"3.6BossBattle"*/, 0, v2) > 0;
}


bool __fastcall StageEntity__IsClearFieldBuffWhenWaveStart(StageEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B45685 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_18010/*"clearFieldBuffWhenWaveStart"*/, method);
    byte_4B45685 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_18010/*"clearFieldBuffWhenWaveStart"*/, 0, 0LL) != 0;
}


bool __fastcall StageEntity__IsDisableFieldMotion(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B45664 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_18648/*"disableUniqueFieldMotion"*/, method);
    byte_4B45664 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_18648/*"disableUniqueFieldMotion"*/, 0, v2) > 0;
}


bool __fastcall StageEntity__IsForceSetNormalEnemyStatusUI(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4B45670 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_6826/*"ForceSetNormalEnemyStatusUI"*/, method);
    byte_4B45670 = 1;
  }
  return StageEntity__checkScript(this, (System_String_o *)StringLiteral_6826/*"ForceSetNormalEnemyStatusUI"*/, v2);
}


bool __fastcall StageEntity__IsReleaseUnusedAssetsWhenEntryMember(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4B4566D & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_23046/*"releaseUnusedAssetsWhenEntryMember"*/, method);
    byte_4B4566D = 1;
  }
  return StageEntity__checkScript(this, (System_String_o *)StringLiteral_23046/*"releaseUnusedAssetsWhenEntryMember"*/, v2);
}


bool __fastcall StageEntity__IsShowEnemyMasterIconOnWaveStart(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4B4567F & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_23515/*"showEnemyMasterIconOnWaveStart"*/, method);
    byte_4B4567F = 1;
  }
  return StageEntity__checkScript(this, (System_String_o *)StringLiteral_23515/*"showEnemyMasterIconOnWaveStart"*/, v2);
}


bool __fastcall StageEntity__IsSkipWaveStartFadeInSe(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4B4567A & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_23562/*"skipWaveStartFadeInSe"*/, method);
    byte_4B4567A = 1;
  }
  return StageEntity__checkScript(this, (System_String_o *)StringLiteral_23562/*"skipWaveStartFadeInSe"*/, v2);
}


bool __fastcall StageEntity__IsSpecifiedBattleStartVoice(StageEntity_o *this, const MethodInfo *method)
{
  int32_t BattleStartVoiceServantId; // w20
  const MethodInfo *v4; // x1

  BattleStartVoiceServantId = StageEntity__GetBattleStartVoiceServantId(this, method);
  return (BattleStartVoiceServantId > 0) & (StageEntity__GetBattleStartVoiceServantLimit(this, v4) >= 0);
}


bool __fastcall StageEntity__IsSpecifiedBattleStartVoice_41882104(
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
  System_Func_object__int__o *_9__82_1; // x22
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

  if ( (byte_4B45682 & 1) == 0 )
  {
    sub_1BDB878(&Method_BasicHelper_GetValue_string__object___, *(_QWORD *)&servantId);
    sub_1BDB878(&Method_DataManager_GetMaster_CommonReleaseMaster___, v9);
    sub_1BDB878(&DataManager_TypeInfo, v10);
    sub_1BDB878(&Method_System_Linq_Enumerable_OrderByDescending_BattleTreasureDeviceSequenceSelectType__int___, v11);
    sub_1BDB878(&Method_System_Linq_Enumerable_ToArray_BattleTreasureDeviceSequenceSelectType___, v12);
    sub_1BDB878(&Method_System_Linq_Enumerable_Where_BattleTreasureDeviceSequenceSelectType___, v13);
    sub_1BDB878(&System_Func_BattleTreasureDeviceSequenceSelectType__bool__TypeInfo, v14);
    sub_1BDB878(&System_Func_BattleTreasureDeviceSequenceSelectType__int__TypeInfo, v15);
    sub_1BDB878(&Method_JsonManager_DeserializeArray_BattleTreasureDeviceSequenceSelectType___, v16);
    sub_1BDB878(&JsonManager_TypeInfo, v17);
    sub_1BDB878(&Method_StageEntity___c__TryGetOverwritePlayerSequenceSelectTypeByGender_b__82_1__, v18);
    sub_1BDB878(&Method_StageEntity___c__DisplayClass82_0__TryGetOverwritePlayerSequenceSelectTypeByGender_b__0__, v19);
    sub_1BDB878(&StageEntity___c__DisplayClass82_0_TypeInfo, v20);
    sub_1BDB878(&StageEntity___c_TypeInfo, v21);
    sub_1BDB878(&StringLiteral_22584/*"overwritePlayerSequenceSelectTypeByGender"*/, v22);
    byte_4B45682 = 1;
  }
  v23 = sub_1BDBAC4(StageEntity___c__DisplayClass82_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v23, 0LL);
  if ( !v23 )
    goto LABEL_28;
  *(_DWORD *)(v23 + 16) = servantId;
  *genderSelectType = -1;
  *patternId = -1;
  Value_object__object = BasicHelper__GetValue_object__object_(
                           (System_Collections_Generic_Dictionary_K__V__o *)this->fields.script,
                           (Il2CppObject *)StringLiteral_22584/*"overwritePlayerSequenceSelectTypeByGender"*/,
                           0LL,
                           (const MethodInfo_3021B7C *)Method_BasicHelper_GetValue_string__object___);
  if ( !Value_object__object )
    return (char)Value_object__object;
  v27 = Value_object__object;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v28 = (System_Collections_Generic_IEnumerable_TSource__o *)JsonManager__DeserializeArray_object_(
                                                               v27,
                                                               (const MethodInfo_30A04A4 *)Method_JsonManager_DeserializeArray_BattleTreasureDeviceSequenceSelectType___);
  v29 = (System_Func_object__bool__o *)sub_1BDBAC4(System_Func_BattleTreasureDeviceSequenceSelectType__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v29,
    (Il2CppObject *)v23,
    Method_StageEntity___c__DisplayClass82_0__TryGetOverwritePlayerSequenceSelectTypeByGender_b__0__,
    0LL);
  v30 = System_Linq_Enumerable__Where_object_(
          v28,
          (System_Func_TSource__bool__o *)v29,
          (const MethodInfo_3077440 *)Method_System_Linq_Enumerable_Where_BattleTreasureDeviceSequenceSelectType___);
  v31 = StageEntity___c_TypeInfo;
  v32 = v30;
  if ( !StageEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(StageEntity___c_TypeInfo);
    v31 = StageEntity___c_TypeInfo;
  }
  _9__82_1 = (System_Func_object__int__o *)v31->static_fields->__9__82_1;
  if ( !_9__82_1 )
  {
    if ( !v31->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v31);
      v31 = StageEntity___c_TypeInfo;
    }
    v34 = (Il2CppObject *)v31->static_fields->__9;
    _9__82_1 = (System_Func_object__int__o *)sub_1BDBAC4(System_Func_BattleTreasureDeviceSequenceSelectType__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__82_1,
      v34,
      Method_StageEntity___c__TryGetOverwritePlayerSequenceSelectTypeByGender_b__82_1__,
      0LL);
    static_fields = StageEntity___c_TypeInfo->static_fields;
    static_fields->__9__82_1 = (struct System_Func_BattleTreasureDeviceSequenceSelectType__int__o *)_9__82_1;
    sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->__9__82_1, (int32_t)_9__82_1, v36, v37);
  }
  v38 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                               v32,
                                                               (System_Func_TSource__TKey__o *)_9__82_1,
                                                               (const MethodInfo_305FB80 *)Method_System_Linq_Enumerable_OrderByDescending_BattleTreasureDeviceSequenceSelectType__int___);
  v39 = System_Linq_Enumerable__ToArray_object_(
          v38,
          (const MethodInfo_30707A8 *)Method_System_Linq_Enumerable_ToArray_BattleTreasureDeviceSequenceSelectType___);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v39, 0LL) )
    goto LABEL_25;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !v39 )
LABEL_28:
    sub_1BDBAD4(Master_object, monitor_high);
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
      sub_1BDBADC(Master_object, monitor_high, v40);
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

  if ( (byte_4B4564E & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_19639/*"fov"*/, method);
    byte_4B4564E = 1;
  }
  return StageEntity__checkScript(this, (System_String_o *)StringLiteral_19639/*"fov"*/, v2);
}


bool __fastcall StageEntity__checkScript(StageEntity_o *this, System_String_o *key, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_4B45645 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    byte_4B45645 = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                       (System_Collections_Generic_Dictionary_object__object__o *)script,
                       (Il2CppObject *)key,
                       (const MethodInfo_33A0424 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)script;
}


bool __fastcall StageEntity__disableSystemFadeStartBattle(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B4565A & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_18646/*"disableSystemFadeStartBattle"*/, method);
    byte_4B4565A = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_18646/*"disableSystemFadeStartBattle"*/, 0, v2) > 0;
}


int32_t __fastcall StageEntity__getBattleMasterImageId(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B4566C & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_17094/*"battleMasterImageId"*/, method);
    byte_4B4566C = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_17094/*"battleMasterImageId"*/, 0, v2);
}


int32_t __fastcall StageEntity__getChangeBgId(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B45652 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_17813/*"changeBgId"*/, method);
    byte_4B45652 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_17813/*"changeBgId"*/, 0, v2);
}


int32_t __fastcall StageEntity__getChangeBgType(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B45653 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_17814/*"changeBgType"*/, method);
    byte_4B45653 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_17814/*"changeBgType"*/, 0, v2);
}


float __fastcall StageEntity__getCustomFOV(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4B4564D & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_19639/*"fov"*/, method);
    byte_4B4564D = 1;
  }
  return StageEntity__getScriptFloat(this, (System_String_o *)StringLiteral_19639/*"fov"*/, 0.0, v2);
}


int32_t __fastcall StageEntity__getEnemyActCount(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1
  int32_t result; // w0
  StageEntity_c *v6; // x0

  if ( (byte_4B45658 & 1) == 0 )
  {
    sub_1BDB878(&StageEntity_TypeInfo, method);
    sub_1BDB878(&StringLiteral_6053/*"EnemyActCount"*/, v4);
    byte_4B45658 = 1;
  }
  result = StageEntity__getScript(this, (System_String_o *)StringLiteral_6053/*"EnemyActCount"*/, 0, v2);
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

  if ( (byte_4B45650 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_19036/*"enemyMasterBattleId"*/, method);
    sub_1BDB878(&StringLiteral_19037/*"enemyMasterBattleIdByPlayerGender"*/, v4);
    byte_4B45650 = 1;
  }
  ScriptIntArrayParam = StageEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_19037/*"enemyMasterBattleIdByPlayerGender"*/, 0LL, v2);
  if ( !ScriptIntArrayParam )
    return StageEntity__getScript(this, (System_String_o *)StringLiteral_19036/*"enemyMasterBattleId"*/, 0, v6);
  v7 = ScriptIntArrayParam;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_13;
  if ( SelfUserGame->fields.genderType == 1 )
  {
    if ( v7->max_length )
      return v7->m_Items[1];
LABEL_14:
    sub_1BDBADC(SelfUserGame, v9, v10);
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
LABEL_13:
    sub_1BDBAD4(SelfUserGame, v9);
  if ( SelfUserGame->fields.genderType != 2 )
    return StageEntity__getScript(this, (System_String_o *)StringLiteral_19036/*"enemyMasterBattleId"*/, 0, v6);
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

  if ( (byte_4B45654 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, method);
    sub_1BDB878(&Method_System_Collections_Generic_List_object__ToArray__, v4);
    sub_1BDB878(&System_Collections_Generic_List_object__TypeInfo, v5);
    sub_1BDB878(&StringLiteral_16707/*"aiFieldIds"*/, v6);
    byte_4B45654 = 1;
  }
  if ( !StageEntity__checkScript(this, (System_String_o *)StringLiteral_16707/*"aiFieldIds"*/, v2) )
    return 0LL;
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script
    || (script = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                              script,
                                                                              (Il2CppObject *)StringLiteral_16707/*"aiFieldIds"*/,
                                                                              (const MethodInfo_33A01B0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_1BDBAD4(script, v7);
  }
  methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(script->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
    && (System_Collections_Generic_List_object__c *)script->klass->_2.typeHierarchy[methodPtr_low - 1] == System_Collections_Generic_List_object__TypeInfo )
  {
    return System_Collections_Generic_List_object___ToArray(
             (System_Collections_Generic_List_object__o *)script,
             (const MethodInfo_36D791C *)Method_System_Collections_Generic_List_object__ToArray__);
  }
  sub_1BDBD94(script);
  return (System_Object_array *)StageEntity__getTurnEffect(v11, v12, v13);
}


int32_t __fastcall StageEntity__getLimitAct(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B4564C & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_8417/*"LimitAct"*/, method);
    byte_4B4564C = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_8417/*"LimitAct"*/, 0, v2);
}


int32_t __fastcall StageEntity__getLimitTurn(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B45649 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_24276/*"turn"*/, method);
    byte_4B45649 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_24276/*"turn"*/, 0, v2);
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
  System_Converter_object__int__o *_9__37_0; // x20
  __int64 methodPtr_low; // x10
  Il2CppObject *v20; // x21
  struct StageEntity___c_StaticFields *static_fields; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  StageEntity_o *v25; // x0
  const MethodInfo *v26; // x1

  if ( (byte_4B45657 & 1) == 0 )
  {
    sub_1BDB878(&System_Converter_object__int__TypeInfo, method);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v3);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v4);
    sub_1BDB878(&int___TypeInfo, v5);
    sub_1BDB878(&Method_System_Collections_Generic_List_object__ConvertAll_int___, v6);
    sub_1BDB878(&Method_System_Collections_Generic_List_int__ToArray__, v7);
    sub_1BDB878(&System_Collections_Generic_List_object__TypeInfo, v8);
    sub_1BDB878(&Method_StageEntity___c__getNoEntryIds_b__37_0__, v9);
    sub_1BDB878(&StageEntity___c_TypeInfo, v10);
    sub_1BDB878(&StringLiteral_9502/*"NoEntryIds"*/, v11);
    byte_4B45657 = 1;
  }
  script = this->fields.script;
  if ( !script )
    return (System_Int32_array *)sub_1BDB920(int___TypeInfo, 0LL);
  v13 = (Il2CppObject *)StringLiteral_9502/*"NoEntryIds"*/;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)StringLiteral_9502/*"NoEntryIds"*/,
          (const MethodInfo_33A0424 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return (System_Int32_array *)sub_1BDB920(int___TypeInfo, 0LL);
  Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !Item )
    goto LABEL_19;
  Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                      Item,
                                                                      v13,
                                                                      (const MethodInfo_33A01B0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v16 = (System_Collections_Generic_List_object__o *)Item;
  v17 = StageEntity___c_TypeInfo;
  if ( !StageEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(StageEntity___c_TypeInfo);
    v17 = StageEntity___c_TypeInfo;
  }
  _9__37_0 = v17->static_fields->__9__37_0;
  if ( !v16
    || (v14 = System_Collections_Generic_List_object__TypeInfo,
        methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(v16->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low)
    && (System_Collections_Generic_List_object__c *)v16->klass->_2.typeHierarchy[methodPtr_low - 1] == System_Collections_Generic_List_object__TypeInfo )
  {
    if ( !_9__37_0 )
    {
      if ( !v17->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v17);
        v17 = StageEntity___c_TypeInfo;
      }
      v20 = (Il2CppObject *)v17->static_fields->__9;
      _9__37_0 = (System_Converter_object__int__o *)sub_1BDBAC4(System_Converter_object__int__TypeInfo);
      System_Converter_object__int____ctor(_9__37_0, v20, Method_StageEntity___c__getNoEntryIds_b__37_0__, 0LL);
      static_fields = StageEntity___c_TypeInfo->static_fields;
      static_fields->__9__37_0 = _9__37_0;
      sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->__9__37_0, (int32_t)_9__37_0, v22, v23);
    }
    if ( v16 )
    {
      Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_List_object___ConvertAll_int_(
                                                                          v16,
                                                                          (System_Converter_T__TOutput__o *)_9__37_0,
                                                                          (const MethodInfo_2F62DD0 *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
      if ( Item )
        return System_Collections_Generic_List_int___ToArray(
                 (System_Collections_Generic_List_int__o *)Item,
                 (const MethodInfo_36BA858 *)Method_System_Collections_Generic_List_int__ToArray__);
    }
LABEL_19:
    sub_1BDBAD4(Item, v14);
  }
  sub_1BDBD94(v16);
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
  if ( (byte_4B45646 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, key);
    sub_1BDB878(&long_TypeInfo, v7);
    byte_4B45646 = 1;
  }
  if ( !StageEntity__checkScript(this, key, *(const MethodInfo **)&defVal) )
    return v4;
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script
    || (script = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                              script,
                                                                              (Il2CppObject *)key,
                                                                              (const MethodInfo_33A01B0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_1BDBAD4(script, v8);
  }
  if ( script->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(script, long_TypeInfo, v10, v11);
  v16 = sub_1BDBD94(script);
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

  if ( (byte_4B45647 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, key);
    sub_1BDB878(&double_TypeInfo, v7);
    byte_4B45647 = 1;
  }
  if ( !StageEntity__checkScript(this, key, method) )
    return defVal;
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script
    || (script = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                              script,
                                                                              (Il2CppObject *)key,
                                                                              (const MethodInfo_33A01B0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_1BDBAD4(script, v8);
  }
  if ( script->klass->_1.element_class == double_TypeInfo->_1.element_class )
    return *(double *)j_il2cpp_object_unbox_0(script, double_TypeInfo, v10, v11);
  sub_1BDBD94(script);
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
  StageEntity_o *v24; // x0
  const MethodInfo *v25; // x1

  if ( (byte_4B45648 & 1) == 0 )
  {
    sub_1BDB878(&System_Converter_object__int__TypeInfo, key);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_object__ConvertAll_int___, v8);
    sub_1BDB878(&Method_System_Collections_Generic_List_int__ToArray__, v9);
    sub_1BDB878(&System_Collections_Generic_List_object__TypeInfo, v10);
    sub_1BDB878(&Method_StageEntity___c__getScriptIntArrayParam_b__22_0__, v11);
    sub_1BDB878(&StageEntity___c_TypeInfo, v12);
    byte_4B45648 = 1;
  }
  if ( !StageEntity__checkScript(this, key, (const MethodInfo *)defVal) )
    return defVal;
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script )
    goto LABEL_18;
  script = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                        script,
                                                                        (Il2CppObject *)key,
                                                                        (const MethodInfo_33A01B0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
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
      _9__22_0 = (System_Converter_object__int__o *)sub_1BDBAC4(System_Converter_object__int__TypeInfo);
      System_Converter_object__int____ctor(_9__22_0, v19, Method_StageEntity___c__getScriptIntArrayParam_b__22_0__, 0LL);
      static_fields = StageEntity___c_TypeInfo->static_fields;
      static_fields->__9__22_0 = _9__22_0;
      sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->__9__22_0, (int32_t)_9__22_0, v21, v22);
    }
    if ( v15 )
    {
      script = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_List_object___ConvertAll_int_(
                                                                            v15,
                                                                            (System_Converter_T__TOutput__o *)_9__22_0,
                                                                            (const MethodInfo_2F62DD0 *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
      if ( script )
        return System_Collections_Generic_List_int___ToArray(
                 (System_Collections_Generic_List_int__o *)script,
                 (const MethodInfo_36BA858 *)Method_System_Collections_Generic_List_int__ToArray__);
    }
LABEL_18:
    sub_1BDBAD4(script, v13);
  }
  sub_1BDBD94(v15);
  return (System_Int32_array *)StageEntity__getLimitTurn(v24, v25);
}


int32_t __fastcall StageEntity__getShowTurnState(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B4564F & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_23518/*"showTurn"*/, method);
    byte_4B4564F = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_23518/*"showTurn"*/, 2, v2);
}


int32_t __fastcall StageEntity__getStartBattleAssetId(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B45659 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_23687/*"startBattleAssetId"*/, method);
    byte_4B45659 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_23687/*"startBattleAssetId"*/, 0, v2);
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
  const MethodInfo *v24; // x3
  StageEntity_o *v25; // x0
  const MethodInfo *v26; // x3
  int32_t v27; // w1
  System_Int32_array *v28; // x2

  if ( (byte_4B45655 & 1) == 0 )
  {
    sub_1BDB878(&System_Converter_object__int__TypeInfo, *(_QWORD *)&limitTurn);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v5);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v6);
    sub_1BDB878(&int___TypeInfo, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_object__ConvertAll_int___, v8);
    sub_1BDB878(&Method_System_Collections_Generic_List_int__ToArray__, v9);
    sub_1BDB878(&System_Collections_Generic_List_object__TypeInfo, v10);
    sub_1BDB878(&Method_StageEntity___c__getTurnEffect_b__35_0__, v11);
    sub_1BDB878(&StageEntity___c_TypeInfo, v12);
    sub_1BDB878(&StringLiteral_24277/*"turnEffect"*/, v13);
    byte_4B45655 = 1;
  }
  script = this->fields.script;
  if ( script
    && System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)script,
         (Il2CppObject *)StringLiteral_24277/*"turnEffect"*/,
         (const MethodInfo_33A0424 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v16 = this->fields.script;
    if ( v16 )
    {
      Item = System_Collections_Generic_Dictionary_object__object___get_Item(
               (System_Collections_Generic_Dictionary_object__object__o *)v16,
               (Il2CppObject *)StringLiteral_24277/*"turnEffect"*/,
               (const MethodInfo_33A01B0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      v18 = (System_Collections_Generic_List_object__o *)Item;
      if ( Item )
      {
        v15 = System_Collections_Generic_List_object__TypeInfo;
        methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
          || (System_Collections_Generic_List_object__c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] != System_Collections_Generic_List_object__TypeInfo )
        {
          sub_1BDBD94(Item);
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
        v20 = (System_Converter_object__int__o *)sub_1BDBAC4(System_Converter_object__int__TypeInfo);
        System_Converter_object__int____ctor(v20, v21, Method_StageEntity___c__getTurnEffect_b__35_0__, 0LL);
        static_fields = StageEntity___c_TypeInfo->static_fields;
        static_fields->__9__35_0 = v20;
        sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->__9__35_0, (int32_t)v20, v23, v24);
      }
      if ( v18 )
      {
        v16 = System_Collections_Generic_List_object___ConvertAll_int_(
                v18,
                (System_Converter_T__TOutput__o *)v20,
                (const MethodInfo_2F62DD0 *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
        if ( v16 )
        {
          v25 = (StageEntity_o *)System_Collections_Generic_List_int___ToArray(
                                   (System_Collections_Generic_List_int__o *)v16,
                                   (const MethodInfo_36BA858 *)Method_System_Collections_Generic_List_int__ToArray__);
          v27 = limitTurn;
          v28 = (System_Int32_array *)v25;
          return StageEntity__GetTurnEffect(v25, v27, v28, v26);
        }
      }
    }
    sub_1BDBAD4(v16, v15);
  }
  return (System_Int32_array *)sub_1BDB920(int___TypeInfo, 0LL);
}


int32_t __fastcall StageEntity__getTurnEffectType(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B4564A & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_24278/*"turnEffectType"*/, method);
    byte_4B4564A = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_24278/*"turnEffectType"*/, 0, v2);
}


bool __fastcall StageEntity__getTurnElapsedEndBattleFlag(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B4564B & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_24279/*"turnElapsedEndBattle"*/, method);
    byte_4B4564B = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_24279/*"turnElapsedEndBattle"*/, 0, v2) > 0;
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

  if ( (byte_4B45688 & 1) == 0 )
  {
    sub_1BDB878(&StageEntity___c_TypeInfo, v1);
    byte_4B45688 = 1;
  }
  v2 = (Il2CppObject *)sub_1BDBAC4(StageEntity___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  StageEntity___c_TypeInfo->static_fields->__9 = (struct StageEntity___c_o *)v2;
  sub_1BDB81C((CGThumbnailListItem_o *)StageEntity___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall StageEntity___c___ctor(StageEntity___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


AiAllocationInfo_o *__fastcall StageEntity___c___GetAiAllocationInfoList_b__69_0(
        StageEntity___c_o *this,
        Il2CppObject *obj,
        const MethodInfo *method)
{
  AiAllocationInfo_o *v4; // x20

  if ( (byte_4B4568C & 1) == 0 )
  {
    sub_1BDB878(&AiAllocationInfo_TypeInfo, obj);
    byte_4B4568C = 1;
  }
  v4 = (AiAllocationInfo_o *)sub_1BDBAC4(AiAllocationInfo_TypeInfo);
  AiAllocationInfo___ctor(v4, obj, 0LL);
  return v4;
}


System_String_o *__fastcall StageEntity___c___GetBattleStartVoiceIdArray_b__55_0(
        StageEntity___c_o *this,
        Il2CppObject *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BDBAD4(this, 0LL);
  return (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))x->klass->vtable[3].method)(
                              x,
                              x->klass->vtable[4].methodPtr);
}


SubBgmPlayArgs_array *__fastcall StageEntity___c___GetSubBgmPlayArgsArray_b__62_0(
        StageEntity___c_o *this,
        System_Collections_Generic_List_object__o *f,
        const MethodInfo *method)
{
  return SubBgmPlayArgs__ConvertFromEntityScript(f, 0LL);
}


int32_t __fastcall StageEntity___c___TryGetOverwritePlayerSequenceSelectTypeByGender_b__82_1(
        StageEntity___c_o *this,
        BattleTreasureDeviceSequenceSelectType_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BDBAD4(this, 0LL);
  return x->fields.priority;
}


int32_t __fastcall StageEntity___c___getNoEntryIds_b__37_0(
        StageEntity___c_o *this,
        Il2CppObject *x,
        const MethodInfo *method)
{
  System_String_o *v4; // x0

  if ( (byte_4B4568B & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_1/*""*/, x);
    byte_4B4568B = 1;
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

  if ( (byte_4B45689 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_1/*""*/, x);
    byte_4B45689 = 1;
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


int32_t __fastcall StageEntity___c___getTurnEffect_b__35_0(
        StageEntity___c_o *this,
        Il2CppObject *x,
        const MethodInfo *method)
{
  System_String_o *v4; // x0

  if ( (byte_4B4568A & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_1/*""*/, x);
    byte_4B4568A = 1;
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


void __fastcall StageEntity___c__DisplayClass82_0___ctor(
        StageEntity___c__DisplayClass82_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall StageEntity___c__DisplayClass82_0___TryGetOverwritePlayerSequenceSelectTypeByGender_b__0(
        StageEntity___c__DisplayClass82_0_o *this,
        BattleTreasureDeviceSequenceSelectType_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BDBAD4(this, 0LL);
  return x->fields.svtId == this->fields.servantId;
}