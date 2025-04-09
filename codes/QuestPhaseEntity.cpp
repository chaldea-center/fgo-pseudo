void __fastcall QuestPhaseEntity___ctor(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49BB377 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataEntityBase_string___ctor__, method);
    byte_49BB377 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_319B530 *)Method_DataEntityBase_string___ctor__);
}


void __fastcall QuestPhaseEntity___ctor_40071640(
        QuestPhaseEntity_o *this,
        QuestPhaseEntity_o *cSrc,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct System_Int32_array *v10; // x1
  System_Array_o *classIds; // x0
  Il2CppObject *v12; // x0
  Il2CppObject *v13; // x21
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  System_Array_o *individuality; // x0
  Il2CppObject *v17; // x0
  struct System_Int32_array *v18; // x1
  struct System_Int32_array **p_individuality; // x19

  if ( (byte_49BB378 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataEntityBase_string___ctor__, cSrc);
    sub_1B4CF90(&int___TypeInfo, v5);
    byte_49BB378 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_319B530 *)Method_DataEntityBase_string___ctor__);
  if ( !cSrc )
    sub_1B4D1EC(v6, v7);
  v10 = 0LL;
  *(_QWORD *)&this->fields.questId = *(_QWORD *)&cSrc->fields.questId;
  this->fields.isNpcOnly = cSrc->fields.isNpcOnly;
  *(_OWORD *)&this->fields.battleBgId = *(_OWORD *)&cSrc->fields.battleBgId;
  classIds = (System_Array_o *)cSrc->fields.classIds;
  if ( classIds )
  {
    v12 = System_Array__Clone(classIds, 0LL);
    if ( v12 )
    {
      v13 = v12;
      v10 = (struct System_Int32_array *)sub_1B4D0CC(v12, int___TypeInfo);
      if ( !v10 )
        goto LABEL_12;
    }
    else
    {
      v10 = 0LL;
    }
  }
  this->fields.classIds = v10;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.classIds, (int32_t)v10, v8, v9);
  individuality = (System_Array_o *)cSrc->fields.individuality;
  if ( !individuality )
    goto LABEL_13;
  v17 = System_Array__Clone(individuality, 0LL);
  if ( !v17 )
    goto LABEL_13;
  v13 = v17;
  v18 = (struct System_Int32_array *)sub_1B4D0CC(v17, int___TypeInfo);
  if ( !v18 )
  {
LABEL_12:
    sub_1B4D4AC(v13);
LABEL_13:
    v18 = 0LL;
  }
  this->fields.individuality = v18;
  p_individuality = &this->fields.individuality;
  sub_1B4CF34((CGThumbnailListItem_o *)p_individuality, (int32_t)v18, v14, v15);
  *((_DWORD *)p_individuality + 2) = cSrc->fields.giftId;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall QuestPhaseEntity__CreatePK(int32_t questId, int32_t phase, const MethodInfo *method)
{
  if ( (byte_49BB376 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&phase);
    byte_49BB376 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           questId,
           phase,
           (const MethodInfo_2EFFCAC *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall QuestPhaseEntity__CreatePrimaryKey(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return QuestPhaseEntity__CreatePK(this->fields.questId, this->fields.phase, v2);
}


System_Collections_Generic_Dictionary_string__object__o *__fastcall QuestPhaseEntity__GetAddEquipSkills(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_string__object__o *result; // x0
  __int64 methodPtr_low; // x9
  QuestPhaseEntity_o *v7; // x0
  int32_t v8; // w1
  const MethodInfo *v9; // x2

  if ( (byte_49BB387 & 1) == 0 )
  {
    sub_1B4CF90(&System_Collections_Generic_Dictionary_string__object__TypeInfo, method);
    sub_1B4CF90(&StringLiteral_16358/*"addEquipSkills"*/, v4);
    byte_49BB387 = 1;
  }
  result = (System_Collections_Generic_Dictionary_string__object__o *)QuestPhaseEntity__getScriptObj(
                                                                        this,
                                                                        (System_String_o *)StringLiteral_16358/*"addEquipSkills"*/,
                                                                        v2);
  if ( result )
  {
    methodPtr_low = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (System_Collections_Generic_Dictionary_string__object__c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
    {
      sub_1B4D4AC(result);
      return (System_Collections_Generic_Dictionary_string__object__o *)QuestPhaseEntity__getResultBgmId(v7, v8, v9);
    }
  }
  return result;
}


System_Int32_array *__fastcall QuestPhaseEntity__GetAddUniqueCameraIds(
        QuestPhaseEntity_o *this,
        System_Int32_array *defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_49BB3F3 & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_16371/*"addUniqueCameraIds"*/, defVal);
    byte_49BB3F3 = 1;
  }
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_16371/*"addUniqueCameraIds"*/, defVal, v3);
}


int32_t __fastcall QuestPhaseEntity__GetAdvantageClassId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49BB3B6 & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_16670/*"auto_sel_support_type"*/, method);
    byte_49BB3B6 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_16670/*"auto_sel_support_type"*/, -1, v2);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetAssistIdArray(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Int32_array *v4; // x2
  const MethodInfo *v5; // x3

  if ( (byte_49BB3C5 & 1) == 0 )
  {
    sub_1B4CF90(&int___TypeInfo, method);
    sub_1B4CF90(&StringLiteral_16629/*"assistIds"*/, v3);
    byte_49BB3C5 = 1;
  }
  v4 = (System_Int32_array *)sub_1B4D038(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_16629/*"assistIds"*/, v4, v5);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetAssistWeightArray(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Int32_array *v4; // x2
  const MethodInfo *v5; // x3

  if ( (byte_49BB3C6 & 1) == 0 )
  {
    sub_1B4CF90(&int___TypeInfo, method);
    sub_1B4CF90(&StringLiteral_16628/*"assistIdWeight"*/, v3);
    byte_49BB3C6 = 1;
  }
  v4 = (System_Int32_array *)sub_1B4D038(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_16628/*"assistIdWeight"*/, v4, v5);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetAssumedEffectId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49BB3D8 & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_16632/*"assumedEffectId"*/, method);
    byte_49BB3D8 = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_16632/*"assumedEffectId"*/, 0LL);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetBattleEffectMovieIds(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_49BB3FB & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_3129/*"BattleEffectMovieIds"*/, method);
    byte_49BB3FB = 1;
  }
  return EntityScriptUtil__GetIntArray(this->fields.script, (System_String_o *)StringLiteral_3129/*"BattleEffectMovieIds"*/, 0LL, 0LL);
}


System_String_o *__fastcall QuestPhaseEntity__GetBattleFinishMovie(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49BB39D & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_16791/*"battleFinishMovie"*/, method);
    byte_49BB39D = 1;
  }
  return QuestPhaseEntity__getScriptStr(this, (System_String_o *)StringLiteral_16791/*"battleFinishMovie"*/, 0LL, v2);
}


int32_t __fastcall QuestPhaseEntity__GetBattleFinishWaitTime(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49BB3E1 & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_16792/*"battleFinishWaitTime"*/, method);
    byte_49BB3E1 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_16792/*"battleFinishWaitTime"*/, 0, v2);
}


int32_t __fastcall QuestPhaseEntity__GetBattleItemObjectId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49BB3F0 & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_16796/*"battleItemObjectId"*/, method);
    byte_49BB3F0 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_16796/*"battleItemObjectId"*/, 0, v2);
}


System_Collections_Generic_IEnumerable_int__o *__fastcall QuestPhaseEntity__GetBattleSkillDropEffectIds(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_49BB407 & 1) == 0 )
  {
    sub_1B4CF90(&QuestPhaseEntity__GetBattleSkillDropEffectIds_d__168_TypeInfo, method);
    byte_49BB407 = 1;
  }
  v3 = sub_1B4D1DC(QuestPhaseEntity__GetBattleSkillDropEffectIds_d__168_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = -2;
  *(_DWORD *)(v3 + 24) = System_Environment__get_CurrentManagedThreadId(0LL);
  *(_QWORD *)(v3 + 32) = this;
  sub_1B4CF34((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v4, v5);
  return (System_Collections_Generic_IEnumerable_int__o *)v3;
}


System_Collections_Generic_IEnumerable_FunctionEntity__o *__fastcall QuestPhaseEntity__GetBattleSkillDropFunctionEntities(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_49BB406 & 1) == 0 )
  {
    sub_1B4CF90(&QuestPhaseEntity__GetBattleSkillDropFunctionEntities_d__167_TypeInfo, method);
    byte_49BB406 = 1;
  }
  v3 = sub_1B4D1DC(QuestPhaseEntity__GetBattleSkillDropFunctionEntities_d__167_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = -2;
  *(_DWORD *)(v3 + 32) = System_Environment__get_CurrentManagedThreadId(0LL);
  *(_QWORD *)(v3 + 40) = this;
  sub_1B4CF34((CGThumbnailListItem_o *)(v3 + 40), (int32_t)this, v4, v5);
  return (System_Collections_Generic_IEnumerable_FunctionEntity__o *)v3;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall QuestPhaseEntity__GetBeforeBattleSkillActor(
        QuestPhaseEntity_o *this,
        int32_t defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_49BB3E2 & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_16839/*"beforeBattleSkillActor"*/, *(_QWORD *)&defVal);
    byte_49BB3E2 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_16839/*"beforeBattleSkillActor"*/, defVal, v3);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetBgIndividuality(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Master_object; // x20
  const MethodInfo *v6; // x1
  int32_t PriorityBattleBgId; // w21
  const MethodInfo *v8; // x1
  __int64 PriorityBattleBgType; // x0
  __int64 v10; // x1
  System_Int32_array *result; // x0
  long double inited; // q0
  _QWORD *v13; // x19
  __int64 v14; // x8
  __int64 v15; // x0
  __int64 v16; // x0

  if ( (byte_49BB37C & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Array_Empty_int___, method);
    sub_1B4CF90(&Method_DataManager_GetMaster_BattleBgMaster___, v3);
    sub_1B4CF90(&DataManager_TypeInfo, v4);
    byte_49BB37C = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_BattleBgMaster___);
  PriorityBattleBgId = QuestPhaseEntity__GetPriorityBattleBgId(this, v6);
  PriorityBattleBgType = QuestPhaseEntity__GetPriorityBattleBgType(this, v8);
  if ( !Master_object )
    sub_1B4D1EC(PriorityBattleBgType, v10);
  result = BattleBgMaster__GetBgIndividuality(
             (BattleBgMaster_o *)Master_object,
             PriorityBattleBgId,
             PriorityBattleBgType,
             0LL);
  if ( !result )
  {
    v13 = Method_System_Array_Empty_int___;
    v14 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v14 )
    {
      sub_1B9D67C(Method_System_Array_Empty_int___);
      v14 = v13[7];
    }
    v15 = *(_QWORD *)(v14 + 16);
    if ( (*(_BYTE *)(v15 + 309) & 1) == 0 )
      v15 = sub_1B9D620(inited);
    if ( !*(_DWORD *)(v15 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v15);
    v16 = *(_QWORD *)(v13[7] + 16LL);
    if ( (*(_BYTE *)(v16 + 309) & 1) == 0 )
      v16 = sub_1B9D620(inited);
    return **(System_Int32_array ***)(v16 + 184);
  }
  return result;
}


System_Int32_array *__fastcall QuestPhaseEntity__GetClearGiftItemListDisplay(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Int32_array *v4; // x2
  const MethodInfo *v5; // x3

  if ( (byte_49BB3D5 & 1) == 0 )
  {
    sub_1B4CF90(&int___TypeInfo, method);
    sub_1B4CF90(&StringLiteral_17696/*"clearGiftItemListDisplay"*/, v3);
    byte_49BB3D5 = 1;
  }
  v4 = (System_Int32_array *)sub_1B4D038(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_17696/*"clearGiftItemListDisplay"*/, v4, v5);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetCondHavingIds(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Int32_array *v4; // x2
  const MethodInfo *v5; // x3

  if ( (byte_49BB3C1 & 1) == 0 )
  {
    sub_1B4CF90(&int___TypeInfo, method);
    sub_1B4CF90(&StringLiteral_17893/*"condHaving"*/, v3);
    byte_49BB3C1 = 1;
  }
  v4 = (System_Int32_array *)sub_1B4D038(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_17893/*"condHaving"*/, v4, v5);
}


int32_t __fastcall QuestPhaseEntity__GetCondQuestClearable(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49BB3F7 & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_17896/*"condQuestClearable"*/, method);
    byte_49BB3F7 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_17896/*"condQuestClearable"*/, 0, v2);
}


int32_t __fastcall QuestPhaseEntity__GetCorrectionIconId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49BB3B5 & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_17963/*"correctionIconId"*/, method);
    byte_49BB3B5 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_17963/*"correctionIconId"*/, -1, v2);
}


int32_t __fastcall QuestPhaseEntity__GetDefenceTargetContinueRecoverRate(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49BB3ED & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_19091/*"fieldHpContinueRecoverRate"*/, method);
    byte_49BB3ED = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19091/*"fieldHpContinueRecoverRate"*/, 0, v2);
}


System_String_o *__fastcall QuestPhaseEntity__GetEffectOnMap(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49BB400 & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_10440/*"PlayGetEffectOnMap"*/, method);
    byte_49BB400 = 1;
  }
  return QuestPhaseEntity__getScriptStr(this, (System_String_o *)StringLiteral_10440/*"PlayGetEffectOnMap"*/, 0LL, v2);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetEnemyInfoDispNpcSvtIdList(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Int32_array *v4; // x2
  const MethodInfo *v5; // x3

  if ( (byte_49BB3D3 & 1) == 0 )
  {
    sub_1B4CF90(&int___TypeInfo, method);
    sub_1B4CF90(&StringLiteral_22107/*"overwriteEnemyInfos"*/, v3);
    byte_49BB3D3 = 1;
  }
  v4 = (System_Int32_array *)sub_1B4D038(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_22107/*"overwriteEnemyInfos"*/, v4, v5);
}


System_String_array *__fastcall QuestPhaseEntity__GetEnemyInfoOverwriteNpcSvtNameList(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_String_array *v4; // x2
  const MethodInfo *v5; // x3

  if ( (byte_49BB3D4 & 1) == 0 )
  {
    sub_1B4CF90(&string___TypeInfo, method);
    sub_1B4CF90(&StringLiteral_22106/*"overwriteEnemyInfoNames"*/, v3);
    byte_49BB3D4 = 1;
  }
  v4 = (System_String_array *)sub_1B4D038(string___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptStringArrayParam(this, (System_String_o *)StringLiteral_22106/*"overwriteEnemyInfoNames"*/, v4, v5);
}


int32_t __fastcall QuestPhaseEntity__GetEquipAddId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49BB3D2 & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_18738/*"equipAddId"*/, method);
    byte_49BB3D2 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_18738/*"equipAddId"*/, 0, v2);
}


int32_t __fastcall QuestPhaseEntity__GetFinishEffectId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49BB3B2 & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_19128/*"finishEffectId"*/, method);
    byte_49BB3B2 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19128/*"finishEffectId"*/, -1, v2);
}


int32_t __fastcall QuestPhaseEntity__GetFormationBgmId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49BB3D9 & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_19246/*"formationBgmId"*/, method);
    byte_49BB3D9 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19246/*"formationBgmId"*/, -1, v2);
}


float __fastcall QuestPhaseEntity__GetFormationSubBgmFadeInTime(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49BB3DB & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_19247/*"formationSubBgmFadeInTime"*/, method);
    byte_49BB3DB = 1;
  }
  return (float)QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19247/*"formationSubBgmFadeInTime"*/, 0, v2) / 1000.0;
}


int32_t __fastcall QuestPhaseEntity__GetFormationSubBgmId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49BB3DA & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_19248/*"formationSubBgmId"*/, method);
    byte_49BB3DA = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19248/*"formationSubBgmId"*/, -1, v2);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetGimmickAnimTypeArray(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49BB3B0 & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_19520/*"gimmickAnimType"*/, method);
    byte_49BB3B0 = 1;
  }
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_19520/*"gimmickAnimType"*/, 0LL, v2);
}


int32_t __fastcall QuestPhaseEntity__GetGimmickId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49BB3A9 & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_19521/*"gimmickId"*/, method);
    byte_49BB3A9 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19521/*"gimmickId"*/, -1, v2);
}


System_Object_array *__fastcall QuestPhaseEntity__GetGimmickResultVoiceArray(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49BB3AF & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_22633/*"resultVoice"*/, method);
    byte_49BB3AF = 1;
  }
  return QuestPhaseEntity__getScriptObjArrayParam(this, (System_String_o *)StringLiteral_22633/*"resultVoice"*/, 0LL, v2);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetGimmickSkillIdArray(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Int32_array *v4; // x2
  const MethodInfo *v5; // x3

  if ( (byte_49BB3AC & 1) == 0 )
  {
    sub_1B4CF90(&int___TypeInfo, method);
    sub_1B4CF90(&StringLiteral_22551/*"reelSkill"*/, v3);
    byte_49BB3AC = 1;
  }
  v4 = (System_Int32_array *)sub_1B4D038(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_22551/*"reelSkill"*/, v4, v5);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetGimmickSkillRateArray(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Int32_array *v4; // x2
  const MethodInfo *v5; // x3

  if ( (byte_49BB3AD & 1) == 0 )
  {
    sub_1B4CF90(&int___TypeInfo, method);
    sub_1B4CF90(&StringLiteral_22550/*"reelRate"*/, v3);
    byte_49BB3AD = 1;
  }
  v4 = (System_Int32_array *)sub_1B4D038(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_22550/*"reelRate"*/, v4, v5);
}


System_String_array *__fastcall QuestPhaseEntity__GetGimmickStartVoiceArray(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49BB3AE & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_23226/*"startVoice"*/, method);
    byte_49BB3AE = 1;
  }
  return QuestPhaseEntity__getScriptStringArrayParam(this, (System_String_o *)StringLiteral_23226/*"startVoice"*/, 0LL, v2);
}


int32_t __fastcall QuestPhaseEntity__GetGimmickSvtId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49BB3AA & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_19522/*"gimmickSvtId"*/, method);
    byte_49BB3AA = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19522/*"gimmickSvtId"*/, -1, v2);
}


int32_t __fastcall QuestPhaseEntity__GetIconItemNumberDispType(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49BB3F2 & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_19773/*"iconItemNumberDispType"*/, method);
    byte_49BB3F2 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19773/*"iconItemNumberDispType"*/, 0, v2);
}


float __fastcall QuestPhaseEntity__GetIncomingCallDispTime(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49BB3E5 & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_20332/*"incomingCallDispTime"*/, method);
    byte_49BB3E5 = 1;
  }
  return (float)QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20332/*"incomingCallDispTime"*/, 500, v2) / 1000.0;
}


System_String_o *__fastcall QuestPhaseEntity__GetIncomingCallMessage(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1

  if ( (byte_49BB3E4 & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_20333/*"incomingCallMessage"*/, method);
    sub_1B4CF90(&StringLiteral_1/*""*/, v4);
    byte_49BB3E4 = 1;
  }
  return QuestPhaseEntity__getScriptStr(
           this,
           (System_String_o *)StringLiteral_20333/*"incomingCallMessage"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


System_String_o *__fastcall QuestPhaseEntity__GetIncomingCallTitle(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1

  if ( (byte_49BB3E3 & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_20334/*"incomingCallTitle"*/, method);
    sub_1B4CF90(&StringLiteral_1/*""*/, v4);
    byte_49BB3E3 = 1;
  }
  return QuestPhaseEntity__getScriptStr(
           this,
           (System_String_o *)StringLiteral_20334/*"incomingCallTitle"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


int32_t __fastcall QuestPhaseEntity__GetInitEventDeckNo(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49BB40A & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_20372/*"initEventDeckNo"*/, method);
    byte_49BB40A = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_20372/*"initEventDeckNo"*/, 0, 0LL);
}


System_String_o *__fastcall QuestPhaseEntity__GetMapModelEntryAnimationName(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1

  if ( (byte_49BB3DF & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_1410/*"3dMapEntryAnimName"*/, method);
    sub_1B4CF90(&StringLiteral_1/*""*/, v4);
    byte_49BB3DF = 1;
  }
  return QuestPhaseEntity__getScriptStr(
           this,
           (System_String_o *)StringLiteral_1410/*"3dMapEntryAnimName"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


int32_t __fastcall QuestPhaseEntity__GetMasterSkillDelay(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49BB3BB & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_21029/*"masterSkillDelay"*/, method);
    byte_49BB3BB = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21029/*"masterSkillDelay"*/, 0, v2);
}


System_String_o *__fastcall QuestPhaseEntity__GetMasterSkillDelayInfo(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49BB3BC & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_21030/*"masterSkillDelayInfo"*/, method);
    byte_49BB3BC = 1;
  }
  return QuestPhaseEntity__getScriptStr(this, (System_String_o *)StringLiteral_21030/*"masterSkillDelayInfo"*/, 0LL, v2);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetMoveSceneInfo(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Int32_array *v4; // x2
  const MethodInfo *v5; // x3

  if ( (byte_49BB3E7 & 1) == 0 )
  {
    sub_1B4CF90(&int___TypeInfo, method);
    sub_1B4CF90(&StringLiteral_21232/*"moveSceneInfo"*/, v3);
    byte_49BB3E7 = 1;
  }
  v4 = (System_Int32_array *)sub_1B4D038(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_21232/*"moveSceneInfo"*/, v4, v5);
}


int32_t __fastcall QuestPhaseEntity__GetMovieAfterCrossFadeStartFrame(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49BB3A4 & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_21237/*"movieAfterCrossFadeStartFrame"*/, method);
    byte_49BB3A4 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21237/*"movieAfterCrossFadeStartFrame"*/, 0, v2);
}


int32_t __fastcall QuestPhaseEntity__GetMovieAfterCrossFadeTime(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49BB3A3 & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_21238/*"movieAfterCrossFadeTime"*/, method);
    byte_49BB3A3 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21238/*"movieAfterCrossFadeTime"*/, 0, v2);
}


int32_t __fastcall QuestPhaseEntity__GetNextSceneId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49BB3BF & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_21774/*"nextSceneId"*/, method);
    byte_49BB3BF = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21774/*"nextSceneId"*/, 0, v2);
}


System_String_array *__fastcall QuestPhaseEntity__GetNextSceneParam(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  System_String_array *result; // x0

  if ( (byte_49BB3C0 & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_21775/*"nextSceneParam"*/, method);
    byte_49BB3C0 = 1;
  }
  result = (System_String_array *)QuestPhaseEntity__getScriptStr(this, (System_String_o *)StringLiteral_21775/*"nextSceneParam"*/, 0LL, v2);
  if ( result )
    return System_String__Split((System_String_o *)result, 0x2Cu, 0, 0LL);
  return result;
}


int32_t __fastcall QuestPhaseEntity__GetNotDispEquipSkillChargeTurn(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49BB3F1 & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_21864/*"notDispEquipSkillChargeTurn"*/, method);
    byte_49BB3F1 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21864/*"notDispEquipSkillChargeTurn"*/, 0, v2);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetNotHavingQuests(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Int32_array *v4; // x2
  const MethodInfo *v5; // x3

  if ( (byte_49BB3C2 & 1) == 0 )
  {
    sub_1B4CF90(&int___TypeInfo, method);
    sub_1B4CF90(&StringLiteral_21869/*"notHavingQuest"*/, v3);
    byte_49BB3C2 = 1;
  }
  v4 = (System_Int32_array *)sub_1B4D038(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_21869/*"notHavingQuest"*/, v4, v5);
}


System_Collections_Generic_Dictionary_int__int____o *__fastcall QuestPhaseEntity__GetNpcAiInfo(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
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
  __int64 v12; // x21
  System_Collections_Generic_Dictionary_int__object__o *v13; // x22
  struct System_Collections_Generic_Dictionary_string__object__o *v14; // x0
  __int64 v15; // x1
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  System_Collections_Generic_Dictionary_int__int____o **v18; // x20
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  Il2CppObject *v20; // x22
  __int64 methodPtr_low; // x10
  const MethodInfo *v22; // x2
  System_Action_object__o *v24; // x19
  Il2CppObject *obj; // [xsp+0h] [xbp-40h] BYREF
  Il2CppObject *value; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_49BB3D0 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_object__TypeInfo, method);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v3);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_int__int_____ctor__, v4);
    sub_1B4CF90(&System_Collections_Generic_Dictionary_int__int____TypeInfo, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_List_object__ForEach__, v6);
    sub_1B4CF90(&System_Collections_Generic_List_object__TypeInfo, v7);
    sub_1B4CF90(&Method_QuestPhaseEntity___c__DisplayClass113_0__GetNpcAiInfo_b__0__, v8);
    sub_1B4CF90(&QuestPhaseEntity___c__DisplayClass113_0_TypeInfo, v9);
    sub_1B4CF90(&StringLiteral_16414/*"aiMultiNpc"*/, v10);
    sub_1B4CF90(&StringLiteral_16415/*"aiNpc"*/, v11);
    byte_49BB3D0 = 1;
  }
  obj = 0LL;
  value = 0LL;
  v12 = sub_1B4D1DC(QuestPhaseEntity___c__DisplayClass113_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  v13 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B4D1DC(System_Collections_Generic_Dictionary_int__int____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v13,
    (const MethodInfo_31F64AC *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  if ( !v12 )
    goto LABEL_14;
  *(_QWORD *)(v12 + 16) = v13;
  v18 = (System_Collections_Generic_Dictionary_int__int____o **)(v12 + 16);
  sub_1B4CF34((CGThumbnailListItem_o *)(v12 + 16), (int32_t)v13, v16, v17);
  script = this->fields.script;
  if ( !script )
    return *v18;
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)script,
         (Il2CppObject *)StringLiteral_16414/*"aiMultiNpc"*/,
         &value,
         (const MethodInfo_3259324 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    v20 = value;
    if ( value )
    {
      methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(value->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
        && (System_Collections_Generic_List_object__c *)value->klass->_2.typeHierarchy[methodPtr_low - 1] == System_Collections_Generic_List_object__TypeInfo )
      {
        v24 = (System_Action_object__o *)sub_1B4D1DC(System_Action_object__TypeInfo);
        System_Action_object____ctor(
          v24,
          (Il2CppObject *)v12,
          Method_QuestPhaseEntity___c__DisplayClass113_0__GetNpcAiInfo_b__0__,
          0LL);
        System_Collections_Generic_List_object___ForEach(
          (System_Collections_Generic_List_object__o *)v20,
          (System_Action_T__o *)v24,
          (const MethodInfo_3580C1C *)Method_System_Collections_Generic_List_object__ForEach__);
        return *v18;
      }
    }
  }
  v14 = this->fields.script;
  if ( !v14 )
LABEL_14:
    sub_1B4D1EC(v14, v15);
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)v14,
         (Il2CppObject *)StringLiteral_16415/*"aiNpc"*/,
         &obj,
         (const MethodInfo_3259324 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    QuestPhaseEntity__SetNpcAiInfo((System_Collections_Generic_IDictionary_int__int____o *)*v18, obj, v22);
  }
  return *v18;
}


System_String_o *__fastcall QuestPhaseEntity__GetOpenedPeriodMessage(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_49BB409 & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_22041/*"openPeriodMessage"*/, method);
    byte_49BB409 = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_22041/*"openPeriodMessage"*/, 0LL, 0LL);
}


int32_t __fastcall QuestPhaseEntity__GetOpenedPeriodPrivilegeId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49BB408 & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_22042/*"openPeriodPrivilegeId"*/, method);
    byte_49BB408 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22042/*"openPeriodPrivilegeId"*/, 0, 0LL);
}


int32_t __fastcall QuestPhaseEntity__GetOverWriteMasterImageId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49BB3A1 & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_21019/*"masterImageId"*/, method);
    byte_49BB3A1 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21019/*"masterImageId"*/, 0, v2);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall QuestPhaseEntity__GetOverwriteCommandSpellContinue(
        QuestPhaseEntity_o *this,
        int32_t def,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_49BB3CA & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_22098/*"overwriteCommandSpellContinue"*/, *(_QWORD *)&def);
    byte_49BB3CA = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22098/*"overwriteCommandSpellContinue"*/, def, v3);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall QuestPhaseEntity__GetOverwriteCommandSpellIcon(
        QuestPhaseEntity_o *this,
        int32_t genderType,
        System_Int32_array *defVal,
        const MethodInfo *method)
{
  System_Int32_array *ScriptIntArrayParam; // x0
  __int64 v8; // x1

  if ( (byte_49BB3DD & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_22099/*"overwriteCommandSpellIcons"*/, *(_QWORD *)&genderType);
    byte_49BB3DD = 1;
  }
  ScriptIntArrayParam = QuestPhaseEntity__getScriptIntArrayParam(
                          this,
                          (System_String_o *)StringLiteral_22099/*"overwriteCommandSpellIcons"*/,
                          defVal,
                          method);
  if ( ScriptIntArrayParam )
  {
    if ( genderType == 2 )
    {
      if ( ScriptIntArrayParam->max_length > 1 )
      {
        LODWORD(ScriptIntArrayParam) = ScriptIntArrayParam->m_Items[2];
        return (int)ScriptIntArrayParam;
      }
    }
    else
    {
      if ( genderType != 1 )
      {
        LODWORD(ScriptIntArrayParam) = 0;
        return (int)ScriptIntArrayParam;
      }
      if ( ScriptIntArrayParam->max_length )
      {
        LODWORD(ScriptIntArrayParam) = ScriptIntArrayParam->m_Items[1];
        return (int)ScriptIntArrayParam;
      }
    }
    sub_1B4D1F4(ScriptIntArrayParam, v8);
  }
  return (int)ScriptIntArrayParam;
}


System_Collections_Generic_Dictionary_string__object__o *__fastcall QuestPhaseEntity__GetOverwriteEquipSkills(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_string__object__o *result; // x0
  __int64 methodPtr_low; // x9
  QuestPhaseEntity_o *v7; // x0
  const MethodInfo *v8; // x1

  if ( (byte_49BB386 & 1) == 0 )
  {
    sub_1B4CF90(&System_Collections_Generic_Dictionary_string__object__TypeInfo, method);
    sub_1B4CF90(&StringLiteral_22109/*"overwriteEquipSkills"*/, v4);
    byte_49BB386 = 1;
  }
  result = (System_Collections_Generic_Dictionary_string__object__o *)QuestPhaseEntity__getScriptObj(
                                                                        this,
                                                                        (System_String_o *)StringLiteral_22109/*"overwriteEquipSkills"*/,
                                                                        v2);
  if ( result )
  {
    methodPtr_low = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (System_Collections_Generic_Dictionary_string__object__c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
    {
      sub_1B4D4AC(result);
      return QuestPhaseEntity__GetAddEquipSkills(v7, v8);
    }
  }
  return result;
}


bool __fastcall QuestPhaseEntity__GetOverwriteLimitCountSvtIds(
        QuestPhaseEntity_o *this,
        System_Int32_array **overwriteLimitCountSvtIds,
        System_Int32_array **overwriteLimitCounts,
        System_Int32_array **overwriteLimitCountIconIds,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  System_Int32_array *ScriptIntArrayParam; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  System_Int32_array *v16; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x3
  System_Int32_array *v20; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  int32_t v24; // w2
  const MethodInfo *v25; // x3

  if ( (byte_49BB3B7 & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_22113/*"overwriteLimitCountSvtIds"*/, overwriteLimitCountSvtIds);
    sub_1B4CF90(&StringLiteral_22114/*"overwriteLimitCounts"*/, v9);
    sub_1B4CF90(&StringLiteral_22112/*"overwriteLimitCountIconIds"*/, v10);
    byte_49BB3B7 = 1;
  }
  ScriptIntArrayParam = QuestPhaseEntity__getScriptIntArrayParam(
                          this,
                          (System_String_o *)StringLiteral_22113/*"overwriteLimitCountSvtIds"*/,
                          0LL,
                          (const MethodInfo *)overwriteLimitCountIconIds);
  *overwriteLimitCountSvtIds = ScriptIntArrayParam;
  sub_1B4CF34((CGThumbnailListItem_o *)overwriteLimitCountSvtIds, (int32_t)ScriptIntArrayParam, v12, v13);
  if ( *overwriteLimitCountSvtIds )
  {
    v16 = QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_22114/*"overwriteLimitCounts"*/, 0LL, v15);
    *overwriteLimitCounts = v16;
    sub_1B4CF34((CGThumbnailListItem_o *)overwriteLimitCounts, (int32_t)v16, v17, v18);
    v20 = QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_22112/*"overwriteLimitCountIconIds"*/, 0LL, v19);
    *overwriteLimitCountIconIds = v20;
    sub_1B4CF34((CGThumbnailListItem_o *)overwriteLimitCountIconIds, (int32_t)v20, v21, v22);
    return *overwriteLimitCounts != 0LL;
  }
  else
  {
    *overwriteLimitCounts = 0LL;
    sub_1B4CF34((CGThumbnailListItem_o *)overwriteLimitCounts, 0, v14, v15);
    *overwriteLimitCountIconIds = 0LL;
    sub_1B4CF34((CGThumbnailListItem_o *)overwriteLimitCountIconIds, 0, v24, v25);
    return 0;
  }
}


System_Int32_array *__fastcall QuestPhaseEntity__GetOverwriteResultBgmCondIds(
        QuestPhaseEntity_o *this,
        System_Int32_array *defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_49BB38A & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_22123/*"overwriteResultBgmCondIds"*/, defVal);
    byte_49BB38A = 1;
  }
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_22123/*"overwriteResultBgmCondIds"*/, defVal, v3);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetOverwriteResultBgmIds(
        QuestPhaseEntity_o *this,
        System_Int32_array *defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_49BB389 & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_22124/*"overwriteResultBgmIds"*/, defVal);
    byte_49BB389 = 1;
  }
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_22124/*"overwriteResultBgmIds"*/, defVal, v3);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetPrioredIndividuality(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  System_Int32_array *result; // x0
  long double inited; // q0
  _QWORD *v5; // x19
  __int64 v6; // x8
  __int64 v7; // x0
  __int64 v8; // x0

  if ( (byte_49BB37A & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Array_Empty_int___, method);
    byte_49BB37A = 1;
  }
  result = QuestPhaseEntity__GetPrioredIndividualityLocal(this, method);
  if ( !result )
  {
    v5 = Method_System_Array_Empty_int___;
    v6 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v6 )
    {
      sub_1B9D67C(Method_System_Array_Empty_int___);
      v6 = v5[7];
    }
    v7 = *(_QWORD *)(v6 + 16);
    if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
      v7 = sub_1B9D620(inited);
    if ( !*(_DWORD *)(v7 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v7);
    v8 = *(_QWORD *)(v5[7] + 16LL);
    if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
      v8 = sub_1B9D620(inited);
    return **(System_Int32_array ***)(v8 + 184);
  }
  return result;
}


System_Int32_array *__fastcall QuestPhaseEntity__GetPrioredIndividualityLocal(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Master_object; // x20
  const MethodInfo *v6; // x1
  System_Int32_array *UniqueId; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x3
  System_Int32_array *result; // x0
  const MethodInfo *v11; // x1
  QuestPhaseIndividualityEntity_o *v12; // x20
  const MethodInfo *v13; // x2
  QuestPhaseIndividualityEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49BB37B & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMaster_QuestBehaviorMaster___, method);
    sub_1B4CF90(&Method_DataManager_GetMaster_QuestPhaseIndividualityMaster___, v3);
    sub_1B4CF90(&DataManager_TypeInfo, v4);
    byte_49BB37B = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_QuestBehaviorMaster___);
  UniqueId = (System_Int32_array *)QuestPhaseEntity__GetUniqueId(this, v6);
  if ( !Master_object )
    goto LABEL_15;
  result = QuestBehaviorMaster__GetBattleIndividuality(
             (QuestBehaviorMaster_o *)Master_object,
             (int64_t)UniqueId,
             0LL,
             v9);
  if ( !result )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    UniqueId = (System_Int32_array *)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_QuestPhaseIndividualityMaster___);
    if ( !UniqueId )
      goto LABEL_15;
    if ( QuestPhaseIndividualityMaster__TryGetEntity(
           (QuestPhaseIndividualityMaster_o *)UniqueId,
           &entity,
           this->fields.questId,
           this->fields.phase,
           0LL) )
    {
      v12 = entity;
      UniqueId = QuestPhaseEntity__GetBgIndividuality(this, v11);
      if ( v12 )
        return QuestPhaseIndividualityEntity__GetAddAndDelAfterIndividuality(v12, UniqueId, v13);
LABEL_15:
      sub_1B4D1EC(UniqueId, v8);
    }
    return this->fields.individuality;
  }
  return result;
}


int32_t __fastcall QuestPhaseEntity__GetPriorityBattleBgId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Master_object; // x20
  const MethodInfo *v5; // x1
  int64_t UniqueId; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3

  if ( (byte_49BB37D & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMaster_QuestBehaviorMaster___, method);
    sub_1B4CF90(&DataManager_TypeInfo, v3);
    byte_49BB37D = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_QuestBehaviorMaster___);
  UniqueId = QuestPhaseEntity__GetUniqueId(this, v5);
  if ( !Master_object )
    sub_1B4D1EC(UniqueId, v7);
  return QuestBehaviorMaster__GetBattleBg((QuestBehaviorMaster_o *)Master_object, UniqueId, this->fields.battleBgId, v8);
}


int32_t __fastcall QuestPhaseEntity__GetPriorityBattleBgType(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Master_object; // x20
  const MethodInfo *v5; // x1
  int64_t UniqueId; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3

  if ( (byte_49BB37E & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMaster_QuestBehaviorMaster___, method);
    sub_1B4CF90(&DataManager_TypeInfo, v3);
    byte_49BB37E = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_QuestBehaviorMaster___);
  UniqueId = QuestPhaseEntity__GetUniqueId(this, v5);
  if ( !Master_object )
    sub_1B4D1EC(UniqueId, v7);
  return QuestBehaviorMaster__GetBattleBgType(
           (QuestBehaviorMaster_o *)Master_object,
           UniqueId,
           this->fields.battleBgType,
           v8);
}


int32_t __fastcall QuestPhaseEntity__GetProgressAfterMovie(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49BB39F & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_22349/*"progressAfterMovie"*/, method);
    byte_49BB39F = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22349/*"progressAfterMovie"*/, 0, v2);
}


int32_t __fastcall QuestPhaseEntity__GetQuestPhaseSelectRoute(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1
  int32_t ScriptIntParam; // w0
  int32_t v6; // w19
  Il2CppObject *Instance; // x0
  __int64 v8; // x1

  if ( (byte_49BB394 & 1) == 0 )
  {
    sub_1B4CF90(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, method);
    sub_1B4CF90(&StringLiteral_22236/*"phaseRouteSelect"*/, v4);
    byte_49BB394 = 1;
  }
  ScriptIntParam = QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22236/*"phaseRouteSelect"*/, 0, v2);
  if ( ScriptIntParam < 1 )
    return 0;
  v6 = ScriptIntParam;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37B4830 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Instance )
    sub_1B4D1EC(0LL, v8);
  if ( clsQuestCheck__CheckQuestPlayableNow((clsQuestCheck_o *)Instance, v6, 0LL) )
    return v6;
  else
    return 0;
}


System_Int32_array *__fastcall QuestPhaseEntity__GetReelIconIdArray(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Int32_array *v4; // x2
  const MethodInfo *v5; // x3

  if ( (byte_49BB3AB & 1) == 0 )
  {
    sub_1B4CF90(&int___TypeInfo, method);
    sub_1B4CF90(&StringLiteral_22549/*"reelIcon"*/, v3);
    byte_49BB3AB = 1;
  }
  v4 = (System_Int32_array *)sub_1B4D038(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_22549/*"reelIcon"*/, v4, v5);
}


int32_t __fastcall QuestPhaseEntity__GetReferToQuestPhase(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49BB3F8 & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_22555/*"referToQuestPhase"*/, method);
    byte_49BB3F8 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22555/*"referToQuestPhase"*/, 0, v2);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetSelectableQuests(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49BB393 & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_22419/*"questSelect"*/, method);
    byte_49BB393 = 1;
  }
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_22419/*"questSelect"*/, 0LL, v2);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall QuestPhaseEntity__GetSelectedQuestId(
        QuestPhaseEntity_o *this,
        int32_t questId,
        int32_t selectIndex,
        const MethodInfo *method)
{
  System_Int32_array *SelectableQuests; // x0
  const MethodInfo *v8; // x1
  int32_t max_length; // w8
  int32_t result; // w0

  SelectableQuests = QuestPhaseEntity__GetSelectableQuests(this, *(const MethodInfo **)&questId);
  if ( (selectIndex & 0x80000000) != 0
    || !SelectableQuests
    || (max_length = SelectableQuests->max_length, max_length <= selectIndex) )
  {
    result = QuestPhaseEntity__GetQuestPhaseSelectRoute(this, v8);
    if ( result < 1 )
      return questId;
  }
  else
  {
    if ( max_length <= (unsigned int)selectIndex )
      sub_1B4D1F4(SelectableQuests, v8);
    return SelectableQuests->m_Items[selectIndex + 1];
  }
  return result;
}


System_Int32_array *__fastcall QuestPhaseEntity__GetShadowOffSvtIds(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Int32_array *v4; // x2
  const MethodInfo *v5; // x3

  if ( (byte_49BB3BA & 1) == 0 )
  {
    sub_1B4CF90(&int___TypeInfo, method);
    sub_1B4CF90(&StringLiteral_22973/*"shadowOffSvtIds"*/, v3);
    byte_49BB3BA = 1;
  }
  v4 = (System_Int32_array *)sub_1B4D038(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_22973/*"shadowOffSvtIds"*/, v4, v5);
}


int32_t __fastcall QuestPhaseEntity__GetSingleForceSvtId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49BB3B8 & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_23062/*"singleForceSvtId"*/, method);
    byte_49BB3B8 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_23062/*"singleForceSvtId"*/, 0, v2);
}


int32_t __fastcall QuestPhaseEntity__GetStartBattleSoundMode(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49BB3F6 & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_12752/*"StartBattleSoundMode"*/, method);
    byte_49BB3F6 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_12752/*"StartBattleSoundMode"*/, 0, v2);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetStartMovieWave(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49BB3A0 & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_21242/*"movieWave"*/, method);
    byte_49BB3A0 = 1;
  }
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_21242/*"movieWave"*/, 0LL, v2);
}


int32_t __fastcall QuestPhaseEntity__GetStartScreenEffect(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49BB3F5 & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_12751/*"StartBattleScreenEffect"*/, method);
    byte_49BB3F5 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_12751/*"StartBattleScreenEffect"*/, 0, v2);
}


int32_t __fastcall QuestPhaseEntity__GetSupportInitDeckIndex(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49BB3CB & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_18822/*"eventDeckIndex"*/, method);
    byte_49BB3CB = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_18822/*"eventDeckIndex"*/, 0, v2);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetTakeOverEnemyNpcIds(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_49BB404 & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_23556/*"takeOverEnemyNpcIds"*/, method);
    byte_49BB404 = 1;
  }
  return EntityScriptUtil__GetIntArray(this->fields.script, (System_String_o *)StringLiteral_23556/*"takeOverEnemyNpcIds"*/, 0LL, 0LL);
}


int32_t __fastcall QuestPhaseEntity__GetTemporaryCommandSpell(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49BB3C8 & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_23603/*"temporaryCommandSpell"*/, method);
    byte_49BB3C8 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_23603/*"temporaryCommandSpell"*/, -1, v2);
}


int64_t __fastcall QuestPhaseEntity__GetUniqueId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  int32_t phase; // w19
  int32_t questId; // w20

  if ( (byte_49BB379 & 1) == 0 )
  {
    sub_1B4CF90(&BattleDataDefine_TypeInfo, method);
    byte_49BB379 = 1;
  }
  questId = this->fields.questId;
  phase = this->fields.phase;
  if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
  return BattleDataDefine__MakeQuestPhaseUniqueId(questId, phase, 0LL);
}


int32_t __fastcall QuestPhaseEntity__GetUserEventDeckNo(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49BB3B9 & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_24065/*"useEventDeckNo"*/, method);
    byte_49BB3B9 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_24065/*"useEventDeckNo"*/, 1, v2);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetVoiceOffPlayerSvtIdArray(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_49BB3DC & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_24300/*"voiceOffMySvtIds"*/, method);
    byte_49BB3DC = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_24300/*"voiceOffMySvtIds"*/, 0LL);
}


System_String_o *__fastcall QuestPhaseEntity__GetWarBoardStartMovieName(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1

  if ( (byte_49BB3D6 & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_15294/*"WarBoardStartMovieName"*/, method);
    sub_1B4CF90(&StringLiteral_1/*""*/, v4);
    byte_49BB3D6 = 1;
  }
  return QuestPhaseEntity__getScriptStr(
           this,
           (System_String_o *)StringLiteral_15294/*"WarBoardStartMovieName"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


System_String_array *__fastcall QuestPhaseEntity__GetWaveStartMovie(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49BB39E & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_24381/*"waveStartMovie"*/, method);
    byte_49BB39E = 1;
  }
  return QuestPhaseEntity__getScriptStringArrayParam(this, (System_String_o *)StringLiteral_24381/*"waveStartMovie"*/, 0LL, v2);
}


int32_t __fastcall QuestPhaseEntity__GetWinBgmOffFlg(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49BB3B3 & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_18689/*"endBgmOff"*/, method);
    byte_49BB3B3 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_18689/*"endBgmOff"*/, 0, v2);
}


int32_t __fastcall QuestPhaseEntity__GetWinVoiceOffFlg(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49BB3B1 & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_18702/*"endVoiceOff"*/, method);
    byte_49BB3B1 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_18702/*"endVoiceOff"*/, 0, v2);
}


bool __fastcall QuestPhaseEntity__HasReleaseFocusQuestBoardKey(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49BB3EE & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_20527/*"isReleaseFocus"*/, method);
    byte_49BB3EE = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_20527/*"isReleaseFocus"*/, 0LL);
}


bool __fastcall QuestPhaseEntity__IsActiveAssistSkill(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Int32_array *v4; // x0
  const MethodInfo *v5; // x3
  System_Int32_array *ScriptIntArrayParam; // x0
  __int64 v7; // x1

  if ( (byte_49BB3C4 & 1) == 0 )
  {
    sub_1B4CF90(&int___TypeInfo, method);
    sub_1B4CF90(&StringLiteral_16629/*"assistIds"*/, v3);
    byte_49BB3C4 = 1;
  }
  v4 = (System_Int32_array *)sub_1B4D038(int___TypeInfo, 0LL);
  ScriptIntArrayParam = QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_16629/*"assistIds"*/, v4, v5);
  if ( !ScriptIntArrayParam )
    sub_1B4D1EC(0LL, v7);
  return ScriptIntArrayParam->max_length != 0;
}


bool __fastcall QuestPhaseEntity__IsAreaImporveQuest(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_49BB3D7 & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_16579/*"areaImprovementQuest"*/, method);
    byte_49BB3D7 = 1;
  }
  return QuestPhaseEntity__getScriptObj(this, (System_String_o *)StringLiteral_16579/*"areaImprovementQuest"*/, v2) != 0LL;
}


bool __fastcall QuestPhaseEntity__IsAutoExecute(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49BB3FF & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_20491/*"isAutoExecute"*/, method);
    byte_49BB3FF = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_20491/*"isAutoExecute"*/, 0LL);
}


bool __fastcall QuestPhaseEntity__IsContinueWaveRestart(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49BB3EC & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_17941/*"continueWaveRestart"*/, method);
    byte_49BB3EC = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_17941/*"continueWaveRestart"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__IsFadeOutMainBgmBeforeBattle(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49BB3F9 & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_19064/*"fadeOutMainBgmBeforeBattle"*/, method);
    byte_49BB3F9 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_19064/*"fadeOutMainBgmBeforeBattle"*/, 0LL);
}


bool __fastcall QuestPhaseEntity__IsHideAssistConfButton(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49BB3C7 & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_19611/*"hideAssistConfButton"*/, method);
    byte_49BB3C7 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19611/*"hideAssistConfButton"*/, 0, v2) != 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestPhaseEntity__IsHideBattlePointGauge(
        QuestPhaseEntity_o *this,
        int32_t battlePointId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_IEnumerable_TSource__o *IntArray; // x0

  if ( (byte_49BB3FE & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Linq_Enumerable_Contains_int___, *(_QWORD *)&battlePointId);
    sub_1B4CF90(&StringLiteral_7152/*"HideBattlePointGauge"*/, v5);
    byte_49BB3FE = 1;
  }
  IntArray = (System_Collections_Generic_IEnumerable_TSource__o *)EntityScriptUtil__GetIntArray(
                                                                    this->fields.script,
                                                                    (System_String_o *)StringLiteral_7152/*"HideBattlePointGauge"*/,
                                                                    0LL,
                                                                    0LL);
  if ( IntArray )
    LOBYTE(IntArray) = System_Linq_Enumerable__Contains_int_(
                         IntArray,
                         battlePointId,
                         (const MethodInfo_2F1C00C *)Method_System_Linq_Enumerable_Contains_int___);
  return (char)IntArray;
}


bool __fastcall QuestPhaseEntity__IsIgnoreBattleLoseDialog(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49BB398 & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_19923/*"ignoreBattleLoseDialog"*/, method);
    byte_49BB398 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_19923/*"ignoreBattleLoseDialog"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestPhaseEntity__IsIgnoreBattlePointUp(
        QuestPhaseEntity_o *this,
        int32_t battlePointId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_IEnumerable_TSource__o *IntArray; // x0

  if ( (byte_49BB3FC & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Linq_Enumerable_Contains_int___, *(_QWORD *)&battlePointId);
    sub_1B4CF90(&StringLiteral_7358/*"IgnoreBattlePointUp"*/, v5);
    byte_49BB3FC = 1;
  }
  IntArray = (System_Collections_Generic_IEnumerable_TSource__o *)EntityScriptUtil__GetIntArray(
                                                                    this->fields.script,
                                                                    (System_String_o *)StringLiteral_7358/*"IgnoreBattlePointUp"*/,
                                                                    0LL,
                                                                    0LL);
  if ( IntArray )
    LOBYTE(IntArray) = System_Linq_Enumerable__Contains_int_(
                         IntArray,
                         battlePointId,
                         (const MethodInfo_2F1C00C *)Method_System_Linq_Enumerable_Contains_int___);
  return (char)IntArray;
}


bool __fastcall QuestPhaseEntity__IsInterruptionQuest(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49BB3F4 & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_20418/*"interruptibleQuest"*/, method);
    byte_49BB3F4 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20418/*"interruptibleQuest"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__IsInvisibleConnectAndLoad(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49BB3BE & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_20458/*"invisibleConnectAndLoad"*/, method);
    byte_49BB3BE = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20458/*"invisibleConnectAndLoad"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__IsKeepFieldBuffWhenMoveNextBattle(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49BB40B & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_20684/*"keepFieldBuffWhenMoveNextBattle"*/, method);
    byte_49BB40B = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_20684/*"keepFieldBuffWhenMoveNextBattle"*/, 0, 0LL) != 0;
}


bool __fastcall QuestPhaseEntity__IsKeepSubBgmAfterBattleResult(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49BB3B4 & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_20687/*"keepSubBgmUntilBattleResult"*/, method);
    byte_49BB3B4 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_20687/*"keepSubBgmUntilBattleResult"*/, 0LL);
}


bool __fastcall QuestPhaseEntity__IsMatchIndividuality(
        QuestPhaseEntity_o *this,
        System_Int32_array *individualitys,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_IEnumerable_T__o *PrioredIndividuality; // x21
  System_Collections_Generic_HashSet_int__o *v9; // x20
  System_Predicate_int__o *All_int; // x0
  __int64 v11; // x1
  System_Predicate_T__o *v12; // x21

  if ( (byte_49BB3BD & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Array_FindAll_int___, individualitys);
    sub_1B4CF90(&Method_System_Collections_Generic_HashSet_int___ctor___75423184, v5);
    sub_1B4CF90(&System_Collections_Generic_HashSet_int__TypeInfo, v6);
    sub_1B4CF90(&System_Predicate_int__TypeInfo, v7);
    byte_49BB3BD = 1;
  }
  PrioredIndividuality = (System_Collections_Generic_IEnumerable_T__o *)QuestPhaseEntity__GetPrioredIndividuality(
                                                                          this,
                                                                          (const MethodInfo *)individualitys);
  v9 = (System_Collections_Generic_HashSet_int__o *)sub_1B4D1DC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor_54781132(
    v9,
    PrioredIndividuality,
    (const MethodInfo_343E4CC *)Method_System_Collections_Generic_HashSet_int___ctor___75423184);
  All_int = (System_Predicate_int__o *)sub_1B4D1DC(System_Predicate_int__TypeInfo);
  if ( !v9
    || (v12 = (System_Predicate_T__o *)All_int,
        System_Predicate_int____ctor(All_int, (Il2CppObject *)v9, (intptr_t)v9->klass->vtable._9_CopyTo.methodPtr, 0LL),
        (All_int = (System_Predicate_int__o *)System_Array__FindAll_int_(
                                                individualitys,
                                                v12,
                                                (const MethodInfo_2FF9668 *)Method_System_Array_FindAll_int___)) == 0LL) )
  {
    sub_1B4D1EC(All_int, v11);
  }
  return All_int->fields.m_target != 0LL;
}


bool __fastcall QuestPhaseEntity__IsNonStopEndBgm(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49BB395 & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_21831/*"nonStopEndBgm"*/, method);
    byte_49BB395 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21831/*"nonStopEndBgm"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__IsNoneSupportFriendPoint(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49BB402 & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_21843/*"noneSupportFriendPoint"*/, method);
    byte_49BB402 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_21843/*"noneSupportFriendPoint"*/, 0, 0LL) != 0;
}


bool __fastcall QuestPhaseEntity__IsNotClassBoard(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49BB3E8 & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_21862/*"notClassBoard"*/, method);
    byte_49BB3E8 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21862/*"notClassBoard"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__IsNotResetResultDispFlag(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49BB3A2 & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_21871/*"notResetResultDispFlag"*/, method);
    byte_49BB3A2 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21871/*"notResetResultDispFlag"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__IsNotUseRestrictionDialog(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49BB3E9 & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_21873/*"notUseRestrictionDialog"*/, method);
    byte_49BB3E9 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21873/*"notUseRestrictionDialog"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__IsPlayScriptBeforeForWarBoard(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49BB3C3 & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_20531/*"isScriptPlayForWarBoard"*/, method);
    byte_49BB3C3 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20531/*"isScriptPlayForWarBoard"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__IsReleaseFocusQuestBoard(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49BB3EF & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_20527/*"isReleaseFocus"*/, method);
    byte_49BB3EF = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20527/*"isReleaseFocus"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__IsRepeatReward(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49BB3E6 & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_22596/*"repeatReward"*/, method);
    byte_49BB3E6 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22596/*"repeatReward"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__IsReverseMyDeckSvtPosition(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49BB3FA & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_22645/*"reverseMyDeckSvtPosition"*/, method);
    byte_49BB3FA = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_22645/*"reverseMyDeckSvtPosition"*/, 0LL);
}


bool __fastcall QuestPhaseEntity__IsSaveInterruptionEnemyData(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49BB405 & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_22736/*"saveInterruptionEnemyData"*/, method);
    byte_49BB405 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22736/*"saveInterruptionEnemyData"*/, 0, 0LL) != 0;
}


bool __fastcall QuestPhaseEntity__IsSkipBattleFinish(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49BB3E0 & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_23082/*"skipBattleFinish"*/, method);
    byte_49BB3E0 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_23082/*"skipBattleFinish"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__IsSkipMoveNextBattleFade(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49BB403 & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_23084/*"skipMoveNextBattleFade"*/, method);
    byte_49BB403 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_23084/*"skipMoveNextBattleFade"*/, 0, 0LL) != 0;
}


bool __fastcall QuestPhaseEntity__IsUseTemporaryCommandSpell(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49BB3C9 & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_24073/*"useTemporaryCommandSpell"*/, method);
    byte_49BB3C9 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_24073/*"useTemporaryCommandSpell"*/, -1, v2) == 1;
}


bool __fastcall QuestPhaseEntity__IsWaveCountInfinity(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49BB3DE & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_24377/*"waveCountInfinity"*/, method);
    byte_49BB3DE = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_24377/*"waveCountInfinity"*/, -1, v2) != -1;
}


bool __fastcall QuestPhaseEntity__IsWaveSetup(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49BB3EA & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_24379/*"waveSetup"*/, method);
    byte_49BB3EA = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_24379/*"waveSetup"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__IsWaveSetupAsOneParty(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49BB3EB & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_24380/*"waveSetupAsOneParty"*/, method);
    byte_49BB3EB = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_24380/*"waveSetupAsOneParty"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__PlayHappinessCounterEffect(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49BB3FD & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_10441/*"PlayHappinessCounterEffect"*/, method);
    byte_49BB3FD = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_10441/*"PlayHappinessCounterEffect"*/, 0LL);
}


bool __fastcall QuestPhaseEntity__ScriptHasKey(
        QuestPhaseEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  return EntityScriptUtil__ScriptHasKey(this->fields.script, key, 0LL);
}


void __fastcall QuestPhaseEntity__SetNpcAiInfo(
        System_Collections_Generic_IDictionary_int__int____o *dicNpcAiId,
        Il2CppObject *obj,
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
  __int64 methodPtr_low; // x10
  System_Collections_Generic_Dictionary_string__object__c *v16; // x9
  System_Collections_Generic_Dictionary_string__object__o *v17; // x21
  int Value_long; // w20
  Il2CppObject *Value_object; // x0
  System_Collections_Generic_List_object__o *v20; // x21
  QuestPhaseEntity___c_c *v21; // x0
  System_Converter_object__int__o *_9__114_0; // x22
  Il2CppObject *v23; // x23
  struct QuestPhaseEntity___c_StaticFields *static_fields; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  System_Collections_Generic_List_int__o *v27; // x0
  __int64 v28; // x1
  System_Collections_Generic_IDictionary_int__int____c *klass; // x8
  System_Collections_Generic_List_int__o *v30; // x21
  __int64 v31; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0

  if ( (byte_49BB3D1 & 1) == 0 )
  {
    sub_1B4CF90(&Method_BasicHelper_GetValue_long___, obj);
    sub_1B4CF90(&Method_BasicHelper_GetValue_List_object____, v5);
    sub_1B4CF90(&System_Converter_object__int__TypeInfo, v6);
    sub_1B4CF90(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v7);
    sub_1B4CF90(&System_Collections_Generic_IDictionary_int__int____TypeInfo, v8);
    sub_1B4CF90(&Method_System_Collections_Generic_List_object__ConvertAll_int___, v9);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__ToArray__, v10);
    sub_1B4CF90(&Method_QuestPhaseEntity___c__SetNpcAiInfo_b__114_0__, v11);
    sub_1B4CF90(&QuestPhaseEntity___c_TypeInfo, v12);
    sub_1B4CF90(&StringLiteral_16413/*"aiIds"*/, v13);
    sub_1B4CF90(&StringLiteral_21889/*"npcId"*/, v14);
    byte_49BB3D1 = 1;
  }
  if ( obj )
  {
    methodPtr_low = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(obj->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low )
    {
      v16 = (System_Collections_Generic_Dictionary_string__object__c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1];
      v17 = v16 == System_Collections_Generic_Dictionary_string__object__TypeInfo
          ? (System_Collections_Generic_Dictionary_string__object__o *)obj
          : 0LL;
      if ( v16 == System_Collections_Generic_Dictionary_string__object__TypeInfo )
      {
        Value_long = BasicHelper__GetValue_long_(
                       v17,
                       (System_String_o *)StringLiteral_21889/*"npcId"*/,
                       0LL,
                       (const MethodInfo_2EEF6E4 *)Method_BasicHelper_GetValue_long___);
        Value_object = BasicHelper__GetValue_object_(
                         v17,
                         (System_String_o *)StringLiteral_16413/*"aiIds"*/,
                         0LL,
                         (const MethodInfo_2EEF7D0 *)Method_BasicHelper_GetValue_List_object____);
        if ( Value_long >= 1 )
        {
          v20 = (System_Collections_Generic_List_object__o *)Value_object;
          if ( Value_object )
          {
            v21 = QuestPhaseEntity___c_TypeInfo;
            if ( !QuestPhaseEntity___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(QuestPhaseEntity___c_TypeInfo);
              v21 = QuestPhaseEntity___c_TypeInfo;
            }
            _9__114_0 = v21->static_fields->__9__114_0;
            if ( !_9__114_0 )
            {
              if ( !v21->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v21);
                v21 = QuestPhaseEntity___c_TypeInfo;
              }
              v23 = (Il2CppObject *)v21->static_fields->__9;
              _9__114_0 = (System_Converter_object__int__o *)sub_1B4D1DC(System_Converter_object__int__TypeInfo);
              System_Converter_object__int____ctor(
                _9__114_0,
                v23,
                Method_QuestPhaseEntity___c__SetNpcAiInfo_b__114_0__,
                0LL);
              static_fields = QuestPhaseEntity___c_TypeInfo->static_fields;
              static_fields->__9__114_0 = _9__114_0;
              sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__114_0, (int32_t)_9__114_0, v25, v26);
            }
            v27 = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_object___ConvertAll_int_(
                                                              v20,
                                                              (System_Converter_T__TOutput__o *)_9__114_0,
                                                              (const MethodInfo_2E390E4 *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
            if ( !v27
              || (v27 = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_int___ToArray(
                                                                    v27,
                                                                    (const MethodInfo_3564C70 *)Method_System_Collections_Generic_List_int__ToArray__),
                  !dicNpcAiId) )
            {
              sub_1B4D1EC(v27, v28);
            }
            klass = dicNpcAiId->klass;
            v30 = v27;
            v31 = *(unsigned __int16 *)(&dicNpcAiId->klass->_2.bitflags2 + 3);
            if ( *(_WORD *)(&dicNpcAiId->klass->_2.bitflags2 + 3) )
            {
              p_offset = &klass->_1.interfaceOffsets->offset;
              while ( *((System_Collections_Generic_IDictionary_int__int____c **)p_offset - 1) != System_Collections_Generic_IDictionary_int__int____TypeInfo )
              {
                --v31;
                p_offset += 4;
                if ( !v31 )
                  goto LABEL_24;
              }
              p_method = (__int64)&klass->vtable[*p_offset + 1].method;
            }
            else
            {
LABEL_24:
              p_method = sub_1B9D724(dicNpcAiId, System_Collections_Generic_IDictionary_int__int____TypeInfo, 1LL);
            }
            (*(void (__fastcall **)(System_Collections_Generic_IDictionary_int__int____o *, _QWORD, System_Collections_Generic_List_int__o *, _QWORD))p_method)(
              dicNpcAiId,
              (unsigned int)Value_long,
              v30,
              *(_QWORD *)(p_method + 8));
          }
        }
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestPhaseEntity__TryGetOverwritePlayerSequenceSelectTypeByGender(
        QuestPhaseEntity_o *this,
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
  QuestPhaseEntity___c_c *v31; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x21
  System_Func_object__int__o *_9__162_1; // x22
  Il2CppObject *v34; // x23
  struct QuestPhaseEntity___c_StaticFields *static_fields; // x0
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v38; // x0
  System_Object_array *v39; // x21
  int max_length; // w8
  CommonReleaseMaster_o *v41; // x22
  unsigned int v42; // w23
  Il2CppObject *v43; // x24

  if ( (byte_49BB401 & 1) == 0 )
  {
    sub_1B4CF90(&Method_BasicHelper_GetValue_string__object___, *(_QWORD *)&servantId);
    sub_1B4CF90(&Method_DataManager_GetMaster_CommonReleaseMaster___, v9);
    sub_1B4CF90(&DataManager_TypeInfo, v10);
    sub_1B4CF90(&Method_System_Linq_Enumerable_OrderByDescending_BattleTreasureDeviceSequenceSelectType__int___, v11);
    sub_1B4CF90(&Method_System_Linq_Enumerable_ToArray_BattleTreasureDeviceSequenceSelectType___, v12);
    sub_1B4CF90(&Method_System_Linq_Enumerable_Where_BattleTreasureDeviceSequenceSelectType___, v13);
    sub_1B4CF90(&System_Func_BattleTreasureDeviceSequenceSelectType__bool__TypeInfo, v14);
    sub_1B4CF90(&System_Func_BattleTreasureDeviceSequenceSelectType__int__TypeInfo, v15);
    sub_1B4CF90(&Method_JsonManager_DeserializeArray_BattleTreasureDeviceSequenceSelectType___, v16);
    sub_1B4CF90(&JsonManager_TypeInfo, v17);
    sub_1B4CF90(&Method_QuestPhaseEntity___c__TryGetOverwritePlayerSequenceSelectTypeByGender_b__162_1__, v18);
    sub_1B4CF90(
      &Method_QuestPhaseEntity___c__DisplayClass162_0__TryGetOverwritePlayerSequenceSelectTypeByGender_b__0__,
      v19);
    sub_1B4CF90(&QuestPhaseEntity___c__DisplayClass162_0_TypeInfo, v20);
    sub_1B4CF90(&QuestPhaseEntity___c_TypeInfo, v21);
    sub_1B4CF90(&StringLiteral_22120/*"overwritePlayerSequenceSelectTypeByGender"*/, v22);
    byte_49BB401 = 1;
  }
  v23 = sub_1B4D1DC(QuestPhaseEntity___c__DisplayClass162_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v23, 0LL);
  if ( !v23 )
    goto LABEL_28;
  *(_DWORD *)(v23 + 16) = servantId;
  *genderSelectType = -1;
  *patternId = -1;
  Value_object__object = BasicHelper__GetValue_object__object_(
                           (System_Collections_Generic_Dictionary_K__V__o *)this->fields.script,
                           (Il2CppObject *)StringLiteral_22120/*"overwritePlayerSequenceSelectTypeByGender"*/,
                           0LL,
                           (const MethodInfo_2EEFF7C *)Method_BasicHelper_GetValue_string__object___);
  if ( !Value_object__object )
    return (char)Value_object__object;
  v27 = Value_object__object;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v28 = (System_Collections_Generic_IEnumerable_TSource__o *)JsonManager__DeserializeArray_object_(
                                                               v27,
                                                               (const MethodInfo_2F6ADF0 *)Method_JsonManager_DeserializeArray_BattleTreasureDeviceSequenceSelectType___);
  v29 = (System_Func_object__bool__o *)sub_1B4D1DC(System_Func_BattleTreasureDeviceSequenceSelectType__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v29,
    (Il2CppObject *)v23,
    Method_QuestPhaseEntity___c__DisplayClass162_0__TryGetOverwritePlayerSequenceSelectTypeByGender_b__0__,
    0LL);
  v30 = System_Linq_Enumerable__Where_object_(
          v28,
          (System_Func_TSource__bool__o *)v29,
          (const MethodInfo_2F42638 *)Method_System_Linq_Enumerable_Where_BattleTreasureDeviceSequenceSelectType___);
  v31 = QuestPhaseEntity___c_TypeInfo;
  v32 = v30;
  if ( !QuestPhaseEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestPhaseEntity___c_TypeInfo);
    v31 = QuestPhaseEntity___c_TypeInfo;
  }
  _9__162_1 = (System_Func_object__int__o *)v31->static_fields->__9__162_1;
  if ( !_9__162_1 )
  {
    if ( !v31->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v31);
      v31 = QuestPhaseEntity___c_TypeInfo;
    }
    v34 = (Il2CppObject *)v31->static_fields->__9;
    _9__162_1 = (System_Func_object__int__o *)sub_1B4D1DC(System_Func_BattleTreasureDeviceSequenceSelectType__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__162_1,
      v34,
      Method_QuestPhaseEntity___c__TryGetOverwritePlayerSequenceSelectTypeByGender_b__162_1__,
      0LL);
    static_fields = QuestPhaseEntity___c_TypeInfo->static_fields;
    static_fields->__9__162_1 = (struct System_Func_BattleTreasureDeviceSequenceSelectType__int__o *)_9__162_1;
    sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__162_1, (int32_t)_9__162_1, v36, v37);
  }
  v38 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                               v32,
                                                               (System_Func_TSource__TKey__o *)_9__162_1,
                                                               (const MethodInfo_2F2E09C *)Method_System_Linq_Enumerable_OrderByDescending_BattleTreasureDeviceSequenceSelectType__int___);
  v39 = System_Linq_Enumerable__ToArray_object_(
          v38,
          (const MethodInfo_2F3C3E4 *)Method_System_Linq_Enumerable_ToArray_BattleTreasureDeviceSequenceSelectType___);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v39, 0LL) )
    goto LABEL_25;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !v39 )
LABEL_28:
    sub_1B4D1EC(Master_object, monitor_high);
  max_length = v39->max_length;
  if ( max_length < 1 )
  {
LABEL_25:
    LOBYTE(Value_object__object) = 0;
    return (char)Value_object__object;
  }
  v41 = (CommonReleaseMaster_o *)Master_object;
  v42 = 0;
  while ( 1 )
  {
    if ( v42 >= max_length )
      sub_1B4D1F4(Master_object, monitor_high);
    v43 = v39->m_Items[v42];
    if ( !v43 )
      goto LABEL_28;
    monitor_high = HIDWORD(v43[1].monitor);
    if ( (int)monitor_high < 1 )
      break;
    if ( !v41 )
      goto LABEL_28;
    Master_object = (Il2CppObject *)CommonReleaseMaster__IsOpen(v41, monitor_high, 0LL, 0, 0LL);
    if ( ((unsigned __int8)Master_object & 1) != 0 )
      break;
    max_length = v39->max_length;
    if ( (int)++v42 >= max_length )
      goto LABEL_25;
  }
  LOBYTE(Value_object__object) = 1;
  *genderSelectType = HIDWORD(v43[1].klass);
  *patternId = (int32_t)v43[1].monitor;
  return (char)Value_object__object;
}


int32_t __fastcall QuestPhaseEntity__getBattleBgId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  return this->fields.battleBgId;
}


int32_t __fastcall QuestPhaseEntity__getBattleBgTypeValue(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  return this->fields.battleBgType;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall QuestPhaseEntity__getBattleEffectId(
        QuestPhaseEntity_o *this,
        int32_t defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_49BB38E & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_16788/*"battleEffectId"*/, *(_QWORD *)&defVal);
    byte_49BB38E = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_16788/*"battleEffectId"*/, defVal, v3);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall QuestPhaseEntity__getBattleFieldMotionId(
        QuestPhaseEntity_o *this,
        int32_t defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_49BB390 & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_19099/*"fieldMotionId"*/, *(_QWORD *)&defVal);
    byte_49BB390 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19099/*"fieldMotionId"*/, defVal, v3);
}


System_Int32_array *__fastcall QuestPhaseEntity__getBattleFieldMotionIds(
        QuestPhaseEntity_o *this,
        System_Int32_array *defVals,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  System_Int32_array *result; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  int32_t BattleFieldMotionId; // w20

  if ( (byte_49BB391 & 1) == 0 )
  {
    sub_1B4CF90(&int___TypeInfo, defVals);
    sub_1B4CF90(&StringLiteral_19100/*"fieldMotionIds"*/, v6);
    byte_49BB391 = 1;
  }
  result = QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_19100/*"fieldMotionIds"*/, defVals, v3);
  if ( !result )
    goto LABEL_10;
  if ( *(_QWORD *)&result->max_length )
    return result;
  BattleFieldMotionId = QuestPhaseEntity__getBattleFieldMotionId(this, -1, v9);
  result = defVals;
  if ( BattleFieldMotionId == -1 )
    return result;
  result = (System_Int32_array *)sub_1B4D038(int___TypeInfo, 1LL);
  if ( !result )
LABEL_10:
    sub_1B4D1EC(result, v8);
  if ( !result->max_length )
    sub_1B4D1F4(result, v8);
  result->m_Items[1] = BattleFieldMotionId;
  return result;
}


int32_t __fastcall QuestPhaseEntity__getBreakOnBattleWinWaitMSec(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49BB39C & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_17127/*"breakOnBattleWinWaitMSec"*/, method);
    byte_49BB39C = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_17127/*"breakOnBattleWinWaitMSec"*/, 0, v2);
}


System_Int32_array *__fastcall QuestPhaseEntity__getEventGrounpIds(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Int32_array *v4; // x2
  const MethodInfo *v5; // x3

  if ( (byte_49BB392 & 1) == 0 )
  {
    sub_1B4CF90(&int___TypeInfo, method);
    sub_1B4CF90(&StringLiteral_18823/*"eventGroupId"*/, v3);
    byte_49BB392 = 1;
  }
  v4 = (System_Int32_array *)sub_1B4D038(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_18823/*"eventGroupId"*/, v4, v5);
}


int32_t __fastcall QuestPhaseEntity__getFriendshipExp(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  return this->fields.friendshipExp;
}


int32_t __fastcall QuestPhaseEntity__getGIftId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  return this->fields.giftId;
}


int32_t __fastcall QuestPhaseEntity__getHintLeftIndent(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49BB3CE & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_19628/*"hintLeftIndent"*/, method);
    byte_49BB3CE = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19628/*"hintLeftIndent"*/, -1, v2);
}


System_String_o *__fastcall QuestPhaseEntity__getHintMessage(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1

  if ( (byte_49BB3CD & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_19629/*"hintMessage"*/, method);
    sub_1B4CF90(&StringLiteral_1/*""*/, v4);
    byte_49BB3CD = 1;
  }
  return QuestPhaseEntity__getScriptStr(
           this,
           (System_String_o *)StringLiteral_19629/*"hintMessage"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


System_String_o *__fastcall QuestPhaseEntity__getHintMessageTitle(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1

  if ( (byte_49BB3CC & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_1/*""*/, method);
    sub_1B4CF90(&StringLiteral_19631/*"hintTitle"*/, v4);
    byte_49BB3CC = 1;
  }
  return QuestPhaseEntity__getScriptStr(
           this,
           (System_String_o *)StringLiteral_19631/*"hintTitle"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


int32_t __fastcall QuestPhaseEntity__getHintOpenType(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49BB3CF & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_19630/*"hintOpenType"*/, method);
    byte_49BB3CF = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19630/*"hintOpenType"*/, 0, v2);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall QuestPhaseEntity__getLeave(QuestPhaseEntity_o *this, int32_t defVal, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_49BB38D & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_20774/*"leave"*/, *(_QWORD *)&defVal);
    byte_49BB38D = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20774/*"leave"*/, defVal, v3);
}


int32_t __fastcall QuestPhaseEntity__getPhase(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  return this->fields.phase;
}


int32_t __fastcall QuestPhaseEntity__getPlayerExp(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  return this->fields.playerExp;
}


int32_t __fastcall QuestPhaseEntity__getQuestId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  return this->fields.questId;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall QuestPhaseEntity__getResultBgmId(QuestPhaseEntity_o *this, int32_t defVal, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_49BB388 & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_22628/*"resultBgmId"*/, *(_QWORD *)&defVal);
    byte_49BB388 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22628/*"resultBgmId"*/, defVal, v3);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall QuestPhaseEntity__getResultEffectId(
        QuestPhaseEntity_o *this,
        int32_t defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_49BB38C & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_22629/*"resultEffectId"*/, *(_QWORD *)&defVal);
    byte_49BB38C = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22629/*"resultEffectId"*/, defVal, v3);
}


System_Int32_array *__fastcall QuestPhaseEntity__getResultEnemyVoiceIds(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Int32_array *v4; // x2
  const MethodInfo *v5; // x3

  if ( (byte_49BB396 & 1) == 0 )
  {
    sub_1B4CF90(&int___TypeInfo, method);
    sub_1B4CF90(&StringLiteral_22630/*"resultEnemyVoiceIds"*/, v3);
    byte_49BB396 = 1;
  }
  v4 = (System_Int32_array *)sub_1B4D038(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_22630/*"resultEnemyVoiceIds"*/, v4, v5);
}


System_Int32_array *__fastcall QuestPhaseEntity__getScriptIntArrayParam(
        QuestPhaseEntity_o *this,
        System_String_o *key,
        System_Int32_array *defVal,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *ScriptObjListParam; // x0
  System_Collections_Generic_List_object__o *v12; // x19
  QuestPhaseEntity___c_c *v13; // x0
  System_Converter_object__int__o *_9__31_0; // x20
  Il2CppObject *v15; // x21
  struct QuestPhaseEntity___c_StaticFields *static_fields; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  System_Collections_Generic_List_int__o *v19; // x0
  __int64 v20; // x1

  if ( (byte_49BB380 & 1) == 0 )
  {
    sub_1B4CF90(&System_Converter_object__int__TypeInfo, key);
    sub_1B4CF90(&Method_System_Collections_Generic_List_object__ConvertAll_int___, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__ToArray__, v8);
    sub_1B4CF90(&Method_QuestPhaseEntity___c__getScriptIntArrayParam_b__31_0__, v9);
    sub_1B4CF90(&QuestPhaseEntity___c_TypeInfo, v10);
    byte_49BB380 = 1;
  }
  ScriptObjListParam = QuestPhaseEntity__getScriptObjListParam(this, key, (const MethodInfo *)defVal);
  if ( !ScriptObjListParam )
    return defVal;
  v12 = ScriptObjListParam;
  v13 = QuestPhaseEntity___c_TypeInfo;
  if ( !QuestPhaseEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestPhaseEntity___c_TypeInfo);
    v13 = QuestPhaseEntity___c_TypeInfo;
  }
  _9__31_0 = v13->static_fields->__9__31_0;
  if ( !_9__31_0 )
  {
    if ( !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13);
      v13 = QuestPhaseEntity___c_TypeInfo;
    }
    v15 = (Il2CppObject *)v13->static_fields->__9;
    _9__31_0 = (System_Converter_object__int__o *)sub_1B4D1DC(System_Converter_object__int__TypeInfo);
    System_Converter_object__int____ctor(
      _9__31_0,
      v15,
      Method_QuestPhaseEntity___c__getScriptIntArrayParam_b__31_0__,
      0LL);
    static_fields = QuestPhaseEntity___c_TypeInfo->static_fields;
    static_fields->__9__31_0 = _9__31_0;
    sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__31_0, (int32_t)_9__31_0, v17, v18);
  }
  v19 = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_object___ConvertAll_int_(
                                                    v12,
                                                    (System_Converter_T__TOutput__o *)_9__31_0,
                                                    (const MethodInfo_2E390E4 *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
  if ( !v19 )
    sub_1B4D1EC(0LL, v20);
  return System_Collections_Generic_List_int___ToArray(
           v19,
           (const MethodInfo_3564C70 *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall QuestPhaseEntity__getScriptIntParam(
        QuestPhaseEntity_o *this,
        System_String_o *key,
        int32_t defVal,
        const MethodInfo *method)
{
  int32_t v4; // w19
  Il2CppObject *ScriptObj; // x0
  __int64 v8; // x2
  __int64 v9; // x3
  QuestPhaseEntity_o *v11; // x0
  System_String_o *v12; // x1
  const MethodInfo *v13; // x2

  v4 = defVal;
  if ( (byte_49BB37F & 1) == 0 )
  {
    sub_1B4CF90(&long_TypeInfo, key);
    byte_49BB37F = 1;
  }
  ScriptObj = QuestPhaseEntity__getScriptObj(this, key, *(const MethodInfo **)&defVal);
  if ( !ScriptObj )
    return v4;
  if ( ScriptObj->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(ScriptObj, long_TypeInfo, v8, v9);
  sub_1B4D4AC(ScriptObj);
  return (unsigned int)QuestPhaseEntity__getScriptObj(v11, v12, v13);
}


Il2CppObject *__fastcall QuestPhaseEntity__getScriptObj(
        QuestPhaseEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  Il2CppObject *result; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49BB384 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, key);
    byte_49BB384 = 1;
  }
  result = (Il2CppObject *)this->fields.script;
  if ( result )
  {
    value = 0LL;
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)result,
           (Il2CppObject *)key,
           &value,
           (const MethodInfo_3259324 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      return value;
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}


System_Object_array *__fastcall QuestPhaseEntity__getScriptObjArrayParam(
        QuestPhaseEntity_o *this,
        System_String_o *key,
        System_String_array *defVal,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ScriptObjListParam; // x0

  if ( (byte_49BB382 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_object__ToArray__, key);
    byte_49BB382 = 1;
  }
  ScriptObjListParam = QuestPhaseEntity__getScriptObjListParam(this, key, (const MethodInfo *)defVal);
  if ( ScriptObjListParam )
    return System_Collections_Generic_List_object___ToArray(
             ScriptObjListParam,
             (const MethodInfo_3581D34 *)Method_System_Collections_Generic_List_object__ToArray__);
  else
    return (System_Object_array *)defVal;
}


System_Collections_Generic_List_object__o *__fastcall QuestPhaseEntity__getScriptObjListParam(
        QuestPhaseEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *result; // x0
  __int64 methodPtr_low; // x9
  QuestPhaseEntity_o *v7; // x0
  System_String_o *v8; // x1
  System_String_array *v9; // x2
  const MethodInfo *v10; // x3

  if ( (byte_49BB383 & 1) == 0 )
  {
    sub_1B4CF90(&System_Collections_Generic_List_object__TypeInfo, key);
    byte_49BB383 = 1;
  }
  result = (System_Collections_Generic_List_object__o *)QuestPhaseEntity__getScriptObj(this, key, method);
  if ( result )
  {
    methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (System_Collections_Generic_List_object__c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != System_Collections_Generic_List_object__TypeInfo )
    {
      sub_1B4D4AC(result);
      return (System_Collections_Generic_List_object__o *)QuestPhaseEntity__getScriptStringArrayParam(v7, v8, v9, v10);
    }
  }
  return result;
}


System_String_o *__fastcall QuestPhaseEntity__getScriptStr(
        QuestPhaseEntity_o *this,
        System_String_o *key,
        System_String_o *defVal,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v10; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *v11; // x0
  Il2CppObject *Item; // x0
  QuestPhaseEntity_o *v14; // x0
  const MethodInfo *v15; // x1

  if ( (byte_49BB385 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    sub_1B4CF90(&string_TypeInfo, v8);
    byte_49BB385 = 1;
  }
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)key,
          (const MethodInfo_3257D0C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return defVal;
  }
  v11 = this->fields.script;
  if ( !v11 )
    sub_1B4D1EC(0LL, v10);
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)v11,
           (Il2CppObject *)key,
           (const MethodInfo_3257A98 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  defVal = (System_String_o *)Item;
  if ( !Item || (System_String_c *)Item->klass == string_TypeInfo )
    return defVal;
  sub_1B4D4AC(Item);
  return (System_String_o *)QuestPhaseEntity__GetOverwriteEquipSkills(v14, v15);
}


System_String_array *__fastcall QuestPhaseEntity__getScriptStringArrayParam(
        QuestPhaseEntity_o *this,
        System_String_o *key,
        System_String_array *defVal,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *ScriptObjListParam; // x0
  System_Collections_Generic_List_object__o *v12; // x19
  QuestPhaseEntity___c_c *v13; // x0
  System_Converter_TInput__TOutput__o *_9__32_0; // x20
  Il2CppObject *v15; // x21
  struct QuestPhaseEntity___c_StaticFields *static_fields; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  System_Collections_Generic_List_object__o *v19; // x0
  __int64 v20; // x1

  if ( (byte_49BB381 & 1) == 0 )
  {
    sub_1B4CF90(&System_Converter_object__string__TypeInfo, key);
    sub_1B4CF90(&Method_System_Collections_Generic_List_object__ConvertAll_string___, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_List_string__ToArray__, v8);
    sub_1B4CF90(&Method_QuestPhaseEntity___c__getScriptStringArrayParam_b__32_0__, v9);
    sub_1B4CF90(&QuestPhaseEntity___c_TypeInfo, v10);
    byte_49BB381 = 1;
  }
  ScriptObjListParam = QuestPhaseEntity__getScriptObjListParam(this, key, (const MethodInfo *)defVal);
  if ( !ScriptObjListParam )
    return defVal;
  v12 = ScriptObjListParam;
  v13 = QuestPhaseEntity___c_TypeInfo;
  if ( !QuestPhaseEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestPhaseEntity___c_TypeInfo);
    v13 = QuestPhaseEntity___c_TypeInfo;
  }
  _9__32_0 = (System_Converter_TInput__TOutput__o *)v13->static_fields->__9__32_0;
  if ( !_9__32_0 )
  {
    if ( !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13);
      v13 = QuestPhaseEntity___c_TypeInfo;
    }
    v15 = (Il2CppObject *)v13->static_fields->__9;
    _9__32_0 = (System_Converter_TInput__TOutput__o *)sub_1B4D1DC(System_Converter_object__string__TypeInfo);
    System_Converter_object__object____ctor(
      _9__32_0,
      v15,
      Method_QuestPhaseEntity___c__getScriptStringArrayParam_b__32_0__,
      0LL);
    static_fields = QuestPhaseEntity___c_TypeInfo->static_fields;
    static_fields->__9__32_0 = (struct System_Converter_object__string__o *)_9__32_0;
    sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__32_0, (int32_t)_9__32_0, v17, v18);
  }
  v19 = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___ConvertAll_object_(
                                                       v12,
                                                       (System_Converter_T__TOutput__o *)_9__32_0,
                                                       (const MethodInfo_2E391E8 *)Method_System_Collections_Generic_List_object__ConvertAll_string___);
  if ( !v19 )
    sub_1B4D1EC(0LL, v20);
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  v19,
                                  (const MethodInfo_3581D34 *)Method_System_Collections_Generic_List_string__ToArray__);
}


int32_t __fastcall QuestPhaseEntity__getSpecialShadowEffectId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49BB3A7 & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_19495/*"getSpecialShadowEffectId"*/, method);
    byte_49BB3A7 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19495/*"getSpecialShadowEffectId"*/, 0, v2);
}


int32_t __fastcall QuestPhaseEntity__getTurnSituationType(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49BB3A6 & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_23808/*"turnSituationType"*/, method);
    byte_49BB3A6 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_23808/*"turnSituationType"*/, 0, v2);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall QuestPhaseEntity__getUniqueCameraId(
        QuestPhaseEntity_o *this,
        int32_t defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_49BB38F & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_23893/*"uniqueCameraId"*/, *(_QWORD *)&defVal);
    byte_49BB38F = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_23893/*"uniqueCameraId"*/, defVal, v3);
}


bool __fastcall QuestPhaseEntity__isBattleFinishCameraTargetAll(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49BB3A5 & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_16790/*"battleFinishCameraTargetAll"*/, method);
    byte_49BB3A5 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_16790/*"battleFinishCameraTargetAll"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__isBreakOnBattleWin(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49BB39A & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_17125/*"breakOnBattleWin"*/, method);
    byte_49BB39A = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_17125/*"breakOnBattleWin"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__isBreakOnBattleWinFadeColorBlack(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49BB39B & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_17126/*"breakOnBattleWinFadeColorBlack"*/, method);
    byte_49BB39B = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_17126/*"breakOnBattleWinFadeColorBlack"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__isDisableChangeRaidDownMessage(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49BB3A8 & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_20495/*"isDisableChangeRaidDownMessage"*/, method);
    byte_49BB3A8 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20495/*"isDisableChangeRaidDownMessage"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__isDispLoseResult(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49BB397 & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_22631/*"resultLoseDisp"*/, method);
    byte_49BB397 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22631/*"resultLoseDisp"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__isFadeOutBgmBeforeMovie(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49BB38B & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_6482/*"FadeOutBgmBeforeMovie"*/, method);
    byte_49BB38B = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_6482/*"FadeOutBgmBeforeMovie"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__isNoResult(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49BB399 & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_21814/*"noResult"*/, method);
    byte_49BB399 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21814/*"noResult"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__isTurnSituationType(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  return QuestPhaseEntity__getTurnSituationType(this, method) > 0;
}


void __fastcall QuestPhaseEntity__GetBattleSkillDropEffectIds_d__168___ctor(
        QuestPhaseEntity__GetBattleSkillDropEffectIds_d__168_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
  this->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
}


bool __fastcall QuestPhaseEntity__GetBattleSkillDropEffectIds_d__168__MoveNext(
        QuestPhaseEntity__GetBattleSkillDropEffectIds_d__168_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  QuestPhaseEntity__GetBattleSkillDropEffectIds_d__168_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t _1__state; // w8
  QuestPhaseEntity_o *_4__this; // x0
  System_Collections_Generic_IEnumerable_FunctionEntity__o *BattleSkillDropFunctionEntities; // x0
  __int64 v10; // x1
  System_Collections_Generic_IEnumerable_FunctionEntity__o *v11; // x19
  System_Collections_Generic_IEnumerable_FunctionEntity__c *klass; // x8
  __int64 v13; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  struct BattleSkillDropInfo_JsonConvertData_o *data_5__3; // x8
  int32_t breakEffectId; // w8
  bool result; // w0
  CGThumbnailListItem_o *p_data_5__3; // x19
  _BOOL8 BattleSkillDropInfoDict; // x0
  __int64 v21; // x1
  __int64 v22; // x1
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  struct System_Collections_Generic_IEnumerator_FunctionEntity__o *_7__wrap1; // x19
  System_Collections_Generic_IEnumerator_FunctionEntity__c *v26; // x8
  __int64 v27; // x9
  int *v28; // x10
  __int64 v29; // x0
  const MethodInfo *v30; // x1
  struct System_Collections_Generic_IEnumerator_FunctionEntity__o *v31; // x19
  System_Collections_Generic_IEnumerator_FunctionEntity__c *v32; // x8
  __int64 v33; // x9
  int *v34; // x10
  __int64 v35; // x0
  FunctionEntity_o *v36; // x0
  __int64 v37; // x1
  struct BattleSkillDropInfo_JsonConvertData_o *v38; // x9
  int32_t appearEffectId; // w9
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  QuestPhaseEntity__GetBattleSkillDropEffectIds_d__168_o *v42; // [xsp+18h] [xbp-28h]

  v4 = this;
  v42 = this;
  if ( (byte_49BB40F & 1) == 0 )
  {
    sub_1B4CF90(&System_Collections_Generic_IEnumerable_FunctionEntity__TypeInfo, method);
    sub_1B4CF90(&System_Collections_Generic_IEnumerator_FunctionEntity__TypeInfo, v5);
    this = (QuestPhaseEntity__GetBattleSkillDropEffectIds_d__168_o *)sub_1B4CF90(
                                                                       &System_Collections_IEnumerator_TypeInfo,
                                                                       v6);
    byte_49BB40F = 1;
  }
  _1__state = v4->fields.__1__state;
  if ( _1__state == 2 )
  {
    v4->fields._data_5__3 = 0LL;
    p_data_5__3 = (CGThumbnailListItem_o *)&v4->fields._data_5__3;
    LODWORD(p_data_5__3[-1].fields.viewObject) = -3;
    sub_1B4CF34(p_data_5__3, 0, v2, v3);
    goto LABEL_18;
  }
  if ( _1__state == 1 )
  {
    data_5__3 = v4->fields._data_5__3;
    v4->fields.__1__state = -3;
    if ( !data_5__3 )
      sub_1B4D1EC(this, method);
    breakEffectId = data_5__3->fields.breakEffectId;
    result = 1;
    v4->fields.__1__state = 2;
    v4->fields.__2__current = breakEffectId;
  }
  else if ( _1__state )
  {
    return 0;
  }
  else
  {
    _4__this = v4->fields.__4__this;
    v4->fields.__1__state = -1;
    if ( !_4__this )
      sub_1B4D1EC(0LL, method);
    BattleSkillDropFunctionEntities = QuestPhaseEntity__GetBattleSkillDropFunctionEntities(_4__this, method);
    v11 = BattleSkillDropFunctionEntities;
    if ( !BattleSkillDropFunctionEntities )
      sub_1B4D1EC(0LL, v10);
    klass = BattleSkillDropFunctionEntities->klass;
    v13 = *(unsigned __int16 *)(&BattleSkillDropFunctionEntities->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&BattleSkillDropFunctionEntities->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_FunctionEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_FunctionEntity__TypeInfo )
      {
        --v13;
        p_offset += 4;
        if ( !v13 )
          goto LABEL_12;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_12:
      p_method = sub_1B9D724(
                   BattleSkillDropFunctionEntities,
                   System_Collections_Generic_IEnumerable_FunctionEntity__TypeInfo,
                   0LL);
    }
    v22 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_FunctionEntity__o *, _QWORD))p_method)(
            v11,
            *(_QWORD *)(p_method + 8));
    v42->fields.__7__wrap1 = (struct System_Collections_Generic_IEnumerator_FunctionEntity__o *)v22;
    sub_1B4CF34((CGThumbnailListItem_o *)&v42->fields.__7__wrap1, v22, v23, v24);
    v42->fields.__1__state = -3;
    do
    {
LABEL_18:
      _7__wrap1 = v42->fields.__7__wrap1;
      if ( !_7__wrap1 )
        sub_1B4D1EC(BattleSkillDropInfoDict, v21);
      v26 = _7__wrap1->klass;
      v27 = *(unsigned __int16 *)(&_7__wrap1->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&_7__wrap1->klass->_2.bitflags2 + 3) )
      {
        v28 = &v26->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)v28 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v27;
          v28 += 4;
          if ( !v27 )
            goto LABEL_23;
        }
        v29 = (__int64)&v26->vtable[*v28].method;
      }
      else
      {
LABEL_23:
        v29 = sub_1B9D724(v42->fields.__7__wrap1, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_FunctionEntity__o *, _QWORD))v29)(
              _7__wrap1,
              *(_QWORD *)(v29 + 8)) & 1) == 0 )
      {
        QuestPhaseEntity__GetBattleSkillDropEffectIds_d__168____m__Finally1(v42, v30);
        v42->fields.__7__wrap1 = 0LL;
        sub_1B4CF34((CGThumbnailListItem_o *)&v42->fields.__7__wrap1, 0, v40, v41);
        return 0;
      }
      v31 = v42->fields.__7__wrap1;
      if ( !v31 )
        sub_1B4D1EC(v42, v30);
      v32 = v31->klass;
      v33 = *(unsigned __int16 *)(&v31->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v31->klass->_2.bitflags2 + 3) )
      {
        v34 = &v32->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerator_FunctionEntity__c **)v34 - 1) != System_Collections_Generic_IEnumerator_FunctionEntity__TypeInfo )
        {
          --v33;
          v34 += 4;
          if ( !v33 )
            goto LABEL_31;
        }
        v35 = (__int64)&v32->vtable[*v34].method;
      }
      else
      {
LABEL_31:
        v35 = sub_1B9D724(v42->fields.__7__wrap1, System_Collections_Generic_IEnumerator_FunctionEntity__TypeInfo, 0LL);
      }
      v36 = (FunctionEntity_o *)(*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_FunctionEntity__o *, _QWORD))v35)(
                                  v31,
                                  *(_QWORD *)(v35 + 8));
      if ( !v36 )
        sub_1B4D1EC(0LL, v37);
      BattleSkillDropInfoDict = FunctionEntity__TryGetBattleSkillDropInfoDict(v36, &v42->fields._data_5__3, 0LL);
    }
    while ( !BattleSkillDropInfoDict );
    v38 = v42->fields._data_5__3;
    if ( !v38 )
      sub_1B4D1EC(BattleSkillDropInfoDict, v21);
    appearEffectId = v38->fields.appearEffectId;
    result = 1;
    v42->fields.__1__state = 1;
    v42->fields.__2__current = appearEffectId;
  }
  return result;
}


System_Collections_Generic_IEnumerator_int__o *__fastcall QuestPhaseEntity__GetBattleSkillDropEffectIds_d__168__System_Collections_Generic_IEnumerable_System_Int32__GetEnumerator(
        QuestPhaseEntity__GetBattleSkillDropEffectIds_d__168_o *this,
        const MethodInfo *method)
{
  int32_t l__initialThreadId; // w20
  __int64 v4; // x20
  struct QuestPhaseEntity_o *_4__this; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_49BB412 & 1) == 0 )
  {
    sub_1B4CF90(&QuestPhaseEntity__GetBattleSkillDropEffectIds_d__168_TypeInfo, method);
    byte_49BB412 = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0LL)) )
  {
    this->fields.__1__state = 0;
  }
  else
  {
    v4 = sub_1B4D1DC(QuestPhaseEntity__GetBattleSkillDropEffectIds_d__168_TypeInfo);
    System_Object___ctor((Il2CppObject *)v4, 0LL);
    *(_DWORD *)(v4 + 16) = 0;
    *(_DWORD *)(v4 + 24) = System_Environment__get_CurrentManagedThreadId(0LL);
    _4__this = this->fields.__4__this;
    *(_QWORD *)(v4 + 32) = _4__this;
    sub_1B4CF34((CGThumbnailListItem_o *)(v4 + 32), (int32_t)_4__this, v6, v7);
    return (System_Collections_Generic_IEnumerator_int__o *)v4;
  }
  return (System_Collections_Generic_IEnumerator_int__o *)this;
}


int32_t __fastcall QuestPhaseEntity__GetBattleSkillDropEffectIds_d__168__System_Collections_Generic_IEnumerator_System_Int32__get_Current(
        QuestPhaseEntity__GetBattleSkillDropEffectIds_d__168_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn QuestPhaseEntity__GetBattleSkillDropEffectIds_d__168__System_Collections_IEnumerator_Reset(
        QuestPhaseEntity__GetBattleSkillDropEffectIds_d__168_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B4CFA4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B4D1DC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B4CFA4(&Method_QuestPhaseEntity__GetBattleSkillDropEffectIds_d__168_System_Collections_IEnumerator_Reset__);
  sub_1B4D0B8(v3, v4);
}


Il2CppObject *__fastcall QuestPhaseEntity__GetBattleSkillDropEffectIds_d__168__System_Collections_IEnumerator_get_Current(
        QuestPhaseEntity__GetBattleSkillDropEffectIds_d__168_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  int32_t _2__current; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_49BB411 & 1) == 0 )
  {
    sub_1B4CF90(&int_TypeInfo, method);
    byte_49BB411 = 1;
  }
  _2__current = this->fields.__2__current;
  return (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &_2__current, v2, v3, v4);
}


void __fastcall QuestPhaseEntity__GetBattleSkillDropEffectIds_d__168__System_IDisposable_Dispose(
        QuestPhaseEntity__GetBattleSkillDropEffectIds_d__168_o *this,
        const MethodInfo *method)
{
  unsigned int v2; // w8

  v2 = this->fields.__1__state + 3;
  if ( v2 <= 5 && ((1 << v2) & 0x31) != 0 )
    QuestPhaseEntity__GetBattleSkillDropEffectIds_d__168____m__Finally1(this, method);
}


void __fastcall QuestPhaseEntity__GetBattleSkillDropEffectIds_d__168____m__Finally1(
        QuestPhaseEntity__GetBattleSkillDropEffectIds_d__168_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_IEnumerator_FunctionEntity__o *_7__wrap1; // x19
  System_Collections_Generic_IEnumerator_FunctionEntity__c *klass; // x8
  __int64 v5; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0

  if ( (byte_49BB410 & 1) == 0 )
  {
    sub_1B4CF90(&System_IDisposable_TypeInfo, method);
    byte_49BB410 = 1;
  }
  _7__wrap1 = this->fields.__7__wrap1;
  this->fields.__1__state = -1;
  if ( _7__wrap1 )
  {
    klass = _7__wrap1->klass;
    v5 = *(unsigned __int16 *)(&_7__wrap1->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&_7__wrap1->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v5;
        p_offset += 4;
        if ( !v5 )
          goto LABEL_8;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_8:
      p_method = sub_1B9D724(_7__wrap1, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(struct System_Collections_Generic_IEnumerator_FunctionEntity__o *, _QWORD))p_method)(
      _7__wrap1,
      *(_QWORD *)(p_method + 8));
  }
}


void __fastcall QuestPhaseEntity__GetBattleSkillDropFunctionEntities_d__167___ctor(
        QuestPhaseEntity__GetBattleSkillDropFunctionEntities_d__167_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
  this->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
}


bool __fastcall QuestPhaseEntity__GetBattleSkillDropFunctionEntities_d__167__MoveNext(
        QuestPhaseEntity__GetBattleSkillDropFunctionEntities_d__167_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  long double inited; // q0
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  int32_t _1__state; // w8
  QuestPhaseEntity_o *_4__this; // x20
  _QWORD *v12; // x21
  __int64 v13; // x8
  __int64 v14; // x0
  __int64 p__7__wrap1; // x0
  struct System_Int32_array *ScriptIntArrayParam; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  int32_t v19; // w8
  int32_t v20; // w20
  struct System_Int32_array *_7__wrap1; // x9
  il2cpp_array_size_t max_length; // w10
  bool result; // w0
  int32_t v24; // w1
  struct FunctionEntity_o **p__2__current; // x19
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49BB413 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Array_Empty_int___, method);
    sub_1B4CF90(&Method_DataManager_GetMaster_FunctionMaster___, v6);
    sub_1B4CF90(&DataManager_TypeInfo, v7);
    sub_1B4CF90(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__, v8);
    sub_1B4CF90(&StringLiteral_16799/*"battleSkillDropFuncIds"*/, v9);
    byte_49BB413 = 1;
  }
  entity = 0LL;
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    goto LABEL_23;
  }
  if ( _1__state )
    return 0;
  this->fields.__1__state = -1;
  _4__this = this->fields.__4__this;
  v12 = Method_System_Array_Empty_int___;
  v13 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v13 )
  {
    sub_1B9D67C(Method_System_Array_Empty_int___);
    v13 = v12[7];
  }
  v14 = *(_QWORD *)(v13 + 16);
  if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
    v14 = sub_1B9D620(inited);
  if ( !*(_DWORD *)(v14 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v14);
  p__7__wrap1 = *(_QWORD *)(v12[7] + 16LL);
  if ( (*(_BYTE *)(p__7__wrap1 + 309) & 1) == 0 )
    p__7__wrap1 = sub_1B9D620(inited);
  if ( !_4__this )
LABEL_30:
    sub_1B4D1EC(p__7__wrap1, method);
  ScriptIntArrayParam = QuestPhaseEntity__getScriptIntArrayParam(
                          _4__this,
                          (System_String_o *)StringLiteral_16799/*"battleSkillDropFuncIds"*/,
                          **(System_Int32_array ***)(p__7__wrap1 + 184),
                          v3);
  this->fields.__7__wrap1 = ScriptIntArrayParam;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.__7__wrap1, (int32_t)ScriptIntArrayParam, v17, v18);
  v19 = 0;
  for ( this->fields.__7__wrap2 = 0; ; this->fields.__7__wrap2 = v19 )
  {
    p__7__wrap1 = (__int64)&this->fields.__7__wrap1;
    _7__wrap1 = this->fields.__7__wrap1;
    if ( !_7__wrap1 )
      goto LABEL_30;
    max_length = _7__wrap1->max_length;
    if ( v19 >= (int)max_length )
    {
      *(_QWORD *)p__7__wrap1 = 0LL;
      sub_1B4CF34((CGThumbnailListItem_o *)p__7__wrap1, 0, v2, v3);
      return 0;
    }
    if ( v19 >= max_length )
      sub_1B4D1F4(p__7__wrap1, method);
    v20 = _7__wrap1->m_Items[v19 + 1];
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    p__7__wrap1 = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_FunctionMaster___);
    if ( !p__7__wrap1 )
      goto LABEL_30;
    p__7__wrap1 = DataMasterBase_object__object__int___TryGetEntity(
                    (DataMasterBase_TMaster__TEntity__PKType__o *)p__7__wrap1,
                    &entity,
                    v20,
                    (const MethodInfo_319D9E8 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
    if ( (p__7__wrap1 & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_30;
      if ( FuncList__Check(149, (int32_t)entity[1].monitor, 0LL) )
        break;
    }
LABEL_23:
    v19 = this->fields.__7__wrap2 + 1;
  }
  v24 = (int)entity;
  this->fields.__2__current = (struct FunctionEntity_o *)entity;
  p__2__current = &this->fields.__2__current;
  sub_1B4CF34((CGThumbnailListItem_o *)p__2__current, v24, v2, v3);
  result = 1;
  *((_DWORD *)p__2__current - 2) = 1;
  return result;
}


System_Collections_Generic_IEnumerator_FunctionEntity__o *__fastcall QuestPhaseEntity__GetBattleSkillDropFunctionEntities_d__167__System_Collections_Generic_IEnumerable_FunctionEntity__GetEnumerator(
        QuestPhaseEntity__GetBattleSkillDropFunctionEntities_d__167_o *this,
        const MethodInfo *method)
{
  int32_t l__initialThreadId; // w20
  __int64 v4; // x20
  struct QuestPhaseEntity_o *_4__this; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_49BB414 & 1) == 0 )
  {
    sub_1B4CF90(&QuestPhaseEntity__GetBattleSkillDropFunctionEntities_d__167_TypeInfo, method);
    byte_49BB414 = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0LL)) )
  {
    this->fields.__1__state = 0;
  }
  else
  {
    v4 = sub_1B4D1DC(QuestPhaseEntity__GetBattleSkillDropFunctionEntities_d__167_TypeInfo);
    System_Object___ctor((Il2CppObject *)v4, 0LL);
    *(_DWORD *)(v4 + 16) = 0;
    *(_DWORD *)(v4 + 32) = System_Environment__get_CurrentManagedThreadId(0LL);
    _4__this = this->fields.__4__this;
    *(_QWORD *)(v4 + 40) = _4__this;
    sub_1B4CF34((CGThumbnailListItem_o *)(v4 + 40), (int32_t)_4__this, v6, v7);
    return (System_Collections_Generic_IEnumerator_FunctionEntity__o *)v4;
  }
  return (System_Collections_Generic_IEnumerator_FunctionEntity__o *)this;
}


FunctionEntity_o *__fastcall QuestPhaseEntity__GetBattleSkillDropFunctionEntities_d__167__System_Collections_Generic_IEnumerator_FunctionEntity__get_Current(
        QuestPhaseEntity__GetBattleSkillDropFunctionEntities_d__167_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn QuestPhaseEntity__GetBattleSkillDropFunctionEntities_d__167__System_Collections_IEnumerator_Reset(
        QuestPhaseEntity__GetBattleSkillDropFunctionEntities_d__167_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B4CFA4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B4D1DC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B4CFA4(&Method_QuestPhaseEntity__GetBattleSkillDropFunctionEntities_d__167_System_Collections_IEnumerator_Reset__);
  sub_1B4D0B8(v3, v4);
}


Il2CppObject *__fastcall QuestPhaseEntity__GetBattleSkillDropFunctionEntities_d__167__System_Collections_IEnumerator_get_Current(
        QuestPhaseEntity__GetBattleSkillDropFunctionEntities_d__167_o *this,
        const MethodInfo *method)
{
  return (Il2CppObject *)this->fields.__2__current;
}


void __fastcall QuestPhaseEntity__GetBattleSkillDropFunctionEntities_d__167__System_IDisposable_Dispose(
        QuestPhaseEntity__GetBattleSkillDropFunctionEntities_d__167_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall QuestPhaseEntity___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_49BB40C & 1) == 0 )
  {
    sub_1B4CF90(&QuestPhaseEntity___c_TypeInfo, v1);
    byte_49BB40C = 1;
  }
  v2 = (Il2CppObject *)sub_1B4D1DC(QuestPhaseEntity___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  QuestPhaseEntity___c_TypeInfo->static_fields->__9 = (struct QuestPhaseEntity___c_o *)v2;
  sub_1B4CF34((CGThumbnailListItem_o *)QuestPhaseEntity___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall QuestPhaseEntity___c___ctor(QuestPhaseEntity___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall QuestPhaseEntity___c___SetNpcAiInfo_b__114_0(
        QuestPhaseEntity___c_o *this,
        Il2CppObject *x,
        const MethodInfo *method)
{
  System_String_o *v4; // x0

  if ( (byte_49BB40E & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_1/*""*/, x);
    byte_49BB40E = 1;
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


int32_t __fastcall QuestPhaseEntity___c___TryGetOverwritePlayerSequenceSelectTypeByGender_b__162_1(
        QuestPhaseEntity___c_o *this,
        BattleTreasureDeviceSequenceSelectType_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B4D1EC(this, 0LL);
  return x->fields.priority;
}


int32_t __fastcall QuestPhaseEntity___c___getScriptIntArrayParam_b__31_0(
        QuestPhaseEntity___c_o *this,
        Il2CppObject *x,
        const MethodInfo *method)
{
  System_String_o *v4; // x0

  if ( (byte_49BB40D & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_1/*""*/, x);
    byte_49BB40D = 1;
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


System_String_o *__fastcall QuestPhaseEntity___c___getScriptStringArrayParam_b__32_0(
        QuestPhaseEntity___c_o *this,
        Il2CppObject *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B4D1EC(this, 0LL);
  return (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))x->klass->vtable[3].method)(
                              x,
                              x->klass->vtable[4].methodPtr);
}


void __fastcall QuestPhaseEntity___c__DisplayClass113_0___ctor(
        QuestPhaseEntity___c__DisplayClass113_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestPhaseEntity___c__DisplayClass113_0___GetNpcAiInfo_b__0(
        QuestPhaseEntity___c__DisplayClass113_0_o *this,
        Il2CppObject *val,
        const MethodInfo *method)
{
  QuestPhaseEntity__SetNpcAiInfo(
    (System_Collections_Generic_IDictionary_int__int____o *)this->fields.dicNpcAiId,
    val,
    method);
}


void __fastcall QuestPhaseEntity___c__DisplayClass162_0___ctor(
        QuestPhaseEntity___c__DisplayClass162_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestPhaseEntity___c__DisplayClass162_0___TryGetOverwritePlayerSequenceSelectTypeByGender_b__0(
        QuestPhaseEntity___c__DisplayClass162_0_o *this,
        BattleTreasureDeviceSequenceSelectType_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B4D1EC(this, 0LL);
  return x->fields.svtId == this->fields.servantId;
}