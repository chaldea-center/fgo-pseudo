void __fastcall StageEntity___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E92CE & 1) == 0 )
  {
    sub_B5D5C4(&StageEntity_TypeInfo, v1, v2, v3);
    byte_42E92CE = 1;
  }
  StageEntity_TypeInfo->static_fields->DEFAULT_ENEMY_ACTION_COUNT = 3;
}


void __fastcall StageEntity___ctor(StageEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E9294 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_string___ctor__, (_DWORD)method, v2, v3);
    byte_42E9294 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23FAD5C *)Method_DataEntityBase_string___ctor__);
}


void __fastcall StageEntity___ctor_26205572(StageEntity_o *this, StageEntity_o *cSrc, const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  struct System_String_o *name; // x1

  if ( (byte_42E9295 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_string___ctor__, (_DWORD)cSrc, (_DWORD)method, v3);
    byte_42E9295 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23FAD5C *)Method_DataEntityBase_string___ctor__);
  if ( !cSrc )
    sub_B5D69C(v6, v7);
  this->fields.questId = cSrc->fields.questId;
  this->fields.questPhase = cSrc->fields.questPhase;
  name = cSrc->fields.name;
  this->fields.name = name;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.name,
    (System_Int32_array **)name,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  this->fields.wave = cSrc->fields.wave;
  this->fields.npcDeckId = cSrc->fields.npcDeckId;
}


System_String_o *__fastcall StageEntity__CreatePK(
        int32_t questId,
        int32_t questPhase,
        int32_t wave,
        const MethodInfo *method)
{
  if ( (byte_42E9293 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, questPhase, wave, method);
    byte_42E9293 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           questId,
           questPhase,
           wave,
           (const MethodInfo_1AE3440 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall StageEntity__CreatePrimaryKey(StageEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3
  int32_t questPhase; // w20
  int32_t questId; // w21
  int32_t wave; // w19

  if ( (byte_42E9292 & 1) == 0 )
  {
    sub_B5D5C4(&StageEntity_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9292 = 1;
  }
  questId = this->fields.questId;
  questPhase = this->fields.questPhase;
  wave = this->fields.wave;
  if ( (BYTE3(StageEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !StageEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(StageEntity_TypeInfo);
  return StageEntity__CreatePK(questId, questPhase, wave, v3);
}


System_Int32_array *__fastcall StageEntity__GetAddUniqueCameraIds(
        StageEntity_o *this,
        System_Int32_array *defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_42E92CC & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_16458/*"addUniqueCameraIds"*/, (_DWORD)defVal, (_DWORD)method, v3);
    byte_42E92CC = 1;
  }
  return StageEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_16458/*"addUniqueCameraIds"*/, defVal, v3);
}


System_Object_array *__fastcall StageEntity__GetAiActTypeAttackCommandCard(
        StageEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  __int64 v14; // x1
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *script; // x0
  __int64 v16; // x10

  if ( (byte_42E92B2 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_object__ToArray__, v5, v6, v7);
    sub_B5D5C4(&System_Collections_Generic_List_object__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_16489/*"aiActTypeAttackCommandCard"*/, v11, v12, v13);
    byte_42E92B2 = 1;
  }
  if ( !StageEntity__checkScript(this, (System_String_o *)StringLiteral_16489/*"aiActTypeAttackCommandCard"*/, v2) )
    return 0LL;
  script = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this->fields.script;
  if ( !script
    || (script = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                     script,
                                                                                     (System_Type_o *)StringLiteral_16489/*"aiActTypeAttackCommandCard"*/,
                                                                                     (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL
    || (v16 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1),
        *(&script->klass->_2.bitflags2 + 1) < (unsigned int)v16)
    || (System_Collections_Generic_List_object__c *)script->klass->_2.typeHierarchy[v16 - 1] != System_Collections_Generic_List_object__TypeInfo )
  {
    sub_B5D69C(script, v14);
  }
  return (System_Object_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)script,
                                  (const MethodInfo_305910C *)Method_System_Collections_Generic_List_object__ToArray__);
}


int32_t __fastcall StageEntity__GetAiActTypeAttackCommandCardType(
        StageEntity_o *this,
        BattleServantData_o *enemyServantData,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  __int64 AiActTypeAttackCommandCard; // x0
  __int64 v22; // x8
  __int64 v23; // x20
  unsigned __int64 v24; // x23
  __int64 v25; // x24
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *v26; // x21
  __int64 v27; // x10
  __int64 v28; // x1
  struct BattleDeckServantData_o *deckSvt; // x8
  int32_t npcId; // w22
  __int64 v31; // x0
  StageEntity_o *v32; // x0
  const MethodInfo *v33; // x1

  if ( (byte_42E92B3 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__,
      (_DWORD)enemyServantData,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v6, v7, v8);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&long_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_21437/*"npcServantId"*/, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_17444/*"cardType"*/, v18, v19, v20);
    byte_42E92B3 = 1;
  }
  AiActTypeAttackCommandCard = (__int64)StageEntity__GetAiActTypeAttackCommandCard(
                                          this,
                                          (const MethodInfo *)enemyServantData);
  if ( AiActTypeAttackCommandCard )
  {
    v22 = *(_QWORD *)(AiActTypeAttackCommandCard + 24);
    v23 = AiActTypeAttackCommandCard;
    if ( (int)v22 < 1 )
    {
LABEL_18:
      LODWORD(AiActTypeAttackCommandCard) = 0;
    }
    else
    {
      v24 = 0LL;
      v25 = AiActTypeAttackCommandCard + 32;
      while ( 1 )
      {
        if ( v24 >= (unsigned int)v22 )
        {
          v31 = sub_B5D6C8(AiActTypeAttackCommandCard);
          sub_B5D668(v31, 0LL);
        }
        v26 = *(System_Collections_Generic_Dictionary_Type__IStoreExtension__o **)(v25 + 8 * v24);
        if ( v26 )
        {
          v27 = *(&System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.bitflags2 + 1);
          if ( *(&v26->klass->_2.bitflags2 + 1) >= (unsigned int)v27
            && (System_Collections_Generic_Dictionary_string__object__c *)v26->klass->_2.typeHierarchy[v27 - 1] == System_Collections_Generic_Dictionary_string__object__TypeInfo )
          {
            AiActTypeAttackCommandCard = System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                                           *(System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o **)(v25 + 8 * v24),
                                           (System_Xml_XmlQualifiedName_o *)StringLiteral_21437/*"npcServantId"*/,
                                           (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
            if ( (AiActTypeAttackCommandCard & 1) != 0 )
            {
              if ( !enemyServantData )
                goto LABEL_24;
              deckSvt = enemyServantData->fields.deckSvt;
              if ( !deckSvt )
                goto LABEL_24;
              npcId = deckSvt->fields.npcId;
              AiActTypeAttackCommandCard = (__int64)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                      v26,
                                                      (System_Type_o *)StringLiteral_21437/*"npcServantId"*/,
                                                      (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
              if ( !AiActTypeAttackCommandCard )
                goto LABEL_24;
              if ( *(Il2CppClass **)(*(_QWORD *)AiActTypeAttackCommandCard + 64LL) != long_TypeInfo->_1.element_class )
                goto LABEL_25;
              AiActTypeAttackCommandCard = j_il2cpp_object_unbox_0(AiActTypeAttackCommandCard);
              if ( npcId == *(_DWORD *)AiActTypeAttackCommandCard )
              {
                AiActTypeAttackCommandCard = System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                                               (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v26,
                                               (System_Xml_XmlQualifiedName_o *)StringLiteral_17444/*"cardType"*/,
                                               (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
                if ( (AiActTypeAttackCommandCard & 1) != 0 )
                  break;
              }
            }
          }
        }
        LODWORD(v22) = *(_DWORD *)(v23 + 24);
        if ( (__int64)++v24 >= (int)v22 )
          goto LABEL_18;
      }
      AiActTypeAttackCommandCard = (__int64)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                              v26,
                                              (System_Type_o *)StringLiteral_17444/*"cardType"*/,
                                              (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !AiActTypeAttackCommandCard )
LABEL_24:
        sub_B5D69C(AiActTypeAttackCommandCard, v28);
      if ( *(Il2CppClass **)(*(_QWORD *)AiActTypeAttackCommandCard + 64LL) == long_TypeInfo->_1.element_class )
      {
        LODWORD(AiActTypeAttackCommandCard) = *(_DWORD *)j_il2cpp_object_unbox_0(AiActTypeAttackCommandCard);
      }
      else
      {
LABEL_25:
        v32 = (StageEntity_o *)sub_B5D990(AiActTypeAttackCommandCard);
        LODWORD(AiActTypeAttackCommandCard) = StageEntity__IsDisableFieldMotion(v32, v33);
      }
    }
  }
  return AiActTypeAttackCommandCard;
}


System_Collections_Generic_List_AiAllocationInfo__o *__fastcall StageEntity__GetAiAllocationInfoList(
        StageEntity_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  System_String_o *Value_string; // x19
  bool IsNullOrEmpty; // w8
  System_Collections_Generic_List_AiAllocationInfo__o *result; // x0
  StageEntity___c_c *v29; // x0
  struct StageEntity___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__68_0; // x20
  Il2CppObject *v32; // x21
  struct StageEntity___c_StaticFields *v33; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v40; // x0

  if ( (byte_42E92C5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_GetValue_List_object____, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Select_object__AiAllocationInfo___, v5, v6, v7);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToList_AiAllocationInfo___, v8, v9, v10);
    sub_B5D5C4(&Method_System_Func_object__AiAllocationInfo___ctor__, v11, v12, v13);
    sub_B5D5C4(&System_Func_object__AiAllocationInfo__TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_StageEntity___c__GetAiAllocationInfoList_b__68_0__, v17, v18, v19);
    sub_B5D5C4(&StageEntity___c_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_16490/*"aiAllocations"*/, v23, v24, v25);
    byte_42E92C5 = 1;
  }
  Value_string = BasicHelper__GetValue_string_(
                   this->fields.script,
                   (System_String_o *)StringLiteral_16490/*"aiAllocations"*/,
                   0LL,
                   (const MethodInfo_1AD8A70 *)Method_BasicHelper_GetValue_List_object____);
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)Value_string, 0LL);
  result = 0LL;
  if ( !IsNullOrEmpty )
  {
    v29 = StageEntity___c_TypeInfo;
    if ( (BYTE3(StageEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !StageEntity___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(StageEntity___c_TypeInfo);
      v29 = StageEntity___c_TypeInfo;
    }
    static_fields = v29->static_fields;
    _9__68_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__68_0;
    if ( !_9__68_0 )
    {
      if ( (BYTE3(v29->vtable._0_Equals.methodPtr) & 4) != 0 && !v29->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v29);
        static_fields = StageEntity___c_TypeInfo->static_fields;
      }
      v32 = (Il2CppObject *)static_fields->__9;
      _9__68_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B5D694(System_Func_object__AiAllocationInfo__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
        _9__68_0,
        v32,
        Method_StageEntity___c__GetAiAllocationInfoList_b__68_0__,
        (const MethodInfo_2C3041C *)Method_System_Func_object__AiAllocationInfo___ctor__);
      v33 = StageEntity___c_TypeInfo->static_fields;
      v33->__9__68_0 = (struct System_Func_object__AiAllocationInfo__o *)_9__68_0;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v33->__9__68_0,
        (System_Int32_array **)_9__68_0,
        v34,
        v35,
        v36,
        v37,
        v38,
        v39);
    }
    v40 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)Value_string,
                                                                 (System_Func_TSource__TResult__o *)_9__68_0,
                                                                 (const MethodInfo_1CB354C *)Method_System_Linq_Enumerable_Select_object__AiAllocationInfo___);
    return (System_Collections_Generic_List_AiAllocationInfo__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                    v40,
                                                                    (const MethodInfo_1CBA734 *)Method_System_Linq_Enumerable_ToList_AiAllocationInfo___);
  }
  return result;
}


System_Int32_array *__fastcall StageEntity__GetAssumedEffectId(StageEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E92C9 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_16699/*"assumedEffectId"*/, (_DWORD)method, v2, v3);
    byte_42E92C9 = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_16699/*"assumedEffectId"*/, 0LL);
}


System_String_array *__fastcall StageEntity__GetAssumedVoiceAssetNames(StageEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E92CD & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_16700/*"assumedVoiceAssetNames"*/, (_DWORD)method, v2, v3);
    byte_42E92CD = 1;
  }
  return EntityScriptUtil__GetStringArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_16700/*"assumedVoiceAssetNames"*/, 0LL);
}


System_String_array *__fastcall StageEntity__GetBattleStartVoiceIdArray(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  Il2CppObject *ScriptObject; // x0
  System_Collections_Generic_List_string__o *v30; // x19
  __int64 v31; // x10
  StageEntity___c_c *v33; // x0
  struct StageEntity___c_StaticFields *static_fields; // x8
  System_Converter_string__string__o *_9__54_0; // x20
  Il2CppObject *v36; // x21
  struct StageEntity___c_StaticFields *v37; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_Collections_Generic_List_WarBoardUiData_SaveData__o *v44; // x0
  __int64 v45; // x1

  if ( (byte_42E92B9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Converter_object__string___ctor__, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&System_Converter_object__string__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_object__ConvertAll_string___, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__ToArray__, v11, v12, v13);
    sub_B5D5C4(&System_Collections_Generic_List_object__TypeInfo, v14, v15, v16);
    sub_B5D5C4(&string___TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_StageEntity___c__GetBattleStartVoiceIdArray_b__54_0__, v20, v21, v22);
    sub_B5D5C4(&StageEntity___c_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_16859/*"battleStartVoiceIds"*/, v26, v27, v28);
    byte_42E92B9 = 1;
  }
  ScriptObject = StageEntity__GetScriptObject(this, (System_String_o *)StringLiteral_16859/*"battleStartVoiceIds"*/, v2);
  if ( !ScriptObject )
    return (System_String_array *)sub_B5D5DC(string___TypeInfo, 0LL);
  v30 = (System_Collections_Generic_List_string__o *)ScriptObject;
  v31 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
  if ( *(&ScriptObject->klass->_2.bitflags2 + 1) < (unsigned int)v31
    || (System_Collections_Generic_List_object__c *)ScriptObject->klass->_2.typeHierarchy[v31 - 1] != System_Collections_Generic_List_object__TypeInfo )
  {
    return (System_String_array *)sub_B5D5DC(string___TypeInfo, 0LL);
  }
  v33 = StageEntity___c_TypeInfo;
  if ( (BYTE3(StageEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !StageEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(StageEntity___c_TypeInfo);
    v33 = StageEntity___c_TypeInfo;
  }
  static_fields = v33->static_fields;
  _9__54_0 = (System_Converter_string__string__o *)static_fields->__9__54_0;
  if ( !_9__54_0 )
  {
    if ( (BYTE3(v33->vtable._0_Equals.methodPtr) & 4) != 0 && !v33->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v33);
      static_fields = StageEntity___c_TypeInfo->static_fields;
    }
    v36 = (Il2CppObject *)static_fields->__9;
    _9__54_0 = (System_Converter_string__string__o *)sub_B5D694(System_Converter_object__string__TypeInfo);
    System_Converter_string__string____ctor(
      _9__54_0,
      v36,
      Method_StageEntity___c__GetBattleStartVoiceIdArray_b__54_0__,
      (const MethodInfo_23F738C *)Method_System_Converter_object__string___ctor__);
    v37 = StageEntity___c_TypeInfo->static_fields;
    v37->__9__54_0 = (struct System_Converter_object__string__o *)_9__54_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v37->__9__54_0,
      (System_Int32_array **)_9__54_0,
      v38,
      v39,
      v40,
      v41,
      v42,
      v43);
  }
  v44 = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)System_Collections_Generic_List_string___ConvertAll_string_(
                                                                        v30,
                                                                        (System_Converter_T__TOutput__o *)_9__54_0,
                                                                        (const MethodInfo_192E1C0 *)Method_System_Collections_Generic_List_object__ConvertAll_string___);
  if ( !v44 )
    sub_B5D69C(0LL, v45);
  return (System_String_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                  v44,
                                  (const MethodInfo_305910C *)Method_System_Collections_Generic_List_string__ToArray__);
}


int32_t __fastcall StageEntity__GetBattleStartVoiceServantId(StageEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42E92B7 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_16860/*"battleStartVoiceSvtId"*/, (_DWORD)method, v2, v3);
    byte_42E92B7 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_16860/*"battleStartVoiceSvtId"*/, 0, v3);
}


int32_t __fastcall StageEntity__GetBattleStartVoiceServantLimit(StageEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42E92B8 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_16861/*"battleStartVoiceSvtLimit"*/, (_DWORD)method, v2, v3);
    byte_42E92B8 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_16861/*"battleStartVoiceSvtLimit"*/, -1, v3);
}


System_Int32_array *__fastcall StageEntity__GetBossIdAndChangeBgmId(StageEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Int32_array *v8; // x2
  const MethodInfo *v9; // x3

  if ( (byte_42E92B1 & 1) == 0 )
  {
    sub_B5D5C4(&int___TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_17095/*"bossIdAndChangeBgmId"*/, v5, v6, v7);
    byte_42E92B1 = 1;
  }
  v8 = (System_Int32_array *)sub_B5D5DC(int___TypeInfo, 0LL);
  return StageEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_17095/*"bossIdAndChangeBgmId"*/, v8, v9);
}


System_Int32_array *__fastcall StageEntity__GetCutInSvtIds(StageEntity_o *this, bool isEnemy, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  System_String_o **v9; // x8

  if ( (byte_42E92AE & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_18588/*"enemyCutInSvtIds"*/, isEnemy, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_21785/*"playerCutInSvtIds"*/, v6, v7, v8);
    byte_42E92AE = 1;
  }
  v9 = (System_String_o **)&StringLiteral_18588/*"enemyCutInSvtIds"*/;
  if ( !isEnemy )
    v9 = (System_String_o **)&StringLiteral_21785/*"playerCutInSvtIds"*/;
  return StageEntity__getScriptIntArrayParam(this, *v9, 0LL, v3);
}


int32_t __fastcall StageEntity__GetEffectBgmId(StageEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42E92AF & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_18491/*"effectBgmId"*/, (_DWORD)method, v2, v3);
    byte_42E92AF = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_18491/*"effectBgmId"*/, -1, v3);
}


int32_t __fastcall StageEntity__GetEffectSvtId(StageEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42E92AD & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_18502/*"effectSvtId"*/, (_DWORD)method, v2, v3);
    byte_42E92AD = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_18502/*"effectSvtId"*/, 0, v3);
}


System_Int32_array *__fastcall StageEntity__GetEnemyAddOrderPosArray(
        StageEntity_o *this,
        int32_t enemyFieldPosCount,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  System_Int32_array *ScriptIntArrayParam; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x19
  StageEntity___c_c *v26; // x0
  struct StageEntity___c_StaticFields *static_fields; // x8
  System_Func_int__int__o *_9__64_0; // x20
  Il2CppObject *v29; // x21
  struct StageEntity___c_StaticFields *v30; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v37; // x0

  if ( (byte_42E92C1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_Select_int__int___, enemyFieldPosCount, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_int___, v6, v7, v8);
    sub_B5D5C4(&Method_System_Func_int__int___ctor__, v9, v10, v11);
    sub_B5D5C4(&System_Func_int__int__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_StageEntity___c__GetEnemyAddOrderPosArray_b__64_0__, v15, v16, v17);
    sub_B5D5C4(&StageEntity___c_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_18590/*"enemyEntryOrder"*/, v21, v22, v23);
    byte_42E92C1 = 1;
  }
  ScriptIntArrayParam = StageEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_18590/*"enemyEntryOrder"*/, 0LL, v3);
  if ( ScriptIntArrayParam )
  {
    v25 = (System_Collections_Generic_IEnumerable_TSource__o *)ScriptIntArrayParam;
    v26 = StageEntity___c_TypeInfo;
    if ( (BYTE3(StageEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !StageEntity___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(StageEntity___c_TypeInfo);
      v26 = StageEntity___c_TypeInfo;
    }
    static_fields = v26->static_fields;
    _9__64_0 = static_fields->__9__64_0;
    if ( !_9__64_0 )
    {
      if ( (BYTE3(v26->vtable._0_Equals.methodPtr) & 4) != 0 && !v26->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v26);
        static_fields = StageEntity___c_TypeInfo->static_fields;
      }
      v29 = (Il2CppObject *)static_fields->__9;
      _9__64_0 = (System_Func_int__int__o *)sub_B5D694(System_Func_int__int__TypeInfo);
      System_Func_int__int____ctor(
        _9__64_0,
        v29,
        Method_StageEntity___c__GetEnemyAddOrderPosArray_b__64_0__,
        (const MethodInfo_2C29044 *)Method_System_Func_int__int___ctor__);
      v30 = StageEntity___c_TypeInfo->static_fields;
      v30->__9__64_0 = _9__64_0;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v30->__9__64_0,
        (System_Int32_array **)_9__64_0,
        v31,
        v32,
        v33,
        v34,
        v35,
        v36);
    }
    v37 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__int_(
                                                                 v25,
                                                                 (System_Func_TSource__TResult__o *)_9__64_0,
                                                                 (const MethodInfo_1CB17E8 *)Method_System_Linq_Enumerable_Select_int__int___);
  }
  else
  {
    v37 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Range(0, enemyFieldPosCount, 0LL);
  }
  return System_Linq_Enumerable__ToArray_int_(
           v37,
           (const MethodInfo_1CB76BC *)Method_System_Linq_Enumerable_ToArray_int___);
}


int32_t __fastcall StageEntity__GetEnemyCountStartValue(StageEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42E92C6 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_18587/*"enemyCountStartValue"*/, (_DWORD)method, v2, v3);
    byte_42E92C6 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_18587/*"enemyCountStartValue"*/, 0, v3);
}


int32_t __fastcall StageEntity__GetEnemyEntryMaxCountEachTurn(
        StageEntity_o *this,
        int32_t defaultValue,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_42E92C2 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_18589/*"enemyEntryMaxCountEachTurn"*/, defaultValue, (_DWORD)method, v3);
    byte_42E92C2 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_18589/*"enemyEntryMaxCountEachTurn"*/, defaultValue, v3);
}


int32_t __fastcall StageEntity__GetEnemyFieldPosCount(StageEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42E92BA & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_18592/*"enemyFieldPosCount"*/, (_DWORD)method, v2, v3);
    byte_42E92BA = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_18592/*"enemyFieldPosCount"*/, 3, v3);
}


int32_t __fastcall StageEntity__GetFadeType(StageEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42E92AC & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_16857/*"battleStartFadeType"*/, (_DWORD)method, v2, v3);
    byte_42E92AC = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_16857/*"battleStartFadeType"*/, 0, v3);
}


System_Int32_array *__fastcall StageEntity__GetFieldCallServantId(StageEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Int32_array *result; // x0

  if ( (byte_42E92B5 & 1) == 0 )
  {
    sub_B5D5C4(&int___TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_17387/*"call"*/, v5, v6, v7);
    byte_42E92B5 = 1;
  }
  result = StageEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_17387/*"call"*/, 0LL, v3);
  if ( !result )
    return (System_Int32_array *)sub_B5D5DC(int___TypeInfo, 0LL);
  return result;
}


System_Int32_array *__fastcall StageEntity__GetFieldPosSkillId(StageEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Int32_array *v8; // x2
  const MethodInfo *v9; // x3

  if ( (byte_42E92C3 & 1) == 0 )
  {
    sub_B5D5C4(&int___TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_18950/*"fieldPosSkillId"*/, v5, v6, v7);
    byte_42E92C3 = 1;
  }
  v8 = (System_Int32_array *)sub_B5D5DC(int___TypeInfo, 0LL);
  return StageEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_18950/*"fieldPosSkillId"*/, v8, v9);
}


System_Int32_array *__fastcall StageEntity__GetFieldPosSkillLv(StageEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Int32_array *v8; // x2
  const MethodInfo *v9; // x3

  if ( (byte_42E92C4 & 1) == 0 )
  {
    sub_B5D5C4(&int___TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_18951/*"fieldPosSkillLv"*/, v5, v6, v7);
    byte_42E92C4 = 1;
  }
  v8 = (System_Int32_array *)sub_B5D5DC(int___TypeInfo, 0LL);
  return StageEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_18951/*"fieldPosSkillLv"*/, v8, v9);
}


System_Int32_array *__fastcall StageEntity__GetMultiEffectIds(StageEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42E92AB & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_21264/*"multiEffectIds"*/, (_DWORD)method, v2, v3);
    byte_42E92AB = 1;
  }
  return StageEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_21264/*"multiEffectIds"*/, 0LL, v3);
}


int32_t __fastcall StageEntity__GetPriorityBG(StageEntity_o *this, int32_t def, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_42E92C7 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_21821/*"priorityBG"*/, def, (_DWORD)method, v3);
    byte_42E92C7 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_21821/*"priorityBG"*/, def, v3);
}


int32_t __fastcall StageEntity__GetPriorityBgm(StageEntity_o *this, int32_t def, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_42E92C8 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_21822/*"priorityBgm"*/, def, (_DWORD)method, v3);
    byte_42E92C8 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_21822/*"priorityBgm"*/, def, v3);
}


Il2CppObject *__fastcall StageEntity__GetScriptObject(
        StageEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42E92B6 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__,
      (_DWORD)key,
      (_DWORD)method,
      v3);
    byte_42E92B6 = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( !script )
    sub_B5D69C(0LL, key);
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
         (System_Xml_XmlQualifiedName_o *)key,
         &value,
         (const MethodInfo_2F289BC *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42E92B0 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_22574/*"startBgmOff"*/, (_DWORD)method, v2, v3);
    byte_42E92B0 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_22574/*"startBgmOff"*/, 0, v3);
}


SubBgmPlayArgs_array *__fastcall StageEntity__GetSubBgmPlayArgsArray(StageEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  StageEntity___c_c *v20; // x0
  struct StageEntity___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__61_0; // x20
  Il2CppObject *v23; // x21
  struct StageEntity___c_StaticFields *v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7

  if ( (byte_42E92BE & 1) == 0 )
  {
    sub_B5D5C4(&Method_EntityScriptUtil_GetScriptValue_List_object___SubBgmPlayArgs_____, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Func_List_object___SubBgmPlayArgs_____ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Func_List_object___SubBgmPlayArgs____TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_StageEntity___c__GetSubBgmPlayArgsArray_b__61_0__, v11, v12, v13);
    sub_B5D5C4(&StageEntity___c_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_22677/*"subBgms"*/, v17, v18, v19);
    byte_42E92BE = 1;
  }
  v20 = StageEntity___c_TypeInfo;
  if ( (BYTE3(StageEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !StageEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(StageEntity___c_TypeInfo);
    v20 = StageEntity___c_TypeInfo;
  }
  static_fields = v20->static_fields;
  _9__61_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__61_0;
  if ( !_9__61_0 )
  {
    if ( (BYTE3(v20->vtable._0_Equals.methodPtr) & 4) != 0 && !v20->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v20);
      static_fields = StageEntity___c_TypeInfo->static_fields;
    }
    v23 = (Il2CppObject *)static_fields->__9;
    _9__61_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B5D694(System_Func_List_object___SubBgmPlayArgs____TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__61_0,
      v23,
      Method_StageEntity___c__GetSubBgmPlayArgsArray_b__61_0__,
      (const MethodInfo_2C3041C *)Method_System_Func_List_object___SubBgmPlayArgs_____ctor__);
    v24 = StageEntity___c_TypeInfo->static_fields;
    v24->__9__61_0 = (struct System_Func_List_object___SubBgmPlayArgs____o *)_9__61_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v24->__9__61_0,
      (System_Int32_array **)_9__61_0,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
  }
  return (SubBgmPlayArgs_array *)EntityScriptUtil__GetScriptValue_object__object_(
                                   this->fields.script,
                                   (System_String_o *)StringLiteral_22677/*"subBgms"*/,
                                   (System_Func_TSource__TDestination__o *)_9__61_0,
                                   0LL,
                                   (const MethodInfo_1AE6800 *)Method_EntityScriptUtil_GetScriptValue_List_object___SubBgmPlayArgs_____);
}


int32_t __fastcall StageEntity__GetSubBgmsPriority(StageEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42E92BF & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_22678/*"subBgmsPriority"*/, (_DWORD)method, v2, v3);
    byte_42E92BF = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_22678/*"subBgmsPriority"*/, 0, v3);
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

  if ( (byte_42E92A6 & 1) == 0 )
  {
    sub_B5D5C4(&int___TypeInfo, limitTurn, (_DWORD)turnlist, method);
    byte_42E92A6 = 1;
  }
  result = (System_Int32_array *)sub_B5D5DC(int___TypeInfo, (unsigned int)limitTurn);
  if ( !result )
LABEL_15:
    sub_B5D69C(result, v7);
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
        v13 = sub_B5D6C8(result);
        sub_B5D668(v13, 0LL);
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

  if ( (byte_42E92CB & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_18948/*"fieldMotionIds"*/, (_DWORD)defVal, (_DWORD)method, v3);
    byte_42E92CB = 1;
  }
  return StageEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_18948/*"fieldMotionIds"*/, defVal, v3);
}


bool __fastcall StageEntity__Is3_6BossBattle(StageEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42E92BB & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1175/*"3.6BossBattle"*/, (_DWORD)method, v2, v3);
    byte_42E92BB = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_1175/*"3.6BossBattle"*/, 0, v3) > 0;
}


bool __fastcall StageEntity__IsDisableFieldMotion(StageEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42E92B4 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_18251/*"disableUniqueFieldMotion"*/, (_DWORD)method, v2, v3);
    byte_42E92B4 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_18251/*"disableUniqueFieldMotion"*/, 0, v3) > 0;
}


bool __fastcall StageEntity__IsForceSetNormalEnemyStatusUI(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3

  if ( (byte_42E92C0 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_6830/*"ForceSetNormalEnemyStatusUI"*/, (_DWORD)method, (_DWORD)v2, v3);
    byte_42E92C0 = 1;
  }
  return StageEntity__checkScript(this, (System_String_o *)StringLiteral_6830/*"ForceSetNormalEnemyStatusUI"*/, v2);
}


bool __fastcall StageEntity__IsReleaseUnusedAssetsWhenEntryMember(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3

  if ( (byte_42E92BD & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_22052/*"releaseUnusedAssetsWhenEntryMember"*/, (_DWORD)method, (_DWORD)v2, v3);
    byte_42E92BD = 1;
  }
  return StageEntity__checkScript(this, (System_String_o *)StringLiteral_22052/*"releaseUnusedAssetsWhenEntryMember"*/, v2);
}


bool __fastcall StageEntity__IsSkipWaveStartFadeInSe(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3

  if ( (byte_42E92CA & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_22460/*"skipWaveStartFadeInSe"*/, (_DWORD)method, (_DWORD)v2, v3);
    byte_42E92CA = 1;
  }
  return StageEntity__checkScript(this, (System_String_o *)StringLiteral_22460/*"skipWaveStartFadeInSe"*/, v2);
}


bool __fastcall StageEntity__IsSpecifiedBattleStartVoice(StageEntity_o *this, const MethodInfo *method)
{
  int32_t BattleStartVoiceServantId; // w20
  const MethodInfo *v4; // x1

  BattleStartVoiceServantId = StageEntity__GetBattleStartVoiceServantId(this, method);
  return (BattleStartVoiceServantId > 0) & (StageEntity__GetBattleStartVoiceServantLimit(this, v4) >= 0);
}


bool __fastcall StageEntity__IsSpecifiedBattleStartVoice_26212128(
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
  __int64 v3; // x3

  if ( (byte_42E929F & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_19091/*"fov"*/, (_DWORD)method, (_DWORD)v2, v3);
    byte_42E929F = 1;
  }
  return StageEntity__checkScript(this, (System_String_o *)StringLiteral_19091/*"fov"*/, v2);
}


bool __fastcall StageEntity__checkScript(StageEntity_o *this, System_String_o *key, const MethodInfo *method)
{
  __int64 v3; // x3
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0

  if ( (byte_42E9296 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__,
      (_DWORD)key,
      (_DWORD)method,
      v3);
    byte_42E9296 = 1;
  }
  script = this->fields.script;
  if ( script )
    LOBYTE(script) = System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                       (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
                       (System_Xml_XmlQualifiedName_o *)key,
                       (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)script;
}


bool __fastcall StageEntity__disableSystemFadeStartBattle(StageEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42E92AA & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_18249/*"disableSystemFadeStartBattle"*/, (_DWORD)method, v2, v3);
    byte_42E92AA = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_18249/*"disableSystemFadeStartBattle"*/, 0, v3) > 0;
}


int32_t __fastcall StageEntity__getBattleMasterImageId(StageEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42E92BC & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_16855/*"battleMasterImageId"*/, (_DWORD)method, v2, v3);
    byte_42E92BC = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_16855/*"battleMasterImageId"*/, 0, v3);
}


int32_t __fastcall StageEntity__getChangeBgId(StageEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42E92A2 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_17485/*"changeBgId"*/, (_DWORD)method, v2, v3);
    byte_42E92A2 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_17485/*"changeBgId"*/, 0, v3);
}


int32_t __fastcall StageEntity__getChangeBgType(StageEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42E92A3 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_17486/*"changeBgType"*/, (_DWORD)method, v2, v3);
    byte_42E92A3 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_17486/*"changeBgType"*/, 0, v3);
}


float __fastcall StageEntity__getCustomFOV(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3

  if ( (byte_42E929E & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_19091/*"fov"*/, (_DWORD)method, (_DWORD)v2, v3);
    byte_42E929E = 1;
  }
  return StageEntity__getScriptFloat(this, (System_String_o *)StringLiteral_19091/*"fov"*/, 0.0, v2);
}


int32_t __fastcall StageEntity__getEnemyActCount(StageEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int32_t result; // w0
  StageEntity_c *v9; // x0

  if ( (byte_42E92A8 & 1) == 0 )
  {
    sub_B5D5C4(&StageEntity_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_6073/*"EnemyActCount"*/, v5, v6, v7);
    byte_42E92A8 = 1;
  }
  result = StageEntity__getScript(this, (System_String_o *)StringLiteral_6073/*"EnemyActCount"*/, 0, v3);
  if ( result <= 0 )
  {
    v9 = StageEntity_TypeInfo;
    if ( (BYTE3(StageEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !StageEntity_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(StageEntity_TypeInfo);
      v9 = StageEntity_TypeInfo;
    }
    return v9->static_fields->DEFAULT_ENEMY_ACTION_COUNT;
  }
  return result;
}


int32_t __fastcall StageEntity__getEnemyMasterBattleId(StageEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Int32_array *ScriptIntArrayParam; // x0
  const MethodInfo *v9; // x3
  System_Int32_array *v10; // x20
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v12; // x1
  __int64 v14; // x0

  if ( (byte_42E92A1 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_18593/*"enemyMasterBattleId"*/, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_18594/*"enemyMasterBattleIdByPlayerGender"*/, v5, v6, v7);
    byte_42E92A1 = 1;
  }
  ScriptIntArrayParam = StageEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_18594/*"enemyMasterBattleIdByPlayerGender"*/, 0LL, v3);
  if ( !ScriptIntArrayParam )
    return StageEntity__getScript(this, (System_String_o *)StringLiteral_18593/*"enemyMasterBattleId"*/, 0, v9);
  v10 = ScriptIntArrayParam;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_13;
  if ( SelfUserGame->fields.genderType == 1 )
  {
    if ( v10->max_length )
      return v10->m_Items[1];
LABEL_14:
    v14 = sub_B5D6C8(SelfUserGame);
    sub_B5D668(v14, 0LL);
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
LABEL_13:
    sub_B5D69C(SelfUserGame, v12);
  if ( SelfUserGame->fields.genderType != 2 )
    return StageEntity__getScript(this, (System_String_o *)StringLiteral_18593/*"enemyMasterBattleId"*/, 0, v9);
  if ( v10->max_length <= 1 )
    goto LABEL_14;
  return v10->m_Items[2];
}


System_Object_array *__fastcall StageEntity__getFieldAis(StageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  __int64 v14; // x1
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *script; // x0
  __int64 v16; // x9
  StageEntity_o *v18; // x0
  int32_t v19; // w1
  const MethodInfo *v20; // x2

  if ( (byte_42E92A4 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_object__ToArray__, v5, v6, v7);
    sub_B5D5C4(&System_Collections_Generic_List_object__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_16491/*"aiFieldIds"*/, v11, v12, v13);
    byte_42E92A4 = 1;
  }
  if ( !StageEntity__checkScript(this, (System_String_o *)StringLiteral_16491/*"aiFieldIds"*/, v2) )
    return 0LL;
  script = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this->fields.script;
  if ( !script
    || (script = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                     script,
                                                                                     (System_Type_o *)StringLiteral_16491/*"aiFieldIds"*/,
                                                                                     (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_B5D69C(script, v14);
  }
  v16 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
  if ( *(&script->klass->_2.bitflags2 + 1) >= (unsigned int)v16
    && (System_Collections_Generic_List_object__c *)script->klass->_2.typeHierarchy[v16 - 1] == System_Collections_Generic_List_object__TypeInfo )
  {
    return (System_Object_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)script,
                                    (const MethodInfo_305910C *)Method_System_Collections_Generic_List_object__ToArray__);
  }
  v18 = (StageEntity_o *)sub_B5D990(script);
  return (System_Object_array *)StageEntity__getTurnEffect(v18, v19, v20);
}


int32_t __fastcall StageEntity__getLimitAct(StageEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42E929D & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_8607/*"LimitAct"*/, (_DWORD)method, v2, v3);
    byte_42E929D = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_8607/*"LimitAct"*/, 0, v3);
}


int32_t __fastcall StageEntity__getLimitTurn(StageEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42E929A & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_23120/*"turn"*/, (_DWORD)method, v2, v3);
    byte_42E929A = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_23120/*"turn"*/, 0, v3);
}


System_Int32_array *__fastcall StageEntity__getNoEntryIds(StageEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  System_Type_o *v36; // x20
  System_Collections_Generic_List_object__c *v37; // x1
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *Item; // x0
  System_Collections_Generic_List_BattleActionData_HealData__o *v39; // x19
  StageEntity___c_c *v40; // x8
  struct StageEntity___c_StaticFields *static_fields; // x9
  System_Converter_BattleActionData_HealData__int__o *_9__36_0; // x20
  __int64 v43; // x11
  __int64 v44; // x9
  Il2CppObject *v46; // x21
  struct StageEntity___c_StaticFields *v47; // x0
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7

  if ( (byte_42E92A7 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Converter_object__int___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Converter_object__int__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v11, v12, v13);
    sub_B5D5C4(&int___TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_object__ConvertAll_int___, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v20, v21, v22);
    sub_B5D5C4(&System_Collections_Generic_List_object__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&Method_StageEntity___c__getNoEntryIds_b__36_0__, v26, v27, v28);
    sub_B5D5C4(&StageEntity___c_TypeInfo, v29, v30, v31);
    sub_B5D5C4(&StringLiteral_9685/*"NoEntryIds"*/, v32, v33, v34);
    byte_42E92A7 = 1;
  }
  script = this->fields.script;
  if ( !script )
    return (System_Int32_array *)sub_B5D5DC(int___TypeInfo, 0LL);
  v36 = (System_Type_o *)StringLiteral_9685/*"NoEntryIds"*/;
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_9685/*"NoEntryIds"*/,
          (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return (System_Int32_array *)sub_B5D5DC(int___TypeInfo, 0LL);
  Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this->fields.script;
  if ( !Item )
    goto LABEL_24;
  Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                             Item,
                                                                             v36,
                                                                             (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v39 = (System_Collections_Generic_List_BattleActionData_HealData__o *)Item;
  v40 = StageEntity___c_TypeInfo;
  if ( (BYTE3(StageEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !StageEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(StageEntity___c_TypeInfo);
    v40 = StageEntity___c_TypeInfo;
  }
  static_fields = v40->static_fields;
  _9__36_0 = (System_Converter_BattleActionData_HealData__int__o *)static_fields->__9__36_0;
  v37 = System_Collections_Generic_List_object__TypeInfo;
  if ( v39 )
  {
    v43 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
    if ( *(&v39->klass->_2.bitflags2 + 1) < (unsigned int)v43
      || (System_Collections_Generic_List_object__c *)v39->klass->_2.typeHierarchy[v43 - 1] != System_Collections_Generic_List_object__TypeInfo )
    {
      goto LABEL_16;
    }
  }
  if ( !_9__36_0 )
  {
    if ( (BYTE3(v40->vtable._0_Equals.methodPtr) & 4) != 0 && !v40->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v40);
      static_fields = StageEntity___c_TypeInfo->static_fields;
    }
    v46 = (Il2CppObject *)static_fields->__9;
    _9__36_0 = (System_Converter_BattleActionData_HealData__int__o *)sub_B5D694(System_Converter_object__int__TypeInfo);
    System_Converter_BattleActionData_HealData__int____ctor(
      _9__36_0,
      v46,
      Method_StageEntity___c__getNoEntryIds_b__36_0__,
      (const MethodInfo_23F6FAC *)Method_System_Converter_object__int___ctor__);
    v47 = StageEntity___c_TypeInfo->static_fields;
    v47->__9__36_0 = (struct System_Converter_object__int__o *)_9__36_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v47->__9__36_0,
      (System_Int32_array **)_9__36_0,
      v48,
      v49,
      v50,
      v51,
      v52,
      v53);
    if ( v39 )
      goto LABEL_22;
LABEL_24:
    sub_B5D69C(Item, v37);
  }
  if ( !v39 )
    goto LABEL_24;
  v44 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
  if ( *(&v39->klass->_2.bitflags2 + 1) < (unsigned int)v44
    || (System_Collections_Generic_List_object__c *)v39->klass->_2.typeHierarchy[v44 - 1] != System_Collections_Generic_List_object__TypeInfo )
  {
LABEL_16:
    sub_B5D990(v39);
    return (System_Int32_array *)sub_B5D5DC(int___TypeInfo, 0LL);
  }
LABEL_22:
  Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_List_BattleActionData_HealData___ConvertAll_int_(
                                                                             v39,
                                                                             (System_Converter_T__TOutput__o *)_9__36_0,
                                                                             (const MethodInfo_192E0B4 *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
  if ( !Item )
    goto LABEL_24;
  return System_Collections_Generic_List_int___ToArray(
           (System_Collections_Generic_List_int__o *)Item,
           (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  __int64 v10; // x1
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *script; // x0
  int32_t result; // w0
  StageEntity_o *v13; // x0
  System_String_o *v14; // x1
  const MethodInfo *v15; // x2
  float v16; // s0

  v4 = defVal;
  if ( (byte_42E9297 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, (_DWORD)key, defVal, method);
    sub_B5D5C4(&long_TypeInfo, v7, v8, v9);
    byte_42E9297 = 1;
  }
  if ( !StageEntity__checkScript(this, key, *(const MethodInfo **)&defVal) )
    return v4;
  script = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this->fields.script;
  if ( !script
    || (script = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                     script,
                                                                                     (System_Type_o *)key,
                                                                                     (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_B5D69C(script, v10);
  }
  if ( script->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(script);
  v13 = (StageEntity_o *)sub_B5D990(script);
  StageEntity__getScriptFloat(v13, v14, v16, v15);
  return result;
}


float __fastcall StageEntity__getScriptFloat(
        StageEntity_o *this,
        System_String_o *key,
        float defVal,
        const MethodInfo *method)
{
  __int64 v4; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  __int64 v11; // x1
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *script; // x0
  float result; // s0
  StageEntity_o *v14; // x0
  System_String_o *v15; // x1
  System_Int32_array *v16; // x2
  const MethodInfo *v17; // x3

  if ( (byte_42E9298 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__object__get_Item__,
      (_DWORD)key,
      (_DWORD)method,
      v4);
    sub_B5D5C4(&double_TypeInfo, v8, v9, v10);
    byte_42E9298 = 1;
  }
  if ( !StageEntity__checkScript(this, key, method) )
    return defVal;
  script = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this->fields.script;
  if ( !script
    || (script = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                     script,
                                                                                     (System_Type_o *)key,
                                                                                     (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_B5D69C(script, v11);
  }
  if ( script->klass->_1.element_class == double_TypeInfo->_1.element_class )
    return *(double *)j_il2cpp_object_unbox_0(script);
  v14 = (StageEntity_o *)sub_B5D990(script);
  StageEntity__getScriptIntArrayParam(v14, v15, v16, v17);
  return result;
}


System_Int32_array *__fastcall StageEntity__getScriptIntArrayParam(
        StageEntity_o *this,
        System_String_o *key,
        System_Int32_array *defVal,
        const MethodInfo *method)
{
  System_Int32_array *_9__22_0; // x20
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  System_Collections_Generic_List_object__c *v28; // x1
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *script; // x0
  System_Collections_Generic_List_BattleActionData_HealData__o *v30; // x19
  StageEntity___c_c *v31; // x8
  struct StageEntity___c_StaticFields *static_fields; // x9
  __int64 v33; // x11
  __int64 v34; // x9
  Il2CppObject *v36; // x21
  struct StageEntity___c_StaticFields *v37; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7

  _9__22_0 = defVal;
  if ( (byte_42E9299 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Converter_object__int___ctor__, (_DWORD)key, (_DWORD)defVal, method);
    sub_B5D5C4(&System_Converter_object__int__TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_object__ConvertAll_int___, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v16, v17, v18);
    sub_B5D5C4(&System_Collections_Generic_List_object__TypeInfo, v19, v20, v21);
    sub_B5D5C4(&Method_StageEntity___c__getScriptIntArrayParam_b__22_0__, v22, v23, v24);
    sub_B5D5C4(&StageEntity___c_TypeInfo, v25, v26, v27);
    byte_42E9299 = 1;
  }
  if ( !StageEntity__checkScript(this, key, (const MethodInfo *)defVal) )
    return _9__22_0;
  script = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this->fields.script;
  if ( !script )
    goto LABEL_23;
  script = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                               script,
                                                                               (System_Type_o *)key,
                                                                               (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v30 = (System_Collections_Generic_List_BattleActionData_HealData__o *)script;
  v31 = StageEntity___c_TypeInfo;
  if ( (BYTE3(StageEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !StageEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(StageEntity___c_TypeInfo);
    v31 = StageEntity___c_TypeInfo;
  }
  static_fields = v31->static_fields;
  _9__22_0 = (System_Int32_array *)static_fields->__9__22_0;
  v28 = System_Collections_Generic_List_object__TypeInfo;
  if ( v30 )
  {
    v33 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
    if ( *(&v30->klass->_2.bitflags2 + 1) < (unsigned int)v33
      || (System_Collections_Generic_List_object__c *)v30->klass->_2.typeHierarchy[v33 - 1] != System_Collections_Generic_List_object__TypeInfo )
    {
      goto LABEL_15;
    }
  }
  if ( !_9__22_0 )
  {
    if ( (BYTE3(v31->vtable._0_Equals.methodPtr) & 4) != 0 && !v31->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v31);
      static_fields = StageEntity___c_TypeInfo->static_fields;
    }
    v36 = (Il2CppObject *)static_fields->__9;
    _9__22_0 = (System_Int32_array *)sub_B5D694(System_Converter_object__int__TypeInfo);
    System_Converter_BattleActionData_HealData__int____ctor(
      (System_Converter_BattleActionData_HealData__int__o *)_9__22_0,
      v36,
      Method_StageEntity___c__getScriptIntArrayParam_b__22_0__,
      (const MethodInfo_23F6FAC *)Method_System_Converter_object__int___ctor__);
    v37 = StageEntity___c_TypeInfo->static_fields;
    v37->__9__22_0 = (struct System_Converter_object__int__o *)_9__22_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v37->__9__22_0,
      (System_Int32_array **)_9__22_0,
      v38,
      v39,
      v40,
      v41,
      v42,
      v43);
    if ( v30 )
      goto LABEL_21;
LABEL_23:
    sub_B5D69C(script, v28);
  }
  if ( !v30 )
    goto LABEL_23;
  v34 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
  if ( *(&v30->klass->_2.bitflags2 + 1) < (unsigned int)v34
    || (System_Collections_Generic_List_object__c *)v30->klass->_2.typeHierarchy[v34 - 1] != System_Collections_Generic_List_object__TypeInfo )
  {
LABEL_15:
    sub_B5D990(v30);
    return _9__22_0;
  }
LABEL_21:
  script = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_List_BattleActionData_HealData___ConvertAll_int_(
                                                                               v30,
                                                                               (System_Converter_T__TOutput__o *)_9__22_0,
                                                                               (const MethodInfo_192E0B4 *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
  if ( !script )
    goto LABEL_23;
  return System_Collections_Generic_List_int___ToArray(
           (System_Collections_Generic_List_int__o *)script,
           (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
}


int32_t __fastcall StageEntity__getShowTurnState(StageEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42E92A0 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_22422/*"showTurn"*/, (_DWORD)method, v2, v3);
    byte_42E92A0 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_22422/*"showTurn"*/, 2, v3);
}


int32_t __fastcall StageEntity__getStartBattleAssetId(StageEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42E92A9 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_22572/*"startBattleAssetId"*/, (_DWORD)method, v2, v3);
    byte_42E92A9 = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_22572/*"startBattleAssetId"*/, 0, v3);
}


System_Int32_array *__fastcall StageEntity__getTurnEffect(
        StageEntity_o *this,
        int32_t limitTurn,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  System_Collections_Generic_List_object__c *v37; // x1
  void *v38; // x0
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0
  System_Collections_Generic_List_BattleActionData_HealData__o *v40; // x20
  __int64 v41; // x9
  struct StageEntity___c_StaticFields *static_fields; // x8
  System_Converter_BattleActionData_HealData__int__o *_9__34_0; // x21
  Il2CppObject *v44; // x22
  struct StageEntity___c_StaticFields *v45; // x0
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  StageEntity_o *v52; // x0
  const MethodInfo *v53; // x3
  int32_t v54; // w1
  System_Int32_array *v55; // x2

  if ( (byte_42E92A5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Converter_object__int___ctor__, limitTurn, (_DWORD)method, v3);
    sub_B5D5C4(&System_Converter_object__int__TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v12, v13, v14);
    sub_B5D5C4(&int___TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_object__ConvertAll_int___, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v21, v22, v23);
    sub_B5D5C4(&System_Collections_Generic_List_object__TypeInfo, v24, v25, v26);
    sub_B5D5C4(&Method_StageEntity___c__getTurnEffect_b__34_0__, v27, v28, v29);
    sub_B5D5C4(&StageEntity___c_TypeInfo, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_23121/*"turnEffect"*/, v33, v34, v35);
    byte_42E92A5 = 1;
  }
  script = this->fields.script;
  if ( script
    && System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
         (System_Xml_XmlQualifiedName_o *)StringLiteral_23121/*"turnEffect"*/,
         (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v38 = this->fields.script;
    if ( v38 )
    {
      Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
               (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v38,
               (System_Type_o *)StringLiteral_23121/*"turnEffect"*/,
               (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      v40 = (System_Collections_Generic_List_BattleActionData_HealData__o *)Item;
      if ( Item )
      {
        v37 = System_Collections_Generic_List_object__TypeInfo;
        v41 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) < (unsigned int)v41
          || (System_Collections_Generic_List_object__c *)Item->klass->_2.typeHierarchy[v41 - 1] != System_Collections_Generic_List_object__TypeInfo )
        {
          v52 = (StageEntity_o *)sub_B5D990(Item);
          return StageEntity__GetTurnEffect(v52, v54, v55, v53);
        }
      }
      v38 = StageEntity___c_TypeInfo;
      if ( (BYTE3(StageEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !StageEntity___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(StageEntity___c_TypeInfo);
        v38 = StageEntity___c_TypeInfo;
      }
      static_fields = (struct StageEntity___c_StaticFields *)*((_QWORD *)v38 + 23);
      _9__34_0 = (System_Converter_BattleActionData_HealData__int__o *)static_fields->__9__34_0;
      if ( !_9__34_0 )
      {
        if ( (*((_BYTE *)v38 + 307) & 4) != 0 && !*((_DWORD *)v38 + 56) )
        {
          j_il2cpp_runtime_class_init_0(v38);
          static_fields = StageEntity___c_TypeInfo->static_fields;
        }
        v44 = (Il2CppObject *)static_fields->__9;
        _9__34_0 = (System_Converter_BattleActionData_HealData__int__o *)sub_B5D694(System_Converter_object__int__TypeInfo);
        System_Converter_BattleActionData_HealData__int____ctor(
          _9__34_0,
          v44,
          Method_StageEntity___c__getTurnEffect_b__34_0__,
          (const MethodInfo_23F6FAC *)Method_System_Converter_object__int___ctor__);
        v45 = StageEntity___c_TypeInfo->static_fields;
        v45->__9__34_0 = (struct System_Converter_object__int__o *)_9__34_0;
        sub_B5D560(
          (BattleServantConfConponent_o *)&v45->__9__34_0,
          (System_Int32_array **)_9__34_0,
          v46,
          v47,
          v48,
          v49,
          v50,
          v51);
      }
      if ( v40 )
      {
        v38 = System_Collections_Generic_List_BattleActionData_HealData___ConvertAll_int_(
                v40,
                (System_Converter_T__TOutput__o *)_9__34_0,
                (const MethodInfo_192E0B4 *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
        if ( v38 )
        {
          v52 = (StageEntity_o *)System_Collections_Generic_List_int___ToArray(
                                   (System_Collections_Generic_List_int__o *)v38,
                                   (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
          v54 = limitTurn;
          v55 = (System_Int32_array *)v52;
          return StageEntity__GetTurnEffect(v52, v54, v55, v53);
        }
      }
    }
    sub_B5D69C(v38, v37);
  }
  return (System_Int32_array *)sub_B5D5DC(int___TypeInfo, 0LL);
}


int32_t __fastcall StageEntity__getTurnEffectType(StageEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42E929B & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_23122/*"turnEffectType"*/, (_DWORD)method, v2, v3);
    byte_42E929B = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_23122/*"turnEffectType"*/, 0, v3);
}


bool __fastcall StageEntity__getTurnElapsedEndBattleFlag(StageEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42E929C & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_23123/*"turnElapsedEndBattle"*/, (_DWORD)method, v2, v3);
    byte_42E929C = 1;
  }
  return StageEntity__getScript(this, (System_String_o *)StringLiteral_23123/*"turnElapsedEndBattle"*/, 0, v3) > 0;
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct StageEntity___c_StaticFields *static_fields; // x0

  if ( (byte_42E6443 & 1) == 0 )
  {
    sub_B5D5C4(&StageEntity___c_TypeInfo, v1, v2, v3);
    byte_42E6443 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(StageEntity___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = StageEntity___c_TypeInfo->static_fields;
  static_fields->__9 = (struct StageEntity___c_o *)v4;
  sub_B5D560(static_fields);
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

  if ( (byte_42E6447 & 1) == 0 )
  {
    sub_B5D5C4(&AiAllocationInfo_TypeInfo, (_DWORD)obj, (_DWORD)method, v3);
    byte_42E6447 = 1;
  }
  v5 = (AiAllocationInfo_o *)sub_B5D694(AiAllocationInfo_TypeInfo);
  AiAllocationInfo___ctor(v5, obj, 0LL);
  return v5;
}


System_String_o *__fastcall StageEntity___c___GetBattleStartVoiceIdArray_b__54_0(
        StageEntity___c_o *this,
        Il2CppObject *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
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
  __int64 v3; // x3
  System_String_o *v5; // x0

  if ( (byte_42E6446 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)x, (_DWORD)method, v3);
    byte_42E6446 = 1;
  }
  if ( x )
    v5 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer, const MethodInfo *))x->klass->vtable[3].method)(
                              x,
                              x->klass->vtable[4].methodPtr,
                              method);
  else
    v5 = 0LL;
  if ( !v5 )
    v5 = (System_String_o *)StringLiteral_1/*""*/;
  return System_Int32__Parse(v5, 0LL);
}


int32_t __fastcall StageEntity___c___getScriptIntArrayParam_b__22_0(
        StageEntity___c_o *this,
        Il2CppObject *x,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_String_o *v5; // x0

  if ( (byte_42E6444 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)x, (_DWORD)method, v3);
    byte_42E6444 = 1;
  }
  if ( x )
    v5 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer, const MethodInfo *))x->klass->vtable[3].method)(
                              x,
                              x->klass->vtable[4].methodPtr,
                              method);
  else
    v5 = 0LL;
  if ( !v5 )
    v5 = (System_String_o *)StringLiteral_1/*""*/;
  return System_Int32__Parse(v5, 0LL);
}


int32_t __fastcall StageEntity___c___getTurnEffect_b__34_0(
        StageEntity___c_o *this,
        Il2CppObject *x,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_String_o *v5; // x0

  if ( (byte_42E6445 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)x, (_DWORD)method, v3);
    byte_42E6445 = 1;
  }
  if ( x )
    v5 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer, const MethodInfo *))x->klass->vtable[3].method)(
                              x,
                              x->klass->vtable[4].methodPtr,
                              method);
  else
    v5 = 0LL;
  if ( !v5 )
    v5 = (System_String_o *)StringLiteral_1/*""*/;
  return System_Int32__Parse(v5, 0LL);
}