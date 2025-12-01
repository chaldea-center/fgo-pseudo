void QuestPhaseEntity___ctor(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CC7A54 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataEntityBase_string___ctor__);
    byte_4CC7A54 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3406A14 *)Method_DataEntityBase_string___ctor__);
}


void QuestPhaseEntity___ctor_42775844(QuestPhaseEntity_o *this, QuestPhaseEntity_o *cSrc, const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  struct System_Int32_array *v13; // x1
  System_Array_o *classIds; // x0
  Il2CppObject *v15; // x0
  Il2CppObject *v16; // x21
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  System_Array_o *individuality; // x0
  Il2CppObject *v24; // x0
  struct System_Int32_array *v25; // x1
  struct System_Int32_array **p_individuality; // x19

  if ( (byte_4CC7A55 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataEntityBase_string___ctor__);
    sub_1C713B0(&int___TypeInfo);
    byte_4CC7A55 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3406A14 *)Method_DataEntityBase_string___ctor__);
  if ( !cSrc )
    sub_1C71608(v5, v6);
  v13 = 0;
  *(_QWORD *)&this->fields.questId = *(_QWORD *)&cSrc->fields.questId;
  this->fields.isNpcOnly = cSrc->fields.isNpcOnly;
  *(_OWORD *)&this->fields.battleBgId = *(_OWORD *)&cSrc->fields.battleBgId;
  classIds = (System_Array_o *)cSrc->fields.classIds;
  if ( classIds )
  {
    v15 = System_Array__Clone(classIds, 0);
    if ( v15 )
    {
      v16 = v15;
      v13 = (struct System_Int32_array *)sub_1C714EC(v15, int___TypeInfo);
      if ( !v13 )
        goto LABEL_12;
    }
    else
    {
      v13 = 0;
    }
  }
  this->fields.classIds = v13;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.classIds, (int32_t)v13, v7, v8, v9, v10, v11, v12);
  individuality = (System_Array_o *)cSrc->fields.individuality;
  if ( !individuality )
    goto LABEL_13;
  v24 = System_Array__Clone(individuality, 0);
  if ( !v24 )
    goto LABEL_13;
  v16 = v24;
  v25 = (struct System_Int32_array *)sub_1C714EC(v24, int___TypeInfo);
  if ( !v25 )
  {
LABEL_12:
    sub_1C719A4(v16);
LABEL_13:
    v25 = 0;
  }
  this->fields.individuality = v25;
  p_individuality = &this->fields.individuality;
  sub_1C71354((GrandQuestFolderBoardItem_o *)p_individuality, (int32_t)v25, v17, v18, v19, v20, v21, v22);
  *((_DWORD *)p_individuality + 2) = cSrc->fields.giftId;
}


System_String_o *QuestPhaseEntity__CreatePK(int32_t questId, int32_t phase, const MethodInfo *method)
{
  if ( (byte_4CC7A53 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4CC7A53 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           questId,
           phase,
           (const MethodInfo_3149294 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *QuestPhaseEntity__CreatePrimaryKey(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return QuestPhaseEntity__CreatePK(this->fields.questId, this->fields.phase, v2);
}


float QuestPhaseEntity__EnemyExBattleUiPositionY(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CC7AF4 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_19088/*"enemyExBattleUiPositionY"*/);
    byte_4CC7AF4 = 1;
  }
  return (float)EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_19088/*"enemyExBattleUiPositionY"*/, 0, 0);
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

  if ( (byte_4CC7A64 & 1) == 0 )
  {
    sub_1C713B0(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1C713B0(&StringLiteral_16678/*"addEquipSkills"*/);
    byte_4CC7A64 = 1;
  }
  result = (System_Collections_Generic_Dictionary_string__object__o *)QuestPhaseEntity__getScriptObj(
                                                                        this,
                                                                        (System_String_o *)StringLiteral_16678/*"addEquipSkills"*/,
                                                                        v2);
  if ( result )
  {
    naturalAligment = System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.naturalAligment;
    if ( result->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (System_Collections_Generic_Dictionary_string__object__c *)result->klass->_2.typeHierarchy[naturalAligment - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
    {
      sub_1C719A4(result);
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

  if ( (byte_4CC7AD2 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_16696/*"addUniqueCameraIds"*/);
    byte_4CC7AD2 = 1;
  }
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_16696/*"addUniqueCameraIds"*/, defVal, v3);
}


int32_t QuestPhaseEntity__GetAdvantageClassId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CC7A93 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_16978/*"auto_sel_support_type"*/);
    byte_4CC7A93 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_16978/*"auto_sel_support_type"*/, -1, v2);
}


System_Int32_array *QuestPhaseEntity__GetAssistIdArray(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  System_Int32_array *v3; // x2
  const MethodInfo *v4; // x3

  if ( (byte_4CC7AA2 & 1) == 0 )
  {
    sub_1C713B0(&int___TypeInfo);
    sub_1C713B0(&StringLiteral_16938/*"assistIds"*/);
    byte_4CC7AA2 = 1;
  }
  v3 = (System_Int32_array *)sub_1C71458(int___TypeInfo, 0);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_16938/*"assistIds"*/, v3, v4);
}


System_Int32_array *QuestPhaseEntity__GetAssistWeightArray(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  System_Int32_array *v3; // x2
  const MethodInfo *v4; // x3

  if ( (byte_4CC7AA3 & 1) == 0 )
  {
    sub_1C713B0(&int___TypeInfo);
    sub_1C713B0(&StringLiteral_16937/*"assistIdWeight"*/);
    byte_4CC7AA3 = 1;
  }
  v3 = (System_Int32_array *)sub_1C71458(int___TypeInfo, 0);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_16937/*"assistIdWeight"*/, v3, v4);
}


System_Int32_array *QuestPhaseEntity__GetAssumedEffectId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CC7AB5 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_16942/*"assumedEffectId"*/);
    byte_4CC7AB5 = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_16942/*"assumedEffectId"*/, 0);
}


System_Int32_array *QuestPhaseEntity__GetBattleEffectMovieIds(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CC7ADA & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_3112/*"BattleEffectMovieIds"*/);
    byte_4CC7ADA = 1;
  }
  return EntityScriptUtil__GetIntArray(this->fields.script, (System_String_o *)StringLiteral_3112/*"BattleEffectMovieIds"*/, 0, 0);
}


System_String_o *QuestPhaseEntity__GetBattleFinishMovie(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CC7A7A & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_17093/*"battleFinishMovie"*/);
    byte_4CC7A7A = 1;
  }
  return QuestPhaseEntity__getScriptStr(this, (System_String_o *)StringLiteral_17093/*"battleFinishMovie"*/, 0, v2);
}


int32_t QuestPhaseEntity__GetBattleFinishWaitTime(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CC7ABE & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_17094/*"battleFinishWaitTime"*/);
    byte_4CC7ABE = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_17094/*"battleFinishWaitTime"*/, 0, v2);
}


int32_t QuestPhaseEntity__GetBattleItemObjectId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CC7ACF & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_17098/*"battleItemObjectId"*/);
    byte_4CC7ACF = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_17098/*"battleItemObjectId"*/, 0, v2);
}


System_Collections_Generic_IEnumerable_int__o *QuestPhaseEntity__GetBattleSkillDropEffectIds(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4CC7AE6 & 1) == 0 )
  {
    sub_1C713B0(&QuestPhaseEntity__GetBattleSkillDropEffectIds_d__173_TypeInfo);
    byte_4CC7AE6 = 1;
  }
  v3 = sub_1C715FC(QuestPhaseEntity__GetBattleSkillDropEffectIds_d__173_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = -2;
  *(_DWORD *)(v3 + 24) = System_Environment__get_CurrentManagedThreadId(0);
  *(_QWORD *)(v3 + 32) = this;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_Generic_IEnumerable_int__o *)v3;
}


System_Collections_Generic_IEnumerable_FunctionEntity__o *QuestPhaseEntity__GetBattleSkillDropFunctionEntities(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4CC7AE5 & 1) == 0 )
  {
    sub_1C713B0(&QuestPhaseEntity__GetBattleSkillDropFunctionEntities_d__172_TypeInfo);
    byte_4CC7AE5 = 1;
  }
  v3 = sub_1C715FC(QuestPhaseEntity__GetBattleSkillDropFunctionEntities_d__172_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = -2;
  *(_DWORD *)(v3 + 32) = System_Environment__get_CurrentManagedThreadId(0);
  *(_QWORD *)(v3 + 40) = this;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v3 + 40), (int32_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_Generic_IEnumerable_FunctionEntity__o *)v3;
}


int32_t QuestPhaseEntity__GetBeforeBattleSkillActor(QuestPhaseEntity_o *this, int32_t defVal, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4CC7ABF & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_17145/*"beforeBattleSkillActor"*/);
    byte_4CC7ABF = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_17145/*"beforeBattleSkillActor"*/, defVal, v3);
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

  if ( (byte_4CC7A59 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Array_Empty_int___);
    sub_1C713B0(&Method_DataManager_GetMaster_BattleBgMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    byte_4CC7A59 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_BattleBgMaster___);
  PriorityBattleBgId = QuestPhaseEntity__GetPriorityBattleBgId(this, v4);
  PriorityBattleBgType = QuestPhaseEntity__GetPriorityBattleBgType(this, v6);
  if ( !Master_object )
    sub_1C71608(PriorityBattleBgType, v8);
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
      sub_1C474A0(Method_System_Array_Empty_int___);
      v12 = v11[7];
    }
    v13 = *(_QWORD *)(v12 + 16);
    if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
      v13 = sub_1C47444(inited);
    if ( !*(_DWORD *)(v13 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v13);
    v14 = *(_QWORD *)(v11[7] + 16LL);
    if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
      v14 = sub_1C47444(inited);
    return **(System_Int32_array ***)(v14 + 184);
  }
  return result;
}


System_Int32_array *QuestPhaseEntity__GetClearGiftItemListDisplay(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  System_Int32_array *v3; // x2
  const MethodInfo *v4; // x3

  if ( (byte_4CC7AB2 & 1) == 0 )
  {
    sub_1C713B0(&int___TypeInfo);
    sub_1C713B0(&StringLiteral_18030/*"clearGiftItemListDisplay"*/);
    byte_4CC7AB2 = 1;
  }
  v3 = (System_Int32_array *)sub_1C71458(int___TypeInfo, 0);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_18030/*"clearGiftItemListDisplay"*/, v3, v4);
}


System_Int32_array *QuestPhaseEntity__GetCondHavingIds(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  System_Int32_array *v3; // x2
  const MethodInfo *v4; // x3

  if ( (byte_4CC7A9E & 1) == 0 )
  {
    sub_1C713B0(&int___TypeInfo);
    sub_1C713B0(&StringLiteral_18235/*"condHaving"*/);
    byte_4CC7A9E = 1;
  }
  v3 = (System_Int32_array *)sub_1C71458(int___TypeInfo, 0);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_18235/*"condHaving"*/, v3, v4);
}


int32_t QuestPhaseEntity__GetCondQuestClearable(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CC7AD6 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_18240/*"condQuestClearable"*/);
    byte_4CC7AD6 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_18240/*"condQuestClearable"*/, 0, v2);
}


int32_t QuestPhaseEntity__GetCorrectionIconId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CC7A92 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_18311/*"correctionIconId"*/);
    byte_4CC7A92 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_18311/*"correctionIconId"*/, -1, v2);
}


int32_t QuestPhaseEntity__GetDefenceTargetContinueRecoverRate(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CC7ACC & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_19489/*"fieldHpContinueRecoverRate"*/);
    byte_4CC7ACC = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19489/*"fieldHpContinueRecoverRate"*/, 0, v2);
}


System_String_o *QuestPhaseEntity__GetEffectOnMap(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CC7ADF & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_10661/*"PlayGetEffectOnMap"*/);
    byte_4CC7ADF = 1;
  }
  return QuestPhaseEntity__getScriptStr(this, (System_String_o *)StringLiteral_10661/*"PlayGetEffectOnMap"*/, 0, v2);
}


System_Int32_array *QuestPhaseEntity__GetEnemyInfoDispNpcSvtIdList(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  System_Int32_array *v3; // x2
  const MethodInfo *v4; // x3

  if ( (byte_4CC7AB0 & 1) == 0 )
  {
    sub_1C713B0(&int___TypeInfo);
    sub_1C713B0(&StringLiteral_22653/*"overwriteEnemyInfos"*/);
    byte_4CC7AB0 = 1;
  }
  v3 = (System_Int32_array *)sub_1C71458(int___TypeInfo, 0);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_22653/*"overwriteEnemyInfos"*/, v3, v4);
}


System_String_array *QuestPhaseEntity__GetEnemyInfoOverwriteNpcSvtNameList(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  System_String_array *v3; // x2
  const MethodInfo *v4; // x3

  if ( (byte_4CC7AB1 & 1) == 0 )
  {
    sub_1C713B0(&string___TypeInfo);
    sub_1C713B0(&StringLiteral_22652/*"overwriteEnemyInfoNames"*/);
    byte_4CC7AB1 = 1;
  }
  v3 = (System_String_array *)sub_1C71458(string___TypeInfo, 0);
  return QuestPhaseEntity__getScriptStringArrayParam(this, (System_String_o *)StringLiteral_22652/*"overwriteEnemyInfoNames"*/, v3, v4);
}


int32_t QuestPhaseEntity__GetEquipAddId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CC7AAF & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_19119/*"equipAddId"*/);
    byte_4CC7AAF = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19119/*"equipAddId"*/, 0, v2);
}


int32_t QuestPhaseEntity__GetFinishEffectId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CC7A8F & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_19523/*"finishEffectId"*/);
    byte_4CC7A8F = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19523/*"finishEffectId"*/, -1, v2);
}


int32_t QuestPhaseEntity__GetFormationBgmId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CC7AB6 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_19640/*"formationBgmId"*/);
    byte_4CC7AB6 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19640/*"formationBgmId"*/, -1, v2);
}


float QuestPhaseEntity__GetFormationSubBgmFadeInTime(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CC7AB8 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_19641/*"formationSubBgmFadeInTime"*/);
    byte_4CC7AB8 = 1;
  }
  return (float)QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19641/*"formationSubBgmFadeInTime"*/, 0, v2) / 1000.0;
}


int32_t QuestPhaseEntity__GetFormationSubBgmId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CC7AB7 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_19642/*"formationSubBgmId"*/);
    byte_4CC7AB7 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19642/*"formationSubBgmId"*/, -1, v2);
}


System_Int32_array *QuestPhaseEntity__GetGimmickAnimTypeArray(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CC7A8D & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_19942/*"gimmickAnimType"*/);
    byte_4CC7A8D = 1;
  }
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_19942/*"gimmickAnimType"*/, 0, v2);
}


int32_t QuestPhaseEntity__GetGimmickId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CC7A86 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_19943/*"gimmickId"*/);
    byte_4CC7A86 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19943/*"gimmickId"*/, -1, v2);
}


System_Object_array *QuestPhaseEntity__GetGimmickResultVoiceArray(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CC7A8C & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_23197/*"resultVoice"*/);
    byte_4CC7A8C = 1;
  }
  return QuestPhaseEntity__getScriptObjArrayParam(this, (System_String_o *)StringLiteral_23197/*"resultVoice"*/, 0, v2);
}


System_Int32_array *QuestPhaseEntity__GetGimmickSkillIdArray(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  System_Int32_array *v3; // x2
  const MethodInfo *v4; // x3

  if ( (byte_4CC7A89 & 1) == 0 )
  {
    sub_1C713B0(&int___TypeInfo);
    sub_1C713B0(&StringLiteral_23111/*"reelSkill"*/);
    byte_4CC7A89 = 1;
  }
  v3 = (System_Int32_array *)sub_1C71458(int___TypeInfo, 0);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_23111/*"reelSkill"*/, v3, v4);
}


System_Int32_array *QuestPhaseEntity__GetGimmickSkillRateArray(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  System_Int32_array *v3; // x2
  const MethodInfo *v4; // x3

  if ( (byte_4CC7A8A & 1) == 0 )
  {
    sub_1C713B0(&int___TypeInfo);
    sub_1C713B0(&StringLiteral_23110/*"reelRate"*/);
    byte_4CC7A8A = 1;
  }
  v3 = (System_Int32_array *)sub_1C71458(int___TypeInfo, 0);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_23110/*"reelRate"*/, v3, v4);
}


System_String_array *QuestPhaseEntity__GetGimmickStartVoiceArray(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CC7A8B & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_23784/*"startVoice"*/);
    byte_4CC7A8B = 1;
  }
  return QuestPhaseEntity__getScriptStringArrayParam(this, (System_String_o *)StringLiteral_23784/*"startVoice"*/, 0, v2);
}


int32_t QuestPhaseEntity__GetGimmickSvtId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CC7A87 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_19944/*"gimmickSvtId"*/);
    byte_4CC7A87 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19944/*"gimmickSvtId"*/, -1, v2);
}


int32_t QuestPhaseEntity__GetIconItemNumberDispType(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CC7AD1 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_20200/*"iconItemNumberDispType"*/);
    byte_4CC7AD1 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20200/*"iconItemNumberDispType"*/, 0, v2);
}


float QuestPhaseEntity__GetIncomingCallDispTime(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CC7AC2 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_20828/*"incomingCallDispTime"*/);
    byte_4CC7AC2 = 1;
  }
  return (float)QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20828/*"incomingCallDispTime"*/, 500, v2) / 1000.0;
}


System_String_o *QuestPhaseEntity__GetIncomingCallMessage(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CC7AC1 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_20829/*"incomingCallMessage"*/);
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC7AC1 = 1;
  }
  return QuestPhaseEntity__getScriptStr(
           this,
           (System_String_o *)StringLiteral_20829/*"incomingCallMessage"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


System_String_o *QuestPhaseEntity__GetIncomingCallTitle(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CC7AC0 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_20830/*"incomingCallTitle"*/);
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC7AC0 = 1;
  }
  return QuestPhaseEntity__getScriptStr(
           this,
           (System_String_o *)StringLiteral_20830/*"incomingCallTitle"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


int32_t QuestPhaseEntity__GetInitEventDeckNo(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CC7AE9 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_20869/*"initEventDeckNo"*/);
    byte_4CC7AE9 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_20869/*"initEventDeckNo"*/, 0, 0);
}


System_String_o *QuestPhaseEntity__GetMapModelEntryAnimationName(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CC7ABC & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_1393/*"3dMapEntryAnimName"*/);
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC7ABC = 1;
  }
  return QuestPhaseEntity__getScriptStr(
           this,
           (System_String_o *)StringLiteral_1393/*"3dMapEntryAnimName"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


int32_t QuestPhaseEntity__GetMasterSkillDelay(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CC7A98 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_21563/*"masterSkillDelay"*/);
    byte_4CC7A98 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21563/*"masterSkillDelay"*/, 0, v2);
}


System_String_o *QuestPhaseEntity__GetMasterSkillDelayInfo(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CC7A99 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_21564/*"masterSkillDelayInfo"*/);
    byte_4CC7A99 = 1;
  }
  return QuestPhaseEntity__getScriptStr(this, (System_String_o *)StringLiteral_21564/*"masterSkillDelayInfo"*/, 0, v2);
}


System_Int32_array *QuestPhaseEntity__GetMoveSceneInfo(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  System_Int32_array *v3; // x2
  const MethodInfo *v4; // x3

  if ( (byte_4CC7AC4 & 1) == 0 )
  {
    sub_1C713B0(&int___TypeInfo);
    sub_1C713B0(&StringLiteral_21764/*"moveSceneInfo"*/);
    byte_4CC7AC4 = 1;
  }
  v3 = (System_Int32_array *)sub_1C71458(int___TypeInfo, 0);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_21764/*"moveSceneInfo"*/, v3, v4);
}


int32_t QuestPhaseEntity__GetMovieAfterCrossFadeStartFrame(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CC7A81 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_21769/*"movieAfterCrossFadeStartFrame"*/);
    byte_4CC7A81 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21769/*"movieAfterCrossFadeStartFrame"*/, 0, v2);
}


int32_t QuestPhaseEntity__GetMovieAfterCrossFadeTime(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CC7A80 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_21770/*"movieAfterCrossFadeTime"*/);
    byte_4CC7A80 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21770/*"movieAfterCrossFadeTime"*/, 0, v2);
}


int32_t QuestPhaseEntity__GetNextSceneId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CC7A9C & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_22311/*"nextSceneId"*/);
    byte_4CC7A9C = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22311/*"nextSceneId"*/, 0, v2);
}


System_String_array *QuestPhaseEntity__GetNextSceneParam(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  System_String_array *result; // x0

  if ( (byte_4CC7A9D & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_22312/*"nextSceneParam"*/);
    byte_4CC7A9D = 1;
  }
  result = (System_String_array *)QuestPhaseEntity__getScriptStr(this, (System_String_o *)StringLiteral_22312/*"nextSceneParam"*/, 0, v2);
  if ( result )
    return System_String__Split((System_String_o *)result, 0x2Cu, 0, 0);
  return result;
}


int32_t QuestPhaseEntity__GetNotDispEquipSkillChargeTurn(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CC7AD0 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_22401/*"notDispEquipSkillChargeTurn"*/);
    byte_4CC7AD0 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22401/*"notDispEquipSkillChargeTurn"*/, 0, v2);
}


System_Int32_array *QuestPhaseEntity__GetNotHavingQuests(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  System_Int32_array *v3; // x2
  const MethodInfo *v4; // x3

  if ( (byte_4CC7A9F & 1) == 0 )
  {
    sub_1C713B0(&int___TypeInfo);
    sub_1C713B0(&StringLiteral_22406/*"notHavingQuest"*/);
    byte_4CC7A9F = 1;
  }
  v3 = (System_Int32_array *)sub_1C71458(int___TypeInfo, 0);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_22406/*"notHavingQuest"*/, v3, v4);
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
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  System_Collections_Generic_Dictionary_int__int____o **v13; // x20
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  Il2CppObject *v15; // x22
  __int64 naturalAligment; // x10
  const MethodInfo *v17; // x2
  System_Action_object__o *v19; // x19
  Il2CppObject *obj; // [xsp+0h] [xbp-40h] BYREF
  Il2CppObject *value; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4CC7AAD & 1) == 0 )
  {
    sub_1C713B0(&System_Action_object__TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
    sub_1C713B0(&System_Collections_Generic_Dictionary_int__int____TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_object__ForEach__);
    sub_1C713B0(&System_Collections_Generic_List_object__TypeInfo);
    sub_1C713B0(&Method_QuestPhaseEntity___c__DisplayClass115_0__GetNpcAiInfo_b__0__);
    sub_1C713B0(&QuestPhaseEntity___c__DisplayClass115_0_TypeInfo);
    sub_1C713B0(&StringLiteral_16743/*"aiMultiNpc"*/);
    sub_1C713B0(&StringLiteral_16744/*"aiNpc"*/);
    byte_4CC7AAD = 1;
  }
  obj = 0;
  value = 0;
  v3 = sub_1C715FC(QuestPhaseEntity___c__DisplayClass115_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  v4 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C715FC(System_Collections_Generic_Dictionary_int__int____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v4,
    (const MethodInfo_34618C0 *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  if ( !v3 )
    goto LABEL_14;
  *(_QWORD *)(v3 + 16) = v4;
  v13 = (System_Collections_Generic_Dictionary_int__int____o **)(v3 + 16);
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v3 + 16), (int32_t)v4, v7, v8, v9, v10, v11, v12);
  script = this->fields.script;
  if ( !script )
    return *v13;
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)script,
         (Il2CppObject *)StringLiteral_16743/*"aiMultiNpc"*/,
         &value,
         (const MethodInfo_34CCEEC *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    v15 = value;
    if ( value )
    {
      naturalAligment = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment;
      if ( value->klass->_2.naturalAligment >= (unsigned int)naturalAligment
        && (System_Collections_Generic_List_object__c *)value->klass->_2.typeHierarchy[naturalAligment - 1] == System_Collections_Generic_List_object__TypeInfo )
      {
        v19 = (System_Action_object__o *)sub_1C715FC(System_Action_object__TypeInfo);
        System_Action_object____ctor(
          v19,
          (Il2CppObject *)v3,
          Method_QuestPhaseEntity___c__DisplayClass115_0__GetNpcAiInfo_b__0__,
          0);
        System_Collections_Generic_List_object___ForEach(
          (System_Collections_Generic_List_object__o *)v15,
          (System_Action_T__o *)v19,
          (const MethodInfo_3811158 *)Method_System_Collections_Generic_List_object__ForEach__);
        return *v13;
      }
    }
  }
  v5 = this->fields.script;
  if ( !v5 )
LABEL_14:
    sub_1C71608(v5, v6);
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)v5,
         (Il2CppObject *)StringLiteral_16744/*"aiNpc"*/,
         &obj,
         (const MethodInfo_34CCEEC *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    QuestPhaseEntity__SetNpcAiInfo((System_Collections_Generic_IDictionary_int__int____o *)*v13, obj, v17);
  }
  return *v13;
}


System_String_o *QuestPhaseEntity__GetOpenedPeriodMessage(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CC7AE8 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_22579/*"openPeriodMessage"*/);
    byte_4CC7AE8 = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_22579/*"openPeriodMessage"*/, 0, 0);
}


int32_t QuestPhaseEntity__GetOpenedPeriodPrivilegeId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CC7AE7 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_22580/*"openPeriodPrivilegeId"*/);
    byte_4CC7AE7 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22580/*"openPeriodPrivilegeId"*/, 0, 0);
}


int32_t QuestPhaseEntity__GetOverWriteMasterImageId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CC7A7E & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_21553/*"masterImageId"*/);
    byte_4CC7A7E = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21553/*"masterImageId"*/, 0, v2);
}


int32_t QuestPhaseEntity__GetOverwriteCommandSpellContinue(
        QuestPhaseEntity_o *this,
        int32_t def,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4CC7AA7 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_22642/*"overwriteCommandSpellContinue"*/);
    byte_4CC7AA7 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22642/*"overwriteCommandSpellContinue"*/, def, v3);
}


int32_t QuestPhaseEntity__GetOverwriteCommandSpellIcon(
        QuestPhaseEntity_o *this,
        int32_t genderType,
        System_Int32_array *defVal,
        const MethodInfo *method)
{
  System_Int32_array *ScriptIntArrayParam; // x0

  if ( (byte_4CC7ABA & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_22643/*"overwriteCommandSpellIcons"*/);
    byte_4CC7ABA = 1;
  }
  ScriptIntArrayParam = QuestPhaseEntity__getScriptIntArrayParam(
                          this,
                          (System_String_o *)StringLiteral_22643/*"overwriteCommandSpellIcons"*/,
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
    sub_1C71610(ScriptIntArrayParam);
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

  if ( (byte_4CC7A63 & 1) == 0 )
  {
    sub_1C713B0(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1C713B0(&StringLiteral_22655/*"overwriteEquipSkills"*/);
    byte_4CC7A63 = 1;
  }
  result = (System_Collections_Generic_Dictionary_string__object__o *)QuestPhaseEntity__getScriptObj(
                                                                        this,
                                                                        (System_String_o *)StringLiteral_22655/*"overwriteEquipSkills"*/,
                                                                        v2);
  if ( result )
  {
    naturalAligment = System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.naturalAligment;
    if ( result->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (System_Collections_Generic_Dictionary_string__object__c *)result->klass->_2.typeHierarchy[naturalAligment - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
    {
      sub_1C719A4(result);
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
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  System_Int32_array *v24; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  const MethodInfo *v31; // x3
  System_Int32_array *v32; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  const MethodInfo *v39; // x3
  System_Int32_array *v40; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x4
  int32_t v44; // w5
  int64_t v45; // x6
  System_String_o *v46; // x7
  int32_t v48; // w2
  int32_t v49; // w3
  System_String_o *v50; // x4
  int32_t v51; // w5
  int64_t v52; // x6
  System_String_o *v53; // x7
  int32_t v54; // w2
  int32_t v55; // w3
  System_String_o *v56; // x4
  int32_t v57; // w5
  int64_t v58; // x6
  System_String_o *v59; // x7

  if ( (byte_4CC7A94 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_22668/*"overwriteLimitCountSvtIds"*/);
    sub_1C713B0(&StringLiteral_22669/*"overwriteLimitCounts"*/);
    sub_1C713B0(&StringLiteral_22666/*"overwriteLimitCountIconIds"*/);
    sub_1C713B0(&StringLiteral_22667/*"overwriteLimitCountRangeTypes"*/);
    byte_4CC7A94 = 1;
  }
  ScriptIntArrayParam = QuestPhaseEntity__getScriptIntArrayParam(
                          this,
                          (System_String_o *)StringLiteral_22668/*"overwriteLimitCountSvtIds"*/,
                          0,
                          (const MethodInfo *)overwriteLimitCountIconIds);
  *overwriteLimitCountSvtIds = ScriptIntArrayParam;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)overwriteLimitCountSvtIds,
    (int32_t)ScriptIntArrayParam,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  if ( *overwriteLimitCountSvtIds )
  {
    v24 = QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_22669/*"overwriteLimitCounts"*/, 0, v19);
    *overwriteLimitCounts = v24;
    sub_1C71354((GrandQuestFolderBoardItem_o *)overwriteLimitCounts, (int32_t)v24, v25, v26, v27, v28, v29, v30);
    v32 = QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_22666/*"overwriteLimitCountIconIds"*/, 0, v31);
    *overwriteLimitCountIconIds = v32;
    sub_1C71354((GrandQuestFolderBoardItem_o *)overwriteLimitCountIconIds, (int32_t)v32, v33, v34, v35, v36, v37, v38);
    v40 = QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_22667/*"overwriteLimitCountRangeTypes"*/, 0, v39);
    *overwriteLimitCountRangeTypes = v40;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)overwriteLimitCountRangeTypes,
      (int32_t)v40,
      v41,
      v42,
      v43,
      v44,
      v45,
      v46);
    return *overwriteLimitCounts != 0;
  }
  else
  {
    *overwriteLimitCounts = 0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)overwriteLimitCounts, 0, v18, (int32_t)v19, v20, v21, v22, v23);
    *overwriteLimitCountIconIds = 0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)overwriteLimitCountIconIds, 0, v48, v49, v50, v51, v52, v53);
    *overwriteLimitCountRangeTypes = 0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)overwriteLimitCountRangeTypes, 0, v54, v55, v56, v57, v58, v59);
    return 0;
  }
}


System_Int32_array *QuestPhaseEntity__GetOverwriteResultBgmCondIds(
        QuestPhaseEntity_o *this,
        System_Int32_array *defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4CC7A67 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_22680/*"overwriteResultBgmCondIds"*/);
    byte_4CC7A67 = 1;
  }
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_22680/*"overwriteResultBgmCondIds"*/, defVal, v3);
}


System_Int32_array *QuestPhaseEntity__GetOverwriteResultBgmIds(
        QuestPhaseEntity_o *this,
        System_Int32_array *defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4CC7A66 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_22681/*"overwriteResultBgmIds"*/);
    byte_4CC7A66 = 1;
  }
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_22681/*"overwriteResultBgmIds"*/, defVal, v3);
}


System_Int32_array *QuestPhaseEntity__GetPrioredIndividuality(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  System_Int32_array *result; // x0
  long double inited; // q0
  _QWORD *v5; // x19
  __int64 v6; // x8
  __int64 v7; // x0
  __int64 v8; // x0

  if ( (byte_4CC7A57 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Array_Empty_int___);
    byte_4CC7A57 = 1;
  }
  result = QuestPhaseEntity__GetPrioredIndividualityLocal(this, method);
  if ( !result )
  {
    v5 = Method_System_Array_Empty_int___;
    v6 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v6 )
    {
      sub_1C474A0(Method_System_Array_Empty_int___);
      v6 = v5[7];
    }
    v7 = *(_QWORD *)(v6 + 16);
    if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
      v7 = sub_1C47444(inited);
    if ( !*(_DWORD *)(v7 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v7);
    v8 = *(_QWORD *)(v5[7] + 16LL);
    if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
      v8 = sub_1C47444(inited);
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
  const MethodInfo *v7; // x3
  System_Int32_array *result; // x0
  const MethodInfo *v9; // x1
  QuestPhaseIndividualityEntity_o *v10; // x20
  const MethodInfo *v11; // x2
  QuestPhaseIndividualityEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4CC7A58 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMaster_QuestBehaviorMaster___);
    sub_1C713B0(&Method_DataManager_GetMaster_QuestPhaseIndividualityMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    byte_4CC7A58 = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_QuestBehaviorMaster___);
  UniqueId = (System_Int32_array *)QuestPhaseEntity__GetUniqueId(this, v4);
  if ( !Master_object )
    goto LABEL_15;
  result = QuestBehaviorMaster__GetBattleIndividuality((QuestBehaviorMaster_o *)Master_object, (int64_t)UniqueId, 0, v7);
  if ( !result )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    UniqueId = (System_Int32_array *)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_QuestPhaseIndividualityMaster___);
    if ( !UniqueId )
      goto LABEL_15;
    if ( QuestPhaseIndividualityMaster__TryGetEntity(
           (QuestPhaseIndividualityMaster_o *)UniqueId,
           &entity,
           this->fields.questId,
           this->fields.phase,
           0) )
    {
      v10 = entity;
      UniqueId = QuestPhaseEntity__GetBgIndividuality(this, v9);
      if ( v10 )
        return QuestPhaseIndividualityEntity__GetAddAndDelAfterIndividuality(v10, UniqueId, v11);
LABEL_15:
      sub_1C71608(UniqueId, v6);
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
  const MethodInfo *v7; // x3

  if ( (byte_4CC7A5A & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMaster_QuestBehaviorMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    byte_4CC7A5A = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_QuestBehaviorMaster___);
  UniqueId = QuestPhaseEntity__GetUniqueId(this, v4);
  if ( !Master_object )
    sub_1C71608(UniqueId, v6);
  return QuestBehaviorMaster__GetBattleBg((QuestBehaviorMaster_o *)Master_object, UniqueId, this->fields.battleBgId, v7);
}


int32_t QuestPhaseEntity__GetPriorityBattleBgType(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x20
  const MethodInfo *v4; // x1
  int64_t UniqueId; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3

  if ( (byte_4CC7A5B & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMaster_QuestBehaviorMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    byte_4CC7A5B = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_QuestBehaviorMaster___);
  UniqueId = QuestPhaseEntity__GetUniqueId(this, v4);
  if ( !Master_object )
    sub_1C71608(UniqueId, v6);
  return QuestBehaviorMaster__GetBattleBgType(
           (QuestBehaviorMaster_o *)Master_object,
           UniqueId,
           this->fields.battleBgType,
           v7);
}


int32_t QuestPhaseEntity__GetProgressAfterMovie(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CC7A7C & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_22905/*"progressAfterMovie"*/);
    byte_4CC7A7C = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22905/*"progressAfterMovie"*/, 0, v2);
}


int32_t QuestPhaseEntity__GetQuestPhaseSelectRoute(
        QuestPhaseEntity_o *this,
        bool isIncludeTempData,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t ScriptIntParam; // w0
  int32_t v7; // w20
  Il2CppObject *Instance; // x0
  __int64 v9; // x1

  if ( (byte_4CC7A71 & 1) == 0 )
  {
    sub_1C713B0(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_1C713B0(&StringLiteral_22789/*"phaseRouteSelect"*/);
    byte_4CC7A71 = 1;
  }
  ScriptIntParam = QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22789/*"phaseRouteSelect"*/, 0, v3);
  if ( ScriptIntParam < 1 )
    return 0;
  v7 = ScriptIntParam;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Instance )
    sub_1C71608(0, v9);
  if ( clsQuestCheck__CheckQuestPlayableNow((clsQuestCheck_o *)Instance, v7, isIncludeTempData, 0) )
    return v7;
  else
    return 0;
}


System_Int32_array *QuestPhaseEntity__GetReelIconIdArray(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  System_Int32_array *v3; // x2
  const MethodInfo *v4; // x3

  if ( (byte_4CC7A88 & 1) == 0 )
  {
    sub_1C713B0(&int___TypeInfo);
    sub_1C713B0(&StringLiteral_23109/*"reelIcon"*/);
    byte_4CC7A88 = 1;
  }
  v3 = (System_Int32_array *)sub_1C71458(int___TypeInfo, 0);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_23109/*"reelIcon"*/, v3, v4);
}


int32_t QuestPhaseEntity__GetReferToQuestPhase(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CC7AD7 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_23115/*"referToQuestPhase"*/);
    byte_4CC7AD7 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_23115/*"referToQuestPhase"*/, 0, v2);
}


System_String_o *QuestPhaseEntity__GetRenoCompletionDialogText(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CC7AF2 & 1) == 0 )
  {
    sub_1C713B0(&string_TypeInfo);
    sub_1C713B0(&StringLiteral_11336/*"RenoCompletionDialogText"*/);
    byte_4CC7AF2 = 1;
  }
  return EntityScriptUtil__GetStringValue(
           this->fields.script,
           (System_String_o *)StringLiteral_11336/*"RenoCompletionDialogText"*/,
           string_TypeInfo->static_fields->Empty,
           0);
}


System_String_o *QuestPhaseEntity__GetRenoExplanationDialogText(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CC7AF1 & 1) == 0 )
  {
    sub_1C713B0(&string_TypeInfo);
    sub_1C713B0(&StringLiteral_11338/*"RenoExplanationDialogText"*/);
    byte_4CC7AF1 = 1;
  }
  return EntityScriptUtil__GetStringValue(
           this->fields.script,
           (System_String_o *)StringLiteral_11338/*"RenoExplanationDialogText"*/,
           string_TypeInfo->static_fields->Empty,
           0);
}


System_Int32_array *QuestPhaseEntity__GetSelectableQuests(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CC7A70 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_22977/*"questSelect"*/);
    byte_4CC7A70 = 1;
  }
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_22977/*"questSelect"*/, 0, v2);
}


// local variable allocation has failed, the output may be wrong!
int32_t QuestPhaseEntity__GetSelectedQuestId(
        QuestPhaseEntity_o *this,
        int32_t questId,
        int32_t selectIndex,
        const MethodInfo *method)
{
  System_Int32_array *SelectableQuests; // x0
  const MethodInfo *v8; // x2
  int32_t max_length; // w8
  int32_t result; // w0

  SelectableQuests = QuestPhaseEntity__GetSelectableQuests(this, *(const MethodInfo **)&questId);
  if ( selectIndex < 0 || !SelectableQuests || (max_length = SelectableQuests->max_length, max_length <= selectIndex) )
  {
    result = QuestPhaseEntity__GetQuestPhaseSelectRoute(this, 0, v8);
    if ( result < 1 )
      return questId;
  }
  else
  {
    if ( max_length <= (unsigned int)selectIndex )
      sub_1C71610(SelectableQuests);
    return SelectableQuests->m_Items[selectIndex];
  }
  return result;
}


System_Int32_array *QuestPhaseEntity__GetShadowOffSvtIds(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  System_Int32_array *v3; // x2
  const MethodInfo *v4; // x3

  if ( (byte_4CC7A97 & 1) == 0 )
  {
    sub_1C713B0(&int___TypeInfo);
    sub_1C713B0(&StringLiteral_23526/*"shadowOffSvtIds"*/);
    byte_4CC7A97 = 1;
  }
  v3 = (System_Int32_array *)sub_1C71458(int___TypeInfo, 0);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_23526/*"shadowOffSvtIds"*/, v3, v4);
}


int32_t QuestPhaseEntity__GetSingleForceSvtId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CC7A95 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_23620/*"singleForceSvtId"*/);
    byte_4CC7A95 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_23620/*"singleForceSvtId"*/, 0, v2);
}


int32_t QuestPhaseEntity__GetStartBattleSoundMode(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CC7AD5 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_13056/*"StartBattleSoundMode"*/);
    byte_4CC7AD5 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_13056/*"StartBattleSoundMode"*/, 0, v2);
}


System_Int32_array *QuestPhaseEntity__GetStartMovieWave(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CC7A7D & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_21774/*"movieWave"*/);
    byte_4CC7A7D = 1;
  }
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_21774/*"movieWave"*/, 0, v2);
}


int32_t QuestPhaseEntity__GetStartScreenEffect(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CC7AD4 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_13055/*"StartBattleScreenEffect"*/);
    byte_4CC7AD4 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_13055/*"StartBattleScreenEffect"*/, 0, v2);
}


int32_t QuestPhaseEntity__GetSupportInitDeckIndex(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CC7AA8 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_19203/*"eventDeckIndex"*/);
    byte_4CC7AA8 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19203/*"eventDeckIndex"*/, 0, v2);
}


System_Int32_array *QuestPhaseEntity__GetTakeOverEnemyNpcIds(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CC7AE3 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_24098/*"takeOverEnemyNpcIds"*/);
    byte_4CC7AE3 = 1;
  }
  return EntityScriptUtil__GetIntArray(this->fields.script, (System_String_o *)StringLiteral_24098/*"takeOverEnemyNpcIds"*/, 0, 0);
}


int32_t QuestPhaseEntity__GetTemporaryCommandSpell(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CC7AA5 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_24147/*"temporaryCommandSpell"*/);
    byte_4CC7AA5 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_24147/*"temporaryCommandSpell"*/, -1, v2);
}


int64_t QuestPhaseEntity__GetUniqueId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  int32_t phase; // w19
  int32_t questId; // w20

  if ( (byte_4CC7A56 & 1) == 0 )
  {
    sub_1C713B0(&BattleDataDefine_TypeInfo);
    byte_4CC7A56 = 1;
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

  if ( (byte_4CC7A96 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_24602/*"useEventDeckNo"*/);
    byte_4CC7A96 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_24602/*"useEventDeckNo"*/, 1, v2);
}


System_Int32_array *QuestPhaseEntity__GetVoiceOffPlayerSvtIdArray(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CC7AB9 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_24837/*"voiceOffMySvtIds"*/);
    byte_4CC7AB9 = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_24837/*"voiceOffMySvtIds"*/, 0);
}


int32_t QuestPhaseEntity__GetWaitSetupSwitchPartyChargeTurn(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CC7ACA & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_24919/*"waveSetupSwitchPartyChargeTurn"*/);
    byte_4CC7ACA = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_24919/*"waveSetupSwitchPartyChargeTurn"*/, 0, v2);
}


System_String_o *QuestPhaseEntity__GetWarBoardStartMovieName(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CC7AB3 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_15598/*"WarBoardStartMovieName"*/);
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC7AB3 = 1;
  }
  return QuestPhaseEntity__getScriptStr(
           this,
           (System_String_o *)StringLiteral_15598/*"WarBoardStartMovieName"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


System_String_array *QuestPhaseEntity__GetWaveStartMovie(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CC7A7B & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_24920/*"waveStartMovie"*/);
    byte_4CC7A7B = 1;
  }
  return QuestPhaseEntity__getScriptStringArrayParam(this, (System_String_o *)StringLiteral_24920/*"waveStartMovie"*/, 0, v2);
}


int32_t QuestPhaseEntity__GetWinBgmOffFlg(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CC7A90 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_19065/*"endBgmOff"*/);
    byte_4CC7A90 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19065/*"endBgmOff"*/, 0, v2);
}


int32_t QuestPhaseEntity__GetWinVoiceOffFlg(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CC7A8E & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_19079/*"endVoiceOff"*/);
    byte_4CC7A8E = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19079/*"endVoiceOff"*/, 0, v2);
}


bool QuestPhaseEntity__HasEnemyExBattleUiPositionY(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CC7AF3 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_19088/*"enemyExBattleUiPositionY"*/);
    byte_4CC7AF3 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_19088/*"enemyExBattleUiPositionY"*/, 0);
}


bool QuestPhaseEntity__HasExtraBattleUserInterfaceData(
        QuestPhaseEntity_o *this,
        ExtraBattleUserInterfaceData_JsonConvertData_array **dataArray,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  long double inited; // q0
  _QWORD *v11; // x21
  __int64 v12; // x8
  __int64 v13; // x0
  __int64 v14; // x0
  ExtraBattleUserInterfaceData_JsonConvertData_array **v15; // x8
  ExtraBattleUserInterfaceData_JsonConvertData_array *v16; // x1
  __int64 v17; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  Il2CppObject *v19; // x20
  ExtraBattleUserInterfaceData_JsonConvertData_array *v20; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4CC7AED & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Array_Empty_ExtraBattleUserInterfaceData_JsonConvertData___);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1C713B0(&Method_System_Linq_Enumerable_Any_ExtraBattleUserInterfaceData_JsonConvertData___);
    sub_1C713B0(&Method_JsonManager_Deserialize_ExtraBattleUserInterfaceData_JsonConvertData_____);
    sub_1C713B0(&JsonManager_TypeInfo);
    sub_1C713B0(&StringLiteral_19376/*"exBattleUI"*/);
    byte_4CC7AED = 1;
  }
  v11 = Method_System_Array_Empty_ExtraBattleUserInterfaceData_JsonConvertData___;
  value = 0;
  v12 = *((_QWORD *)Method_System_Array_Empty_ExtraBattleUserInterfaceData_JsonConvertData___ + 7);
  if ( !v12 )
  {
    sub_1C474A0(Method_System_Array_Empty_ExtraBattleUserInterfaceData_JsonConvertData___);
    v12 = v11[7];
  }
  v13 = *(_QWORD *)(v12 + 16);
  if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
    v13 = sub_1C47444(inited);
  if ( !*(_DWORD *)(v13 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v13);
  v14 = *(_QWORD *)(v11[7] + 16LL);
  if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
    v14 = sub_1C47444(inited);
  v15 = *(ExtraBattleUserInterfaceData_JsonConvertData_array ***)(v14 + 184);
  v16 = *v15;
  *dataArray = *v15;
  sub_1C71354((GrandQuestFolderBoardItem_o *)dataArray, (int32_t)v16, (int32_t)method, v3, v4, v5, v6, v7);
  script = this->fields.script;
  if ( !script )
    sub_1C71608(0, v17);
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)script,
         (Il2CppObject *)StringLiteral_19376/*"exBattleUI"*/,
         &value,
         (const MethodInfo_34CCEEC *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    v19 = value;
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v20 = (ExtraBattleUserInterfaceData_JsonConvertData_array *)JsonManager__Deserialize_object_(
                                                                  v19,
                                                                  (const MethodInfo_31BAC6C *)Method_JsonManager_Deserialize_ExtraBattleUserInterfaceData_JsonConvertData_____);
    *dataArray = v20;
    sub_1C71354((GrandQuestFolderBoardItem_o *)dataArray, (int32_t)v20, v21, v22, v23, v24, v25, v26);
  }
  return System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)*dataArray,
           (const MethodInfo_3156C84 *)Method_System_Linq_Enumerable_Any_ExtraBattleUserInterfaceData_JsonConvertData___);
}


bool QuestPhaseEntity__HasReleaseFocusQuestBoardKey(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CC7ACD & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_21029/*"isReleaseFocus"*/);
    byte_4CC7ACD = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_21029/*"isReleaseFocus"*/, 0);
}


bool QuestPhaseEntity__IsActiveAssistSkill(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  System_Int32_array *v3; // x0
  const MethodInfo *v4; // x3
  System_Int32_array *ScriptIntArrayParam; // x0
  __int64 v6; // x1

  if ( (byte_4CC7AA1 & 1) == 0 )
  {
    sub_1C713B0(&int___TypeInfo);
    sub_1C713B0(&StringLiteral_16938/*"assistIds"*/);
    byte_4CC7AA1 = 1;
  }
  v3 = (System_Int32_array *)sub_1C71458(int___TypeInfo, 0);
  ScriptIntArrayParam = QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_16938/*"assistIds"*/, v3, v4);
  if ( !ScriptIntArrayParam )
    sub_1C71608(0, v6);
  return LODWORD(ScriptIntArrayParam->max_length) != 0;
}


bool QuestPhaseEntity__IsAreaImporveQuest(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4CC7AB4 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_16887/*"areaImprovementQuest"*/);
    byte_4CC7AB4 = 1;
  }
  return QuestPhaseEntity__getScriptObj(this, (System_String_o *)StringLiteral_16887/*"areaImprovementQuest"*/, v2) != 0;
}


bool QuestPhaseEntity__IsAssistExecAll(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CC7AF0 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_16936/*"assistExecAll"*/);
    byte_4CC7AF0 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_16936/*"assistExecAll"*/, 0, 0) != 0;
}


bool QuestPhaseEntity__IsAutoExecute(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CC7ADE & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_20985/*"isAutoExecute"*/);
    byte_4CC7ADE = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_20985/*"isAutoExecute"*/, 0);
}


bool QuestPhaseEntity__IsClearFieldBuffWhenWaveStart(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CC7AEC & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_18029/*"clearFieldBuffWhenWaveStart"*/);
    byte_4CC7AEC = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_18029/*"clearFieldBuffWhenWaveStart"*/, 0, 0) != 0;
}


bool QuestPhaseEntity__IsContinueWaveRestart(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CC7ACB & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_18289/*"continueWaveRestart"*/);
    byte_4CC7ACB = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_18289/*"continueWaveRestart"*/, 0, v2) != 0;
}


bool QuestPhaseEntity__IsFadeOutMainBgmBeforeBattle(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CC7AD8 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_19462/*"fadeOutMainBgmBeforeBattle"*/);
    byte_4CC7AD8 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_19462/*"fadeOutMainBgmBeforeBattle"*/, 0);
}


bool QuestPhaseEntity__IsHideAssistConfButton(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CC7AA4 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_20041/*"hideAssistConfButton"*/);
    byte_4CC7AA4 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20041/*"hideAssistConfButton"*/, 0, v2) != 0;
}


bool QuestPhaseEntity__IsHideBattlePointGauge(
        QuestPhaseEntity_o *this,
        int32_t battlePointId,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *IntArray; // x0

  if ( (byte_4CC7ADD & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C713B0(&StringLiteral_7333/*"HideBattlePointGauge"*/);
    byte_4CC7ADD = 1;
  }
  IntArray = (System_Collections_Generic_IEnumerable_TSource__o *)EntityScriptUtil__GetIntArray(
                                                                    this->fields.script,
                                                                    (System_String_o *)StringLiteral_7333/*"HideBattlePointGauge"*/,
                                                                    0,
                                                                    0);
  if ( IntArray )
    LOBYTE(IntArray) = System_Linq_Enumerable__Contains_int_(
                         IntArray,
                         battlePointId,
                         (const MethodInfo_3168198 *)Method_System_Linq_Enumerable_Contains_int___);
  return (char)IntArray;
}


bool QuestPhaseEntity__IsIgnoreBattleLoseDialog(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CC7A75 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_20353/*"ignoreBattleLoseDialog"*/);
    byte_4CC7A75 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_20353/*"ignoreBattleLoseDialog"*/, 0);
}


bool QuestPhaseEntity__IsIgnoreBattlePointUp(QuestPhaseEntity_o *this, int32_t battlePointId, const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *IntArray; // x0

  if ( (byte_4CC7ADB & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C713B0(&StringLiteral_7549/*"IgnoreBattlePointUp"*/);
    byte_4CC7ADB = 1;
  }
  IntArray = (System_Collections_Generic_IEnumerable_TSource__o *)EntityScriptUtil__GetIntArray(
                                                                    this->fields.script,
                                                                    (System_String_o *)StringLiteral_7549/*"IgnoreBattlePointUp"*/,
                                                                    0,
                                                                    0);
  if ( IntArray )
    LOBYTE(IntArray) = System_Linq_Enumerable__Contains_int_(
                         IntArray,
                         battlePointId,
                         (const MethodInfo_3168198 *)Method_System_Linq_Enumerable_Contains_int___);
  return (char)IntArray;
}


bool QuestPhaseEntity__IsIgnoreSyncEquipGrand(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CC7AF6 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_20356/*"ignoreSyncEquipGrand"*/);
    byte_4CC7AF6 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20356/*"ignoreSyncEquipGrand"*/, 0, v2) != 0;
}


bool QuestPhaseEntity__IsInterruptionQuest(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CC7AD3 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_20915/*"interruptibleQuest"*/);
    byte_4CC7AD3 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20915/*"interruptibleQuest"*/, 0, v2) != 0;
}


bool QuestPhaseEntity__IsInvisibleConnectAndLoad(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CC7A9B & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_20955/*"invisibleConnectAndLoad"*/);
    byte_4CC7A9B = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20955/*"invisibleConnectAndLoad"*/, 0, v2) != 0;
}


bool QuestPhaseEntity__IsKeepFieldBuffWhenMoveNextBattle(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CC7AEA & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_21201/*"keepFieldBuffWhenMoveNextBattle"*/);
    byte_4CC7AEA = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_21201/*"keepFieldBuffWhenMoveNextBattle"*/, 0, 0) != 0;
}


bool QuestPhaseEntity__IsKeepSubBgmAfterBattleResult(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CC7A91 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_21204/*"keepSubBgmUntilBattleResult"*/);
    byte_4CC7A91 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_21204/*"keepSubBgmUntilBattleResult"*/, 0);
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

  if ( (byte_4CC7A9A & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Array_FindAll_int___);
    sub_1C713B0(&Method_System_Collections_Generic_HashSet_int___ctor___78566240);
    sub_1C713B0(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1C713B0(&System_Predicate_int__TypeInfo);
    byte_4CC7A9A = 1;
  }
  PrioredIndividuality = (System_Collections_Generic_IEnumerable_T__o *)QuestPhaseEntity__GetPrioredIndividuality(
                                                                          this,
                                                                          (const MethodInfo *)individualitys);
  v6 = (System_Collections_Generic_HashSet_int__o *)sub_1C715FC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor_57413200(
    v6,
    PrioredIndividuality,
    (const MethodInfo_36C0E50 *)Method_System_Collections_Generic_HashSet_int___ctor___78566240);
  All_int = (System_Predicate_int__o *)sub_1C715FC(System_Predicate_int__TypeInfo);
  if ( !v6
    || (v9 = (System_Predicate_T__o *)All_int,
        System_Predicate_int____ctor(All_int, (Il2CppObject *)v6, (intptr_t)v6->klass->vtable._8_Contains.method, 0),
        (All_int = (System_Predicate_int__o *)System_Array__FindAll_int_(
                                                individualitys,
                                                v9,
                                                (const MethodInfo_3251098 *)Method_System_Array_FindAll_int___)) == 0) )
  {
    sub_1C71608(All_int, v8);
  }
  return All_int->fields.invoke_impl != 0;
}


bool QuestPhaseEntity__IsNonStopEndBgm(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CC7A72 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_22368/*"nonStopEndBgm"*/);
    byte_4CC7A72 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22368/*"nonStopEndBgm"*/, 0, v2) != 0;
}


bool QuestPhaseEntity__IsNoneSupportFriendPoint(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CC7AE1 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_22380/*"noneSupportFriendPoint"*/);
    byte_4CC7AE1 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22380/*"noneSupportFriendPoint"*/, 0, 0) != 0;
}


bool QuestPhaseEntity__IsNotClassBoard(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CC7AC5 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_22398/*"notClassBoard"*/);
    byte_4CC7AC5 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22398/*"notClassBoard"*/, 0, v2) != 0;
}


bool QuestPhaseEntity__IsNotResetResultDispFlag(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CC7A7F & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_22408/*"notResetResultDispFlag"*/);
    byte_4CC7A7F = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22408/*"notResetResultDispFlag"*/, 0, v2) != 0;
}


bool QuestPhaseEntity__IsNotUseRestrictionDialog(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CC7AC6 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_22410/*"notUseRestrictionDialog"*/);
    byte_4CC7AC6 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22410/*"notUseRestrictionDialog"*/, 0, v2) != 0;
}


bool QuestPhaseEntity__IsPlayScriptBeforeForWarBoard(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CC7AA0 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_21033/*"isScriptPlayForWarBoard"*/);
    byte_4CC7AA0 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21033/*"isScriptPlayForWarBoard"*/, 0, v2) != 0;
}


bool QuestPhaseEntity__IsReleaseFocusQuestBoard(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CC7ACE & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_21029/*"isReleaseFocus"*/);
    byte_4CC7ACE = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21029/*"isReleaseFocus"*/, 0, v2) != 0;
}


bool QuestPhaseEntity__IsRepeatReward(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CC7AC3 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_23160/*"repeatReward"*/);
    byte_4CC7AC3 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_23160/*"repeatReward"*/, 0, v2) != 0;
}


bool QuestPhaseEntity__IsReverseMyDeckSvtPosition(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CC7AD9 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_23212/*"reverseMyDeckSvtPosition"*/);
    byte_4CC7AD9 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_23212/*"reverseMyDeckSvtPosition"*/, 0);
}


bool QuestPhaseEntity__IsSaveInterruptionEnemyData(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CC7AE4 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_23306/*"saveInterruptionEnemyData"*/);
    byte_4CC7AE4 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_23306/*"saveInterruptionEnemyData"*/, 0, 0) != 0;
}


bool QuestPhaseEntity__IsSkipBattleFinish(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CC7ABD & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_23640/*"skipBattleFinish"*/);
    byte_4CC7ABD = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_23640/*"skipBattleFinish"*/, 0, v2) != 0;
}


bool QuestPhaseEntity__IsSkipMoveNextBattleFade(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CC7AE2 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_23642/*"skipMoveNextBattleFade"*/);
    byte_4CC7AE2 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_23642/*"skipMoveNextBattleFade"*/, 0, 0) != 0;
}


bool QuestPhaseEntity__IsUseGrandBoard(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CC7AEE & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_21045/*"isUseGrandBoard"*/);
    byte_4CC7AEE = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_21045/*"isUseGrandBoard"*/, 0, 0) != 0;
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

  if ( (byte_4CC7AEF & 1) == 0 )
  {
    sub_1C713B0(&Method_BasicHelper_GetValue_long___);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1C713B0(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1C713B0(&StringLiteral_19205/*"eventId"*/);
    sub_1C713B0(&StringLiteral_22656/*"overwriteEventEquipSkillParts"*/);
    sub_1C713B0(&StringLiteral_20199/*"iconId"*/);
    sub_1C713B0(&StringLiteral_19987/*"groupId"*/);
    byte_4CC7AEF = 1;
  }
  value = 0;
  *eventId = 0;
  *iconId = 0;
  *groupId = 0;
  script = this->fields.script;
  if ( !script )
    sub_1C71608(0, eventId);
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)script,
         (Il2CppObject *)StringLiteral_22656/*"overwriteEventEquipSkillParts"*/,
         &value,
         (const MethodInfo_34CCEEC *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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
                     (System_String_o *)StringLiteral_19205/*"eventId"*/,
                     0,
                     (const MethodInfo_31386BC *)Method_BasicHelper_GetValue_long___);
        *iconId = BasicHelper__GetValue_long_(
                    (System_Collections_Generic_Dictionary_string__object__o *)v10,
                    (System_String_o *)StringLiteral_20199/*"iconId"*/,
                    0,
                    (const MethodInfo_31386BC *)Method_BasicHelper_GetValue_long___);
        *groupId = BasicHelper__GetValue_long_(
                     (System_Collections_Generic_Dictionary_string__object__o *)v10,
                     (System_String_o *)StringLiteral_19987/*"groupId"*/,
                     0,
                     (const MethodInfo_31386BC *)Method_BasicHelper_GetValue_long___);
      }
    }
  }
  return *eventId > 0;
}


bool QuestPhaseEntity__IsUseTemporaryCommandSpell(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CC7AA6 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_24612/*"useTemporaryCommandSpell"*/);
    byte_4CC7AA6 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_24612/*"useTemporaryCommandSpell"*/, -1, v2) == 1;
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

  if ( (byte_4CC7ABB & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_24914/*"waveCountInfinity"*/);
    byte_4CC7ABB = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_24914/*"waveCountInfinity"*/, -1, v2) != -1;
}


bool QuestPhaseEntity__IsWaveSetup(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CC7AC7 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_24916/*"waveSetup"*/);
    byte_4CC7AC7 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_24916/*"waveSetup"*/, 0, v2) != 0;
}


bool QuestPhaseEntity__IsWaveSetupAsOneParty(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CC7AC8 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_24917/*"waveSetupAsOneParty"*/);
    byte_4CC7AC8 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_24917/*"waveSetupAsOneParty"*/, 0, v2) != 0;
}


bool QuestPhaseEntity__IsWaveSetupSwitchParty(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CC7AC9 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_24918/*"waveSetupSwitchParty"*/);
    byte_4CC7AC9 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_24918/*"waveSetupSwitchParty"*/, 0, v2) != 0;
}


bool QuestPhaseEntity__PlayHappinessCounterEffect(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CC7ADC & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_10662/*"PlayHappinessCounterEffect"*/);
    byte_4CC7ADC = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_10662/*"PlayHappinessCounterEffect"*/, 0);
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
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  System_Collections_Generic_List_int__o *v21; // x0
  __int64 v22; // x1
  System_Collections_Generic_IDictionary_int__int____c *klass; // x8
  System_Collections_Generic_List_int__o *v24; // x21
  __int64 v25; // x9
  int32_t *p_offset; // x10
  __int64 v27; // x0

  if ( (byte_4CC7AAE & 1) == 0 )
  {
    sub_1C713B0(&Method_BasicHelper_GetValue_long___);
    sub_1C713B0(&Method_BasicHelper_GetValue_List_object____);
    sub_1C713B0(&System_Converter_object__int__TypeInfo);
    sub_1C713B0(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1C713B0(&System_Collections_Generic_IDictionary_int__int____TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_object__ConvertAll_int___);
    sub_1C713B0(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C713B0(&Method_QuestPhaseEntity___c__SetNpcAiInfo_b__116_0__);
    sub_1C713B0(&QuestPhaseEntity___c_TypeInfo);
    sub_1C713B0(&StringLiteral_16742/*"aiIds"*/);
    sub_1C713B0(&StringLiteral_22425/*"npcId"*/);
    byte_4CC7AAE = 1;
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
                       (System_String_o *)StringLiteral_22425/*"npcId"*/,
                       0,
                       (const MethodInfo_31386BC *)Method_BasicHelper_GetValue_long___);
        Value_object = BasicHelper__GetValue_object_(
                         v7,
                         (System_String_o *)StringLiteral_16742/*"aiIds"*/,
                         0,
                         (const MethodInfo_31387A8 *)Method_BasicHelper_GetValue_List_object____);
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
              _9__116_0 = (System_Converter_object__int__o *)sub_1C715FC(System_Converter_object__int__TypeInfo);
              System_Converter_object__int____ctor(
                _9__116_0,
                v13,
                Method_QuestPhaseEntity___c__SetNpcAiInfo_b__116_0__,
                0);
              static_fields = QuestPhaseEntity___c_TypeInfo->static_fields;
              static_fields->__9__116_0 = _9__116_0;
              sub_1C71354(
                (GrandQuestFolderBoardItem_o *)&static_fields->__9__116_0,
                (int32_t)_9__116_0,
                v15,
                v16,
                v17,
                v18,
                v19,
                v20);
            }
            v21 = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_object___ConvertAll_int_(
                                                              v10,
                                                              (System_Converter_T__TOutput__o *)_9__116_0,
                                                              (const MethodInfo_3070934 *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
            if ( !v21
              || (v21 = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_int___ToArray(
                                                                    v21,
                                                                    (const MethodInfo_37F51AC *)Method_System_Collections_Generic_List_int__ToArray__),
                  !dicNpcAiId) )
            {
              sub_1C71608(v21, v22);
            }
            klass = dicNpcAiId->klass;
            v24 = v21;
            v25 = *(unsigned __int16 *)&dicNpcAiId->klass->_2.rank;
            if ( *(_WORD *)&dicNpcAiId->klass->_2.rank )
            {
              p_offset = &klass->_1.interfaceOffsets->offset;
              while ( *((System_Collections_Generic_IDictionary_int__int____c **)p_offset - 1) != System_Collections_Generic_IDictionary_int__int____TypeInfo )
              {
                --v25;
                p_offset += 4;
                if ( !v25 )
                  goto LABEL_24;
              }
              v27 = (__int64)&klass->vtable[*p_offset + 1];
            }
            else
            {
LABEL_24:
              v27 = sub_1C47738(dicNpcAiId, System_Collections_Generic_IDictionary_int__int____TypeInfo, 1);
            }
            (*(void (__fastcall **)(System_Collections_Generic_IDictionary_int__int____o *, _QWORD, System_Collections_Generic_List_int__o *, _QWORD))v27)(
              dicNpcAiId,
              (unsigned int)Value_long,
              v24,
              *(_QWORD *)(v27 + 8));
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

  if ( (byte_4CC7AEB & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Nullable_Color__get_HasValue__);
    sub_1C713B0(&StringLiteral_19458/*"fadeColorAfterMovieFinished"*/);
    byte_4CC7AEB = 1;
  }
  StringValue = EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_19458/*"fadeColorAfterMovieFinished"*/, 0, 0);
  ColorHelper__ParseColorCode((System_Nullable_Color__o *)v8, StringValue, 0);
  v6 = *(float *)&v8[8];
  *(System_Nullable_Color__o *)&v8[12] = *(System_Nullable_Color__o *)v8;
  *(_OWORD *)&color->fields.hasValue = *(_OWORD *)v8;
  result = color->fields.hasValue;
  color->fields.value.fields.a = v6;
  return result;
}


bool QuestPhaseEntity__TryGetFixedMasterEquip(
        QuestPhaseEntity_o *this,
        int32_t *outFixedEquipId,
        int32_t *outFixedEquipLv,
        const MethodInfo *method)
{
  Il2CppObject *ScriptObj; // x0
  System_Collections_Generic_Dictionary_string__object__o *v8; // x21
  __int64 naturalAligment; // x9
  QuestPhaseEntity_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4CC7AF5 & 1) == 0 )
  {
    sub_1C713B0(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1C713B0(&StringLiteral_19548/*"fixedMasterEquip"*/);
    sub_1C713B0(&StringLiteral_18578/*"defaultLv"*/);
    sub_1C713B0(&StringLiteral_19121/*"equipId"*/);
    byte_4CC7AF5 = 1;
  }
  *outFixedEquipId = 0;
  *outFixedEquipLv = 0;
  ScriptObj = QuestPhaseEntity__getScriptObj(
                this,
                (System_String_o *)StringLiteral_19548/*"fixedMasterEquip"*/,
                (const MethodInfo *)outFixedEquipLv);
  v8 = (System_Collections_Generic_Dictionary_string__object__o *)ScriptObj;
  if ( !ScriptObj )
    return v8 != 0;
  naturalAligment = System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.naturalAligment;
  if ( ScriptObj->klass->_2.naturalAligment >= (unsigned int)naturalAligment
    && (System_Collections_Generic_Dictionary_string__object__c *)ScriptObj->klass->_2.typeHierarchy[naturalAligment - 1] == System_Collections_Generic_Dictionary_string__object__TypeInfo )
  {
    *outFixedEquipId = EntityScriptUtil__GetIntValue(
                         (System_Collections_Generic_Dictionary_string__object__o *)ScriptObj,
                         (System_String_o *)StringLiteral_19121/*"equipId"*/,
                         0,
                         0);
    *outFixedEquipLv = EntityScriptUtil__GetIntValue(v8, (System_String_o *)StringLiteral_18578/*"defaultLv"*/, 1, 0);
    return v8 != 0;
  }
  sub_1C719A4(ScriptObj);
  return QuestPhaseEntity__IsIgnoreSyncEquipGrand(v11, v12);
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
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x0
  System_Object_array *v29; // x21
  int max_length; // w8
  CommonReleaseMaster_o *v31; // x22
  unsigned int v32; // w23
  Il2CppObject *v33; // x24

  if ( (byte_4CC7AE0 & 1) == 0 )
  {
    sub_1C713B0(&Method_BasicHelper_GetValue_string__object___);
    sub_1C713B0(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_System_Linq_Enumerable_OrderByDescending_BattleTreasureDeviceSequenceSelectType__int___);
    sub_1C713B0(&Method_System_Linq_Enumerable_ToArray_BattleTreasureDeviceSequenceSelectType___);
    sub_1C713B0(&Method_System_Linq_Enumerable_Where_BattleTreasureDeviceSequenceSelectType___);
    sub_1C713B0(&System_Func_BattleTreasureDeviceSequenceSelectType__bool__TypeInfo);
    sub_1C713B0(&System_Func_BattleTreasureDeviceSequenceSelectType__int__TypeInfo);
    sub_1C713B0(&Method_JsonManager_DeserializeArray_BattleTreasureDeviceSequenceSelectType___);
    sub_1C713B0(&JsonManager_TypeInfo);
    sub_1C713B0(&Method_QuestPhaseEntity___c__TryGetOverwritePlayerSequenceSelectTypeByGender_b__167_1__);
    sub_1C713B0(&Method_QuestPhaseEntity___c__DisplayClass167_0__TryGetOverwritePlayerSequenceSelectTypeByGender_b__0__);
    sub_1C713B0(&QuestPhaseEntity___c__DisplayClass167_0_TypeInfo);
    sub_1C713B0(&QuestPhaseEntity___c_TypeInfo);
    sub_1C713B0(&StringLiteral_22675/*"overwritePlayerSequenceSelectTypeByGender"*/);
    byte_4CC7AE0 = 1;
  }
  v9 = sub_1C715FC(QuestPhaseEntity___c__DisplayClass167_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_28;
  *(_DWORD *)(v9 + 16) = servantId;
  *genderSelectType = -1;
  *patternId = -1;
  Value_object__object = BasicHelper__GetValue_object__object_(
                           (System_Collections_Generic_Dictionary_K__V__o *)this->fields.script,
                           (Il2CppObject *)StringLiteral_22675/*"overwritePlayerSequenceSelectTypeByGender"*/,
                           0,
                           (const MethodInfo_3138F54 *)Method_BasicHelper_GetValue_string__object___);
  if ( !Value_object__object )
    return (char)Value_object__object;
  v13 = Value_object__object;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v14 = (System_Collections_Generic_IEnumerable_TSource__o *)JsonManager__DeserializeArray_object_(
                                                               v13,
                                                               (const MethodInfo_31BADBC *)Method_JsonManager_DeserializeArray_BattleTreasureDeviceSequenceSelectType___);
  v15 = (System_Func_object__bool__o *)sub_1C715FC(System_Func_BattleTreasureDeviceSequenceSelectType__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v15,
    (Il2CppObject *)v9,
    Method_QuestPhaseEntity___c__DisplayClass167_0__TryGetOverwritePlayerSequenceSelectTypeByGender_b__0__,
    0);
  v16 = System_Linq_Enumerable__Where_object_(
          v14,
          (System_Func_TSource__bool__o *)v15,
          (const MethodInfo_3192108 *)Method_System_Linq_Enumerable_Where_BattleTreasureDeviceSequenceSelectType___);
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
    _9__167_1 = (System_Func_object__int__o *)sub_1C715FC(System_Func_BattleTreasureDeviceSequenceSelectType__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__167_1,
      v20,
      Method_QuestPhaseEntity___c__TryGetOverwritePlayerSequenceSelectTypeByGender_b__167_1__,
      0);
    static_fields = QuestPhaseEntity___c_TypeInfo->static_fields;
    static_fields->__9__167_1 = (struct System_Func_BattleTreasureDeviceSequenceSelectType__int__o *)_9__167_1;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__167_1,
      (int32_t)_9__167_1,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
  }
  v28 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                               v18,
                                                               (System_Func_TSource__TKey__o *)_9__167_1,
                                                               (const MethodInfo_317AEBC *)Method_System_Linq_Enumerable_OrderByDescending_BattleTreasureDeviceSequenceSelectType__int___);
  v29 = System_Linq_Enumerable__ToArray_object_(
          v28,
          (const MethodInfo_318AFEC *)Method_System_Linq_Enumerable_ToArray_BattleTreasureDeviceSequenceSelectType___);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v29, 0) )
    goto LABEL_25;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !v29 )
LABEL_28:
    sub_1C71608(Master_object, monitor_high);
  max_length = v29->max_length;
  if ( max_length < 1 )
  {
LABEL_25:
    LOBYTE(Value_object__object) = 0;
    return (char)Value_object__object;
  }
  v31 = (CommonReleaseMaster_o *)Master_object;
  v32 = 0;
  while ( 1 )
  {
    if ( v32 >= max_length )
      sub_1C71610(Master_object);
    v33 = v29->m_Items[v32];
    if ( !v33 )
      goto LABEL_28;
    monitor_high = HIDWORD(v33[1].monitor);
    if ( (int)monitor_high < 1 )
      break;
    if ( !v31 )
      goto LABEL_28;
    Master_object = (Il2CppObject *)CommonReleaseMaster__IsOpen(v31, monitor_high, 0, 0, 0);
    if ( ((unsigned __int8)Master_object & 1) != 0 )
      break;
    max_length = v29->max_length;
    if ( (int)++v32 >= max_length )
      goto LABEL_25;
  }
  LOBYTE(Value_object__object) = 1;
  *genderSelectType = HIDWORD(v33[1].klass);
  *patternId = (int32_t)v33[1].monitor;
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

  if ( (byte_4CC7A6B & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_17090/*"battleEffectId"*/);
    byte_4CC7A6B = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_17090/*"battleEffectId"*/, defVal, v3);
}


int32_t QuestPhaseEntity__getBattleFieldMotionId(QuestPhaseEntity_o *this, int32_t defVal, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4CC7A6D & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_19497/*"fieldMotionId"*/);
    byte_4CC7A6D = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19497/*"fieldMotionId"*/, defVal, v3);
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

  if ( (byte_4CC7A6E & 1) == 0 )
  {
    sub_1C713B0(&int___TypeInfo);
    sub_1C713B0(&StringLiteral_19498/*"fieldMotionIds"*/);
    byte_4CC7A6E = 1;
  }
  result = QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_19498/*"fieldMotionIds"*/, defVals, v3);
  if ( !result )
    goto LABEL_10;
  if ( result->max_length )
    return result;
  BattleFieldMotionId = QuestPhaseEntity__getBattleFieldMotionId(this, -1, v8);
  result = defVals;
  if ( BattleFieldMotionId == -1 )
    return result;
  result = (System_Int32_array *)sub_1C71458(int___TypeInfo, 1);
  if ( !result )
LABEL_10:
    sub_1C71608(result, v7);
  if ( !LODWORD(result->max_length) )
    sub_1C71610(result);
  result->m_Items[0] = BattleFieldMotionId;
  return result;
}


int32_t QuestPhaseEntity__getBreakOnBattleWinWaitMSec(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CC7A79 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_17436/*"breakOnBattleWinWaitMSec"*/);
    byte_4CC7A79 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_17436/*"breakOnBattleWinWaitMSec"*/, 0, v2);
}


System_Int32_array *QuestPhaseEntity__getEventGrounpIds(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  System_Int32_array *v3; // x2
  const MethodInfo *v4; // x3

  if ( (byte_4CC7A6F & 1) == 0 )
  {
    sub_1C713B0(&int___TypeInfo);
    sub_1C713B0(&StringLiteral_19204/*"eventGroupId"*/);
    byte_4CC7A6F = 1;
  }
  v3 = (System_Int32_array *)sub_1C71458(int___TypeInfo, 0);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_19204/*"eventGroupId"*/, v3, v4);
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

  if ( (byte_4CC7AAB & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_20058/*"hintLeftIndent"*/);
    byte_4CC7AAB = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20058/*"hintLeftIndent"*/, -1, v2);
}


System_String_o *QuestPhaseEntity__getHintMessage(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CC7AAA & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_20059/*"hintMessage"*/);
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC7AAA = 1;
  }
  return QuestPhaseEntity__getScriptStr(
           this,
           (System_String_o *)StringLiteral_20059/*"hintMessage"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


System_String_o *QuestPhaseEntity__getHintMessageTitle(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CC7AA9 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_1/*""*/);
    sub_1C713B0(&StringLiteral_20061/*"hintTitle"*/);
    byte_4CC7AA9 = 1;
  }
  return QuestPhaseEntity__getScriptStr(
           this,
           (System_String_o *)StringLiteral_20061/*"hintTitle"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


int32_t QuestPhaseEntity__getHintOpenType(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CC7AAC & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_20060/*"hintOpenType"*/);
    byte_4CC7AAC = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20060/*"hintOpenType"*/, 0, v2);
}


int32_t QuestPhaseEntity__getLeave(QuestPhaseEntity_o *this, int32_t defVal, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4CC7A6A & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_21290/*"leave"*/);
    byte_4CC7A6A = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21290/*"leave"*/, defVal, v3);
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

  if ( (byte_4CC7A65 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_23192/*"resultBgmId"*/);
    byte_4CC7A65 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_23192/*"resultBgmId"*/, defVal, v3);
}


int32_t QuestPhaseEntity__getResultEffectId(QuestPhaseEntity_o *this, int32_t defVal, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4CC7A69 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_23193/*"resultEffectId"*/);
    byte_4CC7A69 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_23193/*"resultEffectId"*/, defVal, v3);
}


System_Int32_array *QuestPhaseEntity__getResultEnemyVoiceIds(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  System_Int32_array *v3; // x2
  const MethodInfo *v4; // x3

  if ( (byte_4CC7A73 & 1) == 0 )
  {
    sub_1C713B0(&int___TypeInfo);
    sub_1C713B0(&StringLiteral_23194/*"resultEnemyVoiceIds"*/);
    byte_4CC7A73 = 1;
  }
  v3 = (System_Int32_array *)sub_1C71458(int___TypeInfo, 0);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_23194/*"resultEnemyVoiceIds"*/, v3, v4);
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
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  System_Collections_Generic_List_int__o *v19; // x0
  __int64 v20; // x1

  if ( (byte_4CC7A5D & 1) == 0 )
  {
    sub_1C713B0(&System_Converter_object__int__TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_object__ConvertAll_int___);
    sub_1C713B0(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C713B0(&Method_QuestPhaseEntity___c__getScriptIntArrayParam_b__33_0__);
    sub_1C713B0(&QuestPhaseEntity___c_TypeInfo);
    byte_4CC7A5D = 1;
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
    _9__33_0 = (System_Converter_object__int__o *)sub_1C715FC(System_Converter_object__int__TypeInfo);
    System_Converter_object__int____ctor(
      _9__33_0,
      v11,
      Method_QuestPhaseEntity___c__getScriptIntArrayParam_b__33_0__,
      0);
    static_fields = QuestPhaseEntity___c_TypeInfo->static_fields;
    static_fields->__9__33_0 = _9__33_0;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__33_0,
      (int32_t)_9__33_0,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
  }
  v19 = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_object___ConvertAll_int_(
                                                    v8,
                                                    (System_Converter_T__TOutput__o *)_9__33_0,
                                                    (const MethodInfo_3070934 *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
  if ( !v19 )
    sub_1C71608(0, v20);
  return System_Collections_Generic_List_int___ToArray(
           v19,
           (const MethodInfo_37F51AC *)Method_System_Collections_Generic_List_int__ToArray__);
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
  if ( (byte_4CC7A5C & 1) == 0 )
  {
    sub_1C713B0(&long_TypeInfo);
    byte_4CC7A5C = 1;
  }
  ScriptObj = QuestPhaseEntity__getScriptObj(this, key, *(const MethodInfo **)&defVal);
  if ( !ScriptObj )
    return v4;
  if ( ScriptObj->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(ScriptObj, long_TypeInfo, v8, v9);
  sub_1C719A4(ScriptObj);
  return (unsigned int)QuestPhaseEntity__getScriptObj(v11, v12, v13);
}


Il2CppObject *QuestPhaseEntity__getScriptObj(QuestPhaseEntity_o *this, System_String_o *key, const MethodInfo *method)
{
  Il2CppObject *result; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4CC7A61 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    byte_4CC7A61 = 1;
  }
  result = (Il2CppObject *)this->fields.script;
  if ( result )
  {
    value = 0;
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)result,
           (Il2CppObject *)key,
           &value,
           (const MethodInfo_34CCEEC *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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

  if ( (byte_4CC7A5F & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_object__ToArray__);
    byte_4CC7A5F = 1;
  }
  ScriptObjListParam = QuestPhaseEntity__getScriptObjListParam(this, key, (const MethodInfo *)defVal);
  if ( ScriptObjListParam )
    return System_Collections_Generic_List_object___ToArray(
             ScriptObjListParam,
             (const MethodInfo_3812270 *)Method_System_Collections_Generic_List_object__ToArray__);
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

  if ( (byte_4CC7A60 & 1) == 0 )
  {
    sub_1C713B0(&System_Collections_Generic_List_object__TypeInfo);
    byte_4CC7A60 = 1;
  }
  result = (System_Collections_Generic_List_object__o *)QuestPhaseEntity__getScriptObj(this, key, method);
  if ( result )
  {
    naturalAligment = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment;
    if ( result->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (System_Collections_Generic_List_object__c *)result->klass->_2.typeHierarchy[naturalAligment - 1] != System_Collections_Generic_List_object__TypeInfo )
    {
      sub_1C719A4(result);
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

  if ( (byte_4CC7A62 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C713B0(&string_TypeInfo);
    byte_4CC7A62 = 1;
  }
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)key,
          (const MethodInfo_34CB8D4 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return defVal;
  }
  v9 = this->fields.script;
  if ( !v9 )
    sub_1C71608(0, v8);
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)v9,
           (Il2CppObject *)key,
           (const MethodInfo_34CB660 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  defVal = (System_String_o *)Item;
  if ( !Item || (System_String_c *)Item->klass == string_TypeInfo )
    return defVal;
  sub_1C719A4(Item);
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
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  System_Collections_Generic_List_object__o *v19; // x0
  __int64 v20; // x1

  if ( (byte_4CC7A5E & 1) == 0 )
  {
    sub_1C713B0(&System_Converter_object__string__TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_object__ConvertAll_string___);
    sub_1C713B0(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1C713B0(&Method_QuestPhaseEntity___c__getScriptStringArrayParam_b__34_0__);
    sub_1C713B0(&QuestPhaseEntity___c_TypeInfo);
    byte_4CC7A5E = 1;
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
    _9__34_0 = (System_Converter_TInput__TOutput__o *)sub_1C715FC(System_Converter_object__string__TypeInfo);
    System_Converter_object__object____ctor(
      _9__34_0,
      v11,
      Method_QuestPhaseEntity___c__getScriptStringArrayParam_b__34_0__,
      0);
    static_fields = QuestPhaseEntity___c_TypeInfo->static_fields;
    static_fields->__9__34_0 = (struct System_Converter_object__string__o *)_9__34_0;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__34_0,
      (int32_t)_9__34_0,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
  }
  v19 = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___ConvertAll_object_(
                                                       v8,
                                                       (System_Converter_T__TOutput__o *)_9__34_0,
                                                       (const MethodInfo_3070A38 *)Method_System_Collections_Generic_List_object__ConvertAll_string___);
  if ( !v19 )
    sub_1C71608(0, v20);
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  v19,
                                  (const MethodInfo_3812270 *)Method_System_Collections_Generic_List_string__ToArray__);
}


int32_t QuestPhaseEntity__getSpecialShadowEffectId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CC7A84 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_19919/*"getSpecialShadowEffectId"*/);
    byte_4CC7A84 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19919/*"getSpecialShadowEffectId"*/, 0, v2);
}


int32_t QuestPhaseEntity__getTurnSituationType(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CC7A83 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_24351/*"turnSituationType"*/);
    byte_4CC7A83 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_24351/*"turnSituationType"*/, 0, v2);
}


int32_t QuestPhaseEntity__getUniqueCameraId(QuestPhaseEntity_o *this, int32_t defVal, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4CC7A6C & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_24431/*"uniqueCameraId"*/);
    byte_4CC7A6C = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_24431/*"uniqueCameraId"*/, defVal, v3);
}


bool QuestPhaseEntity__isBattleFinishCameraTargetAll(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CC7A82 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_17092/*"battleFinishCameraTargetAll"*/);
    byte_4CC7A82 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_17092/*"battleFinishCameraTargetAll"*/, 0, v2) != 0;
}


bool QuestPhaseEntity__isBreakOnBattleWin(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CC7A77 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_17434/*"breakOnBattleWin"*/);
    byte_4CC7A77 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_17434/*"breakOnBattleWin"*/, 0, v2) != 0;
}


bool QuestPhaseEntity__isBreakOnBattleWinFadeColorBlack(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CC7A78 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_17435/*"breakOnBattleWinFadeColorBlack"*/);
    byte_4CC7A78 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_17435/*"breakOnBattleWinFadeColorBlack"*/, 0, v2) != 0;
}


bool QuestPhaseEntity__isDisableChangeRaidDownMessage(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CC7A85 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_20990/*"isDisableChangeRaidDownMessage"*/);
    byte_4CC7A85 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20990/*"isDisableChangeRaidDownMessage"*/, 0, v2) != 0;
}


bool QuestPhaseEntity__isDispLoseResult(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CC7A74 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_23195/*"resultLoseDisp"*/);
    byte_4CC7A74 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_23195/*"resultLoseDisp"*/, 0, v2) != 0;
}


bool QuestPhaseEntity__isFadeOutBgmBeforeMovie(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CC7A68 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_6589/*"FadeOutBgmBeforeMovie"*/);
    byte_4CC7A68 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_6589/*"FadeOutBgmBeforeMovie"*/, 0, v2) != 0;
}


bool QuestPhaseEntity__isNoResult(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CC7A76 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_22351/*"noResult"*/);
    byte_4CC7A76 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22351/*"noResult"*/, 0, v2) != 0;
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  QuestPhaseEntity__GetBattleSkillDropEffectIds_d__173_o *v8; // x19
  int32_t _1__state; // w8
  QuestPhaseEntity_o *_4__this; // x0
  System_Collections_Generic_IEnumerable_FunctionEntity__o *BattleSkillDropFunctionEntities; // x0
  __int64 v12; // x1
  System_Collections_Generic_IEnumerable_FunctionEntity__o *v13; // x19
  System_Collections_Generic_IEnumerable_FunctionEntity__c *klass; // x8
  __int64 v15; // x9
  int32_t *p_offset; // x10
  __int64 v17; // x0
  struct BattleSkillDropInfo_JsonConvertData_o *data_5__3; // x8
  int32_t breakEffectId; // w8
  bool result; // w0
  GrandQuestFolderBoardItem_o *p_data_5__3; // x19
  _BOOL8 BattleSkillDropInfoDict; // x0
  __int64 v23; // x1
  __int64 v24; // x1
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  struct System_Collections_Generic_IEnumerator_FunctionEntity__o *_7__wrap1; // x19
  System_Collections_Generic_IEnumerator_FunctionEntity__c *v32; // x8
  __int64 v33; // x9
  int *v34; // x10
  __int64 v35; // x0
  const MethodInfo *v36; // x1
  struct System_Collections_Generic_IEnumerator_FunctionEntity__o *v37; // x19
  System_Collections_Generic_IEnumerator_FunctionEntity__c *v38; // x8
  __int64 v39; // x9
  int *v40; // x10
  __int64 v41; // x0
  FunctionEntity_o *v42; // x0
  __int64 v43; // x1
  struct BattleSkillDropInfo_JsonConvertData_o *v44; // x9
  int32_t appearEffectId; // w9
  int32_t v46; // w2
  int32_t v47; // w3
  System_String_o *v48; // x4
  int32_t v49; // w5
  int64_t v50; // x6
  System_String_o *v51; // x7
  QuestPhaseEntity__GetBattleSkillDropEffectIds_d__173_o *v52; // [xsp+18h] [xbp-28h]

  v8 = this;
  v52 = this;
  if ( (byte_4CC7AFA & 1) == 0 )
  {
    sub_1C713B0(&System_Collections_Generic_IEnumerable_FunctionEntity__TypeInfo);
    sub_1C713B0(&System_Collections_Generic_IEnumerator_FunctionEntity__TypeInfo);
    this = (QuestPhaseEntity__GetBattleSkillDropEffectIds_d__173_o *)sub_1C713B0(&System_Collections_IEnumerator_TypeInfo);
    byte_4CC7AFA = 1;
  }
  _1__state = v8->fields.__1__state;
  if ( _1__state == 2 )
  {
    v8->fields._data_5__3 = 0;
    p_data_5__3 = (GrandQuestFolderBoardItem_o *)&v8->fields._data_5__3;
    LODWORD(p_data_5__3[-1].fields._Name_k__BackingField) = -3;
    sub_1C71354(p_data_5__3, 0, v2, v3, v4, v5, v6, v7);
    goto LABEL_18;
  }
  if ( _1__state == 1 )
  {
    data_5__3 = v8->fields._data_5__3;
    v8->fields.__1__state = -3;
    if ( !data_5__3 )
      sub_1C71608(this, method);
    breakEffectId = data_5__3->fields.breakEffectId;
    result = 1;
    v8->fields.__1__state = 2;
    v8->fields.__2__current = breakEffectId;
  }
  else if ( _1__state )
  {
    return 0;
  }
  else
  {
    _4__this = v8->fields.__4__this;
    v8->fields.__1__state = -1;
    if ( !_4__this )
      sub_1C71608(0, method);
    BattleSkillDropFunctionEntities = QuestPhaseEntity__GetBattleSkillDropFunctionEntities(_4__this, method);
    v13 = BattleSkillDropFunctionEntities;
    if ( !BattleSkillDropFunctionEntities )
      sub_1C71608(0, v12);
    klass = BattleSkillDropFunctionEntities->klass;
    v15 = *(unsigned __int16 *)&BattleSkillDropFunctionEntities->klass->_2.rank;
    if ( *(_WORD *)&BattleSkillDropFunctionEntities->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_FunctionEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_FunctionEntity__TypeInfo )
      {
        --v15;
        p_offset += 4;
        if ( !v15 )
          goto LABEL_12;
      }
      v17 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_12:
      v17 = sub_1C47738(
              BattleSkillDropFunctionEntities,
              System_Collections_Generic_IEnumerable_FunctionEntity__TypeInfo,
              0);
    }
    v24 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_FunctionEntity__o *, _QWORD))v17)(
            v13,
            *(_QWORD *)(v17 + 8));
    v52->fields.__7__wrap1 = (struct System_Collections_Generic_IEnumerator_FunctionEntity__o *)v24;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&v52->fields.__7__wrap1, v24, v25, v26, v27, v28, v29, v30);
    v52->fields.__1__state = -3;
    do
    {
LABEL_18:
      _7__wrap1 = v52->fields.__7__wrap1;
      if ( !_7__wrap1 )
        sub_1C71608(BattleSkillDropInfoDict, v23);
      v32 = _7__wrap1->klass;
      v33 = *(unsigned __int16 *)&_7__wrap1->klass->_2.rank;
      if ( *(_WORD *)&_7__wrap1->klass->_2.rank )
      {
        v34 = &v32->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)v34 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v33;
          v34 += 4;
          if ( !v33 )
            goto LABEL_23;
        }
        v35 = (__int64)&v32->vtable[*v34];
      }
      else
      {
LABEL_23:
        v35 = sub_1C47738(v52->fields.__7__wrap1, System_Collections_IEnumerator_TypeInfo, 0);
      }
      if ( ((*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_FunctionEntity__o *, _QWORD))v35)(
              _7__wrap1,
              *(_QWORD *)(v35 + 8))
          & 1) == 0 )
      {
        QuestPhaseEntity__GetBattleSkillDropEffectIds_d__173____m__Finally1(v52, v36);
        v52->fields.__7__wrap1 = 0;
        sub_1C71354((GrandQuestFolderBoardItem_o *)&v52->fields.__7__wrap1, 0, v46, v47, v48, v49, v50, v51);
        return 0;
      }
      v37 = v52->fields.__7__wrap1;
      if ( !v37 )
        sub_1C71608(v52, v36);
      v38 = v37->klass;
      v39 = *(unsigned __int16 *)&v37->klass->_2.rank;
      if ( *(_WORD *)&v37->klass->_2.rank )
      {
        v40 = &v38->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerator_FunctionEntity__c **)v40 - 1) != System_Collections_Generic_IEnumerator_FunctionEntity__TypeInfo )
        {
          --v39;
          v40 += 4;
          if ( !v39 )
            goto LABEL_31;
        }
        v41 = (__int64)&v38->vtable[*v40];
      }
      else
      {
LABEL_31:
        v41 = sub_1C47738(v52->fields.__7__wrap1, System_Collections_Generic_IEnumerator_FunctionEntity__TypeInfo, 0);
      }
      v42 = (FunctionEntity_o *)(*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_FunctionEntity__o *, _QWORD))v41)(
                                  v37,
                                  *(_QWORD *)(v41 + 8));
      if ( !v42 )
        sub_1C71608(0, v43);
      BattleSkillDropInfoDict = FunctionEntity__TryGetBattleSkillDropInfoDict(v42, &v52->fields._data_5__3, 0);
    }
    while ( !BattleSkillDropInfoDict );
    v44 = v52->fields._data_5__3;
    if ( !v44 )
      sub_1C71608(BattleSkillDropInfoDict, v23);
    appearEffectId = v44->fields.appearEffectId;
    result = 1;
    v52->fields.__1__state = 1;
    v52->fields.__2__current = appearEffectId;
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
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  if ( (byte_4CC7AFD & 1) == 0 )
  {
    sub_1C713B0(&QuestPhaseEntity__GetBattleSkillDropEffectIds_d__173_TypeInfo);
    byte_4CC7AFD = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0)) )
  {
    this->fields.__1__state = 0;
  }
  else
  {
    v4 = sub_1C715FC(QuestPhaseEntity__GetBattleSkillDropEffectIds_d__173_TypeInfo);
    System_Object___ctor((Il2CppObject *)v4, 0);
    *(_DWORD *)(v4 + 16) = 0;
    *(_DWORD *)(v4 + 24) = System_Environment__get_CurrentManagedThreadId(0);
    _4__this = this->fields.__4__this;
    *(_QWORD *)(v4 + 32) = _4__this;
    sub_1C71354((GrandQuestFolderBoardItem_o *)(v4 + 32), (int32_t)_4__this, v6, v7, v8, v9, v10, v11);
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

  v2 = sub_1C713C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C715FC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C713C4(&Method_QuestPhaseEntity__GetBattleSkillDropEffectIds_d__173_System_Collections_IEnumerator_Reset__);
  sub_1C714D8(v3, v4);
}


Il2CppObject *QuestPhaseEntity__GetBattleSkillDropEffectIds_d__173__System_Collections_IEnumerator_get_Current(
        QuestPhaseEntity__GetBattleSkillDropEffectIds_d__173_o *this,
        const MethodInfo *method)
{
  int32_t _2__current; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4CC7AFC & 1) == 0 )
  {
    sub_1C713B0(&int_TypeInfo);
    byte_4CC7AFC = 1;
  }
  _2__current = this->fields.__2__current;
  return (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &_2__current);
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

  if ( (byte_4CC7AFB & 1) == 0 )
  {
    sub_1C713B0(&System_IDisposable_TypeInfo);
    byte_4CC7AFB = 1;
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
      v7 = sub_1C47738(_7__wrap1, System_IDisposable_TypeInfo, 0);
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
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  long double inited; // q0
  int32_t _1__state; // w8
  QuestPhaseEntity_o *_4__this; // x20
  _QWORD *v12; // x21
  __int64 v13; // x8
  __int64 v14; // x0
  __int64 p__7__wrap1; // x0
  struct System_Int32_array *ScriptIntArrayParam; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  int32_t v23; // w8
  int32_t v24; // w20
  struct System_Int32_array *_7__wrap1; // x9
  int32_t max_length; // w10
  bool result; // w0
  int32_t v28; // w1
  struct FunctionEntity_o **p__2__current; // x19
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4CC7AFE & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Array_Empty_int___);
    sub_1C713B0(&Method_DataManager_GetMaster_FunctionMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
    sub_1C713B0(&StringLiteral_17104/*"battleSkillDropFuncIds"*/);
    byte_4CC7AFE = 1;
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
  v12 = Method_System_Array_Empty_int___;
  v13 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v13 )
  {
    sub_1C474A0(Method_System_Array_Empty_int___);
    v13 = v12[7];
  }
  v14 = *(_QWORD *)(v13 + 16);
  if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
    v14 = sub_1C47444(inited);
  if ( !*(_DWORD *)(v14 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v14);
  p__7__wrap1 = *(_QWORD *)(v12[7] + 16LL);
  if ( (*(_BYTE *)(p__7__wrap1 + 309) & 1) == 0 )
    p__7__wrap1 = sub_1C47444(inited);
  if ( !_4__this )
LABEL_30:
    sub_1C71608(p__7__wrap1, method);
  ScriptIntArrayParam = QuestPhaseEntity__getScriptIntArrayParam(
                          _4__this,
                          (System_String_o *)StringLiteral_17104/*"battleSkillDropFuncIds"*/,
                          **(System_Int32_array ***)(p__7__wrap1 + 184),
                          v3);
  this->fields.__7__wrap1 = ScriptIntArrayParam;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.__7__wrap1,
    (int32_t)ScriptIntArrayParam,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  v23 = 0;
  for ( this->fields.__7__wrap2 = 0; ; this->fields.__7__wrap2 = v23 )
  {
    p__7__wrap1 = (__int64)&this->fields.__7__wrap1;
    _7__wrap1 = this->fields.__7__wrap1;
    if ( !_7__wrap1 )
      goto LABEL_30;
    max_length = _7__wrap1->max_length;
    if ( v23 >= max_length )
    {
      *(_QWORD *)p__7__wrap1 = 0;
      sub_1C71354((GrandQuestFolderBoardItem_o *)p__7__wrap1, 0, v2, (int32_t)v3, v4, v5, v6, v7);
      return 0;
    }
    if ( v23 >= (unsigned int)max_length )
      sub_1C71610(p__7__wrap1);
    v24 = _7__wrap1->m_Items[v23];
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    p__7__wrap1 = (__int64)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_FunctionMaster___);
    if ( !p__7__wrap1 )
      goto LABEL_30;
    p__7__wrap1 = DataMasterBase_object__object__int___TryGetEntity(
                    (DataMasterBase_TMaster__TEntity__PKType__o *)p__7__wrap1,
                    &entity,
                    v24,
                    (const MethodInfo_3408ECC *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
    if ( (p__7__wrap1 & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_30;
      if ( FuncList__Check(149, (int32_t)entity[1].monitor, 0) )
        break;
    }
LABEL_23:
    v23 = this->fields.__7__wrap2 + 1;
  }
  v28 = (int)entity;
  this->fields.__2__current = (struct FunctionEntity_o *)entity;
  p__2__current = &this->fields.__2__current;
  sub_1C71354((GrandQuestFolderBoardItem_o *)p__2__current, v28, v2, (int32_t)v3, v4, v5, v6, v7);
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
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  if ( (byte_4CC7AFF & 1) == 0 )
  {
    sub_1C713B0(&QuestPhaseEntity__GetBattleSkillDropFunctionEntities_d__172_TypeInfo);
    byte_4CC7AFF = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0)) )
  {
    this->fields.__1__state = 0;
  }
  else
  {
    v4 = sub_1C715FC(QuestPhaseEntity__GetBattleSkillDropFunctionEntities_d__172_TypeInfo);
    System_Object___ctor((Il2CppObject *)v4, 0);
    *(_DWORD *)(v4 + 16) = 0;
    *(_DWORD *)(v4 + 32) = System_Environment__get_CurrentManagedThreadId(0);
    _4__this = this->fields.__4__this;
    *(_QWORD *)(v4 + 40) = _4__this;
    sub_1C71354((GrandQuestFolderBoardItem_o *)(v4 + 40), (int32_t)_4__this, v6, v7, v8, v9, v10, v11);
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

  v2 = sub_1C713C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C715FC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C713C4(&Method_QuestPhaseEntity__GetBattleSkillDropFunctionEntities_d__172_System_Collections_IEnumerator_Reset__);
  sub_1C714D8(v3, v4);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CC7AF7 & 1) == 0 )
  {
    sub_1C713B0(&QuestPhaseEntity___c_TypeInfo);
    byte_4CC7AF7 = 1;
  }
  v1 = (Il2CppObject *)sub_1C715FC(QuestPhaseEntity___c_TypeInfo);
  System_Object___ctor(v1, 0);
  QuestPhaseEntity___c_TypeInfo->static_fields->__9 = (struct QuestPhaseEntity___c_o *)v1;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)QuestPhaseEntity___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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

  if ( (byte_4CC7AF9 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC7AF9 = 1;
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
    sub_1C71608(this, 0);
  return x->fields.priority;
}


int32_t QuestPhaseEntity___c___getScriptIntArrayParam_b__33_0(
        QuestPhaseEntity___c_o *this,
        Il2CppObject *x,
        const MethodInfo *method)
{
  System_String_o *v4; // x0

  if ( (byte_4CC7AF8 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC7AF8 = 1;
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
    sub_1C71608(this, 0);
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
    sub_1C71608(this, 0);
  return x->fields.svtId == this->fields.servantId;
}