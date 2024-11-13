void __fastcall StageEntity___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B16CF7 & 1) == 0 )
  {
    sub_1BCA7E0(&StageEntity_TypeInfo, v1, v2);
    byte_4B16CF7 = 1;
  }
  StageEntity_TypeInfo->static_fields->DEFAULT_ENEMY_ACTION_COUNT = 3;
}


void __fastcall StageEntity___ctor(StageEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16CB9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_string___ctor__, method, v2);
    byte_4B16CB9 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31B2CB8 *)Method_DataEntityBase_string___ctor__);
}


void __fastcall StageEntity___ctor_40710236(StageEntity_o *this, StageEntity_o *cSrc, const MethodInfo *method)
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

  if ( (byte_4B16CBA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_string___ctor__, cSrc, method);
    byte_4B16CBA = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31B2CB8 *)Method_DataEntityBase_string___ctor__);
  if ( !cSrc )
    sub_1BCAA3C(v5, v6);
  *(_QWORD *)&this->fields.questId = *(_QWORD *)&cSrc->fields.questId;
  name = cSrc->fields.name;
  this->fields.name = name;
  p_name = &this->fields.name;
  sub_1BCA784((PartyOrganizationUtility_o *)p_name, (int64_t)name, v7, v8, v9, v10, v11, v12);
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
  if ( (byte_4B16CB8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&questPhase, *(_QWORD *)&wave);
    byte_4B16CB8 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           questId,
           questPhase,
           wave,
           (const MethodInfo_2F11344 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall StageEntity__CreatePrimaryKey(StageEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  int32_t questPhase; // w20
  int32_t questId; // w21
  int32_t wave; // w19

  if ( (byte_4B16CB7 & 1) == 0 )
  {
    sub_1BCA7E0(&StageEntity_TypeInfo, method, v2);
    byte_4B16CB7 = 1;
  }
  questId = this->fields.questId;
  questPhase = this->fields.questPhase;
  wave = this->fields.wave;
  if ( !StageEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(StageEntity_TypeInfo, method);
  return StageEntity__CreatePK(questId, questPhase, wave, v3);
}


System_Int32_array *__fastcall StageEntity__GetAddUniqueCameraIds(
        StageEntity_o *this,
        System_Int32_array *defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4B16CF1 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_16845/*"addUniqueCameraIds"*/, defVal, method);
    byte_4B16CF1 = 1;
  }
  return StageEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_16845/*"addUniqueCameraIds"*/, defVal, v3);
}


System_Object_array *__fastcall StageEntity__GetAiActTypeAttackCommandCard(
        StageEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  System_Collections_Generic_Dictionary_object__object__o *script; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4B16CD7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_object__ToArray__, v4, v5);
    sub_1BCA7E0(&System_Collections_Generic_List_object__TypeInfo, v6, v7);
    sub_1BCA7E0(&StringLiteral_16882/*"aiActTypeAttackCommandCard"*/, v8, v9);
    byte_4B16CD7 = 1;
  }
  if ( !StageEntity__checkScript(this, (System_String_o *)StringLiteral_16882/*"aiActTypeAttackCommandCard"*/, v2) )
    return 0LL;
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script
    || (script = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                              script,
                                                                              (Il2CppObject *)StringLiteral_16882/*"aiActTypeAttackCommandCard"*/,
                                                                              (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL
    || (methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(script->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (System_Collections_Generic_List_object__c *)script->klass->_2.typeHierarchy[methodPtr_low - 1] != System_Collections_Generic_List_object__TypeInfo )
  {
    sub_1BCAA3C(script, v10);
  }
  return System_Collections_Generic_List_object___ToArray(
           (System_Collections_Generic_List_object__o *)script,
           (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_object__ToArray__);
}


int32_t __fastcall StageEntity__GetAiActTypeAttackCommandCardType(
        StageEntity_o *this,
        BattleServantData_o *enemyServantData,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  System_Object_array *AiActTypeAttackCommandCard; // x0
  __int64 v16; // x1
  __int64 v17; // x8
  System_Object_array *v18; // x20
  unsigned __int64 v19; // x23
  Il2CppObject **m_Items; // x24
  System_Collections_Generic_Dictionary_object__object__o *v21; // x21
  __int64 methodPtr_low; // x10
  struct BattleDeckServantData_o *deckSvt; // x8
  int32_t npcId; // w29
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x2
  __int64 v28; // x3
  StageEntity_o *v29; // x0
  const MethodInfo *v30; // x1

  if ( (byte_4B16CD8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, enemyServantData, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v5, v6);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v7, v8);
    sub_1BCA7E0(&long_TypeInfo, v9, v10);
    sub_1BCA7E0(&StringLiteral_22404/*"npcServantId"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_17944/*"cardType"*/, v13, v14);
    byte_4B16CD8 = 1;
  }
  AiActTypeAttackCommandCard = StageEntity__GetAiActTypeAttackCommandCard(this, (const MethodInfo *)enemyServantData);
  if ( AiActTypeAttackCommandCard )
  {
    v17 = *(_QWORD *)&AiActTypeAttackCommandCard->max_length;
    v18 = AiActTypeAttackCommandCard;
    if ( (int)v17 < 1 )
    {
LABEL_18:
      LODWORD(AiActTypeAttackCommandCard) = 0;
    }
    else
    {
      v19 = 0LL;
      m_Items = AiActTypeAttackCommandCard->m_Items;
      while ( 1 )
      {
        if ( v19 >= (unsigned int)v17 )
          sub_1BCAA44(AiActTypeAttackCommandCard, v16);
        v21 = (System_Collections_Generic_Dictionary_object__object__o *)m_Items[v19];
        if ( v21 )
        {
          methodPtr_low = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr);
          if ( LOBYTE(v21->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
            && (System_Collections_Generic_Dictionary_string__object__c *)v21->klass->_2.typeHierarchy[methodPtr_low - 1] == System_Collections_Generic_Dictionary_string__object__TypeInfo )
          {
            AiActTypeAttackCommandCard = (System_Object_array *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                                                  (System_Collections_Generic_Dictionary_object__object__o *)m_Items[v19],
                                                                  (Il2CppObject *)StringLiteral_22404/*"npcServantId"*/,
                                                                  (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
            if ( ((unsigned __int8)AiActTypeAttackCommandCard & 1) != 0 )
            {
              if ( !enemyServantData )
                goto LABEL_24;
              deckSvt = enemyServantData->fields.deckSvt;
              if ( !deckSvt )
                goto LABEL_24;
              npcId = deckSvt->fields.npcId;
              AiActTypeAttackCommandCard = (System_Object_array *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                    v21,
                                                                    (Il2CppObject *)StringLiteral_22404/*"npcServantId"*/,
                                                                    (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
              if ( !AiActTypeAttackCommandCard )
                goto LABEL_24;
              if ( AiActTypeAttackCommandCard->obj.klass->_1.element_class != long_TypeInfo->_1.element_class )
                goto LABEL_25;
              AiActTypeAttackCommandCard = (System_Object_array *)j_il2cpp_object_unbox_0(
                                                                    AiActTypeAttackCommandCard,
                                                                    long_TypeInfo,
                                                                    v25,
                                                                    v26);
              if ( npcId == LODWORD(AiActTypeAttackCommandCard->obj.klass) )
              {
                AiActTypeAttackCommandCard = (System_Object_array *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                                                      v21,
                                                                      (Il2CppObject *)StringLiteral_17944/*"cardType"*/,
                                                                      (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
                if ( ((unsigned __int8)AiActTypeAttackCommandCard & 1) != 0 )
                  break;
              }
            }
          }
        }
        LODWORD(v17) = v18->max_length;
        if ( (__int64)++v19 >= (int)v17 )
          goto LABEL_18;
      }
      AiActTypeAttackCommandCard = (System_Object_array *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                            v21,
                                                            (Il2CppObject *)StringLiteral_17944/*"cardType"*/,
                                                            (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !AiActTypeAttackCommandCard )
LABEL_24:
        sub_1BCAA3C(AiActTypeAttackCommandCard, v16);
      if ( AiActTypeAttackCommandCard->obj.klass->_1.element_class == long_TypeInfo->_1.element_class )
      {
        LODWORD(AiActTypeAttackCommandCard) = *(_DWORD *)j_il2cpp_object_unbox_0(
                                                           AiActTypeAttackCommandCard,
                                                           long_TypeInfo,
                                                           v27,
                                                           v28);
      }
      else
      {
LABEL_25:
        sub_1BCACFC(AiActTypeAttackCommandCard);
        LODWORD(AiActTypeAttackCommandCard) = StageEntity__IsDisableFieldMotion(v29, v30);
      }
    }
  }
  return (int)AiActTypeAttackCommandCard;
}


System_Collections_Generic_List_AiAllocationInfo__o *__fastcall StageEntity__GetAiAllocationInfoList(
        StageEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  Il2CppObject *Value_object; // x19
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  StageEntity___c_c *v21; // x0
  System_Func_object__object__o *_9__68_0; // x20
  Il2CppObject *v23; // x21
  struct StageEntity___c_StaticFields *static_fields; // x0
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x0

  if ( (byte_4B16CEA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_GetValue_List_object____, method, v2);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_object__AiAllocationInfo___, v4, v5);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToList_AiAllocationInfo___, v6, v7);
    sub_1BCA7E0(&System_Func_object__AiAllocationInfo__TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_StageEntity___c__GetAiAllocationInfoList_b__68_0__, v10, v11);
    sub_1BCA7E0(&StageEntity___c_TypeInfo, v12, v13);
    sub_1BCA7E0(&StringLiteral_16883/*"aiAllocations"*/, v14, v15);
    byte_4B16CEA = 1;
  }
  Value_object = BasicHelper__GetValue_object_(
                   this->fields.script,
                   (System_String_o *)StringLiteral_16883/*"aiAllocations"*/,
                   0LL,
                   (const MethodInfo_2F00C2C *)Method_BasicHelper_GetValue_List_object____);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)Value_object, 0LL) )
    return 0LL;
  v21 = StageEntity___c_TypeInfo;
  if ( !StageEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(StageEntity___c_TypeInfo, v17);
    v21 = StageEntity___c_TypeInfo;
  }
  _9__68_0 = (System_Func_object__object__o *)v21->static_fields->__9__68_0;
  if ( !_9__68_0 )
  {
    if ( !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21, v17);
      v21 = StageEntity___c_TypeInfo;
    }
    v23 = (Il2CppObject *)v21->static_fields->__9;
    _9__68_0 = (System_Func_object__object__o *)sub_1BCAA2C(
                                                  System_Func_object__AiAllocationInfo__TypeInfo,
                                                  v17,
                                                  v18,
                                                  v19);
    System_Func_object__object____ctor(_9__68_0, v23, Method_StageEntity___c__GetAiAllocationInfoList_b__68_0__, 0LL);
    static_fields = StageEntity___c_TypeInfo->static_fields;
    static_fields->__9__68_0 = (struct System_Func_object__AiAllocationInfo__o *)_9__68_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__68_0,
      (int64_t)_9__68_0,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
  }
  v31 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)Value_object,
                                                               (System_Func_TSource__TResult__o *)_9__68_0,
                                                               (const MethodInfo_2F43A70 *)Method_System_Linq_Enumerable_Select_object__AiAllocationInfo___);
  return (System_Collections_Generic_List_AiAllocationInfo__o *)System_Linq_Enumerable__ToList_object_(
                                                                  v31,
                                                                  (const MethodInfo_2F4F764 *)Method_System_Linq_Enumerable_ToList_AiAllocationInfo___);
}


System_Int32_array *__fastcall StageEntity__GetAssumedEffectId(StageEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16CEE & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_17114/*"assumedEffectId"*/, method, v2);
    byte_4B16CEE = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_17114/*"assumedEffectId"*/, 0LL);
}


System_String_array *__fastcall StageEntity__GetAssumedVoiceAssetNames(StageEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16CF2 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_17115/*"assumedVoiceAssetNames"*/, method, v2);
    byte_4B16CF2 = 1;
  }
  return EntityScriptUtil__GetStringArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_17115/*"assumedVoiceAssetNames"*/, 0LL);
}


System_String_array *__fastcall StageEntity__GetBattleStartVoiceIdArray(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  Il2CppObject *ScriptObject; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  System_Collections_Generic_List_object__o *v22; // x19
  __int64 methodPtr_low; // x10
  StageEntity___c_c *v25; // x0
  System_Converter_TInput__TOutput__o *_9__54_0; // x20
  Il2CppObject *v27; // x21
  struct StageEntity___c_StaticFields *static_fields; // x0
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  System_Collections_Generic_List_object__o *v35; // x0
  __int64 v36; // x1

  if ( (byte_4B16CDE & 1) == 0 )
  {
    sub_1BCA7E0(&System_Converter_object__string__TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_object__ConvertAll_string___, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__ToArray__, v6, v7);
    sub_1BCA7E0(&System_Collections_Generic_List_object__TypeInfo, v8, v9);
    sub_1BCA7E0(&string___TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_StageEntity___c__GetBattleStartVoiceIdArray_b__54_0__, v12, v13);
    sub_1BCA7E0(&StageEntity___c_TypeInfo, v14, v15);
    sub_1BCA7E0(&StringLiteral_17291/*"battleStartVoiceIds"*/, v16, v17);
    byte_4B16CDE = 1;
  }
  ScriptObject = StageEntity__GetScriptObject(this, (System_String_o *)StringLiteral_17291/*"battleStartVoiceIds"*/, v2);
  if ( !ScriptObject )
    return (System_String_array *)sub_1BCA888(string___TypeInfo, 0LL);
  v22 = (System_Collections_Generic_List_object__o *)ScriptObject;
  methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(ScriptObject->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
    || (System_Collections_Generic_List_object__c *)ScriptObject->klass->_2.typeHierarchy[methodPtr_low - 1] != System_Collections_Generic_List_object__TypeInfo )
  {
    return (System_String_array *)sub_1BCA888(string___TypeInfo, 0LL);
  }
  v25 = StageEntity___c_TypeInfo;
  if ( !StageEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(StageEntity___c_TypeInfo, v19);
    v25 = StageEntity___c_TypeInfo;
  }
  _9__54_0 = (System_Converter_TInput__TOutput__o *)v25->static_fields->__9__54_0;
  if ( !_9__54_0 )
  {
    if ( !v25->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v25, v19);
      v25 = StageEntity___c_TypeInfo;
    }
    v27 = (Il2CppObject *)v25->static_fields->__9;
    _9__54_0 = (System_Converter_TInput__TOutput__o *)sub_1BCAA2C(
                                                        System_Converter_object__string__TypeInfo,
                                                        v19,
                                                        v20,
                                                        v21);
    System_Converter_object__object____ctor(
      _9__54_0,
      v27,
      Method_StageEntity___c__GetBattleStartVoiceIdArray_b__54_0__,
      0LL);
    static_fields = StageEntity___c_TypeInfo->static_fields;
    static_fields->__9__54_0 = (struct System_Converter_object__string__o *)_9__54_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__54_0,
      (int64_t)_9__54_0,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34);
  }
  v35 = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___ConvertAll_object_(
                                                       v22,
                                                       (System_Converter_T__TOutput__o *)_9__54_0,
                                                       (const MethodInfo_2E42C60 *)Method_System_Collections_Generic_List_object__ConvertAll_string___);
  if ( !v35 )
    sub_1BCAA3C(0LL, v36);
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  v35,
                                  (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_string__ToArray__);
}


int32_t __fastcall StageEntity__GetBattleStartVoiceServantId(StageEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B16CDC & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_17292/*"battleStartVoiceSvtId"*/, method, v2);
    byte_4B16CDC = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_17292/*"battleStartVoiceSvtId"*/, 0, v3);
}


int32_t __fastcall StageEntity__GetBattleStartVoiceServantLimit(StageEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B16CDD & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_17293/*"battleStartVoiceSvtLimit"*/, method, v2);
    byte_4B16CDD = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_17293/*"battleStartVoiceSvtLimit"*/, -1, v3);
}


System_Int32_array *__fastcall StageEntity__GetBossIdAndChangeBgmId(StageEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  System_Int32_array *v6; // x2
  const MethodInfo *v7; // x3

  if ( (byte_4B16CD6 & 1) == 0 )
  {
    sub_1BCA7E0(&int___TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_17556/*"bossIdAndChangeBgmId"*/, v4, v5);
    byte_4B16CD6 = 1;
  }
  v6 = (System_Int32_array *)sub_1BCA888(int___TypeInfo, 0LL);
  return StageEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_17556/*"bossIdAndChangeBgmId"*/, v6, v7);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall StageEntity__GetCutInSvtIds(StageEntity_o *this, bool isEnemy, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  System_String_o **v8; // x8

  if ( (byte_4B16CD3 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_19211/*"enemyCutInSvtIds"*/, isEnemy, method);
    sub_1BCA7E0(&StringLiteral_22797/*"playerCutInSvtIds"*/, v6, v7);
    byte_4B16CD3 = 1;
  }
  if ( isEnemy )
    v8 = (System_String_o **)&StringLiteral_19211/*"enemyCutInSvtIds"*/;
  else
    v8 = (System_String_o **)&StringLiteral_22797/*"playerCutInSvtIds"*/;
  return StageEntity__getScriptIntArrayParam(this, *v8, 0LL, v3);
}


int32_t __fastcall StageEntity__GetEffectBgmId(StageEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B16CD4 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_19103/*"effectBgmId"*/, method, v2);
    byte_4B16CD4 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_19103/*"effectBgmId"*/, -1, v3);
}


int32_t __fastcall StageEntity__GetEffectSvtId(StageEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B16CD2 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_19115/*"effectSvtId"*/, method, v2);
    byte_4B16CD2 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_19115/*"effectSvtId"*/, 0, v3);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall StageEntity__GetEnemyAddOrderPosArray(
        StageEntity_o *this,
        int32_t enemyFieldPosCount,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  System_Int32_array *ScriptIntArrayParam; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x19
  StageEntity___c_c *v21; // x0
  System_Func_int__int__o *_9__64_0; // x20
  Il2CppObject *v23; // x21
  struct StageEntity___c_StaticFields *static_fields; // x0
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x0

  if ( (byte_4B16CE6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_int__int___, *(_QWORD *)&enemyFieldPosCount, method);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_int___, v6, v7);
    sub_1BCA7E0(&System_Func_int__int__TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_StageEntity___c__GetEnemyAddOrderPosArray_b__64_0__, v10, v11);
    sub_1BCA7E0(&StageEntity___c_TypeInfo, v12, v13);
    sub_1BCA7E0(&StringLiteral_19213/*"enemyEntryOrder"*/, v14, v15);
    byte_4B16CE6 = 1;
  }
  ScriptIntArrayParam = StageEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_19213/*"enemyEntryOrder"*/, 0LL, v3);
  if ( ScriptIntArrayParam )
  {
    v20 = (System_Collections_Generic_IEnumerable_TSource__o *)ScriptIntArrayParam;
    v21 = StageEntity___c_TypeInfo;
    if ( !StageEntity___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(StageEntity___c_TypeInfo, v17);
      v21 = StageEntity___c_TypeInfo;
    }
    _9__64_0 = v21->static_fields->__9__64_0;
    if ( !_9__64_0 )
    {
      if ( !v21->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v21, v17);
        v21 = StageEntity___c_TypeInfo;
      }
      v23 = (Il2CppObject *)v21->static_fields->__9;
      _9__64_0 = (System_Func_int__int__o *)sub_1BCAA2C(System_Func_int__int__TypeInfo, v17, v18, v19);
      System_Func_int__int____ctor(_9__64_0, v23, Method_StageEntity___c__GetEnemyAddOrderPosArray_b__64_0__, 0LL);
      static_fields = StageEntity___c_TypeInfo->static_fields;
      static_fields->__9__64_0 = _9__64_0;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__64_0,
        (int64_t)_9__64_0,
        v25,
        v26,
        v27,
        v28,
        v29,
        v30);
    }
    v31 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__int_(
                                                                 v20,
                                                                 (System_Func_TSource__TResult__o *)_9__64_0,
                                                                 (const MethodInfo_2F3ECB4 *)Method_System_Linq_Enumerable_Select_int__int___);
  }
  else
  {
    v31 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Range(0, enemyFieldPosCount, 0LL);
  }
  return System_Linq_Enumerable__ToArray_int_(
           v31,
           (const MethodInfo_2F4B870 *)Method_System_Linq_Enumerable_ToArray_int___);
}


int32_t __fastcall StageEntity__GetEnemyCountStartValue(StageEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B16CEB & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_19210/*"enemyCountStartValue"*/, method, v2);
    byte_4B16CEB = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_19210/*"enemyCountStartValue"*/, 0, v3);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall StageEntity__GetEnemyEntryMaxCountEachTurn(
        StageEntity_o *this,
        int32_t defaultValue,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4B16CE7 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_19212/*"enemyEntryMaxCountEachTurn"*/, *(_QWORD *)&defaultValue, method);
    byte_4B16CE7 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_19212/*"enemyEntryMaxCountEachTurn"*/, defaultValue, v3);
}


int32_t __fastcall StageEntity__GetEnemyFieldPosCount(StageEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B16CDF & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_19215/*"enemyFieldPosCount"*/, method, v2);
    byte_4B16CDF = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_19215/*"enemyFieldPosCount"*/, 3, v3);
}


System_Single_array *__fastcall StageEntity__GetEnemyMasterCommandSpellIconPosition(
        StageEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  long double inited; // q0
  __int64 v5; // x1
  __int64 v6; // x2
  _QWORD *v7; // x20
  System_Collections_Generic_Dictionary_string__object__o *script; // x19
  __int64 v9; // x8
  __int64 v10; // x0
  __int64 v11; // x0

  if ( (byte_4B16CF6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_Empty_float___, method, v2);
    sub_1BCA7E0(&StringLiteral_19218/*"enemyMasterCommandSpellIconPosition"*/, v5, v6);
    byte_4B16CF6 = 1;
  }
  v7 = Method_System_Array_Empty_float___;
  script = this->fields.script;
  v9 = *((_QWORD *)Method_System_Array_Empty_float___ + 7);
  if ( !v9 )
  {
    sub_1C1C718(Method_System_Array_Empty_float___, method);
    v9 = v7[7];
  }
  v10 = *(_QWORD *)(v9 + 16);
  if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
    v10 = sub_1C1C6BC(inited);
  if ( !*(_DWORD *)(v10 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v10, method);
  v11 = *(_QWORD *)(v7[7] + 16LL);
  if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
    v11 = sub_1C1C6BC(inited);
  return EntityScriptUtil__GetFloatArray(
           script,
           (System_String_o *)StringLiteral_19218/*"enemyMasterCommandSpellIconPosition"*/,
           **(System_Single_array ***)(v11 + 184),
           0LL);
}


System_Int32_array *__fastcall StageEntity__GetEnemyMasterCommandSpellIconSize(
        StageEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16CF5 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_19219/*"enemyMasterCommandSpellIconSize"*/, method, v2);
    byte_4B16CF5 = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_19219/*"enemyMasterCommandSpellIconSize"*/, 0LL);
}


int32_t __fastcall StageEntity__GetFadeType(StageEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B16CD1 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_17289/*"battleStartFadeType"*/, method, v2);
    byte_4B16CD1 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_17289/*"battleStartFadeType"*/, 0, v3);
}


System_Int32_array *__fastcall StageEntity__GetFieldCallServantId(StageEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Int32_array *result; // x0

  if ( (byte_4B16CDA & 1) == 0 )
  {
    sub_1BCA7E0(&int___TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_17880/*"call"*/, v5, v6);
    byte_4B16CDA = 1;
  }
  result = StageEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_17880/*"call"*/, 0LL, v3);
  if ( !result )
    return (System_Int32_array *)sub_1BCA888(int___TypeInfo, 0LL);
  return result;
}


System_Int32_array *__fastcall StageEntity__GetFieldPosSkillId(StageEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  System_Int32_array *v6; // x2
  const MethodInfo *v7; // x3

  if ( (byte_4B16CE8 & 1) == 0 )
  {
    sub_1BCA7E0(&int___TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_19609/*"fieldPosSkillId"*/, v4, v5);
    byte_4B16CE8 = 1;
  }
  v6 = (System_Int32_array *)sub_1BCA888(int___TypeInfo, 0LL);
  return StageEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_19609/*"fieldPosSkillId"*/, v6, v7);
}


System_Int32_array *__fastcall StageEntity__GetFieldPosSkillLv(StageEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  System_Int32_array *v6; // x2
  const MethodInfo *v7; // x3

  if ( (byte_4B16CE9 & 1) == 0 )
  {
    sub_1BCA7E0(&int___TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_19610/*"fieldPosSkillLv"*/, v4, v5);
    byte_4B16CE9 = 1;
  }
  v6 = (System_Int32_array *)sub_1BCA888(int___TypeInfo, 0LL);
  return StageEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_19610/*"fieldPosSkillLv"*/, v6, v7);
}


System_Int32_array *__fastcall StageEntity__GetMultiEffectIds(StageEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B16CD0 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_22204/*"multiEffectIds"*/, method, v2);
    byte_4B16CD0 = 1;
  }
  return StageEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_22204/*"multiEffectIds"*/, 0LL, v3);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall StageEntity__GetPriorityBG(StageEntity_o *this, int32_t def, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4B16CEC & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_22845/*"priorityBG"*/, *(_QWORD *)&def, method);
    byte_4B16CEC = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_22845/*"priorityBG"*/, def, v3);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall StageEntity__GetPriorityBgm(StageEntity_o *this, int32_t def, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  const MethodInfo *v10; // x3
  Il2CppObject *Master_object; // x0
  __int64 v13; // x1

  if ( (byte_4B16CED & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_BgmMaster___, *(_QWORD *)&def, method);
    sub_1BCA7E0(&DataManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&StringLiteral_22846/*"priorityBgm"*/, v7, v8);
    byte_4B16CED = 1;
  }
  if ( StageEntity__checkScript(this, (System_String_o *)StringLiteral_22846/*"priorityBgm"*/, method) )
    return StageEntity__getScript(this, (System_String_o *)StringLiteral_22846/*"priorityBgm"*/, def, v10);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v9);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_BgmMaster___);
  if ( !Master_object )
    sub_1BCAA3C(0LL, v13);
  return BgmMaster__GetBgmPriority((BgmMaster_o *)Master_object, this->fields.bgmId, def, 0LL);
}


int32_t __fastcall StageEntity__GetProhibitBgmChangeInTreasureDeviceAnim(StageEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B16CF3 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_22867/*"prohibitBgmChangeInTreasureDeviceAnim"*/, method, v2);
    byte_4B16CF3 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_22867/*"prohibitBgmChangeInTreasureDeviceAnim"*/, 0, v3);
}


Il2CppObject *__fastcall StageEntity__GetScriptObject(
        StageEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B16CDB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, key, method);
    byte_4B16CDB = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( !script )
    sub_1BCAA3C(0LL, key);
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)script,
         (Il2CppObject *)key,
         &value,
         (const MethodInfo_3266A6C *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B16CD5 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_23735/*"startBgmOff"*/, method, v2);
    byte_4B16CD5 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_23735/*"startBgmOff"*/, 0, v3);
}


SubBgmPlayArgs_array *__fastcall StageEntity__GetSubBgmPlayArgsArray(StageEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  StageEntity___c_c *v13; // x0
  System_Func_object__object__o *_9__61_0; // x20
  Il2CppObject *v15; // x21
  struct StageEntity___c_StaticFields *static_fields; // x0
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7

  if ( (byte_4B16CE3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_EntityScriptUtil_GetScriptValue_List_object___SubBgmPlayArgs_____, method, v2);
    sub_1BCA7E0(&System_Func_List_object___SubBgmPlayArgs____TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_StageEntity___c__GetSubBgmPlayArgsArray_b__61_0__, v7, v8);
    sub_1BCA7E0(&StageEntity___c_TypeInfo, v9, v10);
    sub_1BCA7E0(&StringLiteral_23851/*"subBgms"*/, v11, v12);
    byte_4B16CE3 = 1;
  }
  v13 = StageEntity___c_TypeInfo;
  if ( !StageEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(StageEntity___c_TypeInfo, method);
    v13 = StageEntity___c_TypeInfo;
  }
  _9__61_0 = (System_Func_object__object__o *)v13->static_fields->__9__61_0;
  if ( !_9__61_0 )
  {
    if ( !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13, method);
      v13 = StageEntity___c_TypeInfo;
    }
    v15 = (Il2CppObject *)v13->static_fields->__9;
    _9__61_0 = (System_Func_object__object__o *)sub_1BCAA2C(
                                                  System_Func_List_object___SubBgmPlayArgs____TypeInfo,
                                                  method,
                                                  v2,
                                                  v3);
    System_Func_object__object____ctor(_9__61_0, v15, Method_StageEntity___c__GetSubBgmPlayArgsArray_b__61_0__, 0LL);
    static_fields = StageEntity___c_TypeInfo->static_fields;
    static_fields->__9__61_0 = (struct System_Func_List_object___SubBgmPlayArgs____o *)_9__61_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__61_0,
      (int64_t)_9__61_0,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
  }
  return (SubBgmPlayArgs_array *)EntityScriptUtil__GetScriptValue_object__object_(
                                   this->fields.script,
                                   (System_String_o *)StringLiteral_23851/*"subBgms"*/,
                                   (System_Func_TSource__TDestination__o *)_9__61_0,
                                   0LL,
                                   (const MethodInfo_2F19B3C *)Method_EntityScriptUtil_GetScriptValue_List_object___SubBgmPlayArgs_____);
}


int32_t __fastcall StageEntity__GetSubBgmsPriority(StageEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B16CE4 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_23852/*"subBgmsPriority"*/, method, v2);
    byte_4B16CE4 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_23852/*"subBgmsPriority"*/, 0, v3);
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

  if ( (byte_4B16CCB & 1) == 0 )
  {
    sub_1BCA7E0(&int___TypeInfo, *(_QWORD *)&limitTurn, turnlist);
    byte_4B16CCB = 1;
  }
  result = (System_Int32_array *)sub_1BCA888(int___TypeInfo, (unsigned int)limitTurn);
  if ( !result )
LABEL_15:
    sub_1BCAA3C(result, v7);
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
        sub_1BCAA44(result, v7);
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

  if ( (byte_4B16CF0 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_19607/*"fieldMotionIds"*/, defVal, method);
    byte_4B16CF0 = 1;
  }
  return StageEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_19607/*"fieldMotionIds"*/, defVal, v3);
}


bool __fastcall StageEntity__Is3_6BossBattle(StageEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B16CE0 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1472/*"3.6BossBattle"*/, method, v2);
    byte_4B16CE0 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_1472/*"3.6BossBattle"*/, 0, v3) > 0;
}


bool __fastcall StageEntity__IsDisableFieldMotion(StageEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B16CD9 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_18828/*"disableUniqueFieldMotion"*/, method, v2);
    byte_4B16CD9 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_18828/*"disableUniqueFieldMotion"*/, 0, v3) > 0;
}


bool __fastcall StageEntity__IsForceSetNormalEnemyStatusUI(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4B16CE5 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_6902/*"ForceSetNormalEnemyStatusUI"*/, method, v2);
    byte_4B16CE5 = 1;
  }
  return StageEntity__checkScript(this, (System_String_o *)StringLiteral_6902/*"ForceSetNormalEnemyStatusUI"*/, v2);
}


bool __fastcall StageEntity__IsReleaseUnusedAssetsWhenEntryMember(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4B16CE2 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_23096/*"releaseUnusedAssetsWhenEntryMember"*/, method, v2);
    byte_4B16CE2 = 1;
  }
  return StageEntity__checkScript(this, (System_String_o *)StringLiteral_23096/*"releaseUnusedAssetsWhenEntryMember"*/, v2);
}


bool __fastcall StageEntity__IsShowEnemyMasterIconOnWaveStart(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4B16CF4 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_23560/*"showEnemyMasterIconOnWaveStart"*/, method, v2);
    byte_4B16CF4 = 1;
  }
  return StageEntity__checkScript(this, (System_String_o *)StringLiteral_23560/*"showEnemyMasterIconOnWaveStart"*/, v2);
}


bool __fastcall StageEntity__IsSkipWaveStartFadeInSe(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4B16CEF & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_23606/*"skipWaveStartFadeInSe"*/, method, v2);
    byte_4B16CEF = 1;
  }
  return StageEntity__checkScript(this, (System_String_o *)StringLiteral_23606/*"skipWaveStartFadeInSe"*/, v2);
}


bool __fastcall StageEntity__IsSpecifiedBattleStartVoice(StageEntity_o *this, const MethodInfo *method)
{
  int32_t BattleStartVoiceServantId; // w20
  const MethodInfo *v4; // x1

  BattleStartVoiceServantId = StageEntity__GetBattleStartVoiceServantId(this, method);
  return (BattleStartVoiceServantId > 0) & (StageEntity__GetBattleStartVoiceServantLimit(this, v4) >= 0);
}


bool __fastcall StageEntity__IsSpecifiedBattleStartVoice_40716348(
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

  if ( (byte_4B16CC4 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_19792/*"fov"*/, method, v2);
    byte_4B16CC4 = 1;
  }
  return StageEntity__checkScript(this, (System_String_o *)StringLiteral_19792/*"fov"*/, v2);
}


bool __fastcall StageEntity__checkScript(StageEntity_o *this, System_String_o *key, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_4B16CBB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key, method);
    byte_4B16CBB = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                       (System_Collections_Generic_Dictionary_object__object__o *)script,
                       (Il2CppObject *)key,
                       (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)script;
}


bool __fastcall StageEntity__disableSystemFadeStartBattle(StageEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B16CCF & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_18826/*"disableSystemFadeStartBattle"*/, method, v2);
    byte_4B16CCF = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_18826/*"disableSystemFadeStartBattle"*/, 0, v3) > 0;
}


int32_t __fastcall StageEntity__getBattleMasterImageId(StageEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B16CE1 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_17287/*"battleMasterImageId"*/, method, v2);
    byte_4B16CE1 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_17287/*"battleMasterImageId"*/, 0, v3);
}


int32_t __fastcall StageEntity__getChangeBgId(StageEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B16CC7 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_17988/*"changeBgId"*/, method, v2);
    byte_4B16CC7 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_17988/*"changeBgId"*/, 0, v3);
}


int32_t __fastcall StageEntity__getChangeBgType(StageEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B16CC8 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_17989/*"changeBgType"*/, method, v2);
    byte_4B16CC8 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_17989/*"changeBgType"*/, 0, v3);
}


float __fastcall StageEntity__getCustomFOV(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4B16CC3 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_19792/*"fov"*/, method, v2);
    byte_4B16CC3 = 1;
  }
  return StageEntity__getScriptFloat(this, (System_String_o *)StringLiteral_19792/*"fov"*/, 0.0, v2);
}


int32_t __fastcall StageEntity__getEnemyActCount(StageEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  int32_t result; // w0
  __int64 v8; // x1
  StageEntity_c *v9; // x0

  if ( (byte_4B16CCD & 1) == 0 )
  {
    sub_1BCA7E0(&StageEntity_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_6121/*"EnemyActCount"*/, v5, v6);
    byte_4B16CCD = 1;
  }
  result = StageEntity__getScript(this, (System_String_o *)StringLiteral_6121/*"EnemyActCount"*/, 0, v3);
  if ( result <= 0 )
  {
    v9 = StageEntity_TypeInfo;
    if ( !StageEntity_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(StageEntity_TypeInfo, v8);
      v9 = StageEntity_TypeInfo;
    }
    return v9->static_fields->DEFAULT_ENEMY_ACTION_COUNT;
  }
  return result;
}


int32_t __fastcall StageEntity__getEnemyMasterBattleId(StageEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Int32_array *ScriptIntArrayParam; // x0
  const MethodInfo *v8; // x3
  System_Int32_array *v9; // x20
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v11; // x1

  if ( (byte_4B16CC6 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_19216/*"enemyMasterBattleId"*/, method, v2);
    sub_1BCA7E0(&StringLiteral_19217/*"enemyMasterBattleIdByPlayerGender"*/, v5, v6);
    byte_4B16CC6 = 1;
  }
  ScriptIntArrayParam = StageEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_19217/*"enemyMasterBattleIdByPlayerGender"*/, 0LL, v3);
  if ( !ScriptIntArrayParam )
    return StageEntity__getScript(this, (System_String_o *)StringLiteral_19216/*"enemyMasterBattleId"*/, 0, v8);
  v9 = ScriptIntArrayParam;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_13;
  if ( SelfUserGame->fields.genderType == 1 )
  {
    if ( v9->max_length )
      return v9->m_Items[1];
LABEL_14:
    sub_1BCAA44(SelfUserGame, v11);
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
LABEL_13:
    sub_1BCAA3C(SelfUserGame, v11);
  if ( SelfUserGame->fields.genderType != 2 )
    return StageEntity__getScript(this, (System_String_o *)StringLiteral_19216/*"enemyMasterBattleId"*/, 0, v8);
  if ( v9->max_length <= 1 )
    goto LABEL_14;
  return v9->m_Items[2];
}


System_Object_array *__fastcall StageEntity__getFieldAis(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  System_Collections_Generic_Dictionary_object__object__o *script; // x0
  __int64 methodPtr_low; // x9
  StageEntity_o *v14; // x0
  int32_t v15; // w1
  const MethodInfo *v16; // x2

  if ( (byte_4B16CC9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_object__ToArray__, v4, v5);
    sub_1BCA7E0(&System_Collections_Generic_List_object__TypeInfo, v6, v7);
    sub_1BCA7E0(&StringLiteral_16884/*"aiFieldIds"*/, v8, v9);
    byte_4B16CC9 = 1;
  }
  if ( !StageEntity__checkScript(this, (System_String_o *)StringLiteral_16884/*"aiFieldIds"*/, v2) )
    return 0LL;
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script
    || (script = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                              script,
                                                                              (Il2CppObject *)StringLiteral_16884/*"aiFieldIds"*/,
                                                                              (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_1BCAA3C(script, v10);
  }
  methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(script->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
    && (System_Collections_Generic_List_object__c *)script->klass->_2.typeHierarchy[methodPtr_low - 1] == System_Collections_Generic_List_object__TypeInfo )
  {
    return System_Collections_Generic_List_object___ToArray(
             (System_Collections_Generic_List_object__o *)script,
             (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_object__ToArray__);
  }
  sub_1BCACFC(script);
  return (System_Object_array *)StageEntity__getTurnEffect(v14, v15, v16);
}


int32_t __fastcall StageEntity__getLimitAct(StageEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B16CC2 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_8527/*"LimitAct"*/, method, v2);
    byte_4B16CC2 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_8527/*"LimitAct"*/, 0, v3);
}


int32_t __fastcall StageEntity__getLimitTurn(StageEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B16CBF & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_24339/*"turn"*/, method, v2);
    byte_4B16CBF = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_24339/*"turn"*/, 0, v3);
}


System_Int32_array *__fastcall StageEntity__getNoEntryIds(StageEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  Il2CppObject *v23; // x20
  System_Collections_Generic_List_object__c *v24; // x1
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  __int64 v26; // x2
  __int64 v27; // x3
  System_Collections_Generic_List_object__o *v28; // x19
  StageEntity___c_c *v29; // x8
  System_Converter_object__int__o *_9__36_0; // x20
  __int64 methodPtr_low; // x10
  Il2CppObject *v32; // x21
  struct StageEntity___c_StaticFields *static_fields; // x0
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  StageEntity_o *v41; // x0
  const MethodInfo *v42; // x1

  if ( (byte_4B16CCC & 1) == 0 )
  {
    sub_1BCA7E0(&System_Converter_object__int__TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v6, v7);
    sub_1BCA7E0(&int___TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_object__ConvertAll_int___, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v12, v13);
    sub_1BCA7E0(&System_Collections_Generic_List_object__TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_StageEntity___c__getNoEntryIds_b__36_0__, v16, v17);
    sub_1BCA7E0(&StageEntity___c_TypeInfo, v18, v19);
    sub_1BCA7E0(&StringLiteral_9625/*"NoEntryIds"*/, v20, v21);
    byte_4B16CCC = 1;
  }
  script = this->fields.script;
  if ( !script )
    return (System_Int32_array *)sub_1BCA888(int___TypeInfo, 0LL);
  v23 = (Il2CppObject *)StringLiteral_9625/*"NoEntryIds"*/;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)StringLiteral_9625/*"NoEntryIds"*/,
          (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return (System_Int32_array *)sub_1BCA888(int___TypeInfo, 0LL);
  Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !Item )
    goto LABEL_19;
  Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                      Item,
                                                                      v23,
                                                                      (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v28 = (System_Collections_Generic_List_object__o *)Item;
  v29 = StageEntity___c_TypeInfo;
  if ( !StageEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(StageEntity___c_TypeInfo, v24);
    v29 = StageEntity___c_TypeInfo;
  }
  _9__36_0 = v29->static_fields->__9__36_0;
  if ( !v28
    || (v24 = System_Collections_Generic_List_object__TypeInfo,
        methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(v28->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low)
    && (System_Collections_Generic_List_object__c *)v28->klass->_2.typeHierarchy[methodPtr_low - 1] == System_Collections_Generic_List_object__TypeInfo )
  {
    if ( !_9__36_0 )
    {
      if ( !v29->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v29, v24);
        v29 = StageEntity___c_TypeInfo;
      }
      v32 = (Il2CppObject *)v29->static_fields->__9;
      _9__36_0 = (System_Converter_object__int__o *)sub_1BCAA2C(System_Converter_object__int__TypeInfo, v24, v26, v27);
      System_Converter_object__int____ctor(_9__36_0, v32, Method_StageEntity___c__getNoEntryIds_b__36_0__, 0LL);
      static_fields = StageEntity___c_TypeInfo->static_fields;
      static_fields->__9__36_0 = _9__36_0;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__36_0,
        (int64_t)_9__36_0,
        v34,
        v35,
        v36,
        v37,
        v38,
        v39);
    }
    if ( v28 )
    {
      Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_List_object___ConvertAll_int_(
                                                                          v28,
                                                                          (System_Converter_T__TOutput__o *)_9__36_0,
                                                                          (const MethodInfo_2E42B5C *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
      if ( Item )
        return System_Collections_Generic_List_int___ToArray(
                 (System_Collections_Generic_List_int__o *)Item,
                 (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
    }
LABEL_19:
    sub_1BCAA3C(Item, v24);
  }
  sub_1BCACFC(v28);
  return (System_Int32_array *)StageEntity__getEnemyActCount(v41, v42);
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
  __int64 v8; // x2
  __int64 v9; // x1
  System_Collections_Generic_Dictionary_object__object__o *script; // x0
  __int64 v11; // x2
  __int64 v12; // x3
  int32_t result; // w0
  StageEntity_o *v14; // x0
  System_String_o *v15; // x1
  const MethodInfo *v16; // x2
  long double v17; // q0

  v4 = defVal;
  if ( (byte_4B16CBC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, key, *(_QWORD *)&defVal);
    sub_1BCA7E0(&long_TypeInfo, v7, v8);
    byte_4B16CBC = 1;
  }
  if ( !StageEntity__checkScript(this, key, *(const MethodInfo **)&defVal) )
    return v4;
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script
    || (script = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                              script,
                                                                              (Il2CppObject *)key,
                                                                              (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_1BCAA3C(script, v9);
  }
  if ( script->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(script, long_TypeInfo, v11, v12);
  v17 = sub_1BCACFC(script);
  StageEntity__getScriptFloat(v14, v15, *(float *)&v17, v16);
  return result;
}


float __fastcall StageEntity__getScriptFloat(
        StageEntity_o *this,
        System_String_o *key,
        float defVal,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  System_Collections_Generic_Dictionary_object__object__o *script; // x0
  __int64 v11; // x2
  __int64 v12; // x3
  float result; // s0
  StageEntity_o *v14; // x0
  System_String_o *v15; // x1
  System_Int32_array *v16; // x2
  const MethodInfo *v17; // x3

  if ( (byte_4B16CBD & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, key, method);
    sub_1BCA7E0(&double_TypeInfo, v7, v8);
    byte_4B16CBD = 1;
  }
  if ( !StageEntity__checkScript(this, key, method) )
    return defVal;
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script
    || (script = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                              script,
                                                                              (Il2CppObject *)key,
                                                                              (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_1BCAA3C(script, v9);
  }
  if ( script->klass->_1.element_class == double_TypeInfo->_1.element_class )
    return *(double *)j_il2cpp_object_unbox_0(script, double_TypeInfo, v11, v12);
  sub_1BCACFC(script);
  StageEntity__getScriptIntArrayParam(v14, v15, v16, v17);
  return result;
}


System_Int32_array *__fastcall StageEntity__getScriptIntArrayParam(
        StageEntity_o *this,
        System_String_o *key,
        System_Int32_array *defVal,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  System_Collections_Generic_List_object__c *v19; // x1
  System_Collections_Generic_Dictionary_object__object__o *script; // x0
  __int64 v21; // x2
  __int64 v22; // x3
  System_Collections_Generic_List_object__o *v23; // x19
  StageEntity___c_c *v24; // x8
  System_Converter_object__int__o *_9__22_0; // x20
  __int64 methodPtr_low; // x10
  Il2CppObject *v27; // x21
  struct StageEntity___c_StaticFields *static_fields; // x0
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  StageEntity_o *v36; // x0
  const MethodInfo *v37; // x1

  if ( (byte_4B16CBE & 1) == 0 )
  {
    sub_1BCA7E0(&System_Converter_object__int__TypeInfo, key, defVal);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_object__ConvertAll_int___, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_List_object__TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_StageEntity___c__getScriptIntArrayParam_b__22_0__, v15, v16);
    sub_1BCA7E0(&StageEntity___c_TypeInfo, v17, v18);
    byte_4B16CBE = 1;
  }
  if ( !StageEntity__checkScript(this, key, (const MethodInfo *)defVal) )
    return defVal;
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !script )
    goto LABEL_18;
  script = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                        script,
                                                                        (Il2CppObject *)key,
                                                                        (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v23 = (System_Collections_Generic_List_object__o *)script;
  v24 = StageEntity___c_TypeInfo;
  if ( !StageEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(StageEntity___c_TypeInfo, v19);
    v24 = StageEntity___c_TypeInfo;
  }
  _9__22_0 = v24->static_fields->__9__22_0;
  if ( !v23
    || (v19 = System_Collections_Generic_List_object__TypeInfo,
        methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(v23->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low)
    && (System_Collections_Generic_List_object__c *)v23->klass->_2.typeHierarchy[methodPtr_low - 1] == System_Collections_Generic_List_object__TypeInfo )
  {
    if ( !_9__22_0 )
    {
      if ( !v24->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v24, v19);
        v24 = StageEntity___c_TypeInfo;
      }
      v27 = (Il2CppObject *)v24->static_fields->__9;
      _9__22_0 = (System_Converter_object__int__o *)sub_1BCAA2C(System_Converter_object__int__TypeInfo, v19, v21, v22);
      System_Converter_object__int____ctor(_9__22_0, v27, Method_StageEntity___c__getScriptIntArrayParam_b__22_0__, 0LL);
      static_fields = StageEntity___c_TypeInfo->static_fields;
      static_fields->__9__22_0 = _9__22_0;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__22_0,
        (int64_t)_9__22_0,
        v29,
        v30,
        v31,
        v32,
        v33,
        v34);
    }
    if ( v23 )
    {
      script = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_List_object___ConvertAll_int_(
                                                                            v23,
                                                                            (System_Converter_T__TOutput__o *)_9__22_0,
                                                                            (const MethodInfo_2E42B5C *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
      if ( script )
        return System_Collections_Generic_List_int___ToArray(
                 (System_Collections_Generic_List_int__o *)script,
                 (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
    }
LABEL_18:
    sub_1BCAA3C(script, v19);
  }
  sub_1BCACFC(v23);
  return (System_Int32_array *)StageEntity__getLimitTurn(v36, v37);
}


int32_t __fastcall StageEntity__getShowTurnState(StageEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B16CC5 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_23562/*"showTurn"*/, method, v2);
    byte_4B16CC5 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_23562/*"showTurn"*/, 2, v3);
}


int32_t __fastcall StageEntity__getStartBattleAssetId(StageEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B16CCE & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_23733/*"startBattleAssetId"*/, method, v2);
    byte_4B16CCE = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_23733/*"startBattleAssetId"*/, 0, v3);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall StageEntity__getTurnEffect(
        StageEntity_o *this,
        int32_t limitTurn,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  System_Collections_Generic_List_object__c *v24; // x1
  void *v25; // x0
  Il2CppObject *Item; // x0
  __int64 v27; // x2
  __int64 v28; // x3
  System_Collections_Generic_List_object__o *v29; // x20
  __int64 methodPtr_low; // x9
  System_Converter_object__int__o *v31; // x21
  Il2CppObject *v32; // x22
  struct StageEntity___c_StaticFields *static_fields; // x0
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  StageEntity_o *v40; // x0
  const MethodInfo *v41; // x3
  int32_t v42; // w1
  System_Int32_array *v43; // x2

  if ( (byte_4B16CCA & 1) == 0 )
  {
    sub_1BCA7E0(&System_Converter_object__int__TypeInfo, *(_QWORD *)&limitTurn, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7, v8);
    sub_1BCA7E0(&int___TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_object__ConvertAll_int___, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v13, v14);
    sub_1BCA7E0(&System_Collections_Generic_List_object__TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_StageEntity___c__getTurnEffect_b__34_0__, v17, v18);
    sub_1BCA7E0(&StageEntity___c_TypeInfo, v19, v20);
    sub_1BCA7E0(&StringLiteral_24340/*"turnEffect"*/, v21, v22);
    byte_4B16CCA = 1;
  }
  script = this->fields.script;
  if ( script
    && System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)script,
         (Il2CppObject *)StringLiteral_24340/*"turnEffect"*/,
         (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v25 = this->fields.script;
    if ( v25 )
    {
      Item = System_Collections_Generic_Dictionary_object__object___get_Item(
               (System_Collections_Generic_Dictionary_object__object__o *)v25,
               (Il2CppObject *)StringLiteral_24340/*"turnEffect"*/,
               (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      v29 = (System_Collections_Generic_List_object__o *)Item;
      if ( Item )
      {
        v24 = System_Collections_Generic_List_object__TypeInfo;
        methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(Item->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
          || (System_Collections_Generic_List_object__c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] != System_Collections_Generic_List_object__TypeInfo )
        {
          sub_1BCACFC(Item);
          return StageEntity__GetTurnEffect(v40, v42, v43, v41);
        }
      }
      v25 = StageEntity___c_TypeInfo;
      if ( !StageEntity___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(StageEntity___c_TypeInfo, v24);
        v25 = StageEntity___c_TypeInfo;
      }
      v31 = *(System_Converter_object__int__o **)(*((_QWORD *)v25 + 23) + 16LL);
      if ( !v31 )
      {
        if ( !*((_DWORD *)v25 + 56) )
        {
          j_il2cpp_runtime_class_init_0(v25, v24);
          v25 = StageEntity___c_TypeInfo;
        }
        v32 = (Il2CppObject *)**((_QWORD **)v25 + 23);
        v31 = (System_Converter_object__int__o *)sub_1BCAA2C(System_Converter_object__int__TypeInfo, v24, v27, v28);
        System_Converter_object__int____ctor(v31, v32, Method_StageEntity___c__getTurnEffect_b__34_0__, 0LL);
        static_fields = StageEntity___c_TypeInfo->static_fields;
        static_fields->__9__34_0 = v31;
        sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__34_0, (int64_t)v31, v34, v35, v36, v37, v38, v39);
      }
      if ( v29 )
      {
        v25 = System_Collections_Generic_List_object___ConvertAll_int_(
                v29,
                (System_Converter_T__TOutput__o *)v31,
                (const MethodInfo_2E42B5C *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
        if ( v25 )
        {
          v40 = (StageEntity_o *)System_Collections_Generic_List_int___ToArray(
                                   (System_Collections_Generic_List_int__o *)v25,
                                   (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
          v42 = limitTurn;
          v43 = (System_Int32_array *)v40;
          return StageEntity__GetTurnEffect(v40, v42, v43, v41);
        }
      }
    }
    sub_1BCAA3C(v25, v24);
  }
  return (System_Int32_array *)sub_1BCA888(int___TypeInfo, 0LL);
}


int32_t __fastcall StageEntity__getTurnEffectType(StageEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B16CC0 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_24341/*"turnEffectType"*/, method, v2);
    byte_4B16CC0 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_24341/*"turnEffectType"*/, 0, v3);
}


bool __fastcall StageEntity__getTurnElapsedEndBattleFlag(StageEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B16CC1 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_24342/*"turnElapsedEndBattle"*/, method, v2);
    byte_4B16CC1 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_24342/*"turnElapsedEndBattle"*/, 0, v3) > 0;
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
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B16CF8 & 1) == 0 )
  {
    sub_1BCA7E0(&StageEntity___c_TypeInfo, v1, v2);
    byte_4B16CF8 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(StageEntity___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  StageEntity___c_TypeInfo->static_fields->__9 = (struct StageEntity___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)StageEntity___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
  AiAllocationInfo_o *v5; // x20

  if ( (byte_4B16CFC & 1) == 0 )
  {
    sub_1BCA7E0(&AiAllocationInfo_TypeInfo, obj, method);
    byte_4B16CFC = 1;
  }
  v5 = (AiAllocationInfo_o *)sub_1BCAA2C(AiAllocationInfo_TypeInfo, obj, method, v3);
  AiAllocationInfo___ctor(v5, obj, 0LL);
  return v5;
}


System_String_o *__fastcall StageEntity___c___GetBattleStartVoiceIdArray_b__54_0(
        StageEntity___c_o *this,
        Il2CppObject *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
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

  if ( (byte_4B16CFB & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, x, method);
    byte_4B16CFB = 1;
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

  if ( (byte_4B16CF9 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, x, method);
    byte_4B16CF9 = 1;
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

  if ( (byte_4B16CFA & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, x, method);
    byte_4B16CFA = 1;
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