void StageEntity___cctor(const MethodInfo *method)
{
  if ( (byte_4E7834D & 1) == 0 )
  {
    sub_1D0F0B4(&StageEntity_TypeInfo);
    byte_4E7834D = 1;
  }
  StageEntity_TypeInfo->static_fields->DEFAULT_ENEMY_ACTION_COUNT = 3;
}


void StageEntity___ctor(StageEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4E78308 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataEntityBase_string___ctor__);
    byte_4E78308 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_35334BC *)Method_DataEntityBase_string___ctor__);
}


System_String_o *StageEntity__CreatePK(int32_t questId, int32_t questPhase, int32_t wave, const MethodInfo *method)
{
  if ( (byte_4E78307 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_4E78307 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           questId,
           questPhase,
           wave,
           (const MethodInfo_324D7D0 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *StageEntity__CreatePrimaryKey(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t questPhase; // w20
  int32_t questId; // w21
  int32_t wave; // w19

  if ( (byte_4E78306 & 1) == 0 )
  {
    sub_1D0F0B4(&StageEntity_TypeInfo);
    byte_4E78306 = 1;
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

  if ( (byte_4E78348 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_19360/*"enemyExBattleUiPositionY"*/);
    byte_4E78348 = 1;
  }
  return (float)StageEntity__getScript(this, (System_String_o *)StringLiteral_19360/*"enemyExBattleUiPositionY"*/, 0, v2);
}


System_Int32_array *StageEntity__GetAddUniqueCameraIds(
        StageEntity_o *this,
        System_Int32_array *defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4E7833B & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_16921/*"addUniqueCameraIds"*/);
    byte_4E7833B = 1;
  }
  return StageEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_16921/*"addUniqueCameraIds"*/, defVal, v3);
}


System_Object_array *StageEntity__GetAiActTypeAttackCommandCard(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_object__object__o *script; // x0
  __int64 naturalAligment; // x10

  if ( (byte_4E7831F & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_object__ToArray__);
    sub_1D0F0B4(&System_Collections_Generic_List_object__TypeInfo);
    sub_1D0F0B4(&StringLiteral_16963/*"aiActTypeAttackCommandCard"*/);
    byte_4E7831F = 1;
  }
  if ( !StageEntity__checkScript(this, (System_String_o *)StringLiteral_16963/*"aiActTypeAttackCommandCard"*/, v2) )
    return 0;
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script
    || (script = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                              script,
                                                                              (Il2CppObject *)StringLiteral_16963/*"aiActTypeAttackCommandCard"*/,
                                                                              (const MethodInfo_3601564 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0
    || (naturalAligment = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment,
        script->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (System_Collections_Generic_List_object__c *)script->klass->_2.typeHierarchy[naturalAligment - 1] != System_Collections_Generic_List_object__TypeInfo )
  {
    sub_1D0F30C(script, v4);
  }
  return System_Collections_Generic_List_object___ToArray(
           (System_Collections_Generic_List_object__o *)script,
           (const MethodInfo_395DF68 *)Method_System_Collections_Generic_List_object__ToArray__);
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

  if ( (byte_4E78320 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1D0F0B4(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1D0F0B4(&long_TypeInfo);
    sub_1D0F0B4(&StringLiteral_22761/*"npcServantId"*/);
    sub_1D0F0B4(&StringLiteral_18034/*"cardType"*/);
    byte_4E78320 = 1;
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
          sub_1D0F314(AiActTypeAttackCommandCard);
        v10 = (System_Collections_Generic_Dictionary_object__object__o *)m_Items[v8];
        if ( v10 )
        {
          naturalAligment = System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.naturalAligment;
          if ( v10->klass->_2.naturalAligment >= (unsigned int)naturalAligment
            && (System_Collections_Generic_Dictionary_string__object__c *)v10->klass->_2.typeHierarchy[naturalAligment - 1] == System_Collections_Generic_Dictionary_string__object__TypeInfo )
          {
            AiActTypeAttackCommandCard = (System_Object_array *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                                                  (System_Collections_Generic_Dictionary_object__object__o *)m_Items[v8],
                                                                  (Il2CppObject *)StringLiteral_22761/*"npcServantId"*/,
                                                                  (const MethodInfo_36017D8 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
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
                                                                    (Il2CppObject *)StringLiteral_22761/*"npcServantId"*/,
                                                                    (const MethodInfo_3601564 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
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
                                                                      (Il2CppObject *)StringLiteral_18034/*"cardType"*/,
                                                                      (const MethodInfo_36017D8 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
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
                                                            (Il2CppObject *)StringLiteral_18034/*"cardType"*/,
                                                            (const MethodInfo_3601564 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !AiActTypeAttackCommandCard )
LABEL_24:
        sub_1D0F30C(AiActTypeAttackCommandCard, v12);
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
        sub_1D0F6A8(AiActTypeAttackCommandCard);
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
  System_Func_object__object__o *_9__62_0; // x20
  Il2CppObject *v7; // x21
  struct StageEntity___c_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0

  if ( (byte_4E78333 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_BasicHelper_GetValue_List_object____);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_Select_object__AiAllocationInfo___);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_ToList_AiAllocationInfo___);
    sub_1D0F0B4(&System_Func_object__AiAllocationInfo__TypeInfo);
    sub_1D0F0B4(&Method_StageEntity___c__GetAiAllocationInfoList_b__62_0__);
    sub_1D0F0B4(&StageEntity___c_TypeInfo);
    sub_1D0F0B4(&StringLiteral_16964/*"aiAllocations"*/);
    byte_4E78333 = 1;
  }
  Value_object = BasicHelper__GetValue_object_(
                   this->fields.script,
                   (System_String_o *)StringLiteral_16964/*"aiAllocations"*/,
                   0,
                   (const MethodInfo_323C8C0 *)Method_BasicHelper_GetValue_List_object____);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)Value_object, 0) )
    return 0;
  v5 = StageEntity___c_TypeInfo;
  if ( !StageEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(StageEntity___c_TypeInfo);
    v5 = StageEntity___c_TypeInfo;
  }
  _9__62_0 = (System_Func_object__object__o *)v5->static_fields->__9__62_0;
  if ( !_9__62_0 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = StageEntity___c_TypeInfo;
    }
    v7 = (Il2CppObject *)v5->static_fields->__9;
    _9__62_0 = (System_Func_object__object__o *)sub_1D0F300(System_Func_object__AiAllocationInfo__TypeInfo);
    System_Func_object__object____ctor(_9__62_0, v7, Method_StageEntity___c__GetAiAllocationInfoList_b__62_0__, 0);
    static_fields = StageEntity___c_TypeInfo->static_fields;
    static_fields->__9__62_0 = (struct System_Func_object__AiAllocationInfo__o *)_9__62_0;
    sub_1D0F058(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__62_0,
      (int32_t)_9__62_0,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  v15 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)Value_object,
                                                               (System_Func_TSource__TResult__o *)_9__62_0,
                                                               (const MethodInfo_32866A4 *)Method_System_Linq_Enumerable_Select_object__AiAllocationInfo___);
  return (System_Collections_Generic_List_AiAllocationInfo__o *)System_Linq_Enumerable__ToList_object_(
                                                                  v15,
                                                                  (const MethodInfo_329539C *)Method_System_Linq_Enumerable_ToList_AiAllocationInfo___);
}


System_Int32_array *StageEntity__GetAssumedBattleScriptIds(StageEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4E78349 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_17166/*"assumedBattleScriptIds"*/);
    byte_4E78349 = 1;
  }
  return EntityScriptUtil__GetIntArray(this->fields.script, (System_String_o *)StringLiteral_17166/*"assumedBattleScriptIds"*/, 0, 0);
}


System_Int32_array *StageEntity__GetAssumedEffectId(StageEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4E78337 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_17167/*"assumedEffectId"*/);
    byte_4E78337 = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_17167/*"assumedEffectId"*/, 0);
}


System_String_array *StageEntity__GetAssumedVoiceAssetNames(StageEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4E7833C & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_17168/*"assumedVoiceAssetNames"*/);
    byte_4E7833C = 1;
  }
  return EntityScriptUtil__GetStringArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_17168/*"assumedVoiceAssetNames"*/, 0);
}


System_String_array *StageEntity__GetBattleStartVoiceIdArray(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  Il2CppObject *ScriptObject; // x0
  System_Collections_Generic_List_object__o *v5; // x19
  __int64 naturalAligment; // x10
  StageEntity___c_c *v8; // x0
  System_Converter_TInput__TOutput__o *_9__47_0; // x20
  Il2CppObject *v10; // x21
  struct StageEntity___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  System_Collections_Generic_List_object__o *v18; // x0
  __int64 v19; // x1

  if ( (byte_4E78326 & 1) == 0 )
  {
    sub_1D0F0B4(&System_Converter_object__string__TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_object__ConvertAll_string___);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1D0F0B4(&System_Collections_Generic_List_object__TypeInfo);
    sub_1D0F0B4(&string___TypeInfo);
    sub_1D0F0B4(&Method_StageEntity___c__GetBattleStartVoiceIdArray_b__47_0__);
    sub_1D0F0B4(&StageEntity___c_TypeInfo);
    sub_1D0F0B4(&StringLiteral_17341/*"battleStartVoiceIds"*/);
    byte_4E78326 = 1;
  }
  ScriptObject = StageEntity__GetScriptObject(this, (System_String_o *)StringLiteral_17341/*"battleStartVoiceIds"*/, v2);
  if ( !ScriptObject )
    return (System_String_array *)sub_1D0F15C(string___TypeInfo, 0);
  v5 = (System_Collections_Generic_List_object__o *)ScriptObject;
  naturalAligment = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment;
  if ( ScriptObject->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (System_Collections_Generic_List_object__c *)ScriptObject->klass->_2.typeHierarchy[naturalAligment - 1] != System_Collections_Generic_List_object__TypeInfo )
  {
    return (System_String_array *)sub_1D0F15C(string___TypeInfo, 0);
  }
  v8 = StageEntity___c_TypeInfo;
  if ( !StageEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(StageEntity___c_TypeInfo);
    v8 = StageEntity___c_TypeInfo;
  }
  _9__47_0 = (System_Converter_TInput__TOutput__o *)v8->static_fields->__9__47_0;
  if ( !_9__47_0 )
  {
    if ( !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      v8 = StageEntity___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v8->static_fields->__9;
    _9__47_0 = (System_Converter_TInput__TOutput__o *)sub_1D0F300(System_Converter_object__string__TypeInfo);
    System_Converter_object__object____ctor(
      _9__47_0,
      v10,
      Method_StageEntity___c__GetBattleStartVoiceIdArray_b__47_0__,
      0);
    static_fields = StageEntity___c_TypeInfo->static_fields;
    static_fields->__9__47_0 = (struct System_Converter_object__string__o *)_9__47_0;
    sub_1D0F058(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__47_0,
      (int32_t)_9__47_0,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
  }
  v18 = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___ConvertAll_object_(
                                                       v5,
                                                       (System_Converter_T__TOutput__o *)_9__47_0,
                                                       (const MethodInfo_316DC80 *)Method_System_Collections_Generic_List_object__ConvertAll_string___);
  if ( !v18 )
    sub_1D0F30C(0, v19);
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  v18,
                                  (const MethodInfo_395DF68 *)Method_System_Collections_Generic_List_string__ToArray__);
}


int32_t StageEntity__GetBattleStartVoiceServantId(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4E78324 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_17342/*"battleStartVoiceSvtId"*/);
    byte_4E78324 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_17342/*"battleStartVoiceSvtId"*/, 0, v2);
}


int32_t StageEntity__GetBattleStartVoiceServantLimit(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4E78325 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_17343/*"battleStartVoiceSvtLimit"*/);
    byte_4E78325 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_17343/*"battleStartVoiceSvtLimit"*/, -1, v2);
}


System_Int32_array *StageEntity__GetBossIdAndChangeBgmId(StageEntity_o *this, const MethodInfo *method)
{
  System_Int32_array *v3; // x2
  const MethodInfo *v4; // x3

  if ( (byte_4E7831E & 1) == 0 )
  {
    sub_1D0F0B4(&int___TypeInfo);
    sub_1D0F0B4(&StringLiteral_17610/*"bossIdAndChangeBgmId"*/);
    byte_4E7831E = 1;
  }
  v3 = (System_Int32_array *)sub_1D0F15C(int___TypeInfo, 0);
  return StageEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_17610/*"bossIdAndChangeBgmId"*/, v3, v4);
}


StageEntity_ChangeBgEntry_array *StageEntity__GetChangeBgArray(StageEntity_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  long double inited; // q0
  StageEntity_ChangeBgEntry_array *result; // x0
  StageEntity_ChangeBgEntry_array **p_changeBgArray; // x20
  _QWORD *v12; // x21
  __int64 v13; // x8
  __int64 v14; // x0
  __int64 v15; // x0
  struct StageEntity_ChangeBgEntry_array **v16; // x8
  struct StageEntity_ChangeBgEntry_array *v17; // x1
  System_Collections_Generic_Dictionary_string__object__o *script; // x21
  System_Func_object__object__o *v19; // x22
  Il2CppObject *ScriptValue_object__object; // x0
  Il2CppObject *v21; // x22
  System_Collections_Generic_List_object__o *v22; // x21
  System_Object_array *v23; // x0
  __int64 v24; // x1
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  int monitor; // w8
  __int64 v32; // x23
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  Il2CppClass **v36; // x0
  StageEntity___c_c *v37; // x0
  System_Func_object__int__o *_9__27_0; // x22
  Il2CppObject *v39; // x23
  struct StageEntity___c_StaticFields *static_fields; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x4
  int32_t v44; // w5
  int64_t v45; // x6
  System_String_o *v46; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v47; // x0
  int32_t v48; // w2
  int32_t v49; // w3
  System_String_o *v50; // x4
  int32_t v51; // w5
  int64_t v52; // x6
  System_String_o *v53; // x7

  if ( (byte_4E78312 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Array_Empty_StageEntity_ChangeBgEntry___);
    sub_1D0F0B4(&Method_EntityScriptUtil_GetScriptValue_object__StageEntity_ChangeBgEntry_____);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_OrderByDescending_StageEntity_ChangeBgEntry__int___);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_ToArray_StageEntity_ChangeBgEntry___);
    sub_1D0F0B4(&System_Func_object__StageEntity_ChangeBgEntry____TypeInfo);
    sub_1D0F0B4(&System_Func_StageEntity_ChangeBgEntry__int__TypeInfo);
    sub_1D0F0B4(&Method_JsonManager_DeserializeArray_StageEntity_ChangeBgEntry___);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_StageEntity_ChangeBgEntry__Add__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_StageEntity_ChangeBgEntry___ctor__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_StageEntity_ChangeBgEntry__get_Count__);
    sub_1D0F0B4(&System_Collections_Generic_List_StageEntity_ChangeBgEntry__TypeInfo);
    sub_1D0F0B4(&Method_StageEntity___c__GetChangeBgArray_b__27_0__);
    sub_1D0F0B4(&StageEntity___c_TypeInfo);
    sub_1D0F0B4(&StringLiteral_18078/*"changeBgList"*/);
    byte_4E78312 = 1;
  }
  p_changeBgArray = &this->fields.changeBgArray;
  result = this->fields.changeBgArray;
  if ( !result )
  {
    v12 = Method_System_Array_Empty_StageEntity_ChangeBgEntry___;
    v13 = *((_QWORD *)Method_System_Array_Empty_StageEntity_ChangeBgEntry___ + 7);
    if ( !v13 )
    {
      sub_1CE5198(Method_System_Array_Empty_StageEntity_ChangeBgEntry___);
      v13 = v12[7];
    }
    v14 = *(_QWORD *)(v13 + 16);
    if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
      v14 = sub_1CE513C(inited);
    if ( !*(_DWORD *)(v14 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v14);
    v15 = *(_QWORD *)(v12[7] + 16LL);
    if ( (*(_BYTE *)(v15 + 309) & 1) == 0 )
      v15 = sub_1CE513C(inited);
    v16 = *(struct StageEntity_ChangeBgEntry_array ***)(v15 + 184);
    v17 = *v16;
    this->fields.changeBgArray = *v16;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields.changeBgArray, (int32_t)v17, v2, v3, v4, v5, v6, v7);
    script = this->fields.script;
    v19 = (System_Func_object__object__o *)sub_1D0F300(System_Func_object__StageEntity_ChangeBgEntry____TypeInfo);
    System_Func_object__object____ctor(v19, 0, Method_JsonManager_DeserializeArray_StageEntity_ChangeBgEntry___, 0);
    ScriptValue_object__object = EntityScriptUtil__GetScriptValue_object__object_(
                                   script,
                                   (System_String_o *)StringLiteral_18078/*"changeBgList"*/,
                                   (System_Func_TSource__TDestination__o *)v19,
                                   0,
                                   (const MethodInfo_3255AB0 *)Method_EntityScriptUtil_GetScriptValue_object__StageEntity_ChangeBgEntry_____);
    if ( ScriptValue_object__object )
    {
      v21 = ScriptValue_object__object;
      if ( ScriptValue_object__object[1].monitor )
      {
        v22 = (System_Collections_Generic_List_object__o *)sub_1D0F300(System_Collections_Generic_List_StageEntity_ChangeBgEntry__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v22,
          (const MethodInfo_395BBDC *)Method_System_Collections_Generic_List_StageEntity_ChangeBgEntry___ctor__);
        monitor = (int)v21[1].monitor;
        if ( monitor >= 1 )
        {
          v32 = 0;
          while ( 1 )
          {
            if ( (unsigned int)v32 >= monitor )
              sub_1D0F314(v23);
            v24 = *((_QWORD *)&v21[2].klass + v32);
            if ( !v24 )
              break;
            if ( *(int *)(v24 + 16) >= 1 )
            {
              if ( !v22 )
                break;
              items = v22->fields._items;
              v34 = Method_System_Collections_Generic_List_StageEntity_ChangeBgEntry__Add__;
              ++v22->fields._version;
              if ( !items )
                break;
              size = v22->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v22,
                  (Il2CppObject *)v24,
                  *(const MethodInfo_395C410 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
              }
              else
              {
                v36 = &items->obj.klass + size;
                v22->fields._size = size + 1;
                v36[4] = (Il2CppClass *)v24;
                sub_1D0F058((GrandQuestFolderBoardItem_o *)(v36 + 4), v24, v25, v26, v27, v28, v29, v30);
              }
            }
            monitor = (int)v21[1].monitor;
            if ( (int)++v32 >= monitor )
              goto LABEL_25;
          }
LABEL_37:
          sub_1D0F30C(v23, v24);
        }
LABEL_25:
        if ( !v22 )
          goto LABEL_37;
        if ( v22->fields._size >= 1 )
        {
          v37 = StageEntity___c_TypeInfo;
          if ( !StageEntity___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(StageEntity___c_TypeInfo);
            v37 = StageEntity___c_TypeInfo;
          }
          _9__27_0 = (System_Func_object__int__o *)v37->static_fields->__9__27_0;
          if ( !_9__27_0 )
          {
            if ( !v37->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v37);
              v37 = StageEntity___c_TypeInfo;
            }
            v39 = (Il2CppObject *)v37->static_fields->__9;
            _9__27_0 = (System_Func_object__int__o *)sub_1D0F300(System_Func_StageEntity_ChangeBgEntry__int__TypeInfo);
            System_Func_object__int____ctor(_9__27_0, v39, Method_StageEntity___c__GetChangeBgArray_b__27_0__, 0);
            static_fields = StageEntity___c_TypeInfo->static_fields;
            static_fields->__9__27_0 = (struct System_Func_StageEntity_ChangeBgEntry__int__o *)_9__27_0;
            sub_1D0F058(
              (GrandQuestFolderBoardItem_o *)&static_fields->__9__27_0,
              (int32_t)_9__27_0,
              v41,
              v42,
              v43,
              v44,
              v45,
              v46);
          }
          v47 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                                       (System_Collections_Generic_IEnumerable_TSource__o *)v22,
                                                                       (System_Func_TSource__TKey__o *)_9__27_0,
                                                                       (const MethodInfo_327F654 *)Method_System_Linq_Enumerable_OrderByDescending_StageEntity_ChangeBgEntry__int___);
          v23 = System_Linq_Enumerable__ToArray_object_(
                  v47,
                  (const MethodInfo_328FDE8 *)Method_System_Linq_Enumerable_ToArray_StageEntity_ChangeBgEntry___);
          if ( !this )
            goto LABEL_37;
          *p_changeBgArray = (StageEntity_ChangeBgEntry_array *)v23;
          sub_1D0F058(
            (GrandQuestFolderBoardItem_o *)&this->fields.changeBgArray,
            (int32_t)v23,
            v48,
            v49,
            v50,
            v51,
            v52,
            v53);
        }
      }
    }
    return *p_changeBgArray;
  }
  return result;
}


System_Int32_array *StageEntity__GetCutInSvtIds(StageEntity_o *this, bool isEnemy, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  System_String_o **v6; // x8

  if ( (byte_4E7831B & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_19356/*"enemyCutInSvtIds"*/);
    sub_1D0F0B4(&StringLiteral_23181/*"playerCutInSvtIds"*/);
    byte_4E7831B = 1;
  }
  if ( isEnemy )
    v6 = (System_String_o **)&StringLiteral_19356/*"enemyCutInSvtIds"*/;
  else
    v6 = (System_String_o **)&StringLiteral_23181/*"playerCutInSvtIds"*/;
  return StageEntity__getScriptIntArrayParam(this, *v6, 0, v3);
}


int32_t StageEntity__GetEffectBgmId(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4E7831C & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_19232/*"effectBgmId"*/);
    byte_4E7831C = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_19232/*"effectBgmId"*/, -1, v2);
}


int32_t StageEntity__GetEffectSvtId(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4E7831A & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_19245/*"effectSvtId"*/);
    byte_4E7831A = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_19245/*"effectSvtId"*/, 0, v2);
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

  if ( (byte_4E7832F & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_int__Add__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1D0F0B4(&System_Collections_Generic_List_int__TypeInfo);
    sub_1D0F0B4(&StringLiteral_19358/*"enemyEntryOrder"*/);
    byte_4E7832F = 1;
  }
  ScriptIntArrayParam = StageEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_19358/*"enemyEntryOrder"*/, 0, v3);
  if ( ScriptIntArrayParam )
  {
    v7 = ScriptIntArrayParam;
    v8 = (System_Collections_Generic_List_int__o *)sub_1D0F300(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v8,
      (const MethodInfo_393EB98 *)Method_System_Collections_Generic_List_int___ctor__);
    max_length = v7->max_length;
    if ( (int)max_length >= 1 )
    {
      for ( i = 0; (__int64)i < (int)max_length; ++i )
      {
        if ( i >= (unsigned int)max_length )
          sub_1D0F314(v9);
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
              *(const MethodInfo_393F3EC **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
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
      sub_1D0F30C(v9, v10);
    return System_Collections_Generic_List_int___ToArray(
             v8,
             (const MethodInfo_3940EA4 *)Method_System_Collections_Generic_List_int__ToArray__);
  }
  else
  {
    v17 = System_Linq_Enumerable__Range(0, enemyFieldPosCount, 0);
    return System_Linq_Enumerable__ToArray_int_(
             (System_Collections_Generic_IEnumerable_TSource__o *)v17,
             (const MethodInfo_328FC50 *)Method_System_Linq_Enumerable_ToArray_int___);
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

  if ( (byte_4E7832E & 1) == 0 )
  {
    sub_1D0F0B4(&int___TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_int__Add__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1D0F0B4(&System_Collections_Generic_List_int__TypeInfo);
    sub_1D0F0B4(&StringLiteral_19353/*"enemyAutoTargetOrder"*/);
    byte_4E7832E = 1;
  }
  ScriptIntArrayParam = StageEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_19353/*"enemyAutoTargetOrder"*/, 0, v3);
  if ( !ScriptIntArrayParam )
    return (System_Int32_array *)sub_1D0F15C(int___TypeInfo, 0);
  v7 = ScriptIntArrayParam;
  v8 = (System_Collections_Generic_List_int__o *)sub_1D0F300(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v8,
    (const MethodInfo_393EB98 *)Method_System_Collections_Generic_List_int___ctor__);
  max_length = v7->max_length;
  if ( (int)max_length >= 1 )
  {
    for ( i = 0; (__int64)i < (int)max_length; ++i )
    {
      if ( i >= (unsigned int)max_length )
        sub_1D0F314(v9);
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
            *(const MethodInfo_393F3EC **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
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
    sub_1D0F30C(v9, v10);
  return System_Collections_Generic_List_int___ToArray(
           v8,
           (const MethodInfo_3940EA4 *)Method_System_Collections_Generic_List_int__ToArray__);
}


int32_t StageEntity__GetEnemyEntryMaxCountEachTurn(StageEntity_o *this, int32_t defaultValue, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4E78330 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_19357/*"enemyEntryMaxCountEachTurn"*/);
    byte_4E78330 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_19357/*"enemyEntryMaxCountEachTurn"*/, defaultValue, v3);
}


int32_t StageEntity__GetEnemyFieldPosCount(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4E78327 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_19361/*"enemyFieldPosCount"*/);
    byte_4E78327 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_19361/*"enemyFieldPosCount"*/, 3, v2);
}


System_Single_array *StageEntity__GetEnemyMasterCommandSpellIconPosition(StageEntity_o *this, const MethodInfo *method)
{
  long double inited; // q0
  _QWORD *v4; // x20
  System_Collections_Generic_Dictionary_string__object__o *script; // x19
  __int64 v6; // x8
  __int64 v7; // x0
  __int64 v8; // x0

  if ( (byte_4E78340 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Array_Empty_float___);
    sub_1D0F0B4(&StringLiteral_19364/*"enemyMasterCommandSpellIconPosition"*/);
    byte_4E78340 = 1;
  }
  v4 = Method_System_Array_Empty_float___;
  script = this->fields.script;
  v6 = *((_QWORD *)Method_System_Array_Empty_float___ + 7);
  if ( !v6 )
  {
    sub_1CE5198(Method_System_Array_Empty_float___);
    v6 = v4[7];
  }
  v7 = *(_QWORD *)(v6 + 16);
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1CE513C(inited);
  if ( !*(_DWORD *)(v7 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v7);
  v8 = *(_QWORD *)(v4[7] + 16LL);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1CE513C(inited);
  return EntityScriptUtil__GetFloatArray(
           script,
           (System_String_o *)StringLiteral_19364/*"enemyMasterCommandSpellIconPosition"*/,
           **(System_Single_array ***)(v8 + 184),
           0);
}


System_Int32_array *StageEntity__GetEnemyMasterCommandSpellIconSize(StageEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4E7833F & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_19365/*"enemyMasterCommandSpellIconSize"*/);
    byte_4E7833F = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_19365/*"enemyMasterCommandSpellIconSize"*/, 0);
}


int32_t StageEntity__GetEnemyUiId(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4E78346 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_6112/*"EnemyUiId"*/);
    byte_4E78346 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_6112/*"EnemyUiId"*/, -1, v2);
}


System_Collections_Generic_IEnumerable_int__o *StageEntity__GetExBattleUiSkillEffectIds(
        StageEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  if ( (byte_4E7834A & 1) == 0 )
  {
    sub_1D0F0B4(&StageEntity__GetExBattleUiSkillEffectIds_d__85_TypeInfo);
    byte_4E7834A = 1;
  }
  v3 = sub_1D0F300(StageEntity__GetExBattleUiSkillEffectIds_d__85_TypeInfo);
  StageEntity__GetExBattleUiSkillEffectIds_d__85___ctor((StageEntity__GetExBattleUiSkillEffectIds_d__85_o *)v3, -2, 0);
  if ( !v3 )
    sub_1D0F30C(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v3 + 32), (int32_t)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_Generic_IEnumerable_int__o *)v3;
}


int32_t StageEntity__GetFadeType(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4E78319 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_17339/*"battleStartFadeType"*/);
    byte_4E78319 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_17339/*"battleStartFadeType"*/, 0, v2);
}


System_Int32_array *StageEntity__GetFieldCallServantId(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  System_Int32_array *result; // x0

  if ( (byte_4E78322 & 1) == 0 )
  {
    sub_1D0F0B4(&int___TypeInfo);
    sub_1D0F0B4(&StringLiteral_17965/*"call"*/);
    byte_4E78322 = 1;
  }
  result = StageEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_17965/*"call"*/, 0, v2);
  if ( !result )
    return (System_Int32_array *)sub_1D0F15C(int___TypeInfo, 0);
  return result;
}


System_Int32_array *StageEntity__GetFieldPosSkillId(StageEntity_o *this, const MethodInfo *method)
{
  System_Int32_array *v3; // x2
  const MethodInfo *v4; // x3

  if ( (byte_4E78331 & 1) == 0 )
  {
    sub_1D0F0B4(&int___TypeInfo);
    sub_1D0F0B4(&StringLiteral_19776/*"fieldPosSkillId"*/);
    byte_4E78331 = 1;
  }
  v3 = (System_Int32_array *)sub_1D0F15C(int___TypeInfo, 0);
  return StageEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_19776/*"fieldPosSkillId"*/, v3, v4);
}


System_Int32_array *StageEntity__GetFieldPosSkillLv(StageEntity_o *this, const MethodInfo *method)
{
  System_Int32_array *v3; // x2
  const MethodInfo *v4; // x3

  if ( (byte_4E78332 & 1) == 0 )
  {
    sub_1D0F0B4(&int___TypeInfo);
    sub_1D0F0B4(&StringLiteral_19777/*"fieldPosSkillLv"*/);
    byte_4E78332 = 1;
  }
  v3 = (System_Int32_array *)sub_1D0F15C(int___TypeInfo, 0);
  return StageEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_19777/*"fieldPosSkillLv"*/, v3, v4);
}


System_Int32_array *StageEntity__GetMultiEffectIds(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4E78318 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_22572/*"multiEffectIds"*/);
    byte_4E78318 = 1;
  }
  return StageEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_22572/*"multiEffectIds"*/, 0, v2);
}


int32_t StageEntity__GetPriorityBG(StageEntity_o *this, int32_t def, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4E78335 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_23240/*"priorityBG"*/);
    byte_4E78335 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_23240/*"priorityBG"*/, def, v3);
}


int32_t StageEntity__GetPriorityBgm(StageEntity_o *this, int32_t def, const MethodInfo *method)
{
  const MethodInfo *v5; // x3
  Il2CppObject *Master_object; // x0
  __int64 v8; // x1

  if ( (byte_4E78336 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMaster_BgmMaster___);
    sub_1D0F0B4(&DataManager_TypeInfo);
    sub_1D0F0B4(&StringLiteral_23241/*"priorityBgm"*/);
    byte_4E78336 = 1;
  }
  if ( StageEntity__checkScript(this, (System_String_o *)StringLiteral_23241/*"priorityBgm"*/, method) )
    return StageEntity__getScript(this, (System_String_o *)StringLiteral_23241/*"priorityBgm"*/, def, v5);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_BgmMaster___);
  if ( !Master_object )
    sub_1D0F30C(0, v8);
  return BgmMaster__GetBgmPriority((BgmMaster_o *)Master_object, this->fields.bgmId, def, 0);
}


int32_t StageEntity__GetProhibitBgmChangeInTreasureDeviceAnim(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4E7833D & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_23262/*"prohibitBgmChangeInTreasureDeviceAnim"*/);
    byte_4E7833D = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_23262/*"prohibitBgmChangeInTreasureDeviceAnim"*/, 0, v2);
}


BattleResumeBgmSetting_array *StageEntity__GetResumeBgmSettings(StageEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  long double inited; // q0
  Il2CppObject *v5; // x19
  _QWORD *v7; // x19
  __int64 v8; // x8
  __int64 v9; // x0
  __int64 v10; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4E7834B & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Array_Empty_BattleResumeBgmSetting___);
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1D0F0B4(&Method_JsonManager_Deserialize_BattleResumeBgmSetting_____);
    sub_1D0F0B4(&JsonManager_TypeInfo);
    sub_1D0F0B4(&StringLiteral_23557/*"resumeBgmSettings"*/);
    byte_4E7834B = 1;
  }
  value = 0;
  script = this->fields.script;
  if ( !script )
    sub_1D0F30C(0, method);
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)script,
         (Il2CppObject *)StringLiteral_23557/*"resumeBgmSettings"*/,
         &value,
         (const MethodInfo_3602DF0 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    v5 = value;
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    return (BattleResumeBgmSetting_array *)JsonManager__Deserialize_object_(
                                             v5,
                                             (const MethodInfo_32C0284 *)Method_JsonManager_Deserialize_BattleResumeBgmSetting_____);
  }
  else
  {
    v7 = Method_System_Array_Empty_BattleResumeBgmSetting___;
    v8 = *((_QWORD *)Method_System_Array_Empty_BattleResumeBgmSetting___ + 7);
    if ( !v8 )
    {
      sub_1CE5198(Method_System_Array_Empty_BattleResumeBgmSetting___);
      v8 = v7[7];
    }
    v9 = *(_QWORD *)(v8 + 16);
    if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
      v9 = sub_1CE513C(inited);
    if ( !*(_DWORD *)(v9 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v9);
    v10 = *(_QWORD *)(v7[7] + 16LL);
    if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
      v10 = sub_1CE513C(inited);
    return **(BattleResumeBgmSetting_array ***)(v10 + 184);
  }
}


Il2CppObject *StageEntity__GetScriptObject(StageEntity_o *this, System_String_o *key, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4E78323 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    byte_4E78323 = 1;
  }
  value = 0;
  script = this->fields.script;
  if ( !script )
    sub_1D0F30C(0, key);
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)script,
         (Il2CppObject *)key,
         &value,
         (const MethodInfo_3602DF0 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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

  if ( (byte_4E78343 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_10840/*"PlayerShadowImageId"*/);
    sub_1D0F0B4(&StringLiteral_6110/*"EnemyShadowImageId"*/);
    byte_4E78343 = 1;
  }
  if ( isEnemy )
    v5 = (System_String_o **)&StringLiteral_6110/*"EnemyShadowImageId"*/;
  else
    v5 = (System_String_o **)&StringLiteral_10840/*"PlayerShadowImageId"*/;
  return EntityScriptUtil__GetIntValue(this->fields.script, *v5, 0, 0);
}


int32_t StageEntity__GetSpecialShadowEffectId(StageEntity_o *this, bool isEnemy, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_string__object__o *script; // x19
  __int64 *v6; // x8
  System_String_o *v7; // x20
  int32_t IntValue; // w2

  if ( (byte_4E78342 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_13153/*"SpecialShadowEffectId"*/);
    sub_1D0F0B4(&StringLiteral_10841/*"PlayerSpecialShadowEffectId"*/);
    sub_1D0F0B4(&StringLiteral_6111/*"EnemySpecialShadowEffectId"*/);
    byte_4E78342 = 1;
  }
  script = this->fields.script;
  if ( isEnemy )
    v6 = &StringLiteral_6111/*"EnemySpecialShadowEffectId"*/;
  else
    v6 = &StringLiteral_10841/*"PlayerSpecialShadowEffectId"*/;
  v7 = (System_String_o *)*v6;
  IntValue = EntityScriptUtil__GetIntValue(script, (System_String_o *)StringLiteral_13153/*"SpecialShadowEffectId"*/, 0, 0);
  return EntityScriptUtil__GetIntValue(script, v7, IntValue, 0);
}


int32_t StageEntity__GetStartBgmOffFlag(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4E7831D & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_24135/*"startBgmOff"*/);
    byte_4E7831D = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_24135/*"startBgmOff"*/, 0, v2);
}


SubBgmPlayArgs_array *StageEntity__GetSubBgmPlayArgsArray(StageEntity_o *this, const MethodInfo *method)
{
  StageEntity___c_c *v3; // x0
  System_Func_object__object__o *_9__54_0; // x20
  Il2CppObject *v5; // x21
  struct StageEntity___c_StaticFields *static_fields; // x0
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7

  if ( (byte_4E7832B & 1) == 0 )
  {
    sub_1D0F0B4(&Method_EntityScriptUtil_GetScriptValue_List_object___SubBgmPlayArgs_____);
    sub_1D0F0B4(&System_Func_List_object___SubBgmPlayArgs____TypeInfo);
    sub_1D0F0B4(&Method_StageEntity___c__GetSubBgmPlayArgsArray_b__54_0__);
    sub_1D0F0B4(&StageEntity___c_TypeInfo);
    sub_1D0F0B4(&StringLiteral_24241/*"subBgms"*/);
    byte_4E7832B = 1;
  }
  v3 = StageEntity___c_TypeInfo;
  if ( !StageEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(StageEntity___c_TypeInfo);
    v3 = StageEntity___c_TypeInfo;
  }
  _9__54_0 = (System_Func_object__object__o *)v3->static_fields->__9__54_0;
  if ( !_9__54_0 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = StageEntity___c_TypeInfo;
    }
    v5 = (Il2CppObject *)v3->static_fields->__9;
    _9__54_0 = (System_Func_object__object__o *)sub_1D0F300(System_Func_List_object___SubBgmPlayArgs____TypeInfo);
    System_Func_object__object____ctor(_9__54_0, v5, Method_StageEntity___c__GetSubBgmPlayArgsArray_b__54_0__, 0);
    static_fields = StageEntity___c_TypeInfo->static_fields;
    static_fields->__9__54_0 = (struct System_Func_List_object___SubBgmPlayArgs____o *)_9__54_0;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)&static_fields->__9__54_0, (int32_t)_9__54_0, v7, v8, v9, v10, v11, v12);
  }
  return (SubBgmPlayArgs_array *)EntityScriptUtil__GetScriptValue_object__object_(
                                   this->fields.script,
                                   (System_String_o *)StringLiteral_24241/*"subBgms"*/,
                                   (System_Func_TSource__TDestination__o *)_9__54_0,
                                   0,
                                   (const MethodInfo_3255AB0 *)Method_EntityScriptUtil_GetScriptValue_List_object___SubBgmPlayArgs_____);
}


int32_t StageEntity__GetSubBgmsPriority(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4E7832C & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_24242/*"subBgmsPriority"*/);
    byte_4E7832C = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_24242/*"subBgmsPriority"*/, 0, v2);
}


System_Int32_array *StageEntity__GetWaveFieldMotionIds(
        StageEntity_o *this,
        System_Int32_array *defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4E7833A & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_19774/*"fieldMotionIds"*/);
    byte_4E7833A = 1;
  }
  return StageEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_19774/*"fieldMotionIds"*/, defVal, v3);
}


bool StageEntity__HasEnemyExBattleUiPositionY(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4E78347 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_19360/*"enemyExBattleUiPositionY"*/);
    byte_4E78347 = 1;
  }
  return StageEntity__checkScript(this, (System_String_o *)StringLiteral_19360/*"enemyExBattleUiPositionY"*/, v2);
}


bool StageEntity__HasExtraBattleUserInterfaceData(
        StageEntity_o *this,
        ExtraBattleUserInterfaceData_JsonConvertData_array **dataArray,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  long double inited; // q0
  _QWORD *v11; // x21
  __int64 v12; // x8
  __int64 v13; // x0
  __int64 v14; // x0
  ExtraBattleUserInterfaceData_JsonConvertData_array **v15; // x8
  ExtraBattleUserInterfaceData_JsonConvertData_array *v16; // x1
  __int64 v17; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  Il2CppObject *v19; // x20
  ExtraBattleUserInterfaceData_JsonConvertData_array *v20; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4E78345 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Array_Empty_ExtraBattleUserInterfaceData_JsonConvertData___);
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_Any_ExtraBattleUserInterfaceData_JsonConvertData___);
    sub_1D0F0B4(&Method_JsonManager_Deserialize_ExtraBattleUserInterfaceData_JsonConvertData_____);
    sub_1D0F0B4(&JsonManager_TypeInfo);
    sub_1D0F0B4(&StringLiteral_19650/*"exBattleUI"*/);
    byte_4E78345 = 1;
  }
  v11 = Method_System_Array_Empty_ExtraBattleUserInterfaceData_JsonConvertData___;
  value = 0;
  v12 = *((_QWORD *)Method_System_Array_Empty_ExtraBattleUserInterfaceData_JsonConvertData___ + 7);
  if ( !v12 )
  {
    sub_1CE5198(Method_System_Array_Empty_ExtraBattleUserInterfaceData_JsonConvertData___);
    v12 = v11[7];
  }
  v13 = *(_QWORD *)(v12 + 16);
  if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
    v13 = sub_1CE513C(inited);
  if ( !*(_DWORD *)(v13 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v13);
  v14 = *(_QWORD *)(v11[7] + 16LL);
  if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
    v14 = sub_1CE513C(inited);
  v15 = *(ExtraBattleUserInterfaceData_JsonConvertData_array ***)(v14 + 184);
  v16 = *v15;
  *dataArray = *v15;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)dataArray, (int32_t)v16, (int32_t)method, v3, v4, v5, v6, v7);
  script = this->fields.script;
  if ( !script )
    sub_1D0F30C(0, v17);
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)script,
         (Il2CppObject *)StringLiteral_19650/*"exBattleUI"*/,
         &value,
         (const MethodInfo_3602DF0 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    v19 = value;
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v20 = (ExtraBattleUserInterfaceData_JsonConvertData_array *)JsonManager__Deserialize_object_(
                                                                  v19,
                                                                  (const MethodInfo_32C0284 *)Method_JsonManager_Deserialize_ExtraBattleUserInterfaceData_JsonConvertData_____);
    *dataArray = v20;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)dataArray, (int32_t)v20, v21, v22, v23, v24, v25, v26);
  }
  return System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)*dataArray,
           (const MethodInfo_325D0AC *)Method_System_Linq_Enumerable_Any_ExtraBattleUserInterfaceData_JsonConvertData___);
}


bool StageEntity__Is3_6BossBattle(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4E78328 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_1376/*"3.6BossBattle"*/);
    byte_4E78328 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_1376/*"3.6BossBattle"*/, 0, v2) > 0;
}


bool StageEntity__IsClearFieldBuffWhenWaveStart(StageEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4E78344 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_18279/*"clearFieldBuffWhenWaveStart"*/);
    byte_4E78344 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_18279/*"clearFieldBuffWhenWaveStart"*/, 0, 0) != 0;
}


bool StageEntity__IsDisableFieldMotion(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4E78321 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_18938/*"disableUniqueFieldMotion"*/);
    byte_4E78321 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_18938/*"disableUniqueFieldMotion"*/, 0, v2) > 0;
}


bool StageEntity__IsForceSetNormalEnemyStatusUI(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4E7832D & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_6889/*"ForceSetNormalEnemyStatusUI"*/);
    byte_4E7832D = 1;
  }
  return StageEntity__checkScript(this, (System_String_o *)StringLiteral_6889/*"ForceSetNormalEnemyStatusUI"*/, v2);
}


bool StageEntity__IsReleaseUnusedAssetsWhenEntryMember(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4E7832A & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_23494/*"releaseUnusedAssetsWhenEntryMember"*/);
    byte_4E7832A = 1;
  }
  return StageEntity__checkScript(this, (System_String_o *)StringLiteral_23494/*"releaseUnusedAssetsWhenEntryMember"*/, v2);
}


bool StageEntity__IsShowEnemyMasterIconOnWaveStart(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4E7833E & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_23955/*"showEnemyMasterIconOnWaveStart"*/);
    byte_4E7833E = 1;
  }
  return StageEntity__checkScript(this, (System_String_o *)StringLiteral_23955/*"showEnemyMasterIconOnWaveStart"*/, v2);
}


bool StageEntity__IsSkipWaveStartEffect(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4E78339 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_24007/*"skipWaveStartEffect"*/);
    byte_4E78339 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_24007/*"skipWaveStartEffect"*/, 0, v2) > 0;
}


bool StageEntity__IsSkipWaveStartFadeInSe(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4E78338 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_24008/*"skipWaveStartFadeInSe"*/);
    byte_4E78338 = 1;
  }
  return StageEntity__checkScript(this, (System_String_o *)StringLiteral_24008/*"skipWaveStartFadeInSe"*/, v2);
}


bool StageEntity__IsSpecifiedBattleStartVoice(StageEntity_o *this, const MethodInfo *method)
{
  int32_t BattleStartVoiceServantId; // w20
  const MethodInfo *v4; // x1

  BattleStartVoiceServantId = StageEntity__GetBattleStartVoiceServantId(this, method);
  return (BattleStartVoiceServantId > 0) & (StageEntity__GetBattleStartVoiceServantLimit(this, v4) >= 0);
}


bool StageEntity__IsSpecifiedBattleStartVoice_44309976(
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


bool StageEntity__TryGetChangeBgData(
        StageEntity_o *this,
        int32_t *stageBgId,
        int32_t *stageBgType,
        BattleData_o *battleData,
        const MethodInfo *method)
{
  StageEntity_ChangeBgEntry_array *IsOpenInBattle; // x0
  __int64 v10; // x1
  il2cpp_array_size_t max_length; // x8
  StageEntity_ChangeBgEntry_array *v12; // x23
  __int64 v13; // x24
  int32_t *v14; // x26
  int32_t v15; // w0
  bool result; // w0

  if ( (byte_4E78311 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_18077/*"changeBgId"*/);
    sub_1D0F0B4(&StringLiteral_18079/*"changeBgType"*/);
    byte_4E78311 = 1;
  }
  *stageBgId = 0;
  *stageBgType = 0;
  IsOpenInBattle = StageEntity__GetChangeBgArray(this, (const MethodInfo *)stageBgId);
  if ( IsOpenInBattle
    && (max_length = IsOpenInBattle->max_length, v12 = IsOpenInBattle, max_length)
    && (int)max_length >= 1 )
  {
    v13 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v13 >= (unsigned int)max_length )
        sub_1D0F314(IsOpenInBattle);
      v14 = (int32_t *)v12->m_Items[v13];
      if ( !v14 )
        sub_1D0F30C(IsOpenInBattle, v10);
      v15 = v14[7];
      if ( v15 < 1 )
        break;
      IsOpenInBattle = (StageEntity_ChangeBgEntry_array *)CommonReleaseExtension__IsOpenInBattle(
                                                            v15,
                                                            battleData,
                                                            0,
                                                            0,
                                                            0,
                                                            0);
      if ( ((unsigned __int8)IsOpenInBattle & 1) != 0 )
        break;
      LODWORD(max_length) = v12->max_length;
      if ( (int)++v13 >= (int)max_length )
        goto LABEL_12;
    }
    result = 1;
    *stageBgId = v14[4];
    *stageBgType = v14[5];
  }
  else
  {
LABEL_12:
    if ( EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_18077/*"changeBgId"*/, 0) )
    {
      *stageBgId = EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_18077/*"changeBgId"*/, 0, 0);
      *stageBgType = EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_18079/*"changeBgType"*/, 0, 0);
    }
    return *stageBgId > 0;
  }
  return result;
}


bool StageEntity__TryGetEnemyCountStartValue(StageEntity_o *this, int32_t *value, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t Script; // w0

  if ( (byte_4E78334 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_19355/*"enemyCountStartValue"*/);
    byte_4E78334 = 1;
  }
  Script = StageEntity__getScript(this, (System_String_o *)StringLiteral_19355/*"enemyCountStartValue"*/, 0x80000000, v3);
  *value = Script;
  return Script != 0x80000000;
}


bool StageEntity__TryGetOverwritePlayerSequenceSelectTypeByGender(
        StageEntity_o *this,
        int32_t servantId,
        int32_t *genderSelectType,
        int32_t *patternId,
        const MethodInfo *method)
{
  StageEntity___c__DisplayClass76_0_o *v9; // x23
  Il2CppObject *Master_object; // x0
  __int64 monitor_high; // x1
  Il2CppObject *Value_object__object; // x0
  Il2CppObject *v13; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x21
  System_Func_object__bool__o *v15; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0
  StageEntity___c_c *v17; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x21
  System_Func_object__int__o *_9__76_1; // x22
  Il2CppObject *v20; // x23
  struct StageEntity___c_StaticFields *static_fields; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x0
  System_Object_array *v29; // x21
  int max_length; // w8
  CommonReleaseMaster_o *v31; // x22
  unsigned int v32; // w23
  Il2CppObject *v33; // x24

  if ( (byte_4E78341 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_BasicHelper_GetValue_string__object___);
    sub_1D0F0B4(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_1D0F0B4(&DataManager_TypeInfo);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_OrderByDescending_BattleTreasureDeviceSequenceSelectType__int___);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_ToArray_BattleTreasureDeviceSequenceSelectType___);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_Where_BattleTreasureDeviceSequenceSelectType___);
    sub_1D0F0B4(&System_Func_BattleTreasureDeviceSequenceSelectType__bool__TypeInfo);
    sub_1D0F0B4(&System_Func_BattleTreasureDeviceSequenceSelectType__int__TypeInfo);
    sub_1D0F0B4(&Method_JsonManager_DeserializeArray_BattleTreasureDeviceSequenceSelectType___);
    sub_1D0F0B4(&JsonManager_TypeInfo);
    sub_1D0F0B4(&Method_StageEntity___c__TryGetOverwritePlayerSequenceSelectTypeByGender_b__76_1__);
    sub_1D0F0B4(&Method_StageEntity___c__DisplayClass76_0__TryGetOverwritePlayerSequenceSelectTypeByGender_b__0__);
    sub_1D0F0B4(&StageEntity___c__DisplayClass76_0_TypeInfo);
    sub_1D0F0B4(&StageEntity___c_TypeInfo);
    sub_1D0F0B4(&StringLiteral_23016/*"overwritePlayerSequenceSelectTypeByGender"*/);
    byte_4E78341 = 1;
  }
  v9 = (StageEntity___c__DisplayClass76_0_o *)sub_1D0F300(StageEntity___c__DisplayClass76_0_TypeInfo);
  StageEntity___c__DisplayClass76_0___ctor(v9, 0);
  if ( !v9 )
    goto LABEL_28;
  v9->fields.servantId = servantId;
  *genderSelectType = -1;
  *patternId = -1;
  Value_object__object = BasicHelper__GetValue_object__object_(
                           (System_Collections_Generic_Dictionary_K__V__o *)this->fields.script,
                           (Il2CppObject *)StringLiteral_23016/*"overwritePlayerSequenceSelectTypeByGender"*/,
                           0,
                           (const MethodInfo_323D06C *)Method_BasicHelper_GetValue_string__object___);
  if ( !Value_object__object )
    return (char)Value_object__object;
  v13 = Value_object__object;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v14 = (System_Collections_Generic_IEnumerable_TSource__o *)JsonManager__DeserializeArray_object_(
                                                               v13,
                                                               (const MethodInfo_32C03D4 *)Method_JsonManager_DeserializeArray_BattleTreasureDeviceSequenceSelectType___);
  v15 = (System_Func_object__bool__o *)sub_1D0F300(System_Func_BattleTreasureDeviceSequenceSelectType__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v15,
    (Il2CppObject *)v9,
    Method_StageEntity___c__DisplayClass76_0__TryGetOverwritePlayerSequenceSelectTypeByGender_b__0__,
    0);
  v16 = System_Linq_Enumerable__Where_object_(
          v14,
          (System_Func_TSource__bool__o *)v15,
          (const MethodInfo_329781C *)Method_System_Linq_Enumerable_Where_BattleTreasureDeviceSequenceSelectType___);
  v17 = StageEntity___c_TypeInfo;
  v18 = v16;
  if ( !StageEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(StageEntity___c_TypeInfo);
    v17 = StageEntity___c_TypeInfo;
  }
  _9__76_1 = (System_Func_object__int__o *)v17->static_fields->__9__76_1;
  if ( !_9__76_1 )
  {
    if ( !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      v17 = StageEntity___c_TypeInfo;
    }
    v20 = (Il2CppObject *)v17->static_fields->__9;
    _9__76_1 = (System_Func_object__int__o *)sub_1D0F300(System_Func_BattleTreasureDeviceSequenceSelectType__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__76_1,
      v20,
      Method_StageEntity___c__TryGetOverwritePlayerSequenceSelectTypeByGender_b__76_1__,
      0);
    static_fields = StageEntity___c_TypeInfo->static_fields;
    static_fields->__9__76_1 = (struct System_Func_BattleTreasureDeviceSequenceSelectType__int__o *)_9__76_1;
    sub_1D0F058(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__76_1,
      (int32_t)_9__76_1,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
  }
  v28 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                               v18,
                                                               (System_Func_TSource__TKey__o *)_9__76_1,
                                                               (const MethodInfo_327F654 *)Method_System_Linq_Enumerable_OrderByDescending_BattleTreasureDeviceSequenceSelectType__int___);
  v29 = System_Linq_Enumerable__ToArray_object_(
          v28,
          (const MethodInfo_328FDE8 *)Method_System_Linq_Enumerable_ToArray_BattleTreasureDeviceSequenceSelectType___);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v29, 0) )
    goto LABEL_25;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_324F164 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !v29 )
LABEL_28:
    sub_1D0F30C(Master_object, monitor_high);
  max_length = v29->max_length;
  if ( max_length < 1 )
  {
LABEL_25:
    LOBYTE(Value_object__object) = 0;
    return (char)Value_object__object;
  }
  v31 = (CommonReleaseMaster_o *)Master_object;
  v32 = 0;
  while ( 1 )
  {
    if ( v32 >= max_length )
      sub_1D0F314(Master_object);
    v33 = v29->m_Items[v32];
    if ( !v33 )
      goto LABEL_28;
    monitor_high = HIDWORD(v33[1].monitor);
    if ( (int)monitor_high < 1 )
      break;
    if ( !v31 )
      goto LABEL_28;
    Master_object = (Il2CppObject *)CommonReleaseMaster__IsOpen(v31, monitor_high, 0, 0, 0);
    if ( ((unsigned __int8)Master_object & 1) != 0 )
      break;
    max_length = v29->max_length;
    if ( (int)++v32 >= max_length )
      goto LABEL_25;
  }
  LOBYTE(Value_object__object) = 1;
  *genderSelectType = HIDWORD(v33[1].klass);
  *patternId = (int32_t)v33[1].monitor;
  return (char)Value_object__object;
}


bool StageEntity__UseResumeBgmWhenPlayMovie(StageEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4E7834C & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_24996/*"useResumeBgmWhenPlayMovie"*/);
    byte_4E7834C = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_24996/*"useResumeBgmWhenPlayMovie"*/, 0, 0) == 1;
}


bool StageEntity__checkCustomFOV(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4E7830E & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_19990/*"fov"*/);
    byte_4E7830E = 1;
  }
  return StageEntity__checkScript(this, (System_String_o *)StringLiteral_19990/*"fov"*/, v2);
}


bool StageEntity__checkScript(StageEntity_o *this, System_String_o *key, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_4E78309 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    byte_4E78309 = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                       (System_Collections_Generic_Dictionary_object__object__o *)script,
                       (Il2CppObject *)key,
                       (const MethodInfo_36017D8 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)script;
}


bool StageEntity__disableSystemFadeStartBattle(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4E78317 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_18937/*"disableSystemFadeStartBattle"*/);
    byte_4E78317 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_18937/*"disableSystemFadeStartBattle"*/, 0, v2) > 0;
}


int32_t StageEntity__getBattleMasterImageId(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4E78329 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_17329/*"battleMasterImageId"*/);
    byte_4E78329 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_17329/*"battleMasterImageId"*/, 0, v2);
}


float StageEntity__getCustomFOV(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4E7830D & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_19990/*"fov"*/);
    byte_4E7830D = 1;
  }
  return StageEntity__getScriptFloat(this, (System_String_o *)StringLiteral_19990/*"fov"*/, 0.0, v2);
}


int32_t StageEntity__getEnemyActCount(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t result; // w0
  StageEntity_c *v5; // x0

  if ( (byte_4E78315 & 1) == 0 )
  {
    sub_1D0F0B4(&StageEntity_TypeInfo);
    sub_1D0F0B4(&StringLiteral_6106/*"EnemyActCount"*/);
    byte_4E78315 = 1;
  }
  result = StageEntity__getScript(this, (System_String_o *)StringLiteral_6106/*"EnemyActCount"*/, 0, v2);
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

  if ( (byte_4E78310 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_19362/*"enemyMasterBattleId"*/);
    sub_1D0F0B4(&StringLiteral_19363/*"enemyMasterBattleIdByPlayerGender"*/);
    byte_4E78310 = 1;
  }
  ScriptIntArrayParam = StageEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_19363/*"enemyMasterBattleIdByPlayerGender"*/, 0, v2);
  if ( !ScriptIntArrayParam )
    return StageEntity__getScript(this, (System_String_o *)StringLiteral_19362/*"enemyMasterBattleId"*/, 0, v5);
  v6 = ScriptIntArrayParam;
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame )
    goto LABEL_13;
  if ( SelfUserGame->fields.genderType == 1 )
  {
    if ( LODWORD(v6->max_length) )
      return v6->m_Items[0];
LABEL_14:
    sub_1D0F314(SelfUserGame);
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame )
LABEL_13:
    sub_1D0F30C(SelfUserGame, v8);
  if ( SelfUserGame->fields.genderType != 2 )
    return StageEntity__getScript(this, (System_String_o *)StringLiteral_19362/*"enemyMasterBattleId"*/, 0, v5);
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

  if ( (byte_4E78313 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_object__ToArray__);
    sub_1D0F0B4(&System_Collections_Generic_List_object__TypeInfo);
    sub_1D0F0B4(&StringLiteral_16965/*"aiFieldIds"*/);
    byte_4E78313 = 1;
  }
  if ( !StageEntity__checkScript(this, (System_String_o *)StringLiteral_16965/*"aiFieldIds"*/, v2) )
    return 0;
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script
    || (script = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                              script,
                                                                              (Il2CppObject *)StringLiteral_16965/*"aiFieldIds"*/,
                                                                              (const MethodInfo_3601564 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0 )
  {
    sub_1D0F30C(script, v4);
  }
  naturalAligment = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment;
  if ( script->klass->_2.naturalAligment >= (unsigned int)naturalAligment
    && (System_Collections_Generic_List_object__c *)script->klass->_2.typeHierarchy[naturalAligment - 1] == System_Collections_Generic_List_object__TypeInfo )
  {
    return System_Collections_Generic_List_object___ToArray(
             (System_Collections_Generic_List_object__o *)script,
             (const MethodInfo_395DF68 *)Method_System_Collections_Generic_List_object__ToArray__);
  }
  sub_1D0F6A8(script);
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
  System_Converter_object__int__o *_9__29_0; // x20
  __int64 naturalAligment; // x10
  Il2CppObject *v11; // x21
  struct StageEntity___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  StageEntity_o *v20; // x0
  const MethodInfo *v21; // x1

  if ( (byte_4E78314 & 1) == 0 )
  {
    sub_1D0F0B4(&System_Converter_object__int__TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1D0F0B4(&int___TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_object__ConvertAll_int___);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1D0F0B4(&System_Collections_Generic_List_object__TypeInfo);
    sub_1D0F0B4(&Method_StageEntity___c__getNoEntryIds_b__29_0__);
    sub_1D0F0B4(&StageEntity___c_TypeInfo);
    sub_1D0F0B4(&StringLiteral_9623/*"NoEntryIds"*/);
    byte_4E78314 = 1;
  }
  script = this->fields.script;
  if ( !script )
    return (System_Int32_array *)sub_1D0F15C(int___TypeInfo, 0);
  v4 = (Il2CppObject *)StringLiteral_9623/*"NoEntryIds"*/;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)StringLiteral_9623/*"NoEntryIds"*/,
          (const MethodInfo_36017D8 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return (System_Int32_array *)sub_1D0F15C(int___TypeInfo, 0);
  Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !Item )
    goto LABEL_19;
  Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                      Item,
                                                                      v4,
                                                                      (const MethodInfo_3601564 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v7 = (System_Collections_Generic_List_object__o *)Item;
  v8 = StageEntity___c_TypeInfo;
  if ( !StageEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(StageEntity___c_TypeInfo);
    v8 = StageEntity___c_TypeInfo;
  }
  _9__29_0 = v8->static_fields->__9__29_0;
  if ( !v7
    || (v5 = System_Collections_Generic_List_object__TypeInfo,
        naturalAligment = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment,
        v7->klass->_2.naturalAligment >= (unsigned int)naturalAligment)
    && (System_Collections_Generic_List_object__c *)v7->klass->_2.typeHierarchy[naturalAligment - 1] == System_Collections_Generic_List_object__TypeInfo )
  {
    if ( !_9__29_0 )
    {
      if ( !v8->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v8);
        v8 = StageEntity___c_TypeInfo;
      }
      v11 = (Il2CppObject *)v8->static_fields->__9;
      _9__29_0 = (System_Converter_object__int__o *)sub_1D0F300(System_Converter_object__int__TypeInfo);
      System_Converter_object__int____ctor(_9__29_0, v11, Method_StageEntity___c__getNoEntryIds_b__29_0__, 0);
      static_fields = StageEntity___c_TypeInfo->static_fields;
      static_fields->__9__29_0 = _9__29_0;
      sub_1D0F058(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__29_0,
        (int32_t)_9__29_0,
        v13,
        v14,
        v15,
        v16,
        v17,
        v18);
    }
    if ( v7 )
    {
      Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_List_object___ConvertAll_int_(
                                                                          v7,
                                                                          (System_Converter_T__TOutput__o *)_9__29_0,
                                                                          (const MethodInfo_316DB7C *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
      if ( Item )
        return System_Collections_Generic_List_int___ToArray(
                 (System_Collections_Generic_List_int__o *)Item,
                 (const MethodInfo_3940EA4 *)Method_System_Collections_Generic_List_int__ToArray__);
    }
LABEL_19:
    sub_1D0F30C(Item, v5);
  }
  sub_1D0F6A8(v7);
  return (System_Int32_array *)StageEntity__getEnemyActCount(v20, v21);
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
  if ( (byte_4E7830A & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1D0F0B4(&long_TypeInfo);
    byte_4E7830A = 1;
  }
  if ( !StageEntity__checkScript(this, key, *(const MethodInfo **)&defVal) )
    return v4;
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script
    || (script = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                              script,
                                                                              (Il2CppObject *)key,
                                                                              (const MethodInfo_3601564 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0 )
  {
    sub_1D0F30C(script, v7);
  }
  if ( script->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(script, long_TypeInfo, v9, v10);
  v15 = sub_1D0F6A8(script);
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

  if ( (byte_4E7830B & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1D0F0B4(&double_TypeInfo);
    byte_4E7830B = 1;
  }
  if ( !StageEntity__checkScript(this, key, method) )
    return defVal;
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script
    || (script = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                              script,
                                                                              (Il2CppObject *)key,
                                                                              (const MethodInfo_3601564 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0 )
  {
    sub_1D0F30C(script, v7);
  }
  if ( script->klass->_1.element_class == double_TypeInfo->_1.element_class )
    return *(double *)j_il2cpp_object_unbox_0(script, double_TypeInfo, v9, v10);
  sub_1D0F6A8(script);
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
  System_Converter_object__int__o *_9__20_0; // x20
  __int64 naturalAligment; // x10
  Il2CppObject *v13; // x21
  struct StageEntity___c_StaticFields *static_fields; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  System_Int32_array *result; // x0
  StageEntity_o *v22; // x0
  const MethodInfo *v23; // x1

  if ( (byte_4E7830C & 1) == 0 )
  {
    sub_1D0F0B4(&System_Converter_object__int__TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_object__ConvertAll_int___);
    sub_1D0F0B4(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1D0F0B4(&System_Collections_Generic_List_object__TypeInfo);
    sub_1D0F0B4(&Method_StageEntity___c__getScriptIntArrayParam_b__20_0__);
    sub_1D0F0B4(&StageEntity___c_TypeInfo);
    byte_4E7830C = 1;
  }
  if ( !StageEntity__checkScript(this, key, (const MethodInfo *)defVal) )
    return defVal;
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script )
    goto LABEL_18;
  script = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                        script,
                                                                        (Il2CppObject *)key,
                                                                        (const MethodInfo_3601564 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v9 = (System_Collections_Generic_List_object__o *)script;
  v10 = StageEntity___c_TypeInfo;
  if ( !StageEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(StageEntity___c_TypeInfo);
    v10 = StageEntity___c_TypeInfo;
  }
  _9__20_0 = v10->static_fields->__9__20_0;
  if ( !v9
    || (v7 = System_Collections_Generic_List_object__TypeInfo,
        naturalAligment = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment,
        v9->klass->_2.naturalAligment >= (unsigned int)naturalAligment)
    && (System_Collections_Generic_List_object__c *)v9->klass->_2.typeHierarchy[naturalAligment - 1] == System_Collections_Generic_List_object__TypeInfo )
  {
    if ( !_9__20_0 )
    {
      if ( !v10->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v10);
        v10 = StageEntity___c_TypeInfo;
      }
      v13 = (Il2CppObject *)v10->static_fields->__9;
      _9__20_0 = (System_Converter_object__int__o *)sub_1D0F300(System_Converter_object__int__TypeInfo);
      System_Converter_object__int____ctor(_9__20_0, v13, Method_StageEntity___c__getScriptIntArrayParam_b__20_0__, 0);
      static_fields = StageEntity___c_TypeInfo->static_fields;
      static_fields->__9__20_0 = _9__20_0;
      sub_1D0F058(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__20_0,
        (int32_t)_9__20_0,
        v15,
        v16,
        v17,
        v18,
        v19,
        v20);
    }
    if ( v9 )
    {
      script = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_List_object___ConvertAll_int_(
                                                                            v9,
                                                                            (System_Converter_T__TOutput__o *)_9__20_0,
                                                                            (const MethodInfo_316DB7C *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
      if ( script )
        return System_Collections_Generic_List_int___ToArray(
                 (System_Collections_Generic_List_int__o *)script,
                 (const MethodInfo_3940EA4 *)Method_System_Collections_Generic_List_int__ToArray__);
    }
LABEL_18:
    sub_1D0F30C(script, v7);
  }
  sub_1D0F6A8(v9);
  StageEntity__getCustomFOV(v22, v23);
  return result;
}


int32_t StageEntity__getShowTurnState(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4E7830F & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_23958/*"showTurn"*/);
    byte_4E7830F = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_23958/*"showTurn"*/, 2, v2);
}


int32_t StageEntity__getStartBattleAssetId(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4E78316 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_24133/*"startBattleAssetId"*/);
    byte_4E78316 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_24133/*"startBattleAssetId"*/, 0, v2);
}


int32_t StageEntity__getWave(StageEntity_o *this, const MethodInfo *method)
{
  return this->fields.wave;
}


bool StageEntity__isNotDisplayRemain(StageEntity_o *this, const MethodInfo *method)
{
  return this->fields.enemyInfo == 2;
}


void StageEntity_ChangeBgEntry___ctor(StageEntity_ChangeBgEntry_o *this, const MethodInfo *method)
{
  this->fields.bgId = -1;
  System_Object___ctor((Il2CppObject *)this, 0);
}


void StageEntity__GetExBattleUiSkillEffectIds_d__85___ctor(
        StageEntity__GetExBattleUiSkillEffectIds_d__85_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
  this->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0);
}


bool StageEntity__GetExBattleUiSkillEffectIds_d__85__MoveNext(
        StageEntity__GetExBattleUiSkillEffectIds_d__85_o *this,
        const MethodInfo *method)
{
  StageEntity__GetExBattleUiSkillEffectIds_d__85_o *v2; // x20
  int32_t _1__state; // w8
  StageEntity_o *_4__this; // x0
  ExtraBattleUserInterfaceData_JsonConvertData_array *v5; // x19
  System_Collections_Generic_IEnumerable_int__o *SkillEffectIds; // x0
  __int64 v7; // x1
  System_Collections_Generic_IEnumerable_int__o *v8; // x19
  System_Collections_Generic_IEnumerable_int__c *klass; // x8
  __int64 v10; // x9
  int32_t *p_offset; // x10
  __int64 v12; // x0
  struct System_Collections_Generic_IEnumerator_int__o *v13; // x1
  StageEntity__GetExBattleUiSkillEffectIds_d__85_o *v14; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  struct System_Collections_Generic_IEnumerator_int__o *_7__wrap1; // x19
  System_Collections_Generic_IEnumerator_int__c *v22; // x8
  __int64 v23; // x9
  int *v24; // x10
  __int64 v25; // x0
  const MethodInfo *v26; // x1
  struct System_Collections_Generic_IEnumerator_int__o *v27; // x19
  System_Collections_Generic_IEnumerator_int__c *v28; // x8
  __int64 v29; // x9
  int32_t *v30; // x10
  __int64 v31; // x0
  StageEntity__GetExBattleUiSkillEffectIds_d__85_o *v32; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  bool result; // w0
  int32_t v40; // w0
  StageEntity__GetExBattleUiSkillEffectIds_d__85_o *v41; // x9
  int32_t v42; // w8
  ExtraBattleUserInterfaceData_JsonConvertData_array *dataArray; // [xsp+18h] [xbp-28h] BYREF
  StageEntity__GetExBattleUiSkillEffectIds_d__85_o *v44; // [xsp+28h] [xbp-18h]

  v44 = this;
  v2 = this;
  if ( (byte_4E78352 & 1) == 0 )
  {
    sub_1D0F0B4(&ExtraBattleUserInterfaceData_TypeInfo);
    sub_1D0F0B4(&System_Collections_Generic_IEnumerable_int__TypeInfo);
    sub_1D0F0B4(&System_Collections_Generic_IEnumerator_int__TypeInfo);
    this = (StageEntity__GetExBattleUiSkillEffectIds_d__85_o *)sub_1D0F0B4(&System_Collections_IEnumerator_TypeInfo);
    byte_4E78352 = 1;
  }
  dataArray = 0;
  _1__state = v2->fields.__1__state;
  if ( _1__state != 1 )
  {
    if ( _1__state )
      return 0;
    _4__this = v2->fields.__4__this;
    v2->fields.__1__state = -1;
    if ( !_4__this )
      sub_1D0F30C(0, method);
    if ( !StageEntity__HasExtraBattleUserInterfaceData(_4__this, &dataArray, 0) )
      return 0;
    v5 = dataArray;
    if ( !ExtraBattleUserInterfaceData_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ExtraBattleUserInterfaceData_TypeInfo);
    SkillEffectIds = ExtraBattleUserInterfaceData__GetSkillEffectIds(v5, 0);
    v8 = SkillEffectIds;
    if ( !SkillEffectIds )
      sub_1D0F30C(0, v7);
    klass = SkillEffectIds->klass;
    v10 = *(unsigned __int16 *)&SkillEffectIds->klass->_2.rank;
    if ( *(_WORD *)&SkillEffectIds->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_int__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
      {
        --v10;
        p_offset += 4;
        if ( !v10 )
          goto LABEL_14;
      }
      v12 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_14:
      v12 = sub_1CE5430(SkillEffectIds, System_Collections_Generic_IEnumerable_int__TypeInfo, 0);
    }
    v13 = (struct System_Collections_Generic_IEnumerator_int__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_int__o *, _QWORD))v12)(
                                                                    v8,
                                                                    *(_QWORD *)(v12 + 8));
    v14 = v44;
    v44->fields.__7__wrap1 = v13;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)&v14->fields.__7__wrap1, (int32_t)v13, v15, v16, v17, v18, v19, v20);
    v2 = v44;
  }
  _7__wrap1 = v2->fields.__7__wrap1;
  v2->fields.__1__state = -3;
  if ( !_7__wrap1 )
    sub_1D0F30C(this, method);
  v22 = _7__wrap1->klass;
  v23 = *(unsigned __int16 *)&_7__wrap1->klass->_2.rank;
  if ( *(_WORD *)&_7__wrap1->klass->_2.rank )
  {
    v24 = &v22->_1.interfaceOffsets->offset;
    while ( *((System_Collections_IEnumerator_c **)v24 - 1) != System_Collections_IEnumerator_TypeInfo )
    {
      --v23;
      v24 += 4;
      if ( !v23 )
        goto LABEL_22;
    }
    v25 = (__int64)&v22->vtable[*v24];
  }
  else
  {
LABEL_22:
    v25 = sub_1CE5430(_7__wrap1, System_Collections_IEnumerator_TypeInfo, 0);
  }
  if ( ((*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_int__o *, _QWORD))v25)(
          _7__wrap1,
          *(_QWORD *)(v25 + 8))
      & 1) == 0 )
  {
    StageEntity__GetExBattleUiSkillEffectIds_d__85____m__Finally1(v44, v26);
    v32 = v44;
    v44->fields.__7__wrap1 = 0;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)&v32->fields.__7__wrap1, 0, v33, v34, v35, v36, v37, v38);
    return 0;
  }
  v27 = v44->fields.__7__wrap1;
  if ( !v27 )
    sub_1D0F30C(v44, v26);
  v28 = v27->klass;
  v29 = *(unsigned __int16 *)&v27->klass->_2.rank;
  if ( *(_WORD *)&v27->klass->_2.rank )
  {
    v30 = &v28->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerator_int__c **)v30 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
    {
      --v29;
      v30 += 4;
      if ( !v29 )
        goto LABEL_30;
    }
    v31 = (__int64)&v28->vtable[*v30];
  }
  else
  {
LABEL_30:
    v31 = sub_1CE5430(v44->fields.__7__wrap1, System_Collections_Generic_IEnumerator_int__TypeInfo, 0);
  }
  v40 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_int__o *, _QWORD))v31)(
          v27,
          *(_QWORD *)(v31 + 8));
  v41 = v44;
  v42 = v40;
  result = 1;
  v44->fields.__1__state = 1;
  v41->fields.__2__current = v42;
  return result;
}


System_Collections_Generic_IEnumerator_int__o *StageEntity__GetExBattleUiSkillEffectIds_d__85__System_Collections_Generic_IEnumerable_System_Int32__GetEnumerator(
        StageEntity__GetExBattleUiSkillEffectIds_d__85_o *this,
        const MethodInfo *method)
{
  int32_t l__initialThreadId; // w20
  __int64 v4; // x20
  struct StageEntity_o *_4__this; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  if ( (byte_4E78355 & 1) == 0 )
  {
    sub_1D0F0B4(&StageEntity__GetExBattleUiSkillEffectIds_d__85_TypeInfo);
    byte_4E78355 = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0)) )
  {
    this->fields.__1__state = 0;
  }
  else
  {
    v4 = sub_1D0F300(StageEntity__GetExBattleUiSkillEffectIds_d__85_TypeInfo);
    System_Object___ctor((Il2CppObject *)v4, 0);
    *(_DWORD *)(v4 + 16) = 0;
    *(_DWORD *)(v4 + 24) = System_Environment__get_CurrentManagedThreadId(0);
    _4__this = this->fields.__4__this;
    *(_QWORD *)(v4 + 32) = _4__this;
    sub_1D0F058((GrandQuestFolderBoardItem_o *)(v4 + 32), (int32_t)_4__this, v6, v7, v8, v9, v10, v11);
    return (System_Collections_Generic_IEnumerator_int__o *)v4;
  }
  return (System_Collections_Generic_IEnumerator_int__o *)this;
}


int32_t StageEntity__GetExBattleUiSkillEffectIds_d__85__System_Collections_Generic_IEnumerator_System_Int32__get_Current(
        StageEntity__GetExBattleUiSkillEffectIds_d__85_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn StageEntity__GetExBattleUiSkillEffectIds_d__85__System_Collections_IEnumerator_Reset(
        StageEntity__GetExBattleUiSkillEffectIds_d__85_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1D0F0C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1D0F300(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1D0F0C8(&Method_StageEntity__GetExBattleUiSkillEffectIds_d__85_System_Collections_IEnumerator_Reset__);
  sub_1D0F1DC(v3, v4);
}


Il2CppObject *StageEntity__GetExBattleUiSkillEffectIds_d__85__System_Collections_IEnumerator_get_Current(
        StageEntity__GetExBattleUiSkillEffectIds_d__85_o *this,
        const MethodInfo *method)
{
  int32_t _2__current; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4E78354 & 1) == 0 )
  {
    sub_1D0F0B4(&int_TypeInfo);
    byte_4E78354 = 1;
  }
  _2__current = this->fields.__2__current;
  return (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &_2__current);
}


void StageEntity__GetExBattleUiSkillEffectIds_d__85__System_IDisposable_Dispose(
        StageEntity__GetExBattleUiSkillEffectIds_d__85_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8

  _1__state = this->fields.__1__state;
  if ( _1__state == 1 || _1__state == -3 )
    StageEntity__GetExBattleUiSkillEffectIds_d__85____m__Finally1(this, method);
}


void StageEntity__GetExBattleUiSkillEffectIds_d__85____m__Finally1(
        StageEntity__GetExBattleUiSkillEffectIds_d__85_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_IEnumerator_int__o *_7__wrap1; // x19
  System_Collections_Generic_IEnumerator_int__c *klass; // x8
  __int64 v5; // x9
  int32_t *p_offset; // x10
  __int64 v7; // x0

  if ( (byte_4E78353 & 1) == 0 )
  {
    sub_1D0F0B4(&System_IDisposable_TypeInfo);
    byte_4E78353 = 1;
  }
  _7__wrap1 = this->fields.__7__wrap1;
  this->fields.__1__state = -1;
  if ( _7__wrap1 )
  {
    klass = _7__wrap1->klass;
    v5 = *(unsigned __int16 *)&_7__wrap1->klass->_2.rank;
    if ( *(_WORD *)&_7__wrap1->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v5;
        p_offset += 4;
        if ( !v5 )
          goto LABEL_8;
      }
      v7 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_8:
      v7 = sub_1CE5430(_7__wrap1, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(struct System_Collections_Generic_IEnumerator_int__o *, _QWORD))v7)(
      _7__wrap1,
      *(_QWORD *)(v7 + 8));
  }
}


void StageEntity___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4E7834E & 1) == 0 )
  {
    sub_1D0F0B4(&StageEntity___c_TypeInfo);
    byte_4E7834E = 1;
  }
  v1 = (Il2CppObject *)sub_1D0F300(StageEntity___c_TypeInfo);
  System_Object___ctor(v1, 0);
  StageEntity___c_TypeInfo->static_fields->__9 = (struct StageEntity___c_o *)v1;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)StageEntity___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void StageEntity___c___ctor(StageEntity___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


AiAllocationInfo_o *StageEntity___c___GetAiAllocationInfoList_b__62_0(
        StageEntity___c_o *this,
        Il2CppObject *obj,
        const MethodInfo *method)
{
  AiAllocationInfo_o *v4; // x20

  if ( (byte_4E78351 & 1) == 0 )
  {
    sub_1D0F0B4(&AiAllocationInfo_TypeInfo);
    byte_4E78351 = 1;
  }
  v4 = (AiAllocationInfo_o *)sub_1D0F300(AiAllocationInfo_TypeInfo);
  AiAllocationInfo___ctor(v4, obj, 0);
  return v4;
}


System_String_o *StageEntity___c___GetBattleStartVoiceIdArray_b__47_0(
        StageEntity___c_o *this,
        Il2CppObject *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1D0F30C(this, 0);
  return (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))x->klass->vtable[3].methodPtr)(
                              x,
                              x->klass->vtable[3].method);
}


int32_t StageEntity___c___GetChangeBgArray_b__27_0(
        StageEntity___c_o *this,
        StageEntity_ChangeBgEntry_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1D0F30C(this, 0);
  return x->fields.priority;
}


SubBgmPlayArgs_array *StageEntity___c___GetSubBgmPlayArgsArray_b__54_0(
        StageEntity___c_o *this,
        System_Collections_Generic_List_object__o *f,
        const MethodInfo *method)
{
  return SubBgmPlayArgs__ConvertFromEntityScript(f, 0);
}


int32_t StageEntity___c___TryGetOverwritePlayerSequenceSelectTypeByGender_b__76_1(
        StageEntity___c_o *this,
        BattleTreasureDeviceSequenceSelectType_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1D0F30C(this, 0);
  return x->fields.priority;
}


int32_t StageEntity___c___getNoEntryIds_b__29_0(StageEntity___c_o *this, Il2CppObject *x, const MethodInfo *method)
{
  System_String_o *v4; // x0

  if ( (byte_4E78350 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_1/*""*/);
    byte_4E78350 = 1;
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


int32_t StageEntity___c___getScriptIntArrayParam_b__20_0(
        StageEntity___c_o *this,
        Il2CppObject *x,
        const MethodInfo *method)
{
  System_String_o *v4; // x0

  if ( (byte_4E7834F & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_1/*""*/);
    byte_4E7834F = 1;
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


void StageEntity___c__DisplayClass76_0___ctor(StageEntity___c__DisplayClass76_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool StageEntity___c__DisplayClass76_0___TryGetOverwritePlayerSequenceSelectTypeByGender_b__0(
        StageEntity___c__DisplayClass76_0_o *this,
        BattleTreasureDeviceSequenceSelectType_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1D0F30C(this, 0);
  return x->fields.svtId == this->fields.servantId;
}