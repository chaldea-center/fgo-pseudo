void StageEntity___cctor(const MethodInfo *method)
{
  if ( (byte_597153B & 1) == 0 )
  {
    sub_2213A60(&StageEntity_TypeInfo);
    byte_597153B = 1;
  }
  StageEntity_TypeInfo->static_fields->DEFAULT_ENEMY_ACTION_COUNT = 3;
}


void StageEntity___ctor(StageEntity_o *this, const MethodInfo *method)
{
  if ( (byte_59714F6 & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_string___ctor__);
    byte_59714F6 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3F0E590 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *StageEntity__CreatePK(int32_t questId, int32_t questPhase, int32_t wave, const MethodInfo *method)
{
  if ( (byte_59714F5 & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_59714F5 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           questId,
           questPhase,
           wave,
           (const MethodInfo_38548C4 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *StageEntity__CreatePrimaryKey(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t questId; // w20
  int32_t questPhase; // w21
  int32_t wave; // w19

  if ( (byte_59714F4 & 1) == 0 )
  {
    sub_2213A60(&StageEntity_TypeInfo);
    byte_59714F4 = 1;
  }
  questId = this->fields.questId;
  questPhase = this->fields.questPhase;
  wave = this->fields.wave;
  if ( !*(&StageEntity_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(StageEntity_TypeInfo, method);
  return StageEntity__CreatePK(questId, questPhase, wave, v2);
}


float StageEntity__EnemyExBattleUiPositionY(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5971536 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_19917/*"enemyExBattleUiPositionY"*/);
    byte_5971536 = 1;
  }
  return (float)StageEntity__getScript(this, (System_String_o *)StringLiteral_19917/*"enemyExBattleUiPositionY"*/, 0, v2);
}


System_Int32_array *StageEntity__GetAddUniqueCameraIds(
        StageEntity_o *this,
        System_Int32_array *defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_5971529 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_17371/*"addUniqueCameraIds"*/);
    byte_5971529 = 1;
  }
  return StageEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_17371/*"addUniqueCameraIds"*/, defVal, v3);
}


System_Object_array *StageEntity__GetAiActTypeAttackCommandCard(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_object__object__o *script; // x0
  __int64 naturalAligment; // x10

  if ( (byte_597150D & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_object__ToArray__);
    sub_2213A60(&System_Collections_Generic_List_object__TypeInfo);
    sub_2213A60(&StringLiteral_17416/*"aiActTypeAttackCommandCard"*/);
    byte_597150D = 1;
  }
  if ( !StageEntity__checkScript(this, (System_String_o *)StringLiteral_17416/*"aiActTypeAttackCommandCard"*/, v2) )
    return 0;
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script
    || (script = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                              script,
                                                                              (Il2CppObject *)StringLiteral_17416/*"aiActTypeAttackCommandCard"*/,
                                                                              (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0
    || (naturalAligment = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment,
        script->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (System_Collections_Generic_List_object__c *)script->klass->_2.typeHierarchy[naturalAligment - 1] != System_Collections_Generic_List_object__TypeInfo )
  {
    sub_2213CDC(script, v4);
  }
  return System_Collections_Generic_List_object___ToArray(
           (System_Collections_Generic_List_object__o *)script,
           (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_object__ToArray__);
}


int32_t StageEntity__GetAiActTypeAttackCommandCardType(
        StageEntity_o *this,
        BattleServantData_o *enemyServantData,
        const MethodInfo *method)
{
  __int64 AiActTypeAttackCommandCard; // x0
  __int64 v6; // x8
  __int64 v7; // x20
  unsigned __int64 v8; // x23
  __int64 v9; // x29
  System_Collections_Generic_Dictionary_object__object__o *v10; // x21
  __int64 naturalAligment; // x10
  __int64 v12; // x1
  struct BattleDeckServantData_o *deckSvt; // x8
  int dropInfos; // w28
  __int64 v15; // x2
  __int64 v16; // x1
  StageEntity_o *v17; // x0
  const MethodInfo *v18; // x1

  if ( (byte_597150E & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_2213A60(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_2213A60(&StringLiteral_23455/*"npcServantId"*/);
    sub_2213A60(&StringLiteral_18547/*"cardType"*/);
    byte_597150E = 1;
  }
  AiActTypeAttackCommandCard = (__int64)StageEntity__GetAiActTypeAttackCommandCard(
                                          this,
                                          (const MethodInfo *)enemyServantData);
  if ( AiActTypeAttackCommandCard )
  {
    v6 = *(_QWORD *)(AiActTypeAttackCommandCard + 24);
    v7 = AiActTypeAttackCommandCard;
    if ( (int)v6 < 1 )
    {
LABEL_18:
      LODWORD(AiActTypeAttackCommandCard) = 0;
    }
    else
    {
      v8 = 0;
      v9 = AiActTypeAttackCommandCard + 32;
      while ( 1 )
      {
        if ( v8 >= (unsigned int)v6 )
          sub_2213CE4(AiActTypeAttackCommandCard);
        v10 = *(System_Collections_Generic_Dictionary_object__object__o **)(v9 + 8 * v8);
        if ( v10 )
        {
          naturalAligment = System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.naturalAligment;
          if ( v10->klass->_2.naturalAligment >= (unsigned int)naturalAligment
            && (System_Collections_Generic_Dictionary_string__object__c *)v10->klass->_2.typeHierarchy[naturalAligment - 1] == System_Collections_Generic_Dictionary_string__object__TypeInfo )
          {
            AiActTypeAttackCommandCard = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                           *(System_Collections_Generic_Dictionary_object__object__o **)(v9 + 8 * v8),
                                           (Il2CppObject *)StringLiteral_23455/*"npcServantId"*/,
                                           (const MethodInfo_3FFDE04 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
            if ( (AiActTypeAttackCommandCard & 1) != 0 )
            {
              if ( !enemyServantData )
                goto LABEL_24;
              deckSvt = enemyServantData->fields.deckSvt;
              if ( !deckSvt )
                goto LABEL_24;
              dropInfos = (int)deckSvt->fields.dropInfos;
              AiActTypeAttackCommandCard = (__int64)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                      v10,
                                                      (Il2CppObject *)StringLiteral_23455/*"npcServantId"*/,
                                                      (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
              if ( !AiActTypeAttackCommandCard )
                goto LABEL_24;
              v16 = qword_5984368;
              if ( *(_QWORD *)(*(_QWORD *)AiActTypeAttackCommandCard + 64LL) != *(_QWORD *)(qword_5984368 + 64) )
                goto LABEL_25;
              AiActTypeAttackCommandCard = j_il2cpp_object_unbox_0(AiActTypeAttackCommandCard, qword_5984368, v15);
              if ( dropInfos == *(_DWORD *)AiActTypeAttackCommandCard )
              {
                AiActTypeAttackCommandCard = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                               v10,
                                               (Il2CppObject *)StringLiteral_18547/*"cardType"*/,
                                               (const MethodInfo_3FFDE04 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
                if ( (AiActTypeAttackCommandCard & 1) != 0 )
                  break;
              }
            }
          }
        }
        LODWORD(v6) = *(_DWORD *)(v7 + 24);
        if ( (__int64)++v8 >= (int)v6 )
          goto LABEL_18;
      }
      AiActTypeAttackCommandCard = (__int64)System_Collections_Generic_Dictionary_object__object___get_Item(
                                              v10,
                                              (Il2CppObject *)StringLiteral_18547/*"cardType"*/,
                                              (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !AiActTypeAttackCommandCard )
LABEL_24:
        sub_2213CDC(AiActTypeAttackCommandCard, v12);
      v16 = qword_5984368;
      if ( *(_QWORD *)(*(_QWORD *)AiActTypeAttackCommandCard + 64LL) == *(_QWORD *)(qword_5984368 + 64) )
      {
        LODWORD(AiActTypeAttackCommandCard) = *(_DWORD *)j_il2cpp_object_unbox_0(
                                                           AiActTypeAttackCommandCard,
                                                           qword_5984368,
                                                           v15);
      }
      else
      {
LABEL_25:
        sub_221405C(AiActTypeAttackCommandCard, v16, v15);
        LODWORD(AiActTypeAttackCommandCard) = StageEntity__IsDisableFieldMotion(v17, v18);
      }
    }
  }
  return AiActTypeAttackCommandCard;
}


System_Collections_Generic_List_AiAllocationInfo__o *StageEntity__GetAiAllocationInfoList(
        StageEntity_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Value_object; // x19
  __int64 v4; // x1
  StageEntity___c_c *v6; // x0
  struct StageEntity___c_StaticFields *static_fields; // x8
  System_Func_object__object__o *_9__62_0; // x20
  Il2CppObject *v9; // x21
  struct StageEntity___c_StaticFields *v10; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0

  if ( (byte_5971521 & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_GetValue_List_object____);
    sub_2213A60(&Method_System_Linq_Enumerable_Select_object__AiAllocationInfo___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToList_AiAllocationInfo___);
    sub_2213A60(&System_Func_object__AiAllocationInfo__TypeInfo);
    sub_2213A60(&Method_StageEntity___c__GetAiAllocationInfoList_b__62_0__);
    sub_2213A60(&StageEntity___c_TypeInfo);
    sub_2213A60(&StringLiteral_17417/*"aiAllocations"*/);
    byte_5971521 = 1;
  }
  Value_object = BasicHelper__GetValue_object_(
                   this->fields.script,
                   (System_String_o *)StringLiteral_17417/*"aiAllocations"*/,
                   0,
                   (const MethodInfo_3814090 *)Method_BasicHelper_GetValue_List_object____);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)Value_object, 0) )
    return 0;
  v6 = StageEntity___c_TypeInfo;
  if ( !*(&StageEntity___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(StageEntity___c_TypeInfo, v4);
    v6 = StageEntity___c_TypeInfo;
  }
  static_fields = v6->static_fields;
  _9__62_0 = (System_Func_object__object__o *)static_fields->__9__62_0;
  if ( !_9__62_0 )
  {
    if ( !*(&v6->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v6, v4);
      static_fields = StageEntity___c_TypeInfo->static_fields;
    }
    v9 = (Il2CppObject *)static_fields->__9;
    _9__62_0 = (System_Func_object__object__o *)sub_2213CCC(System_Func_object__AiAllocationInfo__TypeInfo);
    System_Func_object__object____ctor(_9__62_0, v9, Method_StageEntity___c__GetAiAllocationInfoList_b__62_0__, 0);
    v10 = StageEntity___c_TypeInfo->static_fields;
    v10->__9__62_0 = (struct System_Func_object__AiAllocationInfo__o *)_9__62_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v10->__9__62_0, (int32_t)_9__62_0, v11, v12, v13, v14, v15, v16);
  }
  v17 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)Value_object,
                                                               (System_Func_TSource__TResult__o *)_9__62_0,
                                                               (const MethodInfo_38911C8 *)Method_System_Linq_Enumerable_Select_object__AiAllocationInfo___);
  return (System_Collections_Generic_List_AiAllocationInfo__o *)System_Linq_Enumerable__ToList_object_(
                                                                  v17,
                                                                  (const MethodInfo_38A0DF0 *)Method_System_Linq_Enumerable_ToList_AiAllocationInfo___);
}


System_Int32_array *StageEntity__GetAssumedBattleScriptIds(StageEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5971537 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_17637/*"assumedBattleScriptIds"*/);
    byte_5971537 = 1;
  }
  return EntityScriptUtil__GetIntArray(this->fields.script, (System_String_o *)StringLiteral_17637/*"assumedBattleScriptIds"*/, 0, 0);
}


System_Int32_array *StageEntity__GetAssumedEffectId(StageEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5971525 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_17638/*"assumedEffectId"*/);
    byte_5971525 = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_17638/*"assumedEffectId"*/, 0);
}


System_String_array *StageEntity__GetAssumedVoiceAssetNames(StageEntity_o *this, const MethodInfo *method)
{
  if ( (byte_597152A & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_17639/*"assumedVoiceAssetNames"*/);
    byte_597152A = 1;
  }
  return EntityScriptUtil__GetStringArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_17639/*"assumedVoiceAssetNames"*/, 0);
}


System_String_array *StageEntity__GetBattleStartVoiceIdArray(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  Il2CppObject *ScriptObject; // x0
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *v6; // x19
  __int64 naturalAligment; // x10
  StageEntity___c_c *v9; // x0
  struct StageEntity___c_StaticFields *static_fields; // x8
  System_Converter_TInput__TOutput__o *_9__47_0; // x20
  Il2CppObject *v12; // x21
  struct StageEntity___c_StaticFields *v13; // x0
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_Collections_Generic_List_object__o *v20; // x0
  __int64 v21; // x1

  if ( (byte_5971514 & 1) == 0 )
  {
    sub_2213A60(&System_Converter_object__string__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_object__ConvertAll_string___);
    sub_2213A60(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_2213A60(&System_Collections_Generic_List_object__TypeInfo);
    sub_2213A60(&string___TypeInfo);
    sub_2213A60(&Method_StageEntity___c__GetBattleStartVoiceIdArray_b__47_0__);
    sub_2213A60(&StageEntity___c_TypeInfo);
    sub_2213A60(&StringLiteral_17821/*"battleStartVoiceIds"*/);
    byte_5971514 = 1;
  }
  ScriptObject = StageEntity__GetScriptObject(this, (System_String_o *)StringLiteral_17821/*"battleStartVoiceIds"*/, v2);
  if ( !ScriptObject )
    return (System_String_array *)sub_2213B20(string___TypeInfo, 0);
  v6 = (System_Collections_Generic_List_object__o *)ScriptObject;
  naturalAligment = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment;
  if ( ScriptObject->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (System_Collections_Generic_List_object__c *)ScriptObject->klass->_2.typeHierarchy[naturalAligment - 1] != System_Collections_Generic_List_object__TypeInfo )
  {
    return (System_String_array *)sub_2213B20(string___TypeInfo, 0);
  }
  v9 = StageEntity___c_TypeInfo;
  if ( !*(&StageEntity___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(StageEntity___c_TypeInfo, v5);
    v9 = StageEntity___c_TypeInfo;
  }
  static_fields = v9->static_fields;
  _9__47_0 = (System_Converter_TInput__TOutput__o *)static_fields->__9__47_0;
  if ( !_9__47_0 )
  {
    if ( !*(&v9->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v9, v5);
      static_fields = StageEntity___c_TypeInfo->static_fields;
    }
    v12 = (Il2CppObject *)static_fields->__9;
    _9__47_0 = (System_Converter_TInput__TOutput__o *)sub_2213CCC(System_Converter_object__string__TypeInfo);
    System_Converter_object__object____ctor(
      _9__47_0,
      v12,
      Method_StageEntity___c__GetBattleStartVoiceIdArray_b__47_0__,
      0);
    v13 = StageEntity___c_TypeInfo->static_fields;
    v13->__9__47_0 = (struct System_Converter_object__string__o *)_9__47_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v13->__9__47_0, (int32_t)_9__47_0, v14, v15, v16, v17, v18, v19);
  }
  v20 = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___ConvertAll_object_(
                                                       v6,
                                                       (System_Converter_T__TOutput__o *)_9__47_0,
                                                       (const MethodInfo_36D77D0 *)Method_System_Collections_Generic_List_object__ConvertAll_string___);
  if ( !v20 )
    sub_2213CDC(0, v21);
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  v20,
                                  (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_string__ToArray__);
}


int32_t StageEntity__GetBattleStartVoiceServantId(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5971512 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_17822/*"battleStartVoiceSvtId"*/);
    byte_5971512 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_17822/*"battleStartVoiceSvtId"*/, 0, v2);
}


int32_t StageEntity__GetBattleStartVoiceServantLimit(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5971513 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_17823/*"battleStartVoiceSvtLimit"*/);
    byte_5971513 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_17823/*"battleStartVoiceSvtLimit"*/, -1, v2);
}


System_Int32_array *StageEntity__GetBossIdAndChangeBgmId(StageEntity_o *this, const MethodInfo *method)
{
  System_Int32_array *v3; // x2
  const MethodInfo *v4; // x3

  if ( (byte_597150C & 1) == 0 )
  {
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&StringLiteral_18110/*"bossIdAndChangeBgmId"*/);
    byte_597150C = 1;
  }
  v3 = (System_Int32_array *)sub_2213B20(int___TypeInfo, 0);
  return StageEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_18110/*"bossIdAndChangeBgmId"*/, v3, v4);
}


StageEntity_ChangeBgEntry_array *StageEntity__GetChangeBgArray(StageEntity_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  long double v8; // q0
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
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  int monitor; // w8
  __int64 v32; // x23
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  Il2CppClass **v36; // x0
  StageEntity___c_c *v37; // x0
  struct StageEntity___c_StaticFields *static_fields; // x8
  System_Func_object__int__o *_9__27_0; // x22
  Il2CppObject *v40; // x23
  struct StageEntity___c_StaticFields *v41; // x0
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v48; // x0
  System_String_o *v49; // x2
  System_String_o *v50; // x3
  int32_t v51; // w4
  int32_t v52; // w5
  bool v53; // w6
  bool v54; // w7

  if ( (byte_5971500 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_Empty_StageEntity_ChangeBgEntry___);
    sub_2213A60(&Method_EntityScriptUtil_GetScriptValue_object__StageEntity_ChangeBgEntry_____);
    sub_2213A60(&Method_System_Linq_Enumerable_OrderByDescending_StageEntity_ChangeBgEntry__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_StageEntity_ChangeBgEntry___);
    sub_2213A60(&System_Func_object__StageEntity_ChangeBgEntry____TypeInfo);
    sub_2213A60(&System_Func_StageEntity_ChangeBgEntry__int__TypeInfo);
    sub_2213A60(&Method_JsonManager_DeserializeArray_StageEntity_ChangeBgEntry___);
    sub_2213A60(&Method_System_Collections_Generic_List_StageEntity_ChangeBgEntry__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_StageEntity_ChangeBgEntry___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_StageEntity_ChangeBgEntry__get_Count__);
    sub_2213A60(&System_Collections_Generic_List_StageEntity_ChangeBgEntry__TypeInfo);
    sub_2213A60(&Method_StageEntity___c__GetChangeBgArray_b__27_0__);
    sub_2213A60(&StageEntity___c_TypeInfo);
    sub_2213A60(&StringLiteral_18594/*"changeBgList"*/);
    byte_5971500 = 1;
  }
  p_changeBgArray = &this->fields.changeBgArray;
  result = this->fields.changeBgArray;
  if ( !result )
  {
    v12 = Method_System_Array_Empty_StageEntity_ChangeBgEntry___;
    v13 = *((_QWORD *)Method_System_Array_Empty_StageEntity_ChangeBgEntry___ + 7);
    if ( !v13 )
    {
      sub_224B964(Method_System_Array_Empty_StageEntity_ChangeBgEntry___);
      v13 = v12[7];
    }
    v14 = *(_QWORD *)(v13 + 16);
    if ( (*(_WORD *)(v14 + 309) & 1) == 0 )
      v14 = sub_224B908(v8);
    if ( !*(_DWORD *)(v14 + 228) )
      *(__n128 *)&v8 = j_il2cpp_runtime_class_init_0(v14, method);
    v15 = *(_QWORD *)(v12[7] + 16LL);
    if ( (*(_WORD *)(v15 + 309) & 1) == 0 )
      v15 = sub_224B908(v8);
    v16 = *(struct StageEntity_ChangeBgEntry_array ***)(v15 + 184);
    v17 = *v16;
    this->fields.changeBgArray = *v16;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.changeBgArray, (int32_t)v17, v2, v3, v4, v5, v6, v7);
    script = this->fields.script;
    v19 = (System_Func_object__object__o *)sub_2213CCC(System_Func_object__StageEntity_ChangeBgEntry____TypeInfo);
    System_Func_object__object____ctor(v19, 0, Method_JsonManager_DeserializeArray_StageEntity_ChangeBgEntry___, 0);
    ScriptValue_object__object = EntityScriptUtil__GetScriptValue_object__object_(
                                   script,
                                   (System_String_o *)StringLiteral_18594/*"changeBgList"*/,
                                   (System_Func_TSource__TDestination__o *)v19,
                                   0,
                                   (const MethodInfo_3861168 *)Method_EntityScriptUtil_GetScriptValue_object__StageEntity_ChangeBgEntry_____);
    if ( ScriptValue_object__object )
    {
      v21 = ScriptValue_object__object;
      if ( ScriptValue_object__object[1].monitor )
      {
        v22 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_StageEntity_ChangeBgEntry__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v22,
          (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_StageEntity_ChangeBgEntry___ctor__);
        monitor = (int)v21[1].monitor;
        if ( monitor >= 1 )
        {
          v32 = 0;
          while ( 1 )
          {
            if ( (unsigned int)v32 >= monitor )
              sub_2213CE4(v23);
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
                  *(const MethodInfo_4483C64 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
              }
              else
              {
                v36 = &items->obj.klass + size;
                v22->fields._size = size + 1;
                v36[4] = (Il2CppClass *)v24;
                sub_2213A04((MissionNaviTransitionBoardItem_o *)(v36 + 4), v24, v25, v26, v27, v28, v29, v30);
              }
            }
            monitor = (int)v21[1].monitor;
            if ( (int)++v32 >= monitor )
              goto LABEL_25;
          }
LABEL_37:
          sub_2213CDC(v23, v24);
        }
LABEL_25:
        if ( !v22 )
          goto LABEL_37;
        if ( v22->fields._size >= 1 )
        {
          v37 = StageEntity___c_TypeInfo;
          if ( !*(&StageEntity___c_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(StageEntity___c_TypeInfo, v24);
            v37 = StageEntity___c_TypeInfo;
          }
          static_fields = v37->static_fields;
          _9__27_0 = (System_Func_object__int__o *)static_fields->__9__27_0;
          if ( !_9__27_0 )
          {
            if ( !*(&v37->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(v37, v24);
              static_fields = StageEntity___c_TypeInfo->static_fields;
            }
            v40 = (Il2CppObject *)static_fields->__9;
            _9__27_0 = (System_Func_object__int__o *)sub_2213CCC(System_Func_StageEntity_ChangeBgEntry__int__TypeInfo);
            System_Func_object__int____ctor(_9__27_0, v40, Method_StageEntity___c__GetChangeBgArray_b__27_0__, 0);
            v41 = StageEntity___c_TypeInfo->static_fields;
            v41->__9__27_0 = (struct System_Func_StageEntity_ChangeBgEntry__int__o *)_9__27_0;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)&v41->__9__27_0,
              (int32_t)_9__27_0,
              v42,
              v43,
              v44,
              v45,
              v46,
              v47);
          }
          v48 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                                       (System_Collections_Generic_IEnumerable_TSource__o *)v22,
                                                                       (System_Func_TSource__TKey__o *)_9__27_0,
                                                                       (const MethodInfo_38891C4 *)Method_System_Linq_Enumerable_OrderByDescending_StageEntity_ChangeBgEntry__int___);
          v23 = System_Linq_Enumerable__ToArray_object_(
                  v48,
                  (const MethodInfo_389BB2C *)Method_System_Linq_Enumerable_ToArray_StageEntity_ChangeBgEntry___);
          if ( !this )
            goto LABEL_37;
          *p_changeBgArray = (StageEntity_ChangeBgEntry_array *)v23;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&this->fields.changeBgArray,
            (int32_t)v23,
            v49,
            v50,
            v51,
            v52,
            v53,
            v54);
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

  if ( (byte_5971509 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_19913/*"enemyCutInSvtIds"*/);
    sub_2213A60(&StringLiteral_23895/*"playerCutInSvtIds"*/);
    byte_5971509 = 1;
  }
  if ( isEnemy )
    v6 = (System_String_o **)&StringLiteral_19913/*"enemyCutInSvtIds"*/;
  else
    v6 = (System_String_o **)&StringLiteral_23895/*"playerCutInSvtIds"*/;
  return StageEntity__getScriptIntArrayParam(this, *v6, 0, v3);
}


int32_t StageEntity__GetEffectBgmId(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_597150A & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_19784/*"effectBgmId"*/);
    byte_597150A = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_19784/*"effectBgmId"*/, -1, v2);
}


int32_t StageEntity__GetEffectSvtId(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5971508 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_19797/*"effectSvtId"*/);
    byte_5971508 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_19797/*"effectSvtId"*/, 0, v2);
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

  if ( (byte_597151D & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    sub_2213A60(&StringLiteral_19915/*"enemyEntryOrder"*/);
    byte_597151D = 1;
  }
  ScriptIntArrayParam = StageEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_19915/*"enemyEntryOrder"*/, 0, v3);
  if ( ScriptIntArrayParam )
  {
    v7 = ScriptIntArrayParam;
    v8 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v8,
      (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
    max_length = v7->max_length;
    if ( (int)max_length >= 1 )
    {
      for ( i = 0; (__int64)i < (int)max_length; ++i )
      {
        if ( i >= (unsigned int)max_length )
          sub_2213CE4(v9);
        v10 = (unsigned int)(v7->m_Items[i] - 1);
        if ( (int)v10 < enemyFieldPosCount )
        {
          if ( !v8 )
            goto LABEL_17;
          items = v8->fields._items;
          v14 = Method_System_Collections_Generic_List_int__Add__;
          ++v8->fields._version;
          if ( !items )
            goto LABEL_17;
          size = v8->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v8,
              v10,
              *(const MethodInfo_4467270 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
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
LABEL_17:
      sub_2213CDC(v9, v10);
    return System_Collections_Generic_List_int___ToArray(
             v8,
             (const MethodInfo_4468CF0 *)Method_System_Collections_Generic_List_int__ToArray__);
  }
  else
  {
    v17 = System_Linq_Enumerable__Range(0, enemyFieldPosCount, 0);
    return System_Linq_Enumerable__ToArray_int_(
             (System_Collections_Generic_IEnumerable_TSource__o *)v17,
             (const MethodInfo_389B994 *)Method_System_Linq_Enumerable_ToArray_int___);
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

  if ( (byte_597151C & 1) == 0 )
  {
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    sub_2213A60(&StringLiteral_19910/*"enemyAutoTargetOrder"*/);
    byte_597151C = 1;
  }
  ScriptIntArrayParam = StageEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_19910/*"enemyAutoTargetOrder"*/, 0, v3);
  if ( !ScriptIntArrayParam )
    return (System_Int32_array *)sub_2213B20(int___TypeInfo, 0);
  v7 = ScriptIntArrayParam;
  v8 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v8,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  max_length = v7->max_length;
  if ( (int)max_length >= 1 )
  {
    for ( i = 0; (__int64)i < (int)max_length; ++i )
    {
      if ( i >= (unsigned int)max_length )
        sub_2213CE4(v9);
      v10 = (unsigned int)(v7->m_Items[i] - 1);
      if ( (int)v10 < enemyFieldPosCount )
      {
        if ( !v8 )
          goto LABEL_17;
        items = v8->fields._items;
        v14 = Method_System_Collections_Generic_List_int__Add__;
        ++v8->fields._version;
        if ( !items )
          goto LABEL_17;
        size = v8->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v8,
            v10,
            *(const MethodInfo_4467270 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
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
LABEL_17:
    sub_2213CDC(v9, v10);
  return System_Collections_Generic_List_int___ToArray(
           v8,
           (const MethodInfo_4468CF0 *)Method_System_Collections_Generic_List_int__ToArray__);
}


int32_t StageEntity__GetEnemyEntryMaxCountEachTurn(StageEntity_o *this, int32_t defaultValue, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_597151E & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_19914/*"enemyEntryMaxCountEachTurn"*/);
    byte_597151E = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_19914/*"enemyEntryMaxCountEachTurn"*/, defaultValue, v3);
}


int32_t StageEntity__GetEnemyFieldPosCount(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5971515 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_19918/*"enemyFieldPosCount"*/);
    byte_5971515 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_19918/*"enemyFieldPosCount"*/, 3, v2);
}


System_Single_array *StageEntity__GetEnemyMasterCommandSpellIconPosition(StageEntity_o *this, const MethodInfo *method)
{
  long double v2; // q0
  _QWORD *v4; // x20
  System_Collections_Generic_Dictionary_string__object__o *script; // x19
  __int64 v6; // x8
  __int64 v7; // x0
  __int64 v8; // x0

  if ( (byte_597152E & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_Empty_float___);
    sub_2213A60(&StringLiteral_19921/*"enemyMasterCommandSpellIconPosition"*/);
    byte_597152E = 1;
  }
  v4 = Method_System_Array_Empty_float___;
  script = this->fields.script;
  v6 = *((_QWORD *)Method_System_Array_Empty_float___ + 7);
  if ( !v6 )
  {
    sub_224B964(Method_System_Array_Empty_float___);
    v6 = v4[7];
  }
  v7 = *(_QWORD *)(v6 + 16);
  if ( (*(_WORD *)(v7 + 309) & 1) == 0 )
    v7 = sub_224B908(v2);
  if ( !*(_DWORD *)(v7 + 228) )
    *(__n128 *)&v2 = j_il2cpp_runtime_class_init_0(v7, method);
  v8 = *(_QWORD *)(v4[7] + 16LL);
  if ( (*(_WORD *)(v8 + 309) & 1) == 0 )
    v8 = sub_224B908(v2);
  return EntityScriptUtil__GetFloatArray(
           script,
           (System_String_o *)StringLiteral_19921/*"enemyMasterCommandSpellIconPosition"*/,
           **(System_Single_array ***)(v8 + 184),
           0);
}


System_Int32_array *StageEntity__GetEnemyMasterCommandSpellIconSize(StageEntity_o *this, const MethodInfo *method)
{
  if ( (byte_597152D & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_19922/*"enemyMasterCommandSpellIconSize"*/);
    byte_597152D = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_19922/*"enemyMasterCommandSpellIconSize"*/, 0);
}


int32_t StageEntity__GetEnemyUiId(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5971534 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_6306/*"EnemyUiId"*/);
    byte_5971534 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_6306/*"EnemyUiId"*/, -1, v2);
}


System_Collections_Generic_IEnumerable_int__o *StageEntity__GetExBattleUiSkillEffectIds(
        StageEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_5971538 & 1) == 0 )
  {
    sub_2213A60(&StageEntity__GetExBattleUiSkillEffectIds_d__85_TypeInfo);
    byte_5971538 = 1;
  }
  v3 = sub_2213CCC(StageEntity__GetExBattleUiSkillEffectIds_d__85_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = -2;
  *(_DWORD *)(v3 + 24) = System_Environment__get_CurrentManagedThreadId(0);
  *(_QWORD *)(v3 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_Generic_IEnumerable_int__o *)v3;
}


int32_t StageEntity__GetFadeType(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5971507 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_17819/*"battleStartFadeType"*/);
    byte_5971507 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_17819/*"battleStartFadeType"*/, 0, v2);
}


System_Int32_array *StageEntity__GetFieldCallServantId(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  System_Int32_array *result; // x0

  if ( (byte_5971510 & 1) == 0 )
  {
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&StringLiteral_18476/*"call"*/);
    byte_5971510 = 1;
  }
  result = StageEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_18476/*"call"*/, 0, v2);
  if ( !result )
    return (System_Int32_array *)sub_2213B20(int___TypeInfo, 0);
  return result;
}


System_Int32_array *StageEntity__GetFieldPosSkillId(StageEntity_o *this, const MethodInfo *method)
{
  System_Int32_array *v3; // x2
  const MethodInfo *v4; // x3

  if ( (byte_597151F & 1) == 0 )
  {
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&StringLiteral_20336/*"fieldPosSkillId"*/);
    byte_597151F = 1;
  }
  v3 = (System_Int32_array *)sub_2213B20(int___TypeInfo, 0);
  return StageEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_20336/*"fieldPosSkillId"*/, v3, v4);
}


System_Int32_array *StageEntity__GetFieldPosSkillLv(StageEntity_o *this, const MethodInfo *method)
{
  System_Int32_array *v3; // x2
  const MethodInfo *v4; // x3

  if ( (byte_5971520 & 1) == 0 )
  {
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&StringLiteral_20337/*"fieldPosSkillLv"*/);
    byte_5971520 = 1;
  }
  v3 = (System_Int32_array *)sub_2213B20(int___TypeInfo, 0);
  return StageEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_20337/*"fieldPosSkillLv"*/, v3, v4);
}


System_Int32_array *StageEntity__GetMultiEffectIds(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5971506 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_23255/*"multiEffectIds"*/);
    byte_5971506 = 1;
  }
  return StageEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_23255/*"multiEffectIds"*/, 0, v2);
}


int32_t StageEntity__GetPriorityBG(StageEntity_o *this, int32_t def, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_5971523 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_23961/*"priorityBG"*/);
    byte_5971523 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_23961/*"priorityBG"*/, def, v3);
}


int32_t StageEntity__GetPriorityBgm(StageEntity_o *this, int32_t def, const MethodInfo *method)
{
  __int64 v5; // x1
  const MethodInfo *v6; // x3
  Il2CppObject *Master_object; // x0
  __int64 v9; // x1

  if ( (byte_5971524 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_BgmMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&StringLiteral_23962/*"priorityBgm"*/);
    byte_5971524 = 1;
  }
  if ( StageEntity__checkScript(this, (System_String_o *)StringLiteral_23962/*"priorityBgm"*/, method) )
    return StageEntity__getScript(this, (System_String_o *)StringLiteral_23962/*"priorityBgm"*/, def, v6);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v5);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_BgmMaster___);
  if ( !Master_object )
    sub_2213CDC(0, v9);
  return BgmMaster__GetBgmPriority((BgmMaster_o *)Master_object, this->fields.bgmId, def, 0);
}


int32_t StageEntity__GetProhibitBgmChangeInTreasureDeviceAnim(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_597152B & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_23985/*"prohibitBgmChangeInTreasureDeviceAnim"*/);
    byte_597152B = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_23985/*"prohibitBgmChangeInTreasureDeviceAnim"*/, 0, v2);
}


BattleResumeBgmSetting_array *StageEntity__GetResumeBgmSettings(StageEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v4; // x1
  long double v5; // q0
  Il2CppObject *v6; // x19
  _QWORD *v8; // x19
  __int64 v9; // x8
  __int64 v10; // x0
  __int64 v11; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_5971539 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_Empty_BattleResumeBgmSetting___);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_2213A60(&Method_JsonManager_Deserialize_BattleResumeBgmSetting_____);
    sub_2213A60(&JsonManager_TypeInfo);
    sub_2213A60(&StringLiteral_24293/*"resumeBgmSettings"*/);
    byte_5971539 = 1;
  }
  script = this->fields.script;
  value = 0;
  if ( !script )
    sub_2213CDC(0, method);
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)script,
         (Il2CppObject *)StringLiteral_24293/*"resumeBgmSettings"*/,
         &value,
         (const MethodInfo_3FFF778 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    v6 = value;
    if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v4);
    return (BattleResumeBgmSetting_array *)JsonManager__Deserialize_object_(
                                             v6,
                                             (const MethodInfo_38D38E4 *)Method_JsonManager_Deserialize_BattleResumeBgmSetting_____);
  }
  else
  {
    v8 = Method_System_Array_Empty_BattleResumeBgmSetting___;
    v9 = *((_QWORD *)Method_System_Array_Empty_BattleResumeBgmSetting___ + 7);
    if ( !v9 )
    {
      sub_224B964(Method_System_Array_Empty_BattleResumeBgmSetting___);
      v9 = v8[7];
    }
    v10 = *(_QWORD *)(v9 + 16);
    if ( (*(_WORD *)(v10 + 309) & 1) == 0 )
      v10 = sub_224B908(v5);
    if ( !*(_DWORD *)(v10 + 228) )
      *(__n128 *)&v5 = j_il2cpp_runtime_class_init_0(v10, v4);
    v11 = *(_QWORD *)(v8[7] + 16LL);
    if ( (*(_WORD *)(v11 + 309) & 1) == 0 )
      v11 = sub_224B908(v5);
    return **(BattleResumeBgmSetting_array ***)(v11 + 184);
  }
}


Il2CppObject *StageEntity__GetScriptObject(StageEntity_o *this, System_String_o *key, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5971511 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    byte_5971511 = 1;
  }
  script = this->fields.script;
  value = 0;
  if ( !script )
    sub_2213CDC(0, key);
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)script,
         (Il2CppObject *)key,
         &value,
         (const MethodInfo_3FFF778 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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

  if ( (byte_5971531 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_11140/*"PlayerShadowImageId"*/);
    sub_2213A60(&StringLiteral_6304/*"EnemyShadowImageId"*/);
    byte_5971531 = 1;
  }
  if ( isEnemy )
    v5 = (System_String_o **)&StringLiteral_6304/*"EnemyShadowImageId"*/;
  else
    v5 = (System_String_o **)&StringLiteral_11140/*"PlayerShadowImageId"*/;
  return EntityScriptUtil__GetIntValue(this->fields.script, *v5, 0, 0);
}


int32_t StageEntity__GetSpecialShadowEffectId(StageEntity_o *this, bool isEnemy, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_string__object__o *script; // x20
  __int64 *v6; // x8
  System_String_o *v7; // x19
  int32_t IntValue; // w2

  if ( (byte_5971530 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_13514/*"SpecialShadowEffectId"*/);
    sub_2213A60(&StringLiteral_11141/*"PlayerSpecialShadowEffectId"*/);
    sub_2213A60(&StringLiteral_6305/*"EnemySpecialShadowEffectId"*/);
    byte_5971530 = 1;
  }
  script = this->fields.script;
  if ( isEnemy )
    v6 = &StringLiteral_6305/*"EnemySpecialShadowEffectId"*/;
  else
    v6 = &StringLiteral_11141/*"PlayerSpecialShadowEffectId"*/;
  v7 = (System_String_o *)*v6;
  IntValue = EntityScriptUtil__GetIntValue(script, (System_String_o *)StringLiteral_13514/*"SpecialShadowEffectId"*/, 0, 0);
  return EntityScriptUtil__GetIntValue(script, v7, IntValue, 0);
}


int32_t StageEntity__GetStartBgmOffFlag(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_597150B & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_24916/*"startBgmOff"*/);
    byte_597150B = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_24916/*"startBgmOff"*/, 0, v2);
}


SubBgmPlayArgs_array *StageEntity__GetSubBgmPlayArgsArray(StageEntity_o *this, const MethodInfo *method)
{
  StageEntity___c_c *v3; // x0
  struct StageEntity___c_StaticFields *static_fields; // x8
  System_Func_object__object__o *_9__54_0; // x20
  Il2CppObject *v6; // x21
  struct StageEntity___c_StaticFields *v7; // x0
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7

  if ( (byte_5971519 & 1) == 0 )
  {
    sub_2213A60(&Method_EntityScriptUtil_GetScriptValue_List_object___SubBgmPlayArgs_____);
    sub_2213A60(&System_Func_List_object___SubBgmPlayArgs____TypeInfo);
    sub_2213A60(&Method_StageEntity___c__GetSubBgmPlayArgsArray_b__54_0__);
    sub_2213A60(&StageEntity___c_TypeInfo);
    sub_2213A60(&StringLiteral_25024/*"subBgms"*/);
    byte_5971519 = 1;
  }
  v3 = StageEntity___c_TypeInfo;
  if ( !*(&StageEntity___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(StageEntity___c_TypeInfo, method);
    v3 = StageEntity___c_TypeInfo;
  }
  static_fields = v3->static_fields;
  _9__54_0 = (System_Func_object__object__o *)static_fields->__9__54_0;
  if ( !_9__54_0 )
  {
    if ( !*(&v3->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v3, method);
      static_fields = StageEntity___c_TypeInfo->static_fields;
    }
    v6 = (Il2CppObject *)static_fields->__9;
    _9__54_0 = (System_Func_object__object__o *)sub_2213CCC(System_Func_List_object___SubBgmPlayArgs____TypeInfo);
    System_Func_object__object____ctor(_9__54_0, v6, Method_StageEntity___c__GetSubBgmPlayArgsArray_b__54_0__, 0);
    v7 = StageEntity___c_TypeInfo->static_fields;
    v7->__9__54_0 = (struct System_Func_List_object___SubBgmPlayArgs____o *)_9__54_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v7->__9__54_0, (int32_t)_9__54_0, v8, v9, v10, v11, v12, v13);
  }
  return (SubBgmPlayArgs_array *)EntityScriptUtil__GetScriptValue_object__object_(
                                   this->fields.script,
                                   (System_String_o *)StringLiteral_25024/*"subBgms"*/,
                                   (System_Func_TSource__TDestination__o *)_9__54_0,
                                   0,
                                   (const MethodInfo_3861168 *)Method_EntityScriptUtil_GetScriptValue_List_object___SubBgmPlayArgs_____);
}


int32_t StageEntity__GetSubBgmsPriority(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_597151A & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_25025/*"subBgmsPriority"*/);
    byte_597151A = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_25025/*"subBgmsPriority"*/, 0, v2);
}


System_Int32_array *StageEntity__GetWaveFieldMotionIds(
        StageEntity_o *this,
        System_Int32_array *defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_5971528 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_20334/*"fieldMotionIds"*/);
    byte_5971528 = 1;
  }
  return StageEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_20334/*"fieldMotionIds"*/, defVal, v3);
}


bool StageEntity__HasEnemyExBattleUiPositionY(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_5971535 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_19917/*"enemyExBattleUiPositionY"*/);
    byte_5971535 = 1;
  }
  return StageEntity__checkScript(this, (System_String_o *)StringLiteral_19917/*"enemyExBattleUiPositionY"*/, v2);
}


bool StageEntity__HasExtraBattleUserInterfaceData(
        StageEntity_o *this,
        ExtraBattleUserInterfaceData_JsonConvertData_array **dataArray,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  long double v8; // q0
  _QWORD *v11; // x21
  __int64 v12; // x8
  __int64 v13; // x0
  __int64 v14; // x0
  ExtraBattleUserInterfaceData_JsonConvertData_array **v15; // x8
  ExtraBattleUserInterfaceData_JsonConvertData_array *v16; // x1
  __int64 v17; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v19; // x1
  Il2CppObject *v20; // x20
  ExtraBattleUserInterfaceData_JsonConvertData_array *v21; // x0
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5971533 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_Empty_ExtraBattleUserInterfaceData_JsonConvertData___);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_2213A60(&Method_System_Linq_Enumerable_Any_ExtraBattleUserInterfaceData_JsonConvertData___);
    sub_2213A60(&Method_JsonManager_Deserialize_ExtraBattleUserInterfaceData_JsonConvertData_____);
    sub_2213A60(&JsonManager_TypeInfo);
    sub_2213A60(&StringLiteral_20209/*"exBattleUI"*/);
    byte_5971533 = 1;
  }
  v11 = Method_System_Array_Empty_ExtraBattleUserInterfaceData_JsonConvertData___;
  value = 0;
  v12 = *((_QWORD *)Method_System_Array_Empty_ExtraBattleUserInterfaceData_JsonConvertData___ + 7);
  if ( !v12 )
  {
    sub_224B964(Method_System_Array_Empty_ExtraBattleUserInterfaceData_JsonConvertData___);
    v12 = v11[7];
  }
  v13 = *(_QWORD *)(v12 + 16);
  if ( (*(_WORD *)(v13 + 309) & 1) == 0 )
    v13 = sub_224B908(v8);
  if ( !*(_DWORD *)(v13 + 228) )
    *(__n128 *)&v8 = j_il2cpp_runtime_class_init_0(v13, dataArray);
  v14 = *(_QWORD *)(v11[7] + 16LL);
  if ( (*(_WORD *)(v14 + 309) & 1) == 0 )
    v14 = sub_224B908(v8);
  v15 = *(ExtraBattleUserInterfaceData_JsonConvertData_array ***)(v14 + 184);
  v16 = *v15;
  *dataArray = *v15;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)dataArray,
    (int32_t)v16,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  script = this->fields.script;
  if ( !script )
    sub_2213CDC(0, v17);
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)script,
         (Il2CppObject *)StringLiteral_20209/*"exBattleUI"*/,
         &value,
         (const MethodInfo_3FFF778 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    v20 = value;
    if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v19);
    v21 = (ExtraBattleUserInterfaceData_JsonConvertData_array *)JsonManager__Deserialize_object_(
                                                                  v20,
                                                                  (const MethodInfo_38D38E4 *)Method_JsonManager_Deserialize_ExtraBattleUserInterfaceData_JsonConvertData_____);
    *dataArray = v21;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)dataArray, (int32_t)v21, v22, v23, v24, v25, v26, v27);
  }
  return System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)*dataArray,
           (const MethodInfo_38660DC *)Method_System_Linq_Enumerable_Any_ExtraBattleUserInterfaceData_JsonConvertData___);
}


bool StageEntity__Is3_6BossBattle(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5971516 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_1456/*"3.6BossBattle"*/);
    byte_5971516 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_1456/*"3.6BossBattle"*/, 0, v2) > 0;
}


bool StageEntity__IsClearFieldBuffWhenWaveStart(StageEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5971532 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_18796/*"clearFieldBuffWhenWaveStart"*/);
    byte_5971532 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_18796/*"clearFieldBuffWhenWaveStart"*/, 0, 0) != 0;
}


bool StageEntity__IsDisableFieldMotion(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_597150F & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_19485/*"disableUniqueFieldMotion"*/);
    byte_597150F = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_19485/*"disableUniqueFieldMotion"*/, 0, v2) > 0;
}


bool StageEntity__IsForceSetNormalEnemyStatusUI(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_597151B & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_7102/*"ForceSetNormalEnemyStatusUI"*/);
    byte_597151B = 1;
  }
  return StageEntity__checkScript(this, (System_String_o *)StringLiteral_7102/*"ForceSetNormalEnemyStatusUI"*/, v2);
}


bool StageEntity__IsReleaseUnusedAssetsWhenEntryMember(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_5971518 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_24223/*"releaseUnusedAssetsWhenEntryMember"*/);
    byte_5971518 = 1;
  }
  return StageEntity__checkScript(this, (System_String_o *)StringLiteral_24223/*"releaseUnusedAssetsWhenEntryMember"*/, v2);
}


bool StageEntity__IsShowEnemyMasterIconOnWaveStart(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_597152C & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_24721/*"showEnemyMasterIconOnWaveStart"*/);
    byte_597152C = 1;
  }
  return StageEntity__checkScript(this, (System_String_o *)StringLiteral_24721/*"showEnemyMasterIconOnWaveStart"*/, v2);
}


bool StageEntity__IsSkipWaveStartEffect(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5971527 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_24777/*"skipWaveStartEffect"*/);
    byte_5971527 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_24777/*"skipWaveStartEffect"*/, 0, v2) > 0;
}


bool StageEntity__IsSkipWaveStartFadeInSe(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_5971526 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_24778/*"skipWaveStartFadeInSe"*/);
    byte_5971526 = 1;
  }
  return StageEntity__checkScript(this, (System_String_o *)StringLiteral_24778/*"skipWaveStartFadeInSe"*/, v2);
}


bool StageEntity__IsSpecifiedBattleStartVoice(StageEntity_o *this, const MethodInfo *method)
{
  int32_t BattleStartVoiceServantId; // w20
  const MethodInfo *v4; // x1
  int32_t BattleStartVoiceServantLimit; // w0

  BattleStartVoiceServantId = StageEntity__GetBattleStartVoiceServantId(this, method);
  BattleStartVoiceServantLimit = StageEntity__GetBattleStartVoiceServantLimit(this, v4);
  return BattleStartVoiceServantId > 0 && BattleStartVoiceServantLimit >= 0;
}


bool StageEntity__IsSpecifiedBattleStartVoice_49959112(
        StageEntity_o *this,
        int32_t *servantId,
        int32_t *limit,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x1
  int BattleStartVoiceServantLimit; // w0

  *servantId = StageEntity__GetBattleStartVoiceServantId(this, (const MethodInfo *)servantId);
  BattleStartVoiceServantLimit = StageEntity__GetBattleStartVoiceServantLimit(this, v7);
  *limit = BattleStartVoiceServantLimit;
  return *servantId > 0 && BattleStartVoiceServantLimit >= 0;
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
  int max_length; // w8
  StageEntity_ChangeBgEntry_array *v12; // x23
  __int64 v13; // x24
  int32_t *v14; // x26
  int32_t v15; // w0
  int32_t IntValue; // w0
  System_Collections_Generic_Dictionary_string__object__o *script; // x8
  bool result; // w0

  if ( (byte_59714FF & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_18593/*"changeBgId"*/);
    sub_2213A60(&StringLiteral_18595/*"changeBgType"*/);
    byte_59714FF = 1;
  }
  *stageBgId = 0;
  *stageBgType = 0;
  IsOpenInBattle = StageEntity__GetChangeBgArray(this, (const MethodInfo *)stageBgId);
  if ( IsOpenInBattle && (max_length = IsOpenInBattle->max_length, v12 = IsOpenInBattle, max_length >= 1) )
  {
    v13 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v13 >= max_length )
        sub_2213CE4(IsOpenInBattle);
      v14 = (int32_t *)v12->m_Items[v13];
      if ( !v14 )
        sub_2213CDC(IsOpenInBattle, v10);
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
      max_length = v12->max_length;
      if ( (int)++v13 >= max_length )
        goto LABEL_11;
    }
    result = 1;
    *stageBgId = v14[4];
    *stageBgType = v14[5];
  }
  else
  {
LABEL_11:
    if ( EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_18593/*"changeBgId"*/, 0) )
    {
      IntValue = EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_18593/*"changeBgId"*/, 0, 0);
      script = this->fields.script;
      *stageBgId = IntValue;
      *stageBgType = EntityScriptUtil__GetIntValue(script, (System_String_o *)StringLiteral_18595/*"changeBgType"*/, 0, 0);
    }
    return *stageBgId > 0;
  }
  return result;
}


bool StageEntity__TryGetEnemyCountStartValue(StageEntity_o *this, int32_t *value, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t Script; // w0

  if ( (byte_5971522 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_19912/*"enemyCountStartValue"*/);
    byte_5971522 = 1;
  }
  Script = StageEntity__getScript(this, (System_String_o *)StringLiteral_19912/*"enemyCountStartValue"*/, 0x80000000, v3);
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
  __int64 v9; // x23
  Il2CppObject *Master_object; // x0
  __int64 monitor_high; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  Il2CppObject *v13; // x1
  const MethodInfo_3814850 *v14; // x3
  Il2CppObject *Value_object__object; // x0
  __int64 v16; // x1
  Il2CppObject *v17; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x21
  System_Func_object__bool__o *v19; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x0
  __int64 v21; // x1
  StageEntity___c_c *v22; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x21
  struct StageEntity___c_StaticFields *static_fields; // x9
  System_Func_object__int__o *_9__76_1; // x22
  Il2CppObject *v26; // x23
  struct StageEntity___c_StaticFields *v27; // x0
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x0
  System_Object_array *v35; // x21
  __int64 v36; // x1
  int max_length; // w8
  CommonReleaseMaster_o *v38; // x22
  __int64 v39; // x23
  Il2CppObject *v40; // x25

  if ( (byte_597152F & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_GetValue_string__object___);
    sub_2213A60(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_OrderByDescending_BattleTreasureDeviceSequenceSelectType__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_BattleTreasureDeviceSequenceSelectType___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_BattleTreasureDeviceSequenceSelectType___);
    sub_2213A60(&System_Func_BattleTreasureDeviceSequenceSelectType__bool__TypeInfo);
    sub_2213A60(&System_Func_BattleTreasureDeviceSequenceSelectType__int__TypeInfo);
    sub_2213A60(&Method_JsonManager_DeserializeArray_BattleTreasureDeviceSequenceSelectType___);
    sub_2213A60(&JsonManager_TypeInfo);
    sub_2213A60(&Method_StageEntity___c__TryGetOverwritePlayerSequenceSelectTypeByGender_b__76_1__);
    sub_2213A60(&Method_StageEntity___c__DisplayClass76_0__TryGetOverwritePlayerSequenceSelectTypeByGender_b__0__);
    sub_2213A60(&StageEntity___c__DisplayClass76_0_TypeInfo);
    sub_2213A60(&StageEntity___c_TypeInfo);
    sub_2213A60(&StringLiteral_23715/*"overwritePlayerSequenceSelectTypeByGender"*/);
    byte_597152F = 1;
  }
  v9 = sub_2213CCC(StageEntity___c__DisplayClass76_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_28;
  script = this->fields.script;
  *(_DWORD *)(v9 + 16) = servantId;
  v13 = (Il2CppObject *)StringLiteral_23715/*"overwritePlayerSequenceSelectTypeByGender"*/;
  v14 = (const MethodInfo_3814850 *)Method_BasicHelper_GetValue_string__object___;
  *genderSelectType = -1;
  *patternId = -1;
  Value_object__object = BasicHelper__GetValue_object__object_(
                           (System_Collections_Generic_Dictionary_K__V__o *)script,
                           v13,
                           0,
                           v14);
  if ( !Value_object__object )
    return (char)Value_object__object;
  v17 = Value_object__object;
  if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v16);
  v18 = (System_Collections_Generic_IEnumerable_TSource__o *)JsonManager__DeserializeArray_object_(
                                                               v17,
                                                               (const MethodInfo_38D3A34 *)Method_JsonManager_DeserializeArray_BattleTreasureDeviceSequenceSelectType___);
  v19 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_BattleTreasureDeviceSequenceSelectType__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v19,
    (Il2CppObject *)v9,
    Method_StageEntity___c__DisplayClass76_0__TryGetOverwritePlayerSequenceSelectTypeByGender_b__0__,
    0);
  v20 = System_Linq_Enumerable__Where_object_(
          v18,
          (System_Func_TSource__bool__o *)v19,
          (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_BattleTreasureDeviceSequenceSelectType___);
  v22 = StageEntity___c_TypeInfo;
  v23 = v20;
  if ( !*(&StageEntity___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(StageEntity___c_TypeInfo, v21);
    v22 = StageEntity___c_TypeInfo;
  }
  static_fields = v22->static_fields;
  _9__76_1 = (System_Func_object__int__o *)static_fields->__9__76_1;
  if ( !_9__76_1 )
  {
    if ( !*(&v22->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v22, v21);
      static_fields = StageEntity___c_TypeInfo->static_fields;
    }
    v26 = (Il2CppObject *)static_fields->__9;
    _9__76_1 = (System_Func_object__int__o *)sub_2213CCC(System_Func_BattleTreasureDeviceSequenceSelectType__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__76_1,
      v26,
      Method_StageEntity___c__TryGetOverwritePlayerSequenceSelectTypeByGender_b__76_1__,
      0);
    v27 = StageEntity___c_TypeInfo->static_fields;
    v27->__9__76_1 = (struct System_Func_BattleTreasureDeviceSequenceSelectType__int__o *)_9__76_1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v27->__9__76_1, (int32_t)_9__76_1, v28, v29, v30, v31, v32, v33);
  }
  v34 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                               v23,
                                                               (System_Func_TSource__TKey__o *)_9__76_1,
                                                               (const MethodInfo_38891C4 *)Method_System_Linq_Enumerable_OrderByDescending_BattleTreasureDeviceSequenceSelectType__int___);
  v35 = System_Linq_Enumerable__ToArray_object_(
          v34,
          (const MethodInfo_389BB2C *)Method_System_Linq_Enumerable_ToArray_BattleTreasureDeviceSequenceSelectType___);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v35, 0) )
    goto LABEL_25;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v36);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !v35 )
LABEL_28:
    sub_2213CDC(Master_object, monitor_high);
  max_length = v35->max_length;
  if ( max_length < 1 )
  {
LABEL_25:
    LOBYTE(Value_object__object) = 0;
    return (char)Value_object__object;
  }
  v38 = (CommonReleaseMaster_o *)Master_object;
  v39 = 0;
  while ( 1 )
  {
    if ( (unsigned int)v39 >= max_length )
      sub_2213CE4(Master_object);
    v40 = v35->m_Items[v39];
    if ( !v40 )
      goto LABEL_28;
    monitor_high = HIDWORD(v40[1].monitor);
    if ( (int)monitor_high < 1 )
      break;
    if ( !v38 )
      goto LABEL_28;
    Master_object = (Il2CppObject *)CommonReleaseMaster__IsOpen(v38, monitor_high, 0, 0, 0);
    if ( ((unsigned __int8)Master_object & 1) != 0 )
      break;
    max_length = v35->max_length;
    if ( (int)++v39 >= max_length )
      goto LABEL_25;
  }
  LOBYTE(Value_object__object) = 1;
  *genderSelectType = HIDWORD(v40[1].klass);
  *patternId = (int32_t)v40[1].monitor;
  return (char)Value_object__object;
}


bool StageEntity__UseResumeBgmWhenPlayMovie(StageEntity_o *this, const MethodInfo *method)
{
  if ( (byte_597153A & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_25834/*"useResumeBgmWhenPlayMovie"*/);
    byte_597153A = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_25834/*"useResumeBgmWhenPlayMovie"*/, 0, 0) == 1;
}


bool StageEntity__checkCustomFOV(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_59714FC & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_20555/*"fov"*/);
    byte_59714FC = 1;
  }
  return StageEntity__checkScript(this, (System_String_o *)StringLiteral_20555/*"fov"*/, v2);
}


bool StageEntity__checkScript(StageEntity_o *this, System_String_o *key, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_59714F7 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    byte_59714F7 = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                       (System_Collections_Generic_Dictionary_object__object__o *)script,
                       (Il2CppObject *)key,
                       (const MethodInfo_3FFDE04 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)script;
}


bool StageEntity__disableSystemFadeStartBattle(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5971505 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_19484/*"disableSystemFadeStartBattle"*/);
    byte_5971505 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_19484/*"disableSystemFadeStartBattle"*/, 0, v2) > 0;
}


int32_t StageEntity__getBattleMasterImageId(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5971517 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_17809/*"battleMasterImageId"*/);
    byte_5971517 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_17809/*"battleMasterImageId"*/, 0, v2);
}


float StageEntity__getCustomFOV(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_59714FB & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_20555/*"fov"*/);
    byte_59714FB = 1;
  }
  return StageEntity__getScriptFloat(this, (System_String_o *)StringLiteral_20555/*"fov"*/, 0.0, v2);
}


int32_t StageEntity__getEnemyActCount(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t result; // w0
  __int64 v5; // x1
  StageEntity_c *v6; // x0

  if ( (byte_5971503 & 1) == 0 )
  {
    sub_2213A60(&StageEntity_TypeInfo);
    sub_2213A60(&StringLiteral_6300/*"EnemyActCount"*/);
    byte_5971503 = 1;
  }
  result = StageEntity__getScript(this, (System_String_o *)StringLiteral_6300/*"EnemyActCount"*/, 0, v2);
  if ( result <= 0 )
  {
    v6 = StageEntity_TypeInfo;
    if ( !*(&StageEntity_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(StageEntity_TypeInfo, v5);
      v6 = StageEntity_TypeInfo;
    }
    return v6->static_fields->DEFAULT_ENEMY_ACTION_COUNT;
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

  if ( (byte_59714FE & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_19919/*"enemyMasterBattleId"*/);
    sub_2213A60(&StringLiteral_19920/*"enemyMasterBattleIdByPlayerGender"*/);
    byte_59714FE = 1;
  }
  ScriptIntArrayParam = StageEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_19920/*"enemyMasterBattleIdByPlayerGender"*/, 0, v2);
  if ( !ScriptIntArrayParam )
    return StageEntity__getScript(this, (System_String_o *)StringLiteral_19919/*"enemyMasterBattleId"*/, 0, v5);
  v6 = ScriptIntArrayParam;
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame )
    goto LABEL_13;
  if ( SelfUserGame->fields.genderType == 1 )
  {
    if ( LODWORD(v6->max_length) )
      return v6->m_Items[0];
LABEL_14:
    sub_2213CE4(SelfUserGame);
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame )
LABEL_13:
    sub_2213CDC(SelfUserGame, v8);
  if ( SelfUserGame->fields.genderType != 2 )
    return StageEntity__getScript(this, (System_String_o *)StringLiteral_19919/*"enemyMasterBattleId"*/, 0, v5);
  if ( (v6->max_length & 0xFFFFFFFE) == 0 )
    goto LABEL_14;
  return v6->m_Items[1];
}


System_Object_array *StageEntity__getFieldAis(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_object__object__o *script; // x0
  __int64 v6; // x2
  __int64 naturalAligment; // x9
  StageEntity_o *v9; // x0
  const MethodInfo *v10; // x1

  if ( (byte_5971501 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_object__ToArray__);
    sub_2213A60(&System_Collections_Generic_List_object__TypeInfo);
    sub_2213A60(&StringLiteral_17418/*"aiFieldIds"*/);
    byte_5971501 = 1;
  }
  if ( !StageEntity__checkScript(this, (System_String_o *)StringLiteral_17418/*"aiFieldIds"*/, v2) )
    return 0;
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script
    || (script = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                              script,
                                                                              (Il2CppObject *)StringLiteral_17418/*"aiFieldIds"*/,
                                                                              (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0 )
  {
    sub_2213CDC(script, v4);
  }
  naturalAligment = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment;
  if ( script->klass->_2.naturalAligment >= (unsigned int)naturalAligment
    && (System_Collections_Generic_List_object__c *)script->klass->_2.typeHierarchy[naturalAligment - 1] == System_Collections_Generic_List_object__TypeInfo )
  {
    return System_Collections_Generic_List_object___ToArray(
             (System_Collections_Generic_List_object__o *)script,
             (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_object__ToArray__);
  }
  sub_221405C(script, System_Collections_Generic_List_object__TypeInfo, v6);
  return (System_Object_array *)StageEntity__getNoEntryIds(v9, v10);
}


System_Int32_array *StageEntity__getNoEntryIds(StageEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  Il2CppObject *v4; // x20
  System_Collections_Generic_List_object__c *v5; // x1
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  System_Collections_Generic_List_object__o *v9; // x19
  StageEntity___c_c *v10; // x8
  struct StageEntity___c_StaticFields *static_fields; // x9
  System_Converter_object__int__o *_9__29_0; // x20
  __int64 v13; // x9
  __int64 naturalAligment; // x11
  Il2CppObject *v16; // x21
  struct StageEntity___c_StaticFields *v17; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  StageEntity_o *v24; // x0
  const MethodInfo *v25; // x1

  if ( (byte_5971502 & 1) == 0 )
  {
    sub_2213A60(&System_Converter_object__int__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_object__ConvertAll_int___);
    sub_2213A60(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_2213A60(&System_Collections_Generic_List_object__TypeInfo);
    sub_2213A60(&Method_StageEntity___c__getNoEntryIds_b__29_0__);
    sub_2213A60(&StageEntity___c_TypeInfo);
    sub_2213A60(&StringLiteral_9901/*"NoEntryIds"*/);
    byte_5971502 = 1;
  }
  script = this->fields.script;
  if ( !script )
    return (System_Int32_array *)sub_2213B20(int___TypeInfo, 0);
  v4 = (Il2CppObject *)StringLiteral_9901/*"NoEntryIds"*/;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)StringLiteral_9901/*"NoEntryIds"*/,
          (const MethodInfo_3FFDE04 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return (System_Int32_array *)sub_2213B20(int___TypeInfo, 0);
  Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !Item )
    goto LABEL_22;
  Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                      Item,
                                                                      v4,
                                                                      (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v9 = (System_Collections_Generic_List_object__o *)Item;
  v10 = StageEntity___c_TypeInfo;
  if ( !*(&StageEntity___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(StageEntity___c_TypeInfo, v7);
    v10 = StageEntity___c_TypeInfo;
  }
  static_fields = v10->static_fields;
  _9__29_0 = static_fields->__9__29_0;
  v5 = System_Collections_Generic_List_object__TypeInfo;
  if ( !_9__29_0 )
  {
    if ( v9 )
    {
      naturalAligment = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment;
      if ( v9->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (System_Collections_Generic_List_object__c *)v9->klass->_2.typeHierarchy[naturalAligment - 1] != System_Collections_Generic_List_object__TypeInfo )
      {
        goto LABEL_23;
      }
    }
    if ( !*(&v10->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v10, System_Collections_Generic_List_object__TypeInfo);
      static_fields = StageEntity___c_TypeInfo->static_fields;
    }
    v16 = (Il2CppObject *)static_fields->__9;
    _9__29_0 = (System_Converter_object__int__o *)sub_2213CCC(System_Converter_object__int__TypeInfo);
    System_Converter_object__int____ctor(_9__29_0, v16, Method_StageEntity___c__getNoEntryIds_b__29_0__, 0);
    v17 = StageEntity___c_TypeInfo->static_fields;
    v17->__9__29_0 = _9__29_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v17->__9__29_0, (int32_t)_9__29_0, v18, v19, v20, v21, v22, v23);
    if ( !v9 )
LABEL_22:
      sub_2213CDC(Item, v5);
LABEL_20:
    Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_List_object___ConvertAll_int_(
                                                                        v9,
                                                                        (System_Converter_T__TOutput__o *)_9__29_0,
                                                                        (const MethodInfo_36D76C4 *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
    if ( Item )
      return System_Collections_Generic_List_int___ToArray(
               (System_Collections_Generic_List_int__o *)Item,
               (const MethodInfo_4468CF0 *)Method_System_Collections_Generic_List_int__ToArray__);
    goto LABEL_22;
  }
  if ( !v9 )
    goto LABEL_22;
  v13 = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment;
  if ( v9->klass->_2.naturalAligment >= (unsigned int)v13
    && (System_Collections_Generic_List_object__c *)v9->klass->_2.typeHierarchy[v13 - 1] == System_Collections_Generic_List_object__TypeInfo )
  {
    goto LABEL_20;
  }
LABEL_23:
  sub_221405C(v9, System_Collections_Generic_List_object__TypeInfo, v8);
  return (System_Int32_array *)StageEntity__getEnemyActCount(v24, v25);
}


// local variable allocation has failed, the output may be wrong!
int32_t StageEntity__getScript(StageEntity_o *this, System_String_o *key, int32_t defVal, const MethodInfo *method)
{
  int32_t v4; // w20
  __int64 v7; // x1
  System_Collections_Generic_Dictionary_object__object__o *script; // x0
  __int64 v9; // x2
  int32_t result; // w0
  StageEntity_o *v11; // x0
  System_String_o *v12; // x1
  const MethodInfo *v13; // x2
  long double v14; // q0

  v4 = defVal;
  if ( (byte_59714F8 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    byte_59714F8 = 1;
  }
  if ( !StageEntity__checkScript(this, key, *(const MethodInfo **)&defVal) )
    return v4;
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script
    || (script = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                              script,
                                                                              (Il2CppObject *)key,
                                                                              (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0 )
  {
    sub_2213CDC(script, v7);
  }
  if ( script->klass->_1.element_class == *(Il2CppClass **)(qword_5984368 + 64) )
    return *(_DWORD *)j_il2cpp_object_unbox_0(script, qword_5984368, v9);
  v14 = sub_221405C(script, qword_5984368, v9);
  StageEntity__getScriptFloat(v11, v12, *(float *)&v14, v13);
  return result;
}


float StageEntity__getScriptFloat(StageEntity_o *this, System_String_o *key, float defVal, const MethodInfo *method)
{
  __int64 v7; // x1
  System_Collections_Generic_Dictionary_object__object__o *script; // x0
  __int64 v9; // x2
  float result; // s0
  StageEntity_o *v11; // x0
  System_String_o *v12; // x1
  System_Int32_array *v13; // x2
  const MethodInfo *v14; // x3

  if ( (byte_59714F9 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    byte_59714F9 = 1;
  }
  if ( !StageEntity__checkScript(this, key, method) )
    return defVal;
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script
    || (script = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                              script,
                                                                              (Il2CppObject *)key,
                                                                              (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0 )
  {
    sub_2213CDC(script, v7);
  }
  if ( script->klass->_1.element_class == *(Il2CppClass **)(qword_5984380 + 64) )
    return *(double *)j_il2cpp_object_unbox_0(script, qword_5984380, v9);
  sub_221405C(script, qword_5984380, v9);
  StageEntity__getScriptIntArrayParam(v11, v12, v13, v14);
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
  __int64 v9; // x1
  __int64 v10; // x2
  System_Collections_Generic_List_object__o *v11; // x19
  StageEntity___c_c *v12; // x8
  struct StageEntity___c_StaticFields *static_fields; // x9
  System_Converter_object__int__o *_9__20_0; // x20
  __int64 v15; // x9
  System_Int32_array *result; // x0
  __int64 naturalAligment; // x11
  Il2CppObject *v18; // x21
  struct StageEntity___c_StaticFields *v19; // x0
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  StageEntity_o *v26; // x0
  const MethodInfo *v27; // x1

  if ( (byte_59714FA & 1) == 0 )
  {
    sub_2213A60(&System_Converter_object__int__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_object__ConvertAll_int___);
    sub_2213A60(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_2213A60(&System_Collections_Generic_List_object__TypeInfo);
    sub_2213A60(&Method_StageEntity___c__getScriptIntArrayParam_b__20_0__);
    sub_2213A60(&StageEntity___c_TypeInfo);
    byte_59714FA = 1;
  }
  if ( !StageEntity__checkScript(this, key, (const MethodInfo *)defVal) )
    return defVal;
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script )
    goto LABEL_21;
  script = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                        script,
                                                                        (Il2CppObject *)key,
                                                                        (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v11 = (System_Collections_Generic_List_object__o *)script;
  v12 = StageEntity___c_TypeInfo;
  if ( !*(&StageEntity___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(StageEntity___c_TypeInfo, v9);
    v12 = StageEntity___c_TypeInfo;
  }
  static_fields = v12->static_fields;
  _9__20_0 = static_fields->__9__20_0;
  v7 = System_Collections_Generic_List_object__TypeInfo;
  if ( !_9__20_0 )
  {
    if ( v11 )
    {
      naturalAligment = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment;
      if ( v11->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (System_Collections_Generic_List_object__c *)v11->klass->_2.typeHierarchy[naturalAligment - 1] != System_Collections_Generic_List_object__TypeInfo )
      {
        goto LABEL_22;
      }
    }
    if ( !*(&v12->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v12, System_Collections_Generic_List_object__TypeInfo);
      static_fields = StageEntity___c_TypeInfo->static_fields;
    }
    v18 = (Il2CppObject *)static_fields->__9;
    _9__20_0 = (System_Converter_object__int__o *)sub_2213CCC(System_Converter_object__int__TypeInfo);
    System_Converter_object__int____ctor(_9__20_0, v18, Method_StageEntity___c__getScriptIntArrayParam_b__20_0__, 0);
    v19 = StageEntity___c_TypeInfo->static_fields;
    v19->__9__20_0 = _9__20_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v19->__9__20_0, (int32_t)_9__20_0, v20, v21, v22, v23, v24, v25);
    if ( !v11 )
LABEL_21:
      sub_2213CDC(script, v7);
LABEL_19:
    script = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_List_object___ConvertAll_int_(
                                                                          v11,
                                                                          (System_Converter_T__TOutput__o *)_9__20_0,
                                                                          (const MethodInfo_36D76C4 *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
    if ( script )
      return System_Collections_Generic_List_int___ToArray(
               (System_Collections_Generic_List_int__o *)script,
               (const MethodInfo_4468CF0 *)Method_System_Collections_Generic_List_int__ToArray__);
    goto LABEL_21;
  }
  if ( !v11 )
    goto LABEL_21;
  v15 = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment;
  if ( v11->klass->_2.naturalAligment >= (unsigned int)v15
    && (System_Collections_Generic_List_object__c *)v11->klass->_2.typeHierarchy[v15 - 1] == System_Collections_Generic_List_object__TypeInfo )
  {
    goto LABEL_19;
  }
LABEL_22:
  sub_221405C(v11, System_Collections_Generic_List_object__TypeInfo, v10);
  StageEntity__getCustomFOV(v26, v27);
  return result;
}


int32_t StageEntity__getShowTurnState(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_59714FD & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_24727/*"showTurn"*/);
    byte_59714FD = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_24727/*"showTurn"*/, 2, v2);
}


int32_t StageEntity__getStartBattleAssetId(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5971504 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_24914/*"startBattleAssetId"*/);
    byte_5971504 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_24914/*"startBattleAssetId"*/, 0, v2);
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
  const MethodInfo *v2; // x2
  StageEntity__GetExBattleUiSkillEffectIds_d__85_o *v3; // x20
  int32_t _1__state; // w8
  StageEntity_o *_4__this; // x0
  __int64 v6; // x1
  ExtraBattleUserInterfaceData_JsonConvertData_array *v7; // x19
  System_Collections_Generic_IEnumerable_int__o *SkillEffectIds; // x0
  __int64 v9; // x1
  System_Collections_Generic_IEnumerable_int__o *v10; // x19
  System_Collections_Generic_IEnumerable_int__c *klass; // x8
  __int64 v12; // x9
  int32_t *p_offset; // x10
  __int64 v14; // x0
  struct System_Collections_Generic_IEnumerator_int__o *v15; // x1
  StageEntity__GetExBattleUiSkillEffectIds_d__85_o *v16; // x0
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  struct System_Collections_Generic_IEnumerator_int__o *_7__wrap1; // x19
  System_Collections_Generic_IEnumerator_int__c *v24; // x8
  __int64 v25; // x9
  int *v26; // x10
  __int64 v27; // x0
  const MethodInfo *v28; // x1
  struct System_Collections_Generic_IEnumerator_int__o *v29; // x19
  System_Collections_Generic_IEnumerator_int__c *v30; // x8
  __int64 v31; // x9
  int32_t *v32; // x10
  __int64 v33; // x0
  StageEntity__GetExBattleUiSkillEffectIds_d__85_o *v34; // x0
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  bool result; // w0
  int32_t v42; // w0
  StageEntity__GetExBattleUiSkillEffectIds_d__85_o *v43; // x9
  int32_t v44; // w8
  ExtraBattleUserInterfaceData_JsonConvertData_array *dataArray; // [xsp+18h] [xbp-28h] BYREF
  StageEntity__GetExBattleUiSkillEffectIds_d__85_o *v46; // [xsp+28h] [xbp-18h]

  v46 = this;
  v3 = this;
  if ( (byte_5971540 & 1) == 0 )
  {
    sub_2213A60(&ExtraBattleUserInterfaceData_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerable_int__TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_int__TypeInfo);
    this = (StageEntity__GetExBattleUiSkillEffectIds_d__85_o *)sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    byte_5971540 = 1;
  }
  _1__state = v3->fields.__1__state;
  dataArray = 0;
  if ( _1__state != 1 )
  {
    if ( _1__state )
      return 0;
    _4__this = v3->fields.__4__this;
    v3->fields.__1__state = -1;
    if ( !_4__this )
      sub_2213CDC(0, method);
    if ( !StageEntity__HasExtraBattleUserInterfaceData(_4__this, &dataArray, v2) )
      return 0;
    v7 = dataArray;
    if ( !*(&ExtraBattleUserInterfaceData_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ExtraBattleUserInterfaceData_TypeInfo, v6);
    SkillEffectIds = ExtraBattleUserInterfaceData__GetSkillEffectIds(v7, 0);
    v10 = SkillEffectIds;
    if ( !SkillEffectIds )
      sub_2213CDC(0, v9);
    klass = SkillEffectIds->klass;
    v12 = *(unsigned __int16 *)&SkillEffectIds->klass->_2.rank;
    if ( *(_WORD *)&SkillEffectIds->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_int__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
      {
        --v12;
        p_offset += 4;
        if ( !v12 )
          goto LABEL_14;
      }
      v14 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_14:
      v14 = sub_224BC3C(SkillEffectIds, System_Collections_Generic_IEnumerable_int__TypeInfo, 0);
    }
    v15 = (struct System_Collections_Generic_IEnumerator_int__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_int__o *, _QWORD))v14)(
                                                                    v10,
                                                                    *(_QWORD *)(v14 + 8));
    v16 = v46;
    v46->fields.__7__wrap1 = v15;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v16->fields.__7__wrap1, (int32_t)v15, v17, v18, v19, v20, v21, v22);
    v3 = v46;
  }
  _7__wrap1 = v3->fields.__7__wrap1;
  v3->fields.__1__state = -3;
  if ( !_7__wrap1 )
    sub_2213CDC(this, method);
  v24 = _7__wrap1->klass;
  v25 = *(unsigned __int16 *)&_7__wrap1->klass->_2.rank;
  if ( *(_WORD *)&_7__wrap1->klass->_2.rank )
  {
    v26 = &v24->_1.interfaceOffsets->offset;
    while ( *((System_Collections_IEnumerator_c **)v26 - 1) != System_Collections_IEnumerator_TypeInfo )
    {
      --v25;
      v26 += 4;
      if ( !v25 )
        goto LABEL_22;
    }
    v27 = (__int64)&v24->vtable[*v26];
  }
  else
  {
LABEL_22:
    v27 = sub_224BC3C(_7__wrap1, System_Collections_IEnumerator_TypeInfo, 0);
  }
  if ( ((*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_int__o *, _QWORD))v27)(
          _7__wrap1,
          *(_QWORD *)(v27 + 8))
      & 1) == 0 )
  {
    StageEntity__GetExBattleUiSkillEffectIds_d__85____m__Finally1(v46, v28);
    v34 = v46;
    v46->fields.__7__wrap1 = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v34->fields.__7__wrap1, 0, v35, v36, v37, v38, v39, v40);
    return 0;
  }
  v29 = v46->fields.__7__wrap1;
  if ( !v29 )
    sub_2213CDC(v46, v28);
  v30 = v29->klass;
  v31 = *(unsigned __int16 *)&v29->klass->_2.rank;
  if ( *(_WORD *)&v29->klass->_2.rank )
  {
    v32 = &v30->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerator_int__c **)v32 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
    {
      --v31;
      v32 += 4;
      if ( !v31 )
        goto LABEL_30;
    }
    v33 = (__int64)&v30->vtable[*v32];
  }
  else
  {
LABEL_30:
    v33 = sub_224BC3C(v46->fields.__7__wrap1, System_Collections_Generic_IEnumerator_int__TypeInfo, 0);
  }
  v42 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_int__o *, _QWORD))v33)(
          v29,
          *(_QWORD *)(v33 + 8));
  v43 = v46;
  v44 = v42;
  result = 1;
  v46->fields.__1__state = 1;
  v43->fields.__2__current = v44;
  return result;
}


System_Collections_Generic_IEnumerator_int__o *StageEntity__GetExBattleUiSkillEffectIds_d__85__System_Collections_Generic_IEnumerable_System_Int32__GetEnumerator(
        StageEntity__GetExBattleUiSkillEffectIds_d__85_o *this,
        const MethodInfo *method)
{
  int32_t l__initialThreadId; // w20
  __int64 v4; // x20
  int32_t CurrentManagedThreadId; // w0
  struct StageEntity_o *_4__this; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  if ( (byte_5971542 & 1) == 0 )
  {
    sub_2213A60(&StageEntity__GetExBattleUiSkillEffectIds_d__85_TypeInfo);
    byte_5971542 = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0)) )
  {
    this->fields.__1__state = 0;
  }
  else
  {
    v4 = sub_2213CCC(StageEntity__GetExBattleUiSkillEffectIds_d__85_TypeInfo);
    System_Object___ctor((Il2CppObject *)v4, 0);
    *(_DWORD *)(v4 + 16) = 0;
    CurrentManagedThreadId = System_Environment__get_CurrentManagedThreadId(0);
    _4__this = this->fields.__4__this;
    *(_DWORD *)(v4 + 24) = CurrentManagedThreadId;
    *(_QWORD *)(v4 + 32) = _4__this;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v4 + 32), (int32_t)_4__this, v7, v8, v9, v10, v11, v12);
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

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_StageEntity__GetExBattleUiSkillEffectIds_d__85_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
}


Il2CppObject *StageEntity__GetExBattleUiSkillEffectIds_d__85__System_Collections_IEnumerator_get_Current(
        StageEntity__GetExBattleUiSkillEffectIds_d__85_o *this,
        const MethodInfo *method)
{
  int32_t _2__current; // [xsp+Ch] [xbp-4h] BYREF

  _2__current = this->fields.__2__current;
  return (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &_2__current);
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

  if ( (byte_5971541 & 1) == 0 )
  {
    sub_2213A60(&System_IDisposable_TypeInfo);
    byte_5971541 = 1;
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
      v7 = sub_224BC3C(_7__wrap1, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(struct System_Collections_Generic_IEnumerator_int__o *, _QWORD))v7)(
      _7__wrap1,
      *(_QWORD *)(v7 + 8));
  }
}


void StageEntity___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_597153C & 1) == 0 )
  {
    sub_2213A60(&StageEntity___c_TypeInfo);
    byte_597153C = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(StageEntity___c_TypeInfo);
  System_Object___ctor(v1, 0);
  StageEntity___c_TypeInfo->static_fields->__9 = (struct StageEntity___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)StageEntity___c_TypeInfo->static_fields,
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

  if ( (byte_597153F & 1) == 0 )
  {
    sub_2213A60(&AiAllocationInfo_TypeInfo);
    byte_597153F = 1;
  }
  v4 = (AiAllocationInfo_o *)sub_2213CCC(AiAllocationInfo_TypeInfo);
  AiAllocationInfo___ctor(v4, obj, 0);
  return v4;
}


System_String_o *StageEntity___c___GetBattleStartVoiceIdArray_b__47_0(
        StageEntity___c_o *this,
        Il2CppObject *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
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
    sub_2213CDC(this, 0);
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
    sub_2213CDC(this, 0);
  return x->fields.priority;
}


int32_t StageEntity___c___getNoEntryIds_b__29_0(StageEntity___c_o *this, Il2CppObject *x, const MethodInfo *method)
{
  System_String_o *v4; // x0

  if ( (byte_597153E & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_597153E = 1;
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

  if ( (byte_597153D & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_597153D = 1;
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
    sub_2213CDC(this, 0);
  return x->fields.svtId == this->fields.servantId;
}