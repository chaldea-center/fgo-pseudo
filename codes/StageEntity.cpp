void __fastcall StageEntity___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_40FAE36 & 1) == 0 )
  {
    sub_B16FFC(&StageEntity_TypeInfo, v1);
    byte_40FAE36 = 1;
  }
  StageEntity_TypeInfo->static_fields->DEFAULT_ENEMY_ACTION_COUNT = 3;
}


void __fastcall StageEntity___ctor(StageEntity_o *this, const MethodInfo *method)
{
  if ( (byte_40FADFF & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_string___ctor__, method);
    byte_40FADFF = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_266F2D4 *)Method_DataEntityBase_string___ctor__);
}


void __fastcall StageEntity___ctor_26818968(StageEntity_o *this, StageEntity_o *cSrc, const MethodInfo *method)
{
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  struct System_String_o *name; // x1

  if ( (byte_40FAE00 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_string___ctor__, cSrc);
    byte_40FAE00 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_266F2D4 *)Method_DataEntityBase_string___ctor__);
  if ( !cSrc )
    sub_B170D4();
  this->fields.questId = cSrc->fields.questId;
  this->fields.questPhase = cSrc->fields.questPhase;
  name = cSrc->fields.name;
  this->fields.name = name;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.name, (System_Int32_array **)name, v5, v6, v7, v8, v9, v10);
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
  if ( (byte_40FADFE & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&questPhase);
    byte_40FADFE = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           questId,
           questPhase,
           wave,
           (const MethodInfo_18C25C8 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall StageEntity__CreatePrimaryKey(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t questPhase; // w20
  int32_t questId; // w21
  int32_t wave; // w19

  if ( (byte_40FADFD & 1) == 0 )
  {
    sub_B16FFC(&StageEntity_TypeInfo, method);
    byte_40FADFD = 1;
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
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0
  __int64 v9; // x10

  if ( (byte_40FAE1D & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_object__ToArray__, v4);
    sub_B16FFC(&System_Collections_Generic_List_object__TypeInfo, v5);
    sub_B16FFC(&StringLiteral_16226/*"aiActTypeAttackCommandCard"*/, v6);
    byte_40FAE1D = 1;
  }
  if ( !StageEntity__checkScript(this, (System_String_o *)StringLiteral_16226/*"aiActTypeAttackCommandCard"*/, v2) )
    return 0LL;
  script = this->fields.script;
  if ( !script
    || (Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                 (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)script,
                 (System_Type_o *)StringLiteral_16226/*"aiActTypeAttackCommandCard"*/,
                 (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL
    || (v9 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1),
        *(&Item->klass->_2.bitflags2 + 1) < (unsigned int)v9)
    || (System_Collections_Generic_List_object__c *)Item->klass->_2.typeHierarchy[v9 - 1] != System_Collections_Generic_List_object__TypeInfo )
  {
    sub_B170D4();
  }
  return (System_Object_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)Item,
                                  (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_object__ToArray__);
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
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *v17; // x21
  __int64 v18; // x10
  struct BattleDeckServantData_o *deckSvt; // x8
  int32_t npcId; // w22
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0
  StageEntity_o *v22; // x0
  const MethodInfo *v23; // x1

  if ( (byte_40FAE1E & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, enemyServantData);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v5);
    sub_B16FFC(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v6);
    sub_B16FFC(&long_TypeInfo, v7);
    sub_B16FFC(&StringLiteral_21071/*"npcServantId"*/, v8);
    sub_B16FFC(&StringLiteral_17164/*"cardType"*/, v9);
    byte_40FAE1E = 1;
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
        {
          sub_B17100(AiActTypeAttackCommandCard, v11, v12);
          sub_B170A0();
        }
        v17 = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)m_Items[v15];
        if ( v17 )
        {
          v18 = *(&System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.bitflags2 + 1);
          if ( *(&v17->klass->_2.bitflags2 + 1) >= (unsigned int)v18
            && (System_Collections_Generic_Dictionary_string__object__c *)v17->klass->_2.typeHierarchy[v18 - 1] == System_Collections_Generic_Dictionary_string__object__TypeInfo )
          {
            AiActTypeAttackCommandCard = (System_Object_array *)System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                                                                  (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)m_Items[v15],
                                                                  (System_Xml_XmlQualifiedName_o *)StringLiteral_21071/*"npcServantId"*/,
                                                                  (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
            if ( ((unsigned __int8)AiActTypeAttackCommandCard & 1) != 0 )
            {
              if ( !enemyServantData )
                goto LABEL_24;
              deckSvt = enemyServantData->fields.deckSvt;
              if ( !deckSvt )
                goto LABEL_24;
              npcId = deckSvt->fields.npcId;
              Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                       v17,
                       (System_Type_o *)StringLiteral_21071/*"npcServantId"*/,
                       (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
              if ( !Item )
                goto LABEL_24;
              if ( Item->klass->_1.element_class != long_TypeInfo->_1.element_class )
                goto LABEL_25;
              AiActTypeAttackCommandCard = (System_Object_array *)j_il2cpp_object_unbox_0(Item);
              if ( npcId == LODWORD(AiActTypeAttackCommandCard->obj.klass) )
              {
                AiActTypeAttackCommandCard = (System_Object_array *)System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                                                                      (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v17,
                                                                      (System_Xml_XmlQualifiedName_o *)StringLiteral_17164/*"cardType"*/,
                                                                      (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
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
      Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
               v17,
               (System_Type_o *)StringLiteral_17164/*"cardType"*/,
               (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !Item )
LABEL_24:
        sub_B170D4();
      if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
      {
        LODWORD(AiActTypeAttackCommandCard) = *(_DWORD *)j_il2cpp_object_unbox_0(Item);
      }
      else
      {
LABEL_25:
        v22 = (StageEntity_o *)sub_B173C8(Item);
        LODWORD(AiActTypeAttackCommandCard) = StageEntity__IsDisableFieldMotion(v22, v23);
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
  __int64 v9; // x1
  System_String_o *Value_string; // x19
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  bool IsNullOrEmpty; // w8
  System_Collections_Generic_List_AiAllocationInfo__o *result; // x0
  StageEntity___c_c *v17; // x0
  struct StageEntity___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__68_0; // x20
  Il2CppObject *v20; // x21
  struct StageEntity___c_StaticFields *v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x0

  if ( (byte_40FAE30 & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_GetValue_List_object____, method);
    sub_B16FFC(&Method_System_Linq_Enumerable_Select_object__AiAllocationInfo___, v3);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToList_AiAllocationInfo___, v4);
    sub_B16FFC(&Method_System_Func_object__AiAllocationInfo___ctor__, v5);
    sub_B16FFC(&System_Func_object__AiAllocationInfo__TypeInfo, v6);
    sub_B16FFC(&Method_StageEntity___c__GetAiAllocationInfoList_b__68_0__, v7);
    sub_B16FFC(&StageEntity___c_TypeInfo, v8);
    sub_B16FFC(&StringLiteral_16227/*"aiAllocations"*/, v9);
    byte_40FAE30 = 1;
  }
  Value_string = BasicHelper__GetValue_string_(
                   this->fields.script,
                   (System_String_o *)StringLiteral_16227/*"aiAllocations"*/,
                   0LL,
                   (const MethodInfo_18B7D04 *)Method_BasicHelper_GetValue_List_object____);
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)Value_string, 0LL);
  result = 0LL;
  if ( !IsNullOrEmpty )
  {
    v17 = StageEntity___c_TypeInfo;
    if ( (BYTE3(StageEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !StageEntity___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(StageEntity___c_TypeInfo);
      v17 = StageEntity___c_TypeInfo;
    }
    static_fields = v17->static_fields;
    _9__68_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__68_0;
    if ( !_9__68_0 )
    {
      if ( (BYTE3(v17->vtable._0_Equals.methodPtr) & 4) != 0 && !v17->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v17);
        static_fields = StageEntity___c_TypeInfo->static_fields;
      }
      v20 = (Il2CppObject *)static_fields->__9;
      _9__68_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B170CC(
                                                                                                   System_Func_object__AiAllocationInfo__TypeInfo,
                                                                                                   v11,
                                                                                                   v12,
                                                                                                   v13,
                                                                                                   v14);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
        _9__68_0,
        v20,
        Method_StageEntity___c__GetAiAllocationInfoList_b__68_0__,
        (const MethodInfo_2B6C28C *)Method_System_Func_object__AiAllocationInfo___ctor__);
      v21 = StageEntity___c_TypeInfo->static_fields;
      v21->__9__68_0 = (struct System_Func_object__AiAllocationInfo__o *)_9__68_0;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v21->__9__68_0,
        (System_Int32_array **)_9__68_0,
        v22,
        v23,
        v24,
        v25,
        v26,
        v27);
    }
    v28 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)Value_string,
                                                                 (System_Func_TSource__TResult__o *)_9__68_0,
                                                                 (const MethodInfo_19C0B1C *)Method_System_Linq_Enumerable_Select_object__AiAllocationInfo___);
    return (System_Collections_Generic_List_AiAllocationInfo__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                    v28,
                                                                    (const MethodInfo_19C7AA0 *)Method_System_Linq_Enumerable_ToList_AiAllocationInfo___);
  }
  return result;
}


System_Int32_array *__fastcall StageEntity__GetAssumedEffectId(StageEntity_o *this, const MethodInfo *method)
{
  if ( (byte_40FAE34 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_16437/*"assumedEffectId"*/, method);
    byte_40FAE34 = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_16437/*"assumedEffectId"*/, 0LL);
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
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  System_Collections_Generic_List_string__o *v17; // x19
  __int64 v18; // x10
  StageEntity___c_c *v20; // x0
  struct StageEntity___c_StaticFields *static_fields; // x8
  System_Converter_string__string__o *_9__54_0; // x20
  Il2CppObject *v23; // x21
  struct StageEntity___c_StaticFields *v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Collections_Generic_List_WarBoardUiData_SaveData__o *v31; // x0

  if ( (byte_40FAE24 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Converter_object__string___ctor__, method);
    sub_B16FFC(&System_Converter_object__string__TypeInfo, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_object__ConvertAll_string___, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__ToArray__, v6);
    sub_B16FFC(&System_Collections_Generic_List_object__TypeInfo, v7);
    sub_B16FFC(&string___TypeInfo, v8);
    sub_B16FFC(&Method_StageEntity___c__GetBattleStartVoiceIdArray_b__54_0__, v9);
    sub_B16FFC(&StageEntity___c_TypeInfo, v10);
    sub_B16FFC(&StringLiteral_16590/*"battleStartVoiceIds"*/, v11);
    byte_40FAE24 = 1;
  }
  ScriptObject = StageEntity__GetScriptObject(this, (System_String_o *)StringLiteral_16590/*"battleStartVoiceIds"*/, v2);
  if ( !ScriptObject )
    return (System_String_array *)sub_B17014(string___TypeInfo, 0LL, v14);
  v17 = (System_Collections_Generic_List_string__o *)ScriptObject;
  v18 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
  if ( *(&ScriptObject->klass->_2.bitflags2 + 1) < (unsigned int)v18
    || (System_Collections_Generic_List_object__c *)ScriptObject->klass->_2.typeHierarchy[v18 - 1] != System_Collections_Generic_List_object__TypeInfo )
  {
    return (System_String_array *)sub_B17014(string___TypeInfo, 0LL, v14);
  }
  v20 = StageEntity___c_TypeInfo;
  if ( (BYTE3(StageEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !StageEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(StageEntity___c_TypeInfo);
    v20 = StageEntity___c_TypeInfo;
  }
  static_fields = v20->static_fields;
  _9__54_0 = (System_Converter_string__string__o *)static_fields->__9__54_0;
  if ( !_9__54_0 )
  {
    if ( (BYTE3(v20->vtable._0_Equals.methodPtr) & 4) != 0 && !v20->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v20);
      static_fields = StageEntity___c_TypeInfo->static_fields;
    }
    v23 = (Il2CppObject *)static_fields->__9;
    _9__54_0 = (System_Converter_string__string__o *)sub_B170CC(
                                                       System_Converter_object__string__TypeInfo,
                                                       v13,
                                                       v14,
                                                       v15,
                                                       v16);
    System_Converter_string__string____ctor(
      _9__54_0,
      v23,
      Method_StageEntity___c__GetBattleStartVoiceIdArray_b__54_0__,
      (const MethodInfo_266B904 *)Method_System_Converter_object__string___ctor__);
    v24 = StageEntity___c_TypeInfo->static_fields;
    v24->__9__54_0 = (struct System_Converter_object__string__o *)_9__54_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v24->__9__54_0,
      (System_Int32_array **)_9__54_0,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
  }
  v31 = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)System_Collections_Generic_List_string___ConvertAll_string_(
                                                                        v17,
                                                                        (System_Converter_T__TOutput__o *)_9__54_0,
                                                                        (const MethodInfo_18FDDD8 *)Method_System_Collections_Generic_List_object__ConvertAll_string___);
  if ( !v31 )
    sub_B170D4();
  return (System_String_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                  v31,
                                  (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_string__ToArray__);
}


int32_t __fastcall StageEntity__GetBattleStartVoiceServantId(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40FAE22 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_16591/*"battleStartVoiceSvtId"*/, method);
    byte_40FAE22 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_16591/*"battleStartVoiceSvtId"*/, 0, v2);
}


int32_t __fastcall StageEntity__GetBattleStartVoiceServantLimit(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40FAE23 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_16592/*"battleStartVoiceSvtLimit"*/, method);
    byte_40FAE23 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_16592/*"battleStartVoiceSvtLimit"*/, -1, v2);
}


System_Int32_array *__fastcall StageEntity__GetBossIdAndChangeBgmId(StageEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Int32_array *v5; // x2
  const MethodInfo *v6; // x3

  if ( (byte_40FAE1C & 1) == 0 )
  {
    sub_B16FFC(&int___TypeInfo, method);
    sub_B16FFC(&StringLiteral_16822/*"bossIdAndChangeBgmId"*/, v4);
    byte_40FAE1C = 1;
  }
  v5 = (System_Int32_array *)sub_B17014(int___TypeInfo, 0LL, v2);
  return StageEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_16822/*"bossIdAndChangeBgmId"*/, v5, v6);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall StageEntity__GetCutInSvtIds(StageEntity_o *this, bool isEnemy, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  System_String_o **v7; // x8

  if ( (byte_40FAE19 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_18290/*"enemyCutInSvtIds"*/, isEnemy);
    sub_B16FFC(&StringLiteral_21404/*"playerCutInSvtIds"*/, v6);
    byte_40FAE19 = 1;
  }
  v7 = (System_String_o **)&StringLiteral_18290/*"enemyCutInSvtIds"*/;
  if ( !isEnemy )
    v7 = (System_String_o **)&StringLiteral_21404/*"playerCutInSvtIds"*/;
  return StageEntity__getScriptIntArrayParam(this, *v7, 0LL, v3);
}


int32_t __fastcall StageEntity__GetEffectBgmId(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40FAE1A & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_18195/*"effectBgmId"*/, method);
    byte_40FAE1A = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_18195/*"effectBgmId"*/, -1, v2);
}


int32_t __fastcall StageEntity__GetEffectSvtId(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40FAE18 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_18205/*"effectSvtId"*/, method);
    byte_40FAE18 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_18205/*"effectSvtId"*/, 0, v2);
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
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x19
  StageEntity___c_c *v18; // x0
  struct StageEntity___c_StaticFields *static_fields; // x8
  System_Func_int__int__o *_9__64_0; // x20
  Il2CppObject *v21; // x21
  struct StageEntity___c_StaticFields *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x0

  if ( (byte_40FAE2C & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_Select_int__int___, *(_QWORD *)&enemyFieldPosCount);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_int___, v6);
    sub_B16FFC(&Method_System_Func_int__int___ctor__, v7);
    sub_B16FFC(&System_Func_int__int__TypeInfo, v8);
    sub_B16FFC(&Method_StageEntity___c__GetEnemyAddOrderPosArray_b__64_0__, v9);
    sub_B16FFC(&StageEntity___c_TypeInfo, v10);
    sub_B16FFC(&StringLiteral_18292/*"enemyEntryOrder"*/, v11);
    byte_40FAE2C = 1;
  }
  ScriptIntArrayParam = StageEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_18292/*"enemyEntryOrder"*/, 0LL, v3);
  if ( ScriptIntArrayParam )
  {
    v17 = (System_Collections_Generic_IEnumerable_TSource__o *)ScriptIntArrayParam;
    v18 = StageEntity___c_TypeInfo;
    if ( (BYTE3(StageEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !StageEntity___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(StageEntity___c_TypeInfo);
      v18 = StageEntity___c_TypeInfo;
    }
    static_fields = v18->static_fields;
    _9__64_0 = static_fields->__9__64_0;
    if ( !_9__64_0 )
    {
      if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 && !v18->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v18);
        static_fields = StageEntity___c_TypeInfo->static_fields;
      }
      v21 = (Il2CppObject *)static_fields->__9;
      _9__64_0 = (System_Func_int__int__o *)sub_B170CC(System_Func_int__int__TypeInfo, v13, v14, v15, v16);
      System_Func_int__int____ctor(
        _9__64_0,
        v21,
        Method_StageEntity___c__GetEnemyAddOrderPosArray_b__64_0__,
        (const MethodInfo_2B65E70 *)Method_System_Func_int__int___ctor__);
      v22 = StageEntity___c_TypeInfo->static_fields;
      v22->__9__64_0 = _9__64_0;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v22->__9__64_0,
        (System_Int32_array **)_9__64_0,
        v23,
        v24,
        v25,
        v26,
        v27,
        v28);
    }
    v29 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__int_(
                                                                 v17,
                                                                 (System_Func_TSource__TResult__o *)_9__64_0,
                                                                 (const MethodInfo_19BF310 *)Method_System_Linq_Enumerable_Select_int__int___);
  }
  else
  {
    v29 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Range(0, enemyFieldPosCount, 0LL);
  }
  return System_Linq_Enumerable__ToArray_int_(
           v29,
           (const MethodInfo_19C4A28 *)Method_System_Linq_Enumerable_ToArray_int___);
}


int32_t __fastcall StageEntity__GetEnemyCountStartValue(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40FAE31 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_18289/*"enemyCountStartValue"*/, method);
    byte_40FAE31 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_18289/*"enemyCountStartValue"*/, 0, v2);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall StageEntity__GetEnemyEntryMaxCountEachTurn(
        StageEntity_o *this,
        int32_t defaultValue,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_40FAE2D & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_18291/*"enemyEntryMaxCountEachTurn"*/, *(_QWORD *)&defaultValue);
    byte_40FAE2D = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_18291/*"enemyEntryMaxCountEachTurn"*/, defaultValue, v3);
}


int32_t __fastcall StageEntity__GetEnemyFieldPosCount(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40FAE25 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_18294/*"enemyFieldPosCount"*/, method);
    byte_40FAE25 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_18294/*"enemyFieldPosCount"*/, 3, v2);
}


int32_t __fastcall StageEntity__GetFadeType(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40FAE17 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_16588/*"battleStartFadeType"*/, method);
    byte_40FAE17 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_16588/*"battleStartFadeType"*/, 0, v2);
}


System_Int32_array *__fastcall StageEntity__GetFieldCallServantId(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1
  System_Int32_array *result; // x0
  __int64 v6; // x2

  if ( (byte_40FAE20 & 1) == 0 )
  {
    sub_B16FFC(&int___TypeInfo, method);
    sub_B16FFC(&StringLiteral_17108/*"call"*/, v4);
    byte_40FAE20 = 1;
  }
  result = StageEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_17108/*"call"*/, 0LL, v2);
  if ( !result )
    return (System_Int32_array *)sub_B17014(int___TypeInfo, 0LL, v6);
  return result;
}


System_Int32_array *__fastcall StageEntity__GetFieldPosSkillId(StageEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Int32_array *v5; // x2
  const MethodInfo *v6; // x3

  if ( (byte_40FAE2E & 1) == 0 )
  {
    sub_B16FFC(&int___TypeInfo, method);
    sub_B16FFC(&StringLiteral_18643/*"fieldPosSkillId"*/, v4);
    byte_40FAE2E = 1;
  }
  v5 = (System_Int32_array *)sub_B17014(int___TypeInfo, 0LL, v2);
  return StageEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_18643/*"fieldPosSkillId"*/, v5, v6);
}


System_Int32_array *__fastcall StageEntity__GetFieldPosSkillLv(StageEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Int32_array *v5; // x2
  const MethodInfo *v6; // x3

  if ( (byte_40FAE2F & 1) == 0 )
  {
    sub_B16FFC(&int___TypeInfo, method);
    sub_B16FFC(&StringLiteral_18644/*"fieldPosSkillLv"*/, v4);
    byte_40FAE2F = 1;
  }
  v5 = (System_Int32_array *)sub_B17014(int___TypeInfo, 0LL, v2);
  return StageEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_18644/*"fieldPosSkillLv"*/, v5, v6);
}


System_Int32_array *__fastcall StageEntity__GetMultiEffectIds(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40FAE16 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_20901/*"multiEffectIds"*/, method);
    byte_40FAE16 = 1;
  }
  return StageEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_20901/*"multiEffectIds"*/, 0LL, v2);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall StageEntity__GetPriorityBG(StageEntity_o *this, int32_t def, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_40FAE32 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_21439/*"priorityBG"*/, *(_QWORD *)&def);
    byte_40FAE32 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_21439/*"priorityBG"*/, def, v3);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall StageEntity__GetPriorityBgm(StageEntity_o *this, int32_t def, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_40FAE33 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_21440/*"priorityBgm"*/, *(_QWORD *)&def);
    byte_40FAE33 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_21440/*"priorityBgm"*/, def, v3);
}


Il2CppObject *__fastcall StageEntity__GetScriptObject(
        StageEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40FAE21 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, key);
    byte_40FAE21 = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( !script )
    sub_B170D4();
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
         (System_Xml_XmlQualifiedName_o *)key,
         &value,
         (const MethodInfo_2DA5A18 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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

  if ( (byte_40FAE1B & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_22179/*"startBgmOff"*/, method);
    byte_40FAE1B = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_22179/*"startBgmOff"*/, 0, v2);
}


SubBgmPlayArgs_array *__fastcall StageEntity__GetSubBgmPlayArgsArray(StageEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  StageEntity___c_c *v11; // x0
  struct StageEntity___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__61_0; // x20
  Il2CppObject *v14; // x21
  struct StageEntity___c_StaticFields *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_40FAE29 & 1) == 0 )
  {
    sub_B16FFC(&Method_EntityScriptUtil_GetScriptValue_List_object___SubBgmPlayArgs_____, method);
    sub_B16FFC(&Method_System_Func_List_object___SubBgmPlayArgs_____ctor__, v6);
    sub_B16FFC(&System_Func_List_object___SubBgmPlayArgs____TypeInfo, v7);
    sub_B16FFC(&Method_StageEntity___c__GetSubBgmPlayArgsArray_b__61_0__, v8);
    sub_B16FFC(&StageEntity___c_TypeInfo, v9);
    sub_B16FFC(&StringLiteral_22282/*"subBgms"*/, v10);
    byte_40FAE29 = 1;
  }
  v11 = StageEntity___c_TypeInfo;
  if ( (BYTE3(StageEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !StageEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(StageEntity___c_TypeInfo);
    v11 = StageEntity___c_TypeInfo;
  }
  static_fields = v11->static_fields;
  _9__61_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__61_0;
  if ( !_9__61_0 )
  {
    if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 && !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      static_fields = StageEntity___c_TypeInfo->static_fields;
    }
    v14 = (Il2CppObject *)static_fields->__9;
    _9__61_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B170CC(
                                                                                                 System_Func_List_object___SubBgmPlayArgs____TypeInfo,
                                                                                                 method,
                                                                                                 v2,
                                                                                                 v3,
                                                                                                 v4);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__61_0,
      v14,
      Method_StageEntity___c__GetSubBgmPlayArgsArray_b__61_0__,
      (const MethodInfo_2B6C28C *)Method_System_Func_List_object___SubBgmPlayArgs_____ctor__);
    v15 = StageEntity___c_TypeInfo->static_fields;
    v15->__9__61_0 = (struct System_Func_List_object___SubBgmPlayArgs____o *)_9__61_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v15->__9__61_0,
      (System_Int32_array **)_9__61_0,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
  return (SubBgmPlayArgs_array *)EntityScriptUtil__GetScriptValue_object__object_(
                                   this->fields.script,
                                   (System_String_o *)StringLiteral_22282/*"subBgms"*/,
                                   (System_Func_TSource__TDestination__o *)_9__61_0,
                                   0LL,
                                   (const MethodInfo_18C5838 *)Method_EntityScriptUtil_GetScriptValue_List_object___SubBgmPlayArgs_____);
}


int32_t __fastcall StageEntity__GetSubBgmsPriority(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40FAE2A & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_22283/*"subBgmsPriority"*/, method);
    byte_40FAE2A = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_22283/*"subBgmsPriority"*/, 0, v2);
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
  unsigned __int64 max_length; // x8
  il2cpp_array_size_t v10; // w9
  int32_t v11; // w10
  unsigned __int64 v12; // x11
  il2cpp_array_size_t v13; // w14

  if ( (byte_40FAE11 & 1) == 0 )
  {
    sub_B16FFC(&int___TypeInfo, *(_QWORD *)&limitTurn);
    byte_40FAE11 = 1;
  }
  result = (System_Int32_array *)sub_B17014(int___TypeInfo, (unsigned int)limitTurn, turnlist);
  if ( !result )
LABEL_15:
    sub_B170D4();
  max_length = result->max_length;
  if ( (__int64)(max_length << 32) >= 1 )
  {
    v10 = 0;
    v11 = 0;
    v12 = 0LL;
    do
    {
      if ( v12 >= max_length )
      {
LABEL_14:
        sub_B17100(result, v7, v8);
        sub_B170A0();
      }
      result->m_Items[v12 + 1] = v11;
      if ( !turnlist )
        goto LABEL_15;
      v13 = turnlist->max_length;
      if ( (int)v10 < (int)v13 )
      {
        if ( v10 >= v13 )
          goto LABEL_14;
        if ( v12 == turnlist->m_Items[v10 + 1] - 1 )
        {
          ++v11;
          ++v10;
        }
      }
      ++v12;
    }
    while ( (__int64)v12 < (int)max_length );
  }
  return result;
}


bool __fastcall StageEntity__Is3_6BossBattle(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40FAE26 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1152/*"3.6BossBattle"*/, method);
    byte_40FAE26 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_1152/*"3.6BossBattle"*/, 0, v2) > 0;
}


bool __fastcall StageEntity__IsDisableFieldMotion(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40FAE1F & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_17958/*"disableUniqueFieldMotion"*/, method);
    byte_40FAE1F = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_17958/*"disableUniqueFieldMotion"*/, 0, v2) > 0;
}


bool __fastcall StageEntity__IsForceSetNormalEnemyStatusUI(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_40FAE2B & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_6724/*"ForceSetNormalEnemyStatusUI"*/, method);
    byte_40FAE2B = 1;
  }
  return StageEntity__checkScript(this, (System_String_o *)StringLiteral_6724/*"ForceSetNormalEnemyStatusUI"*/, v2);
}


bool __fastcall StageEntity__IsReleaseUnusedAssetsWhenEntryMember(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_40FAE28 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_21666/*"releaseUnusedAssetsWhenEntryMember"*/, method);
    byte_40FAE28 = 1;
  }
  return StageEntity__checkScript(this, (System_String_o *)StringLiteral_21666/*"releaseUnusedAssetsWhenEntryMember"*/, v2);
}


bool __fastcall StageEntity__IsSkipWaveStartFadeInSe(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_40FAE35 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_22066/*"skipWaveStartFadeInSe"*/, method);
    byte_40FAE35 = 1;
  }
  return StageEntity__checkScript(this, (System_String_o *)StringLiteral_22066/*"skipWaveStartFadeInSe"*/, v2);
}


bool __fastcall StageEntity__IsSpecifiedBattleStartVoice(StageEntity_o *this, const MethodInfo *method)
{
  int32_t BattleStartVoiceServantId; // w20
  const MethodInfo *v4; // x1

  BattleStartVoiceServantId = StageEntity__GetBattleStartVoiceServantId(this, method);
  return (BattleStartVoiceServantId > 0) & (StageEntity__GetBattleStartVoiceServantLimit(this, v4) >= 0);
}


bool __fastcall StageEntity__IsSpecifiedBattleStartVoice_26825524(
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

  if ( (byte_40FAE0A & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_18783/*"fov"*/, method);
    byte_40FAE0A = 1;
  }
  return StageEntity__checkScript(this, (System_String_o *)StringLiteral_18783/*"fov"*/, v2);
}


bool __fastcall StageEntity__checkScript(StageEntity_o *this, System_String_o *key, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_40FAE01 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    byte_40FAE01 = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                       (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
                       (System_Xml_XmlQualifiedName_o *)key,
                       (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)script;
}


bool __fastcall StageEntity__disableSystemFadeStartBattle(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40FAE15 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_17956/*"disableSystemFadeStartBattle"*/, method);
    byte_40FAE15 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_17956/*"disableSystemFadeStartBattle"*/, 0, v2) > 0;
}


int32_t __fastcall StageEntity__getBattleMasterImageId(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40FAE27 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_16586/*"battleMasterImageId"*/, method);
    byte_40FAE27 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_16586/*"battleMasterImageId"*/, 0, v2);
}


int32_t __fastcall StageEntity__getChangeBgId(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40FAE0D & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_17204/*"changeBgId"*/, method);
    byte_40FAE0D = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_17204/*"changeBgId"*/, 0, v2);
}


int32_t __fastcall StageEntity__getChangeBgType(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40FAE0E & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_17205/*"changeBgType"*/, method);
    byte_40FAE0E = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_17205/*"changeBgType"*/, 0, v2);
}


float __fastcall StageEntity__getCustomFOV(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_40FAE09 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_18783/*"fov"*/, method);
    byte_40FAE09 = 1;
  }
  return StageEntity__getScriptFloat(this, (System_String_o *)StringLiteral_18783/*"fov"*/, 0.0, v2);
}


int32_t __fastcall StageEntity__getEnemyActCount(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1
  int32_t result; // w0
  StageEntity_c *v6; // x0

  if ( (byte_40FAE13 & 1) == 0 )
  {
    sub_B16FFC(&StageEntity_TypeInfo, method);
    sub_B16FFC(&StringLiteral_5976/*"EnemyActCount"*/, v4);
    byte_40FAE13 = 1;
  }
  result = StageEntity__getScript(this, (System_String_o *)StringLiteral_5976/*"EnemyActCount"*/, 0, v2);
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
  __int64 v10; // x2

  if ( (byte_40FAE0C & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_18295/*"enemyMasterBattleId"*/, method);
    sub_B16FFC(&StringLiteral_18296/*"enemyMasterBattleIdByPlayerGender"*/, v4);
    byte_40FAE0C = 1;
  }
  ScriptIntArrayParam = StageEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_18296/*"enemyMasterBattleIdByPlayerGender"*/, 0LL, v2);
  if ( !ScriptIntArrayParam )
    return StageEntity__getScript(this, (System_String_o *)StringLiteral_18295/*"enemyMasterBattleId"*/, 0, v6);
  v7 = ScriptIntArrayParam;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_13;
  if ( SelfUserGame->fields.genderType == 1 )
  {
    if ( v7->max_length )
      return v7->m_Items[1];
LABEL_14:
    sub_B17100(SelfUserGame, v9, v10);
    sub_B170A0();
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
LABEL_13:
    sub_B170D4();
  if ( SelfUserGame->fields.genderType != 2 )
    return StageEntity__getScript(this, (System_String_o *)StringLiteral_18295/*"enemyMasterBattleId"*/, 0, v6);
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
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0
  __int64 v9; // x9
  StageEntity_o *v11; // x0
  int32_t v12; // w1
  const MethodInfo *v13; // x2

  if ( (byte_40FAE0F & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_object__ToArray__, v4);
    sub_B16FFC(&System_Collections_Generic_List_object__TypeInfo, v5);
    sub_B16FFC(&StringLiteral_16228/*"aiFieldIds"*/, v6);
    byte_40FAE0F = 1;
  }
  if ( !StageEntity__checkScript(this, (System_String_o *)StringLiteral_16228/*"aiFieldIds"*/, v2) )
    return 0LL;
  script = this->fields.script;
  if ( !script
    || (Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                 (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)script,
                 (System_Type_o *)StringLiteral_16228/*"aiFieldIds"*/,
                 (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_B170D4();
  }
  v9 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
  if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v9
    && (System_Collections_Generic_List_object__c *)Item->klass->_2.typeHierarchy[v9 - 1] == System_Collections_Generic_List_object__TypeInfo )
  {
    return (System_Object_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)Item,
                                    (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_object__ToArray__);
  }
  v11 = (StageEntity_o *)sub_B173C8(Item);
  return (System_Object_array *)StageEntity__getTurnEffect(v11, v12, v13);
}


int32_t __fastcall StageEntity__getLimitAct(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40FAE08 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_8492/*"LimitAct"*/, method);
    byte_40FAE08 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_8492/*"LimitAct"*/, 0, v2);
}


int32_t __fastcall StageEntity__getLimitTurn(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40FAE05 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_22722/*"turn"*/, method);
    byte_40FAE05 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_22722/*"turn"*/, 0, v2);
}


System_Int32_array *__fastcall StageEntity__getNoEntryIds(StageEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
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
  System_Type_o *v15; // x20
  struct System_Collections_Generic_Dictionary_string__object__o *v16; // x0
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x19
  StageEntity___c_c *v21; // x8
  struct StageEntity___c_StaticFields *static_fields; // x9
  System_Converter_BattleActionData_HealData__int__o *_9__36_0; // x20
  System_Collections_Generic_List_object__c *v24; // x1
  __int64 v25; // x11
  __int64 v26; // x9
  Il2CppObject *v28; // x21
  struct StageEntity___c_StaticFields *v29; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_Collections_Generic_List_int__o *v36; // x0

  if ( (byte_40FAE12 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Converter_object__int___ctor__, method);
    sub_B16FFC(&System_Converter_object__int__TypeInfo, v4);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v6);
    sub_B16FFC(&int___TypeInfo, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_object__ConvertAll_int___, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v9);
    sub_B16FFC(&System_Collections_Generic_List_object__TypeInfo, v10);
    sub_B16FFC(&Method_StageEntity___c__getNoEntryIds_b__36_0__, v11);
    sub_B16FFC(&StageEntity___c_TypeInfo, v12);
    sub_B16FFC(&StringLiteral_9558/*"NoEntryIds"*/, v13);
    byte_40FAE12 = 1;
  }
  script = this->fields.script;
  if ( !script )
    return (System_Int32_array *)sub_B17014(int___TypeInfo, 0LL, v2);
  v15 = (System_Type_o *)StringLiteral_9558/*"NoEntryIds"*/;
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_9558/*"NoEntryIds"*/,
          (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return (System_Int32_array *)sub_B17014(int___TypeInfo, 0LL, v2);
  v16 = this->fields.script;
  if ( !v16 )
    goto LABEL_24;
  Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
           (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v16,
           v15,
           (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v21 = StageEntity___c_TypeInfo;
  if ( (BYTE3(StageEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !StageEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(StageEntity___c_TypeInfo);
    v21 = StageEntity___c_TypeInfo;
  }
  static_fields = v21->static_fields;
  _9__36_0 = (System_Converter_BattleActionData_HealData__int__o *)static_fields->__9__36_0;
  v24 = System_Collections_Generic_List_object__TypeInfo;
  if ( Item )
  {
    v25 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
    if ( *(&Item->klass->_2.bitflags2 + 1) < (unsigned int)v25
      || (System_Collections_Generic_List_object__c *)Item->klass->_2.typeHierarchy[v25 - 1] != System_Collections_Generic_List_object__TypeInfo )
    {
      goto LABEL_16;
    }
  }
  if ( !_9__36_0 )
  {
    if ( (BYTE3(v21->vtable._0_Equals.methodPtr) & 4) != 0 && !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21);
      static_fields = StageEntity___c_TypeInfo->static_fields;
    }
    v28 = (Il2CppObject *)static_fields->__9;
    _9__36_0 = (System_Converter_BattleActionData_HealData__int__o *)sub_B170CC(
                                                                       System_Converter_object__int__TypeInfo,
                                                                       v24,
                                                                       v17,
                                                                       v18,
                                                                       v19);
    System_Converter_BattleActionData_HealData__int____ctor(
      _9__36_0,
      v28,
      Method_StageEntity___c__getNoEntryIds_b__36_0__,
      (const MethodInfo_266B524 *)Method_System_Converter_object__int___ctor__);
    v29 = StageEntity___c_TypeInfo->static_fields;
    v29->__9__36_0 = (struct System_Converter_object__int__o *)_9__36_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v29->__9__36_0,
      (System_Int32_array **)_9__36_0,
      v30,
      v31,
      v32,
      v33,
      v34,
      v35);
    if ( Item )
      goto LABEL_22;
LABEL_24:
    sub_B170D4();
  }
  if ( !Item )
    goto LABEL_24;
  v26 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
  if ( *(&Item->klass->_2.bitflags2 + 1) < (unsigned int)v26
    || (System_Collections_Generic_List_object__c *)Item->klass->_2.typeHierarchy[v26 - 1] != System_Collections_Generic_List_object__TypeInfo )
  {
LABEL_16:
    sub_B173C8(Item);
    return (System_Int32_array *)sub_B17014(int___TypeInfo, 0LL, v2);
  }
LABEL_22:
  v36 = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_BattleActionData_HealData___ConvertAll_int_(
                                                    (System_Collections_Generic_List_BattleActionData_HealData__o *)Item,
                                                    (System_Converter_T__TOutput__o *)_9__36_0,
                                                    (const MethodInfo_18FDCCC *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
  if ( !v36 )
    goto LABEL_24;
  return System_Collections_Generic_List_int___ToArray(
           v36,
           (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
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
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0
  int32_t result; // w0
  StageEntity_o *v11; // x0
  System_String_o *v12; // x1
  const MethodInfo *v13; // x2
  float v14; // s0

  v4 = defVal;
  if ( (byte_40FAE02 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, key);
    sub_B16FFC(&long_TypeInfo, v7);
    byte_40FAE02 = 1;
  }
  if ( !StageEntity__checkScript(this, key, *(const MethodInfo **)&defVal) )
    return v4;
  script = this->fields.script;
  if ( !script
    || (Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                 (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)script,
                 (System_Type_o *)key,
                 (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_B170D4();
  }
  if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(Item);
  v11 = (StageEntity_o *)sub_B173C8(Item);
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
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0
  float result; // s0
  StageEntity_o *v11; // x0
  System_String_o *v12; // x1
  System_Int32_array *v13; // x2
  const MethodInfo *v14; // x3

  if ( (byte_40FAE03 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, key);
    sub_B16FFC(&double_TypeInfo, v7);
    byte_40FAE03 = 1;
  }
  if ( !StageEntity__checkScript(this, key, method) )
    return defVal;
  script = this->fields.script;
  if ( !script
    || (Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                 (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)script,
                 (System_Type_o *)key,
                 (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_B170D4();
  }
  if ( Item->klass->_1.element_class == double_TypeInfo->_1.element_class )
    return *(double *)j_il2cpp_object_unbox_0(Item);
  v11 = (StageEntity_o *)sub_B173C8(Item);
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
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x19
  StageEntity___c_c *v19; // x8
  struct StageEntity___c_StaticFields *static_fields; // x9
  System_Collections_Generic_List_object__c *v21; // x1
  __int64 v22; // x11
  __int64 v23; // x9
  Il2CppObject *v25; // x21
  struct StageEntity___c_StaticFields *v26; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Collections_Generic_List_int__o *v33; // x0

  _9__22_0 = defVal;
  if ( (byte_40FAE04 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Converter_object__int___ctor__, key);
    sub_B16FFC(&System_Converter_object__int__TypeInfo, v7);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_object__ConvertAll_int___, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v10);
    sub_B16FFC(&System_Collections_Generic_List_object__TypeInfo, v11);
    sub_B16FFC(&Method_StageEntity___c__getScriptIntArrayParam_b__22_0__, v12);
    sub_B16FFC(&StageEntity___c_TypeInfo, v13);
    byte_40FAE04 = 1;
  }
  if ( !StageEntity__checkScript(this, key, (const MethodInfo *)defVal) )
    return _9__22_0;
  script = this->fields.script;
  if ( !script )
    goto LABEL_23;
  Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
           (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)script,
           (System_Type_o *)key,
           (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v19 = StageEntity___c_TypeInfo;
  if ( (BYTE3(StageEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !StageEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(StageEntity___c_TypeInfo);
    v19 = StageEntity___c_TypeInfo;
  }
  static_fields = v19->static_fields;
  _9__22_0 = (System_Int32_array *)static_fields->__9__22_0;
  v21 = System_Collections_Generic_List_object__TypeInfo;
  if ( Item )
  {
    v22 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
    if ( *(&Item->klass->_2.bitflags2 + 1) < (unsigned int)v22
      || (System_Collections_Generic_List_object__c *)Item->klass->_2.typeHierarchy[v22 - 1] != System_Collections_Generic_List_object__TypeInfo )
    {
      goto LABEL_15;
    }
  }
  if ( !_9__22_0 )
  {
    if ( (BYTE3(v19->vtable._0_Equals.methodPtr) & 4) != 0 && !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19);
      static_fields = StageEntity___c_TypeInfo->static_fields;
    }
    v25 = (Il2CppObject *)static_fields->__9;
    _9__22_0 = (System_Int32_array *)sub_B170CC(System_Converter_object__int__TypeInfo, v21, v15, v16, v17);
    System_Converter_BattleActionData_HealData__int____ctor(
      (System_Converter_BattleActionData_HealData__int__o *)_9__22_0,
      v25,
      Method_StageEntity___c__getScriptIntArrayParam_b__22_0__,
      (const MethodInfo_266B524 *)Method_System_Converter_object__int___ctor__);
    v26 = StageEntity___c_TypeInfo->static_fields;
    v26->__9__22_0 = (struct System_Converter_object__int__o *)_9__22_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v26->__9__22_0,
      (System_Int32_array **)_9__22_0,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32);
    if ( Item )
      goto LABEL_21;
LABEL_23:
    sub_B170D4();
  }
  if ( !Item )
    goto LABEL_23;
  v23 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
  if ( *(&Item->klass->_2.bitflags2 + 1) < (unsigned int)v23
    || (System_Collections_Generic_List_object__c *)Item->klass->_2.typeHierarchy[v23 - 1] != System_Collections_Generic_List_object__TypeInfo )
  {
LABEL_15:
    sub_B173C8(Item);
    return _9__22_0;
  }
LABEL_21:
  v33 = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_BattleActionData_HealData___ConvertAll_int_(
                                                    (System_Collections_Generic_List_BattleActionData_HealData__o *)Item,
                                                    (System_Converter_T__TOutput__o *)_9__22_0,
                                                    (const MethodInfo_18FDCCC *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
  if ( !v33 )
    goto LABEL_23;
  return System_Collections_Generic_List_int___ToArray(
           v33,
           (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
}


int32_t __fastcall StageEntity__getShowTurnState(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40FAE0B & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_22028/*"showTurn"*/, method);
    byte_40FAE0B = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_22028/*"showTurn"*/, 2, v2);
}


int32_t __fastcall StageEntity__getStartBattleAssetId(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40FAE14 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_22177/*"startBattleAssetId"*/, method);
    byte_40FAE14 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_22177/*"startBattleAssetId"*/, 0, v2);
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
  struct System_Collections_Generic_Dictionary_string__object__o *v16; // x0
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0
  System_Collections_Generic_List_object__c *v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  System_Collections_Generic_List_BattleActionData_HealData__o *v22; // x20
  __int64 v23; // x9
  StageEntity___c_c *v24; // x0
  struct StageEntity___c_StaticFields *static_fields; // x8
  System_Converter_BattleActionData_HealData__int__o *_9__34_0; // x21
  Il2CppObject *v27; // x22
  struct StageEntity___c_StaticFields *v28; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_Collections_Generic_List_int__o *v35; // x0
  StageEntity_o *v36; // x0
  const MethodInfo *v37; // x3
  int32_t v38; // w1
  System_Int32_array *v39; // x2

  if ( (byte_40FAE10 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Converter_object__int___ctor__, *(_QWORD *)&limitTurn);
    sub_B16FFC(&System_Converter_object__int__TypeInfo, v5);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    sub_B16FFC(&int___TypeInfo, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_object__ConvertAll_int___, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v10);
    sub_B16FFC(&System_Collections_Generic_List_object__TypeInfo, v11);
    sub_B16FFC(&Method_StageEntity___c__getTurnEffect_b__34_0__, v12);
    sub_B16FFC(&StageEntity___c_TypeInfo, v13);
    sub_B16FFC(&StringLiteral_22723/*"turnEffect"*/, v14);
    byte_40FAE10 = 1;
  }
  script = this->fields.script;
  if ( script
    && System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
         (System_Xml_XmlQualifiedName_o *)StringLiteral_22723/*"turnEffect"*/,
         (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v16 = this->fields.script;
    if ( v16 )
    {
      Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
               (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v16,
               (System_Type_o *)StringLiteral_22723/*"turnEffect"*/,
               (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      v22 = (System_Collections_Generic_List_BattleActionData_HealData__o *)Item;
      if ( Item )
      {
        v18 = System_Collections_Generic_List_object__TypeInfo;
        v23 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) < (unsigned int)v23
          || (System_Collections_Generic_List_object__c *)Item->klass->_2.typeHierarchy[v23 - 1] != System_Collections_Generic_List_object__TypeInfo )
        {
          v36 = (StageEntity_o *)sub_B173C8(Item);
          return StageEntity__GetTurnEffect(v36, v38, v39, v37);
        }
      }
      v24 = StageEntity___c_TypeInfo;
      if ( (BYTE3(StageEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !StageEntity___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(StageEntity___c_TypeInfo);
        v24 = StageEntity___c_TypeInfo;
      }
      static_fields = v24->static_fields;
      _9__34_0 = (System_Converter_BattleActionData_HealData__int__o *)static_fields->__9__34_0;
      if ( !_9__34_0 )
      {
        if ( (BYTE3(v24->vtable._0_Equals.methodPtr) & 4) != 0 && !v24->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v24);
          static_fields = StageEntity___c_TypeInfo->static_fields;
        }
        v27 = (Il2CppObject *)static_fields->__9;
        _9__34_0 = (System_Converter_BattleActionData_HealData__int__o *)sub_B170CC(
                                                                           System_Converter_object__int__TypeInfo,
                                                                           v18,
                                                                           v19,
                                                                           v20,
                                                                           v21);
        System_Converter_BattleActionData_HealData__int____ctor(
          _9__34_0,
          v27,
          Method_StageEntity___c__getTurnEffect_b__34_0__,
          (const MethodInfo_266B524 *)Method_System_Converter_object__int___ctor__);
        v28 = StageEntity___c_TypeInfo->static_fields;
        v28->__9__34_0 = (struct System_Converter_object__int__o *)_9__34_0;
        sub_B16F98(
          (BattleServantConfConponent_o *)&v28->__9__34_0,
          (System_Int32_array **)_9__34_0,
          v29,
          v30,
          v31,
          v32,
          v33,
          v34);
      }
      if ( v22 )
      {
        v35 = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_BattleActionData_HealData___ConvertAll_int_(
                                                          v22,
                                                          (System_Converter_T__TOutput__o *)_9__34_0,
                                                          (const MethodInfo_18FDCCC *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
        if ( v35 )
        {
          v36 = (StageEntity_o *)System_Collections_Generic_List_int___ToArray(
                                   v35,
                                   (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
          v38 = limitTurn;
          v39 = (System_Int32_array *)v36;
          return StageEntity__GetTurnEffect(v36, v38, v39, v37);
        }
      }
    }
    sub_B170D4();
  }
  return (System_Int32_array *)sub_B17014(int___TypeInfo, 0LL, method);
}


int32_t __fastcall StageEntity__getTurnEffectType(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40FAE06 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_22724/*"turnEffectType"*/, method);
    byte_40FAE06 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_22724/*"turnEffectType"*/, 0, v2);
}


bool __fastcall StageEntity__getTurnElapsedEndBattleFlag(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40FAE07 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_22725/*"turnElapsedEndBattle"*/, method);
    byte_40FAE07 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_22725/*"turnElapsedEndBattle"*/, 0, v2) > 0;
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F7A5C & 1) == 0 )
  {
    sub_B16FFC(&StageEntity___c_TypeInfo, v1);
    byte_40F7A5C = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(StageEntity___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)StageEntity___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
  __int64 v3; // x3
  __int64 v4; // x4
  AiAllocationInfo_o *v6; // x20

  if ( (byte_40F7A60 & 1) == 0 )
  {
    sub_B16FFC(&AiAllocationInfo_TypeInfo, obj);
    byte_40F7A60 = 1;
  }
  v6 = (AiAllocationInfo_o *)sub_B170CC(AiAllocationInfo_TypeInfo, obj, method, v3, v4);
  AiAllocationInfo___ctor(v6, obj, 0LL);
  return v6;
}


System_String_o *__fastcall StageEntity___c___GetBattleStartVoiceIdArray_b__54_0(
        StageEntity___c_o *this,
        Il2CppObject *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
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

  if ( (byte_40F7A5F & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1/*""*/, x);
    byte_40F7A5F = 1;
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

  if ( (byte_40F7A5D & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1/*""*/, x);
    byte_40F7A5D = 1;
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

  if ( (byte_40F7A5E & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1/*""*/, x);
    byte_40F7A5E = 1;
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