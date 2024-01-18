void __fastcall QuestPhaseEntity___ctor(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4186EF1 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_4186EF1 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
}


void __fastcall QuestPhaseEntity___ctor_23926216(
        QuestPhaseEntity_o *this,
        QuestPhaseEntity_o *cSrc,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_Array_o *classIds; // x0
  Il2CppObject *v15; // x0
  Il2CppObject *v16; // x21
  struct System_Int32_array *v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Array_o *individuality; // x0
  Il2CppObject *v25; // x0
  struct System_Int32_array *v26; // x1
  struct System_Int32_array **p_individuality; // x20

  if ( (byte_4186EF2 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, cSrc);
    sub_B2C35C(&int___TypeInfo, v5);
    byte_4186EF2 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
  if ( !cSrc )
    sub_B2C434(v6, v7);
  this->fields.questId = cSrc->fields.questId;
  this->fields.phase = cSrc->fields.phase;
  this->fields.isNpcOnly = cSrc->fields.isNpcOnly;
  this->fields.battleBgId = cSrc->fields.battleBgId;
  this->fields.battleBgType = cSrc->fields.battleBgType;
  this->fields.playerExp = cSrc->fields.playerExp;
  this->fields.friendshipExp = cSrc->fields.friendshipExp;
  classIds = (System_Array_o *)cSrc->fields.classIds;
  if ( classIds && (v15 = System_Array__Clone(classIds, 0LL)) != 0LL )
  {
    v16 = v15;
    v17 = (struct System_Int32_array *)sub_B2C41C(v15, int___TypeInfo);
    if ( !v17 )
      goto LABEL_12;
  }
  else
  {
    v17 = 0LL;
  }
  this->fields.classIds = v17;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.classIds,
    (System_Int32_array **)v17,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  individuality = (System_Array_o *)cSrc->fields.individuality;
  if ( !individuality )
    goto LABEL_13;
  v25 = System_Array__Clone(individuality, 0LL);
  if ( !v25 )
    goto LABEL_13;
  v16 = v25;
  v26 = (struct System_Int32_array *)sub_B2C41C(v25, int___TypeInfo);
  if ( !v26 )
  {
LABEL_12:
    sub_B2C728(v16);
LABEL_13:
    v26 = 0LL;
  }
  this->fields.individuality = v26;
  p_individuality = &this->fields.individuality;
  sub_B2C2F8((BattleServantConfConponent_o *)p_individuality, (System_Int32_array **)v26, v18, v19, v20, v21, v22, v23);
  *((_DWORD *)p_individuality + 2) = cSrc->fields.giftId;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall QuestPhaseEntity__CreatePK(int32_t questId, int32_t phase, const MethodInfo *method)
{
  if ( (byte_4186EF0 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&phase);
    byte_4186EF0 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           questId,
           phase,
           (const MethodInfo_1732908 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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
  __int64 v6; // x9
  QuestPhaseEntity_o *v7; // x0
  int32_t v8; // w1
  const MethodInfo *v9; // x2

  if ( (byte_4186EFC & 1) == 0 )
  {
    sub_B2C35C(&System_Collections_Generic_Dictionary_string__object__TypeInfo, method);
    sub_B2C35C(&StringLiteral_16251/*"addEquipSkills"*/, v4);
    byte_4186EFC = 1;
  }
  result = (System_Collections_Generic_Dictionary_string__object__o *)QuestPhaseEntity__getScriptObj(
                                                                        this,
                                                                        (System_String_o *)StringLiteral_16251/*"addEquipSkills"*/,
                                                                        v2);
  if ( result )
  {
    v6 = *(&System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.bitflags2 + 1);
    if ( *(&result->klass->_2.bitflags2 + 1) < (unsigned int)v6
      || (System_Collections_Generic_Dictionary_string__object__c *)result->klass->_2.typeHierarchy[v6 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
    {
      v7 = (QuestPhaseEntity_o *)sub_B2C728(result);
      return (System_Collections_Generic_Dictionary_string__object__o *)QuestPhaseEntity__getResultBgmId(v7, v8, v9);
    }
  }
  return result;
}


int32_t __fastcall QuestPhaseEntity__GetAdvantageClassId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4186F2B & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_16537/*"auto_sel_support_type"*/, method);
    byte_4186F2B = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_16537/*"auto_sel_support_type"*/, -1, v2);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetAssistIdArray(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Int32_array *v4; // x2
  const MethodInfo *v5; // x3

  if ( (byte_4186F3A & 1) == 0 )
  {
    sub_B2C35C(&int___TypeInfo, method);
    sub_B2C35C(&StringLiteral_16498/*"assistIds"*/, v3);
    byte_4186F3A = 1;
  }
  v4 = (System_Int32_array *)sub_B2C374(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_16498/*"assistIds"*/, v4, v5);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetAssistWeightArray(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Int32_array *v4; // x2
  const MethodInfo *v5; // x3

  if ( (byte_4186F3B & 1) == 0 )
  {
    sub_B2C35C(&int___TypeInfo, method);
    sub_B2C35C(&StringLiteral_16497/*"assistIdWeight"*/, v3);
    byte_4186F3B = 1;
  }
  v4 = (System_Int32_array *)sub_B2C374(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_16497/*"assistIdWeight"*/, v4, v5);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetAssumedEffectId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4186F4D & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_16501/*"assumedEffectId"*/, method);
    byte_4186F4D = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_16501/*"assumedEffectId"*/, 0LL);
}


System_String_o *__fastcall QuestPhaseEntity__GetBattleFinishMovie(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4186F12 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_16646/*"battleFinishMovie"*/, method);
    byte_4186F12 = 1;
  }
  return QuestPhaseEntity__getScriptStr(this, (System_String_o *)StringLiteral_16646/*"battleFinishMovie"*/, 0LL, v2);
}


int32_t __fastcall QuestPhaseEntity__GetBattleFinishWaitTime(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4186F54 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_16647/*"battleFinishWaitTime"*/, method);
    byte_4186F54 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_16647/*"battleFinishWaitTime"*/, 0, v2);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall QuestPhaseEntity__GetBeforeBattleSkillActor(
        QuestPhaseEntity_o *this,
        int32_t defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4186F55 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_16687/*"beforeBattleSkillActor"*/, *(_QWORD *)&defVal);
    byte_4186F55 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_16687/*"beforeBattleSkillActor"*/, defVal, v3);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetClearGiftItemListDisplay(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Int32_array *v4; // x2
  const MethodInfo *v5; // x3

  if ( (byte_4186F4A & 1) == 0 )
  {
    sub_B2C35C(&int___TypeInfo, method);
    sub_B2C35C(&StringLiteral_17462/*"clearGiftItemListDisplay"*/, v3);
    byte_4186F4A = 1;
  }
  v4 = (System_Int32_array *)sub_B2C374(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_17462/*"clearGiftItemListDisplay"*/, v4, v5);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetCondHavingIds(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Int32_array *v4; // x2
  const MethodInfo *v5; // x3

  if ( (byte_4186F36 & 1) == 0 )
  {
    sub_B2C35C(&int___TypeInfo, method);
    sub_B2C35C(&StringLiteral_17643/*"condHaving"*/, v3);
    byte_4186F36 = 1;
  }
  v4 = (System_Int32_array *)sub_B2C374(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_17643/*"condHaving"*/, v4, v5);
}


int32_t __fastcall QuestPhaseEntity__GetCorrectionIconId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4186F2A & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_17707/*"correctionIconId"*/, method);
    byte_4186F2A = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_17707/*"correctionIconId"*/, -1, v2);
}


int32_t __fastcall QuestPhaseEntity__GetDefenceTargetContinueRecoverRate(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4186F5F & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_18704/*"fieldHpContinueRecoverRate"*/, method);
    byte_4186F5F = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_18704/*"fieldHpContinueRecoverRate"*/, 0, v2);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetEnemyInfoDispNpcSvtIdList(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Int32_array *v4; // x2
  const MethodInfo *v5; // x3

  if ( (byte_4186F48 & 1) == 0 )
  {
    sub_B2C35C(&int___TypeInfo, method);
    sub_B2C35C(&StringLiteral_21363/*"overwriteEnemyInfos"*/, v3);
    byte_4186F48 = 1;
  }
  v4 = (System_Int32_array *)sub_B2C374(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_21363/*"overwriteEnemyInfos"*/, v4, v5);
}


System_String_array *__fastcall QuestPhaseEntity__GetEnemyInfoOverwriteNpcSvtNameList(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_String_array *v4; // x2
  const MethodInfo *v5; // x3

  if ( (byte_4186F49 & 1) == 0 )
  {
    sub_B2C35C(&string___TypeInfo, method);
    sub_B2C35C(&StringLiteral_21362/*"overwriteEnemyInfoNames"*/, v3);
    byte_4186F49 = 1;
  }
  v4 = (System_String_array *)sub_B2C374(string___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptStringArrayParam(this, (System_String_o *)StringLiteral_21362/*"overwriteEnemyInfoNames"*/, v4, v5);
}


int32_t __fastcall QuestPhaseEntity__GetEquipAddId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4186F47 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_18388/*"equipAddId"*/, method);
    byte_4186F47 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_18388/*"equipAddId"*/, 0, v2);
}


int32_t __fastcall QuestPhaseEntity__GetFinishEffectId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4186F27 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_18741/*"finishEffectId"*/, method);
    byte_4186F27 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_18741/*"finishEffectId"*/, -1, v2);
}


int32_t __fastcall QuestPhaseEntity__GetFormationBgmId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4186F4E & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_18818/*"formationBgmId"*/, method);
    byte_4186F4E = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_18818/*"formationBgmId"*/, -1, v2);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetGimmickAnimTypeArray(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4186F25 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_19056/*"gimmickAnimType"*/, method);
    byte_4186F25 = 1;
  }
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_19056/*"gimmickAnimType"*/, 0LL, v2);
}


int32_t __fastcall QuestPhaseEntity__GetGimmickId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4186F1E & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_19057/*"gimmickId"*/, method);
    byte_4186F1E = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19057/*"gimmickId"*/, -1, v2);
}


System_Object_array *__fastcall QuestPhaseEntity__GetGimmickResultVoiceArray(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4186F24 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_21803/*"resultVoice"*/, method);
    byte_4186F24 = 1;
  }
  return QuestPhaseEntity__getScriptObjArrayParam(this, (System_String_o *)StringLiteral_21803/*"resultVoice"*/, 0LL, v2);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetGimmickSkillIdArray(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Int32_array *v4; // x2
  const MethodInfo *v5; // x3

  if ( (byte_4186F21 & 1) == 0 )
  {
    sub_B2C35C(&int___TypeInfo, method);
    sub_B2C35C(&StringLiteral_21732/*"reelSkill"*/, v3);
    byte_4186F21 = 1;
  }
  v4 = (System_Int32_array *)sub_B2C374(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_21732/*"reelSkill"*/, v4, v5);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetGimmickSkillRateArray(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Int32_array *v4; // x2
  const MethodInfo *v5; // x3

  if ( (byte_4186F22 & 1) == 0 )
  {
    sub_B2C35C(&int___TypeInfo, method);
    sub_B2C35C(&StringLiteral_21731/*"reelRate"*/, v3);
    byte_4186F22 = 1;
  }
  v4 = (System_Int32_array *)sub_B2C374(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_21731/*"reelRate"*/, v4, v5);
}


System_String_array *__fastcall QuestPhaseEntity__GetGimmickStartVoiceArray(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4186F23 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_22285/*"startVoice"*/, method);
    byte_4186F23 = 1;
  }
  return QuestPhaseEntity__getScriptStringArrayParam(this, (System_String_o *)StringLiteral_22285/*"startVoice"*/, 0LL, v2);
}


int32_t __fastcall QuestPhaseEntity__GetGimmickSvtId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4186F1F & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_19058/*"gimmickSvtId"*/, method);
    byte_4186F1F = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19058/*"gimmickSvtId"*/, -1, v2);
}


float __fastcall QuestPhaseEntity__GetIncomingCallDispTime(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4186F58 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_19771/*"incomingCallDispTime"*/, method);
    byte_4186F58 = 1;
  }
  return (float)QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19771/*"incomingCallDispTime"*/, 500, v2) / 1000.0;
}


System_String_o *__fastcall QuestPhaseEntity__GetIncomingCallMessage(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1

  if ( (byte_4186F57 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_19772/*"incomingCallMessage"*/, method);
    sub_B2C35C(&StringLiteral_1/*""*/, v4);
    byte_4186F57 = 1;
  }
  return QuestPhaseEntity__getScriptStr(
           this,
           (System_String_o *)StringLiteral_19772/*"incomingCallMessage"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


System_String_o *__fastcall QuestPhaseEntity__GetIncomingCallTitle(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1

  if ( (byte_4186F56 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_19773/*"incomingCallTitle"*/, method);
    sub_B2C35C(&StringLiteral_1/*""*/, v4);
    byte_4186F56 = 1;
  }
  return QuestPhaseEntity__getScriptStr(
           this,
           (System_String_o *)StringLiteral_19773/*"incomingCallTitle"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


System_String_o *__fastcall QuestPhaseEntity__GetMapModelEntryAnimationName(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1

  if ( (byte_4186F52 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1168/*"3dMapEntryAnimName"*/, method);
    sub_B2C35C(&StringLiteral_1/*""*/, v4);
    byte_4186F52 = 1;
  }
  return QuestPhaseEntity__getScriptStr(
           this,
           (System_String_o *)StringLiteral_1168/*"3dMapEntryAnimName"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


int32_t __fastcall QuestPhaseEntity__GetMasterSkillDelay(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4186F30 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_20407/*"masterSkillDelay"*/, method);
    byte_4186F30 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20407/*"masterSkillDelay"*/, 0, v2);
}


System_String_o *__fastcall QuestPhaseEntity__GetMasterSkillDelayInfo(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4186F31 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_20408/*"masterSkillDelayInfo"*/, method);
    byte_4186F31 = 1;
  }
  return QuestPhaseEntity__getScriptStr(this, (System_String_o *)StringLiteral_20408/*"masterSkillDelayInfo"*/, 0LL, v2);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetMoveSceneInfo(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Int32_array *v4; // x2
  const MethodInfo *v5; // x3

  if ( (byte_4186F5A & 1) == 0 )
  {
    sub_B2C35C(&int___TypeInfo, method);
    sub_B2C35C(&StringLiteral_20579/*"moveSceneInfo"*/, v3);
    byte_4186F5A = 1;
  }
  v4 = (System_Int32_array *)sub_B2C374(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_20579/*"moveSceneInfo"*/, v4, v5);
}


int32_t __fastcall QuestPhaseEntity__GetMovieAfterCrossFadeStartFrame(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4186F19 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_20583/*"movieAfterCrossFadeStartFrame"*/, method);
    byte_4186F19 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20583/*"movieAfterCrossFadeStartFrame"*/, 0, v2);
}


int32_t __fastcall QuestPhaseEntity__GetMovieAfterCrossFadeTime(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4186F18 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_20584/*"movieAfterCrossFadeTime"*/, method);
    byte_4186F18 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20584/*"movieAfterCrossFadeTime"*/, 0, v2);
}


int32_t __fastcall QuestPhaseEntity__GetNextSceneId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4186F34 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_21065/*"nextSceneId"*/, method);
    byte_4186F34 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21065/*"nextSceneId"*/, 0, v2);
}


System_String_array *__fastcall QuestPhaseEntity__GetNextSceneParam(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1
  System_String_array *result; // x0
  System_String_o *v6; // x19
  System_Char_array *v7; // x0
  __int64 v8; // x1
  __int64 v9; // x0

  if ( (byte_4186F35 & 1) == 0 )
  {
    sub_B2C35C(&char___TypeInfo, method);
    sub_B2C35C(&StringLiteral_21066/*"nextSceneParam"*/, v4);
    byte_4186F35 = 1;
  }
  result = (System_String_array *)QuestPhaseEntity__getScriptStr(this, (System_String_o *)StringLiteral_21066/*"nextSceneParam"*/, 0LL, v2);
  if ( result )
  {
    v6 = (System_String_o *)result;
    v7 = (System_Char_array *)sub_B2C374(char___TypeInfo, 1LL);
    if ( !v7 )
      sub_B2C434(0LL, v8);
    if ( !v7->max_length )
    {
      v9 = sub_B2C460(v7);
      sub_B2C400(v9, 0LL);
    }
    v7->m_Items[2] = 44;
    return System_String__Split(v6, v7, 0LL);
  }
  return result;
}


System_Int32_array *__fastcall QuestPhaseEntity__GetNotHavingQuests(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Int32_array *v4; // x2
  const MethodInfo *v5; // x3

  if ( (byte_4186F37 & 1) == 0 )
  {
    sub_B2C35C(&int___TypeInfo, method);
    sub_B2C35C(&StringLiteral_21142/*"notHavingQuest"*/, v3);
    byte_4186F37 = 1;
  }
  v4 = (System_Int32_array *)sub_B2C374(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_21142/*"notHavingQuest"*/, v4, v5);
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
  __int64 v12; // x1
  __int64 v13; // x21
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v14; // x22
  struct System_Collections_Generic_Dictionary_string__object__o *v15; // x0
  __int64 v16; // x1
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Collections_Generic_Dictionary_int__int____o **v23; // x20
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  System_Xml_Schema_XmlSchemaObject_o *v25; // x22
  __int64 v26; // x10
  const MethodInfo *v27; // x2
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v29; // x19
  System_Xml_Schema_XmlSchemaObject_o *v30; // [xsp+8h] [xbp-38h] BYREF
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4186F45 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_object___ctor__, method);
    sub_B2C35C(&System_Action_object__TypeInfo, v3);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int_____ctor__, v5);
    sub_B2C35C(&System_Collections_Generic_Dictionary_int__int____TypeInfo, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_object__ForEach__, v7);
    sub_B2C35C(&System_Collections_Generic_List_object__TypeInfo, v8);
    sub_B2C35C(&Method_QuestPhaseEntity___c__DisplayClass108_0__GetNpcAiInfo_b__0__, v9);
    sub_B2C35C(&QuestPhaseEntity___c__DisplayClass108_0_TypeInfo, v10);
    sub_B2C35C(&StringLiteral_16296/*"aiMultiNpc"*/, v11);
    sub_B2C35C(&StringLiteral_16297/*"aiNpc"*/, v12);
    byte_4186F45 = 1;
  }
  value = 0LL;
  v30 = 0LL;
  v13 = sub_B2C42C(QuestPhaseEntity___c__DisplayClass108_0_TypeInfo);
  QuestPhaseEntity___c__DisplayClass108_0___ctor((QuestPhaseEntity___c__DisplayClass108_0_o *)v13, 0LL);
  v14 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B2C42C(System_Collections_Generic_Dictionary_int__int____TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v14,
    (const MethodInfo_2E63B98 *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  if ( !v13 )
    goto LABEL_14;
  *(_QWORD *)(v13 + 16) = v14;
  v23 = (System_Collections_Generic_Dictionary_int__int____o **)(v13 + 16);
  sub_B2C2F8((BattleServantConfConponent_o *)(v13 + 16), (System_Int32_array **)v14, v17, v18, v19, v20, v21, v22);
  script = this->fields.script;
  if ( !script )
    return *v23;
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
         (System_Xml_XmlQualifiedName_o *)StringLiteral_16296/*"aiMultiNpc"*/,
         &value,
         (const MethodInfo_2DB3AC0 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    v25 = value;
    if ( value )
    {
      v26 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
      if ( *(&value->klass->_2.bitflags2 + 1) >= (unsigned int)v26
        && (System_Collections_Generic_List_object__c *)value->klass->_2.typeHierarchy[v26 - 1] == System_Collections_Generic_List_object__TypeInfo )
      {
        v29 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_object__TypeInfo);
        System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
          v29,
          (Il2CppObject *)v13,
          Method_QuestPhaseEntity___c__DisplayClass108_0__GetNpcAiInfo_b__0__,
          (const MethodInfo_24BBAD8 *)Method_System_Action_object___ctor__);
        System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
          (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)v25,
          (System_Action_T__o *)v29,
          (const MethodInfo_2EF5178 *)Method_System_Collections_Generic_List_object__ForEach__);
        return *v23;
      }
    }
  }
  v15 = this->fields.script;
  if ( !v15 )
LABEL_14:
    sub_B2C434(v15, v16);
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v15,
         (System_Xml_XmlQualifiedName_o *)StringLiteral_16297/*"aiNpc"*/,
         &v30,
         (const MethodInfo_2DB3AC0 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    QuestPhaseEntity__SetNpcAiInfo(
      (System_Collections_Generic_IDictionary_int__int____o *)*v23,
      (Il2CppObject *)v30,
      v27);
  }
  return *v23;
}


int32_t __fastcall QuestPhaseEntity__GetOverWriteMasterImageId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4186F16 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_20397/*"masterImageId"*/, method);
    byte_4186F16 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20397/*"masterImageId"*/, 0, v2);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall QuestPhaseEntity__GetOverwriteCommandSpellContinue(
        QuestPhaseEntity_o *this,
        int32_t def,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4186F3F & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_21354/*"overwriteCommandSpellContinue"*/, *(_QWORD *)&def);
    byte_4186F3F = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21354/*"overwriteCommandSpellContinue"*/, def, v3);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall QuestPhaseEntity__GetOverwriteCommandSpellIcon(
        QuestPhaseEntity_o *this,
        int32_t genderType,
        System_Int32_array *defVal,
        const MethodInfo *method)
{
  System_Int32_array *ScriptIntArrayParam; // x0
  __int64 v8; // x0

  if ( (byte_4186F50 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_21355/*"overwriteCommandSpellIcons"*/, *(_QWORD *)&genderType);
    byte_4186F50 = 1;
  }
  ScriptIntArrayParam = QuestPhaseEntity__getScriptIntArrayParam(
                          this,
                          (System_String_o *)StringLiteral_21355/*"overwriteCommandSpellIcons"*/,
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
    v8 = sub_B2C460(ScriptIntArrayParam);
    sub_B2C400(v8, 0LL);
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
  __int64 v6; // x9
  QuestPhaseEntity_o *v7; // x0
  const MethodInfo *v8; // x1

  if ( (byte_4186EFB & 1) == 0 )
  {
    sub_B2C35C(&System_Collections_Generic_Dictionary_string__object__TypeInfo, method);
    sub_B2C35C(&StringLiteral_21365/*"overwriteEquipSkills"*/, v4);
    byte_4186EFB = 1;
  }
  result = (System_Collections_Generic_Dictionary_string__object__o *)QuestPhaseEntity__getScriptObj(
                                                                        this,
                                                                        (System_String_o *)StringLiteral_21365/*"overwriteEquipSkills"*/,
                                                                        v2);
  if ( result )
  {
    v6 = *(&System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.bitflags2 + 1);
    if ( *(&result->klass->_2.bitflags2 + 1) < (unsigned int)v6
      || (System_Collections_Generic_Dictionary_string__object__c *)result->klass->_2.typeHierarchy[v6 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
    {
      v7 = (QuestPhaseEntity_o *)sub_B2C728(result);
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
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_String_array **v18; // x2
  MethodInfo *v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Int32_array *v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  const MethodInfo *v31; // x3
  System_Int32_array *v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7

  if ( (byte_4186F2C & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_21369/*"overwriteLimitCountSvtIds"*/, overwriteLimitCountSvtIds);
    sub_B2C35C(&StringLiteral_21370/*"overwriteLimitCounts"*/, v9);
    sub_B2C35C(&StringLiteral_21368/*"overwriteLimitCountIconIds"*/, v10);
    byte_4186F2C = 1;
  }
  ScriptIntArrayParam = QuestPhaseEntity__getScriptIntArrayParam(
                          this,
                          (System_String_o *)StringLiteral_21369/*"overwriteLimitCountSvtIds"*/,
                          0LL,
                          (const MethodInfo *)overwriteLimitCountIconIds);
  *overwriteLimitCountSvtIds = ScriptIntArrayParam;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)overwriteLimitCountSvtIds,
    (System_Int32_array **)ScriptIntArrayParam,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  if ( *overwriteLimitCountSvtIds )
  {
    v24 = QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_21370/*"overwriteLimitCounts"*/, 0LL, v19);
    *overwriteLimitCounts = v24;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)overwriteLimitCounts,
      (System_Int32_array **)v24,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
    v32 = QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_21368/*"overwriteLimitCountIconIds"*/, 0LL, v31);
    *overwriteLimitCountIconIds = v32;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)overwriteLimitCountIconIds,
      (System_Int32_array **)v32,
      v33,
      v34,
      v35,
      v36,
      v37,
      v38);
    return *overwriteLimitCounts != 0LL;
  }
  else
  {
    *overwriteLimitCounts = 0LL;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)overwriteLimitCounts,
      0LL,
      v18,
      (System_String_array **)v19,
      v20,
      v21,
      v22,
      v23);
    *overwriteLimitCountIconIds = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)overwriteLimitCountIconIds, 0LL, v40, v41, v42, v43, v44, v45);
    return 0;
  }
}


System_Int32_array *__fastcall QuestPhaseEntity__GetOverwriteResultBgmCondIds(
        QuestPhaseEntity_o *this,
        System_Int32_array *defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4186EFF & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_21375/*"overwriteResultBgmCondIds"*/, defVal);
    byte_4186EFF = 1;
  }
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_21375/*"overwriteResultBgmCondIds"*/, defVal, v3);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetOverwriteResultBgmIds(
        QuestPhaseEntity_o *this,
        System_Int32_array *defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4186EFE & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_21376/*"overwriteResultBgmIds"*/, defVal);
    byte_4186EFE = 1;
  }
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_21376/*"overwriteResultBgmIds"*/, defVal, v3);
}


int32_t __fastcall QuestPhaseEntity__GetProgressAfterMovie(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4186F14 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_21550/*"progressAfterMovie"*/, method);
    byte_4186F14 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21550/*"progressAfterMovie"*/, 0, v2);
}


int64_t __fastcall QuestPhaseEntity__GetQuestPhaseNo(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  return this->fields.phase + 100 * this->fields.questId;
}


int32_t __fastcall QuestPhaseEntity__GetQuestPhaseSelectRoute(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t ScriptIntParam; // w0
  int32_t v7; // w19
  clsQuestCheck_o *v8; // x0
  __int64 v9; // x1

  if ( (byte_4186F09 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, method);
    sub_B2C35C(&SingletonTemplate_clsQuestCheck__TypeInfo, v4);
    sub_B2C35C(&StringLiteral_21465/*"phaseRouteSelect"*/, v5);
    byte_4186F09 = 1;
  }
  ScriptIntParam = QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21465/*"phaseRouteSelect"*/, 0, v2);
  if ( ScriptIntParam < 1 )
    return 0;
  v7 = ScriptIntParam;
  if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
  }
  v8 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !v8 )
    sub_B2C434(0LL, v9);
  if ( clsQuestCheck__CheckQuestPlayableNow(v8, v7, 0LL) )
    return v7;
  else
    return 0;
}


System_Int32_array *__fastcall QuestPhaseEntity__GetReelIconIdArray(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Int32_array *v4; // x2
  const MethodInfo *v5; // x3

  if ( (byte_4186F20 & 1) == 0 )
  {
    sub_B2C35C(&int___TypeInfo, method);
    sub_B2C35C(&StringLiteral_21730/*"reelIcon"*/, v3);
    byte_4186F20 = 1;
  }
  v4 = (System_Int32_array *)sub_B2C374(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_21730/*"reelIcon"*/, v4, v5);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetSelectableQuests(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4186F08 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_21615/*"questSelect"*/, method);
    byte_4186F08 = 1;
  }
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_21615/*"questSelect"*/, 0LL, v2);
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
  __int64 v11; // x0

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
    {
      v11 = sub_B2C460(SelectableQuests);
      sub_B2C400(v11, 0LL);
    }
    return SelectableQuests->m_Items[selectIndex + 1];
  }
  return result;
}


System_Int32_array *__fastcall QuestPhaseEntity__GetShadowOffSvtIds(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Int32_array *v4; // x2
  const MethodInfo *v5; // x3

  if ( (byte_4186F2F & 1) == 0 )
  {
    sub_B2C35C(&int___TypeInfo, method);
    sub_B2C35C(&StringLiteral_22091/*"shadowOffSvtIds"*/, v3);
    byte_4186F2F = 1;
  }
  v4 = (System_Int32_array *)sub_B2C374(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_22091/*"shadowOffSvtIds"*/, v4, v5);
}


int32_t __fastcall QuestPhaseEntity__GetSingleForceSvtId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4186F2D & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_22133/*"singleForceSvtId"*/, method);
    byte_4186F2D = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22133/*"singleForceSvtId"*/, 0, v2);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetStartMovieWave(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4186F15 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_20588/*"movieWave"*/, method);
    byte_4186F15 = 1;
  }
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_20588/*"movieWave"*/, 0LL, v2);
}


int32_t __fastcall QuestPhaseEntity__GetSupportInitDeckIndex(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4186F40 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_18470/*"eventDeckIndex"*/, method);
    byte_4186F40 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_18470/*"eventDeckIndex"*/, 0, v2);
}


int32_t __fastcall QuestPhaseEntity__GetTemporaryCommandSpell(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4186F3D & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_22640/*"temporaryCommandSpell"*/, method);
    byte_4186F3D = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22640/*"temporaryCommandSpell"*/, -1, v2);
}


int32_t __fastcall QuestPhaseEntity__GetUserEventDeckNo(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4186F2E & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_22980/*"useEventDeckNo"*/, method);
    byte_4186F2E = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22980/*"useEventDeckNo"*/, 1, v2);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetVoiceOffPlayerSvtIdArray(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4186F4F & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_23179/*"voiceOffMySvtIds"*/, method);
    byte_4186F4F = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_23179/*"voiceOffMySvtIds"*/, 0LL);
}


System_String_o *__fastcall QuestPhaseEntity__GetWarBoardStartMovieName(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1

  if ( (byte_4186F4B & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_15424/*"WarBoardStartMovieName"*/, method);
    sub_B2C35C(&StringLiteral_1/*""*/, v4);
    byte_4186F4B = 1;
  }
  return QuestPhaseEntity__getScriptStr(
           this,
           (System_String_o *)StringLiteral_15424/*"WarBoardStartMovieName"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


System_String_array *__fastcall QuestPhaseEntity__GetWaveStartMovie(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4186F13 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_23254/*"waveStartMovie"*/, method);
    byte_4186F13 = 1;
  }
  return QuestPhaseEntity__getScriptStringArrayParam(this, (System_String_o *)StringLiteral_23254/*"waveStartMovie"*/, 0LL, v2);
}


int32_t __fastcall QuestPhaseEntity__GetWinBgmOffFlg(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4186F28 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_18343/*"endBgmOff"*/, method);
    byte_4186F28 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_18343/*"endBgmOff"*/, 0, v2);
}


int32_t __fastcall QuestPhaseEntity__GetWinVoiceOffFlg(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4186F26 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_18357/*"endVoiceOff"*/, method);
    byte_4186F26 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_18357/*"endVoiceOff"*/, 0, v2);
}


bool __fastcall QuestPhaseEntity__IsActiveAssistSkill(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Int32_array *v4; // x0
  const MethodInfo *v5; // x3
  System_Int32_array *ScriptIntArrayParam; // x0
  __int64 v7; // x1

  if ( (byte_4186F39 & 1) == 0 )
  {
    sub_B2C35C(&int___TypeInfo, method);
    sub_B2C35C(&StringLiteral_16498/*"assistIds"*/, v3);
    byte_4186F39 = 1;
  }
  v4 = (System_Int32_array *)sub_B2C374(int___TypeInfo, 0LL);
  ScriptIntArrayParam = QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_16498/*"assistIds"*/, v4, v5);
  if ( !ScriptIntArrayParam )
    sub_B2C434(0LL, v7);
  return ScriptIntArrayParam->max_length != 0;
}


bool __fastcall QuestPhaseEntity__IsAreaImporveQuest(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4186F4C & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_16449/*"areaImprovementQuest"*/, method);
    byte_4186F4C = 1;
  }
  return QuestPhaseEntity__getScriptObj(this, (System_String_o *)StringLiteral_16449/*"areaImprovementQuest"*/, v2) != 0LL;
}


bool __fastcall QuestPhaseEntity__IsContinueWaveRestart(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4186F5E & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_17685/*"continueWaveRestart"*/, method);
    byte_4186F5E = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_17685/*"continueWaveRestart"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__IsHideAssistConfButton(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4186F3C & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_19140/*"hideAssistConfButton"*/, method);
    byte_4186F3C = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19140/*"hideAssistConfButton"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__IsIgnoreBattleLoseDialog(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4186F0D & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_19404/*"ignoreBattleLoseDialog"*/, method);
    byte_4186F0D = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_19404/*"ignoreBattleLoseDialog"*/, 0LL);
}


bool __fastcall QuestPhaseEntity__IsInvisibleConnectAndLoad(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4186F33 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_19892/*"invisibleConnectAndLoad"*/, method);
    byte_4186F33 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19892/*"invisibleConnectAndLoad"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__IsKeepSubBgmAfterBattleResult(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4186F29 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_20120/*"keepSubBgmUntilBattleResult"*/, method);
    byte_4186F29 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_20120/*"keepSubBgmUntilBattleResult"*/, 0LL);
}


bool __fastcall QuestPhaseEntity__IsMatchIndividuality(
        QuestPhaseEntity_o *this,
        System_Int32_array *individualitys,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_IEnumerable_T__o *individuality; // x21
  System_Collections_Generic_HashSet_int__o *v10; // x20
  System_Predicate_int__o *All_int; // x0
  __int64 v12; // x1
  System_Predicate_T__o *v13; // x21

  if ( (byte_4186F32 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Array_FindAll_int___, individualitys);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int___ctor___67287832, v5);
    sub_B2C35C(&System_Collections_Generic_HashSet_int__TypeInfo, v6);
    sub_B2C35C(&Method_System_Predicate_int___ctor__, v7);
    sub_B2C35C(&System_Predicate_int__TypeInfo, v8);
    byte_4186F32 = 1;
  }
  individuality = (System_Collections_Generic_IEnumerable_T__o *)this->fields.individuality;
  v10 = (System_Collections_Generic_HashSet_int__o *)sub_B2C42C(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor_47731024(
    v10,
    individuality,
    (const MethodInfo_2D85150 *)Method_System_Collections_Generic_HashSet_int___ctor___67287832);
  All_int = (System_Predicate_int__o *)sub_B2C42C(System_Predicate_int__TypeInfo);
  if ( !v10
    || (v13 = (System_Predicate_T__o *)All_int,
        System_Predicate_int____ctor(
          All_int,
          (Il2CppObject *)v10,
          (intptr_t)v10->klass->vtable._9_CopyTo.methodPtr,
          (const MethodInfo_2951520 *)Method_System_Predicate_int___ctor__),
        (All_int = (System_Predicate_int__o *)System_Array__FindAll_int_(
                                                individualitys,
                                                v13,
                                                (const MethodInfo_1FFC2CC *)Method_System_Array_FindAll_int___)) == 0LL) )
  {
    sub_B2C434(All_int, v12);
  }
  return All_int->fields.m_target != 0LL;
}


bool __fastcall QuestPhaseEntity__IsNonStopEndBgm(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4186F0A & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_21116/*"nonStopEndBgm"*/, method);
    byte_4186F0A = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21116/*"nonStopEndBgm"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__IsNotClassBoard(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4186F5B & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_21139/*"notClassBoard"*/, method);
    byte_4186F5B = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21139/*"notClassBoard"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__IsNotResetResultDispFlag(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4186F17 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_21144/*"notResetResultDispFlag"*/, method);
    byte_4186F17 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21144/*"notResetResultDispFlag"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__IsNotUseRestrictionDialog(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4186F5C & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_21145/*"notUseRestrictionDialog"*/, method);
    byte_4186F5C = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21145/*"notUseRestrictionDialog"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__IsPlayScriptBeforeForWarBoard(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4186F38 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_19952/*"isScriptPlayForWarBoard"*/, method);
    byte_4186F38 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19952/*"isScriptPlayForWarBoard"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__IsRepeatReward(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4186F59 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_21771/*"repeatReward"*/, method);
    byte_4186F59 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21771/*"repeatReward"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__IsSkipBattleFinish(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4186F53 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_22154/*"skipBattleFinish"*/, method);
    byte_4186F53 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22154/*"skipBattleFinish"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__IsUseTemporaryCommandSpell(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4186F3E & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_22984/*"useTemporaryCommandSpell"*/, method);
    byte_4186F3E = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22984/*"useTemporaryCommandSpell"*/, -1, v2) == 1;
}


bool __fastcall QuestPhaseEntity__IsWaveCountInfinity(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4186F51 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_23252/*"waveCountInfinity"*/, method);
    byte_4186F51 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_23252/*"waveCountInfinity"*/, -1, v2) != -1;
}


bool __fastcall QuestPhaseEntity__IsWaveSetup(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4186F5D & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_23253/*"waveSetup"*/, method);
    byte_4186F5D = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_23253/*"waveSetup"*/, 0, v2) != 0;
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
  __int64 v15; // x1
  __int64 v16; // x10
  System_Collections_Generic_Dictionary_string__object__c *v17; // x9
  System_Collections_Generic_Dictionary_string__object__o *v18; // x21
  int Value_long; // w20
  System_String_o *Value_string; // x0
  System_Collections_Generic_List_BattleActionData_HealData__o *v21; // x21
  QuestPhaseEntity___c_c *v22; // x0
  struct QuestPhaseEntity___c_StaticFields *static_fields; // x8
  System_Converter_BattleActionData_HealData__int__o *_9__109_0; // x22
  Il2CppObject *v25; // x23
  struct QuestPhaseEntity___c_StaticFields *v26; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Collections_Generic_List_int__o *v33; // x0
  __int64 v34; // x1
  __int64 v35; // x3
  System_Collections_Generic_IDictionary_int__int____c *klass; // x8
  System_Collections_Generic_List_int__o *v37; // x21
  unsigned __int64 v38; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0

  if ( (byte_4186F46 & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_GetValue_long___, obj);
    sub_B2C35C(&Method_BasicHelper_GetValue_List_object____, v5);
    sub_B2C35C(&Method_System_Converter_object__int___ctor__, v6);
    sub_B2C35C(&System_Converter_object__int__TypeInfo, v7);
    sub_B2C35C(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v8);
    sub_B2C35C(&System_Collections_Generic_IDictionary_int__int____TypeInfo, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_object__ConvertAll_int___, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, v11);
    sub_B2C35C(&Method_QuestPhaseEntity___c__SetNpcAiInfo_b__109_0__, v12);
    sub_B2C35C(&QuestPhaseEntity___c_TypeInfo, v13);
    sub_B2C35C(&StringLiteral_16295/*"aiIds"*/, v14);
    sub_B2C35C(&StringLiteral_21158/*"npcId"*/, v15);
    byte_4186F46 = 1;
  }
  if ( obj )
  {
    v16 = *(&System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.bitflags2 + 1);
    if ( *(&obj->klass->_2.bitflags2 + 1) >= (unsigned int)v16 )
    {
      v17 = (System_Collections_Generic_Dictionary_string__object__c *)obj->klass->_2.typeHierarchy[v16 - 1];
      v18 = v17 == System_Collections_Generic_Dictionary_string__object__TypeInfo
          ? (System_Collections_Generic_Dictionary_string__object__o *)obj
          : 0LL;
      if ( v17 == System_Collections_Generic_Dictionary_string__object__TypeInfo )
      {
        Value_long = BasicHelper__GetValue_long_(
                       v18,
                       (System_String_o *)StringLiteral_21158/*"npcId"*/,
                       0LL,
                       (const MethodInfo_17282FC *)Method_BasicHelper_GetValue_long___);
        Value_string = BasicHelper__GetValue_string_(
                         v18,
                         (System_String_o *)StringLiteral_16295/*"aiIds"*/,
                         0LL,
                         (const MethodInfo_17283E8 *)Method_BasicHelper_GetValue_List_object____);
        if ( Value_long >= 1 )
        {
          v21 = (System_Collections_Generic_List_BattleActionData_HealData__o *)Value_string;
          if ( Value_string )
          {
            v22 = QuestPhaseEntity___c_TypeInfo;
            if ( (BYTE3(QuestPhaseEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !QuestPhaseEntity___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(QuestPhaseEntity___c_TypeInfo);
              v22 = QuestPhaseEntity___c_TypeInfo;
            }
            static_fields = v22->static_fields;
            _9__109_0 = (System_Converter_BattleActionData_HealData__int__o *)static_fields->__9__109_0;
            if ( !_9__109_0 )
            {
              if ( (BYTE3(v22->vtable._0_Equals.methodPtr) & 4) != 0 && !v22->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v22);
                static_fields = QuestPhaseEntity___c_TypeInfo->static_fields;
              }
              v25 = (Il2CppObject *)static_fields->__9;
              _9__109_0 = (System_Converter_BattleActionData_HealData__int__o *)sub_B2C42C(System_Converter_object__int__TypeInfo);
              System_Converter_BattleActionData_HealData__int____ctor(
                _9__109_0,
                v25,
                Method_QuestPhaseEntity___c__SetNpcAiInfo_b__109_0__,
                (const MethodInfo_24E026C *)Method_System_Converter_object__int___ctor__);
              v26 = QuestPhaseEntity___c_TypeInfo->static_fields;
              v26->__9__109_0 = (struct System_Converter_object__int__o *)_9__109_0;
              sub_B2C2F8(
                (BattleServantConfConponent_o *)&v26->__9__109_0,
                (System_Int32_array **)_9__109_0,
                v27,
                v28,
                v29,
                v30,
                v31,
                v32);
            }
            v33 = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_BattleActionData_HealData___ConvertAll_int_(
                                                              v21,
                                                              (System_Converter_T__TOutput__o *)_9__109_0,
                                                              (const MethodInfo_18F3C28 *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
            if ( !v33
              || (v33 = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_int___ToArray(
                                                                    v33,
                                                                    (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__),
                  !dicNpcAiId) )
            {
              sub_B2C434(v33, v34);
            }
            klass = dicNpcAiId->klass;
            v37 = v33;
            if ( *(_WORD *)&dicNpcAiId->klass->_2.bitflags1 )
            {
              v38 = 0LL;
              p_offset = &klass->_1.interfaceOffsets->offset;
              while ( *((System_Collections_Generic_IDictionary_int__int____c **)p_offset - 1) != System_Collections_Generic_IDictionary_int__int____TypeInfo )
              {
                ++v38;
                p_offset += 4;
                if ( v38 >= *(unsigned __int16 *)&dicNpcAiId->klass->_2.bitflags1 )
                  goto LABEL_26;
              }
              p_method = (__int64)&klass->vtable[*p_offset + 1].method;
            }
            else
            {
LABEL_26:
              p_method = sub_AC5258(dicNpcAiId, System_Collections_Generic_IDictionary_int__int____TypeInfo, 1LL, v35);
            }
            (*(void (__fastcall **)(System_Collections_Generic_IDictionary_int__int____o *, _QWORD, System_Collections_Generic_List_int__o *, _QWORD))p_method)(
              dicNpcAiId,
              (unsigned int)Value_long,
              v37,
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


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall QuestPhaseEntity__getBattleEffectId(
        QuestPhaseEntity_o *this,
        int32_t defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4186F03 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_16643/*"battleEffectId"*/, *(_QWORD *)&defVal);
    byte_4186F03 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_16643/*"battleEffectId"*/, defVal, v3);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall QuestPhaseEntity__getBattleFieldMotionId(
        QuestPhaseEntity_o *this,
        int32_t defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4186F05 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_18712/*"fieldMotionId"*/, *(_QWORD *)&defVal);
    byte_4186F05 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_18712/*"fieldMotionId"*/, defVal, v3);
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
  __int64 v11; // x0

  if ( (byte_4186F06 & 1) == 0 )
  {
    sub_B2C35C(&int___TypeInfo, defVals);
    sub_B2C35C(&StringLiteral_18713/*"fieldMotionIds"*/, v6);
    byte_4186F06 = 1;
  }
  result = QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_18713/*"fieldMotionIds"*/, defVals, v3);
  if ( !result )
    goto LABEL_10;
  if ( *(_QWORD *)&result->max_length )
    return result;
  BattleFieldMotionId = QuestPhaseEntity__getBattleFieldMotionId(this, -1, v9);
  result = defVals;
  if ( BattleFieldMotionId == -1 )
    return result;
  result = (System_Int32_array *)sub_B2C374(int___TypeInfo, 1LL);
  if ( !result )
LABEL_10:
    sub_B2C434(result, v8);
  if ( !result->max_length )
  {
    v11 = sub_B2C460(result);
    sub_B2C400(v11, 0LL);
  }
  result->m_Items[1] = BattleFieldMotionId;
  return result;
}


int32_t __fastcall QuestPhaseEntity__getBreakOnBattleWinWaitMSec(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4186F11 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_16933/*"breakOnBattleWinWaitMSec"*/, method);
    byte_4186F11 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_16933/*"breakOnBattleWinWaitMSec"*/, 0, v2);
}


System_Int32_array *__fastcall QuestPhaseEntity__getEventGrounpIds(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Int32_array *v4; // x2
  const MethodInfo *v5; // x3

  if ( (byte_4186F07 & 1) == 0 )
  {
    sub_B2C35C(&int___TypeInfo, method);
    sub_B2C35C(&StringLiteral_18471/*"eventGroupId"*/, v3);
    byte_4186F07 = 1;
  }
  v4 = (System_Int32_array *)sub_B2C374(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_18471/*"eventGroupId"*/, v4, v5);
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

  if ( (byte_4186F43 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_19147/*"hintLeftIndent"*/, method);
    byte_4186F43 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19147/*"hintLeftIndent"*/, -1, v2);
}


System_String_o *__fastcall QuestPhaseEntity__getHintMessage(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1

  if ( (byte_4186F42 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_19148/*"hintMessage"*/, method);
    sub_B2C35C(&StringLiteral_1/*""*/, v4);
    byte_4186F42 = 1;
  }
  return QuestPhaseEntity__getScriptStr(
           this,
           (System_String_o *)StringLiteral_19148/*"hintMessage"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


System_String_o *__fastcall QuestPhaseEntity__getHintMessageTitle(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1

  if ( (byte_4186F41 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1/*""*/, method);
    sub_B2C35C(&StringLiteral_19150/*"hintTitle"*/, v4);
    byte_4186F41 = 1;
  }
  return QuestPhaseEntity__getScriptStr(
           this,
           (System_String_o *)StringLiteral_19150/*"hintTitle"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


int32_t __fastcall QuestPhaseEntity__getHintOpenType(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4186F44 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_19149/*"hintOpenType"*/, method);
    byte_4186F44 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19149/*"hintOpenType"*/, 0, v2);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall QuestPhaseEntity__getLeave(QuestPhaseEntity_o *this, int32_t defVal, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4186F02 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_20205/*"leave"*/, *(_QWORD *)&defVal);
    byte_4186F02 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20205/*"leave"*/, defVal, v3);
}


int32_t __fastcall QuestPhaseEntity__getPhase(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  return this->fields.phase;
}


int32_t __fastcall QuestPhaseEntity__getPlayerExp(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  return this->fields.playerExp;
}


System_Int32_array *__fastcall QuestPhaseEntity__getPrioredIndividuality(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  System_Int32_array *individuality; // x3
  int32_t phase; // w19
  int32_t questId; // w20
  QuestBehaviorMaster_o *v10; // x21

  if ( (byte_4186EF3 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestBehaviorMaster___, method);
    sub_B2C35C(&int___TypeInfo, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4186EF3 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestBehaviorMaster___);
  individuality = this->fields.individuality;
  questId = this->fields.questId;
  phase = this->fields.phase;
  v10 = (QuestBehaviorMaster_o *)Instance;
  if ( !individuality )
  {
    Instance = (DataManager_o *)sub_B2C374(int___TypeInfo, 0LL);
    individuality = (System_Int32_array *)Instance;
  }
  if ( !v10 )
LABEL_8:
    sub_B2C434(Instance, v6);
  return QuestBehaviorMaster__getBattleIndividuality(v10, questId, phase, individuality, 0LL);
}


int32_t __fastcall QuestPhaseEntity__getQuestId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  return this->fields.questId;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall QuestPhaseEntity__getResultBgmId(QuestPhaseEntity_o *this, int32_t defVal, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4186EFD & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_21799/*"resultBgmId"*/, *(_QWORD *)&defVal);
    byte_4186EFD = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21799/*"resultBgmId"*/, defVal, v3);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall QuestPhaseEntity__getResultEffectId(
        QuestPhaseEntity_o *this,
        int32_t defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4186F01 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_21800/*"resultEffectId"*/, *(_QWORD *)&defVal);
    byte_4186F01 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21800/*"resultEffectId"*/, defVal, v3);
}


System_Int32_array *__fastcall QuestPhaseEntity__getResultEnemyVoiceIds(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Int32_array *v4; // x2
  const MethodInfo *v5; // x3

  if ( (byte_4186F0B & 1) == 0 )
  {
    sub_B2C35C(&int___TypeInfo, method);
    sub_B2C35C(&StringLiteral_21801/*"resultEnemyVoiceIds"*/, v3);
    byte_4186F0B = 1;
  }
  v4 = (System_Int32_array *)sub_B2C374(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_21801/*"resultEnemyVoiceIds"*/, v4, v5);
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
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *ScriptObjListParam; // x0
  System_Collections_Generic_List_BattleActionData_HealData__o *v13; // x19
  QuestPhaseEntity___c_c *v14; // x0
  struct QuestPhaseEntity___c_StaticFields *static_fields; // x8
  System_Converter_BattleActionData_HealData__int__o *_9__26_0; // x20
  Il2CppObject *v17; // x21
  struct QuestPhaseEntity___c_StaticFields *v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Collections_Generic_List_int__o *v25; // x0
  __int64 v26; // x1

  if ( (byte_4186EF5 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Converter_object__int___ctor__, key);
    sub_B2C35C(&System_Converter_object__int__TypeInfo, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_object__ConvertAll_int___, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, v9);
    sub_B2C35C(&Method_QuestPhaseEntity___c__getScriptIntArrayParam_b__26_0__, v10);
    sub_B2C35C(&QuestPhaseEntity___c_TypeInfo, v11);
    byte_4186EF5 = 1;
  }
  ScriptObjListParam = QuestPhaseEntity__getScriptObjListParam(this, key, (const MethodInfo *)defVal);
  if ( !ScriptObjListParam )
    return defVal;
  v13 = (System_Collections_Generic_List_BattleActionData_HealData__o *)ScriptObjListParam;
  v14 = QuestPhaseEntity___c_TypeInfo;
  if ( (BYTE3(QuestPhaseEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestPhaseEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestPhaseEntity___c_TypeInfo);
    v14 = QuestPhaseEntity___c_TypeInfo;
  }
  static_fields = v14->static_fields;
  _9__26_0 = (System_Converter_BattleActionData_HealData__int__o *)static_fields->__9__26_0;
  if ( !_9__26_0 )
  {
    if ( (BYTE3(v14->vtable._0_Equals.methodPtr) & 4) != 0 && !v14->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v14);
      static_fields = QuestPhaseEntity___c_TypeInfo->static_fields;
    }
    v17 = (Il2CppObject *)static_fields->__9;
    _9__26_0 = (System_Converter_BattleActionData_HealData__int__o *)sub_B2C42C(System_Converter_object__int__TypeInfo);
    System_Converter_BattleActionData_HealData__int____ctor(
      _9__26_0,
      v17,
      Method_QuestPhaseEntity___c__getScriptIntArrayParam_b__26_0__,
      (const MethodInfo_24E026C *)Method_System_Converter_object__int___ctor__);
    v18 = QuestPhaseEntity___c_TypeInfo->static_fields;
    v18->__9__26_0 = (struct System_Converter_object__int__o *)_9__26_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v18->__9__26_0,
      (System_Int32_array **)_9__26_0,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
  }
  v25 = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_BattleActionData_HealData___ConvertAll_int_(
                                                    v13,
                                                    (System_Converter_T__TOutput__o *)_9__26_0,
                                                    (const MethodInfo_18F3C28 *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
  if ( !v25 )
    sub_B2C434(0LL, v26);
  return System_Collections_Generic_List_int___ToArray(
           v25,
           (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  QuestPhaseEntity_o *v9; // x0
  System_String_o *v10; // x1
  const MethodInfo *v11; // x2

  v4 = defVal;
  if ( (byte_4186EF4 & 1) == 0 )
  {
    sub_B2C35C(&long_TypeInfo, key);
    byte_4186EF4 = 1;
  }
  ScriptObj = QuestPhaseEntity__getScriptObj(this, key, *(const MethodInfo **)&defVal);
  if ( !ScriptObj )
    return v4;
  if ( ScriptObj->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(ScriptObj);
  v9 = (QuestPhaseEntity_o *)sub_B2C728(ScriptObj);
  return (unsigned int)QuestPhaseEntity__getScriptObj(v9, v10, v11);
}


Il2CppObject *__fastcall QuestPhaseEntity__getScriptObj(
        QuestPhaseEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  Il2CppObject *result; // x0
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4186EF9 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, key);
    byte_4186EF9 = 1;
  }
  value = 0LL;
  result = (Il2CppObject *)this->fields.script;
  if ( result )
  {
    value = 0LL;
    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)result,
           (System_Xml_XmlQualifiedName_o *)key,
           &value,
           (const MethodInfo_2DB3AC0 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      return (Il2CppObject *)value;
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

  if ( (byte_4186EF7 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_object__ToArray__, key);
    byte_4186EF7 = 1;
  }
  ScriptObjListParam = QuestPhaseEntity__getScriptObjListParam(this, key, (const MethodInfo *)defVal);
  if ( ScriptObjListParam )
    return (System_Object_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)ScriptObjListParam,
                                    (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_object__ToArray__);
  else
    return (System_Object_array *)defVal;
}


System_Collections_Generic_List_object__o *__fastcall QuestPhaseEntity__getScriptObjListParam(
        QuestPhaseEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *result; // x0
  __int64 v6; // x9
  QuestPhaseEntity_o *v7; // x0
  System_String_o *v8; // x1
  System_String_array *v9; // x2
  const MethodInfo *v10; // x3

  if ( (byte_4186EF8 & 1) == 0 )
  {
    sub_B2C35C(&System_Collections_Generic_List_object__TypeInfo, key);
    byte_4186EF8 = 1;
  }
  result = (System_Collections_Generic_List_object__o *)QuestPhaseEntity__getScriptObj(this, key, method);
  if ( result )
  {
    v6 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
    if ( *(&result->klass->_2.bitflags2 + 1) < (unsigned int)v6
      || (System_Collections_Generic_List_object__c *)result->klass->_2.typeHierarchy[v6 - 1] != System_Collections_Generic_List_object__TypeInfo )
    {
      v7 = (QuestPhaseEntity_o *)sub_B2C728(result);
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
  System_String_o *Item; // x0
  QuestPhaseEntity_o *v14; // x0
  const MethodInfo *v15; // x1

  if ( (byte_4186EFA & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    sub_B2C35C(&string_TypeInfo, v8);
    byte_4186EFA = 1;
  }
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)key,
          (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return defVal;
  }
  v11 = this->fields.script;
  if ( !v11 )
    sub_B2C434(0LL, v10);
  Item = (System_String_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                              (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v11,
                              (System_Type_o *)key,
                              (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  defVal = Item;
  if ( !Item || Item->klass == string_TypeInfo )
    return defVal;
  v14 = (QuestPhaseEntity_o *)sub_B2C728(Item);
  return (System_String_o *)QuestPhaseEntity__GetOverwriteEquipSkills(v14, v15);
}


System_String_array *__fastcall QuestPhaseEntity__getScriptStringArrayParam(
        QuestPhaseEntity_o *this,
        System_String_o *key,
        System_String_array *defVal,
        const MethodInfo *method)
{
  System_String_array *v4; // x20
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *ScriptObjListParam; // x0
  System_Collections_Generic_List_string__o *v13; // x19
  QuestPhaseEntity___c_c *v14; // x0
  struct QuestPhaseEntity___c_StaticFields *static_fields; // x8
  System_Converter_string__string__o *_9__27_0; // x20
  Il2CppObject *v17; // x21
  struct QuestPhaseEntity___c_StaticFields *v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Collections_Generic_List_WarBoardUiData_SaveData__o *v25; // x0
  __int64 v26; // x1

  v4 = defVal;
  if ( (byte_4186EF6 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Converter_object__string___ctor__, key);
    sub_B2C35C(&System_Converter_object__string__TypeInfo, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_object__ConvertAll_string___, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__ToArray__, v9);
    sub_B2C35C(&Method_QuestPhaseEntity___c__getScriptStringArrayParam_b__27_0__, v10);
    sub_B2C35C(&QuestPhaseEntity___c_TypeInfo, v11);
    byte_4186EF6 = 1;
  }
  ScriptObjListParam = QuestPhaseEntity__getScriptObjListParam(this, key, (const MethodInfo *)defVal);
  if ( ScriptObjListParam )
  {
    v13 = (System_Collections_Generic_List_string__o *)ScriptObjListParam;
    v14 = QuestPhaseEntity___c_TypeInfo;
    if ( (BYTE3(QuestPhaseEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestPhaseEntity___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestPhaseEntity___c_TypeInfo);
      v14 = QuestPhaseEntity___c_TypeInfo;
    }
    static_fields = v14->static_fields;
    _9__27_0 = (System_Converter_string__string__o *)static_fields->__9__27_0;
    if ( !_9__27_0 )
    {
      if ( (BYTE3(v14->vtable._0_Equals.methodPtr) & 4) != 0 && !v14->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v14);
        static_fields = QuestPhaseEntity___c_TypeInfo->static_fields;
      }
      v17 = (Il2CppObject *)static_fields->__9;
      _9__27_0 = (System_Converter_string__string__o *)sub_B2C42C(System_Converter_object__string__TypeInfo);
      System_Converter_string__string____ctor(
        _9__27_0,
        v17,
        Method_QuestPhaseEntity___c__getScriptStringArrayParam_b__27_0__,
        (const MethodInfo_24E064C *)Method_System_Converter_object__string___ctor__);
      v18 = QuestPhaseEntity___c_TypeInfo->static_fields;
      v18->__9__27_0 = (struct System_Converter_object__string__o *)_9__27_0;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v18->__9__27_0,
        (System_Int32_array **)_9__27_0,
        v19,
        v20,
        v21,
        v22,
        v23,
        v24);
    }
    v25 = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)System_Collections_Generic_List_string___ConvertAll_string_(
                                                                          v13,
                                                                          (System_Converter_T__TOutput__o *)_9__27_0,
                                                                          (const MethodInfo_18F3D34 *)Method_System_Collections_Generic_List_object__ConvertAll_string___);
    if ( !v25 )
      sub_B2C434(0LL, v26);
    return (System_String_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    v25,
                                    (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_string__ToArray__);
  }
  return v4;
}


int32_t __fastcall QuestPhaseEntity__getSpecialShadowEffectId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4186F1C & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_19034/*"getSpecialShadowEffectId"*/, method);
    byte_4186F1C = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19034/*"getSpecialShadowEffectId"*/, 0, v2);
}


int32_t __fastcall QuestPhaseEntity__getTurnSituationType(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4186F1B & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_22822/*"turnSituationType"*/, method);
    byte_4186F1B = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22822/*"turnSituationType"*/, 0, v2);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall QuestPhaseEntity__getUniqueCameraId(
        QuestPhaseEntity_o *this,
        int32_t defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4186F04 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_22903/*"uniqueCameraId"*/, *(_QWORD *)&defVal);
    byte_4186F04 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22903/*"uniqueCameraId"*/, defVal, v3);
}


bool __fastcall QuestPhaseEntity__isBattleFinishCameraTargetAll(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4186F1A & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_16645/*"battleFinishCameraTargetAll"*/, method);
    byte_4186F1A = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_16645/*"battleFinishCameraTargetAll"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__isBreakOnBattleWin(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4186F0F & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_16931/*"breakOnBattleWin"*/, method);
    byte_4186F0F = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_16931/*"breakOnBattleWin"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__isBreakOnBattleWinFadeColorBlack(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4186F10 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_16932/*"breakOnBattleWinFadeColorBlack"*/, method);
    byte_4186F10 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_16932/*"breakOnBattleWinFadeColorBlack"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__isDisableChangeRaidDownMessage(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4186F1D & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_19927/*"isDisableChangeRaidDownMessage"*/, method);
    byte_4186F1D = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19927/*"isDisableChangeRaidDownMessage"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__isDispLoseResult(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4186F0C & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_21802/*"resultLoseDisp"*/, method);
    byte_4186F0C = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21802/*"resultLoseDisp"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__isFadeOutBgmBeforeMovie(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4186F00 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_6544/*"FadeOutBgmBeforeMovie"*/, method);
    byte_4186F00 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_6544/*"FadeOutBgmBeforeMovie"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__isNoResult(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4186F0E & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_21100/*"noResult"*/, method);
    byte_4186F0E = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21100/*"noResult"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__isTurnSituationType(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  return QuestPhaseEntity__getTurnSituationType(this, method) > 0;
}


void __fastcall QuestPhaseEntity___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct QuestPhaseEntity___c_StaticFields *static_fields; // x0

  if ( (byte_4185608 & 1) == 0 )
  {
    sub_B2C35C(&QuestPhaseEntity___c_TypeInfo, v1);
    byte_4185608 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(QuestPhaseEntity___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = QuestPhaseEntity___c_TypeInfo->static_fields;
  static_fields->__9 = (struct QuestPhaseEntity___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
}


void __fastcall QuestPhaseEntity___c___ctor(QuestPhaseEntity___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall QuestPhaseEntity___c___SetNpcAiInfo_b__109_0(
        QuestPhaseEntity___c_o *this,
        Il2CppObject *x,
        const MethodInfo *method)
{
  System_String_o *v4; // x0

  if ( (byte_418560A & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1/*""*/, x);
    byte_418560A = 1;
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


int32_t __fastcall QuestPhaseEntity___c___getScriptIntArrayParam_b__26_0(
        QuestPhaseEntity___c_o *this,
        Il2CppObject *x,
        const MethodInfo *method)
{
  System_String_o *v4; // x0

  if ( (byte_4185609 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1/*""*/, x);
    byte_4185609 = 1;
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


System_String_o *__fastcall QuestPhaseEntity___c___getScriptStringArrayParam_b__27_0(
        QuestPhaseEntity___c_o *this,
        Il2CppObject *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
  return (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))x->klass->vtable[3].method)(
                              x,
                              x->klass->vtable[4].methodPtr);
}


void __fastcall QuestPhaseEntity___c__DisplayClass108_0___ctor(
        QuestPhaseEntity___c__DisplayClass108_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestPhaseEntity___c__DisplayClass108_0___GetNpcAiInfo_b__0(
        QuestPhaseEntity___c__DisplayClass108_0_o *this,
        Il2CppObject *val,
        const MethodInfo *method)
{
  QuestPhaseEntity__SetNpcAiInfo(
    (System_Collections_Generic_IDictionary_int__int____o *)this->fields.dicNpcAiId,
    val,
    0LL);
}