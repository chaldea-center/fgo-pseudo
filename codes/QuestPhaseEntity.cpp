void __fastcall QuestPhaseEntity___ctor(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B5FC & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_string___ctor__);
    byte_4A5B5FC = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_311D7AC *)Method_DataEntityBase_string___ctor__);
}


void __fastcall QuestPhaseEntity___ctor_39493124(
        QuestPhaseEntity_o *this,
        QuestPhaseEntity_o *cSrc,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  struct System_Int32_array *v9; // x1
  System_Array_o *classIds; // x0
  Il2CppObject *v11; // x0
  Il2CppObject *v12; // x21
  int32_t v13; // w2
  int32_t v14; // w3
  System_Array_o *individuality; // x0
  Il2CppObject *v16; // x0
  struct System_Int32_array *v17; // x1
  struct System_Int32_array **p_individuality; // x19

  if ( (byte_4A5B5FD & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_string___ctor__);
    sub_1B885B0(&int___TypeInfo);
    byte_4A5B5FD = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_311D7AC *)Method_DataEntityBase_string___ctor__);
  if ( !cSrc )
    sub_1B8880C(v5, v6);
  v9 = 0LL;
  *(_QWORD *)&this->fields.questId = *(_QWORD *)&cSrc->fields.questId;
  this->fields.isNpcOnly = cSrc->fields.isNpcOnly;
  *(_OWORD *)&this->fields.battleBgId = *(_OWORD *)&cSrc->fields.battleBgId;
  classIds = (System_Array_o *)cSrc->fields.classIds;
  if ( classIds )
  {
    v11 = System_Array__Clone(classIds, 0LL);
    if ( v11 )
    {
      v12 = v11;
      v9 = (struct System_Int32_array *)sub_1B886EC(v11, int___TypeInfo);
      if ( !v9 )
        goto LABEL_12;
    }
    else
    {
      v9 = 0LL;
    }
  }
  this->fields.classIds = v9;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.classIds, (int32_t)v9, v7, v8);
  individuality = (System_Array_o *)cSrc->fields.individuality;
  if ( !individuality )
    goto LABEL_13;
  v16 = System_Array__Clone(individuality, 0LL);
  if ( !v16 )
    goto LABEL_13;
  v12 = v16;
  v17 = (struct System_Int32_array *)sub_1B886EC(v16, int___TypeInfo);
  if ( !v17 )
  {
LABEL_12:
    sub_1B88ACC(v12);
LABEL_13:
    v17 = 0LL;
  }
  this->fields.individuality = v17;
  p_individuality = &this->fields.individuality;
  sub_1B88554((ServantStatusBattleListViewItem_o *)p_individuality, (int32_t)v17, v13, v14);
  *((_DWORD *)p_individuality + 2) = cSrc->fields.giftId;
}


System_String_o *__fastcall QuestPhaseEntity__CreatePK(int32_t questId, int32_t phase, const MethodInfo *method)
{
  if ( (byte_4A5B5FB & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4A5B5FB = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           questId,
           phase,
           (const MethodInfo_2E7DB2C *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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
  System_Collections_Generic_Dictionary_string__object__o *result; // x0
  __int64 methodPtr_low; // x9
  QuestPhaseEntity_o *v6; // x0
  int32_t v7; // w1
  const MethodInfo *v8; // x2

  if ( (byte_4A5B60C & 1) == 0 )
  {
    sub_1B885B0(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1B885B0(&StringLiteral_16664/*"addEquipSkills"*/);
    byte_4A5B60C = 1;
  }
  result = (System_Collections_Generic_Dictionary_string__object__o *)QuestPhaseEntity__getScriptObj(
                                                                        this,
                                                                        (System_String_o *)StringLiteral_16664/*"addEquipSkills"*/,
                                                                        v2);
  if ( result )
  {
    methodPtr_low = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (System_Collections_Generic_Dictionary_string__object__c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
    {
      sub_1B88ACC(result);
      return (System_Collections_Generic_Dictionary_string__object__o *)QuestPhaseEntity__getResultBgmId(v6, v7, v8);
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

  if ( (byte_4A5B677 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_16676/*"addUniqueCameraIds"*/);
    byte_4A5B677 = 1;
  }
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_16676/*"addUniqueCameraIds"*/, defVal, v3);
}


int32_t __fastcall QuestPhaseEntity__GetAdvantageClassId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5B63B & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_16987/*"auto_sel_support_type"*/);
    byte_4A5B63B = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_16987/*"auto_sel_support_type"*/, -1, v2);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetAssistIdArray(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  System_Int32_array *v3; // x2
  const MethodInfo *v4; // x3

  if ( (byte_4A5B64A & 1) == 0 )
  {
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&StringLiteral_16940/*"assistIds"*/);
    byte_4A5B64A = 1;
  }
  v3 = (System_Int32_array *)sub_1B88658(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_16940/*"assistIds"*/, v3, v4);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetAssistWeightArray(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  System_Int32_array *v3; // x2
  const MethodInfo *v4; // x3

  if ( (byte_4A5B64B & 1) == 0 )
  {
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&StringLiteral_16939/*"assistIdWeight"*/);
    byte_4A5B64B = 1;
  }
  v3 = (System_Int32_array *)sub_1B88658(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_16939/*"assistIdWeight"*/, v3, v4);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetAssumedEffectId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B65D & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_16943/*"assumedEffectId"*/);
    byte_4A5B65D = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_16943/*"assumedEffectId"*/, 0LL);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetBattleEffectMovieIds(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A5B67F & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_3237/*"BattleEffectMovieIds"*/);
    byte_4A5B67F = 1;
  }
  return EntityScriptUtil__GetIntArray(this->fields.script, (System_String_o *)StringLiteral_3237/*"BattleEffectMovieIds"*/, 0LL, 0LL);
}


System_String_o *__fastcall QuestPhaseEntity__GetBattleFinishMovie(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5B622 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_17109/*"battleFinishMovie"*/);
    byte_4A5B622 = 1;
  }
  return QuestPhaseEntity__getScriptStr(this, (System_String_o *)StringLiteral_17109/*"battleFinishMovie"*/, 0LL, v2);
}


int32_t __fastcall QuestPhaseEntity__GetBattleFinishWaitTime(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5B666 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_17110/*"battleFinishWaitTime"*/);
    byte_4A5B666 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_17110/*"battleFinishWaitTime"*/, 0, v2);
}


int32_t __fastcall QuestPhaseEntity__GetBattleItemObjectId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5B674 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_17114/*"battleItemObjectId"*/);
    byte_4A5B674 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_17114/*"battleItemObjectId"*/, 0, v2);
}


int32_t __fastcall QuestPhaseEntity__GetBeforeBattleSkillActor(
        QuestPhaseEntity_o *this,
        int32_t defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4A5B667 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_17155/*"beforeBattleSkillActor"*/);
    byte_4A5B667 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_17155/*"beforeBattleSkillActor"*/, defVal, v3);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetBgIndividuality(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x20
  const MethodInfo *v4; // x1
  int32_t PriorityBattleBgId; // w21
  const MethodInfo *v6; // x1
  __int64 PriorityBattleBgType; // x0
  __int64 v8; // x1
  System_Int32_array *result; // x0
  _QWORD *v10; // x19
  __int64 v11; // x8
  __int64 v12; // x0
  __int64 v13; // x0

  if ( (byte_4A5B601 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Array_Empty_int___);
    sub_1B885B0(&Method_DataManager_GetMaster_BattleBgMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    byte_4A5B601 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_BattleBgMaster___);
  PriorityBattleBgId = QuestPhaseEntity__GetPriorityBattleBgId(this, v4);
  PriorityBattleBgType = QuestPhaseEntity__GetPriorityBattleBgType(this, v6);
  if ( !Master_object )
    sub_1B8880C(PriorityBattleBgType, v8);
  result = BattleBgMaster__GetBgIndividuality(
             (BattleBgMaster_o *)Master_object,
             PriorityBattleBgId,
             PriorityBattleBgType,
             0LL);
  if ( !result )
  {
    v10 = Method_System_Array_Empty_int___;
    v11 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v11 )
    {
      sub_1BDA4E8(Method_System_Array_Empty_int___);
      v11 = v10[7];
    }
    v12 = *(_QWORD *)(v11 + 16);
    if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
      v12 = sub_1BDA48C(v12);
    if ( !*(_DWORD *)(v12 + 224) )
      j_il2cpp_runtime_class_init_0(v12);
    v13 = *(_QWORD *)(v10[7] + 16LL);
    if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
      v13 = sub_1BDA48C(v13);
    return **(System_Int32_array ***)(v13 + 184);
  }
  return result;
}


System_Int32_array *__fastcall QuestPhaseEntity__GetClearGiftItemListDisplay(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  System_Int32_array *v3; // x2
  const MethodInfo *v4; // x3

  if ( (byte_4A5B65A & 1) == 0 )
  {
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&StringLiteral_18005/*"clearGiftItemListDisplay"*/);
    byte_4A5B65A = 1;
  }
  v3 = (System_Int32_array *)sub_1B88658(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_18005/*"clearGiftItemListDisplay"*/, v3, v4);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetCondHavingIds(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  System_Int32_array *v3; // x2
  const MethodInfo *v4; // x3

  if ( (byte_4A5B646 & 1) == 0 )
  {
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&StringLiteral_18197/*"condHaving"*/);
    byte_4A5B646 = 1;
  }
  v3 = (System_Int32_array *)sub_1B88658(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_18197/*"condHaving"*/, v3, v4);
}


int32_t __fastcall QuestPhaseEntity__GetCondQuestClearable(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5B67B & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_18200/*"condQuestClearable"*/);
    byte_4A5B67B = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_18200/*"condQuestClearable"*/, 0, v2);
}


int32_t __fastcall QuestPhaseEntity__GetCorrectionIconId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5B63A & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_18271/*"correctionIconId"*/);
    byte_4A5B63A = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_18271/*"correctionIconId"*/, -1, v2);
}


int32_t __fastcall QuestPhaseEntity__GetDefenceTargetContinueRecoverRate(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5B671 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_19396/*"fieldHpContinueRecoverRate"*/);
    byte_4A5B671 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19396/*"fieldHpContinueRecoverRate"*/, 0, v2);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetEnemyInfoDispNpcSvtIdList(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  System_Int32_array *v3; // x2
  const MethodInfo *v4; // x3

  if ( (byte_4A5B658 & 1) == 0 )
  {
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&StringLiteral_22387/*"overwriteEnemyInfos"*/);
    byte_4A5B658 = 1;
  }
  v3 = (System_Int32_array *)sub_1B88658(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_22387/*"overwriteEnemyInfos"*/, v3, v4);
}


System_String_array *__fastcall QuestPhaseEntity__GetEnemyInfoOverwriteNpcSvtNameList(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  System_String_array *v3; // x2
  const MethodInfo *v4; // x3

  if ( (byte_4A5B659 & 1) == 0 )
  {
    sub_1B885B0(&string___TypeInfo);
    sub_1B885B0(&StringLiteral_22386/*"overwriteEnemyInfoNames"*/);
    byte_4A5B659 = 1;
  }
  v3 = (System_String_array *)sub_1B88658(string___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptStringArrayParam(this, (System_String_o *)StringLiteral_22386/*"overwriteEnemyInfoNames"*/, v3, v4);
}


int32_t __fastcall QuestPhaseEntity__GetEquipAddId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5B657 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_19045/*"equipAddId"*/);
    byte_4A5B657 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19045/*"equipAddId"*/, 0, v2);
}


int32_t __fastcall QuestPhaseEntity__GetFinishEffectId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5B637 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_19435/*"finishEffectId"*/);
    byte_4A5B637 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19435/*"finishEffectId"*/, -1, v2);
}


int32_t __fastcall QuestPhaseEntity__GetFormationBgmId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5B65E & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_19548/*"formationBgmId"*/);
    byte_4A5B65E = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19548/*"formationBgmId"*/, -1, v2);
}


float __fastcall QuestPhaseEntity__GetFormationSubBgmFadeInTime(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5B660 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_19549/*"formationSubBgmFadeInTime"*/);
    byte_4A5B660 = 1;
  }
  return (float)QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19549/*"formationSubBgmFadeInTime"*/, 0, v2) / 1000.0;
}


int32_t __fastcall QuestPhaseEntity__GetFormationSubBgmId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5B65F & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_19550/*"formationSubBgmId"*/);
    byte_4A5B65F = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19550/*"formationSubBgmId"*/, -1, v2);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetGimmickAnimTypeArray(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5B635 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_19817/*"gimmickAnimType"*/);
    byte_4A5B635 = 1;
  }
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_19817/*"gimmickAnimType"*/, 0LL, v2);
}


int32_t __fastcall QuestPhaseEntity__GetGimmickId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5B62E & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_19818/*"gimmickId"*/);
    byte_4A5B62E = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19818/*"gimmickId"*/, -1, v2);
}


System_Object_array *__fastcall QuestPhaseEntity__GetGimmickResultVoiceArray(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5B634 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_22909/*"resultVoice"*/);
    byte_4A5B634 = 1;
  }
  return QuestPhaseEntity__getScriptObjArrayParam(this, (System_String_o *)StringLiteral_22909/*"resultVoice"*/, 0LL, v2);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetGimmickSkillIdArray(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  System_Int32_array *v3; // x2
  const MethodInfo *v4; // x3

  if ( (byte_4A5B631 & 1) == 0 )
  {
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&StringLiteral_22823/*"reelSkill"*/);
    byte_4A5B631 = 1;
  }
  v3 = (System_Int32_array *)sub_1B88658(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_22823/*"reelSkill"*/, v3, v4);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetGimmickSkillRateArray(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  System_Int32_array *v3; // x2
  const MethodInfo *v4; // x3

  if ( (byte_4A5B632 & 1) == 0 )
  {
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&StringLiteral_22822/*"reelRate"*/);
    byte_4A5B632 = 1;
  }
  v3 = (System_Int32_array *)sub_1B88658(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_22822/*"reelRate"*/, v3, v4);
}


System_String_array *__fastcall QuestPhaseEntity__GetGimmickStartVoiceArray(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5B633 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_23499/*"startVoice"*/);
    byte_4A5B633 = 1;
  }
  return QuestPhaseEntity__getScriptStringArrayParam(this, (System_String_o *)StringLiteral_23499/*"startVoice"*/, 0LL, v2);
}


int32_t __fastcall QuestPhaseEntity__GetGimmickSvtId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5B62F & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_19819/*"gimmickSvtId"*/);
    byte_4A5B62F = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19819/*"gimmickSvtId"*/, -1, v2);
}


int32_t __fastcall QuestPhaseEntity__GetIconItemNumberDispType(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5B676 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_20081/*"iconItemNumberDispType"*/);
    byte_4A5B676 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20081/*"iconItemNumberDispType"*/, 0, v2);
}


float __fastcall QuestPhaseEntity__GetIncomingCallDispTime(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5B66A & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_20616/*"incomingCallDispTime"*/);
    byte_4A5B66A = 1;
  }
  return (float)QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20616/*"incomingCallDispTime"*/, 500, v2) / 1000.0;
}


System_String_o *__fastcall QuestPhaseEntity__GetIncomingCallMessage(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5B669 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_20617/*"incomingCallMessage"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5B669 = 1;
  }
  return QuestPhaseEntity__getScriptStr(
           this,
           (System_String_o *)StringLiteral_20617/*"incomingCallMessage"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


System_String_o *__fastcall QuestPhaseEntity__GetIncomingCallTitle(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5B668 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_20618/*"incomingCallTitle"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5B668 = 1;
  }
  return QuestPhaseEntity__getScriptStr(
           this,
           (System_String_o *)StringLiteral_20618/*"incomingCallTitle"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


System_String_o *__fastcall QuestPhaseEntity__GetMapModelEntryAnimationName(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5B664 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_1489/*"3dMapEntryAnimName"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5B664 = 1;
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

  if ( (byte_4A5B640 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_21312/*"masterSkillDelay"*/);
    byte_4A5B640 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21312/*"masterSkillDelay"*/, 0, v2);
}


System_String_o *__fastcall QuestPhaseEntity__GetMasterSkillDelayInfo(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5B641 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_21313/*"masterSkillDelayInfo"*/);
    byte_4A5B641 = 1;
  }
  return QuestPhaseEntity__getScriptStr(this, (System_String_o *)StringLiteral_21313/*"masterSkillDelayInfo"*/, 0LL, v2);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetMoveSceneInfo(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  System_Int32_array *v3; // x2
  const MethodInfo *v4; // x3

  if ( (byte_4A5B66C & 1) == 0 )
  {
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&StringLiteral_21520/*"moveSceneInfo"*/);
    byte_4A5B66C = 1;
  }
  v3 = (System_Int32_array *)sub_1B88658(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_21520/*"moveSceneInfo"*/, v3, v4);
}


int32_t __fastcall QuestPhaseEntity__GetMovieAfterCrossFadeStartFrame(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5B629 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_21525/*"movieAfterCrossFadeStartFrame"*/);
    byte_4A5B629 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21525/*"movieAfterCrossFadeStartFrame"*/, 0, v2);
}


int32_t __fastcall QuestPhaseEntity__GetMovieAfterCrossFadeTime(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5B628 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_21526/*"movieAfterCrossFadeTime"*/);
    byte_4A5B628 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21526/*"movieAfterCrossFadeTime"*/, 0, v2);
}


int32_t __fastcall QuestPhaseEntity__GetNextSceneId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5B644 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_22050/*"nextSceneId"*/);
    byte_4A5B644 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22050/*"nextSceneId"*/, 0, v2);
}


System_String_array *__fastcall QuestPhaseEntity__GetNextSceneParam(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  System_String_array *result; // x0

  if ( (byte_4A5B645 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_22051/*"nextSceneParam"*/);
    byte_4A5B645 = 1;
  }
  result = (System_String_array *)QuestPhaseEntity__getScriptStr(this, (System_String_o *)StringLiteral_22051/*"nextSceneParam"*/, 0LL, v2);
  if ( result )
    return System_String__Split((System_String_o *)result, 0x2Cu, 0, 0LL);
  return result;
}


int32_t __fastcall QuestPhaseEntity__GetNotDispEquipSkillChargeTurn(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5B675 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_22141/*"notDispEquipSkillChargeTurn"*/);
    byte_4A5B675 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22141/*"notDispEquipSkillChargeTurn"*/, 0, v2);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetNotHavingQuests(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  System_Int32_array *v3; // x2
  const MethodInfo *v4; // x3

  if ( (byte_4A5B647 & 1) == 0 )
  {
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&StringLiteral_22145/*"notHavingQuest"*/);
    byte_4A5B647 = 1;
  }
  v3 = (System_Int32_array *)sub_1B88658(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_22145/*"notHavingQuest"*/, v3, v4);
}


System_Collections_Generic_Dictionary_int__int____o *__fastcall QuestPhaseEntity__GetNpcAiInfo(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x21
  System_Collections_Generic_Dictionary_int__object__o *v4; // x22
  struct System_Collections_Generic_Dictionary_string__object__o *v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  System_Collections_Generic_Dictionary_int__int____o **v9; // x20
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  Il2CppObject *v11; // x22
  __int64 methodPtr_low; // x10
  const MethodInfo *v13; // x2
  System_Action_object__o *v15; // x19
  Il2CppObject *obj; // [xsp+0h] [xbp-40h] BYREF
  Il2CppObject *value; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A5B655 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_object__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_int__int____TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_object__ForEach__);
    sub_1B885B0(&System_Collections_Generic_List_object__TypeInfo);
    sub_1B885B0(&Method_QuestPhaseEntity___c__DisplayClass113_0__GetNpcAiInfo_b__0__);
    sub_1B885B0(&QuestPhaseEntity___c__DisplayClass113_0_TypeInfo);
    sub_1B885B0(&StringLiteral_16718/*"aiMultiNpc"*/);
    sub_1B885B0(&StringLiteral_16719/*"aiNpc"*/);
    byte_4A5B655 = 1;
  }
  obj = 0LL;
  value = 0LL;
  v3 = sub_1B887FC(QuestPhaseEntity___c__DisplayClass113_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  v4 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B887FC(System_Collections_Generic_Dictionary_int__int____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v4,
    (const MethodInfo_316CF84 *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  if ( !v3 )
    goto LABEL_14;
  *(_QWORD *)(v3 + 16) = v4;
  v9 = (System_Collections_Generic_Dictionary_int__int____o **)(v3 + 16);
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 16), (int32_t)v4, v7, v8);
  script = this->fields.script;
  if ( !script )
    return *v9;
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)script,
         (Il2CppObject *)StringLiteral_16718/*"aiMultiNpc"*/,
         &value,
         (const MethodInfo_31C89D4 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    v11 = value;
    if ( value )
    {
      methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(value->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
        && (System_Collections_Generic_List_object__c *)value->klass->_2.typeHierarchy[methodPtr_low - 1] == System_Collections_Generic_List_object__TypeInfo )
      {
        v15 = (System_Action_object__o *)sub_1B887FC(System_Action_object__TypeInfo);
        System_Action_object____ctor(
          v15,
          (Il2CppObject *)v3,
          Method_QuestPhaseEntity___c__DisplayClass113_0__GetNpcAiInfo_b__0__,
          0LL);
        System_Collections_Generic_List_object___ForEach(
          (System_Collections_Generic_List_object__o *)v11,
          (System_Action_T__o *)v15,
          (const MethodInfo_34FE274 *)Method_System_Collections_Generic_List_object__ForEach__);
        return *v9;
      }
    }
  }
  v5 = this->fields.script;
  if ( !v5 )
LABEL_14:
    sub_1B8880C(v5, v6);
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)v5,
         (Il2CppObject *)StringLiteral_16719/*"aiNpc"*/,
         &obj,
         (const MethodInfo_31C89D4 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    QuestPhaseEntity__SetNpcAiInfo((System_Collections_Generic_IDictionary_int__int____o *)*v9, obj, v13);
  }
  return *v9;
}


int32_t __fastcall QuestPhaseEntity__GetOverWriteMasterImageId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5B626 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_21302/*"masterImageId"*/);
    byte_4A5B626 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21302/*"masterImageId"*/, 0, v2);
}


int32_t __fastcall QuestPhaseEntity__GetOverwriteCommandSpellContinue(
        QuestPhaseEntity_o *this,
        int32_t def,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4A5B64F & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_22378/*"overwriteCommandSpellContinue"*/);
    byte_4A5B64F = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22378/*"overwriteCommandSpellContinue"*/, def, v3);
}


int32_t __fastcall QuestPhaseEntity__GetOverwriteCommandSpellIcon(
        QuestPhaseEntity_o *this,
        int32_t genderType,
        System_Int32_array *defVal,
        const MethodInfo *method)
{
  System_Int32_array *ScriptIntArrayParam; // x0
  __int64 v8; // x1

  if ( (byte_4A5B662 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_22379/*"overwriteCommandSpellIcons"*/);
    byte_4A5B662 = 1;
  }
  ScriptIntArrayParam = QuestPhaseEntity__getScriptIntArrayParam(
                          this,
                          (System_String_o *)StringLiteral_22379/*"overwriteCommandSpellIcons"*/,
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
    sub_1B88814(ScriptIntArrayParam, v8);
  }
  return (int)ScriptIntArrayParam;
}


System_Collections_Generic_Dictionary_string__object__o *__fastcall QuestPhaseEntity__GetOverwriteEquipSkills(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_Collections_Generic_Dictionary_string__object__o *result; // x0
  __int64 methodPtr_low; // x9
  QuestPhaseEntity_o *v6; // x0
  const MethodInfo *v7; // x1

  if ( (byte_4A5B60B & 1) == 0 )
  {
    sub_1B885B0(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1B885B0(&StringLiteral_22389/*"overwriteEquipSkills"*/);
    byte_4A5B60B = 1;
  }
  result = (System_Collections_Generic_Dictionary_string__object__o *)QuestPhaseEntity__getScriptObj(
                                                                        this,
                                                                        (System_String_o *)StringLiteral_22389/*"overwriteEquipSkills"*/,
                                                                        v2);
  if ( result )
  {
    methodPtr_low = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (System_Collections_Generic_Dictionary_string__object__c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
    {
      sub_1B88ACC(result);
      return QuestPhaseEntity__GetAddEquipSkills(v6, v7);
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
  System_Int32_array *ScriptIntArrayParam; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  System_Int32_array *v14; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  const MethodInfo *v17; // x3
  System_Int32_array *v18; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  int32_t v22; // w2
  int32_t v23; // w3

  if ( (byte_4A5B63C & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_22393/*"overwriteLimitCountSvtIds"*/);
    sub_1B885B0(&StringLiteral_22394/*"overwriteLimitCounts"*/);
    sub_1B885B0(&StringLiteral_22392/*"overwriteLimitCountIconIds"*/);
    byte_4A5B63C = 1;
  }
  ScriptIntArrayParam = QuestPhaseEntity__getScriptIntArrayParam(
                          this,
                          (System_String_o *)StringLiteral_22393/*"overwriteLimitCountSvtIds"*/,
                          0LL,
                          (const MethodInfo *)overwriteLimitCountIconIds);
  *overwriteLimitCountSvtIds = ScriptIntArrayParam;
  sub_1B88554((ServantStatusBattleListViewItem_o *)overwriteLimitCountSvtIds, (int32_t)ScriptIntArrayParam, v10, v11);
  if ( *overwriteLimitCountSvtIds )
  {
    v14 = QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_22394/*"overwriteLimitCounts"*/, 0LL, v13);
    *overwriteLimitCounts = v14;
    sub_1B88554((ServantStatusBattleListViewItem_o *)overwriteLimitCounts, (int32_t)v14, v15, v16);
    v18 = QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_22392/*"overwriteLimitCountIconIds"*/, 0LL, v17);
    *overwriteLimitCountIconIds = v18;
    sub_1B88554((ServantStatusBattleListViewItem_o *)overwriteLimitCountIconIds, (int32_t)v18, v19, v20);
    return *overwriteLimitCounts != 0LL;
  }
  else
  {
    *overwriteLimitCounts = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)overwriteLimitCounts, 0, v12, (int32_t)v13);
    *overwriteLimitCountIconIds = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)overwriteLimitCountIconIds, 0, v22, v23);
    return 0;
  }
}


System_Int32_array *__fastcall QuestPhaseEntity__GetOverwriteResultBgmCondIds(
        QuestPhaseEntity_o *this,
        System_Int32_array *defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4A5B60F & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_22402/*"overwriteResultBgmCondIds"*/);
    byte_4A5B60F = 1;
  }
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_22402/*"overwriteResultBgmCondIds"*/, defVal, v3);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetOverwriteResultBgmIds(
        QuestPhaseEntity_o *this,
        System_Int32_array *defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4A5B60E & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_22403/*"overwriteResultBgmIds"*/);
    byte_4A5B60E = 1;
  }
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_22403/*"overwriteResultBgmIds"*/, defVal, v3);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetPrioredIndividuality(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  System_Int32_array *result; // x0
  _QWORD *v4; // x19
  __int64 v5; // x8
  __int64 v6; // x0
  __int64 v7; // x0

  if ( (byte_4A5B5FF & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Array_Empty_int___);
    byte_4A5B5FF = 1;
  }
  result = QuestPhaseEntity__GetPrioredIndividualityLocal(this, method);
  if ( !result )
  {
    v4 = Method_System_Array_Empty_int___;
    v5 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v5 )
    {
      sub_1BDA4E8(Method_System_Array_Empty_int___);
      v5 = v4[7];
    }
    v6 = *(_QWORD *)(v5 + 16);
    if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
      v6 = sub_1BDA48C(v6);
    if ( !*(_DWORD *)(v6 + 224) )
      j_il2cpp_runtime_class_init_0(v6);
    v7 = *(_QWORD *)(v4[7] + 16LL);
    if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
      v7 = sub_1BDA48C(v7);
    return **(System_Int32_array ***)(v7 + 184);
  }
  return result;
}


System_Int32_array *__fastcall QuestPhaseEntity__GetPrioredIndividualityLocal(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
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

  if ( (byte_4A5B600 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_QuestBehaviorMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_QuestPhaseIndividualityMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    byte_4A5B600 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_QuestBehaviorMaster___);
  UniqueId = (System_Int32_array *)QuestPhaseEntity__GetUniqueId(this, v4);
  if ( !Master_object )
    goto LABEL_15;
  result = QuestBehaviorMaster__GetBattleIndividuality(
             (QuestBehaviorMaster_o *)Master_object,
             (int64_t)UniqueId,
             0LL,
             v7);
  if ( !result )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    UniqueId = (System_Int32_array *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_QuestPhaseIndividualityMaster___);
    if ( !UniqueId )
      goto LABEL_15;
    if ( QuestPhaseIndividualityMaster__TryGetEntity(
           (QuestPhaseIndividualityMaster_o *)UniqueId,
           &entity,
           this->fields.questId,
           this->fields.phase,
           0LL) )
    {
      v10 = entity;
      UniqueId = QuestPhaseEntity__GetBgIndividuality(this, v9);
      if ( v10 )
        return QuestPhaseIndividualityEntity__GetAddAndDelAfterIndividuality(v10, UniqueId, v11);
LABEL_15:
      sub_1B8880C(UniqueId, v6);
    }
    return this->fields.individuality;
  }
  return result;
}


int32_t __fastcall QuestPhaseEntity__GetPriorityBattleBgId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x20
  const MethodInfo *v4; // x1
  int64_t UniqueId; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3

  if ( (byte_4A5B602 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_QuestBehaviorMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    byte_4A5B602 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_QuestBehaviorMaster___);
  UniqueId = QuestPhaseEntity__GetUniqueId(this, v4);
  if ( !Master_object )
    sub_1B8880C(UniqueId, v6);
  return QuestBehaviorMaster__GetBattleBg((QuestBehaviorMaster_o *)Master_object, UniqueId, this->fields.battleBgId, v7);
}


int32_t __fastcall QuestPhaseEntity__GetPriorityBattleBgType(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x20
  const MethodInfo *v4; // x1
  int64_t UniqueId; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3

  if ( (byte_4A5B603 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_QuestBehaviorMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    byte_4A5B603 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_QuestBehaviorMaster___);
  UniqueId = QuestPhaseEntity__GetUniqueId(this, v4);
  if ( !Master_object )
    sub_1B8880C(UniqueId, v6);
  return QuestBehaviorMaster__GetBattleBgType(
           (QuestBehaviorMaster_o *)Master_object,
           UniqueId,
           this->fields.battleBgType,
           v7);
}


int32_t __fastcall QuestPhaseEntity__GetProgressAfterMovie(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5B624 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_22620/*"progressAfterMovie"*/);
    byte_4A5B624 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22620/*"progressAfterMovie"*/, 0, v2);
}


int32_t __fastcall QuestPhaseEntity__GetQuestPhaseSelectRoute(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t ScriptIntParam; // w0
  int32_t v5; // w19
  Il2CppObject *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4A5B619 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_1B885B0(&StringLiteral_22516/*"phaseRouteSelect"*/);
    byte_4A5B619 = 1;
  }
  ScriptIntParam = QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22516/*"phaseRouteSelect"*/, 0, v2);
  if ( ScriptIntParam < 1 )
    return 0;
  v5 = ScriptIntParam;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v7);
  if ( clsQuestCheck__CheckQuestPlayableNow((clsQuestCheck_o *)Instance, v5, 0LL) )
    return v5;
  else
    return 0;
}


System_Int32_array *__fastcall QuestPhaseEntity__GetReelIconIdArray(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  System_Int32_array *v3; // x2
  const MethodInfo *v4; // x3

  if ( (byte_4A5B630 & 1) == 0 )
  {
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&StringLiteral_22821/*"reelIcon"*/);
    byte_4A5B630 = 1;
  }
  v3 = (System_Int32_array *)sub_1B88658(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_22821/*"reelIcon"*/, v3, v4);
}


int32_t __fastcall QuestPhaseEntity__GetReferToQuestPhase(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5B67C & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_22827/*"referToQuestPhase"*/);
    byte_4A5B67C = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22827/*"referToQuestPhase"*/, 0, v2);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetSelectableQuests(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5B618 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_22693/*"questSelect"*/);
    byte_4A5B618 = 1;
  }
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_22693/*"questSelect"*/, 0LL, v2);
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
      sub_1B88814(SelectableQuests, v8);
    return SelectableQuests->m_Items[selectIndex + 1];
  }
  return result;
}


System_Int32_array *__fastcall QuestPhaseEntity__GetShadowOffSvtIds(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  System_Int32_array *v3; // x2
  const MethodInfo *v4; // x3

  if ( (byte_4A5B63F & 1) == 0 )
  {
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&StringLiteral_23247/*"shadowOffSvtIds"*/);
    byte_4A5B63F = 1;
  }
  v3 = (System_Int32_array *)sub_1B88658(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_23247/*"shadowOffSvtIds"*/, v3, v4);
}


int32_t __fastcall QuestPhaseEntity__GetSingleForceSvtId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5B63D & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_23333/*"singleForceSvtId"*/);
    byte_4A5B63D = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_23333/*"singleForceSvtId"*/, 0, v2);
}


int32_t __fastcall QuestPhaseEntity__GetStartBattleSoundMode(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5B67A & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_12950/*"StartBattleSoundMode"*/);
    byte_4A5B67A = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_12950/*"StartBattleSoundMode"*/, 0, v2);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetStartMovieWave(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5B625 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_21530/*"movieWave"*/);
    byte_4A5B625 = 1;
  }
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_21530/*"movieWave"*/, 0LL, v2);
}


int32_t __fastcall QuestPhaseEntity__GetStartScreenEffect(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5B679 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_12949/*"StartBattleScreenEffect"*/);
    byte_4A5B679 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_12949/*"StartBattleScreenEffect"*/, 0, v2);
}


int32_t __fastcall QuestPhaseEntity__GetSupportInitDeckIndex(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5B650 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_19130/*"eventDeckIndex"*/);
    byte_4A5B650 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19130/*"eventDeckIndex"*/, 0, v2);
}


int32_t __fastcall QuestPhaseEntity__GetTemporaryCommandSpell(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5B64D & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_23886/*"temporaryCommandSpell"*/);
    byte_4A5B64D = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_23886/*"temporaryCommandSpell"*/, -1, v2);
}


int64_t __fastcall QuestPhaseEntity__GetUniqueId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  int32_t phase; // w19
  int32_t questId; // w20

  if ( (byte_4A5B5FE & 1) == 0 )
  {
    sub_1B885B0(&BattleDataDefine_TypeInfo);
    byte_4A5B5FE = 1;
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

  if ( (byte_4A5B63E & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_24356/*"useEventDeckNo"*/);
    byte_4A5B63E = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_24356/*"useEventDeckNo"*/, 1, v2);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetVoiceOffPlayerSvtIdArray(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A5B661 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_24588/*"voiceOffMySvtIds"*/);
    byte_4A5B661 = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_24588/*"voiceOffMySvtIds"*/, 0LL);
}


System_String_o *__fastcall QuestPhaseEntity__GetWarBoardStartMovieName(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5B65B & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_15593/*"WarBoardStartMovieName"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5B65B = 1;
  }
  return QuestPhaseEntity__getScriptStr(
           this,
           (System_String_o *)StringLiteral_15593/*"WarBoardStartMovieName"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


System_String_array *__fastcall QuestPhaseEntity__GetWaveStartMovie(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5B623 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_24668/*"waveStartMovie"*/);
    byte_4A5B623 = 1;
  }
  return QuestPhaseEntity__getScriptStringArrayParam(this, (System_String_o *)StringLiteral_24668/*"waveStartMovie"*/, 0LL, v2);
}


int32_t __fastcall QuestPhaseEntity__GetWinBgmOffFlg(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5B638 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_19000/*"endBgmOff"*/);
    byte_4A5B638 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19000/*"endBgmOff"*/, 0, v2);
}


int32_t __fastcall QuestPhaseEntity__GetWinVoiceOffFlg(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5B636 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_19014/*"endVoiceOff"*/);
    byte_4A5B636 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19014/*"endVoiceOff"*/, 0, v2);
}


bool __fastcall QuestPhaseEntity__HasReleaseFocusQuestBoardKey(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B672 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_20811/*"isReleaseFocus"*/);
    byte_4A5B672 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_20811/*"isReleaseFocus"*/, 0LL);
}


bool __fastcall QuestPhaseEntity__IsActiveAssistSkill(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  System_Int32_array *v3; // x0
  const MethodInfo *v4; // x3
  System_Int32_array *ScriptIntArrayParam; // x0
  __int64 v6; // x1

  if ( (byte_4A5B649 & 1) == 0 )
  {
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&StringLiteral_16940/*"assistIds"*/);
    byte_4A5B649 = 1;
  }
  v3 = (System_Int32_array *)sub_1B88658(int___TypeInfo, 0LL);
  ScriptIntArrayParam = QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_16940/*"assistIds"*/, v3, v4);
  if ( !ScriptIntArrayParam )
    sub_1B8880C(0LL, v6);
  return ScriptIntArrayParam->max_length != 0;
}


bool __fastcall QuestPhaseEntity__IsAreaImporveQuest(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4A5B65C & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_16886/*"areaImprovementQuest"*/);
    byte_4A5B65C = 1;
  }
  return QuestPhaseEntity__getScriptObj(this, (System_String_o *)StringLiteral_16886/*"areaImprovementQuest"*/, v2) != 0LL;
}


bool __fastcall QuestPhaseEntity__IsContinueWaveRestart(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5B670 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_18247/*"continueWaveRestart"*/);
    byte_4A5B670 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_18247/*"continueWaveRestart"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__IsFadeOutMainBgmBeforeBattle(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B67D & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_19368/*"fadeOutMainBgmBeforeBattle"*/);
    byte_4A5B67D = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_19368/*"fadeOutMainBgmBeforeBattle"*/, 0LL);
}


bool __fastcall QuestPhaseEntity__IsHideAssistConfButton(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5B64C & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_19915/*"hideAssistConfButton"*/);
    byte_4A5B64C = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19915/*"hideAssistConfButton"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__IsHideBattlePointGauge(
        QuestPhaseEntity_o *this,
        int32_t battlePointId,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *IntArray; // x0

  if ( (byte_4A5B682 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1B885B0(&StringLiteral_7243/*"HideBattlePointGauge"*/);
    byte_4A5B682 = 1;
  }
  IntArray = (System_Collections_Generic_IEnumerable_TSource__o *)EntityScriptUtil__GetIntArray(
                                                                    this->fields.script,
                                                                    (System_String_o *)StringLiteral_7243/*"HideBattlePointGauge"*/,
                                                                    0LL,
                                                                    0LL);
  if ( IntArray )
    LOBYTE(IntArray) = System_Linq_Enumerable__Contains_int_(
                         IntArray,
                         battlePointId,
                         (const MethodInfo_2E99A14 *)Method_System_Linq_Enumerable_Contains_int___);
  return (char)IntArray;
}


bool __fastcall QuestPhaseEntity__IsIgnoreBattleLoseDialog(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B61D & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_20225/*"ignoreBattleLoseDialog"*/);
    byte_4A5B61D = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_20225/*"ignoreBattleLoseDialog"*/, 0LL);
}


bool __fastcall QuestPhaseEntity__IsIgnoreBattlePointUp(
        QuestPhaseEntity_o *this,
        int32_t battlePointId,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *IntArray; // x0

  if ( (byte_4A5B680 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1B885B0(&StringLiteral_7458/*"IgnoreBattlePointUp"*/);
    byte_4A5B680 = 1;
  }
  IntArray = (System_Collections_Generic_IEnumerable_TSource__o *)EntityScriptUtil__GetIntArray(
                                                                    this->fields.script,
                                                                    (System_String_o *)StringLiteral_7458/*"IgnoreBattlePointUp"*/,
                                                                    0LL,
                                                                    0LL);
  if ( IntArray )
    LOBYTE(IntArray) = System_Linq_Enumerable__Contains_int_(
                         IntArray,
                         battlePointId,
                         (const MethodInfo_2E99A14 *)Method_System_Linq_Enumerable_Contains_int___);
  return (char)IntArray;
}


bool __fastcall QuestPhaseEntity__IsInterruptionQuest(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5B678 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_20702/*"interruptibleQuest"*/);
    byte_4A5B678 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20702/*"interruptibleQuest"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__IsInvisibleConnectAndLoad(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5B643 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_20744/*"invisibleConnectAndLoad"*/);
    byte_4A5B643 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20744/*"invisibleConnectAndLoad"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__IsKeepSubBgmAfterBattleResult(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B639 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_20977/*"keepSubBgmUntilBattleResult"*/);
    byte_4A5B639 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_20977/*"keepSubBgmUntilBattleResult"*/, 0LL);
}


bool __fastcall QuestPhaseEntity__IsMatchIndividuality(
        QuestPhaseEntity_o *this,
        System_Int32_array *individualitys,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_T__o *PrioredIndividuality; // x21
  System_Collections_Generic_HashSet_int__o *v6; // x20
  System_Predicate_int__o *All_int; // x0
  __int64 v8; // x1
  System_Predicate_T__o *v9; // x21

  if ( (byte_4A5B642 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Array_FindAll_int___);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_int___ctor___76016464);
    sub_1B885B0(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1B885B0(&System_Predicate_int__TypeInfo);
    byte_4A5B642 = 1;
  }
  PrioredIndividuality = (System_Collections_Generic_IEnumerable_T__o *)QuestPhaseEntity__GetPrioredIndividuality(
                                                                          this,
                                                                          (const MethodInfo *)individualitys);
  v6 = (System_Collections_Generic_HashSet_int__o *)sub_1B887FC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor_54209644(
    v6,
    PrioredIndividuality,
    (const MethodInfo_33B2C6C *)Method_System_Collections_Generic_HashSet_int___ctor___76016464);
  All_int = (System_Predicate_int__o *)sub_1B887FC(System_Predicate_int__TypeInfo);
  if ( !v6
    || (v9 = (System_Predicate_T__o *)All_int,
        System_Predicate_int____ctor(All_int, (Il2CppObject *)v6, (intptr_t)v6->klass->vtable._9_CopyTo.methodPtr, 0LL),
        (All_int = (System_Predicate_int__o *)System_Array__FindAll_int_(
                                                individualitys,
                                                v9,
                                                (const MethodInfo_2F7878C *)Method_System_Array_FindAll_int___)) == 0LL) )
  {
    sub_1B8880C(All_int, v8);
  }
  return All_int->fields.m_target != 0LL;
}


bool __fastcall QuestPhaseEntity__IsNonStopEndBgm(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5B61A & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_22110/*"nonStopEndBgm"*/);
    byte_4A5B61A = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22110/*"nonStopEndBgm"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__IsNotClassBoard(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5B66D & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_22139/*"notClassBoard"*/);
    byte_4A5B66D = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22139/*"notClassBoard"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__IsNotResetResultDispFlag(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5B627 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_22147/*"notResetResultDispFlag"*/);
    byte_4A5B627 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22147/*"notResetResultDispFlag"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__IsNotUseRestrictionDialog(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5B66E & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_22148/*"notUseRestrictionDialog"*/);
    byte_4A5B66E = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22148/*"notUseRestrictionDialog"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__IsPlayScriptBeforeForWarBoard(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5B648 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_20815/*"isScriptPlayForWarBoard"*/);
    byte_4A5B648 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20815/*"isScriptPlayForWarBoard"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__IsReleaseFocusQuestBoard(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5B673 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_20811/*"isReleaseFocus"*/);
    byte_4A5B673 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20811/*"isReleaseFocus"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__IsRepeatReward(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5B66B & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_22872/*"repeatReward"*/);
    byte_4A5B66B = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22872/*"repeatReward"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__IsReverseMyDeckSvtPosition(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B67E & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_22921/*"reverseMyDeckSvtPosition"*/);
    byte_4A5B67E = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_22921/*"reverseMyDeckSvtPosition"*/, 0LL);
}


bool __fastcall QuestPhaseEntity__IsSkipBattleFinish(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5B665 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_23354/*"skipBattleFinish"*/);
    byte_4A5B665 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_23354/*"skipBattleFinish"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__IsUseTemporaryCommandSpell(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5B64E & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_24362/*"useTemporaryCommandSpell"*/);
    byte_4A5B64E = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_24362/*"useTemporaryCommandSpell"*/, -1, v2) == 1;
}


bool __fastcall QuestPhaseEntity__IsWaveCountInfinity(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5B663 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_24665/*"waveCountInfinity"*/);
    byte_4A5B663 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_24665/*"waveCountInfinity"*/, -1, v2) != -1;
}


bool __fastcall QuestPhaseEntity__IsWaveSetup(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5B66F & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_24667/*"waveSetup"*/);
    byte_4A5B66F = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_24667/*"waveSetup"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__PlayHappinessCounterEffect(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B681 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_10652/*"PlayHappinessCounterEffect"*/);
    byte_4A5B681 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_10652/*"PlayHappinessCounterEffect"*/, 0LL);
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
  __int64 methodPtr_low; // x10
  System_Collections_Generic_Dictionary_string__object__c *v6; // x9
  System_Collections_Generic_Dictionary_string__object__o *v7; // x21
  int Value_long; // w20
  Il2CppObject *Value_object; // x0
  System_Collections_Generic_List_object__o *v10; // x21
  QuestPhaseEntity___c_c *v11; // x0
  System_Converter_object__int__o *_9__114_0; // x22
  Il2CppObject *v13; // x23
  struct QuestPhaseEntity___c_StaticFields *static_fields; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  System_Collections_Generic_List_int__o *v17; // x0
  __int64 v18; // x1
  System_Collections_Generic_IDictionary_int__int____c *klass; // x8
  System_Collections_Generic_List_int__o *v20; // x21
  __int64 v21; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0

  if ( (byte_4A5B656 & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_GetValue_long___);
    sub_1B885B0(&Method_BasicHelper_GetValue_List_object____);
    sub_1B885B0(&System_Converter_object__int__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IDictionary_int__int____TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_object__ConvertAll_int___);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1B885B0(&Method_QuestPhaseEntity___c__SetNpcAiInfo_b__114_0__);
    sub_1B885B0(&QuestPhaseEntity___c_TypeInfo);
    sub_1B885B0(&StringLiteral_16717/*"aiIds"*/);
    sub_1B885B0(&StringLiteral_22164/*"npcId"*/);
    byte_4A5B656 = 1;
  }
  if ( obj )
  {
    methodPtr_low = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(obj->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low )
    {
      v6 = (System_Collections_Generic_Dictionary_string__object__c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1];
      v7 = v6 == System_Collections_Generic_Dictionary_string__object__TypeInfo
         ? (System_Collections_Generic_Dictionary_string__object__o *)obj
         : 0LL;
      if ( v6 == System_Collections_Generic_Dictionary_string__object__TypeInfo )
      {
        Value_long = BasicHelper__GetValue_long_(
                       v7,
                       (System_String_o *)StringLiteral_22164/*"npcId"*/,
                       0LL,
                       (const MethodInfo_2E6DB7C *)Method_BasicHelper_GetValue_long___);
        Value_object = BasicHelper__GetValue_object_(
                         v7,
                         (System_String_o *)StringLiteral_16717/*"aiIds"*/,
                         0LL,
                         (const MethodInfo_2E6DC68 *)Method_BasicHelper_GetValue_List_object____);
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
            _9__114_0 = v11->static_fields->__9__114_0;
            if ( !_9__114_0 )
            {
              if ( !v11->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v11);
                v11 = QuestPhaseEntity___c_TypeInfo;
              }
              v13 = (Il2CppObject *)v11->static_fields->__9;
              _9__114_0 = (System_Converter_object__int__o *)sub_1B887FC(System_Converter_object__int__TypeInfo);
              System_Converter_object__int____ctor(
                _9__114_0,
                v13,
                Method_QuestPhaseEntity___c__SetNpcAiInfo_b__114_0__,
                0LL);
              static_fields = QuestPhaseEntity___c_TypeInfo->static_fields;
              static_fields->__9__114_0 = _9__114_0;
              sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__114_0, (int32_t)_9__114_0, v15, v16);
            }
            v17 = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_object___ConvertAll_int_(
                                                              v10,
                                                              (System_Converter_T__TOutput__o *)_9__114_0,
                                                              (const MethodInfo_2DB31F4 *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
            if ( !v17
              || (v17 = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_int___ToArray(
                                                                    v17,
                                                                    (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__),
                  !dicNpcAiId) )
            {
              sub_1B8880C(v17, v18);
            }
            klass = dicNpcAiId->klass;
            v20 = v17;
            v21 = *(unsigned __int16 *)(&dicNpcAiId->klass->_2.bitflags2 + 3);
            if ( *(_WORD *)(&dicNpcAiId->klass->_2.bitflags2 + 3) )
            {
              p_offset = &klass->_1.interfaceOffsets->offset;
              while ( *((System_Collections_Generic_IDictionary_int__int____c **)p_offset - 1) != System_Collections_Generic_IDictionary_int__int____TypeInfo )
              {
                --v21;
                p_offset += 4;
                if ( !v21 )
                  goto LABEL_24;
              }
              p_method = (__int64)&klass->vtable[*p_offset + 1].method;
            }
            else
            {
LABEL_24:
              p_method = sub_1BDA590(dicNpcAiId, System_Collections_Generic_IDictionary_int__int____TypeInfo, 1LL);
            }
            (*(void (__fastcall **)(System_Collections_Generic_IDictionary_int__int____o *, _QWORD, System_Collections_Generic_List_int__o *, _QWORD))p_method)(
              dicNpcAiId,
              (unsigned int)Value_long,
              v20,
              *(_QWORD *)(p_method + 8));
          }
        }
      }
    }
  }
}


int32_t __fastcall QuestPhaseEntity__getBattleBgId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  return this->fields.battleBgId;
}


int32_t __fastcall QuestPhaseEntity__getBattleBgTypeValue(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  return this->fields.battleBgType;
}


int32_t __fastcall QuestPhaseEntity__getBattleEffectId(
        QuestPhaseEntity_o *this,
        int32_t defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4A5B613 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_17106/*"battleEffectId"*/);
    byte_4A5B613 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_17106/*"battleEffectId"*/, defVal, v3);
}


int32_t __fastcall QuestPhaseEntity__getBattleFieldMotionId(
        QuestPhaseEntity_o *this,
        int32_t defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4A5B615 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_19404/*"fieldMotionId"*/);
    byte_4A5B615 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19404/*"fieldMotionId"*/, defVal, v3);
}


System_Int32_array *__fastcall QuestPhaseEntity__getBattleFieldMotionIds(
        QuestPhaseEntity_o *this,
        System_Int32_array *defVals,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  System_Int32_array *result; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  int32_t BattleFieldMotionId; // w20

  if ( (byte_4A5B616 & 1) == 0 )
  {
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&StringLiteral_19405/*"fieldMotionIds"*/);
    byte_4A5B616 = 1;
  }
  result = QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_19405/*"fieldMotionIds"*/, defVals, v3);
  if ( !result )
    goto LABEL_10;
  if ( *(_QWORD *)&result->max_length )
    return result;
  BattleFieldMotionId = QuestPhaseEntity__getBattleFieldMotionId(this, -1, v8);
  result = defVals;
  if ( BattleFieldMotionId == -1 )
    return result;
  result = (System_Int32_array *)sub_1B88658(int___TypeInfo, 1LL);
  if ( !result )
LABEL_10:
    sub_1B8880C(result, v7);
  if ( !result->max_length )
    sub_1B88814(result, v7);
  result->m_Items[1] = BattleFieldMotionId;
  return result;
}


int32_t __fastcall QuestPhaseEntity__getBreakOnBattleWinWaitMSec(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5B621 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_17445/*"breakOnBattleWinWaitMSec"*/);
    byte_4A5B621 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_17445/*"breakOnBattleWinWaitMSec"*/, 0, v2);
}


System_Int32_array *__fastcall QuestPhaseEntity__getEventGrounpIds(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  System_Int32_array *v3; // x2
  const MethodInfo *v4; // x3

  if ( (byte_4A5B617 & 1) == 0 )
  {
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&StringLiteral_19131/*"eventGroupId"*/);
    byte_4A5B617 = 1;
  }
  v3 = (System_Int32_array *)sub_1B88658(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_19131/*"eventGroupId"*/, v3, v4);
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

  if ( (byte_4A5B653 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_19932/*"hintLeftIndent"*/);
    byte_4A5B653 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19932/*"hintLeftIndent"*/, -1, v2);
}


System_String_o *__fastcall QuestPhaseEntity__getHintMessage(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5B652 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_19933/*"hintMessage"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5B652 = 1;
  }
  return QuestPhaseEntity__getScriptStr(
           this,
           (System_String_o *)StringLiteral_19933/*"hintMessage"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


System_String_o *__fastcall QuestPhaseEntity__getHintMessageTitle(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5B651 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_1/*""*/);
    sub_1B885B0(&StringLiteral_19935/*"hintTitle"*/);
    byte_4A5B651 = 1;
  }
  return QuestPhaseEntity__getScriptStr(
           this,
           (System_String_o *)StringLiteral_19935/*"hintTitle"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


int32_t __fastcall QuestPhaseEntity__getHintOpenType(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5B654 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_19934/*"hintOpenType"*/);
    byte_4A5B654 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19934/*"hintOpenType"*/, 0, v2);
}


int32_t __fastcall QuestPhaseEntity__getLeave(QuestPhaseEntity_o *this, int32_t defVal, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4A5B612 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_21066/*"leave"*/);
    byte_4A5B612 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21066/*"leave"*/, defVal, v3);
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


int32_t __fastcall QuestPhaseEntity__getResultBgmId(QuestPhaseEntity_o *this, int32_t defVal, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4A5B60D & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_22904/*"resultBgmId"*/);
    byte_4A5B60D = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22904/*"resultBgmId"*/, defVal, v3);
}


int32_t __fastcall QuestPhaseEntity__getResultEffectId(
        QuestPhaseEntity_o *this,
        int32_t defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4A5B611 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_22905/*"resultEffectId"*/);
    byte_4A5B611 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22905/*"resultEffectId"*/, defVal, v3);
}


System_Int32_array *__fastcall QuestPhaseEntity__getResultEnemyVoiceIds(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  System_Int32_array *v3; // x2
  const MethodInfo *v4; // x3

  if ( (byte_4A5B61B & 1) == 0 )
  {
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&StringLiteral_22906/*"resultEnemyVoiceIds"*/);
    byte_4A5B61B = 1;
  }
  v3 = (System_Int32_array *)sub_1B88658(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_22906/*"resultEnemyVoiceIds"*/, v3, v4);
}


System_Int32_array *__fastcall QuestPhaseEntity__getScriptIntArrayParam(
        QuestPhaseEntity_o *this,
        System_String_o *key,
        System_Int32_array *defVal,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ScriptObjListParam; // x0
  System_Collections_Generic_List_object__o *v8; // x19
  QuestPhaseEntity___c_c *v9; // x0
  System_Converter_object__int__o *_9__31_0; // x20
  Il2CppObject *v11; // x21
  struct QuestPhaseEntity___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  System_Collections_Generic_List_int__o *v15; // x0
  __int64 v16; // x1

  if ( (byte_4A5B605 & 1) == 0 )
  {
    sub_1B885B0(&System_Converter_object__int__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_object__ConvertAll_int___);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1B885B0(&Method_QuestPhaseEntity___c__getScriptIntArrayParam_b__31_0__);
    sub_1B885B0(&QuestPhaseEntity___c_TypeInfo);
    byte_4A5B605 = 1;
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
  _9__31_0 = v9->static_fields->__9__31_0;
  if ( !_9__31_0 )
  {
    if ( !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      v9 = QuestPhaseEntity___c_TypeInfo;
    }
    v11 = (Il2CppObject *)v9->static_fields->__9;
    _9__31_0 = (System_Converter_object__int__o *)sub_1B887FC(System_Converter_object__int__TypeInfo);
    System_Converter_object__int____ctor(
      _9__31_0,
      v11,
      Method_QuestPhaseEntity___c__getScriptIntArrayParam_b__31_0__,
      0LL);
    static_fields = QuestPhaseEntity___c_TypeInfo->static_fields;
    static_fields->__9__31_0 = _9__31_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__31_0, (int32_t)_9__31_0, v13, v14);
  }
  v15 = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_object___ConvertAll_int_(
                                                    v8,
                                                    (System_Converter_T__TOutput__o *)_9__31_0,
                                                    (const MethodInfo_2DB31F4 *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
  if ( !v15 )
    sub_1B8880C(0LL, v16);
  return System_Collections_Generic_List_int___ToArray(
           v15,
           (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  if ( (byte_4A5B604 & 1) == 0 )
  {
    sub_1B885B0(&long_TypeInfo);
    byte_4A5B604 = 1;
  }
  ScriptObj = QuestPhaseEntity__getScriptObj(this, key, *(const MethodInfo **)&defVal);
  if ( !ScriptObj )
    return v4;
  if ( ScriptObj->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(ScriptObj, long_TypeInfo, v8, v9);
  sub_1B88ACC(ScriptObj);
  return (unsigned int)QuestPhaseEntity__getScriptObj(v11, v12, v13);
}


Il2CppObject *__fastcall QuestPhaseEntity__getScriptObj(
        QuestPhaseEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  Il2CppObject *result; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5B609 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    byte_4A5B609 = 1;
  }
  result = (Il2CppObject *)this->fields.script;
  if ( result )
  {
    value = 0LL;
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)result,
           (Il2CppObject *)key,
           &value,
           (const MethodInfo_31C89D4 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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

  if ( (byte_4A5B607 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_object__ToArray__);
    byte_4A5B607 = 1;
  }
  ScriptObjListParam = QuestPhaseEntity__getScriptObjListParam(this, key, (const MethodInfo *)defVal);
  if ( ScriptObjListParam )
    return System_Collections_Generic_List_object___ToArray(
             ScriptObjListParam,
             (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_object__ToArray__);
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

  if ( (byte_4A5B608 & 1) == 0 )
  {
    sub_1B885B0(&System_Collections_Generic_List_object__TypeInfo);
    byte_4A5B608 = 1;
  }
  result = (System_Collections_Generic_List_object__o *)QuestPhaseEntity__getScriptObj(this, key, method);
  if ( result )
  {
    methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (System_Collections_Generic_List_object__c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != System_Collections_Generic_List_object__TypeInfo )
    {
      sub_1B88ACC(result);
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
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v8; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *v9; // x0
  Il2CppObject *Item; // x0
  QuestPhaseEntity_o *v12; // x0
  const MethodInfo *v13; // x1

  if ( (byte_4A5B60A & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1B885B0(&string_TypeInfo);
    byte_4A5B60A = 1;
  }
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)key,
          (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return defVal;
  }
  v9 = this->fields.script;
  if ( !v9 )
    sub_1B8880C(0LL, v8);
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)v9,
           (Il2CppObject *)key,
           (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  defVal = (System_String_o *)Item;
  if ( !Item || (System_String_c *)Item->klass == string_TypeInfo )
    return defVal;
  sub_1B88ACC(Item);
  return (System_String_o *)QuestPhaseEntity__GetOverwriteEquipSkills(v12, v13);
}


System_String_array *__fastcall QuestPhaseEntity__getScriptStringArrayParam(
        QuestPhaseEntity_o *this,
        System_String_o *key,
        System_String_array *defVal,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ScriptObjListParam; // x0
  System_Collections_Generic_List_object__o *v8; // x19
  QuestPhaseEntity___c_c *v9; // x0
  System_Converter_TInput__TOutput__o *_9__32_0; // x20
  Il2CppObject *v11; // x21
  struct QuestPhaseEntity___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  System_Collections_Generic_List_object__o *v15; // x0
  __int64 v16; // x1

  if ( (byte_4A5B606 & 1) == 0 )
  {
    sub_1B885B0(&System_Converter_object__string__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_object__ConvertAll_string___);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1B885B0(&Method_QuestPhaseEntity___c__getScriptStringArrayParam_b__32_0__);
    sub_1B885B0(&QuestPhaseEntity___c_TypeInfo);
    byte_4A5B606 = 1;
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
  _9__32_0 = (System_Converter_TInput__TOutput__o *)v9->static_fields->__9__32_0;
  if ( !_9__32_0 )
  {
    if ( !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      v9 = QuestPhaseEntity___c_TypeInfo;
    }
    v11 = (Il2CppObject *)v9->static_fields->__9;
    _9__32_0 = (System_Converter_TInput__TOutput__o *)sub_1B887FC(System_Converter_object__string__TypeInfo);
    System_Converter_object__object____ctor(
      _9__32_0,
      v11,
      Method_QuestPhaseEntity___c__getScriptStringArrayParam_b__32_0__,
      0LL);
    static_fields = QuestPhaseEntity___c_TypeInfo->static_fields;
    static_fields->__9__32_0 = (struct System_Converter_object__string__o *)_9__32_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__32_0, (int32_t)_9__32_0, v13, v14);
  }
  v15 = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___ConvertAll_object_(
                                                       v8,
                                                       (System_Converter_T__TOutput__o *)_9__32_0,
                                                       (const MethodInfo_2DB32F8 *)Method_System_Collections_Generic_List_object__ConvertAll_string___);
  if ( !v15 )
    sub_1B8880C(0LL, v16);
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  v15,
                                  (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_string__ToArray__);
}


int32_t __fastcall QuestPhaseEntity__getSpecialShadowEffectId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5B62C & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_19792/*"getSpecialShadowEffectId"*/);
    byte_4A5B62C = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19792/*"getSpecialShadowEffectId"*/, 0, v2);
}


int32_t __fastcall QuestPhaseEntity__getTurnSituationType(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5B62B & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_24094/*"turnSituationType"*/);
    byte_4A5B62B = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_24094/*"turnSituationType"*/, 0, v2);
}


int32_t __fastcall QuestPhaseEntity__getUniqueCameraId(
        QuestPhaseEntity_o *this,
        int32_t defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4A5B614 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_24179/*"uniqueCameraId"*/);
    byte_4A5B614 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_24179/*"uniqueCameraId"*/, defVal, v3);
}


bool __fastcall QuestPhaseEntity__isBattleFinishCameraTargetAll(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5B62A & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_17108/*"battleFinishCameraTargetAll"*/);
    byte_4A5B62A = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_17108/*"battleFinishCameraTargetAll"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__isBreakOnBattleWin(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5B61F & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_17443/*"breakOnBattleWin"*/);
    byte_4A5B61F = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_17443/*"breakOnBattleWin"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__isBreakOnBattleWinFadeColorBlack(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5B620 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_17444/*"breakOnBattleWinFadeColorBlack"*/);
    byte_4A5B620 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_17444/*"breakOnBattleWinFadeColorBlack"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__isDisableChangeRaidDownMessage(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5B62D & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_20785/*"isDisableChangeRaidDownMessage"*/);
    byte_4A5B62D = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20785/*"isDisableChangeRaidDownMessage"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__isDispLoseResult(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5B61C & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_22907/*"resultLoseDisp"*/);
    byte_4A5B61C = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22907/*"resultLoseDisp"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__isFadeOutBgmBeforeMovie(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5B610 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_6560/*"FadeOutBgmBeforeMovie"*/);
    byte_4A5B610 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_6560/*"FadeOutBgmBeforeMovie"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__isNoResult(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5B61E & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_22094/*"noResult"*/);
    byte_4A5B61E = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22094/*"noResult"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__isTurnSituationType(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  return QuestPhaseEntity__getTurnSituationType(this, method) > 0;
}


void __fastcall QuestPhaseEntity___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5B683 & 1) == 0 )
  {
    sub_1B885B0(&QuestPhaseEntity___c_TypeInfo);
    byte_4A5B683 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(QuestPhaseEntity___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  QuestPhaseEntity___c_TypeInfo->static_fields->__9 = (struct QuestPhaseEntity___c_o *)v1;
  sub_1B88554((ServantStatusBattleListViewItem_o *)QuestPhaseEntity___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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

  if ( (byte_4A5B685 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5B685 = 1;
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


int32_t __fastcall QuestPhaseEntity___c___getScriptIntArrayParam_b__31_0(
        QuestPhaseEntity___c_o *this,
        Il2CppObject *x,
        const MethodInfo *method)
{
  System_String_o *v4; // x0

  if ( (byte_4A5B684 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5B684 = 1;
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
    sub_1B8880C(this, 0LL);
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