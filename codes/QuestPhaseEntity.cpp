void QuestPhaseEntity___ctor(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C27919 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_string___ctor__);
    byte_4C27919 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_338592C *)Method_DataEntityBase_string___ctor__);
}


void QuestPhaseEntity___ctor_42258744(QuestPhaseEntity_o *this, QuestPhaseEntity_o *cSrc, const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct System_Int32_array *v9; // x1
  System_Array_o *classIds; // x0
  Il2CppObject *v11; // x0
  Il2CppObject *v12; // x21
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  System_Array_o *individuality; // x0
  Il2CppObject *v16; // x0
  struct System_Int32_array *v17; // x1
  struct System_Int32_array **p_individuality; // x19

  if ( (byte_4C2791A & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_string___ctor__);
    sub_1C2D490(&int___TypeInfo);
    byte_4C2791A = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_338592C *)Method_DataEntityBase_string___ctor__);
  if ( !cSrc )
    sub_1C2D6EC(v5, v6);
  v9 = 0;
  *(_QWORD *)&this->fields.questId = *(_QWORD *)&cSrc->fields.questId;
  this->fields.isNpcOnly = cSrc->fields.isNpcOnly;
  *(_OWORD *)&this->fields.battleBgId = *(_OWORD *)&cSrc->fields.battleBgId;
  classIds = (System_Array_o *)cSrc->fields.classIds;
  if ( classIds )
  {
    v11 = System_Array__Clone(classIds, 0);
    if ( v11 )
    {
      v12 = v11;
      v9 = (struct System_Int32_array *)sub_1C2D5CC(v11, int___TypeInfo);
      if ( !v9 )
        goto LABEL_12;
    }
    else
    {
      v9 = 0;
    }
  }
  this->fields.classIds = v9;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.classIds, (int32_t)v9, v7, v8);
  individuality = (System_Array_o *)cSrc->fields.individuality;
  if ( !individuality )
    goto LABEL_13;
  v16 = System_Array__Clone(individuality, 0);
  if ( !v16 )
    goto LABEL_13;
  v12 = v16;
  v17 = (struct System_Int32_array *)sub_1C2D5CC(v16, int___TypeInfo);
  if ( !v17 )
  {
LABEL_12:
    sub_1C2D9AC(v12);
LABEL_13:
    v17 = 0;
  }
  this->fields.individuality = v17;
  p_individuality = &this->fields.individuality;
  sub_1C2D434((CGThumbnailListItem_o *)p_individuality, (int32_t)v17, v13, v14);
  *((_DWORD *)p_individuality + 2) = cSrc->fields.giftId;
}


System_String_o *QuestPhaseEntity__CreatePK(int32_t questId, int32_t phase, const MethodInfo *method)
{
  if ( (byte_4C27918 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4C27918 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           questId,
           phase,
           (const MethodInfo_30CCAD8 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *QuestPhaseEntity__CreatePrimaryKey(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return QuestPhaseEntity__CreatePK(this->fields.questId, this->fields.phase, v2);
}


float QuestPhaseEntity__EnemyExBattleUiPositionY(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C279B9 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_19017/*"enemyExBattleUiPositionY"*/);
    byte_4C279B9 = 1;
  }
  return (float)EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_19017/*"enemyExBattleUiPositionY"*/, 0, 0);
}


System_Collections_Generic_Dictionary_string__object__o *QuestPhaseEntity__GetAddEquipSkills(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_Collections_Generic_Dictionary_string__object__o *result; // x0
  __int64 naturalAligment; // x9
  QuestPhaseEntity_o *v6; // x0
  int32_t v7; // w1
  const MethodInfo *v8; // x2

  if ( (byte_4C27929 & 1) == 0 )
  {
    sub_1C2D490(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1C2D490(&StringLiteral_16666/*"addEquipSkills"*/);
    byte_4C27929 = 1;
  }
  result = (System_Collections_Generic_Dictionary_string__object__o *)QuestPhaseEntity__getScriptObj(
                                                                        this,
                                                                        (System_String_o *)StringLiteral_16666/*"addEquipSkills"*/,
                                                                        v2);
  if ( result )
  {
    naturalAligment = System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.naturalAligment;
    if ( result->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (System_Collections_Generic_Dictionary_string__object__c *)result->klass->_2.typeHierarchy[naturalAligment - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
    {
      sub_1C2D9AC(result);
      return (System_Collections_Generic_Dictionary_string__object__o *)QuestPhaseEntity__getResultBgmId(v6, v7, v8);
    }
  }
  return result;
}


System_Int32_array *QuestPhaseEntity__GetAddUniqueCameraIds(
        QuestPhaseEntity_o *this,
        System_Int32_array *defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4C27997 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_16679/*"addUniqueCameraIds"*/);
    byte_4C27997 = 1;
  }
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_16679/*"addUniqueCameraIds"*/, defVal, v3);
}


int32_t QuestPhaseEntity__GetAdvantageClassId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C27958 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_16953/*"auto_sel_support_type"*/);
    byte_4C27958 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_16953/*"auto_sel_support_type"*/, -1, v2);
}


System_Int32_array *QuestPhaseEntity__GetAssistIdArray(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  System_Int32_array *v3; // x2
  const MethodInfo *v4; // x3

  if ( (byte_4C27967 & 1) == 0 )
  {
    sub_1C2D490(&int___TypeInfo);
    sub_1C2D490(&StringLiteral_16914/*"assistIds"*/);
    byte_4C27967 = 1;
  }
  v3 = (System_Int32_array *)sub_1C2D538(int___TypeInfo, 0);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_16914/*"assistIds"*/, v3, v4);
}


System_Int32_array *QuestPhaseEntity__GetAssistWeightArray(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  System_Int32_array *v3; // x2
  const MethodInfo *v4; // x3

  if ( (byte_4C27968 & 1) == 0 )
  {
    sub_1C2D490(&int___TypeInfo);
    sub_1C2D490(&StringLiteral_16913/*"assistIdWeight"*/);
    byte_4C27968 = 1;
  }
  v3 = (System_Int32_array *)sub_1C2D538(int___TypeInfo, 0);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_16913/*"assistIdWeight"*/, v3, v4);
}


System_Int32_array *QuestPhaseEntity__GetAssumedEffectId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C2797A & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_16917/*"assumedEffectId"*/);
    byte_4C2797A = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_16917/*"assumedEffectId"*/, 0);
}


System_Int32_array *QuestPhaseEntity__GetBattleEffectMovieIds(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C2799F & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_3115/*"BattleEffectMovieIds"*/);
    byte_4C2799F = 1;
  }
  return EntityScriptUtil__GetIntArray(this->fields.script, (System_String_o *)StringLiteral_3115/*"BattleEffectMovieIds"*/, 0, 0);
}


System_String_o *QuestPhaseEntity__GetBattleFinishMovie(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C2793F & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_17068/*"battleFinishMovie"*/);
    byte_4C2793F = 1;
  }
  return QuestPhaseEntity__getScriptStr(this, (System_String_o *)StringLiteral_17068/*"battleFinishMovie"*/, 0, v2);
}


int32_t QuestPhaseEntity__GetBattleFinishWaitTime(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C27983 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_17069/*"battleFinishWaitTime"*/);
    byte_4C27983 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_17069/*"battleFinishWaitTime"*/, 0, v2);
}


int32_t QuestPhaseEntity__GetBattleItemObjectId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C27994 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_17073/*"battleItemObjectId"*/);
    byte_4C27994 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_17073/*"battleItemObjectId"*/, 0, v2);
}


System_Collections_Generic_IEnumerable_int__o *QuestPhaseEntity__GetBattleSkillDropEffectIds(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C279AB & 1) == 0 )
  {
    sub_1C2D490(&QuestPhaseEntity__GetBattleSkillDropEffectIds_d__173_TypeInfo);
    byte_4C279AB = 1;
  }
  v3 = sub_1C2D6DC(QuestPhaseEntity__GetBattleSkillDropEffectIds_d__173_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = -2;
  *(_DWORD *)(v3 + 24) = System_Environment__get_CurrentManagedThreadId(0);
  *(_QWORD *)(v3 + 32) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v4, v5);
  return (System_Collections_Generic_IEnumerable_int__o *)v3;
}


System_Collections_Generic_IEnumerable_FunctionEntity__o *QuestPhaseEntity__GetBattleSkillDropFunctionEntities(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C279AA & 1) == 0 )
  {
    sub_1C2D490(&QuestPhaseEntity__GetBattleSkillDropFunctionEntities_d__172_TypeInfo);
    byte_4C279AA = 1;
  }
  v3 = sub_1C2D6DC(QuestPhaseEntity__GetBattleSkillDropFunctionEntities_d__172_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = -2;
  *(_DWORD *)(v3 + 32) = System_Environment__get_CurrentManagedThreadId(0);
  *(_QWORD *)(v3 + 40) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v3 + 40), (int32_t)this, v4, v5);
  return (System_Collections_Generic_IEnumerable_FunctionEntity__o *)v3;
}


int32_t QuestPhaseEntity__GetBeforeBattleSkillActor(QuestPhaseEntity_o *this, int32_t defVal, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4C27984 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_17119/*"beforeBattleSkillActor"*/);
    byte_4C27984 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_17119/*"beforeBattleSkillActor"*/, defVal, v3);
}


System_Int32_array *QuestPhaseEntity__GetBgIndividuality(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x20
  const MethodInfo *v4; // x1
  int32_t PriorityBattleBgId; // w21
  const MethodInfo *v6; // x1
  __int64 PriorityBattleBgType; // x0
  __int64 v8; // x1
  System_Int32_array *result; // x0
  long double inited; // q0
  _QWORD *v11; // x19
  __int64 v12; // x8
  __int64 v13; // x0
  __int64 v14; // x0

  if ( (byte_4C2791E & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Array_Empty_int___);
    sub_1C2D490(&Method_DataManager_GetMaster_BattleBgMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    byte_4C2791E = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_BattleBgMaster___);
  PriorityBattleBgId = QuestPhaseEntity__GetPriorityBattleBgId(this, v4);
  PriorityBattleBgType = QuestPhaseEntity__GetPriorityBattleBgType(this, v6);
  if ( !Master_object )
    sub_1C2D6EC(PriorityBattleBgType, v8);
  result = BattleBgMaster__GetBgIndividuality(
             (BattleBgMaster_o *)Master_object,
             PriorityBattleBgId,
             PriorityBattleBgType,
             0);
  if ( !result )
  {
    v11 = Method_System_Array_Empty_int___;
    v12 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v12 )
    {
      sub_1C7DC00(Method_System_Array_Empty_int___);
      v12 = v11[7];
    }
    v13 = *(_QWORD *)(v12 + 16);
    if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
      v13 = sub_1C7DBA4(inited);
    if ( !*(_DWORD *)(v13 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v13);
    v14 = *(_QWORD *)(v11[7] + 16LL);
    if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
      v14 = sub_1C7DBA4(inited);
    return **(System_Int32_array ***)(v14 + 184);
  }
  return result;
}


System_Int32_array *QuestPhaseEntity__GetClearGiftItemListDisplay(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  System_Int32_array *v3; // x2
  const MethodInfo *v4; // x3

  if ( (byte_4C27977 & 1) == 0 )
  {
    sub_1C2D490(&int___TypeInfo);
    sub_1C2D490(&StringLiteral_17998/*"clearGiftItemListDisplay"*/);
    byte_4C27977 = 1;
  }
  v3 = (System_Int32_array *)sub_1C2D538(int___TypeInfo, 0);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_17998/*"clearGiftItemListDisplay"*/, v3, v4);
}


System_Int32_array *QuestPhaseEntity__GetCondHavingIds(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  System_Int32_array *v3; // x2
  const MethodInfo *v4; // x3

  if ( (byte_4C27963 & 1) == 0 )
  {
    sub_1C2D490(&int___TypeInfo);
    sub_1C2D490(&StringLiteral_18196/*"condHaving"*/);
    byte_4C27963 = 1;
  }
  v3 = (System_Int32_array *)sub_1C2D538(int___TypeInfo, 0);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_18196/*"condHaving"*/, v3, v4);
}


int32_t QuestPhaseEntity__GetCondQuestClearable(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C2799B & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_18200/*"condQuestClearable"*/);
    byte_4C2799B = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_18200/*"condQuestClearable"*/, 0, v2);
}


int32_t QuestPhaseEntity__GetCorrectionIconId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C27957 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_18270/*"correctionIconId"*/);
    byte_4C27957 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_18270/*"correctionIconId"*/, -1, v2);
}


int32_t QuestPhaseEntity__GetDefenceTargetContinueRecoverRate(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C27991 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_19403/*"fieldHpContinueRecoverRate"*/);
    byte_4C27991 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19403/*"fieldHpContinueRecoverRate"*/, 0, v2);
}


System_String_o *QuestPhaseEntity__GetEffectOnMap(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C279A4 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_10650/*"PlayGetEffectOnMap"*/);
    byte_4C279A4 = 1;
  }
  return QuestPhaseEntity__getScriptStr(this, (System_String_o *)StringLiteral_10650/*"PlayGetEffectOnMap"*/, 0, v2);
}


System_Int32_array *QuestPhaseEntity__GetEnemyInfoDispNpcSvtIdList(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  System_Int32_array *v3; // x2
  const MethodInfo *v4; // x3

  if ( (byte_4C27975 & 1) == 0 )
  {
    sub_1C2D490(&int___TypeInfo);
    sub_1C2D490(&StringLiteral_22527/*"overwriteEnemyInfos"*/);
    byte_4C27975 = 1;
  }
  v3 = (System_Int32_array *)sub_1C2D538(int___TypeInfo, 0);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_22527/*"overwriteEnemyInfos"*/, v3, v4);
}


System_String_array *QuestPhaseEntity__GetEnemyInfoOverwriteNpcSvtNameList(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  System_String_array *v3; // x2
  const MethodInfo *v4; // x3

  if ( (byte_4C27976 & 1) == 0 )
  {
    sub_1C2D490(&string___TypeInfo);
    sub_1C2D490(&StringLiteral_22526/*"overwriteEnemyInfoNames"*/);
    byte_4C27976 = 1;
  }
  v3 = (System_String_array *)sub_1C2D538(string___TypeInfo, 0);
  return QuestPhaseEntity__getScriptStringArrayParam(this, (System_String_o *)StringLiteral_22526/*"overwriteEnemyInfoNames"*/, v3, v4);
}


int32_t QuestPhaseEntity__GetEquipAddId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C27974 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_19048/*"equipAddId"*/);
    byte_4C27974 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19048/*"equipAddId"*/, 0, v2);
}


int32_t QuestPhaseEntity__GetFinishEffectId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C27954 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_19437/*"finishEffectId"*/);
    byte_4C27954 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19437/*"finishEffectId"*/, -1, v2);
}


int32_t QuestPhaseEntity__GetFormationBgmId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C2797B & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_19551/*"formationBgmId"*/);
    byte_4C2797B = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19551/*"formationBgmId"*/, -1, v2);
}


float QuestPhaseEntity__GetFormationSubBgmFadeInTime(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C2797D & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_19552/*"formationSubBgmFadeInTime"*/);
    byte_4C2797D = 1;
  }
  return (float)QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19552/*"formationSubBgmFadeInTime"*/, 0, v2) / 1000.0;
}


int32_t QuestPhaseEntity__GetFormationSubBgmId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C2797C & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_19553/*"formationSubBgmId"*/);
    byte_4C2797C = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19553/*"formationSubBgmId"*/, -1, v2);
}


System_Int32_array *QuestPhaseEntity__GetGimmickAnimTypeArray(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C27952 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_19853/*"gimmickAnimType"*/);
    byte_4C27952 = 1;
  }
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_19853/*"gimmickAnimType"*/, 0, v2);
}


int32_t QuestPhaseEntity__GetGimmickId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C2794B & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_19854/*"gimmickId"*/);
    byte_4C2794B = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19854/*"gimmickId"*/, -1, v2);
}


System_Object_array *QuestPhaseEntity__GetGimmickResultVoiceArray(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C27951 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_23061/*"resultVoice"*/);
    byte_4C27951 = 1;
  }
  return QuestPhaseEntity__getScriptObjArrayParam(this, (System_String_o *)StringLiteral_23061/*"resultVoice"*/, 0, v2);
}


System_Int32_array *QuestPhaseEntity__GetGimmickSkillIdArray(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  System_Int32_array *v3; // x2
  const MethodInfo *v4; // x3

  if ( (byte_4C2794E & 1) == 0 )
  {
    sub_1C2D490(&int___TypeInfo);
    sub_1C2D490(&StringLiteral_22979/*"reelSkill"*/);
    byte_4C2794E = 1;
  }
  v3 = (System_Int32_array *)sub_1C2D538(int___TypeInfo, 0);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_22979/*"reelSkill"*/, v3, v4);
}


System_Int32_array *QuestPhaseEntity__GetGimmickSkillRateArray(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  System_Int32_array *v3; // x2
  const MethodInfo *v4; // x3

  if ( (byte_4C2794F & 1) == 0 )
  {
    sub_1C2D490(&int___TypeInfo);
    sub_1C2D490(&StringLiteral_22978/*"reelRate"*/);
    byte_4C2794F = 1;
  }
  v3 = (System_Int32_array *)sub_1C2D538(int___TypeInfo, 0);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_22978/*"reelRate"*/, v3, v4);
}


System_String_array *QuestPhaseEntity__GetGimmickStartVoiceArray(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C27950 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_23649/*"startVoice"*/);
    byte_4C27950 = 1;
  }
  return QuestPhaseEntity__getScriptStringArrayParam(this, (System_String_o *)StringLiteral_23649/*"startVoice"*/, 0, v2);
}


int32_t QuestPhaseEntity__GetGimmickSvtId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C2794C & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_19855/*"gimmickSvtId"*/);
    byte_4C2794C = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19855/*"gimmickSvtId"*/, -1, v2);
}


int32_t QuestPhaseEntity__GetIconItemNumberDispType(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C27996 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_20109/*"iconItemNumberDispType"*/);
    byte_4C27996 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20109/*"iconItemNumberDispType"*/, 0, v2);
}


float QuestPhaseEntity__GetIncomingCallDispTime(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C27987 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_20735/*"incomingCallDispTime"*/);
    byte_4C27987 = 1;
  }
  return (float)QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20735/*"incomingCallDispTime"*/, 500, v2) / 1000.0;
}


System_String_o *QuestPhaseEntity__GetIncomingCallMessage(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C27986 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_20736/*"incomingCallMessage"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C27986 = 1;
  }
  return QuestPhaseEntity__getScriptStr(
           this,
           (System_String_o *)StringLiteral_20736/*"incomingCallMessage"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


System_String_o *QuestPhaseEntity__GetIncomingCallTitle(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C27985 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_20737/*"incomingCallTitle"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C27985 = 1;
  }
  return QuestPhaseEntity__getScriptStr(
           this,
           (System_String_o *)StringLiteral_20737/*"incomingCallTitle"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


int32_t QuestPhaseEntity__GetInitEventDeckNo(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C279AE & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_20776/*"initEventDeckNo"*/);
    byte_4C279AE = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_20776/*"initEventDeckNo"*/, 0, 0);
}


System_String_o *QuestPhaseEntity__GetMapModelEntryAnimationName(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C27981 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_1399/*"3dMapEntryAnimName"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C27981 = 1;
  }
  return QuestPhaseEntity__getScriptStr(
           this,
           (System_String_o *)StringLiteral_1399/*"3dMapEntryAnimName"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


int32_t QuestPhaseEntity__GetMasterSkillDelay(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C2795D & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_21446/*"masterSkillDelay"*/);
    byte_4C2795D = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21446/*"masterSkillDelay"*/, 0, v2);
}


System_String_o *QuestPhaseEntity__GetMasterSkillDelayInfo(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C2795E & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_21447/*"masterSkillDelayInfo"*/);
    byte_4C2795E = 1;
  }
  return QuestPhaseEntity__getScriptStr(this, (System_String_o *)StringLiteral_21447/*"masterSkillDelayInfo"*/, 0, v2);
}


System_Int32_array *QuestPhaseEntity__GetMoveSceneInfo(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  System_Int32_array *v3; // x2
  const MethodInfo *v4; // x3

  if ( (byte_4C27989 & 1) == 0 )
  {
    sub_1C2D490(&int___TypeInfo);
    sub_1C2D490(&StringLiteral_21646/*"moveSceneInfo"*/);
    byte_4C27989 = 1;
  }
  v3 = (System_Int32_array *)sub_1C2D538(int___TypeInfo, 0);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_21646/*"moveSceneInfo"*/, v3, v4);
}


int32_t QuestPhaseEntity__GetMovieAfterCrossFadeStartFrame(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C27946 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_21651/*"movieAfterCrossFadeStartFrame"*/);
    byte_4C27946 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21651/*"movieAfterCrossFadeStartFrame"*/, 0, v2);
}


int32_t QuestPhaseEntity__GetMovieAfterCrossFadeTime(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C27945 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_21652/*"movieAfterCrossFadeTime"*/);
    byte_4C27945 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21652/*"movieAfterCrossFadeTime"*/, 0, v2);
}


int32_t QuestPhaseEntity__GetNextSceneId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C27961 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_22190/*"nextSceneId"*/);
    byte_4C27961 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22190/*"nextSceneId"*/, 0, v2);
}


System_String_array *QuestPhaseEntity__GetNextSceneParam(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  System_String_array *result; // x0

  if ( (byte_4C27962 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_22191/*"nextSceneParam"*/);
    byte_4C27962 = 1;
  }
  result = (System_String_array *)QuestPhaseEntity__getScriptStr(this, (System_String_o *)StringLiteral_22191/*"nextSceneParam"*/, 0, v2);
  if ( result )
    return System_String__Split((System_String_o *)result, 0x2Cu, 0, 0);
  return result;
}


int32_t QuestPhaseEntity__GetNotDispEquipSkillChargeTurn(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C27995 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_22280/*"notDispEquipSkillChargeTurn"*/);
    byte_4C27995 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22280/*"notDispEquipSkillChargeTurn"*/, 0, v2);
}


System_Int32_array *QuestPhaseEntity__GetNotHavingQuests(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  System_Int32_array *v3; // x2
  const MethodInfo *v4; // x3

  if ( (byte_4C27964 & 1) == 0 )
  {
    sub_1C2D490(&int___TypeInfo);
    sub_1C2D490(&StringLiteral_22285/*"notHavingQuest"*/);
    byte_4C27964 = 1;
  }
  v3 = (System_Int32_array *)sub_1C2D538(int___TypeInfo, 0);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_22285/*"notHavingQuest"*/, v3, v4);
}


System_Collections_Generic_Dictionary_int__int____o *QuestPhaseEntity__GetNpcAiInfo(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x21
  System_Collections_Generic_Dictionary_int__object__o *v4; // x22
  struct System_Collections_Generic_Dictionary_string__object__o *v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  System_Collections_Generic_Dictionary_int__int____o **v9; // x20
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  Il2CppObject *v11; // x22
  __int64 naturalAligment; // x10
  const MethodInfo *v13; // x2
  System_Action_object__o *v15; // x19
  Il2CppObject *obj; // [xsp+0h] [xbp-40h] BYREF
  Il2CppObject *value; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C27972 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_object__TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
    sub_1C2D490(&System_Collections_Generic_Dictionary_int__int____TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_object__ForEach__);
    sub_1C2D490(&System_Collections_Generic_List_object__TypeInfo);
    sub_1C2D490(&Method_QuestPhaseEntity___c__DisplayClass115_0__GetNpcAiInfo_b__0__);
    sub_1C2D490(&QuestPhaseEntity___c__DisplayClass115_0_TypeInfo);
    sub_1C2D490(&StringLiteral_16720/*"aiMultiNpc"*/);
    sub_1C2D490(&StringLiteral_16721/*"aiNpc"*/);
    byte_4C27972 = 1;
  }
  obj = 0;
  value = 0;
  v3 = sub_1C2D6DC(QuestPhaseEntity___c__DisplayClass115_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  v4 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C2D6DC(System_Collections_Generic_Dictionary_int__int____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v4,
    (const MethodInfo_33E08A8 *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  if ( !v3 )
    goto LABEL_14;
  *(_QWORD *)(v3 + 16) = v4;
  v9 = (System_Collections_Generic_Dictionary_int__int____o **)(v3 + 16);
  sub_1C2D434((CGThumbnailListItem_o *)(v3 + 16), (int32_t)v4, v7, v8);
  script = this->fields.script;
  if ( !script )
    return *v9;
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)script,
         (Il2CppObject *)StringLiteral_16720/*"aiMultiNpc"*/,
         &value,
         (const MethodInfo_344BB34 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    v11 = value;
    if ( value )
    {
      naturalAligment = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment;
      if ( value->klass->_2.naturalAligment >= (unsigned int)naturalAligment
        && (System_Collections_Generic_List_object__c *)value->klass->_2.typeHierarchy[naturalAligment - 1] == System_Collections_Generic_List_object__TypeInfo )
      {
        v15 = (System_Action_object__o *)sub_1C2D6DC(System_Action_object__TypeInfo);
        System_Action_object____ctor(
          v15,
          (Il2CppObject *)v3,
          Method_QuestPhaseEntity___c__DisplayClass115_0__GetNpcAiInfo_b__0__,
          0);
        System_Collections_Generic_List_object___ForEach(
          (System_Collections_Generic_List_object__o *)v11,
          (System_Action_T__o *)v15,
          (const MethodInfo_378A5C4 *)Method_System_Collections_Generic_List_object__ForEach__);
        return *v9;
      }
    }
  }
  v5 = this->fields.script;
  if ( !v5 )
LABEL_14:
    sub_1C2D6EC(v5, v6);
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)v5,
         (Il2CppObject *)StringLiteral_16721/*"aiNpc"*/,
         &obj,
         (const MethodInfo_344BB34 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    QuestPhaseEntity__SetNpcAiInfo((System_Collections_Generic_IDictionary_int__int____o *)*v9, obj, v13);
  }
  return *v9;
}


System_String_o *QuestPhaseEntity__GetOpenedPeriodMessage(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C279AD & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_22456/*"openPeriodMessage"*/);
    byte_4C279AD = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_22456/*"openPeriodMessage"*/, 0, 0);
}


int32_t QuestPhaseEntity__GetOpenedPeriodPrivilegeId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C279AC & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_22457/*"openPeriodPrivilegeId"*/);
    byte_4C279AC = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22457/*"openPeriodPrivilegeId"*/, 0, 0);
}


int32_t QuestPhaseEntity__GetOverWriteMasterImageId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C27943 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_21436/*"masterImageId"*/);
    byte_4C27943 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21436/*"masterImageId"*/, 0, v2);
}


int32_t QuestPhaseEntity__GetOverwriteCommandSpellContinue(
        QuestPhaseEntity_o *this,
        int32_t def,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4C2796C & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_22516/*"overwriteCommandSpellContinue"*/);
    byte_4C2796C = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22516/*"overwriteCommandSpellContinue"*/, def, v3);
}


int32_t QuestPhaseEntity__GetOverwriteCommandSpellIcon(
        QuestPhaseEntity_o *this,
        int32_t genderType,
        System_Int32_array *defVal,
        const MethodInfo *method)
{
  System_Int32_array *ScriptIntArrayParam; // x0
  __int64 v8; // x1
  __int64 v9; // x2

  if ( (byte_4C2797F & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_22517/*"overwriteCommandSpellIcons"*/);
    byte_4C2797F = 1;
  }
  ScriptIntArrayParam = QuestPhaseEntity__getScriptIntArrayParam(
                          this,
                          (System_String_o *)StringLiteral_22517/*"overwriteCommandSpellIcons"*/,
                          defVal,
                          method);
  if ( ScriptIntArrayParam )
  {
    if ( genderType == 2 )
    {
      if ( LODWORD(ScriptIntArrayParam->max_length) > 1 )
      {
        LODWORD(ScriptIntArrayParam) = ScriptIntArrayParam->m_Items[1];
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
      if ( LODWORD(ScriptIntArrayParam->max_length) )
      {
        LODWORD(ScriptIntArrayParam) = ScriptIntArrayParam->m_Items[0];
        return (int)ScriptIntArrayParam;
      }
    }
    sub_1C2D6F4(ScriptIntArrayParam, v8, v9);
  }
  return (int)ScriptIntArrayParam;
}


System_Collections_Generic_Dictionary_string__object__o *QuestPhaseEntity__GetOverwriteEquipSkills(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_Collections_Generic_Dictionary_string__object__o *result; // x0
  __int64 naturalAligment; // x9
  QuestPhaseEntity_o *v6; // x0
  const MethodInfo *v7; // x1

  if ( (byte_4C27928 & 1) == 0 )
  {
    sub_1C2D490(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1C2D490(&StringLiteral_22529/*"overwriteEquipSkills"*/);
    byte_4C27928 = 1;
  }
  result = (System_Collections_Generic_Dictionary_string__object__o *)QuestPhaseEntity__getScriptObj(
                                                                        this,
                                                                        (System_String_o *)StringLiteral_22529/*"overwriteEquipSkills"*/,
                                                                        v2);
  if ( result )
  {
    naturalAligment = System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.naturalAligment;
    if ( result->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (System_Collections_Generic_Dictionary_string__object__c *)result->klass->_2.typeHierarchy[naturalAligment - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
    {
      sub_1C2D9AC(result);
      return QuestPhaseEntity__GetAddEquipSkills(v6, v7);
    }
  }
  return result;
}


bool QuestPhaseEntity__GetOverwriteLimitCountSvtIds(
        QuestPhaseEntity_o *this,
        System_Int32_array **overwriteLimitCountSvtIds,
        System_Int32_array **overwriteLimitCounts,
        System_Int32_array **overwriteLimitCountIconIds,
        System_Int32_array **overwriteLimitCountRangeTypes,
        const MethodInfo *method)
{
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
  const MethodInfo *v23; // x3
  System_Int32_array *v24; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  int32_t v30; // w2
  const MethodInfo *v31; // x3

  if ( (byte_4C27959 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_22542/*"overwriteLimitCountSvtIds"*/);
    sub_1C2D490(&StringLiteral_22543/*"overwriteLimitCounts"*/);
    sub_1C2D490(&StringLiteral_22540/*"overwriteLimitCountIconIds"*/);
    sub_1C2D490(&StringLiteral_22541/*"overwriteLimitCountRangeTypes"*/);
    byte_4C27959 = 1;
  }
  ScriptIntArrayParam = QuestPhaseEntity__getScriptIntArrayParam(
                          this,
                          (System_String_o *)StringLiteral_22542/*"overwriteLimitCountSvtIds"*/,
                          0,
                          (const MethodInfo *)overwriteLimitCountIconIds);
  *overwriteLimitCountSvtIds = ScriptIntArrayParam;
  sub_1C2D434((CGThumbnailListItem_o *)overwriteLimitCountSvtIds, (int32_t)ScriptIntArrayParam, v12, v13);
  if ( *overwriteLimitCountSvtIds )
  {
    v16 = QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_22543/*"overwriteLimitCounts"*/, 0, v15);
    *overwriteLimitCounts = v16;
    sub_1C2D434((CGThumbnailListItem_o *)overwriteLimitCounts, (int32_t)v16, v17, v18);
    v20 = QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_22540/*"overwriteLimitCountIconIds"*/, 0, v19);
    *overwriteLimitCountIconIds = v20;
    sub_1C2D434((CGThumbnailListItem_o *)overwriteLimitCountIconIds, (int32_t)v20, v21, v22);
    v24 = QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_22541/*"overwriteLimitCountRangeTypes"*/, 0, v23);
    *overwriteLimitCountRangeTypes = v24;
    sub_1C2D434((CGThumbnailListItem_o *)overwriteLimitCountRangeTypes, (int32_t)v24, v25, v26);
    return *overwriteLimitCounts != 0;
  }
  else
  {
    *overwriteLimitCounts = 0;
    sub_1C2D434((CGThumbnailListItem_o *)overwriteLimitCounts, 0, v14, v15);
    *overwriteLimitCountIconIds = 0;
    sub_1C2D434((CGThumbnailListItem_o *)overwriteLimitCountIconIds, 0, v28, v29);
    *overwriteLimitCountRangeTypes = 0;
    sub_1C2D434((CGThumbnailListItem_o *)overwriteLimitCountRangeTypes, 0, v30, v31);
    return 0;
  }
}


System_Int32_array *QuestPhaseEntity__GetOverwriteResultBgmCondIds(
        QuestPhaseEntity_o *this,
        System_Int32_array *defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4C2792C & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_22554/*"overwriteResultBgmCondIds"*/);
    byte_4C2792C = 1;
  }
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_22554/*"overwriteResultBgmCondIds"*/, defVal, v3);
}


System_Int32_array *QuestPhaseEntity__GetOverwriteResultBgmIds(
        QuestPhaseEntity_o *this,
        System_Int32_array *defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4C2792B & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_22555/*"overwriteResultBgmIds"*/);
    byte_4C2792B = 1;
  }
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_22555/*"overwriteResultBgmIds"*/, defVal, v3);
}


System_Int32_array *QuestPhaseEntity__GetPrioredIndividuality(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  System_Int32_array *result; // x0
  long double inited; // q0
  _QWORD *v5; // x19
  __int64 v6; // x8
  __int64 v7; // x0
  __int64 v8; // x0

  if ( (byte_4C2791C & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Array_Empty_int___);
    byte_4C2791C = 1;
  }
  result = QuestPhaseEntity__GetPrioredIndividualityLocal(this, method);
  if ( !result )
  {
    v5 = Method_System_Array_Empty_int___;
    v6 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v6 )
    {
      sub_1C7DC00(Method_System_Array_Empty_int___);
      v6 = v5[7];
    }
    v7 = *(_QWORD *)(v6 + 16);
    if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
      v7 = sub_1C7DBA4(inited);
    if ( !*(_DWORD *)(v7 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v7);
    v8 = *(_QWORD *)(v5[7] + 16LL);
    if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
      v8 = sub_1C7DBA4(inited);
    return **(System_Int32_array ***)(v8 + 184);
  }
  return result;
}


System_Int32_array *QuestPhaseEntity__GetPrioredIndividualityLocal(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x20
  const MethodInfo *v4; // x1
  System_Int32_array *UniqueId; // x0
  __int64 v6; // x1
  System_Int32_array *result; // x0
  const MethodInfo *v8; // x1
  QuestPhaseIndividualityEntity_o *v9; // x20
  const MethodInfo *v10; // x2
  QuestPhaseIndividualityEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C2791D & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_QuestBehaviorMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_QuestPhaseIndividualityMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    byte_4C2791D = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_QuestBehaviorMaster___);
  UniqueId = (System_Int32_array *)QuestPhaseEntity__GetUniqueId(this, v4);
  if ( !Master_object )
    goto LABEL_15;
  result = QuestBehaviorMaster__GetBattleIndividuality((QuestBehaviorMaster_o *)Master_object, (int64_t)UniqueId, 0, 0);
  if ( !result )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    UniqueId = (System_Int32_array *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_QuestPhaseIndividualityMaster___);
    if ( !UniqueId )
      goto LABEL_15;
    if ( QuestPhaseIndividualityMaster__TryGetEntity(
           (QuestPhaseIndividualityMaster_o *)UniqueId,
           &entity,
           this->fields.questId,
           this->fields.phase,
           0) )
    {
      v9 = entity;
      UniqueId = QuestPhaseEntity__GetBgIndividuality(this, v8);
      if ( v9 )
        return QuestPhaseIndividualityEntity__GetAddAndDelAfterIndividuality(v9, UniqueId, v10);
LABEL_15:
      sub_1C2D6EC(UniqueId, v6);
    }
    return this->fields.individuality;
  }
  return result;
}


int32_t QuestPhaseEntity__GetPriorityBattleBgId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x20
  const MethodInfo *v4; // x1
  int64_t UniqueId; // x0
  __int64 v6; // x1

  if ( (byte_4C2791F & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_QuestBehaviorMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    byte_4C2791F = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_QuestBehaviorMaster___);
  UniqueId = QuestPhaseEntity__GetUniqueId(this, v4);
  if ( !Master_object )
    sub_1C2D6EC(UniqueId, v6);
  return QuestBehaviorMaster__GetBattleBg((QuestBehaviorMaster_o *)Master_object, UniqueId, this->fields.battleBgId, 0);
}


int32_t QuestPhaseEntity__GetPriorityBattleBgType(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x20
  const MethodInfo *v4; // x1
  int64_t UniqueId; // x0
  __int64 v6; // x1

  if ( (byte_4C27920 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_QuestBehaviorMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    byte_4C27920 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_QuestBehaviorMaster___);
  UniqueId = QuestPhaseEntity__GetUniqueId(this, v4);
  if ( !Master_object )
    sub_1C2D6EC(UniqueId, v6);
  return QuestBehaviorMaster__GetBattleBgType(
           (QuestBehaviorMaster_o *)Master_object,
           UniqueId,
           this->fields.battleBgType,
           0);
}


int32_t QuestPhaseEntity__GetProgressAfterMovie(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C27941 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_22775/*"progressAfterMovie"*/);
    byte_4C27941 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22775/*"progressAfterMovie"*/, 0, v2);
}


int32_t QuestPhaseEntity__GetQuestPhaseSelectRoute(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t ScriptIntParam; // w0
  int32_t v5; // w19
  Il2CppObject *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4C27936 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_1C2D490(&StringLiteral_22662/*"phaseRouteSelect"*/);
    byte_4C27936 = 1;
  }
  ScriptIntParam = QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22662/*"phaseRouteSelect"*/, 0, v2);
  if ( ScriptIntParam < 1 )
    return 0;
  v5 = ScriptIntParam;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Instance )
    sub_1C2D6EC(0, v7);
  if ( clsQuestCheck__CheckQuestPlayableNow((clsQuestCheck_o *)Instance, v5, 0) )
    return v5;
  else
    return 0;
}


System_Int32_array *QuestPhaseEntity__GetReelIconIdArray(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  System_Int32_array *v3; // x2
  const MethodInfo *v4; // x3

  if ( (byte_4C2794D & 1) == 0 )
  {
    sub_1C2D490(&int___TypeInfo);
    sub_1C2D490(&StringLiteral_22977/*"reelIcon"*/);
    byte_4C2794D = 1;
  }
  v3 = (System_Int32_array *)sub_1C2D538(int___TypeInfo, 0);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_22977/*"reelIcon"*/, v3, v4);
}


int32_t QuestPhaseEntity__GetReferToQuestPhase(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C2799C & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_22983/*"referToQuestPhase"*/);
    byte_4C2799C = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22983/*"referToQuestPhase"*/, 0, v2);
}


System_String_o *QuestPhaseEntity__GetRenoCompletionDialogText(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C279B7 & 1) == 0 )
  {
    sub_1C2D490(&string_TypeInfo);
    sub_1C2D490(&StringLiteral_11324/*"RenoCompletionDialogText"*/);
    byte_4C279B7 = 1;
  }
  return EntityScriptUtil__GetStringValue(
           this->fields.script,
           (System_String_o *)StringLiteral_11324/*"RenoCompletionDialogText"*/,
           string_TypeInfo->static_fields->Empty,
           0);
}


System_String_o *QuestPhaseEntity__GetRenoExplanationDialogText(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C279B6 & 1) == 0 )
  {
    sub_1C2D490(&string_TypeInfo);
    sub_1C2D490(&StringLiteral_11326/*"RenoExplanationDialogText"*/);
    byte_4C279B6 = 1;
  }
  return EntityScriptUtil__GetStringValue(
           this->fields.script,
           (System_String_o *)StringLiteral_11326/*"RenoExplanationDialogText"*/,
           string_TypeInfo->static_fields->Empty,
           0);
}


System_Int32_array *QuestPhaseEntity__GetSelectableQuests(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C27935 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_22845/*"questSelect"*/);
    byte_4C27935 = 1;
  }
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_22845/*"questSelect"*/, 0, v2);
}


// local variable allocation has failed, the output may be wrong!
int32_t QuestPhaseEntity__GetSelectedQuestId(
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
  if ( selectIndex < 0 || !SelectableQuests || (max_length = SelectableQuests->max_length, max_length <= selectIndex) )
  {
    result = QuestPhaseEntity__GetQuestPhaseSelectRoute(this, v8);
    if ( result < 1 )
      return questId;
  }
  else
  {
    if ( max_length <= (unsigned int)selectIndex )
      sub_1C2D6F4(SelectableQuests, v8, v9);
    return SelectableQuests->m_Items[selectIndex];
  }
  return result;
}


System_Int32_array *QuestPhaseEntity__GetShadowOffSvtIds(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  System_Int32_array *v3; // x2
  const MethodInfo *v4; // x3

  if ( (byte_4C2795C & 1) == 0 )
  {
    sub_1C2D490(&int___TypeInfo);
    sub_1C2D490(&StringLiteral_23397/*"shadowOffSvtIds"*/);
    byte_4C2795C = 1;
  }
  v3 = (System_Int32_array *)sub_1C2D538(int___TypeInfo, 0);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_23397/*"shadowOffSvtIds"*/, v3, v4);
}


int32_t QuestPhaseEntity__GetSingleForceSvtId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C2795A & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_23486/*"singleForceSvtId"*/);
    byte_4C2795A = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_23486/*"singleForceSvtId"*/, 0, v2);
}


int32_t QuestPhaseEntity__GetStartBattleSoundMode(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C2799A & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_13045/*"StartBattleSoundMode"*/);
    byte_4C2799A = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_13045/*"StartBattleSoundMode"*/, 0, v2);
}


System_Int32_array *QuestPhaseEntity__GetStartMovieWave(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C27942 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_21656/*"movieWave"*/);
    byte_4C27942 = 1;
  }
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_21656/*"movieWave"*/, 0, v2);
}


int32_t QuestPhaseEntity__GetStartScreenEffect(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C27999 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_13044/*"StartBattleScreenEffect"*/);
    byte_4C27999 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_13044/*"StartBattleScreenEffect"*/, 0, v2);
}


int32_t QuestPhaseEntity__GetSupportInitDeckIndex(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C2796D & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_19131/*"eventDeckIndex"*/);
    byte_4C2796D = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19131/*"eventDeckIndex"*/, 0, v2);
}


System_Int32_array *QuestPhaseEntity__GetTakeOverEnemyNpcIds(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C279A8 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_23960/*"takeOverEnemyNpcIds"*/);
    byte_4C279A8 = 1;
  }
  return EntityScriptUtil__GetIntArray(this->fields.script, (System_String_o *)StringLiteral_23960/*"takeOverEnemyNpcIds"*/, 0, 0);
}


int32_t QuestPhaseEntity__GetTemporaryCommandSpell(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C2796A & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_24008/*"temporaryCommandSpell"*/);
    byte_4C2796A = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_24008/*"temporaryCommandSpell"*/, -1, v2);
}


int64_t QuestPhaseEntity__GetUniqueId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  int32_t phase; // w19
  int32_t questId; // w20

  if ( (byte_4C2791B & 1) == 0 )
  {
    sub_1C2D490(&BattleDataDefine_TypeInfo);
    byte_4C2791B = 1;
  }
  questId = this->fields.questId;
  phase = this->fields.phase;
  if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
  return BattleDataDefine__MakeQuestPhaseUniqueId(questId, phase, 0);
}


int32_t QuestPhaseEntity__GetUserEventDeckNo(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C2795B & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_24457/*"useEventDeckNo"*/);
    byte_4C2795B = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_24457/*"useEventDeckNo"*/, 1, v2);
}


System_Int32_array *QuestPhaseEntity__GetVoiceOffPlayerSvtIdArray(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C2797E & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_24684/*"voiceOffMySvtIds"*/);
    byte_4C2797E = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_24684/*"voiceOffMySvtIds"*/, 0);
}


int32_t QuestPhaseEntity__GetWaitSetupSwitchPartyChargeTurn(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C2798F & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_24766/*"waveSetupSwitchPartyChargeTurn"*/);
    byte_4C2798F = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_24766/*"waveSetupSwitchPartyChargeTurn"*/, 0, v2);
}


System_String_o *QuestPhaseEntity__GetWarBoardStartMovieName(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C27978 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_15591/*"WarBoardStartMovieName"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C27978 = 1;
  }
  return QuestPhaseEntity__getScriptStr(
           this,
           (System_String_o *)StringLiteral_15591/*"WarBoardStartMovieName"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


System_String_array *QuestPhaseEntity__GetWaveStartMovie(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C27940 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_24767/*"waveStartMovie"*/);
    byte_4C27940 = 1;
  }
  return QuestPhaseEntity__getScriptStringArrayParam(this, (System_String_o *)StringLiteral_24767/*"waveStartMovie"*/, 0, v2);
}


int32_t QuestPhaseEntity__GetWinBgmOffFlg(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C27955 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_18996/*"endBgmOff"*/);
    byte_4C27955 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_18996/*"endBgmOff"*/, 0, v2);
}


int32_t QuestPhaseEntity__GetWinVoiceOffFlg(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C27953 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_19009/*"endVoiceOff"*/);
    byte_4C27953 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19009/*"endVoiceOff"*/, 0, v2);
}


bool QuestPhaseEntity__HasEnemyExBattleUiPositionY(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C279B8 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_19017/*"enemyExBattleUiPositionY"*/);
    byte_4C279B8 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_19017/*"enemyExBattleUiPositionY"*/, 0);
}


bool QuestPhaseEntity__HasExtraBattleUserInterfaceData(
        QuestPhaseEntity_o *this,
        ExtraBattleUserInterfaceData_JsonConvertData_array **dataArray,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  long double inited; // q0
  _QWORD *v7; // x21
  __int64 v8; // x8
  __int64 v9; // x0
  __int64 v10; // x0
  ExtraBattleUserInterfaceData_JsonConvertData_array **v11; // x8
  ExtraBattleUserInterfaceData_JsonConvertData_array *v12; // x1
  __int64 v13; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  Il2CppObject *v15; // x20
  ExtraBattleUserInterfaceData_JsonConvertData_array *v16; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C279B2 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Array_Empty_ExtraBattleUserInterfaceData_JsonConvertData___);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1C2D490(&Method_System_Linq_Enumerable_Any_ExtraBattleUserInterfaceData_JsonConvertData___);
    sub_1C2D490(&Method_JsonManager_Deserialize_ExtraBattleUserInterfaceData_JsonConvertData_____);
    sub_1C2D490(&JsonManager_TypeInfo);
    sub_1C2D490(&StringLiteral_19302/*"exBattleUI"*/);
    byte_4C279B2 = 1;
  }
  v7 = Method_System_Array_Empty_ExtraBattleUserInterfaceData_JsonConvertData___;
  value = 0;
  v8 = *((_QWORD *)Method_System_Array_Empty_ExtraBattleUserInterfaceData_JsonConvertData___ + 7);
  if ( !v8 )
  {
    sub_1C7DC00(Method_System_Array_Empty_ExtraBattleUserInterfaceData_JsonConvertData___);
    v8 = v7[7];
  }
  v9 = *(_QWORD *)(v8 + 16);
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1C7DBA4(inited);
  if ( !*(_DWORD *)(v9 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v9);
  v10 = *(_QWORD *)(v7[7] + 16LL);
  if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
    v10 = sub_1C7DBA4(inited);
  v11 = *(ExtraBattleUserInterfaceData_JsonConvertData_array ***)(v10 + 184);
  v12 = *v11;
  *dataArray = *v11;
  sub_1C2D434((CGThumbnailListItem_o *)dataArray, (int32_t)v12, (int32_t)method, v3);
  script = this->fields.script;
  if ( !script )
    sub_1C2D6EC(0, v13);
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)script,
         (Il2CppObject *)StringLiteral_19302/*"exBattleUI"*/,
         &value,
         (const MethodInfo_344BB34 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    v15 = value;
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v16 = (ExtraBattleUserInterfaceData_JsonConvertData_array *)JsonManager__Deserialize_object_(
                                                                  v15,
                                                                  (const MethodInfo_313DC6C *)Method_JsonManager_Deserialize_ExtraBattleUserInterfaceData_JsonConvertData_____);
    *dataArray = v16;
    sub_1C2D434((CGThumbnailListItem_o *)dataArray, (int32_t)v16, v17, v18);
  }
  return System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)*dataArray,
           (const MethodInfo_30DA4C8 *)Method_System_Linq_Enumerable_Any_ExtraBattleUserInterfaceData_JsonConvertData___);
}


bool QuestPhaseEntity__HasReleaseFocusQuestBoardKey(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C27992 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_20934/*"isReleaseFocus"*/);
    byte_4C27992 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_20934/*"isReleaseFocus"*/, 0);
}


bool QuestPhaseEntity__IsActiveAssistSkill(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  System_Int32_array *v3; // x0
  const MethodInfo *v4; // x3
  System_Int32_array *ScriptIntArrayParam; // x0
  __int64 v6; // x1

  if ( (byte_4C27966 & 1) == 0 )
  {
    sub_1C2D490(&int___TypeInfo);
    sub_1C2D490(&StringLiteral_16914/*"assistIds"*/);
    byte_4C27966 = 1;
  }
  v3 = (System_Int32_array *)sub_1C2D538(int___TypeInfo, 0);
  ScriptIntArrayParam = QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_16914/*"assistIds"*/, v3, v4);
  if ( !ScriptIntArrayParam )
    sub_1C2D6EC(0, v6);
  return LODWORD(ScriptIntArrayParam->max_length) != 0;
}


bool QuestPhaseEntity__IsAreaImporveQuest(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4C27979 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_16863/*"areaImprovementQuest"*/);
    byte_4C27979 = 1;
  }
  return QuestPhaseEntity__getScriptObj(this, (System_String_o *)StringLiteral_16863/*"areaImprovementQuest"*/, v2) != 0;
}


bool QuestPhaseEntity__IsAssistExecAll(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C279B5 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_16912/*"assistExecAll"*/);
    byte_4C279B5 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_16912/*"assistExecAll"*/, 0, 0) != 0;
}


bool QuestPhaseEntity__IsAutoExecute(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C279A3 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_20891/*"isAutoExecute"*/);
    byte_4C279A3 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_20891/*"isAutoExecute"*/, 0);
}


bool QuestPhaseEntity__IsClearFieldBuffWhenWaveStart(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C279B1 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_17997/*"clearFieldBuffWhenWaveStart"*/);
    byte_4C279B1 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_17997/*"clearFieldBuffWhenWaveStart"*/, 0, 0) != 0;
}


bool QuestPhaseEntity__IsContinueWaveRestart(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C27990 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_18248/*"continueWaveRestart"*/);
    byte_4C27990 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_18248/*"continueWaveRestart"*/, 0, v2) != 0;
}


bool QuestPhaseEntity__IsFadeOutMainBgmBeforeBattle(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C2799D & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_19376/*"fadeOutMainBgmBeforeBattle"*/);
    byte_4C2799D = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_19376/*"fadeOutMainBgmBeforeBattle"*/, 0);
}


bool QuestPhaseEntity__IsHideAssistConfButton(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C27969 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_19950/*"hideAssistConfButton"*/);
    byte_4C27969 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19950/*"hideAssistConfButton"*/, 0, v2) != 0;
}


bool QuestPhaseEntity__IsHideBattlePointGauge(
        QuestPhaseEntity_o *this,
        int32_t battlePointId,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *IntArray; // x0

  if ( (byte_4C279A2 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C2D490(&StringLiteral_7330/*"HideBattlePointGauge"*/);
    byte_4C279A2 = 1;
  }
  IntArray = (System_Collections_Generic_IEnumerable_TSource__o *)EntityScriptUtil__GetIntArray(
                                                                    this->fields.script,
                                                                    (System_String_o *)StringLiteral_7330/*"HideBattlePointGauge"*/,
                                                                    0,
                                                                    0);
  if ( IntArray )
    LOBYTE(IntArray) = System_Linq_Enumerable__Contains_int_(
                         IntArray,
                         battlePointId,
                         (const MethodInfo_30EB900 *)Method_System_Linq_Enumerable_Contains_int___);
  return (char)IntArray;
}


bool QuestPhaseEntity__IsIgnoreBattleLoseDialog(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C2793A & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_20262/*"ignoreBattleLoseDialog"*/);
    byte_4C2793A = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_20262/*"ignoreBattleLoseDialog"*/, 0);
}


bool QuestPhaseEntity__IsIgnoreBattlePointUp(QuestPhaseEntity_o *this, int32_t battlePointId, const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *IntArray; // x0

  if ( (byte_4C279A0 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C2D490(&StringLiteral_7542/*"IgnoreBattlePointUp"*/);
    byte_4C279A0 = 1;
  }
  IntArray = (System_Collections_Generic_IEnumerable_TSource__o *)EntityScriptUtil__GetIntArray(
                                                                    this->fields.script,
                                                                    (System_String_o *)StringLiteral_7542/*"IgnoreBattlePointUp"*/,
                                                                    0,
                                                                    0);
  if ( IntArray )
    LOBYTE(IntArray) = System_Linq_Enumerable__Contains_int_(
                         IntArray,
                         battlePointId,
                         (const MethodInfo_30EB900 *)Method_System_Linq_Enumerable_Contains_int___);
  return (char)IntArray;
}


bool QuestPhaseEntity__IsInterruptionQuest(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C27998 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_20821/*"interruptibleQuest"*/);
    byte_4C27998 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20821/*"interruptibleQuest"*/, 0, v2) != 0;
}


bool QuestPhaseEntity__IsInvisibleConnectAndLoad(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C27960 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_20861/*"invisibleConnectAndLoad"*/);
    byte_4C27960 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20861/*"invisibleConnectAndLoad"*/, 0, v2) != 0;
}


bool QuestPhaseEntity__IsKeepFieldBuffWhenMoveNextBattle(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C279AF & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_21093/*"keepFieldBuffWhenMoveNextBattle"*/);
    byte_4C279AF = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_21093/*"keepFieldBuffWhenMoveNextBattle"*/, 0, 0) != 0;
}


bool QuestPhaseEntity__IsKeepSubBgmAfterBattleResult(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C27956 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_21096/*"keepSubBgmUntilBattleResult"*/);
    byte_4C27956 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_21096/*"keepSubBgmUntilBattleResult"*/, 0);
}


bool QuestPhaseEntity__IsMatchIndividuality(
        QuestPhaseEntity_o *this,
        System_Int32_array *individualitys,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_T__o *PrioredIndividuality; // x21
  System_Collections_Generic_HashSet_int__o *v6; // x20
  System_Predicate_int__o *All_int; // x0
  __int64 v8; // x1
  System_Predicate_T__o *v9; // x21

  if ( (byte_4C2795F & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Array_FindAll_int___);
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_int___ctor___77923784);
    sub_1C2D490(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1C2D490(&System_Predicate_int__TypeInfo);
    byte_4C2795F = 1;
  }
  PrioredIndividuality = (System_Collections_Generic_IEnumerable_T__o *)QuestPhaseEntity__GetPrioredIndividuality(
                                                                          this,
                                                                          (const MethodInfo *)individualitys);
  v6 = (System_Collections_Generic_HashSet_int__o *)sub_1C2D6DC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor_56862832(
    v6,
    PrioredIndividuality,
    (const MethodInfo_363A870 *)Method_System_Collections_Generic_HashSet_int___ctor___77923784);
  All_int = (System_Predicate_int__o *)sub_1C2D6DC(System_Predicate_int__TypeInfo);
  if ( !v6
    || (v9 = (System_Predicate_T__o *)All_int,
        System_Predicate_int____ctor(All_int, (Il2CppObject *)v6, (intptr_t)v6->klass->vtable._8_Contains.method, 0),
        (All_int = (System_Predicate_int__o *)System_Array__FindAll_int_(
                                                individualitys,
                                                v9,
                                                (const MethodInfo_31D3B48 *)Method_System_Array_FindAll_int___)) == 0) )
  {
    sub_1C2D6EC(All_int, v8);
  }
  return All_int->fields.invoke_impl != 0;
}


bool QuestPhaseEntity__IsNonStopEndBgm(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C27937 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_22247/*"nonStopEndBgm"*/);
    byte_4C27937 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22247/*"nonStopEndBgm"*/, 0, v2) != 0;
}


bool QuestPhaseEntity__IsNoneSupportFriendPoint(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C279A6 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_22259/*"noneSupportFriendPoint"*/);
    byte_4C279A6 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22259/*"noneSupportFriendPoint"*/, 0, 0) != 0;
}


bool QuestPhaseEntity__IsNotClassBoard(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C2798A & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_22277/*"notClassBoard"*/);
    byte_4C2798A = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22277/*"notClassBoard"*/, 0, v2) != 0;
}


bool QuestPhaseEntity__IsNotResetResultDispFlag(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C27944 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_22287/*"notResetResultDispFlag"*/);
    byte_4C27944 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22287/*"notResetResultDispFlag"*/, 0, v2) != 0;
}


bool QuestPhaseEntity__IsNotUseRestrictionDialog(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C2798B & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_22289/*"notUseRestrictionDialog"*/);
    byte_4C2798B = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22289/*"notUseRestrictionDialog"*/, 0, v2) != 0;
}


bool QuestPhaseEntity__IsPlayScriptBeforeForWarBoard(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C27965 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_20938/*"isScriptPlayForWarBoard"*/);
    byte_4C27965 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20938/*"isScriptPlayForWarBoard"*/, 0, v2) != 0;
}


bool QuestPhaseEntity__IsReleaseFocusQuestBoard(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C27993 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_20934/*"isReleaseFocus"*/);
    byte_4C27993 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20934/*"isReleaseFocus"*/, 0, v2) != 0;
}


bool QuestPhaseEntity__IsRepeatReward(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C27988 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_23024/*"repeatReward"*/);
    byte_4C27988 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_23024/*"repeatReward"*/, 0, v2) != 0;
}


bool QuestPhaseEntity__IsReverseMyDeckSvtPosition(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C2799E & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_23075/*"reverseMyDeckSvtPosition"*/);
    byte_4C2799E = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_23075/*"reverseMyDeckSvtPosition"*/, 0);
}


bool QuestPhaseEntity__IsSaveInterruptionEnemyData(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C279A9 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_23169/*"saveInterruptionEnemyData"*/);
    byte_4C279A9 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_23169/*"saveInterruptionEnemyData"*/, 0, 0) != 0;
}


bool QuestPhaseEntity__IsSkipBattleFinish(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C27982 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_23506/*"skipBattleFinish"*/);
    byte_4C27982 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_23506/*"skipBattleFinish"*/, 0, v2) != 0;
}


bool QuestPhaseEntity__IsSkipMoveNextBattleFade(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C279A7 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_23508/*"skipMoveNextBattleFade"*/);
    byte_4C279A7 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_23508/*"skipMoveNextBattleFade"*/, 0, 0) != 0;
}


bool QuestPhaseEntity__IsUseGrandBoard(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C279B3 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_20950/*"isUseGrandBoard"*/);
    byte_4C279B3 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_20950/*"isUseGrandBoard"*/, 0, 0) != 0;
}


bool QuestPhaseEntity__IsUseOverwriteEventEquipSkillParts(
        QuestPhaseEntity_o *this,
        int32_t *eventId,
        int32_t *iconId,
        int32_t *groupId,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  Il2CppObject *v10; // x22
  __int64 naturalAligment; // x10
  Il2CppObject *value; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C279B4 & 1) == 0 )
  {
    sub_1C2D490(&Method_BasicHelper_GetValue_long___);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1C2D490(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1C2D490(&StringLiteral_19133/*"eventId"*/);
    sub_1C2D490(&StringLiteral_22530/*"overwriteEventEquipSkillParts"*/);
    sub_1C2D490(&StringLiteral_20108/*"iconId"*/);
    sub_1C2D490(&StringLiteral_19897/*"groupId"*/);
    byte_4C279B4 = 1;
  }
  value = 0;
  *eventId = 0;
  *iconId = 0;
  *groupId = 0;
  script = this->fields.script;
  if ( !script )
    sub_1C2D6EC(0, eventId);
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)script,
         (Il2CppObject *)StringLiteral_22530/*"overwriteEventEquipSkillParts"*/,
         &value,
         (const MethodInfo_344BB34 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    v10 = value;
    if ( value )
    {
      naturalAligment = System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.naturalAligment;
      if ( value->klass->_2.naturalAligment >= (unsigned int)naturalAligment
        && (System_Collections_Generic_Dictionary_string__object__c *)value->klass->_2.typeHierarchy[naturalAligment - 1] == System_Collections_Generic_Dictionary_string__object__TypeInfo )
      {
        *eventId = BasicHelper__GetValue_long_(
                     (System_Collections_Generic_Dictionary_string__object__o *)value,
                     (System_String_o *)StringLiteral_19133/*"eventId"*/,
                     0,
                     (const MethodInfo_30BC1D8 *)Method_BasicHelper_GetValue_long___);
        *iconId = BasicHelper__GetValue_long_(
                    (System_Collections_Generic_Dictionary_string__object__o *)v10,
                    (System_String_o *)StringLiteral_20108/*"iconId"*/,
                    0,
                    (const MethodInfo_30BC1D8 *)Method_BasicHelper_GetValue_long___);
        *groupId = BasicHelper__GetValue_long_(
                     (System_Collections_Generic_Dictionary_string__object__o *)v10,
                     (System_String_o *)StringLiteral_19897/*"groupId"*/,
                     0,
                     (const MethodInfo_30BC1D8 *)Method_BasicHelper_GetValue_long___);
      }
    }
  }
  return *eventId > 0;
}


bool QuestPhaseEntity__IsUseTemporaryCommandSpell(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C2796B & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_24466/*"useTemporaryCommandSpell"*/);
    byte_4C2796B = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_24466/*"useTemporaryCommandSpell"*/, -1, v2) == 1;
}


bool QuestPhaseEntity__IsWaveBattle(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  const MethodInfo *v4; // x1

  return QuestPhaseEntity__IsWaveSetup(this, method)
      || QuestPhaseEntity__IsWaveSetupAsOneParty(this, v3)
      || QuestPhaseEntity__IsWaveSetupSwitchParty(this, v4);
}


bool QuestPhaseEntity__IsWaveCountInfinity(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C27980 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_24761/*"waveCountInfinity"*/);
    byte_4C27980 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_24761/*"waveCountInfinity"*/, -1, v2) != -1;
}


bool QuestPhaseEntity__IsWaveSetup(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C2798C & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_24763/*"waveSetup"*/);
    byte_4C2798C = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_24763/*"waveSetup"*/, 0, v2) != 0;
}


bool QuestPhaseEntity__IsWaveSetupAsOneParty(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C2798D & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_24764/*"waveSetupAsOneParty"*/);
    byte_4C2798D = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_24764/*"waveSetupAsOneParty"*/, 0, v2) != 0;
}


bool QuestPhaseEntity__IsWaveSetupSwitchParty(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C2798E & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_24765/*"waveSetupSwitchParty"*/);
    byte_4C2798E = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_24765/*"waveSetupSwitchParty"*/, 0, v2) != 0;
}


bool QuestPhaseEntity__PlayHappinessCounterEffect(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C279A1 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_10651/*"PlayHappinessCounterEffect"*/);
    byte_4C279A1 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_10651/*"PlayHappinessCounterEffect"*/, 0);
}


bool QuestPhaseEntity__ScriptHasKey(QuestPhaseEntity_o *this, System_String_o *key, const MethodInfo *method)
{
  return EntityScriptUtil__ScriptHasKey(this->fields.script, key, 0);
}


void QuestPhaseEntity__SetNpcAiInfo(
        System_Collections_Generic_IDictionary_int__int____o *dicNpcAiId,
        Il2CppObject *obj,
        const MethodInfo *method)
{
  __int64 naturalAligment; // x10
  System_Collections_Generic_Dictionary_string__object__c *v6; // x9
  System_Collections_Generic_Dictionary_string__object__o *v7; // x21
  int Value_long; // w20
  Il2CppObject *Value_object; // x0
  System_Collections_Generic_List_object__o *v10; // x21
  QuestPhaseEntity___c_c *v11; // x0
  System_Converter_object__int__o *_9__116_0; // x22
  Il2CppObject *v13; // x23
  struct QuestPhaseEntity___c_StaticFields *static_fields; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  System_Collections_Generic_List_int__o *v17; // x0
  __int64 v18; // x1
  System_Collections_Generic_IDictionary_int__int____c *klass; // x8
  System_Collections_Generic_List_int__o *v20; // x21
  __int64 v21; // x9
  int32_t *p_offset; // x10
  __int64 v23; // x0

  if ( (byte_4C27973 & 1) == 0 )
  {
    sub_1C2D490(&Method_BasicHelper_GetValue_long___);
    sub_1C2D490(&Method_BasicHelper_GetValue_List_object____);
    sub_1C2D490(&System_Converter_object__int__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_IDictionary_int__int____TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_object__ConvertAll_int___);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C2D490(&Method_QuestPhaseEntity___c__SetNpcAiInfo_b__116_0__);
    sub_1C2D490(&QuestPhaseEntity___c_TypeInfo);
    sub_1C2D490(&StringLiteral_16719/*"aiIds"*/);
    sub_1C2D490(&StringLiteral_22304/*"npcId"*/);
    byte_4C27973 = 1;
  }
  if ( obj )
  {
    naturalAligment = System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.naturalAligment;
    if ( obj->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
    {
      v6 = (System_Collections_Generic_Dictionary_string__object__c *)obj->klass->_2.typeHierarchy[naturalAligment - 1];
      v7 = v6 == System_Collections_Generic_Dictionary_string__object__TypeInfo
         ? (System_Collections_Generic_Dictionary_string__object__o *)obj
         : 0LL;
      if ( v6 == System_Collections_Generic_Dictionary_string__object__TypeInfo )
      {
        Value_long = BasicHelper__GetValue_long_(
                       v7,
                       (System_String_o *)StringLiteral_22304/*"npcId"*/,
                       0,
                       (const MethodInfo_30BC1D8 *)Method_BasicHelper_GetValue_long___);
        Value_object = BasicHelper__GetValue_object_(
                         v7,
                         (System_String_o *)StringLiteral_16719/*"aiIds"*/,
                         0,
                         (const MethodInfo_30BC2C4 *)Method_BasicHelper_GetValue_List_object____);
        if ( Value_long >= 1 )
        {
          v10 = (System_Collections_Generic_List_object__o *)Value_object;
          if ( Value_object )
          {
            v11 = QuestPhaseEntity___c_TypeInfo;
            if ( !QuestPhaseEntity___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(QuestPhaseEntity___c_TypeInfo);
              v11 = QuestPhaseEntity___c_TypeInfo;
            }
            _9__116_0 = v11->static_fields->__9__116_0;
            if ( !_9__116_0 )
            {
              if ( !v11->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v11);
                v11 = QuestPhaseEntity___c_TypeInfo;
              }
              v13 = (Il2CppObject *)v11->static_fields->__9;
              _9__116_0 = (System_Converter_object__int__o *)sub_1C2D6DC(System_Converter_object__int__TypeInfo);
              System_Converter_object__int____ctor(
                _9__116_0,
                v13,
                Method_QuestPhaseEntity___c__SetNpcAiInfo_b__116_0__,
                0);
              static_fields = QuestPhaseEntity___c_TypeInfo->static_fields;
              static_fields->__9__116_0 = _9__116_0;
              sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__116_0, (int32_t)_9__116_0, v15, v16);
            }
            v17 = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_object___ConvertAll_int_(
                                                              v10,
                                                              (System_Converter_T__TOutput__o *)_9__116_0,
                                                              (const MethodInfo_2FF5E6C *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
            if ( !v17
              || (v17 = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_int___ToArray(
                                                                    v17,
                                                                    (const MethodInfo_376E618 *)Method_System_Collections_Generic_List_int__ToArray__),
                  !dicNpcAiId) )
            {
              sub_1C2D6EC(v17, v18);
            }
            klass = dicNpcAiId->klass;
            v20 = v17;
            v21 = *(unsigned __int16 *)&dicNpcAiId->klass->_2.rank;
            if ( *(_WORD *)&dicNpcAiId->klass->_2.rank )
            {
              p_offset = &klass->_1.interfaceOffsets->offset;
              while ( *((System_Collections_Generic_IDictionary_int__int____c **)p_offset - 1) != System_Collections_Generic_IDictionary_int__int____TypeInfo )
              {
                --v21;
                p_offset += 4;
                if ( !v21 )
                  goto LABEL_24;
              }
              v23 = (__int64)&klass->vtable[*p_offset + 1];
            }
            else
            {
LABEL_24:
              v23 = sub_1C7DCA8(dicNpcAiId, System_Collections_Generic_IDictionary_int__int____TypeInfo, 1);
            }
            (*(void (__fastcall **)(System_Collections_Generic_IDictionary_int__int____o *, _QWORD, System_Collections_Generic_List_int__o *, _QWORD))v23)(
              dicNpcAiId,
              (unsigned int)Value_long,
              v20,
              *(_QWORD *)(v23 + 8));
          }
        }
      }
    }
  }
}


bool QuestPhaseEntity__TryGetFadeColorAfterMovieFinished(
        QuestPhaseEntity_o *this,
        System_Nullable_Color__o *color,
        const MethodInfo *method)
{
  System_String_o *StringValue; // x0
  float v6; // w8
  bool result; // w0
  _WORD v8[28]; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C279B0 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Nullable_Color__get_HasValue__);
    sub_1C2D490(&StringLiteral_19372/*"fadeColorAfterMovieFinished"*/);
    byte_4C279B0 = 1;
  }
  StringValue = EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_19372/*"fadeColorAfterMovieFinished"*/, 0, 0);
  ColorHelper__ParseColorCode((System_Nullable_Color__o *)v8, StringValue, 0);
  v6 = *(float *)&v8[8];
  *(System_Nullable_Color__o *)&v8[12] = *(System_Nullable_Color__o *)v8;
  *(_OWORD *)&color->fields.hasValue = *(_OWORD *)v8;
  result = color->fields.hasValue;
  color->fields.value.fields.a = v6;
  return result;
}


bool QuestPhaseEntity__TryGetOverwritePlayerSequenceSelectTypeByGender(
        QuestPhaseEntity_o *this,
        int32_t servantId,
        int32_t *genderSelectType,
        int32_t *patternId,
        const MethodInfo *method)
{
  __int64 v9; // x23
  Il2CppObject *Master_object; // x0
  __int64 monitor_high; // x1
  Il2CppObject *Value_object__object; // x0
  Il2CppObject *v13; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x21
  System_Func_object__bool__o *v15; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0
  QuestPhaseEntity___c_c *v17; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x21
  System_Func_object__int__o *_9__167_1; // x22
  Il2CppObject *v20; // x23
  struct QuestPhaseEntity___c_StaticFields *static_fields; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x0
  System_Object_array *v25; // x21
  __int64 v26; // x2
  int max_length; // w8
  CommonReleaseMaster_o *v28; // x22
  unsigned int v29; // w23
  Il2CppObject *v30; // x24

  if ( (byte_4C279A5 & 1) == 0 )
  {
    sub_1C2D490(&Method_BasicHelper_GetValue_string__object___);
    sub_1C2D490(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_System_Linq_Enumerable_OrderByDescending_BattleTreasureDeviceSequenceSelectType__int___);
    sub_1C2D490(&Method_System_Linq_Enumerable_ToArray_BattleTreasureDeviceSequenceSelectType___);
    sub_1C2D490(&Method_System_Linq_Enumerable_Where_BattleTreasureDeviceSequenceSelectType___);
    sub_1C2D490(&System_Func_BattleTreasureDeviceSequenceSelectType__bool__TypeInfo);
    sub_1C2D490(&System_Func_BattleTreasureDeviceSequenceSelectType__int__TypeInfo);
    sub_1C2D490(&Method_JsonManager_DeserializeArray_BattleTreasureDeviceSequenceSelectType___);
    sub_1C2D490(&JsonManager_TypeInfo);
    sub_1C2D490(&Method_QuestPhaseEntity___c__TryGetOverwritePlayerSequenceSelectTypeByGender_b__167_1__);
    sub_1C2D490(&Method_QuestPhaseEntity___c__DisplayClass167_0__TryGetOverwritePlayerSequenceSelectTypeByGender_b__0__);
    sub_1C2D490(&QuestPhaseEntity___c__DisplayClass167_0_TypeInfo);
    sub_1C2D490(&QuestPhaseEntity___c_TypeInfo);
    sub_1C2D490(&StringLiteral_22549/*"overwritePlayerSequenceSelectTypeByGender"*/);
    byte_4C279A5 = 1;
  }
  v9 = sub_1C2D6DC(QuestPhaseEntity___c__DisplayClass167_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_28;
  *(_DWORD *)(v9 + 16) = servantId;
  *genderSelectType = -1;
  *patternId = -1;
  Value_object__object = BasicHelper__GetValue_object__object_(
                           (System_Collections_Generic_Dictionary_K__V__o *)this->fields.script,
                           (Il2CppObject *)StringLiteral_22549/*"overwritePlayerSequenceSelectTypeByGender"*/,
                           0,
                           (const MethodInfo_30BCA70 *)Method_BasicHelper_GetValue_string__object___);
  if ( !Value_object__object )
    return (char)Value_object__object;
  v13 = Value_object__object;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v14 = (System_Collections_Generic_IEnumerable_TSource__o *)JsonManager__DeserializeArray_object_(
                                                               v13,
                                                               (const MethodInfo_313DDBC *)Method_JsonManager_DeserializeArray_BattleTreasureDeviceSequenceSelectType___);
  v15 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_BattleTreasureDeviceSequenceSelectType__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v15,
    (Il2CppObject *)v9,
    Method_QuestPhaseEntity___c__DisplayClass167_0__TryGetOverwritePlayerSequenceSelectTypeByGender_b__0__,
    0);
  v16 = System_Linq_Enumerable__Where_object_(
          v14,
          (System_Func_TSource__bool__o *)v15,
          (const MethodInfo_3115108 *)Method_System_Linq_Enumerable_Where_BattleTreasureDeviceSequenceSelectType___);
  v17 = QuestPhaseEntity___c_TypeInfo;
  v18 = v16;
  if ( !QuestPhaseEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestPhaseEntity___c_TypeInfo);
    v17 = QuestPhaseEntity___c_TypeInfo;
  }
  _9__167_1 = (System_Func_object__int__o *)v17->static_fields->__9__167_1;
  if ( !_9__167_1 )
  {
    if ( !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      v17 = QuestPhaseEntity___c_TypeInfo;
    }
    v20 = (Il2CppObject *)v17->static_fields->__9;
    _9__167_1 = (System_Func_object__int__o *)sub_1C2D6DC(System_Func_BattleTreasureDeviceSequenceSelectType__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__167_1,
      v20,
      Method_QuestPhaseEntity___c__TryGetOverwritePlayerSequenceSelectTypeByGender_b__167_1__,
      0);
    static_fields = QuestPhaseEntity___c_TypeInfo->static_fields;
    static_fields->__9__167_1 = (struct System_Func_BattleTreasureDeviceSequenceSelectType__int__o *)_9__167_1;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__167_1, (int32_t)_9__167_1, v22, v23);
  }
  v24 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                               v18,
                                                               (System_Func_TSource__TKey__o *)_9__167_1,
                                                               (const MethodInfo_30FE624 *)Method_System_Linq_Enumerable_OrderByDescending_BattleTreasureDeviceSequenceSelectType__int___);
  v25 = System_Linq_Enumerable__ToArray_object_(
          v24,
          (const MethodInfo_310DFEC *)Method_System_Linq_Enumerable_ToArray_BattleTreasureDeviceSequenceSelectType___);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v25, 0) )
    goto LABEL_25;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !v25 )
LABEL_28:
    sub_1C2D6EC(Master_object, monitor_high);
  max_length = v25->max_length;
  if ( max_length < 1 )
  {
LABEL_25:
    LOBYTE(Value_object__object) = 0;
    return (char)Value_object__object;
  }
  v28 = (CommonReleaseMaster_o *)Master_object;
  v29 = 0;
  while ( 1 )
  {
    if ( v29 >= max_length )
      sub_1C2D6F4(Master_object, monitor_high, v26);
    v30 = v25->m_Items[v29];
    if ( !v30 )
      goto LABEL_28;
    monitor_high = HIDWORD(v30[1].monitor);
    if ( (int)monitor_high < 1 )
      break;
    if ( !v28 )
      goto LABEL_28;
    Master_object = (Il2CppObject *)CommonReleaseMaster__IsOpen(v28, monitor_high, 0, 0, 0);
    if ( ((unsigned __int8)Master_object & 1) != 0 )
      break;
    max_length = v25->max_length;
    if ( (int)++v29 >= max_length )
      goto LABEL_25;
  }
  LOBYTE(Value_object__object) = 1;
  *genderSelectType = HIDWORD(v30[1].klass);
  *patternId = (int32_t)v30[1].monitor;
  return (char)Value_object__object;
}


int32_t QuestPhaseEntity__getBattleBgId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  return this->fields.battleBgId;
}


int32_t QuestPhaseEntity__getBattleBgTypeValue(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  return this->fields.battleBgType;
}


int32_t QuestPhaseEntity__getBattleEffectId(QuestPhaseEntity_o *this, int32_t defVal, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4C27930 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_17065/*"battleEffectId"*/);
    byte_4C27930 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_17065/*"battleEffectId"*/, defVal, v3);
}


int32_t QuestPhaseEntity__getBattleFieldMotionId(QuestPhaseEntity_o *this, int32_t defVal, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4C27932 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_19411/*"fieldMotionId"*/);
    byte_4C27932 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19411/*"fieldMotionId"*/, defVal, v3);
}


System_Int32_array *QuestPhaseEntity__getBattleFieldMotionIds(
        QuestPhaseEntity_o *this,
        System_Int32_array *defVals,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  System_Int32_array *result; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  int32_t BattleFieldMotionId; // w20
  __int64 v10; // x2

  if ( (byte_4C27933 & 1) == 0 )
  {
    sub_1C2D490(&int___TypeInfo);
    sub_1C2D490(&StringLiteral_19412/*"fieldMotionIds"*/);
    byte_4C27933 = 1;
  }
  result = QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_19412/*"fieldMotionIds"*/, defVals, v3);
  if ( !result )
    goto LABEL_10;
  if ( result->max_length )
    return result;
  BattleFieldMotionId = QuestPhaseEntity__getBattleFieldMotionId(this, -1, v8);
  result = defVals;
  if ( BattleFieldMotionId == -1 )
    return result;
  result = (System_Int32_array *)sub_1C2D538(int___TypeInfo, 1);
  if ( !result )
LABEL_10:
    sub_1C2D6EC(result, v7);
  if ( !LODWORD(result->max_length) )
    sub_1C2D6F4(result, v7, v10);
  result->m_Items[0] = BattleFieldMotionId;
  return result;
}


int32_t QuestPhaseEntity__getBreakOnBattleWinWaitMSec(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C2793E & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_17409/*"breakOnBattleWinWaitMSec"*/);
    byte_4C2793E = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_17409/*"breakOnBattleWinWaitMSec"*/, 0, v2);
}


System_Int32_array *QuestPhaseEntity__getEventGrounpIds(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  System_Int32_array *v3; // x2
  const MethodInfo *v4; // x3

  if ( (byte_4C27934 & 1) == 0 )
  {
    sub_1C2D490(&int___TypeInfo);
    sub_1C2D490(&StringLiteral_19132/*"eventGroupId"*/);
    byte_4C27934 = 1;
  }
  v3 = (System_Int32_array *)sub_1C2D538(int___TypeInfo, 0);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_19132/*"eventGroupId"*/, v3, v4);
}


int32_t QuestPhaseEntity__getFriendshipExp(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  return this->fields.friendshipExp;
}


int32_t QuestPhaseEntity__getGIftId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  return this->fields.giftId;
}


int32_t QuestPhaseEntity__getHintLeftIndent(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C27970 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_19967/*"hintLeftIndent"*/);
    byte_4C27970 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19967/*"hintLeftIndent"*/, -1, v2);
}


System_String_o *QuestPhaseEntity__getHintMessage(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C2796F & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_19968/*"hintMessage"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C2796F = 1;
  }
  return QuestPhaseEntity__getScriptStr(
           this,
           (System_String_o *)StringLiteral_19968/*"hintMessage"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


System_String_o *QuestPhaseEntity__getHintMessageTitle(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C2796E & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_1/*""*/);
    sub_1C2D490(&StringLiteral_19970/*"hintTitle"*/);
    byte_4C2796E = 1;
  }
  return QuestPhaseEntity__getScriptStr(
           this,
           (System_String_o *)StringLiteral_19970/*"hintTitle"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


int32_t QuestPhaseEntity__getHintOpenType(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C27971 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_19969/*"hintOpenType"*/);
    byte_4C27971 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19969/*"hintOpenType"*/, 0, v2);
}


int32_t QuestPhaseEntity__getLeave(QuestPhaseEntity_o *this, int32_t defVal, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4C2792F & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_21182/*"leave"*/);
    byte_4C2792F = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21182/*"leave"*/, defVal, v3);
}


int32_t QuestPhaseEntity__getPhase(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  return this->fields.phase;
}


int32_t QuestPhaseEntity__getPlayerExp(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  return this->fields.playerExp;
}


int32_t QuestPhaseEntity__getQuestId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  return this->fields.questId;
}


int32_t QuestPhaseEntity__getResultBgmId(QuestPhaseEntity_o *this, int32_t defVal, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4C2792A & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_23056/*"resultBgmId"*/);
    byte_4C2792A = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_23056/*"resultBgmId"*/, defVal, v3);
}


int32_t QuestPhaseEntity__getResultEffectId(QuestPhaseEntity_o *this, int32_t defVal, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4C2792E & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_23057/*"resultEffectId"*/);
    byte_4C2792E = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_23057/*"resultEffectId"*/, defVal, v3);
}


System_Int32_array *QuestPhaseEntity__getResultEnemyVoiceIds(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  System_Int32_array *v3; // x2
  const MethodInfo *v4; // x3

  if ( (byte_4C27938 & 1) == 0 )
  {
    sub_1C2D490(&int___TypeInfo);
    sub_1C2D490(&StringLiteral_23058/*"resultEnemyVoiceIds"*/);
    byte_4C27938 = 1;
  }
  v3 = (System_Int32_array *)sub_1C2D538(int___TypeInfo, 0);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_23058/*"resultEnemyVoiceIds"*/, v3, v4);
}


System_Int32_array *QuestPhaseEntity__getScriptIntArrayParam(
        QuestPhaseEntity_o *this,
        System_String_o *key,
        System_Int32_array *defVal,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ScriptObjListParam; // x0
  System_Collections_Generic_List_object__o *v8; // x19
  QuestPhaseEntity___c_c *v9; // x0
  System_Converter_object__int__o *_9__33_0; // x20
  Il2CppObject *v11; // x21
  struct QuestPhaseEntity___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  System_Collections_Generic_List_int__o *v15; // x0
  __int64 v16; // x1

  if ( (byte_4C27922 & 1) == 0 )
  {
    sub_1C2D490(&System_Converter_object__int__TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_object__ConvertAll_int___);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C2D490(&Method_QuestPhaseEntity___c__getScriptIntArrayParam_b__33_0__);
    sub_1C2D490(&QuestPhaseEntity___c_TypeInfo);
    byte_4C27922 = 1;
  }
  ScriptObjListParam = QuestPhaseEntity__getScriptObjListParam(this, key, (const MethodInfo *)defVal);
  if ( !ScriptObjListParam )
    return defVal;
  v8 = ScriptObjListParam;
  v9 = QuestPhaseEntity___c_TypeInfo;
  if ( !QuestPhaseEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestPhaseEntity___c_TypeInfo);
    v9 = QuestPhaseEntity___c_TypeInfo;
  }
  _9__33_0 = v9->static_fields->__9__33_0;
  if ( !_9__33_0 )
  {
    if ( !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      v9 = QuestPhaseEntity___c_TypeInfo;
    }
    v11 = (Il2CppObject *)v9->static_fields->__9;
    _9__33_0 = (System_Converter_object__int__o *)sub_1C2D6DC(System_Converter_object__int__TypeInfo);
    System_Converter_object__int____ctor(
      _9__33_0,
      v11,
      Method_QuestPhaseEntity___c__getScriptIntArrayParam_b__33_0__,
      0);
    static_fields = QuestPhaseEntity___c_TypeInfo->static_fields;
    static_fields->__9__33_0 = _9__33_0;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__33_0, (int32_t)_9__33_0, v13, v14);
  }
  v15 = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_object___ConvertAll_int_(
                                                    v8,
                                                    (System_Converter_T__TOutput__o *)_9__33_0,
                                                    (const MethodInfo_2FF5E6C *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
  if ( !v15 )
    sub_1C2D6EC(0, v16);
  return System_Collections_Generic_List_int___ToArray(
           v15,
           (const MethodInfo_376E618 *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
int32_t QuestPhaseEntity__getScriptIntParam(
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
  if ( (byte_4C27921 & 1) == 0 )
  {
    sub_1C2D490(&long_TypeInfo);
    byte_4C27921 = 1;
  }
  ScriptObj = QuestPhaseEntity__getScriptObj(this, key, *(const MethodInfo **)&defVal);
  if ( !ScriptObj )
    return v4;
  if ( ScriptObj->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(ScriptObj, long_TypeInfo, v8, v9);
  sub_1C2D9AC(ScriptObj);
  return (unsigned int)QuestPhaseEntity__getScriptObj(v11, v12, v13);
}


Il2CppObject *QuestPhaseEntity__getScriptObj(QuestPhaseEntity_o *this, System_String_o *key, const MethodInfo *method)
{
  Il2CppObject *result; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C27926 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    byte_4C27926 = 1;
  }
  result = (Il2CppObject *)this->fields.script;
  if ( result )
  {
    value = 0;
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)result,
           (Il2CppObject *)key,
           &value,
           (const MethodInfo_344BB34 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      return value;
    }
    else
    {
      return 0;
    }
  }
  return result;
}


System_Object_array *QuestPhaseEntity__getScriptObjArrayParam(
        QuestPhaseEntity_o *this,
        System_String_o *key,
        System_String_array *defVal,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ScriptObjListParam; // x0

  if ( (byte_4C27924 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_object__ToArray__);
    byte_4C27924 = 1;
  }
  ScriptObjListParam = QuestPhaseEntity__getScriptObjListParam(this, key, (const MethodInfo *)defVal);
  if ( ScriptObjListParam )
    return System_Collections_Generic_List_object___ToArray(
             ScriptObjListParam,
             (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_object__ToArray__);
  else
    return (System_Object_array *)defVal;
}


System_Collections_Generic_List_object__o *QuestPhaseEntity__getScriptObjListParam(
        QuestPhaseEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *result; // x0
  __int64 naturalAligment; // x9
  QuestPhaseEntity_o *v7; // x0
  System_String_o *v8; // x1
  System_String_array *v9; // x2
  const MethodInfo *v10; // x3

  if ( (byte_4C27925 & 1) == 0 )
  {
    sub_1C2D490(&System_Collections_Generic_List_object__TypeInfo);
    byte_4C27925 = 1;
  }
  result = (System_Collections_Generic_List_object__o *)QuestPhaseEntity__getScriptObj(this, key, method);
  if ( result )
  {
    naturalAligment = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment;
    if ( result->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (System_Collections_Generic_List_object__c *)result->klass->_2.typeHierarchy[naturalAligment - 1] != System_Collections_Generic_List_object__TypeInfo )
    {
      sub_1C2D9AC(result);
      return (System_Collections_Generic_List_object__o *)QuestPhaseEntity__getScriptStringArrayParam(v7, v8, v9, v10);
    }
  }
  return result;
}


System_String_o *QuestPhaseEntity__getScriptStr(
        QuestPhaseEntity_o *this,
        System_String_o *key,
        System_String_o *defVal,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v8; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *v9; // x0
  Il2CppObject *Item; // x0
  QuestPhaseEntity_o *v12; // x0
  const MethodInfo *v13; // x1

  if ( (byte_4C27927 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C2D490(&string_TypeInfo);
    byte_4C27927 = 1;
  }
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)key,
          (const MethodInfo_344A51C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return defVal;
  }
  v9 = this->fields.script;
  if ( !v9 )
    sub_1C2D6EC(0, v8);
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)v9,
           (Il2CppObject *)key,
           (const MethodInfo_344A2A8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  defVal = (System_String_o *)Item;
  if ( !Item || (System_String_c *)Item->klass == string_TypeInfo )
    return defVal;
  sub_1C2D9AC(Item);
  return (System_String_o *)QuestPhaseEntity__GetOverwriteEquipSkills(v12, v13);
}


System_String_array *QuestPhaseEntity__getScriptStringArrayParam(
        QuestPhaseEntity_o *this,
        System_String_o *key,
        System_String_array *defVal,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ScriptObjListParam; // x0
  System_Collections_Generic_List_object__o *v8; // x19
  QuestPhaseEntity___c_c *v9; // x0
  System_Converter_TInput__TOutput__o *_9__34_0; // x20
  Il2CppObject *v11; // x21
  struct QuestPhaseEntity___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  System_Collections_Generic_List_object__o *v15; // x0
  __int64 v16; // x1

  if ( (byte_4C27923 & 1) == 0 )
  {
    sub_1C2D490(&System_Converter_object__string__TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_object__ConvertAll_string___);
    sub_1C2D490(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1C2D490(&Method_QuestPhaseEntity___c__getScriptStringArrayParam_b__34_0__);
    sub_1C2D490(&QuestPhaseEntity___c_TypeInfo);
    byte_4C27923 = 1;
  }
  ScriptObjListParam = QuestPhaseEntity__getScriptObjListParam(this, key, (const MethodInfo *)defVal);
  if ( !ScriptObjListParam )
    return defVal;
  v8 = ScriptObjListParam;
  v9 = QuestPhaseEntity___c_TypeInfo;
  if ( !QuestPhaseEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestPhaseEntity___c_TypeInfo);
    v9 = QuestPhaseEntity___c_TypeInfo;
  }
  _9__34_0 = (System_Converter_TInput__TOutput__o *)v9->static_fields->__9__34_0;
  if ( !_9__34_0 )
  {
    if ( !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      v9 = QuestPhaseEntity___c_TypeInfo;
    }
    v11 = (Il2CppObject *)v9->static_fields->__9;
    _9__34_0 = (System_Converter_TInput__TOutput__o *)sub_1C2D6DC(System_Converter_object__string__TypeInfo);
    System_Converter_object__object____ctor(
      _9__34_0,
      v11,
      Method_QuestPhaseEntity___c__getScriptStringArrayParam_b__34_0__,
      0);
    static_fields = QuestPhaseEntity___c_TypeInfo->static_fields;
    static_fields->__9__34_0 = (struct System_Converter_object__string__o *)_9__34_0;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__34_0, (int32_t)_9__34_0, v13, v14);
  }
  v15 = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___ConvertAll_object_(
                                                       v8,
                                                       (System_Converter_T__TOutput__o *)_9__34_0,
                                                       (const MethodInfo_2FF5F70 *)Method_System_Collections_Generic_List_object__ConvertAll_string___);
  if ( !v15 )
    sub_1C2D6EC(0, v16);
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  v15,
                                  (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_string__ToArray__);
}


int32_t QuestPhaseEntity__getSpecialShadowEffectId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C27949 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_19829/*"getSpecialShadowEffectId"*/);
    byte_4C27949 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19829/*"getSpecialShadowEffectId"*/, 0, v2);
}


int32_t QuestPhaseEntity__getTurnSituationType(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C27948 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_24209/*"turnSituationType"*/);
    byte_4C27948 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_24209/*"turnSituationType"*/, 0, v2);
}


int32_t QuestPhaseEntity__getUniqueCameraId(QuestPhaseEntity_o *this, int32_t defVal, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4C27931 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_24287/*"uniqueCameraId"*/);
    byte_4C27931 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_24287/*"uniqueCameraId"*/, defVal, v3);
}


bool QuestPhaseEntity__isBattleFinishCameraTargetAll(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C27947 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_17067/*"battleFinishCameraTargetAll"*/);
    byte_4C27947 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_17067/*"battleFinishCameraTargetAll"*/, 0, v2) != 0;
}


bool QuestPhaseEntity__isBreakOnBattleWin(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C2793C & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_17407/*"breakOnBattleWin"*/);
    byte_4C2793C = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_17407/*"breakOnBattleWin"*/, 0, v2) != 0;
}


bool QuestPhaseEntity__isBreakOnBattleWinFadeColorBlack(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C2793D & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_17408/*"breakOnBattleWinFadeColorBlack"*/);
    byte_4C2793D = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_17408/*"breakOnBattleWinFadeColorBlack"*/, 0, v2) != 0;
}


bool QuestPhaseEntity__isDisableChangeRaidDownMessage(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C2794A & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_20896/*"isDisableChangeRaidDownMessage"*/);
    byte_4C2794A = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20896/*"isDisableChangeRaidDownMessage"*/, 0, v2) != 0;
}


bool QuestPhaseEntity__isDispLoseResult(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C27939 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_23059/*"resultLoseDisp"*/);
    byte_4C27939 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_23059/*"resultLoseDisp"*/, 0, v2) != 0;
}


bool QuestPhaseEntity__isFadeOutBgmBeforeMovie(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C2792D & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_6589/*"FadeOutBgmBeforeMovie"*/);
    byte_4C2792D = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_6589/*"FadeOutBgmBeforeMovie"*/, 0, v2) != 0;
}


bool QuestPhaseEntity__isNoResult(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C2793B & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_22230/*"noResult"*/);
    byte_4C2793B = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22230/*"noResult"*/, 0, v2) != 0;
}


bool QuestPhaseEntity__isTurnSituationType(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  return QuestPhaseEntity__getTurnSituationType(this, method) > 0;
}


void QuestPhaseEntity__GetBattleSkillDropEffectIds_d__173___ctor(
        QuestPhaseEntity__GetBattleSkillDropEffectIds_d__173_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
  this->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0);
}


bool QuestPhaseEntity__GetBattleSkillDropEffectIds_d__173__MoveNext(
        QuestPhaseEntity__GetBattleSkillDropEffectIds_d__173_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  QuestPhaseEntity__GetBattleSkillDropEffectIds_d__173_o *v4; // x19
  int32_t _1__state; // w8
  QuestPhaseEntity_o *_4__this; // x0
  System_Collections_Generic_IEnumerable_FunctionEntity__o *BattleSkillDropFunctionEntities; // x0
  __int64 v8; // x1
  System_Collections_Generic_IEnumerable_FunctionEntity__o *v9; // x19
  System_Collections_Generic_IEnumerable_FunctionEntity__c *klass; // x8
  __int64 v11; // x9
  int32_t *p_offset; // x10
  __int64 v13; // x0
  struct BattleSkillDropInfo_JsonConvertData_o *data_5__3; // x8
  int32_t breakEffectId; // w8
  bool result; // w0
  CGThumbnailListItem_o *p_data_5__3; // x19
  _BOOL8 BattleSkillDropInfoDict; // x0
  __int64 v19; // x1
  __int64 v20; // x1
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  struct System_Collections_Generic_IEnumerator_FunctionEntity__o *_7__wrap1; // x19
  System_Collections_Generic_IEnumerator_FunctionEntity__c *v24; // x8
  __int64 v25; // x9
  int *v26; // x10
  __int64 v27; // x0
  const MethodInfo *v28; // x1
  struct System_Collections_Generic_IEnumerator_FunctionEntity__o *v29; // x19
  System_Collections_Generic_IEnumerator_FunctionEntity__c *v30; // x8
  __int64 v31; // x9
  int *v32; // x10
  __int64 v33; // x0
  FunctionEntity_o *v34; // x0
  __int64 v35; // x1
  struct BattleSkillDropInfo_JsonConvertData_o *v36; // x9
  int32_t appearEffectId; // w9
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  QuestPhaseEntity__GetBattleSkillDropEffectIds_d__173_o *v40; // [xsp+18h] [xbp-28h]

  v4 = this;
  v40 = this;
  if ( (byte_4C279BD & 1) == 0 )
  {
    sub_1C2D490(&System_Collections_Generic_IEnumerable_FunctionEntity__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_IEnumerator_FunctionEntity__TypeInfo);
    this = (QuestPhaseEntity__GetBattleSkillDropEffectIds_d__173_o *)sub_1C2D490(&System_Collections_IEnumerator_TypeInfo);
    byte_4C279BD = 1;
  }
  _1__state = v4->fields.__1__state;
  if ( _1__state == 2 )
  {
    v4->fields._data_5__3 = 0;
    p_data_5__3 = (CGThumbnailListItem_o *)&v4->fields._data_5__3;
    LODWORD(p_data_5__3[-1].fields.viewObject) = -3;
    sub_1C2D434(p_data_5__3, 0, v2, v3);
    goto LABEL_18;
  }
  if ( _1__state == 1 )
  {
    data_5__3 = v4->fields._data_5__3;
    v4->fields.__1__state = -3;
    if ( !data_5__3 )
      sub_1C2D6EC(this, method);
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
      sub_1C2D6EC(0, method);
    BattleSkillDropFunctionEntities = QuestPhaseEntity__GetBattleSkillDropFunctionEntities(_4__this, method);
    v9 = BattleSkillDropFunctionEntities;
    if ( !BattleSkillDropFunctionEntities )
      sub_1C2D6EC(0, v8);
    klass = BattleSkillDropFunctionEntities->klass;
    v11 = *(unsigned __int16 *)&BattleSkillDropFunctionEntities->klass->_2.rank;
    if ( *(_WORD *)&BattleSkillDropFunctionEntities->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_FunctionEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_FunctionEntity__TypeInfo )
      {
        --v11;
        p_offset += 4;
        if ( !v11 )
          goto LABEL_12;
      }
      v13 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_12:
      v13 = sub_1C7DCA8(
              BattleSkillDropFunctionEntities,
              System_Collections_Generic_IEnumerable_FunctionEntity__TypeInfo,
              0);
    }
    v20 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_FunctionEntity__o *, _QWORD))v13)(
            v9,
            *(_QWORD *)(v13 + 8));
    v40->fields.__7__wrap1 = (struct System_Collections_Generic_IEnumerator_FunctionEntity__o *)v20;
    sub_1C2D434((CGThumbnailListItem_o *)&v40->fields.__7__wrap1, v20, v21, v22);
    v40->fields.__1__state = -3;
    do
    {
LABEL_18:
      _7__wrap1 = v40->fields.__7__wrap1;
      if ( !_7__wrap1 )
        sub_1C2D6EC(BattleSkillDropInfoDict, v19);
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
            goto LABEL_23;
        }
        v27 = (__int64)&v24->vtable[*v26];
      }
      else
      {
LABEL_23:
        v27 = sub_1C7DCA8(v40->fields.__7__wrap1, System_Collections_IEnumerator_TypeInfo, 0);
      }
      if ( ((*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_FunctionEntity__o *, _QWORD))v27)(
              _7__wrap1,
              *(_QWORD *)(v27 + 8))
          & 1) == 0 )
      {
        QuestPhaseEntity__GetBattleSkillDropEffectIds_d__173____m__Finally1(v40, v28);
        v40->fields.__7__wrap1 = 0;
        sub_1C2D434((CGThumbnailListItem_o *)&v40->fields.__7__wrap1, 0, v38, v39);
        return 0;
      }
      v29 = v40->fields.__7__wrap1;
      if ( !v29 )
        sub_1C2D6EC(v40, v28);
      v30 = v29->klass;
      v31 = *(unsigned __int16 *)&v29->klass->_2.rank;
      if ( *(_WORD *)&v29->klass->_2.rank )
      {
        v32 = &v30->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerator_FunctionEntity__c **)v32 - 1) != System_Collections_Generic_IEnumerator_FunctionEntity__TypeInfo )
        {
          --v31;
          v32 += 4;
          if ( !v31 )
            goto LABEL_31;
        }
        v33 = (__int64)&v30->vtable[*v32];
      }
      else
      {
LABEL_31:
        v33 = sub_1C7DCA8(v40->fields.__7__wrap1, System_Collections_Generic_IEnumerator_FunctionEntity__TypeInfo, 0);
      }
      v34 = (FunctionEntity_o *)(*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_FunctionEntity__o *, _QWORD))v33)(
                                  v29,
                                  *(_QWORD *)(v33 + 8));
      if ( !v34 )
        sub_1C2D6EC(0, v35);
      BattleSkillDropInfoDict = FunctionEntity__TryGetBattleSkillDropInfoDict(v34, &v40->fields._data_5__3, 0);
    }
    while ( !BattleSkillDropInfoDict );
    v36 = v40->fields._data_5__3;
    if ( !v36 )
      sub_1C2D6EC(BattleSkillDropInfoDict, v19);
    appearEffectId = v36->fields.appearEffectId;
    result = 1;
    v40->fields.__1__state = 1;
    v40->fields.__2__current = appearEffectId;
  }
  return result;
}


System_Collections_Generic_IEnumerator_int__o *QuestPhaseEntity__GetBattleSkillDropEffectIds_d__173__System_Collections_Generic_IEnumerable_System_Int32__GetEnumerator(
        QuestPhaseEntity__GetBattleSkillDropEffectIds_d__173_o *this,
        const MethodInfo *method)
{
  int32_t l__initialThreadId; // w20
  __int64 v4; // x20
  struct QuestPhaseEntity_o *_4__this; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C279C0 & 1) == 0 )
  {
    sub_1C2D490(&QuestPhaseEntity__GetBattleSkillDropEffectIds_d__173_TypeInfo);
    byte_4C279C0 = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0)) )
  {
    this->fields.__1__state = 0;
  }
  else
  {
    v4 = sub_1C2D6DC(QuestPhaseEntity__GetBattleSkillDropEffectIds_d__173_TypeInfo);
    System_Object___ctor((Il2CppObject *)v4, 0);
    *(_DWORD *)(v4 + 16) = 0;
    *(_DWORD *)(v4 + 24) = System_Environment__get_CurrentManagedThreadId(0);
    _4__this = this->fields.__4__this;
    *(_QWORD *)(v4 + 32) = _4__this;
    sub_1C2D434((CGThumbnailListItem_o *)(v4 + 32), (int32_t)_4__this, v6, v7);
    return (System_Collections_Generic_IEnumerator_int__o *)v4;
  }
  return (System_Collections_Generic_IEnumerator_int__o *)this;
}


int32_t QuestPhaseEntity__GetBattleSkillDropEffectIds_d__173__System_Collections_Generic_IEnumerator_System_Int32__get_Current(
        QuestPhaseEntity__GetBattleSkillDropEffectIds_d__173_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn QuestPhaseEntity__GetBattleSkillDropEffectIds_d__173__System_Collections_IEnumerator_Reset(
        QuestPhaseEntity__GetBattleSkillDropEffectIds_d__173_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C2D4A4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C2D6DC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C2D4A4(&Method_QuestPhaseEntity__GetBattleSkillDropEffectIds_d__173_System_Collections_IEnumerator_Reset__);
  sub_1C2D5B8(v3, v4);
}


Il2CppObject *QuestPhaseEntity__GetBattleSkillDropEffectIds_d__173__System_Collections_IEnumerator_get_Current(
        QuestPhaseEntity__GetBattleSkillDropEffectIds_d__173_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  int32_t _2__current; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C279BF & 1) == 0 )
  {
    sub_1C2D490(&int_TypeInfo);
    byte_4C279BF = 1;
  }
  _2__current = this->fields.__2__current;
  return (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &_2__current, v2, v3, v4);
}


void QuestPhaseEntity__GetBattleSkillDropEffectIds_d__173__System_IDisposable_Dispose(
        QuestPhaseEntity__GetBattleSkillDropEffectIds_d__173_o *this,
        const MethodInfo *method)
{
  unsigned int v2; // w8

  v2 = this->fields.__1__state + 3;
  if ( v2 <= 5 && ((1 << v2) & 0x31) != 0 )
    QuestPhaseEntity__GetBattleSkillDropEffectIds_d__173____m__Finally1(this, method);
}


void QuestPhaseEntity__GetBattleSkillDropEffectIds_d__173____m__Finally1(
        QuestPhaseEntity__GetBattleSkillDropEffectIds_d__173_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_IEnumerator_FunctionEntity__o *_7__wrap1; // x19
  System_Collections_Generic_IEnumerator_FunctionEntity__c *klass; // x8
  __int64 v5; // x9
  int32_t *p_offset; // x10
  __int64 v7; // x0

  if ( (byte_4C279BE & 1) == 0 )
  {
    sub_1C2D490(&System_IDisposable_TypeInfo);
    byte_4C279BE = 1;
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
      v7 = sub_1C7DCA8(_7__wrap1, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(struct System_Collections_Generic_IEnumerator_FunctionEntity__o *, _QWORD))v7)(
      _7__wrap1,
      *(_QWORD *)(v7 + 8));
  }
}


void QuestPhaseEntity__GetBattleSkillDropFunctionEntities_d__172___ctor(
        QuestPhaseEntity__GetBattleSkillDropFunctionEntities_d__172_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
  this->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0);
}


bool QuestPhaseEntity__GetBattleSkillDropFunctionEntities_d__172__MoveNext(
        QuestPhaseEntity__GetBattleSkillDropFunctionEntities_d__172_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  long double inited; // q0
  int32_t _1__state; // w8
  QuestPhaseEntity_o *_4__this; // x20
  _QWORD *v8; // x21
  __int64 v9; // x8
  __int64 v10; // x0
  __int64 p__7__wrap1; // x0
  struct System_Int32_array *ScriptIntArrayParam; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w8
  int32_t v16; // w20
  struct System_Int32_array *_7__wrap1; // x9
  int32_t max_length; // w10
  bool result; // w0
  int32_t v20; // w1
  struct FunctionEntity_o **p__2__current; // x19
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C279C1 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Array_Empty_int___);
    sub_1C2D490(&Method_DataManager_GetMaster_FunctionMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
    sub_1C2D490(&StringLiteral_17078/*"battleSkillDropFuncIds"*/);
    byte_4C279C1 = 1;
  }
  entity = 0;
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
  v8 = Method_System_Array_Empty_int___;
  v9 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v9 )
  {
    sub_1C7DC00(Method_System_Array_Empty_int___);
    v9 = v8[7];
  }
  v10 = *(_QWORD *)(v9 + 16);
  if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
    v10 = sub_1C7DBA4(inited);
  if ( !*(_DWORD *)(v10 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v10);
  p__7__wrap1 = *(_QWORD *)(v8[7] + 16LL);
  if ( (*(_BYTE *)(p__7__wrap1 + 309) & 1) == 0 )
    p__7__wrap1 = sub_1C7DBA4(inited);
  if ( !_4__this )
LABEL_30:
    sub_1C2D6EC(p__7__wrap1, method);
  ScriptIntArrayParam = QuestPhaseEntity__getScriptIntArrayParam(
                          _4__this,
                          (System_String_o *)StringLiteral_17078/*"battleSkillDropFuncIds"*/,
                          **(System_Int32_array ***)(p__7__wrap1 + 184),
                          v3);
  this->fields.__7__wrap1 = ScriptIntArrayParam;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.__7__wrap1, (int32_t)ScriptIntArrayParam, v13, v14);
  v15 = 0;
  for ( this->fields.__7__wrap2 = 0; ; this->fields.__7__wrap2 = v15 )
  {
    p__7__wrap1 = (__int64)&this->fields.__7__wrap1;
    _7__wrap1 = this->fields.__7__wrap1;
    if ( !_7__wrap1 )
      goto LABEL_30;
    max_length = _7__wrap1->max_length;
    if ( v15 >= max_length )
    {
      *(_QWORD *)p__7__wrap1 = 0;
      sub_1C2D434((CGThumbnailListItem_o *)p__7__wrap1, 0, v2, v3);
      return 0;
    }
    if ( v15 >= (unsigned int)max_length )
      sub_1C2D6F4(p__7__wrap1, method, v2);
    v16 = _7__wrap1->m_Items[v15];
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    p__7__wrap1 = (__int64)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_FunctionMaster___);
    if ( !p__7__wrap1 )
      goto LABEL_30;
    p__7__wrap1 = DataMasterBase_object__object__int___TryGetEntity(
                    (DataMasterBase_TMaster__TEntity__PKType__o *)p__7__wrap1,
                    &entity,
                    v16,
                    (const MethodInfo_3387DE4 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
    if ( (p__7__wrap1 & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_30;
      if ( FuncList__Check(149, (int32_t)entity[1].monitor, 0) )
        break;
    }
LABEL_23:
    v15 = this->fields.__7__wrap2 + 1;
  }
  v20 = (int)entity;
  this->fields.__2__current = (struct FunctionEntity_o *)entity;
  p__2__current = &this->fields.__2__current;
  sub_1C2D434((CGThumbnailListItem_o *)p__2__current, v20, v2, v3);
  result = 1;
  *((_DWORD *)p__2__current - 2) = 1;
  return result;
}


System_Collections_Generic_IEnumerator_FunctionEntity__o *QuestPhaseEntity__GetBattleSkillDropFunctionEntities_d__172__System_Collections_Generic_IEnumerable_FunctionEntity__GetEnumerator(
        QuestPhaseEntity__GetBattleSkillDropFunctionEntities_d__172_o *this,
        const MethodInfo *method)
{
  int32_t l__initialThreadId; // w20
  __int64 v4; // x20
  struct QuestPhaseEntity_o *_4__this; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C279C2 & 1) == 0 )
  {
    sub_1C2D490(&QuestPhaseEntity__GetBattleSkillDropFunctionEntities_d__172_TypeInfo);
    byte_4C279C2 = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0)) )
  {
    this->fields.__1__state = 0;
  }
  else
  {
    v4 = sub_1C2D6DC(QuestPhaseEntity__GetBattleSkillDropFunctionEntities_d__172_TypeInfo);
    System_Object___ctor((Il2CppObject *)v4, 0);
    *(_DWORD *)(v4 + 16) = 0;
    *(_DWORD *)(v4 + 32) = System_Environment__get_CurrentManagedThreadId(0);
    _4__this = this->fields.__4__this;
    *(_QWORD *)(v4 + 40) = _4__this;
    sub_1C2D434((CGThumbnailListItem_o *)(v4 + 40), (int32_t)_4__this, v6, v7);
    return (System_Collections_Generic_IEnumerator_FunctionEntity__o *)v4;
  }
  return (System_Collections_Generic_IEnumerator_FunctionEntity__o *)this;
}


FunctionEntity_o *QuestPhaseEntity__GetBattleSkillDropFunctionEntities_d__172__System_Collections_Generic_IEnumerator_FunctionEntity__get_Current(
        QuestPhaseEntity__GetBattleSkillDropFunctionEntities_d__172_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn QuestPhaseEntity__GetBattleSkillDropFunctionEntities_d__172__System_Collections_IEnumerator_Reset(
        QuestPhaseEntity__GetBattleSkillDropFunctionEntities_d__172_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C2D4A4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C2D6DC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C2D4A4(&Method_QuestPhaseEntity__GetBattleSkillDropFunctionEntities_d__172_System_Collections_IEnumerator_Reset__);
  sub_1C2D5B8(v3, v4);
}


Il2CppObject *QuestPhaseEntity__GetBattleSkillDropFunctionEntities_d__172__System_Collections_IEnumerator_get_Current(
        QuestPhaseEntity__GetBattleSkillDropFunctionEntities_d__172_o *this,
        const MethodInfo *method)
{
  return (Il2CppObject *)this->fields.__2__current;
}


void QuestPhaseEntity__GetBattleSkillDropFunctionEntities_d__172__System_IDisposable_Dispose(
        QuestPhaseEntity__GetBattleSkillDropFunctionEntities_d__172_o *this,
        const MethodInfo *method)
{
  ;
}


void QuestPhaseEntity___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C279BA & 1) == 0 )
  {
    sub_1C2D490(&QuestPhaseEntity___c_TypeInfo);
    byte_4C279BA = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(QuestPhaseEntity___c_TypeInfo);
  System_Object___ctor(v1, 0);
  QuestPhaseEntity___c_TypeInfo->static_fields->__9 = (struct QuestPhaseEntity___c_o *)v1;
  sub_1C2D434((CGThumbnailListItem_o *)QuestPhaseEntity___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void QuestPhaseEntity___c___ctor(QuestPhaseEntity___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t QuestPhaseEntity___c___SetNpcAiInfo_b__116_0(
        QuestPhaseEntity___c_o *this,
        Il2CppObject *x,
        const MethodInfo *method)
{
  System_String_o *v4; // x0

  if ( (byte_4C279BC & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C279BC = 1;
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


int32_t QuestPhaseEntity___c___TryGetOverwritePlayerSequenceSelectTypeByGender_b__167_1(
        QuestPhaseEntity___c_o *this,
        BattleTreasureDeviceSequenceSelectType_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C2D6EC(this, 0);
  return x->fields.priority;
}


int32_t QuestPhaseEntity___c___getScriptIntArrayParam_b__33_0(
        QuestPhaseEntity___c_o *this,
        Il2CppObject *x,
        const MethodInfo *method)
{
  System_String_o *v4; // x0

  if ( (byte_4C279BB & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C279BB = 1;
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


System_String_o *QuestPhaseEntity___c___getScriptStringArrayParam_b__34_0(
        QuestPhaseEntity___c_o *this,
        Il2CppObject *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C2D6EC(this, 0);
  return (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))x->klass->vtable[3].methodPtr)(
                              x,
                              x->klass->vtable[3].method);
}


void QuestPhaseEntity___c__DisplayClass115_0___ctor(
        QuestPhaseEntity___c__DisplayClass115_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestPhaseEntity___c__DisplayClass115_0___GetNpcAiInfo_b__0(
        QuestPhaseEntity___c__DisplayClass115_0_o *this,
        Il2CppObject *val,
        const MethodInfo *method)
{
  QuestPhaseEntity__SetNpcAiInfo(
    (System_Collections_Generic_IDictionary_int__int____o *)this->fields.dicNpcAiId,
    val,
    method);
}


void QuestPhaseEntity___c__DisplayClass167_0___ctor(
        QuestPhaseEntity___c__DisplayClass167_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestPhaseEntity___c__DisplayClass167_0___TryGetOverwritePlayerSequenceSelectTypeByGender_b__0(
        QuestPhaseEntity___c__DisplayClass167_0_o *this,
        BattleTreasureDeviceSequenceSelectType_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C2D6EC(this, 0);
  return x->fields.svtId == this->fields.servantId;
}