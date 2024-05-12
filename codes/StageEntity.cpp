void __fastcall StageEntity___cctor(const MethodInfo *method)
{
  if ( (byte_438BF82 & 1) == 0 )
  {
    sub_B775C4(&StageEntity_TypeInfo);
    byte_438BF82 = 1;
  }
  StageEntity_TypeInfo->static_fields->DEFAULT_ENEMY_ACTION_COUNT = 3;
}


void __fastcall StageEntity___ctor(StageEntity_o *this, const MethodInfo *method)
{
  if ( (byte_438BF47 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_string___ctor__);
    byte_438BF47 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_21FB7E0 *)Method_DataEntityBase_string___ctor__);
}


void __fastcall StageEntity___ctor_26733440(StageEntity_o *this, StageEntity_o *cSrc, const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  struct System_String_o *name; // x1

  if ( (byte_438BF48 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_string___ctor__);
    byte_438BF48 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_21FB7E0 *)Method_DataEntityBase_string___ctor__);
  if ( !cSrc )
    sub_B7769C(v5, v6);
  this->fields.questId = cSrc->fields.questId;
  this->fields.questPhase = cSrc->fields.questPhase;
  name = cSrc->fields.name;
  this->fields.name = name;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.name, (System_Int32_array **)name, v7, v8, v9, v10, v11, v12);
  this->fields.wave = cSrc->fields.wave;
  this->fields.npcDeckId = cSrc->fields.npcDeckId;
}


System_String_o *__fastcall StageEntity__CreatePK(
        int32_t questId,
        int32_t questPhase,
        int32_t wave,
        const MethodInfo *method)
{
  if ( (byte_438BF46 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_438BF46 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           questId,
           questPhase,
           wave,
           (const MethodInfo_1D175E4 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall StageEntity__CreatePrimaryKey(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t questPhase; // w20
  int32_t questId; // w21
  int32_t wave; // w19

  if ( (byte_438BF45 & 1) == 0 )
  {
    sub_B775C4(&StageEntity_TypeInfo);
    byte_438BF45 = 1;
  }
  questId = this->fields.questId;
  questPhase = this->fields.questPhase;
  wave = this->fields.wave;
  if ( (BYTE3(StageEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !StageEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(StageEntity_TypeInfo);
  return StageEntity__CreatePK(questId, questPhase, wave, v2);
}


System_Int32_array *__fastcall StageEntity__GetAddUniqueCameraIds(
        StageEntity_o *this,
        System_Int32_array *defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_438BF7F & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_16580/*"addUniqueCameraIds"*/);
    byte_438BF7F = 1;
  }
  return StageEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_16580/*"addUniqueCameraIds"*/, defVal, v3);
}


System_Object_array *__fastcall StageEntity__GetAiActTypeAttackCommandCard(
        StageEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *script; // x0
  __int64 v6; // x10

  if ( (byte_438BF65 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_B775C4(&Method_System_Collections_Generic_List_object__ToArray__);
    sub_B775C4(&System_Collections_Generic_List_object__TypeInfo);
    sub_B775C4(&StringLiteral_16611/*"aiActTypeAttackCommandCard"*/);
    byte_438BF65 = 1;
  }
  if ( !StageEntity__checkScript(this, (System_String_o *)StringLiteral_16611/*"aiActTypeAttackCommandCard"*/, v2) )
    return 0LL;
  script = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this->fields.script;
  if ( !script
    || (script = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                     script,
                                                                                     (System_Type_o *)StringLiteral_16611/*"aiActTypeAttackCommandCard"*/,
                                                                                     (const MethodInfo_2F7D534 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL
    || (v6 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1),
        *(&script->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (System_Collections_Generic_List_object__c *)script->klass->_2.typeHierarchy[v6 - 1] != System_Collections_Generic_List_object__TypeInfo )
  {
    sub_B7769C(script, v4);
  }
  return (System_Object_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)script,
                                  (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_object__ToArray__);
}


int32_t __fastcall StageEntity__GetAiActTypeAttackCommandCardType(
        StageEntity_o *this,
        BattleServantData_o *enemyServantData,
        const MethodInfo *method)
{
  __int64 AiActTypeAttackCommandCard; // x0
  __int64 v6; // x8
  __int64 v7; // x20
  unsigned __int64 v8; // x23
  __int64 v9; // x24
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *v10; // x21
  __int64 v11; // x10
  __int64 v12; // x1
  struct BattleDeckServantData_o *deckSvt; // x8
  int32_t npcId; // w22
  __int64 v15; // x0
  StageEntity_o *v16; // x0
  const MethodInfo *v17; // x1

  if ( (byte_438BF66 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_B775C4(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_B775C4(&long_TypeInfo);
    sub_B775C4(&StringLiteral_21597/*"npcServantId"*/);
    sub_B775C4(&StringLiteral_17574/*"cardType"*/);
    byte_438BF66 = 1;
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
      v8 = 0LL;
      v9 = AiActTypeAttackCommandCard + 32;
      while ( 1 )
      {
        if ( v8 >= (unsigned int)v6 )
        {
          v15 = sub_B776C8(AiActTypeAttackCommandCard);
          sub_B77668(v15, 0LL);
        }
        v10 = *(System_Collections_Generic_Dictionary_Type__IStoreExtension__o **)(v9 + 8 * v8);
        if ( v10 )
        {
          v11 = *(&System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.bitflags2 + 1);
          if ( *(&v10->klass->_2.bitflags2 + 1) >= (unsigned int)v11
            && (System_Collections_Generic_Dictionary_string__object__c *)v10->klass->_2.typeHierarchy[v11 - 1] == System_Collections_Generic_Dictionary_string__object__TypeInfo )
          {
            AiActTypeAttackCommandCard = System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                                           *(System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o **)(v9 + 8 * v8),
                                           (System_Xml_XmlQualifiedName_o *)StringLiteral_21597/*"npcServantId"*/,
                                           (const MethodInfo_2F7D86C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
            if ( (AiActTypeAttackCommandCard & 1) != 0 )
            {
              if ( !enemyServantData )
                goto LABEL_24;
              deckSvt = enemyServantData->fields.deckSvt;
              if ( !deckSvt )
                goto LABEL_24;
              npcId = deckSvt->fields.npcId;
              AiActTypeAttackCommandCard = (__int64)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                      v10,
                                                      (System_Type_o *)StringLiteral_21597/*"npcServantId"*/,
                                                      (const MethodInfo_2F7D534 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
              if ( !AiActTypeAttackCommandCard )
                goto LABEL_24;
              if ( *(Il2CppClass **)(*(_QWORD *)AiActTypeAttackCommandCard + 64LL) != long_TypeInfo->_1.element_class )
                goto LABEL_25;
              AiActTypeAttackCommandCard = j_il2cpp_object_unbox_0(AiActTypeAttackCommandCard);
              if ( npcId == *(_DWORD *)AiActTypeAttackCommandCard )
              {
                AiActTypeAttackCommandCard = System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                                               (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v10,
                                               (System_Xml_XmlQualifiedName_o *)StringLiteral_17574/*"cardType"*/,
                                               (const MethodInfo_2F7D86C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
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
      AiActTypeAttackCommandCard = (__int64)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                              v10,
                                              (System_Type_o *)StringLiteral_17574/*"cardType"*/,
                                              (const MethodInfo_2F7D534 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !AiActTypeAttackCommandCard )
LABEL_24:
        sub_B7769C(AiActTypeAttackCommandCard, v12);
      if ( *(Il2CppClass **)(*(_QWORD *)AiActTypeAttackCommandCard + 64LL) == long_TypeInfo->_1.element_class )
      {
        LODWORD(AiActTypeAttackCommandCard) = *(_DWORD *)j_il2cpp_object_unbox_0(AiActTypeAttackCommandCard);
      }
      else
      {
LABEL_25:
        v16 = (StageEntity_o *)sub_B77990(AiActTypeAttackCommandCard);
        LODWORD(AiActTypeAttackCommandCard) = StageEntity__IsDisableFieldMotion(v16, v17);
      }
    }
  }
  return AiActTypeAttackCommandCard;
}


System_Collections_Generic_List_AiAllocationInfo__o *__fastcall StageEntity__GetAiAllocationInfoList(
        StageEntity_o *this,
        const MethodInfo *method)
{
  System_String_o *Value_string; // x19
  bool IsNullOrEmpty; // w8
  System_Collections_Generic_List_AiAllocationInfo__o *result; // x0
  StageEntity___c_c *v6; // x0
  struct StageEntity___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__68_0; // x20
  Il2CppObject *v9; // x21
  struct StageEntity___c_StaticFields *v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0

  if ( (byte_438BF78 & 1) == 0 )
  {
    sub_B775C4(&Method_BasicHelper_GetValue_List_object____);
    sub_B775C4(&Method_System_Linq_Enumerable_Select_object__AiAllocationInfo___);
    sub_B775C4(&Method_System_Linq_Enumerable_ToList_AiAllocationInfo___);
    sub_B775C4(&Method_System_Func_object__AiAllocationInfo___ctor__);
    sub_B775C4(&System_Func_object__AiAllocationInfo__TypeInfo);
    sub_B775C4(&Method_StageEntity___c__GetAiAllocationInfoList_b__68_0__);
    sub_B775C4(&StageEntity___c_TypeInfo);
    sub_B775C4(&StringLiteral_16612/*"aiAllocations"*/);
    byte_438BF78 = 1;
  }
  Value_string = BasicHelper__GetValue_string_(
                   this->fields.script,
                   (System_String_o *)StringLiteral_16612/*"aiAllocations"*/,
                   0LL,
                   (const MethodInfo_1C67E80 *)Method_BasicHelper_GetValue_List_object____);
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)Value_string, 0LL);
  result = 0LL;
  if ( !IsNullOrEmpty )
  {
    v6 = StageEntity___c_TypeInfo;
    if ( (BYTE3(StageEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !StageEntity___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(StageEntity___c_TypeInfo);
      v6 = StageEntity___c_TypeInfo;
    }
    static_fields = v6->static_fields;
    _9__68_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__68_0;
    if ( !_9__68_0 )
    {
      if ( (BYTE3(v6->vtable._0_Equals.methodPtr) & 4) != 0 && !v6->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v6);
        static_fields = StageEntity___c_TypeInfo->static_fields;
      }
      v9 = (Il2CppObject *)static_fields->__9;
      _9__68_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B77694(System_Func_object__AiAllocationInfo__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
        _9__68_0,
        v9,
        Method_StageEntity___c__GetAiAllocationInfoList_b__68_0__,
        (const MethodInfo_29EAA10 *)Method_System_Func_object__AiAllocationInfo___ctor__);
      v10 = StageEntity___c_TypeInfo->static_fields;
      v10->__9__68_0 = (struct System_Func_object__AiAllocationInfo__o *)_9__68_0;
      sub_B77560(
        (BattleServantConfConponent_o *)&v10->__9__68_0,
        (System_Int32_array **)_9__68_0,
        v11,
        v12,
        v13,
        v14,
        v15,
        v16);
    }
    v17 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)Value_string,
                                                                 (System_Func_TSource__TResult__o *)_9__68_0,
                                                                 (const MethodInfo_1D39068 *)Method_System_Linq_Enumerable_Select_object__AiAllocationInfo___);
    return (System_Collections_Generic_List_AiAllocationInfo__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                    v17,
                                                                    (const MethodInfo_1D404B8 *)Method_System_Linq_Enumerable_ToList_AiAllocationInfo___);
  }
  return result;
}


System_Int32_array *__fastcall StageEntity__GetAssumedEffectId(StageEntity_o *this, const MethodInfo *method)
{
  if ( (byte_438BF7C & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_16822/*"assumedEffectId"*/);
    byte_438BF7C = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_16822/*"assumedEffectId"*/, 0LL);
}


System_String_array *__fastcall StageEntity__GetAssumedVoiceAssetNames(StageEntity_o *this, const MethodInfo *method)
{
  if ( (byte_438BF80 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_16823/*"assumedVoiceAssetNames"*/);
    byte_438BF80 = 1;
  }
  return EntityScriptUtil__GetStringArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_16823/*"assumedVoiceAssetNames"*/, 0LL);
}


System_String_array *__fastcall StageEntity__GetBattleStartVoiceIdArray(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  Il2CppObject *ScriptObject; // x0
  System_Collections_Generic_List_string__o *v5; // x19
  __int64 v6; // x10
  StageEntity___c_c *v8; // x0
  struct StageEntity___c_StaticFields *static_fields; // x8
  System_Converter_string__string__o *_9__54_0; // x20
  Il2CppObject *v11; // x21
  struct StageEntity___c_StaticFields *v12; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_Collections_Generic_List_WarBoardUiData_SaveData__o *v19; // x0
  __int64 v20; // x1

  if ( (byte_438BF6C & 1) == 0 )
  {
    sub_B775C4(&Method_System_Converter_object__string___ctor__);
    sub_B775C4(&System_Converter_object__string__TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_object__ConvertAll_string___);
    sub_B775C4(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_B775C4(&System_Collections_Generic_List_object__TypeInfo);
    sub_B775C4(&string___TypeInfo);
    sub_B775C4(&Method_StageEntity___c__GetBattleStartVoiceIdArray_b__54_0__);
    sub_B775C4(&StageEntity___c_TypeInfo);
    sub_B775C4(&StringLiteral_16985/*"battleStartVoiceIds"*/);
    byte_438BF6C = 1;
  }
  ScriptObject = StageEntity__GetScriptObject(this, (System_String_o *)StringLiteral_16985/*"battleStartVoiceIds"*/, v2);
  if ( !ScriptObject )
    return (System_String_array *)sub_B775DC(string___TypeInfo, 0LL);
  v5 = (System_Collections_Generic_List_string__o *)ScriptObject;
  v6 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
  if ( *(&ScriptObject->klass->_2.bitflags2 + 1) < (unsigned int)v6
    || (System_Collections_Generic_List_object__c *)ScriptObject->klass->_2.typeHierarchy[v6 - 1] != System_Collections_Generic_List_object__TypeInfo )
  {
    return (System_String_array *)sub_B775DC(string___TypeInfo, 0LL);
  }
  v8 = StageEntity___c_TypeInfo;
  if ( (BYTE3(StageEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !StageEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(StageEntity___c_TypeInfo);
    v8 = StageEntity___c_TypeInfo;
  }
  static_fields = v8->static_fields;
  _9__54_0 = (System_Converter_string__string__o *)static_fields->__9__54_0;
  if ( !_9__54_0 )
  {
    if ( (BYTE3(v8->vtable._0_Equals.methodPtr) & 4) != 0 && !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      static_fields = StageEntity___c_TypeInfo->static_fields;
    }
    v11 = (Il2CppObject *)static_fields->__9;
    _9__54_0 = (System_Converter_string__string__o *)sub_B77694(System_Converter_object__string__TypeInfo);
    System_Converter_string__string____ctor(
      _9__54_0,
      v11,
      Method_StageEntity___c__GetBattleStartVoiceIdArray_b__54_0__,
      (const MethodInfo_21F7E10 *)Method_System_Converter_object__string___ctor__);
    v12 = StageEntity___c_TypeInfo->static_fields;
    v12->__9__54_0 = (struct System_Converter_object__string__o *)_9__54_0;
    sub_B77560(
      (BattleServantConfConponent_o *)&v12->__9__54_0,
      (System_Int32_array **)_9__54_0,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
  }
  v19 = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)System_Collections_Generic_List_string___ConvertAll_string_(
                                                                        v5,
                                                                        (System_Converter_T__TOutput__o *)_9__54_0,
                                                                        (const MethodInfo_19AEDB4 *)Method_System_Collections_Generic_List_object__ConvertAll_string___);
  if ( !v19 )
    sub_B7769C(0LL, v20);
  return (System_String_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                  v19,
                                  (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_string__ToArray__);
}


int32_t __fastcall StageEntity__GetBattleStartVoiceServantId(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_438BF6A & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_16986/*"battleStartVoiceSvtId"*/);
    byte_438BF6A = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_16986/*"battleStartVoiceSvtId"*/, 0, v2);
}


int32_t __fastcall StageEntity__GetBattleStartVoiceServantLimit(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_438BF6B & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_16987/*"battleStartVoiceSvtLimit"*/);
    byte_438BF6B = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_16987/*"battleStartVoiceSvtLimit"*/, -1, v2);
}


System_Int32_array *__fastcall StageEntity__GetBossIdAndChangeBgmId(StageEntity_o *this, const MethodInfo *method)
{
  System_Int32_array *v3; // x2
  const MethodInfo *v4; // x3

  if ( (byte_438BF64 & 1) == 0 )
  {
    sub_B775C4(&int___TypeInfo);
    sub_B775C4(&StringLiteral_17224/*"bossIdAndChangeBgmId"*/);
    byte_438BF64 = 1;
  }
  v3 = (System_Int32_array *)sub_B775DC(int___TypeInfo, 0LL);
  return StageEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_17224/*"bossIdAndChangeBgmId"*/, v3, v4);
}


System_Int32_array *__fastcall StageEntity__GetCutInSvtIds(StageEntity_o *this, bool isEnemy, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  System_String_o **v6; // x8

  if ( (byte_438BF61 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_18726/*"enemyCutInSvtIds"*/);
    sub_B775C4(&StringLiteral_21948/*"playerCutInSvtIds"*/);
    byte_438BF61 = 1;
  }
  v6 = (System_String_o **)&StringLiteral_18726/*"enemyCutInSvtIds"*/;
  if ( !isEnemy )
    v6 = (System_String_o **)&StringLiteral_21948/*"playerCutInSvtIds"*/;
  return StageEntity__getScriptIntArrayParam(this, *v6, 0LL, v3);
}


int32_t __fastcall StageEntity__GetEffectBgmId(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_438BF62 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_18628/*"effectBgmId"*/);
    byte_438BF62 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_18628/*"effectBgmId"*/, -1, v2);
}


int32_t __fastcall StageEntity__GetEffectSvtId(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_438BF60 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_18639/*"effectSvtId"*/);
    byte_438BF60 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_18639/*"effectSvtId"*/, 0, v2);
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
  struct StageEntity___c_StaticFields *static_fields; // x8
  System_Func_int__int__o *_9__64_0; // x20
  Il2CppObject *v11; // x21
  struct StageEntity___c_StaticFields *v12; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x0

  if ( (byte_438BF74 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Linq_Enumerable_Select_int__int___);
    sub_B775C4(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_B775C4(&Method_System_Func_int__int___ctor__);
    sub_B775C4(&System_Func_int__int__TypeInfo);
    sub_B775C4(&Method_StageEntity___c__GetEnemyAddOrderPosArray_b__64_0__);
    sub_B775C4(&StageEntity___c_TypeInfo);
    sub_B775C4(&StringLiteral_18728/*"enemyEntryOrder"*/);
    byte_438BF74 = 1;
  }
  ScriptIntArrayParam = StageEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_18728/*"enemyEntryOrder"*/, 0LL, v3);
  if ( ScriptIntArrayParam )
  {
    v7 = (System_Collections_Generic_IEnumerable_TSource__o *)ScriptIntArrayParam;
    v8 = StageEntity___c_TypeInfo;
    if ( (BYTE3(StageEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !StageEntity___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(StageEntity___c_TypeInfo);
      v8 = StageEntity___c_TypeInfo;
    }
    static_fields = v8->static_fields;
    _9__64_0 = static_fields->__9__64_0;
    if ( !_9__64_0 )
    {
      if ( (BYTE3(v8->vtable._0_Equals.methodPtr) & 4) != 0 && !v8->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v8);
        static_fields = StageEntity___c_TypeInfo->static_fields;
      }
      v11 = (Il2CppObject *)static_fields->__9;
      _9__64_0 = (System_Func_int__int__o *)sub_B77694(System_Func_int__int__TypeInfo);
      System_Func_int__int____ctor(
        _9__64_0,
        v11,
        Method_StageEntity___c__GetEnemyAddOrderPosArray_b__64_0__,
        (const MethodInfo_29E3638 *)Method_System_Func_int__int___ctor__);
      v12 = StageEntity___c_TypeInfo->static_fields;
      v12->__9__64_0 = _9__64_0;
      sub_B77560(
        (BattleServantConfConponent_o *)&v12->__9__64_0,
        (System_Int32_array **)_9__64_0,
        v13,
        v14,
        v15,
        v16,
        v17,
        v18);
    }
    v19 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__int_(
                                                                 v7,
                                                                 (System_Func_TSource__TResult__o *)_9__64_0,
                                                                 (const MethodInfo_1D3729C *)Method_System_Linq_Enumerable_Select_int__int___);
  }
  else
  {
    v19 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Range(0, enemyFieldPosCount, 0LL);
  }
  return System_Linq_Enumerable__ToArray_int_(
           v19,
           (const MethodInfo_1D3D440 *)Method_System_Linq_Enumerable_ToArray_int___);
}


int32_t __fastcall StageEntity__GetEnemyCountStartValue(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_438BF79 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_18725/*"enemyCountStartValue"*/);
    byte_438BF79 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_18725/*"enemyCountStartValue"*/, 0, v2);
}


int32_t __fastcall StageEntity__GetEnemyEntryMaxCountEachTurn(
        StageEntity_o *this,
        int32_t defaultValue,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_438BF75 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_18727/*"enemyEntryMaxCountEachTurn"*/);
    byte_438BF75 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_18727/*"enemyEntryMaxCountEachTurn"*/, defaultValue, v3);
}


int32_t __fastcall StageEntity__GetEnemyFieldPosCount(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_438BF6D & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_18730/*"enemyFieldPosCount"*/);
    byte_438BF6D = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_18730/*"enemyFieldPosCount"*/, 3, v2);
}


int32_t __fastcall StageEntity__GetFadeType(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_438BF5F & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_16983/*"battleStartFadeType"*/);
    byte_438BF5F = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_16983/*"battleStartFadeType"*/, 0, v2);
}


System_Int32_array *__fastcall StageEntity__GetFieldCallServantId(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  System_Int32_array *result; // x0

  if ( (byte_438BF68 & 1) == 0 )
  {
    sub_B775C4(&int___TypeInfo);
    sub_B775C4(&StringLiteral_17517/*"call"*/);
    byte_438BF68 = 1;
  }
  result = StageEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_17517/*"call"*/, 0LL, v2);
  if ( !result )
    return (System_Int32_array *)sub_B775DC(int___TypeInfo, 0LL);
  return result;
}


System_Int32_array *__fastcall StageEntity__GetFieldPosSkillId(StageEntity_o *this, const MethodInfo *method)
{
  System_Int32_array *v3; // x2
  const MethodInfo *v4; // x3

  if ( (byte_438BF76 & 1) == 0 )
  {
    sub_B775C4(&int___TypeInfo);
    sub_B775C4(&StringLiteral_19090/*"fieldPosSkillId"*/);
    byte_438BF76 = 1;
  }
  v3 = (System_Int32_array *)sub_B775DC(int___TypeInfo, 0LL);
  return StageEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_19090/*"fieldPosSkillId"*/, v3, v4);
}


System_Int32_array *__fastcall StageEntity__GetFieldPosSkillLv(StageEntity_o *this, const MethodInfo *method)
{
  System_Int32_array *v3; // x2
  const MethodInfo *v4; // x3

  if ( (byte_438BF77 & 1) == 0 )
  {
    sub_B775C4(&int___TypeInfo);
    sub_B775C4(&StringLiteral_19091/*"fieldPosSkillLv"*/);
    byte_438BF77 = 1;
  }
  v3 = (System_Int32_array *)sub_B775DC(int___TypeInfo, 0LL);
  return StageEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_19091/*"fieldPosSkillLv"*/, v3, v4);
}


System_Int32_array *__fastcall StageEntity__GetMultiEffectIds(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_438BF5E & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_21423/*"multiEffectIds"*/);
    byte_438BF5E = 1;
  }
  return StageEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_21423/*"multiEffectIds"*/, 0LL, v2);
}


int32_t __fastcall StageEntity__GetPriorityBG(StageEntity_o *this, int32_t def, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_438BF7A & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_21986/*"priorityBG"*/);
    byte_438BF7A = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_21986/*"priorityBG"*/, def, v3);
}


int32_t __fastcall StageEntity__GetPriorityBgm(StageEntity_o *this, int32_t def, const MethodInfo *method)
{
  const MethodInfo *v5; // x3
  BgmMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v8; // x1

  if ( (byte_438BF7B & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMaster_BgmMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&StringLiteral_21987/*"priorityBgm"*/);
    byte_438BF7B = 1;
  }
  if ( StageEntity__checkScript(this, (System_String_o *)StringLiteral_21987/*"priorityBgm"*/, method) )
    return StageEntity__getScript(this, (System_String_o *)StringLiteral_21987/*"priorityBgm"*/, def, v5);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (BgmMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_BgmMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B7769C(0LL, v8);
  return BgmMaster__GetBgmPriority(Master_WarQuestSelectionMaster, this->fields.bgmId, def, 0LL);
}


int32_t __fastcall StageEntity__GetProhibitBgmChangeInTreasureDeviceAnim(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_438BF81 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_22008/*"prohibitBgmChangeInTreasureDeviceAnim"*/);
    byte_438BF81 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_22008/*"prohibitBgmChangeInTreasureDeviceAnim"*/, 0, v2);
}


Il2CppObject *__fastcall StageEntity__GetScriptObject(
        StageEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_438BF69 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    byte_438BF69 = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( !script )
    sub_B7769C(0LL, key);
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
         (System_Xml_XmlQualifiedName_o *)key,
         &value,
         (const MethodInfo_2F7F3F8 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    return (Il2CppObject *)value;
  }
  else
  {
    return 0LL;
  }
}


int32_t __fastcall StageEntity__GetStartBgmOffFlag(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_438BF63 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_22745/*"startBgmOff"*/);
    byte_438BF63 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_22745/*"startBgmOff"*/, 0, v2);
}


SubBgmPlayArgs_array *__fastcall StageEntity__GetSubBgmPlayArgsArray(StageEntity_o *this, const MethodInfo *method)
{
  StageEntity___c_c *v3; // x0
  struct StageEntity___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__61_0; // x20
  Il2CppObject *v6; // x21
  struct StageEntity___c_StaticFields *v7; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_438BF71 & 1) == 0 )
  {
    sub_B775C4(&Method_EntityScriptUtil_GetScriptValue_List_object___SubBgmPlayArgs_____);
    sub_B775C4(&Method_System_Func_List_object___SubBgmPlayArgs_____ctor__);
    sub_B775C4(&System_Func_List_object___SubBgmPlayArgs____TypeInfo);
    sub_B775C4(&Method_StageEntity___c__GetSubBgmPlayArgsArray_b__61_0__);
    sub_B775C4(&StageEntity___c_TypeInfo);
    sub_B775C4(&StringLiteral_22848/*"subBgms"*/);
    byte_438BF71 = 1;
  }
  v3 = StageEntity___c_TypeInfo;
  if ( (BYTE3(StageEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !StageEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(StageEntity___c_TypeInfo);
    v3 = StageEntity___c_TypeInfo;
  }
  static_fields = v3->static_fields;
  _9__61_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__61_0;
  if ( !_9__61_0 )
  {
    if ( (BYTE3(v3->vtable._0_Equals.methodPtr) & 4) != 0 && !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      static_fields = StageEntity___c_TypeInfo->static_fields;
    }
    v6 = (Il2CppObject *)static_fields->__9;
    _9__61_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B77694(System_Func_List_object___SubBgmPlayArgs____TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__61_0,
      v6,
      Method_StageEntity___c__GetSubBgmPlayArgsArray_b__61_0__,
      (const MethodInfo_29EAA10 *)Method_System_Func_List_object___SubBgmPlayArgs_____ctor__);
    v7 = StageEntity___c_TypeInfo->static_fields;
    v7->__9__61_0 = (struct System_Func_List_object___SubBgmPlayArgs____o *)_9__61_0;
    sub_B77560(
      (BattleServantConfConponent_o *)&v7->__9__61_0,
      (System_Int32_array **)_9__61_0,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
  }
  return (SubBgmPlayArgs_array *)EntityScriptUtil__GetScriptValue_object__object_(
                                   this->fields.script,
                                   (System_String_o *)StringLiteral_22848/*"subBgms"*/,
                                   (System_Func_TSource__TDestination__o *)_9__61_0,
                                   0LL,
                                   (const MethodInfo_1D1A9A4 *)Method_EntityScriptUtil_GetScriptValue_List_object___SubBgmPlayArgs_____);
}


int32_t __fastcall StageEntity__GetSubBgmsPriority(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_438BF72 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_22849/*"subBgmsPriority"*/);
    byte_438BF72 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_22849/*"subBgmsPriority"*/, 0, v2);
}


System_Int32_array *__fastcall StageEntity__GetTurnEffect(
        StageEntity_o *this,
        int32_t limitTurn,
        System_Int32_array *turnlist,
        const MethodInfo *method)
{
  System_Int32_array *result; // x0
  __int64 v7; // x1
  unsigned __int64 max_length; // x8
  il2cpp_array_size_t v9; // w9
  int32_t v10; // w10
  unsigned __int64 v11; // x11
  il2cpp_array_size_t v12; // w14
  __int64 v13; // x0

  if ( (byte_438BF59 & 1) == 0 )
  {
    sub_B775C4(&int___TypeInfo);
    byte_438BF59 = 1;
  }
  result = (System_Int32_array *)sub_B775DC(int___TypeInfo, (unsigned int)limitTurn);
  if ( !result )
LABEL_15:
    sub_B7769C(result, v7);
  max_length = result->max_length;
  if ( (__int64)(max_length << 32) >= 1 )
  {
    v9 = 0;
    v10 = 0;
    v11 = 0LL;
    do
    {
      if ( v11 >= max_length )
      {
LABEL_14:
        v13 = sub_B776C8(result);
        sub_B77668(v13, 0LL);
      }
      result->m_Items[v11 + 1] = v10;
      if ( !turnlist )
        goto LABEL_15;
      v12 = turnlist->max_length;
      if ( (int)v9 < (int)v12 )
      {
        if ( v9 >= v12 )
          goto LABEL_14;
        if ( v11 == turnlist->m_Items[v9 + 1] - 1 )
        {
          ++v10;
          ++v9;
        }
      }
      ++v11;
    }
    while ( (__int64)v11 < (int)max_length );
  }
  return result;
}


System_Int32_array *__fastcall StageEntity__GetWaveFieldMotionIds(
        StageEntity_o *this,
        System_Int32_array *defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_438BF7E & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_19088/*"fieldMotionIds"*/);
    byte_438BF7E = 1;
  }
  return StageEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_19088/*"fieldMotionIds"*/, defVal, v3);
}


bool __fastcall StageEntity__Is3_6BossBattle(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_438BF6E & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_1181/*"3.6BossBattle"*/);
    byte_438BF6E = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_1181/*"3.6BossBattle"*/, 0, v2) > 0;
}


bool __fastcall StageEntity__IsDisableFieldMotion(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_438BF67 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_18386/*"disableUniqueFieldMotion"*/);
    byte_438BF67 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_18386/*"disableUniqueFieldMotion"*/, 0, v2) > 0;
}


bool __fastcall StageEntity__IsForceSetNormalEnemyStatusUI(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_438BF73 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_6899/*"ForceSetNormalEnemyStatusUI"*/);
    byte_438BF73 = 1;
  }
  return StageEntity__checkScript(this, (System_String_o *)StringLiteral_6899/*"ForceSetNormalEnemyStatusUI"*/, v2);
}


bool __fastcall StageEntity__IsReleaseUnusedAssetsWhenEntryMember(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_438BF70 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_22221/*"releaseUnusedAssetsWhenEntryMember"*/);
    byte_438BF70 = 1;
  }
  return StageEntity__checkScript(this, (System_String_o *)StringLiteral_22221/*"releaseUnusedAssetsWhenEntryMember"*/, v2);
}


bool __fastcall StageEntity__IsSkipWaveStartFadeInSe(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_438BF7D & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_22631/*"skipWaveStartFadeInSe"*/);
    byte_438BF7D = 1;
  }
  return StageEntity__checkScript(this, (System_String_o *)StringLiteral_22631/*"skipWaveStartFadeInSe"*/, v2);
}


bool __fastcall StageEntity__IsSpecifiedBattleStartVoice(StageEntity_o *this, const MethodInfo *method)
{
  int32_t BattleStartVoiceServantId; // w20
  const MethodInfo *v4; // x1

  BattleStartVoiceServantId = StageEntity__GetBattleStartVoiceServantId(this, method);
  return (BattleStartVoiceServantId > 0) & (StageEntity__GetBattleStartVoiceServantLimit(this, v4) >= 0);
}


bool __fastcall StageEntity__IsSpecifiedBattleStartVoice_26739996(
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

  if ( (byte_438BF52 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_19234/*"fov"*/);
    byte_438BF52 = 1;
  }
  return StageEntity__checkScript(this, (System_String_o *)StringLiteral_19234/*"fov"*/, v2);
}


bool __fastcall StageEntity__checkScript(StageEntity_o *this, System_String_o *key, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_438BF49 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    byte_438BF49 = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                       (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
                       (System_Xml_XmlQualifiedName_o *)key,
                       (const MethodInfo_2F7D86C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)script;
}


bool __fastcall StageEntity__disableSystemFadeStartBattle(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_438BF5D & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_18384/*"disableSystemFadeStartBattle"*/);
    byte_438BF5D = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_18384/*"disableSystemFadeStartBattle"*/, 0, v2) > 0;
}


int32_t __fastcall StageEntity__getBattleMasterImageId(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_438BF6F & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_16981/*"battleMasterImageId"*/);
    byte_438BF6F = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_16981/*"battleMasterImageId"*/, 0, v2);
}


int32_t __fastcall StageEntity__getChangeBgId(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_438BF55 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_17615/*"changeBgId"*/);
    byte_438BF55 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_17615/*"changeBgId"*/, 0, v2);
}


int32_t __fastcall StageEntity__getChangeBgType(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_438BF56 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_17616/*"changeBgType"*/);
    byte_438BF56 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_17616/*"changeBgType"*/, 0, v2);
}


float __fastcall StageEntity__getCustomFOV(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_438BF51 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_19234/*"fov"*/);
    byte_438BF51 = 1;
  }
  return StageEntity__getScriptFloat(this, (System_String_o *)StringLiteral_19234/*"fov"*/, 0.0, v2);
}


int32_t __fastcall StageEntity__getEnemyActCount(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t result; // w0
  StageEntity_c *v5; // x0

  if ( (byte_438BF5B & 1) == 0 )
  {
    sub_B775C4(&StageEntity_TypeInfo);
    sub_B775C4(&StringLiteral_6142/*"EnemyActCount"*/);
    byte_438BF5B = 1;
  }
  result = StageEntity__getScript(this, (System_String_o *)StringLiteral_6142/*"EnemyActCount"*/, 0, v2);
  if ( result <= 0 )
  {
    v5 = StageEntity_TypeInfo;
    if ( (BYTE3(StageEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !StageEntity_TypeInfo->_2.cctor_finished )
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
  __int64 v10; // x0

  if ( (byte_438BF54 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_18731/*"enemyMasterBattleId"*/);
    sub_B775C4(&StringLiteral_18732/*"enemyMasterBattleIdByPlayerGender"*/);
    byte_438BF54 = 1;
  }
  ScriptIntArrayParam = StageEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_18732/*"enemyMasterBattleIdByPlayerGender"*/, 0LL, v2);
  if ( !ScriptIntArrayParam )
    return StageEntity__getScript(this, (System_String_o *)StringLiteral_18731/*"enemyMasterBattleId"*/, 0, v5);
  v6 = ScriptIntArrayParam;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_13;
  if ( SelfUserGame->fields.genderType == 1 )
  {
    if ( v6->max_length )
      return v6->m_Items[1];
LABEL_14:
    v10 = sub_B776C8(SelfUserGame);
    sub_B77668(v10, 0LL);
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
LABEL_13:
    sub_B7769C(SelfUserGame, v8);
  if ( SelfUserGame->fields.genderType != 2 )
    return StageEntity__getScript(this, (System_String_o *)StringLiteral_18731/*"enemyMasterBattleId"*/, 0, v5);
  if ( v6->max_length <= 1 )
    goto LABEL_14;
  return v6->m_Items[2];
}


System_Object_array *__fastcall StageEntity__getFieldAis(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *script; // x0
  __int64 v6; // x9
  StageEntity_o *v8; // x0
  int32_t v9; // w1
  const MethodInfo *v10; // x2

  if ( (byte_438BF57 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_B775C4(&Method_System_Collections_Generic_List_object__ToArray__);
    sub_B775C4(&System_Collections_Generic_List_object__TypeInfo);
    sub_B775C4(&StringLiteral_16613/*"aiFieldIds"*/);
    byte_438BF57 = 1;
  }
  if ( !StageEntity__checkScript(this, (System_String_o *)StringLiteral_16613/*"aiFieldIds"*/, v2) )
    return 0LL;
  script = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this->fields.script;
  if ( !script
    || (script = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                     script,
                                                                                     (System_Type_o *)StringLiteral_16613/*"aiFieldIds"*/,
                                                                                     (const MethodInfo_2F7D534 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_B7769C(script, v4);
  }
  v6 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
  if ( *(&script->klass->_2.bitflags2 + 1) >= (unsigned int)v6
    && (System_Collections_Generic_List_object__c *)script->klass->_2.typeHierarchy[v6 - 1] == System_Collections_Generic_List_object__TypeInfo )
  {
    return (System_Object_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)script,
                                    (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_object__ToArray__);
  }
  v8 = (StageEntity_o *)sub_B77990(script);
  return (System_Object_array *)StageEntity__getTurnEffect(v8, v9, v10);
}


int32_t __fastcall StageEntity__getLimitAct(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_438BF50 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_8678/*"LimitAct"*/);
    byte_438BF50 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_8678/*"LimitAct"*/, 0, v2);
}


int32_t __fastcall StageEntity__getLimitTurn(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_438BF4D & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_23293/*"turn"*/);
    byte_438BF4D = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_23293/*"turn"*/, 0, v2);
}


System_Int32_array *__fastcall StageEntity__getNoEntryIds(StageEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  System_Type_o *v4; // x20
  System_Collections_Generic_List_object__c *v5; // x1
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *Item; // x0
  System_Collections_Generic_List_BattleActionData_HealData__o *v7; // x19
  StageEntity___c_c *v8; // x8
  struct StageEntity___c_StaticFields *static_fields; // x9
  System_Converter_BattleActionData_HealData__int__o *_9__36_0; // x20
  __int64 v11; // x11
  __int64 v12; // x9
  Il2CppObject *v14; // x21
  struct StageEntity___c_StaticFields *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_438BF5A & 1) == 0 )
  {
    sub_B775C4(&Method_System_Converter_object__int___ctor__);
    sub_B775C4(&System_Converter_object__int__TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_B775C4(&int___TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_object__ConvertAll_int___);
    sub_B775C4(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B775C4(&System_Collections_Generic_List_object__TypeInfo);
    sub_B775C4(&Method_StageEntity___c__getNoEntryIds_b__36_0__);
    sub_B775C4(&StageEntity___c_TypeInfo);
    sub_B775C4(&StringLiteral_9760/*"NoEntryIds"*/);
    byte_438BF5A = 1;
  }
  script = this->fields.script;
  if ( !script )
    return (System_Int32_array *)sub_B775DC(int___TypeInfo, 0LL);
  v4 = (System_Type_o *)StringLiteral_9760/*"NoEntryIds"*/;
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_9760/*"NoEntryIds"*/,
          (const MethodInfo_2F7D86C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return (System_Int32_array *)sub_B775DC(int___TypeInfo, 0LL);
  Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this->fields.script;
  if ( !Item )
    goto LABEL_24;
  Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                             Item,
                                                                             v4,
                                                                             (const MethodInfo_2F7D534 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v7 = (System_Collections_Generic_List_BattleActionData_HealData__o *)Item;
  v8 = StageEntity___c_TypeInfo;
  if ( (BYTE3(StageEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !StageEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(StageEntity___c_TypeInfo);
    v8 = StageEntity___c_TypeInfo;
  }
  static_fields = v8->static_fields;
  _9__36_0 = (System_Converter_BattleActionData_HealData__int__o *)static_fields->__9__36_0;
  v5 = System_Collections_Generic_List_object__TypeInfo;
  if ( v7 )
  {
    v11 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
    if ( *(&v7->klass->_2.bitflags2 + 1) < (unsigned int)v11
      || (System_Collections_Generic_List_object__c *)v7->klass->_2.typeHierarchy[v11 - 1] != System_Collections_Generic_List_object__TypeInfo )
    {
      goto LABEL_16;
    }
  }
  if ( !_9__36_0 )
  {
    if ( (BYTE3(v8->vtable._0_Equals.methodPtr) & 4) != 0 && !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      static_fields = StageEntity___c_TypeInfo->static_fields;
    }
    v14 = (Il2CppObject *)static_fields->__9;
    _9__36_0 = (System_Converter_BattleActionData_HealData__int__o *)sub_B77694(System_Converter_object__int__TypeInfo);
    System_Converter_BattleActionData_HealData__int____ctor(
      _9__36_0,
      v14,
      Method_StageEntity___c__getNoEntryIds_b__36_0__,
      (const MethodInfo_21F7A30 *)Method_System_Converter_object__int___ctor__);
    v15 = StageEntity___c_TypeInfo->static_fields;
    v15->__9__36_0 = (struct System_Converter_object__int__o *)_9__36_0;
    sub_B77560(
      (BattleServantConfConponent_o *)&v15->__9__36_0,
      (System_Int32_array **)_9__36_0,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
    if ( v7 )
      goto LABEL_22;
LABEL_24:
    sub_B7769C(Item, v5);
  }
  if ( !v7 )
    goto LABEL_24;
  v12 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
  if ( *(&v7->klass->_2.bitflags2 + 1) < (unsigned int)v12
    || (System_Collections_Generic_List_object__c *)v7->klass->_2.typeHierarchy[v12 - 1] != System_Collections_Generic_List_object__TypeInfo )
  {
LABEL_16:
    sub_B77990(v7);
    return (System_Int32_array *)sub_B775DC(int___TypeInfo, 0LL);
  }
LABEL_22:
  Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_List_BattleActionData_HealData___ConvertAll_int_(
                                                                             v7,
                                                                             (System_Converter_T__TOutput__o *)_9__36_0,
                                                                             (const MethodInfo_19AECA8 *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
  if ( !Item )
    goto LABEL_24;
  return System_Collections_Generic_List_int___ToArray(
           (System_Collections_Generic_List_int__o *)Item,
           (const MethodInfo_30E7EF4 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *script; // x0
  int32_t result; // w0
  StageEntity_o *v10; // x0
  System_String_o *v11; // x1
  const MethodInfo *v12; // x2
  float v13; // s0

  v4 = defVal;
  if ( (byte_438BF4A & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_B775C4(&long_TypeInfo);
    byte_438BF4A = 1;
  }
  if ( !StageEntity__checkScript(this, key, *(const MethodInfo **)&defVal) )
    return v4;
  script = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this->fields.script;
  if ( !script
    || (script = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                     script,
                                                                                     (System_Type_o *)key,
                                                                                     (const MethodInfo_2F7D534 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_B7769C(script, v7);
  }
  if ( script->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(script);
  v10 = (StageEntity_o *)sub_B77990(script);
  StageEntity__getScriptFloat(v10, v11, v13, v12);
  return result;
}


float __fastcall StageEntity__getScriptFloat(
        StageEntity_o *this,
        System_String_o *key,
        float defVal,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *script; // x0
  float result; // s0
  StageEntity_o *v10; // x0
  System_String_o *v11; // x1
  System_Int32_array *v12; // x2
  const MethodInfo *v13; // x3

  if ( (byte_438BF4B & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_B775C4(&double_TypeInfo);
    byte_438BF4B = 1;
  }
  if ( !StageEntity__checkScript(this, key, method) )
    return defVal;
  script = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this->fields.script;
  if ( !script
    || (script = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                     script,
                                                                                     (System_Type_o *)key,
                                                                                     (const MethodInfo_2F7D534 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_B7769C(script, v7);
  }
  if ( script->klass->_1.element_class == double_TypeInfo->_1.element_class )
    return *(double *)j_il2cpp_object_unbox_0(script);
  v10 = (StageEntity_o *)sub_B77990(script);
  StageEntity__getScriptIntArrayParam(v10, v11, v12, v13);
  return result;
}


System_Int32_array *__fastcall StageEntity__getScriptIntArrayParam(
        StageEntity_o *this,
        System_String_o *key,
        System_Int32_array *defVal,
        const MethodInfo *method)
{
  System_Int32_array *_9__22_0; // x20
  System_Collections_Generic_List_object__c *v7; // x1
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *script; // x0
  System_Collections_Generic_List_BattleActionData_HealData__o *v9; // x19
  StageEntity___c_c *v10; // x8
  struct StageEntity___c_StaticFields *static_fields; // x9
  __int64 v12; // x11
  __int64 v13; // x9
  Il2CppObject *v15; // x21
  struct StageEntity___c_StaticFields *v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7

  _9__22_0 = defVal;
  if ( (byte_438BF4C & 1) == 0 )
  {
    sub_B775C4(&Method_System_Converter_object__int___ctor__);
    sub_B775C4(&System_Converter_object__int__TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_B775C4(&Method_System_Collections_Generic_List_object__ConvertAll_int___);
    sub_B775C4(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B775C4(&System_Collections_Generic_List_object__TypeInfo);
    sub_B775C4(&Method_StageEntity___c__getScriptIntArrayParam_b__22_0__);
    sub_B775C4(&StageEntity___c_TypeInfo);
    byte_438BF4C = 1;
  }
  if ( !StageEntity__checkScript(this, key, (const MethodInfo *)defVal) )
    return _9__22_0;
  script = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this->fields.script;
  if ( !script )
    goto LABEL_23;
  script = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                               script,
                                                                               (System_Type_o *)key,
                                                                               (const MethodInfo_2F7D534 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v9 = (System_Collections_Generic_List_BattleActionData_HealData__o *)script;
  v10 = StageEntity___c_TypeInfo;
  if ( (BYTE3(StageEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !StageEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(StageEntity___c_TypeInfo);
    v10 = StageEntity___c_TypeInfo;
  }
  static_fields = v10->static_fields;
  _9__22_0 = (System_Int32_array *)static_fields->__9__22_0;
  v7 = System_Collections_Generic_List_object__TypeInfo;
  if ( v9 )
  {
    v12 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
    if ( *(&v9->klass->_2.bitflags2 + 1) < (unsigned int)v12
      || (System_Collections_Generic_List_object__c *)v9->klass->_2.typeHierarchy[v12 - 1] != System_Collections_Generic_List_object__TypeInfo )
    {
      goto LABEL_15;
    }
  }
  if ( !_9__22_0 )
  {
    if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      static_fields = StageEntity___c_TypeInfo->static_fields;
    }
    v15 = (Il2CppObject *)static_fields->__9;
    _9__22_0 = (System_Int32_array *)sub_B77694(System_Converter_object__int__TypeInfo);
    System_Converter_BattleActionData_HealData__int____ctor(
      (System_Converter_BattleActionData_HealData__int__o *)_9__22_0,
      v15,
      Method_StageEntity___c__getScriptIntArrayParam_b__22_0__,
      (const MethodInfo_21F7A30 *)Method_System_Converter_object__int___ctor__);
    v16 = StageEntity___c_TypeInfo->static_fields;
    v16->__9__22_0 = (struct System_Converter_object__int__o *)_9__22_0;
    sub_B77560(
      (BattleServantConfConponent_o *)&v16->__9__22_0,
      (System_Int32_array **)_9__22_0,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
    if ( v9 )
      goto LABEL_21;
LABEL_23:
    sub_B7769C(script, v7);
  }
  if ( !v9 )
    goto LABEL_23;
  v13 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
  if ( *(&v9->klass->_2.bitflags2 + 1) < (unsigned int)v13
    || (System_Collections_Generic_List_object__c *)v9->klass->_2.typeHierarchy[v13 - 1] != System_Collections_Generic_List_object__TypeInfo )
  {
LABEL_15:
    sub_B77990(v9);
    return _9__22_0;
  }
LABEL_21:
  script = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_List_BattleActionData_HealData___ConvertAll_int_(
                                                                               v9,
                                                                               (System_Converter_T__TOutput__o *)_9__22_0,
                                                                               (const MethodInfo_19AECA8 *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
  if ( !script )
    goto LABEL_23;
  return System_Collections_Generic_List_int___ToArray(
           (System_Collections_Generic_List_int__o *)script,
           (const MethodInfo_30E7EF4 *)Method_System_Collections_Generic_List_int__ToArray__);
}


int32_t __fastcall StageEntity__getShowTurnState(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_438BF53 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_22593/*"showTurn"*/);
    byte_438BF53 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_22593/*"showTurn"*/, 2, v2);
}


int32_t __fastcall StageEntity__getStartBattleAssetId(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_438BF5C & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_22743/*"startBattleAssetId"*/);
    byte_438BF5C = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_22743/*"startBattleAssetId"*/, 0, v2);
}


System_Int32_array *__fastcall StageEntity__getTurnEffect(
        StageEntity_o *this,
        int32_t limitTurn,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  System_Collections_Generic_List_object__c *v6; // x1
  void *v7; // x0
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0
  System_Collections_Generic_List_BattleActionData_HealData__o *v9; // x20
  __int64 v10; // x9
  struct StageEntity___c_StaticFields *static_fields; // x8
  System_Converter_BattleActionData_HealData__int__o *_9__34_0; // x21
  Il2CppObject *v13; // x22
  struct StageEntity___c_StaticFields *v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  StageEntity_o *v21; // x0
  const MethodInfo *v22; // x3
  int32_t v23; // w1
  System_Int32_array *v24; // x2

  if ( (byte_438BF58 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Converter_object__int___ctor__);
    sub_B775C4(&System_Converter_object__int__TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_B775C4(&int___TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_object__ConvertAll_int___);
    sub_B775C4(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B775C4(&System_Collections_Generic_List_object__TypeInfo);
    sub_B775C4(&Method_StageEntity___c__getTurnEffect_b__34_0__);
    sub_B775C4(&StageEntity___c_TypeInfo);
    sub_B775C4(&StringLiteral_23294/*"turnEffect"*/);
    byte_438BF58 = 1;
  }
  script = this->fields.script;
  if ( script
    && System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
         (System_Xml_XmlQualifiedName_o *)StringLiteral_23294/*"turnEffect"*/,
         (const MethodInfo_2F7D86C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v7 = this->fields.script;
    if ( v7 )
    {
      Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
               (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v7,
               (System_Type_o *)StringLiteral_23294/*"turnEffect"*/,
               (const MethodInfo_2F7D534 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      v9 = (System_Collections_Generic_List_BattleActionData_HealData__o *)Item;
      if ( Item )
      {
        v6 = System_Collections_Generic_List_object__TypeInfo;
        v10 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) < (unsigned int)v10
          || (System_Collections_Generic_List_object__c *)Item->klass->_2.typeHierarchy[v10 - 1] != System_Collections_Generic_List_object__TypeInfo )
        {
          v21 = (StageEntity_o *)sub_B77990(Item);
          return StageEntity__GetTurnEffect(v21, v23, v24, v22);
        }
      }
      v7 = StageEntity___c_TypeInfo;
      if ( (BYTE3(StageEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !StageEntity___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(StageEntity___c_TypeInfo);
        v7 = StageEntity___c_TypeInfo;
      }
      static_fields = (struct StageEntity___c_StaticFields *)*((_QWORD *)v7 + 23);
      _9__34_0 = (System_Converter_BattleActionData_HealData__int__o *)static_fields->__9__34_0;
      if ( !_9__34_0 )
      {
        if ( (*((_BYTE *)v7 + 307) & 4) != 0 && !*((_DWORD *)v7 + 56) )
        {
          j_il2cpp_runtime_class_init_0(v7);
          static_fields = StageEntity___c_TypeInfo->static_fields;
        }
        v13 = (Il2CppObject *)static_fields->__9;
        _9__34_0 = (System_Converter_BattleActionData_HealData__int__o *)sub_B77694(System_Converter_object__int__TypeInfo);
        System_Converter_BattleActionData_HealData__int____ctor(
          _9__34_0,
          v13,
          Method_StageEntity___c__getTurnEffect_b__34_0__,
          (const MethodInfo_21F7A30 *)Method_System_Converter_object__int___ctor__);
        v14 = StageEntity___c_TypeInfo->static_fields;
        v14->__9__34_0 = (struct System_Converter_object__int__o *)_9__34_0;
        sub_B77560(
          (BattleServantConfConponent_o *)&v14->__9__34_0,
          (System_Int32_array **)_9__34_0,
          v15,
          v16,
          v17,
          v18,
          v19,
          v20);
      }
      if ( v9 )
      {
        v7 = System_Collections_Generic_List_BattleActionData_HealData___ConvertAll_int_(
               v9,
               (System_Converter_T__TOutput__o *)_9__34_0,
               (const MethodInfo_19AECA8 *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
        if ( v7 )
        {
          v21 = (StageEntity_o *)System_Collections_Generic_List_int___ToArray(
                                   (System_Collections_Generic_List_int__o *)v7,
                                   (const MethodInfo_30E7EF4 *)Method_System_Collections_Generic_List_int__ToArray__);
          v23 = limitTurn;
          v24 = (System_Int32_array *)v21;
          return StageEntity__GetTurnEffect(v21, v23, v24, v22);
        }
      }
    }
    sub_B7769C(v7, v6);
  }
  return (System_Int32_array *)sub_B775DC(int___TypeInfo, 0LL);
}


int32_t __fastcall StageEntity__getTurnEffectType(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_438BF4E & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_23295/*"turnEffectType"*/);
    byte_438BF4E = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_23295/*"turnEffectType"*/, 0, v2);
}


bool __fastcall StageEntity__getTurnElapsedEndBattleFlag(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_438BF4F & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_23296/*"turnElapsedEndBattle"*/);
    byte_438BF4F = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_23296/*"turnElapsedEndBattle"*/, 0, v2) > 0;
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
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_4388EF4 & 1) == 0 )
  {
    sub_B775C4(&StageEntity___c_TypeInfo);
    byte_4388EF4 = 1;
  }
  v1 = (Il2CppObject *)sub_B77694(StageEntity___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)StageEntity___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B77560(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
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

  if ( (byte_4388EF8 & 1) == 0 )
  {
    sub_B775C4(&AiAllocationInfo_TypeInfo);
    byte_4388EF8 = 1;
  }
  v4 = (AiAllocationInfo_o *)sub_B77694(AiAllocationInfo_TypeInfo);
  AiAllocationInfo___ctor(v4, obj, 0LL);
  return v4;
}


System_String_o *__fastcall StageEntity___c___GetBattleStartVoiceIdArray_b__54_0(
        StageEntity___c_o *this,
        Il2CppObject *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7769C(this, 0LL);
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

  if ( (byte_4388EF7 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_4388EF7 = 1;
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

  if ( (byte_4388EF5 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_4388EF5 = 1;
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

  if ( (byte_4388EF6 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_4388EF6 = 1;
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