void __fastcall StageEntity___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4188C39 & 1) == 0 )
  {
    sub_B2C35C(&StageEntity_TypeInfo, v1);
    byte_4188C39 = 1;
  }
  StageEntity_TypeInfo->static_fields->DEFAULT_ENEMY_ACTION_COUNT = 3;
}


void __fastcall StageEntity___ctor(StageEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4188C02 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_4188C02 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
}


void __fastcall StageEntity___ctor_27061176(StageEntity_o *this, StageEntity_o *cSrc, const MethodInfo *method)
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

  if ( (byte_4188C03 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, cSrc);
    byte_4188C03 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
  if ( !cSrc )
    sub_B2C434(v5, v6);
  this->fields.questId = cSrc->fields.questId;
  this->fields.questPhase = cSrc->fields.questPhase;
  name = cSrc->fields.name;
  this->fields.name = name;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.name, (System_Int32_array **)name, v7, v8, v9, v10, v11, v12);
  this->fields.wave = cSrc->fields.wave;
  this->fields.npcDeckId = cSrc->fields.npcDeckId;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall StageEntity__CreatePK(
        int32_t questId,
        int32_t questPhase,
        int32_t wave,
        const MethodInfo *method)
{
  if ( (byte_4188C01 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&questPhase);
    byte_4188C01 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           questId,
           questPhase,
           wave,
           (const MethodInfo_1732D30 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall StageEntity__CreatePrimaryKey(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t questPhase; // w20
  int32_t questId; // w21
  int32_t wave; // w19

  if ( (byte_4188C00 & 1) == 0 )
  {
    sub_B2C35C(&StageEntity_TypeInfo, method);
    byte_4188C00 = 1;
  }
  questId = this->fields.questId;
  questPhase = this->fields.questPhase;
  wave = this->fields.wave;
  if ( (BYTE3(StageEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !StageEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(StageEntity_TypeInfo);
  return StageEntity__CreatePK(questId, questPhase, wave, v2);
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
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *script; // x0
  __int64 v9; // x10

  if ( (byte_4188C20 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_object__ToArray__, v4);
    sub_B2C35C(&System_Collections_Generic_List_object__TypeInfo, v5);
    sub_B2C35C(&StringLiteral_16291/*"aiActTypeAttackCommandCard"*/, v6);
    byte_4188C20 = 1;
  }
  if ( !StageEntity__checkScript(this, (System_String_o *)StringLiteral_16291/*"aiActTypeAttackCommandCard"*/, v2) )
    return 0LL;
  script = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this->fields.script;
  if ( !script
    || (script = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                     script,
                                                                                     (System_Type_o *)StringLiteral_16291/*"aiActTypeAttackCommandCard"*/,
                                                                                     (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL
    || (v9 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1),
        *(&script->klass->_2.bitflags2 + 1) < (unsigned int)v9)
    || (System_Collections_Generic_List_object__c *)script->klass->_2.typeHierarchy[v9 - 1] != System_Collections_Generic_List_object__TypeInfo )
  {
    sub_B2C434(script, v7);
  }
  return (System_Object_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)script,
                                  (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_object__ToArray__);
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
  __int64 AiActTypeAttackCommandCard; // x0
  __int64 v11; // x8
  __int64 v12; // x20
  unsigned __int64 v13; // x23
  __int64 v14; // x24
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *v15; // x21
  __int64 v16; // x10
  __int64 v17; // x1
  struct BattleDeckServantData_o *deckSvt; // x8
  int32_t npcId; // w22
  __int64 v20; // x0
  StageEntity_o *v21; // x0
  const MethodInfo *v22; // x1

  if ( (byte_4188C21 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, enemyServantData);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v5);
    sub_B2C35C(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v6);
    sub_B2C35C(&long_TypeInfo, v7);
    sub_B2C35C(&StringLiteral_21159/*"npcServantId"*/, v8);
    sub_B2C35C(&StringLiteral_17230/*"cardType"*/, v9);
    byte_4188C21 = 1;
  }
  AiActTypeAttackCommandCard = (__int64)StageEntity__GetAiActTypeAttackCommandCard(
                                          this,
                                          (const MethodInfo *)enemyServantData);
  if ( AiActTypeAttackCommandCard )
  {
    v11 = *(_QWORD *)(AiActTypeAttackCommandCard + 24);
    v12 = AiActTypeAttackCommandCard;
    if ( (int)v11 < 1 )
    {
LABEL_18:
      LODWORD(AiActTypeAttackCommandCard) = 0;
    }
    else
    {
      v13 = 0LL;
      v14 = AiActTypeAttackCommandCard + 32;
      while ( 1 )
      {
        if ( v13 >= (unsigned int)v11 )
        {
          v20 = sub_B2C460(AiActTypeAttackCommandCard);
          sub_B2C400(v20, 0LL);
        }
        v15 = *(System_Collections_Generic_Dictionary_Type__IStoreExtension__o **)(v14 + 8 * v13);
        if ( v15 )
        {
          v16 = *(&System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.bitflags2 + 1);
          if ( *(&v15->klass->_2.bitflags2 + 1) >= (unsigned int)v16
            && (System_Collections_Generic_Dictionary_string__object__c *)v15->klass->_2.typeHierarchy[v16 - 1] == System_Collections_Generic_Dictionary_string__object__TypeInfo )
          {
            AiActTypeAttackCommandCard = System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                                           *(System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o **)(v14 + 8 * v13),
                                           (System_Xml_XmlQualifiedName_o *)StringLiteral_21159/*"npcServantId"*/,
                                           (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
            if ( (AiActTypeAttackCommandCard & 1) != 0 )
            {
              if ( !enemyServantData )
                goto LABEL_24;
              deckSvt = enemyServantData->fields.deckSvt;
              if ( !deckSvt )
                goto LABEL_24;
              npcId = deckSvt->fields.npcId;
              AiActTypeAttackCommandCard = (__int64)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                      v15,
                                                      (System_Type_o *)StringLiteral_21159/*"npcServantId"*/,
                                                      (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
              if ( !AiActTypeAttackCommandCard )
                goto LABEL_24;
              if ( *(Il2CppClass **)(*(_QWORD *)AiActTypeAttackCommandCard + 64LL) != long_TypeInfo->_1.element_class )
                goto LABEL_25;
              AiActTypeAttackCommandCard = j_il2cpp_object_unbox_0(AiActTypeAttackCommandCard);
              if ( npcId == *(_DWORD *)AiActTypeAttackCommandCard )
              {
                AiActTypeAttackCommandCard = System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                                               (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v15,
                                               (System_Xml_XmlQualifiedName_o *)StringLiteral_17230/*"cardType"*/,
                                               (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
                if ( (AiActTypeAttackCommandCard & 1) != 0 )
                  break;
              }
            }
          }
        }
        LODWORD(v11) = *(_DWORD *)(v12 + 24);
        if ( (__int64)++v13 >= (int)v11 )
          goto LABEL_18;
      }
      AiActTypeAttackCommandCard = (__int64)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                              v15,
                                              (System_Type_o *)StringLiteral_17230/*"cardType"*/,
                                              (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !AiActTypeAttackCommandCard )
LABEL_24:
        sub_B2C434(AiActTypeAttackCommandCard, v17);
      if ( *(Il2CppClass **)(*(_QWORD *)AiActTypeAttackCommandCard + 64LL) == long_TypeInfo->_1.element_class )
      {
        LODWORD(AiActTypeAttackCommandCard) = *(_DWORD *)j_il2cpp_object_unbox_0(AiActTypeAttackCommandCard);
      }
      else
      {
LABEL_25:
        v21 = (StageEntity_o *)sub_B2C728(AiActTypeAttackCommandCard);
        LODWORD(AiActTypeAttackCommandCard) = StageEntity__IsDisableFieldMotion(v21, v22);
      }
    }
  }
  return AiActTypeAttackCommandCard;
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
  __int64 v9; // x1
  System_String_o *Value_string; // x19
  bool IsNullOrEmpty; // w8
  System_Collections_Generic_List_AiAllocationInfo__o *result; // x0
  StageEntity___c_c *v13; // x0
  struct StageEntity___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__68_0; // x20
  Il2CppObject *v16; // x21
  struct StageEntity___c_StaticFields *v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x0

  if ( (byte_4188C33 & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_GetValue_List_object____, method);
    sub_B2C35C(&Method_System_Linq_Enumerable_Select_object__AiAllocationInfo___, v3);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToList_AiAllocationInfo___, v4);
    sub_B2C35C(&Method_System_Func_object__AiAllocationInfo___ctor__, v5);
    sub_B2C35C(&System_Func_object__AiAllocationInfo__TypeInfo, v6);
    sub_B2C35C(&Method_StageEntity___c__GetAiAllocationInfoList_b__68_0__, v7);
    sub_B2C35C(&StageEntity___c_TypeInfo, v8);
    sub_B2C35C(&StringLiteral_16292/*"aiAllocations"*/, v9);
    byte_4188C33 = 1;
  }
  Value_string = BasicHelper__GetValue_string_(
                   this->fields.script,
                   (System_String_o *)StringLiteral_16292/*"aiAllocations"*/,
                   0LL,
                   (const MethodInfo_17283E8 *)Method_BasicHelper_GetValue_List_object____);
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)Value_string, 0LL);
  result = 0LL;
  if ( !IsNullOrEmpty )
  {
    v13 = StageEntity___c_TypeInfo;
    if ( (BYTE3(StageEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !StageEntity___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(StageEntity___c_TypeInfo);
      v13 = StageEntity___c_TypeInfo;
    }
    static_fields = v13->static_fields;
    _9__68_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__68_0;
    if ( !_9__68_0 )
    {
      if ( (BYTE3(v13->vtable._0_Equals.methodPtr) & 4) != 0 && !v13->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v13);
        static_fields = StageEntity___c_TypeInfo->static_fields;
      }
      v16 = (Il2CppObject *)static_fields->__9;
      _9__68_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B2C42C(System_Func_object__AiAllocationInfo__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
        _9__68_0,
        v16,
        Method_StageEntity___c__GetAiAllocationInfoList_b__68_0__,
        (const MethodInfo_2713350 *)Method_System_Func_object__AiAllocationInfo___ctor__);
      v17 = StageEntity___c_TypeInfo->static_fields;
      v17->__9__68_0 = (struct System_Func_object__AiAllocationInfo__o *)_9__68_0;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v17->__9__68_0,
        (System_Int32_array **)_9__68_0,
        v18,
        v19,
        v20,
        v21,
        v22,
        v23);
    }
    v24 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)Value_string,
                                                                 (System_Func_TSource__TResult__o *)_9__68_0,
                                                                 (const MethodInfo_1A96D40 *)Method_System_Linq_Enumerable_Select_object__AiAllocationInfo___);
    return (System_Collections_Generic_List_AiAllocationInfo__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                    v24,
                                                                    (const MethodInfo_1A9DE9C *)Method_System_Linq_Enumerable_ToList_AiAllocationInfo___);
  }
  return result;
}


System_Int32_array *__fastcall StageEntity__GetAssumedEffectId(StageEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4188C37 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_16501/*"assumedEffectId"*/, method);
    byte_4188C37 = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_16501/*"assumedEffectId"*/, 0LL);
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
  __int64 v11; // x1
  Il2CppObject *ScriptObject; // x0
  System_Collections_Generic_List_string__o *v13; // x19
  __int64 v14; // x10
  StageEntity___c_c *v16; // x0
  struct StageEntity___c_StaticFields *static_fields; // x8
  System_Converter_string__string__o *_9__54_0; // x20
  Il2CppObject *v19; // x21
  struct StageEntity___c_StaticFields *v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Collections_Generic_List_WarBoardUiData_SaveData__o *v27; // x0
  __int64 v28; // x1

  if ( (byte_4188C27 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Converter_object__string___ctor__, method);
    sub_B2C35C(&System_Converter_object__string__TypeInfo, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_object__ConvertAll_string___, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__ToArray__, v6);
    sub_B2C35C(&System_Collections_Generic_List_object__TypeInfo, v7);
    sub_B2C35C(&string___TypeInfo, v8);
    sub_B2C35C(&Method_StageEntity___c__GetBattleStartVoiceIdArray_b__54_0__, v9);
    sub_B2C35C(&StageEntity___c_TypeInfo, v10);
    sub_B2C35C(&StringLiteral_16654/*"battleStartVoiceIds"*/, v11);
    byte_4188C27 = 1;
  }
  ScriptObject = StageEntity__GetScriptObject(this, (System_String_o *)StringLiteral_16654/*"battleStartVoiceIds"*/, v2);
  if ( !ScriptObject )
    return (System_String_array *)sub_B2C374(string___TypeInfo, 0LL);
  v13 = (System_Collections_Generic_List_string__o *)ScriptObject;
  v14 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
  if ( *(&ScriptObject->klass->_2.bitflags2 + 1) < (unsigned int)v14
    || (System_Collections_Generic_List_object__c *)ScriptObject->klass->_2.typeHierarchy[v14 - 1] != System_Collections_Generic_List_object__TypeInfo )
  {
    return (System_String_array *)sub_B2C374(string___TypeInfo, 0LL);
  }
  v16 = StageEntity___c_TypeInfo;
  if ( (BYTE3(StageEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !StageEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(StageEntity___c_TypeInfo);
    v16 = StageEntity___c_TypeInfo;
  }
  static_fields = v16->static_fields;
  _9__54_0 = (System_Converter_string__string__o *)static_fields->__9__54_0;
  if ( !_9__54_0 )
  {
    if ( (BYTE3(v16->vtable._0_Equals.methodPtr) & 4) != 0 && !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16);
      static_fields = StageEntity___c_TypeInfo->static_fields;
    }
    v19 = (Il2CppObject *)static_fields->__9;
    _9__54_0 = (System_Converter_string__string__o *)sub_B2C42C(System_Converter_object__string__TypeInfo);
    System_Converter_string__string____ctor(
      _9__54_0,
      v19,
      Method_StageEntity___c__GetBattleStartVoiceIdArray_b__54_0__,
      (const MethodInfo_24E064C *)Method_System_Converter_object__string___ctor__);
    v20 = StageEntity___c_TypeInfo->static_fields;
    v20->__9__54_0 = (struct System_Converter_object__string__o *)_9__54_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v20->__9__54_0,
      (System_Int32_array **)_9__54_0,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
  }
  v27 = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)System_Collections_Generic_List_string___ConvertAll_string_(
                                                                        v13,
                                                                        (System_Converter_T__TOutput__o *)_9__54_0,
                                                                        (const MethodInfo_18F3D34 *)Method_System_Collections_Generic_List_object__ConvertAll_string___);
  if ( !v27 )
    sub_B2C434(0LL, v28);
  return (System_String_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                  v27,
                                  (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_string__ToArray__);
}


int32_t __fastcall StageEntity__GetBattleStartVoiceServantId(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4188C25 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_16655/*"battleStartVoiceSvtId"*/, method);
    byte_4188C25 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_16655/*"battleStartVoiceSvtId"*/, 0, v2);
}


int32_t __fastcall StageEntity__GetBattleStartVoiceServantLimit(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4188C26 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_16656/*"battleStartVoiceSvtLimit"*/, method);
    byte_4188C26 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_16656/*"battleStartVoiceSvtLimit"*/, -1, v2);
}


System_Int32_array *__fastcall StageEntity__GetBossIdAndChangeBgmId(StageEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Int32_array *v4; // x2
  const MethodInfo *v5; // x3

  if ( (byte_4188C1F & 1) == 0 )
  {
    sub_B2C35C(&int___TypeInfo, method);
    sub_B2C35C(&StringLiteral_16888/*"bossIdAndChangeBgmId"*/, v3);
    byte_4188C1F = 1;
  }
  v4 = (System_Int32_array *)sub_B2C374(int___TypeInfo, 0LL);
  return StageEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_16888/*"bossIdAndChangeBgmId"*/, v4, v5);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall StageEntity__GetCutInSvtIds(StageEntity_o *this, bool isEnemy, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  System_String_o **v7; // x8

  if ( (byte_4188C1C & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_18359/*"enemyCutInSvtIds"*/, isEnemy);
    sub_B2C35C(&StringLiteral_21496/*"playerCutInSvtIds"*/, v6);
    byte_4188C1C = 1;
  }
  v7 = (System_String_o **)&StringLiteral_18359/*"enemyCutInSvtIds"*/;
  if ( !isEnemy )
    v7 = (System_String_o **)&StringLiteral_21496/*"playerCutInSvtIds"*/;
  return StageEntity__getScriptIntArrayParam(this, *v7, 0LL, v3);
}


int32_t __fastcall StageEntity__GetEffectBgmId(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4188C1D & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_18263/*"effectBgmId"*/, method);
    byte_4188C1D = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_18263/*"effectBgmId"*/, -1, v2);
}


int32_t __fastcall StageEntity__GetEffectSvtId(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4188C1B & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_18274/*"effectSvtId"*/, method);
    byte_4188C1B = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_18274/*"effectSvtId"*/, 0, v2);
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
  __int64 v11; // x1
  System_Int32_array *ScriptIntArrayParam; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x19
  StageEntity___c_c *v14; // x0
  struct StageEntity___c_StaticFields *static_fields; // x8
  System_Func_int__int__o *_9__64_0; // x20
  Il2CppObject *v17; // x21
  struct StageEntity___c_StaticFields *v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x0

  if ( (byte_4188C2F & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_Select_int__int___, *(_QWORD *)&enemyFieldPosCount);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_int___, v6);
    sub_B2C35C(&Method_System_Func_int__int___ctor__, v7);
    sub_B2C35C(&System_Func_int__int__TypeInfo, v8);
    sub_B2C35C(&Method_StageEntity___c__GetEnemyAddOrderPosArray_b__64_0__, v9);
    sub_B2C35C(&StageEntity___c_TypeInfo, v10);
    sub_B2C35C(&StringLiteral_18361/*"enemyEntryOrder"*/, v11);
    byte_4188C2F = 1;
  }
  ScriptIntArrayParam = StageEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_18361/*"enemyEntryOrder"*/, 0LL, v3);
  if ( ScriptIntArrayParam )
  {
    v13 = (System_Collections_Generic_IEnumerable_TSource__o *)ScriptIntArrayParam;
    v14 = StageEntity___c_TypeInfo;
    if ( (BYTE3(StageEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !StageEntity___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(StageEntity___c_TypeInfo);
      v14 = StageEntity___c_TypeInfo;
    }
    static_fields = v14->static_fields;
    _9__64_0 = static_fields->__9__64_0;
    if ( !_9__64_0 )
    {
      if ( (BYTE3(v14->vtable._0_Equals.methodPtr) & 4) != 0 && !v14->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v14);
        static_fields = StageEntity___c_TypeInfo->static_fields;
      }
      v17 = (Il2CppObject *)static_fields->__9;
      _9__64_0 = (System_Func_int__int__o *)sub_B2C42C(System_Func_int__int__TypeInfo);
      System_Func_int__int____ctor(
        _9__64_0,
        v17,
        Method_StageEntity___c__GetEnemyAddOrderPosArray_b__64_0__,
        (const MethodInfo_270CF34 *)Method_System_Func_int__int___ctor__);
      v18 = StageEntity___c_TypeInfo->static_fields;
      v18->__9__64_0 = _9__64_0;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v18->__9__64_0,
        (System_Int32_array **)_9__64_0,
        v19,
        v20,
        v21,
        v22,
        v23,
        v24);
    }
    v25 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__int_(
                                                                 v13,
                                                                 (System_Func_TSource__TResult__o *)_9__64_0,
                                                                 (const MethodInfo_1A95534 *)Method_System_Linq_Enumerable_Select_int__int___);
  }
  else
  {
    v25 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Range(0, enemyFieldPosCount, 0LL);
  }
  return System_Linq_Enumerable__ToArray_int_(
           v25,
           (const MethodInfo_1A9AE24 *)Method_System_Linq_Enumerable_ToArray_int___);
}


int32_t __fastcall StageEntity__GetEnemyCountStartValue(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4188C34 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_18358/*"enemyCountStartValue"*/, method);
    byte_4188C34 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_18358/*"enemyCountStartValue"*/, 0, v2);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall StageEntity__GetEnemyEntryMaxCountEachTurn(
        StageEntity_o *this,
        int32_t defaultValue,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4188C30 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_18360/*"enemyEntryMaxCountEachTurn"*/, *(_QWORD *)&defaultValue);
    byte_4188C30 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_18360/*"enemyEntryMaxCountEachTurn"*/, defaultValue, v3);
}


int32_t __fastcall StageEntity__GetEnemyFieldPosCount(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4188C28 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_18363/*"enemyFieldPosCount"*/, method);
    byte_4188C28 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_18363/*"enemyFieldPosCount"*/, 3, v2);
}


int32_t __fastcall StageEntity__GetFadeType(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4188C1A & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_16652/*"battleStartFadeType"*/, method);
    byte_4188C1A = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_16652/*"battleStartFadeType"*/, 0, v2);
}


System_Int32_array *__fastcall StageEntity__GetFieldCallServantId(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1
  System_Int32_array *result; // x0

  if ( (byte_4188C23 & 1) == 0 )
  {
    sub_B2C35C(&int___TypeInfo, method);
    sub_B2C35C(&StringLiteral_17174/*"call"*/, v4);
    byte_4188C23 = 1;
  }
  result = StageEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_17174/*"call"*/, 0LL, v2);
  if ( !result )
    return (System_Int32_array *)sub_B2C374(int___TypeInfo, 0LL);
  return result;
}


System_Int32_array *__fastcall StageEntity__GetFieldPosSkillId(StageEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Int32_array *v4; // x2
  const MethodInfo *v5; // x3

  if ( (byte_4188C31 & 1) == 0 )
  {
    sub_B2C35C(&int___TypeInfo, method);
    sub_B2C35C(&StringLiteral_18715/*"fieldPosSkillId"*/, v3);
    byte_4188C31 = 1;
  }
  v4 = (System_Int32_array *)sub_B2C374(int___TypeInfo, 0LL);
  return StageEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_18715/*"fieldPosSkillId"*/, v4, v5);
}


System_Int32_array *__fastcall StageEntity__GetFieldPosSkillLv(StageEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Int32_array *v4; // x2
  const MethodInfo *v5; // x3

  if ( (byte_4188C32 & 1) == 0 )
  {
    sub_B2C35C(&int___TypeInfo, method);
    sub_B2C35C(&StringLiteral_18716/*"fieldPosSkillLv"*/, v3);
    byte_4188C32 = 1;
  }
  v4 = (System_Int32_array *)sub_B2C374(int___TypeInfo, 0LL);
  return StageEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_18716/*"fieldPosSkillLv"*/, v4, v5);
}


System_Int32_array *__fastcall StageEntity__GetMultiEffectIds(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4188C19 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_20989/*"multiEffectIds"*/, method);
    byte_4188C19 = 1;
  }
  return StageEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_20989/*"multiEffectIds"*/, 0LL, v2);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall StageEntity__GetPriorityBG(StageEntity_o *this, int32_t def, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4188C35 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_21531/*"priorityBG"*/, *(_QWORD *)&def);
    byte_4188C35 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_21531/*"priorityBG"*/, def, v3);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall StageEntity__GetPriorityBgm(StageEntity_o *this, int32_t def, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4188C36 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_21532/*"priorityBgm"*/, *(_QWORD *)&def);
    byte_4188C36 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_21532/*"priorityBgm"*/, def, v3);
}


Il2CppObject *__fastcall StageEntity__GetScriptObject(
        StageEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4188C24 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, key);
    byte_4188C24 = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( !script )
    sub_B2C434(0LL, key);
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
         (System_Xml_XmlQualifiedName_o *)key,
         &value,
         (const MethodInfo_2DB3AC0 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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

  if ( (byte_4188C1E & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_22271/*"startBgmOff"*/, method);
    byte_4188C1E = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_22271/*"startBgmOff"*/, 0, v2);
}


SubBgmPlayArgs_array *__fastcall StageEntity__GetSubBgmPlayArgsArray(StageEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  StageEntity___c_c *v8; // x0
  struct StageEntity___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__61_0; // x20
  Il2CppObject *v11; // x21
  struct StageEntity___c_StaticFields *v12; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_4188C2C & 1) == 0 )
  {
    sub_B2C35C(&Method_EntityScriptUtil_GetScriptValue_List_object___SubBgmPlayArgs_____, method);
    sub_B2C35C(&Method_System_Func_List_object___SubBgmPlayArgs_____ctor__, v3);
    sub_B2C35C(&System_Func_List_object___SubBgmPlayArgs____TypeInfo, v4);
    sub_B2C35C(&Method_StageEntity___c__GetSubBgmPlayArgsArray_b__61_0__, v5);
    sub_B2C35C(&StageEntity___c_TypeInfo, v6);
    sub_B2C35C(&StringLiteral_22374/*"subBgms"*/, v7);
    byte_4188C2C = 1;
  }
  v8 = StageEntity___c_TypeInfo;
  if ( (BYTE3(StageEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !StageEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(StageEntity___c_TypeInfo);
    v8 = StageEntity___c_TypeInfo;
  }
  static_fields = v8->static_fields;
  _9__61_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__61_0;
  if ( !_9__61_0 )
  {
    if ( (BYTE3(v8->vtable._0_Equals.methodPtr) & 4) != 0 && !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      static_fields = StageEntity___c_TypeInfo->static_fields;
    }
    v11 = (Il2CppObject *)static_fields->__9;
    _9__61_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B2C42C(System_Func_List_object___SubBgmPlayArgs____TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__61_0,
      v11,
      Method_StageEntity___c__GetSubBgmPlayArgsArray_b__61_0__,
      (const MethodInfo_2713350 *)Method_System_Func_List_object___SubBgmPlayArgs_____ctor__);
    v12 = StageEntity___c_TypeInfo->static_fields;
    v12->__9__61_0 = (struct System_Func_List_object___SubBgmPlayArgs____o *)_9__61_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v12->__9__61_0,
      (System_Int32_array **)_9__61_0,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
  }
  return (SubBgmPlayArgs_array *)EntityScriptUtil__GetScriptValue_object__object_(
                                   this->fields.script,
                                   (System_String_o *)StringLiteral_22374/*"subBgms"*/,
                                   (System_Func_TSource__TDestination__o *)_9__61_0,
                                   0LL,
                                   (const MethodInfo_1735FA0 *)Method_EntityScriptUtil_GetScriptValue_List_object___SubBgmPlayArgs_____);
}


int32_t __fastcall StageEntity__GetSubBgmsPriority(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4188C2D & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_22375/*"subBgmsPriority"*/, method);
    byte_4188C2D = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_22375/*"subBgmsPriority"*/, 0, v2);
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
  unsigned __int64 max_length; // x8
  il2cpp_array_size_t v9; // w9
  int32_t v10; // w10
  unsigned __int64 v11; // x11
  il2cpp_array_size_t v12; // w14
  __int64 v13; // x0

  if ( (byte_4188C14 & 1) == 0 )
  {
    sub_B2C35C(&int___TypeInfo, *(_QWORD *)&limitTurn);
    byte_4188C14 = 1;
  }
  result = (System_Int32_array *)sub_B2C374(int___TypeInfo, (unsigned int)limitTurn);
  if ( !result )
LABEL_15:
    sub_B2C434(result, v7);
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
        v13 = sub_B2C460(result);
        sub_B2C400(v13, 0LL);
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


bool __fastcall StageEntity__Is3_6BossBattle(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4188C29 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1155/*"3.6BossBattle"*/, method);
    byte_4188C29 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_1155/*"3.6BossBattle"*/, 0, v2) > 0;
}


bool __fastcall StageEntity__IsDisableFieldMotion(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4188C22 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_18026/*"disableUniqueFieldMotion"*/, method);
    byte_4188C22 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_18026/*"disableUniqueFieldMotion"*/, 0, v2) > 0;
}


bool __fastcall StageEntity__IsForceSetNormalEnemyStatusUI(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4188C2E & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_6748/*"ForceSetNormalEnemyStatusUI"*/, method);
    byte_4188C2E = 1;
  }
  return StageEntity__checkScript(this, (System_String_o *)StringLiteral_6748/*"ForceSetNormalEnemyStatusUI"*/, v2);
}


bool __fastcall StageEntity__IsReleaseUnusedAssetsWhenEntryMember(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4188C2B & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_21758/*"releaseUnusedAssetsWhenEntryMember"*/, method);
    byte_4188C2B = 1;
  }
  return StageEntity__checkScript(this, (System_String_o *)StringLiteral_21758/*"releaseUnusedAssetsWhenEntryMember"*/, v2);
}


bool __fastcall StageEntity__IsSkipWaveStartFadeInSe(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4188C38 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_22158/*"skipWaveStartFadeInSe"*/, method);
    byte_4188C38 = 1;
  }
  return StageEntity__checkScript(this, (System_String_o *)StringLiteral_22158/*"skipWaveStartFadeInSe"*/, v2);
}


bool __fastcall StageEntity__IsSpecifiedBattleStartVoice(StageEntity_o *this, const MethodInfo *method)
{
  int32_t BattleStartVoiceServantId; // w20
  const MethodInfo *v4; // x1

  BattleStartVoiceServantId = StageEntity__GetBattleStartVoiceServantId(this, method);
  return (BattleStartVoiceServantId > 0) & (StageEntity__GetBattleStartVoiceServantLimit(this, v4) >= 0);
}


bool __fastcall StageEntity__IsSpecifiedBattleStartVoice_27067732(
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

  if ( (byte_4188C0D & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_18855/*"fov"*/, method);
    byte_4188C0D = 1;
  }
  return StageEntity__checkScript(this, (System_String_o *)StringLiteral_18855/*"fov"*/, v2);
}


bool __fastcall StageEntity__checkScript(StageEntity_o *this, System_String_o *key, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_4188C04 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    byte_4188C04 = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                       (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
                       (System_Xml_XmlQualifiedName_o *)key,
                       (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)script;
}


bool __fastcall StageEntity__disableSystemFadeStartBattle(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4188C18 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_18024/*"disableSystemFadeStartBattle"*/, method);
    byte_4188C18 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_18024/*"disableSystemFadeStartBattle"*/, 0, v2) > 0;
}


int32_t __fastcall StageEntity__getBattleMasterImageId(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4188C2A & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_16650/*"battleMasterImageId"*/, method);
    byte_4188C2A = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_16650/*"battleMasterImageId"*/, 0, v2);
}


int32_t __fastcall StageEntity__getChangeBgId(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4188C10 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_17270/*"changeBgId"*/, method);
    byte_4188C10 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_17270/*"changeBgId"*/, 0, v2);
}


int32_t __fastcall StageEntity__getChangeBgType(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4188C11 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_17271/*"changeBgType"*/, method);
    byte_4188C11 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_17271/*"changeBgType"*/, 0, v2);
}


float __fastcall StageEntity__getCustomFOV(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4188C0C & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_18855/*"fov"*/, method);
    byte_4188C0C = 1;
  }
  return StageEntity__getScriptFloat(this, (System_String_o *)StringLiteral_18855/*"fov"*/, 0.0, v2);
}


int32_t __fastcall StageEntity__getEnemyActCount(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1
  int32_t result; // w0
  StageEntity_c *v6; // x0

  if ( (byte_4188C16 & 1) == 0 )
  {
    sub_B2C35C(&StageEntity_TypeInfo, method);
    sub_B2C35C(&StringLiteral_5994/*"EnemyActCount"*/, v4);
    byte_4188C16 = 1;
  }
  result = StageEntity__getScript(this, (System_String_o *)StringLiteral_5994/*"EnemyActCount"*/, 0, v2);
  if ( result <= 0 )
  {
    v6 = StageEntity_TypeInfo;
    if ( (BYTE3(StageEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !StageEntity_TypeInfo->_2.cctor_finished )
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
  __int64 v11; // x0

  if ( (byte_4188C0F & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_18364/*"enemyMasterBattleId"*/, method);
    sub_B2C35C(&StringLiteral_18365/*"enemyMasterBattleIdByPlayerGender"*/, v4);
    byte_4188C0F = 1;
  }
  ScriptIntArrayParam = StageEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_18365/*"enemyMasterBattleIdByPlayerGender"*/, 0LL, v2);
  if ( !ScriptIntArrayParam )
    return StageEntity__getScript(this, (System_String_o *)StringLiteral_18364/*"enemyMasterBattleId"*/, 0, v6);
  v7 = ScriptIntArrayParam;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_13;
  if ( SelfUserGame->fields.genderType == 1 )
  {
    if ( v7->max_length )
      return v7->m_Items[1];
LABEL_14:
    v11 = sub_B2C460(SelfUserGame);
    sub_B2C400(v11, 0LL);
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
LABEL_13:
    sub_B2C434(SelfUserGame, v9);
  if ( SelfUserGame->fields.genderType != 2 )
    return StageEntity__getScript(this, (System_String_o *)StringLiteral_18364/*"enemyMasterBattleId"*/, 0, v6);
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
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *script; // x0
  __int64 v9; // x9
  StageEntity_o *v11; // x0
  int32_t v12; // w1
  const MethodInfo *v13; // x2

  if ( (byte_4188C12 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_object__ToArray__, v4);
    sub_B2C35C(&System_Collections_Generic_List_object__TypeInfo, v5);
    sub_B2C35C(&StringLiteral_16293/*"aiFieldIds"*/, v6);
    byte_4188C12 = 1;
  }
  if ( !StageEntity__checkScript(this, (System_String_o *)StringLiteral_16293/*"aiFieldIds"*/, v2) )
    return 0LL;
  script = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this->fields.script;
  if ( !script
    || (script = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                     script,
                                                                                     (System_Type_o *)StringLiteral_16293/*"aiFieldIds"*/,
                                                                                     (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_B2C434(script, v7);
  }
  v9 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
  if ( *(&script->klass->_2.bitflags2 + 1) >= (unsigned int)v9
    && (System_Collections_Generic_List_object__c *)script->klass->_2.typeHierarchy[v9 - 1] == System_Collections_Generic_List_object__TypeInfo )
  {
    return (System_Object_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)script,
                                    (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_object__ToArray__);
  }
  v11 = (StageEntity_o *)sub_B2C728(script);
  return (System_Object_array *)StageEntity__getTurnEffect(v11, v12, v13);
}


int32_t __fastcall StageEntity__getLimitAct(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4188C0B & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_8521/*"LimitAct"*/, method);
    byte_4188C0B = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_8521/*"LimitAct"*/, 0, v2);
}


int32_t __fastcall StageEntity__getLimitTurn(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4188C08 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_22815/*"turn"*/, method);
    byte_4188C08 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_22815/*"turn"*/, 0, v2);
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
  __int64 v12; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  System_Type_o *v14; // x20
  System_Collections_Generic_List_object__c *v15; // x1
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *Item; // x0
  System_Collections_Generic_List_BattleActionData_HealData__o *v17; // x19
  StageEntity___c_c *v18; // x8
  struct StageEntity___c_StaticFields *static_fields; // x9
  System_Converter_BattleActionData_HealData__int__o *_9__36_0; // x20
  __int64 v21; // x11
  __int64 v22; // x9
  Il2CppObject *v24; // x21
  struct StageEntity___c_StaticFields *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7

  if ( (byte_4188C15 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Converter_object__int___ctor__, method);
    sub_B2C35C(&System_Converter_object__int__TypeInfo, v3);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v5);
    sub_B2C35C(&int___TypeInfo, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_object__ConvertAll_int___, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, v8);
    sub_B2C35C(&System_Collections_Generic_List_object__TypeInfo, v9);
    sub_B2C35C(&Method_StageEntity___c__getNoEntryIds_b__36_0__, v10);
    sub_B2C35C(&StageEntity___c_TypeInfo, v11);
    sub_B2C35C(&StringLiteral_9588/*"NoEntryIds"*/, v12);
    byte_4188C15 = 1;
  }
  script = this->fields.script;
  if ( !script )
    return (System_Int32_array *)sub_B2C374(int___TypeInfo, 0LL);
  v14 = (System_Type_o *)StringLiteral_9588/*"NoEntryIds"*/;
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_9588/*"NoEntryIds"*/,
          (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return (System_Int32_array *)sub_B2C374(int___TypeInfo, 0LL);
  Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this->fields.script;
  if ( !Item )
    goto LABEL_24;
  Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                             Item,
                                                                             v14,
                                                                             (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v17 = (System_Collections_Generic_List_BattleActionData_HealData__o *)Item;
  v18 = StageEntity___c_TypeInfo;
  if ( (BYTE3(StageEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !StageEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(StageEntity___c_TypeInfo);
    v18 = StageEntity___c_TypeInfo;
  }
  static_fields = v18->static_fields;
  _9__36_0 = (System_Converter_BattleActionData_HealData__int__o *)static_fields->__9__36_0;
  v15 = System_Collections_Generic_List_object__TypeInfo;
  if ( v17 )
  {
    v21 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
    if ( *(&v17->klass->_2.bitflags2 + 1) < (unsigned int)v21
      || (System_Collections_Generic_List_object__c *)v17->klass->_2.typeHierarchy[v21 - 1] != System_Collections_Generic_List_object__TypeInfo )
    {
      goto LABEL_16;
    }
  }
  if ( !_9__36_0 )
  {
    if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 && !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      static_fields = StageEntity___c_TypeInfo->static_fields;
    }
    v24 = (Il2CppObject *)static_fields->__9;
    _9__36_0 = (System_Converter_BattleActionData_HealData__int__o *)sub_B2C42C(System_Converter_object__int__TypeInfo);
    System_Converter_BattleActionData_HealData__int____ctor(
      _9__36_0,
      v24,
      Method_StageEntity___c__getNoEntryIds_b__36_0__,
      (const MethodInfo_24E026C *)Method_System_Converter_object__int___ctor__);
    v25 = StageEntity___c_TypeInfo->static_fields;
    v25->__9__36_0 = (struct System_Converter_object__int__o *)_9__36_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v25->__9__36_0,
      (System_Int32_array **)_9__36_0,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
    if ( v17 )
      goto LABEL_22;
LABEL_24:
    sub_B2C434(Item, v15);
  }
  if ( !v17 )
    goto LABEL_24;
  v22 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
  if ( *(&v17->klass->_2.bitflags2 + 1) < (unsigned int)v22
    || (System_Collections_Generic_List_object__c *)v17->klass->_2.typeHierarchy[v22 - 1] != System_Collections_Generic_List_object__TypeInfo )
  {
LABEL_16:
    sub_B2C728(v17);
    return (System_Int32_array *)sub_B2C374(int___TypeInfo, 0LL);
  }
LABEL_22:
  Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_List_BattleActionData_HealData___ConvertAll_int_(
                                                                             v17,
                                                                             (System_Converter_T__TOutput__o *)_9__36_0,
                                                                             (const MethodInfo_18F3C28 *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
  if ( !Item )
    goto LABEL_24;
  return System_Collections_Generic_List_int___ToArray(
           (System_Collections_Generic_List_int__o *)Item,
           (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *script; // x0
  int32_t result; // w0
  StageEntity_o *v11; // x0
  System_String_o *v12; // x1
  const MethodInfo *v13; // x2
  float v14; // s0

  v4 = defVal;
  if ( (byte_4188C05 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, key);
    sub_B2C35C(&long_TypeInfo, v7);
    byte_4188C05 = 1;
  }
  if ( !StageEntity__checkScript(this, key, *(const MethodInfo **)&defVal) )
    return v4;
  script = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this->fields.script;
  if ( !script
    || (script = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                     script,
                                                                                     (System_Type_o *)key,
                                                                                     (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_B2C434(script, v8);
  }
  if ( script->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(script);
  v11 = (StageEntity_o *)sub_B2C728(script);
  StageEntity__getScriptFloat(v11, v12, v14, v13);
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
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *script; // x0
  float result; // s0
  StageEntity_o *v11; // x0
  System_String_o *v12; // x1
  System_Int32_array *v13; // x2
  const MethodInfo *v14; // x3

  if ( (byte_4188C06 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, key);
    sub_B2C35C(&double_TypeInfo, v7);
    byte_4188C06 = 1;
  }
  if ( !StageEntity__checkScript(this, key, method) )
    return defVal;
  script = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this->fields.script;
  if ( !script
    || (script = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                     script,
                                                                                     (System_Type_o *)key,
                                                                                     (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_B2C434(script, v8);
  }
  if ( script->klass->_1.element_class == double_TypeInfo->_1.element_class )
    return *(double *)j_il2cpp_object_unbox_0(script);
  v11 = (StageEntity_o *)sub_B2C728(script);
  StageEntity__getScriptIntArrayParam(v11, v12, v13, v14);
  return result;
}


System_Int32_array *__fastcall StageEntity__getScriptIntArrayParam(
        StageEntity_o *this,
        System_String_o *key,
        System_Int32_array *defVal,
        const MethodInfo *method)
{
  System_Int32_array *_9__22_0; // x20
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_object__c *v14; // x1
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *script; // x0
  System_Collections_Generic_List_BattleActionData_HealData__o *v16; // x19
  StageEntity___c_c *v17; // x8
  struct StageEntity___c_StaticFields *static_fields; // x9
  __int64 v19; // x11
  __int64 v20; // x9
  Il2CppObject *v22; // x21
  struct StageEntity___c_StaticFields *v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7

  _9__22_0 = defVal;
  if ( (byte_4188C07 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Converter_object__int___ctor__, key);
    sub_B2C35C(&System_Converter_object__int__TypeInfo, v7);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_object__ConvertAll_int___, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, v10);
    sub_B2C35C(&System_Collections_Generic_List_object__TypeInfo, v11);
    sub_B2C35C(&Method_StageEntity___c__getScriptIntArrayParam_b__22_0__, v12);
    sub_B2C35C(&StageEntity___c_TypeInfo, v13);
    byte_4188C07 = 1;
  }
  if ( !StageEntity__checkScript(this, key, (const MethodInfo *)defVal) )
    return _9__22_0;
  script = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this->fields.script;
  if ( !script )
    goto LABEL_23;
  script = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                               script,
                                                                               (System_Type_o *)key,
                                                                               (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v16 = (System_Collections_Generic_List_BattleActionData_HealData__o *)script;
  v17 = StageEntity___c_TypeInfo;
  if ( (BYTE3(StageEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !StageEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(StageEntity___c_TypeInfo);
    v17 = StageEntity___c_TypeInfo;
  }
  static_fields = v17->static_fields;
  _9__22_0 = (System_Int32_array *)static_fields->__9__22_0;
  v14 = System_Collections_Generic_List_object__TypeInfo;
  if ( v16 )
  {
    v19 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
    if ( *(&v16->klass->_2.bitflags2 + 1) < (unsigned int)v19
      || (System_Collections_Generic_List_object__c *)v16->klass->_2.typeHierarchy[v19 - 1] != System_Collections_Generic_List_object__TypeInfo )
    {
      goto LABEL_15;
    }
  }
  if ( !_9__22_0 )
  {
    if ( (BYTE3(v17->vtable._0_Equals.methodPtr) & 4) != 0 && !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      static_fields = StageEntity___c_TypeInfo->static_fields;
    }
    v22 = (Il2CppObject *)static_fields->__9;
    _9__22_0 = (System_Int32_array *)sub_B2C42C(System_Converter_object__int__TypeInfo);
    System_Converter_BattleActionData_HealData__int____ctor(
      (System_Converter_BattleActionData_HealData__int__o *)_9__22_0,
      v22,
      Method_StageEntity___c__getScriptIntArrayParam_b__22_0__,
      (const MethodInfo_24E026C *)Method_System_Converter_object__int___ctor__);
    v23 = StageEntity___c_TypeInfo->static_fields;
    v23->__9__22_0 = (struct System_Converter_object__int__o *)_9__22_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v23->__9__22_0,
      (System_Int32_array **)_9__22_0,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29);
    if ( v16 )
      goto LABEL_21;
LABEL_23:
    sub_B2C434(script, v14);
  }
  if ( !v16 )
    goto LABEL_23;
  v20 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
  if ( *(&v16->klass->_2.bitflags2 + 1) < (unsigned int)v20
    || (System_Collections_Generic_List_object__c *)v16->klass->_2.typeHierarchy[v20 - 1] != System_Collections_Generic_List_object__TypeInfo )
  {
LABEL_15:
    sub_B2C728(v16);
    return _9__22_0;
  }
LABEL_21:
  script = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_List_BattleActionData_HealData___ConvertAll_int_(
                                                                               v16,
                                                                               (System_Converter_T__TOutput__o *)_9__22_0,
                                                                               (const MethodInfo_18F3C28 *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
  if ( !script )
    goto LABEL_23;
  return System_Collections_Generic_List_int___ToArray(
           (System_Collections_Generic_List_int__o *)script,
           (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
}


int32_t __fastcall StageEntity__getShowTurnState(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4188C0E & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_22120/*"showTurn"*/, method);
    byte_4188C0E = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_22120/*"showTurn"*/, 2, v2);
}


int32_t __fastcall StageEntity__getStartBattleAssetId(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4188C17 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_22269/*"startBattleAssetId"*/, method);
    byte_4188C17 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_22269/*"startBattleAssetId"*/, 0, v2);
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
  __int64 v14; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  System_Collections_Generic_List_object__c *v16; // x1
  void *v17; // x0
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0
  System_Collections_Generic_List_BattleActionData_HealData__o *v19; // x20
  __int64 v20; // x9
  struct StageEntity___c_StaticFields *static_fields; // x8
  System_Converter_BattleActionData_HealData__int__o *_9__34_0; // x21
  Il2CppObject *v23; // x22
  struct StageEntity___c_StaticFields *v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  StageEntity_o *v31; // x0
  const MethodInfo *v32; // x3
  int32_t v33; // w1
  System_Int32_array *v34; // x2

  if ( (byte_4188C13 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Converter_object__int___ctor__, *(_QWORD *)&limitTurn);
    sub_B2C35C(&System_Converter_object__int__TypeInfo, v5);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    sub_B2C35C(&int___TypeInfo, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_object__ConvertAll_int___, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, v10);
    sub_B2C35C(&System_Collections_Generic_List_object__TypeInfo, v11);
    sub_B2C35C(&Method_StageEntity___c__getTurnEffect_b__34_0__, v12);
    sub_B2C35C(&StageEntity___c_TypeInfo, v13);
    sub_B2C35C(&StringLiteral_22816/*"turnEffect"*/, v14);
    byte_4188C13 = 1;
  }
  script = this->fields.script;
  if ( script
    && System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
         (System_Xml_XmlQualifiedName_o *)StringLiteral_22816/*"turnEffect"*/,
         (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v17 = this->fields.script;
    if ( v17 )
    {
      Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
               (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v17,
               (System_Type_o *)StringLiteral_22816/*"turnEffect"*/,
               (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      v19 = (System_Collections_Generic_List_BattleActionData_HealData__o *)Item;
      if ( Item )
      {
        v16 = System_Collections_Generic_List_object__TypeInfo;
        v20 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) < (unsigned int)v20
          || (System_Collections_Generic_List_object__c *)Item->klass->_2.typeHierarchy[v20 - 1] != System_Collections_Generic_List_object__TypeInfo )
        {
          v31 = (StageEntity_o *)sub_B2C728(Item);
          return StageEntity__GetTurnEffect(v31, v33, v34, v32);
        }
      }
      v17 = StageEntity___c_TypeInfo;
      if ( (BYTE3(StageEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !StageEntity___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(StageEntity___c_TypeInfo);
        v17 = StageEntity___c_TypeInfo;
      }
      static_fields = (struct StageEntity___c_StaticFields *)*((_QWORD *)v17 + 23);
      _9__34_0 = (System_Converter_BattleActionData_HealData__int__o *)static_fields->__9__34_0;
      if ( !_9__34_0 )
      {
        if ( (*((_BYTE *)v17 + 307) & 4) != 0 && !*((_DWORD *)v17 + 56) )
        {
          j_il2cpp_runtime_class_init_0(v17);
          static_fields = StageEntity___c_TypeInfo->static_fields;
        }
        v23 = (Il2CppObject *)static_fields->__9;
        _9__34_0 = (System_Converter_BattleActionData_HealData__int__o *)sub_B2C42C(System_Converter_object__int__TypeInfo);
        System_Converter_BattleActionData_HealData__int____ctor(
          _9__34_0,
          v23,
          Method_StageEntity___c__getTurnEffect_b__34_0__,
          (const MethodInfo_24E026C *)Method_System_Converter_object__int___ctor__);
        v24 = StageEntity___c_TypeInfo->static_fields;
        v24->__9__34_0 = (struct System_Converter_object__int__o *)_9__34_0;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&v24->__9__34_0,
          (System_Int32_array **)_9__34_0,
          v25,
          v26,
          v27,
          v28,
          v29,
          v30);
      }
      if ( v19 )
      {
        v17 = System_Collections_Generic_List_BattleActionData_HealData___ConvertAll_int_(
                v19,
                (System_Converter_T__TOutput__o *)_9__34_0,
                (const MethodInfo_18F3C28 *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
        if ( v17 )
        {
          v31 = (StageEntity_o *)System_Collections_Generic_List_int___ToArray(
                                   (System_Collections_Generic_List_int__o *)v17,
                                   (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
          v33 = limitTurn;
          v34 = (System_Int32_array *)v31;
          return StageEntity__GetTurnEffect(v31, v33, v34, v32);
        }
      }
    }
    sub_B2C434(v17, v16);
  }
  return (System_Int32_array *)sub_B2C374(int___TypeInfo, 0LL);
}


int32_t __fastcall StageEntity__getTurnEffectType(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4188C09 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_22817/*"turnEffectType"*/, method);
    byte_4188C09 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_22817/*"turnEffectType"*/, 0, v2);
}


bool __fastcall StageEntity__getTurnElapsedEndBattleFlag(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4188C0A & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_22818/*"turnElapsedEndBattle"*/, method);
    byte_4188C0A = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_22818/*"turnElapsedEndBattle"*/, 0, v2) > 0;
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
  struct StageEntity___c_StaticFields *static_fields; // x0

  if ( (byte_418478D & 1) == 0 )
  {
    sub_B2C35C(&StageEntity___c_TypeInfo, v1);
    byte_418478D = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(StageEntity___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = StageEntity___c_TypeInfo->static_fields;
  static_fields->__9 = (struct StageEntity___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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

  if ( (byte_4184791 & 1) == 0 )
  {
    sub_B2C35C(&AiAllocationInfo_TypeInfo, obj);
    byte_4184791 = 1;
  }
  v4 = (AiAllocationInfo_o *)sub_B2C42C(AiAllocationInfo_TypeInfo);
  AiAllocationInfo___ctor(v4, obj, 0LL);
  return v4;
}


System_String_o *__fastcall StageEntity___c___GetBattleStartVoiceIdArray_b__54_0(
        StageEntity___c_o *this,
        Il2CppObject *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
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

  if ( (byte_4184790 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1/*""*/, x);
    byte_4184790 = 1;
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

  if ( (byte_418478E & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1/*""*/, x);
    byte_418478E = 1;
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

  if ( (byte_418478F & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1/*""*/, x);
    byte_418478F = 1;
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