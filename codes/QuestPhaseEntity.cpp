void __fastcall QuestPhaseEntity___ctor(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4213D1B & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataEntityBase_string___ctor__, method);
    byte_4213D1B = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_2669B20 *)Method_DataEntityBase_string___ctor__);
}


void __fastcall QuestPhaseEntity___ctor_23291108(
        QuestPhaseEntity_o *this,
        QuestPhaseEntity_o *cSrc,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_Array_o *classIds; // x0
  Il2CppObject *v14; // x0
  Il2CppObject *v15; // x21
  struct System_Int32_array *v16; // x1
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Array_o *individuality; // x0
  Il2CppObject *v24; // x0
  struct System_Int32_array *v25; // x1
  struct System_Int32_array **p_individuality; // x20

  if ( (byte_4213D1C & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataEntityBase_string___ctor__, cSrc);
    sub_B0D8A4(&int___TypeInfo, v5);
    byte_4213D1C = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_2669B20 *)Method_DataEntityBase_string___ctor__);
  if ( !cSrc )
    sub_B0D97C(v6);
  this->fields.questId = cSrc->fields.questId;
  this->fields.phase = cSrc->fields.phase;
  this->fields.isNpcOnly = cSrc->fields.isNpcOnly;
  this->fields.battleBgId = cSrc->fields.battleBgId;
  this->fields.battleBgType = cSrc->fields.battleBgType;
  this->fields.playerExp = cSrc->fields.playerExp;
  this->fields.friendshipExp = cSrc->fields.friendshipExp;
  classIds = (System_Array_o *)cSrc->fields.classIds;
  if ( classIds && (v14 = System_Array__Clone(classIds, 0LL)) != 0LL )
  {
    v15 = v14;
    v16 = (struct System_Int32_array *)sub_B0D964(v14, int___TypeInfo);
    if ( !v16 )
      goto LABEL_12;
  }
  else
  {
    v16 = 0LL;
  }
  this->fields.classIds = v16;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.classIds,
    (System_Int32_array **)v16,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  individuality = (System_Array_o *)cSrc->fields.individuality;
  if ( !individuality )
    goto LABEL_13;
  v24 = System_Array__Clone(individuality, 0LL);
  if ( !v24 )
    goto LABEL_13;
  v15 = v24;
  v25 = (struct System_Int32_array *)sub_B0D964(v24, int___TypeInfo);
  if ( !v25 )
  {
LABEL_12:
    sub_B0DC70(v15);
LABEL_13:
    v25 = 0LL;
  }
  this->fields.individuality = v25;
  p_individuality = &this->fields.individuality;
  sub_B0D840((BattleServantConfConponent_o *)p_individuality, (System_Int32_array **)v25, v17, v18, v19, v20, v21, v22);
  *((_DWORD *)p_individuality + 2) = cSrc->fields.giftId;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall QuestPhaseEntity__CreatePK(int32_t questId, int32_t phase, const MethodInfo *method)
{
  if ( (byte_4213D1A & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&phase);
    byte_4213D1A = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           questId,
           phase,
           (const MethodInfo_171341C *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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

  if ( (byte_4213D26 & 1) == 0 )
  {
    sub_B0D8A4(&System_Collections_Generic_Dictionary_string__object__TypeInfo, method);
    sub_B0D8A4(&StringLiteral_16299/*"addEquipSkills"*/, v4);
    byte_4213D26 = 1;
  }
  result = (System_Collections_Generic_Dictionary_string__object__o *)QuestPhaseEntity__getScriptObj(
                                                                        this,
                                                                        (System_String_o *)StringLiteral_16299/*"addEquipSkills"*/,
                                                                        v2);
  if ( result )
  {
    v6 = *(&System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.bitflags2 + 1);
    if ( *(&result->klass->_2.bitflags2 + 1) < (unsigned int)v6
      || (System_Collections_Generic_Dictionary_string__object__c *)result->klass->_2.typeHierarchy[v6 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
    {
      v7 = (QuestPhaseEntity_o *)sub_B0DC70(result);
      return (System_Collections_Generic_Dictionary_string__object__o *)QuestPhaseEntity__getResultBgmId(v7, v8, v9);
    }
  }
  return result;
}


int32_t __fastcall QuestPhaseEntity__GetAdvantageClassId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4213D55 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_16586/*"auto_sel_support_type"*/, method);
    byte_4213D55 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_16586/*"auto_sel_support_type"*/, -1, v2);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetAssistIdArray(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Int32_array *v4; // x2
  const MethodInfo *v5; // x3

  if ( (byte_4213D64 & 1) == 0 )
  {
    sub_B0D8A4(&int___TypeInfo, method);
    sub_B0D8A4(&StringLiteral_16547/*"assistIds"*/, v3);
    byte_4213D64 = 1;
  }
  v4 = (System_Int32_array *)sub_B0D8BC(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_16547/*"assistIds"*/, v4, v5);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetAssistWeightArray(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Int32_array *v4; // x2
  const MethodInfo *v5; // x3

  if ( (byte_4213D65 & 1) == 0 )
  {
    sub_B0D8A4(&int___TypeInfo, method);
    sub_B0D8A4(&StringLiteral_16546/*"assistIdWeight"*/, v3);
    byte_4213D65 = 1;
  }
  v4 = (System_Int32_array *)sub_B0D8BC(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_16546/*"assistIdWeight"*/, v4, v5);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetAssumedEffectId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4213D77 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_16550/*"assumedEffectId"*/, method);
    byte_4213D77 = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_16550/*"assumedEffectId"*/, 0LL);
}


System_String_o *__fastcall QuestPhaseEntity__GetBattleFinishMovie(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4213D3C & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_16695/*"battleFinishMovie"*/, method);
    byte_4213D3C = 1;
  }
  return QuestPhaseEntity__getScriptStr(this, (System_String_o *)StringLiteral_16695/*"battleFinishMovie"*/, 0LL, v2);
}


int32_t __fastcall QuestPhaseEntity__GetBattleFinishWaitTime(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4213D7E & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_16696/*"battleFinishWaitTime"*/, method);
    byte_4213D7E = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_16696/*"battleFinishWaitTime"*/, 0, v2);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall QuestPhaseEntity__GetBeforeBattleSkillActor(
        QuestPhaseEntity_o *this,
        int32_t defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4213D7F & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_16736/*"beforeBattleSkillActor"*/, *(_QWORD *)&defVal);
    byte_4213D7F = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_16736/*"beforeBattleSkillActor"*/, defVal, v3);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetClearGiftItemListDisplay(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Int32_array *v4; // x2
  const MethodInfo *v5; // x3

  if ( (byte_4213D74 & 1) == 0 )
  {
    sub_B0D8A4(&int___TypeInfo, method);
    sub_B0D8A4(&StringLiteral_17518/*"clearGiftItemListDisplay"*/, v3);
    byte_4213D74 = 1;
  }
  v4 = (System_Int32_array *)sub_B0D8BC(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_17518/*"clearGiftItemListDisplay"*/, v4, v5);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetCondHavingIds(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Int32_array *v4; // x2
  const MethodInfo *v5; // x3

  if ( (byte_4213D60 & 1) == 0 )
  {
    sub_B0D8A4(&int___TypeInfo, method);
    sub_B0D8A4(&StringLiteral_17699/*"condHaving"*/, v3);
    byte_4213D60 = 1;
  }
  v4 = (System_Int32_array *)sub_B0D8BC(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_17699/*"condHaving"*/, v4, v5);
}


int32_t __fastcall QuestPhaseEntity__GetCorrectionIconId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4213D54 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_17763/*"correctionIconId"*/, method);
    byte_4213D54 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_17763/*"correctionIconId"*/, -1, v2);
}


int32_t __fastcall QuestPhaseEntity__GetDefenceTargetContinueRecoverRate(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4213D89 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_18762/*"fieldHpContinueRecoverRate"*/, method);
    byte_4213D89 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_18762/*"fieldHpContinueRecoverRate"*/, 0, v2);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetEnemyInfoDispNpcSvtIdList(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Int32_array *v4; // x2
  const MethodInfo *v5; // x3

  if ( (byte_4213D72 & 1) == 0 )
  {
    sub_B0D8A4(&int___TypeInfo, method);
    sub_B0D8A4(&StringLiteral_21432/*"overwriteEnemyInfos"*/, v3);
    byte_4213D72 = 1;
  }
  v4 = (System_Int32_array *)sub_B0D8BC(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_21432/*"overwriteEnemyInfos"*/, v4, v5);
}


System_String_array *__fastcall QuestPhaseEntity__GetEnemyInfoOverwriteNpcSvtNameList(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_String_array *v4; // x2
  const MethodInfo *v5; // x3

  if ( (byte_4213D73 & 1) == 0 )
  {
    sub_B0D8A4(&string___TypeInfo, method);
    sub_B0D8A4(&StringLiteral_21431/*"overwriteEnemyInfoNames"*/, v3);
    byte_4213D73 = 1;
  }
  v4 = (System_String_array *)sub_B0D8BC(string___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptStringArrayParam(this, (System_String_o *)StringLiteral_21431/*"overwriteEnemyInfoNames"*/, v4, v5);
}


int32_t __fastcall QuestPhaseEntity__GetEquipAddId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4213D71 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_18445/*"equipAddId"*/, method);
    byte_4213D71 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_18445/*"equipAddId"*/, 0, v2);
}


int32_t __fastcall QuestPhaseEntity__GetFinishEffectId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4213D51 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_18799/*"finishEffectId"*/, method);
    byte_4213D51 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_18799/*"finishEffectId"*/, -1, v2);
}


int32_t __fastcall QuestPhaseEntity__GetFormationBgmId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4213D78 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_18876/*"formationBgmId"*/, method);
    byte_4213D78 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_18876/*"formationBgmId"*/, -1, v2);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetGimmickAnimTypeArray(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4213D4F & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_19114/*"gimmickAnimType"*/, method);
    byte_4213D4F = 1;
  }
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_19114/*"gimmickAnimType"*/, 0LL, v2);
}


int32_t __fastcall QuestPhaseEntity__GetGimmickId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4213D48 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_19115/*"gimmickId"*/, method);
    byte_4213D48 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19115/*"gimmickId"*/, -1, v2);
}


System_Object_array *__fastcall QuestPhaseEntity__GetGimmickResultVoiceArray(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4213D4E & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_21874/*"resultVoice"*/, method);
    byte_4213D4E = 1;
  }
  return QuestPhaseEntity__getScriptObjArrayParam(this, (System_String_o *)StringLiteral_21874/*"resultVoice"*/, 0LL, v2);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetGimmickSkillIdArray(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Int32_array *v4; // x2
  const MethodInfo *v5; // x3

  if ( (byte_4213D4B & 1) == 0 )
  {
    sub_B0D8A4(&int___TypeInfo, method);
    sub_B0D8A4(&StringLiteral_21802/*"reelSkill"*/, v3);
    byte_4213D4B = 1;
  }
  v4 = (System_Int32_array *)sub_B0D8BC(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_21802/*"reelSkill"*/, v4, v5);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetGimmickSkillRateArray(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Int32_array *v4; // x2
  const MethodInfo *v5; // x3

  if ( (byte_4213D4C & 1) == 0 )
  {
    sub_B0D8A4(&int___TypeInfo, method);
    sub_B0D8A4(&StringLiteral_21801/*"reelRate"*/, v3);
    byte_4213D4C = 1;
  }
  v4 = (System_Int32_array *)sub_B0D8BC(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_21801/*"reelRate"*/, v4, v5);
}


System_String_array *__fastcall QuestPhaseEntity__GetGimmickStartVoiceArray(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4213D4D & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_22361/*"startVoice"*/, method);
    byte_4213D4D = 1;
  }
  return QuestPhaseEntity__getScriptStringArrayParam(this, (System_String_o *)StringLiteral_22361/*"startVoice"*/, 0LL, v2);
}


int32_t __fastcall QuestPhaseEntity__GetGimmickSvtId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4213D49 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_19116/*"gimmickSvtId"*/, method);
    byte_4213D49 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19116/*"gimmickSvtId"*/, -1, v2);
}


float __fastcall QuestPhaseEntity__GetIncomingCallDispTime(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4213D82 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_19833/*"incomingCallDispTime"*/, method);
    byte_4213D82 = 1;
  }
  return (float)QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19833/*"incomingCallDispTime"*/, 500, v2) / 1000.0;
}


System_String_o *__fastcall QuestPhaseEntity__GetIncomingCallMessage(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1

  if ( (byte_4213D81 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_19834/*"incomingCallMessage"*/, method);
    sub_B0D8A4(&StringLiteral_1/*""*/, v4);
    byte_4213D81 = 1;
  }
  return QuestPhaseEntity__getScriptStr(
           this,
           (System_String_o *)StringLiteral_19834/*"incomingCallMessage"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


System_String_o *__fastcall QuestPhaseEntity__GetIncomingCallTitle(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1

  if ( (byte_4213D80 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_19835/*"incomingCallTitle"*/, method);
    sub_B0D8A4(&StringLiteral_1/*""*/, v4);
    byte_4213D80 = 1;
  }
  return QuestPhaseEntity__getScriptStr(
           this,
           (System_String_o *)StringLiteral_19835/*"incomingCallTitle"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


System_String_o *__fastcall QuestPhaseEntity__GetMapModelEntryAnimationName(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1

  if ( (byte_4213D7C & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_1175/*"3dMapEntryAnimName"*/, method);
    sub_B0D8A4(&StringLiteral_1/*""*/, v4);
    byte_4213D7C = 1;
  }
  return QuestPhaseEntity__getScriptStr(
           this,
           (System_String_o *)StringLiteral_1175/*"3dMapEntryAnimName"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


int32_t __fastcall QuestPhaseEntity__GetMasterSkillDelay(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4213D5A & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_20470/*"masterSkillDelay"*/, method);
    byte_4213D5A = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20470/*"masterSkillDelay"*/, 0, v2);
}


System_String_o *__fastcall QuestPhaseEntity__GetMasterSkillDelayInfo(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4213D5B & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_20471/*"masterSkillDelayInfo"*/, method);
    byte_4213D5B = 1;
  }
  return QuestPhaseEntity__getScriptStr(this, (System_String_o *)StringLiteral_20471/*"masterSkillDelayInfo"*/, 0LL, v2);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetMoveSceneInfo(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Int32_array *v4; // x2
  const MethodInfo *v5; // x3

  if ( (byte_4213D84 & 1) == 0 )
  {
    sub_B0D8A4(&int___TypeInfo, method);
    sub_B0D8A4(&StringLiteral_20642/*"moveSceneInfo"*/, v3);
    byte_4213D84 = 1;
  }
  v4 = (System_Int32_array *)sub_B0D8BC(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_20642/*"moveSceneInfo"*/, v4, v5);
}


int32_t __fastcall QuestPhaseEntity__GetMovieAfterCrossFadeStartFrame(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4213D43 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_20646/*"movieAfterCrossFadeStartFrame"*/, method);
    byte_4213D43 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20646/*"movieAfterCrossFadeStartFrame"*/, 0, v2);
}


int32_t __fastcall QuestPhaseEntity__GetMovieAfterCrossFadeTime(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4213D42 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_20647/*"movieAfterCrossFadeTime"*/, method);
    byte_4213D42 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20647/*"movieAfterCrossFadeTime"*/, 0, v2);
}


int32_t __fastcall QuestPhaseEntity__GetNextSceneId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4213D5E & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_21132/*"nextSceneId"*/, method);
    byte_4213D5E = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21132/*"nextSceneId"*/, 0, v2);
}


System_String_array *__fastcall QuestPhaseEntity__GetNextSceneParam(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1
  System_String_array *result; // x0
  System_String_o *v6; // x19
  System_Char_array *v7; // x0
  __int64 v8; // x0

  if ( (byte_4213D5F & 1) == 0 )
  {
    sub_B0D8A4(&char___TypeInfo, method);
    sub_B0D8A4(&StringLiteral_21133/*"nextSceneParam"*/, v4);
    byte_4213D5F = 1;
  }
  result = (System_String_array *)QuestPhaseEntity__getScriptStr(this, (System_String_o *)StringLiteral_21133/*"nextSceneParam"*/, 0LL, v2);
  if ( result )
  {
    v6 = (System_String_o *)result;
    v7 = (System_Char_array *)sub_B0D8BC(char___TypeInfo, 1LL);
    if ( !v7 )
      sub_B0D97C(0LL);
    if ( !v7->max_length )
    {
      v8 = sub_B0D9A8(v7);
      sub_B0D948(v8, 0LL);
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

  if ( (byte_4213D61 & 1) == 0 )
  {
    sub_B0D8A4(&int___TypeInfo, method);
    sub_B0D8A4(&StringLiteral_21211/*"notHavingQuest"*/, v3);
    byte_4213D61 = 1;
  }
  v4 = (System_Int32_array *)sub_B0D8BC(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_21211/*"notHavingQuest"*/, v4, v5);
}


System_Collections_Generic_Dictionary_int__int____o *__fastcall QuestPhaseEntity__GetNpcAiInfo(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x21
  __int64 v15; // x1
  __int64 v16; // x2
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v17; // x22
  struct System_Collections_Generic_Dictionary_string__object__o *v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Collections_Generic_Dictionary_int__int____o **v25; // x20
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v27; // x1
  __int64 v28; // x2
  System_Xml_Schema_XmlSchemaObject_o *v29; // x22
  __int64 v30; // x10
  const MethodInfo *v31; // x2
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v33; // x19
  System_Xml_Schema_XmlSchemaObject_o *v34; // [xsp+8h] [xbp-38h] BYREF
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4213D6F & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_object___ctor__, method);
    sub_B0D8A4(&System_Action_object__TypeInfo, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__int_____ctor__, v6);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_int__int____TypeInfo, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_object__ForEach__, v8);
    sub_B0D8A4(&System_Collections_Generic_List_object__TypeInfo, v9);
    sub_B0D8A4(&Method_QuestPhaseEntity___c__DisplayClass108_0__GetNpcAiInfo_b__0__, v10);
    sub_B0D8A4(&QuestPhaseEntity___c__DisplayClass108_0_TypeInfo, v11);
    sub_B0D8A4(&StringLiteral_16345/*"aiMultiNpc"*/, v12);
    sub_B0D8A4(&StringLiteral_16346/*"aiNpc"*/, v13);
    byte_4213D6F = 1;
  }
  value = 0LL;
  v34 = 0LL;
  v14 = sub_B0D974(QuestPhaseEntity___c__DisplayClass108_0_TypeInfo, method, v2);
  QuestPhaseEntity___c__DisplayClass108_0___ctor((QuestPhaseEntity___c__DisplayClass108_0_o *)v14, 0LL);
  v17 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B0D974(
                                                                                                   System_Collections_Generic_Dictionary_int__int____TypeInfo,
                                                                                                   v15,
                                                                                                   v16);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v17,
    (const MethodInfo_2E8F874 *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  if ( !v14 )
    goto LABEL_14;
  *(_QWORD *)(v14 + 16) = v17;
  v25 = (System_Collections_Generic_Dictionary_int__int____o **)(v14 + 16);
  sub_B0D840((BattleServantConfConponent_o *)(v14 + 16), (System_Int32_array **)v17, v19, v20, v21, v22, v23, v24);
  script = this->fields.script;
  if ( !script )
    return *v25;
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
         (System_Xml_XmlQualifiedName_o *)StringLiteral_16345/*"aiMultiNpc"*/,
         &value,
         (const MethodInfo_2E4CA68 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    v29 = value;
    if ( value )
    {
      v30 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
      if ( *(&value->klass->_2.bitflags2 + 1) >= (unsigned int)v30
        && (System_Collections_Generic_List_object__c *)value->klass->_2.typeHierarchy[v30 - 1] == System_Collections_Generic_List_object__TypeInfo )
      {
        v33 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                                     System_Action_object__TypeInfo,
                                                                                     v27,
                                                                                     v28);
        System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
          v33,
          (Il2CppObject *)v14,
          Method_QuestPhaseEntity___c__DisplayClass108_0__GetNpcAiInfo_b__0__,
          (const MethodInfo_246EA3C *)Method_System_Action_object___ctor__);
        System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
          (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)v29,
          (System_Action_T__o *)v33,
          (const MethodInfo_2FC6400 *)Method_System_Collections_Generic_List_object__ForEach__);
        return *v25;
      }
    }
  }
  v18 = this->fields.script;
  if ( !v18 )
LABEL_14:
    sub_B0D97C(v18);
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v18,
         (System_Xml_XmlQualifiedName_o *)StringLiteral_16346/*"aiNpc"*/,
         &v34,
         (const MethodInfo_2E4CA68 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    QuestPhaseEntity__SetNpcAiInfo(
      (System_Collections_Generic_IDictionary_int__int____o *)*v25,
      (Il2CppObject *)v34,
      v31);
  }
  return *v25;
}


int32_t __fastcall QuestPhaseEntity__GetOverWriteMasterImageId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4213D40 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_20460/*"masterImageId"*/, method);
    byte_4213D40 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20460/*"masterImageId"*/, 0, v2);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall QuestPhaseEntity__GetOverwriteCommandSpellContinue(
        QuestPhaseEntity_o *this,
        int32_t def,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4213D69 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_21423/*"overwriteCommandSpellContinue"*/, *(_QWORD *)&def);
    byte_4213D69 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21423/*"overwriteCommandSpellContinue"*/, def, v3);
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

  if ( (byte_4213D7A & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_21424/*"overwriteCommandSpellIcons"*/, *(_QWORD *)&genderType);
    byte_4213D7A = 1;
  }
  ScriptIntArrayParam = QuestPhaseEntity__getScriptIntArrayParam(
                          this,
                          (System_String_o *)StringLiteral_21424/*"overwriteCommandSpellIcons"*/,
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
    v8 = sub_B0D9A8(ScriptIntArrayParam);
    sub_B0D948(v8, 0LL);
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

  if ( (byte_4213D25 & 1) == 0 )
  {
    sub_B0D8A4(&System_Collections_Generic_Dictionary_string__object__TypeInfo, method);
    sub_B0D8A4(&StringLiteral_21434/*"overwriteEquipSkills"*/, v4);
    byte_4213D25 = 1;
  }
  result = (System_Collections_Generic_Dictionary_string__object__o *)QuestPhaseEntity__getScriptObj(
                                                                        this,
                                                                        (System_String_o *)StringLiteral_21434/*"overwriteEquipSkills"*/,
                                                                        v2);
  if ( result )
  {
    v6 = *(&System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.bitflags2 + 1);
    if ( *(&result->klass->_2.bitflags2 + 1) < (unsigned int)v6
      || (System_Collections_Generic_Dictionary_string__object__c *)result->klass->_2.typeHierarchy[v6 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
    {
      v7 = (QuestPhaseEntity_o *)sub_B0DC70(result);
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

  if ( (byte_4213D56 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_21438/*"overwriteLimitCountSvtIds"*/, overwriteLimitCountSvtIds);
    sub_B0D8A4(&StringLiteral_21439/*"overwriteLimitCounts"*/, v9);
    sub_B0D8A4(&StringLiteral_21437/*"overwriteLimitCountIconIds"*/, v10);
    byte_4213D56 = 1;
  }
  ScriptIntArrayParam = QuestPhaseEntity__getScriptIntArrayParam(
                          this,
                          (System_String_o *)StringLiteral_21438/*"overwriteLimitCountSvtIds"*/,
                          0LL,
                          (const MethodInfo *)overwriteLimitCountIconIds);
  *overwriteLimitCountSvtIds = ScriptIntArrayParam;
  sub_B0D840(
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
    v24 = QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_21439/*"overwriteLimitCounts"*/, 0LL, v19);
    *overwriteLimitCounts = v24;
    sub_B0D840(
      (BattleServantConfConponent_o *)overwriteLimitCounts,
      (System_Int32_array **)v24,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
    v32 = QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_21437/*"overwriteLimitCountIconIds"*/, 0LL, v31);
    *overwriteLimitCountIconIds = v32;
    sub_B0D840(
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
    sub_B0D840(
      (BattleServantConfConponent_o *)overwriteLimitCounts,
      0LL,
      v18,
      (System_String_array **)v19,
      v20,
      v21,
      v22,
      v23);
    *overwriteLimitCountIconIds = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)overwriteLimitCountIconIds, 0LL, v40, v41, v42, v43, v44, v45);
    return 0;
  }
}


System_Int32_array *__fastcall QuestPhaseEntity__GetOverwriteResultBgmCondIds(
        QuestPhaseEntity_o *this,
        System_Int32_array *defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4213D29 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_21444/*"overwriteResultBgmCondIds"*/, defVal);
    byte_4213D29 = 1;
  }
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_21444/*"overwriteResultBgmCondIds"*/, defVal, v3);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetOverwriteResultBgmIds(
        QuestPhaseEntity_o *this,
        System_Int32_array *defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4213D28 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_21445/*"overwriteResultBgmIds"*/, defVal);
    byte_4213D28 = 1;
  }
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_21445/*"overwriteResultBgmIds"*/, defVal, v3);
}


int32_t __fastcall QuestPhaseEntity__GetProgressAfterMovie(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4213D3E & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_21620/*"progressAfterMovie"*/, method);
    byte_4213D3E = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21620/*"progressAfterMovie"*/, 0, v2);
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

  if ( (byte_4213D33 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, method);
    sub_B0D8A4(&SingletonTemplate_clsQuestCheck__TypeInfo, v4);
    sub_B0D8A4(&StringLiteral_21535/*"phaseRouteSelect"*/, v5);
    byte_4213D33 = 1;
  }
  ScriptIntParam = QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21535/*"phaseRouteSelect"*/, 0, v2);
  if ( ScriptIntParam < 1 )
    return 0;
  v7 = ScriptIntParam;
  if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
  }
  v8 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !v8 )
    sub_B0D97C(0LL);
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

  if ( (byte_4213D4A & 1) == 0 )
  {
    sub_B0D8A4(&int___TypeInfo, method);
    sub_B0D8A4(&StringLiteral_21800/*"reelIcon"*/, v3);
    byte_4213D4A = 1;
  }
  v4 = (System_Int32_array *)sub_B0D8BC(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_21800/*"reelIcon"*/, v4, v5);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetSelectableQuests(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4213D32 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_21685/*"questSelect"*/, method);
    byte_4213D32 = 1;
  }
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_21685/*"questSelect"*/, 0LL, v2);
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
      v11 = sub_B0D9A8(SelectableQuests);
      sub_B0D948(v11, 0LL);
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

  if ( (byte_4213D59 & 1) == 0 )
  {
    sub_B0D8A4(&int___TypeInfo, method);
    sub_B0D8A4(&StringLiteral_22164/*"shadowOffSvtIds"*/, v3);
    byte_4213D59 = 1;
  }
  v4 = (System_Int32_array *)sub_B0D8BC(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_22164/*"shadowOffSvtIds"*/, v4, v5);
}


int32_t __fastcall QuestPhaseEntity__GetSingleForceSvtId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4213D57 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_22208/*"singleForceSvtId"*/, method);
    byte_4213D57 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22208/*"singleForceSvtId"*/, 0, v2);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetStartMovieWave(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4213D3F & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_20651/*"movieWave"*/, method);
    byte_4213D3F = 1;
  }
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_20651/*"movieWave"*/, 0LL, v2);
}


int32_t __fastcall QuestPhaseEntity__GetSupportInitDeckIndex(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4213D6A & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_18527/*"eventDeckIndex"*/, method);
    byte_4213D6A = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_18527/*"eventDeckIndex"*/, 0, v2);
}


int32_t __fastcall QuestPhaseEntity__GetTemporaryCommandSpell(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4213D67 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_22716/*"temporaryCommandSpell"*/, method);
    byte_4213D67 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22716/*"temporaryCommandSpell"*/, -1, v2);
}


int32_t __fastcall QuestPhaseEntity__GetUserEventDeckNo(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4213D58 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_23056/*"useEventDeckNo"*/, method);
    byte_4213D58 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_23056/*"useEventDeckNo"*/, 1, v2);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetVoiceOffPlayerSvtIdArray(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4213D79 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_23256/*"voiceOffMySvtIds"*/, method);
    byte_4213D79 = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_23256/*"voiceOffMySvtIds"*/, 0LL);
}


System_String_o *__fastcall QuestPhaseEntity__GetWarBoardStartMovieName(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1

  if ( (byte_4213D75 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_15471/*"WarBoardStartMovieName"*/, method);
    sub_B0D8A4(&StringLiteral_1/*""*/, v4);
    byte_4213D75 = 1;
  }
  return QuestPhaseEntity__getScriptStr(
           this,
           (System_String_o *)StringLiteral_15471/*"WarBoardStartMovieName"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


System_String_array *__fastcall QuestPhaseEntity__GetWaveStartMovie(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4213D3D & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_23332/*"waveStartMovie"*/, method);
    byte_4213D3D = 1;
  }
  return QuestPhaseEntity__getScriptStringArrayParam(this, (System_String_o *)StringLiteral_23332/*"waveStartMovie"*/, 0LL, v2);
}


int32_t __fastcall QuestPhaseEntity__GetWinBgmOffFlg(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4213D52 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_18400/*"endBgmOff"*/, method);
    byte_4213D52 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_18400/*"endBgmOff"*/, 0, v2);
}


int32_t __fastcall QuestPhaseEntity__GetWinVoiceOffFlg(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4213D50 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_18414/*"endVoiceOff"*/, method);
    byte_4213D50 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_18414/*"endVoiceOff"*/, 0, v2);
}


bool __fastcall QuestPhaseEntity__IsActiveAssistSkill(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Int32_array *v4; // x0
  const MethodInfo *v5; // x3
  System_Int32_array *ScriptIntArrayParam; // x0

  if ( (byte_4213D63 & 1) == 0 )
  {
    sub_B0D8A4(&int___TypeInfo, method);
    sub_B0D8A4(&StringLiteral_16547/*"assistIds"*/, v3);
    byte_4213D63 = 1;
  }
  v4 = (System_Int32_array *)sub_B0D8BC(int___TypeInfo, 0LL);
  ScriptIntArrayParam = QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_16547/*"assistIds"*/, v4, v5);
  if ( !ScriptIntArrayParam )
    sub_B0D97C(0LL);
  return ScriptIntArrayParam->max_length != 0;
}


bool __fastcall QuestPhaseEntity__IsAreaImporveQuest(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4213D76 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_16498/*"areaImprovementQuest"*/, method);
    byte_4213D76 = 1;
  }
  return QuestPhaseEntity__getScriptObj(this, (System_String_o *)StringLiteral_16498/*"areaImprovementQuest"*/, v2) != 0LL;
}


bool __fastcall QuestPhaseEntity__IsContinueWaveRestart(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4213D88 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_17741/*"continueWaveRestart"*/, method);
    byte_4213D88 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_17741/*"continueWaveRestart"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__IsHideAssistConfButton(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4213D66 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_19198/*"hideAssistConfButton"*/, method);
    byte_4213D66 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19198/*"hideAssistConfButton"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__IsIgnoreBattleLoseDialog(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4213D37 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_19466/*"ignoreBattleLoseDialog"*/, method);
    byte_4213D37 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_19466/*"ignoreBattleLoseDialog"*/, 0LL);
}


bool __fastcall QuestPhaseEntity__IsInvisibleConnectAndLoad(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4213D5D & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_19954/*"invisibleConnectAndLoad"*/, method);
    byte_4213D5D = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19954/*"invisibleConnectAndLoad"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__IsKeepSubBgmAfterBattleResult(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4213D53 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_20183/*"keepSubBgmUntilBattleResult"*/, method);
    byte_4213D53 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_20183/*"keepSubBgmUntilBattleResult"*/, 0LL);
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
  __int64 v11; // x1
  __int64 v12; // x2
  System_Predicate_int__o *All_int; // x0
  System_Predicate_T__o *v14; // x21

  if ( (byte_4213D5C & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Array_FindAll_int___, individualitys);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_int___ctor___67861304, v5);
    sub_B0D8A4(&System_Collections_Generic_HashSet_int__TypeInfo, v6);
    sub_B0D8A4(&Method_System_Predicate_int___ctor__, v7);
    sub_B0D8A4(&System_Predicate_int__TypeInfo, v8);
    byte_4213D5C = 1;
  }
  individuality = (System_Collections_Generic_IEnumerable_T__o *)this->fields.individuality;
  v10 = (System_Collections_Generic_HashSet_int__o *)sub_B0D974(
                                                       System_Collections_Generic_HashSet_int__TypeInfo,
                                                       individualitys,
                                                       method);
  System_Collections_Generic_HashSet_int____ctor_46616780(
    v10,
    individuality,
    (const MethodInfo_2C750CC *)Method_System_Collections_Generic_HashSet_int___ctor___67861304);
  All_int = (System_Predicate_int__o *)sub_B0D974(System_Predicate_int__TypeInfo, v11, v12);
  if ( !v10
    || (v14 = (System_Predicate_T__o *)All_int,
        System_Predicate_int____ctor(
          All_int,
          (Il2CppObject *)v10,
          (intptr_t)v10->klass->vtable._9_CopyTo.methodPtr,
          (const MethodInfo_2AF676C *)Method_System_Predicate_int___ctor__),
        (All_int = (System_Predicate_int__o *)System_Array__FindAll_int_(
                                                individualitys,
                                                v14,
                                                (const MethodInfo_1F688C0 *)Method_System_Array_FindAll_int___)) == 0LL) )
  {
    sub_B0D97C(All_int);
  }
  return All_int->fields.m_target != 0LL;
}


bool __fastcall QuestPhaseEntity__IsNonStopEndBgm(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4213D34 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_21185/*"nonStopEndBgm"*/, method);
    byte_4213D34 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21185/*"nonStopEndBgm"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__IsNotClassBoard(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4213D85 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_21208/*"notClassBoard"*/, method);
    byte_4213D85 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21208/*"notClassBoard"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__IsNotResetResultDispFlag(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4213D41 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_21213/*"notResetResultDispFlag"*/, method);
    byte_4213D41 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21213/*"notResetResultDispFlag"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__IsNotUseRestrictionDialog(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4213D86 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_21214/*"notUseRestrictionDialog"*/, method);
    byte_4213D86 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21214/*"notUseRestrictionDialog"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__IsPlayScriptBeforeForWarBoard(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4213D62 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_20015/*"isScriptPlayForWarBoard"*/, method);
    byte_4213D62 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20015/*"isScriptPlayForWarBoard"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__IsRepeatReward(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4213D83 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_21842/*"repeatReward"*/, method);
    byte_4213D83 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21842/*"repeatReward"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__IsSkipBattleFinish(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4213D7D & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_22229/*"skipBattleFinish"*/, method);
    byte_4213D7D = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22229/*"skipBattleFinish"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__IsUseTemporaryCommandSpell(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4213D68 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_23060/*"useTemporaryCommandSpell"*/, method);
    byte_4213D68 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_23060/*"useTemporaryCommandSpell"*/, -1, v2) == 1;
}


bool __fastcall QuestPhaseEntity__IsWaveCountInfinity(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4213D7B & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_23330/*"waveCountInfinity"*/, method);
    byte_4213D7B = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_23330/*"waveCountInfinity"*/, -1, v2) != -1;
}


bool __fastcall QuestPhaseEntity__IsWaveSetup(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4213D87 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_23331/*"waveSetup"*/, method);
    byte_4213D87 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_23331/*"waveSetup"*/, 0, v2) != 0;
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
  __int64 v21; // x1
  __int64 v22; // x2
  System_Collections_Generic_List_BattleActionData_HealData__o *v23; // x21
  QuestPhaseEntity___c_c *v24; // x0
  struct QuestPhaseEntity___c_StaticFields *static_fields; // x8
  System_Converter_BattleActionData_HealData__int__o *_9__109_0; // x22
  Il2CppObject *v27; // x23
  struct QuestPhaseEntity___c_StaticFields *v28; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_Collections_Generic_List_int__o *v35; // x0
  System_Collections_Generic_IDictionary_int__int____c *klass; // x8
  System_Collections_Generic_List_int__o *v37; // x21
  unsigned __int64 v38; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0

  if ( (byte_4213D70 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_GetValue_long___, obj);
    sub_B0D8A4(&Method_BasicHelper_GetValue_List_object____, v5);
    sub_B0D8A4(&Method_System_Converter_object__int___ctor__, v6);
    sub_B0D8A4(&System_Converter_object__int__TypeInfo, v7);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v8);
    sub_B0D8A4(&System_Collections_Generic_IDictionary_int__int____TypeInfo, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_object__ConvertAll_int___, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__ToArray__, v11);
    sub_B0D8A4(&Method_QuestPhaseEntity___c__SetNpcAiInfo_b__109_0__, v12);
    sub_B0D8A4(&QuestPhaseEntity___c_TypeInfo, v13);
    sub_B0D8A4(&StringLiteral_16344/*"aiIds"*/, v14);
    sub_B0D8A4(&StringLiteral_21227/*"npcId"*/, v15);
    byte_4213D70 = 1;
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
                       (System_String_o *)StringLiteral_21227/*"npcId"*/,
                       0LL,
                       (const MethodInfo_1708D88 *)Method_BasicHelper_GetValue_long___);
        Value_string = BasicHelper__GetValue_string_(
                         v18,
                         (System_String_o *)StringLiteral_16344/*"aiIds"*/,
                         0LL,
                         (const MethodInfo_1708E74 *)Method_BasicHelper_GetValue_List_object____);
        if ( Value_long >= 1 )
        {
          v23 = (System_Collections_Generic_List_BattleActionData_HealData__o *)Value_string;
          if ( Value_string )
          {
            v24 = QuestPhaseEntity___c_TypeInfo;
            if ( (BYTE3(QuestPhaseEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !QuestPhaseEntity___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(QuestPhaseEntity___c_TypeInfo);
              v24 = QuestPhaseEntity___c_TypeInfo;
            }
            static_fields = v24->static_fields;
            _9__109_0 = (System_Converter_BattleActionData_HealData__int__o *)static_fields->__9__109_0;
            if ( !_9__109_0 )
            {
              if ( (BYTE3(v24->vtable._0_Equals.methodPtr) & 4) != 0 && !v24->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v24);
                static_fields = QuestPhaseEntity___c_TypeInfo->static_fields;
              }
              v27 = (Il2CppObject *)static_fields->__9;
              _9__109_0 = (System_Converter_BattleActionData_HealData__int__o *)sub_B0D974(
                                                                                  System_Converter_object__int__TypeInfo,
                                                                                  v21,
                                                                                  v22);
              System_Converter_BattleActionData_HealData__int____ctor(
                _9__109_0,
                v27,
                Method_QuestPhaseEntity___c__SetNpcAiInfo_b__109_0__,
                (const MethodInfo_2665D70 *)Method_System_Converter_object__int___ctor__);
              v28 = QuestPhaseEntity___c_TypeInfo->static_fields;
              v28->__9__109_0 = (struct System_Converter_object__int__o *)_9__109_0;
              sub_B0D840(
                (BattleServantConfConponent_o *)&v28->__9__109_0,
                (System_Int32_array **)_9__109_0,
                v29,
                v30,
                v31,
                v32,
                v33,
                v34);
            }
            v35 = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_BattleActionData_HealData___ConvertAll_int_(
                                                              v23,
                                                              (System_Converter_T__TOutput__o *)_9__109_0,
                                                              (const MethodInfo_189F76C *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
            if ( !v35
              || (v35 = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_int___ToArray(
                                                                    v35,
                                                                    (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__),
                  !dicNpcAiId) )
            {
              sub_B0D97C(v35);
            }
            klass = dicNpcAiId->klass;
            v37 = v35;
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
              p_method = sub_AA67A0(dicNpcAiId, System_Collections_Generic_IDictionary_int__int____TypeInfo, 1LL);
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

  if ( (byte_4213D2D & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_16692/*"battleEffectId"*/, *(_QWORD *)&defVal);
    byte_4213D2D = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_16692/*"battleEffectId"*/, defVal, v3);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall QuestPhaseEntity__getBattleFieldMotionId(
        QuestPhaseEntity_o *this,
        int32_t defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4213D2F & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_18770/*"fieldMotionId"*/, *(_QWORD *)&defVal);
    byte_4213D2F = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_18770/*"fieldMotionId"*/, defVal, v3);
}


System_Int32_array *__fastcall QuestPhaseEntity__getBattleFieldMotionIds(
        QuestPhaseEntity_o *this,
        System_Int32_array *defVals,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  System_Int32_array *result; // x0
  const MethodInfo *v8; // x2
  int32_t BattleFieldMotionId; // w20
  __int64 v10; // x0

  if ( (byte_4213D30 & 1) == 0 )
  {
    sub_B0D8A4(&int___TypeInfo, defVals);
    sub_B0D8A4(&StringLiteral_18771/*"fieldMotionIds"*/, v6);
    byte_4213D30 = 1;
  }
  result = QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_18771/*"fieldMotionIds"*/, defVals, v3);
  if ( !result )
    goto LABEL_10;
  if ( *(_QWORD *)&result->max_length )
    return result;
  BattleFieldMotionId = QuestPhaseEntity__getBattleFieldMotionId(this, -1, v8);
  result = defVals;
  if ( BattleFieldMotionId == -1 )
    return result;
  result = (System_Int32_array *)sub_B0D8BC(int___TypeInfo, 1LL);
  if ( !result )
LABEL_10:
    sub_B0D97C(result);
  if ( !result->max_length )
  {
    v10 = sub_B0D9A8(result);
    sub_B0D948(v10, 0LL);
  }
  result->m_Items[1] = BattleFieldMotionId;
  return result;
}


int32_t __fastcall QuestPhaseEntity__getBreakOnBattleWinWaitMSec(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4213D3B & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_16984/*"breakOnBattleWinWaitMSec"*/, method);
    byte_4213D3B = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_16984/*"breakOnBattleWinWaitMSec"*/, 0, v2);
}


System_Int32_array *__fastcall QuestPhaseEntity__getEventGrounpIds(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Int32_array *v4; // x2
  const MethodInfo *v5; // x3

  if ( (byte_4213D31 & 1) == 0 )
  {
    sub_B0D8A4(&int___TypeInfo, method);
    sub_B0D8A4(&StringLiteral_18528/*"eventGroupId"*/, v3);
    byte_4213D31 = 1;
  }
  v4 = (System_Int32_array *)sub_B0D8BC(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_18528/*"eventGroupId"*/, v4, v5);
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

  if ( (byte_4213D6D & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_19208/*"hintLeftIndent"*/, method);
    byte_4213D6D = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19208/*"hintLeftIndent"*/, -1, v2);
}


System_String_o *__fastcall QuestPhaseEntity__getHintMessage(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1

  if ( (byte_4213D6C & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_19209/*"hintMessage"*/, method);
    sub_B0D8A4(&StringLiteral_1/*""*/, v4);
    byte_4213D6C = 1;
  }
  return QuestPhaseEntity__getScriptStr(
           this,
           (System_String_o *)StringLiteral_19209/*"hintMessage"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


System_String_o *__fastcall QuestPhaseEntity__getHintMessageTitle(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1

  if ( (byte_4213D6B & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_1/*""*/, method);
    sub_B0D8A4(&StringLiteral_19211/*"hintTitle"*/, v4);
    byte_4213D6B = 1;
  }
  return QuestPhaseEntity__getScriptStr(
           this,
           (System_String_o *)StringLiteral_19211/*"hintTitle"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


int32_t __fastcall QuestPhaseEntity__getHintOpenType(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4213D6E & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_19210/*"hintOpenType"*/, method);
    byte_4213D6E = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19210/*"hintOpenType"*/, 0, v2);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall QuestPhaseEntity__getLeave(QuestPhaseEntity_o *this, int32_t defVal, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4213D2C & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_20268/*"leave"*/, *(_QWORD *)&defVal);
    byte_4213D2C = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20268/*"leave"*/, defVal, v3);
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
  System_Int32_array *individuality; // x3
  int32_t phase; // w19
  int32_t questId; // w20
  QuestBehaviorMaster_o *v9; // x21

  if ( (byte_4213D1D & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_QuestBehaviorMaster___, method);
    sub_B0D8A4(&int___TypeInfo, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4213D1D = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_QuestBehaviorMaster___);
  individuality = this->fields.individuality;
  questId = this->fields.questId;
  phase = this->fields.phase;
  v9 = (QuestBehaviorMaster_o *)Instance;
  if ( !individuality )
  {
    Instance = (DataManager_o *)sub_B0D8BC(int___TypeInfo, 0LL);
    individuality = (System_Int32_array *)Instance;
  }
  if ( !v9 )
LABEL_8:
    sub_B0D97C(Instance);
  return QuestBehaviorMaster__getBattleIndividuality(v9, questId, phase, individuality, 0LL);
}


int32_t __fastcall QuestPhaseEntity__getQuestId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  return this->fields.questId;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall QuestPhaseEntity__getResultBgmId(QuestPhaseEntity_o *this, int32_t defVal, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4213D27 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_21870/*"resultBgmId"*/, *(_QWORD *)&defVal);
    byte_4213D27 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21870/*"resultBgmId"*/, defVal, v3);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall QuestPhaseEntity__getResultEffectId(
        QuestPhaseEntity_o *this,
        int32_t defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4213D2B & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_21871/*"resultEffectId"*/, *(_QWORD *)&defVal);
    byte_4213D2B = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21871/*"resultEffectId"*/, defVal, v3);
}


System_Int32_array *__fastcall QuestPhaseEntity__getResultEnemyVoiceIds(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Int32_array *v4; // x2
  const MethodInfo *v5; // x3

  if ( (byte_4213D35 & 1) == 0 )
  {
    sub_B0D8A4(&int___TypeInfo, method);
    sub_B0D8A4(&StringLiteral_21872/*"resultEnemyVoiceIds"*/, v3);
    byte_4213D35 = 1;
  }
  v4 = (System_Int32_array *)sub_B0D8BC(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_21872/*"resultEnemyVoiceIds"*/, v4, v5);
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
  __int64 v13; // x1
  __int64 v14; // x2
  System_Collections_Generic_List_BattleActionData_HealData__o *v15; // x19
  QuestPhaseEntity___c_c *v16; // x0
  struct QuestPhaseEntity___c_StaticFields *static_fields; // x8
  System_Converter_BattleActionData_HealData__int__o *_9__26_0; // x20
  Il2CppObject *v19; // x21
  struct QuestPhaseEntity___c_StaticFields *v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Collections_Generic_List_int__o *v27; // x0

  if ( (byte_4213D1F & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Converter_object__int___ctor__, key);
    sub_B0D8A4(&System_Converter_object__int__TypeInfo, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_object__ConvertAll_int___, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__ToArray__, v9);
    sub_B0D8A4(&Method_QuestPhaseEntity___c__getScriptIntArrayParam_b__26_0__, v10);
    sub_B0D8A4(&QuestPhaseEntity___c_TypeInfo, v11);
    byte_4213D1F = 1;
  }
  ScriptObjListParam = QuestPhaseEntity__getScriptObjListParam(this, key, (const MethodInfo *)defVal);
  if ( !ScriptObjListParam )
    return defVal;
  v15 = (System_Collections_Generic_List_BattleActionData_HealData__o *)ScriptObjListParam;
  v16 = QuestPhaseEntity___c_TypeInfo;
  if ( (BYTE3(QuestPhaseEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestPhaseEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestPhaseEntity___c_TypeInfo);
    v16 = QuestPhaseEntity___c_TypeInfo;
  }
  static_fields = v16->static_fields;
  _9__26_0 = (System_Converter_BattleActionData_HealData__int__o *)static_fields->__9__26_0;
  if ( !_9__26_0 )
  {
    if ( (BYTE3(v16->vtable._0_Equals.methodPtr) & 4) != 0 && !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16);
      static_fields = QuestPhaseEntity___c_TypeInfo->static_fields;
    }
    v19 = (Il2CppObject *)static_fields->__9;
    _9__26_0 = (System_Converter_BattleActionData_HealData__int__o *)sub_B0D974(
                                                                       System_Converter_object__int__TypeInfo,
                                                                       v13,
                                                                       v14);
    System_Converter_BattleActionData_HealData__int____ctor(
      _9__26_0,
      v19,
      Method_QuestPhaseEntity___c__getScriptIntArrayParam_b__26_0__,
      (const MethodInfo_2665D70 *)Method_System_Converter_object__int___ctor__);
    v20 = QuestPhaseEntity___c_TypeInfo->static_fields;
    v20->__9__26_0 = (struct System_Converter_object__int__o *)_9__26_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v20->__9__26_0,
      (System_Int32_array **)_9__26_0,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
  }
  v27 = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_BattleActionData_HealData___ConvertAll_int_(
                                                    v15,
                                                    (System_Converter_T__TOutput__o *)_9__26_0,
                                                    (const MethodInfo_189F76C *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
  if ( !v27 )
    sub_B0D97C(0LL);
  return System_Collections_Generic_List_int___ToArray(
           v27,
           (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
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
  if ( (byte_4213D1E & 1) == 0 )
  {
    sub_B0D8A4(&long_TypeInfo, key);
    byte_4213D1E = 1;
  }
  ScriptObj = QuestPhaseEntity__getScriptObj(this, key, *(const MethodInfo **)&defVal);
  if ( !ScriptObj )
    return v4;
  if ( ScriptObj->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(ScriptObj);
  v9 = (QuestPhaseEntity_o *)sub_B0DC70(ScriptObj);
  return (unsigned int)QuestPhaseEntity__getScriptObj(v9, v10, v11);
}


Il2CppObject *__fastcall QuestPhaseEntity__getScriptObj(
        QuestPhaseEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  Il2CppObject *result; // x0
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4213D23 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, key);
    byte_4213D23 = 1;
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
           (const MethodInfo_2E4CA68 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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

  if ( (byte_4213D21 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_object__ToArray__, key);
    byte_4213D21 = 1;
  }
  ScriptObjListParam = QuestPhaseEntity__getScriptObjListParam(this, key, (const MethodInfo *)defVal);
  if ( ScriptObjListParam )
    return (System_Object_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)ScriptObjListParam,
                                    (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_object__ToArray__);
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

  if ( (byte_4213D22 & 1) == 0 )
  {
    sub_B0D8A4(&System_Collections_Generic_List_object__TypeInfo, key);
    byte_4213D22 = 1;
  }
  result = (System_Collections_Generic_List_object__o *)QuestPhaseEntity__getScriptObj(this, key, method);
  if ( result )
  {
    v6 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
    if ( *(&result->klass->_2.bitflags2 + 1) < (unsigned int)v6
      || (System_Collections_Generic_List_object__c *)result->klass->_2.typeHierarchy[v6 - 1] != System_Collections_Generic_List_object__TypeInfo )
    {
      v7 = (QuestPhaseEntity_o *)sub_B0DC70(result);
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
  struct System_Collections_Generic_Dictionary_string__object__o *v10; // x0
  System_String_o *Item; // x0
  QuestPhaseEntity_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_4213D24 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    sub_B0D8A4(&string_TypeInfo, v8);
    byte_4213D24 = 1;
  }
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)key,
          (const MethodInfo_2E4AEDC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return defVal;
  }
  v10 = this->fields.script;
  if ( !v10 )
    sub_B0D97C(0LL);
  Item = (System_String_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                              (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v10,
                              (System_Type_o *)key,
                              (const MethodInfo_2E4ABA4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  defVal = Item;
  if ( !Item || Item->klass == string_TypeInfo )
    return defVal;
  v13 = (QuestPhaseEntity_o *)sub_B0DC70(Item);
  return (System_String_o *)QuestPhaseEntity__GetOverwriteEquipSkills(v13, v14);
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
  __int64 v13; // x1
  __int64 v14; // x2
  System_Collections_Generic_List_string__o *v15; // x19
  QuestPhaseEntity___c_c *v16; // x0
  struct QuestPhaseEntity___c_StaticFields *static_fields; // x8
  System_Converter_string__string__o *_9__27_0; // x20
  Il2CppObject *v19; // x21
  struct QuestPhaseEntity___c_StaticFields *v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Collections_Generic_List_WarBoardUiData_SaveData__o *v27; // x0

  v4 = defVal;
  if ( (byte_4213D20 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Converter_object__string___ctor__, key);
    sub_B0D8A4(&System_Converter_object__string__TypeInfo, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_object__ConvertAll_string___, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__ToArray__, v9);
    sub_B0D8A4(&Method_QuestPhaseEntity___c__getScriptStringArrayParam_b__27_0__, v10);
    sub_B0D8A4(&QuestPhaseEntity___c_TypeInfo, v11);
    byte_4213D20 = 1;
  }
  ScriptObjListParam = QuestPhaseEntity__getScriptObjListParam(this, key, (const MethodInfo *)defVal);
  if ( ScriptObjListParam )
  {
    v15 = (System_Collections_Generic_List_string__o *)ScriptObjListParam;
    v16 = QuestPhaseEntity___c_TypeInfo;
    if ( (BYTE3(QuestPhaseEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestPhaseEntity___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestPhaseEntity___c_TypeInfo);
      v16 = QuestPhaseEntity___c_TypeInfo;
    }
    static_fields = v16->static_fields;
    _9__27_0 = (System_Converter_string__string__o *)static_fields->__9__27_0;
    if ( !_9__27_0 )
    {
      if ( (BYTE3(v16->vtable._0_Equals.methodPtr) & 4) != 0 && !v16->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v16);
        static_fields = QuestPhaseEntity___c_TypeInfo->static_fields;
      }
      v19 = (Il2CppObject *)static_fields->__9;
      _9__27_0 = (System_Converter_string__string__o *)sub_B0D974(System_Converter_object__string__TypeInfo, v13, v14);
      System_Converter_string__string____ctor(
        _9__27_0,
        v19,
        Method_QuestPhaseEntity___c__getScriptStringArrayParam_b__27_0__,
        (const MethodInfo_2666150 *)Method_System_Converter_object__string___ctor__);
      v20 = QuestPhaseEntity___c_TypeInfo->static_fields;
      v20->__9__27_0 = (struct System_Converter_object__string__o *)_9__27_0;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v20->__9__27_0,
        (System_Int32_array **)_9__27_0,
        v21,
        v22,
        v23,
        v24,
        v25,
        v26);
    }
    v27 = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)System_Collections_Generic_List_string___ConvertAll_string_(
                                                                          v15,
                                                                          (System_Converter_T__TOutput__o *)_9__27_0,
                                                                          (const MethodInfo_189F878 *)Method_System_Collections_Generic_List_object__ConvertAll_string___);
    if ( !v27 )
      sub_B0D97C(0LL);
    return (System_String_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    v27,
                                    (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_string__ToArray__);
  }
  return v4;
}


int32_t __fastcall QuestPhaseEntity__getSpecialShadowEffectId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4213D46 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_19092/*"getSpecialShadowEffectId"*/, method);
    byte_4213D46 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19092/*"getSpecialShadowEffectId"*/, 0, v2);
}


int32_t __fastcall QuestPhaseEntity__getTurnSituationType(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4213D45 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_22898/*"turnSituationType"*/, method);
    byte_4213D45 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22898/*"turnSituationType"*/, 0, v2);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall QuestPhaseEntity__getUniqueCameraId(
        QuestPhaseEntity_o *this,
        int32_t defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4213D2E & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_22979/*"uniqueCameraId"*/, *(_QWORD *)&defVal);
    byte_4213D2E = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22979/*"uniqueCameraId"*/, defVal, v3);
}


bool __fastcall QuestPhaseEntity__isBattleFinishCameraTargetAll(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4213D44 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_16694/*"battleFinishCameraTargetAll"*/, method);
    byte_4213D44 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_16694/*"battleFinishCameraTargetAll"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__isBreakOnBattleWin(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4213D39 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_16982/*"breakOnBattleWin"*/, method);
    byte_4213D39 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_16982/*"breakOnBattleWin"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__isBreakOnBattleWinFadeColorBlack(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4213D3A & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_16983/*"breakOnBattleWinFadeColorBlack"*/, method);
    byte_4213D3A = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_16983/*"breakOnBattleWinFadeColorBlack"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__isDisableChangeRaidDownMessage(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4213D47 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_19989/*"isDisableChangeRaidDownMessage"*/, method);
    byte_4213D47 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19989/*"isDisableChangeRaidDownMessage"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__isDispLoseResult(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4213D36 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_21873/*"resultLoseDisp"*/, method);
    byte_4213D36 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21873/*"resultLoseDisp"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__isFadeOutBgmBeforeMovie(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4213D2A & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_6561/*"FadeOutBgmBeforeMovie"*/, method);
    byte_4213D2A = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_6561/*"FadeOutBgmBeforeMovie"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__isNoResult(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4213D38 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_21169/*"noResult"*/, method);
    byte_4213D38 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21169/*"noResult"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__isTurnSituationType(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  return QuestPhaseEntity__getTurnSituationType(this, method) > 0;
}


void __fastcall QuestPhaseEntity___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct QuestPhaseEntity___c_StaticFields *static_fields; // x0

  if ( (byte_42124D9 & 1) == 0 )
  {
    sub_B0D8A4(&QuestPhaseEntity___c_TypeInfo, v1);
    byte_42124D9 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(QuestPhaseEntity___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = QuestPhaseEntity___c_TypeInfo->static_fields;
  static_fields->__9 = (struct QuestPhaseEntity___c_o *)v3;
  sub_B0D840(static_fields, v3);
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

  if ( (byte_42124DB & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_1/*""*/, x);
    byte_42124DB = 1;
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

  if ( (byte_42124DA & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_1/*""*/, x);
    byte_42124DA = 1;
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
    sub_B0D97C(this);
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