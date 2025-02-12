void __fastcall StageEntity___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4BB5217 & 1) == 0 )
  {
    sub_1C13D24(&StageEntity_TypeInfo, v1);
    byte_4BB5217 = 1;
  }
  StageEntity_TypeInfo->static_fields->DEFAULT_ENEMY_ACTION_COUNT = 3;
}


void __fastcall StageEntity___ctor(StageEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4BB51D5 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataEntityBase_string___ctor__, method);
    byte_4BB51D5 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_32361B8 *)Method_DataEntityBase_string___ctor__);
}


void __fastcall StageEntity___ctor_41143536(StageEntity_o *this, StageEntity_o *cSrc, const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  struct System_String_o *name; // x1
  struct System_String_o **p_name; // x20

  if ( (byte_4BB51D6 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataEntityBase_string___ctor__, cSrc);
    byte_4BB51D6 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_32361B8 *)Method_DataEntityBase_string___ctor__);
  if ( !cSrc )
    sub_1C13F80(v5, v6);
  *(_QWORD *)&this->fields.questId = *(_QWORD *)&cSrc->fields.questId;
  name = cSrc->fields.name;
  this->fields.name = name;
  p_name = &this->fields.name;
  sub_1C13CC8((PartyOrganizationUtility_o *)p_name, (int64_t)name, v7, v8, v9, v10, v11, v12);
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
  if ( (byte_4BB51D4 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&questPhase);
    byte_4BB51D4 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           questId,
           questPhase,
           wave,
           (const MethodInfo_2F8DB20 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall StageEntity__CreatePrimaryKey(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t questPhase; // w20
  int32_t questId; // w21
  int32_t wave; // w19

  if ( (byte_4BB51D3 & 1) == 0 )
  {
    sub_1C13D24(&StageEntity_TypeInfo, method);
    byte_4BB51D3 = 1;
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

  if ( (byte_4BB520E & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_16932/*"addCount"*/, defVal);
    byte_4BB520E = 1;
  }
  return StageEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_16932/*"addCount"*/, defVal, v3);
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

  if ( (byte_4BB51F4 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, method);
    sub_1C13D24(&Method_System_Collections_Generic_List_object__ToArray__, v4);
    sub_1C13D24(&System_Collections_Generic_List_object__TypeInfo, v5);
    sub_1C13D24(&StringLiteral_16969/*"aes"*/, v6);
    byte_4BB51F4 = 1;
  }
  if ( !StageEntity__checkScript(this, (System_String_o *)StringLiteral_16969/*"aes"*/, v2) )
    return 0LL;
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script
    || (script = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                              script,
                                                                              (Il2CppObject *)StringLiteral_16969/*"aes"*/,
                                                                              (const MethodInfo_32F2930 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL
    || (methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(script->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (System_Collections_Generic_List_object__c *)script->klass->_2.typeHierarchy[methodPtr_low - 1] != System_Collections_Generic_List_object__TypeInfo )
  {
    sub_1C13F80(script, v7);
  }
  return System_Collections_Generic_List_object___ToArray(
           (System_Collections_Generic_List_object__o *)script,
           (const MethodInfo_362ED24 *)Method_System_Collections_Generic_List_object__ToArray__);
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

  if ( (byte_4BB51F5 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, enemyServantData);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v5);
    sub_1C13D24(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v6);
    sub_1C13D24(&long_TypeInfo, v7);
    sub_1C13D24(&StringLiteral_22534/*"notSamePartyKey"*/, v8);
    sub_1C13D24(&StringLiteral_18037/*"card/combineLimitSpecial"*/, v9);
    byte_4BB51F5 = 1;
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
          sub_1C13F88(AiActTypeAttackCommandCard, v11);
        v16 = (System_Collections_Generic_Dictionary_object__object__o *)m_Items[v14];
        if ( v16 )
        {
          methodPtr_low = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr);
          if ( LOBYTE(v16->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
            && (System_Collections_Generic_Dictionary_string__object__c *)v16->klass->_2.typeHierarchy[methodPtr_low - 1] == System_Collections_Generic_Dictionary_string__object__TypeInfo )
          {
            AiActTypeAttackCommandCard = (System_Object_array *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                                                  (System_Collections_Generic_Dictionary_object__object__o *)m_Items[v14],
                                                                  (Il2CppObject *)StringLiteral_22534/*"notSamePartyKey"*/,
                                                                  (const MethodInfo_32F2BA4 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
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
                                                                    (Il2CppObject *)StringLiteral_22534/*"notSamePartyKey"*/,
                                                                    (const MethodInfo_32F2930 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
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
                                                                      (Il2CppObject *)StringLiteral_18037/*"card/combineLimitSpecial"*/,
                                                                      (const MethodInfo_32F2BA4 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
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
                                                            (Il2CppObject *)StringLiteral_18037/*"card/combineLimitSpecial"*/,
                                                            (const MethodInfo_32F2930 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !AiActTypeAttackCommandCard )
LABEL_24:
        sub_1C13F80(AiActTypeAttackCommandCard, v11);
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
        sub_1C14240(AiActTypeAttackCommandCard);
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
  System_Func_object__object__o *_9__69_0; // x20
  Il2CppObject *v13; // x21
  struct StageEntity___c_StaticFields *static_fields; // x0
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x0

  if ( (byte_4BB5207 & 1) == 0 )
  {
    sub_1C13D24(&Method_BasicHelper_GetValue_List_object____, method);
    sub_1C13D24(&Method_System_Linq_Enumerable_Select_object__AiAllocationInfo___, v3);
    sub_1C13D24(&Method_System_Linq_Enumerable_ToList_AiAllocationInfo___, v4);
    sub_1C13D24(&System_Func_object__AiAllocationInfo__TypeInfo, v5);
    sub_1C13D24(&Method_StageEntity___c__GetAiAllocationInfoList_b__69_0__, v6);
    sub_1C13D24(&StageEntity___c_TypeInfo, v7);
    sub_1C13D24(&StringLiteral_16970/*"aes128"*/, v8);
    byte_4BB5207 = 1;
  }
  Value_object = BasicHelper__GetValue_object_(
                   this->fields.script,
                   (System_String_o *)StringLiteral_16970/*"aes128"*/,
                   0LL,
                   (const MethodInfo_2F7D408 *)Method_BasicHelper_GetValue_List_object____);
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
    _9__69_0 = (System_Func_object__object__o *)sub_1C13F70(System_Func_object__AiAllocationInfo__TypeInfo);
    System_Func_object__object____ctor(_9__69_0, v13, Method_StageEntity___c__GetAiAllocationInfoList_b__69_0__, 0LL);
    static_fields = StageEntity___c_TypeInfo->static_fields;
    static_fields->__9__69_0 = (struct System_Func_object__AiAllocationInfo__o *)_9__69_0;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)&static_fields->__9__69_0,
      (int64_t)_9__69_0,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
  }
  v21 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)Value_object,
                                                               (System_Func_TSource__TResult__o *)_9__69_0,
                                                               (const MethodInfo_2FC0B08 *)Method_System_Linq_Enumerable_Select_object__AiAllocationInfo___);
  return (System_Collections_Generic_List_AiAllocationInfo__o *)System_Linq_Enumerable__ToList_object_(
                                                                  v21,
                                                                  (const MethodInfo_2FCCA90 *)Method_System_Linq_Enumerable_ToList_AiAllocationInfo___);
}


System_Int32_array *__fastcall StageEntity__GetAssumedEffectId(StageEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4BB520B & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_17201/*"assemblyFullName"*/, method);
    byte_4BB520B = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_17201/*"assemblyFullName"*/, 0LL);
}


System_String_array *__fastcall StageEntity__GetAssumedVoiceAssetNames(StageEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4BB520F & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_17202/*"assemblyName"*/, method);
    byte_4BB520F = 1;
  }
  return EntityScriptUtil__GetStringArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_17202/*"assemblyName"*/, 0LL);
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
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  System_Collections_Generic_List_object__o *v25; // x0
  __int64 v26; // x1

  if ( (byte_4BB51FB & 1) == 0 )
  {
    sub_1C13D24(&System_Converter_object__string__TypeInfo, method);
    sub_1C13D24(&Method_System_Collections_Generic_List_object__ConvertAll_string___, v4);
    sub_1C13D24(&Method_System_Collections_Generic_List_string__ToArray__, v5);
    sub_1C13D24(&System_Collections_Generic_List_object__TypeInfo, v6);
    sub_1C13D24(&string___TypeInfo, v7);
    sub_1C13D24(&Method_StageEntity___c__GetBattleStartVoiceIdArray_b__55_0__, v8);
    sub_1C13D24(&StageEntity___c_TypeInfo, v9);
    sub_1C13D24(&StringLiteral_17380/*"battleCharaAlpha"*/, v10);
    byte_4BB51FB = 1;
  }
  ScriptObject = StageEntity__GetScriptObject(this, (System_String_o *)StringLiteral_17380/*"battleCharaAlpha"*/, v2);
  if ( !ScriptObject )
    return (System_String_array *)sub_1C13DCC(string___TypeInfo, 0LL);
  v12 = (System_Collections_Generic_List_object__o *)ScriptObject;
  methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(ScriptObject->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
    || (System_Collections_Generic_List_object__c *)ScriptObject->klass->_2.typeHierarchy[methodPtr_low - 1] != System_Collections_Generic_List_object__TypeInfo )
  {
    return (System_String_array *)sub_1C13DCC(string___TypeInfo, 0LL);
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
    _9__55_0 = (System_Converter_TInput__TOutput__o *)sub_1C13F70(System_Converter_object__string__TypeInfo);
    System_Converter_object__object____ctor(
      _9__55_0,
      v17,
      Method_StageEntity___c__GetBattleStartVoiceIdArray_b__55_0__,
      0LL);
    static_fields = StageEntity___c_TypeInfo->static_fields;
    static_fields->__9__55_0 = (struct System_Converter_object__string__o *)_9__55_0;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)&static_fields->__9__55_0,
      (int64_t)_9__55_0,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
  }
  v25 = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___ConvertAll_object_(
                                                       v12,
                                                       (System_Converter_T__TOutput__o *)_9__55_0,
                                                       (const MethodInfo_2EBF350 *)Method_System_Collections_Generic_List_object__ConvertAll_string___);
  if ( !v25 )
    sub_1C13F80(0LL, v26);
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  v25,
                                  (const MethodInfo_362ED24 *)Method_System_Collections_Generic_List_string__ToArray__);
}


int32_t __fastcall StageEntity__GetBattleStartVoiceServantId(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BB51F9 & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_17381/*"battleEffectId"*/, method);
    byte_4BB51F9 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_17381/*"battleEffectId"*/, 0, v2);
}


int32_t __fastcall StageEntity__GetBattleStartVoiceServantLimit(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BB51FA & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_17382/*"battleEndNotReduceTurnFlag"*/, method);
    byte_4BB51FA = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_17382/*"battleEndNotReduceTurnFlag"*/, -1, v2);
}


System_Int32_array *__fastcall StageEntity__GetBossIdAndChangeBgmId(StageEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Int32_array *v4; // x2
  const MethodInfo *v5; // x3

  if ( (byte_4BB51F3 & 1) == 0 )
  {
    sub_1C13D24(&int___TypeInfo, method);
    sub_1C13D24(&StringLiteral_17644/*"border-bottom-right-radius"*/, v3);
    byte_4BB51F3 = 1;
  }
  v4 = (System_Int32_array *)sub_1C13DCC(int___TypeInfo, 0LL);
  return StageEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_17644/*"border-bottom-right-radius"*/, v4, v5);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall StageEntity__GetCutInSvtIds(StageEntity_o *this, bool isEnemy, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  System_String_o **v7; // x8

  if ( (byte_4BB51F0 & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_19313/*"endFade"*/, isEnemy);
    sub_1C13D24(&StringLiteral_22928/*"pingPong"*/, v6);
    byte_4BB51F0 = 1;
  }
  if ( isEnemy )
    v7 = (System_String_o **)&StringLiteral_19313/*"endFade"*/;
  else
    v7 = (System_String_o **)&StringLiteral_22928/*"pingPong"*/;
  return StageEntity__getScriptIntArrayParam(this, *v7, 0LL, v3);
}


int32_t __fastcall StageEntity__GetEffectBgmId(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BB51F1 & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_19204/*"effect/ef_critlaunch"*/, method);
    byte_4BB51F1 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_19204/*"effect/ef_critlaunch"*/, -1, v2);
}


int32_t __fastcall StageEntity__GetEffectSvtId(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BB51EF & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_19217/*"effect/obj_treasure{0:D2}"*/, method);
    byte_4BB51EF = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_19217/*"effect/obj_treasure{0:D2}"*/, 0, v2);
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
  System_Func_int__int__o *_9__65_0; // x20
  Il2CppObject *v15; // x21
  struct StageEntity___c_StaticFields *static_fields; // x0
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x0

  if ( (byte_4BB5203 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Linq_Enumerable_Select_int__int___, *(_QWORD *)&enemyFieldPosCount);
    sub_1C13D24(&Method_System_Linq_Enumerable_ToArray_int___, v6);
    sub_1C13D24(&System_Func_int__int__TypeInfo, v7);
    sub_1C13D24(&Method_StageEntity___c__GetEnemyAddOrderPosArray_b__65_0__, v8);
    sub_1C13D24(&StageEntity___c_TypeInfo, v9);
    sub_1C13D24(&StringLiteral_19315/*"endFashTypeCard"*/, v10);
    byte_4BB5203 = 1;
  }
  ScriptIntArrayParam = StageEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_19315/*"endFashTypeCard"*/, 0LL, v3);
  if ( ScriptIntArrayParam )
  {
    v12 = (System_Collections_Generic_IEnumerable_TSource__o *)ScriptIntArrayParam;
    v13 = StageEntity___c_TypeInfo;
    if ( !StageEntity___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(StageEntity___c_TypeInfo);
      v13 = StageEntity___c_TypeInfo;
    }
    _9__65_0 = v13->static_fields->__9__65_0;
    if ( !_9__65_0 )
    {
      if ( !v13->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v13);
        v13 = StageEntity___c_TypeInfo;
      }
      v15 = (Il2CppObject *)v13->static_fields->__9;
      _9__65_0 = (System_Func_int__int__o *)sub_1C13F70(System_Func_int__int__TypeInfo);
      System_Func_int__int____ctor(_9__65_0, v15, Method_StageEntity___c__GetEnemyAddOrderPosArray_b__65_0__, 0LL);
      static_fields = StageEntity___c_TypeInfo->static_fields;
      static_fields->__9__65_0 = _9__65_0;
      sub_1C13CC8(
        (PartyOrganizationUtility_o *)&static_fields->__9__65_0,
        (int64_t)_9__65_0,
        v17,
        v18,
        v19,
        v20,
        v21,
        v22);
    }
    v23 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__int_(
                                                                 v12,
                                                                 (System_Func_TSource__TResult__o *)_9__65_0,
                                                                 (const MethodInfo_2FBBD4C *)Method_System_Linq_Enumerable_Select_int__int___);
  }
  else
  {
    v23 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Range(0, enemyFieldPosCount, 0LL);
  }
  return System_Linq_Enumerable__ToArray_int_(
           v23,
           (const MethodInfo_2FC8B9C *)Method_System_Linq_Enumerable_ToArray_int___);
}


int32_t __fastcall StageEntity__GetEnemyCountStartValue(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BB5208 & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_19312/*"endDisp"*/, method);
    byte_4BB5208 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_19312/*"endDisp"*/, 0, v2);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall StageEntity__GetEnemyEntryMaxCountEachTurn(
        StageEntity_o *this,
        int32_t defaultValue,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4BB5204 & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_19314/*"endFashSvt"*/, *(_QWORD *)&defaultValue);
    byte_4BB5204 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_19314/*"endFashSvt"*/, defaultValue, v3);
}


int32_t __fastcall StageEntity__GetEnemyFieldPosCount(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BB51FC & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_19317/*"endIf"*/, method);
    byte_4BB51FC = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_19317/*"endIf"*/, 3, v2);
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

  if ( (byte_4BB5213 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Array_Empty_float___, method);
    sub_1C13D24(&StringLiteral_19320/*"endMethod"*/, v4);
    byte_4BB5213 = 1;
  }
  v5 = Method_System_Array_Empty_float___;
  script = this->fields.script;
  v7 = *((_QWORD *)Method_System_Array_Empty_float___ + 7);
  if ( !v7 )
  {
    sub_1C65C5C(Method_System_Array_Empty_float___);
    v7 = v5[7];
  }
  v8 = *(_QWORD *)(v7 + 16);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1C65C00(inited);
  if ( !*(_DWORD *)(v8 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v8);
  v9 = *(_QWORD *)(v5[7] + 16LL);
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1C65C00(inited);
  return EntityScriptUtil__GetFloatArray(
           script,
           (System_String_o *)StringLiteral_19320/*"endMethod"*/,
           **(System_Single_array ***)(v9 + 184),
           0LL);
}


System_Int32_array *__fastcall StageEntity__GetEnemyMasterCommandSpellIconSize(
        StageEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BB5212 & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_19321/*"endMotion"*/, method);
    byte_4BB5212 = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_19321/*"endMotion"*/, 0LL);
}


int32_t __fastcall StageEntity__GetFadeType(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BB51EE & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_17378/*"battleAppearEffectId"*/, method);
    byte_4BB51EE = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_17378/*"battleAppearEffectId"*/, 0, v2);
}


System_Int32_array *__fastcall StageEntity__GetFieldCallServantId(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1
  System_Int32_array *result; // x0

  if ( (byte_4BB51F7 & 1) == 0 )
  {
    sub_1C13D24(&int___TypeInfo, method);
    sub_1C13D24(&StringLiteral_17972/*"cDate"*/, v4);
    byte_4BB51F7 = 1;
  }
  result = StageEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_17972/*"cDate"*/, 0LL, v2);
  if ( !result )
    return (System_Int32_array *)sub_1C13DCC(int___TypeInfo, 0LL);
  return result;
}


System_Int32_array *__fastcall StageEntity__GetFieldPosSkillId(StageEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Int32_array *v4; // x2
  const MethodInfo *v5; // x3

  if ( (byte_4BB5205 & 1) == 0 )
  {
    sub_1C13D24(&int___TypeInfo, method);
    sub_1C13D24(&StringLiteral_19712/*"field"*/, v3);
    byte_4BB5205 = 1;
  }
  v4 = (System_Int32_array *)sub_1C13DCC(int___TypeInfo, 0LL);
  return StageEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_19712/*"field"*/, v4, v5);
}


System_Int32_array *__fastcall StageEntity__GetFieldPosSkillLv(StageEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Int32_array *v4; // x2
  const MethodInfo *v5; // x3

  if ( (byte_4BB5206 & 1) == 0 )
  {
    sub_1C13D24(&int___TypeInfo, method);
    sub_1C13D24(&StringLiteral_19713/*"fieldCount"*/, v3);
    byte_4BB5206 = 1;
  }
  v4 = (System_Int32_array *)sub_1C13DCC(int___TypeInfo, 0LL);
  return StageEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_19713/*"fieldCount"*/, v4, v5);
}


System_Int32_array *__fastcall StageEntity__GetMultiEffectIds(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BB51ED & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_22333/*"mstWarBoardStageNpc"*/, method);
    byte_4BB51ED = 1;
  }
  return StageEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_22333/*"mstWarBoardStageNpc"*/, 0LL, v2);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall StageEntity__GetPriorityBG(StageEntity_o *this, int32_t def, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4BB5209 & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_22976/*"prefabn_"*/, *(_QWORD *)&def);
    byte_4BB5209 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_22976/*"prefabn_"*/, def, v3);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall StageEntity__GetPriorityBgm(StageEntity_o *this, int32_t def, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  const MethodInfo *v7; // x3
  Il2CppObject *Master_object; // x0
  __int64 v10; // x1

  if ( (byte_4BB520A & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMaster_BgmMaster___, *(_QWORD *)&def);
    sub_1C13D24(&DataManager_TypeInfo, v5);
    sub_1C13D24(&StringLiteral_22977/*"prefix"*/, v6);
    byte_4BB520A = 1;
  }
  if ( StageEntity__checkScript(this, (System_String_o *)StringLiteral_22977/*"prefix"*/, method) )
    return StageEntity__getScript(this, (System_String_o *)StringLiteral_22977/*"prefix"*/, def, v7);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_BgmMaster___);
  if ( !Master_object )
    sub_1C13F80(0LL, v10);
  return BgmMaster__GetBgmPriority((BgmMaster_o *)Master_object, this->fields.bgmId, def, 0LL);
}


int32_t __fastcall StageEntity__GetProhibitBgmChangeInTreasureDeviceAnim(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BB5210 & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_22998/*"private key"*/, method);
    byte_4BB5210 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_22998/*"private key"*/, 0, v2);
}


Il2CppObject *__fastcall StageEntity__GetScriptObject(
        StageEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4BB51F8 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, key);
    byte_4BB51F8 = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( !script )
    sub_1C13F80(0LL, key);
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)script,
         (Il2CppObject *)key,
         &value,
         (const MethodInfo_32F41BC *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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

  if ( (byte_4BB5216 & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_10865/*"PlayStayAnim"*/, isEnemy);
    sub_1C13D24(&StringLiteral_6156/*"EnemyActCount"*/, v5);
    byte_4BB5216 = 1;
  }
  if ( isEnemy )
    v6 = (System_String_o **)&StringLiteral_6156/*"EnemyActCount"*/;
  else
    v6 = (System_String_o **)&StringLiteral_10865/*"PlayStayAnim"*/;
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

  if ( (byte_4BB5215 & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_13095/*"Spanish (Mexico)"*/, isEnemy);
    sub_1C13D24(&StringLiteral_10866/*"PlayUnDispCostAnim2"*/, v5);
    sub_1C13D24(&StringLiteral_6157/*"EnemyConfWindowServant"*/, v6);
    byte_4BB5215 = 1;
  }
  script = this->fields.script;
  if ( isEnemy )
    v8 = &StringLiteral_6157/*"EnemyConfWindowServant"*/;
  else
    v8 = &StringLiteral_10866/*"PlayUnDispCostAnim2"*/;
  v9 = (System_String_o *)*v8;
  IntValue = EntityScriptUtil__GetIntValue(script, (System_String_o *)StringLiteral_13095/*"Spanish (Mexico)"*/, 0, 0LL);
  return EntityScriptUtil__GetIntValue(script, v9, IntValue, 0LL);
}


int32_t __fastcall StageEntity__GetStartBgmOffFlag(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BB51F2 & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_23875/*"sr-cyrl"*/, method);
    byte_4BB51F2 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_23875/*"sr-cyrl"*/, 0, v2);
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
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7

  if ( (byte_4BB5200 & 1) == 0 )
  {
    sub_1C13D24(&Method_EntityScriptUtil_GetScriptValue_List_object___SubBgmPlayArgs_____, method);
    sub_1C13D24(&System_Func_List_object___SubBgmPlayArgs____TypeInfo, v3);
    sub_1C13D24(&Method_StageEntity___c__GetSubBgmPlayArgsArray_b__62_0__, v4);
    sub_1C13D24(&StageEntity___c_TypeInfo, v5);
    sub_1C13D24(&StringLiteral_23991/*"strict"*/, v6);
    byte_4BB5200 = 1;
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
    _9__62_0 = (System_Func_object__object__o *)sub_1C13F70(System_Func_List_object___SubBgmPlayArgs____TypeInfo);
    System_Func_object__object____ctor(_9__62_0, v9, Method_StageEntity___c__GetSubBgmPlayArgsArray_b__62_0__, 0LL);
    static_fields = StageEntity___c_TypeInfo->static_fields;
    static_fields->__9__62_0 = (struct System_Func_List_object___SubBgmPlayArgs____o *)_9__62_0;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)&static_fields->__9__62_0,
      (int64_t)_9__62_0,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
  return (SubBgmPlayArgs_array *)EntityScriptUtil__GetScriptValue_object__object_(
                                   this->fields.script,
                                   (System_String_o *)StringLiteral_23991/*"strict"*/,
                                   (System_Func_TSource__TDestination__o *)_9__62_0,
                                   0LL,
                                   (const MethodInfo_2F95C04 *)Method_EntityScriptUtil_GetScriptValue_List_object___SubBgmPlayArgs_____);
}


int32_t __fastcall StageEntity__GetSubBgmsPriority(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BB5201 & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_23992/*"stride"*/, method);
    byte_4BB5201 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_23992/*"stride"*/, 0, v2);
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

  if ( (byte_4BB51E8 & 1) == 0 )
  {
    sub_1C13D24(&int___TypeInfo, *(_QWORD *)&limitTurn);
    byte_4BB51E8 = 1;
  }
  result = (System_Int32_array *)sub_1C13DCC(int___TypeInfo, (unsigned int)limitTurn);
  if ( !result )
LABEL_15:
    sub_1C13F80(result, v7);
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
        sub_1C13F88(result, v7);
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

  if ( (byte_4BB520D & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_19710/*"fi"*/, defVal);
    byte_4BB520D = 1;
  }
  return StageEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_19710/*"fi"*/, defVal, v3);
}


bool __fastcall StageEntity__HasChangeBgKey(StageEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1

  if ( (byte_4BB51E3 & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_18081/*"cbfTitleInfoBtnBack_Click"*/, method);
    sub_1C13D24(&StringLiteral_18082/*"ceil"*/, v3);
    byte_4BB51E3 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_18081/*"cbfTitleInfoBtnBack_Click"*/, 0LL)
      || EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_18082/*"ceil"*/, 0LL);
}


bool __fastcall StageEntity__Is3_6BossBattle(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BB51FD & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_1475/*"3"*/, method);
    byte_4BB51FD = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_1475/*"3"*/, 0, v2) > 0;
}


bool __fastcall StageEntity__IsDisableFieldMotion(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BB51F6 & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_18927/*"digest "*/, method);
    byte_4BB51F6 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_18927/*"digest "*/, 0, v2) > 0;
}


bool __fastcall StageEntity__IsForceSetNormalEnemyStatusUI(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4BB5202 & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_6940/*"ForceReadNewProfiles"*/, method);
    byte_4BB5202 = 1;
  }
  return StageEntity__checkScript(this, (System_String_o *)StringLiteral_6940/*"ForceReadNewProfiles"*/, v2);
}


bool __fastcall StageEntity__IsReleaseUnusedAssetsWhenEntryMember(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4BB51FF & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_23228/*"refresh/top"*/, method);
    byte_4BB51FF = 1;
  }
  return StageEntity__checkScript(this, (System_String_o *)StringLiteral_23228/*"refresh/top"*/, v2);
}


bool __fastcall StageEntity__IsShowEnemyMasterIconOnWaveStart(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4BB5211 & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_23699/*"shortcut_board_icon_shop_event"*/, method);
    byte_4BB5211 = 1;
  }
  return StageEntity__checkScript(this, (System_String_o *)StringLiteral_23699/*"shortcut_board_icon_shop_event"*/, v2);
}


bool __fastcall StageEntity__IsSkipWaveStartFadeInSe(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4BB520C & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_23746/*"sjis"*/, method);
    byte_4BB520C = 1;
  }
  return StageEntity__checkScript(this, (System_String_o *)StringLiteral_23746/*"sjis"*/, v2);
}


bool __fastcall StageEntity__IsSpecifiedBattleStartVoice(StageEntity_o *this, const MethodInfo *method)
{
  int32_t BattleStartVoiceServantId; // w20
  const MethodInfo *v4; // x1

  BattleStartVoiceServantId = StageEntity__GetBattleStartVoiceServantId(this, method);
  return (BattleStartVoiceServantId > 0) & (StageEntity__GetBattleStartVoiceServantLimit(this, v4) >= 0);
}


bool __fastcall StageEntity__IsSpecifiedBattleStartVoice_41149780(
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
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v42; // x0
  System_Object_array *v43; // x21
  int max_length; // w8
  CommonReleaseMaster_o *v45; // x22
  unsigned int v46; // w23
  Il2CppObject *v47; // x24

  if ( (byte_4BB5214 & 1) == 0 )
  {
    sub_1C13D24(&Method_BasicHelper_GetValue_string__object___, *(_QWORD *)&servantId);
    sub_1C13D24(&Method_DataManager_GetMaster_CommonReleaseMaster___, v9);
    sub_1C13D24(&DataManager_TypeInfo, v10);
    sub_1C13D24(&Method_System_Linq_Enumerable_OrderByDescending_BattleTreasureDeviceSequenceSelectType__int___, v11);
    sub_1C13D24(&Method_System_Linq_Enumerable_ToArray_BattleTreasureDeviceSequenceSelectType___, v12);
    sub_1C13D24(&Method_System_Linq_Enumerable_Where_BattleTreasureDeviceSequenceSelectType___, v13);
    sub_1C13D24(&System_Func_BattleTreasureDeviceSequenceSelectType__bool__TypeInfo, v14);
    sub_1C13D24(&System_Func_BattleTreasureDeviceSequenceSelectType__int__TypeInfo, v15);
    sub_1C13D24(&Method_JsonManager_DeserializeArray_BattleTreasureDeviceSequenceSelectType___, v16);
    sub_1C13D24(&JsonManager_TypeInfo, v17);
    sub_1C13D24(&Method_StageEntity___c__TryGetOverwritePlayerSequenceSelectTypeByGender_b__82_1__, v18);
    sub_1C13D24(&Method_StageEntity___c__DisplayClass82_0__TryGetOverwritePlayerSequenceSelectTypeByGender_b__0__, v19);
    sub_1C13D24(&StageEntity___c__DisplayClass82_0_TypeInfo, v20);
    sub_1C13D24(&StageEntity___c_TypeInfo, v21);
    sub_1C13D24(&StringLiteral_22771/*"overwriteCondType"*/, v22);
    byte_4BB5214 = 1;
  }
  v23 = sub_1C13F70(StageEntity___c__DisplayClass82_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v23, 0LL);
  if ( !v23 )
    goto LABEL_28;
  *(_DWORD *)(v23 + 16) = servantId;
  *genderSelectType = -1;
  *patternId = -1;
  Value_object__object = BasicHelper__GetValue_object__object_(
                           (System_Collections_Generic_Dictionary_K__V__o *)this->fields.script,
                           (Il2CppObject *)StringLiteral_22771/*"overwriteCondType"*/,
                           0LL,
                           (const MethodInfo_2F7DBB4 *)Method_BasicHelper_GetValue_string__object___);
  if ( !Value_object__object )
    return (char)Value_object__object;
  v27 = Value_object__object;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v28 = (System_Collections_Generic_IEnumerable_TSource__o *)JsonManager__DeserializeArray_object_(
                                                               v27,
                                                               (const MethodInfo_2FF6CCC *)Method_JsonManager_DeserializeArray_BattleTreasureDeviceSequenceSelectType___);
  v29 = (System_Func_object__bool__o *)sub_1C13F70(System_Func_BattleTreasureDeviceSequenceSelectType__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v29,
    (Il2CppObject *)v23,
    Method_StageEntity___c__DisplayClass82_0__TryGetOverwritePlayerSequenceSelectTypeByGender_b__0__,
    0LL);
  v30 = System_Linq_Enumerable__Where_object_(
          v28,
          (System_Func_TSource__bool__o *)v29,
          (const MethodInfo_2FCEBC0 *)Method_System_Linq_Enumerable_Where_BattleTreasureDeviceSequenceSelectType___);
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
    _9__82_1 = (System_Func_object__int__o *)sub_1C13F70(System_Func_BattleTreasureDeviceSequenceSelectType__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__82_1,
      v34,
      Method_StageEntity___c__TryGetOverwritePlayerSequenceSelectTypeByGender_b__82_1__,
      0LL);
    static_fields = StageEntity___c_TypeInfo->static_fields;
    static_fields->__9__82_1 = (struct System_Func_BattleTreasureDeviceSequenceSelectType__int__o *)_9__82_1;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)&static_fields->__9__82_1,
      (int64_t)_9__82_1,
      v36,
      v37,
      v38,
      v39,
      v40,
      v41);
  }
  v42 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                               v32,
                                                               (System_Func_TSource__TKey__o *)_9__82_1,
                                                               (const MethodInfo_2FB895C *)Method_System_Linq_Enumerable_OrderByDescending_BattleTreasureDeviceSequenceSelectType__int___);
  v43 = System_Linq_Enumerable__ToArray_object_(
          v42,
          (const MethodInfo_2FC8D34 *)Method_System_Linq_Enumerable_ToArray_BattleTreasureDeviceSequenceSelectType___);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v43, 0LL) )
    goto LABEL_25;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !v43 )
LABEL_28:
    sub_1C13F80(Master_object, monitor_high);
  max_length = v43->max_length;
  if ( max_length < 1 )
  {
LABEL_25:
    LOBYTE(Value_object__object) = 0;
    return (char)Value_object__object;
  }
  v45 = (CommonReleaseMaster_o *)Master_object;
  v46 = 0;
  while ( 1 )
  {
    if ( v46 >= max_length )
      sub_1C13F88(Master_object, monitor_high);
    v47 = v43->m_Items[v46];
    if ( !v47 )
      goto LABEL_28;
    monitor_high = HIDWORD(v47[1].monitor);
    if ( (int)monitor_high < 1 )
      break;
    if ( !v45 )
      goto LABEL_28;
    Master_object = (Il2CppObject *)CommonReleaseMaster__IsOpen(v45, monitor_high, 0LL, 0, 0LL);
    if ( ((unsigned __int8)Master_object & 1) != 0 )
      break;
    max_length = v43->max_length;
    if ( (int)++v46 >= max_length )
      goto LABEL_25;
  }
  LOBYTE(Value_object__object) = 1;
  *genderSelectType = HIDWORD(v47[1].klass);
  *patternId = (int32_t)v47[1].monitor;
  return (char)Value_object__object;
}


bool __fastcall StageEntity__checkCustomFOV(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4BB51E0 & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_19895/*"formation_framebg_{0}"*/, method);
    byte_4BB51E0 = 1;
  }
  return StageEntity__checkScript(this, (System_String_o *)StringLiteral_19895/*"formation_framebg_{0}"*/, v2);
}


bool __fastcall StageEntity__checkScript(StageEntity_o *this, System_String_o *key, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_4BB51D7 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    byte_4BB51D7 = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                       (System_Collections_Generic_Dictionary_object__object__o *)script,
                       (Il2CppObject *)key,
                       (const MethodInfo_32F2BA4 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)script;
}


bool __fastcall StageEntity__disableSystemFadeStartBattle(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BB51EC & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_18925/*"diffgram"*/, method);
    byte_4BB51EC = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_18925/*"diffgram"*/, 0, v2) > 0;
}


int32_t __fastcall StageEntity__getBattleMasterImageId(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BB51FE & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_17376/*"battle/useContinueItem"*/, method);
    byte_4BB51FE = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_17376/*"battle/useContinueItem"*/, 0, v2);
}


int32_t __fastcall StageEntity__getChangeBgId(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BB51E4 & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_18081/*"cbfTitleInfoBtnBack_Click"*/, method);
    byte_4BB51E4 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_18081/*"cbfTitleInfoBtnBack_Click"*/, 0, v2);
}


int32_t __fastcall StageEntity__getChangeBgType(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BB51E5 & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_18082/*"ceil"*/, method);
    byte_4BB51E5 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_18082/*"ceil"*/, 0, v2);
}


float __fastcall StageEntity__getCustomFOV(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4BB51DF & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_19895/*"formation_framebg_{0}"*/, method);
    byte_4BB51DF = 1;
  }
  return StageEntity__getScriptFloat(this, (System_String_o *)StringLiteral_19895/*"formation_framebg_{0}"*/, 0.0, v2);
}


int32_t __fastcall StageEntity__getEnemyActCount(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1
  int32_t result; // w0
  StageEntity_c *v6; // x0

  if ( (byte_4BB51EA & 1) == 0 )
  {
    sub_1C13D24(&StageEntity_TypeInfo, method);
    sub_1C13D24(&StringLiteral_6152/*"Endrol"*/, v4);
    byte_4BB51EA = 1;
  }
  result = StageEntity__getScript(this, (System_String_o *)StringLiteral_6152/*"Endrol"*/, 0, v2);
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

  if ( (byte_4BB51E2 & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_19318/*"endIndex"*/, method);
    sub_1C13D24(&StringLiteral_19319/*"endIndex cannot be greater than startIndex."*/, v4);
    byte_4BB51E2 = 1;
  }
  ScriptIntArrayParam = StageEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_19319/*"endIndex cannot be greater than startIndex."*/, 0LL, v2);
  if ( !ScriptIntArrayParam )
    return StageEntity__getScript(this, (System_String_o *)StringLiteral_19318/*"endIndex"*/, 0, v6);
  v7 = ScriptIntArrayParam;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_13;
  if ( SelfUserGame->fields.genderType == 1 )
  {
    if ( v7->max_length )
      return v7->m_Items[1];
LABEL_14:
    sub_1C13F88(SelfUserGame, v9);
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
LABEL_13:
    sub_1C13F80(SelfUserGame, v9);
  if ( SelfUserGame->fields.genderType != 2 )
    return StageEntity__getScript(this, (System_String_o *)StringLiteral_19318/*"endIndex"*/, 0, v6);
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

  if ( (byte_4BB51E6 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, method);
    sub_1C13D24(&Method_System_Collections_Generic_List_object__ToArray__, v4);
    sub_1C13D24(&System_Collections_Generic_List_object__TypeInfo, v5);
    sub_1C13D24(&StringLiteral_16971/*"aes128wrap"*/, v6);
    byte_4BB51E6 = 1;
  }
  if ( !StageEntity__checkScript(this, (System_String_o *)StringLiteral_16971/*"aes128wrap"*/, v2) )
    return 0LL;
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script
    || (script = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                              script,
                                                                              (Il2CppObject *)StringLiteral_16971/*"aes128wrap"*/,
                                                                              (const MethodInfo_32F2930 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_1C13F80(script, v7);
  }
  methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(script->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
    && (System_Collections_Generic_List_object__c *)script->klass->_2.typeHierarchy[methodPtr_low - 1] == System_Collections_Generic_List_object__TypeInfo )
  {
    return System_Collections_Generic_List_object___ToArray(
             (System_Collections_Generic_List_object__o *)script,
             (const MethodInfo_362ED24 *)Method_System_Collections_Generic_List_object__ToArray__);
  }
  sub_1C14240(script);
  return (System_Object_array *)StageEntity__getTurnEffect(v11, v12, v13);
}


int32_t __fastcall StageEntity__getLimitAct(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BB51DE & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_8567/*"Like"*/, method);
    byte_4BB51DE = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_8567/*"Like"*/, 0, v2);
}


int32_t __fastcall StageEntity__getLimitTurn(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BB51DB & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_24481/*"treasurechest_btn_on"*/, method);
    byte_4BB51DB = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_24481/*"treasurechest_btn_on"*/, 0, v2);
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
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  StageEntity_o *v29; // x0
  const MethodInfo *v30; // x1

  if ( (byte_4BB51E9 & 1) == 0 )
  {
    sub_1C13D24(&System_Converter_object__int__TypeInfo, method);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v3);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v4);
    sub_1C13D24(&int___TypeInfo, v5);
    sub_1C13D24(&Method_System_Collections_Generic_List_object__ConvertAll_int___, v6);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__ToArray__, v7);
    sub_1C13D24(&System_Collections_Generic_List_object__TypeInfo, v8);
    sub_1C13D24(&Method_StageEntity___c__getNoEntryIds_b__37_0__, v9);
    sub_1C13D24(&StageEntity___c_TypeInfo, v10);
    sub_1C13D24(&StringLiteral_9671/*"No validation occurred."*/, v11);
    byte_4BB51E9 = 1;
  }
  script = this->fields.script;
  if ( !script )
    return (System_Int32_array *)sub_1C13DCC(int___TypeInfo, 0LL);
  v13 = (Il2CppObject *)StringLiteral_9671/*"No validation occurred."*/;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)StringLiteral_9671/*"No validation occurred."*/,
          (const MethodInfo_32F2BA4 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return (System_Int32_array *)sub_1C13DCC(int___TypeInfo, 0LL);
  Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !Item )
    goto LABEL_19;
  Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                      Item,
                                                                      v13,
                                                                      (const MethodInfo_32F2930 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
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
      _9__37_0 = (System_Converter_object__int__o *)sub_1C13F70(System_Converter_object__int__TypeInfo);
      System_Converter_object__int____ctor(_9__37_0, v20, Method_StageEntity___c__getNoEntryIds_b__37_0__, 0LL);
      static_fields = StageEntity___c_TypeInfo->static_fields;
      static_fields->__9__37_0 = _9__37_0;
      sub_1C13CC8(
        (PartyOrganizationUtility_o *)&static_fields->__9__37_0,
        (int64_t)_9__37_0,
        v22,
        v23,
        v24,
        v25,
        v26,
        v27);
    }
    if ( v16 )
    {
      Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_List_object___ConvertAll_int_(
                                                                          v16,
                                                                          (System_Converter_T__TOutput__o *)_9__37_0,
                                                                          (const MethodInfo_2EBF24C *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
      if ( Item )
        return System_Collections_Generic_List_int___ToArray(
                 (System_Collections_Generic_List_int__o *)Item,
                 (const MethodInfo_3611C60 *)Method_System_Collections_Generic_List_int__ToArray__);
    }
LABEL_19:
    sub_1C13F80(Item, v14);
  }
  sub_1C14240(v16);
  return (System_Int32_array *)StageEntity__getEnemyActCount(v29, v30);
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
  if ( (byte_4BB51D8 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, key);
    sub_1C13D24(&long_TypeInfo, v7);
    byte_4BB51D8 = 1;
  }
  if ( !StageEntity__checkScript(this, key, *(const MethodInfo **)&defVal) )
    return v4;
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script
    || (script = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                              script,
                                                                              (Il2CppObject *)key,
                                                                              (const MethodInfo_32F2930 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_1C13F80(script, v8);
  }
  if ( script->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(script, long_TypeInfo, v10, v11);
  v16 = sub_1C14240(script);
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

  if ( (byte_4BB51D9 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, key);
    sub_1C13D24(&double_TypeInfo, v7);
    byte_4BB51D9 = 1;
  }
  if ( !StageEntity__checkScript(this, key, method) )
    return defVal;
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script
    || (script = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                              script,
                                                                              (Il2CppObject *)key,
                                                                              (const MethodInfo_32F2930 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_1C13F80(script, v8);
  }
  if ( script->klass->_1.element_class == double_TypeInfo->_1.element_class )
    return *(double *)j_il2cpp_object_unbox_0(script, double_TypeInfo, v10, v11);
  sub_1C14240(script);
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
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  StageEntity_o *v28; // x0
  const MethodInfo *v29; // x1

  if ( (byte_4BB51DA & 1) == 0 )
  {
    sub_1C13D24(&System_Converter_object__int__TypeInfo, key);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    sub_1C13D24(&Method_System_Collections_Generic_List_object__ConvertAll_int___, v8);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__ToArray__, v9);
    sub_1C13D24(&System_Collections_Generic_List_object__TypeInfo, v10);
    sub_1C13D24(&Method_StageEntity___c__getScriptIntArrayParam_b__22_0__, v11);
    sub_1C13D24(&StageEntity___c_TypeInfo, v12);
    byte_4BB51DA = 1;
  }
  if ( !StageEntity__checkScript(this, key, (const MethodInfo *)defVal) )
    return defVal;
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script )
    goto LABEL_18;
  script = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                        script,
                                                                        (Il2CppObject *)key,
                                                                        (const MethodInfo_32F2930 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
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
      _9__22_0 = (System_Converter_object__int__o *)sub_1C13F70(System_Converter_object__int__TypeInfo);
      System_Converter_object__int____ctor(_9__22_0, v19, Method_StageEntity___c__getScriptIntArrayParam_b__22_0__, 0LL);
      static_fields = StageEntity___c_TypeInfo->static_fields;
      static_fields->__9__22_0 = _9__22_0;
      sub_1C13CC8(
        (PartyOrganizationUtility_o *)&static_fields->__9__22_0,
        (int64_t)_9__22_0,
        v21,
        v22,
        v23,
        v24,
        v25,
        v26);
    }
    if ( v15 )
    {
      script = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_List_object___ConvertAll_int_(
                                                                            v15,
                                                                            (System_Converter_T__TOutput__o *)_9__22_0,
                                                                            (const MethodInfo_2EBF24C *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
      if ( script )
        return System_Collections_Generic_List_int___ToArray(
                 (System_Collections_Generic_List_int__o *)script,
                 (const MethodInfo_3611C60 *)Method_System_Collections_Generic_List_int__ToArray__);
    }
LABEL_18:
    sub_1C13F80(script, v13);
  }
  sub_1C14240(v15);
  return (System_Int32_array *)StageEntity__getLimitTurn(v28, v29);
}


int32_t __fastcall StageEntity__getShowTurnState(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BB51E1 & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_23702/*"shortcut_board_icon_shop_pure_prism"*/, method);
    byte_4BB51E1 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_23702/*"shortcut_board_icon_shop_pure_prism"*/, 2, v2);
}


int32_t __fastcall StageEntity__getStartBattleAssetId(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BB51EB & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_23873/*"sr-Latn-BA"*/, method);
    byte_4BB51EB = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_23873/*"sr-Latn-BA"*/, 0, v2);
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
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  StageEntity_o *v29; // x0
  const MethodInfo *v30; // x3
  int32_t v31; // w1
  System_Int32_array *v32; // x2

  if ( (byte_4BB51E7 & 1) == 0 )
  {
    sub_1C13D24(&System_Converter_object__int__TypeInfo, *(_QWORD *)&limitTurn);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v5);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v6);
    sub_1C13D24(&int___TypeInfo, v7);
    sub_1C13D24(&Method_System_Collections_Generic_List_object__ConvertAll_int___, v8);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__ToArray__, v9);
    sub_1C13D24(&System_Collections_Generic_List_object__TypeInfo, v10);
    sub_1C13D24(&Method_StageEntity___c__getTurnEffect_b__35_0__, v11);
    sub_1C13D24(&StageEntity___c_TypeInfo, v12);
    sub_1C13D24(&StringLiteral_24482/*"treasurechest_btn_open"*/, v13);
    byte_4BB51E7 = 1;
  }
  script = this->fields.script;
  if ( script
    && System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)script,
         (Il2CppObject *)StringLiteral_24482/*"treasurechest_btn_open"*/,
         (const MethodInfo_32F2BA4 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v16 = this->fields.script;
    if ( v16 )
    {
      Item = System_Collections_Generic_Dictionary_object__object___get_Item(
               (System_Collections_Generic_Dictionary_object__object__o *)v16,
               (Il2CppObject *)StringLiteral_24482/*"treasurechest_btn_open"*/,
               (const MethodInfo_32F2930 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      v18 = (System_Collections_Generic_List_object__o *)Item;
      if ( Item )
      {
        v15 = System_Collections_Generic_List_object__TypeInfo;
        methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
          || (System_Collections_Generic_List_object__c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] != System_Collections_Generic_List_object__TypeInfo )
        {
          sub_1C14240(Item);
          return StageEntity__GetTurnEffect(v29, v31, v32, v30);
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
        v20 = (System_Converter_object__int__o *)sub_1C13F70(System_Converter_object__int__TypeInfo);
        System_Converter_object__int____ctor(v20, v21, Method_StageEntity___c__getTurnEffect_b__35_0__, 0LL);
        static_fields = StageEntity___c_TypeInfo->static_fields;
        static_fields->__9__35_0 = v20;
        sub_1C13CC8((PartyOrganizationUtility_o *)&static_fields->__9__35_0, (int64_t)v20, v23, v24, v25, v26, v27, v28);
      }
      if ( v18 )
      {
        v16 = System_Collections_Generic_List_object___ConvertAll_int_(
                v18,
                (System_Converter_T__TOutput__o *)v20,
                (const MethodInfo_2EBF24C *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
        if ( v16 )
        {
          v29 = (StageEntity_o *)System_Collections_Generic_List_int___ToArray(
                                   (System_Collections_Generic_List_int__o *)v16,
                                   (const MethodInfo_3611C60 *)Method_System_Collections_Generic_List_int__ToArray__);
          v31 = limitTurn;
          v32 = (System_Int32_array *)v29;
          return StageEntity__GetTurnEffect(v29, v31, v32, v30);
        }
      }
    }
    sub_1C13F80(v16, v15);
  }
  return (System_Int32_array *)sub_1C13DCC(int___TypeInfo, 0LL);
}


int32_t __fastcall StageEntity__getTurnEffectType(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BB51DC & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_24483/*"treasurechest_btn_txt"*/, method);
    byte_4BB51DC = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_24483/*"treasurechest_btn_txt"*/, 0, v2);
}


bool __fastcall StageEntity__getTurnElapsedEndBattleFlag(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BB51DD & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_24484/*"treasurechest_img_bg"*/, method);
    byte_4BB51DD = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_24484/*"treasurechest_img_bg"*/, 0, v2) > 0;
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
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BB5218 & 1) == 0 )
  {
    sub_1C13D24(&StageEntity___c_TypeInfo, v1);
    byte_4BB5218 = 1;
  }
  v2 = (Il2CppObject *)sub_1C13F70(StageEntity___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  StageEntity___c_TypeInfo->static_fields->__9 = (struct StageEntity___c_o *)v2;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)StageEntity___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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

  if ( (byte_4BB521C & 1) == 0 )
  {
    sub_1C13D24(&AiAllocationInfo_TypeInfo, obj);
    byte_4BB521C = 1;
  }
  v4 = (AiAllocationInfo_o *)sub_1C13F70(AiAllocationInfo_TypeInfo);
  AiAllocationInfo___ctor(v4, obj, 0LL);
  return v4;
}


System_String_o *__fastcall StageEntity___c___GetBattleStartVoiceIdArray_b__55_0(
        StageEntity___c_o *this,
        Il2CppObject *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C13F80(this, 0LL);
  return (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))x->klass->vtable[3].method)(
                              x,
                              x->klass->vtable[4].methodPtr);
}


int32_t __fastcall StageEntity___c___GetEnemyAddOrderPosArray_b__65_0(
        StageEntity___c_o *this,
        int32_t i,
        const MethodInfo *method)
{
  return i - 1;
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
    sub_1C13F80(this, 0LL);
  return x->fields.priority;
}


int32_t __fastcall StageEntity___c___getNoEntryIds_b__37_0(
        StageEntity___c_o *this,
        Il2CppObject *x,
        const MethodInfo *method)
{
  System_String_o *v4; // x0

  if ( (byte_4BB521B & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_1/*""*/, x);
    byte_4BB521B = 1;
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

  if ( (byte_4BB5219 & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_1/*""*/, x);
    byte_4BB5219 = 1;
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

  if ( (byte_4BB521A & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_1/*""*/, x);
    byte_4BB521A = 1;
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
    sub_1C13F80(this, 0LL);
  return x->fields.svtId == this->fields.servantId;
}