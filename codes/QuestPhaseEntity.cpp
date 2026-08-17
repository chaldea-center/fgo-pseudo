void QuestPhaseEntity___ctor(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5970F02 & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_string___ctor__);
    byte_5970F02 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3F0E590 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *QuestPhaseEntity__CreatePK(int32_t questId, int32_t phase, const MethodInfo *method)
{
  if ( (byte_5970F01 & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_5970F01 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           questId,
           phase,
           (const MethodInfo_3854430 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *QuestPhaseEntity__CreatePrimaryKey(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return QuestPhaseEntity__CreatePK(this->fields.questId, this->fields.phase, v2);
}


float QuestPhaseEntity__EnemyExBattleUiPositionY(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5970F9F & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_19917/*"enemyExBattleUiPositionY"*/);
    byte_5970F9F = 1;
  }
  return (float)EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_19917/*"enemyExBattleUiPositionY"*/, 0, 0);
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

  if ( (byte_5970F11 & 1) == 0 )
  {
    sub_2213A60(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_2213A60(&StringLiteral_17352/*"addEquipSkills"*/);
    byte_5970F11 = 1;
  }
  result = (System_Collections_Generic_Dictionary_string__object__o *)QuestPhaseEntity__getScriptObj(
                                                                        this,
                                                                        (System_String_o *)StringLiteral_17352/*"addEquipSkills"*/,
                                                                        v2);
  if ( result )
  {
    naturalAligment = System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.naturalAligment;
    if ( result->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (System_Collections_Generic_Dictionary_string__object__c *)result->klass->_2.typeHierarchy[naturalAligment - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
    {
      sub_221405C(result, System_Collections_Generic_Dictionary_string__object__TypeInfo, v5);
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

  if ( (byte_5970F7F & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_17371/*"addUniqueCameraIds"*/);
    byte_5970F7F = 1;
  }
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_17371/*"addUniqueCameraIds"*/, defVal, v3);
}


int32_t QuestPhaseEntity__GetAdvantageClassId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5970F40 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_17675/*"auto_sel_support_type"*/);
    byte_5970F40 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_17675/*"auto_sel_support_type"*/, -1, v2);
}


System_Int32_array *QuestPhaseEntity__GetAssistIdArray(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  System_Int32_array *v3; // x2
  const MethodInfo *v4; // x3

  if ( (byte_5970F4F & 1) == 0 )
  {
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&StringLiteral_17634/*"assistIds"*/);
    byte_5970F4F = 1;
  }
  v3 = (System_Int32_array *)sub_2213B20(int___TypeInfo, 0);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_17634/*"assistIds"*/, v3, v4);
}


System_Int32_array *QuestPhaseEntity__GetAssistWeightArray(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  System_Int32_array *v3; // x2
  const MethodInfo *v4; // x3

  if ( (byte_5970F50 & 1) == 0 )
  {
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&StringLiteral_17633/*"assistIdWeight"*/);
    byte_5970F50 = 1;
  }
  v3 = (System_Int32_array *)sub_2213B20(int___TypeInfo, 0);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_17633/*"assistIdWeight"*/, v3, v4);
}


System_Int32_array *QuestPhaseEntity__GetAssumedEffectId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5970F62 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_17638/*"assumedEffectId"*/);
    byte_5970F62 = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_17638/*"assumedEffectId"*/, 0);
}


System_Int32_array *QuestPhaseEntity__GetBattleEffectMovieIds(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5970F87 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_3240/*"BattleEffectMovieIds"*/);
    byte_5970F87 = 1;
  }
  return EntityScriptUtil__GetIntArray(this->fields.script, (System_String_o *)StringLiteral_3240/*"BattleEffectMovieIds"*/, 0, 0);
}


void QuestPhaseEntity__GetBattleFinishMovieInfos(
        QuestPhaseEntity_o *this,
        BattleData_o *battleData,
        System_String_o **movieFile,
        BattleMovieParam_o **movieParam,
        const MethodInfo *method)
{
  QuestPhaseEntity_o *v8; // x22
  const MethodInfo *v9; // x3
  System_String_o *ScriptStr; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  const MethodInfo *v17; // x2
  BattleMovieParam_o *BattleMovieParam; // x0
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  __int64 v25; // x1
  Il2CppObject *Item; // x22
  System_Object_array *IsOpenInBattle; // x0
  il2cpp_array_size_t max_length; // x8
  System_Object_array *v29; // x22
  unsigned __int64 i; // x23
  Il2CppObject *v31; // x25
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  System_String_o *monitor; // x1
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7
  BattleMovieParam_o *klass; // x1
  BattleMovieParam_o *v45; // x2
  int32_t FadeOutBgmBeforeMovie; // w8
  int32_t movieAfterCrossFadeStartFrame; // w8
  int32_t movieAfterCrossFadeTime; // w8

  v8 = this;
  if ( (byte_5970F28 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_2213A60(&Method_JsonManager_DeserializeArray_QuestPhaseEntity_MovieOverwriteData___);
    sub_2213A60(&JsonManager_TypeInfo);
    sub_2213A60(&StringLiteral_17801/*"battleFinishMovie"*/);
    sub_2213A60(&StringLiteral_17803/*"battleFinishMovieParam"*/);
    this = (QuestPhaseEntity_o *)sub_2213A60(&StringLiteral_17802/*"battleFinishMovieOverwrite"*/);
    byte_5970F28 = 1;
  }
  if ( !battleData )
    goto LABEL_29;
  if ( BattleData__TryGetBattleFinishMovieInfoCache(battleData, movieFile, movieParam, 0) )
    return;
  ScriptStr = QuestPhaseEntity__getScriptStr(v8, (System_String_o *)StringLiteral_17801/*"battleFinishMovie"*/, 0, v9);
  *movieFile = ScriptStr;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)movieFile, (int32_t)ScriptStr, v11, v12, v13, v14, v15, v16);
  BattleMovieParam = QuestPhaseEntity__GetBattleMovieParam(v8, (System_String_o *)StringLiteral_17803/*"battleFinishMovieParam"*/, v17);
  *movieParam = BattleMovieParam;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)movieParam, (int32_t)BattleMovieParam, v19, v20, v21, v22, v23, v24);
  BattleData__SetBattleFinishMovieInfoCache(battleData, *movieFile, *movieParam, 0);
  if ( !EntityScriptUtil__ScriptHasKey(v8->fields.script, (System_String_o *)StringLiteral_17802/*"battleFinishMovieOverwrite"*/, 0) )
    return;
  this = (QuestPhaseEntity_o *)v8->fields.script;
  if ( !this )
LABEL_29:
    sub_2213CDC(this, battleData);
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)this,
           (Il2CppObject *)StringLiteral_17802/*"battleFinishMovieOverwrite"*/,
           (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v25);
  IsOpenInBattle = JsonManager__DeserializeArray_object_(
                     Item,
                     (const MethodInfo_38D3A34 *)Method_JsonManager_DeserializeArray_QuestPhaseEntity_MovieOverwriteData___);
  if ( IsOpenInBattle )
  {
    max_length = IsOpenInBattle->max_length;
    v29 = IsOpenInBattle;
    if ( (int)max_length >= 1 )
    {
      for ( i = 0; (__int64)i < (int)max_length; ++i )
      {
        if ( i >= (unsigned int)max_length )
          sub_2213CE4(IsOpenInBattle);
        v31 = v29->m_Items[i];
        if ( v31 )
        {
          IsOpenInBattle = (System_Object_array *)CommonReleaseExtension__IsOpenInBattle(
                                                    HIDWORD(v31[1].klass),
                                                    battleData,
                                                    0,
                                                    0,
                                                    0,
                                                    0);
          if ( ((unsigned __int8)IsOpenInBattle & 1) != 0 )
          {
            monitor = (System_String_o *)v31[1].monitor;
            *movieFile = monitor;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)movieFile, (int32_t)monitor, v32, v33, v34, v35, v36, v37);
            klass = (BattleMovieParam_o *)v31[2].klass;
            v45 = *movieParam;
            if ( klass )
            {
              if ( v45 )
              {
                FadeOutBgmBeforeMovie = klass->fields.FadeOutBgmBeforeMovie;
                if ( (FadeOutBgmBeforeMovie & 0x80000000) == 0 )
                  v45->fields.FadeOutBgmBeforeMovie = FadeOutBgmBeforeMovie;
                movieAfterCrossFadeStartFrame = klass->fields.movieAfterCrossFadeStartFrame;
                if ( (movieAfterCrossFadeStartFrame & 0x80000000) == 0 )
                  v45->fields.movieAfterCrossFadeStartFrame = movieAfterCrossFadeStartFrame;
                movieAfterCrossFadeTime = klass->fields.movieAfterCrossFadeTime;
                if ( (movieAfterCrossFadeTime & 0x80000000) == 0 )
                  v45->fields.movieAfterCrossFadeTime = movieAfterCrossFadeTime;
              }
              else
              {
                *movieParam = klass;
                sub_2213A04((MissionNaviTransitionBoardItem_o *)movieParam, (int32_t)klass, 0, v39, v40, v41, v42, v43);
                v45 = *movieParam;
              }
            }
            BattleData__SetBattleFinishMovieInfoCache(battleData, *movieFile, v45, 0);
            return;
          }
          LODWORD(max_length) = v29->max_length;
        }
      }
    }
  }
}


int32_t QuestPhaseEntity__GetBattleFinishWaitTime(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5970F6B & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_17804/*"battleFinishWaitTime"*/);
    byte_5970F6B = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_17804/*"battleFinishWaitTime"*/, 0, v2);
}


int32_t QuestPhaseEntity__GetBattleItemObjectId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5970F7C & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_17808/*"battleItemObjectId"*/);
    byte_5970F7C = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_17808/*"battleItemObjectId"*/, 0, v2);
}


BattleMovieParam_o *QuestPhaseEntity__GetBattleMovieParam(
        QuestPhaseEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  BattleMovieParam_o *result; // x0
  __int64 v6; // x1
  Il2CppObject *v7; // x19

  if ( (byte_5970F2E & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_GetValue_string__object___);
    sub_2213A60(&Method_JsonManager_Deserialize_BattleMovieParam___);
    sub_2213A60(&JsonManager_TypeInfo);
    byte_5970F2E = 1;
  }
  result = (BattleMovieParam_o *)BasicHelper__GetValue_object__object_(
                                   (System_Collections_Generic_Dictionary_K__V__o *)this->fields.script,
                                   (Il2CppObject *)key,
                                   0,
                                   (const MethodInfo_3814850 *)Method_BasicHelper_GetValue_string__object___);
  if ( result )
  {
    v7 = (Il2CppObject *)result;
    if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v6);
    return (BattleMovieParam_o *)JsonManager__Deserialize_object_(
                                   v7,
                                   (const MethodInfo_38D38E4 *)Method_JsonManager_Deserialize_BattleMovieParam___);
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

  if ( (byte_5970F92 & 1) == 0 )
  {
    sub_2213A60(&QuestPhaseEntity__GetBattleSkillDropEffectIds_d__177_TypeInfo);
    byte_5970F92 = 1;
  }
  v3 = sub_2213CCC(QuestPhaseEntity__GetBattleSkillDropEffectIds_d__177_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = -2;
  *(_DWORD *)(v3 + 24) = System_Environment__get_CurrentManagedThreadId(0);
  *(_QWORD *)(v3 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
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

  if ( (byte_5970F91 & 1) == 0 )
  {
    sub_2213A60(&QuestPhaseEntity__GetBattleSkillDropFunctionEntities_d__176_TypeInfo);
    byte_5970F91 = 1;
  }
  v3 = sub_2213CCC(QuestPhaseEntity__GetBattleSkillDropFunctionEntities_d__176_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = -2;
  *(_DWORD *)(v3 + 32) = System_Environment__get_CurrentManagedThreadId(0);
  *(_QWORD *)(v3 + 40) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 40), (int32_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_Generic_IEnumerable_FunctionEntity__o *)v3;
}


int32_t QuestPhaseEntity__GetBeforeBattleSkillActor(QuestPhaseEntity_o *this, int32_t defVal, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_5970F6C & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_17859/*"beforeBattleSkillActor"*/);
    byte_5970F6C = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_17859/*"beforeBattleSkillActor"*/, defVal, v3);
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

  if ( (byte_5970F06 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_Empty_int___);
    sub_2213A60(&Method_DataManager_GetMaster_BattleBgMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    byte_5970F06 = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_BattleBgMaster___);
  PriorityBattleBgId = QuestPhaseEntity__GetPriorityBattleBgId(this, v4);
  PriorityBattleBgType = QuestPhaseEntity__GetPriorityBattleBgType(this, v6);
  if ( !Master_object )
    sub_2213CDC(PriorityBattleBgType, v8);
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
      sub_224B964(Method_System_Array_Empty_int___);
      v13 = v12[7];
    }
    v14 = *(_QWORD *)(v13 + 16);
    if ( (*(_WORD *)(v14 + 309) & 1) == 0 )
      v14 = sub_224B908(v11);
    if ( !*(_DWORD *)(v14 + 228) )
      *(__n128 *)&v11 = j_il2cpp_runtime_class_init_0(v14, v10);
    v15 = *(_QWORD *)(v12[7] + 16LL);
    if ( (*(_WORD *)(v15 + 309) & 1) == 0 )
      v15 = sub_224B908(v11);
    return **(System_Int32_array ***)(v15 + 184);
  }
  return result;
}


System_Int32_array *QuestPhaseEntity__GetClearGiftItemListDisplay(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  System_Int32_array *v3; // x2
  const MethodInfo *v4; // x3

  if ( (byte_5970F5F & 1) == 0 )
  {
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&StringLiteral_18797/*"clearGiftItemListDisplay"*/);
    byte_5970F5F = 1;
  }
  v3 = (System_Int32_array *)sub_2213B20(int___TypeInfo, 0);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_18797/*"clearGiftItemListDisplay"*/, v3, v4);
}


System_Int32_array *QuestPhaseEntity__GetCondHavingIds(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  System_Int32_array *v3; // x2
  const MethodInfo *v4; // x3

  if ( (byte_5970F4B & 1) == 0 )
  {
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&StringLiteral_19015/*"condHaving"*/);
    byte_5970F4B = 1;
  }
  v3 = (System_Int32_array *)sub_2213B20(int___TypeInfo, 0);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_19015/*"condHaving"*/, v3, v4);
}


int32_t QuestPhaseEntity__GetCondQuestClearable(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5970F83 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_19020/*"condQuestClearable"*/);
    byte_5970F83 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19020/*"condQuestClearable"*/, 0, v2);
}


int32_t QuestPhaseEntity__GetCorrectionIconId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5970F3F & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_19096/*"correctionIconId"*/);
    byte_5970F3F = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19096/*"correctionIconId"*/, -1, v2);
}


int32_t QuestPhaseEntity__GetDefenceTargetContinueRecoverRate(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5970F79 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_20326/*"fieldHpContinueRecoverRate"*/);
    byte_5970F79 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20326/*"fieldHpContinueRecoverRate"*/, 0, v2);
}


System_String_o *QuestPhaseEntity__GetEffectOnMap(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5970F8B & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_11107/*"PlayGetEffectOnMap"*/);
    byte_5970F8B = 1;
  }
  return QuestPhaseEntity__getScriptStr(this, (System_String_o *)StringLiteral_11107/*"PlayGetEffectOnMap"*/, 0, v2);
}


System_Int32_array *QuestPhaseEntity__GetEnemyInfoDispNpcSvtIdList(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  System_Int32_array *v3; // x2
  const MethodInfo *v4; // x3

  if ( (byte_5970F5D & 1) == 0 )
  {
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&StringLiteral_23689/*"overwriteEnemyInfos"*/);
    byte_5970F5D = 1;
  }
  v3 = (System_Int32_array *)sub_2213B20(int___TypeInfo, 0);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_23689/*"overwriteEnemyInfos"*/, v3, v4);
}


System_String_array *QuestPhaseEntity__GetEnemyInfoOverwriteNpcSvtNameList(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  System_String_array *v3; // x2
  const MethodInfo *v4; // x3

  if ( (byte_5970F5E & 1) == 0 )
  {
    sub_2213A60(&string___TypeInfo);
    sub_2213A60(&StringLiteral_23688/*"overwriteEnemyInfoNames"*/);
    byte_5970F5E = 1;
  }
  v3 = (System_String_array *)sub_2213B20(string___TypeInfo, 0);
  return QuestPhaseEntity__getScriptStringArrayParam(this, (System_String_o *)StringLiteral_23688/*"overwriteEnemyInfoNames"*/, v3, v4);
}


int32_t QuestPhaseEntity__GetEquipAddId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5970F5C & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_19948/*"equipAddId"*/);
    byte_5970F5C = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19948/*"equipAddId"*/, 0, v2);
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

  if ( (byte_5970FA7 & 1) == 0 )
  {
    sub_2213A60(&QuestPhaseEntity__GetExBattleUiSkillEffectIds_d__198_TypeInfo);
    byte_5970FA7 = 1;
  }
  v3 = sub_2213CCC(QuestPhaseEntity__GetExBattleUiSkillEffectIds_d__198_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = -2;
  *(_DWORD *)(v3 + 24) = System_Environment__get_CurrentManagedThreadId(0);
  *(_QWORD *)(v3 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_Generic_IEnumerable_int__o *)v3;
}


int32_t QuestPhaseEntity__GetFinishEffectId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5970F3C & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_20360/*"finishEffectId"*/);
    byte_5970F3C = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20360/*"finishEffectId"*/, -1, v2);
}


int32_t QuestPhaseEntity__GetFormationBgmId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5970F63 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_20494/*"formationBgmId"*/);
    byte_5970F63 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20494/*"formationBgmId"*/, -1, v2);
}


float QuestPhaseEntity__GetFormationSubBgmFadeInTime(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5970F65 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_20495/*"formationSubBgmFadeInTime"*/);
    byte_5970F65 = 1;
  }
  return (float)QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20495/*"formationSubBgmFadeInTime"*/, 0, v2) / 1000.0;
}


int32_t QuestPhaseEntity__GetFormationSubBgmId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5970F64 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_20496/*"formationSubBgmId"*/);
    byte_5970F64 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20496/*"formationSubBgmId"*/, -1, v2);
}


System_Int32_array *QuestPhaseEntity__GetGimmickAnimTypeArray(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5970F3A & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_20797/*"gimmickAnimType"*/);
    byte_5970F3A = 1;
  }
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_20797/*"gimmickAnimType"*/, 0, v2);
}


int32_t QuestPhaseEntity__GetGimmickId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5970F33 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_20800/*"gimmickId"*/);
    byte_5970F33 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20800/*"gimmickId"*/, -1, v2);
}


System_Object_array *QuestPhaseEntity__GetGimmickResultVoiceArray(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5970F39 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_24289/*"resultVoice"*/);
    byte_5970F39 = 1;
  }
  return QuestPhaseEntity__getScriptObjArrayParam(this, (System_String_o *)StringLiteral_24289/*"resultVoice"*/, 0, v2);
}


System_Int32_array *QuestPhaseEntity__GetGimmickSkillIdArray(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  System_Int32_array *v3; // x2
  const MethodInfo *v4; // x3

  if ( (byte_5970F36 & 1) == 0 )
  {
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&StringLiteral_24196/*"reelSkill"*/);
    byte_5970F36 = 1;
  }
  v3 = (System_Int32_array *)sub_2213B20(int___TypeInfo, 0);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_24196/*"reelSkill"*/, v3, v4);
}


System_Int32_array *QuestPhaseEntity__GetGimmickSkillRateArray(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  System_Int32_array *v3; // x2
  const MethodInfo *v4; // x3

  if ( (byte_5970F37 & 1) == 0 )
  {
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&StringLiteral_24195/*"reelRate"*/);
    byte_5970F37 = 1;
  }
  v3 = (System_Int32_array *)sub_2213B20(int___TypeInfo, 0);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_24195/*"reelRate"*/, v3, v4);
}


System_String_array *QuestPhaseEntity__GetGimmickStartVoiceArray(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5970F38 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_24929/*"startVoice"*/);
    byte_5970F38 = 1;
  }
  return QuestPhaseEntity__getScriptStringArrayParam(this, (System_String_o *)StringLiteral_24929/*"startVoice"*/, 0, v2);
}


int32_t QuestPhaseEntity__GetGimmickSvtId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5970F34 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_20807/*"gimmickSvtId"*/);
    byte_5970F34 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20807/*"gimmickSvtId"*/, -1, v2);
}


int32_t QuestPhaseEntity__GetIconItemNumberDispType(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5970F7E & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_21093/*"iconItemNumberDispType"*/);
    byte_5970F7E = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21093/*"iconItemNumberDispType"*/, 0, v2);
}


float QuestPhaseEntity__GetIncomingCallDispTime(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5970F6F & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_21751/*"incomingCallDispTime"*/);
    byte_5970F6F = 1;
  }
  return (float)QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21751/*"incomingCallDispTime"*/, 500, v2) / 1000.0;
}


System_String_o *QuestPhaseEntity__GetIncomingCallMessage(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5970F6E & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_21752/*"incomingCallMessage"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_5970F6E = 1;
  }
  return QuestPhaseEntity__getScriptStr(
           this,
           (System_String_o *)StringLiteral_21752/*"incomingCallMessage"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


System_String_o *QuestPhaseEntity__GetIncomingCallTitle(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5970F6D & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_21753/*"incomingCallTitle"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_5970F6D = 1;
  }
  return QuestPhaseEntity__getScriptStr(
           this,
           (System_String_o *)StringLiteral_21753/*"incomingCallTitle"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


int32_t QuestPhaseEntity__GetInitEventDeckNo(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5970F95 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_21797/*"initEventDeckNo"*/);
    byte_5970F95 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_21797/*"initEventDeckNo"*/, 0, 0);
}


System_String_o *QuestPhaseEntity__GetMapModelEntryAnimationName(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5970F69 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_1476/*"3dMapEntryAnimName"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_5970F69 = 1;
  }
  return QuestPhaseEntity__getScriptStr(
           this,
           (System_String_o *)StringLiteral_1476/*"3dMapEntryAnimName"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


int32_t QuestPhaseEntity__GetMasterSkillDelay(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5970F45 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_22557/*"masterSkillDelay"*/);
    byte_5970F45 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22557/*"masterSkillDelay"*/, 0, v2);
}


System_String_o *QuestPhaseEntity__GetMasterSkillDelayInfo(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5970F46 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_22558/*"masterSkillDelayInfo"*/);
    byte_5970F46 = 1;
  }
  return QuestPhaseEntity__getScriptStr(this, (System_String_o *)StringLiteral_22558/*"masterSkillDelayInfo"*/, 0, v2);
}


System_Int32_array *QuestPhaseEntity__GetMoveSceneInfo(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  System_Int32_array *v3; // x2
  const MethodInfo *v4; // x3

  if ( (byte_5970F71 & 1) == 0 )
  {
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&StringLiteral_22770/*"moveSceneInfo"*/);
    byte_5970F71 = 1;
  }
  v3 = (System_Int32_array *)sub_2213B20(int___TypeInfo, 0);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_22770/*"moveSceneInfo"*/, v3, v4);
}


int32_t QuestPhaseEntity__GetMovieAfterCrossFadeStartFrame(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5970F2C & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_22775/*"movieAfterCrossFadeStartFrame"*/);
    byte_5970F2C = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22775/*"movieAfterCrossFadeStartFrame"*/, 0, v2);
}


int32_t QuestPhaseEntity__GetMovieAfterCrossFadeTime(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5970F2B & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_22776/*"movieAfterCrossFadeTime"*/);
    byte_5970F2B = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22776/*"movieAfterCrossFadeTime"*/, 0, v2);
}


System_String_o *QuestPhaseEntity__GetMovieFolder(QuestPhaseEntity_o *this, int32_t gender, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 *v6; // x8
  System_String_o *result; // x0

  if ( (byte_5970FA9 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_22497/*"maleMovieFolder"*/);
    sub_2213A60(&StringLiteral_22778/*"movieFolder"*/);
    sub_2213A60(&StringLiteral_20314/*"femaleMovieFolder"*/);
    byte_5970FA9 = 1;
  }
  if ( gender == 2 )
  {
    v6 = &StringLiteral_20314/*"femaleMovieFolder"*/;
LABEL_7:
    result = QuestPhaseEntity__getScriptStr(this, (System_String_o *)*v6, 0, v3);
    if ( result )
      return result;
    return QuestPhaseEntity__getScriptStr(this, (System_String_o *)StringLiteral_22778/*"movieFolder"*/, 0, v3);
  }
  if ( gender == 1 )
  {
    v6 = &StringLiteral_22497/*"maleMovieFolder"*/;
    goto LABEL_7;
  }
  return QuestPhaseEntity__getScriptStr(this, (System_String_o *)StringLiteral_22778/*"movieFolder"*/, 0, v3);
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

  if ( (byte_5970FAB & 1) == 0 )
  {
    sub_2213A60(&System_TimeSpan_TypeInfo);
    sub_2213A60(&StringLiteral_22780/*"moviePlayTime"*/);
    sub_2213A60(&StringLiteral_26618/*"{0}分{1}秒"*/);
    sub_2213A60(&StringLiteral_26620/*"{0}秒"*/);
    byte_5970FAB = 1;
  }
  v20 = 0;
  ScriptIntParam = QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22780/*"moviePlayTime"*/, 0, v2);
  if ( !*(&System_TimeSpan_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_TimeSpan_TypeInfo, v4);
  v6.fields._ticks = (int64_t)&v20;
  System_TimeSpan___ctor_77242956(v6, 0, 0, ScriptIntParam, 0);
  v7.fields._ticks = (int64_t)&v20;
  v8 = System_TimeSpan__get_Minutes(v7, 0) < 1;
  v10 = *(&System_TimeSpan_TypeInfo->_2.cctor_finished + 1);
  if ( v8 )
  {
    if ( !v10 )
      j_il2cpp_runtime_class_init_0(System_TimeSpan_TypeInfo, v9);
    v16.fields._ticks = (int64_t)&v20;
    Seconds = System_TimeSpan__get_Seconds(v16, 0);
    v17 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &Seconds);
    return System_String__Format((System_String_o *)StringLiteral_26620/*"{0}秒"*/, v17, 0);
  }
  else
  {
    if ( !v10 )
      j_il2cpp_runtime_class_init_0(System_TimeSpan_TypeInfo, v9);
    v11.fields._ticks = (int64_t)&v20;
    Seconds = System_TimeSpan__get_Minutes(v11, 0);
    v12 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &Seconds);
    v13.fields._ticks = (int64_t)&v20;
    v18 = System_TimeSpan__get_Seconds(v13, 0);
    v14 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v18);
    return System_String__Format_75697880((System_String_o *)StringLiteral_26618/*"{0}分{1}秒"*/, v12, v14, 0);
  }
}


int32_t QuestPhaseEntity__GetMoviePlayType(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5970FAA & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_22781/*"moviePlayType"*/);
    byte_5970FAA = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22781/*"moviePlayType"*/, 1, v2);
}


int32_t QuestPhaseEntity__GetNextSceneId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5970F49 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_23331/*"nextSceneId"*/);
    byte_5970F49 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_23331/*"nextSceneId"*/, 0, v2);
}


System_String_array *QuestPhaseEntity__GetNextSceneParam(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  System_String_array *result; // x0

  if ( (byte_5970F4A & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_23332/*"nextSceneParam"*/);
    byte_5970F4A = 1;
  }
  result = (System_String_array *)QuestPhaseEntity__getScriptStr(this, (System_String_o *)StringLiteral_23332/*"nextSceneParam"*/, 0, v2);
  if ( result )
    return System_String__Split((System_String_o *)result, 0x2Cu, 0, 0);
  return result;
}


int32_t QuestPhaseEntity__GetNotDispEquipSkillChargeTurn(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5970F7D & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_23429/*"notDispEquipSkillChargeTurn"*/);
    byte_5970F7D = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_23429/*"notDispEquipSkillChargeTurn"*/, 0, v2);
}


System_Int32_array *QuestPhaseEntity__GetNotHavingQuests(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  System_Int32_array *v3; // x2
  const MethodInfo *v4; // x3

  if ( (byte_5970F4C & 1) == 0 )
  {
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&StringLiteral_23435/*"notHavingQuest"*/);
    byte_5970F4C = 1;
  }
  v3 = (System_Int32_array *)sub_2213B20(int___TypeInfo, 0);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_23435/*"notHavingQuest"*/, v3, v4);
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

  if ( (byte_5970F5A & 1) == 0 )
  {
    sub_2213A60(&System_Action_object__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
    sub_2213A60(&System_Collections_Generic_Dictionary_int__int____TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_object__ForEach__);
    sub_2213A60(&System_Collections_Generic_List_object__TypeInfo);
    sub_2213A60(&Method_QuestPhaseEntity___c__DisplayClass120_0__GetNpcAiInfo_b__0__);
    sub_2213A60(&QuestPhaseEntity___c__DisplayClass120_0_TypeInfo);
    sub_2213A60(&StringLiteral_17421/*"aiMultiNpc"*/);
    sub_2213A60(&StringLiteral_17422/*"aiNpc"*/);
    byte_5970F5A = 1;
  }
  obj = 0;
  value = 0;
  v3 = sub_2213CCC(QuestPhaseEntity___c__DisplayClass120_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  v4 = (System_Collections_Generic_Dictionary_int__object__o *)sub_2213CCC(System_Collections_Generic_Dictionary_int__int____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v4,
    (const MethodInfo_3F9BAFC *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  if ( !v3 )
    goto LABEL_14;
  *(_QWORD *)(v3 + 16) = v4;
  v13 = (System_Collections_Generic_Dictionary_int__int____o **)(v3 + 16);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 16), (int32_t)v4, v7, v8, v9, v10, v11, v12);
  script = this->fields.script;
  if ( !script )
    return *v13;
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)script,
         (Il2CppObject *)StringLiteral_17421/*"aiMultiNpc"*/,
         &value,
         (const MethodInfo_3FFF778 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    v15 = value;
    if ( value )
    {
      naturalAligment = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment;
      if ( value->klass->_2.naturalAligment >= (unsigned int)naturalAligment
        && (System_Collections_Generic_List_object__c *)value->klass->_2.typeHierarchy[naturalAligment - 1] == System_Collections_Generic_List_object__TypeInfo )
      {
        v19 = (System_Action_object__o *)sub_2213CCC(System_Action_object__TypeInfo);
        System_Action_object____ctor(
          v19,
          (Il2CppObject *)v3,
          Method_QuestPhaseEntity___c__DisplayClass120_0__GetNpcAiInfo_b__0__,
          0);
        System_Collections_Generic_List_object___ForEach(
          (System_Collections_Generic_List_object__o *)v15,
          (System_Action_T__o *)v19,
          (const MethodInfo_4484684 *)Method_System_Collections_Generic_List_object__ForEach__);
        return *v13;
      }
    }
  }
  v5 = this->fields.script;
  if ( !v5 )
LABEL_14:
    sub_2213CDC(v5, v6);
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)v5,
         (Il2CppObject *)StringLiteral_17422/*"aiNpc"*/,
         &obj,
         (const MethodInfo_3FFF778 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    QuestPhaseEntity__SetNpcAiInfo((System_Collections_Generic_IDictionary_int__int____o *)*v13, obj, v17);
  }
  return *v13;
}


System_String_o *QuestPhaseEntity__GetOpenedPeriodMessage(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5970F94 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_23611/*"openPeriodMessage"*/);
    byte_5970F94 = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_23611/*"openPeriodMessage"*/, 0, 0);
}


int32_t QuestPhaseEntity__GetOpenedPeriodPrivilegeId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5970F93 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_23612/*"openPeriodPrivilegeId"*/);
    byte_5970F93 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_23612/*"openPeriodPrivilegeId"*/, 0, 0);
}


int32_t QuestPhaseEntity__GetOverWriteMasterImageId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5970F29 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_22547/*"masterImageId"*/);
    byte_5970F29 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22547/*"masterImageId"*/, 0, v2);
}


int32_t QuestPhaseEntity__GetOverwriteCommandSpellContinue(
        QuestPhaseEntity_o *this,
        int32_t def,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_5970F54 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_23677/*"overwriteCommandSpellContinue"*/);
    byte_5970F54 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_23677/*"overwriteCommandSpellContinue"*/, def, v3);
}


int32_t QuestPhaseEntity__GetOverwriteCommandSpellIcon(
        QuestPhaseEntity_o *this,
        int32_t genderType,
        System_Int32_array *defVal,
        const MethodInfo *method)
{
  System_Int32_array *ScriptIntArrayParam; // x0
  int32_t *m_Items; // x8

  if ( (byte_5970F67 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_23678/*"overwriteCommandSpellIcons"*/);
    byte_5970F67 = 1;
  }
  ScriptIntArrayParam = QuestPhaseEntity__getScriptIntArrayParam(
                          this,
                          (System_String_o *)StringLiteral_23678/*"overwriteCommandSpellIcons"*/,
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
    sub_2213CE4(ScriptIntArrayParam);
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

  if ( (byte_5970F10 & 1) == 0 )
  {
    sub_2213A60(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_2213A60(&StringLiteral_23691/*"overwriteEquipSkills"*/);
    byte_5970F10 = 1;
  }
  result = (System_Collections_Generic_Dictionary_string__object__o *)QuestPhaseEntity__getScriptObj(
                                                                        this,
                                                                        (System_String_o *)StringLiteral_23691/*"overwriteEquipSkills"*/,
                                                                        v2);
  if ( result )
  {
    naturalAligment = System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.naturalAligment;
    if ( result->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (System_Collections_Generic_Dictionary_string__object__c *)result->klass->_2.typeHierarchy[naturalAligment - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
    {
      sub_221405C(result, System_Collections_Generic_Dictionary_string__object__TypeInfo, v5);
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

  if ( (byte_5970F41 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_23705/*"overwriteLimitCountSvtIds"*/);
    sub_2213A60(&StringLiteral_23706/*"overwriteLimitCounts"*/);
    sub_2213A60(&StringLiteral_23703/*"overwriteLimitCountIconIds"*/);
    sub_2213A60(&StringLiteral_23704/*"overwriteLimitCountRangeTypes"*/);
    byte_5970F41 = 1;
  }
  ScriptIntArrayParam = QuestPhaseEntity__getScriptIntArrayParam(
                          this,
                          (System_String_o *)StringLiteral_23705/*"overwriteLimitCountSvtIds"*/,
                          0,
                          (const MethodInfo *)overwriteLimitCountIconIds);
  *overwriteLimitCountSvtIds = ScriptIntArrayParam;
  sub_2213A04(
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
    v24 = QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_23706/*"overwriteLimitCounts"*/, 0, v19);
    *overwriteLimitCounts = v24;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)overwriteLimitCounts, (int32_t)v24, v25, v26, v27, v28, v29, v30);
    v32 = QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_23703/*"overwriteLimitCountIconIds"*/, 0, v31);
    *overwriteLimitCountIconIds = v32;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)overwriteLimitCountIconIds,
      (int32_t)v32,
      v33,
      v34,
      v35,
      v36,
      v37,
      v38);
    v40 = QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_23704/*"overwriteLimitCountRangeTypes"*/, 0, v39);
    *overwriteLimitCountRangeTypes = v40;
    sub_2213A04(
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
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)overwriteLimitCounts,
      0,
      v18,
      (System_String_o *)v19,
      v20,
      v21,
      v22,
      v23);
    *overwriteLimitCountIconIds = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)overwriteLimitCountIconIds, 0, v48, v49, v50, v51, v52, v53);
    *overwriteLimitCountRangeTypes = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)overwriteLimitCountRangeTypes, 0, v54, v55, v56, v57, v58, v59);
    return 0;
  }
}


System_Int32_array *QuestPhaseEntity__GetOverwriteResultBgmCondIds(
        QuestPhaseEntity_o *this,
        System_Int32_array *defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_5970F14 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_23724/*"overwriteResultBgmCondIds"*/);
    byte_5970F14 = 1;
  }
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_23724/*"overwriteResultBgmCondIds"*/, defVal, v3);
}


System_Int32_array *QuestPhaseEntity__GetOverwriteResultBgmIds(
        QuestPhaseEntity_o *this,
        System_Int32_array *defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_5970F13 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_23725/*"overwriteResultBgmIds"*/);
    byte_5970F13 = 1;
  }
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_23725/*"overwriteResultBgmIds"*/, defVal, v3);
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

  if ( (byte_5970FA5 & 1) == 0 )
  {
    sub_2213A60(&System_Action_List_object___TypeInfo);
    sub_2213A60(&Method_BasicHelper_ForEach_List_object____);
    sub_2213A60(&Method_BasicHelper_GetValue_string__object___);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_2213A60(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_OfType_List_object____);
    sub_2213A60(&System_Collections_Generic_List_object__TypeInfo);
    sub_2213A60(&Method_QuestPhaseEntity___c__DisplayClass196_0__GetOverwriteSvtTreasureDeviceLv_b__0__);
    sub_2213A60(&QuestPhaseEntity___c__DisplayClass196_0_TypeInfo);
    sub_2213A60(&StringLiteral_23741/*"overwriteSvtTreasureDeviceLv"*/);
    byte_5970FA5 = 1;
  }
  v3 = sub_2213CCC(QuestPhaseEntity___c__DisplayClass196_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  v4 = (System_Collections_Generic_Dictionary_int__int__o *)sub_2213CCC(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v4,
    (const MethodInfo_3F9227C *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  if ( !v3 )
LABEL_11:
    sub_2213CDC(v5, v6);
  *(_QWORD *)(v3 + 16) = v4;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 16), (int32_t)v4, v7, v8, v9, v10, v11, v12);
  Value_object__object = BasicHelper__GetValue_object__object_(
                           (System_Collections_Generic_Dictionary_K__V__o *)this->fields.script,
                           (Il2CppObject *)StringLiteral_23741/*"overwriteSvtTreasureDeviceLv"*/,
                           0,
                           (const MethodInfo_3814850 *)Method_BasicHelper_GetValue_string__object___);
  v15 = (System_Collections_IEnumerable_o *)Value_object__object;
  if ( Value_object__object )
  {
    naturalAligment = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment;
    if ( Value_object__object->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (System_Collections_Generic_List_object__c *)Value_object__object->klass->_2.typeHierarchy[naturalAligment - 1] != System_Collections_Generic_List_object__TypeInfo )
    {
      sub_221405C(Value_object__object, System_Collections_Generic_List_object__TypeInfo, v14);
      goto LABEL_11;
    }
  }
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)Value_object__object, 0) )
  {
    v17 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__OfType_object_(
                                                           v15,
                                                           (const MethodInfo_388851C *)Method_System_Linq_Enumerable_OfType_List_object____);
    v18 = (System_Action_object__o *)sub_2213CCC(System_Action_List_object___TypeInfo);
    System_Action_object____ctor(
      v18,
      (Il2CppObject *)v3,
      Method_QuestPhaseEntity___c__DisplayClass196_0__GetOverwriteSvtTreasureDeviceLv_b__0__,
      0);
    BasicHelper__ForEach_object_(
      v17,
      (System_Action_T__o *)v18,
      (const MethodInfo_381282C *)Method_BasicHelper_ForEach_List_object____);
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

  if ( (byte_5970F04 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_Empty_int___);
    byte_5970F04 = 1;
  }
  result = QuestPhaseEntity__GetPrioredIndividualityLocal(this, method);
  if ( !result )
  {
    v6 = Method_System_Array_Empty_int___;
    v7 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v7 )
    {
      sub_224B964(Method_System_Array_Empty_int___);
      v7 = v6[7];
    }
    v8 = *(_QWORD *)(v7 + 16);
    if ( (*(_WORD *)(v8 + 309) & 1) == 0 )
      v8 = sub_224B908(v5);
    if ( !*(_DWORD *)(v8 + 228) )
      *(__n128 *)&v5 = j_il2cpp_runtime_class_init_0(v8, v4);
    v9 = *(_QWORD *)(v6[7] + 16LL);
    if ( (*(_WORD *)(v9 + 309) & 1) == 0 )
      v9 = sub_224B908(v5);
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

  if ( (byte_5970F05 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_QuestBehaviorMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_QuestPhaseIndividualityMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    byte_5970F05 = 1;
  }
  v3 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  entity = 0;
  if ( !v3 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_QuestBehaviorMaster___);
  UniqueId = (System_Int32_array *)QuestPhaseEntity__GetUniqueId(this, v5);
  if ( !Master_object )
    goto LABEL_15;
  result = QuestBehaviorMaster__GetBattleIndividuality((QuestBehaviorMaster_o *)Master_object, (int64_t)UniqueId, 0, v8);
  if ( !result )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v10);
    UniqueId = (System_Int32_array *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_QuestPhaseIndividualityMaster___);
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
      sub_2213CDC(UniqueId, v7);
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

  if ( (byte_5970F07 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_QuestBehaviorMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    byte_5970F07 = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_QuestBehaviorMaster___);
  UniqueId = QuestPhaseEntity__GetUniqueId(this, v4);
  if ( !Master_object )
    sub_2213CDC(UniqueId, v6);
  return QuestBehaviorMaster__GetBattleBg((QuestBehaviorMaster_o *)Master_object, UniqueId, this->fields.battleBgId, v7);
}


int32_t QuestPhaseEntity__GetPriorityBattleBgType(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x20
  const MethodInfo *v4; // x1
  int64_t UniqueId; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3

  if ( (byte_5970F08 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_QuestBehaviorMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    byte_5970F08 = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_QuestBehaviorMaster___);
  UniqueId = QuestPhaseEntity__GetUniqueId(this, v4);
  if ( !Master_object )
    sub_2213CDC(UniqueId, v6);
  return QuestBehaviorMaster__GetBattleBgType(
           (QuestBehaviorMaster_o *)Master_object,
           UniqueId,
           this->fields.battleBgType,
           v7);
}


int32_t QuestPhaseEntity__GetProgressAfterMovie(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5970F26 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_23983/*"progressAfterMovie"*/);
    byte_5970F26 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_23983/*"progressAfterMovie"*/, 0, v2);
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

  if ( (byte_5970F1D & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_2213A60(&StringLiteral_23849/*"phaseRouteSelect"*/);
    byte_5970F1D = 1;
  }
  ScriptIntParam = QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_23849/*"phaseRouteSelect"*/, 0, v3);
  if ( ScriptIntParam < 1 )
    return 0;
  v7 = ScriptIntParam;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v9);
  if ( clsQuestCheck__CheckQuestPlayableNow((clsQuestCheck_o *)Instance, v7, isIncludeTempData, 0) )
    return v7;
  else
    return 0;
}


System_Int32_array *QuestPhaseEntity__GetReelIconIdArray(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  System_Int32_array *v3; // x2
  const MethodInfo *v4; // x3

  if ( (byte_5970F35 & 1) == 0 )
  {
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&StringLiteral_24194/*"reelIcon"*/);
    byte_5970F35 = 1;
  }
  v3 = (System_Int32_array *)sub_2213B20(int___TypeInfo, 0);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_24194/*"reelIcon"*/, v3, v4);
}


int32_t QuestPhaseEntity__GetReferToQuestPhase(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5970F84 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_24200/*"referToQuestPhase"*/);
    byte_5970F84 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_24200/*"referToQuestPhase"*/, 0, v2);
}


System_String_o *QuestPhaseEntity__GetRenoCompletionDialogText(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5970F9D & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_11824/*"RenoCompletionDialogText"*/);
    byte_5970F9D = 1;
  }
  return EntityScriptUtil__GetStringValue(
           this->fields.script,
           (System_String_o *)StringLiteral_11824/*"RenoCompletionDialogText"*/,
           **(System_String_o ***)(qword_5984390 + 184),
           0);
}


System_String_o *QuestPhaseEntity__GetRenoExplanationDialogText(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5970F9C & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_11826/*"RenoExplanationDialogText"*/);
    byte_5970F9C = 1;
  }
  return EntityScriptUtil__GetStringValue(
           this->fields.script,
           (System_String_o *)StringLiteral_11826/*"RenoExplanationDialogText"*/,
           **(System_String_o ***)(qword_5984390 + 184),
           0);
}


System_Int32_array *QuestPhaseEntity__GetSelectableQuests(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5970F1C & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_24056/*"questSelect"*/);
    byte_5970F1C = 1;
  }
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_24056/*"questSelect"*/, 0, v2);
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

  if ( (byte_5970F44 & 1) == 0 )
  {
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&StringLiteral_24644/*"shadowOffSvtIds"*/);
    byte_5970F44 = 1;
  }
  v3 = (System_Int32_array *)sub_2213B20(int___TypeInfo, 0);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_24644/*"shadowOffSvtIds"*/, v3, v4);
}


int32_t QuestPhaseEntity__GetSingleForceSvtId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5970F42 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_24748/*"singleForceSvtId"*/);
    byte_5970F42 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_24748/*"singleForceSvtId"*/, 0, v2);
}


int32_t QuestPhaseEntity__GetStartBattleSoundMode(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5970F82 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_13595/*"StartBattleSoundMode"*/);
    byte_5970F82 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_13595/*"StartBattleSoundMode"*/, 0, v2);
}


int32_t QuestPhaseEntity__GetStartScreenEffect(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5970F81 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_13594/*"StartBattleScreenEffect"*/);
    byte_5970F81 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_13594/*"StartBattleScreenEffect"*/, 0, v2);
}


int32_t QuestPhaseEntity__GetSubMemberGainHpBattle(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5970FA2 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_25040/*"subMemberGainHpBattle"*/);
    byte_5970FA2 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_25040/*"subMemberGainHpBattle"*/, 0, v2);
}


int32_t QuestPhaseEntity__GetSubMemberGainHpPerBattle(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5970FA4 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_25041/*"subMemberGainHpPerBattle"*/);
    byte_5970FA4 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_25041/*"subMemberGainHpPerBattle"*/, 0, v2);
}


int32_t QuestPhaseEntity__GetSubMemberGainNpBattle(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5970FA3 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_25042/*"subMemberGainNpBattle"*/);
    byte_5970FA3 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_25042/*"subMemberGainNpBattle"*/, 0, v2);
}


int32_t QuestPhaseEntity__GetSupportInitDeckIndex(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5970F55 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_20035/*"eventDeckIndex"*/);
    byte_5970F55 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20035/*"eventDeckIndex"*/, 0, v2);
}


System_Int32_array *QuestPhaseEntity__GetTakeOverEnemyNpcIds(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5970F8F & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_25258/*"takeOverEnemyNpcIds"*/);
    byte_5970F8F = 1;
  }
  return EntityScriptUtil__GetIntArray(this->fields.script, (System_String_o *)StringLiteral_25258/*"takeOverEnemyNpcIds"*/, 0, 0);
}


int32_t QuestPhaseEntity__GetTemporaryCommandSpell(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5970F52 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_25311/*"temporaryCommandSpell"*/);
    byte_5970F52 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_25311/*"temporaryCommandSpell"*/, -1, v2);
}


int64_t QuestPhaseEntity__GetUniqueId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  int32_t phase; // w19
  int32_t questId; // w20

  if ( (byte_5970F03 & 1) == 0 )
  {
    sub_2213A60(&BattleDataDefine_TypeInfo);
    byte_5970F03 = 1;
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

  if ( (byte_5970F43 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_25827/*"useEventDeckNo"*/);
    byte_5970F43 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_25827/*"useEventDeckNo"*/, 1, v2);
}


System_Int32_array *QuestPhaseEntity__GetVoiceOffPlayerSvtIdArray(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5970F66 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_26079/*"voiceOffMySvtIds"*/);
    byte_5970F66 = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_26079/*"voiceOffMySvtIds"*/, 0);
}


int32_t QuestPhaseEntity__GetWaitSetupSwitchPartyChargeTurn(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5970F77 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_26161/*"waveSetupSwitchPartyChargeTurn"*/);
    byte_5970F77 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_26161/*"waveSetupSwitchPartyChargeTurn"*/, 0, v2);
}


System_String_o *QuestPhaseEntity__GetWarBoardStartMovieName(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5970F60 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_16206/*"WarBoardStartMovieName"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_5970F60 = 1;
  }
  return QuestPhaseEntity__getScriptStr(
           this,
           (System_String_o *)StringLiteral_16206/*"WarBoardStartMovieName"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


int32_t QuestPhaseEntity__GetWarId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  const MethodInfo *v4; // x1

  if ( (byte_5970F09 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_QuestMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    byte_5970F09 = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_QuestMaster___);
  if ( !Master_object
    || (Master_object = DataMasterBase_object__object__int___GetEntity(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                          this->fields.questId,
                          (const MethodInfo_3F10B30 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__)) == 0 )
  {
    sub_2213CDC(Master_object, v4);
  }
  return QuestEntity__GetWarId((QuestEntity_o *)Master_object, v4);
}


void QuestPhaseEntity__GetWaveStartMovieInfos(
        QuestPhaseEntity_o *this,
        BattleData_o *battleData,
        System_String_array **movieFiles,
        System_Int32_array **movieWaves,
        BattleMovieParam_array **movieParams,
        const MethodInfo *method)
{
  QuestPhaseEntity_o *v10; // x25
  const MethodInfo *v11; // x3
  System_String_array *ScriptStringArrayParam; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  const MethodInfo *v19; // x3
  System_Int32_array *ScriptIntArrayParam; // x0
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  System_Int32_array *v33; // x8
  __int64 max_length_low; // x1
  BattleMovieParam_array *v35; // x0
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  System_Int32_array *v42; // x8
  __int64 v43; // x24
  __int64 v44; // x26
  int32_t max_length; // w1
  System_Nullable_int__o v46; // x0
  const MethodInfo *v47; // x2
  unsigned __int64 v48; // x27
  System_Int32_array *v49; // x8
  System_String_o *v50; // x2
  System_String_o *v51; // x3
  int32_t v52; // w4
  int32_t v53; // w5
  bool v54; // w6
  bool v55; // w7
  unsigned int *v56; // x28
  QuestPhaseEntity_o *v57; // x23
  __int64 v58; // x1
  MissionNaviTransitionBoardItem_o *v59; // x0
  int32_t v60; // w1
  System_String_o *v61; // x2
  System_String_o *v62; // x3
  int32_t v63; // w4
  int32_t v64; // w5
  bool v65; // w6
  bool v66; // w7
  System_String_o *v67; // x2
  System_String_o *v68; // x3
  int32_t v69; // w4
  int32_t v70; // w5
  bool v71; // w6
  bool v72; // w7
  System_Collections_Generic_Dictionary_int__object__o *v73; // x24
  __int64 v74; // x1
  Il2CppObject *Item; // x25
  __int64 v76; // x8
  QuestPhaseEntity_o *v77; // x25
  unsigned __int64 v78; // x22
  __int64 v79; // x29
  Il2CppObject *v80; // x2
  System_Collections_Generic_HashSet_int__o *v81; // x26
  System_Int32_array *v82; // x22
  System_Collections_Generic_Dictionary_int__object__o *v83; // x25
  il2cpp_array_size_t v84; // x8
  unsigned __int64 v85; // x23
  _BOOL8 v86; // x0
  __int64 v87; // x1
  __int64 v88; // x1
  QuestPhaseEntity___c_c *v89; // x0
  struct QuestPhaseEntity___c_StaticFields *static_fields; // x8
  System_Func_int__int__o *_9__68_0; // x27
  Il2CppObject *v92; // x28
  struct QuestPhaseEntity___c_StaticFields *v93; // x0
  System_String_o *v94; // x2
  System_String_o *v95; // x3
  int32_t v96; // w4
  int32_t v97; // w5
  bool v98; // w6
  bool v99; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v100; // x0
  System_Int32_array *v101; // x0
  System_String_o *v102; // x2
  System_String_o *v103; // x3
  int32_t v104; // w4
  int32_t v105; // w5
  bool v106; // w6
  bool v107; // w7
  BattleMovieParam_array *v108; // x29
  System_String_array *v109; // x0
  System_String_o *v110; // x2
  System_String_o *v111; // x3
  int32_t v112; // w4
  int32_t v113; // w5
  bool v114; // w6
  bool v115; // w7
  BattleMovieParam_array *v116; // x0
  System_String_o *v117; // x2
  System_String_o *v118; // x3
  int32_t v119; // w4
  int32_t v120; // w5
  bool v121; // w6
  bool v122; // w7
  System_Int32_array *v123; // x2
  __int64 v124; // x22
  __int64 v125; // x28
  unsigned __int64 v126; // x8
  unsigned __int64 v127; // x23
  int32_t v128; // w26
  int32_t v129; // w27
  System_String_o *v130; // x2
  System_String_o *v131; // x3
  int32_t v132; // w4
  int32_t v133; // w5
  bool v134; // w6
  bool v135; // w7
  System_String_array *v136; // x8
  Il2CppObject **v137; // x9
  Il2CppObject *v138; // x1
  unsigned int *v139; // x25
  BattleMovieParam_o *v140; // x27
  System_String_o *v141; // x2
  System_String_o *v142; // x3
  int32_t v143; // w4
  int32_t v144; // w5
  bool v145; // w6
  bool v146; // w7
  unsigned int *v147; // x27
  unsigned __int64 v148; // x9
  _DWORD *v149; // x8
  Il2CppObject *v150; // x26
  int klass; // w9
  int klass_high; // w9
  int monitor; // w9
  __int64 v154; // x0
  BattleData_o *btlData; // [xsp+8h] [xbp-C8h]
  System_String_array *v156; // [xsp+10h] [xbp-C0h]
  System_Collections_Generic_Dictionary_int__object__o *v157; // [xsp+18h] [xbp-B8h]
  System_Int32_array *array; // [xsp+20h] [xbp-B0h]
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v159; // [xsp+28h] [xbp-A8h] BYREF
  Il2CppObject *v160; // [xsp+40h] [xbp-90h] BYREF
  Il2CppObject *v161; // [xsp+48h] [xbp-88h] BYREF
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v162; // [xsp+50h] [xbp-80h] BYREF
  Il2CppObject *value; // [xsp+68h] [xbp-68h] BYREF

  v10 = this;
  if ( (byte_5970F27 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_IndexOf_int___);
    sub_2213A60(&BattleMovieParam___TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__BattleMovieParam__TryGetValue__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__string__TryGetValue__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__BattleMovieParam___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__string___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__string__get_Keys__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__BattleMovieParam__set_Item__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__string__set_Item__);
    sub_2213A60(&System_Collections_Generic_Dictionary_int__string__TypeInfo);
    sub_2213A60(&System_Collections_Generic_Dictionary_int__BattleMovieParam__TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_OrderBy_int__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__string__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__string__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__string__get_Current__);
    sub_2213A60(&System_Func_int__int__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_2213A60(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_2213A60(&Method_JsonManager_DeserializeArray_QuestPhaseEntity_MovieOverwriteData___);
    sub_2213A60(&JsonManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_KeyCollection_int__string__GetEnumerator__);
    sub_2213A60(&Method_System_Nullable_int__GetValueOrDefault__);
    sub_2213A60(&Method_System_Nullable_int___ctor__);
    sub_2213A60(&Method_System_Nullable_int__get_HasValue__);
    sub_2213A60(&string___TypeInfo);
    sub_2213A60(&Method_QuestPhaseEntity___c__GetWaveStartMovieInfos_b__68_0__);
    sub_2213A60(&QuestPhaseEntity___c_TypeInfo);
    sub_2213A60(&StringLiteral_26162/*"waveStartMovie"*/);
    sub_2213A60(&StringLiteral_26163/*"waveStartMovieOverwrite"*/);
    this = (QuestPhaseEntity_o *)sub_2213A60(&StringLiteral_22782/*"movieWave"*/);
    byte_5970F27 = 1;
  }
  value = 0;
  memset(&v162, 0, sizeof(v162));
  v160 = 0;
  v161 = 0;
  if ( !battleData )
    goto LABEL_108;
  if ( BattleData__TryGetWaveStartMovieInfoCache(battleData, movieFiles, movieWaves, movieParams, 0) )
    return;
  ScriptStringArrayParam = QuestPhaseEntity__getScriptStringArrayParam(
                             v10,
                             (System_String_o *)StringLiteral_26162/*"waveStartMovie"*/,
                             0,
                             v11);
  *movieFiles = ScriptStringArrayParam;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)movieFiles,
    (int32_t)ScriptStringArrayParam,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  ScriptIntArrayParam = QuestPhaseEntity__getScriptIntArrayParam(v10, (System_String_o *)StringLiteral_22782/*"movieWave"*/, 0, v19);
  *movieWaves = ScriptIntArrayParam;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)movieWaves,
    (int32_t)ScriptIntArrayParam,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  v33 = *movieWaves;
  if ( *movieFiles )
  {
    if ( v33 )
    {
      max_length_low = LODWORD((*movieFiles)->max_length);
      if ( (_DWORD)max_length_low == LODWORD(v33->max_length) )
      {
        v35 = (BattleMovieParam_array *)sub_2213B20(BattleMovieParam___TypeInfo, max_length_low);
        *movieParams = v35;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)movieParams, (int32_t)v35, v36, v37, v38, v39, v40, v41);
        v42 = *movieWaves;
        if ( *movieWaves )
        {
          v43 = 8;
          v44 = 8;
          while ( 1 )
          {
            max_length = v42->max_length;
            v46 = (System_Nullable_int__o)&v159;
            v159.fields._dictionary = 0;
            System_Nullable_int____ctor(
              v46,
              max_length,
              (const MethodInfo_45E430C *)Method_System_Nullable_int___ctor__);
            if ( !LOBYTE(v159.fields._dictionary) )
              break;
            v48 = v43 - 8;
            if ( v43 - 8 >= (__int64)v159.fields._dictionary >> 32 )
              break;
            v49 = *movieWaves;
            if ( !*movieWaves )
              goto LABEL_108;
            if ( v48 >= LODWORD(v49->max_length) )
              goto LABEL_110;
            this = (QuestPhaseEntity_o *)QuestPhaseEntity__GetWaveStartMovieParam(
                                           v10,
                                           *((_DWORD *)&v49->obj.klass + v43),
                                           v47);
            v56 = (unsigned int *)*movieParams;
            if ( this )
            {
              if ( !v56 )
                goto LABEL_108;
              v57 = this;
              this = (QuestPhaseEntity_o *)sub_2213BB4(this, *(_QWORD *)(*(_QWORD *)v56 + 64LL));
              if ( !this )
              {
LABEL_112:
                v154 = sub_2213D00(this, v58);
                sub_2213BA0(v154, 0);
              }
              if ( v48 >= v56[6] )
                goto LABEL_110;
              *(_QWORD *)&v56[v44] = v57;
              v59 = (MissionNaviTransitionBoardItem_o *)&v56[v44];
              v60 = (int)v57;
            }
            else
            {
              if ( !v56 )
                goto LABEL_108;
              if ( v48 >= v56[6] )
                goto LABEL_110;
              v59 = (MissionNaviTransitionBoardItem_o *)&v56[v44];
              v60 = 0;
              *(_QWORD *)&v56[v44] = 0;
            }
            sub_2213A04(v59, v60, v50, v51, v52, v53, v54, v55);
            v42 = *movieWaves;
            ++v43;
            v44 += 2;
            if ( !*movieWaves )
              goto LABEL_28;
          }
        }
        goto LABEL_28;
      }
    }
LABEL_26:
    *movieFiles = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)movieFiles, 0, v27, v28, v29, v30, v31, v32);
    *movieWaves = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)movieWaves, 0, v61, v62, v63, v64, v65, v66);
    *movieParams = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)movieParams, 0, v67, v68, v69, v70, v71, v72);
    return;
  }
  if ( v33 )
    goto LABEL_26;
  *movieParams = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)movieParams, 0, v27, v28, v29, v30, v31, v32);
LABEL_28:
  BattleData__SetWaveStartMovieInfoCache(battleData, *movieFiles, *movieWaves, *movieParams, 0);
  if ( EntityScriptUtil__ScriptHasKey(v10->fields.script, (System_String_o *)StringLiteral_26163/*"waveStartMovieOverwrite"*/, 0) )
  {
    v157 = (System_Collections_Generic_Dictionary_int__object__o *)sub_2213CCC(System_Collections_Generic_Dictionary_int__string__TypeInfo);
    System_Collections_Generic_Dictionary_int__object____ctor(
      v157,
      (const MethodInfo_3F9BAFC *)Method_System_Collections_Generic_Dictionary_int__string___ctor__);
    v73 = (System_Collections_Generic_Dictionary_int__object__o *)sub_2213CCC(System_Collections_Generic_Dictionary_int__BattleMovieParam__TypeInfo);
    System_Collections_Generic_Dictionary_int__object____ctor(
      v73,
      (const MethodInfo_3F9BAFC *)Method_System_Collections_Generic_Dictionary_int__BattleMovieParam___ctor__);
    this = (QuestPhaseEntity_o *)v10->fields.script;
    if ( !this )
      goto LABEL_108;
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             (System_Collections_Generic_Dictionary_object__object__o *)this,
             (Il2CppObject *)StringLiteral_26163/*"waveStartMovieOverwrite"*/,
             (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v74);
    this = (QuestPhaseEntity_o *)JsonManager__DeserializeArray_object_(
                                   Item,
                                   (const MethodInfo_38D3A34 *)Method_JsonManager_DeserializeArray_QuestPhaseEntity_MovieOverwriteData___);
    if ( this )
    {
      v76 = *(_QWORD *)&this->fields.isNpcOnly;
      v77 = this;
      btlData = battleData;
      if ( (int)v76 >= 1 )
      {
        v78 = 0;
        while ( v78 < (unsigned int)v76 )
        {
          v79 = *((_QWORD *)&v77->fields.battleBgType + v78);
          if ( v79 )
          {
            this = (QuestPhaseEntity_o *)v157;
            if ( !v157 )
              goto LABEL_108;
            this = (QuestPhaseEntity_o *)System_Collections_Generic_Dictionary_int__object___TryGetValue(
                                           v157,
                                           *(_DWORD *)(v79 + 16),
                                           &value,
                                           (const MethodInfo_3F9DF8C *)Method_System_Collections_Generic_Dictionary_int__string__TryGetValue__);
            if ( ((unsigned __int8)this & 1) == 0 )
            {
              this = (QuestPhaseEntity_o *)CommonReleaseExtension__IsOpenInBattle(
                                             *(_DWORD *)(v79 + 20),
                                             btlData,
                                             0,
                                             0,
                                             0,
                                             0);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                System_Collections_Generic_Dictionary_int__object___set_Item(
                  v157,
                  *(_DWORD *)(v79 + 16),
                  *(Il2CppObject **)(v79 + 24),
                  (const MethodInfo_3F9C49C *)Method_System_Collections_Generic_Dictionary_int__string__set_Item__);
                v80 = *(Il2CppObject **)(v79 + 32);
                if ( v80 )
                {
                  if ( !v73 )
                    goto LABEL_108;
                  System_Collections_Generic_Dictionary_int__object___set_Item(
                    v73,
                    *(_DWORD *)(v79 + 16),
                    v80,
                    (const MethodInfo_3F9C49C *)Method_System_Collections_Generic_Dictionary_int__BattleMovieParam__set_Item__);
                }
              }
            }
          }
          LODWORD(v76) = *(_DWORD *)&v77->fields.isNpcOnly;
          if ( (__int64)++v78 >= (int)v76 )
            goto LABEL_44;
        }
LABEL_110:
        sub_2213CE4(this);
      }
LABEL_44:
      array = *movieWaves;
      v81 = (System_Collections_Generic_HashSet_int__o *)sub_2213CCC(System_Collections_Generic_HashSet_int__TypeInfo);
      System_Collections_Generic_HashSet_int____ctor(
        v81,
        (const MethodInfo_42B3DF0 *)Method_System_Collections_Generic_HashSet_int___ctor__);
      v82 = *movieWaves;
      v83 = v157;
      if ( *movieWaves )
      {
        v84 = v82->max_length;
        if ( (int)v84 >= 1 )
        {
          v85 = 0;
          while ( v85 < (unsigned int)v84 )
          {
            if ( !v81 )
              goto LABEL_108;
            this = (QuestPhaseEntity_o *)System_Collections_Generic_HashSet_int___Add(
                                           v81,
                                           v82->m_Items[v85],
                                           (const MethodInfo_42B5030 *)Method_System_Collections_Generic_HashSet_int__Add__);
            LODWORD(v84) = v82->max_length;
            if ( (__int64)++v85 >= (int)v84 )
              goto LABEL_50;
          }
          goto LABEL_110;
        }
      }
LABEL_50:
      if ( v157 )
      {
        this = (QuestPhaseEntity_o *)System_Collections_Generic_Dictionary_int__object___get_Keys(
                                       v157,
                                       (const MethodInfo_3F9C158 *)Method_System_Collections_Generic_Dictionary_int__string__get_Keys__);
        if ( this )
        {
          System_Collections_Generic_Dictionary_KeyCollection_int__object___GetEnumerator(
            &v159,
            (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)this,
            (const MethodInfo_437DCDC *)Method_System_Collections_Generic_Dictionary_KeyCollection_int__string__GetEnumerator__);
          v162 = v159;
          v159.fields._dictionary = 0;
          *(_QWORD *)&v159.fields._index = &v162;
          while ( 1 )
          {
            v86 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__object___MoveNext(
                    &v162,
                    (const MethodInfo_415904C *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__string__MoveNext__);
            if ( !v86 )
              break;
            if ( !v81 )
              sub_2213CDC(v86, v87);
            System_Collections_Generic_HashSet_int___Add(
              v81,
              (int32_t)v162.fields._currentKey,
              (const MethodInfo_42B5030 *)Method_System_Collections_Generic_HashSet_int__Add__);
          }
          System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__object___Dispose(
            &v162,
            (const MethodInfo_4159048 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_int__string__Dispose__);
          v89 = QuestPhaseEntity___c_TypeInfo;
          if ( !*(&QuestPhaseEntity___c_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(QuestPhaseEntity___c_TypeInfo, v88);
            v89 = QuestPhaseEntity___c_TypeInfo;
          }
          static_fields = v89->static_fields;
          _9__68_0 = static_fields->__9__68_0;
          if ( !_9__68_0 )
          {
            if ( !*(&v89->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(v89, v88);
              static_fields = QuestPhaseEntity___c_TypeInfo->static_fields;
            }
            v92 = (Il2CppObject *)static_fields->__9;
            _9__68_0 = (System_Func_int__int__o *)sub_2213CCC(System_Func_int__int__TypeInfo);
            System_Func_int__int____ctor(
              _9__68_0,
              v92,
              Method_QuestPhaseEntity___c__GetWaveStartMovieInfos_b__68_0__,
              0);
            v93 = QuestPhaseEntity___c_TypeInfo->static_fields;
            v93->__9__68_0 = _9__68_0;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)&v93->__9__68_0,
              (int32_t)_9__68_0,
              v94,
              v95,
              v96,
              v97,
              v98,
              v99);
          }
          v100 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_int__int_(
                                                                        (System_Collections_Generic_IEnumerable_TSource__o *)v81,
                                                                        (System_Func_TSource__TKey__o *)_9__68_0,
                                                                        (const MethodInfo_3888900 *)Method_System_Linq_Enumerable_OrderBy_int__int___);
          v101 = System_Linq_Enumerable__ToArray_int_(
                   v100,
                   (const MethodInfo_389B994 *)Method_System_Linq_Enumerable_ToArray_int___);
          *movieWaves = v101;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)movieWaves, (int32_t)v101, v102, v103, v104, v105, v106, v107);
          if ( *movieWaves )
          {
            v108 = *movieParams;
            v156 = *movieFiles;
            v109 = (System_String_array *)sub_2213B20(string___TypeInfo, LODWORD((*movieWaves)->max_length));
            *movieFiles = v109;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)movieFiles,
              (int32_t)v109,
              v110,
              v111,
              v112,
              v113,
              v114,
              v115);
            if ( *movieWaves )
            {
              v116 = (BattleMovieParam_array *)sub_2213B20(
                                                 BattleMovieParam___TypeInfo,
                                                 LODWORD((*movieWaves)->max_length));
              *movieParams = v116;
              sub_2213A04(
                (MissionNaviTransitionBoardItem_o *)movieParams,
                (int32_t)v116,
                v117,
                v118,
                v119,
                v120,
                v121,
                v122);
              v123 = *movieWaves;
              if ( *movieWaves )
              {
                v124 = 8;
                v125 = 8;
                while ( 1 )
                {
                  v126 = LODWORD(v123->max_length);
                  v127 = v125 - 8;
                  if ( v125 - 8 >= (int)v126 )
                  {
                    BattleData__SetWaveStartMovieInfoCache(btlData, *movieFiles, v123, *movieParams, 0);
                    return;
                  }
                  if ( v127 >= v126 )
                    goto LABEL_110;
                  v128 = *((_DWORD *)&v123->obj.klass + v125);
                  v129 = array
                       ? System_Array__IndexOf_int_(
                           array,
                           v128,
                           (const MethodInfo_3A2E554 *)Method_System_Array_IndexOf_int___)
                       : -1;
                  this = (QuestPhaseEntity_o *)System_Collections_Generic_Dictionary_int__object___TryGetValue(
                                                 v83,
                                                 v128,
                                                 &v161,
                                                 (const MethodInfo_3F9DF8C *)Method_System_Collections_Generic_Dictionary_int__string__TryGetValue__);
                  if ( ((unsigned __int8)this & 1) != 0 )
                    break;
                  if ( (v129 & 0x80000000) == 0 && v156 && v129 < SLODWORD(v156->max_length) )
                  {
                    v136 = *movieFiles;
                    if ( !*movieFiles )
                      goto LABEL_108;
                    if ( v127 >= LODWORD(v136->max_length) )
                      goto LABEL_110;
                    v137 = (Il2CppObject **)&v156->m_Items[v129];
                    goto LABEL_75;
                  }
LABEL_76:
                  if ( (v129 & 0x80000000) == 0 && v108 && v129 < SLODWORD(v108->max_length) )
                  {
                    v139 = (unsigned int *)*movieParams;
                    if ( !*movieParams )
                      goto LABEL_108;
                    v140 = v108->m_Items[v129];
                    if ( v140 )
                    {
                      this = (QuestPhaseEntity_o *)sub_2213BB4(v140, *(_QWORD *)(*(_QWORD *)v139 + 64LL));
                      if ( !this )
                        goto LABEL_112;
                    }
                    if ( v127 >= v139[6] )
                      goto LABEL_110;
                    *(_QWORD *)&v139[v124] = v140;
                    sub_2213A04(
                      (MissionNaviTransitionBoardItem_o *)&v139[v124],
                      (int32_t)v140,
                      v130,
                      v131,
                      v132,
                      v133,
                      v134,
                      v135);
                    v83 = v157;
                  }
                  if ( !v73 )
                    goto LABEL_108;
                  this = (QuestPhaseEntity_o *)System_Collections_Generic_Dictionary_int__object___TryGetValue(
                                                 v73,
                                                 v128,
                                                 &v160,
                                                 (const MethodInfo_3F9DF8C *)Method_System_Collections_Generic_Dictionary_int__BattleMovieParam__TryGetValue__);
                  if ( ((unsigned __int8)this & 1) != 0 )
                  {
                    v147 = (unsigned int *)*movieParams;
                    if ( !*movieParams )
                      goto LABEL_108;
                    v148 = v147[6];
                    if ( v127 >= v148 )
                      goto LABEL_110;
                    v149 = *(_DWORD **)&v147[v124];
                    v150 = v160;
                    if ( v149 )
                    {
                      if ( !v160 )
                        goto LABEL_108;
                      klass = (int)v160[1].klass;
                      if ( (klass & 0x80000000) == 0 )
                        v149[4] = klass;
                      klass_high = HIDWORD(v150[1].klass);
                      if ( (klass_high & 0x80000000) == 0 )
                        v149[5] = klass_high;
                      monitor = (int)v150[1].monitor;
                      if ( (monitor & 0x80000000) == 0 )
                        v149[6] = monitor;
                    }
                    else
                    {
                      if ( v160 )
                      {
                        this = (QuestPhaseEntity_o *)sub_2213BB4(v160, *(_QWORD *)(*(_QWORD *)v147 + 64LL));
                        if ( !this )
                          goto LABEL_112;
                        v148 = v147[6];
                      }
                      if ( v127 >= v148 )
                        goto LABEL_110;
                      *(_QWORD *)&v147[v124] = v150;
                      sub_2213A04(
                        (MissionNaviTransitionBoardItem_o *)&v147[v124],
                        (int32_t)v150,
                        v141,
                        v142,
                        v143,
                        v144,
                        v145,
                        v146);
                    }
                  }
                  v123 = *movieWaves;
                  v124 += 2;
                  ++v125;
                  if ( !*movieWaves )
                    goto LABEL_108;
                }
                v136 = *movieFiles;
                if ( !*movieFiles )
                  goto LABEL_108;
                if ( v127 >= LODWORD(v136->max_length) )
                  goto LABEL_110;
                v137 = &v161;
LABEL_75:
                v138 = *v137;
                *(Il2CppClass **)((char *)&v136->obj.klass + v124 * 4) = (Il2CppClass *)*v137;
                sub_2213A04(
                  (MissionNaviTransitionBoardItem_o *)((char *)v136 + v124 * 4),
                  (int32_t)v138,
                  v130,
                  v131,
                  v132,
                  v133,
                  v134,
                  v135);
                goto LABEL_76;
              }
            }
          }
        }
      }
LABEL_108:
      sub_2213CDC(this, battleData);
    }
  }
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

  if ( (byte_5970F2D & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_2213A60(&StringLiteral_26165/*"wave{0}StartMovieParam"*/);
    sub_2213A60(&StringLiteral_26164/*"waveStartMovieParam#{0}"*/);
    byte_5970F2D = 1;
  }
  v13 = wave;
  v5 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v13);
  v6 = (Il2CppObject *)System_String__Format((System_String_o *)StringLiteral_26164/*"waveStartMovieParam#{0}"*/, v5, 0);
  if ( this->fields.script )
  {
    v7 = (System_String_o *)v6;
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script,
           v6,
           (const MethodInfo_3FFDE04 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      return QuestPhaseEntity__GetBattleMovieParam(this, v7, v8);
    }
  }
  v12 = wave;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v12);
  v10 = (Il2CppObject *)System_String__Format((System_String_o *)StringLiteral_26165/*"wave{0}StartMovieParam"*/, v9, 0);
  if ( this->fields.script
    && (v7 = (System_String_o *)v10,
        System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script,
          v10,
          (const MethodInfo_3FFDE04 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__)) )
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

  if ( (byte_5970F3D & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_19894/*"endBgmOff"*/);
    byte_5970F3D = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19894/*"endBgmOff"*/, 0, v2);
}


int32_t QuestPhaseEntity__GetWinVoiceOffFlg(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5970F3B & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_19908/*"endVoiceOff"*/);
    byte_5970F3B = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19908/*"endVoiceOff"*/, 0, v2);
}


bool QuestPhaseEntity__HasEnemyExBattleUiPositionY(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5970F9E & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_19917/*"enemyExBattleUiPositionY"*/);
    byte_5970F9E = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_19917/*"enemyExBattleUiPositionY"*/, 0);
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

  if ( (byte_5970F98 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_Empty_ExtraBattleUserInterfaceData_JsonConvertData___);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_2213A60(&Method_System_Linq_Enumerable_Any_ExtraBattleUserInterfaceData_JsonConvertData___);
    sub_2213A60(&Method_JsonManager_Deserialize_ExtraBattleUserInterfaceData_JsonConvertData_____);
    sub_2213A60(&JsonManager_TypeInfo);
    sub_2213A60(&StringLiteral_20209/*"exBattleUI"*/);
    byte_5970F98 = 1;
  }
  v11 = Method_System_Array_Empty_ExtraBattleUserInterfaceData_JsonConvertData___;
  value = 0;
  v12 = *((_QWORD *)Method_System_Array_Empty_ExtraBattleUserInterfaceData_JsonConvertData___ + 7);
  if ( !v12 )
  {
    sub_224B964(Method_System_Array_Empty_ExtraBattleUserInterfaceData_JsonConvertData___);
    v12 = v11[7];
  }
  v13 = *(_QWORD *)(v12 + 16);
  if ( (*(_WORD *)(v13 + 309) & 1) == 0 )
    v13 = sub_224B908(v8);
  if ( !*(_DWORD *)(v13 + 228) )
    *(__n128 *)&v8 = j_il2cpp_runtime_class_init_0(v13, dataArray);
  v14 = *(_QWORD *)(v11[7] + 16LL);
  if ( (*(_WORD *)(v14 + 309) & 1) == 0 )
    v14 = sub_224B908(v8);
  v15 = *(ExtraBattleUserInterfaceData_JsonConvertData_array ***)(v14 + 184);
  v16 = *v15;
  *dataArray = *v15;
  sub_2213A04(
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
    sub_2213CDC(0, v17);
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)script,
         (Il2CppObject *)StringLiteral_20209/*"exBattleUI"*/,
         &value,
         (const MethodInfo_3FFF778 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    v20 = value;
    if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v19);
    v21 = (ExtraBattleUserInterfaceData_JsonConvertData_array *)JsonManager__Deserialize_object_(
                                                                  v20,
                                                                  (const MethodInfo_38D38E4 *)Method_JsonManager_Deserialize_ExtraBattleUserInterfaceData_JsonConvertData_____);
    *dataArray = v21;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)dataArray, (int32_t)v21, v22, v23, v24, v25, v26, v27);
  }
  return System_Linq_Enumerable__Any_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)*dataArray,
           (const MethodInfo_38660DC *)Method_System_Linq_Enumerable_Any_ExtraBattleUserInterfaceData_JsonConvertData___);
}


bool QuestPhaseEntity__HasReleaseFocusQuestBoardKey(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5970F7A & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_21978/*"isReleaseFocus"*/);
    byte_5970F7A = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_21978/*"isReleaseFocus"*/, 0);
}


bool QuestPhaseEntity__IsActiveAssistSkill(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  System_Int32_array *v3; // x0
  const MethodInfo *v4; // x3
  System_Int32_array *ScriptIntArrayParam; // x0
  __int64 v6; // x1

  if ( (byte_5970F4E & 1) == 0 )
  {
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&StringLiteral_17634/*"assistIds"*/);
    byte_5970F4E = 1;
  }
  v3 = (System_Int32_array *)sub_2213B20(int___TypeInfo, 0);
  ScriptIntArrayParam = QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_17634/*"assistIds"*/, v3, v4);
  if ( !ScriptIntArrayParam )
    sub_2213CDC(0, v6);
  return LODWORD(ScriptIntArrayParam->max_length) != 0;
}


bool QuestPhaseEntity__IsAreaImporveQuest(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_5970F61 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_17578/*"areaImprovementQuest"*/);
    byte_5970F61 = 1;
  }
  return QuestPhaseEntity__getScriptObj(this, (System_String_o *)StringLiteral_17578/*"areaImprovementQuest"*/, v2) != 0;
}


bool QuestPhaseEntity__IsAssistExecAll(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5970F9B & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_17632/*"assistExecAll"*/);
    byte_5970F9B = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_17632/*"assistExecAll"*/, 0, 0) != 0;
}


bool QuestPhaseEntity__IsClearFieldBuffWhenWaveStart(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5970F97 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_18796/*"clearFieldBuffWhenWaveStart"*/);
    byte_5970F97 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_18796/*"clearFieldBuffWhenWaveStart"*/, 0, 0) != 0;
}


bool QuestPhaseEntity__IsContinueWaveRestart(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5970F78 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_19074/*"continueWaveRestart"*/);
    byte_5970F78 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19074/*"continueWaveRestart"*/, 0, v2) != 0;
}


bool QuestPhaseEntity__IsDispQuestClearReward(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5970FAE & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_21920/*"isDispQuestClearReward"*/);
    byte_5970FAE = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_21920/*"isDispQuestClearReward"*/, 0, 0) != 0;
}


bool QuestPhaseEntity__IsEnableSkipMovie(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5970FAC & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_21924/*"isEnableSkipMovie"*/);
    byte_5970FAC = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21924/*"isEnableSkipMovie"*/, 0, v2) == 1;
}


bool QuestPhaseEntity__IsFadeOutMainBgmBeforeBattle(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5970F85 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_20297/*"fadeOutMainBgmBeforeBattle"*/);
    byte_5970F85 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_20297/*"fadeOutMainBgmBeforeBattle"*/, 0);
}


bool QuestPhaseEntity__IsHideAssistConfButton(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5970F51 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_20912/*"hideAssistConfButton"*/);
    byte_5970F51 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20912/*"hideAssistConfButton"*/, 0, v2) != 0;
}


bool QuestPhaseEntity__IsHideBattlePointGauge(
        QuestPhaseEntity_o *this,
        int32_t battlePointId,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *IntArray; // x0

  if ( (byte_5970F8A & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Contains_int___);
    sub_2213A60(&StringLiteral_7643/*"HideBattlePointGauge"*/);
    byte_5970F8A = 1;
  }
  IntArray = (System_Collections_Generic_IEnumerable_TSource__o *)EntityScriptUtil__GetIntArray(
                                                                    this->fields.script,
                                                                    (System_String_o *)StringLiteral_7643/*"HideBattlePointGauge"*/,
                                                                    0,
                                                                    0);
  if ( IntArray )
    LOBYTE(IntArray) = System_Linq_Enumerable__Contains_int_(
                         IntArray,
                         battlePointId,
                         (const MethodInfo_3876640 *)Method_System_Linq_Enumerable_Contains_int___);
  return (char)IntArray;
}


bool QuestPhaseEntity__IsHideBattleStartTimingMasterUI(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5970FAD & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_20914/*"hideBattleStartTimingMasterUI"*/);
    byte_5970FAD = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20914/*"hideBattleStartTimingMasterUI"*/, -1, v2) == 1;
}


bool QuestPhaseEntity__IsIgnoreBattleLoseDialog(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5970F21 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_21256/*"ignoreBattleLoseDialog"*/);
    byte_5970F21 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_21256/*"ignoreBattleLoseDialog"*/, 0);
}


bool QuestPhaseEntity__IsIgnoreBattlePointUp(QuestPhaseEntity_o *this, int32_t battlePointId, const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *IntArray; // x0

  if ( (byte_5970F88 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Contains_int___);
    sub_2213A60(&StringLiteral_7875/*"IgnoreBattlePointUp"*/);
    byte_5970F88 = 1;
  }
  IntArray = (System_Collections_Generic_IEnumerable_TSource__o *)EntityScriptUtil__GetIntArray(
                                                                    this->fields.script,
                                                                    (System_String_o *)StringLiteral_7875/*"IgnoreBattlePointUp"*/,
                                                                    0,
                                                                    0);
  if ( IntArray )
    LOBYTE(IntArray) = System_Linq_Enumerable__Contains_int_(
                         IntArray,
                         battlePointId,
                         (const MethodInfo_3876640 *)Method_System_Linq_Enumerable_Contains_int___);
  return (char)IntArray;
}


bool QuestPhaseEntity__IsIgnoreSyncEquipGrand(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5970FA1 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_21259/*"ignoreSyncEquipGrand"*/);
    byte_5970FA1 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21259/*"ignoreSyncEquipGrand"*/, 0, v2) != 0;
}


bool QuestPhaseEntity__IsInfinityCost(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5970FA6 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_21944/*"isInfinityCost"*/);
    byte_5970FA6 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_21944/*"isInfinityCost"*/, 0, 0) != 0;
}


bool QuestPhaseEntity__IsInterruptionQuest(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5970F80 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_21842/*"interruptibleQuest"*/);
    byte_5970F80 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21842/*"interruptibleQuest"*/, 0, v2) != 0;
}


bool QuestPhaseEntity__IsInvisibleConnectAndLoad(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5970F48 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_21882/*"invisibleConnectAndLoad"*/);
    byte_5970F48 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21882/*"invisibleConnectAndLoad"*/, 0, v2) != 0;
}


bool QuestPhaseEntity__IsKeepSubBgmAfterBattleResult(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5970F3E & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_22171/*"keepSubBgmUntilBattleResult"*/);
    byte_5970F3E = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_22171/*"keepSubBgmUntilBattleResult"*/, 0);
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

  if ( (byte_5970F47 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_FindAll_int___);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_int___ctor___91630040);
    sub_2213A60(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_2213A60(&System_Predicate_int__TypeInfo);
    byte_5970F47 = 1;
  }
  PrioredIndividuality = (System_Collections_Generic_IEnumerable_T__o *)QuestPhaseEntity__GetPrioredIndividuality(
                                                                          this,
                                                                          (const MethodInfo *)individualitys);
  v6 = (System_Collections_Generic_HashSet_int__o *)sub_2213CCC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor_69943008(
    v6,
    PrioredIndividuality,
    (const MethodInfo_42B3EE0 *)Method_System_Collections_Generic_HashSet_int___ctor___91630040);
  All_int = (System_Predicate_int__o *)sub_2213CCC(System_Predicate_int__TypeInfo);
  if ( !v6
    || (v9 = (System_Predicate_T__o *)All_int,
        System_Predicate_int____ctor(All_int, (Il2CppObject *)v6, (intptr_t)v6->klass->vtable._8_Contains.method, 0),
        (All_int = (System_Predicate_int__o *)System_Array__FindAll_int_(
                                                individualitys,
                                                v9,
                                                (const MethodInfo_39A92E8 *)Method_System_Array_FindAll_int___)) == 0) )
  {
    sub_2213CDC(All_int, v8);
  }
  return All_int->fields.invoke_impl != 0;
}


bool QuestPhaseEntity__IsMoviePhase(QuestPhaseEntity_o *this, int32_t gender, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 *v6; // x8

  if ( (byte_5970FA8 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_22497/*"maleMovieFolder"*/);
    sub_2213A60(&StringLiteral_22778/*"movieFolder"*/);
    sub_2213A60(&StringLiteral_20314/*"femaleMovieFolder"*/);
    byte_5970FA8 = 1;
  }
  if ( gender == 2 )
  {
    v6 = &StringLiteral_20314/*"femaleMovieFolder"*/;
  }
  else
  {
    if ( gender != 1 )
      return QuestPhaseEntity__getScriptStr(this, (System_String_o *)StringLiteral_22778/*"movieFolder"*/, 0, v3) != 0;
    v6 = &StringLiteral_22497/*"maleMovieFolder"*/;
  }
  if ( QuestPhaseEntity__getScriptStr(this, (System_String_o *)*v6, 0, v3) )
    return 1;
  return QuestPhaseEntity__getScriptStr(this, (System_String_o *)StringLiteral_22778/*"movieFolder"*/, 0, v3) != 0;
}


bool QuestPhaseEntity__IsNonStopEndBgm(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5970F1E & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_23393/*"nonStopEndBgm"*/);
    byte_5970F1E = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_23393/*"nonStopEndBgm"*/, 0, v2) != 0;
}


bool QuestPhaseEntity__IsNoneSupportFriendPoint(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5970F8D & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_23405/*"noneSupportFriendPoint"*/);
    byte_5970F8D = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_23405/*"noneSupportFriendPoint"*/, 0, 0) != 0;
}


bool QuestPhaseEntity__IsNotClassBoard(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5970F72 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_23426/*"notClassBoard"*/);
    byte_5970F72 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_23426/*"notClassBoard"*/, 0, v2) != 0;
}


bool QuestPhaseEntity__IsNotResetResultDispFlag(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5970F2A & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_23437/*"notResetResultDispFlag"*/);
    byte_5970F2A = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_23437/*"notResetResultDispFlag"*/, 0, v2) != 0;
}


bool QuestPhaseEntity__IsNotUseRestrictionDialog(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5970F73 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_23439/*"notUseRestrictionDialog"*/);
    byte_5970F73 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_23439/*"notUseRestrictionDialog"*/, 0, v2) != 0;
}


bool QuestPhaseEntity__IsPlayMovieFromMaterial(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  return QuestPhaseEntity__GetMoviePlayType(this, method) == 3;
}


bool QuestPhaseEntity__IsPlayScriptBeforeForWarBoard(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5970F4D & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_21982/*"isScriptPlayForWarBoard"*/);
    byte_5970F4D = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21982/*"isScriptPlayForWarBoard"*/, 0, v2) != 0;
}


bool QuestPhaseEntity__IsReleaseFocusQuestBoard(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5970F7B & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_21978/*"isReleaseFocus"*/);
    byte_5970F7B = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21978/*"isReleaseFocus"*/, 0, v2) != 0;
}


bool QuestPhaseEntity__IsRepeatReward(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5970F70 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_24249/*"repeatReward"*/);
    byte_5970F70 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_24249/*"repeatReward"*/, 0, v2) != 0;
}


bool QuestPhaseEntity__IsReverseMyDeckSvtPosition(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5970F86 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_24305/*"reverseMyDeckSvtPosition"*/);
    byte_5970F86 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_24305/*"reverseMyDeckSvtPosition"*/, 0);
}


bool QuestPhaseEntity__IsSaveInterruptionEnemyData(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5970F90 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_24399/*"saveInterruptionEnemyData"*/);
    byte_5970F90 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_24399/*"saveInterruptionEnemyData"*/, 0, 0) != 0;
}


bool QuestPhaseEntity__IsSkipBattleFinish(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5970F6A & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_24770/*"skipBattleFinish"*/);
    byte_5970F6A = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_24770/*"skipBattleFinish"*/, 0, v2) != 0;
}


bool QuestPhaseEntity__IsSkipMoveNextBattleFade(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5970F8E & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_24774/*"skipMoveNextBattleFade"*/);
    byte_5970F8E = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_24774/*"skipMoveNextBattleFade"*/, 0, 0) != 0;
}


bool QuestPhaseEntity__IsUseGrandBoard(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5970F99 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_21996/*"isUseGrandBoard"*/);
    byte_5970F99 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_21996/*"isUseGrandBoard"*/, 0, 0) != 0;
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
  const MethodInfo_3813FA0 *v13; // x3
  int32_t v14; // w0
  const MethodInfo_3813FA0 *v15; // x3
  Il2CppObject *value; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_5970F9A & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_GetValue_long___);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_2213A60(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_2213A60(&StringLiteral_20037/*"eventId"*/);
    sub_2213A60(&StringLiteral_23692/*"overwriteEventEquipSkillParts"*/);
    sub_2213A60(&StringLiteral_21091/*"iconId"*/);
    sub_2213A60(&StringLiteral_20853/*"groupId"*/);
    byte_5970F9A = 1;
  }
  script = this->fields.script;
  value = 0;
  *eventId = 0;
  *iconId = 0;
  *groupId = 0;
  if ( !script )
    sub_2213CDC(0, eventId);
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)script,
         (Il2CppObject *)StringLiteral_23692/*"overwriteEventEquipSkillParts"*/,
         &value,
         (const MethodInfo_3FFF778 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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
                       (System_String_o *)StringLiteral_20037/*"eventId"*/,
                       0,
                       (const MethodInfo_3813FA0 *)Method_BasicHelper_GetValue_long___);
        v13 = (const MethodInfo_3813FA0 *)Method_BasicHelper_GetValue_long___;
        *eventId = Value_long;
        v14 = BasicHelper__GetValue_long_(
                (System_Collections_Generic_Dictionary_string__object__o *)v10,
                (System_String_o *)StringLiteral_21091/*"iconId"*/,
                0,
                v13);
        v15 = (const MethodInfo_3813FA0 *)Method_BasicHelper_GetValue_long___;
        *iconId = v14;
        *groupId = BasicHelper__GetValue_long_(
                     (System_Collections_Generic_Dictionary_string__object__o *)v10,
                     (System_String_o *)StringLiteral_20853/*"groupId"*/,
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

  if ( (byte_5970F53 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_25837/*"useTemporaryCommandSpell"*/);
    byte_5970F53 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_25837/*"useTemporaryCommandSpell"*/, -1, v2) == 1;
}


bool QuestPhaseEntity__IsVoiceEffectBattle(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5970FAF & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_22000/*"isVoiceEffectBattle"*/);
    byte_5970FAF = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22000/*"isVoiceEffectBattle"*/, 0, 0) != 0;
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

  if ( (byte_5970F68 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_26156/*"waveCountInfinity"*/);
    byte_5970F68 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_26156/*"waveCountInfinity"*/, -1, v2) != -1;
}


bool QuestPhaseEntity__IsWaveSetup(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5970F74 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_26158/*"waveSetup"*/);
    byte_5970F74 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_26158/*"waveSetup"*/, 0, v2) != 0;
}


bool QuestPhaseEntity__IsWaveSetupAsOneParty(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5970F75 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_26159/*"waveSetupAsOneParty"*/);
    byte_5970F75 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_26159/*"waveSetupAsOneParty"*/, 0, v2) != 0;
}


bool QuestPhaseEntity__IsWaveSetupSwitchParty(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5970F76 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_26160/*"waveSetupSwitchParty"*/);
    byte_5970F76 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_26160/*"waveSetupSwitchParty"*/, 0, v2) != 0;
}


bool QuestPhaseEntity__PlayHappinessCounterEffect(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5970F89 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_11108/*"PlayHappinessCounterEffect"*/);
    byte_5970F89 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_11108/*"PlayHappinessCounterEffect"*/, 0);
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
  System_Converter_object__int__o *_9__121_0; // x22
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

  if ( (byte_5970F5B & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_GetValue_long___);
    sub_2213A60(&Method_BasicHelper_GetValue_List_object____);
    sub_2213A60(&System_Converter_object__int__TypeInfo);
    sub_2213A60(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_2213A60(&System_Collections_Generic_IDictionary_int__int____TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_object__ConvertAll_int___);
    sub_2213A60(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_2213A60(&Method_QuestPhaseEntity___c__SetNpcAiInfo_b__121_0__);
    sub_2213A60(&QuestPhaseEntity___c_TypeInfo);
    sub_2213A60(&StringLiteral_17420/*"aiIds"*/);
    sub_2213A60(&StringLiteral_23454/*"npcId"*/);
    byte_5970F5B = 1;
  }
  if ( obj )
  {
    naturalAligment = System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.naturalAligment;
    if ( obj->klass->_2.naturalAligment >= (unsigned int)naturalAligment
      && (System_Collections_Generic_Dictionary_string__object__c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] == System_Collections_Generic_Dictionary_string__object__TypeInfo )
    {
      Value_long = BasicHelper__GetValue_long_(
                     (System_Collections_Generic_Dictionary_string__object__o *)obj,
                     (System_String_o *)StringLiteral_23454/*"npcId"*/,
                     0,
                     (const MethodInfo_3813FA0 *)Method_BasicHelper_GetValue_long___);
      Value_object = BasicHelper__GetValue_object_(
                       (System_Collections_Generic_Dictionary_string__object__o *)obj,
                       (System_String_o *)StringLiteral_17420/*"aiIds"*/,
                       0,
                       (const MethodInfo_3814090 *)Method_BasicHelper_GetValue_List_object____);
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
          _9__121_0 = static_fields->__9__121_0;
          if ( !_9__121_0 )
          {
            if ( !*(&v10->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(v10, v8);
              static_fields = QuestPhaseEntity___c_TypeInfo->static_fields;
            }
            v13 = (Il2CppObject *)static_fields->__9;
            _9__121_0 = (System_Converter_object__int__o *)sub_2213CCC(System_Converter_object__int__TypeInfo);
            System_Converter_object__int____ctor(
              _9__121_0,
              v13,
              Method_QuestPhaseEntity___c__SetNpcAiInfo_b__121_0__,
              0);
            v14 = QuestPhaseEntity___c_TypeInfo->static_fields;
            v14->__9__121_0 = _9__121_0;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)&v14->__9__121_0,
              (int32_t)_9__121_0,
              v15,
              v16,
              v17,
              v18,
              v19,
              v20);
          }
          v21 = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_object___ConvertAll_int_(
                                                            v9,
                                                            (System_Converter_T__TOutput__o *)_9__121_0,
                                                            (const MethodInfo_36D76C4 *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
          if ( !v21
            || (v21 = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_int___ToArray(
                                                                  v21,
                                                                  (const MethodInfo_4468CF0 *)Method_System_Collections_Generic_List_int__ToArray__),
                !dicNpcAiId) )
          {
            sub_2213CDC(v21, v22);
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
            v27 = sub_224BC3C(dicNpcAiId, System_Collections_Generic_IDictionary_int__int____TypeInfo, 1);
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

  if ( (byte_5970F96 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Nullable_Color__get_HasValue__);
    sub_2213A60(&StringLiteral_20293/*"fadeColorAfterMovieFinished"*/);
    byte_5970F96 = 1;
  }
  StringValue = EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_20293/*"fadeColorAfterMovieFinished"*/, 0, 0);
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

  if ( (byte_5970FA0 & 1) == 0 )
  {
    sub_2213A60(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_2213A60(&StringLiteral_20386/*"fixedMasterEquip"*/);
    sub_2213A60(&StringLiteral_19375/*"defaultLv"*/);
    sub_2213A60(&StringLiteral_19950/*"equipId"*/);
    byte_5970FA0 = 1;
  }
  v7 = (System_String_o *)StringLiteral_20386/*"fixedMasterEquip"*/;
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
                 (System_String_o *)StringLiteral_19950/*"equipId"*/,
                 0,
                 0);
    v13 = (System_String_o *)StringLiteral_19375/*"defaultLv"*/;
    *outFixedEquipId = IntValue;
    *outFixedEquipLv = EntityScriptUtil__GetIntValue(v10, v13, 1, 0);
    return v10 != 0;
  }
  sub_221405C(ScriptObj, System_Collections_Generic_Dictionary_string__object__TypeInfo, v9);
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
  const MethodInfo_3814850 *v14; // x3
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
  System_Func_object__int__o *_9__171_1; // x22
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

  if ( (byte_5970F8C & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_GetValue_string__object___);
    sub_2213A60(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_OrderByDescending_BattleTreasureDeviceSequenceSelectType__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_BattleTreasureDeviceSequenceSelectType___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_BattleTreasureDeviceSequenceSelectType___);
    sub_2213A60(&System_Func_BattleTreasureDeviceSequenceSelectType__bool__TypeInfo);
    sub_2213A60(&System_Func_BattleTreasureDeviceSequenceSelectType__int__TypeInfo);
    sub_2213A60(&Method_JsonManager_DeserializeArray_BattleTreasureDeviceSequenceSelectType___);
    sub_2213A60(&JsonManager_TypeInfo);
    sub_2213A60(&Method_QuestPhaseEntity___c__TryGetOverwritePlayerSequenceSelectTypeByGender_b__171_1__);
    sub_2213A60(&Method_QuestPhaseEntity___c__DisplayClass171_0__TryGetOverwritePlayerSequenceSelectTypeByGender_b__0__);
    sub_2213A60(&QuestPhaseEntity___c__DisplayClass171_0_TypeInfo);
    sub_2213A60(&QuestPhaseEntity___c_TypeInfo);
    sub_2213A60(&StringLiteral_23715/*"overwritePlayerSequenceSelectTypeByGender"*/);
    byte_5970F8C = 1;
  }
  v9 = sub_2213CCC(QuestPhaseEntity___c__DisplayClass171_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_28;
  script = this->fields.script;
  *(_DWORD *)(v9 + 16) = servantId;
  v13 = (Il2CppObject *)StringLiteral_23715/*"overwritePlayerSequenceSelectTypeByGender"*/;
  v14 = (const MethodInfo_3814850 *)Method_BasicHelper_GetValue_string__object___;
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
                                                               (const MethodInfo_38D3A34 *)Method_JsonManager_DeserializeArray_BattleTreasureDeviceSequenceSelectType___);
  v19 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_BattleTreasureDeviceSequenceSelectType__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v19,
    (Il2CppObject *)v9,
    Method_QuestPhaseEntity___c__DisplayClass171_0__TryGetOverwritePlayerSequenceSelectTypeByGender_b__0__,
    0);
  v20 = System_Linq_Enumerable__Where_object_(
          v18,
          (System_Func_TSource__bool__o *)v19,
          (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_BattleTreasureDeviceSequenceSelectType___);
  v22 = QuestPhaseEntity___c_TypeInfo;
  v23 = v20;
  if ( !*(&QuestPhaseEntity___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(QuestPhaseEntity___c_TypeInfo, v21);
    v22 = QuestPhaseEntity___c_TypeInfo;
  }
  static_fields = v22->static_fields;
  _9__171_1 = (System_Func_object__int__o *)static_fields->__9__171_1;
  if ( !_9__171_1 )
  {
    if ( !*(&v22->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v22, v21);
      static_fields = QuestPhaseEntity___c_TypeInfo->static_fields;
    }
    v26 = (Il2CppObject *)static_fields->__9;
    _9__171_1 = (System_Func_object__int__o *)sub_2213CCC(System_Func_BattleTreasureDeviceSequenceSelectType__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__171_1,
      v26,
      Method_QuestPhaseEntity___c__TryGetOverwritePlayerSequenceSelectTypeByGender_b__171_1__,
      0);
    v27 = QuestPhaseEntity___c_TypeInfo->static_fields;
    v27->__9__171_1 = (struct System_Func_BattleTreasureDeviceSequenceSelectType__int__o *)_9__171_1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v27->__9__171_1, (int32_t)_9__171_1, v28, v29, v30, v31, v32, v33);
  }
  v34 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                               v23,
                                                               (System_Func_TSource__TKey__o *)_9__171_1,
                                                               (const MethodInfo_38891C4 *)Method_System_Linq_Enumerable_OrderByDescending_BattleTreasureDeviceSequenceSelectType__int___);
  v35 = System_Linq_Enumerable__ToArray_object_(
          v34,
          (const MethodInfo_389BB2C *)Method_System_Linq_Enumerable_ToArray_BattleTreasureDeviceSequenceSelectType___);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v35, 0) )
    goto LABEL_25;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v36);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !v35 )
LABEL_28:
    sub_2213CDC(Master_object, monitor_high);
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
      sub_2213CE4(Master_object);
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

  if ( (byte_5970F17 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_17798/*"battleEffectId"*/);
    byte_5970F17 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_17798/*"battleEffectId"*/, defVal, v3);
}


int32_t QuestPhaseEntity__getBattleFieldMotionId(QuestPhaseEntity_o *this, int32_t defVal, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_5970F19 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_20333/*"fieldMotionId"*/);
    byte_5970F19 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20333/*"fieldMotionId"*/, defVal, v3);
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

  if ( (byte_5970F1A & 1) == 0 )
  {
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&StringLiteral_20334/*"fieldMotionIds"*/);
    byte_5970F1A = 1;
  }
  result = QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_20334/*"fieldMotionIds"*/, defVals, v3);
  if ( !result )
    goto LABEL_10;
  if ( result->max_length )
    return result;
  BattleFieldMotionId = QuestPhaseEntity__getBattleFieldMotionId(this, -1, v8);
  result = defVals;
  if ( BattleFieldMotionId == -1 )
    return result;
  result = (System_Int32_array *)sub_2213B20(int___TypeInfo, 1);
  if ( !result )
LABEL_10:
    sub_2213CDC(result, v7);
  if ( !LODWORD(result->max_length) )
    sub_2213CE4(result);
  result->m_Items[0] = BattleFieldMotionId;
  return result;
}


int32_t QuestPhaseEntity__getBreakOnBattleWinWaitMSec(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5970F25 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_18173/*"breakOnBattleWinWaitMSec"*/);
    byte_5970F25 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_18173/*"breakOnBattleWinWaitMSec"*/, 0, v2);
}


System_Int32_array *QuestPhaseEntity__getEventGrounpIds(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  System_Int32_array *v3; // x2
  const MethodInfo *v4; // x3

  if ( (byte_5970F1B & 1) == 0 )
  {
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&StringLiteral_20036/*"eventGroupId"*/);
    byte_5970F1B = 1;
  }
  v3 = (System_Int32_array *)sub_2213B20(int___TypeInfo, 0);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_20036/*"eventGroupId"*/, v3, v4);
}


int32_t QuestPhaseEntity__getGIftId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  return this->fields.giftId;
}


int32_t QuestPhaseEntity__getHintLeftIndent(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5970F58 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_20937/*"hintLeftIndent"*/);
    byte_5970F58 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20937/*"hintLeftIndent"*/, -1, v2);
}


System_String_o *QuestPhaseEntity__getHintMessage(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5970F57 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_20938/*"hintMessage"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_5970F57 = 1;
  }
  return QuestPhaseEntity__getScriptStr(
           this,
           (System_String_o *)StringLiteral_20938/*"hintMessage"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


System_String_o *QuestPhaseEntity__getHintMessageTitle(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5970F56 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_1/*""*/);
    sub_2213A60(&StringLiteral_20940/*"hintTitle"*/);
    byte_5970F56 = 1;
  }
  return QuestPhaseEntity__getScriptStr(
           this,
           (System_String_o *)StringLiteral_20940/*"hintTitle"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


int32_t QuestPhaseEntity__getHintOpenType(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5970F59 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_20939/*"hintOpenType"*/);
    byte_5970F59 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20939/*"hintOpenType"*/, 0, v2);
}


int32_t QuestPhaseEntity__getLeave(QuestPhaseEntity_o *this, int32_t defVal, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_5970F16 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_22262/*"leave"*/);
    byte_5970F16 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22262/*"leave"*/, defVal, v3);
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

  if ( (byte_5970F12 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_24285/*"resultBgmId"*/);
    byte_5970F12 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_24285/*"resultBgmId"*/, defVal, v3);
}


System_Int32_array *QuestPhaseEntity__getResultEnemyVoiceIds(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  System_Int32_array *v3; // x2
  const MethodInfo *v4; // x3

  if ( (byte_5970F1F & 1) == 0 )
  {
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&StringLiteral_24286/*"resultEnemyVoiceIds"*/);
    byte_5970F1F = 1;
  }
  v3 = (System_Int32_array *)sub_2213B20(int___TypeInfo, 0);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_24286/*"resultEnemyVoiceIds"*/, v3, v4);
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
  System_Converter_object__int__o *_9__38_0; // x20
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

  if ( (byte_5970F0A & 1) == 0 )
  {
    sub_2213A60(&System_Converter_object__int__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_object__ConvertAll_int___);
    sub_2213A60(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_2213A60(&Method_QuestPhaseEntity___c__getScriptIntArrayParam_b__38_0__);
    sub_2213A60(&QuestPhaseEntity___c_TypeInfo);
    byte_5970F0A = 1;
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
  _9__38_0 = static_fields->__9__38_0;
  if ( !_9__38_0 )
  {
    if ( !*(&v10->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v10, v8);
      static_fields = QuestPhaseEntity___c_TypeInfo->static_fields;
    }
    v13 = (Il2CppObject *)static_fields->__9;
    _9__38_0 = (System_Converter_object__int__o *)sub_2213CCC(System_Converter_object__int__TypeInfo);
    System_Converter_object__int____ctor(
      _9__38_0,
      v13,
      Method_QuestPhaseEntity___c__getScriptIntArrayParam_b__38_0__,
      0);
    v14 = QuestPhaseEntity___c_TypeInfo->static_fields;
    v14->__9__38_0 = _9__38_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v14->__9__38_0, (int32_t)_9__38_0, v15, v16, v17, v18, v19, v20);
  }
  v21 = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_object___ConvertAll_int_(
                                                    v9,
                                                    (System_Converter_T__TOutput__o *)_9__38_0,
                                                    (const MethodInfo_36D76C4 *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
  if ( !v21 )
    sub_2213CDC(0, v22);
  return System_Collections_Generic_List_int___ToArray(
           v21,
           (const MethodInfo_4468CF0 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  if ( ScriptObj->klass->_1.element_class == *(Il2CppClass **)(qword_5984368 + 64) )
    return *(_DWORD *)j_il2cpp_object_unbox_0(ScriptObj, qword_5984368, v6);
  sub_221405C(ScriptObj, qword_5984368, v6);
  return (unsigned int)QuestPhaseEntity__getScriptObj(v8, v9, v10);
}


Il2CppObject *QuestPhaseEntity__getScriptObj(QuestPhaseEntity_o *this, System_String_o *key, const MethodInfo *method)
{
  Il2CppObject *result; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5970F0E & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    byte_5970F0E = 1;
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
           (const MethodInfo_3FFF778 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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

  if ( (byte_5970F0C & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_object__ToArray__);
    byte_5970F0C = 1;
  }
  ScriptObjListParam = QuestPhaseEntity__getScriptObjListParam(this, key, (const MethodInfo *)defVal);
  if ( ScriptObjListParam )
    return System_Collections_Generic_List_object___ToArray(
             ScriptObjListParam,
             (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_object__ToArray__);
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

  if ( (byte_5970F0D & 1) == 0 )
  {
    sub_2213A60(&System_Collections_Generic_List_object__TypeInfo);
    byte_5970F0D = 1;
  }
  result = (System_Collections_Generic_List_object__o *)QuestPhaseEntity__getScriptObj(this, key, method);
  if ( result )
  {
    naturalAligment = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment;
    if ( result->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (System_Collections_Generic_List_object__c *)result->klass->_2.typeHierarchy[naturalAligment - 1] != System_Collections_Generic_List_object__TypeInfo )
    {
      sub_221405C(result, System_Collections_Generic_List_object__TypeInfo, v6);
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

  if ( (byte_5970F0F & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    byte_5970F0F = 1;
  }
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)key,
          (const MethodInfo_3FFDE04 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return defVal;
  }
  v9 = this->fields.script;
  if ( !v9 )
    sub_2213CDC(0, v8);
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)v9,
           (Il2CppObject *)key,
           (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  defVal = (System_String_o *)Item;
  if ( !Item || Item->klass == (Il2CppClass *)qword_5984390 )
    return defVal;
  sub_221405C(Item, qword_5984390, v11);
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
  System_Converter_TInput__TOutput__o *_9__39_0; // x20
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

  if ( (byte_5970F0B & 1) == 0 )
  {
    sub_2213A60(&System_Converter_object__string__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_object__ConvertAll_string___);
    sub_2213A60(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_2213A60(&Method_QuestPhaseEntity___c__getScriptStringArrayParam_b__39_0__);
    sub_2213A60(&QuestPhaseEntity___c_TypeInfo);
    byte_5970F0B = 1;
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
  _9__39_0 = (System_Converter_TInput__TOutput__o *)static_fields->__9__39_0;
  if ( !_9__39_0 )
  {
    if ( !*(&v10->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v10, v8);
      static_fields = QuestPhaseEntity___c_TypeInfo->static_fields;
    }
    v13 = (Il2CppObject *)static_fields->__9;
    _9__39_0 = (System_Converter_TInput__TOutput__o *)sub_2213CCC(System_Converter_object__string__TypeInfo);
    System_Converter_object__object____ctor(
      _9__39_0,
      v13,
      Method_QuestPhaseEntity___c__getScriptStringArrayParam_b__39_0__,
      0);
    v14 = QuestPhaseEntity___c_TypeInfo->static_fields;
    v14->__9__39_0 = (struct System_Converter_object__string__o *)_9__39_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v14->__9__39_0, (int32_t)_9__39_0, v15, v16, v17, v18, v19, v20);
  }
  v21 = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___ConvertAll_object_(
                                                       v9,
                                                       (System_Converter_T__TOutput__o *)_9__39_0,
                                                       (const MethodInfo_36D77D0 *)Method_System_Collections_Generic_List_object__ConvertAll_string___);
  if ( !v21 )
    sub_2213CDC(0, v22);
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  v21,
                                  (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_string__ToArray__);
}


int32_t QuestPhaseEntity__getSpecialShadowEffectId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5970F31 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_20774/*"getSpecialShadowEffectId"*/);
    byte_5970F31 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20774/*"getSpecialShadowEffectId"*/, 0, v2);
}


int32_t QuestPhaseEntity__getTurnSituationType(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5970F30 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_25542/*"turnSituationType"*/);
    byte_5970F30 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_25542/*"turnSituationType"*/, 0, v2);
}


int32_t QuestPhaseEntity__getUniqueCameraId(QuestPhaseEntity_o *this, int32_t defVal, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_5970F18 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_25625/*"uniqueCameraId"*/);
    byte_5970F18 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_25625/*"uniqueCameraId"*/, defVal, v3);
}


bool QuestPhaseEntity__isBattleFinishCameraTargetAll(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5970F2F & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_17800/*"battleFinishCameraTargetAll"*/);
    byte_5970F2F = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_17800/*"battleFinishCameraTargetAll"*/, 0, v2) != 0;
}


bool QuestPhaseEntity__isBreakOnBattleWin(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5970F23 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_18171/*"breakOnBattleWin"*/);
    byte_5970F23 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_18171/*"breakOnBattleWin"*/, 0, v2) != 0;
}


bool QuestPhaseEntity__isBreakOnBattleWinFadeColorBlack(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5970F24 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_18172/*"breakOnBattleWinFadeColorBlack"*/);
    byte_5970F24 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_18172/*"breakOnBattleWinFadeColorBlack"*/, 0, v2) != 0;
}


bool QuestPhaseEntity__isDisableChangeRaidDownMessage(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5970F32 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_21918/*"isDisableChangeRaidDownMessage"*/);
    byte_5970F32 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21918/*"isDisableChangeRaidDownMessage"*/, 0, v2) != 0;
}


bool QuestPhaseEntity__isDispLoseResult(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5970F20 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_24287/*"resultLoseDisp"*/);
    byte_5970F20 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_24287/*"resultLoseDisp"*/, 0, v2) != 0;
}


bool QuestPhaseEntity__isFadeOutBgmBeforeMovie(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5970F15 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_6880/*"FadeOutBgmBeforeMovie"*/);
    byte_5970F15 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_6880/*"FadeOutBgmBeforeMovie"*/, 0, v2) != 0;
}


bool QuestPhaseEntity__isNoResult(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5970F22 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_23372/*"noResult"*/);
    byte_5970F22 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_23372/*"noResult"*/, 0, v2) != 0;
}


bool QuestPhaseEntity__isTurnSituationType(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  return QuestPhaseEntity__getTurnSituationType(this, method) > 0;
}


void QuestPhaseEntity_MovieOverwriteData___ctor(QuestPhaseEntity_MovieOverwriteData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestPhaseEntity__GetBattleSkillDropEffectIds_d__177___ctor(
        QuestPhaseEntity__GetBattleSkillDropEffectIds_d__177_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
  this->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0);
}


bool QuestPhaseEntity__GetBattleSkillDropEffectIds_d__177__MoveNext(
        QuestPhaseEntity__GetBattleSkillDropEffectIds_d__177_o *this,
        const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  QuestPhaseEntity__GetBattleSkillDropEffectIds_d__177_o *v8; // x19
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
  QuestPhaseEntity__GetBattleSkillDropEffectIds_d__177_o *v52; // [xsp+18h] [xbp-28h]

  v8 = this;
  v52 = this;
  if ( (byte_5970FB4 & 1) == 0 )
  {
    sub_2213A60(&System_Collections_Generic_IEnumerable_FunctionEntity__TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_FunctionEntity__TypeInfo);
    this = (QuestPhaseEntity__GetBattleSkillDropEffectIds_d__177_o *)sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    byte_5970FB4 = 1;
  }
  _1__state = v8->fields.__1__state;
  if ( _1__state == 2 )
  {
    v8->fields._data_5__3 = 0;
    p_data_5__3 = (MissionNaviTransitionBoardItem_o *)&v8->fields._data_5__3;
    p_data_5__3[-1].fields._QuestId_k__BackingField = -3;
    sub_2213A04(p_data_5__3, 0, v2, v3, v4, v5, v6, v7);
    goto LABEL_18;
  }
  if ( _1__state == 1 )
  {
    data_5__3 = v8->fields._data_5__3;
    v8->fields.__1__state = -3;
    if ( !data_5__3 )
      sub_2213CDC(this, method);
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
      sub_2213CDC(0, method);
    BattleSkillDropFunctionEntities = QuestPhaseEntity__GetBattleSkillDropFunctionEntities(_4__this, method);
    v13 = BattleSkillDropFunctionEntities;
    if ( !BattleSkillDropFunctionEntities )
      sub_2213CDC(0, v12);
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
      v17 = sub_224BC3C(
              BattleSkillDropFunctionEntities,
              System_Collections_Generic_IEnumerable_FunctionEntity__TypeInfo,
              0);
    }
    v24 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_FunctionEntity__o *, _QWORD))v17)(
            v13,
            *(_QWORD *)(v17 + 8));
    v52->fields.__7__wrap1 = (struct System_Collections_Generic_IEnumerator_FunctionEntity__o *)v24;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v52->fields.__7__wrap1, v24, v25, v26, v27, v28, v29, v30);
    v52->fields.__1__state = -3;
    do
    {
LABEL_18:
      _7__wrap1 = v52->fields.__7__wrap1;
      if ( !_7__wrap1 )
        sub_2213CDC(BattleSkillDropInfoDict, v23);
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
        v35 = sub_224BC3C(v52->fields.__7__wrap1, System_Collections_IEnumerator_TypeInfo, 0);
      }
      if ( ((*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_FunctionEntity__o *, _QWORD))v35)(
              _7__wrap1,
              *(_QWORD *)(v35 + 8))
          & 1) == 0 )
      {
        QuestPhaseEntity__GetBattleSkillDropEffectIds_d__177____m__Finally1(v52, v36);
        v52->fields.__7__wrap1 = 0;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)&v52->fields.__7__wrap1, 0, v46, v47, v48, v49, v50, v51);
        return 0;
      }
      v37 = v52->fields.__7__wrap1;
      if ( !v37 )
        sub_2213CDC(v52, v36);
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
        v41 = sub_224BC3C(v52->fields.__7__wrap1, System_Collections_Generic_IEnumerator_FunctionEntity__TypeInfo, 0);
      }
      v42 = (FunctionEntity_o *)(*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_FunctionEntity__o *, _QWORD))v41)(
                                  v37,
                                  *(_QWORD *)(v41 + 8));
      if ( !v42 )
        sub_2213CDC(0, v43);
      BattleSkillDropInfoDict = FunctionEntity__TryGetBattleSkillDropInfoDict(v42, &v52->fields._data_5__3, 0);
    }
    while ( !BattleSkillDropInfoDict );
    v44 = v52->fields._data_5__3;
    if ( !v44 )
      sub_2213CDC(BattleSkillDropInfoDict, v23);
    appearEffectId = v44->fields.appearEffectId;
    result = 1;
    v52->fields.__1__state = 1;
    v52->fields.__2__current = appearEffectId;
  }
  return result;
}


System_Collections_Generic_IEnumerator_int__o *QuestPhaseEntity__GetBattleSkillDropEffectIds_d__177__System_Collections_Generic_IEnumerable_System_Int32__GetEnumerator(
        QuestPhaseEntity__GetBattleSkillDropEffectIds_d__177_o *this,
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

  if ( (byte_5970FB6 & 1) == 0 )
  {
    sub_2213A60(&QuestPhaseEntity__GetBattleSkillDropEffectIds_d__177_TypeInfo);
    byte_5970FB6 = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0)) )
  {
    this->fields.__1__state = 0;
  }
  else
  {
    v4 = sub_2213CCC(QuestPhaseEntity__GetBattleSkillDropEffectIds_d__177_TypeInfo);
    System_Object___ctor((Il2CppObject *)v4, 0);
    *(_DWORD *)(v4 + 16) = 0;
    CurrentManagedThreadId = System_Environment__get_CurrentManagedThreadId(0);
    _4__this = this->fields.__4__this;
    *(_DWORD *)(v4 + 24) = CurrentManagedThreadId;
    *(_QWORD *)(v4 + 32) = _4__this;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v4 + 32), (int32_t)_4__this, v7, v8, v9, v10, v11, v12);
    return (System_Collections_Generic_IEnumerator_int__o *)v4;
  }
  return (System_Collections_Generic_IEnumerator_int__o *)this;
}


int32_t QuestPhaseEntity__GetBattleSkillDropEffectIds_d__177__System_Collections_Generic_IEnumerator_System_Int32__get_Current(
        QuestPhaseEntity__GetBattleSkillDropEffectIds_d__177_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn QuestPhaseEntity__GetBattleSkillDropEffectIds_d__177__System_Collections_IEnumerator_Reset(
        QuestPhaseEntity__GetBattleSkillDropEffectIds_d__177_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_QuestPhaseEntity__GetBattleSkillDropEffectIds_d__177_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
}


Il2CppObject *QuestPhaseEntity__GetBattleSkillDropEffectIds_d__177__System_Collections_IEnumerator_get_Current(
        QuestPhaseEntity__GetBattleSkillDropEffectIds_d__177_o *this,
        const MethodInfo *method)
{
  int32_t _2__current; // [xsp+Ch] [xbp-4h] BYREF

  _2__current = this->fields.__2__current;
  return (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &_2__current);
}


void QuestPhaseEntity__GetBattleSkillDropEffectIds_d__177__System_IDisposable_Dispose(
        QuestPhaseEntity__GetBattleSkillDropEffectIds_d__177_o *this,
        const MethodInfo *method)
{
  if ( (unsigned int)(this->fields.__1__state + 3) <= 5 && ((1 << (LOBYTE(this->fields.__1__state) + 3)) & 0x31) != 0 )
    QuestPhaseEntity__GetBattleSkillDropEffectIds_d__177____m__Finally1(this, method);
}


void QuestPhaseEntity__GetBattleSkillDropEffectIds_d__177____m__Finally1(
        QuestPhaseEntity__GetBattleSkillDropEffectIds_d__177_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_IEnumerator_FunctionEntity__o *_7__wrap1; // x19
  System_Collections_Generic_IEnumerator_FunctionEntity__c *klass; // x8
  __int64 v5; // x9
  int32_t *p_offset; // x10
  __int64 v7; // x0

  if ( (byte_5970FB5 & 1) == 0 )
  {
    sub_2213A60(&System_IDisposable_TypeInfo);
    byte_5970FB5 = 1;
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
      v7 = sub_224BC3C(_7__wrap1, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(struct System_Collections_Generic_IEnumerator_FunctionEntity__o *, _QWORD))v7)(
      _7__wrap1,
      *(_QWORD *)(v7 + 8));
  }
}


void QuestPhaseEntity__GetBattleSkillDropFunctionEntities_d__176___ctor(
        QuestPhaseEntity__GetBattleSkillDropFunctionEntities_d__176_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
  this->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0);
}


bool QuestPhaseEntity__GetBattleSkillDropFunctionEntities_d__176__MoveNext(
        QuestPhaseEntity__GetBattleSkillDropFunctionEntities_d__176_o *this,
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

  if ( (byte_5970FB7 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_Empty_int___);
    sub_2213A60(&Method_DataManager_GetMaster_FunctionMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
    sub_2213A60(&StringLiteral_17816/*"battleSkillDropFuncIds"*/);
    byte_5970FB7 = 1;
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
    sub_224B964(Method_System_Array_Empty_int___);
    v13 = v12[7];
  }
  v14 = *(_QWORD *)(v13 + 16);
  if ( (*(_WORD *)(v14 + 309) & 1) == 0 )
    v14 = sub_224B908(v8);
  if ( !*(_DWORD *)(v14 + 228) )
    *(__n128 *)&v8 = j_il2cpp_runtime_class_init_0(v14, method);
  p__7__wrap1 = *(_QWORD *)(v12[7] + 16LL);
  if ( (*(_WORD *)(p__7__wrap1 + 309) & 1) == 0 )
    p__7__wrap1 = sub_224B908(v8);
  if ( !_4__this )
LABEL_29:
    sub_2213CDC(p__7__wrap1, method);
  ScriptIntArrayParam = QuestPhaseEntity__getScriptIntArrayParam(
                          _4__this,
                          (System_String_o *)StringLiteral_17816/*"battleSkillDropFuncIds"*/,
                          **(System_Int32_array ***)(p__7__wrap1 + 184),
                          v3);
  this->fields.__7__wrap1 = ScriptIntArrayParam;
  sub_2213A04(
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
      sub_2213A04((MissionNaviTransitionBoardItem_o *)p__7__wrap1, 0, v2, (System_String_o *)v3, v4, v5, v6, v7);
      return 0;
    }
    if ( v23 >= (unsigned int)max_length )
      sub_2213CE4(p__7__wrap1);
    v24 = _7__wrap1->m_Items[v23];
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
    p__7__wrap1 = (__int64)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_FunctionMaster___);
    if ( !p__7__wrap1 )
      goto LABEL_29;
    p__7__wrap1 = DataMasterBase_object__object__int___TryGetEntity(
                    (DataMasterBase_TMaster__TEntity__PKType__o *)p__7__wrap1,
                    &entity,
                    v24,
                    (const MethodInfo_3F10B80 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
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
  sub_2213A04((MissionNaviTransitionBoardItem_o *)p__2__current, v28, v2, (System_String_o *)v3, v4, v5, v6, v7);
  result = 1;
  *((_DWORD *)p__2__current - 2) = 1;
  return result;
}


System_Collections_Generic_IEnumerator_FunctionEntity__o *QuestPhaseEntity__GetBattleSkillDropFunctionEntities_d__176__System_Collections_Generic_IEnumerable_FunctionEntity__GetEnumerator(
        QuestPhaseEntity__GetBattleSkillDropFunctionEntities_d__176_o *this,
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

  if ( (byte_5970FB8 & 1) == 0 )
  {
    sub_2213A60(&QuestPhaseEntity__GetBattleSkillDropFunctionEntities_d__176_TypeInfo);
    byte_5970FB8 = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0)) )
  {
    this->fields.__1__state = 0;
  }
  else
  {
    v4 = sub_2213CCC(QuestPhaseEntity__GetBattleSkillDropFunctionEntities_d__176_TypeInfo);
    System_Object___ctor((Il2CppObject *)v4, 0);
    *(_DWORD *)(v4 + 16) = 0;
    CurrentManagedThreadId = System_Environment__get_CurrentManagedThreadId(0);
    _4__this = this->fields.__4__this;
    *(_DWORD *)(v4 + 32) = CurrentManagedThreadId;
    *(_QWORD *)(v4 + 40) = _4__this;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v4 + 40), (int32_t)_4__this, v7, v8, v9, v10, v11, v12);
    return (System_Collections_Generic_IEnumerator_FunctionEntity__o *)v4;
  }
  return (System_Collections_Generic_IEnumerator_FunctionEntity__o *)this;
}


FunctionEntity_o *QuestPhaseEntity__GetBattleSkillDropFunctionEntities_d__176__System_Collections_Generic_IEnumerator_FunctionEntity__get_Current(
        QuestPhaseEntity__GetBattleSkillDropFunctionEntities_d__176_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn QuestPhaseEntity__GetBattleSkillDropFunctionEntities_d__176__System_Collections_IEnumerator_Reset(
        QuestPhaseEntity__GetBattleSkillDropFunctionEntities_d__176_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_QuestPhaseEntity__GetBattleSkillDropFunctionEntities_d__176_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
}


Il2CppObject *QuestPhaseEntity__GetBattleSkillDropFunctionEntities_d__176__System_Collections_IEnumerator_get_Current(
        QuestPhaseEntity__GetBattleSkillDropFunctionEntities_d__176_o *this,
        const MethodInfo *method)
{
  return (Il2CppObject *)this->fields.__2__current;
}


void QuestPhaseEntity__GetBattleSkillDropFunctionEntities_d__176__System_IDisposable_Dispose(
        QuestPhaseEntity__GetBattleSkillDropFunctionEntities_d__176_o *this,
        const MethodInfo *method)
{
  ;
}


void QuestPhaseEntity__GetExBattleUiSkillEffectIds_d__198___ctor(
        QuestPhaseEntity__GetExBattleUiSkillEffectIds_d__198_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
  this->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0);
}


bool QuestPhaseEntity__GetExBattleUiSkillEffectIds_d__198__MoveNext(
        QuestPhaseEntity__GetExBattleUiSkillEffectIds_d__198_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  QuestPhaseEntity__GetExBattleUiSkillEffectIds_d__198_o *v3; // x20
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
  QuestPhaseEntity__GetExBattleUiSkillEffectIds_d__198_o *v16; // x0
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
  QuestPhaseEntity__GetExBattleUiSkillEffectIds_d__198_o *v34; // x0
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  bool result; // w0
  int32_t v42; // w0
  QuestPhaseEntity__GetExBattleUiSkillEffectIds_d__198_o *v43; // x9
  int32_t v44; // w8
  ExtraBattleUserInterfaceData_JsonConvertData_array *dataArray; // [xsp+18h] [xbp-28h] BYREF
  QuestPhaseEntity__GetExBattleUiSkillEffectIds_d__198_o *v46; // [xsp+28h] [xbp-18h]

  v46 = this;
  v3 = this;
  if ( (byte_5970FB9 & 1) == 0 )
  {
    sub_2213A60(&ExtraBattleUserInterfaceData_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerable_int__TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_int__TypeInfo);
    this = (QuestPhaseEntity__GetExBattleUiSkillEffectIds_d__198_o *)sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    byte_5970FB9 = 1;
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
      sub_2213CDC(0, method);
    if ( !QuestPhaseEntity__HasExtraBattleUserInterfaceData(_4__this, &dataArray, v2) )
      return 0;
    v7 = dataArray;
    if ( !*(&ExtraBattleUserInterfaceData_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ExtraBattleUserInterfaceData_TypeInfo, v6);
    SkillEffectIds = ExtraBattleUserInterfaceData__GetSkillEffectIds(v7, 0);
    v10 = SkillEffectIds;
    if ( !SkillEffectIds )
      sub_2213CDC(0, v9);
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
      v14 = sub_224BC3C(SkillEffectIds, System_Collections_Generic_IEnumerable_int__TypeInfo, 0);
    }
    v15 = (struct System_Collections_Generic_IEnumerator_int__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_int__o *, _QWORD))v14)(
                                                                    v10,
                                                                    *(_QWORD *)(v14 + 8));
    v16 = v46;
    v46->fields.__7__wrap1 = v15;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v16->fields.__7__wrap1, (int32_t)v15, v17, v18, v19, v20, v21, v22);
    v3 = v46;
  }
  _7__wrap1 = v3->fields.__7__wrap1;
  v3->fields.__1__state = -3;
  if ( !_7__wrap1 )
    sub_2213CDC(this, method);
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
    v27 = sub_224BC3C(_7__wrap1, System_Collections_IEnumerator_TypeInfo, 0);
  }
  if ( ((*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_int__o *, _QWORD))v27)(
          _7__wrap1,
          *(_QWORD *)(v27 + 8))
      & 1) == 0 )
  {
    QuestPhaseEntity__GetExBattleUiSkillEffectIds_d__198____m__Finally1(v46, v28);
    v34 = v46;
    v46->fields.__7__wrap1 = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v34->fields.__7__wrap1, 0, v35, v36, v37, v38, v39, v40);
    return 0;
  }
  v29 = v46->fields.__7__wrap1;
  if ( !v29 )
    sub_2213CDC(v46, v28);
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
    v33 = sub_224BC3C(v46->fields.__7__wrap1, System_Collections_Generic_IEnumerator_int__TypeInfo, 0);
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


System_Collections_Generic_IEnumerator_int__o *QuestPhaseEntity__GetExBattleUiSkillEffectIds_d__198__System_Collections_Generic_IEnumerable_System_Int32__GetEnumerator(
        QuestPhaseEntity__GetExBattleUiSkillEffectIds_d__198_o *this,
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

  if ( (byte_5970FBB & 1) == 0 )
  {
    sub_2213A60(&QuestPhaseEntity__GetExBattleUiSkillEffectIds_d__198_TypeInfo);
    byte_5970FBB = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0)) )
  {
    this->fields.__1__state = 0;
  }
  else
  {
    v4 = sub_2213CCC(QuestPhaseEntity__GetExBattleUiSkillEffectIds_d__198_TypeInfo);
    System_Object___ctor((Il2CppObject *)v4, 0);
    *(_DWORD *)(v4 + 16) = 0;
    CurrentManagedThreadId = System_Environment__get_CurrentManagedThreadId(0);
    _4__this = this->fields.__4__this;
    *(_DWORD *)(v4 + 24) = CurrentManagedThreadId;
    *(_QWORD *)(v4 + 32) = _4__this;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v4 + 32), (int32_t)_4__this, v7, v8, v9, v10, v11, v12);
    return (System_Collections_Generic_IEnumerator_int__o *)v4;
  }
  return (System_Collections_Generic_IEnumerator_int__o *)this;
}


int32_t QuestPhaseEntity__GetExBattleUiSkillEffectIds_d__198__System_Collections_Generic_IEnumerator_System_Int32__get_Current(
        QuestPhaseEntity__GetExBattleUiSkillEffectIds_d__198_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn QuestPhaseEntity__GetExBattleUiSkillEffectIds_d__198__System_Collections_IEnumerator_Reset(
        QuestPhaseEntity__GetExBattleUiSkillEffectIds_d__198_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_QuestPhaseEntity__GetExBattleUiSkillEffectIds_d__198_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
}


Il2CppObject *QuestPhaseEntity__GetExBattleUiSkillEffectIds_d__198__System_Collections_IEnumerator_get_Current(
        QuestPhaseEntity__GetExBattleUiSkillEffectIds_d__198_o *this,
        const MethodInfo *method)
{
  int32_t _2__current; // [xsp+Ch] [xbp-4h] BYREF

  _2__current = this->fields.__2__current;
  return (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &_2__current);
}


void QuestPhaseEntity__GetExBattleUiSkillEffectIds_d__198__System_IDisposable_Dispose(
        QuestPhaseEntity__GetExBattleUiSkillEffectIds_d__198_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8

  _1__state = this->fields.__1__state;
  if ( _1__state == 1 || _1__state == -3 )
    QuestPhaseEntity__GetExBattleUiSkillEffectIds_d__198____m__Finally1(this, method);
}


void QuestPhaseEntity__GetExBattleUiSkillEffectIds_d__198____m__Finally1(
        QuestPhaseEntity__GetExBattleUiSkillEffectIds_d__198_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_IEnumerator_int__o *_7__wrap1; // x19
  System_Collections_Generic_IEnumerator_int__c *klass; // x8
  __int64 v5; // x9
  int32_t *p_offset; // x10
  __int64 v7; // x0

  if ( (byte_5970FBA & 1) == 0 )
  {
    sub_2213A60(&System_IDisposable_TypeInfo);
    byte_5970FBA = 1;
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
      v7 = sub_224BC3C(_7__wrap1, System_IDisposable_TypeInfo, 0);
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

  if ( (byte_5970FB0 & 1) == 0 )
  {
    sub_2213A60(&QuestPhaseEntity___c_TypeInfo);
    byte_5970FB0 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(QuestPhaseEntity___c_TypeInfo);
  System_Object___ctor(v1, 0);
  QuestPhaseEntity___c_TypeInfo->static_fields->__9 = (struct QuestPhaseEntity___c_o *)v1;
  sub_2213A04(
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


int32_t QuestPhaseEntity___c___GetWaveStartMovieInfos_b__68_0(
        QuestPhaseEntity___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return x;
}


int32_t QuestPhaseEntity___c___SetNpcAiInfo_b__121_0(
        QuestPhaseEntity___c_o *this,
        Il2CppObject *x,
        const MethodInfo *method)
{
  System_String_o *v4; // x0

  if ( (byte_5970FB2 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_5970FB2 = 1;
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


int32_t QuestPhaseEntity___c___TryGetOverwritePlayerSequenceSelectTypeByGender_b__171_1(
        QuestPhaseEntity___c_o *this,
        BattleTreasureDeviceSequenceSelectType_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return x->fields.priority;
}


int32_t QuestPhaseEntity___c___getScriptIntArrayParam_b__38_0(
        QuestPhaseEntity___c_o *this,
        Il2CppObject *x,
        const MethodInfo *method)
{
  System_String_o *v4; // x0

  if ( (byte_5970FB1 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_5970FB1 = 1;
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


System_String_o *QuestPhaseEntity___c___getScriptStringArrayParam_b__39_0(
        QuestPhaseEntity___c_o *this,
        Il2CppObject *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))x->klass->vtable[3].methodPtr)(
                              x,
                              x->klass->vtable[3].method);
}


void QuestPhaseEntity___c__DisplayClass120_0___ctor(
        QuestPhaseEntity___c__DisplayClass120_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestPhaseEntity___c__DisplayClass120_0___GetNpcAiInfo_b__0(
        QuestPhaseEntity___c__DisplayClass120_0_o *this,
        Il2CppObject *val,
        const MethodInfo *method)
{
  QuestPhaseEntity__SetNpcAiInfo(
    (System_Collections_Generic_IDictionary_int__int____o *)this->fields.dicNpcAiId,
    val,
    method);
}


void QuestPhaseEntity___c__DisplayClass171_0___ctor(
        QuestPhaseEntity___c__DisplayClass171_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestPhaseEntity___c__DisplayClass171_0___TryGetOverwritePlayerSequenceSelectTypeByGender_b__0(
        QuestPhaseEntity___c__DisplayClass171_0_o *this,
        BattleTreasureDeviceSequenceSelectType_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return x->fields.svtId == this->fields.servantId;
}


void QuestPhaseEntity___c__DisplayClass196_0___ctor(
        QuestPhaseEntity___c__DisplayClass196_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestPhaseEntity___c__DisplayClass196_0___GetOverwriteSvtTreasureDeviceLv_b__0(
        QuestPhaseEntity___c__DisplayClass196_0_o *this,
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

  if ( (byte_5970FB3 & 1) == 0 )
  {
    sub_2213A60(&System_Convert_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int__TryAdd__);
    sub_2213A60(&Method_System_Collections_Generic_List_object__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_object__get_Item__);
    byte_5970FB3 = 1;
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
               (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_object__get_Item__);
      if ( !*(&System_Convert_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v8);
      v10 = System_Convert__ToInt32(Item, 0);
      v11 = System_Collections_Generic_List_object___get_Item(
              objects,
              1,
              (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_object__get_Item__);
      IsNullOrEmpty = System_Convert__ToInt32(v11, 0);
      if ( resultDictionary )
      {
        System_Collections_Generic_Dictionary_int__int___TryAdd(
          resultDictionary,
          v10,
          IsNullOrEmpty,
          (const MethodInfo_3F945F4 *)Method_System_Collections_Generic_Dictionary_int__int__TryAdd__);
        return;
      }
LABEL_11:
      sub_2213CDC(IsNullOrEmpty, v6);
    }
  }
}