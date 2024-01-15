void __fastcall QuestPhaseEntity___ctor(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_40F95FF & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_string___ctor__, method);
    byte_40F95FF = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_266F2D4 *)Method_DataEntityBase_string___ctor__);
}


void __fastcall QuestPhaseEntity___ctor_23968976(
        QuestPhaseEntity_o *this,
        QuestPhaseEntity_o *cSrc,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  System_Array_o *classIds; // x0
  Il2CppObject *v13; // x0
  Il2CppObject *v14; // x21
  struct System_Int32_array *v15; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Array_o *individuality; // x0
  Il2CppObject *v23; // x0
  struct System_Int32_array *v24; // x1
  struct System_Int32_array **p_individuality; // x20

  if ( (byte_40F9600 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_string___ctor__, cSrc);
    sub_B16FFC(&int___TypeInfo, v5);
    byte_40F9600 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_266F2D4 *)Method_DataEntityBase_string___ctor__);
  if ( !cSrc )
    sub_B170D4();
  this->fields.questId = cSrc->fields.questId;
  this->fields.phase = cSrc->fields.phase;
  this->fields.isNpcOnly = cSrc->fields.isNpcOnly;
  this->fields.battleBgId = cSrc->fields.battleBgId;
  this->fields.battleBgType = cSrc->fields.battleBgType;
  this->fields.playerExp = cSrc->fields.playerExp;
  this->fields.friendshipExp = cSrc->fields.friendshipExp;
  classIds = (System_Array_o *)cSrc->fields.classIds;
  if ( classIds && (v13 = System_Array__Clone(classIds, 0LL)) != 0LL )
  {
    v14 = v13;
    v15 = (struct System_Int32_array *)sub_B170BC(v13, int___TypeInfo);
    if ( !v15 )
      goto LABEL_12;
  }
  else
  {
    v15 = 0LL;
  }
  this->fields.classIds = v15;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.classIds,
    (System_Int32_array **)v15,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  individuality = (System_Array_o *)cSrc->fields.individuality;
  if ( !individuality )
    goto LABEL_13;
  v23 = System_Array__Clone(individuality, 0LL);
  if ( !v23 )
    goto LABEL_13;
  v14 = v23;
  v24 = (struct System_Int32_array *)sub_B170BC(v23, int___TypeInfo);
  if ( !v24 )
  {
LABEL_12:
    sub_B173C8(v14);
LABEL_13:
    v24 = 0LL;
  }
  this->fields.individuality = v24;
  p_individuality = &this->fields.individuality;
  sub_B16F98((BattleServantConfConponent_o *)p_individuality, (System_Int32_array **)v24, v16, v17, v18, v19, v20, v21);
  *((_DWORD *)p_individuality + 2) = cSrc->fields.giftId;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall QuestPhaseEntity__CreatePK(int32_t questId, int32_t phase, const MethodInfo *method)
{
  if ( (byte_40F95FE & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&phase);
    byte_40F95FE = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           questId,
           phase,
           (const MethodInfo_18C21A0 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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

  if ( (byte_40F960A & 1) == 0 )
  {
    sub_B16FFC(&System_Collections_Generic_Dictionary_string__object__TypeInfo, method);
    sub_B16FFC(&StringLiteral_16186/*"addEquipSkills"*/, v4);
    byte_40F960A = 1;
  }
  result = (System_Collections_Generic_Dictionary_string__object__o *)QuestPhaseEntity__getScriptObj(
                                                                        this,
                                                                        (System_String_o *)StringLiteral_16186/*"addEquipSkills"*/,
                                                                        v2);
  if ( result )
  {
    v6 = *(&System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.bitflags2 + 1);
    if ( *(&result->klass->_2.bitflags2 + 1) < (unsigned int)v6
      || (System_Collections_Generic_Dictionary_string__object__c *)result->klass->_2.typeHierarchy[v6 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
    {
      v7 = (QuestPhaseEntity_o *)sub_B173C8(result);
      return (System_Collections_Generic_Dictionary_string__object__o *)QuestPhaseEntity__getResultBgmId(v7, v8, v9);
    }
  }
  return result;
}


int32_t __fastcall QuestPhaseEntity__GetAdvantageClassId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40F9637 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_16473/*"auto_sel_support_type"*/, method);
    byte_40F9637 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_16473/*"auto_sel_support_type"*/, -1, v2);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetAssistIdArray(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Int32_array *v5; // x2
  const MethodInfo *v6; // x3

  if ( (byte_40F9646 & 1) == 0 )
  {
    sub_B16FFC(&int___TypeInfo, method);
    sub_B16FFC(&StringLiteral_16434/*"assistIds"*/, v4);
    byte_40F9646 = 1;
  }
  v5 = (System_Int32_array *)sub_B17014(int___TypeInfo, 0LL, v2);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_16434/*"assistIds"*/, v5, v6);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetAssistWeightArray(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Int32_array *v5; // x2
  const MethodInfo *v6; // x3

  if ( (byte_40F9647 & 1) == 0 )
  {
    sub_B16FFC(&int___TypeInfo, method);
    sub_B16FFC(&StringLiteral_16433/*"assistIdWeight"*/, v4);
    byte_40F9647 = 1;
  }
  v5 = (System_Int32_array *)sub_B17014(int___TypeInfo, 0LL, v2);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_16433/*"assistIdWeight"*/, v5, v6);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetAssumedEffectId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_40F9659 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_16437/*"assumedEffectId"*/, method);
    byte_40F9659 = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_16437/*"assumedEffectId"*/, 0LL);
}


System_String_o *__fastcall QuestPhaseEntity__GetBattleFinishMovie(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40F961E & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_16582/*"battleFinishMovie"*/, method);
    byte_40F961E = 1;
  }
  return QuestPhaseEntity__getScriptStr(this, (System_String_o *)StringLiteral_16582/*"battleFinishMovie"*/, 0LL, v2);
}


int32_t __fastcall QuestPhaseEntity__GetBattleFinishWaitTime(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40F9660 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_16583/*"battleFinishWaitTime"*/, method);
    byte_40F9660 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_16583/*"battleFinishWaitTime"*/, 0, v2);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall QuestPhaseEntity__GetBeforeBattleSkillActor(
        QuestPhaseEntity_o *this,
        int32_t defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_40F9661 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_16623/*"beforeBattleSkillActor"*/, *(_QWORD *)&defVal);
    byte_40F9661 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_16623/*"beforeBattleSkillActor"*/, defVal, v3);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetClearGiftItemListDisplay(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Int32_array *v5; // x2
  const MethodInfo *v6; // x3

  if ( (byte_40F9656 & 1) == 0 )
  {
    sub_B16FFC(&int___TypeInfo, method);
    sub_B16FFC(&StringLiteral_17396/*"clearGiftItemListDisplay"*/, v4);
    byte_40F9656 = 1;
  }
  v5 = (System_Int32_array *)sub_B17014(int___TypeInfo, 0LL, v2);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_17396/*"clearGiftItemListDisplay"*/, v5, v6);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetCondHavingIds(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Int32_array *v5; // x2
  const MethodInfo *v6; // x3

  if ( (byte_40F9642 & 1) == 0 )
  {
    sub_B16FFC(&int___TypeInfo, method);
    sub_B16FFC(&StringLiteral_17576/*"condHaving"*/, v4);
    byte_40F9642 = 1;
  }
  v5 = (System_Int32_array *)sub_B17014(int___TypeInfo, 0LL, v2);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_17576/*"condHaving"*/, v5, v6);
}


int32_t __fastcall QuestPhaseEntity__GetCorrectionIconId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40F9636 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_17639/*"correctionIconId"*/, method);
    byte_40F9636 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_17639/*"correctionIconId"*/, -1, v2);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetEnemyInfoDispNpcSvtIdList(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Int32_array *v5; // x2
  const MethodInfo *v6; // x3

  if ( (byte_40F9654 & 1) == 0 )
  {
    sub_B16FFC(&int___TypeInfo, method);
    sub_B16FFC(&StringLiteral_21273/*"overwriteEnemyInfos"*/, v4);
    byte_40F9654 = 1;
  }
  v5 = (System_Int32_array *)sub_B17014(int___TypeInfo, 0LL, v2);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_21273/*"overwriteEnemyInfos"*/, v5, v6);
}


System_String_array *__fastcall QuestPhaseEntity__GetEnemyInfoOverwriteNpcSvtNameList(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_String_array *v5; // x2
  const MethodInfo *v6; // x3

  if ( (byte_40F9655 & 1) == 0 )
  {
    sub_B16FFC(&string___TypeInfo, method);
    sub_B16FFC(&StringLiteral_21272/*"overwriteEnemyInfoNames"*/, v4);
    byte_40F9655 = 1;
  }
  v5 = (System_String_array *)sub_B17014(string___TypeInfo, 0LL, v2);
  return QuestPhaseEntity__getScriptStringArrayParam(this, (System_String_o *)StringLiteral_21272/*"overwriteEnemyInfoNames"*/, v5, v6);
}


int32_t __fastcall QuestPhaseEntity__GetEquipAddId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40F9653 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_18319/*"equipAddId"*/, method);
    byte_40F9653 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_18319/*"equipAddId"*/, 0, v2);
}


int32_t __fastcall QuestPhaseEntity__GetFinishEffectId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40F9633 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_18669/*"finishEffectId"*/, method);
    byte_40F9633 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_18669/*"finishEffectId"*/, -1, v2);
}


int32_t __fastcall QuestPhaseEntity__GetFormationBgmId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40F965A & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_18746/*"formationBgmId"*/, method);
    byte_40F965A = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_18746/*"formationBgmId"*/, -1, v2);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetGimmickAnimTypeArray(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40F9631 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_18984/*"gimmickAnimType"*/, method);
    byte_40F9631 = 1;
  }
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_18984/*"gimmickAnimType"*/, 0LL, v2);
}


int32_t __fastcall QuestPhaseEntity__GetGimmickId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40F962A & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_18985/*"gimmickId"*/, method);
    byte_40F962A = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_18985/*"gimmickId"*/, -1, v2);
}


System_Object_array *__fastcall QuestPhaseEntity__GetGimmickResultVoiceArray(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40F9630 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_21711/*"resultVoice"*/, method);
    byte_40F9630 = 1;
  }
  return QuestPhaseEntity__getScriptObjArrayParam(this, (System_String_o *)StringLiteral_21711/*"resultVoice"*/, 0LL, v2);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetGimmickSkillIdArray(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Int32_array *v5; // x2
  const MethodInfo *v6; // x3

  if ( (byte_40F962D & 1) == 0 )
  {
    sub_B16FFC(&int___TypeInfo, method);
    sub_B16FFC(&StringLiteral_21640/*"reelSkill"*/, v4);
    byte_40F962D = 1;
  }
  v5 = (System_Int32_array *)sub_B17014(int___TypeInfo, 0LL, v2);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_21640/*"reelSkill"*/, v5, v6);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetGimmickSkillRateArray(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Int32_array *v5; // x2
  const MethodInfo *v6; // x3

  if ( (byte_40F962E & 1) == 0 )
  {
    sub_B16FFC(&int___TypeInfo, method);
    sub_B16FFC(&StringLiteral_21639/*"reelRate"*/, v4);
    byte_40F962E = 1;
  }
  v5 = (System_Int32_array *)sub_B17014(int___TypeInfo, 0LL, v2);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_21639/*"reelRate"*/, v5, v6);
}


System_String_array *__fastcall QuestPhaseEntity__GetGimmickStartVoiceArray(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40F962F & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_22193/*"startVoice"*/, method);
    byte_40F962F = 1;
  }
  return QuestPhaseEntity__getScriptStringArrayParam(this, (System_String_o *)StringLiteral_22193/*"startVoice"*/, 0LL, v2);
}


int32_t __fastcall QuestPhaseEntity__GetGimmickSvtId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40F962B & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_18986/*"gimmickSvtId"*/, method);
    byte_40F962B = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_18986/*"gimmickSvtId"*/, -1, v2);
}


float __fastcall QuestPhaseEntity__GetIncomingCallDispTime(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40F9664 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_19697/*"incomingCallDispTime"*/, method);
    byte_40F9664 = 1;
  }
  return (float)QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19697/*"incomingCallDispTime"*/, 500, v2) / 1000.0;
}


System_String_o *__fastcall QuestPhaseEntity__GetIncomingCallMessage(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1

  if ( (byte_40F9663 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_19698/*"incomingCallMessage"*/, method);
    sub_B16FFC(&StringLiteral_1/*""*/, v4);
    byte_40F9663 = 1;
  }
  return QuestPhaseEntity__getScriptStr(
           this,
           (System_String_o *)StringLiteral_19698/*"incomingCallMessage"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


System_String_o *__fastcall QuestPhaseEntity__GetIncomingCallTitle(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1

  if ( (byte_40F9662 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_19699/*"incomingCallTitle"*/, method);
    sub_B16FFC(&StringLiteral_1/*""*/, v4);
    byte_40F9662 = 1;
  }
  return QuestPhaseEntity__getScriptStr(
           this,
           (System_String_o *)StringLiteral_19699/*"incomingCallTitle"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


System_String_o *__fastcall QuestPhaseEntity__GetMapModelEntryAnimationName(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1

  if ( (byte_40F965E & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1165/*"3dMapEntryAnimName"*/, method);
    sub_B16FFC(&StringLiteral_1/*""*/, v4);
    byte_40F965E = 1;
  }
  return QuestPhaseEntity__getScriptStr(
           this,
           (System_String_o *)StringLiteral_1165/*"3dMapEntryAnimName"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


int32_t __fastcall QuestPhaseEntity__GetMasterSkillDelay(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40F963C & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_20324/*"masterSkillDelay"*/, method);
    byte_40F963C = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20324/*"masterSkillDelay"*/, 0, v2);
}


System_String_o *__fastcall QuestPhaseEntity__GetMasterSkillDelayInfo(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40F963D & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_20325/*"masterSkillDelayInfo"*/, method);
    byte_40F963D = 1;
  }
  return QuestPhaseEntity__getScriptStr(this, (System_String_o *)StringLiteral_20325/*"masterSkillDelayInfo"*/, 0LL, v2);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetMoveSceneInfo(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Int32_array *v5; // x2
  const MethodInfo *v6; // x3

  if ( (byte_40F9666 & 1) == 0 )
  {
    sub_B16FFC(&int___TypeInfo, method);
    sub_B16FFC(&StringLiteral_20494/*"moveSceneInfo"*/, v4);
    byte_40F9666 = 1;
  }
  v5 = (System_Int32_array *)sub_B17014(int___TypeInfo, 0LL, v2);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_20494/*"moveSceneInfo"*/, v5, v6);
}


int32_t __fastcall QuestPhaseEntity__GetMovieAfterCrossFadeStartFrame(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40F9625 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_20498/*"movieAfterCrossFadeStartFrame"*/, method);
    byte_40F9625 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20498/*"movieAfterCrossFadeStartFrame"*/, 0, v2);
}


int32_t __fastcall QuestPhaseEntity__GetMovieAfterCrossFadeTime(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40F9624 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_20499/*"movieAfterCrossFadeTime"*/, method);
    byte_40F9624 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20499/*"movieAfterCrossFadeTime"*/, 0, v2);
}


int32_t __fastcall QuestPhaseEntity__GetNextSceneId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40F9640 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_20977/*"nextSceneId"*/, method);
    byte_40F9640 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20977/*"nextSceneId"*/, 0, v2);
}


System_String_array *__fastcall QuestPhaseEntity__GetNextSceneParam(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1
  System_String_array *result; // x0
  __int64 v6; // x2
  System_String_o *v7; // x19
  System_Char_array *v8; // x0
  __int64 v9; // x2

  if ( (byte_40F9641 & 1) == 0 )
  {
    sub_B16FFC(&char___TypeInfo, method);
    sub_B16FFC(&StringLiteral_20978/*"nextSceneParam"*/, v4);
    byte_40F9641 = 1;
  }
  result = (System_String_array *)QuestPhaseEntity__getScriptStr(this, (System_String_o *)StringLiteral_20978/*"nextSceneParam"*/, 0LL, v2);
  if ( result )
  {
    v7 = (System_String_o *)result;
    v8 = (System_Char_array *)sub_B17014(char___TypeInfo, 1LL, v6);
    if ( !v8 )
      sub_B170D4();
    if ( !v8->max_length )
    {
      sub_B17100(v8, v8, v9);
      sub_B170A0();
    }
    v8->m_Items[2] = 44;
    return System_String__Split(v7, v8, 0LL);
  }
  return result;
}


System_Int32_array *__fastcall QuestPhaseEntity__GetNotHavingQuests(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Int32_array *v5; // x2
  const MethodInfo *v6; // x3

  if ( (byte_40F9643 & 1) == 0 )
  {
    sub_B16FFC(&int___TypeInfo, method);
    sub_B16FFC(&StringLiteral_21054/*"notHavingQuest"*/, v4);
    byte_40F9643 = 1;
  }
  v5 = (System_Int32_array *)sub_B17014(int___TypeInfo, 0LL, v2);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_21054/*"notHavingQuest"*/, v5, v6);
}


System_Collections_Generic_Dictionary_int__int____o *__fastcall QuestPhaseEntity__GetNpcAiInfo(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
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
  __int64 v16; // x21
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v21; // x22
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_Collections_Generic_Dictionary_int__int____o **v28; // x20
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  System_Xml_Schema_XmlSchemaObject_o *v34; // x22
  __int64 v35; // x10
  struct System_Collections_Generic_Dictionary_string__object__o *v36; // x0
  const MethodInfo *v37; // x2
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v39; // x19
  System_Xml_Schema_XmlSchemaObject_o *v40; // [xsp+8h] [xbp-38h] BYREF
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_40F9651 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_object___ctor__, method);
    sub_B16FFC(&System_Action_object__TypeInfo, v6);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int_____ctor__, v8);
    sub_B16FFC(&System_Collections_Generic_Dictionary_int__int____TypeInfo, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_object__ForEach__, v10);
    sub_B16FFC(&System_Collections_Generic_List_object__TypeInfo, v11);
    sub_B16FFC(&Method_QuestPhaseEntity___c__DisplayClass106_0__GetNpcAiInfo_b__0__, v12);
    sub_B16FFC(&QuestPhaseEntity___c__DisplayClass106_0_TypeInfo, v13);
    sub_B16FFC(&StringLiteral_16231/*"aiMultiNpc"*/, v14);
    sub_B16FFC(&StringLiteral_16232/*"aiNpc"*/, v15);
    byte_40F9651 = 1;
  }
  value = 0LL;
  v40 = 0LL;
  v16 = sub_B170CC(QuestPhaseEntity___c__DisplayClass106_0_TypeInfo, method, v2, v3, v4);
  QuestPhaseEntity___c__DisplayClass106_0___ctor((QuestPhaseEntity___c__DisplayClass106_0_o *)v16, 0LL);
  v21 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B170CC(
                                                                                                   System_Collections_Generic_Dictionary_int__int____TypeInfo,
                                                                                                   v17,
                                                                                                   v18,
                                                                                                   v19,
                                                                                                   v20);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v21,
    (const MethodInfo_2DE8808 *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  if ( !v16 )
    goto LABEL_14;
  *(_QWORD *)(v16 + 16) = v21;
  v28 = (System_Collections_Generic_Dictionary_int__int____o **)(v16 + 16);
  sub_B16F98((BattleServantConfConponent_o *)(v16 + 16), (System_Int32_array **)v21, v22, v23, v24, v25, v26, v27);
  script = this->fields.script;
  if ( !script )
    return *v28;
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
         (System_Xml_XmlQualifiedName_o *)StringLiteral_16231/*"aiMultiNpc"*/,
         &value,
         (const MethodInfo_2DA5A18 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    v34 = value;
    if ( value )
    {
      v35 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
      if ( *(&value->klass->_2.bitflags2 + 1) >= (unsigned int)v35
        && (System_Collections_Generic_List_object__c *)value->klass->_2.typeHierarchy[v35 - 1] == System_Collections_Generic_List_object__TypeInfo )
      {
        v39 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                                     System_Action_object__TypeInfo,
                                                                                     v30,
                                                                                     v31,
                                                                                     v32,
                                                                                     v33);
        System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
          v39,
          (Il2CppObject *)v16,
          Method_QuestPhaseEntity___c__DisplayClass106_0__GetNpcAiInfo_b__0__,
          (const MethodInfo_24B7310 *)Method_System_Action_object___ctor__);
        System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
          (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)v34,
          (System_Action_T__o *)v39,
          (const MethodInfo_2F269F0 *)Method_System_Collections_Generic_List_object__ForEach__);
        return *v28;
      }
    }
  }
  v36 = this->fields.script;
  if ( !v36 )
LABEL_14:
    sub_B170D4();
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v36,
         (System_Xml_XmlQualifiedName_o *)StringLiteral_16232/*"aiNpc"*/,
         &v40,
         (const MethodInfo_2DA5A18 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    QuestPhaseEntity__SetNpcAiInfo(
      (System_Collections_Generic_IDictionary_int__int____o *)*v28,
      (Il2CppObject *)v40,
      v37);
  }
  return *v28;
}


int32_t __fastcall QuestPhaseEntity__GetOverWriteMasterImageId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40F9622 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_20314/*"masterImageId"*/, method);
    byte_40F9622 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20314/*"masterImageId"*/, 0, v2);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall QuestPhaseEntity__GetOverwriteCommandSpellContinue(
        QuestPhaseEntity_o *this,
        int32_t def,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_40F964B & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_21264/*"overwriteCommandSpellContinue"*/, *(_QWORD *)&def);
    byte_40F964B = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21264/*"overwriteCommandSpellContinue"*/, def, v3);
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

  if ( (byte_40F965C & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_21265/*"overwriteCommandSpellIcons"*/, *(_QWORD *)&genderType);
    byte_40F965C = 1;
  }
  ScriptIntArrayParam = QuestPhaseEntity__getScriptIntArrayParam(
                          this,
                          (System_String_o *)StringLiteral_21265/*"overwriteCommandSpellIcons"*/,
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
    sub_B17100(ScriptIntArrayParam, v8, v9);
    sub_B170A0();
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

  if ( (byte_40F9609 & 1) == 0 )
  {
    sub_B16FFC(&System_Collections_Generic_Dictionary_string__object__TypeInfo, method);
    sub_B16FFC(&StringLiteral_21275/*"overwriteEquipSkills"*/, v4);
    byte_40F9609 = 1;
  }
  result = (System_Collections_Generic_Dictionary_string__object__o *)QuestPhaseEntity__getScriptObj(
                                                                        this,
                                                                        (System_String_o *)StringLiteral_21275/*"overwriteEquipSkills"*/,
                                                                        v2);
  if ( result )
  {
    v6 = *(&System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.bitflags2 + 1);
    if ( *(&result->klass->_2.bitflags2 + 1) < (unsigned int)v6
      || (System_Collections_Generic_Dictionary_string__object__c *)result->klass->_2.typeHierarchy[v6 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
    {
      v7 = (QuestPhaseEntity_o *)sub_B173C8(result);
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

  if ( (byte_40F9638 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_21279/*"overwriteLimitCountSvtIds"*/, overwriteLimitCountSvtIds);
    sub_B16FFC(&StringLiteral_21280/*"overwriteLimitCounts"*/, v9);
    sub_B16FFC(&StringLiteral_21278/*"overwriteLimitCountIconIds"*/, v10);
    byte_40F9638 = 1;
  }
  ScriptIntArrayParam = QuestPhaseEntity__getScriptIntArrayParam(
                          this,
                          (System_String_o *)StringLiteral_21279/*"overwriteLimitCountSvtIds"*/,
                          0LL,
                          (const MethodInfo *)overwriteLimitCountIconIds);
  *overwriteLimitCountSvtIds = ScriptIntArrayParam;
  sub_B16F98(
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
    v24 = QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_21280/*"overwriteLimitCounts"*/, 0LL, v19);
    *overwriteLimitCounts = v24;
    sub_B16F98(
      (BattleServantConfConponent_o *)overwriteLimitCounts,
      (System_Int32_array **)v24,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
    v32 = QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_21278/*"overwriteLimitCountIconIds"*/, 0LL, v31);
    *overwriteLimitCountIconIds = v32;
    sub_B16F98(
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
    sub_B16F98(
      (BattleServantConfConponent_o *)overwriteLimitCounts,
      0LL,
      v18,
      (System_String_array **)v19,
      v20,
      v21,
      v22,
      v23);
    *overwriteLimitCountIconIds = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)overwriteLimitCountIconIds, 0LL, v40, v41, v42, v43, v44, v45);
    return 0;
  }
}


int32_t __fastcall QuestPhaseEntity__GetProgressAfterMovie(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40F9620 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_21458/*"progressAfterMovie"*/, method);
    byte_40F9620 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21458/*"progressAfterMovie"*/, 0, v2);
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

  if ( (byte_40F9615 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, method);
    sub_B16FFC(&SingletonTemplate_clsQuestCheck__TypeInfo, v4);
    sub_B16FFC(&StringLiteral_21373/*"phaseRouteSelect"*/, v5);
    byte_40F9615 = 1;
  }
  ScriptIntParam = QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21373/*"phaseRouteSelect"*/, 0, v2);
  if ( ScriptIntParam < 1 )
    return 0;
  v7 = ScriptIntParam;
  if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
  }
  v8 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !v8 )
    sub_B170D4();
  if ( clsQuestCheck__CheckQuestPlayableNow(v8, v7, 0LL) )
    return v7;
  else
    return 0;
}


System_Int32_array *__fastcall QuestPhaseEntity__GetReelIconIdArray(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Int32_array *v5; // x2
  const MethodInfo *v6; // x3

  if ( (byte_40F962C & 1) == 0 )
  {
    sub_B16FFC(&int___TypeInfo, method);
    sub_B16FFC(&StringLiteral_21638/*"reelIcon"*/, v4);
    byte_40F962C = 1;
  }
  v5 = (System_Int32_array *)sub_B17014(int___TypeInfo, 0LL, v2);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_21638/*"reelIcon"*/, v5, v6);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetSelectableQuests(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40F9614 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_21523/*"questSelect"*/, method);
    byte_40F9614 = 1;
  }
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_21523/*"questSelect"*/, 0LL, v2);
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
    {
      sub_B17100(SelectableQuests, v8, v9);
      sub_B170A0();
    }
    return SelectableQuests->m_Items[selectIndex + 1];
  }
  return result;
}


System_Int32_array *__fastcall QuestPhaseEntity__GetShadowOffSvtIds(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Int32_array *v5; // x2
  const MethodInfo *v6; // x3

  if ( (byte_40F963B & 1) == 0 )
  {
    sub_B16FFC(&int___TypeInfo, method);
    sub_B16FFC(&StringLiteral_21999/*"shadowOffSvtIds"*/, v4);
    byte_40F963B = 1;
  }
  v5 = (System_Int32_array *)sub_B17014(int___TypeInfo, 0LL, v2);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_21999/*"shadowOffSvtIds"*/, v5, v6);
}


int32_t __fastcall QuestPhaseEntity__GetSingleForceSvtId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40F9639 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_22041/*"singleForceSvtId"*/, method);
    byte_40F9639 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22041/*"singleForceSvtId"*/, 0, v2);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetStartMovieWave(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40F9621 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_20503/*"movieWave"*/, method);
    byte_40F9621 = 1;
  }
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_20503/*"movieWave"*/, 0LL, v2);
}


int32_t __fastcall QuestPhaseEntity__GetSupportInitDeckIndex(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40F964C & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_18401/*"eventDeckIndex"*/, method);
    byte_40F964C = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_18401/*"eventDeckIndex"*/, 0, v2);
}


int32_t __fastcall QuestPhaseEntity__GetTemporaryCommandSpell(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40F9649 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_22547/*"temporaryCommandSpell"*/, method);
    byte_40F9649 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22547/*"temporaryCommandSpell"*/, -1, v2);
}


int32_t __fastcall QuestPhaseEntity__GetUserEventDeckNo(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40F963A & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_22887/*"useEventDeckNo"*/, method);
    byte_40F963A = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22887/*"useEventDeckNo"*/, 1, v2);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetVoiceOffPlayerSvtIdArray(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_40F965B & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_23085/*"voiceOffMySvtIds"*/, method);
    byte_40F965B = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_23085/*"voiceOffMySvtIds"*/, 0LL);
}


System_String_o *__fastcall QuestPhaseEntity__GetWarBoardStartMovieName(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1

  if ( (byte_40F9657 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_15362/*"WarBoardStartMovieName"*/, method);
    sub_B16FFC(&StringLiteral_1/*""*/, v4);
    byte_40F9657 = 1;
  }
  return QuestPhaseEntity__getScriptStr(
           this,
           (System_String_o *)StringLiteral_15362/*"WarBoardStartMovieName"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


System_String_array *__fastcall QuestPhaseEntity__GetWaveStartMovie(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40F961F & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_23160/*"waveStartMovie"*/, method);
    byte_40F961F = 1;
  }
  return QuestPhaseEntity__getScriptStringArrayParam(this, (System_String_o *)StringLiteral_23160/*"waveStartMovie"*/, 0LL, v2);
}


int32_t __fastcall QuestPhaseEntity__GetWinBgmOffFlg(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40F9634 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_18274/*"endBgmOff"*/, method);
    byte_40F9634 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_18274/*"endBgmOff"*/, 0, v2);
}


int32_t __fastcall QuestPhaseEntity__GetWinVoiceOffFlg(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40F9632 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_18288/*"endVoiceOff"*/, method);
    byte_40F9632 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_18288/*"endVoiceOff"*/, 0, v2);
}


bool __fastcall QuestPhaseEntity__IsActiveAssistSkill(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Int32_array *v5; // x0
  const MethodInfo *v6; // x3
  System_Int32_array *ScriptIntArrayParam; // x0

  if ( (byte_40F9645 & 1) == 0 )
  {
    sub_B16FFC(&int___TypeInfo, method);
    sub_B16FFC(&StringLiteral_16434/*"assistIds"*/, v4);
    byte_40F9645 = 1;
  }
  v5 = (System_Int32_array *)sub_B17014(int___TypeInfo, 0LL, v2);
  ScriptIntArrayParam = QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_16434/*"assistIds"*/, v5, v6);
  if ( !ScriptIntArrayParam )
    sub_B170D4();
  return ScriptIntArrayParam->max_length != 0;
}


bool __fastcall QuestPhaseEntity__IsAreaImporveQuest(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_40F9658 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_16385/*"areaImprovementQuest"*/, method);
    byte_40F9658 = 1;
  }
  return QuestPhaseEntity__getScriptObj(this, (System_String_o *)StringLiteral_16385/*"areaImprovementQuest"*/, v2) != 0LL;
}


bool __fastcall QuestPhaseEntity__IsHideAssistConfButton(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40F9648 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_19067/*"hideAssistConfButton"*/, method);
    byte_40F9648 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19067/*"hideAssistConfButton"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__IsIgnoreBattleLoseDialog(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_40F9619 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_19330/*"ignoreBattleLoseDialog"*/, method);
    byte_40F9619 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_19330/*"ignoreBattleLoseDialog"*/, 0LL);
}


bool __fastcall QuestPhaseEntity__IsInvisibleConnectAndLoad(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40F963F & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_19811/*"invisibleConnectAndLoad"*/, method);
    byte_40F963F = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19811/*"invisibleConnectAndLoad"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__IsKeepSubBgmAfterBattleResult(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_40F9635 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_20037/*"keepSubBgmUntilBattleResult"*/, method);
    byte_40F9635 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_20037/*"keepSubBgmUntilBattleResult"*/, 0LL);
}


bool __fastcall QuestPhaseEntity__IsMatchIndividuality(
        QuestPhaseEntity_o *this,
        System_Int32_array *individualitys,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_IEnumerable_T__o *individuality; // x21
  System_Collections_Generic_HashSet_int__o *v12; // x20
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  System_Predicate_int__o *v17; // x0
  System_Predicate_T__o *v18; // x21
  System_Int32_array *All_int; // x0

  if ( (byte_40F963E & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_FindAll_int___, individualitys);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_int___ctor___66713952, v7);
    sub_B16FFC(&System_Collections_Generic_HashSet_int__TypeInfo, v8);
    sub_B16FFC(&Method_System_Predicate_int___ctor__, v9);
    sub_B16FFC(&System_Predicate_int__TypeInfo, v10);
    byte_40F963E = 1;
  }
  individuality = (System_Collections_Generic_IEnumerable_T__o *)this->fields.individuality;
  v12 = (System_Collections_Generic_HashSet_int__o *)sub_B170CC(
                                                       System_Collections_Generic_HashSet_int__TypeInfo,
                                                       individualitys,
                                                       method,
                                                       v3,
                                                       v4);
  System_Collections_Generic_HashSet_int____ctor_35487824(
    v12,
    individuality,
    (const MethodInfo_21D8050 *)Method_System_Collections_Generic_HashSet_int___ctor___66713952);
  v17 = (System_Predicate_int__o *)sub_B170CC(System_Predicate_int__TypeInfo, v13, v14, v15, v16);
  if ( !v12
    || (v18 = (System_Predicate_T__o *)v17,
        System_Predicate_int____ctor(
          v17,
          (Il2CppObject *)v12,
          (intptr_t)v12->klass->vtable._9_CopyTo.methodPtr,
          (const MethodInfo_2B09B40 *)Method_System_Predicate_int___ctor__),
        (All_int = System_Array__FindAll_int_(
                     individualitys,
                     v18,
                     (const MethodInfo_2044300 *)Method_System_Array_FindAll_int___)) == 0LL) )
  {
    sub_B170D4();
  }
  return *(_QWORD *)&All_int->max_length != 0LL;
}


bool __fastcall QuestPhaseEntity__IsNonStopEndBgm(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40F9616 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_21028/*"nonStopEndBgm"*/, method);
    byte_40F9616 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21028/*"nonStopEndBgm"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__IsNotClassBoard(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40F9667 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_21051/*"notClassBoard"*/, method);
    byte_40F9667 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21051/*"notClassBoard"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__IsNotResetResultDispFlag(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40F9623 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_21056/*"notResetResultDispFlag"*/, method);
    byte_40F9623 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21056/*"notResetResultDispFlag"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__IsNotUseRestrictionDialog(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40F9668 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_21057/*"notUseRestrictionDialog"*/, method);
    byte_40F9668 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21057/*"notUseRestrictionDialog"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__IsPlayScriptBeforeForWarBoard(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40F9644 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_19870/*"isScriptPlayForWarBoard"*/, method);
    byte_40F9644 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19870/*"isScriptPlayForWarBoard"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__IsRepeatReward(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40F9665 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_21679/*"repeatReward"*/, method);
    byte_40F9665 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21679/*"repeatReward"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__IsSkipBattleFinish(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40F965F & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_22062/*"skipBattleFinish"*/, method);
    byte_40F965F = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22062/*"skipBattleFinish"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__IsUseTemporaryCommandSpell(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40F964A & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_22891/*"useTemporaryCommandSpell"*/, method);
    byte_40F964A = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22891/*"useTemporaryCommandSpell"*/, -1, v2) == 1;
}


bool __fastcall QuestPhaseEntity__IsWaveCountInfinity(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40F965D & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_23158/*"waveCountInfinity"*/, method);
    byte_40F965D = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_23158/*"waveCountInfinity"*/, -1, v2) != -1;
}


bool __fastcall QuestPhaseEntity__IsWaveSetup(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40F9669 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_23159/*"waveSetup"*/, method);
    byte_40F9669 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_23159/*"waveSetup"*/, 0, v2) != 0;
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
  __int64 v23; // x3
  __int64 v24; // x4
  System_Collections_Generic_List_BattleActionData_HealData__o *v25; // x21
  QuestPhaseEntity___c_c *v26; // x0
  struct QuestPhaseEntity___c_StaticFields *static_fields; // x8
  System_Converter_BattleActionData_HealData__int__o *_9__107_0; // x22
  Il2CppObject *v29; // x23
  struct QuestPhaseEntity___c_StaticFields *v30; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_Collections_Generic_List_int__o *v37; // x0
  System_Int32_array *v38; // x0
  System_Collections_Generic_IDictionary_int__int____c *klass; // x8
  System_Int32_array *v40; // x21
  unsigned __int64 v41; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0

  if ( (byte_40F9652 & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_GetValue_long___, obj);
    sub_B16FFC(&Method_BasicHelper_GetValue_List_object____, v5);
    sub_B16FFC(&Method_System_Converter_object__int___ctor__, v6);
    sub_B16FFC(&System_Converter_object__int__TypeInfo, v7);
    sub_B16FFC(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v8);
    sub_B16FFC(&System_Collections_Generic_IDictionary_int__int____TypeInfo, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_object__ConvertAll_int___, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v11);
    sub_B16FFC(&Method_QuestPhaseEntity___c__SetNpcAiInfo_b__107_0__, v12);
    sub_B16FFC(&QuestPhaseEntity___c_TypeInfo, v13);
    sub_B16FFC(&StringLiteral_16230/*"aiIds"*/, v14);
    sub_B16FFC(&StringLiteral_21070/*"npcId"*/, v15);
    byte_40F9652 = 1;
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
                       (System_String_o *)StringLiteral_21070/*"npcId"*/,
                       0LL,
                       (const MethodInfo_18B7C18 *)Method_BasicHelper_GetValue_long___);
        Value_string = BasicHelper__GetValue_string_(
                         v18,
                         (System_String_o *)StringLiteral_16230/*"aiIds"*/,
                         0LL,
                         (const MethodInfo_18B7D04 *)Method_BasicHelper_GetValue_List_object____);
        if ( Value_long >= 1 )
        {
          v25 = (System_Collections_Generic_List_BattleActionData_HealData__o *)Value_string;
          if ( Value_string )
          {
            v26 = QuestPhaseEntity___c_TypeInfo;
            if ( (BYTE3(QuestPhaseEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !QuestPhaseEntity___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(QuestPhaseEntity___c_TypeInfo);
              v26 = QuestPhaseEntity___c_TypeInfo;
            }
            static_fields = v26->static_fields;
            _9__107_0 = (System_Converter_BattleActionData_HealData__int__o *)static_fields->__9__107_0;
            if ( !_9__107_0 )
            {
              if ( (BYTE3(v26->vtable._0_Equals.methodPtr) & 4) != 0 && !v26->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v26);
                static_fields = QuestPhaseEntity___c_TypeInfo->static_fields;
              }
              v29 = (Il2CppObject *)static_fields->__9;
              _9__107_0 = (System_Converter_BattleActionData_HealData__int__o *)sub_B170CC(
                                                                                  System_Converter_object__int__TypeInfo,
                                                                                  v21,
                                                                                  v22,
                                                                                  v23,
                                                                                  v24);
              System_Converter_BattleActionData_HealData__int____ctor(
                _9__107_0,
                v29,
                Method_QuestPhaseEntity___c__SetNpcAiInfo_b__107_0__,
                (const MethodInfo_266B524 *)Method_System_Converter_object__int___ctor__);
              v30 = QuestPhaseEntity___c_TypeInfo->static_fields;
              v30->__9__107_0 = (struct System_Converter_object__int__o *)_9__107_0;
              sub_B16F98(
                (BattleServantConfConponent_o *)&v30->__9__107_0,
                (System_Int32_array **)_9__107_0,
                v31,
                v32,
                v33,
                v34,
                v35,
                v36);
            }
            v37 = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_BattleActionData_HealData___ConvertAll_int_(
                                                              v25,
                                                              (System_Converter_T__TOutput__o *)_9__107_0,
                                                              (const MethodInfo_18FDCCC *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
            if ( !v37
              || (v38 = System_Collections_Generic_List_int___ToArray(
                          v37,
                          (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__),
                  !dicNpcAiId) )
            {
              sub_B170D4();
            }
            klass = dicNpcAiId->klass;
            v40 = v38;
            if ( *(_WORD *)&dicNpcAiId->klass->_2.bitflags1 )
            {
              v41 = 0LL;
              p_offset = &klass->_1.interfaceOffsets->offset;
              while ( *((System_Collections_Generic_IDictionary_int__int____c **)p_offset - 1) != System_Collections_Generic_IDictionary_int__int____TypeInfo )
              {
                ++v41;
                p_offset += 4;
                if ( v41 >= *(unsigned __int16 *)&dicNpcAiId->klass->_2.bitflags1 )
                  goto LABEL_26;
              }
              p_method = (__int64)&klass->vtable[*p_offset + 1].method;
            }
            else
            {
LABEL_26:
              p_method = sub_AAFEF8(dicNpcAiId, System_Collections_Generic_IDictionary_int__int____TypeInfo, 1LL);
            }
            (*(void (__fastcall **)(System_Collections_Generic_IDictionary_int__int____o *, _QWORD, System_Int32_array *, _QWORD))p_method)(
              dicNpcAiId,
              (unsigned int)Value_long,
              v40,
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

  if ( (byte_40F960F & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_16579/*"battleEffectId"*/, *(_QWORD *)&defVal);
    byte_40F960F = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_16579/*"battleEffectId"*/, defVal, v3);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall QuestPhaseEntity__getBattleFieldMotionId(
        QuestPhaseEntity_o *this,
        int32_t defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_40F9611 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_18640/*"fieldMotionId"*/, *(_QWORD *)&defVal);
    byte_40F9611 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_18640/*"fieldMotionId"*/, defVal, v3);
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
  __int64 v9; // x2
  int32_t BattleFieldMotionId; // w20
  __int64 v11; // x1
  __int64 v12; // x2

  if ( (byte_40F9612 & 1) == 0 )
  {
    sub_B16FFC(&int___TypeInfo, defVals);
    sub_B16FFC(&StringLiteral_18641/*"fieldMotionIds"*/, v6);
    byte_40F9612 = 1;
  }
  result = QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_18641/*"fieldMotionIds"*/, defVals, v3);
  if ( !result )
    goto LABEL_10;
  if ( *(_QWORD *)&result->max_length )
    return result;
  BattleFieldMotionId = QuestPhaseEntity__getBattleFieldMotionId(this, -1, v8);
  result = defVals;
  if ( BattleFieldMotionId == -1 )
    return result;
  result = (System_Int32_array *)sub_B17014(int___TypeInfo, 1LL, v9);
  if ( !result )
LABEL_10:
    sub_B170D4();
  if ( !result->max_length )
  {
    sub_B17100(result, v11, v12);
    sub_B170A0();
  }
  result->m_Items[1] = BattleFieldMotionId;
  return result;
}


int32_t __fastcall QuestPhaseEntity__getBreakOnBattleWinWaitMSec(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40F961D & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_16867/*"breakOnBattleWinWaitMSec"*/, method);
    byte_40F961D = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_16867/*"breakOnBattleWinWaitMSec"*/, 0, v2);
}


System_Int32_array *__fastcall QuestPhaseEntity__getEventGrounpIds(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Int32_array *v5; // x2
  const MethodInfo *v6; // x3

  if ( (byte_40F9613 & 1) == 0 )
  {
    sub_B16FFC(&int___TypeInfo, method);
    sub_B16FFC(&StringLiteral_18402/*"eventGroupId"*/, v4);
    byte_40F9613 = 1;
  }
  v5 = (System_Int32_array *)sub_B17014(int___TypeInfo, 0LL, v2);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_18402/*"eventGroupId"*/, v5, v6);
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

  if ( (byte_40F964F & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_19074/*"hintLeftIndent"*/, method);
    byte_40F964F = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19074/*"hintLeftIndent"*/, -1, v2);
}


System_String_o *__fastcall QuestPhaseEntity__getHintMessage(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1

  if ( (byte_40F964E & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_19075/*"hintMessage"*/, method);
    sub_B16FFC(&StringLiteral_1/*""*/, v4);
    byte_40F964E = 1;
  }
  return QuestPhaseEntity__getScriptStr(
           this,
           (System_String_o *)StringLiteral_19075/*"hintMessage"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


System_String_o *__fastcall QuestPhaseEntity__getHintMessageTitle(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1

  if ( (byte_40F964D & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1/*""*/, method);
    sub_B16FFC(&StringLiteral_19077/*"hintTitle"*/, v4);
    byte_40F964D = 1;
  }
  return QuestPhaseEntity__getScriptStr(
           this,
           (System_String_o *)StringLiteral_19077/*"hintTitle"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


int32_t __fastcall QuestPhaseEntity__getHintOpenType(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40F9650 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_19076/*"hintOpenType"*/, method);
    byte_40F9650 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19076/*"hintOpenType"*/, 0, v2);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall QuestPhaseEntity__getLeave(QuestPhaseEntity_o *this, int32_t defVal, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_40F960E & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_20122/*"leave"*/, *(_QWORD *)&defVal);
    byte_40F960E = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20122/*"leave"*/, defVal, v3);
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
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v7; // x2
  System_Int32_array *individuality; // x3
  int32_t phase; // w19
  int32_t questId; // w20
  QuestBehaviorMaster_o *v11; // x21

  if ( (byte_40F9601 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestBehaviorMaster___, method);
    sub_B16FFC(&int___TypeInfo, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_40F9601 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestBehaviorMaster___);
  individuality = this->fields.individuality;
  questId = this->fields.questId;
  phase = this->fields.phase;
  v11 = (QuestBehaviorMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( !individuality )
    individuality = (System_Int32_array *)sub_B17014(int___TypeInfo, 0LL, v7);
  if ( !v11 )
LABEL_8:
    sub_B170D4();
  return QuestBehaviorMaster__getBattleIndividuality(v11, questId, phase, individuality, 0LL);
}


int32_t __fastcall QuestPhaseEntity__getQuestId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  return this->fields.questId;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall QuestPhaseEntity__getResultBgmId(QuestPhaseEntity_o *this, int32_t defVal, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_40F960B & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_21707/*"resultBgmId"*/, *(_QWORD *)&defVal);
    byte_40F960B = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21707/*"resultBgmId"*/, defVal, v3);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall QuestPhaseEntity__getResultEffectId(
        QuestPhaseEntity_o *this,
        int32_t defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_40F960D & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_21708/*"resultEffectId"*/, *(_QWORD *)&defVal);
    byte_40F960D = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21708/*"resultEffectId"*/, defVal, v3);
}


System_Int32_array *__fastcall QuestPhaseEntity__getResultEnemyVoiceIds(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Int32_array *v5; // x2
  const MethodInfo *v6; // x3

  if ( (byte_40F9617 & 1) == 0 )
  {
    sub_B16FFC(&int___TypeInfo, method);
    sub_B16FFC(&StringLiteral_21709/*"resultEnemyVoiceIds"*/, v4);
    byte_40F9617 = 1;
  }
  v5 = (System_Int32_array *)sub_B17014(int___TypeInfo, 0LL, v2);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_21709/*"resultEnemyVoiceIds"*/, v5, v6);
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
  __int64 v15; // x3
  __int64 v16; // x4
  System_Collections_Generic_List_BattleActionData_HealData__o *v17; // x19
  QuestPhaseEntity___c_c *v18; // x0
  struct QuestPhaseEntity___c_StaticFields *static_fields; // x8
  System_Converter_BattleActionData_HealData__int__o *_9__26_0; // x20
  Il2CppObject *v21; // x21
  struct QuestPhaseEntity___c_StaticFields *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Collections_Generic_List_int__o *v29; // x0

  if ( (byte_40F9603 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Converter_object__int___ctor__, key);
    sub_B16FFC(&System_Converter_object__int__TypeInfo, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_object__ConvertAll_int___, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v9);
    sub_B16FFC(&Method_QuestPhaseEntity___c__getScriptIntArrayParam_b__26_0__, v10);
    sub_B16FFC(&QuestPhaseEntity___c_TypeInfo, v11);
    byte_40F9603 = 1;
  }
  ScriptObjListParam = QuestPhaseEntity__getScriptObjListParam(this, key, (const MethodInfo *)defVal);
  if ( !ScriptObjListParam )
    return defVal;
  v17 = (System_Collections_Generic_List_BattleActionData_HealData__o *)ScriptObjListParam;
  v18 = QuestPhaseEntity___c_TypeInfo;
  if ( (BYTE3(QuestPhaseEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestPhaseEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestPhaseEntity___c_TypeInfo);
    v18 = QuestPhaseEntity___c_TypeInfo;
  }
  static_fields = v18->static_fields;
  _9__26_0 = (System_Converter_BattleActionData_HealData__int__o *)static_fields->__9__26_0;
  if ( !_9__26_0 )
  {
    if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 && !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      static_fields = QuestPhaseEntity___c_TypeInfo->static_fields;
    }
    v21 = (Il2CppObject *)static_fields->__9;
    _9__26_0 = (System_Converter_BattleActionData_HealData__int__o *)sub_B170CC(
                                                                       System_Converter_object__int__TypeInfo,
                                                                       v13,
                                                                       v14,
                                                                       v15,
                                                                       v16);
    System_Converter_BattleActionData_HealData__int____ctor(
      _9__26_0,
      v21,
      Method_QuestPhaseEntity___c__getScriptIntArrayParam_b__26_0__,
      (const MethodInfo_266B524 *)Method_System_Converter_object__int___ctor__);
    v22 = QuestPhaseEntity___c_TypeInfo->static_fields;
    v22->__9__26_0 = (struct System_Converter_object__int__o *)_9__26_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v22->__9__26_0,
      (System_Int32_array **)_9__26_0,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
  }
  v29 = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_BattleActionData_HealData___ConvertAll_int_(
                                                    v17,
                                                    (System_Converter_T__TOutput__o *)_9__26_0,
                                                    (const MethodInfo_18FDCCC *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
  if ( !v29 )
    sub_B170D4();
  return System_Collections_Generic_List_int___ToArray(
           v29,
           (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
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
  if ( (byte_40F9602 & 1) == 0 )
  {
    sub_B16FFC(&long_TypeInfo, key);
    byte_40F9602 = 1;
  }
  ScriptObj = QuestPhaseEntity__getScriptObj(this, key, *(const MethodInfo **)&defVal);
  if ( !ScriptObj )
    return v4;
  if ( ScriptObj->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(ScriptObj);
  v9 = (QuestPhaseEntity_o *)sub_B173C8(ScriptObj);
  return (unsigned int)QuestPhaseEntity__getScriptObj(v9, v10, v11);
}


Il2CppObject *__fastcall QuestPhaseEntity__getScriptObj(
        QuestPhaseEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  Il2CppObject *result; // x0
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40F9607 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, key);
    byte_40F9607 = 1;
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
           (const MethodInfo_2DA5A18 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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

  if ( (byte_40F9605 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_object__ToArray__, key);
    byte_40F9605 = 1;
  }
  ScriptObjListParam = QuestPhaseEntity__getScriptObjListParam(this, key, (const MethodInfo *)defVal);
  if ( ScriptObjListParam )
    return (System_Object_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)ScriptObjListParam,
                                    (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_object__ToArray__);
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

  if ( (byte_40F9606 & 1) == 0 )
  {
    sub_B16FFC(&System_Collections_Generic_List_object__TypeInfo, key);
    byte_40F9606 = 1;
  }
  result = (System_Collections_Generic_List_object__o *)QuestPhaseEntity__getScriptObj(this, key, method);
  if ( result )
  {
    v6 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
    if ( *(&result->klass->_2.bitflags2 + 1) < (unsigned int)v6
      || (System_Collections_Generic_List_object__c *)result->klass->_2.typeHierarchy[v6 - 1] != System_Collections_Generic_List_object__TypeInfo )
    {
      v7 = (QuestPhaseEntity_o *)sub_B173C8(result);
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

  if ( (byte_40F9608 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    sub_B16FFC(&string_TypeInfo, v8);
    byte_40F9608 = 1;
  }
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)key,
          (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return defVal;
  }
  v10 = this->fields.script;
  if ( !v10 )
    sub_B170D4();
  Item = (System_String_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                              (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v10,
                              (System_Type_o *)key,
                              (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  defVal = Item;
  if ( !Item || Item->klass == string_TypeInfo )
    return defVal;
  v13 = (QuestPhaseEntity_o *)sub_B173C8(Item);
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
  __int64 v15; // x3
  __int64 v16; // x4
  System_Collections_Generic_List_string__o *v17; // x19
  QuestPhaseEntity___c_c *v18; // x0
  struct QuestPhaseEntity___c_StaticFields *static_fields; // x8
  System_Converter_string__string__o *_9__27_0; // x20
  Il2CppObject *v21; // x21
  struct QuestPhaseEntity___c_StaticFields *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Collections_Generic_List_WarBoardUiData_SaveData__o *v29; // x0

  v4 = defVal;
  if ( (byte_40F9604 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Converter_object__string___ctor__, key);
    sub_B16FFC(&System_Converter_object__string__TypeInfo, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_object__ConvertAll_string___, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__ToArray__, v9);
    sub_B16FFC(&Method_QuestPhaseEntity___c__getScriptStringArrayParam_b__27_0__, v10);
    sub_B16FFC(&QuestPhaseEntity___c_TypeInfo, v11);
    byte_40F9604 = 1;
  }
  ScriptObjListParam = QuestPhaseEntity__getScriptObjListParam(this, key, (const MethodInfo *)defVal);
  if ( ScriptObjListParam )
  {
    v17 = (System_Collections_Generic_List_string__o *)ScriptObjListParam;
    v18 = QuestPhaseEntity___c_TypeInfo;
    if ( (BYTE3(QuestPhaseEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestPhaseEntity___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestPhaseEntity___c_TypeInfo);
      v18 = QuestPhaseEntity___c_TypeInfo;
    }
    static_fields = v18->static_fields;
    _9__27_0 = (System_Converter_string__string__o *)static_fields->__9__27_0;
    if ( !_9__27_0 )
    {
      if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 && !v18->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v18);
        static_fields = QuestPhaseEntity___c_TypeInfo->static_fields;
      }
      v21 = (Il2CppObject *)static_fields->__9;
      _9__27_0 = (System_Converter_string__string__o *)sub_B170CC(
                                                         System_Converter_object__string__TypeInfo,
                                                         v13,
                                                         v14,
                                                         v15,
                                                         v16);
      System_Converter_string__string____ctor(
        _9__27_0,
        v21,
        Method_QuestPhaseEntity___c__getScriptStringArrayParam_b__27_0__,
        (const MethodInfo_266B904 *)Method_System_Converter_object__string___ctor__);
      v22 = QuestPhaseEntity___c_TypeInfo->static_fields;
      v22->__9__27_0 = (struct System_Converter_object__string__o *)_9__27_0;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v22->__9__27_0,
        (System_Int32_array **)_9__27_0,
        v23,
        v24,
        v25,
        v26,
        v27,
        v28);
    }
    v29 = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)System_Collections_Generic_List_string___ConvertAll_string_(
                                                                          v17,
                                                                          (System_Converter_T__TOutput__o *)_9__27_0,
                                                                          (const MethodInfo_18FDDD8 *)Method_System_Collections_Generic_List_object__ConvertAll_string___);
    if ( !v29 )
      sub_B170D4();
    return (System_String_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    v29,
                                    (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_string__ToArray__);
  }
  return v4;
}


int32_t __fastcall QuestPhaseEntity__getSpecialShadowEffectId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40F9628 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_18962/*"getSpecialShadowEffectId"*/, method);
    byte_40F9628 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_18962/*"getSpecialShadowEffectId"*/, 0, v2);
}


int32_t __fastcall QuestPhaseEntity__getTurnSituationType(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40F9627 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_22729/*"turnSituationType"*/, method);
    byte_40F9627 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22729/*"turnSituationType"*/, 0, v2);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall QuestPhaseEntity__getUniqueCameraId(
        QuestPhaseEntity_o *this,
        int32_t defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_40F9610 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_22810/*"uniqueCameraId"*/, *(_QWORD *)&defVal);
    byte_40F9610 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22810/*"uniqueCameraId"*/, defVal, v3);
}


bool __fastcall QuestPhaseEntity__isBattleFinishCameraTargetAll(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40F9626 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_16581/*"battleFinishCameraTargetAll"*/, method);
    byte_40F9626 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_16581/*"battleFinishCameraTargetAll"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__isBreakOnBattleWin(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40F961B & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_16865/*"breakOnBattleWin"*/, method);
    byte_40F961B = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_16865/*"breakOnBattleWin"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__isBreakOnBattleWinFadeColorBlack(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40F961C & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_16866/*"breakOnBattleWinFadeColorBlack"*/, method);
    byte_40F961C = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_16866/*"breakOnBattleWinFadeColorBlack"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__isDisableChangeRaidDownMessage(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40F9629 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_19845/*"isDisableChangeRaidDownMessage"*/, method);
    byte_40F9629 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19845/*"isDisableChangeRaidDownMessage"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__isDispLoseResult(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40F9618 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_21710/*"resultLoseDisp"*/, method);
    byte_40F9618 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21710/*"resultLoseDisp"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__isFadeOutBgmBeforeMovie(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40F960C & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_6520/*"FadeOutBgmBeforeMovie"*/, method);
    byte_40F960C = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_6520/*"FadeOutBgmBeforeMovie"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__isNoResult(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40F961A & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_21012/*"noResult"*/, method);
    byte_40F961A = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21012/*"noResult"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__isTurnSituationType(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  return QuestPhaseEntity__getTurnSituationType(this, method) > 0;
}


void __fastcall QuestPhaseEntity___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40FA30D & 1) == 0 )
  {
    sub_B16FFC(&QuestPhaseEntity___c_TypeInfo, v1);
    byte_40FA30D = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(QuestPhaseEntity___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)QuestPhaseEntity___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
}


void __fastcall QuestPhaseEntity___c___ctor(QuestPhaseEntity___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall QuestPhaseEntity___c___SetNpcAiInfo_b__107_0(
        QuestPhaseEntity___c_o *this,
        Il2CppObject *x,
        const MethodInfo *method)
{
  System_String_o *v4; // x0

  if ( (byte_40FA30F & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1/*""*/, x);
    byte_40FA30F = 1;
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

  if ( (byte_40FA30E & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1/*""*/, x);
    byte_40FA30E = 1;
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
    sub_B170D4();
  return (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))x->klass->vtable[3].method)(
                              x,
                              x->klass->vtable[4].methodPtr);
}


void __fastcall QuestPhaseEntity___c__DisplayClass106_0___ctor(
        QuestPhaseEntity___c__DisplayClass106_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestPhaseEntity___c__DisplayClass106_0___GetNpcAiInfo_b__0(
        QuestPhaseEntity___c__DisplayClass106_0_o *this,
        Il2CppObject *val,
        const MethodInfo *method)
{
  QuestPhaseEntity__SetNpcAiInfo(
    (System_Collections_Generic_IDictionary_int__int____o *)this->fields.dicNpcAiId,
    val,
    0LL);
}