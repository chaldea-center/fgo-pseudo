void __fastcall QuestPhaseEntity___ctor(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B44FB0 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataEntityBase_string___ctor__, method);
    byte_4B44FB0 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_32DF9D0 *)Method_DataEntityBase_string___ctor__);
}


void __fastcall QuestPhaseEntity___ctor_41360392(
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

  if ( (byte_4B44FB1 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataEntityBase_string___ctor__, cSrc);
    sub_1BDB878(&int___TypeInfo, v5);
    byte_4B44FB1 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_32DF9D0 *)Method_DataEntityBase_string___ctor__);
  if ( !cSrc )
    sub_1BDBAD4(v6, v7);
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
      v10 = (struct System_Int32_array *)sub_1BDB9B4(v12, int___TypeInfo);
      if ( !v10 )
        goto LABEL_12;
    }
    else
    {
      v10 = 0LL;
    }
  }
  this->fields.classIds = v10;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.classIds, (int32_t)v10, v8, v9);
  individuality = (System_Array_o *)cSrc->fields.individuality;
  if ( !individuality )
    goto LABEL_13;
  v17 = System_Array__Clone(individuality, 0LL);
  if ( !v17 )
    goto LABEL_13;
  v13 = v17;
  v18 = (struct System_Int32_array *)sub_1BDB9B4(v17, int___TypeInfo);
  if ( !v18 )
  {
LABEL_12:
    sub_1BDBD94(v13);
LABEL_13:
    v18 = 0LL;
  }
  this->fields.individuality = v18;
  p_individuality = &this->fields.individuality;
  sub_1BDB81C((CGThumbnailListItem_o *)p_individuality, (int32_t)v18, v14, v15);
  *((_DWORD *)p_individuality + 2) = cSrc->fields.giftId;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall QuestPhaseEntity__CreatePK(int32_t questId, int32_t phase, const MethodInfo *method)
{
  if ( (byte_4B44FAF & 1) == 0 )
  {
    sub_1BDB878(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&phase);
    byte_4B44FAF = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           questId,
           phase,
           (const MethodInfo_3031AE4 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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

  if ( (byte_4B44FC0 & 1) == 0 )
  {
    sub_1BDB878(&System_Collections_Generic_Dictionary_string__object__TypeInfo, method);
    sub_1BDB878(&StringLiteral_16654/*"addEquipSkills"*/, v4);
    byte_4B44FC0 = 1;
  }
  result = (System_Collections_Generic_Dictionary_string__object__o *)QuestPhaseEntity__getScriptObj(
                                                                        this,
                                                                        (System_String_o *)StringLiteral_16654/*"addEquipSkills"*/,
                                                                        v2);
  if ( result )
  {
    methodPtr_low = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (System_Collections_Generic_Dictionary_string__object__c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
    {
      sub_1BDBD94(result);
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

  if ( (byte_4B4502C & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_16667/*"addUniqueCameraIds"*/, defVal);
    byte_4B4502C = 1;
  }
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_16667/*"addUniqueCameraIds"*/, defVal, v3);
}


int32_t __fastcall QuestPhaseEntity__GetAdvantageClassId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B44FEF & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_16967/*"auto_sel_support_type"*/, method);
    byte_4B44FEF = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_16967/*"auto_sel_support_type"*/, -1, v2);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetAssistIdArray(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Int32_array *v4; // x2
  const MethodInfo *v5; // x3

  if ( (byte_4B44FFE & 1) == 0 )
  {
    sub_1BDB878(&int___TypeInfo, method);
    sub_1BDB878(&StringLiteral_16926/*"assistIds"*/, v3);
    byte_4B44FFE = 1;
  }
  v4 = (System_Int32_array *)sub_1BDB920(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_16926/*"assistIds"*/, v4, v5);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetAssistWeightArray(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Int32_array *v4; // x2
  const MethodInfo *v5; // x3

  if ( (byte_4B44FFF & 1) == 0 )
  {
    sub_1BDB878(&int___TypeInfo, method);
    sub_1BDB878(&StringLiteral_16925/*"assistIdWeight"*/, v3);
    byte_4B44FFF = 1;
  }
  v4 = (System_Int32_array *)sub_1BDB920(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_16925/*"assistIdWeight"*/, v4, v5);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetAssumedEffectId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B45011 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_16929/*"assumedEffectId"*/, method);
    byte_4B45011 = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_16929/*"assumedEffectId"*/, 0LL);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetBattleEffectMovieIds(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B45034 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_3161/*"BattleEffectMovieIds"*/, method);
    byte_4B45034 = 1;
  }
  return EntityScriptUtil__GetIntArray(this->fields.script, (System_String_o *)StringLiteral_3161/*"BattleEffectMovieIds"*/, 0LL, 0LL);
}


System_String_o *__fastcall QuestPhaseEntity__GetBattleFinishMovie(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B44FD6 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_17088/*"battleFinishMovie"*/, method);
    byte_4B44FD6 = 1;
  }
  return QuestPhaseEntity__getScriptStr(this, (System_String_o *)StringLiteral_17088/*"battleFinishMovie"*/, 0LL, v2);
}


int32_t __fastcall QuestPhaseEntity__GetBattleFinishWaitTime(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B4501A & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_17089/*"battleFinishWaitTime"*/, method);
    byte_4B4501A = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_17089/*"battleFinishWaitTime"*/, 0, v2);
}


int32_t __fastcall QuestPhaseEntity__GetBattleItemObjectId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B45029 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_17093/*"battleItemObjectId"*/, method);
    byte_4B45029 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_17093/*"battleItemObjectId"*/, 0, v2);
}


System_Collections_Generic_IEnumerable_int__o *__fastcall QuestPhaseEntity__GetBattleSkillDropEffectIds(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4B45040 & 1) == 0 )
  {
    sub_1BDB878(&QuestPhaseEntity__GetBattleSkillDropEffectIds_d__168_TypeInfo, method);
    byte_4B45040 = 1;
  }
  v3 = sub_1BDBAC4(QuestPhaseEntity__GetBattleSkillDropEffectIds_d__168_TypeInfo);
  QuestPhaseEntity__GetBattleSkillDropEffectIds_d__168___ctor(
    (QuestPhaseEntity__GetBattleSkillDropEffectIds_d__168_o *)v3,
    -2,
    0LL);
  if ( !v3 )
    sub_1BDBAD4(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_1BDB81C((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v6, v7);
  return (System_Collections_Generic_IEnumerable_int__o *)v3;
}


System_Collections_Generic_IEnumerable_FunctionEntity__o *__fastcall QuestPhaseEntity__GetBattleSkillDropFunctionEntities(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4B4503F & 1) == 0 )
  {
    sub_1BDB878(&QuestPhaseEntity__GetBattleSkillDropFunctionEntities_d__167_TypeInfo, method);
    byte_4B4503F = 1;
  }
  v3 = sub_1BDBAC4(QuestPhaseEntity__GetBattleSkillDropFunctionEntities_d__167_TypeInfo);
  QuestPhaseEntity__GetBattleSkillDropFunctionEntities_d__167___ctor(
    (QuestPhaseEntity__GetBattleSkillDropFunctionEntities_d__167_o *)v3,
    -2,
    0LL);
  if ( !v3 )
    sub_1BDBAD4(v4, v5);
  *(_QWORD *)(v3 + 40) = this;
  sub_1BDB81C((CGThumbnailListItem_o *)(v3 + 40), (int32_t)this, v6, v7);
  return (System_Collections_Generic_IEnumerable_FunctionEntity__o *)v3;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall QuestPhaseEntity__GetBeforeBattleSkillActor(
        QuestPhaseEntity_o *this,
        int32_t defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4B4501B & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_17139/*"beforeBattleSkillActor"*/, *(_QWORD *)&defVal);
    byte_4B4501B = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_17139/*"beforeBattleSkillActor"*/, defVal, v3);
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

  if ( (byte_4B44FB5 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Array_Empty_int___, method);
    sub_1BDB878(&Method_DataManager_GetMaster_BattleBgMaster___, v3);
    sub_1BDB878(&DataManager_TypeInfo, v4);
    byte_4B44FB5 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_BattleBgMaster___);
  PriorityBattleBgId = QuestPhaseEntity__GetPriorityBattleBgId(this, v6);
  PriorityBattleBgType = QuestPhaseEntity__GetPriorityBattleBgType(this, v8);
  if ( !Master_object )
    sub_1BDBAD4(PriorityBattleBgType, v10);
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
      sub_1C2BF64(Method_System_Array_Empty_int___);
      v14 = v13[7];
    }
    v15 = *(_QWORD *)(v14 + 16);
    if ( (*(_BYTE *)(v15 + 309) & 1) == 0 )
      v15 = sub_1C2BF08(inited);
    if ( !*(_DWORD *)(v15 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v15);
    v16 = *(_QWORD *)(v13[7] + 16LL);
    if ( (*(_BYTE *)(v16 + 309) & 1) == 0 )
      v16 = sub_1C2BF08(inited);
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

  if ( (byte_4B4500E & 1) == 0 )
  {
    sub_1BDB878(&int___TypeInfo, method);
    sub_1BDB878(&StringLiteral_18011/*"clearGiftItemListDisplay"*/, v3);
    byte_4B4500E = 1;
  }
  v4 = (System_Int32_array *)sub_1BDB920(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_18011/*"clearGiftItemListDisplay"*/, v4, v5);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetCondHavingIds(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Int32_array *v4; // x2
  const MethodInfo *v5; // x3

  if ( (byte_4B44FFA & 1) == 0 )
  {
    sub_1BDB878(&int___TypeInfo, method);
    sub_1BDB878(&StringLiteral_18208/*"condHaving"*/, v3);
    byte_4B44FFA = 1;
  }
  v4 = (System_Int32_array *)sub_1BDB920(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_18208/*"condHaving"*/, v4, v5);
}


int32_t __fastcall QuestPhaseEntity__GetCondQuestClearable(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B45030 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_18212/*"condQuestClearable"*/, method);
    byte_4B45030 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_18212/*"condQuestClearable"*/, 0, v2);
}


int32_t __fastcall QuestPhaseEntity__GetCorrectionIconId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B44FEE & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_18280/*"correctionIconId"*/, method);
    byte_4B44FEE = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_18280/*"correctionIconId"*/, -1, v2);
}


int32_t __fastcall QuestPhaseEntity__GetDefenceTargetContinueRecoverRate(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B45026 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_19422/*"fieldHpContinueRecoverRate"*/, method);
    byte_4B45026 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19422/*"fieldHpContinueRecoverRate"*/, 0, v2);
}


System_String_o *__fastcall QuestPhaseEntity__GetEffectOnMap(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B45039 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_10652/*"PlayGetEffectOnMap"*/, method);
    byte_4B45039 = 1;
  }
  return QuestPhaseEntity__getScriptStr(this, (System_String_o *)StringLiteral_10652/*"PlayGetEffectOnMap"*/, 0LL, v2);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetEnemyInfoDispNpcSvtIdList(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Int32_array *v4; // x2
  const MethodInfo *v5; // x3

  if ( (byte_4B4500C & 1) == 0 )
  {
    sub_1BDB878(&int___TypeInfo, method);
    sub_1BDB878(&StringLiteral_22566/*"overwriteEnemyInfos"*/, v3);
    byte_4B4500C = 1;
  }
  v4 = (System_Int32_array *)sub_1BDB920(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_22566/*"overwriteEnemyInfos"*/, v4, v5);
}


System_String_array *__fastcall QuestPhaseEntity__GetEnemyInfoOverwriteNpcSvtNameList(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_String_array *v4; // x2
  const MethodInfo *v5; // x3

  if ( (byte_4B4500D & 1) == 0 )
  {
    sub_1BDB878(&string___TypeInfo, method);
    sub_1BDB878(&StringLiteral_22565/*"overwriteEnemyInfoNames"*/, v3);
    byte_4B4500D = 1;
  }
  v4 = (System_String_array *)sub_1BDB920(string___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptStringArrayParam(this, (System_String_o *)StringLiteral_22565/*"overwriteEnemyInfoNames"*/, v4, v5);
}


int32_t __fastcall QuestPhaseEntity__GetEquipAddId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B4500B & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_19065/*"equipAddId"*/, method);
    byte_4B4500B = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19065/*"equipAddId"*/, 0, v2);
}


int32_t __fastcall QuestPhaseEntity__GetFinishEffectId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B44FEB & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_19459/*"finishEffectId"*/, method);
    byte_4B44FEB = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19459/*"finishEffectId"*/, -1, v2);
}


int32_t __fastcall QuestPhaseEntity__GetFormationBgmId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B45012 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_19578/*"formationBgmId"*/, method);
    byte_4B45012 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19578/*"formationBgmId"*/, -1, v2);
}


float __fastcall QuestPhaseEntity__GetFormationSubBgmFadeInTime(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B45014 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_19579/*"formationSubBgmFadeInTime"*/, method);
    byte_4B45014 = 1;
  }
  return (float)QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19579/*"formationSubBgmFadeInTime"*/, 0, v2) / 1000.0;
}


int32_t __fastcall QuestPhaseEntity__GetFormationSubBgmId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B45013 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_19580/*"formationSubBgmId"*/, method);
    byte_4B45013 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19580/*"formationSubBgmId"*/, -1, v2);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetGimmickAnimTypeArray(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B44FE9 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_19877/*"gimmickAnimType"*/, method);
    byte_4B44FE9 = 1;
  }
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_19877/*"gimmickAnimType"*/, 0LL, v2);
}


int32_t __fastcall QuestPhaseEntity__GetGimmickId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B44FE2 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_19878/*"gimmickId"*/, method);
    byte_4B44FE2 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19878/*"gimmickId"*/, -1, v2);
}


System_Object_array *__fastcall QuestPhaseEntity__GetGimmickResultVoiceArray(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B44FE8 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_23104/*"resultVoice"*/, method);
    byte_4B44FE8 = 1;
  }
  return QuestPhaseEntity__getScriptObjArrayParam(this, (System_String_o *)StringLiteral_23104/*"resultVoice"*/, 0LL, v2);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetGimmickSkillIdArray(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Int32_array *v4; // x2
  const MethodInfo *v5; // x3

  if ( (byte_4B44FE5 & 1) == 0 )
  {
    sub_1BDB878(&int___TypeInfo, method);
    sub_1BDB878(&StringLiteral_23021/*"reelSkill"*/, v3);
    byte_4B44FE5 = 1;
  }
  v4 = (System_Int32_array *)sub_1BDB920(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_23021/*"reelSkill"*/, v4, v5);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetGimmickSkillRateArray(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Int32_array *v4; // x2
  const MethodInfo *v5; // x3

  if ( (byte_4B44FE6 & 1) == 0 )
  {
    sub_1BDB878(&int___TypeInfo, method);
    sub_1BDB878(&StringLiteral_23020/*"reelRate"*/, v3);
    byte_4B44FE6 = 1;
  }
  v4 = (System_Int32_array *)sub_1BDB920(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_23020/*"reelRate"*/, v4, v5);
}


System_String_array *__fastcall QuestPhaseEntity__GetGimmickStartVoiceArray(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B44FE7 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_23701/*"startVoice"*/, method);
    byte_4B44FE7 = 1;
  }
  return QuestPhaseEntity__getScriptStringArrayParam(this, (System_String_o *)StringLiteral_23701/*"startVoice"*/, 0LL, v2);
}


int32_t __fastcall QuestPhaseEntity__GetGimmickSvtId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B44FE3 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_19879/*"gimmickSvtId"*/, method);
    byte_4B44FE3 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19879/*"gimmickSvtId"*/, -1, v2);
}


int32_t __fastcall QuestPhaseEntity__GetIconItemNumberDispType(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B4502B & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_20142/*"iconItemNumberDispType"*/, method);
    byte_4B4502B = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20142/*"iconItemNumberDispType"*/, 0, v2);
}


float __fastcall QuestPhaseEntity__GetIncomingCallDispTime(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B4501E & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_20757/*"incomingCallDispTime"*/, method);
    byte_4B4501E = 1;
  }
  return (float)QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20757/*"incomingCallDispTime"*/, 500, v2) / 1000.0;
}


System_String_o *__fastcall QuestPhaseEntity__GetIncomingCallMessage(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1

  if ( (byte_4B4501D & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_20758/*"incomingCallMessage"*/, method);
    sub_1BDB878(&StringLiteral_1/*""*/, v4);
    byte_4B4501D = 1;
  }
  return QuestPhaseEntity__getScriptStr(
           this,
           (System_String_o *)StringLiteral_20758/*"incomingCallMessage"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


System_String_o *__fastcall QuestPhaseEntity__GetIncomingCallTitle(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1

  if ( (byte_4B4501C & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_20759/*"incomingCallTitle"*/, method);
    sub_1BDB878(&StringLiteral_1/*""*/, v4);
    byte_4B4501C = 1;
  }
  return QuestPhaseEntity__getScriptStr(
           this,
           (System_String_o *)StringLiteral_20759/*"incomingCallTitle"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


int32_t __fastcall QuestPhaseEntity__GetInitEventDeckNo(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B45043 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_20797/*"initEventDeckNo"*/, method);
    byte_4B45043 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_20797/*"initEventDeckNo"*/, 0, 0LL);
}


System_String_o *__fastcall QuestPhaseEntity__GetMapModelEntryAnimationName(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1

  if ( (byte_4B45018 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_1422/*"3dMapEntryAnimName"*/, method);
    sub_1BDB878(&StringLiteral_1/*""*/, v4);
    byte_4B45018 = 1;
  }
  return QuestPhaseEntity__getScriptStr(
           this,
           (System_String_o *)StringLiteral_1422/*"3dMapEntryAnimName"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


int32_t __fastcall QuestPhaseEntity__GetMasterSkillDelay(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B44FF4 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_21477/*"masterSkillDelay"*/, method);
    byte_4B44FF4 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21477/*"masterSkillDelay"*/, 0, v2);
}


System_String_o *__fastcall QuestPhaseEntity__GetMasterSkillDelayInfo(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B44FF5 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_21478/*"masterSkillDelayInfo"*/, method);
    byte_4B44FF5 = 1;
  }
  return QuestPhaseEntity__getScriptStr(this, (System_String_o *)StringLiteral_21478/*"masterSkillDelayInfo"*/, 0LL, v2);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetMoveSceneInfo(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Int32_array *v4; // x2
  const MethodInfo *v5; // x3

  if ( (byte_4B45020 & 1) == 0 )
  {
    sub_1BDB878(&int___TypeInfo, method);
    sub_1BDB878(&StringLiteral_21682/*"moveSceneInfo"*/, v3);
    byte_4B45020 = 1;
  }
  v4 = (System_Int32_array *)sub_1BDB920(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_21682/*"moveSceneInfo"*/, v4, v5);
}


int32_t __fastcall QuestPhaseEntity__GetMovieAfterCrossFadeStartFrame(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B44FDD & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_21687/*"movieAfterCrossFadeStartFrame"*/, method);
    byte_4B44FDD = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21687/*"movieAfterCrossFadeStartFrame"*/, 0, v2);
}


int32_t __fastcall QuestPhaseEntity__GetMovieAfterCrossFadeTime(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B44FDC & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_21688/*"movieAfterCrossFadeTime"*/, method);
    byte_4B44FDC = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21688/*"movieAfterCrossFadeTime"*/, 0, v2);
}


int32_t __fastcall QuestPhaseEntity__GetNextSceneId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B44FF8 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_22228/*"nextSceneId"*/, method);
    byte_4B44FF8 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22228/*"nextSceneId"*/, 0, v2);
}


System_String_array *__fastcall QuestPhaseEntity__GetNextSceneParam(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  System_String_array *result; // x0

  if ( (byte_4B44FF9 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_22229/*"nextSceneParam"*/, method);
    byte_4B44FF9 = 1;
  }
  result = (System_String_array *)QuestPhaseEntity__getScriptStr(this, (System_String_o *)StringLiteral_22229/*"nextSceneParam"*/, 0LL, v2);
  if ( result )
    return System_String__Split((System_String_o *)result, 0x2Cu, 0, 0LL);
  return result;
}


int32_t __fastcall QuestPhaseEntity__GetNotDispEquipSkillChargeTurn(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B4502A & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_22318/*"notDispEquipSkillChargeTurn"*/, method);
    byte_4B4502A = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22318/*"notDispEquipSkillChargeTurn"*/, 0, v2);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetNotHavingQuests(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Int32_array *v4; // x2
  const MethodInfo *v5; // x3

  if ( (byte_4B44FFB & 1) == 0 )
  {
    sub_1BDB878(&int___TypeInfo, method);
    sub_1BDB878(&StringLiteral_22323/*"notHavingQuest"*/, v3);
    byte_4B44FFB = 1;
  }
  v4 = (System_Int32_array *)sub_1BDB920(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_22323/*"notHavingQuest"*/, v4, v5);
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

  if ( (byte_4B45009 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_object__TypeInfo, method);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v3);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_int__int_____ctor__, v4);
    sub_1BDB878(&System_Collections_Generic_Dictionary_int__int____TypeInfo, v5);
    sub_1BDB878(&Method_System_Collections_Generic_List_object__ForEach__, v6);
    sub_1BDB878(&System_Collections_Generic_List_object__TypeInfo, v7);
    sub_1BDB878(&Method_QuestPhaseEntity___c__DisplayClass113_0__GetNpcAiInfo_b__0__, v8);
    sub_1BDB878(&QuestPhaseEntity___c__DisplayClass113_0_TypeInfo, v9);
    sub_1BDB878(&StringLiteral_16710/*"aiMultiNpc"*/, v10);
    sub_1BDB878(&StringLiteral_16711/*"aiNpc"*/, v11);
    byte_4B45009 = 1;
  }
  obj = 0LL;
  value = 0LL;
  v12 = sub_1BDBAC4(QuestPhaseEntity___c__DisplayClass113_0_TypeInfo);
  QuestPhaseEntity___c__DisplayClass113_0___ctor((QuestPhaseEntity___c__DisplayClass113_0_o *)v12, 0LL);
  v13 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BDBAC4(System_Collections_Generic_Dictionary_int__int____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v13,
    (const MethodInfo_333A94C *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  if ( !v12 )
    goto LABEL_14;
  *(_QWORD *)(v12 + 16) = v13;
  v18 = (System_Collections_Generic_Dictionary_int__int____o **)(v12 + 16);
  sub_1BDB81C((CGThumbnailListItem_o *)(v12 + 16), (int32_t)v13, v16, v17);
  script = this->fields.script;
  if ( !script )
    return *v18;
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)script,
         (Il2CppObject *)StringLiteral_16710/*"aiMultiNpc"*/,
         &value,
         (const MethodInfo_33A1A3C *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    v20 = value;
    if ( value )
    {
      methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(value->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
        && (System_Collections_Generic_List_object__c *)value->klass->_2.typeHierarchy[methodPtr_low - 1] == System_Collections_Generic_List_object__TypeInfo )
      {
        v24 = (System_Action_object__o *)sub_1BDBAC4(System_Action_object__TypeInfo);
        System_Action_object____ctor(
          v24,
          (Il2CppObject *)v12,
          Method_QuestPhaseEntity___c__DisplayClass113_0__GetNpcAiInfo_b__0__,
          0LL);
        System_Collections_Generic_List_object___ForEach(
          (System_Collections_Generic_List_object__o *)v20,
          (System_Action_T__o *)v24,
          (const MethodInfo_36D6804 *)Method_System_Collections_Generic_List_object__ForEach__);
        return *v18;
      }
    }
  }
  v14 = this->fields.script;
  if ( !v14 )
LABEL_14:
    sub_1BDBAD4(v14, v15);
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)v14,
         (Il2CppObject *)StringLiteral_16711/*"aiNpc"*/,
         &obj,
         (const MethodInfo_33A1A3C *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    QuestPhaseEntity__SetNpcAiInfo((System_Collections_Generic_IDictionary_int__int____o *)*v18, obj, v22);
  }
  return *v18;
}


System_String_o *__fastcall QuestPhaseEntity__GetOpenedPeriodMessage(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B45042 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_22495/*"openPeriodMessage"*/, method);
    byte_4B45042 = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_22495/*"openPeriodMessage"*/, 0LL, 0LL);
}


int32_t __fastcall QuestPhaseEntity__GetOpenedPeriodPrivilegeId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B45041 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_22496/*"openPeriodPrivilegeId"*/, method);
    byte_4B45041 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22496/*"openPeriodPrivilegeId"*/, 0, 0LL);
}


int32_t __fastcall QuestPhaseEntity__GetOverWriteMasterImageId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B44FDA & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_21467/*"masterImageId"*/, method);
    byte_4B44FDA = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21467/*"masterImageId"*/, 0, v2);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall QuestPhaseEntity__GetOverwriteCommandSpellContinue(
        QuestPhaseEntity_o *this,
        int32_t def,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4B45003 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_22556/*"overwriteCommandSpellContinue"*/, *(_QWORD *)&def);
    byte_4B45003 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22556/*"overwriteCommandSpellContinue"*/, def, v3);
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
  __int64 v9; // x2

  if ( (byte_4B45016 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_22557/*"overwriteCommandSpellIcons"*/, *(_QWORD *)&genderType);
    byte_4B45016 = 1;
  }
  ScriptIntArrayParam = QuestPhaseEntity__getScriptIntArrayParam(
                          this,
                          (System_String_o *)StringLiteral_22557/*"overwriteCommandSpellIcons"*/,
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
    sub_1BDBADC(ScriptIntArrayParam, v8, v9);
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

  if ( (byte_4B44FBF & 1) == 0 )
  {
    sub_1BDB878(&System_Collections_Generic_Dictionary_string__object__TypeInfo, method);
    sub_1BDB878(&StringLiteral_22568/*"overwriteEquipSkills"*/, v4);
    byte_4B44FBF = 1;
  }
  result = (System_Collections_Generic_Dictionary_string__object__o *)QuestPhaseEntity__getScriptObj(
                                                                        this,
                                                                        (System_String_o *)StringLiteral_22568/*"overwriteEquipSkills"*/,
                                                                        v2);
  if ( result )
  {
    methodPtr_low = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (System_Collections_Generic_Dictionary_string__object__c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
    {
      sub_1BDBD94(result);
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
        System_Int32_array **overwriteLimitCountRangeTypes,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Int32_array *ScriptIntArrayParam; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  System_Int32_array *v19; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  const MethodInfo *v22; // x3
  System_Int32_array *v23; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  const MethodInfo *v26; // x3
  System_Int32_array *v27; // x0
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  int32_t v33; // w2
  const MethodInfo *v34; // x3

  if ( (byte_4B44FF0 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_22577/*"overwriteLimitCountSvtIds"*/, overwriteLimitCountSvtIds);
    sub_1BDB878(&StringLiteral_22578/*"overwriteLimitCounts"*/, v11);
    sub_1BDB878(&StringLiteral_22575/*"overwriteLimitCountIconIds"*/, v12);
    sub_1BDB878(&StringLiteral_22576/*"overwriteLimitCountRangeTypes"*/, v13);
    byte_4B44FF0 = 1;
  }
  ScriptIntArrayParam = QuestPhaseEntity__getScriptIntArrayParam(
                          this,
                          (System_String_o *)StringLiteral_22577/*"overwriteLimitCountSvtIds"*/,
                          0LL,
                          (const MethodInfo *)overwriteLimitCountIconIds);
  *overwriteLimitCountSvtIds = ScriptIntArrayParam;
  sub_1BDB81C((CGThumbnailListItem_o *)overwriteLimitCountSvtIds, (int32_t)ScriptIntArrayParam, v15, v16);
  if ( *overwriteLimitCountSvtIds )
  {
    v19 = QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_22578/*"overwriteLimitCounts"*/, 0LL, v18);
    *overwriteLimitCounts = v19;
    sub_1BDB81C((CGThumbnailListItem_o *)overwriteLimitCounts, (int32_t)v19, v20, v21);
    v23 = QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_22575/*"overwriteLimitCountIconIds"*/, 0LL, v22);
    *overwriteLimitCountIconIds = v23;
    sub_1BDB81C((CGThumbnailListItem_o *)overwriteLimitCountIconIds, (int32_t)v23, v24, v25);
    v27 = QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_22576/*"overwriteLimitCountRangeTypes"*/, 0LL, v26);
    *overwriteLimitCountRangeTypes = v27;
    sub_1BDB81C((CGThumbnailListItem_o *)overwriteLimitCountRangeTypes, (int32_t)v27, v28, v29);
    return *overwriteLimitCounts != 0LL;
  }
  else
  {
    *overwriteLimitCounts = 0LL;
    sub_1BDB81C((CGThumbnailListItem_o *)overwriteLimitCounts, 0, v17, v18);
    *overwriteLimitCountIconIds = 0LL;
    sub_1BDB81C((CGThumbnailListItem_o *)overwriteLimitCountIconIds, 0, v31, v32);
    *overwriteLimitCountRangeTypes = 0LL;
    sub_1BDB81C((CGThumbnailListItem_o *)overwriteLimitCountRangeTypes, 0, v33, v34);
    return 0;
  }
}


System_Int32_array *__fastcall QuestPhaseEntity__GetOverwriteResultBgmCondIds(
        QuestPhaseEntity_o *this,
        System_Int32_array *defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4B44FC3 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_22588/*"overwriteResultBgmCondIds"*/, defVal);
    byte_4B44FC3 = 1;
  }
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_22588/*"overwriteResultBgmCondIds"*/, defVal, v3);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetOverwriteResultBgmIds(
        QuestPhaseEntity_o *this,
        System_Int32_array *defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4B44FC2 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_22589/*"overwriteResultBgmIds"*/, defVal);
    byte_4B44FC2 = 1;
  }
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_22589/*"overwriteResultBgmIds"*/, defVal, v3);
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

  if ( (byte_4B44FB3 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Array_Empty_int___, method);
    byte_4B44FB3 = 1;
  }
  result = QuestPhaseEntity__GetPrioredIndividualityLocal(this, method);
  if ( !result )
  {
    v5 = Method_System_Array_Empty_int___;
    v6 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v6 )
    {
      sub_1C2BF64(Method_System_Array_Empty_int___);
      v6 = v5[7];
    }
    v7 = *(_QWORD *)(v6 + 16);
    if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
      v7 = sub_1C2BF08(inited);
    if ( !*(_DWORD *)(v7 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v7);
    v8 = *(_QWORD *)(v5[7] + 16LL);
    if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
      v8 = sub_1C2BF08(inited);
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
  QuestPhaseIndividualityEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B44FB4 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMaster_QuestBehaviorMaster___, method);
    sub_1BDB878(&Method_DataManager_GetMaster_QuestPhaseIndividualityMaster___, v3);
    sub_1BDB878(&DataManager_TypeInfo, v4);
    byte_4B44FB4 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_QuestBehaviorMaster___);
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
    UniqueId = (System_Int32_array *)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_QuestPhaseIndividualityMaster___);
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
        return QuestPhaseIndividualityEntity__GetAddAndDelAfterIndividuality(v12, UniqueId, 0LL);
LABEL_15:
      sub_1BDBAD4(UniqueId, v8);
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

  if ( (byte_4B44FB6 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMaster_QuestBehaviorMaster___, method);
    sub_1BDB878(&DataManager_TypeInfo, v3);
    byte_4B44FB6 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_QuestBehaviorMaster___);
  UniqueId = QuestPhaseEntity__GetUniqueId(this, v5);
  if ( !Master_object )
    sub_1BDBAD4(UniqueId, v7);
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

  if ( (byte_4B44FB7 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMaster_QuestBehaviorMaster___, method);
    sub_1BDB878(&DataManager_TypeInfo, v3);
    byte_4B44FB7 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_QuestBehaviorMaster___);
  UniqueId = QuestPhaseEntity__GetUniqueId(this, v5);
  if ( !Master_object )
    sub_1BDBAD4(UniqueId, v7);
  return QuestBehaviorMaster__GetBattleBgType(
           (QuestBehaviorMaster_o *)Master_object,
           UniqueId,
           this->fields.battleBgType,
           v8);
}


int32_t __fastcall QuestPhaseEntity__GetProgressAfterMovie(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B44FD8 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_22815/*"progressAfterMovie"*/, method);
    byte_4B44FD8 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22815/*"progressAfterMovie"*/, 0, v2);
}


int32_t __fastcall QuestPhaseEntity__GetQuestPhaseSelectRoute(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1
  int32_t ScriptIntParam; // w0
  int32_t v6; // w19
  Il2CppObject *Instance; // x0
  __int64 v8; // x1

  if ( (byte_4B44FCD & 1) == 0 )
  {
    sub_1BDB878(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, method);
    sub_1BDB878(&StringLiteral_22701/*"phaseRouteSelect"*/, v4);
    byte_4B44FCD = 1;
  }
  ScriptIntParam = QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22701/*"phaseRouteSelect"*/, 0, v2);
  if ( ScriptIntParam < 1 )
    return 0;
  v6 = ScriptIntParam;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39166A8 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Instance )
    sub_1BDBAD4(0LL, v8);
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

  if ( (byte_4B44FE4 & 1) == 0 )
  {
    sub_1BDB878(&int___TypeInfo, method);
    sub_1BDB878(&StringLiteral_23019/*"reelIcon"*/, v3);
    byte_4B44FE4 = 1;
  }
  v4 = (System_Int32_array *)sub_1BDB920(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_23019/*"reelIcon"*/, v4, v5);
}


int32_t __fastcall QuestPhaseEntity__GetReferToQuestPhase(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B45031 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_23025/*"referToQuestPhase"*/, method);
    byte_4B45031 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_23025/*"referToQuestPhase"*/, 0, v2);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetSelectableQuests(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B44FCC & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_22887/*"questSelect"*/, method);
    byte_4B44FCC = 1;
  }
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_22887/*"questSelect"*/, 0LL, v2);
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
  __int64 v9; // x2
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
      sub_1BDBADC(SelectableQuests, v8, v9);
    return SelectableQuests->m_Items[selectIndex + 1];
  }
  return result;
}


System_Int32_array *__fastcall QuestPhaseEntity__GetShadowOffSvtIds(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Int32_array *v4; // x2
  const MethodInfo *v5; // x3

  if ( (byte_4B44FF3 & 1) == 0 )
  {
    sub_1BDB878(&int___TypeInfo, method);
    sub_1BDB878(&StringLiteral_23448/*"shadowOffSvtIds"*/, v3);
    byte_4B44FF3 = 1;
  }
  v4 = (System_Int32_array *)sub_1BDB920(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_23448/*"shadowOffSvtIds"*/, v4, v5);
}


int32_t __fastcall QuestPhaseEntity__GetSingleForceSvtId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B44FF1 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_23537/*"singleForceSvtId"*/, method);
    byte_4B44FF1 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_23537/*"singleForceSvtId"*/, 0, v2);
}


int32_t __fastcall QuestPhaseEntity__GetStartBattleSoundMode(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B4502F & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_13017/*"StartBattleSoundMode"*/, method);
    byte_4B4502F = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_13017/*"StartBattleSoundMode"*/, 0, v2);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetStartMovieWave(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B44FD9 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_21692/*"movieWave"*/, method);
    byte_4B44FD9 = 1;
  }
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_21692/*"movieWave"*/, 0LL, v2);
}


int32_t __fastcall QuestPhaseEntity__GetStartScreenEffect(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B4502E & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_13016/*"StartBattleScreenEffect"*/, method);
    byte_4B4502E = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_13016/*"StartBattleScreenEffect"*/, 0, v2);
}


int32_t __fastcall QuestPhaseEntity__GetSupportInitDeckIndex(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B45004 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_19150/*"eventDeckIndex"*/, method);
    byte_4B45004 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19150/*"eventDeckIndex"*/, 0, v2);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetTakeOverEnemyNpcIds(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B4503D & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_24031/*"takeOverEnemyNpcIds"*/, method);
    byte_4B4503D = 1;
  }
  return EntityScriptUtil__GetIntArray(this->fields.script, (System_String_o *)StringLiteral_24031/*"takeOverEnemyNpcIds"*/, 0LL, 0LL);
}


int32_t __fastcall QuestPhaseEntity__GetTemporaryCommandSpell(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B45001 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_24078/*"temporaryCommandSpell"*/, method);
    byte_4B45001 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_24078/*"temporaryCommandSpell"*/, -1, v2);
}


int64_t __fastcall QuestPhaseEntity__GetUniqueId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  int32_t phase; // w19
  int32_t questId; // w20

  if ( (byte_4B44FB2 & 1) == 0 )
  {
    sub_1BDB878(&BattleDataDefine_TypeInfo, method);
    byte_4B44FB2 = 1;
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

  if ( (byte_4B44FF2 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_24540/*"useEventDeckNo"*/, method);
    byte_4B44FF2 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_24540/*"useEventDeckNo"*/, 1, v2);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetVoiceOffPlayerSvtIdArray(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B45015 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_24781/*"voiceOffMySvtIds"*/, method);
    byte_4B45015 = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_24781/*"voiceOffMySvtIds"*/, 0LL);
}


System_String_o *__fastcall QuestPhaseEntity__GetWarBoardStartMovieName(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1

  if ( (byte_4B4500F & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_15567/*"WarBoardStartMovieName"*/, method);
    sub_1BDB878(&StringLiteral_1/*""*/, v4);
    byte_4B4500F = 1;
  }
  return QuestPhaseEntity__getScriptStr(
           this,
           (System_String_o *)StringLiteral_15567/*"WarBoardStartMovieName"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


System_String_array *__fastcall QuestPhaseEntity__GetWaveStartMovie(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B44FD7 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_24863/*"waveStartMovie"*/, method);
    byte_4B44FD7 = 1;
  }
  return QuestPhaseEntity__getScriptStringArrayParam(this, (System_String_o *)StringLiteral_24863/*"waveStartMovie"*/, 0LL, v2);
}


int32_t __fastcall QuestPhaseEntity__GetWinBgmOffFlg(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B44FEC & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_19015/*"endBgmOff"*/, method);
    byte_4B44FEC = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19015/*"endBgmOff"*/, 0, v2);
}


int32_t __fastcall QuestPhaseEntity__GetWinVoiceOffFlg(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B44FEA & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_19028/*"endVoiceOff"*/, method);
    byte_4B44FEA = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19028/*"endVoiceOff"*/, 0, v2);
}


bool __fastcall QuestPhaseEntity__HasExtraBattleUserInterfaceData(
        QuestPhaseEntity_o *this,
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

  if ( (byte_4B45047 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Array_Empty_ExtraBattleUserInterfaceData_JsonConvertData___, dataArray);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v7);
    sub_1BDB878(&Method_System_Linq_Enumerable_Any_ExtraBattleUserInterfaceData_JsonConvertData___, v8);
    sub_1BDB878(&Method_JsonManager_Deserialize_ExtraBattleUserInterfaceData_JsonConvertData_____, v9);
    sub_1BDB878(&JsonManager_TypeInfo, v10);
    sub_1BDB878(&StringLiteral_19319/*"exBattleUI"*/, v11);
    byte_4B45047 = 1;
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


bool __fastcall QuestPhaseEntity__HasReleaseFocusQuestBoardKey(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B45027 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_20958/*"isReleaseFocus"*/, method);
    byte_4B45027 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_20958/*"isReleaseFocus"*/, 0LL);
}


bool __fastcall QuestPhaseEntity__IsActiveAssistSkill(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Int32_array *v4; // x0
  const MethodInfo *v5; // x3
  System_Int32_array *ScriptIntArrayParam; // x0
  __int64 v7; // x1

  if ( (byte_4B44FFD & 1) == 0 )
  {
    sub_1BDB878(&int___TypeInfo, method);
    sub_1BDB878(&StringLiteral_16926/*"assistIds"*/, v3);
    byte_4B44FFD = 1;
  }
  v4 = (System_Int32_array *)sub_1BDB920(int___TypeInfo, 0LL);
  ScriptIntArrayParam = QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_16926/*"assistIds"*/, v4, v5);
  if ( !ScriptIntArrayParam )
    sub_1BDBAD4(0LL, v7);
  return ScriptIntArrayParam->max_length != 0;
}


bool __fastcall QuestPhaseEntity__IsAreaImporveQuest(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4B45010 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_16876/*"areaImprovementQuest"*/, method);
    byte_4B45010 = 1;
  }
  return QuestPhaseEntity__getScriptObj(this, (System_String_o *)StringLiteral_16876/*"areaImprovementQuest"*/, v2) != 0LL;
}


bool __fastcall QuestPhaseEntity__IsAutoExecute(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B45038 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_20916/*"isAutoExecute"*/, method);
    byte_4B45038 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_20916/*"isAutoExecute"*/, 0LL);
}


bool __fastcall QuestPhaseEntity__IsClearFieldBuffWhenWaveStart(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B45046 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_18010/*"clearFieldBuffWhenWaveStart"*/, method);
    byte_4B45046 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_18010/*"clearFieldBuffWhenWaveStart"*/, 0, 0LL) != 0;
}


bool __fastcall QuestPhaseEntity__IsContinueWaveRestart(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B45025 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_18258/*"continueWaveRestart"*/, method);
    byte_4B45025 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_18258/*"continueWaveRestart"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__IsFadeOutMainBgmBeforeBattle(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B45032 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_19394/*"fadeOutMainBgmBeforeBattle"*/, method);
    byte_4B45032 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_19394/*"fadeOutMainBgmBeforeBattle"*/, 0LL);
}


bool __fastcall QuestPhaseEntity__IsHideAssistConfButton(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B45000 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_19979/*"hideAssistConfButton"*/, method);
    byte_4B45000 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19979/*"hideAssistConfButton"*/, 0, v2) != 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestPhaseEntity__IsHideBattlePointGauge(
        QuestPhaseEntity_o *this,
        int32_t battlePointId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_IEnumerable_TSource__o *IntArray; // x0

  if ( (byte_4B45037 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Linq_Enumerable_Contains_int___, *(_QWORD *)&battlePointId);
    sub_1BDB878(&StringLiteral_7330/*"HideBattlePointGauge"*/, v5);
    byte_4B45037 = 1;
  }
  IntArray = (System_Collections_Generic_IEnumerable_TSource__o *)EntityScriptUtil__GetIntArray(
                                                                    this->fields.script,
                                                                    (System_String_o *)StringLiteral_7330/*"HideBattlePointGauge"*/,
                                                                    0LL,
                                                                    0LL);
  if ( IntArray )
    LOBYTE(IntArray) = System_Linq_Enumerable__Contains_int_(
                         IntArray,
                         battlePointId,
                         (const MethodInfo_304CA50 *)Method_System_Linq_Enumerable_Contains_int___);
  return (char)IntArray;
}


bool __fastcall QuestPhaseEntity__IsIgnoreBattleLoseDialog(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B44FD1 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_20294/*"ignoreBattleLoseDialog"*/, method);
    byte_4B44FD1 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_20294/*"ignoreBattleLoseDialog"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestPhaseEntity__IsIgnoreBattlePointUp(
        QuestPhaseEntity_o *this,
        int32_t battlePointId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_IEnumerable_TSource__o *IntArray; // x0

  if ( (byte_4B45035 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Linq_Enumerable_Contains_int___, *(_QWORD *)&battlePointId);
    sub_1BDB878(&StringLiteral_7539/*"IgnoreBattlePointUp"*/, v5);
    byte_4B45035 = 1;
  }
  IntArray = (System_Collections_Generic_IEnumerable_TSource__o *)EntityScriptUtil__GetIntArray(
                                                                    this->fields.script,
                                                                    (System_String_o *)StringLiteral_7539/*"IgnoreBattlePointUp"*/,
                                                                    0LL,
                                                                    0LL);
  if ( IntArray )
    LOBYTE(IntArray) = System_Linq_Enumerable__Contains_int_(
                         IntArray,
                         battlePointId,
                         (const MethodInfo_304CA50 *)Method_System_Linq_Enumerable_Contains_int___);
  return (char)IntArray;
}


bool __fastcall QuestPhaseEntity__IsInterruptionQuest(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B4502D & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_20843/*"interruptibleQuest"*/, method);
    byte_4B4502D = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20843/*"interruptibleQuest"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__IsInvisibleConnectAndLoad(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B44FF7 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_20883/*"invisibleConnectAndLoad"*/, method);
    byte_4B44FF7 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20883/*"invisibleConnectAndLoad"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__IsKeepFieldBuffWhenMoveNextBattle(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B45044 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_21117/*"keepFieldBuffWhenMoveNextBattle"*/, method);
    byte_4B45044 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_21117/*"keepFieldBuffWhenMoveNextBattle"*/, 0, 0LL) != 0;
}


bool __fastcall QuestPhaseEntity__IsKeepSubBgmAfterBattleResult(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B44FED & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_21120/*"keepSubBgmUntilBattleResult"*/, method);
    byte_4B44FED = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_21120/*"keepSubBgmUntilBattleResult"*/, 0LL);
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

  if ( (byte_4B44FF6 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Array_FindAll_int___, individualitys);
    sub_1BDB878(&Method_System_Collections_Generic_HashSet_int___ctor___77003856, v5);
    sub_1BDB878(&System_Collections_Generic_HashSet_int__TypeInfo, v6);
    sub_1BDB878(&System_Predicate_int__TypeInfo, v7);
    byte_4B44FF6 = 1;
  }
  PrioredIndividuality = (System_Collections_Generic_IEnumerable_T__o *)QuestPhaseEntity__GetPrioredIndividuality(
                                                                          this,
                                                                          (const MethodInfo *)individualitys);
  v9 = (System_Collections_Generic_HashSet_int__o *)sub_1BDBAC4(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor_56146576(
    v9,
    PrioredIndividuality,
    (const MethodInfo_358BA90 *)Method_System_Collections_Generic_HashSet_int___ctor___77003856);
  All_int = (System_Predicate_int__o *)sub_1BDBAC4(System_Predicate_int__TypeInfo);
  if ( !v9
    || (v12 = (System_Predicate_T__o *)All_int,
        System_Predicate_int____ctor(All_int, (Il2CppObject *)v9, (intptr_t)v9->klass->vtable._9_CopyTo.methodPtr, 0LL),
        (All_int = (System_Predicate_int__o *)System_Array__FindAll_int_(
                                                individualitys,
                                                v12,
                                                (const MethodInfo_31310A0 *)Method_System_Array_FindAll_int___)) == 0LL) )
  {
    sub_1BDBAD4(All_int, v11);
  }
  return All_int->fields.m_target != 0LL;
}


bool __fastcall QuestPhaseEntity__IsNonStopEndBgm(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B44FCE & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_22285/*"nonStopEndBgm"*/, method);
    byte_4B44FCE = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22285/*"nonStopEndBgm"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__IsNoneSupportFriendPoint(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B4503B & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_22297/*"noneSupportFriendPoint"*/, method);
    byte_4B4503B = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22297/*"noneSupportFriendPoint"*/, 0, 0LL) != 0;
}


bool __fastcall QuestPhaseEntity__IsNotClassBoard(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B45021 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_22316/*"notClassBoard"*/, method);
    byte_4B45021 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22316/*"notClassBoard"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__IsNotResetResultDispFlag(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B44FDB & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_22325/*"notResetResultDispFlag"*/, method);
    byte_4B44FDB = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22325/*"notResetResultDispFlag"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__IsNotUseRestrictionDialog(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B45022 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_22327/*"notUseRestrictionDialog"*/, method);
    byte_4B45022 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22327/*"notUseRestrictionDialog"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__IsPlayScriptBeforeForWarBoard(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B44FFC & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_20962/*"isScriptPlayForWarBoard"*/, method);
    byte_4B44FFC = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20962/*"isScriptPlayForWarBoard"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__IsReleaseFocusQuestBoard(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B45028 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_20958/*"isReleaseFocus"*/, method);
    byte_4B45028 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20958/*"isReleaseFocus"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__IsRepeatReward(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B4501F & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_23066/*"repeatReward"*/, method);
    byte_4B4501F = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_23066/*"repeatReward"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__IsReverseMyDeckSvtPosition(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B45033 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_23116/*"reverseMyDeckSvtPosition"*/, method);
    byte_4B45033 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_23116/*"reverseMyDeckSvtPosition"*/, 0LL);
}


bool __fastcall QuestPhaseEntity__IsSaveInterruptionEnemyData(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B4503E & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_23211/*"saveInterruptionEnemyData"*/, method);
    byte_4B4503E = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_23211/*"saveInterruptionEnemyData"*/, 0, 0LL) != 0;
}


bool __fastcall QuestPhaseEntity__IsSkipBattleFinish(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B45019 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_23557/*"skipBattleFinish"*/, method);
    byte_4B45019 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_23557/*"skipBattleFinish"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__IsSkipMoveNextBattleFade(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B4503C & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_23559/*"skipMoveNextBattleFade"*/, method);
    byte_4B4503C = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_23559/*"skipMoveNextBattleFade"*/, 0, 0LL) != 0;
}


bool __fastcall QuestPhaseEntity__IsUseGrandBoard(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B45048 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_20971/*"isUseGrandBoard"*/, method);
    byte_4B45048 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_20971/*"isUseGrandBoard"*/, 0, 0LL) != 0;
}


bool __fastcall QuestPhaseEntity__IsUseTemporaryCommandSpell(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B45002 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_24549/*"useTemporaryCommandSpell"*/, method);
    byte_4B45002 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_24549/*"useTemporaryCommandSpell"*/, -1, v2) == 1;
}


bool __fastcall QuestPhaseEntity__IsWaveCountInfinity(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B45017 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_24859/*"waveCountInfinity"*/, method);
    byte_4B45017 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_24859/*"waveCountInfinity"*/, -1, v2) != -1;
}


bool __fastcall QuestPhaseEntity__IsWaveSetup(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B45023 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_24861/*"waveSetup"*/, method);
    byte_4B45023 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_24861/*"waveSetup"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__IsWaveSetupAsOneParty(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B45024 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_24862/*"waveSetupAsOneParty"*/, method);
    byte_4B45024 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_24862/*"waveSetupAsOneParty"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__PlayHappinessCounterEffect(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B45036 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_10653/*"PlayHappinessCounterEffect"*/, method);
    byte_4B45036 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_10653/*"PlayHappinessCounterEffect"*/, 0LL);
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

  if ( (byte_4B4500A & 1) == 0 )
  {
    sub_1BDB878(&Method_BasicHelper_GetValue_long___, obj);
    sub_1BDB878(&Method_BasicHelper_GetValue_List_object____, v5);
    sub_1BDB878(&System_Converter_object__int__TypeInfo, v6);
    sub_1BDB878(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v7);
    sub_1BDB878(&System_Collections_Generic_IDictionary_int__int____TypeInfo, v8);
    sub_1BDB878(&Method_System_Collections_Generic_List_object__ConvertAll_int___, v9);
    sub_1BDB878(&Method_System_Collections_Generic_List_int__ToArray__, v10);
    sub_1BDB878(&Method_QuestPhaseEntity___c__SetNpcAiInfo_b__114_0__, v11);
    sub_1BDB878(&QuestPhaseEntity___c_TypeInfo, v12);
    sub_1BDB878(&StringLiteral_16709/*"aiIds"*/, v13);
    sub_1BDB878(&StringLiteral_22343/*"npcId"*/, v14);
    byte_4B4500A = 1;
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
                       (System_String_o *)StringLiteral_22343/*"npcId"*/,
                       0LL,
                       (const MethodInfo_30212E4 *)Method_BasicHelper_GetValue_long___);
        Value_object = BasicHelper__GetValue_object_(
                         v17,
                         (System_String_o *)StringLiteral_16709/*"aiIds"*/,
                         0LL,
                         (const MethodInfo_30213D0 *)Method_BasicHelper_GetValue_List_object____);
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
              _9__114_0 = (System_Converter_object__int__o *)sub_1BDBAC4(System_Converter_object__int__TypeInfo);
              System_Converter_object__int____ctor(
                _9__114_0,
                v23,
                Method_QuestPhaseEntity___c__SetNpcAiInfo_b__114_0__,
                0LL);
              static_fields = QuestPhaseEntity___c_TypeInfo->static_fields;
              static_fields->__9__114_0 = _9__114_0;
              sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->__9__114_0, (int32_t)_9__114_0, v25, v26);
            }
            v27 = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_object___ConvertAll_int_(
                                                              v20,
                                                              (System_Converter_T__TOutput__o *)_9__114_0,
                                                              (const MethodInfo_2F62DD0 *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
            if ( !v27
              || (v27 = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_int___ToArray(
                                                                    v27,
                                                                    (const MethodInfo_36BA858 *)Method_System_Collections_Generic_List_int__ToArray__),
                  !dicNpcAiId) )
            {
              sub_1BDBAD4(v27, v28);
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
              p_method = sub_1C2C00C(dicNpcAiId, System_Collections_Generic_IDictionary_int__int____TypeInfo, 1LL);
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


bool __fastcall QuestPhaseEntity__TryGetFadeColorAfterMovieFinished(
        QuestPhaseEntity_o *this,
        System_Nullable_Color__o *color,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_String_o *StringValue; // x0
  float v7; // w8
  bool result; // w0
  _WORD v9[28]; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B45045 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Nullable_Color__get_HasValue__, color);
    sub_1BDB878(&StringLiteral_19390/*"fadeColorAfterMovieFinished"*/, v5);
    byte_4B45045 = 1;
  }
  StringValue = EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_19390/*"fadeColorAfterMovieFinished"*/, 0LL, 0LL);
  ColorHelper__ParseColorCode((System_Nullable_Color__o *)v9, StringValue, 0LL);
  v7 = *(float *)&v9[8];
  *(System_Nullable_Color__o *)&v9[12] = *(System_Nullable_Color__o *)v9;
  *(_OWORD *)&color->fields.hasValue = *(_OWORD *)v9;
  result = color->fields.hasValue;
  color->fields.value.fields.a = v7;
  return result;
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
  QuestPhaseEntity___c__DisplayClass162_0_o *v23; // x23
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
  __int64 v40; // x2
  int max_length; // w8
  CommonReleaseMaster_o *v42; // x22
  unsigned int v43; // w23
  Il2CppObject *v44; // x24

  if ( (byte_4B4503A & 1) == 0 )
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
    sub_1BDB878(&Method_QuestPhaseEntity___c__TryGetOverwritePlayerSequenceSelectTypeByGender_b__162_1__, v18);
    sub_1BDB878(
      &Method_QuestPhaseEntity___c__DisplayClass162_0__TryGetOverwritePlayerSequenceSelectTypeByGender_b__0__,
      v19);
    sub_1BDB878(&QuestPhaseEntity___c__DisplayClass162_0_TypeInfo, v20);
    sub_1BDB878(&QuestPhaseEntity___c_TypeInfo, v21);
    sub_1BDB878(&StringLiteral_22584/*"overwritePlayerSequenceSelectTypeByGender"*/, v22);
    byte_4B4503A = 1;
  }
  v23 = (QuestPhaseEntity___c__DisplayClass162_0_o *)sub_1BDBAC4(QuestPhaseEntity___c__DisplayClass162_0_TypeInfo);
  QuestPhaseEntity___c__DisplayClass162_0___ctor(v23, 0LL);
  if ( !v23 )
    goto LABEL_28;
  v23->fields.servantId = servantId;
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
    Method_QuestPhaseEntity___c__DisplayClass162_0__TryGetOverwritePlayerSequenceSelectTypeByGender_b__0__,
    0LL);
  v30 = System_Linq_Enumerable__Where_object_(
          v28,
          (System_Func_TSource__bool__o *)v29,
          (const MethodInfo_3077440 *)Method_System_Linq_Enumerable_Where_BattleTreasureDeviceSequenceSelectType___);
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
    _9__162_1 = (System_Func_object__int__o *)sub_1BDBAC4(System_Func_BattleTreasureDeviceSequenceSelectType__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__162_1,
      v34,
      Method_QuestPhaseEntity___c__TryGetOverwritePlayerSequenceSelectTypeByGender_b__162_1__,
      0LL);
    static_fields = QuestPhaseEntity___c_TypeInfo->static_fields;
    static_fields->__9__162_1 = (struct System_Func_BattleTreasureDeviceSequenceSelectType__int__o *)_9__162_1;
    sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->__9__162_1, (int32_t)_9__162_1, v36, v37);
  }
  v38 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                               v32,
                                                               (System_Func_TSource__TKey__o *)_9__162_1,
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

  if ( (byte_4B44FC7 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_17085/*"battleEffectId"*/, *(_QWORD *)&defVal);
    byte_4B44FC7 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_17085/*"battleEffectId"*/, defVal, v3);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall QuestPhaseEntity__getBattleFieldMotionId(
        QuestPhaseEntity_o *this,
        int32_t defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4B44FC9 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_19430/*"fieldMotionId"*/, *(_QWORD *)&defVal);
    byte_4B44FC9 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19430/*"fieldMotionId"*/, defVal, v3);
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
  __int64 v11; // x2

  if ( (byte_4B44FCA & 1) == 0 )
  {
    sub_1BDB878(&int___TypeInfo, defVals);
    sub_1BDB878(&StringLiteral_19431/*"fieldMotionIds"*/, v6);
    byte_4B44FCA = 1;
  }
  result = QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_19431/*"fieldMotionIds"*/, defVals, v3);
  if ( !result )
    goto LABEL_10;
  if ( *(_QWORD *)&result->max_length )
    return result;
  BattleFieldMotionId = QuestPhaseEntity__getBattleFieldMotionId(this, -1, v9);
  result = defVals;
  if ( BattleFieldMotionId == -1 )
    return result;
  result = (System_Int32_array *)sub_1BDB920(int___TypeInfo, 1LL);
  if ( !result )
LABEL_10:
    sub_1BDBAD4(result, v8);
  if ( !result->max_length )
    sub_1BDBADC(result, v8, v11);
  result->m_Items[1] = BattleFieldMotionId;
  return result;
}


int32_t __fastcall QuestPhaseEntity__getBreakOnBattleWinWaitMSec(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B44FD5 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_17430/*"breakOnBattleWinWaitMSec"*/, method);
    byte_4B44FD5 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_17430/*"breakOnBattleWinWaitMSec"*/, 0, v2);
}


System_Int32_array *__fastcall QuestPhaseEntity__getEventGrounpIds(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Int32_array *v4; // x2
  const MethodInfo *v5; // x3

  if ( (byte_4B44FCB & 1) == 0 )
  {
    sub_1BDB878(&int___TypeInfo, method);
    sub_1BDB878(&StringLiteral_19151/*"eventGroupId"*/, v3);
    byte_4B44FCB = 1;
  }
  v4 = (System_Int32_array *)sub_1BDB920(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_19151/*"eventGroupId"*/, v4, v5);
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

  if ( (byte_4B45007 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_19997/*"hintLeftIndent"*/, method);
    byte_4B45007 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19997/*"hintLeftIndent"*/, -1, v2);
}


System_String_o *__fastcall QuestPhaseEntity__getHintMessage(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1

  if ( (byte_4B45006 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_19998/*"hintMessage"*/, method);
    sub_1BDB878(&StringLiteral_1/*""*/, v4);
    byte_4B45006 = 1;
  }
  return QuestPhaseEntity__getScriptStr(
           this,
           (System_String_o *)StringLiteral_19998/*"hintMessage"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


System_String_o *__fastcall QuestPhaseEntity__getHintMessageTitle(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1

  if ( (byte_4B45005 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_1/*""*/, method);
    sub_1BDB878(&StringLiteral_20000/*"hintTitle"*/, v4);
    byte_4B45005 = 1;
  }
  return QuestPhaseEntity__getScriptStr(
           this,
           (System_String_o *)StringLiteral_20000/*"hintTitle"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


int32_t __fastcall QuestPhaseEntity__getHintOpenType(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B45008 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_19999/*"hintOpenType"*/, method);
    byte_4B45008 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19999/*"hintOpenType"*/, 0, v2);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall QuestPhaseEntity__getLeave(QuestPhaseEntity_o *this, int32_t defVal, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4B44FC6 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_21207/*"leave"*/, *(_QWORD *)&defVal);
    byte_4B44FC6 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21207/*"leave"*/, defVal, v3);
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

  if ( (byte_4B44FC1 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_23099/*"resultBgmId"*/, *(_QWORD *)&defVal);
    byte_4B44FC1 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_23099/*"resultBgmId"*/, defVal, v3);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall QuestPhaseEntity__getResultEffectId(
        QuestPhaseEntity_o *this,
        int32_t defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4B44FC5 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_23100/*"resultEffectId"*/, *(_QWORD *)&defVal);
    byte_4B44FC5 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_23100/*"resultEffectId"*/, defVal, v3);
}


System_Int32_array *__fastcall QuestPhaseEntity__getResultEnemyVoiceIds(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Int32_array *v4; // x2
  const MethodInfo *v5; // x3

  if ( (byte_4B44FCF & 1) == 0 )
  {
    sub_1BDB878(&int___TypeInfo, method);
    sub_1BDB878(&StringLiteral_23101/*"resultEnemyVoiceIds"*/, v3);
    byte_4B44FCF = 1;
  }
  v4 = (System_Int32_array *)sub_1BDB920(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_23101/*"resultEnemyVoiceIds"*/, v4, v5);
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

  if ( (byte_4B44FB9 & 1) == 0 )
  {
    sub_1BDB878(&System_Converter_object__int__TypeInfo, key);
    sub_1BDB878(&Method_System_Collections_Generic_List_object__ConvertAll_int___, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_int__ToArray__, v8);
    sub_1BDB878(&Method_QuestPhaseEntity___c__getScriptIntArrayParam_b__31_0__, v9);
    sub_1BDB878(&QuestPhaseEntity___c_TypeInfo, v10);
    byte_4B44FB9 = 1;
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
    _9__31_0 = (System_Converter_object__int__o *)sub_1BDBAC4(System_Converter_object__int__TypeInfo);
    System_Converter_object__int____ctor(
      _9__31_0,
      v15,
      Method_QuestPhaseEntity___c__getScriptIntArrayParam_b__31_0__,
      0LL);
    static_fields = QuestPhaseEntity___c_TypeInfo->static_fields;
    static_fields->__9__31_0 = _9__31_0;
    sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->__9__31_0, (int32_t)_9__31_0, v17, v18);
  }
  v19 = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_object___ConvertAll_int_(
                                                    v12,
                                                    (System_Converter_T__TOutput__o *)_9__31_0,
                                                    (const MethodInfo_2F62DD0 *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
  if ( !v19 )
    sub_1BDBAD4(0LL, v20);
  return System_Collections_Generic_List_int___ToArray(
           v19,
           (const MethodInfo_36BA858 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  if ( (byte_4B44FB8 & 1) == 0 )
  {
    sub_1BDB878(&long_TypeInfo, key);
    byte_4B44FB8 = 1;
  }
  ScriptObj = QuestPhaseEntity__getScriptObj(this, key, *(const MethodInfo **)&defVal);
  if ( !ScriptObj )
    return v4;
  if ( ScriptObj->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(ScriptObj, long_TypeInfo, v8, v9);
  sub_1BDBD94(ScriptObj);
  return (unsigned int)QuestPhaseEntity__getScriptObj(v11, v12, v13);
}


Il2CppObject *__fastcall QuestPhaseEntity__getScriptObj(
        QuestPhaseEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  Il2CppObject *result; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B44FBD & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, key);
    byte_4B44FBD = 1;
  }
  result = (Il2CppObject *)this->fields.script;
  if ( result )
  {
    value = 0LL;
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)result,
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
  return result;
}


System_Object_array *__fastcall QuestPhaseEntity__getScriptObjArrayParam(
        QuestPhaseEntity_o *this,
        System_String_o *key,
        System_String_array *defVal,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ScriptObjListParam; // x0

  if ( (byte_4B44FBB & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_object__ToArray__, key);
    byte_4B44FBB = 1;
  }
  ScriptObjListParam = QuestPhaseEntity__getScriptObjListParam(this, key, (const MethodInfo *)defVal);
  if ( ScriptObjListParam )
    return System_Collections_Generic_List_object___ToArray(
             ScriptObjListParam,
             (const MethodInfo_36D791C *)Method_System_Collections_Generic_List_object__ToArray__);
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

  if ( (byte_4B44FBC & 1) == 0 )
  {
    sub_1BDB878(&System_Collections_Generic_List_object__TypeInfo, key);
    byte_4B44FBC = 1;
  }
  result = (System_Collections_Generic_List_object__o *)QuestPhaseEntity__getScriptObj(this, key, method);
  if ( result )
  {
    methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (System_Collections_Generic_List_object__c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != System_Collections_Generic_List_object__TypeInfo )
    {
      sub_1BDBD94(result);
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

  if ( (byte_4B44FBE & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    sub_1BDB878(&string_TypeInfo, v8);
    byte_4B44FBE = 1;
  }
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)key,
          (const MethodInfo_33A0424 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return defVal;
  }
  v11 = this->fields.script;
  if ( !v11 )
    sub_1BDBAD4(0LL, v10);
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)v11,
           (Il2CppObject *)key,
           (const MethodInfo_33A01B0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  defVal = (System_String_o *)Item;
  if ( !Item || (System_String_c *)Item->klass == string_TypeInfo )
    return defVal;
  sub_1BDBD94(Item);
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

  if ( (byte_4B44FBA & 1) == 0 )
  {
    sub_1BDB878(&System_Converter_object__string__TypeInfo, key);
    sub_1BDB878(&Method_System_Collections_Generic_List_object__ConvertAll_string___, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_string__ToArray__, v8);
    sub_1BDB878(&Method_QuestPhaseEntity___c__getScriptStringArrayParam_b__32_0__, v9);
    sub_1BDB878(&QuestPhaseEntity___c_TypeInfo, v10);
    byte_4B44FBA = 1;
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
    _9__32_0 = (System_Converter_TInput__TOutput__o *)sub_1BDBAC4(System_Converter_object__string__TypeInfo);
    System_Converter_object__object____ctor(
      _9__32_0,
      v15,
      Method_QuestPhaseEntity___c__getScriptStringArrayParam_b__32_0__,
      0LL);
    static_fields = QuestPhaseEntity___c_TypeInfo->static_fields;
    static_fields->__9__32_0 = (struct System_Converter_object__string__o *)_9__32_0;
    sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->__9__32_0, (int32_t)_9__32_0, v17, v18);
  }
  v19 = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___ConvertAll_object_(
                                                       v12,
                                                       (System_Converter_T__TOutput__o *)_9__32_0,
                                                       (const MethodInfo_2F62ED4 *)Method_System_Collections_Generic_List_object__ConvertAll_string___);
  if ( !v19 )
    sub_1BDBAD4(0LL, v20);
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  v19,
                                  (const MethodInfo_36D791C *)Method_System_Collections_Generic_List_string__ToArray__);
}


int32_t __fastcall QuestPhaseEntity__getSpecialShadowEffectId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B44FE0 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_19852/*"getSpecialShadowEffectId"*/, method);
    byte_4B44FE0 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19852/*"getSpecialShadowEffectId"*/, 0, v2);
}


int32_t __fastcall QuestPhaseEntity__getTurnSituationType(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B44FDF & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_24283/*"turnSituationType"*/, method);
    byte_4B44FDF = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_24283/*"turnSituationType"*/, 0, v2);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall QuestPhaseEntity__getUniqueCameraId(
        QuestPhaseEntity_o *this,
        int32_t defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4B44FC8 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_24368/*"uniqueCameraId"*/, *(_QWORD *)&defVal);
    byte_4B44FC8 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_24368/*"uniqueCameraId"*/, defVal, v3);
}


bool __fastcall QuestPhaseEntity__isBattleFinishCameraTargetAll(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B44FDE & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_17087/*"battleFinishCameraTargetAll"*/, method);
    byte_4B44FDE = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_17087/*"battleFinishCameraTargetAll"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__isBreakOnBattleWin(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B44FD3 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_17428/*"breakOnBattleWin"*/, method);
    byte_4B44FD3 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_17428/*"breakOnBattleWin"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__isBreakOnBattleWinFadeColorBlack(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B44FD4 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_17429/*"breakOnBattleWinFadeColorBlack"*/, method);
    byte_4B44FD4 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_17429/*"breakOnBattleWinFadeColorBlack"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__isDisableChangeRaidDownMessage(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B44FE1 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_20921/*"isDisableChangeRaidDownMessage"*/, method);
    byte_4B44FE1 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20921/*"isDisableChangeRaidDownMessage"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__isDispLoseResult(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B44FD0 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_23102/*"resultLoseDisp"*/, method);
    byte_4B44FD0 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_23102/*"resultLoseDisp"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__isFadeOutBgmBeforeMovie(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B44FC4 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_6604/*"FadeOutBgmBeforeMovie"*/, method);
    byte_4B44FC4 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_6604/*"FadeOutBgmBeforeMovie"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__isNoResult(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B44FD2 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_22268/*"noResult"*/, method);
    byte_4B44FD2 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22268/*"noResult"*/, 0, v2) != 0;
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
  if ( (byte_4B45127 & 1) == 0 )
  {
    sub_1BDB878(&System_Collections_Generic_IEnumerable_FunctionEntity__TypeInfo, method);
    sub_1BDB878(&System_Collections_Generic_IEnumerator_FunctionEntity__TypeInfo, v5);
    this = (QuestPhaseEntity__GetBattleSkillDropEffectIds_d__168_o *)sub_1BDB878(
                                                                       &System_Collections_IEnumerator_TypeInfo,
                                                                       v6);
    byte_4B45127 = 1;
  }
  _1__state = v4->fields.__1__state;
  if ( _1__state == 2 )
  {
    v4->fields._data_5__3 = 0LL;
    p_data_5__3 = (CGThumbnailListItem_o *)&v4->fields._data_5__3;
    LODWORD(p_data_5__3[-1].fields.viewObject) = -3;
    sub_1BDB81C(p_data_5__3, 0, v2, v3);
    goto LABEL_18;
  }
  if ( _1__state == 1 )
  {
    data_5__3 = v4->fields._data_5__3;
    v4->fields.__1__state = -3;
    if ( !data_5__3 )
      sub_1BDBAD4(this, method);
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
      sub_1BDBAD4(0LL, method);
    BattleSkillDropFunctionEntities = QuestPhaseEntity__GetBattleSkillDropFunctionEntities(_4__this, 0LL);
    v11 = BattleSkillDropFunctionEntities;
    if ( !BattleSkillDropFunctionEntities )
      sub_1BDBAD4(0LL, v10);
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
      p_method = sub_1C2C00C(
                   BattleSkillDropFunctionEntities,
                   System_Collections_Generic_IEnumerable_FunctionEntity__TypeInfo,
                   0LL);
    }
    v22 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_FunctionEntity__o *, _QWORD))p_method)(
            v11,
            *(_QWORD *)(p_method + 8));
    v42->fields.__7__wrap1 = (struct System_Collections_Generic_IEnumerator_FunctionEntity__o *)v22;
    sub_1BDB81C((CGThumbnailListItem_o *)&v42->fields.__7__wrap1, v22, v23, v24);
    v42->fields.__1__state = -3;
    do
    {
LABEL_18:
      _7__wrap1 = v42->fields.__7__wrap1;
      if ( !_7__wrap1 )
        sub_1BDBAD4(BattleSkillDropInfoDict, v21);
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
        v29 = sub_1C2C00C(v42->fields.__7__wrap1, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_FunctionEntity__o *, _QWORD))v29)(
              _7__wrap1,
              *(_QWORD *)(v29 + 8)) & 1) == 0 )
      {
        QuestPhaseEntity__GetBattleSkillDropEffectIds_d__168____m__Finally1(v42, v30);
        v42->fields.__7__wrap1 = 0LL;
        sub_1BDB81C((CGThumbnailListItem_o *)&v42->fields.__7__wrap1, 0, v40, v41);
        return 0;
      }
      v31 = v42->fields.__7__wrap1;
      if ( !v31 )
        sub_1BDBAD4(v42, v30);
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
        v35 = sub_1C2C00C(v42->fields.__7__wrap1, System_Collections_Generic_IEnumerator_FunctionEntity__TypeInfo, 0LL);
      }
      v36 = (FunctionEntity_o *)(*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_FunctionEntity__o *, _QWORD))v35)(
                                  v31,
                                  *(_QWORD *)(v35 + 8));
      if ( !v36 )
        sub_1BDBAD4(0LL, v37);
      BattleSkillDropInfoDict = FunctionEntity__TryGetBattleSkillDropInfoDict(v36, &v42->fields._data_5__3, 0LL);
    }
    while ( !BattleSkillDropInfoDict );
    v38 = v42->fields._data_5__3;
    if ( !v38 )
      sub_1BDBAD4(BattleSkillDropInfoDict, v21);
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

  if ( (byte_4B4512A & 1) == 0 )
  {
    sub_1BDB878(&QuestPhaseEntity__GetBattleSkillDropEffectIds_d__168_TypeInfo, method);
    byte_4B4512A = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0LL)) )
  {
    this->fields.__1__state = 0;
  }
  else
  {
    v4 = sub_1BDBAC4(QuestPhaseEntity__GetBattleSkillDropEffectIds_d__168_TypeInfo);
    System_Object___ctor((Il2CppObject *)v4, 0LL);
    *(_DWORD *)(v4 + 16) = 0;
    *(_DWORD *)(v4 + 24) = System_Environment__get_CurrentManagedThreadId(0LL);
    _4__this = this->fields.__4__this;
    *(_QWORD *)(v4 + 32) = _4__this;
    sub_1BDB81C((CGThumbnailListItem_o *)(v4 + 32), (int32_t)_4__this, v6, v7);
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

  v2 = sub_1BDB88C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BDBAC4(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BDB88C(&Method_QuestPhaseEntity__GetBattleSkillDropEffectIds_d__168_System_Collections_IEnumerator_Reset__);
  sub_1BDB9A0(v3, v4);
}


Il2CppObject *__fastcall QuestPhaseEntity__GetBattleSkillDropEffectIds_d__168__System_Collections_IEnumerator_get_Current(
        QuestPhaseEntity__GetBattleSkillDropEffectIds_d__168_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  int32_t _2__current; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B45129 & 1) == 0 )
  {
    sub_1BDB878(&int_TypeInfo, method);
    byte_4B45129 = 1;
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

  if ( (byte_4B45128 & 1) == 0 )
  {
    sub_1BDB878(&System_IDisposable_TypeInfo, method);
    byte_4B45128 = 1;
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
      p_method = sub_1C2C00C(_7__wrap1, System_IDisposable_TypeInfo, 0LL);
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
  __int64 v2; // x2
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

  if ( (byte_4B4512B & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Array_Empty_int___, method);
    sub_1BDB878(&Method_DataManager_GetMaster_FunctionMaster___, v6);
    sub_1BDB878(&DataManager_TypeInfo, v7);
    sub_1BDB878(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__, v8);
    sub_1BDB878(&StringLiteral_17098/*"battleSkillDropFuncIds"*/, v9);
    byte_4B4512B = 1;
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
    sub_1C2BF64(Method_System_Array_Empty_int___);
    v13 = v12[7];
  }
  v14 = *(_QWORD *)(v13 + 16);
  if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
    v14 = sub_1C2BF08(inited);
  if ( !*(_DWORD *)(v14 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v14);
  p__7__wrap1 = *(_QWORD *)(v12[7] + 16LL);
  if ( (*(_BYTE *)(p__7__wrap1 + 309) & 1) == 0 )
    p__7__wrap1 = sub_1C2BF08(inited);
  if ( !_4__this )
LABEL_30:
    sub_1BDBAD4(p__7__wrap1, method);
  ScriptIntArrayParam = QuestPhaseEntity__getScriptIntArrayParam(
                          _4__this,
                          (System_String_o *)StringLiteral_17098/*"battleSkillDropFuncIds"*/,
                          **(System_Int32_array ***)(p__7__wrap1 + 184),
                          0LL);
  this->fields.__7__wrap1 = ScriptIntArrayParam;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.__7__wrap1, (int32_t)ScriptIntArrayParam, v17, v18);
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
      sub_1BDB81C((CGThumbnailListItem_o *)p__7__wrap1, 0, v2, v3);
      return 0;
    }
    if ( v19 >= max_length )
      sub_1BDBADC(p__7__wrap1, method, v2);
    v20 = _7__wrap1->m_Items[v19 + 1];
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    p__7__wrap1 = (__int64)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_FunctionMaster___);
    if ( !p__7__wrap1 )
      goto LABEL_30;
    p__7__wrap1 = DataMasterBase_object__object__int___TryGetEntity(
                    (DataMasterBase_TMaster__TEntity__PKType__o *)p__7__wrap1,
                    &entity,
                    v20,
                    (const MethodInfo_32E1E88 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
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
  sub_1BDB81C((CGThumbnailListItem_o *)p__2__current, v24, v2, v3);
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

  if ( (byte_4B4512C & 1) == 0 )
  {
    sub_1BDB878(&QuestPhaseEntity__GetBattleSkillDropFunctionEntities_d__167_TypeInfo, method);
    byte_4B4512C = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0LL)) )
  {
    this->fields.__1__state = 0;
  }
  else
  {
    v4 = sub_1BDBAC4(QuestPhaseEntity__GetBattleSkillDropFunctionEntities_d__167_TypeInfo);
    System_Object___ctor((Il2CppObject *)v4, 0LL);
    *(_DWORD *)(v4 + 16) = 0;
    *(_DWORD *)(v4 + 32) = System_Environment__get_CurrentManagedThreadId(0LL);
    _4__this = this->fields.__4__this;
    *(_QWORD *)(v4 + 40) = _4__this;
    sub_1BDB81C((CGThumbnailListItem_o *)(v4 + 40), (int32_t)_4__this, v6, v7);
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

  v2 = sub_1BDB88C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BDBAC4(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BDB88C(&Method_QuestPhaseEntity__GetBattleSkillDropFunctionEntities_d__167_System_Collections_IEnumerator_Reset__);
  sub_1BDB9A0(v3, v4);
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

  if ( (byte_4B45124 & 1) == 0 )
  {
    sub_1BDB878(&QuestPhaseEntity___c_TypeInfo, v1);
    byte_4B45124 = 1;
  }
  v2 = (Il2CppObject *)sub_1BDBAC4(QuestPhaseEntity___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  QuestPhaseEntity___c_TypeInfo->static_fields->__9 = (struct QuestPhaseEntity___c_o *)v2;
  sub_1BDB81C((CGThumbnailListItem_o *)QuestPhaseEntity___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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

  if ( (byte_4B45126 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_1/*""*/, x);
    byte_4B45126 = 1;
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
    sub_1BDBAD4(this, 0LL);
  return x->fields.priority;
}


int32_t __fastcall QuestPhaseEntity___c___getScriptIntArrayParam_b__31_0(
        QuestPhaseEntity___c_o *this,
        Il2CppObject *x,
        const MethodInfo *method)
{
  System_String_o *v4; // x0

  if ( (byte_4B45125 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_1/*""*/, x);
    byte_4B45125 = 1;
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
    sub_1BDBAD4(this, 0LL);
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
    0LL);
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
    sub_1BDBAD4(this, 0LL);
  return x->fields.svtId == this->fields.servantId;
}