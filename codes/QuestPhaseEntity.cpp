void QuestPhaseEntity___ctor(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5938D43 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_5938D43 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *QuestPhaseEntity__CreatePK(int32_t questId, int32_t phase, const MethodInfo *method)
{
  if ( (byte_5938D42 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_5938D42 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           questId,
           phase,
           (const MethodInfo_3820F68 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *QuestPhaseEntity__CreatePrimaryKey(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return QuestPhaseEntity__CreatePK(this->fields.questId, this->fields.phase, v2);
}


float QuestPhaseEntity__EnemyExBattleUiPositionY(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5938DE2 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_19875/*"enemyExBattleUiPositionY"*/);
    byte_5938DE2 = 1;
  }
  return (float)EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_19875/*"enemyExBattleUiPositionY"*/, 0, 0);
}


System_Collections_Generic_Dictionary_string__object__o *QuestPhaseEntity__GetAddEquipSkills(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_Collections_Generic_Dictionary_string__object__o *result; // x0
  __int64 v5; // x2
  __int64 naturalAligment; // x9
  QuestPhaseEntity_o *v7; // x0
  int32_t v8; // w1
  const MethodInfo *v9; // x2

  if ( (byte_5938D52 & 1) == 0 )
  {
    sub_21FFC50(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_21FFC50(&StringLiteral_17316/*"addEquipSkills"*/);
    byte_5938D52 = 1;
  }
  result = (System_Collections_Generic_Dictionary_string__object__o *)QuestPhaseEntity__getScriptObj(
                                                                        this,
                                                                        (System_String_o *)StringLiteral_17316/*"addEquipSkills"*/,
                                                                        v2);
  if ( result )
  {
    naturalAligment = System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.naturalAligment;
    if ( result->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (System_Collections_Generic_Dictionary_string__object__c *)result->klass->_2.typeHierarchy[naturalAligment - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
    {
      sub_220024C(result, System_Collections_Generic_Dictionary_string__object__TypeInfo, v5);
      return (System_Collections_Generic_Dictionary_string__object__o *)QuestPhaseEntity__getResultBgmId(v7, v8, v9);
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

  if ( (byte_5938DC2 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_17335/*"addUniqueCameraIds"*/);
    byte_5938DC2 = 1;
  }
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_17335/*"addUniqueCameraIds"*/, defVal, v3);
}


int32_t QuestPhaseEntity__GetAdvantageClassId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5938D83 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_17638/*"auto_sel_support_type"*/);
    byte_5938D83 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_17638/*"auto_sel_support_type"*/, -1, v2);
}


System_Int32_array *QuestPhaseEntity__GetAssistIdArray(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  System_Int32_array *v3; // x2
  const MethodInfo *v4; // x3

  if ( (byte_5938D92 & 1) == 0 )
  {
    sub_21FFC50(&int___TypeInfo);
    sub_21FFC50(&StringLiteral_17597/*"assistIds"*/);
    byte_5938D92 = 1;
  }
  v3 = (System_Int32_array *)sub_21FFD10(int___TypeInfo, 0);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_17597/*"assistIds"*/, v3, v4);
}


System_Int32_array *QuestPhaseEntity__GetAssistWeightArray(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  System_Int32_array *v3; // x2
  const MethodInfo *v4; // x3

  if ( (byte_5938D93 & 1) == 0 )
  {
    sub_21FFC50(&int___TypeInfo);
    sub_21FFC50(&StringLiteral_17596/*"assistIdWeight"*/);
    byte_5938D93 = 1;
  }
  v3 = (System_Int32_array *)sub_21FFD10(int___TypeInfo, 0);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_17596/*"assistIdWeight"*/, v3, v4);
}


System_Int32_array *QuestPhaseEntity__GetAssumedEffectId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5938DA5 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_17601/*"assumedEffectId"*/);
    byte_5938DA5 = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_17601/*"assumedEffectId"*/, 0);
}


System_Int32_array *QuestPhaseEntity__GetBattleEffectMovieIds(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5938DCA & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_3236/*"BattleEffectMovieIds"*/);
    byte_5938DCA = 1;
  }
  return EntityScriptUtil__GetIntArray(this->fields.script, (System_String_o *)StringLiteral_3236/*"BattleEffectMovieIds"*/, 0, 0);
}


System_String_o *QuestPhaseEntity__GetBattleFinishMovie(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5938D67 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_17764/*"battleFinishMovie"*/);
    byte_5938D67 = 1;
  }
  return QuestPhaseEntity__getScriptStr(this, (System_String_o *)StringLiteral_17764/*"battleFinishMovie"*/, 0, v2);
}


BattleMovieParam_o *QuestPhaseEntity__GetBattleFinishMovieParam(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_5938D70 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_17765/*"battleFinishMovieParam"*/);
    byte_5938D70 = 1;
  }
  return QuestPhaseEntity__GetBattleMovieParam(this, (System_String_o *)StringLiteral_17765/*"battleFinishMovieParam"*/, v2);
}


int32_t QuestPhaseEntity__GetBattleFinishWaitTime(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5938DAE & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_17766/*"battleFinishWaitTime"*/);
    byte_5938DAE = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_17766/*"battleFinishWaitTime"*/, 0, v2);
}


int32_t QuestPhaseEntity__GetBattleItemObjectId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5938DBF & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_17770/*"battleItemObjectId"*/);
    byte_5938DBF = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_17770/*"battleItemObjectId"*/, 0, v2);
}


BattleMovieParam_o *QuestPhaseEntity__GetBattleMovieParam(
        QuestPhaseEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  BattleMovieParam_o *result; // x0
  __int64 v6; // x1
  Il2CppObject *v7; // x19

  if ( (byte_5938D71 & 1) == 0 )
  {
    sub_21FFC50(&Method_BasicHelper_GetValue_string__object___);
    sub_21FFC50(&Method_JsonManager_Deserialize_BattleMovieParam___);
    sub_21FFC50(&JsonManager_TypeInfo);
    byte_5938D71 = 1;
  }
  result = (BattleMovieParam_o *)BasicHelper__GetValue_object__object_(
                                   (System_Collections_Generic_Dictionary_K__V__o *)this->fields.script,
                                   (Il2CppObject *)key,
                                   0,
                                   (const MethodInfo_37E14A0 *)Method_BasicHelper_GetValue_string__object___);
  if ( result )
  {
    v7 = (Il2CppObject *)result;
    if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v6);
    return (BattleMovieParam_o *)JsonManager__Deserialize_object_(
                                   v7,
                                   (const MethodInfo_38A041C *)Method_JsonManager_Deserialize_BattleMovieParam___);
  }
  return result;
}


System_Collections_Generic_IEnumerable_int__o *QuestPhaseEntity__GetBattleSkillDropEffectIds(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_5938DD5 & 1) == 0 )
  {
    sub_21FFC50(&QuestPhaseEntity__GetBattleSkillDropEffectIds_d__178_TypeInfo);
    byte_5938DD5 = 1;
  }
  v3 = sub_21FFEBC(QuestPhaseEntity__GetBattleSkillDropEffectIds_d__178_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = -2;
  *(_DWORD *)(v3 + 24) = System_Environment__get_CurrentManagedThreadId(0);
  *(_QWORD *)(v3 + 32) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_Generic_IEnumerable_int__o *)v3;
}


System_Collections_Generic_IEnumerable_FunctionEntity__o *QuestPhaseEntity__GetBattleSkillDropFunctionEntities(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_5938DD4 & 1) == 0 )
  {
    sub_21FFC50(&QuestPhaseEntity__GetBattleSkillDropFunctionEntities_d__177_TypeInfo);
    byte_5938DD4 = 1;
  }
  v3 = sub_21FFEBC(QuestPhaseEntity__GetBattleSkillDropFunctionEntities_d__177_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = -2;
  *(_DWORD *)(v3 + 32) = System_Environment__get_CurrentManagedThreadId(0);
  *(_QWORD *)(v3 + 40) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v3 + 40), (int32_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_Generic_IEnumerable_FunctionEntity__o *)v3;
}


int32_t QuestPhaseEntity__GetBeforeBattleSkillActor(QuestPhaseEntity_o *this, int32_t defVal, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_5938DAF & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_17821/*"beforeBattleSkillActor"*/);
    byte_5938DAF = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_17821/*"beforeBattleSkillActor"*/, defVal, v3);
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
  __int64 v10; // x1
  long double v11; // q0
  _QWORD *v12; // x19
  __int64 v13; // x8
  __int64 v14; // x0
  __int64 v15; // x0

  if ( (byte_5938D47 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Array_Empty_int___);
    sub_21FFC50(&Method_DataManager_GetMaster_BattleBgMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    byte_5938D47 = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_BattleBgMaster___);
  PriorityBattleBgId = QuestPhaseEntity__GetPriorityBattleBgId(this, v4);
  PriorityBattleBgType = QuestPhaseEntity__GetPriorityBattleBgType(this, v6);
  if ( !Master_object )
    sub_21FFECC(PriorityBattleBgType, v8);
  result = BattleBgMaster__GetBgIndividuality(
             (BattleBgMaster_o *)Master_object,
             PriorityBattleBgId,
             PriorityBattleBgType,
             0);
  if ( !result )
  {
    v12 = Method_System_Array_Empty_int___;
    v13 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v13 )
    {
      sub_2237B54(Method_System_Array_Empty_int___);
      v13 = v12[7];
    }
    v14 = *(_QWORD *)(v13 + 16);
    if ( (*(_WORD *)(v14 + 309) & 1) == 0 )
      v14 = sub_2237AF8(v11);
    if ( !*(_DWORD *)(v14 + 228) )
      *(__n128 *)&v11 = j_il2cpp_runtime_class_init_0(v14, v10);
    v15 = *(_QWORD *)(v12[7] + 16LL);
    if ( (*(_WORD *)(v15 + 309) & 1) == 0 )
      v15 = sub_2237AF8(v11);
    return **(System_Int32_array ***)(v15 + 184);
  }
  return result;
}


System_Int32_array *QuestPhaseEntity__GetClearGiftItemListDisplay(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  System_Int32_array *v3; // x2
  const MethodInfo *v4; // x3

  if ( (byte_5938DA2 & 1) == 0 )
  {
    sub_21FFC50(&int___TypeInfo);
    sub_21FFC50(&StringLiteral_18759/*"clearGiftItemListDisplay"*/);
    byte_5938DA2 = 1;
  }
  v3 = (System_Int32_array *)sub_21FFD10(int___TypeInfo, 0);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_18759/*"clearGiftItemListDisplay"*/, v3, v4);
}


System_Int32_array *QuestPhaseEntity__GetCondHavingIds(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  System_Int32_array *v3; // x2
  const MethodInfo *v4; // x3

  if ( (byte_5938D8E & 1) == 0 )
  {
    sub_21FFC50(&int___TypeInfo);
    sub_21FFC50(&StringLiteral_18976/*"condHaving"*/);
    byte_5938D8E = 1;
  }
  v3 = (System_Int32_array *)sub_21FFD10(int___TypeInfo, 0);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_18976/*"condHaving"*/, v3, v4);
}


int32_t QuestPhaseEntity__GetCondQuestClearable(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5938DC6 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_18981/*"condQuestClearable"*/);
    byte_5938DC6 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_18981/*"condQuestClearable"*/, 0, v2);
}


int32_t QuestPhaseEntity__GetCorrectionIconId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5938D82 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_19055/*"correctionIconId"*/);
    byte_5938D82 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19055/*"correctionIconId"*/, -1, v2);
}


int32_t QuestPhaseEntity__GetDefenceTargetContinueRecoverRate(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5938DBC & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_20285/*"fieldHpContinueRecoverRate"*/);
    byte_5938DBC = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20285/*"fieldHpContinueRecoverRate"*/, 0, v2);
}


System_String_o *QuestPhaseEntity__GetEffectOnMap(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5938DCE & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_11090/*"PlayGetEffectOnMap"*/);
    byte_5938DCE = 1;
  }
  return QuestPhaseEntity__getScriptStr(this, (System_String_o *)StringLiteral_11090/*"PlayGetEffectOnMap"*/, 0, v2);
}


System_Int32_array *QuestPhaseEntity__GetEnemyInfoDispNpcSvtIdList(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  System_Int32_array *v3; // x2
  const MethodInfo *v4; // x3

  if ( (byte_5938DA0 & 1) == 0 )
  {
    sub_21FFC50(&int___TypeInfo);
    sub_21FFC50(&StringLiteral_23642/*"overwriteEnemyInfos"*/);
    byte_5938DA0 = 1;
  }
  v3 = (System_Int32_array *)sub_21FFD10(int___TypeInfo, 0);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_23642/*"overwriteEnemyInfos"*/, v3, v4);
}


System_String_array *QuestPhaseEntity__GetEnemyInfoOverwriteNpcSvtNameList(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  System_String_array *v3; // x2
  const MethodInfo *v4; // x3

  if ( (byte_5938DA1 & 1) == 0 )
  {
    sub_21FFC50(&string___TypeInfo);
    sub_21FFC50(&StringLiteral_23641/*"overwriteEnemyInfoNames"*/);
    byte_5938DA1 = 1;
  }
  v3 = (System_String_array *)sub_21FFD10(string___TypeInfo, 0);
  return QuestPhaseEntity__getScriptStringArrayParam(this, (System_String_o *)StringLiteral_23641/*"overwriteEnemyInfoNames"*/, v3, v4);
}


int32_t QuestPhaseEntity__GetEquipAddId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5938D9F & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_19906/*"equipAddId"*/);
    byte_5938D9F = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19906/*"equipAddId"*/, 0, v2);
}


System_Collections_Generic_IEnumerable_int__o *QuestPhaseEntity__GetExBattleUiSkillEffectIds(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_5938DEA & 1) == 0 )
  {
    sub_21FFC50(&QuestPhaseEntity__GetExBattleUiSkillEffectIds_d__199_TypeInfo);
    byte_5938DEA = 1;
  }
  v3 = sub_21FFEBC(QuestPhaseEntity__GetExBattleUiSkillEffectIds_d__199_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = -2;
  *(_DWORD *)(v3 + 24) = System_Environment__get_CurrentManagedThreadId(0);
  *(_QWORD *)(v3 + 32) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_Generic_IEnumerable_int__o *)v3;
}


int32_t QuestPhaseEntity__GetFinishEffectId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5938D7F & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_20319/*"finishEffectId"*/);
    byte_5938D7F = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20319/*"finishEffectId"*/, -1, v2);
}


int32_t QuestPhaseEntity__GetFormationBgmId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5938DA6 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_20453/*"formationBgmId"*/);
    byte_5938DA6 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20453/*"formationBgmId"*/, -1, v2);
}


float QuestPhaseEntity__GetFormationSubBgmFadeInTime(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5938DA8 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_20454/*"formationSubBgmFadeInTime"*/);
    byte_5938DA8 = 1;
  }
  return (float)QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20454/*"formationSubBgmFadeInTime"*/, 0, v2) / 1000.0;
}


int32_t QuestPhaseEntity__GetFormationSubBgmId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5938DA7 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_20455/*"formationSubBgmId"*/);
    byte_5938DA7 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20455/*"formationSubBgmId"*/, -1, v2);
}


System_Int32_array *QuestPhaseEntity__GetGimmickAnimTypeArray(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5938D7D & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_20756/*"gimmickAnimType"*/);
    byte_5938D7D = 1;
  }
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_20756/*"gimmickAnimType"*/, 0, v2);
}


int32_t QuestPhaseEntity__GetGimmickId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5938D76 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_20759/*"gimmickId"*/);
    byte_5938D76 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20759/*"gimmickId"*/, -1, v2);
}


System_Object_array *QuestPhaseEntity__GetGimmickResultVoiceArray(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5938D7C & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_24241/*"resultVoice"*/);
    byte_5938D7C = 1;
  }
  return QuestPhaseEntity__getScriptObjArrayParam(this, (System_String_o *)StringLiteral_24241/*"resultVoice"*/, 0, v2);
}


System_Int32_array *QuestPhaseEntity__GetGimmickSkillIdArray(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  System_Int32_array *v3; // x2
  const MethodInfo *v4; // x3

  if ( (byte_5938D79 & 1) == 0 )
  {
    sub_21FFC50(&int___TypeInfo);
    sub_21FFC50(&StringLiteral_24148/*"reelSkill"*/);
    byte_5938D79 = 1;
  }
  v3 = (System_Int32_array *)sub_21FFD10(int___TypeInfo, 0);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_24148/*"reelSkill"*/, v3, v4);
}


System_Int32_array *QuestPhaseEntity__GetGimmickSkillRateArray(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  System_Int32_array *v3; // x2
  const MethodInfo *v4; // x3

  if ( (byte_5938D7A & 1) == 0 )
  {
    sub_21FFC50(&int___TypeInfo);
    sub_21FFC50(&StringLiteral_24147/*"reelRate"*/);
    byte_5938D7A = 1;
  }
  v3 = (System_Int32_array *)sub_21FFD10(int___TypeInfo, 0);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_24147/*"reelRate"*/, v3, v4);
}


System_String_array *QuestPhaseEntity__GetGimmickStartVoiceArray(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5938D7B & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_24881/*"startVoice"*/);
    byte_5938D7B = 1;
  }
  return QuestPhaseEntity__getScriptStringArrayParam(this, (System_String_o *)StringLiteral_24881/*"startVoice"*/, 0, v2);
}


int32_t QuestPhaseEntity__GetGimmickSvtId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5938D77 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_20766/*"gimmickSvtId"*/);
    byte_5938D77 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20766/*"gimmickSvtId"*/, -1, v2);
}


int32_t QuestPhaseEntity__GetIconItemNumberDispType(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5938DC1 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_21052/*"iconItemNumberDispType"*/);
    byte_5938DC1 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21052/*"iconItemNumberDispType"*/, 0, v2);
}


float QuestPhaseEntity__GetIncomingCallDispTime(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5938DB2 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_21709/*"incomingCallDispTime"*/);
    byte_5938DB2 = 1;
  }
  return (float)QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21709/*"incomingCallDispTime"*/, 500, v2) / 1000.0;
}


System_String_o *QuestPhaseEntity__GetIncomingCallMessage(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5938DB1 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_21710/*"incomingCallMessage"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5938DB1 = 1;
  }
  return QuestPhaseEntity__getScriptStr(
           this,
           (System_String_o *)StringLiteral_21710/*"incomingCallMessage"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


System_String_o *QuestPhaseEntity__GetIncomingCallTitle(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5938DB0 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_21711/*"incomingCallTitle"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5938DB0 = 1;
  }
  return QuestPhaseEntity__getScriptStr(
           this,
           (System_String_o *)StringLiteral_21711/*"incomingCallTitle"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


int32_t QuestPhaseEntity__GetInitEventDeckNo(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5938DD8 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_21755/*"initEventDeckNo"*/);
    byte_5938DD8 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_21755/*"initEventDeckNo"*/, 0, 0);
}


System_String_o *QuestPhaseEntity__GetMapModelEntryAnimationName(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5938DAC & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_1475/*"3dMapEntryAnimName"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5938DAC = 1;
  }
  return QuestPhaseEntity__getScriptStr(
           this,
           (System_String_o *)StringLiteral_1475/*"3dMapEntryAnimName"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


int32_t QuestPhaseEntity__GetMasterSkillDelay(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5938D88 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_22513/*"masterSkillDelay"*/);
    byte_5938D88 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22513/*"masterSkillDelay"*/, 0, v2);
}


System_String_o *QuestPhaseEntity__GetMasterSkillDelayInfo(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5938D89 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_22514/*"masterSkillDelayInfo"*/);
    byte_5938D89 = 1;
  }
  return QuestPhaseEntity__getScriptStr(this, (System_String_o *)StringLiteral_22514/*"masterSkillDelayInfo"*/, 0, v2);
}


System_Int32_array *QuestPhaseEntity__GetMoveSceneInfo(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  System_Int32_array *v3; // x2
  const MethodInfo *v4; // x3

  if ( (byte_5938DB4 & 1) == 0 )
  {
    sub_21FFC50(&int___TypeInfo);
    sub_21FFC50(&StringLiteral_22724/*"moveSceneInfo"*/);
    byte_5938DB4 = 1;
  }
  v3 = (System_Int32_array *)sub_21FFD10(int___TypeInfo, 0);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_22724/*"moveSceneInfo"*/, v3, v4);
}


int32_t QuestPhaseEntity__GetMovieAfterCrossFadeStartFrame(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5938D6E & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_22729/*"movieAfterCrossFadeStartFrame"*/);
    byte_5938D6E = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22729/*"movieAfterCrossFadeStartFrame"*/, 0, v2);
}


int32_t QuestPhaseEntity__GetMovieAfterCrossFadeTime(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5938D6D & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_22730/*"movieAfterCrossFadeTime"*/);
    byte_5938D6D = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22730/*"movieAfterCrossFadeTime"*/, 0, v2);
}


System_String_o *QuestPhaseEntity__GetMovieFolder(QuestPhaseEntity_o *this, int32_t gender, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 *v6; // x8
  System_String_o *result; // x0

  if ( (byte_5938DEC & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_22453/*"maleMovieFolder"*/);
    sub_21FFC50(&StringLiteral_22732/*"movieFolder"*/);
    sub_21FFC50(&StringLiteral_20273/*"femaleMovieFolder"*/);
    byte_5938DEC = 1;
  }
  if ( gender == 2 )
  {
    v6 = &StringLiteral_20273/*"femaleMovieFolder"*/;
LABEL_7:
    result = QuestPhaseEntity__getScriptStr(this, (System_String_o *)*v6, 0, v3);
    if ( result )
      return result;
    return QuestPhaseEntity__getScriptStr(this, (System_String_o *)StringLiteral_22732/*"movieFolder"*/, 0, v3);
  }
  if ( gender == 1 )
  {
    v6 = &StringLiteral_22453/*"maleMovieFolder"*/;
    goto LABEL_7;
  }
  return QuestPhaseEntity__getScriptStr(this, (System_String_o *)StringLiteral_22732/*"movieFolder"*/, 0, v3);
}


System_String_o *QuestPhaseEntity__GetMoviePlayTime(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1
  int32_t ScriptIntParam; // w19
  System_TimeSpan_o v6; // x0
  System_TimeSpan_o v7; // x0
  bool v8; // cc
  __int64 v9; // x1
  int v10; // w8
  System_TimeSpan_o v11; // x0
  Il2CppObject *v12; // x19
  System_TimeSpan_o v13; // x0
  Il2CppObject *v14; // x0
  System_TimeSpan_o v16; // x0
  Il2CppObject *v17; // x0
  int32_t v18; // [xsp+8h] [xbp-38h] BYREF
  int32_t Seconds; // [xsp+Ch] [xbp-34h] BYREF
  __int64 v20; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_5938DEE & 1) == 0 )
  {
    sub_21FFC50(&System_TimeSpan_TypeInfo);
    sub_21FFC50(&StringLiteral_22734/*"moviePlayTime"*/);
    sub_21FFC50(&StringLiteral_26566/*"{0}分{1}秒"*/);
    sub_21FFC50(&StringLiteral_26568/*"{0}秒"*/);
    byte_5938DEE = 1;
  }
  v20 = 0;
  ScriptIntParam = QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22734/*"moviePlayTime"*/, 0, v2);
  if ( !*(&System_TimeSpan_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_TimeSpan_TypeInfo, v4);
  v6.fields._ticks = (int64_t)&v20;
  System_TimeSpan___ctor_77029652(v6, 0, 0, ScriptIntParam, 0);
  v7.fields._ticks = (int64_t)&v20;
  v8 = System_TimeSpan__get_Minutes(v7, 0) < 1;
  v10 = *(&System_TimeSpan_TypeInfo->_2.cctor_finished + 1);
  if ( v8 )
  {
    if ( !v10 )
      j_il2cpp_runtime_class_init_0(System_TimeSpan_TypeInfo, v9);
    v16.fields._ticks = (int64_t)&v20;
    Seconds = System_TimeSpan__get_Seconds(v16, 0);
    v17 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &Seconds);
    return System_String__Format((System_String_o *)StringLiteral_26568/*"{0}秒"*/, v17, 0);
  }
  else
  {
    if ( !v10 )
      j_il2cpp_runtime_class_init_0(System_TimeSpan_TypeInfo, v9);
    v11.fields._ticks = (int64_t)&v20;
    Seconds = System_TimeSpan__get_Minutes(v11, 0);
    v12 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &Seconds);
    v13.fields._ticks = (int64_t)&v20;
    v18 = System_TimeSpan__get_Seconds(v13, 0);
    v14 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v18);
    return System_String__Format_75484576((System_String_o *)StringLiteral_26566/*"{0}分{1}秒"*/, v12, v14, 0);
  }
}


int32_t QuestPhaseEntity__GetMoviePlayType(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5938DED & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_22735/*"moviePlayType"*/);
    byte_5938DED = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22735/*"moviePlayType"*/, 1, v2);
}


int32_t QuestPhaseEntity__GetNextSceneId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5938D8C & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_23285/*"nextSceneId"*/);
    byte_5938D8C = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_23285/*"nextSceneId"*/, 0, v2);
}


System_String_array *QuestPhaseEntity__GetNextSceneParam(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  System_String_array *result; // x0

  if ( (byte_5938D8D & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_23286/*"nextSceneParam"*/);
    byte_5938D8D = 1;
  }
  result = (System_String_array *)QuestPhaseEntity__getScriptStr(this, (System_String_o *)StringLiteral_23286/*"nextSceneParam"*/, 0, v2);
  if ( result )
    return System_String__Split((System_String_o *)result, 0x2Cu, 0, 0);
  return result;
}


int32_t QuestPhaseEntity__GetNotDispEquipSkillChargeTurn(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5938DC0 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_23382/*"notDispEquipSkillChargeTurn"*/);
    byte_5938DC0 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_23382/*"notDispEquipSkillChargeTurn"*/, 0, v2);
}


System_Int32_array *QuestPhaseEntity__GetNotHavingQuests(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  System_Int32_array *v3; // x2
  const MethodInfo *v4; // x3

  if ( (byte_5938D8F & 1) == 0 )
  {
    sub_21FFC50(&int___TypeInfo);
    sub_21FFC50(&StringLiteral_23388/*"notHavingQuest"*/);
    byte_5938D8F = 1;
  }
  v3 = (System_Int32_array *)sub_21FFD10(int___TypeInfo, 0);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_23388/*"notHavingQuest"*/, v3, v4);
}


System_Collections_Generic_Dictionary_int__int____o *QuestPhaseEntity__GetNpcAiInfo(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x21
  System_Collections_Generic_Dictionary_int__object__o *v4; // x22
  struct System_Collections_Generic_Dictionary_string__object__o *v5; // x0
  __int64 v6; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  System_Collections_Generic_Dictionary_int__int____o **v13; // x20
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  Il2CppObject *v15; // x22
  __int64 naturalAligment; // x10
  const MethodInfo *v17; // x2
  System_Action_object__o *v19; // x19
  Il2CppObject *obj; // [xsp+0h] [xbp-40h] BYREF
  Il2CppObject *value; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_5938D9D & 1) == 0 )
  {
    sub_21FFC50(&System_Action_object__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_int__int____TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_object__ForEach__);
    sub_21FFC50(&System_Collections_Generic_List_object__TypeInfo);
    sub_21FFC50(&Method_QuestPhaseEntity___c__DisplayClass121_0__GetNpcAiInfo_b__0__);
    sub_21FFC50(&QuestPhaseEntity___c__DisplayClass121_0_TypeInfo);
    sub_21FFC50(&StringLiteral_17385/*"aiMultiNpc"*/);
    sub_21FFC50(&StringLiteral_17386/*"aiNpc"*/);
    byte_5938D9D = 1;
  }
  obj = 0;
  value = 0;
  v3 = sub_21FFEBC(QuestPhaseEntity___c__DisplayClass121_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  v4 = (System_Collections_Generic_Dictionary_int__object__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_int__int____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v4,
    (const MethodInfo_3F68354 *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  if ( !v3 )
    goto LABEL_14;
  *(_QWORD *)(v3 + 16) = v4;
  v13 = (System_Collections_Generic_Dictionary_int__int____o **)(v3 + 16);
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v3 + 16), (int32_t)v4, v7, v8, v9, v10, v11, v12);
  script = this->fields.script;
  if ( !script )
    return *v13;
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)script,
         (Il2CppObject *)StringLiteral_17385/*"aiMultiNpc"*/,
         &value,
         (const MethodInfo_3FCBFD0 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    v15 = value;
    if ( value )
    {
      naturalAligment = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment;
      if ( value->klass->_2.naturalAligment >= (unsigned int)naturalAligment
        && (System_Collections_Generic_List_object__c *)value->klass->_2.typeHierarchy[naturalAligment - 1] == System_Collections_Generic_List_object__TypeInfo )
      {
        v19 = (System_Action_object__o *)sub_21FFEBC(System_Action_object__TypeInfo);
        System_Action_object____ctor(
          v19,
          (Il2CppObject *)v3,
          Method_QuestPhaseEntity___c__DisplayClass121_0__GetNpcAiInfo_b__0__,
          0);
        System_Collections_Generic_List_object___ForEach(
          (System_Collections_Generic_List_object__o *)v15,
          (System_Action_T__o *)v19,
          (const MethodInfo_445054C *)Method_System_Collections_Generic_List_object__ForEach__);
        return *v13;
      }
    }
  }
  v5 = this->fields.script;
  if ( !v5 )
LABEL_14:
    sub_21FFECC(v5, v6);
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)v5,
         (Il2CppObject *)StringLiteral_17386/*"aiNpc"*/,
         &obj,
         (const MethodInfo_3FCBFD0 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    QuestPhaseEntity__SetNpcAiInfo((System_Collections_Generic_IDictionary_int__int____o *)*v13, obj, v17);
  }
  return *v13;
}


System_String_o *QuestPhaseEntity__GetOpenedPeriodMessage(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5938DD7 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_23564/*"openPeriodMessage"*/);
    byte_5938DD7 = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_23564/*"openPeriodMessage"*/, 0, 0);
}


int32_t QuestPhaseEntity__GetOpenedPeriodPrivilegeId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5938DD6 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_23565/*"openPeriodPrivilegeId"*/);
    byte_5938DD6 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_23565/*"openPeriodPrivilegeId"*/, 0, 0);
}


int32_t QuestPhaseEntity__GetOverWriteMasterImageId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5938D6B & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_22503/*"masterImageId"*/);
    byte_5938D6B = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22503/*"masterImageId"*/, 0, v2);
}


int32_t QuestPhaseEntity__GetOverwriteCommandSpellContinue(
        QuestPhaseEntity_o *this,
        int32_t def,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_5938D97 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_23630/*"overwriteCommandSpellContinue"*/);
    byte_5938D97 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_23630/*"overwriteCommandSpellContinue"*/, def, v3);
}


int32_t QuestPhaseEntity__GetOverwriteCommandSpellIcon(
        QuestPhaseEntity_o *this,
        int32_t genderType,
        System_Int32_array *defVal,
        const MethodInfo *method)
{
  System_Int32_array *ScriptIntArrayParam; // x0
  int32_t *m_Items; // x8

  if ( (byte_5938DAA & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_23631/*"overwriteCommandSpellIcons"*/);
    byte_5938DAA = 1;
  }
  ScriptIntArrayParam = QuestPhaseEntity__getScriptIntArrayParam(
                          this,
                          (System_String_o *)StringLiteral_23631/*"overwriteCommandSpellIcons"*/,
                          defVal,
                          method);
  if ( ScriptIntArrayParam )
  {
    if ( genderType == 2 )
    {
      if ( (ScriptIntArrayParam->max_length & 0xFFFFFFFE) != 0 )
      {
        m_Items = &ScriptIntArrayParam->m_Items[1];
        goto LABEL_10;
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
        m_Items = ScriptIntArrayParam->m_Items;
LABEL_10:
        LODWORD(ScriptIntArrayParam) = *m_Items;
        return (int)ScriptIntArrayParam;
      }
    }
    sub_21FFED4(ScriptIntArrayParam);
  }
  return (int)ScriptIntArrayParam;
}


System_Collections_Generic_Dictionary_string__object__o *QuestPhaseEntity__GetOverwriteEquipSkills(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_Collections_Generic_Dictionary_string__object__o *result; // x0
  __int64 v5; // x2
  __int64 naturalAligment; // x9
  QuestPhaseEntity_o *v7; // x0
  const MethodInfo *v8; // x1

  if ( (byte_5938D51 & 1) == 0 )
  {
    sub_21FFC50(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_21FFC50(&StringLiteral_23644/*"overwriteEquipSkills"*/);
    byte_5938D51 = 1;
  }
  result = (System_Collections_Generic_Dictionary_string__object__o *)QuestPhaseEntity__getScriptObj(
                                                                        this,
                                                                        (System_String_o *)StringLiteral_23644/*"overwriteEquipSkills"*/,
                                                                        v2);
  if ( result )
  {
    naturalAligment = System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.naturalAligment;
    if ( result->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (System_Collections_Generic_Dictionary_string__object__c *)result->klass->_2.typeHierarchy[naturalAligment - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
    {
      sub_220024C(result, System_Collections_Generic_Dictionary_string__object__TypeInfo, v5);
      return QuestPhaseEntity__GetAddEquipSkills(v7, v8);
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
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_String_o *v18; // x2
  MethodInfo *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  System_Int32_array *v24; // x0
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  const MethodInfo *v31; // x3
  System_Int32_array *v32; // x0
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  const MethodInfo *v39; // x3
  System_Int32_array *v40; // x0
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  System_String_o *v48; // x2
  System_String_o *v49; // x3
  int32_t v50; // w4
  int32_t v51; // w5
  bool v52; // w6
  bool v53; // w7
  System_String_o *v54; // x2
  System_String_o *v55; // x3
  int32_t v56; // w4
  int32_t v57; // w5
  bool v58; // w6
  bool v59; // w7

  if ( (byte_5938D84 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_23658/*"overwriteLimitCountSvtIds"*/);
    sub_21FFC50(&StringLiteral_23659/*"overwriteLimitCounts"*/);
    sub_21FFC50(&StringLiteral_23656/*"overwriteLimitCountIconIds"*/);
    sub_21FFC50(&StringLiteral_23657/*"overwriteLimitCountRangeTypes"*/);
    byte_5938D84 = 1;
  }
  ScriptIntArrayParam = QuestPhaseEntity__getScriptIntArrayParam(
                          this,
                          (System_String_o *)StringLiteral_23658/*"overwriteLimitCountSvtIds"*/,
                          0,
                          (const MethodInfo *)overwriteLimitCountIconIds);
  *overwriteLimitCountSvtIds = ScriptIntArrayParam;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)overwriteLimitCountSvtIds,
    (int32_t)ScriptIntArrayParam,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  if ( *overwriteLimitCountSvtIds )
  {
    v24 = QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_23659/*"overwriteLimitCounts"*/, 0, v19);
    *overwriteLimitCounts = v24;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)overwriteLimitCounts, (int32_t)v24, v25, v26, v27, v28, v29, v30);
    v32 = QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_23656/*"overwriteLimitCountIconIds"*/, 0, v31);
    *overwriteLimitCountIconIds = v32;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)overwriteLimitCountIconIds,
      (int32_t)v32,
      v33,
      v34,
      v35,
      v36,
      v37,
      v38);
    v40 = QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_23657/*"overwriteLimitCountRangeTypes"*/, 0, v39);
    *overwriteLimitCountRangeTypes = v40;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)overwriteLimitCountRangeTypes,
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
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)overwriteLimitCounts,
      0,
      v18,
      (System_String_o *)v19,
      v20,
      v21,
      v22,
      v23);
    *overwriteLimitCountIconIds = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)overwriteLimitCountIconIds, 0, v48, v49, v50, v51, v52, v53);
    *overwriteLimitCountRangeTypes = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)overwriteLimitCountRangeTypes, 0, v54, v55, v56, v57, v58, v59);
    return 0;
  }
}


System_Int32_array *QuestPhaseEntity__GetOverwriteResultBgmCondIds(
        QuestPhaseEntity_o *this,
        System_Int32_array *defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_5938D55 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_23677/*"overwriteResultBgmCondIds"*/);
    byte_5938D55 = 1;
  }
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_23677/*"overwriteResultBgmCondIds"*/, defVal, v3);
}


System_Int32_array *QuestPhaseEntity__GetOverwriteResultBgmIds(
        QuestPhaseEntity_o *this,
        System_Int32_array *defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_5938D54 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_23678/*"overwriteResultBgmIds"*/);
    byte_5938D54 = 1;
  }
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_23678/*"overwriteResultBgmIds"*/, defVal, v3);
}


System_Collections_Generic_Dictionary_int__int__o *QuestPhaseEntity__GetOverwriteSvtTreasureDeviceLv(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x19
  System_Collections_Generic_Dictionary_int__int__o *v4; // x22
  __int64 v5; // x0
  __int64 v6; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  Il2CppObject *Value_object__object; // x0
  __int64 v14; // x2
  System_Collections_IEnumerable_o *v15; // x20
  __int64 naturalAligment; // x9
  System_Collections_Generic_IEnumerable_T__o *v17; // x20
  System_Action_object__o *v18; // x22

  if ( (byte_5938DE8 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_List_object___TypeInfo);
    sub_21FFC50(&Method_BasicHelper_ForEach_List_object____);
    sub_21FFC50(&Method_BasicHelper_GetValue_string__object___);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_21FFC50(&Method_System_Linq_Enumerable_OfType_List_object____);
    sub_21FFC50(&System_Collections_Generic_List_object__TypeInfo);
    sub_21FFC50(&Method_QuestPhaseEntity___c__DisplayClass197_0__GetOverwriteSvtTreasureDeviceLv_b__0__);
    sub_21FFC50(&QuestPhaseEntity___c__DisplayClass197_0_TypeInfo);
    sub_21FFC50(&StringLiteral_23694/*"overwriteSvtTreasureDeviceLv"*/);
    byte_5938DE8 = 1;
  }
  v3 = sub_21FFEBC(QuestPhaseEntity___c__DisplayClass197_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  v4 = (System_Collections_Generic_Dictionary_int__int__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v4,
    (const MethodInfo_3F5EAD4 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  if ( !v3 )
LABEL_11:
    sub_21FFECC(v5, v6);
  *(_QWORD *)(v3 + 16) = v4;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v3 + 16), (int32_t)v4, v7, v8, v9, v10, v11, v12);
  Value_object__object = BasicHelper__GetValue_object__object_(
                           (System_Collections_Generic_Dictionary_K__V__o *)this->fields.script,
                           (Il2CppObject *)StringLiteral_23694/*"overwriteSvtTreasureDeviceLv"*/,
                           0,
                           (const MethodInfo_37E14A0 *)Method_BasicHelper_GetValue_string__object___);
  v15 = (System_Collections_IEnumerable_o *)Value_object__object;
  if ( Value_object__object )
  {
    naturalAligment = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment;
    if ( Value_object__object->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (System_Collections_Generic_List_object__c *)Value_object__object->klass->_2.typeHierarchy[naturalAligment - 1] != System_Collections_Generic_List_object__TypeInfo )
    {
      sub_220024C(Value_object__object, System_Collections_Generic_List_object__TypeInfo, v14);
      goto LABEL_11;
    }
  }
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)Value_object__object, 0) )
  {
    v17 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__OfType_object_(
                                                           v15,
                                                           (const MethodInfo_3855054 *)Method_System_Linq_Enumerable_OfType_List_object____);
    v18 = (System_Action_object__o *)sub_21FFEBC(System_Action_List_object___TypeInfo);
    System_Action_object____ctor(
      v18,
      (Il2CppObject *)v3,
      Method_QuestPhaseEntity___c__DisplayClass197_0__GetOverwriteSvtTreasureDeviceLv_b__0__,
      0);
    BasicHelper__ForEach_object_(
      v17,
      (System_Action_T__o *)v18,
      (const MethodInfo_37DF47C *)Method_BasicHelper_ForEach_List_object____);
  }
  return *(System_Collections_Generic_Dictionary_int__int__o **)(v3 + 16);
}


System_Int32_array *QuestPhaseEntity__GetPrioredIndividuality(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  System_Int32_array *result; // x0
  __int64 v4; // x1
  long double v5; // q0
  _QWORD *v6; // x19
  __int64 v7; // x8
  __int64 v8; // x0
  __int64 v9; // x0

  if ( (byte_5938D45 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Array_Empty_int___);
    byte_5938D45 = 1;
  }
  result = QuestPhaseEntity__GetPrioredIndividualityLocal(this, method);
  if ( !result )
  {
    v6 = Method_System_Array_Empty_int___;
    v7 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v7 )
    {
      sub_2237B54(Method_System_Array_Empty_int___);
      v7 = v6[7];
    }
    v8 = *(_QWORD *)(v7 + 16);
    if ( (*(_WORD *)(v8 + 309) & 1) == 0 )
      v8 = sub_2237AF8(v5);
    if ( !*(_DWORD *)(v8 + 228) )
      *(__n128 *)&v5 = j_il2cpp_runtime_class_init_0(v8, v4);
    v9 = *(_QWORD *)(v6[7] + 16LL);
    if ( (*(_WORD *)(v9 + 309) & 1) == 0 )
      v9 = sub_2237AF8(v5);
    return **(System_Int32_array ***)(v9 + 184);
  }
  return result;
}


System_Int32_array *QuestPhaseEntity__GetPrioredIndividualityLocal(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  int v3; // w8
  Il2CppObject *Master_object; // x20
  const MethodInfo *v5; // x1
  System_Int32_array *UniqueId; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  System_Int32_array *result; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x1
  QuestPhaseIndividualityEntity_o *v12; // x20
  const MethodInfo *v13; // x2
  QuestPhaseIndividualityEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5938D46 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_QuestBehaviorMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_QuestPhaseIndividualityMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    byte_5938D46 = 1;
  }
  v3 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  entity = 0;
  if ( !v3 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_QuestBehaviorMaster___);
  UniqueId = (System_Int32_array *)QuestPhaseEntity__GetUniqueId(this, v5);
  if ( !Master_object )
    goto LABEL_15;
  result = QuestBehaviorMaster__GetBattleIndividuality((QuestBehaviorMaster_o *)Master_object, (int64_t)UniqueId, 0, v8);
  if ( !result )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v10);
    UniqueId = (System_Int32_array *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_QuestPhaseIndividualityMaster___);
    if ( !UniqueId )
      goto LABEL_15;
    if ( QuestPhaseIndividualityMaster__TryGetEntity(
           (QuestPhaseIndividualityMaster_o *)UniqueId,
           &entity,
           this->fields.questId,
           this->fields.phase,
           0) )
    {
      v12 = entity;
      UniqueId = QuestPhaseEntity__GetBgIndividuality(this, v11);
      if ( v12 )
        return QuestPhaseIndividualityEntity__GetAddAndDelAfterIndividuality(v12, UniqueId, v13);
LABEL_15:
      sub_21FFECC(UniqueId, v7);
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

  if ( (byte_5938D48 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_QuestBehaviorMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    byte_5938D48 = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_QuestBehaviorMaster___);
  UniqueId = QuestPhaseEntity__GetUniqueId(this, v4);
  if ( !Master_object )
    sub_21FFECC(UniqueId, v6);
  return QuestBehaviorMaster__GetBattleBg((QuestBehaviorMaster_o *)Master_object, UniqueId, this->fields.battleBgId, v7);
}


int32_t QuestPhaseEntity__GetPriorityBattleBgType(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x20
  const MethodInfo *v4; // x1
  int64_t UniqueId; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3

  if ( (byte_5938D49 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_QuestBehaviorMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    byte_5938D49 = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_QuestBehaviorMaster___);
  UniqueId = QuestPhaseEntity__GetUniqueId(this, v4);
  if ( !Master_object )
    sub_21FFECC(UniqueId, v6);
  return QuestBehaviorMaster__GetBattleBgType(
           (QuestBehaviorMaster_o *)Master_object,
           UniqueId,
           this->fields.battleBgType,
           v7);
}


int32_t QuestPhaseEntity__GetProgressAfterMovie(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5938D69 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_23936/*"progressAfterMovie"*/);
    byte_5938D69 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_23936/*"progressAfterMovie"*/, 0, v2);
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

  if ( (byte_5938D5E & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_21FFC50(&StringLiteral_23802/*"phaseRouteSelect"*/);
    byte_5938D5E = 1;
  }
  ScriptIntParam = QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_23802/*"phaseRouteSelect"*/, 0, v3);
  if ( ScriptIntParam < 1 )
    return 0;
  v7 = ScriptIntParam;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v9);
  if ( clsQuestCheck__CheckQuestPlayableNow((clsQuestCheck_o *)Instance, v7, isIncludeTempData, 0) )
    return v7;
  else
    return 0;
}


System_Int32_array *QuestPhaseEntity__GetReelIconIdArray(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  System_Int32_array *v3; // x2
  const MethodInfo *v4; // x3

  if ( (byte_5938D78 & 1) == 0 )
  {
    sub_21FFC50(&int___TypeInfo);
    sub_21FFC50(&StringLiteral_24146/*"reelIcon"*/);
    byte_5938D78 = 1;
  }
  v3 = (System_Int32_array *)sub_21FFD10(int___TypeInfo, 0);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_24146/*"reelIcon"*/, v3, v4);
}


int32_t QuestPhaseEntity__GetReferToQuestPhase(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5938DC7 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_24152/*"referToQuestPhase"*/);
    byte_5938DC7 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_24152/*"referToQuestPhase"*/, 0, v2);
}


System_String_o *QuestPhaseEntity__GetRenoCompletionDialogText(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5938DE0 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_11804/*"RenoCompletionDialogText"*/);
    byte_5938DE0 = 1;
  }
  return EntityScriptUtil__GetStringValue(
           this->fields.script,
           (System_String_o *)StringLiteral_11804/*"RenoCompletionDialogText"*/,
           **(System_String_o ***)(qword_594C0B8 + 184),
           0);
}


System_String_o *QuestPhaseEntity__GetRenoExplanationDialogText(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5938DDF & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_11806/*"RenoExplanationDialogText"*/);
    byte_5938DDF = 1;
  }
  return EntityScriptUtil__GetStringValue(
           this->fields.script,
           (System_String_o *)StringLiteral_11806/*"RenoExplanationDialogText"*/,
           **(System_String_o ***)(qword_594C0B8 + 184),
           0);
}


System_Int32_array *QuestPhaseEntity__GetSelectableQuests(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5938D5D & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_24009/*"questSelect"*/);
    byte_5938D5D = 1;
  }
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_24009/*"questSelect"*/, 0, v2);
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
  int32_t result; // w0

  SelectableQuests = QuestPhaseEntity__GetSelectableQuests(this, *(const MethodInfo **)&questId);
  if ( (selectIndex & 0x80000000) == 0 && SelectableQuests && SLODWORD(SelectableQuests->max_length) > selectIndex )
    return SelectableQuests->m_Items[selectIndex];
  result = QuestPhaseEntity__GetQuestPhaseSelectRoute(this, 0, v8);
  if ( result < 1 )
    return questId;
  return result;
}


System_Int32_array *QuestPhaseEntity__GetShadowOffSvtIds(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  System_Int32_array *v3; // x2
  const MethodInfo *v4; // x3

  if ( (byte_5938D87 & 1) == 0 )
  {
    sub_21FFC50(&int___TypeInfo);
    sub_21FFC50(&StringLiteral_24596/*"shadowOffSvtIds"*/);
    byte_5938D87 = 1;
  }
  v3 = (System_Int32_array *)sub_21FFD10(int___TypeInfo, 0);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_24596/*"shadowOffSvtIds"*/, v3, v4);
}


int32_t QuestPhaseEntity__GetSingleForceSvtId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5938D85 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_24700/*"singleForceSvtId"*/);
    byte_5938D85 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_24700/*"singleForceSvtId"*/, 0, v2);
}


int32_t QuestPhaseEntity__GetStartBattleSoundMode(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5938DC5 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_13568/*"StartBattleSoundMode"*/);
    byte_5938DC5 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_13568/*"StartBattleSoundMode"*/, 0, v2);
}


System_Int32_array *QuestPhaseEntity__GetStartMovieWave(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5938D6A & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_22736/*"movieWave"*/);
    byte_5938D6A = 1;
  }
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_22736/*"movieWave"*/, 0, v2);
}


int32_t QuestPhaseEntity__GetStartScreenEffect(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5938DC4 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_13567/*"StartBattleScreenEffect"*/);
    byte_5938DC4 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_13567/*"StartBattleScreenEffect"*/, 0, v2);
}


int32_t QuestPhaseEntity__GetSubMemberGainHpBattle(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5938DE5 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_24992/*"subMemberGainHpBattle"*/);
    byte_5938DE5 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_24992/*"subMemberGainHpBattle"*/, 0, v2);
}


int32_t QuestPhaseEntity__GetSubMemberGainHpPerBattle(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5938DE7 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_24993/*"subMemberGainHpPerBattle"*/);
    byte_5938DE7 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_24993/*"subMemberGainHpPerBattle"*/, 0, v2);
}


int32_t QuestPhaseEntity__GetSubMemberGainNpBattle(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5938DE6 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_24994/*"subMemberGainNpBattle"*/);
    byte_5938DE6 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_24994/*"subMemberGainNpBattle"*/, 0, v2);
}


int32_t QuestPhaseEntity__GetSupportInitDeckIndex(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5938D98 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_19993/*"eventDeckIndex"*/);
    byte_5938D98 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19993/*"eventDeckIndex"*/, 0, v2);
}


System_Int32_array *QuestPhaseEntity__GetTakeOverEnemyNpcIds(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5938DD2 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_25210/*"takeOverEnemyNpcIds"*/);
    byte_5938DD2 = 1;
  }
  return EntityScriptUtil__GetIntArray(this->fields.script, (System_String_o *)StringLiteral_25210/*"takeOverEnemyNpcIds"*/, 0, 0);
}


int32_t QuestPhaseEntity__GetTemporaryCommandSpell(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5938D95 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_25263/*"temporaryCommandSpell"*/);
    byte_5938D95 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_25263/*"temporaryCommandSpell"*/, -1, v2);
}


int64_t QuestPhaseEntity__GetUniqueId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  int32_t phase; // w19
  int32_t questId; // w20

  if ( (byte_5938D44 & 1) == 0 )
  {
    sub_21FFC50(&BattleDataDefine_TypeInfo);
    byte_5938D44 = 1;
  }
  questId = this->fields.questId;
  phase = this->fields.phase;
  if ( !*(&BattleDataDefine_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo, method);
  return BattleDataDefine__MakeQuestPhaseUniqueId(questId, phase, 0);
}


int32_t QuestPhaseEntity__GetUserEventDeckNo(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5938D86 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_25779/*"useEventDeckNo"*/);
    byte_5938D86 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_25779/*"useEventDeckNo"*/, 1, v2);
}


System_Int32_array *QuestPhaseEntity__GetVoiceOffPlayerSvtIdArray(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5938DA9 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_26029/*"voiceOffMySvtIds"*/);
    byte_5938DA9 = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_26029/*"voiceOffMySvtIds"*/, 0);
}


int32_t QuestPhaseEntity__GetWaitSetupSwitchPartyChargeTurn(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5938DBA & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_26111/*"waveSetupSwitchPartyChargeTurn"*/);
    byte_5938DBA = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_26111/*"waveSetupSwitchPartyChargeTurn"*/, 0, v2);
}


System_String_o *QuestPhaseEntity__GetWarBoardStartMovieName(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5938DA3 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_16175/*"WarBoardStartMovieName"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5938DA3 = 1;
  }
  return QuestPhaseEntity__getScriptStr(
           this,
           (System_String_o *)StringLiteral_16175/*"WarBoardStartMovieName"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


int32_t QuestPhaseEntity__GetWarId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  const MethodInfo *v4; // x1

  if ( (byte_5938D4A & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_QuestMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    byte_5938D4A = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_QuestMaster___);
  if ( !Master_object
    || (Master_object = DataMasterBase_object__object__int___GetEntity(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                          this->fields.questId,
                          (const MethodInfo_3EDD388 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__)) == 0 )
  {
    sub_21FFECC(Master_object, v4);
  }
  return QuestEntity__GetWarId((QuestEntity_o *)Master_object, v4);
}


System_String_array *QuestPhaseEntity__GetWaveStartMovie(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5938D68 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_26112/*"waveStartMovie"*/);
    byte_5938D68 = 1;
  }
  return QuestPhaseEntity__getScriptStringArrayParam(this, (System_String_o *)StringLiteral_26112/*"waveStartMovie"*/, 0, v2);
}


BattleMovieParam_o *QuestPhaseEntity__GetWaveStartMovieParam(
        QuestPhaseEntity_o *this,
        int32_t wave,
        const MethodInfo *method)
{
  Il2CppObject *v5; // x0
  Il2CppObject *v6; // x0
  System_String_o *v7; // x21
  const MethodInfo *v8; // x2
  Il2CppObject *v9; // x0
  Il2CppObject *v10; // x0
  int32_t v12; // [xsp+8h] [xbp-38h] BYREF
  int32_t v13; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_5938D6F & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_21FFC50(&StringLiteral_26114/*"wave{0}StartMovieParam"*/);
    sub_21FFC50(&StringLiteral_26113/*"waveStartMovieParam#{0}"*/);
    byte_5938D6F = 1;
  }
  v13 = wave;
  v5 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v13);
  v6 = (Il2CppObject *)System_String__Format((System_String_o *)StringLiteral_26113/*"waveStartMovieParam#{0}"*/, v5, 0);
  if ( this->fields.script )
  {
    v7 = (System_String_o *)v6;
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script,
           v6,
           (const MethodInfo_3FCA65C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      return QuestPhaseEntity__GetBattleMovieParam(this, v7, v8);
    }
  }
  v12 = wave;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v12);
  v10 = (Il2CppObject *)System_String__Format((System_String_o *)StringLiteral_26114/*"wave{0}StartMovieParam"*/, v9, 0);
  if ( this->fields.script
    && (v7 = (System_String_o *)v10,
        System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script,
          v10,
          (const MethodInfo_3FCA65C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__)) )
  {
    return QuestPhaseEntity__GetBattleMovieParam(this, v7, v8);
  }
  else
  {
    return 0;
  }
}


int32_t QuestPhaseEntity__GetWinBgmOffFlg(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5938D80 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_19852/*"endBgmOff"*/);
    byte_5938D80 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19852/*"endBgmOff"*/, 0, v2);
}


int32_t QuestPhaseEntity__GetWinVoiceOffFlg(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5938D7E & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_19866/*"endVoiceOff"*/);
    byte_5938D7E = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19866/*"endVoiceOff"*/, 0, v2);
}


bool QuestPhaseEntity__HasEnemyExBattleUiPositionY(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5938DE1 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_19875/*"enemyExBattleUiPositionY"*/);
    byte_5938DE1 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_19875/*"enemyExBattleUiPositionY"*/, 0);
}


bool QuestPhaseEntity__HasExtraBattleUserInterfaceData(
        QuestPhaseEntity_o *this,
        ExtraBattleUserInterfaceData_JsonConvertData_array **dataArray,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  long double v8; // q0
  _QWORD *v11; // x21
  __int64 v12; // x8
  __int64 v13; // x0
  __int64 v14; // x0
  ExtraBattleUserInterfaceData_JsonConvertData_array **v15; // x8
  ExtraBattleUserInterfaceData_JsonConvertData_array *v16; // x1
  __int64 v17; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v19; // x1
  Il2CppObject *v20; // x20
  ExtraBattleUserInterfaceData_JsonConvertData_array *v21; // x0
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5938DDB & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Array_Empty_ExtraBattleUserInterfaceData_JsonConvertData___);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_21FFC50(&Method_System_Linq_Enumerable_Any_ExtraBattleUserInterfaceData_JsonConvertData___);
    sub_21FFC50(&Method_JsonManager_Deserialize_ExtraBattleUserInterfaceData_JsonConvertData_____);
    sub_21FFC50(&JsonManager_TypeInfo);
    sub_21FFC50(&StringLiteral_20167/*"exBattleUI"*/);
    byte_5938DDB = 1;
  }
  v11 = Method_System_Array_Empty_ExtraBattleUserInterfaceData_JsonConvertData___;
  value = 0;
  v12 = *((_QWORD *)Method_System_Array_Empty_ExtraBattleUserInterfaceData_JsonConvertData___ + 7);
  if ( !v12 )
  {
    sub_2237B54(Method_System_Array_Empty_ExtraBattleUserInterfaceData_JsonConvertData___);
    v12 = v11[7];
  }
  v13 = *(_QWORD *)(v12 + 16);
  if ( (*(_WORD *)(v13 + 309) & 1) == 0 )
    v13 = sub_2237AF8(v8);
  if ( !*(_DWORD *)(v13 + 228) )
    *(__n128 *)&v8 = j_il2cpp_runtime_class_init_0(v13, dataArray);
  v14 = *(_QWORD *)(v11[7] + 16LL);
  if ( (*(_WORD *)(v14 + 309) & 1) == 0 )
    v14 = sub_2237AF8(v8);
  v15 = *(ExtraBattleUserInterfaceData_JsonConvertData_array ***)(v14 + 184);
  v16 = *v15;
  *dataArray = *v15;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)dataArray,
    (int32_t)v16,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  script = this->fields.script;
  if ( !script )
    sub_21FFECC(0, v17);
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)script,
         (Il2CppObject *)StringLiteral_20167/*"exBattleUI"*/,
         &value,
         (const MethodInfo_3FCBFD0 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    v20 = value;
    if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v19);
    v21 = (ExtraBattleUserInterfaceData_JsonConvertData_array *)JsonManager__Deserialize_object_(
                                                                  v20,
                                                                  (const MethodInfo_38A041C *)Method_JsonManager_Deserialize_ExtraBattleUserInterfaceData_JsonConvertData_____);
    *dataArray = v21;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)dataArray, (int32_t)v21, v22, v23, v24, v25, v26, v27);
  }
  return System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)*dataArray,
           (const MethodInfo_3832C14 *)Method_System_Linq_Enumerable_Any_ExtraBattleUserInterfaceData_JsonConvertData___);
}


bool QuestPhaseEntity__HasReleaseFocusQuestBoardKey(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5938DBD & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_21936/*"isReleaseFocus"*/);
    byte_5938DBD = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_21936/*"isReleaseFocus"*/, 0);
}


bool QuestPhaseEntity__IsActiveAssistSkill(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  System_Int32_array *v3; // x0
  const MethodInfo *v4; // x3
  System_Int32_array *ScriptIntArrayParam; // x0
  __int64 v6; // x1

  if ( (byte_5938D91 & 1) == 0 )
  {
    sub_21FFC50(&int___TypeInfo);
    sub_21FFC50(&StringLiteral_17597/*"assistIds"*/);
    byte_5938D91 = 1;
  }
  v3 = (System_Int32_array *)sub_21FFD10(int___TypeInfo, 0);
  ScriptIntArrayParam = QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_17597/*"assistIds"*/, v3, v4);
  if ( !ScriptIntArrayParam )
    sub_21FFECC(0, v6);
  return LODWORD(ScriptIntArrayParam->max_length) != 0;
}


bool QuestPhaseEntity__IsAreaImporveQuest(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_5938DA4 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_17542/*"areaImprovementQuest"*/);
    byte_5938DA4 = 1;
  }
  return QuestPhaseEntity__getScriptObj(this, (System_String_o *)StringLiteral_17542/*"areaImprovementQuest"*/, v2) != 0;
}


bool QuestPhaseEntity__IsAssistExecAll(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5938DDE & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_17595/*"assistExecAll"*/);
    byte_5938DDE = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_17595/*"assistExecAll"*/, 0, 0) != 0;
}


bool QuestPhaseEntity__IsClearFieldBuffWhenWaveStart(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5938DDA & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_18758/*"clearFieldBuffWhenWaveStart"*/);
    byte_5938DDA = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_18758/*"clearFieldBuffWhenWaveStart"*/, 0, 0) != 0;
}


bool QuestPhaseEntity__IsContinueWaveRestart(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5938DBB & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_19033/*"continueWaveRestart"*/);
    byte_5938DBB = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19033/*"continueWaveRestart"*/, 0, v2) != 0;
}


bool QuestPhaseEntity__IsDispQuestClearReward(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5938DF1 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_21878/*"isDispQuestClearReward"*/);
    byte_5938DF1 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_21878/*"isDispQuestClearReward"*/, 0, 0) != 0;
}


bool QuestPhaseEntity__IsEnableSkipMovie(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5938DEF & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_21882/*"isEnableSkipMovie"*/);
    byte_5938DEF = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21882/*"isEnableSkipMovie"*/, 0, v2) == 1;
}


bool QuestPhaseEntity__IsFadeOutMainBgmBeforeBattle(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5938DC8 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_20255/*"fadeOutMainBgmBeforeBattle"*/);
    byte_5938DC8 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_20255/*"fadeOutMainBgmBeforeBattle"*/, 0);
}


bool QuestPhaseEntity__IsHideAssistConfButton(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5938D94 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_20871/*"hideAssistConfButton"*/);
    byte_5938D94 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20871/*"hideAssistConfButton"*/, 0, v2) != 0;
}


bool QuestPhaseEntity__IsHideBattlePointGauge(
        QuestPhaseEntity_o *this,
        int32_t battlePointId,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *IntArray; // x0

  if ( (byte_5938DCD & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_Contains_int___);
    sub_21FFC50(&StringLiteral_7631/*"HideBattlePointGauge"*/);
    byte_5938DCD = 1;
  }
  IntArray = (System_Collections_Generic_IEnumerable_TSource__o *)EntityScriptUtil__GetIntArray(
                                                                    this->fields.script,
                                                                    (System_String_o *)StringLiteral_7631/*"HideBattlePointGauge"*/,
                                                                    0,
                                                                    0);
  if ( IntArray )
    LOBYTE(IntArray) = System_Linq_Enumerable__Contains_int_(
                         IntArray,
                         battlePointId,
                         (const MethodInfo_3843178 *)Method_System_Linq_Enumerable_Contains_int___);
  return (char)IntArray;
}


bool QuestPhaseEntity__IsHideBattleStartTimingMasterUI(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5938DF0 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_20873/*"hideBattleStartTimingMasterUI"*/);
    byte_5938DF0 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20873/*"hideBattleStartTimingMasterUI"*/, -1, v2) == 1;
}


bool QuestPhaseEntity__IsIgnoreBattleLoseDialog(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5938D62 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_21215/*"ignoreBattleLoseDialog"*/);
    byte_5938D62 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_21215/*"ignoreBattleLoseDialog"*/, 0);
}


bool QuestPhaseEntity__IsIgnoreBattlePointUp(QuestPhaseEntity_o *this, int32_t battlePointId, const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *IntArray; // x0

  if ( (byte_5938DCB & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_Contains_int___);
    sub_21FFC50(&StringLiteral_7863/*"IgnoreBattlePointUp"*/);
    byte_5938DCB = 1;
  }
  IntArray = (System_Collections_Generic_IEnumerable_TSource__o *)EntityScriptUtil__GetIntArray(
                                                                    this->fields.script,
                                                                    (System_String_o *)StringLiteral_7863/*"IgnoreBattlePointUp"*/,
                                                                    0,
                                                                    0);
  if ( IntArray )
    LOBYTE(IntArray) = System_Linq_Enumerable__Contains_int_(
                         IntArray,
                         battlePointId,
                         (const MethodInfo_3843178 *)Method_System_Linq_Enumerable_Contains_int___);
  return (char)IntArray;
}


bool QuestPhaseEntity__IsIgnoreSyncEquipGrand(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5938DE4 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_21218/*"ignoreSyncEquipGrand"*/);
    byte_5938DE4 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21218/*"ignoreSyncEquipGrand"*/, 0, v2) != 0;
}


bool QuestPhaseEntity__IsInfinityCost(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5938DE9 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_21902/*"isInfinityCost"*/);
    byte_5938DE9 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_21902/*"isInfinityCost"*/, 0, 0) != 0;
}


bool QuestPhaseEntity__IsInterruptionQuest(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5938DC3 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_21800/*"interruptibleQuest"*/);
    byte_5938DC3 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21800/*"interruptibleQuest"*/, 0, v2) != 0;
}


bool QuestPhaseEntity__IsInvisibleConnectAndLoad(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5938D8B & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_21840/*"invisibleConnectAndLoad"*/);
    byte_5938D8B = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21840/*"invisibleConnectAndLoad"*/, 0, v2) != 0;
}


bool QuestPhaseEntity__IsKeepSubBgmAfterBattleResult(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5938D81 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_22128/*"keepSubBgmUntilBattleResult"*/);
    byte_5938D81 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_22128/*"keepSubBgmUntilBattleResult"*/, 0);
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

  if ( (byte_5938D8A & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Array_FindAll_int___);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_int___ctor___91404032);
    sub_21FFC50(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_21FFC50(&System_Predicate_int__TypeInfo);
    byte_5938D8A = 1;
  }
  PrioredIndividuality = (System_Collections_Generic_IEnumerable_T__o *)QuestPhaseEntity__GetPrioredIndividuality(
                                                                          this,
                                                                          (const MethodInfo *)individualitys);
  v6 = (System_Collections_Generic_HashSet_int__o *)sub_21FFEBC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor_69731156(
    v6,
    PrioredIndividuality,
    (const MethodInfo_4280354 *)Method_System_Collections_Generic_HashSet_int___ctor___91404032);
  All_int = (System_Predicate_int__o *)sub_21FFEBC(System_Predicate_int__TypeInfo);
  if ( !v6
    || (v9 = (System_Predicate_T__o *)All_int,
        System_Predicate_int____ctor(All_int, (Il2CppObject *)v6, (intptr_t)v6->klass->vtable._8_Contains.method, 0),
        (All_int = (System_Predicate_int__o *)System_Array__FindAll_int_(
                                                individualitys,
                                                v9,
                                                (const MethodInfo_39775FC *)Method_System_Array_FindAll_int___)) == 0) )
  {
    sub_21FFECC(All_int, v8);
  }
  return All_int->fields.invoke_impl != 0;
}


bool QuestPhaseEntity__IsMoviePhase(QuestPhaseEntity_o *this, int32_t gender, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 *v6; // x8

  if ( (byte_5938DEB & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_22453/*"maleMovieFolder"*/);
    sub_21FFC50(&StringLiteral_22732/*"movieFolder"*/);
    sub_21FFC50(&StringLiteral_20273/*"femaleMovieFolder"*/);
    byte_5938DEB = 1;
  }
  if ( gender == 2 )
  {
    v6 = &StringLiteral_20273/*"femaleMovieFolder"*/;
  }
  else
  {
    if ( gender != 1 )
      return QuestPhaseEntity__getScriptStr(this, (System_String_o *)StringLiteral_22732/*"movieFolder"*/, 0, v3) != 0;
    v6 = &StringLiteral_22453/*"maleMovieFolder"*/;
  }
  if ( QuestPhaseEntity__getScriptStr(this, (System_String_o *)*v6, 0, v3) )
    return 1;
  return QuestPhaseEntity__getScriptStr(this, (System_String_o *)StringLiteral_22732/*"movieFolder"*/, 0, v3) != 0;
}


bool QuestPhaseEntity__IsNonStopEndBgm(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5938D5F & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_23347/*"nonStopEndBgm"*/);
    byte_5938D5F = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_23347/*"nonStopEndBgm"*/, 0, v2) != 0;
}


bool QuestPhaseEntity__IsNoneSupportFriendPoint(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5938DD0 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_23359/*"noneSupportFriendPoint"*/);
    byte_5938DD0 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_23359/*"noneSupportFriendPoint"*/, 0, 0) != 0;
}


bool QuestPhaseEntity__IsNotClassBoard(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5938DB5 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_23379/*"notClassBoard"*/);
    byte_5938DB5 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_23379/*"notClassBoard"*/, 0, v2) != 0;
}


bool QuestPhaseEntity__IsNotResetResultDispFlag(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5938D6C & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_23390/*"notResetResultDispFlag"*/);
    byte_5938D6C = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_23390/*"notResetResultDispFlag"*/, 0, v2) != 0;
}


bool QuestPhaseEntity__IsNotUseRestrictionDialog(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5938DB6 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_23392/*"notUseRestrictionDialog"*/);
    byte_5938DB6 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_23392/*"notUseRestrictionDialog"*/, 0, v2) != 0;
}


bool QuestPhaseEntity__IsPlayMovieFromMaterial(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  return QuestPhaseEntity__GetMoviePlayType(this, method) == 3;
}


bool QuestPhaseEntity__IsPlayScriptBeforeForWarBoard(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5938D90 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_21940/*"isScriptPlayForWarBoard"*/);
    byte_5938D90 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21940/*"isScriptPlayForWarBoard"*/, 0, v2) != 0;
}


bool QuestPhaseEntity__IsReleaseFocusQuestBoard(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5938DBE & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_21936/*"isReleaseFocus"*/);
    byte_5938DBE = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21936/*"isReleaseFocus"*/, 0, v2) != 0;
}


bool QuestPhaseEntity__IsRepeatReward(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5938DB3 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_24201/*"repeatReward"*/);
    byte_5938DB3 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_24201/*"repeatReward"*/, 0, v2) != 0;
}


bool QuestPhaseEntity__IsReverseMyDeckSvtPosition(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5938DC9 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_24257/*"reverseMyDeckSvtPosition"*/);
    byte_5938DC9 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_24257/*"reverseMyDeckSvtPosition"*/, 0);
}


bool QuestPhaseEntity__IsSaveInterruptionEnemyData(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5938DD3 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_24351/*"saveInterruptionEnemyData"*/);
    byte_5938DD3 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_24351/*"saveInterruptionEnemyData"*/, 0, 0) != 0;
}


bool QuestPhaseEntity__IsSkipBattleFinish(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5938DAD & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_24722/*"skipBattleFinish"*/);
    byte_5938DAD = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_24722/*"skipBattleFinish"*/, 0, v2) != 0;
}


bool QuestPhaseEntity__IsSkipMoveNextBattleFade(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5938DD1 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_24726/*"skipMoveNextBattleFade"*/);
    byte_5938DD1 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_24726/*"skipMoveNextBattleFade"*/, 0, 0) != 0;
}


bool QuestPhaseEntity__IsUseGrandBoard(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5938DDC & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_21954/*"isUseGrandBoard"*/);
    byte_5938DDC = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_21954/*"isUseGrandBoard"*/, 0, 0) != 0;
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
  int32_t Value_long; // w0
  const MethodInfo_37E0BF0 *v13; // x3
  int32_t v14; // w0
  const MethodInfo_37E0BF0 *v15; // x3
  Il2CppObject *value; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_5938DDD & 1) == 0 )
  {
    sub_21FFC50(&Method_BasicHelper_GetValue_long___);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_21FFC50(&StringLiteral_19995/*"eventId"*/);
    sub_21FFC50(&StringLiteral_23645/*"overwriteEventEquipSkillParts"*/);
    sub_21FFC50(&StringLiteral_21050/*"iconId"*/);
    sub_21FFC50(&StringLiteral_20812/*"groupId"*/);
    byte_5938DDD = 1;
  }
  script = this->fields.script;
  value = 0;
  *eventId = 0;
  *iconId = 0;
  *groupId = 0;
  if ( !script )
    sub_21FFECC(0, eventId);
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)script,
         (Il2CppObject *)StringLiteral_23645/*"overwriteEventEquipSkillParts"*/,
         &value,
         (const MethodInfo_3FCBFD0 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    v10 = value;
    if ( value )
    {
      naturalAligment = System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.naturalAligment;
      if ( value->klass->_2.naturalAligment >= (unsigned int)naturalAligment
        && (System_Collections_Generic_Dictionary_string__object__c *)value->klass->_2.typeHierarchy[naturalAligment - 1] == System_Collections_Generic_Dictionary_string__object__TypeInfo )
      {
        Value_long = BasicHelper__GetValue_long_(
                       (System_Collections_Generic_Dictionary_string__object__o *)value,
                       (System_String_o *)StringLiteral_19995/*"eventId"*/,
                       0,
                       (const MethodInfo_37E0BF0 *)Method_BasicHelper_GetValue_long___);
        v13 = (const MethodInfo_37E0BF0 *)Method_BasicHelper_GetValue_long___;
        *eventId = Value_long;
        v14 = BasicHelper__GetValue_long_(
                (System_Collections_Generic_Dictionary_string__object__o *)v10,
                (System_String_o *)StringLiteral_21050/*"iconId"*/,
                0,
                v13);
        v15 = (const MethodInfo_37E0BF0 *)Method_BasicHelper_GetValue_long___;
        *iconId = v14;
        *groupId = BasicHelper__GetValue_long_(
                     (System_Collections_Generic_Dictionary_string__object__o *)v10,
                     (System_String_o *)StringLiteral_20812/*"groupId"*/,
                     0,
                     v15);
      }
    }
  }
  return *eventId > 0;
}


bool QuestPhaseEntity__IsUseTemporaryCommandSpell(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5938D96 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_25789/*"useTemporaryCommandSpell"*/);
    byte_5938D96 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_25789/*"useTemporaryCommandSpell"*/, -1, v2) == 1;
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

  if ( (byte_5938DAB & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_26106/*"waveCountInfinity"*/);
    byte_5938DAB = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_26106/*"waveCountInfinity"*/, -1, v2) != -1;
}


bool QuestPhaseEntity__IsWaveSetup(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5938DB7 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_26108/*"waveSetup"*/);
    byte_5938DB7 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_26108/*"waveSetup"*/, 0, v2) != 0;
}


bool QuestPhaseEntity__IsWaveSetupAsOneParty(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5938DB8 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_26109/*"waveSetupAsOneParty"*/);
    byte_5938DB8 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_26109/*"waveSetupAsOneParty"*/, 0, v2) != 0;
}


bool QuestPhaseEntity__IsWaveSetupSwitchParty(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5938DB9 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_26110/*"waveSetupSwitchParty"*/);
    byte_5938DB9 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_26110/*"waveSetupSwitchParty"*/, 0, v2) != 0;
}


bool QuestPhaseEntity__PlayHappinessCounterEffect(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5938DCC & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_11091/*"PlayHappinessCounterEffect"*/);
    byte_5938DCC = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_11091/*"PlayHappinessCounterEffect"*/, 0);
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
  int Value_long; // w20
  Il2CppObject *Value_object; // x0
  __int64 v8; // x1
  System_Collections_Generic_List_object__o *v9; // x21
  QuestPhaseEntity___c_c *v10; // x0
  struct QuestPhaseEntity___c_StaticFields *static_fields; // x8
  System_Converter_object__int__o *_9__122_0; // x22
  Il2CppObject *v13; // x23
  struct QuestPhaseEntity___c_StaticFields *v14; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  System_Collections_Generic_List_int__o *v21; // x0
  __int64 v22; // x1
  System_Collections_Generic_IDictionary_int__int____c *klass; // x8
  System_Collections_Generic_List_int__o *v24; // x21
  __int64 v25; // x9
  int32_t *p_offset; // x10
  __int64 v27; // x0

  if ( (byte_5938D9E & 1) == 0 )
  {
    sub_21FFC50(&Method_BasicHelper_GetValue_long___);
    sub_21FFC50(&Method_BasicHelper_GetValue_List_object____);
    sub_21FFC50(&System_Converter_object__int__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IDictionary_int__int____TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_object__ConvertAll_int___);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_21FFC50(&Method_QuestPhaseEntity___c__SetNpcAiInfo_b__122_0__);
    sub_21FFC50(&QuestPhaseEntity___c_TypeInfo);
    sub_21FFC50(&StringLiteral_17384/*"aiIds"*/);
    sub_21FFC50(&StringLiteral_23407/*"npcId"*/);
    byte_5938D9E = 1;
  }
  if ( obj )
  {
    naturalAligment = System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.naturalAligment;
    if ( obj->klass->_2.naturalAligment >= (unsigned int)naturalAligment
      && (System_Collections_Generic_Dictionary_string__object__c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] == System_Collections_Generic_Dictionary_string__object__TypeInfo )
    {
      Value_long = BasicHelper__GetValue_long_(
                     (System_Collections_Generic_Dictionary_string__object__o *)obj,
                     (System_String_o *)StringLiteral_23407/*"npcId"*/,
                     0,
                     (const MethodInfo_37E0BF0 *)Method_BasicHelper_GetValue_long___);
      Value_object = BasicHelper__GetValue_object_(
                       (System_Collections_Generic_Dictionary_string__object__o *)obj,
                       (System_String_o *)StringLiteral_17384/*"aiIds"*/,
                       0,
                       (const MethodInfo_37E0CE0 *)Method_BasicHelper_GetValue_List_object____);
      if ( Value_long >= 1 )
      {
        v9 = (System_Collections_Generic_List_object__o *)Value_object;
        if ( Value_object )
        {
          v10 = QuestPhaseEntity___c_TypeInfo;
          if ( !*(&QuestPhaseEntity___c_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(QuestPhaseEntity___c_TypeInfo, v8);
            v10 = QuestPhaseEntity___c_TypeInfo;
          }
          static_fields = v10->static_fields;
          _9__122_0 = static_fields->__9__122_0;
          if ( !_9__122_0 )
          {
            if ( !*(&v10->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(v10, v8);
              static_fields = QuestPhaseEntity___c_TypeInfo->static_fields;
            }
            v13 = (Il2CppObject *)static_fields->__9;
            _9__122_0 = (System_Converter_object__int__o *)sub_21FFEBC(System_Converter_object__int__TypeInfo);
            System_Converter_object__int____ctor(
              _9__122_0,
              v13,
              Method_QuestPhaseEntity___c__SetNpcAiInfo_b__122_0__,
              0);
            v14 = QuestPhaseEntity___c_TypeInfo->static_fields;
            v14->__9__122_0 = _9__122_0;
            sub_21FFBF4(
              (MissionNaviTransitionBoardItem_o *)&v14->__9__122_0,
              (int32_t)_9__122_0,
              v15,
              v16,
              v17,
              v18,
              v19,
              v20);
          }
          v21 = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_object___ConvertAll_int_(
                                                            v9,
                                                            (System_Converter_T__TOutput__o *)_9__122_0,
                                                            (const MethodInfo_36A5754 *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
          if ( !v21
            || (v21 = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_int___ToArray(
                                                                  v21,
                                                                  (const MethodInfo_4434BB8 *)Method_System_Collections_Generic_List_int__ToArray__),
                !dicNpcAiId) )
          {
            sub_21FFECC(v21, v22);
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
                goto LABEL_21;
            }
            v27 = (__int64)&klass->vtable[*p_offset + 1];
          }
          else
          {
LABEL_21:
            v27 = sub_2237E2C(dicNpcAiId, System_Collections_Generic_IDictionary_int__int____TypeInfo, 1);
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


bool QuestPhaseEntity__TryGetFadeColorAfterMovieFinished(
        QuestPhaseEntity_o *this,
        System_Nullable_Color__o *color,
        const MethodInfo *method)
{
  System_String_o *StringValue; // x0
  float a; // w8
  bool result; // w0
  System_Nullable_Color__o v8; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_5938DD9 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Nullable_Color__get_HasValue__);
    sub_21FFC50(&StringLiteral_20251/*"fadeColorAfterMovieFinished"*/);
    byte_5938DD9 = 1;
  }
  StringValue = EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_20251/*"fadeColorAfterMovieFinished"*/, 0, 0);
  ColorHelper__ParseColorCode(&v8, StringValue, 0);
  a = v8.fields.value.fields.a;
  *(_OWORD *)&color->fields.hasValue = *(_OWORD *)&v8.fields.hasValue;
  result = color->fields.hasValue;
  color->fields.value.fields.a = a;
  return result;
}


bool QuestPhaseEntity__TryGetFixedMasterEquip(
        QuestPhaseEntity_o *this,
        int32_t *outFixedEquipId,
        int32_t *outFixedEquipLv,
        const MethodInfo *method)
{
  System_String_o *v7; // x1
  Il2CppObject *ScriptObj; // x0
  __int64 v9; // x2
  System_Collections_Generic_Dictionary_string__object__o *v10; // x21
  __int64 naturalAligment; // x9
  int32_t IntValue; // w0
  System_String_o *v13; // x1
  QuestPhaseEntity_o *v15; // x0
  const MethodInfo *v16; // x1

  if ( (byte_5938DE3 & 1) == 0 )
  {
    sub_21FFC50(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_21FFC50(&StringLiteral_20345/*"fixedMasterEquip"*/);
    sub_21FFC50(&StringLiteral_19334/*"defaultLv"*/);
    sub_21FFC50(&StringLiteral_19908/*"equipId"*/);
    byte_5938DE3 = 1;
  }
  v7 = (System_String_o *)StringLiteral_20345/*"fixedMasterEquip"*/;
  *outFixedEquipId = 0;
  *outFixedEquipLv = 0;
  ScriptObj = QuestPhaseEntity__getScriptObj(this, v7, (const MethodInfo *)outFixedEquipLv);
  v10 = (System_Collections_Generic_Dictionary_string__object__o *)ScriptObj;
  if ( !ScriptObj )
    return v10 != 0;
  naturalAligment = System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.naturalAligment;
  if ( ScriptObj->klass->_2.naturalAligment >= (unsigned int)naturalAligment
    && (System_Collections_Generic_Dictionary_string__object__c *)ScriptObj->klass->_2.typeHierarchy[naturalAligment - 1] == System_Collections_Generic_Dictionary_string__object__TypeInfo )
  {
    IntValue = EntityScriptUtil__GetIntValue(
                 (System_Collections_Generic_Dictionary_string__object__o *)ScriptObj,
                 (System_String_o *)StringLiteral_19908/*"equipId"*/,
                 0,
                 0);
    v13 = (System_String_o *)StringLiteral_19334/*"defaultLv"*/;
    *outFixedEquipId = IntValue;
    *outFixedEquipLv = EntityScriptUtil__GetIntValue(v10, v13, 1, 0);
    return v10 != 0;
  }
  sub_220024C(ScriptObj, System_Collections_Generic_Dictionary_string__object__TypeInfo, v9);
  return QuestPhaseEntity__IsIgnoreSyncEquipGrand(v15, v16);
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
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  Il2CppObject *v13; // x1
  const MethodInfo_37E14A0 *v14; // x3
  Il2CppObject *Value_object__object; // x0
  __int64 v16; // x1
  Il2CppObject *v17; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x21
  System_Func_object__bool__o *v19; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x0
  __int64 v21; // x1
  QuestPhaseEntity___c_c *v22; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x21
  struct QuestPhaseEntity___c_StaticFields *static_fields; // x9
  System_Func_object__int__o *_9__172_1; // x22
  Il2CppObject *v26; // x23
  struct QuestPhaseEntity___c_StaticFields *v27; // x0
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x0
  System_Object_array *v35; // x21
  __int64 v36; // x1
  int max_length; // w8
  CommonReleaseMaster_o *v38; // x22
  __int64 v39; // x23
  Il2CppObject *v40; // x25

  if ( (byte_5938DCF & 1) == 0 )
  {
    sub_21FFC50(&Method_BasicHelper_GetValue_string__object___);
    sub_21FFC50(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_System_Linq_Enumerable_OrderByDescending_BattleTreasureDeviceSequenceSelectType__int___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_BattleTreasureDeviceSequenceSelectType___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Where_BattleTreasureDeviceSequenceSelectType___);
    sub_21FFC50(&System_Func_BattleTreasureDeviceSequenceSelectType__bool__TypeInfo);
    sub_21FFC50(&System_Func_BattleTreasureDeviceSequenceSelectType__int__TypeInfo);
    sub_21FFC50(&Method_JsonManager_DeserializeArray_BattleTreasureDeviceSequenceSelectType___);
    sub_21FFC50(&JsonManager_TypeInfo);
    sub_21FFC50(&Method_QuestPhaseEntity___c__TryGetOverwritePlayerSequenceSelectTypeByGender_b__172_1__);
    sub_21FFC50(&Method_QuestPhaseEntity___c__DisplayClass172_0__TryGetOverwritePlayerSequenceSelectTypeByGender_b__0__);
    sub_21FFC50(&QuestPhaseEntity___c__DisplayClass172_0_TypeInfo);
    sub_21FFC50(&QuestPhaseEntity___c_TypeInfo);
    sub_21FFC50(&StringLiteral_23668/*"overwritePlayerSequenceSelectTypeByGender"*/);
    byte_5938DCF = 1;
  }
  v9 = sub_21FFEBC(QuestPhaseEntity___c__DisplayClass172_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_28;
  script = this->fields.script;
  *(_DWORD *)(v9 + 16) = servantId;
  v13 = (Il2CppObject *)StringLiteral_23668/*"overwritePlayerSequenceSelectTypeByGender"*/;
  v14 = (const MethodInfo_37E14A0 *)Method_BasicHelper_GetValue_string__object___;
  *genderSelectType = -1;
  *patternId = -1;
  Value_object__object = BasicHelper__GetValue_object__object_(
                           (System_Collections_Generic_Dictionary_K__V__o *)script,
                           v13,
                           0,
                           v14);
  if ( !Value_object__object )
    return (char)Value_object__object;
  v17 = Value_object__object;
  if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v16);
  v18 = (System_Collections_Generic_IEnumerable_TSource__o *)JsonManager__DeserializeArray_object_(
                                                               v17,
                                                               (const MethodInfo_38A056C *)Method_JsonManager_DeserializeArray_BattleTreasureDeviceSequenceSelectType___);
  v19 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_BattleTreasureDeviceSequenceSelectType__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v19,
    (Il2CppObject *)v9,
    Method_QuestPhaseEntity___c__DisplayClass172_0__TryGetOverwritePlayerSequenceSelectTypeByGender_b__0__,
    0);
  v20 = System_Linq_Enumerable__Where_object_(
          v18,
          (System_Func_TSource__bool__o *)v19,
          (const MethodInfo_386FFB0 *)Method_System_Linq_Enumerable_Where_BattleTreasureDeviceSequenceSelectType___);
  v22 = QuestPhaseEntity___c_TypeInfo;
  v23 = v20;
  if ( !*(&QuestPhaseEntity___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(QuestPhaseEntity___c_TypeInfo, v21);
    v22 = QuestPhaseEntity___c_TypeInfo;
  }
  static_fields = v22->static_fields;
  _9__172_1 = (System_Func_object__int__o *)static_fields->__9__172_1;
  if ( !_9__172_1 )
  {
    if ( !*(&v22->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v22, v21);
      static_fields = QuestPhaseEntity___c_TypeInfo->static_fields;
    }
    v26 = (Il2CppObject *)static_fields->__9;
    _9__172_1 = (System_Func_object__int__o *)sub_21FFEBC(System_Func_BattleTreasureDeviceSequenceSelectType__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__172_1,
      v26,
      Method_QuestPhaseEntity___c__TryGetOverwritePlayerSequenceSelectTypeByGender_b__172_1__,
      0);
    v27 = QuestPhaseEntity___c_TypeInfo->static_fields;
    v27->__9__172_1 = (struct System_Func_BattleTreasureDeviceSequenceSelectType__int__o *)_9__172_1;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v27->__9__172_1, (int32_t)_9__172_1, v28, v29, v30, v31, v32, v33);
  }
  v34 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                               v23,
                                                               (System_Func_TSource__TKey__o *)_9__172_1,
                                                               (const MethodInfo_3855CFC *)Method_System_Linq_Enumerable_OrderByDescending_BattleTreasureDeviceSequenceSelectType__int___);
  v35 = System_Linq_Enumerable__ToArray_object_(
          v34,
          (const MethodInfo_3868664 *)Method_System_Linq_Enumerable_ToArray_BattleTreasureDeviceSequenceSelectType___);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v35, 0) )
    goto LABEL_25;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v36);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !v35 )
LABEL_28:
    sub_21FFECC(Master_object, monitor_high);
  max_length = v35->max_length;
  if ( max_length < 1 )
  {
LABEL_25:
    LOBYTE(Value_object__object) = 0;
    return (char)Value_object__object;
  }
  v38 = (CommonReleaseMaster_o *)Master_object;
  v39 = 0;
  while ( 1 )
  {
    if ( (unsigned int)v39 >= max_length )
      sub_21FFED4(Master_object);
    v40 = v35->m_Items[v39];
    if ( !v40 )
      goto LABEL_28;
    monitor_high = HIDWORD(v40[1].monitor);
    if ( (int)monitor_high < 1 )
      break;
    if ( !v38 )
      goto LABEL_28;
    Master_object = (Il2CppObject *)CommonReleaseMaster__IsOpen(v38, monitor_high, 0, 0, 0);
    if ( ((unsigned __int8)Master_object & 1) != 0 )
      break;
    max_length = v35->max_length;
    if ( (int)++v39 >= max_length )
      goto LABEL_25;
  }
  LOBYTE(Value_object__object) = 1;
  *genderSelectType = HIDWORD(v40[1].klass);
  *patternId = (int32_t)v40[1].monitor;
  return (char)Value_object__object;
}


int32_t QuestPhaseEntity__getBattleEffectId(QuestPhaseEntity_o *this, int32_t defVal, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_5938D58 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_17761/*"battleEffectId"*/);
    byte_5938D58 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_17761/*"battleEffectId"*/, defVal, v3);
}


int32_t QuestPhaseEntity__getBattleFieldMotionId(QuestPhaseEntity_o *this, int32_t defVal, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_5938D5A & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_20292/*"fieldMotionId"*/);
    byte_5938D5A = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20292/*"fieldMotionId"*/, defVal, v3);
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

  if ( (byte_5938D5B & 1) == 0 )
  {
    sub_21FFC50(&int___TypeInfo);
    sub_21FFC50(&StringLiteral_20293/*"fieldMotionIds"*/);
    byte_5938D5B = 1;
  }
  result = QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_20293/*"fieldMotionIds"*/, defVals, v3);
  if ( !result )
    goto LABEL_10;
  if ( result->max_length )
    return result;
  BattleFieldMotionId = QuestPhaseEntity__getBattleFieldMotionId(this, -1, v8);
  result = defVals;
  if ( BattleFieldMotionId == -1 )
    return result;
  result = (System_Int32_array *)sub_21FFD10(int___TypeInfo, 1);
  if ( !result )
LABEL_10:
    sub_21FFECC(result, v7);
  if ( !LODWORD(result->max_length) )
    sub_21FFED4(result);
  result->m_Items[0] = BattleFieldMotionId;
  return result;
}


int32_t QuestPhaseEntity__getBreakOnBattleWinWaitMSec(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5938D66 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_18135/*"breakOnBattleWinWaitMSec"*/);
    byte_5938D66 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_18135/*"breakOnBattleWinWaitMSec"*/, 0, v2);
}


System_Int32_array *QuestPhaseEntity__getEventGrounpIds(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  System_Int32_array *v3; // x2
  const MethodInfo *v4; // x3

  if ( (byte_5938D5C & 1) == 0 )
  {
    sub_21FFC50(&int___TypeInfo);
    sub_21FFC50(&StringLiteral_19994/*"eventGroupId"*/);
    byte_5938D5C = 1;
  }
  v3 = (System_Int32_array *)sub_21FFD10(int___TypeInfo, 0);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_19994/*"eventGroupId"*/, v3, v4);
}


int32_t QuestPhaseEntity__getGIftId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  return this->fields.giftId;
}


int32_t QuestPhaseEntity__getHintLeftIndent(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5938D9B & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_20896/*"hintLeftIndent"*/);
    byte_5938D9B = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20896/*"hintLeftIndent"*/, -1, v2);
}


System_String_o *QuestPhaseEntity__getHintMessage(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5938D9A & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_20897/*"hintMessage"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5938D9A = 1;
  }
  return QuestPhaseEntity__getScriptStr(
           this,
           (System_String_o *)StringLiteral_20897/*"hintMessage"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


System_String_o *QuestPhaseEntity__getHintMessageTitle(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5938D99 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_1/*""*/);
    sub_21FFC50(&StringLiteral_20899/*"hintTitle"*/);
    byte_5938D99 = 1;
  }
  return QuestPhaseEntity__getScriptStr(
           this,
           (System_String_o *)StringLiteral_20899/*"hintTitle"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


int32_t QuestPhaseEntity__getHintOpenType(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5938D9C & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_20898/*"hintOpenType"*/);
    byte_5938D9C = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20898/*"hintOpenType"*/, 0, v2);
}


int32_t QuestPhaseEntity__getLeave(QuestPhaseEntity_o *this, int32_t defVal, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_5938D57 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_22219/*"leave"*/);
    byte_5938D57 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22219/*"leave"*/, defVal, v3);
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

  if ( (byte_5938D53 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_24237/*"resultBgmId"*/);
    byte_5938D53 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_24237/*"resultBgmId"*/, defVal, v3);
}


System_Int32_array *QuestPhaseEntity__getResultEnemyVoiceIds(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  System_Int32_array *v3; // x2
  const MethodInfo *v4; // x3

  if ( (byte_5938D60 & 1) == 0 )
  {
    sub_21FFC50(&int___TypeInfo);
    sub_21FFC50(&StringLiteral_24238/*"resultEnemyVoiceIds"*/);
    byte_5938D60 = 1;
  }
  v3 = (System_Int32_array *)sub_21FFD10(int___TypeInfo, 0);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_24238/*"resultEnemyVoiceIds"*/, v3, v4);
}


System_Int32_array *QuestPhaseEntity__getScriptIntArrayParam(
        QuestPhaseEntity_o *this,
        System_String_o *key,
        System_Int32_array *defVal,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ScriptObjListParam; // x0
  __int64 v8; // x1
  System_Collections_Generic_List_object__o *v9; // x19
  QuestPhaseEntity___c_c *v10; // x0
  struct QuestPhaseEntity___c_StaticFields *static_fields; // x8
  System_Converter_object__int__o *_9__37_0; // x20
  Il2CppObject *v13; // x21
  struct QuestPhaseEntity___c_StaticFields *v14; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  System_Collections_Generic_List_int__o *v21; // x0
  __int64 v22; // x1

  if ( (byte_5938D4B & 1) == 0 )
  {
    sub_21FFC50(&System_Converter_object__int__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_object__ConvertAll_int___);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_21FFC50(&Method_QuestPhaseEntity___c__getScriptIntArrayParam_b__37_0__);
    sub_21FFC50(&QuestPhaseEntity___c_TypeInfo);
    byte_5938D4B = 1;
  }
  ScriptObjListParam = QuestPhaseEntity__getScriptObjListParam(this, key, (const MethodInfo *)defVal);
  if ( !ScriptObjListParam )
    return defVal;
  v9 = ScriptObjListParam;
  v10 = QuestPhaseEntity___c_TypeInfo;
  if ( !*(&QuestPhaseEntity___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(QuestPhaseEntity___c_TypeInfo, v8);
    v10 = QuestPhaseEntity___c_TypeInfo;
  }
  static_fields = v10->static_fields;
  _9__37_0 = static_fields->__9__37_0;
  if ( !_9__37_0 )
  {
    if ( !*(&v10->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v10, v8);
      static_fields = QuestPhaseEntity___c_TypeInfo->static_fields;
    }
    v13 = (Il2CppObject *)static_fields->__9;
    _9__37_0 = (System_Converter_object__int__o *)sub_21FFEBC(System_Converter_object__int__TypeInfo);
    System_Converter_object__int____ctor(
      _9__37_0,
      v13,
      Method_QuestPhaseEntity___c__getScriptIntArrayParam_b__37_0__,
      0);
    v14 = QuestPhaseEntity___c_TypeInfo->static_fields;
    v14->__9__37_0 = _9__37_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v14->__9__37_0, (int32_t)_9__37_0, v15, v16, v17, v18, v19, v20);
  }
  v21 = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_object___ConvertAll_int_(
                                                    v9,
                                                    (System_Converter_T__TOutput__o *)_9__37_0,
                                                    (const MethodInfo_36A5754 *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
  if ( !v21 )
    sub_21FFECC(0, v22);
  return System_Collections_Generic_List_int___ToArray(
           v21,
           (const MethodInfo_4434BB8 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  __int64 v6; // x2
  QuestPhaseEntity_o *v8; // x0
  System_String_o *v9; // x1
  const MethodInfo *v10; // x2

  v4 = defVal;
  ScriptObj = QuestPhaseEntity__getScriptObj(this, key, *(const MethodInfo **)&defVal);
  if ( !ScriptObj )
    return v4;
  if ( ScriptObj->klass->_1.element_class == *(Il2CppClass **)(qword_594C090 + 64) )
    return *(_DWORD *)j_il2cpp_object_unbox_0(ScriptObj, qword_594C090, v6);
  sub_220024C(ScriptObj, qword_594C090, v6);
  return (unsigned int)QuestPhaseEntity__getScriptObj(v8, v9, v10);
}


Il2CppObject *QuestPhaseEntity__getScriptObj(QuestPhaseEntity_o *this, System_String_o *key, const MethodInfo *method)
{
  Il2CppObject *result; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5938D4F & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    byte_5938D4F = 1;
  }
  result = (Il2CppObject *)this->fields.script;
  value = 0;
  if ( result )
  {
    value = 0;
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)result,
           (Il2CppObject *)key,
           &value,
           (const MethodInfo_3FCBFD0 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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

  if ( (byte_5938D4D & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_object__ToArray__);
    byte_5938D4D = 1;
  }
  ScriptObjListParam = QuestPhaseEntity__getScriptObjListParam(this, key, (const MethodInfo *)defVal);
  if ( ScriptObjListParam )
    return System_Collections_Generic_List_object___ToArray(
             ScriptObjListParam,
             (const MethodInfo_445164C *)Method_System_Collections_Generic_List_object__ToArray__);
  else
    return (System_Object_array *)defVal;
}


System_Collections_Generic_List_object__o *QuestPhaseEntity__getScriptObjListParam(
        QuestPhaseEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *result; // x0
  __int64 v6; // x2
  __int64 naturalAligment; // x9
  QuestPhaseEntity_o *v8; // x0
  System_String_o *v9; // x1
  System_String_array *v10; // x2
  const MethodInfo *v11; // x3

  if ( (byte_5938D4E & 1) == 0 )
  {
    sub_21FFC50(&System_Collections_Generic_List_object__TypeInfo);
    byte_5938D4E = 1;
  }
  result = (System_Collections_Generic_List_object__o *)QuestPhaseEntity__getScriptObj(this, key, method);
  if ( result )
  {
    naturalAligment = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment;
    if ( result->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (System_Collections_Generic_List_object__c *)result->klass->_2.typeHierarchy[naturalAligment - 1] != System_Collections_Generic_List_object__TypeInfo )
    {
      sub_220024C(result, System_Collections_Generic_List_object__TypeInfo, v6);
      return (System_Collections_Generic_List_object__o *)QuestPhaseEntity__getScriptStringArrayParam(v8, v9, v10, v11);
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
  __int64 v11; // x2
  QuestPhaseEntity_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_5938D50 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    byte_5938D50 = 1;
  }
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)key,
          (const MethodInfo_3FCA65C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return defVal;
  }
  v9 = this->fields.script;
  if ( !v9 )
    sub_21FFECC(0, v8);
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)v9,
           (Il2CppObject *)key,
           (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  defVal = (System_String_o *)Item;
  if ( !Item || Item->klass == (Il2CppClass *)qword_594C0B8 )
    return defVal;
  sub_220024C(Item, qword_594C0B8, v11);
  return (System_String_o *)QuestPhaseEntity__GetOverwriteEquipSkills(v13, v14);
}


System_String_array *QuestPhaseEntity__getScriptStringArrayParam(
        QuestPhaseEntity_o *this,
        System_String_o *key,
        System_String_array *defVal,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ScriptObjListParam; // x0
  __int64 v8; // x1
  System_Collections_Generic_List_object__o *v9; // x19
  QuestPhaseEntity___c_c *v10; // x0
  struct QuestPhaseEntity___c_StaticFields *static_fields; // x8
  System_Converter_TInput__TOutput__o *_9__38_0; // x20
  Il2CppObject *v13; // x21
  struct QuestPhaseEntity___c_StaticFields *v14; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  System_Collections_Generic_List_object__o *v21; // x0
  __int64 v22; // x1

  if ( (byte_5938D4C & 1) == 0 )
  {
    sub_21FFC50(&System_Converter_object__string__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_object__ConvertAll_string___);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_21FFC50(&Method_QuestPhaseEntity___c__getScriptStringArrayParam_b__38_0__);
    sub_21FFC50(&QuestPhaseEntity___c_TypeInfo);
    byte_5938D4C = 1;
  }
  ScriptObjListParam = QuestPhaseEntity__getScriptObjListParam(this, key, (const MethodInfo *)defVal);
  if ( !ScriptObjListParam )
    return defVal;
  v9 = ScriptObjListParam;
  v10 = QuestPhaseEntity___c_TypeInfo;
  if ( !*(&QuestPhaseEntity___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(QuestPhaseEntity___c_TypeInfo, v8);
    v10 = QuestPhaseEntity___c_TypeInfo;
  }
  static_fields = v10->static_fields;
  _9__38_0 = (System_Converter_TInput__TOutput__o *)static_fields->__9__38_0;
  if ( !_9__38_0 )
  {
    if ( !*(&v10->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v10, v8);
      static_fields = QuestPhaseEntity___c_TypeInfo->static_fields;
    }
    v13 = (Il2CppObject *)static_fields->__9;
    _9__38_0 = (System_Converter_TInput__TOutput__o *)sub_21FFEBC(System_Converter_object__string__TypeInfo);
    System_Converter_object__object____ctor(
      _9__38_0,
      v13,
      Method_QuestPhaseEntity___c__getScriptStringArrayParam_b__38_0__,
      0);
    v14 = QuestPhaseEntity___c_TypeInfo->static_fields;
    v14->__9__38_0 = (struct System_Converter_object__string__o *)_9__38_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v14->__9__38_0, (int32_t)_9__38_0, v15, v16, v17, v18, v19, v20);
  }
  v21 = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___ConvertAll_object_(
                                                       v9,
                                                       (System_Converter_T__TOutput__o *)_9__38_0,
                                                       (const MethodInfo_36A5860 *)Method_System_Collections_Generic_List_object__ConvertAll_string___);
  if ( !v21 )
    sub_21FFECC(0, v22);
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  v21,
                                  (const MethodInfo_445164C *)Method_System_Collections_Generic_List_string__ToArray__);
}


int32_t QuestPhaseEntity__getSpecialShadowEffectId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5938D74 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_20733/*"getSpecialShadowEffectId"*/);
    byte_5938D74 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20733/*"getSpecialShadowEffectId"*/, 0, v2);
}


int32_t QuestPhaseEntity__getTurnSituationType(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5938D73 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_25494/*"turnSituationType"*/);
    byte_5938D73 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_25494/*"turnSituationType"*/, 0, v2);
}


int32_t QuestPhaseEntity__getUniqueCameraId(QuestPhaseEntity_o *this, int32_t defVal, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_5938D59 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_25577/*"uniqueCameraId"*/);
    byte_5938D59 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_25577/*"uniqueCameraId"*/, defVal, v3);
}


bool QuestPhaseEntity__isBattleFinishCameraTargetAll(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5938D72 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_17763/*"battleFinishCameraTargetAll"*/);
    byte_5938D72 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_17763/*"battleFinishCameraTargetAll"*/, 0, v2) != 0;
}


bool QuestPhaseEntity__isBreakOnBattleWin(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5938D64 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_18133/*"breakOnBattleWin"*/);
    byte_5938D64 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_18133/*"breakOnBattleWin"*/, 0, v2) != 0;
}


bool QuestPhaseEntity__isBreakOnBattleWinFadeColorBlack(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5938D65 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_18134/*"breakOnBattleWinFadeColorBlack"*/);
    byte_5938D65 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_18134/*"breakOnBattleWinFadeColorBlack"*/, 0, v2) != 0;
}


bool QuestPhaseEntity__isDisableChangeRaidDownMessage(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5938D75 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_21876/*"isDisableChangeRaidDownMessage"*/);
    byte_5938D75 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21876/*"isDisableChangeRaidDownMessage"*/, 0, v2) != 0;
}


bool QuestPhaseEntity__isDispLoseResult(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5938D61 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_24239/*"resultLoseDisp"*/);
    byte_5938D61 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_24239/*"resultLoseDisp"*/, 0, v2) != 0;
}


bool QuestPhaseEntity__isFadeOutBgmBeforeMovie(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5938D56 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_6868/*"FadeOutBgmBeforeMovie"*/);
    byte_5938D56 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_6868/*"FadeOutBgmBeforeMovie"*/, 0, v2) != 0;
}


bool QuestPhaseEntity__isNoResult(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5938D63 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_23326/*"noResult"*/);
    byte_5938D63 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_23326/*"noResult"*/, 0, v2) != 0;
}


bool QuestPhaseEntity__isTurnSituationType(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  return QuestPhaseEntity__getTurnSituationType(this, method) > 0;
}


void QuestPhaseEntity__GetBattleSkillDropEffectIds_d__178___ctor(
        QuestPhaseEntity__GetBattleSkillDropEffectIds_d__178_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
  this->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0);
}


bool QuestPhaseEntity__GetBattleSkillDropEffectIds_d__178__MoveNext(
        QuestPhaseEntity__GetBattleSkillDropEffectIds_d__178_o *this,
        const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  QuestPhaseEntity__GetBattleSkillDropEffectIds_d__178_o *v8; // x19
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
  MissionNaviTransitionBoardItem_o *p_data_5__3; // x19
  _BOOL8 BattleSkillDropInfoDict; // x0
  __int64 v23; // x1
  __int64 v24; // x1
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
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
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  QuestPhaseEntity__GetBattleSkillDropEffectIds_d__178_o *v52; // [xsp+18h] [xbp-28h]

  v8 = this;
  v52 = this;
  if ( (byte_5938DF6 & 1) == 0 )
  {
    sub_21FFC50(&System_Collections_Generic_IEnumerable_FunctionEntity__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_FunctionEntity__TypeInfo);
    this = (QuestPhaseEntity__GetBattleSkillDropEffectIds_d__178_o *)sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    byte_5938DF6 = 1;
  }
  _1__state = v8->fields.__1__state;
  if ( _1__state == 2 )
  {
    v8->fields._data_5__3 = 0;
    p_data_5__3 = (MissionNaviTransitionBoardItem_o *)&v8->fields._data_5__3;
    p_data_5__3[-1].fields._QuestId_k__BackingField = -3;
    sub_21FFBF4(p_data_5__3, 0, v2, v3, v4, v5, v6, v7);
    goto LABEL_18;
  }
  if ( _1__state == 1 )
  {
    data_5__3 = v8->fields._data_5__3;
    v8->fields.__1__state = -3;
    if ( !data_5__3 )
      sub_21FFECC(this, method);
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
      sub_21FFECC(0, method);
    BattleSkillDropFunctionEntities = QuestPhaseEntity__GetBattleSkillDropFunctionEntities(_4__this, method);
    v13 = BattleSkillDropFunctionEntities;
    if ( !BattleSkillDropFunctionEntities )
      sub_21FFECC(0, v12);
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
      v17 = sub_2237E2C(
              BattleSkillDropFunctionEntities,
              System_Collections_Generic_IEnumerable_FunctionEntity__TypeInfo,
              0);
    }
    v24 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_FunctionEntity__o *, _QWORD))v17)(
            v13,
            *(_QWORD *)(v17 + 8));
    v52->fields.__7__wrap1 = (struct System_Collections_Generic_IEnumerator_FunctionEntity__o *)v24;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v52->fields.__7__wrap1, v24, v25, v26, v27, v28, v29, v30);
    v52->fields.__1__state = -3;
    do
    {
LABEL_18:
      _7__wrap1 = v52->fields.__7__wrap1;
      if ( !_7__wrap1 )
        sub_21FFECC(BattleSkillDropInfoDict, v23);
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
        v35 = sub_2237E2C(v52->fields.__7__wrap1, System_Collections_IEnumerator_TypeInfo, 0);
      }
      if ( ((*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_FunctionEntity__o *, _QWORD))v35)(
              _7__wrap1,
              *(_QWORD *)(v35 + 8))
          & 1) == 0 )
      {
        QuestPhaseEntity__GetBattleSkillDropEffectIds_d__178____m__Finally1(v52, v36);
        v52->fields.__7__wrap1 = 0;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v52->fields.__7__wrap1, 0, v46, v47, v48, v49, v50, v51);
        return 0;
      }
      v37 = v52->fields.__7__wrap1;
      if ( !v37 )
        sub_21FFECC(v52, v36);
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
        v41 = sub_2237E2C(v52->fields.__7__wrap1, System_Collections_Generic_IEnumerator_FunctionEntity__TypeInfo, 0);
      }
      v42 = (FunctionEntity_o *)(*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_FunctionEntity__o *, _QWORD))v41)(
                                  v37,
                                  *(_QWORD *)(v41 + 8));
      if ( !v42 )
        sub_21FFECC(0, v43);
      BattleSkillDropInfoDict = FunctionEntity__TryGetBattleSkillDropInfoDict(v42, &v52->fields._data_5__3, 0);
    }
    while ( !BattleSkillDropInfoDict );
    v44 = v52->fields._data_5__3;
    if ( !v44 )
      sub_21FFECC(BattleSkillDropInfoDict, v23);
    appearEffectId = v44->fields.appearEffectId;
    result = 1;
    v52->fields.__1__state = 1;
    v52->fields.__2__current = appearEffectId;
  }
  return result;
}


System_Collections_Generic_IEnumerator_int__o *QuestPhaseEntity__GetBattleSkillDropEffectIds_d__178__System_Collections_Generic_IEnumerable_System_Int32__GetEnumerator(
        QuestPhaseEntity__GetBattleSkillDropEffectIds_d__178_o *this,
        const MethodInfo *method)
{
  int32_t l__initialThreadId; // w20
  __int64 v4; // x20
  int32_t CurrentManagedThreadId; // w0
  struct QuestPhaseEntity_o *_4__this; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  if ( (byte_5938DF8 & 1) == 0 )
  {
    sub_21FFC50(&QuestPhaseEntity__GetBattleSkillDropEffectIds_d__178_TypeInfo);
    byte_5938DF8 = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0)) )
  {
    this->fields.__1__state = 0;
  }
  else
  {
    v4 = sub_21FFEBC(QuestPhaseEntity__GetBattleSkillDropEffectIds_d__178_TypeInfo);
    System_Object___ctor((Il2CppObject *)v4, 0);
    *(_DWORD *)(v4 + 16) = 0;
    CurrentManagedThreadId = System_Environment__get_CurrentManagedThreadId(0);
    _4__this = this->fields.__4__this;
    *(_DWORD *)(v4 + 24) = CurrentManagedThreadId;
    *(_QWORD *)(v4 + 32) = _4__this;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v4 + 32), (int32_t)_4__this, v7, v8, v9, v10, v11, v12);
    return (System_Collections_Generic_IEnumerator_int__o *)v4;
  }
  return (System_Collections_Generic_IEnumerator_int__o *)this;
}


int32_t QuestPhaseEntity__GetBattleSkillDropEffectIds_d__178__System_Collections_Generic_IEnumerator_System_Int32__get_Current(
        QuestPhaseEntity__GetBattleSkillDropEffectIds_d__178_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn QuestPhaseEntity__GetBattleSkillDropEffectIds_d__178__System_Collections_IEnumerator_Reset(
        QuestPhaseEntity__GetBattleSkillDropEffectIds_d__178_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_21FFC64(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_21FFEBC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_21FFC64(&Method_QuestPhaseEntity__GetBattleSkillDropEffectIds_d__178_System_Collections_IEnumerator_Reset__);
  sub_21FFD90(v3, v4);
}


Il2CppObject *QuestPhaseEntity__GetBattleSkillDropEffectIds_d__178__System_Collections_IEnumerator_get_Current(
        QuestPhaseEntity__GetBattleSkillDropEffectIds_d__178_o *this,
        const MethodInfo *method)
{
  int32_t _2__current; // [xsp+Ch] [xbp-4h] BYREF

  _2__current = this->fields.__2__current;
  return (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &_2__current);
}


void QuestPhaseEntity__GetBattleSkillDropEffectIds_d__178__System_IDisposable_Dispose(
        QuestPhaseEntity__GetBattleSkillDropEffectIds_d__178_o *this,
        const MethodInfo *method)
{
  if ( (unsigned int)(this->fields.__1__state + 3) <= 5 && ((1 << (LOBYTE(this->fields.__1__state) + 3)) & 0x31) != 0 )
    QuestPhaseEntity__GetBattleSkillDropEffectIds_d__178____m__Finally1(this, method);
}


void QuestPhaseEntity__GetBattleSkillDropEffectIds_d__178____m__Finally1(
        QuestPhaseEntity__GetBattleSkillDropEffectIds_d__178_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_IEnumerator_FunctionEntity__o *_7__wrap1; // x19
  System_Collections_Generic_IEnumerator_FunctionEntity__c *klass; // x8
  __int64 v5; // x9
  int32_t *p_offset; // x10
  __int64 v7; // x0

  if ( (byte_5938DF7 & 1) == 0 )
  {
    sub_21FFC50(&System_IDisposable_TypeInfo);
    byte_5938DF7 = 1;
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
      v7 = sub_2237E2C(_7__wrap1, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(struct System_Collections_Generic_IEnumerator_FunctionEntity__o *, _QWORD))v7)(
      _7__wrap1,
      *(_QWORD *)(v7 + 8));
  }
}


void QuestPhaseEntity__GetBattleSkillDropFunctionEntities_d__177___ctor(
        QuestPhaseEntity__GetBattleSkillDropFunctionEntities_d__177_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
  this->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0);
}


bool QuestPhaseEntity__GetBattleSkillDropFunctionEntities_d__177__MoveNext(
        QuestPhaseEntity__GetBattleSkillDropFunctionEntities_d__177_o *this,
        const MethodInfo *method)
{
  System_String_o *v2; // x2
  MethodInfo *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  long double v8; // q0
  int32_t _1__state; // w8
  QuestPhaseEntity_o *_4__this; // x20
  _QWORD *v12; // x21
  __int64 v13; // x8
  __int64 v14; // x0
  __int64 p__7__wrap1; // x0
  struct System_Int32_array *ScriptIntArrayParam; // x0
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  int32_t v23; // w8
  int32_t v24; // w20
  struct System_Int32_array *_7__wrap1; // x9
  int32_t max_length; // w10
  bool result; // w0
  int32_t v28; // w1
  struct FunctionEntity_o **p__2__current; // x19
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_5938DF9 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Array_Empty_int___);
    sub_21FFC50(&Method_DataManager_GetMaster_FunctionMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
    sub_21FFC50(&StringLiteral_17778/*"battleSkillDropFuncIds"*/);
    byte_5938DF9 = 1;
  }
  _1__state = this->fields.__1__state;
  entity = 0;
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
    sub_2237B54(Method_System_Array_Empty_int___);
    v13 = v12[7];
  }
  v14 = *(_QWORD *)(v13 + 16);
  if ( (*(_WORD *)(v14 + 309) & 1) == 0 )
    v14 = sub_2237AF8(v8);
  if ( !*(_DWORD *)(v14 + 228) )
    *(__n128 *)&v8 = j_il2cpp_runtime_class_init_0(v14, method);
  p__7__wrap1 = *(_QWORD *)(v12[7] + 16LL);
  if ( (*(_WORD *)(p__7__wrap1 + 309) & 1) == 0 )
    p__7__wrap1 = sub_2237AF8(v8);
  if ( !_4__this )
LABEL_29:
    sub_21FFECC(p__7__wrap1, method);
  ScriptIntArrayParam = QuestPhaseEntity__getScriptIntArrayParam(
                          _4__this,
                          (System_String_o *)StringLiteral_17778/*"battleSkillDropFuncIds"*/,
                          **(System_Int32_array ***)(p__7__wrap1 + 184),
                          v3);
  this->fields.__7__wrap1 = ScriptIntArrayParam;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.__7__wrap1,
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
      goto LABEL_29;
    max_length = _7__wrap1->max_length;
    if ( v23 >= max_length )
    {
      *(_QWORD *)p__7__wrap1 = 0;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p__7__wrap1, 0, v2, (System_String_o *)v3, v4, v5, v6, v7);
      return 0;
    }
    if ( v23 >= (unsigned int)max_length )
      sub_21FFED4(p__7__wrap1);
    v24 = _7__wrap1->m_Items[v23];
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
    p__7__wrap1 = (__int64)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_FunctionMaster___);
    if ( !p__7__wrap1 )
      goto LABEL_29;
    p__7__wrap1 = DataMasterBase_object__object__int___TryGetEntity(
                    (DataMasterBase_TMaster__TEntity__PKType__o *)p__7__wrap1,
                    &entity,
                    v24,
                    (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
    if ( (p__7__wrap1 & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_29;
      if ( FuncList__Check(149, (int32_t)entity[1].monitor, 0) )
        break;
    }
LABEL_23:
    v23 = this->fields.__7__wrap2 + 1;
  }
  v28 = (int)entity;
  this->fields.__2__current = (struct FunctionEntity_o *)entity;
  p__2__current = &this->fields.__2__current;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p__2__current, v28, v2, (System_String_o *)v3, v4, v5, v6, v7);
  result = 1;
  *((_DWORD *)p__2__current - 2) = 1;
  return result;
}


System_Collections_Generic_IEnumerator_FunctionEntity__o *QuestPhaseEntity__GetBattleSkillDropFunctionEntities_d__177__System_Collections_Generic_IEnumerable_FunctionEntity__GetEnumerator(
        QuestPhaseEntity__GetBattleSkillDropFunctionEntities_d__177_o *this,
        const MethodInfo *method)
{
  int32_t l__initialThreadId; // w20
  __int64 v4; // x20
  int32_t CurrentManagedThreadId; // w0
  struct QuestPhaseEntity_o *_4__this; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  if ( (byte_5938DFA & 1) == 0 )
  {
    sub_21FFC50(&QuestPhaseEntity__GetBattleSkillDropFunctionEntities_d__177_TypeInfo);
    byte_5938DFA = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0)) )
  {
    this->fields.__1__state = 0;
  }
  else
  {
    v4 = sub_21FFEBC(QuestPhaseEntity__GetBattleSkillDropFunctionEntities_d__177_TypeInfo);
    System_Object___ctor((Il2CppObject *)v4, 0);
    *(_DWORD *)(v4 + 16) = 0;
    CurrentManagedThreadId = System_Environment__get_CurrentManagedThreadId(0);
    _4__this = this->fields.__4__this;
    *(_DWORD *)(v4 + 32) = CurrentManagedThreadId;
    *(_QWORD *)(v4 + 40) = _4__this;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v4 + 40), (int32_t)_4__this, v7, v8, v9, v10, v11, v12);
    return (System_Collections_Generic_IEnumerator_FunctionEntity__o *)v4;
  }
  return (System_Collections_Generic_IEnumerator_FunctionEntity__o *)this;
}


FunctionEntity_o *QuestPhaseEntity__GetBattleSkillDropFunctionEntities_d__177__System_Collections_Generic_IEnumerator_FunctionEntity__get_Current(
        QuestPhaseEntity__GetBattleSkillDropFunctionEntities_d__177_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn QuestPhaseEntity__GetBattleSkillDropFunctionEntities_d__177__System_Collections_IEnumerator_Reset(
        QuestPhaseEntity__GetBattleSkillDropFunctionEntities_d__177_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_21FFC64(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_21FFEBC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_21FFC64(&Method_QuestPhaseEntity__GetBattleSkillDropFunctionEntities_d__177_System_Collections_IEnumerator_Reset__);
  sub_21FFD90(v3, v4);
}


Il2CppObject *QuestPhaseEntity__GetBattleSkillDropFunctionEntities_d__177__System_Collections_IEnumerator_get_Current(
        QuestPhaseEntity__GetBattleSkillDropFunctionEntities_d__177_o *this,
        const MethodInfo *method)
{
  return (Il2CppObject *)this->fields.__2__current;
}


void QuestPhaseEntity__GetBattleSkillDropFunctionEntities_d__177__System_IDisposable_Dispose(
        QuestPhaseEntity__GetBattleSkillDropFunctionEntities_d__177_o *this,
        const MethodInfo *method)
{
  ;
}


void QuestPhaseEntity__GetExBattleUiSkillEffectIds_d__199___ctor(
        QuestPhaseEntity__GetExBattleUiSkillEffectIds_d__199_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
  this->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0);
}


bool QuestPhaseEntity__GetExBattleUiSkillEffectIds_d__199__MoveNext(
        QuestPhaseEntity__GetExBattleUiSkillEffectIds_d__199_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  QuestPhaseEntity__GetExBattleUiSkillEffectIds_d__199_o *v3; // x20
  int32_t _1__state; // w8
  QuestPhaseEntity_o *_4__this; // x0
  __int64 v6; // x1
  ExtraBattleUserInterfaceData_JsonConvertData_array *v7; // x19
  System_Collections_Generic_IEnumerable_int__o *SkillEffectIds; // x0
  __int64 v9; // x1
  System_Collections_Generic_IEnumerable_int__o *v10; // x19
  System_Collections_Generic_IEnumerable_int__c *klass; // x8
  __int64 v12; // x9
  int32_t *p_offset; // x10
  __int64 v14; // x0
  struct System_Collections_Generic_IEnumerator_int__o *v15; // x1
  QuestPhaseEntity__GetExBattleUiSkillEffectIds_d__199_o *v16; // x0
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  struct System_Collections_Generic_IEnumerator_int__o *_7__wrap1; // x19
  System_Collections_Generic_IEnumerator_int__c *v24; // x8
  __int64 v25; // x9
  int *v26; // x10
  __int64 v27; // x0
  const MethodInfo *v28; // x1
  struct System_Collections_Generic_IEnumerator_int__o *v29; // x19
  System_Collections_Generic_IEnumerator_int__c *v30; // x8
  __int64 v31; // x9
  int32_t *v32; // x10
  __int64 v33; // x0
  QuestPhaseEntity__GetExBattleUiSkillEffectIds_d__199_o *v34; // x0
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  bool result; // w0
  int32_t v42; // w0
  QuestPhaseEntity__GetExBattleUiSkillEffectIds_d__199_o *v43; // x9
  int32_t v44; // w8
  ExtraBattleUserInterfaceData_JsonConvertData_array *dataArray; // [xsp+18h] [xbp-28h] BYREF
  QuestPhaseEntity__GetExBattleUiSkillEffectIds_d__199_o *v46; // [xsp+28h] [xbp-18h]

  v46 = this;
  v3 = this;
  if ( (byte_5938DFB & 1) == 0 )
  {
    sub_21FFC50(&ExtraBattleUserInterfaceData_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerable_int__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_int__TypeInfo);
    this = (QuestPhaseEntity__GetExBattleUiSkillEffectIds_d__199_o *)sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    byte_5938DFB = 1;
  }
  _1__state = v3->fields.__1__state;
  dataArray = 0;
  if ( _1__state != 1 )
  {
    if ( _1__state )
      return 0;
    _4__this = v3->fields.__4__this;
    v3->fields.__1__state = -1;
    if ( !_4__this )
      sub_21FFECC(0, method);
    if ( !QuestPhaseEntity__HasExtraBattleUserInterfaceData(_4__this, &dataArray, v2) )
      return 0;
    v7 = dataArray;
    if ( !*(&ExtraBattleUserInterfaceData_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ExtraBattleUserInterfaceData_TypeInfo, v6);
    SkillEffectIds = ExtraBattleUserInterfaceData__GetSkillEffectIds(v7, 0);
    v10 = SkillEffectIds;
    if ( !SkillEffectIds )
      sub_21FFECC(0, v9);
    klass = SkillEffectIds->klass;
    v12 = *(unsigned __int16 *)&SkillEffectIds->klass->_2.rank;
    if ( *(_WORD *)&SkillEffectIds->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_int__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
      {
        --v12;
        p_offset += 4;
        if ( !v12 )
          goto LABEL_14;
      }
      v14 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_14:
      v14 = sub_2237E2C(SkillEffectIds, System_Collections_Generic_IEnumerable_int__TypeInfo, 0);
    }
    v15 = (struct System_Collections_Generic_IEnumerator_int__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_int__o *, _QWORD))v14)(
                                                                    v10,
                                                                    *(_QWORD *)(v14 + 8));
    v16 = v46;
    v46->fields.__7__wrap1 = v15;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v16->fields.__7__wrap1, (int32_t)v15, v17, v18, v19, v20, v21, v22);
    v3 = v46;
  }
  _7__wrap1 = v3->fields.__7__wrap1;
  v3->fields.__1__state = -3;
  if ( !_7__wrap1 )
    sub_21FFECC(this, method);
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
        goto LABEL_22;
    }
    v27 = (__int64)&v24->vtable[*v26];
  }
  else
  {
LABEL_22:
    v27 = sub_2237E2C(_7__wrap1, System_Collections_IEnumerator_TypeInfo, 0);
  }
  if ( ((*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_int__o *, _QWORD))v27)(
          _7__wrap1,
          *(_QWORD *)(v27 + 8))
      & 1) == 0 )
  {
    QuestPhaseEntity__GetExBattleUiSkillEffectIds_d__199____m__Finally1(v46, v28);
    v34 = v46;
    v46->fields.__7__wrap1 = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v34->fields.__7__wrap1, 0, v35, v36, v37, v38, v39, v40);
    return 0;
  }
  v29 = v46->fields.__7__wrap1;
  if ( !v29 )
    sub_21FFECC(v46, v28);
  v30 = v29->klass;
  v31 = *(unsigned __int16 *)&v29->klass->_2.rank;
  if ( *(_WORD *)&v29->klass->_2.rank )
  {
    v32 = &v30->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerator_int__c **)v32 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
    {
      --v31;
      v32 += 4;
      if ( !v31 )
        goto LABEL_30;
    }
    v33 = (__int64)&v30->vtable[*v32];
  }
  else
  {
LABEL_30:
    v33 = sub_2237E2C(v46->fields.__7__wrap1, System_Collections_Generic_IEnumerator_int__TypeInfo, 0);
  }
  v42 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_int__o *, _QWORD))v33)(
          v29,
          *(_QWORD *)(v33 + 8));
  v43 = v46;
  v44 = v42;
  result = 1;
  v46->fields.__1__state = 1;
  v43->fields.__2__current = v44;
  return result;
}


System_Collections_Generic_IEnumerator_int__o *QuestPhaseEntity__GetExBattleUiSkillEffectIds_d__199__System_Collections_Generic_IEnumerable_System_Int32__GetEnumerator(
        QuestPhaseEntity__GetExBattleUiSkillEffectIds_d__199_o *this,
        const MethodInfo *method)
{
  int32_t l__initialThreadId; // w20
  __int64 v4; // x20
  int32_t CurrentManagedThreadId; // w0
  struct QuestPhaseEntity_o *_4__this; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  if ( (byte_5938DFD & 1) == 0 )
  {
    sub_21FFC50(&QuestPhaseEntity__GetExBattleUiSkillEffectIds_d__199_TypeInfo);
    byte_5938DFD = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0)) )
  {
    this->fields.__1__state = 0;
  }
  else
  {
    v4 = sub_21FFEBC(QuestPhaseEntity__GetExBattleUiSkillEffectIds_d__199_TypeInfo);
    System_Object___ctor((Il2CppObject *)v4, 0);
    *(_DWORD *)(v4 + 16) = 0;
    CurrentManagedThreadId = System_Environment__get_CurrentManagedThreadId(0);
    _4__this = this->fields.__4__this;
    *(_DWORD *)(v4 + 24) = CurrentManagedThreadId;
    *(_QWORD *)(v4 + 32) = _4__this;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v4 + 32), (int32_t)_4__this, v7, v8, v9, v10, v11, v12);
    return (System_Collections_Generic_IEnumerator_int__o *)v4;
  }
  return (System_Collections_Generic_IEnumerator_int__o *)this;
}


int32_t QuestPhaseEntity__GetExBattleUiSkillEffectIds_d__199__System_Collections_Generic_IEnumerator_System_Int32__get_Current(
        QuestPhaseEntity__GetExBattleUiSkillEffectIds_d__199_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn QuestPhaseEntity__GetExBattleUiSkillEffectIds_d__199__System_Collections_IEnumerator_Reset(
        QuestPhaseEntity__GetExBattleUiSkillEffectIds_d__199_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_21FFC64(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_21FFEBC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_21FFC64(&Method_QuestPhaseEntity__GetExBattleUiSkillEffectIds_d__199_System_Collections_IEnumerator_Reset__);
  sub_21FFD90(v3, v4);
}


Il2CppObject *QuestPhaseEntity__GetExBattleUiSkillEffectIds_d__199__System_Collections_IEnumerator_get_Current(
        QuestPhaseEntity__GetExBattleUiSkillEffectIds_d__199_o *this,
        const MethodInfo *method)
{
  int32_t _2__current; // [xsp+Ch] [xbp-4h] BYREF

  _2__current = this->fields.__2__current;
  return (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &_2__current);
}


void QuestPhaseEntity__GetExBattleUiSkillEffectIds_d__199__System_IDisposable_Dispose(
        QuestPhaseEntity__GetExBattleUiSkillEffectIds_d__199_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8

  _1__state = this->fields.__1__state;
  if ( _1__state == 1 || _1__state == -3 )
    QuestPhaseEntity__GetExBattleUiSkillEffectIds_d__199____m__Finally1(this, method);
}


void QuestPhaseEntity__GetExBattleUiSkillEffectIds_d__199____m__Finally1(
        QuestPhaseEntity__GetExBattleUiSkillEffectIds_d__199_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_IEnumerator_int__o *_7__wrap1; // x19
  System_Collections_Generic_IEnumerator_int__c *klass; // x8
  __int64 v5; // x9
  int32_t *p_offset; // x10
  __int64 v7; // x0

  if ( (byte_5938DFC & 1) == 0 )
  {
    sub_21FFC50(&System_IDisposable_TypeInfo);
    byte_5938DFC = 1;
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
      v7 = sub_2237E2C(_7__wrap1, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(struct System_Collections_Generic_IEnumerator_int__o *, _QWORD))v7)(
      _7__wrap1,
      *(_QWORD *)(v7 + 8));
  }
}


void QuestPhaseEntity___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5938DF2 & 1) == 0 )
  {
    sub_21FFC50(&QuestPhaseEntity___c_TypeInfo);
    byte_5938DF2 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(QuestPhaseEntity___c_TypeInfo);
  System_Object___ctor(v1, 0);
  QuestPhaseEntity___c_TypeInfo->static_fields->__9 = (struct QuestPhaseEntity___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)QuestPhaseEntity___c_TypeInfo->static_fields,
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


int32_t QuestPhaseEntity___c___SetNpcAiInfo_b__122_0(
        QuestPhaseEntity___c_o *this,
        Il2CppObject *x,
        const MethodInfo *method)
{
  System_String_o *v4; // x0

  if ( (byte_5938DF4 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5938DF4 = 1;
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


int32_t QuestPhaseEntity___c___TryGetOverwritePlayerSequenceSelectTypeByGender_b__172_1(
        QuestPhaseEntity___c_o *this,
        BattleTreasureDeviceSequenceSelectType_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return x->fields.priority;
}


int32_t QuestPhaseEntity___c___getScriptIntArrayParam_b__37_0(
        QuestPhaseEntity___c_o *this,
        Il2CppObject *x,
        const MethodInfo *method)
{
  System_String_o *v4; // x0

  if ( (byte_5938DF3 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5938DF3 = 1;
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


System_String_o *QuestPhaseEntity___c___getScriptStringArrayParam_b__38_0(
        QuestPhaseEntity___c_o *this,
        Il2CppObject *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))x->klass->vtable[3].methodPtr)(
                              x,
                              x->klass->vtable[3].method);
}


void QuestPhaseEntity___c__DisplayClass121_0___ctor(
        QuestPhaseEntity___c__DisplayClass121_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestPhaseEntity___c__DisplayClass121_0___GetNpcAiInfo_b__0(
        QuestPhaseEntity___c__DisplayClass121_0_o *this,
        Il2CppObject *val,
        const MethodInfo *method)
{
  QuestPhaseEntity__SetNpcAiInfo(
    (System_Collections_Generic_IDictionary_int__int____o *)this->fields.dicNpcAiId,
    val,
    method);
}


void QuestPhaseEntity___c__DisplayClass172_0___ctor(
        QuestPhaseEntity___c__DisplayClass172_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestPhaseEntity___c__DisplayClass172_0___TryGetOverwritePlayerSequenceSelectTypeByGender_b__0(
        QuestPhaseEntity___c__DisplayClass172_0_o *this,
        BattleTreasureDeviceSequenceSelectType_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return x->fields.svtId == this->fields.servantId;
}


void QuestPhaseEntity___c__DisplayClass197_0___ctor(
        QuestPhaseEntity___c__DisplayClass197_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestPhaseEntity___c__DisplayClass197_0___GetOverwriteSvtTreasureDeviceLv_b__0(
        QuestPhaseEntity___c__DisplayClass197_0_o *this,
        System_Collections_Generic_List_object__o *objects,
        const MethodInfo *method)
{
  __int64 IsNullOrEmpty; // x0
  __int64 v6; // x1
  System_Collections_Generic_Dictionary_int__int__o *resultDictionary; // x20
  __int64 v8; // x1
  Il2CppObject *Item; // x21
  int32_t v10; // w21
  Il2CppObject *v11; // x0

  if ( (byte_5938DF5 & 1) == 0 )
  {
    sub_21FFC50(&System_Convert_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__int__TryAdd__);
    sub_21FFC50(&Method_System_Collections_Generic_List_object__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_object__get_Item__);
    byte_5938DF5 = 1;
  }
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)objects, 0);
  if ( (IsNullOrEmpty & 1) == 0 )
  {
    if ( !objects )
      goto LABEL_11;
    if ( objects->fields._size >= 2 )
    {
      resultDictionary = this->fields.resultDictionary;
      Item = System_Collections_Generic_List_object___get_Item(
               objects,
               0,
               (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_object__get_Item__);
      if ( !*(&System_Convert_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v8);
      v10 = System_Convert__ToInt32(Item, 0);
      v11 = System_Collections_Generic_List_object___get_Item(
              objects,
              1,
              (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_object__get_Item__);
      IsNullOrEmpty = System_Convert__ToInt32(v11, 0);
      if ( resultDictionary )
      {
        System_Collections_Generic_Dictionary_int__int___TryAdd(
          resultDictionary,
          v10,
          IsNullOrEmpty,
          (const MethodInfo_3F60E4C *)Method_System_Collections_Generic_Dictionary_int__int__TryAdd__);
        return;
      }
LABEL_11:
      sub_21FFECC(IsNullOrEmpty, v6);
    }
  }
}