void __fastcall QuestPhaseEntity___ctor(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4BC7F8A & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataEntityBase_string___ctor__, method);
    byte_4BC7F8A = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_324620C *)Method_DataEntityBase_string___ctor__);
}


void __fastcall QuestPhaseEntity___ctor_40712716(
        QuestPhaseEntity_o *this,
        QuestPhaseEntity_o *cSrc,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x0
  __int64 v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  struct System_Int32_array *v14; // x1
  System_Array_o *classIds; // x0
  Il2CppObject *v16; // x0
  Il2CppObject *v17; // x21
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  System_Array_o *individuality; // x0
  Il2CppObject *v25; // x0
  struct System_Int32_array *v26; // x1
  struct System_Int32_array **p_individuality; // x19

  if ( (byte_4BC7F8B & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataEntityBase_string___ctor__, cSrc);
    sub_1C1ABD4(&int___TypeInfo, v5);
    byte_4BC7F8B = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_324620C *)Method_DataEntityBase_string___ctor__);
  if ( !cSrc )
    sub_1C1AE30(v6, v7);
  v14 = 0LL;
  *(_QWORD *)&this->fields.questId = *(_QWORD *)&cSrc->fields.questId;
  this->fields.isNpcOnly = cSrc->fields.isNpcOnly;
  *(_OWORD *)&this->fields.battleBgId = *(_OWORD *)&cSrc->fields.battleBgId;
  classIds = (System_Array_o *)cSrc->fields.classIds;
  if ( classIds )
  {
    v16 = System_Array__Clone(classIds, 0LL);
    if ( v16 )
    {
      v17 = v16;
      v14 = (struct System_Int32_array *)sub_1C1AD10(v16, int___TypeInfo);
      if ( !v14 )
        goto LABEL_12;
    }
    else
    {
      v14 = 0LL;
    }
  }
  this->fields.classIds = v14;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.classIds, (int64_t)v14, v8, v9, v10, v11, v12, v13);
  individuality = (System_Array_o *)cSrc->fields.individuality;
  if ( !individuality )
    goto LABEL_13;
  v25 = System_Array__Clone(individuality, 0LL);
  if ( !v25 )
    goto LABEL_13;
  v17 = v25;
  v26 = (struct System_Int32_array *)sub_1C1AD10(v25, int___TypeInfo);
  if ( !v26 )
  {
LABEL_12:
    sub_1C1B0F0(v17);
LABEL_13:
    v26 = 0LL;
  }
  this->fields.individuality = v26;
  p_individuality = &this->fields.individuality;
  sub_1C1AB78((PartyOrganizationUtility_o *)p_individuality, (int64_t)v26, v18, v19, v20, v21, v22, v23);
  *((_DWORD *)p_individuality + 2) = cSrc->fields.giftId;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall QuestPhaseEntity__CreatePK(int32_t questId, int32_t phase, const MethodInfo *method)
{
  if ( (byte_4BC7F89 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&phase);
    byte_4BC7F89 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           questId,
           phase,
           (const MethodInfo_2F9D6B4 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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

  if ( (byte_4BC7F9A & 1) == 0 )
  {
    sub_1C1ABD4(&System_Collections_Generic_Dictionary_string__object__TypeInfo, method);
    sub_1C1ABD4(&StringLiteral_16933/*"addEquipSkills"*/, v4);
    byte_4BC7F9A = 1;
  }
  result = (System_Collections_Generic_Dictionary_string__object__o *)QuestPhaseEntity__getScriptObj(
                                                                        this,
                                                                        (System_String_o *)StringLiteral_16933/*"addEquipSkills"*/,
                                                                        v2);
  if ( result )
  {
    methodPtr_low = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (System_Collections_Generic_Dictionary_string__object__c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
    {
      sub_1C1B0F0(result);
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

  if ( (byte_4BC8005 & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_16946/*"addUniqueCameraIds"*/, defVal);
    byte_4BC8005 = 1;
  }
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_16946/*"addUniqueCameraIds"*/, defVal, v3);
}


int32_t __fastcall QuestPhaseEntity__GetAdvantageClassId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BC7FC9 & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_17259/*"auto_sel_support_type"*/, method);
    byte_4BC7FC9 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_17259/*"auto_sel_support_type"*/, -1, v2);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetAssistIdArray(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Int32_array *v4; // x2
  const MethodInfo *v5; // x3

  if ( (byte_4BC7FD8 & 1) == 0 )
  {
    sub_1C1ABD4(&int___TypeInfo, method);
    sub_1C1ABD4(&StringLiteral_17212/*"assistIds"*/, v3);
    byte_4BC7FD8 = 1;
  }
  v4 = (System_Int32_array *)sub_1C1AC7C(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_17212/*"assistIds"*/, v4, v5);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetAssistWeightArray(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Int32_array *v4; // x2
  const MethodInfo *v5; // x3

  if ( (byte_4BC7FD9 & 1) == 0 )
  {
    sub_1C1ABD4(&int___TypeInfo, method);
    sub_1C1ABD4(&StringLiteral_17211/*"assistIdWeight"*/, v3);
    byte_4BC7FD9 = 1;
  }
  v4 = (System_Int32_array *)sub_1C1AC7C(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_17211/*"assistIdWeight"*/, v4, v5);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetAssumedEffectId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4BC7FEB & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_17215/*"assumedEffectId"*/, method);
    byte_4BC7FEB = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_17215/*"assumedEffectId"*/, 0LL);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetBattleEffectMovieIds(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BC800D & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_3275/*"BattleEffectMovieIds"*/, method);
    byte_4BC800D = 1;
  }
  return EntityScriptUtil__GetIntArray(this->fields.script, (System_String_o *)StringLiteral_3275/*"BattleEffectMovieIds"*/, 0LL, 0LL);
}


System_String_o *__fastcall QuestPhaseEntity__GetBattleFinishMovie(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BC7FB0 & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_17384/*"battleFinishMovie"*/, method);
    byte_4BC7FB0 = 1;
  }
  return QuestPhaseEntity__getScriptStr(this, (System_String_o *)StringLiteral_17384/*"battleFinishMovie"*/, 0LL, v2);
}


int32_t __fastcall QuestPhaseEntity__GetBattleFinishWaitTime(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BC7FF4 & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_17385/*"battleFinishWaitTime"*/, method);
    byte_4BC7FF4 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_17385/*"battleFinishWaitTime"*/, 0, v2);
}


int32_t __fastcall QuestPhaseEntity__GetBattleItemObjectId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BC8002 & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_17389/*"battleItemObjectId"*/, method);
    byte_4BC8002 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_17389/*"battleItemObjectId"*/, 0, v2);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall QuestPhaseEntity__GetBeforeBattleSkillActor(
        QuestPhaseEntity_o *this,
        int32_t defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4BC7FF5 & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_17430/*"beforeBattleSkillActor"*/, *(_QWORD *)&defVal);
    byte_4BC7FF5 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_17430/*"beforeBattleSkillActor"*/, defVal, v3);
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

  if ( (byte_4BC7F8F & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Array_Empty_int___, method);
    sub_1C1ABD4(&Method_DataManager_GetMaster_BattleBgMaster___, v3);
    sub_1C1ABD4(&DataManager_TypeInfo, v4);
    byte_4BC7F8F = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_BattleBgMaster___);
  PriorityBattleBgId = QuestPhaseEntity__GetPriorityBattleBgId(this, v6);
  PriorityBattleBgType = QuestPhaseEntity__GetPriorityBattleBgType(this, v8);
  if ( !Master_object )
    sub_1C1AE30(PriorityBattleBgType, v10);
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
      sub_1C6CB0C(Method_System_Array_Empty_int___);
      v14 = v13[7];
    }
    v15 = *(_QWORD *)(v14 + 16);
    if ( (*(_BYTE *)(v15 + 309) & 1) == 0 )
      v15 = sub_1C6CAB0(inited);
    if ( !*(_DWORD *)(v15 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v15);
    v16 = *(_QWORD *)(v13[7] + 16LL);
    if ( (*(_BYTE *)(v16 + 309) & 1) == 0 )
      v16 = sub_1C6CAB0(inited);
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

  if ( (byte_4BC7FE8 & 1) == 0 )
  {
    sub_1C1ABD4(&int___TypeInfo, method);
    sub_1C1ABD4(&StringLiteral_18295/*"clearGiftItemListDisplay"*/, v3);
    byte_4BC7FE8 = 1;
  }
  v4 = (System_Int32_array *)sub_1C1AC7C(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_18295/*"clearGiftItemListDisplay"*/, v4, v5);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetCondHavingIds(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Int32_array *v4; // x2
  const MethodInfo *v5; // x3

  if ( (byte_4BC7FD4 & 1) == 0 )
  {
    sub_1C1ABD4(&int___TypeInfo, method);
    sub_1C1ABD4(&StringLiteral_18492/*"condHaving"*/, v3);
    byte_4BC7FD4 = 1;
  }
  v4 = (System_Int32_array *)sub_1C1AC7C(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_18492/*"condHaving"*/, v4, v5);
}


int32_t __fastcall QuestPhaseEntity__GetCondQuestClearable(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BC8009 & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_18495/*"condQuestClearable"*/, method);
    byte_4BC8009 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_18495/*"condQuestClearable"*/, 0, v2);
}


int32_t __fastcall QuestPhaseEntity__GetCorrectionIconId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BC7FC8 & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_18566/*"correctionIconId"*/, method);
    byte_4BC7FC8 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_18566/*"correctionIconId"*/, -1, v2);
}


int32_t __fastcall QuestPhaseEntity__GetDefenceTargetContinueRecoverRate(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BC7FFF & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_19715/*"fieldHpContinueRecoverRate"*/, method);
    byte_4BC7FFF = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19715/*"fieldHpContinueRecoverRate"*/, 0, v2);
}


System_String_o *__fastcall QuestPhaseEntity__GetEffectOnMap(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BC8012 & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_10848/*"PlayGetEffectOnMap"*/, method);
    byte_4BC8012 = 1;
  }
  return QuestPhaseEntity__getScriptStr(this, (System_String_o *)StringLiteral_10848/*"PlayGetEffectOnMap"*/, 0LL, v2);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetEnemyInfoDispNpcSvtIdList(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Int32_array *v4; // x2
  const MethodInfo *v5; // x3

  if ( (byte_4BC7FE6 & 1) == 0 )
  {
    sub_1C1ABD4(&int___TypeInfo, method);
    sub_1C1ABD4(&StringLiteral_22776/*"overwriteEnemyInfos"*/, v3);
    byte_4BC7FE6 = 1;
  }
  v4 = (System_Int32_array *)sub_1C1AC7C(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_22776/*"overwriteEnemyInfos"*/, v4, v5);
}


System_String_array *__fastcall QuestPhaseEntity__GetEnemyInfoOverwriteNpcSvtNameList(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_String_array *v4; // x2
  const MethodInfo *v5; // x3

  if ( (byte_4BC7FE7 & 1) == 0 )
  {
    sub_1C1ABD4(&string___TypeInfo, method);
    sub_1C1ABD4(&StringLiteral_22775/*"overwriteEnemyInfoNames"*/, v3);
    byte_4BC7FE7 = 1;
  }
  v4 = (System_String_array *)sub_1C1AC7C(string___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptStringArrayParam(this, (System_String_o *)StringLiteral_22775/*"overwriteEnemyInfoNames"*/, v4, v5);
}


int32_t __fastcall QuestPhaseEntity__GetEquipAddId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BC7FE5 & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_19358/*"equipAddId"*/, method);
    byte_4BC7FE5 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19358/*"equipAddId"*/, 0, v2);
}


int32_t __fastcall QuestPhaseEntity__GetFinishEffectId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BC7FC5 & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_19754/*"finishEffectId"*/, method);
    byte_4BC7FC5 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19754/*"finishEffectId"*/, -1, v2);
}


int32_t __fastcall QuestPhaseEntity__GetFormationBgmId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BC7FEC & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_19867/*"formationBgmId"*/, method);
    byte_4BC7FEC = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19867/*"formationBgmId"*/, -1, v2);
}


float __fastcall QuestPhaseEntity__GetFormationSubBgmFadeInTime(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BC7FEE & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_19868/*"formationSubBgmFadeInTime"*/, method);
    byte_4BC7FEE = 1;
  }
  return (float)QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19868/*"formationSubBgmFadeInTime"*/, 0, v2) / 1000.0;
}


int32_t __fastcall QuestPhaseEntity__GetFormationSubBgmId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BC7FED & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_19869/*"formationSubBgmId"*/, method);
    byte_4BC7FED = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19869/*"formationSubBgmId"*/, -1, v2);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetGimmickAnimTypeArray(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BC7FC3 & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_20151/*"gimmickAnimType"*/, method);
    byte_4BC7FC3 = 1;
  }
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_20151/*"gimmickAnimType"*/, 0LL, v2);
}


int32_t __fastcall QuestPhaseEntity__GetGimmickId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BC7FBC & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_20152/*"gimmickId"*/, method);
    byte_4BC7FBC = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20152/*"gimmickId"*/, -1, v2);
}


System_Object_array *__fastcall QuestPhaseEntity__GetGimmickResultVoiceArray(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BC7FC2 & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_23308/*"resultVoice"*/, method);
    byte_4BC7FC2 = 1;
  }
  return QuestPhaseEntity__getScriptObjArrayParam(this, (System_String_o *)StringLiteral_23308/*"resultVoice"*/, 0LL, v2);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetGimmickSkillIdArray(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Int32_array *v4; // x2
  const MethodInfo *v5; // x3

  if ( (byte_4BC7FBF & 1) == 0 )
  {
    sub_1C1ABD4(&int___TypeInfo, method);
    sub_1C1ABD4(&StringLiteral_23219/*"reelSkill"*/, v3);
    byte_4BC7FBF = 1;
  }
  v4 = (System_Int32_array *)sub_1C1AC7C(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_23219/*"reelSkill"*/, v4, v5);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetGimmickSkillRateArray(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Int32_array *v4; // x2
  const MethodInfo *v5; // x3

  if ( (byte_4BC7FC0 & 1) == 0 )
  {
    sub_1C1ABD4(&int___TypeInfo, method);
    sub_1C1ABD4(&StringLiteral_23218/*"reelRate"*/, v3);
    byte_4BC7FC0 = 1;
  }
  v4 = (System_Int32_array *)sub_1C1AC7C(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_23218/*"reelRate"*/, v4, v5);
}


System_String_array *__fastcall QuestPhaseEntity__GetGimmickStartVoiceArray(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BC7FC1 & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_23907/*"startVoice"*/, method);
    byte_4BC7FC1 = 1;
  }
  return QuestPhaseEntity__getScriptStringArrayParam(this, (System_String_o *)StringLiteral_23907/*"startVoice"*/, 0LL, v2);
}


int32_t __fastcall QuestPhaseEntity__GetGimmickSvtId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BC7FBD & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_20153/*"gimmickSvtId"*/, method);
    byte_4BC7FBD = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20153/*"gimmickSvtId"*/, -1, v2);
}


int32_t __fastcall QuestPhaseEntity__GetIconItemNumberDispType(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BC8004 & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_20415/*"iconItemNumberDispType"*/, method);
    byte_4BC8004 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20415/*"iconItemNumberDispType"*/, 0, v2);
}


float __fastcall QuestPhaseEntity__GetIncomingCallDispTime(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BC7FF8 & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_20972/*"incomingCallDispTime"*/, method);
    byte_4BC7FF8 = 1;
  }
  return (float)QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20972/*"incomingCallDispTime"*/, 500, v2) / 1000.0;
}


System_String_o *__fastcall QuestPhaseEntity__GetIncomingCallMessage(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1

  if ( (byte_4BC7FF7 & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_20973/*"incomingCallMessage"*/, method);
    sub_1C1ABD4(&StringLiteral_1/*""*/, v4);
    byte_4BC7FF7 = 1;
  }
  return QuestPhaseEntity__getScriptStr(
           this,
           (System_String_o *)StringLiteral_20973/*"incomingCallMessage"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


System_String_o *__fastcall QuestPhaseEntity__GetIncomingCallTitle(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1

  if ( (byte_4BC7FF6 & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_20974/*"incomingCallTitle"*/, method);
    sub_1C1ABD4(&StringLiteral_1/*""*/, v4);
    byte_4BC7FF6 = 1;
  }
  return QuestPhaseEntity__getScriptStr(
           this,
           (System_String_o *)StringLiteral_20974/*"incomingCallTitle"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


System_String_o *__fastcall QuestPhaseEntity__GetMapModelEntryAnimationName(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1

  if ( (byte_4BC7FF2 & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_1489/*"3dMapEntryAnimName"*/, method);
    sub_1C1ABD4(&StringLiteral_1/*""*/, v4);
    byte_4BC7FF2 = 1;
  }
  return QuestPhaseEntity__getScriptStr(
           this,
           (System_String_o *)StringLiteral_1489/*"3dMapEntryAnimName"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


int32_t __fastcall QuestPhaseEntity__GetMasterSkillDelay(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BC7FCE & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_21681/*"masterSkillDelay"*/, method);
    byte_4BC7FCE = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21681/*"masterSkillDelay"*/, 0, v2);
}


System_String_o *__fastcall QuestPhaseEntity__GetMasterSkillDelayInfo(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BC7FCF & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_21682/*"masterSkillDelayInfo"*/, method);
    byte_4BC7FCF = 1;
  }
  return QuestPhaseEntity__getScriptStr(this, (System_String_o *)StringLiteral_21682/*"masterSkillDelayInfo"*/, 0LL, v2);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetMoveSceneInfo(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Int32_array *v4; // x2
  const MethodInfo *v5; // x3

  if ( (byte_4BC7FFA & 1) == 0 )
  {
    sub_1C1ABD4(&int___TypeInfo, method);
    sub_1C1ABD4(&StringLiteral_21888/*"moveSceneInfo"*/, v3);
    byte_4BC7FFA = 1;
  }
  v4 = (System_Int32_array *)sub_1C1AC7C(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_21888/*"moveSceneInfo"*/, v4, v5);
}


int32_t __fastcall QuestPhaseEntity__GetMovieAfterCrossFadeStartFrame(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BC7FB7 & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_21893/*"movieAfterCrossFadeStartFrame"*/, method);
    byte_4BC7FB7 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21893/*"movieAfterCrossFadeStartFrame"*/, 0, v2);
}


int32_t __fastcall QuestPhaseEntity__GetMovieAfterCrossFadeTime(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BC7FB6 & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_21894/*"movieAfterCrossFadeTime"*/, method);
    byte_4BC7FB6 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21894/*"movieAfterCrossFadeTime"*/, 0, v2);
}


int32_t __fastcall QuestPhaseEntity__GetNextSceneId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BC7FD2 & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_22432/*"nextSceneId"*/, method);
    byte_4BC7FD2 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22432/*"nextSceneId"*/, 0, v2);
}


System_String_array *__fastcall QuestPhaseEntity__GetNextSceneParam(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  System_String_array *result; // x0

  if ( (byte_4BC7FD3 & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_22433/*"nextSceneParam"*/, method);
    byte_4BC7FD3 = 1;
  }
  result = (System_String_array *)QuestPhaseEntity__getScriptStr(this, (System_String_o *)StringLiteral_22433/*"nextSceneParam"*/, 0LL, v2);
  if ( result )
    return System_String__Split((System_String_o *)result, 0x2Cu, 0, 0LL);
  return result;
}


int32_t __fastcall QuestPhaseEntity__GetNotDispEquipSkillChargeTurn(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BC8003 & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_22526/*"notDispEquipSkillChargeTurn"*/, method);
    byte_4BC8003 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22526/*"notDispEquipSkillChargeTurn"*/, 0, v2);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetNotHavingQuests(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Int32_array *v4; // x2
  const MethodInfo *v5; // x3

  if ( (byte_4BC7FD5 & 1) == 0 )
  {
    sub_1C1ABD4(&int___TypeInfo, method);
    sub_1C1ABD4(&StringLiteral_22531/*"notHavingQuest"*/, v3);
    byte_4BC7FD5 = 1;
  }
  v4 = (System_Int32_array *)sub_1C1AC7C(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_22531/*"notHavingQuest"*/, v4, v5);
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
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  System_Collections_Generic_Dictionary_int__int____o **v22; // x20
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  Il2CppObject *v24; // x22
  __int64 methodPtr_low; // x10
  const MethodInfo *v26; // x2
  System_Action_object__o *v28; // x19
  Il2CppObject *obj; // [xsp+0h] [xbp-40h] BYREF
  Il2CppObject *value; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4BC7FE3 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_object__TypeInfo, method);
    sub_1C1ABD4(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v3);
    sub_1C1ABD4(&Method_System_Collections_Generic_Dictionary_int__int_____ctor__, v4);
    sub_1C1ABD4(&System_Collections_Generic_Dictionary_int__int____TypeInfo, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_object__ForEach__, v6);
    sub_1C1ABD4(&System_Collections_Generic_List_object__TypeInfo, v7);
    sub_1C1ABD4(&Method_QuestPhaseEntity___c__DisplayClass113_0__GetNpcAiInfo_b__0__, v8);
    sub_1C1ABD4(&QuestPhaseEntity___c__DisplayClass113_0_TypeInfo, v9);
    sub_1C1ABD4(&StringLiteral_16988/*"aiMultiNpc"*/, v10);
    sub_1C1ABD4(&StringLiteral_16989/*"aiNpc"*/, v11);
    byte_4BC7FE3 = 1;
  }
  obj = 0LL;
  value = 0LL;
  v12 = sub_1C1AE20(QuestPhaseEntity___c__DisplayClass113_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  v13 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C1AE20(System_Collections_Generic_Dictionary_int__int____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v13,
    (const MethodInfo_32A1928 *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  if ( !v12 )
    goto LABEL_14;
  *(_QWORD *)(v12 + 16) = v13;
  v22 = (System_Collections_Generic_Dictionary_int__int____o **)(v12 + 16);
  sub_1C1AB78((PartyOrganizationUtility_o *)(v12 + 16), (int64_t)v13, v16, v17, v18, v19, v20, v21);
  script = this->fields.script;
  if ( !script )
    return *v22;
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)script,
         (Il2CppObject *)StringLiteral_16988/*"aiMultiNpc"*/,
         &value,
         (const MethodInfo_33044FC *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    v24 = value;
    if ( value )
    {
      methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(value->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
        && (System_Collections_Generic_List_object__c *)value->klass->_2.typeHierarchy[methodPtr_low - 1] == System_Collections_Generic_List_object__TypeInfo )
      {
        v28 = (System_Action_object__o *)sub_1C1AE20(System_Action_object__TypeInfo);
        System_Action_object____ctor(
          v28,
          (Il2CppObject *)v12,
          Method_QuestPhaseEntity___c__DisplayClass113_0__GetNpcAiInfo_b__0__,
          0LL);
        System_Collections_Generic_List_object___ForEach(
          (System_Collections_Generic_List_object__o *)v24,
          (System_Action_T__o *)v28,
          (const MethodInfo_363D2D0 *)Method_System_Collections_Generic_List_object__ForEach__);
        return *v22;
      }
    }
  }
  v14 = this->fields.script;
  if ( !v14 )
LABEL_14:
    sub_1C1AE30(v14, v15);
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)v14,
         (Il2CppObject *)StringLiteral_16989/*"aiNpc"*/,
         &obj,
         (const MethodInfo_33044FC *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    QuestPhaseEntity__SetNpcAiInfo((System_Collections_Generic_IDictionary_int__int____o *)*v22, obj, v26);
  }
  return *v22;
}


int32_t __fastcall QuestPhaseEntity__GetOverWriteMasterImageId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BC7FB4 & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_21671/*"masterImageId"*/, method);
    byte_4BC7FB4 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21671/*"masterImageId"*/, 0, v2);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall QuestPhaseEntity__GetOverwriteCommandSpellContinue(
        QuestPhaseEntity_o *this,
        int32_t def,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4BC7FDD & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_22767/*"overwriteCommandSpellContinue"*/, *(_QWORD *)&def);
    byte_4BC7FDD = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22767/*"overwriteCommandSpellContinue"*/, def, v3);
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

  if ( (byte_4BC7FF0 & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_22768/*"overwriteCommandSpellIcons"*/, *(_QWORD *)&genderType);
    byte_4BC7FF0 = 1;
  }
  ScriptIntArrayParam = QuestPhaseEntity__getScriptIntArrayParam(
                          this,
                          (System_String_o *)StringLiteral_22768/*"overwriteCommandSpellIcons"*/,
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
    sub_1C1AE38(ScriptIntArrayParam, v8);
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

  if ( (byte_4BC7F99 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Collections_Generic_Dictionary_string__object__TypeInfo, method);
    sub_1C1ABD4(&StringLiteral_22778/*"overwriteEquipSkills"*/, v4);
    byte_4BC7F99 = 1;
  }
  result = (System_Collections_Generic_Dictionary_string__object__o *)QuestPhaseEntity__getScriptObj(
                                                                        this,
                                                                        (System_String_o *)StringLiteral_22778/*"overwriteEquipSkills"*/,
                                                                        v2);
  if ( result )
  {
    methodPtr_low = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (System_Collections_Generic_Dictionary_string__object__c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
    {
      sub_1C1B0F0(result);
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
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  int64_t v18; // x2
  const MethodInfo *v19; // x3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  System_Int32_array *v24; // x0
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  const MethodInfo *v31; // x3
  System_Int32_array *v32; // x0
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7

  if ( (byte_4BC7FCA & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_22782/*"overwriteLimitCountSvtIds"*/, overwriteLimitCountSvtIds);
    sub_1C1ABD4(&StringLiteral_22783/*"overwriteLimitCounts"*/, v9);
    sub_1C1ABD4(&StringLiteral_22781/*"overwriteLimitCountIconIds"*/, v10);
    byte_4BC7FCA = 1;
  }
  ScriptIntArrayParam = QuestPhaseEntity__getScriptIntArrayParam(
                          this,
                          (System_String_o *)StringLiteral_22782/*"overwriteLimitCountSvtIds"*/,
                          0LL,
                          (const MethodInfo *)overwriteLimitCountIconIds);
  *overwriteLimitCountSvtIds = ScriptIntArrayParam;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)overwriteLimitCountSvtIds,
    (int64_t)ScriptIntArrayParam,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  if ( *overwriteLimitCountSvtIds )
  {
    v24 = QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_22783/*"overwriteLimitCounts"*/, 0LL, v19);
    *overwriteLimitCounts = v24;
    sub_1C1AB78((PartyOrganizationUtility_o *)overwriteLimitCounts, (int64_t)v24, v25, v26, v27, v28, v29, v30);
    v32 = QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_22781/*"overwriteLimitCountIconIds"*/, 0LL, v31);
    *overwriteLimitCountIconIds = v32;
    sub_1C1AB78((PartyOrganizationUtility_o *)overwriteLimitCountIconIds, (int64_t)v32, v33, v34, v35, v36, v37, v38);
    return *overwriteLimitCounts != 0LL;
  }
  else
  {
    *overwriteLimitCounts = 0LL;
    sub_1C1AB78((PartyOrganizationUtility_o *)overwriteLimitCounts, 0LL, v18, (int32_t)v19, v20, v21, v22, v23);
    *overwriteLimitCountIconIds = 0LL;
    sub_1C1AB78((PartyOrganizationUtility_o *)overwriteLimitCountIconIds, 0LL, v40, v41, v42, v43, v44, v45);
    return 0;
  }
}


System_Int32_array *__fastcall QuestPhaseEntity__GetOverwriteResultBgmCondIds(
        QuestPhaseEntity_o *this,
        System_Int32_array *defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4BC7F9D & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_22792/*"overwriteResultBgmCondIds"*/, defVal);
    byte_4BC7F9D = 1;
  }
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_22792/*"overwriteResultBgmCondIds"*/, defVal, v3);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetOverwriteResultBgmIds(
        QuestPhaseEntity_o *this,
        System_Int32_array *defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4BC7F9C & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_22793/*"overwriteResultBgmIds"*/, defVal);
    byte_4BC7F9C = 1;
  }
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_22793/*"overwriteResultBgmIds"*/, defVal, v3);
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

  if ( (byte_4BC7F8D & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Array_Empty_int___, method);
    byte_4BC7F8D = 1;
  }
  result = QuestPhaseEntity__GetPrioredIndividualityLocal(this, method);
  if ( !result )
  {
    v5 = Method_System_Array_Empty_int___;
    v6 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v6 )
    {
      sub_1C6CB0C(Method_System_Array_Empty_int___);
      v6 = v5[7];
    }
    v7 = *(_QWORD *)(v6 + 16);
    if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
      v7 = sub_1C6CAB0(inited);
    if ( !*(_DWORD *)(v7 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v7);
    v8 = *(_QWORD *)(v5[7] + 16LL);
    if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
      v8 = sub_1C6CAB0(inited);
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

  if ( (byte_4BC7F8E & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMaster_QuestBehaviorMaster___, method);
    sub_1C1ABD4(&Method_DataManager_GetMaster_QuestPhaseIndividualityMaster___, v3);
    sub_1C1ABD4(&DataManager_TypeInfo, v4);
    byte_4BC7F8E = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_QuestBehaviorMaster___);
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
    UniqueId = (System_Int32_array *)DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_QuestPhaseIndividualityMaster___);
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
      sub_1C1AE30(UniqueId, v8);
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

  if ( (byte_4BC7F90 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMaster_QuestBehaviorMaster___, method);
    sub_1C1ABD4(&DataManager_TypeInfo, v3);
    byte_4BC7F90 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_QuestBehaviorMaster___);
  UniqueId = QuestPhaseEntity__GetUniqueId(this, v5);
  if ( !Master_object )
    sub_1C1AE30(UniqueId, v7);
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

  if ( (byte_4BC7F91 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMaster_QuestBehaviorMaster___, method);
    sub_1C1ABD4(&DataManager_TypeInfo, v3);
    byte_4BC7F91 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_QuestBehaviorMaster___);
  UniqueId = QuestPhaseEntity__GetUniqueId(this, v5);
  if ( !Master_object )
    sub_1C1AE30(UniqueId, v7);
  return QuestBehaviorMaster__GetBattleBgType(
           (QuestBehaviorMaster_o *)Master_object,
           UniqueId,
           this->fields.battleBgType,
           v8);
}


int32_t __fastcall QuestPhaseEntity__GetProgressAfterMovie(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BC7FB2 & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_23013/*"progressAfterMovie"*/, method);
    byte_4BC7FB2 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_23013/*"progressAfterMovie"*/, 0, v2);
}


int32_t __fastcall QuestPhaseEntity__GetQuestPhaseSelectRoute(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1
  int32_t ScriptIntParam; // w0
  int32_t v6; // w19
  Il2CppObject *Instance; // x0
  __int64 v8; // x1

  if ( (byte_4BC7FA7 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, method);
    sub_1C1ABD4(&StringLiteral_22908/*"phaseRouteSelect"*/, v4);
    byte_4BC7FA7 = 1;
  }
  ScriptIntParam = QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22908/*"phaseRouteSelect"*/, 0, v2);
  if ( ScriptIntParam < 1 )
    return 0;
  v6 = ScriptIntParam;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_387ACC8 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Instance )
    sub_1C1AE30(0LL, v8);
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

  if ( (byte_4BC7FBE & 1) == 0 )
  {
    sub_1C1ABD4(&int___TypeInfo, method);
    sub_1C1ABD4(&StringLiteral_23217/*"reelIcon"*/, v3);
    byte_4BC7FBE = 1;
  }
  v4 = (System_Int32_array *)sub_1C1AC7C(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_23217/*"reelIcon"*/, v4, v5);
}


int32_t __fastcall QuestPhaseEntity__GetReferToQuestPhase(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BC800A & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_23223/*"referToQuestPhase"*/, method);
    byte_4BC800A = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_23223/*"referToQuestPhase"*/, 0, v2);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetSelectableQuests(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BC7FA6 & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_23084/*"questSelect"*/, method);
    byte_4BC7FA6 = 1;
  }
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_23084/*"questSelect"*/, 0LL, v2);
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
      sub_1C1AE38(SelectableQuests, v8);
    return SelectableQuests->m_Items[selectIndex + 1];
  }
  return result;
}


System_Int32_array *__fastcall QuestPhaseEntity__GetShadowOffSvtIds(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Int32_array *v4; // x2
  const MethodInfo *v5; // x3

  if ( (byte_4BC7FCD & 1) == 0 )
  {
    sub_1C1ABD4(&int___TypeInfo, method);
    sub_1C1ABD4(&StringLiteral_23652/*"shadowOffSvtIds"*/, v3);
    byte_4BC7FCD = 1;
  }
  v4 = (System_Int32_array *)sub_1C1AC7C(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_23652/*"shadowOffSvtIds"*/, v4, v5);
}


int32_t __fastcall QuestPhaseEntity__GetSingleForceSvtId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BC7FCB & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_23741/*"singleForceSvtId"*/, method);
    byte_4BC7FCB = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_23741/*"singleForceSvtId"*/, 0, v2);
}


int32_t __fastcall QuestPhaseEntity__GetStartBattleSoundMode(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BC8008 & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_13192/*"StartBattleSoundMode"*/, method);
    byte_4BC8008 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_13192/*"StartBattleSoundMode"*/, 0, v2);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetStartMovieWave(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BC7FB3 & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_21898/*"movieWave"*/, method);
    byte_4BC7FB3 = 1;
  }
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_21898/*"movieWave"*/, 0LL, v2);
}


int32_t __fastcall QuestPhaseEntity__GetStartScreenEffect(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BC8007 & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_13191/*"StartBattleScreenEffect"*/, method);
    byte_4BC8007 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_13191/*"StartBattleScreenEffect"*/, 0, v2);
}


int32_t __fastcall QuestPhaseEntity__GetSupportInitDeckIndex(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BC7FDE & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_19443/*"eventDeckIndex"*/, method);
    byte_4BC7FDE = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19443/*"eventDeckIndex"*/, 0, v2);
}


int32_t __fastcall QuestPhaseEntity__GetTemporaryCommandSpell(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BC7FDB & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_24297/*"temporaryCommandSpell"*/, method);
    byte_4BC7FDB = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_24297/*"temporaryCommandSpell"*/, -1, v2);
}


int64_t __fastcall QuestPhaseEntity__GetUniqueId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  int32_t phase; // w19
  int32_t questId; // w20

  if ( (byte_4BC7F8C & 1) == 0 )
  {
    sub_1C1ABD4(&BattleDataDefine_TypeInfo, method);
    byte_4BC7F8C = 1;
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

  if ( (byte_4BC7FCC & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_24771/*"useEventDeckNo"*/, method);
    byte_4BC7FCC = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_24771/*"useEventDeckNo"*/, 1, v2);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetVoiceOffPlayerSvtIdArray(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BC7FEF & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_25008/*"voiceOffMySvtIds"*/, method);
    byte_4BC7FEF = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_25008/*"voiceOffMySvtIds"*/, 0LL);
}


System_String_o *__fastcall QuestPhaseEntity__GetWarBoardStartMovieName(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1

  if ( (byte_4BC7FE9 & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_15850/*"WarBoardStartMovieName"*/, method);
    sub_1C1ABD4(&StringLiteral_1/*""*/, v4);
    byte_4BC7FE9 = 1;
  }
  return QuestPhaseEntity__getScriptStr(
           this,
           (System_String_o *)StringLiteral_15850/*"WarBoardStartMovieName"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


System_String_array *__fastcall QuestPhaseEntity__GetWaveStartMovie(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BC7FB1 & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_25088/*"waveStartMovie"*/, method);
    byte_4BC7FB1 = 1;
  }
  return QuestPhaseEntity__getScriptStringArrayParam(this, (System_String_o *)StringLiteral_25088/*"waveStartMovie"*/, 0LL, v2);
}


int32_t __fastcall QuestPhaseEntity__GetWinBgmOffFlg(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BC7FC6 & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_19310/*"endBgmOff"*/, method);
    byte_4BC7FC6 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19310/*"endBgmOff"*/, 0, v2);
}


int32_t __fastcall QuestPhaseEntity__GetWinVoiceOffFlg(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BC7FC4 & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_19324/*"endVoiceOff"*/, method);
    byte_4BC7FC4 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19324/*"endVoiceOff"*/, 0, v2);
}


bool __fastcall QuestPhaseEntity__HasReleaseFocusQuestBoardKey(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4BC8000 & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_21173/*"isReleaseFocus"*/, method);
    byte_4BC8000 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_21173/*"isReleaseFocus"*/, 0LL);
}


bool __fastcall QuestPhaseEntity__IsActiveAssistSkill(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Int32_array *v4; // x0
  const MethodInfo *v5; // x3
  System_Int32_array *ScriptIntArrayParam; // x0
  __int64 v7; // x1

  if ( (byte_4BC7FD7 & 1) == 0 )
  {
    sub_1C1ABD4(&int___TypeInfo, method);
    sub_1C1ABD4(&StringLiteral_17212/*"assistIds"*/, v3);
    byte_4BC7FD7 = 1;
  }
  v4 = (System_Int32_array *)sub_1C1AC7C(int___TypeInfo, 0LL);
  ScriptIntArrayParam = QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_17212/*"assistIds"*/, v4, v5);
  if ( !ScriptIntArrayParam )
    sub_1C1AE30(0LL, v7);
  return ScriptIntArrayParam->max_length != 0;
}


bool __fastcall QuestPhaseEntity__IsAreaImporveQuest(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4BC7FEA & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_17158/*"areaImprovementQuest"*/, method);
    byte_4BC7FEA = 1;
  }
  return QuestPhaseEntity__getScriptObj(this, (System_String_o *)StringLiteral_17158/*"areaImprovementQuest"*/, v2) != 0LL;
}


bool __fastcall QuestPhaseEntity__IsAutoExecute(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4BC8011 & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_21139/*"isAutoExecute"*/, method);
    byte_4BC8011 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_21139/*"isAutoExecute"*/, 0LL);
}


bool __fastcall QuestPhaseEntity__IsContinueWaveRestart(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BC7FFE & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_18542/*"continueWaveRestart"*/, method);
    byte_4BC7FFE = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_18542/*"continueWaveRestart"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__IsFadeOutMainBgmBeforeBattle(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4BC800B & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_19687/*"fadeOutMainBgmBeforeBattle"*/, method);
    byte_4BC800B = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_19687/*"fadeOutMainBgmBeforeBattle"*/, 0LL);
}


bool __fastcall QuestPhaseEntity__IsHideAssistConfButton(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BC7FDA & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_20249/*"hideAssistConfButton"*/, method);
    byte_4BC7FDA = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20249/*"hideAssistConfButton"*/, 0, v2) != 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestPhaseEntity__IsHideBattlePointGauge(
        QuestPhaseEntity_o *this,
        int32_t battlePointId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_IEnumerable_TSource__o *IntArray; // x0

  if ( (byte_4BC8010 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Linq_Enumerable_Contains_int___, *(_QWORD *)&battlePointId);
    sub_1C1ABD4(&StringLiteral_7410/*"HideBattlePointGauge"*/, v5);
    byte_4BC8010 = 1;
  }
  IntArray = (System_Collections_Generic_IEnumerable_TSource__o *)EntityScriptUtil__GetIntArray(
                                                                    this->fields.script,
                                                                    (System_String_o *)StringLiteral_7410/*"HideBattlePointGauge"*/,
                                                                    0LL,
                                                                    0LL);
  if ( IntArray )
    LOBYTE(IntArray) = System_Linq_Enumerable__Contains_int_(
                         IntArray,
                         battlePointId,
                         (const MethodInfo_2FB748C *)Method_System_Linq_Enumerable_Contains_int___);
  return (char)IntArray;
}


bool __fastcall QuestPhaseEntity__IsIgnoreBattleLoseDialog(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4BC7FAB & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_20566/*"ignoreBattleLoseDialog"*/, method);
    byte_4BC7FAB = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_20566/*"ignoreBattleLoseDialog"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestPhaseEntity__IsIgnoreBattlePointUp(
        QuestPhaseEntity_o *this,
        int32_t battlePointId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_IEnumerable_TSource__o *IntArray; // x0

  if ( (byte_4BC800E & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Linq_Enumerable_Contains_int___, *(_QWORD *)&battlePointId);
    sub_1C1ABD4(&StringLiteral_7625/*"IgnoreBattlePointUp"*/, v5);
    byte_4BC800E = 1;
  }
  IntArray = (System_Collections_Generic_IEnumerable_TSource__o *)EntityScriptUtil__GetIntArray(
                                                                    this->fields.script,
                                                                    (System_String_o *)StringLiteral_7625/*"IgnoreBattlePointUp"*/,
                                                                    0LL,
                                                                    0LL);
  if ( IntArray )
    LOBYTE(IntArray) = System_Linq_Enumerable__Contains_int_(
                         IntArray,
                         battlePointId,
                         (const MethodInfo_2FB748C *)Method_System_Linq_Enumerable_Contains_int___);
  return (char)IntArray;
}


bool __fastcall QuestPhaseEntity__IsInterruptionQuest(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BC8006 & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_21058/*"interruptibleQuest"*/, method);
    byte_4BC8006 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21058/*"interruptibleQuest"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__IsInvisibleConnectAndLoad(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BC7FD1 & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_21101/*"invisibleConnectAndLoad"*/, method);
    byte_4BC7FD1 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21101/*"invisibleConnectAndLoad"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__IsKeepSubBgmAfterBattleResult(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4BC7FC7 & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_21336/*"keepSubBgmUntilBattleResult"*/, method);
    byte_4BC7FC7 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_21336/*"keepSubBgmUntilBattleResult"*/, 0LL);
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

  if ( (byte_4BC7FD0 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Array_FindAll_int___, individualitys);
    sub_1C1ABD4(&Method_System_Collections_Generic_HashSet_int___ctor___77473576, v5);
    sub_1C1ABD4(&System_Collections_Generic_HashSet_int__TypeInfo, v6);
    sub_1C1ABD4(&System_Predicate_int__TypeInfo, v7);
    byte_4BC7FD0 = 1;
  }
  PrioredIndividuality = (System_Collections_Generic_IEnumerable_T__o *)QuestPhaseEntity__GetPrioredIndividuality(
                                                                          this,
                                                                          (const MethodInfo *)individualitys);
  v9 = (System_Collections_Generic_HashSet_int__o *)sub_1C1AE20(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor_55507940(
    v9,
    PrioredIndividuality,
    (const MethodInfo_34EFBE4 *)Method_System_Collections_Generic_HashSet_int___ctor___77473576);
  All_int = (System_Predicate_int__o *)sub_1C1AE20(System_Predicate_int__TypeInfo);
  if ( !v9
    || (v12 = (System_Predicate_T__o *)All_int,
        System_Predicate_int____ctor(All_int, (Il2CppObject *)v9, (intptr_t)v9->klass->vtable._9_CopyTo.methodPtr, 0LL),
        (All_int = (System_Predicate_int__o *)System_Array__FindAll_int_(
                                                individualitys,
                                                v12,
                                                (const MethodInfo_309A70C *)Method_System_Array_FindAll_int___)) == 0LL) )
  {
    sub_1C1AE30(All_int, v11);
  }
  return All_int->fields.m_target != 0LL;
}


bool __fastcall QuestPhaseEntity__IsNonStopEndBgm(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BC7FA8 & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_22494/*"nonStopEndBgm"*/, method);
    byte_4BC7FA8 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22494/*"nonStopEndBgm"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__IsNoneSupportFriendPoint(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4BC8014 & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_22506/*"noneSupportFriendPoint"*/, method);
    byte_4BC8014 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22506/*"noneSupportFriendPoint"*/, 0, 0LL) != 0;
}


bool __fastcall QuestPhaseEntity__IsNotClassBoard(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BC7FFB & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_22524/*"notClassBoard"*/, method);
    byte_4BC7FFB = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22524/*"notClassBoard"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__IsNotResetResultDispFlag(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BC7FB5 & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_22533/*"notResetResultDispFlag"*/, method);
    byte_4BC7FB5 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22533/*"notResetResultDispFlag"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__IsNotUseRestrictionDialog(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BC7FFC & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_22535/*"notUseRestrictionDialog"*/, method);
    byte_4BC7FFC = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22535/*"notUseRestrictionDialog"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__IsPlayScriptBeforeForWarBoard(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BC7FD6 & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_21177/*"isScriptPlayForWarBoard"*/, method);
    byte_4BC7FD6 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21177/*"isScriptPlayForWarBoard"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__IsReleaseFocusQuestBoard(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BC8001 & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_21173/*"isReleaseFocus"*/, method);
    byte_4BC8001 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21173/*"isReleaseFocus"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__IsRepeatReward(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BC7FF9 & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_23269/*"repeatReward"*/, method);
    byte_4BC7FF9 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_23269/*"repeatReward"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__IsReverseMyDeckSvtPosition(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4BC800C & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_23320/*"reverseMyDeckSvtPosition"*/, method);
    byte_4BC800C = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_23320/*"reverseMyDeckSvtPosition"*/, 0LL);
}


bool __fastcall QuestPhaseEntity__IsSkipBattleFinish(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BC7FF3 & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_23762/*"skipBattleFinish"*/, method);
    byte_4BC7FF3 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_23762/*"skipBattleFinish"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__IsUseTemporaryCommandSpell(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BC7FDC & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_24779/*"useTemporaryCommandSpell"*/, method);
    byte_4BC7FDC = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_24779/*"useTemporaryCommandSpell"*/, -1, v2) == 1;
}


bool __fastcall QuestPhaseEntity__IsWaveCountInfinity(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BC7FF1 & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_25085/*"waveCountInfinity"*/, method);
    byte_4BC7FF1 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_25085/*"waveCountInfinity"*/, -1, v2) != -1;
}


bool __fastcall QuestPhaseEntity__IsWaveSetup(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BC7FFD & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_25087/*"waveSetup"*/, method);
    byte_4BC7FFD = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_25087/*"waveSetup"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__PlayHappinessCounterEffect(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4BC800F & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_10849/*"PlayHappinessCounterEffect"*/, method);
    byte_4BC800F = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_10849/*"PlayHappinessCounterEffect"*/, 0LL);
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
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  System_Collections_Generic_List_int__o *v31; // x0
  __int64 v32; // x1
  System_Collections_Generic_IDictionary_int__int____c *klass; // x8
  System_Collections_Generic_List_int__o *v34; // x21
  __int64 v35; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0

  if ( (byte_4BC7FE4 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_BasicHelper_GetValue_long___, obj);
    sub_1C1ABD4(&Method_BasicHelper_GetValue_List_object____, v5);
    sub_1C1ABD4(&System_Converter_object__int__TypeInfo, v6);
    sub_1C1ABD4(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v7);
    sub_1C1ABD4(&System_Collections_Generic_IDictionary_int__int____TypeInfo, v8);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_object__ConvertAll_int___, v9);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_int__ToArray__, v10);
    sub_1C1ABD4(&Method_QuestPhaseEntity___c__SetNpcAiInfo_b__114_0__, v11);
    sub_1C1ABD4(&QuestPhaseEntity___c_TypeInfo, v12);
    sub_1C1ABD4(&StringLiteral_16987/*"aiIds"*/, v13);
    sub_1C1ABD4(&StringLiteral_22551/*"npcId"*/, v14);
    byte_4BC7FE4 = 1;
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
                       (System_String_o *)StringLiteral_22551/*"npcId"*/,
                       0LL,
                       (const MethodInfo_2F8D340 *)Method_BasicHelper_GetValue_long___);
        Value_object = BasicHelper__GetValue_object_(
                         v17,
                         (System_String_o *)StringLiteral_16987/*"aiIds"*/,
                         0LL,
                         (const MethodInfo_2F8D42C *)Method_BasicHelper_GetValue_List_object____);
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
              _9__114_0 = (System_Converter_object__int__o *)sub_1C1AE20(System_Converter_object__int__TypeInfo);
              System_Converter_object__int____ctor(
                _9__114_0,
                v23,
                Method_QuestPhaseEntity___c__SetNpcAiInfo_b__114_0__,
                0LL);
              static_fields = QuestPhaseEntity___c_TypeInfo->static_fields;
              static_fields->__9__114_0 = _9__114_0;
              sub_1C1AB78(
                (PartyOrganizationUtility_o *)&static_fields->__9__114_0,
                (int64_t)_9__114_0,
                v25,
                v26,
                v27,
                v28,
                v29,
                v30);
            }
            v31 = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_object___ConvertAll_int_(
                                                              v20,
                                                              (System_Converter_T__TOutput__o *)_9__114_0,
                                                              (const MethodInfo_2ECF270 *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
            if ( !v31
              || (v31 = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_int___ToArray(
                                                                    v31,
                                                                    (const MethodInfo_3621324 *)Method_System_Collections_Generic_List_int__ToArray__),
                  !dicNpcAiId) )
            {
              sub_1C1AE30(v31, v32);
            }
            klass = dicNpcAiId->klass;
            v34 = v31;
            v35 = *(unsigned __int16 *)(&dicNpcAiId->klass->_2.bitflags2 + 3);
            if ( *(_WORD *)(&dicNpcAiId->klass->_2.bitflags2 + 3) )
            {
              p_offset = &klass->_1.interfaceOffsets->offset;
              while ( *((System_Collections_Generic_IDictionary_int__int____c **)p_offset - 1) != System_Collections_Generic_IDictionary_int__int____TypeInfo )
              {
                --v35;
                p_offset += 4;
                if ( !v35 )
                  goto LABEL_24;
              }
              p_method = (__int64)&klass->vtable[*p_offset + 1].method;
            }
            else
            {
LABEL_24:
              p_method = sub_1C6CBB4(dicNpcAiId, System_Collections_Generic_IDictionary_int__int____TypeInfo, 1LL);
            }
            (*(void (__fastcall **)(System_Collections_Generic_IDictionary_int__int____o *, _QWORD, System_Collections_Generic_List_int__o *, _QWORD))p_method)(
              dicNpcAiId,
              (unsigned int)Value_long,
              v34,
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
  System_Func_object__int__o *_9__161_1; // x22
  Il2CppObject *v34; // x23
  struct QuestPhaseEntity___c_StaticFields *static_fields; // x0
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v42; // x0
  System_Object_array *v43; // x21
  int max_length; // w8
  CommonReleaseMaster_o *v45; // x22
  unsigned int v46; // w23
  Il2CppObject *v47; // x24

  if ( (byte_4BC8013 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_BasicHelper_GetValue_string__object___, *(_QWORD *)&servantId);
    sub_1C1ABD4(&Method_DataManager_GetMaster_CommonReleaseMaster___, v9);
    sub_1C1ABD4(&DataManager_TypeInfo, v10);
    sub_1C1ABD4(&Method_System_Linq_Enumerable_OrderByDescending_BattleTreasureDeviceSequenceSelectType__int___, v11);
    sub_1C1ABD4(&Method_System_Linq_Enumerable_ToArray_BattleTreasureDeviceSequenceSelectType___, v12);
    sub_1C1ABD4(&Method_System_Linq_Enumerable_Where_BattleTreasureDeviceSequenceSelectType___, v13);
    sub_1C1ABD4(&System_Func_BattleTreasureDeviceSequenceSelectType__bool__TypeInfo, v14);
    sub_1C1ABD4(&System_Func_BattleTreasureDeviceSequenceSelectType__int__TypeInfo, v15);
    sub_1C1ABD4(&Method_JsonManager_DeserializeArray_BattleTreasureDeviceSequenceSelectType___, v16);
    sub_1C1ABD4(&JsonManager_TypeInfo, v17);
    sub_1C1ABD4(&Method_QuestPhaseEntity___c__TryGetOverwritePlayerSequenceSelectTypeByGender_b__161_1__, v18);
    sub_1C1ABD4(
      &Method_QuestPhaseEntity___c__DisplayClass161_0__TryGetOverwritePlayerSequenceSelectTypeByGender_b__0__,
      v19);
    sub_1C1ABD4(&QuestPhaseEntity___c__DisplayClass161_0_TypeInfo, v20);
    sub_1C1ABD4(&QuestPhaseEntity___c_TypeInfo, v21);
    sub_1C1ABD4(&StringLiteral_22789/*"overwritePlayerSequenceSelectTypeByGender"*/, v22);
    byte_4BC8013 = 1;
  }
  v23 = sub_1C1AE20(QuestPhaseEntity___c__DisplayClass161_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v23, 0LL);
  if ( !v23 )
    goto LABEL_28;
  *(_DWORD *)(v23 + 16) = servantId;
  *genderSelectType = -1;
  *patternId = -1;
  Value_object__object = BasicHelper__GetValue_object__object_(
                           (System_Collections_Generic_Dictionary_K__V__o *)this->fields.script,
                           (Il2CppObject *)StringLiteral_22789/*"overwritePlayerSequenceSelectTypeByGender"*/,
                           0LL,
                           (const MethodInfo_2F8DBD8 *)Method_BasicHelper_GetValue_string__object___);
  if ( !Value_object__object )
    return (char)Value_object__object;
  v27 = Value_object__object;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v28 = (System_Collections_Generic_IEnumerable_TSource__o *)JsonManager__DeserializeArray_object_(
                                                               v27,
                                                               (const MethodInfo_3006E90 *)Method_JsonManager_DeserializeArray_BattleTreasureDeviceSequenceSelectType___);
  v29 = (System_Func_object__bool__o *)sub_1C1AE20(System_Func_BattleTreasureDeviceSequenceSelectType__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v29,
    (Il2CppObject *)v23,
    Method_QuestPhaseEntity___c__DisplayClass161_0__TryGetOverwritePlayerSequenceSelectTypeByGender_b__0__,
    0LL);
  v30 = System_Linq_Enumerable__Where_object_(
          v28,
          (System_Func_TSource__bool__o *)v29,
          (const MethodInfo_2FDED84 *)Method_System_Linq_Enumerable_Where_BattleTreasureDeviceSequenceSelectType___);
  v31 = QuestPhaseEntity___c_TypeInfo;
  v32 = v30;
  if ( !QuestPhaseEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestPhaseEntity___c_TypeInfo);
    v31 = QuestPhaseEntity___c_TypeInfo;
  }
  _9__161_1 = (System_Func_object__int__o *)v31->static_fields->__9__161_1;
  if ( !_9__161_1 )
  {
    if ( !v31->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v31);
      v31 = QuestPhaseEntity___c_TypeInfo;
    }
    v34 = (Il2CppObject *)v31->static_fields->__9;
    _9__161_1 = (System_Func_object__int__o *)sub_1C1AE20(System_Func_BattleTreasureDeviceSequenceSelectType__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__161_1,
      v34,
      Method_QuestPhaseEntity___c__TryGetOverwritePlayerSequenceSelectTypeByGender_b__161_1__,
      0LL);
    static_fields = QuestPhaseEntity___c_TypeInfo->static_fields;
    static_fields->__9__161_1 = (struct System_Func_BattleTreasureDeviceSequenceSelectType__int__o *)_9__161_1;
    sub_1C1AB78(
      (PartyOrganizationUtility_o *)&static_fields->__9__161_1,
      (int64_t)_9__161_1,
      v36,
      v37,
      v38,
      v39,
      v40,
      v41);
  }
  v42 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                               v32,
                                                               (System_Func_TSource__TKey__o *)_9__161_1,
                                                               (const MethodInfo_2FC8A98 *)Method_System_Linq_Enumerable_OrderByDescending_BattleTreasureDeviceSequenceSelectType__int___);
  v43 = System_Linq_Enumerable__ToArray_object_(
          v42,
          (const MethodInfo_2FD8E70 *)Method_System_Linq_Enumerable_ToArray_BattleTreasureDeviceSequenceSelectType___);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v43, 0LL) )
    goto LABEL_25;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !v43 )
LABEL_28:
    sub_1C1AE30(Master_object, monitor_high);
  max_length = v43->max_length;
  if ( max_length < 1 )
  {
LABEL_25:
    LOBYTE(Value_object__object) = 0;
    return (char)Value_object__object;
  }
  v45 = (CommonReleaseMaster_o *)Master_object;
  v46 = 0;
  while ( 1 )
  {
    if ( v46 >= max_length )
      sub_1C1AE38(Master_object, monitor_high);
    v47 = v43->m_Items[v46];
    if ( !v47 )
      goto LABEL_28;
    monitor_high = HIDWORD(v47[1].monitor);
    if ( (int)monitor_high < 1 )
      break;
    if ( !v45 )
      goto LABEL_28;
    Master_object = (Il2CppObject *)CommonReleaseMaster__IsOpen(v45, monitor_high, 0LL, 0, 0LL);
    if ( ((unsigned __int8)Master_object & 1) != 0 )
      break;
    max_length = v43->max_length;
    if ( (int)++v46 >= max_length )
      goto LABEL_25;
  }
  LOBYTE(Value_object__object) = 1;
  *genderSelectType = HIDWORD(v47[1].klass);
  *patternId = (int32_t)v47[1].monitor;
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

  if ( (byte_4BC7FA1 & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_17381/*"battleEffectId"*/, *(_QWORD *)&defVal);
    byte_4BC7FA1 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_17381/*"battleEffectId"*/, defVal, v3);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall QuestPhaseEntity__getBattleFieldMotionId(
        QuestPhaseEntity_o *this,
        int32_t defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4BC7FA3 & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_19723/*"fieldMotionId"*/, *(_QWORD *)&defVal);
    byte_4BC7FA3 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19723/*"fieldMotionId"*/, defVal, v3);
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

  if ( (byte_4BC7FA4 & 1) == 0 )
  {
    sub_1C1ABD4(&int___TypeInfo, defVals);
    sub_1C1ABD4(&StringLiteral_19724/*"fieldMotionIds"*/, v6);
    byte_4BC7FA4 = 1;
  }
  result = QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_19724/*"fieldMotionIds"*/, defVals, v3);
  if ( !result )
    goto LABEL_10;
  if ( *(_QWORD *)&result->max_length )
    return result;
  BattleFieldMotionId = QuestPhaseEntity__getBattleFieldMotionId(this, -1, v9);
  result = defVals;
  if ( BattleFieldMotionId == -1 )
    return result;
  result = (System_Int32_array *)sub_1C1AC7C(int___TypeInfo, 1LL);
  if ( !result )
LABEL_10:
    sub_1C1AE30(result, v8);
  if ( !result->max_length )
    sub_1C1AE38(result, v8);
  result->m_Items[1] = BattleFieldMotionId;
  return result;
}


int32_t __fastcall QuestPhaseEntity__getBreakOnBattleWinWaitMSec(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BC7FAF & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_17721/*"breakOnBattleWinWaitMSec"*/, method);
    byte_4BC7FAF = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_17721/*"breakOnBattleWinWaitMSec"*/, 0, v2);
}


System_Int32_array *__fastcall QuestPhaseEntity__getEventGrounpIds(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Int32_array *v4; // x2
  const MethodInfo *v5; // x3

  if ( (byte_4BC7FA5 & 1) == 0 )
  {
    sub_1C1ABD4(&int___TypeInfo, method);
    sub_1C1ABD4(&StringLiteral_19444/*"eventGroupId"*/, v3);
    byte_4BC7FA5 = 1;
  }
  v4 = (System_Int32_array *)sub_1C1AC7C(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_19444/*"eventGroupId"*/, v4, v5);
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

  if ( (byte_4BC7FE1 & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_20266/*"hintLeftIndent"*/, method);
    byte_4BC7FE1 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20266/*"hintLeftIndent"*/, -1, v2);
}


System_String_o *__fastcall QuestPhaseEntity__getHintMessage(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1

  if ( (byte_4BC7FE0 & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_20267/*"hintMessage"*/, method);
    sub_1C1ABD4(&StringLiteral_1/*""*/, v4);
    byte_4BC7FE0 = 1;
  }
  return QuestPhaseEntity__getScriptStr(
           this,
           (System_String_o *)StringLiteral_20267/*"hintMessage"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


System_String_o *__fastcall QuestPhaseEntity__getHintMessageTitle(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1

  if ( (byte_4BC7FDF & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_1/*""*/, method);
    sub_1C1ABD4(&StringLiteral_20269/*"hintTitle"*/, v4);
    byte_4BC7FDF = 1;
  }
  return QuestPhaseEntity__getScriptStr(
           this,
           (System_String_o *)StringLiteral_20269/*"hintTitle"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


int32_t __fastcall QuestPhaseEntity__getHintOpenType(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BC7FE2 & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_20268/*"hintOpenType"*/, method);
    byte_4BC7FE2 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20268/*"hintOpenType"*/, 0, v2);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall QuestPhaseEntity__getLeave(QuestPhaseEntity_o *this, int32_t defVal, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4BC7FA0 & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_21426/*"leave"*/, *(_QWORD *)&defVal);
    byte_4BC7FA0 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21426/*"leave"*/, defVal, v3);
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

  if ( (byte_4BC7F9B & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_23303/*"resultBgmId"*/, *(_QWORD *)&defVal);
    byte_4BC7F9B = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_23303/*"resultBgmId"*/, defVal, v3);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall QuestPhaseEntity__getResultEffectId(
        QuestPhaseEntity_o *this,
        int32_t defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4BC7F9F & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_23304/*"resultEffectId"*/, *(_QWORD *)&defVal);
    byte_4BC7F9F = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_23304/*"resultEffectId"*/, defVal, v3);
}


System_Int32_array *__fastcall QuestPhaseEntity__getResultEnemyVoiceIds(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Int32_array *v4; // x2
  const MethodInfo *v5; // x3

  if ( (byte_4BC7FA9 & 1) == 0 )
  {
    sub_1C1ABD4(&int___TypeInfo, method);
    sub_1C1ABD4(&StringLiteral_23305/*"resultEnemyVoiceIds"*/, v3);
    byte_4BC7FA9 = 1;
  }
  v4 = (System_Int32_array *)sub_1C1AC7C(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_23305/*"resultEnemyVoiceIds"*/, v4, v5);
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
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  System_Collections_Generic_List_int__o *v23; // x0
  __int64 v24; // x1

  if ( (byte_4BC7F93 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Converter_object__int__TypeInfo, key);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_object__ConvertAll_int___, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_int__ToArray__, v8);
    sub_1C1ABD4(&Method_QuestPhaseEntity___c__getScriptIntArrayParam_b__31_0__, v9);
    sub_1C1ABD4(&QuestPhaseEntity___c_TypeInfo, v10);
    byte_4BC7F93 = 1;
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
    _9__31_0 = (System_Converter_object__int__o *)sub_1C1AE20(System_Converter_object__int__TypeInfo);
    System_Converter_object__int____ctor(
      _9__31_0,
      v15,
      Method_QuestPhaseEntity___c__getScriptIntArrayParam_b__31_0__,
      0LL);
    static_fields = QuestPhaseEntity___c_TypeInfo->static_fields;
    static_fields->__9__31_0 = _9__31_0;
    sub_1C1AB78(
      (PartyOrganizationUtility_o *)&static_fields->__9__31_0,
      (int64_t)_9__31_0,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
  }
  v23 = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_object___ConvertAll_int_(
                                                    v12,
                                                    (System_Converter_T__TOutput__o *)_9__31_0,
                                                    (const MethodInfo_2ECF270 *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
  if ( !v23 )
    sub_1C1AE30(0LL, v24);
  return System_Collections_Generic_List_int___ToArray(
           v23,
           (const MethodInfo_3621324 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  if ( (byte_4BC7F92 & 1) == 0 )
  {
    sub_1C1ABD4(&long_TypeInfo, key);
    byte_4BC7F92 = 1;
  }
  ScriptObj = QuestPhaseEntity__getScriptObj(this, key, *(const MethodInfo **)&defVal);
  if ( !ScriptObj )
    return v4;
  if ( ScriptObj->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(ScriptObj, long_TypeInfo, v8, v9);
  sub_1C1B0F0(ScriptObj);
  return (unsigned int)QuestPhaseEntity__getScriptObj(v11, v12, v13);
}


Il2CppObject *__fastcall QuestPhaseEntity__getScriptObj(
        QuestPhaseEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  Il2CppObject *result; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4BC7F97 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, key);
    byte_4BC7F97 = 1;
  }
  result = (Il2CppObject *)this->fields.script;
  if ( result )
  {
    value = 0LL;
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)result,
           (Il2CppObject *)key,
           &value,
           (const MethodInfo_33044FC *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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

  if ( (byte_4BC7F95 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_object__ToArray__, key);
    byte_4BC7F95 = 1;
  }
  ScriptObjListParam = QuestPhaseEntity__getScriptObjListParam(this, key, (const MethodInfo *)defVal);
  if ( ScriptObjListParam )
    return System_Collections_Generic_List_object___ToArray(
             ScriptObjListParam,
             (const MethodInfo_363E3E8 *)Method_System_Collections_Generic_List_object__ToArray__);
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

  if ( (byte_4BC7F96 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Collections_Generic_List_object__TypeInfo, key);
    byte_4BC7F96 = 1;
  }
  result = (System_Collections_Generic_List_object__o *)QuestPhaseEntity__getScriptObj(this, key, method);
  if ( result )
  {
    methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (System_Collections_Generic_List_object__c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != System_Collections_Generic_List_object__TypeInfo )
    {
      sub_1C1B0F0(result);
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

  if ( (byte_4BC7F98 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    sub_1C1ABD4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    sub_1C1ABD4(&string_TypeInfo, v8);
    byte_4BC7F98 = 1;
  }
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)key,
          (const MethodInfo_3302EE4 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return defVal;
  }
  v11 = this->fields.script;
  if ( !v11 )
    sub_1C1AE30(0LL, v10);
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)v11,
           (Il2CppObject *)key,
           (const MethodInfo_3302C70 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  defVal = (System_String_o *)Item;
  if ( !Item || (System_String_c *)Item->klass == string_TypeInfo )
    return defVal;
  sub_1C1B0F0(Item);
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
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  System_Collections_Generic_List_object__o *v23; // x0
  __int64 v24; // x1

  if ( (byte_4BC7F94 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Converter_object__string__TypeInfo, key);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_object__ConvertAll_string___, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_string__ToArray__, v8);
    sub_1C1ABD4(&Method_QuestPhaseEntity___c__getScriptStringArrayParam_b__32_0__, v9);
    sub_1C1ABD4(&QuestPhaseEntity___c_TypeInfo, v10);
    byte_4BC7F94 = 1;
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
    _9__32_0 = (System_Converter_TInput__TOutput__o *)sub_1C1AE20(System_Converter_object__string__TypeInfo);
    System_Converter_object__object____ctor(
      _9__32_0,
      v15,
      Method_QuestPhaseEntity___c__getScriptStringArrayParam_b__32_0__,
      0LL);
    static_fields = QuestPhaseEntity___c_TypeInfo->static_fields;
    static_fields->__9__32_0 = (struct System_Converter_object__string__o *)_9__32_0;
    sub_1C1AB78(
      (PartyOrganizationUtility_o *)&static_fields->__9__32_0,
      (int64_t)_9__32_0,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
  }
  v23 = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___ConvertAll_object_(
                                                       v12,
                                                       (System_Converter_T__TOutput__o *)_9__32_0,
                                                       (const MethodInfo_2ECF374 *)Method_System_Collections_Generic_List_object__ConvertAll_string___);
  if ( !v23 )
    sub_1C1AE30(0LL, v24);
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  v23,
                                  (const MethodInfo_363E3E8 *)Method_System_Collections_Generic_List_string__ToArray__);
}


int32_t __fastcall QuestPhaseEntity__getSpecialShadowEffectId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BC7FBA & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_20126/*"getSpecialShadowEffectId"*/, method);
    byte_4BC7FBA = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20126/*"getSpecialShadowEffectId"*/, 0, v2);
}


int32_t __fastcall QuestPhaseEntity__getTurnSituationType(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BC7FB9 & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_24508/*"turnSituationType"*/, method);
    byte_4BC7FB9 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_24508/*"turnSituationType"*/, 0, v2);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall QuestPhaseEntity__getUniqueCameraId(
        QuestPhaseEntity_o *this,
        int32_t defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4BC7FA2 & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_24594/*"uniqueCameraId"*/, *(_QWORD *)&defVal);
    byte_4BC7FA2 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_24594/*"uniqueCameraId"*/, defVal, v3);
}


bool __fastcall QuestPhaseEntity__isBattleFinishCameraTargetAll(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BC7FB8 & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_17383/*"battleFinishCameraTargetAll"*/, method);
    byte_4BC7FB8 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_17383/*"battleFinishCameraTargetAll"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__isBreakOnBattleWin(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BC7FAD & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_17719/*"breakOnBattleWin"*/, method);
    byte_4BC7FAD = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_17719/*"breakOnBattleWin"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__isBreakOnBattleWinFadeColorBlack(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BC7FAE & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_17720/*"breakOnBattleWinFadeColorBlack"*/, method);
    byte_4BC7FAE = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_17720/*"breakOnBattleWinFadeColorBlack"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__isDisableChangeRaidDownMessage(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BC7FBB & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_21143/*"isDisableChangeRaidDownMessage"*/, method);
    byte_4BC7FBB = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21143/*"isDisableChangeRaidDownMessage"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__isDispLoseResult(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BC7FAA & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_23306/*"resultLoseDisp"*/, method);
    byte_4BC7FAA = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_23306/*"resultLoseDisp"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__isFadeOutBgmBeforeMovie(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BC7F9E & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_6718/*"FadeOutBgmBeforeMovie"*/, method);
    byte_4BC7F9E = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_6718/*"FadeOutBgmBeforeMovie"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__isNoResult(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BC7FAC & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_22477/*"noResult"*/, method);
    byte_4BC7FAC = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22477/*"noResult"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__isTurnSituationType(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  return QuestPhaseEntity__getTurnSituationType(this, method) > 0;
}


void __fastcall QuestPhaseEntity___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BC8015 & 1) == 0 )
  {
    sub_1C1ABD4(&QuestPhaseEntity___c_TypeInfo, v1);
    byte_4BC8015 = 1;
  }
  v2 = (Il2CppObject *)sub_1C1AE20(QuestPhaseEntity___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  QuestPhaseEntity___c_TypeInfo->static_fields->__9 = (struct QuestPhaseEntity___c_o *)v2;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)QuestPhaseEntity___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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

  if ( (byte_4BC8017 & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_1/*""*/, x);
    byte_4BC8017 = 1;
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


int32_t __fastcall QuestPhaseEntity___c___TryGetOverwritePlayerSequenceSelectTypeByGender_b__161_1(
        QuestPhaseEntity___c_o *this,
        BattleTreasureDeviceSequenceSelectType_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C1AE30(this, 0LL);
  return x->fields.priority;
}


int32_t __fastcall QuestPhaseEntity___c___getScriptIntArrayParam_b__31_0(
        QuestPhaseEntity___c_o *this,
        Il2CppObject *x,
        const MethodInfo *method)
{
  System_String_o *v4; // x0

  if ( (byte_4BC8016 & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_1/*""*/, x);
    byte_4BC8016 = 1;
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
    sub_1C1AE30(this, 0LL);
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


void __fastcall QuestPhaseEntity___c__DisplayClass161_0___ctor(
        QuestPhaseEntity___c__DisplayClass161_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestPhaseEntity___c__DisplayClass161_0___TryGetOverwritePlayerSequenceSelectTypeByGender_b__0(
        QuestPhaseEntity___c__DisplayClass161_0_o *this,
        BattleTreasureDeviceSequenceSelectType_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C1AE30(this, 0LL);
  return x->fields.svtId == this->fields.servantId;
}