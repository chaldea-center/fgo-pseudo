void __fastcall QuestPhaseEntity___ctor(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_438FC64 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_string___ctor__);
    byte_438FC64 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_21FB7E0 *)Method_DataEntityBase_string___ctor__);
}


void __fastcall QuestPhaseEntity___ctor_34397212(
        QuestPhaseEntity_o *this,
        QuestPhaseEntity_o *cSrc,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
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

  if ( (byte_438FC65 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_string___ctor__);
    sub_B775C4(&int___TypeInfo);
    byte_438FC65 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_21FB7E0 *)Method_DataEntityBase_string___ctor__);
  if ( !cSrc )
    sub_B7769C(v5, v6);
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
    v16 = (struct System_Int32_array *)sub_B77684(v14, int___TypeInfo);
    if ( !v16 )
      goto LABEL_12;
  }
  else
  {
    v16 = 0LL;
  }
  this->fields.classIds = v16;
  sub_B77560(
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
  v25 = (struct System_Int32_array *)sub_B77684(v24, int___TypeInfo);
  if ( !v25 )
  {
LABEL_12:
    sub_B77990(v15);
LABEL_13:
    v25 = 0LL;
  }
  this->fields.individuality = v25;
  p_individuality = &this->fields.individuality;
  sub_B77560((BattleServantConfConponent_o *)p_individuality, (System_Int32_array **)v25, v17, v18, v19, v20, v21, v22);
  *((_DWORD *)p_individuality + 2) = cSrc->fields.giftId;
}


System_String_o *__fastcall QuestPhaseEntity__CreatePK(int32_t questId, int32_t phase, const MethodInfo *method)
{
  if ( (byte_438FC63 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_438FC63 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           questId,
           phase,
           (const MethodInfo_1D171BC *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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
  __int64 v5; // x9
  QuestPhaseEntity_o *v6; // x0
  int32_t v7; // w1
  const MethodInfo *v8; // x2

  if ( (byte_438FC6F & 1) == 0 )
  {
    sub_B775C4(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_B775C4(&StringLiteral_16569/*"addEquipSkills"*/);
    byte_438FC6F = 1;
  }
  result = (System_Collections_Generic_Dictionary_string__object__o *)QuestPhaseEntity__getScriptObj(
                                                                        this,
                                                                        (System_String_o *)StringLiteral_16569/*"addEquipSkills"*/,
                                                                        v2);
  if ( result )
  {
    v5 = *(&System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.bitflags2 + 1);
    if ( *(&result->klass->_2.bitflags2 + 1) < (unsigned int)v5
      || (System_Collections_Generic_Dictionary_string__object__c *)result->klass->_2.typeHierarchy[v5 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
    {
      sub_B77990(result);
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

  if ( (byte_438FCDA & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_16580/*"addUniqueCameraIds"*/);
    byte_438FCDA = 1;
  }
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_16580/*"addUniqueCameraIds"*/, defVal, v3);
}


int32_t __fastcall QuestPhaseEntity__GetAdvantageClassId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_438FC9E & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_16863/*"auto_sel_support_type"*/);
    byte_438FC9E = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_16863/*"auto_sel_support_type"*/, -1, v2);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetAssistIdArray(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  System_Int32_array *v3; // x2
  const MethodInfo *v4; // x3

  if ( (byte_438FCAD & 1) == 0 )
  {
    sub_B775C4(&int___TypeInfo);
    sub_B775C4(&StringLiteral_16819/*"assistIds"*/);
    byte_438FCAD = 1;
  }
  v3 = (System_Int32_array *)sub_B775DC(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_16819/*"assistIds"*/, v3, v4);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetAssistWeightArray(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  System_Int32_array *v3; // x2
  const MethodInfo *v4; // x3

  if ( (byte_438FCAE & 1) == 0 )
  {
    sub_B775C4(&int___TypeInfo);
    sub_B775C4(&StringLiteral_16818/*"assistIdWeight"*/);
    byte_438FCAE = 1;
  }
  v3 = (System_Int32_array *)sub_B775DC(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_16818/*"assistIdWeight"*/, v3, v4);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetAssumedEffectId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_438FCC0 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_16822/*"assumedEffectId"*/);
    byte_438FCC0 = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_16822/*"assumedEffectId"*/, 0LL);
}


System_String_o *__fastcall QuestPhaseEntity__GetBattleFinishMovie(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_438FC85 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_16975/*"battleFinishMovie"*/);
    byte_438FC85 = 1;
  }
  return QuestPhaseEntity__getScriptStr(this, (System_String_o *)StringLiteral_16975/*"battleFinishMovie"*/, 0LL, v2);
}


int32_t __fastcall QuestPhaseEntity__GetBattleFinishWaitTime(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_438FCC9 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_16976/*"battleFinishWaitTime"*/);
    byte_438FCC9 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_16976/*"battleFinishWaitTime"*/, 0, v2);
}


int32_t __fastcall QuestPhaseEntity__GetBattleItemObjectId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_438FCD7 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_16980/*"battleItemObjectId"*/);
    byte_438FCD7 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_16980/*"battleItemObjectId"*/, 0, v2);
}


int32_t __fastcall QuestPhaseEntity__GetBeforeBattleSkillActor(
        QuestPhaseEntity_o *this,
        int32_t defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_438FCCA & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_17019/*"beforeBattleSkillActor"*/);
    byte_438FCCA = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_17019/*"beforeBattleSkillActor"*/, defVal, v3);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetClearGiftItemListDisplay(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  System_Int32_array *v3; // x2
  const MethodInfo *v4; // x3

  if ( (byte_438FCBD & 1) == 0 )
  {
    sub_B775C4(&int___TypeInfo);
    sub_B775C4(&StringLiteral_17811/*"clearGiftItemListDisplay"*/);
    byte_438FCBD = 1;
  }
  v3 = (System_Int32_array *)sub_B775DC(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_17811/*"clearGiftItemListDisplay"*/, v3, v4);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetCondHavingIds(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  System_Int32_array *v3; // x2
  const MethodInfo *v4; // x3

  if ( (byte_438FCA9 & 1) == 0 )
  {
    sub_B775C4(&int___TypeInfo);
    sub_B775C4(&StringLiteral_17996/*"condHaving"*/);
    byte_438FCA9 = 1;
  }
  v3 = (System_Int32_array *)sub_B775DC(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_17996/*"condHaving"*/, v3, v4);
}


int32_t __fastcall QuestPhaseEntity__GetCondQuestClearable(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_438FCDE & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_17998/*"condQuestClearable"*/);
    byte_438FCDE = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_17998/*"condQuestClearable"*/, 0, v2);
}


int32_t __fastcall QuestPhaseEntity__GetCorrectionIconId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_438FC9D & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_18061/*"correctionIconId"*/);
    byte_438FC9D = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_18061/*"correctionIconId"*/, -1, v2);
}


int32_t __fastcall QuestPhaseEntity__GetDefenceTargetContinueRecoverRate(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_438FCD4 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_19079/*"fieldHpContinueRecoverRate"*/);
    byte_438FCD4 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19079/*"fieldHpContinueRecoverRate"*/, 0, v2);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetEnemyInfoDispNpcSvtIdList(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  System_Int32_array *v3; // x2
  const MethodInfo *v4; // x3

  if ( (byte_438FCBB & 1) == 0 )
  {
    sub_B775C4(&int___TypeInfo);
    sub_B775C4(&StringLiteral_21804/*"overwriteEnemyInfos"*/);
    byte_438FCBB = 1;
  }
  v3 = (System_Int32_array *)sub_B775DC(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_21804/*"overwriteEnemyInfos"*/, v3, v4);
}


System_String_array *__fastcall QuestPhaseEntity__GetEnemyInfoOverwriteNpcSvtNameList(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  System_String_array *v3; // x2
  const MethodInfo *v4; // x3

  if ( (byte_438FCBC & 1) == 0 )
  {
    sub_B775C4(&string___TypeInfo);
    sub_B775C4(&StringLiteral_21803/*"overwriteEnemyInfoNames"*/);
    byte_438FCBC = 1;
  }
  v3 = (System_String_array *)sub_B775DC(string___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptStringArrayParam(this, (System_String_o *)StringLiteral_21803/*"overwriteEnemyInfoNames"*/, v3, v4);
}


int32_t __fastcall QuestPhaseEntity__GetEquipAddId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_438FCBA & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_18755/*"equipAddId"*/);
    byte_438FCBA = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_18755/*"equipAddId"*/, 0, v2);
}


int32_t __fastcall QuestPhaseEntity__GetFinishEffectId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_438FC9A & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_19117/*"finishEffectId"*/);
    byte_438FC9A = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19117/*"finishEffectId"*/, -1, v2);
}


int32_t __fastcall QuestPhaseEntity__GetFormationBgmId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_438FCC1 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_19195/*"formationBgmId"*/);
    byte_438FCC1 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19195/*"formationBgmId"*/, -1, v2);
}


float __fastcall QuestPhaseEntity__GetFormationSubBgmFadeInTime(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_438FCC3 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_19196/*"formationSubBgmFadeInTime"*/);
    byte_438FCC3 = 1;
  }
  return (float)QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19196/*"formationSubBgmFadeInTime"*/, 0, v2) / 1000.0;
}


int32_t __fastcall QuestPhaseEntity__GetFormationSubBgmId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_438FCC2 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_19197/*"formationSubBgmId"*/);
    byte_438FCC2 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19197/*"formationSubBgmId"*/, -1, v2);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetGimmickAnimTypeArray(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_438FC98 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_19442/*"gimmickAnimType"*/);
    byte_438FC98 = 1;
  }
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_19442/*"gimmickAnimType"*/, 0LL, v2);
}


int32_t __fastcall QuestPhaseEntity__GetGimmickId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_438FC91 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_19443/*"gimmickId"*/);
    byte_438FC91 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19443/*"gimmickId"*/, -1, v2);
}


System_Object_array *__fastcall QuestPhaseEntity__GetGimmickResultVoiceArray(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_438FC97 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_22268/*"resultVoice"*/);
    byte_438FC97 = 1;
  }
  return QuestPhaseEntity__getScriptObjArrayParam(this, (System_String_o *)StringLiteral_22268/*"resultVoice"*/, 0LL, v2);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetGimmickSkillIdArray(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  System_Int32_array *v3; // x2
  const MethodInfo *v4; // x3

  if ( (byte_438FC94 & 1) == 0 )
  {
    sub_B775C4(&int___TypeInfo);
    sub_B775C4(&StringLiteral_22194/*"reelSkill"*/);
    byte_438FC94 = 1;
  }
  v3 = (System_Int32_array *)sub_B775DC(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_22194/*"reelSkill"*/, v3, v4);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetGimmickSkillRateArray(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  System_Int32_array *v3; // x2
  const MethodInfo *v4; // x3

  if ( (byte_438FC95 & 1) == 0 )
  {
    sub_B775C4(&int___TypeInfo);
    sub_B775C4(&StringLiteral_22193/*"reelRate"*/);
    byte_438FC95 = 1;
  }
  v3 = (System_Int32_array *)sub_B775DC(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_22193/*"reelRate"*/, v3, v4);
}


System_String_array *__fastcall QuestPhaseEntity__GetGimmickStartVoiceArray(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_438FC96 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_22759/*"startVoice"*/);
    byte_438FC96 = 1;
  }
  return QuestPhaseEntity__getScriptStringArrayParam(this, (System_String_o *)StringLiteral_22759/*"startVoice"*/, 0LL, v2);
}


int32_t __fastcall QuestPhaseEntity__GetGimmickSvtId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_438FC92 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_19444/*"gimmickSvtId"*/);
    byte_438FC92 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19444/*"gimmickSvtId"*/, -1, v2);
}


int32_t __fastcall QuestPhaseEntity__GetIconItemNumberDispType(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_438FCD9 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_19665/*"iconItemNumberDispType"*/);
    byte_438FCD9 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19665/*"iconItemNumberDispType"*/, 0, v2);
}


float __fastcall QuestPhaseEntity__GetIncomingCallDispTime(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_438FCCD & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_20174/*"incomingCallDispTime"*/);
    byte_438FCCD = 1;
  }
  return (float)QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20174/*"incomingCallDispTime"*/, 500, v2) / 1000.0;
}


System_String_o *__fastcall QuestPhaseEntity__GetIncomingCallMessage(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_438FCCC & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_20175/*"incomingCallMessage"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438FCCC = 1;
  }
  return QuestPhaseEntity__getScriptStr(
           this,
           (System_String_o *)StringLiteral_20175/*"incomingCallMessage"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


System_String_o *__fastcall QuestPhaseEntity__GetIncomingCallTitle(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_438FCCB & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_20176/*"incomingCallTitle"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438FCCB = 1;
  }
  return QuestPhaseEntity__getScriptStr(
           this,
           (System_String_o *)StringLiteral_20176/*"incomingCallTitle"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


System_String_o *__fastcall QuestPhaseEntity__GetMapModelEntryAnimationName(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_438FCC7 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_1194/*"3dMapEntryAnimName"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438FCC7 = 1;
  }
  return QuestPhaseEntity__getScriptStr(
           this,
           (System_String_o *)StringLiteral_1194/*"3dMapEntryAnimName"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


int32_t __fastcall QuestPhaseEntity__GetMasterSkillDelay(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_438FCA3 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_20823/*"masterSkillDelay"*/);
    byte_438FCA3 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20823/*"masterSkillDelay"*/, 0, v2);
}


System_String_o *__fastcall QuestPhaseEntity__GetMasterSkillDelayInfo(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_438FCA4 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_20824/*"masterSkillDelayInfo"*/);
    byte_438FCA4 = 1;
  }
  return QuestPhaseEntity__getScriptStr(this, (System_String_o *)StringLiteral_20824/*"masterSkillDelayInfo"*/, 0LL, v2);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetMoveSceneInfo(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  System_Int32_array *v3; // x2
  const MethodInfo *v4; // x3

  if ( (byte_438FCCF & 1) == 0 )
  {
    sub_B775C4(&int___TypeInfo);
    sub_B775C4(&StringLiteral_20998/*"moveSceneInfo"*/);
    byte_438FCCF = 1;
  }
  v3 = (System_Int32_array *)sub_B775DC(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_20998/*"moveSceneInfo"*/, v3, v4);
}


int32_t __fastcall QuestPhaseEntity__GetMovieAfterCrossFadeStartFrame(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_438FC8C & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_21003/*"movieAfterCrossFadeStartFrame"*/);
    byte_438FC8C = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21003/*"movieAfterCrossFadeStartFrame"*/, 0, v2);
}


int32_t __fastcall QuestPhaseEntity__GetMovieAfterCrossFadeTime(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_438FC8B & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_21004/*"movieAfterCrossFadeTime"*/);
    byte_438FC8B = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21004/*"movieAfterCrossFadeTime"*/, 0, v2);
}


int32_t __fastcall QuestPhaseEntity__GetNextSceneId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_438FCA7 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_21499/*"nextSceneId"*/);
    byte_438FCA7 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21499/*"nextSceneId"*/, 0, v2);
}


System_String_array *__fastcall QuestPhaseEntity__GetNextSceneParam(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  System_String_array *result; // x0
  System_String_o *v5; // x19
  System_Char_array *v6; // x0
  __int64 v7; // x1
  __int64 v8; // x0

  if ( (byte_438FCA8 & 1) == 0 )
  {
    sub_B775C4(&char___TypeInfo);
    sub_B775C4(&StringLiteral_21500/*"nextSceneParam"*/);
    byte_438FCA8 = 1;
  }
  result = (System_String_array *)QuestPhaseEntity__getScriptStr(this, (System_String_o *)StringLiteral_21500/*"nextSceneParam"*/, 0LL, v2);
  if ( result )
  {
    v5 = (System_String_o *)result;
    v6 = (System_Char_array *)sub_B775DC(char___TypeInfo, 1LL);
    if ( !v6 )
      sub_B7769C(0LL, v7);
    if ( !v6->max_length )
    {
      v8 = sub_B776C8(v6);
      sub_B77668(v8, 0LL);
    }
    v6->m_Items[2] = 44;
    return System_String__Split(v5, v6, 0LL);
  }
  return result;
}


int32_t __fastcall QuestPhaseEntity__GetNotDispEquipSkillChargeTurn(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_438FCD8 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_21576/*"notDispEquipSkillChargeTurn"*/);
    byte_438FCD8 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21576/*"notDispEquipSkillChargeTurn"*/, 0, v2);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetNotHavingQuests(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  System_Int32_array *v3; // x2
  const MethodInfo *v4; // x3

  if ( (byte_438FCAA & 1) == 0 )
  {
    sub_B775C4(&int___TypeInfo);
    sub_B775C4(&StringLiteral_21579/*"notHavingQuest"*/);
    byte_438FCAA = 1;
  }
  v3 = (System_Int32_array *)sub_B775DC(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_21579/*"notHavingQuest"*/, v3, v4);
}


System_Collections_Generic_Dictionary_int__int____o *__fastcall QuestPhaseEntity__GetNpcAiInfo(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x21
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v4; // x22
  struct System_Collections_Generic_Dictionary_string__object__o *v5; // x0
  __int64 v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_Collections_Generic_Dictionary_int__int____o **v13; // x20
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  System_Xml_Schema_XmlSchemaObject_o *v15; // x22
  __int64 v16; // x10
  const MethodInfo *v17; // x2
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v19; // x19
  System_Xml_Schema_XmlSchemaObject_o *v20; // [xsp+8h] [xbp-38h] BYREF
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_438FCB8 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Action_object___ctor__);
    sub_B775C4(&System_Action_object__TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
    sub_B775C4(&System_Collections_Generic_Dictionary_int__int____TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_object__ForEach__);
    sub_B775C4(&System_Collections_Generic_List_object__TypeInfo);
    sub_B775C4(&Method_QuestPhaseEntity___c__DisplayClass109_0__GetNpcAiInfo_b__0__);
    sub_B775C4(&QuestPhaseEntity___c__DisplayClass109_0_TypeInfo);
    sub_B775C4(&StringLiteral_16616/*"aiMultiNpc"*/);
    sub_B775C4(&StringLiteral_16617/*"aiNpc"*/);
    byte_438FCB8 = 1;
  }
  value = 0LL;
  v20 = 0LL;
  v3 = sub_B77694(QuestPhaseEntity___c__DisplayClass109_0_TypeInfo);
  QuestPhaseEntity___c__DisplayClass109_0___ctor((QuestPhaseEntity___c__DisplayClass109_0_o *)v3, 0LL);
  v4 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B77694(System_Collections_Generic_Dictionary_int__int____TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v4,
    (const MethodInfo_2FF35C4 *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  if ( !v3 )
    goto LABEL_14;
  *(_QWORD *)(v3 + 16) = v4;
  v13 = (System_Collections_Generic_Dictionary_int__int____o **)(v3 + 16);
  sub_B77560((BattleServantConfConponent_o *)(v3 + 16), (System_Int32_array **)v4, v7, v8, v9, v10, v11, v12);
  script = this->fields.script;
  if ( !script )
    return *v13;
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
         (System_Xml_XmlQualifiedName_o *)StringLiteral_16616/*"aiMultiNpc"*/,
         &value,
         (const MethodInfo_2F7F3F8 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    v15 = value;
    if ( value )
    {
      v16 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
      if ( *(&value->klass->_2.bitflags2 + 1) >= (unsigned int)v16
        && (System_Collections_Generic_List_object__c *)value->klass->_2.typeHierarchy[v16 - 1] == System_Collections_Generic_List_object__TypeInfo )
      {
        v19 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B77694(System_Action_object__TypeInfo);
        System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
          v19,
          (Il2CppObject *)v3,
          Method_QuestPhaseEntity___c__DisplayClass109_0__GetNpcAiInfo_b__0__,
          (const MethodInfo_26A0868 *)Method_System_Action_object___ctor__);
        System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
          (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)v15,
          (System_Action_T__o *)v19,
          (const MethodInfo_3053FB0 *)Method_System_Collections_Generic_List_object__ForEach__);
        return *v13;
      }
    }
  }
  v5 = this->fields.script;
  if ( !v5 )
LABEL_14:
    sub_B7769C(v5, v6);
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v5,
         (System_Xml_XmlQualifiedName_o *)StringLiteral_16617/*"aiNpc"*/,
         &v20,
         (const MethodInfo_2F7F3F8 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    QuestPhaseEntity__SetNpcAiInfo(
      (System_Collections_Generic_IDictionary_int__int____o *)*v13,
      (Il2CppObject *)v20,
      v17);
  }
  return *v13;
}


int32_t __fastcall QuestPhaseEntity__GetOverWriteMasterImageId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_438FC89 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_20813/*"masterImageId"*/);
    byte_438FC89 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20813/*"masterImageId"*/, 0, v2);
}


int32_t __fastcall QuestPhaseEntity__GetOverwriteCommandSpellContinue(
        QuestPhaseEntity_o *this,
        int32_t def,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_438FCB2 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_21795/*"overwriteCommandSpellContinue"*/);
    byte_438FCB2 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21795/*"overwriteCommandSpellContinue"*/, def, v3);
}


int32_t __fastcall QuestPhaseEntity__GetOverwriteCommandSpellIcon(
        QuestPhaseEntity_o *this,
        int32_t genderType,
        System_Int32_array *defVal,
        const MethodInfo *method)
{
  System_Int32_array *ScriptIntArrayParam; // x0
  __int64 v8; // x0

  if ( (byte_438FCC5 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_21796/*"overwriteCommandSpellIcons"*/);
    byte_438FCC5 = 1;
  }
  ScriptIntArrayParam = QuestPhaseEntity__getScriptIntArrayParam(
                          this,
                          (System_String_o *)StringLiteral_21796/*"overwriteCommandSpellIcons"*/,
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
    v8 = sub_B776C8(ScriptIntArrayParam);
    sub_B77668(v8, 0LL);
  }
  return (int)ScriptIntArrayParam;
}


System_Collections_Generic_Dictionary_string__object__o *__fastcall QuestPhaseEntity__GetOverwriteEquipSkills(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_Collections_Generic_Dictionary_string__object__o *result; // x0
  __int64 v5; // x9
  QuestPhaseEntity_o *v6; // x0
  const MethodInfo *v7; // x1

  if ( (byte_438FC6E & 1) == 0 )
  {
    sub_B775C4(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_B775C4(&StringLiteral_21806/*"overwriteEquipSkills"*/);
    byte_438FC6E = 1;
  }
  result = (System_Collections_Generic_Dictionary_string__object__o *)QuestPhaseEntity__getScriptObj(
                                                                        this,
                                                                        (System_String_o *)StringLiteral_21806/*"overwriteEquipSkills"*/,
                                                                        v2);
  if ( result )
  {
    v5 = *(&System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.bitflags2 + 1);
    if ( *(&result->klass->_2.bitflags2 + 1) < (unsigned int)v5
      || (System_Collections_Generic_Dictionary_string__object__c *)result->klass->_2.typeHierarchy[v5 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
    {
      sub_B77990(result);
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
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_String_array **v16; // x2
  MethodInfo *v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Int32_array *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  const MethodInfo *v29; // x3
  System_Int32_array *v30; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7

  if ( (byte_438FC9F & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_21810/*"overwriteLimitCountSvtIds"*/);
    sub_B775C4(&StringLiteral_21811/*"overwriteLimitCounts"*/);
    sub_B775C4(&StringLiteral_21809/*"overwriteLimitCountIconIds"*/);
    byte_438FC9F = 1;
  }
  ScriptIntArrayParam = QuestPhaseEntity__getScriptIntArrayParam(
                          this,
                          (System_String_o *)StringLiteral_21810/*"overwriteLimitCountSvtIds"*/,
                          0LL,
                          (const MethodInfo *)overwriteLimitCountIconIds);
  *overwriteLimitCountSvtIds = ScriptIntArrayParam;
  sub_B77560(
    (BattleServantConfConponent_o *)overwriteLimitCountSvtIds,
    (System_Int32_array **)ScriptIntArrayParam,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  if ( *overwriteLimitCountSvtIds )
  {
    v22 = QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_21811/*"overwriteLimitCounts"*/, 0LL, v17);
    *overwriteLimitCounts = v22;
    sub_B77560(
      (BattleServantConfConponent_o *)overwriteLimitCounts,
      (System_Int32_array **)v22,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
    v30 = QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_21809/*"overwriteLimitCountIconIds"*/, 0LL, v29);
    *overwriteLimitCountIconIds = v30;
    sub_B77560(
      (BattleServantConfConponent_o *)overwriteLimitCountIconIds,
      (System_Int32_array **)v30,
      v31,
      v32,
      v33,
      v34,
      v35,
      v36);
    return *overwriteLimitCounts != 0LL;
  }
  else
  {
    *overwriteLimitCounts = 0LL;
    sub_B77560(
      (BattleServantConfConponent_o *)overwriteLimitCounts,
      0LL,
      v16,
      (System_String_array **)v17,
      v18,
      v19,
      v20,
      v21);
    *overwriteLimitCountIconIds = 0LL;
    sub_B77560((BattleServantConfConponent_o *)overwriteLimitCountIconIds, 0LL, v38, v39, v40, v41, v42, v43);
    return 0;
  }
}


System_Int32_array *__fastcall QuestPhaseEntity__GetOverwriteResultBgmCondIds(
        QuestPhaseEntity_o *this,
        System_Int32_array *defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_438FC72 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_21818/*"overwriteResultBgmCondIds"*/);
    byte_438FC72 = 1;
  }
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_21818/*"overwriteResultBgmCondIds"*/, defVal, v3);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetOverwriteResultBgmIds(
        QuestPhaseEntity_o *this,
        System_Int32_array *defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_438FC71 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_21819/*"overwriteResultBgmIds"*/);
    byte_438FC71 = 1;
  }
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_21819/*"overwriteResultBgmIds"*/, defVal, v3);
}


int32_t __fastcall QuestPhaseEntity__GetProgressAfterMovie(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_438FC87 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_22005/*"progressAfterMovie"*/);
    byte_438FC87 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22005/*"progressAfterMovie"*/, 0, v2);
}


int64_t __fastcall QuestPhaseEntity__GetQuestPhaseNo(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  return this->fields.phase + 100 * this->fields.questId;
}


int32_t __fastcall QuestPhaseEntity__GetQuestPhaseSelectRoute(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t ScriptIntParam; // w0
  int32_t v5; // w19
  clsQuestCheck_o *v6; // x0
  __int64 v7; // x1

  if ( (byte_438FC7C & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_B775C4(&SingletonTemplate_clsQuestCheck__TypeInfo);
    sub_B775C4(&StringLiteral_21913/*"phaseRouteSelect"*/);
    byte_438FC7C = 1;
  }
  ScriptIntParam = QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21913/*"phaseRouteSelect"*/, 0, v2);
  if ( ScriptIntParam < 1 )
    return 0;
  v5 = ScriptIntParam;
  if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
  }
  v6 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2D168C0 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !v6 )
    sub_B7769C(0LL, v7);
  if ( clsQuestCheck__CheckQuestPlayableNow(v6, v5, 0LL) )
    return v5;
  else
    return 0;
}


System_Int32_array *__fastcall QuestPhaseEntity__GetReelIconIdArray(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  System_Int32_array *v3; // x2
  const MethodInfo *v4; // x3

  if ( (byte_438FC93 & 1) == 0 )
  {
    sub_B775C4(&int___TypeInfo);
    sub_B775C4(&StringLiteral_22192/*"reelIcon"*/);
    byte_438FC93 = 1;
  }
  v3 = (System_Int32_array *)sub_B775DC(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_22192/*"reelIcon"*/, v3, v4);
}


int32_t __fastcall QuestPhaseEntity__GetReferToQuestPhase(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_438FCDF & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_22198/*"referToQuestPhase"*/);
    byte_438FCDF = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22198/*"referToQuestPhase"*/, 0, v2);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetSelectableQuests(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_438FC7B & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_22072/*"questSelect"*/);
    byte_438FC7B = 1;
  }
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_22072/*"questSelect"*/, 0LL, v2);
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
      v11 = sub_B776C8(SelectableQuests);
      sub_B77668(v11, 0LL);
    }
    return SelectableQuests->m_Items[selectIndex + 1];
  }
  return result;
}


System_Int32_array *__fastcall QuestPhaseEntity__GetShadowOffSvtIds(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  System_Int32_array *v3; // x2
  const MethodInfo *v4; // x3

  if ( (byte_438FCA2 & 1) == 0 )
  {
    sub_B775C4(&int___TypeInfo);
    sub_B775C4(&StringLiteral_22560/*"shadowOffSvtIds"*/);
    byte_438FCA2 = 1;
  }
  v3 = (System_Int32_array *)sub_B775DC(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_22560/*"shadowOffSvtIds"*/, v3, v4);
}


int32_t __fastcall QuestPhaseEntity__GetSingleForceSvtId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_438FCA0 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_22606/*"singleForceSvtId"*/);
    byte_438FCA0 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22606/*"singleForceSvtId"*/, 0, v2);
}


int32_t __fastcall QuestPhaseEntity__GetStartBattleSoundMode(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_438FCDD & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_13282/*"StartBattleSoundMode"*/);
    byte_438FCDD = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_13282/*"StartBattleSoundMode"*/, 0, v2);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetStartMovieWave(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_438FC88 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_21008/*"movieWave"*/);
    byte_438FC88 = 1;
  }
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_21008/*"movieWave"*/, 0LL, v2);
}


int32_t __fastcall QuestPhaseEntity__GetStartScreenEffect(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_438FCDC & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_13281/*"StartBattleScreenEffect"*/);
    byte_438FCDC = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_13281/*"StartBattleScreenEffect"*/, 0, v2);
}


int32_t __fastcall QuestPhaseEntity__GetSupportInitDeckIndex(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_438FCB3 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_18837/*"eventDeckIndex"*/);
    byte_438FCB3 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_18837/*"eventDeckIndex"*/, 0, v2);
}


int32_t __fastcall QuestPhaseEntity__GetTemporaryCommandSpell(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_438FCB0 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_23117/*"temporaryCommandSpell"*/);
    byte_438FCB0 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_23117/*"temporaryCommandSpell"*/, -1, v2);
}


int32_t __fastcall QuestPhaseEntity__GetUserEventDeckNo(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_438FCA1 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_23458/*"useEventDeckNo"*/);
    byte_438FCA1 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_23458/*"useEventDeckNo"*/, 1, v2);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetVoiceOffPlayerSvtIdArray(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_438FCC4 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_23661/*"voiceOffMySvtIds"*/);
    byte_438FCC4 = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_23661/*"voiceOffMySvtIds"*/, 0LL);
}


System_String_o *__fastcall QuestPhaseEntity__GetWarBoardStartMovieName(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_438FCBE & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_15715/*"WarBoardStartMovieName"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438FCBE = 1;
  }
  return QuestPhaseEntity__getScriptStr(
           this,
           (System_String_o *)StringLiteral_15715/*"WarBoardStartMovieName"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


System_String_array *__fastcall QuestPhaseEntity__GetWaveStartMovie(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_438FC86 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_23739/*"waveStartMovie"*/);
    byte_438FC86 = 1;
  }
  return QuestPhaseEntity__getScriptStringArrayParam(this, (System_String_o *)StringLiteral_23739/*"waveStartMovie"*/, 0LL, v2);
}


int32_t __fastcall QuestPhaseEntity__GetWinBgmOffFlg(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_438FC9B & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_18710/*"endBgmOff"*/);
    byte_438FC9B = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_18710/*"endBgmOff"*/, 0, v2);
}


int32_t __fastcall QuestPhaseEntity__GetWinVoiceOffFlg(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_438FC99 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_18724/*"endVoiceOff"*/);
    byte_438FC99 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_18724/*"endVoiceOff"*/, 0, v2);
}


bool __fastcall QuestPhaseEntity__HasReleaseFocusQuestBoardKey(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_438FCD5 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_20357/*"isReleaseFocus"*/);
    byte_438FCD5 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_20357/*"isReleaseFocus"*/, 0LL);
}


bool __fastcall QuestPhaseEntity__IsActiveAssistSkill(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  System_Int32_array *v3; // x0
  const MethodInfo *v4; // x3
  System_Int32_array *ScriptIntArrayParam; // x0
  __int64 v6; // x1

  if ( (byte_438FCAC & 1) == 0 )
  {
    sub_B775C4(&int___TypeInfo);
    sub_B775C4(&StringLiteral_16819/*"assistIds"*/);
    byte_438FCAC = 1;
  }
  v3 = (System_Int32_array *)sub_B775DC(int___TypeInfo, 0LL);
  ScriptIntArrayParam = QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_16819/*"assistIds"*/, v3, v4);
  if ( !ScriptIntArrayParam )
    sub_B7769C(0LL, v6);
  return ScriptIntArrayParam->max_length != 0;
}


bool __fastcall QuestPhaseEntity__IsAreaImporveQuest(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_438FCBF & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_16770/*"areaImprovementQuest"*/);
    byte_438FCBF = 1;
  }
  return QuestPhaseEntity__getScriptObj(this, (System_String_o *)StringLiteral_16770/*"areaImprovementQuest"*/, v2) != 0LL;
}


bool __fastcall QuestPhaseEntity__IsContinueWaveRestart(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_438FCD3 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_18039/*"continueWaveRestart"*/);
    byte_438FCD3 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_18039/*"continueWaveRestart"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__IsHideAssistConfButton(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_438FCAF & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_19528/*"hideAssistConfButton"*/);
    byte_438FCAF = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19528/*"hideAssistConfButton"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__IsIgnoreBattleLoseDialog(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_438FC80 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_19798/*"ignoreBattleLoseDialog"*/);
    byte_438FC80 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_19798/*"ignoreBattleLoseDialog"*/, 0LL);
}


bool __fastcall QuestPhaseEntity__IsInterruptionQuest(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_438FCDB & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_20257/*"interruptibleQuest"*/);
    byte_438FCDB = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20257/*"interruptibleQuest"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__IsInvisibleConnectAndLoad(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_438FCA6 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_20298/*"invisibleConnectAndLoad"*/);
    byte_438FCA6 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20298/*"invisibleConnectAndLoad"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__IsKeepSubBgmAfterBattleResult(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_438FC9C & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_20529/*"keepSubBgmUntilBattleResult"*/);
    byte_438FC9C = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_20529/*"keepSubBgmUntilBattleResult"*/, 0LL);
}


bool __fastcall QuestPhaseEntity__IsMatchIndividuality(
        QuestPhaseEntity_o *this,
        System_Int32_array *individualitys,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_T__o *individuality; // x21
  System_Collections_Generic_HashSet_int__o *v6; // x20
  System_Predicate_int__o *All_int; // x0
  __int64 v8; // x1
  System_Predicate_T__o *v9; // x21

  if ( (byte_438FCA5 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Array_FindAll_int___);
    sub_B775C4(&Method_System_Collections_Generic_HashSet_int___ctor___69373304);
    sub_B775C4(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_B775C4(&Method_System_Predicate_int___ctor__);
    sub_B775C4(&System_Predicate_int__TypeInfo);
    byte_438FCA5 = 1;
  }
  individuality = (System_Collections_Generic_IEnumerable_T__o *)this->fields.individuality;
  v6 = (System_Collections_Generic_HashSet_int__o *)sub_B77694(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor_49134420(
    v6,
    individuality,
    (const MethodInfo_2EDBB54 *)Method_System_Collections_Generic_HashSet_int___ctor___69373304);
  All_int = (System_Predicate_int__o *)sub_B77694(System_Predicate_int__TypeInfo);
  if ( !v6
    || (v9 = (System_Predicate_T__o *)All_int,
        System_Predicate_int____ctor(
          All_int,
          (Il2CppObject *)v6,
          (intptr_t)v6->klass->vtable._9_CopyTo.methodPtr,
          (const MethodInfo_2C30DC8 *)Method_System_Predicate_int___ctor__),
        (All_int = (System_Predicate_int__o *)System_Array__FindAll_int_(
                                                individualitys,
                                                v9,
                                                (const MethodInfo_20041D0 *)Method_System_Array_FindAll_int___)) == 0LL) )
  {
    sub_B7769C(All_int, v8);
  }
  return All_int->fields.m_target != 0LL;
}


bool __fastcall QuestPhaseEntity__IsNonStopEndBgm(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_438FC7D & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_21553/*"nonStopEndBgm"*/);
    byte_438FC7D = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21553/*"nonStopEndBgm"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__IsNotClassBoard(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_438FCD0 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_21574/*"notClassBoard"*/);
    byte_438FCD0 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21574/*"notClassBoard"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__IsNotResetResultDispFlag(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_438FC8A & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_21581/*"notResetResultDispFlag"*/);
    byte_438FC8A = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21581/*"notResetResultDispFlag"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__IsNotUseRestrictionDialog(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_438FCD1 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_21582/*"notUseRestrictionDialog"*/);
    byte_438FCD1 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21582/*"notUseRestrictionDialog"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__IsPlayScriptBeforeForWarBoard(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_438FCAB & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_20360/*"isScriptPlayForWarBoard"*/);
    byte_438FCAB = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20360/*"isScriptPlayForWarBoard"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__IsReleaseFocusQuestBoard(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_438FCD6 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_20357/*"isReleaseFocus"*/);
    byte_438FCD6 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20357/*"isReleaseFocus"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__IsRepeatReward(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_438FCCE & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_22235/*"repeatReward"*/);
    byte_438FCCE = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22235/*"repeatReward"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__IsSkipBattleFinish(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_438FCC8 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_22627/*"skipBattleFinish"*/);
    byte_438FCC8 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22627/*"skipBattleFinish"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__IsUseTemporaryCommandSpell(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_438FCB1 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_23462/*"useTemporaryCommandSpell"*/);
    byte_438FCB1 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_23462/*"useTemporaryCommandSpell"*/, -1, v2) == 1;
}


bool __fastcall QuestPhaseEntity__IsWaveCountInfinity(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_438FCC6 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_23736/*"waveCountInfinity"*/);
    byte_438FCC6 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_23736/*"waveCountInfinity"*/, -1, v2) != -1;
}


bool __fastcall QuestPhaseEntity__IsWaveSetup(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_438FCD2 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_23738/*"waveSetup"*/);
    byte_438FCD2 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_23738/*"waveSetup"*/, 0, v2) != 0;
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
  __int64 v5; // x10
  System_Collections_Generic_Dictionary_string__object__c *v6; // x9
  System_Collections_Generic_Dictionary_string__object__o *v7; // x21
  int Value_long; // w20
  System_String_o *Value_string; // x0
  System_Collections_Generic_List_BattleActionData_HealData__o *v10; // x21
  QuestPhaseEntity___c_c *v11; // x0
  struct QuestPhaseEntity___c_StaticFields *static_fields; // x8
  System_Converter_BattleActionData_HealData__int__o *_9__110_0; // x22
  Il2CppObject *v14; // x23
  struct QuestPhaseEntity___c_StaticFields *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Collections_Generic_List_int__o *v22; // x0
  __int64 v23; // x1
  System_Collections_Generic_IDictionary_int__int____c *klass; // x8
  System_Collections_Generic_List_int__o *v25; // x21
  unsigned __int64 v26; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0

  if ( (byte_438FCB9 & 1) == 0 )
  {
    sub_B775C4(&Method_BasicHelper_GetValue_long___);
    sub_B775C4(&Method_BasicHelper_GetValue_List_object____);
    sub_B775C4(&Method_System_Converter_object__int___ctor__);
    sub_B775C4(&System_Converter_object__int__TypeInfo);
    sub_B775C4(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_B775C4(&System_Collections_Generic_IDictionary_int__int____TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_object__ConvertAll_int___);
    sub_B775C4(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B775C4(&Method_QuestPhaseEntity___c__SetNpcAiInfo_b__110_0__);
    sub_B775C4(&QuestPhaseEntity___c_TypeInfo);
    sub_B775C4(&StringLiteral_16615/*"aiIds"*/);
    sub_B775C4(&StringLiteral_21596/*"npcId"*/);
    byte_438FCB9 = 1;
  }
  if ( obj )
  {
    v5 = *(&System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.bitflags2 + 1);
    if ( *(&obj->klass->_2.bitflags2 + 1) >= (unsigned int)v5 )
    {
      v6 = (System_Collections_Generic_Dictionary_string__object__c *)obj->klass->_2.typeHierarchy[v5 - 1];
      v7 = v6 == System_Collections_Generic_Dictionary_string__object__TypeInfo
         ? (System_Collections_Generic_Dictionary_string__object__o *)obj
         : 0LL;
      if ( v6 == System_Collections_Generic_Dictionary_string__object__TypeInfo )
      {
        Value_long = BasicHelper__GetValue_long_(
                       v7,
                       (System_String_o *)StringLiteral_21596/*"npcId"*/,
                       0LL,
                       (const MethodInfo_1C67D94 *)Method_BasicHelper_GetValue_long___);
        Value_string = BasicHelper__GetValue_string_(
                         v7,
                         (System_String_o *)StringLiteral_16615/*"aiIds"*/,
                         0LL,
                         (const MethodInfo_1C67E80 *)Method_BasicHelper_GetValue_List_object____);
        if ( Value_long >= 1 )
        {
          v10 = (System_Collections_Generic_List_BattleActionData_HealData__o *)Value_string;
          if ( Value_string )
          {
            v11 = QuestPhaseEntity___c_TypeInfo;
            if ( (BYTE3(QuestPhaseEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !QuestPhaseEntity___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(QuestPhaseEntity___c_TypeInfo);
              v11 = QuestPhaseEntity___c_TypeInfo;
            }
            static_fields = v11->static_fields;
            _9__110_0 = (System_Converter_BattleActionData_HealData__int__o *)static_fields->__9__110_0;
            if ( !_9__110_0 )
            {
              if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 && !v11->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v11);
                static_fields = QuestPhaseEntity___c_TypeInfo->static_fields;
              }
              v14 = (Il2CppObject *)static_fields->__9;
              _9__110_0 = (System_Converter_BattleActionData_HealData__int__o *)sub_B77694(System_Converter_object__int__TypeInfo);
              System_Converter_BattleActionData_HealData__int____ctor(
                _9__110_0,
                v14,
                Method_QuestPhaseEntity___c__SetNpcAiInfo_b__110_0__,
                (const MethodInfo_21F7A30 *)Method_System_Converter_object__int___ctor__);
              v15 = QuestPhaseEntity___c_TypeInfo->static_fields;
              v15->__9__110_0 = (struct System_Converter_object__int__o *)_9__110_0;
              sub_B77560(
                (BattleServantConfConponent_o *)&v15->__9__110_0,
                (System_Int32_array **)_9__110_0,
                v16,
                v17,
                v18,
                v19,
                v20,
                v21);
            }
            v22 = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_BattleActionData_HealData___ConvertAll_int_(
                                                              v10,
                                                              (System_Converter_T__TOutput__o *)_9__110_0,
                                                              (const MethodInfo_19AECA8 *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
            if ( !v22
              || (v22 = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_int___ToArray(
                                                                    v22,
                                                                    (const MethodInfo_30E7EF4 *)Method_System_Collections_Generic_List_int__ToArray__),
                  !dicNpcAiId) )
            {
              sub_B7769C(v22, v23);
            }
            klass = dicNpcAiId->klass;
            v25 = v22;
            if ( *(_WORD *)&dicNpcAiId->klass->_2.bitflags1 )
            {
              v26 = 0LL;
              p_offset = &klass->_1.interfaceOffsets->offset;
              while ( *((System_Collections_Generic_IDictionary_int__int____c **)p_offset - 1) != System_Collections_Generic_IDictionary_int__int____TypeInfo )
              {
                ++v26;
                p_offset += 4;
                if ( v26 >= *(unsigned __int16 *)&dicNpcAiId->klass->_2.bitflags1 )
                  goto LABEL_26;
              }
              p_method = (__int64)&klass->vtable[*p_offset + 1].method;
            }
            else
            {
LABEL_26:
              p_method = sub_B0F4C0(dicNpcAiId, System_Collections_Generic_IDictionary_int__int____TypeInfo, 1LL);
            }
            (*(void (__fastcall **)(System_Collections_Generic_IDictionary_int__int____o *, _QWORD, System_Collections_Generic_List_int__o *, _QWORD))p_method)(
              dicNpcAiId,
              (unsigned int)Value_long,
              v25,
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

  if ( (byte_438FC76 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_16972/*"battleEffectId"*/);
    byte_438FC76 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_16972/*"battleEffectId"*/, defVal, v3);
}


int32_t __fastcall QuestPhaseEntity__getBattleFieldMotionId(
        QuestPhaseEntity_o *this,
        int32_t defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_438FC78 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_19087/*"fieldMotionId"*/);
    byte_438FC78 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19087/*"fieldMotionId"*/, defVal, v3);
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
  __int64 v10; // x0

  if ( (byte_438FC79 & 1) == 0 )
  {
    sub_B775C4(&int___TypeInfo);
    sub_B775C4(&StringLiteral_19088/*"fieldMotionIds"*/);
    byte_438FC79 = 1;
  }
  result = QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_19088/*"fieldMotionIds"*/, defVals, v3);
  if ( !result )
    goto LABEL_10;
  if ( *(_QWORD *)&result->max_length )
    return result;
  BattleFieldMotionId = QuestPhaseEntity__getBattleFieldMotionId(this, -1, v8);
  result = defVals;
  if ( BattleFieldMotionId == -1 )
    return result;
  result = (System_Int32_array *)sub_B775DC(int___TypeInfo, 1LL);
  if ( !result )
LABEL_10:
    sub_B7769C(result, v7);
  if ( !result->max_length )
  {
    v10 = sub_B776C8(result);
    sub_B77668(v10, 0LL);
  }
  result->m_Items[1] = BattleFieldMotionId;
  return result;
}


int32_t __fastcall QuestPhaseEntity__getBreakOnBattleWinWaitMSec(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_438FC84 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_17270/*"breakOnBattleWinWaitMSec"*/);
    byte_438FC84 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_17270/*"breakOnBattleWinWaitMSec"*/, 0, v2);
}


System_Int32_array *__fastcall QuestPhaseEntity__getEventGrounpIds(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  System_Int32_array *v3; // x2
  const MethodInfo *v4; // x3

  if ( (byte_438FC7A & 1) == 0 )
  {
    sub_B775C4(&int___TypeInfo);
    sub_B775C4(&StringLiteral_18838/*"eventGroupId"*/);
    byte_438FC7A = 1;
  }
  v3 = (System_Int32_array *)sub_B775DC(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_18838/*"eventGroupId"*/, v3, v4);
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

  if ( (byte_438FCB6 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_19538/*"hintLeftIndent"*/);
    byte_438FCB6 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19538/*"hintLeftIndent"*/, -1, v2);
}


System_String_o *__fastcall QuestPhaseEntity__getHintMessage(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_438FCB5 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_19539/*"hintMessage"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438FCB5 = 1;
  }
  return QuestPhaseEntity__getScriptStr(
           this,
           (System_String_o *)StringLiteral_19539/*"hintMessage"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


System_String_o *__fastcall QuestPhaseEntity__getHintMessageTitle(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_438FCB4 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_1/*""*/);
    sub_B775C4(&StringLiteral_19541/*"hintTitle"*/);
    byte_438FCB4 = 1;
  }
  return QuestPhaseEntity__getScriptStr(
           this,
           (System_String_o *)StringLiteral_19541/*"hintTitle"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


int32_t __fastcall QuestPhaseEntity__getHintOpenType(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_438FCB7 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_19540/*"hintOpenType"*/);
    byte_438FCB7 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19540/*"hintOpenType"*/, 0, v2);
}


int32_t __fastcall QuestPhaseEntity__getLeave(QuestPhaseEntity_o *this, int32_t defVal, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_438FC75 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_20616/*"leave"*/);
    byte_438FC75 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20616/*"leave"*/, defVal, v3);
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
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  System_Int32_array *individuality; // x3
  int32_t phase; // w19
  int32_t questId; // w20
  QuestBehaviorMaster_o *v8; // x21

  if ( (byte_438FC66 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_QuestBehaviorMaster___);
    sub_B775C4(&int___TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438FC66 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_QuestBehaviorMaster___);
  individuality = this->fields.individuality;
  questId = this->fields.questId;
  phase = this->fields.phase;
  v8 = (QuestBehaviorMaster_o *)Instance;
  if ( !individuality )
  {
    Instance = (DataManager_o *)sub_B775DC(int___TypeInfo, 0LL);
    individuality = (System_Int32_array *)Instance;
  }
  if ( !v8 )
LABEL_8:
    sub_B7769C(Instance, v4);
  return QuestBehaviorMaster__getBattleIndividuality(v8, questId, phase, individuality, 0LL);
}


int32_t __fastcall QuestPhaseEntity__getQuestId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  return this->fields.questId;
}


int32_t __fastcall QuestPhaseEntity__getResultBgmId(QuestPhaseEntity_o *this, int32_t defVal, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_438FC70 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_22264/*"resultBgmId"*/);
    byte_438FC70 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22264/*"resultBgmId"*/, defVal, v3);
}


int32_t __fastcall QuestPhaseEntity__getResultEffectId(
        QuestPhaseEntity_o *this,
        int32_t defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_438FC74 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_22265/*"resultEffectId"*/);
    byte_438FC74 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22265/*"resultEffectId"*/, defVal, v3);
}


System_Int32_array *__fastcall QuestPhaseEntity__getResultEnemyVoiceIds(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  System_Int32_array *v3; // x2
  const MethodInfo *v4; // x3

  if ( (byte_438FC7E & 1) == 0 )
  {
    sub_B775C4(&int___TypeInfo);
    sub_B775C4(&StringLiteral_22266/*"resultEnemyVoiceIds"*/);
    byte_438FC7E = 1;
  }
  v3 = (System_Int32_array *)sub_B775DC(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_22266/*"resultEnemyVoiceIds"*/, v3, v4);
}


System_Int32_array *__fastcall QuestPhaseEntity__getScriptIntArrayParam(
        QuestPhaseEntity_o *this,
        System_String_o *key,
        System_Int32_array *defVal,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ScriptObjListParam; // x0
  System_Collections_Generic_List_BattleActionData_HealData__o *v8; // x19
  QuestPhaseEntity___c_c *v9; // x0
  struct QuestPhaseEntity___c_StaticFields *static_fields; // x8
  System_Converter_BattleActionData_HealData__int__o *_9__27_0; // x20
  Il2CppObject *v12; // x21
  struct QuestPhaseEntity___c_StaticFields *v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Collections_Generic_List_int__o *v20; // x0
  __int64 v21; // x1

  if ( (byte_438FC68 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Converter_object__int___ctor__);
    sub_B775C4(&System_Converter_object__int__TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_object__ConvertAll_int___);
    sub_B775C4(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B775C4(&Method_QuestPhaseEntity___c__getScriptIntArrayParam_b__27_0__);
    sub_B775C4(&QuestPhaseEntity___c_TypeInfo);
    byte_438FC68 = 1;
  }
  ScriptObjListParam = QuestPhaseEntity__getScriptObjListParam(this, key, (const MethodInfo *)defVal);
  if ( !ScriptObjListParam )
    return defVal;
  v8 = (System_Collections_Generic_List_BattleActionData_HealData__o *)ScriptObjListParam;
  v9 = QuestPhaseEntity___c_TypeInfo;
  if ( (BYTE3(QuestPhaseEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestPhaseEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestPhaseEntity___c_TypeInfo);
    v9 = QuestPhaseEntity___c_TypeInfo;
  }
  static_fields = v9->static_fields;
  _9__27_0 = (System_Converter_BattleActionData_HealData__int__o *)static_fields->__9__27_0;
  if ( !_9__27_0 )
  {
    if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      static_fields = QuestPhaseEntity___c_TypeInfo->static_fields;
    }
    v12 = (Il2CppObject *)static_fields->__9;
    _9__27_0 = (System_Converter_BattleActionData_HealData__int__o *)sub_B77694(System_Converter_object__int__TypeInfo);
    System_Converter_BattleActionData_HealData__int____ctor(
      _9__27_0,
      v12,
      Method_QuestPhaseEntity___c__getScriptIntArrayParam_b__27_0__,
      (const MethodInfo_21F7A30 *)Method_System_Converter_object__int___ctor__);
    v13 = QuestPhaseEntity___c_TypeInfo->static_fields;
    v13->__9__27_0 = (struct System_Converter_object__int__o *)_9__27_0;
    sub_B77560(
      (BattleServantConfConponent_o *)&v13->__9__27_0,
      (System_Int32_array **)_9__27_0,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
  }
  v20 = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_BattleActionData_HealData___ConvertAll_int_(
                                                    v8,
                                                    (System_Converter_T__TOutput__o *)_9__27_0,
                                                    (const MethodInfo_19AECA8 *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
  if ( !v20 )
    sub_B7769C(0LL, v21);
  return System_Collections_Generic_List_int___ToArray(
           v20,
           (const MethodInfo_30E7EF4 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  if ( (byte_438FC67 & 1) == 0 )
  {
    sub_B775C4(&long_TypeInfo);
    byte_438FC67 = 1;
  }
  ScriptObj = QuestPhaseEntity__getScriptObj(this, key, *(const MethodInfo **)&defVal);
  if ( !ScriptObj )
    return v4;
  if ( ScriptObj->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(ScriptObj);
  sub_B77990(ScriptObj);
  return (unsigned int)QuestPhaseEntity__getScriptObj(v9, v10, v11);
}


Il2CppObject *__fastcall QuestPhaseEntity__getScriptObj(
        QuestPhaseEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  Il2CppObject *result; // x0
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_438FC6C & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    byte_438FC6C = 1;
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
           (const MethodInfo_2F7F3F8 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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

  if ( (byte_438FC6A & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_object__ToArray__);
    byte_438FC6A = 1;
  }
  ScriptObjListParam = QuestPhaseEntity__getScriptObjListParam(this, key, (const MethodInfo *)defVal);
  if ( ScriptObjListParam )
    return (System_Object_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)ScriptObjListParam,
                                    (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_object__ToArray__);
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

  if ( (byte_438FC6B & 1) == 0 )
  {
    sub_B775C4(&System_Collections_Generic_List_object__TypeInfo);
    byte_438FC6B = 1;
  }
  result = (System_Collections_Generic_List_object__o *)QuestPhaseEntity__getScriptObj(this, key, method);
  if ( result )
  {
    v6 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
    if ( *(&result->klass->_2.bitflags2 + 1) < (unsigned int)v6
      || (System_Collections_Generic_List_object__c *)result->klass->_2.typeHierarchy[v6 - 1] != System_Collections_Generic_List_object__TypeInfo )
    {
      sub_B77990(result);
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
  System_String_o *Item; // x0
  QuestPhaseEntity_o *v12; // x0
  const MethodInfo *v13; // x1

  if ( (byte_438FC6D & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_B775C4(&string_TypeInfo);
    byte_438FC6D = 1;
  }
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)key,
          (const MethodInfo_2F7D86C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return defVal;
  }
  v9 = this->fields.script;
  if ( !v9 )
    sub_B7769C(0LL, v8);
  Item = (System_String_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                              (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v9,
                              (System_Type_o *)key,
                              (const MethodInfo_2F7D534 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  defVal = Item;
  if ( !Item || Item->klass == string_TypeInfo )
    return defVal;
  sub_B77990(Item);
  return (System_String_o *)QuestPhaseEntity__GetOverwriteEquipSkills(v12, v13);
}


System_String_array *__fastcall QuestPhaseEntity__getScriptStringArrayParam(
        QuestPhaseEntity_o *this,
        System_String_o *key,
        System_String_array *defVal,
        const MethodInfo *method)
{
  System_String_array *v4; // x20
  System_Collections_Generic_List_object__o *ScriptObjListParam; // x0
  System_Collections_Generic_List_string__o *v8; // x19
  QuestPhaseEntity___c_c *v9; // x0
  struct QuestPhaseEntity___c_StaticFields *static_fields; // x8
  System_Converter_string__string__o *_9__28_0; // x20
  Il2CppObject *v12; // x21
  struct QuestPhaseEntity___c_StaticFields *v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Collections_Generic_List_WarBoardUiData_SaveData__o *v20; // x0
  __int64 v21; // x1

  v4 = defVal;
  if ( (byte_438FC69 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Converter_object__string___ctor__);
    sub_B775C4(&System_Converter_object__string__TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_object__ConvertAll_string___);
    sub_B775C4(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_B775C4(&Method_QuestPhaseEntity___c__getScriptStringArrayParam_b__28_0__);
    sub_B775C4(&QuestPhaseEntity___c_TypeInfo);
    byte_438FC69 = 1;
  }
  ScriptObjListParam = QuestPhaseEntity__getScriptObjListParam(this, key, (const MethodInfo *)defVal);
  if ( ScriptObjListParam )
  {
    v8 = (System_Collections_Generic_List_string__o *)ScriptObjListParam;
    v9 = QuestPhaseEntity___c_TypeInfo;
    if ( (BYTE3(QuestPhaseEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestPhaseEntity___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestPhaseEntity___c_TypeInfo);
      v9 = QuestPhaseEntity___c_TypeInfo;
    }
    static_fields = v9->static_fields;
    _9__28_0 = (System_Converter_string__string__o *)static_fields->__9__28_0;
    if ( !_9__28_0 )
    {
      if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v9);
        static_fields = QuestPhaseEntity___c_TypeInfo->static_fields;
      }
      v12 = (Il2CppObject *)static_fields->__9;
      _9__28_0 = (System_Converter_string__string__o *)sub_B77694(System_Converter_object__string__TypeInfo);
      System_Converter_string__string____ctor(
        _9__28_0,
        v12,
        Method_QuestPhaseEntity___c__getScriptStringArrayParam_b__28_0__,
        (const MethodInfo_21F7E10 *)Method_System_Converter_object__string___ctor__);
      v13 = QuestPhaseEntity___c_TypeInfo->static_fields;
      v13->__9__28_0 = (struct System_Converter_object__string__o *)_9__28_0;
      sub_B77560(
        (BattleServantConfConponent_o *)&v13->__9__28_0,
        (System_Int32_array **)_9__28_0,
        v14,
        v15,
        v16,
        v17,
        v18,
        v19);
    }
    v20 = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)System_Collections_Generic_List_string___ConvertAll_string_(
                                                                          v8,
                                                                          (System_Converter_T__TOutput__o *)_9__28_0,
                                                                          (const MethodInfo_19AEDB4 *)Method_System_Collections_Generic_List_object__ConvertAll_string___);
    if ( !v20 )
      sub_B7769C(0LL, v21);
    return (System_String_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    v20,
                                    (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_string__ToArray__);
  }
  return v4;
}


int32_t __fastcall QuestPhaseEntity__getSpecialShadowEffectId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_438FC8F & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_19419/*"getSpecialShadowEffectId"*/);
    byte_438FC8F = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19419/*"getSpecialShadowEffectId"*/, 0, v2);
}


int32_t __fastcall QuestPhaseEntity__getTurnSituationType(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_438FC8E & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_23300/*"turnSituationType"*/);
    byte_438FC8E = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_23300/*"turnSituationType"*/, 0, v2);
}


int32_t __fastcall QuestPhaseEntity__getUniqueCameraId(
        QuestPhaseEntity_o *this,
        int32_t defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_438FC77 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_23381/*"uniqueCameraId"*/);
    byte_438FC77 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_23381/*"uniqueCameraId"*/, defVal, v3);
}


bool __fastcall QuestPhaseEntity__isBattleFinishCameraTargetAll(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_438FC8D & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_16974/*"battleFinishCameraTargetAll"*/);
    byte_438FC8D = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_16974/*"battleFinishCameraTargetAll"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__isBreakOnBattleWin(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_438FC82 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_17268/*"breakOnBattleWin"*/);
    byte_438FC82 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_17268/*"breakOnBattleWin"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__isBreakOnBattleWinFadeColorBlack(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_438FC83 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_17269/*"breakOnBattleWinFadeColorBlack"*/);
    byte_438FC83 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_17269/*"breakOnBattleWinFadeColorBlack"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__isDisableChangeRaidDownMessage(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_438FC90 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_20333/*"isDisableChangeRaidDownMessage"*/);
    byte_438FC90 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20333/*"isDisableChangeRaidDownMessage"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__isDispLoseResult(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_438FC7F & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_22267/*"resultLoseDisp"*/);
    byte_438FC7F = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22267/*"resultLoseDisp"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__isFadeOutBgmBeforeMovie(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_438FC73 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_6692/*"FadeOutBgmBeforeMovie"*/);
    byte_438FC73 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_6692/*"FadeOutBgmBeforeMovie"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__isNoResult(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_438FC81 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_21537/*"noResult"*/);
    byte_438FC81 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21537/*"noResult"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__isTurnSituationType(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  return QuestPhaseEntity__getTurnSituationType(this, method) > 0;
}


void __fastcall QuestPhaseEntity___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_438B184 & 1) == 0 )
  {
    sub_B775C4(&QuestPhaseEntity___c_TypeInfo);
    byte_438B184 = 1;
  }
  v1 = (Il2CppObject *)sub_B77694(QuestPhaseEntity___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)QuestPhaseEntity___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B77560(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
}


void __fastcall QuestPhaseEntity___c___ctor(QuestPhaseEntity___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall QuestPhaseEntity___c___SetNpcAiInfo_b__110_0(
        QuestPhaseEntity___c_o *this,
        Il2CppObject *x,
        const MethodInfo *method)
{
  System_String_o *v4; // x0

  if ( (byte_438B186 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438B186 = 1;
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


int32_t __fastcall QuestPhaseEntity___c___getScriptIntArrayParam_b__27_0(
        QuestPhaseEntity___c_o *this,
        Il2CppObject *x,
        const MethodInfo *method)
{
  System_String_o *v4; // x0

  if ( (byte_438B185 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438B185 = 1;
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


System_String_o *__fastcall QuestPhaseEntity___c___getScriptStringArrayParam_b__28_0(
        QuestPhaseEntity___c_o *this,
        Il2CppObject *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7769C(this, 0LL);
  return (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))x->klass->vtable[3].method)(
                              x,
                              x->klass->vtable[4].methodPtr);
}


void __fastcall QuestPhaseEntity___c__DisplayClass109_0___ctor(
        QuestPhaseEntity___c__DisplayClass109_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestPhaseEntity___c__DisplayClass109_0___GetNpcAiInfo_b__0(
        QuestPhaseEntity___c__DisplayClass109_0_o *this,
        Il2CppObject *val,
        const MethodInfo *method)
{
  QuestPhaseEntity__SetNpcAiInfo(
    (System_Collections_Generic_IDictionary_int__int____o *)this->fields.dicNpcAiId,
    val,
    0LL);
}