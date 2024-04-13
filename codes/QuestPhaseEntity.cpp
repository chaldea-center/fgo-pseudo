void __fastcall QuestPhaseEntity___ctor(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42ED1C7 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_string___ctor__, (_DWORD)method, v2, v3);
    byte_42ED1C7 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23FAD5C *)Method_DataEntityBase_string___ctor__);
}


void __fastcall QuestPhaseEntity___ctor_34203316(
        QuestPhaseEntity_o *this,
        QuestPhaseEntity_o *cSrc,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  __int64 v9; // x0
  __int64 v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Array_o *classIds; // x0
  Il2CppObject *v18; // x0
  Il2CppObject *v19; // x21
  struct System_Int32_array *v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Array_o *individuality; // x0
  Il2CppObject *v28; // x0
  struct System_Int32_array *v29; // x1
  struct System_Int32_array **p_individuality; // x20

  if ( (byte_42ED1C8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_string___ctor__, (_DWORD)cSrc, (_DWORD)method, v3);
    sub_B5D5C4(&int___TypeInfo, v6, v7, v8);
    byte_42ED1C8 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23FAD5C *)Method_DataEntityBase_string___ctor__);
  if ( !cSrc )
    sub_B5D69C(v9, v10);
  this->fields.questId = cSrc->fields.questId;
  this->fields.phase = cSrc->fields.phase;
  this->fields.isNpcOnly = cSrc->fields.isNpcOnly;
  this->fields.battleBgId = cSrc->fields.battleBgId;
  this->fields.battleBgType = cSrc->fields.battleBgType;
  this->fields.playerExp = cSrc->fields.playerExp;
  this->fields.friendshipExp = cSrc->fields.friendshipExp;
  classIds = (System_Array_o *)cSrc->fields.classIds;
  if ( classIds && (v18 = System_Array__Clone(classIds, 0LL)) != 0LL )
  {
    v19 = v18;
    v20 = (struct System_Int32_array *)sub_B5D684(v18, int___TypeInfo);
    if ( !v20 )
      goto LABEL_12;
  }
  else
  {
    v20 = 0LL;
  }
  this->fields.classIds = v20;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.classIds,
    (System_Int32_array **)v20,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  individuality = (System_Array_o *)cSrc->fields.individuality;
  if ( !individuality )
    goto LABEL_13;
  v28 = System_Array__Clone(individuality, 0LL);
  if ( !v28 )
    goto LABEL_13;
  v19 = v28;
  v29 = (struct System_Int32_array *)sub_B5D684(v28, int___TypeInfo);
  if ( !v29 )
  {
LABEL_12:
    sub_B5D990(v19);
LABEL_13:
    v29 = 0LL;
  }
  this->fields.individuality = v29;
  p_individuality = &this->fields.individuality;
  sub_B5D560((BattleServantConfConponent_o *)p_individuality, (System_Int32_array **)v29, v21, v22, v23, v24, v25, v26);
  *((_DWORD *)p_individuality + 2) = cSrc->fields.giftId;
}


System_String_o *__fastcall QuestPhaseEntity__CreatePK(int32_t questId, int32_t phase, const MethodInfo *method)
{
  __int64 v3; // x3

  if ( (byte_42ED1C6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_CreateMultiplePK_int__int___, phase, (_DWORD)method, v3);
    byte_42ED1C6 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           questId,
           phase,
           (const MethodInfo_1AE3018 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Collections_Generic_Dictionary_string__object__o *result; // x0
  __int64 v9; // x9
  QuestPhaseEntity_o *v10; // x0
  int32_t v11; // w1
  const MethodInfo *v12; // x2

  if ( (byte_42ED1D2 & 1) == 0 )
  {
    sub_B5D5C4(&System_Collections_Generic_Dictionary_string__object__TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_16447/*"addEquipSkills"*/, v5, v6, v7);
    byte_42ED1D2 = 1;
  }
  result = (System_Collections_Generic_Dictionary_string__object__o *)QuestPhaseEntity__getScriptObj(
                                                                        this,
                                                                        (System_String_o *)StringLiteral_16447/*"addEquipSkills"*/,
                                                                        v2);
  if ( result )
  {
    v9 = *(&System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.bitflags2 + 1);
    if ( *(&result->klass->_2.bitflags2 + 1) < (unsigned int)v9
      || (System_Collections_Generic_Dictionary_string__object__c *)result->klass->_2.typeHierarchy[v9 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
    {
      sub_B5D990(result);
      return (System_Collections_Generic_Dictionary_string__object__o *)QuestPhaseEntity__getResultBgmId(v10, v11, v12);
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

  if ( (byte_42ED23B & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_16458/*"addUniqueCameraIds"*/, (_DWORD)defVal, (_DWORD)method, v3);
    byte_42ED23B = 1;
  }
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_16458/*"addUniqueCameraIds"*/, defVal, v3);
}


int32_t __fastcall QuestPhaseEntity__GetAdvantageClassId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42ED201 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_16737/*"auto_sel_support_type"*/, (_DWORD)method, v2, v3);
    byte_42ED201 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_16737/*"auto_sel_support_type"*/, -1, v3);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetAssistIdArray(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Int32_array *v8; // x2
  const MethodInfo *v9; // x3

  if ( (byte_42ED210 & 1) == 0 )
  {
    sub_B5D5C4(&int___TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_16696/*"assistIds"*/, v5, v6, v7);
    byte_42ED210 = 1;
  }
  v8 = (System_Int32_array *)sub_B5D5DC(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_16696/*"assistIds"*/, v8, v9);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetAssistWeightArray(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Int32_array *v8; // x2
  const MethodInfo *v9; // x3

  if ( (byte_42ED211 & 1) == 0 )
  {
    sub_B5D5C4(&int___TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_16695/*"assistIdWeight"*/, v5, v6, v7);
    byte_42ED211 = 1;
  }
  v8 = (System_Int32_array *)sub_B5D5DC(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_16695/*"assistIdWeight"*/, v8, v9);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetAssumedEffectId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42ED223 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_16699/*"assumedEffectId"*/, (_DWORD)method, v2, v3);
    byte_42ED223 = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_16699/*"assumedEffectId"*/, 0LL);
}


System_String_o *__fastcall QuestPhaseEntity__GetBattleFinishMovie(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42ED1E8 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_16849/*"battleFinishMovie"*/, (_DWORD)method, v2, v3);
    byte_42ED1E8 = 1;
  }
  return QuestPhaseEntity__getScriptStr(this, (System_String_o *)StringLiteral_16849/*"battleFinishMovie"*/, 0LL, v3);
}


int32_t __fastcall QuestPhaseEntity__GetBattleFinishWaitTime(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42ED22A & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_16850/*"battleFinishWaitTime"*/, (_DWORD)method, v2, v3);
    byte_42ED22A = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_16850/*"battleFinishWaitTime"*/, 0, v3);
}


int32_t __fastcall QuestPhaseEntity__GetBattleItemObjectId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42ED238 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_16854/*"battleItemObjectId"*/, (_DWORD)method, v2, v3);
    byte_42ED238 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_16854/*"battleItemObjectId"*/, 0, v3);
}


int32_t __fastcall QuestPhaseEntity__GetBeforeBattleSkillActor(
        QuestPhaseEntity_o *this,
        int32_t defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_42ED22B & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_16893/*"beforeBattleSkillActor"*/, defVal, (_DWORD)method, v3);
    byte_42ED22B = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_16893/*"beforeBattleSkillActor"*/, defVal, v3);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetClearGiftItemListDisplay(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Int32_array *v8; // x2
  const MethodInfo *v9; // x3

  if ( (byte_42ED220 & 1) == 0 )
  {
    sub_B5D5C4(&int___TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_17681/*"clearGiftItemListDisplay"*/, v5, v6, v7);
    byte_42ED220 = 1;
  }
  v8 = (System_Int32_array *)sub_B5D5DC(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_17681/*"clearGiftItemListDisplay"*/, v8, v9);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetCondHavingIds(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Int32_array *v8; // x2
  const MethodInfo *v9; // x3

  if ( (byte_42ED20C & 1) == 0 )
  {
    sub_B5D5C4(&int___TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_17862/*"condHaving"*/, v5, v6, v7);
    byte_42ED20C = 1;
  }
  v8 = (System_Int32_array *)sub_B5D5DC(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_17862/*"condHaving"*/, v8, v9);
}


int32_t __fastcall QuestPhaseEntity__GetCorrectionIconId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42ED200 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_17926/*"correctionIconId"*/, (_DWORD)method, v2, v3);
    byte_42ED200 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_17926/*"correctionIconId"*/, -1, v3);
}


int32_t __fastcall QuestPhaseEntity__GetDefenceTargetContinueRecoverRate(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42ED235 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_18939/*"fieldHpContinueRecoverRate"*/, (_DWORD)method, v2, v3);
    byte_42ED235 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_18939/*"fieldHpContinueRecoverRate"*/, 0, v3);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetEnemyInfoDispNpcSvtIdList(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Int32_array *v8; // x2
  const MethodInfo *v9; // x3

  if ( (byte_42ED21E & 1) == 0 )
  {
    sub_B5D5C4(&int___TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_21644/*"overwriteEnemyInfos"*/, v5, v6, v7);
    byte_42ED21E = 1;
  }
  v8 = (System_Int32_array *)sub_B5D5DC(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_21644/*"overwriteEnemyInfos"*/, v8, v9);
}


System_String_array *__fastcall QuestPhaseEntity__GetEnemyInfoOverwriteNpcSvtNameList(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_String_array *v8; // x2
  const MethodInfo *v9; // x3

  if ( (byte_42ED21F & 1) == 0 )
  {
    sub_B5D5C4(&string___TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_21643/*"overwriteEnemyInfoNames"*/, v5, v6, v7);
    byte_42ED21F = 1;
  }
  v8 = (System_String_array *)sub_B5D5DC(string___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptStringArrayParam(this, (System_String_o *)StringLiteral_21643/*"overwriteEnemyInfoNames"*/, v8, v9);
}


int32_t __fastcall QuestPhaseEntity__GetEquipAddId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42ED21D & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_18617/*"equipAddId"*/, (_DWORD)method, v2, v3);
    byte_42ED21D = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_18617/*"equipAddId"*/, 0, v3);
}


int32_t __fastcall QuestPhaseEntity__GetFinishEffectId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42ED1FD & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_18977/*"finishEffectId"*/, (_DWORD)method, v2, v3);
    byte_42ED1FD = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_18977/*"finishEffectId"*/, -1, v3);
}


int32_t __fastcall QuestPhaseEntity__GetFormationBgmId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42ED224 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_19054/*"formationBgmId"*/, (_DWORD)method, v2, v3);
    byte_42ED224 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19054/*"formationBgmId"*/, -1, v3);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetGimmickAnimTypeArray(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42ED1FB & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_19295/*"gimmickAnimType"*/, (_DWORD)method, v2, v3);
    byte_42ED1FB = 1;
  }
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_19295/*"gimmickAnimType"*/, 0LL, v3);
}


int32_t __fastcall QuestPhaseEntity__GetGimmickId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42ED1F4 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_19296/*"gimmickId"*/, (_DWORD)method, v2, v3);
    byte_42ED1F4 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19296/*"gimmickId"*/, -1, v3);
}


System_Object_array *__fastcall QuestPhaseEntity__GetGimmickResultVoiceArray(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42ED1FA & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_22099/*"resultVoice"*/, (_DWORD)method, v2, v3);
    byte_42ED1FA = 1;
  }
  return QuestPhaseEntity__getScriptObjArrayParam(this, (System_String_o *)StringLiteral_22099/*"resultVoice"*/, 0LL, v3);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetGimmickSkillIdArray(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Int32_array *v8; // x2
  const MethodInfo *v9; // x3

  if ( (byte_42ED1F7 & 1) == 0 )
  {
    sub_B5D5C4(&int___TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_22026/*"reelSkill"*/, v5, v6, v7);
    byte_42ED1F7 = 1;
  }
  v8 = (System_Int32_array *)sub_B5D5DC(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_22026/*"reelSkill"*/, v8, v9);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetGimmickSkillRateArray(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Int32_array *v8; // x2
  const MethodInfo *v9; // x3

  if ( (byte_42ED1F8 & 1) == 0 )
  {
    sub_B5D5C4(&int___TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_22025/*"reelRate"*/, v5, v6, v7);
    byte_42ED1F8 = 1;
  }
  v8 = (System_Int32_array *)sub_B5D5DC(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_22025/*"reelRate"*/, v8, v9);
}


System_String_array *__fastcall QuestPhaseEntity__GetGimmickStartVoiceArray(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42ED1F9 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_22588/*"startVoice"*/, (_DWORD)method, v2, v3);
    byte_42ED1F9 = 1;
  }
  return QuestPhaseEntity__getScriptStringArrayParam(this, (System_String_o *)StringLiteral_22588/*"startVoice"*/, 0LL, v3);
}


int32_t __fastcall QuestPhaseEntity__GetGimmickSvtId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42ED1F5 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_19297/*"gimmickSvtId"*/, (_DWORD)method, v2, v3);
    byte_42ED1F5 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19297/*"gimmickSvtId"*/, -1, v3);
}


int32_t __fastcall QuestPhaseEntity__GetIconItemNumberDispType(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42ED23A & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_19517/*"iconItemNumberDispType"*/, (_DWORD)method, v2, v3);
    byte_42ED23A = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19517/*"iconItemNumberDispType"*/, 0, v3);
}


float __fastcall QuestPhaseEntity__GetIncomingCallDispTime(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42ED22E & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_20020/*"incomingCallDispTime"*/, (_DWORD)method, v2, v3);
    byte_42ED22E = 1;
  }
  return (float)QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20020/*"incomingCallDispTime"*/, 500, v3) / 1000.0;
}


System_String_o *__fastcall QuestPhaseEntity__GetIncomingCallMessage(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3

  if ( (byte_42ED22D & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_20021/*"incomingCallMessage"*/, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_1/*""*/, v5, v6, v7);
    byte_42ED22D = 1;
  }
  return QuestPhaseEntity__getScriptStr(
           this,
           (System_String_o *)StringLiteral_20021/*"incomingCallMessage"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v3);
}


System_String_o *__fastcall QuestPhaseEntity__GetIncomingCallTitle(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3

  if ( (byte_42ED22C & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_20022/*"incomingCallTitle"*/, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_1/*""*/, v5, v6, v7);
    byte_42ED22C = 1;
  }
  return QuestPhaseEntity__getScriptStr(
           this,
           (System_String_o *)StringLiteral_20022/*"incomingCallTitle"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v3);
}


System_String_o *__fastcall QuestPhaseEntity__GetMapModelEntryAnimationName(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3

  if ( (byte_42ED228 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1188/*"3dMapEntryAnimName"*/, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_1/*""*/, v5, v6, v7);
    byte_42ED228 = 1;
  }
  return QuestPhaseEntity__getScriptStr(
           this,
           (System_String_o *)StringLiteral_1188/*"3dMapEntryAnimName"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v3);
}


int32_t __fastcall QuestPhaseEntity__GetMasterSkillDelay(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42ED206 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_20667/*"masterSkillDelay"*/, (_DWORD)method, v2, v3);
    byte_42ED206 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20667/*"masterSkillDelay"*/, 0, v3);
}


System_String_o *__fastcall QuestPhaseEntity__GetMasterSkillDelayInfo(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42ED207 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_20668/*"masterSkillDelayInfo"*/, (_DWORD)method, v2, v3);
    byte_42ED207 = 1;
  }
  return QuestPhaseEntity__getScriptStr(this, (System_String_o *)StringLiteral_20668/*"masterSkillDelayInfo"*/, 0LL, v3);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetMoveSceneInfo(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Int32_array *v8; // x2
  const MethodInfo *v9; // x3

  if ( (byte_42ED230 & 1) == 0 )
  {
    sub_B5D5C4(&int___TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_20842/*"moveSceneInfo"*/, v5, v6, v7);
    byte_42ED230 = 1;
  }
  v8 = (System_Int32_array *)sub_B5D5DC(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_20842/*"moveSceneInfo"*/, v8, v9);
}


int32_t __fastcall QuestPhaseEntity__GetMovieAfterCrossFadeStartFrame(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42ED1EF & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_20847/*"movieAfterCrossFadeStartFrame"*/, (_DWORD)method, v2, v3);
    byte_42ED1EF = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20847/*"movieAfterCrossFadeStartFrame"*/, 0, v3);
}


int32_t __fastcall QuestPhaseEntity__GetMovieAfterCrossFadeTime(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42ED1EE & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_20848/*"movieAfterCrossFadeTime"*/, (_DWORD)method, v2, v3);
    byte_42ED1EE = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20848/*"movieAfterCrossFadeTime"*/, 0, v3);
}


int32_t __fastcall QuestPhaseEntity__GetNextSceneId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42ED20A & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_21340/*"nextSceneId"*/, (_DWORD)method, v2, v3);
    byte_42ED20A = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21340/*"nextSceneId"*/, 0, v3);
}


System_String_array *__fastcall QuestPhaseEntity__GetNextSceneParam(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_String_array *result; // x0
  System_String_o *v9; // x19
  System_Char_array *v10; // x0
  __int64 v11; // x1
  __int64 v12; // x0

  if ( (byte_42ED20B & 1) == 0 )
  {
    sub_B5D5C4(&char___TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_21341/*"nextSceneParam"*/, v5, v6, v7);
    byte_42ED20B = 1;
  }
  result = (System_String_array *)QuestPhaseEntity__getScriptStr(this, (System_String_o *)StringLiteral_21341/*"nextSceneParam"*/, 0LL, v3);
  if ( result )
  {
    v9 = (System_String_o *)result;
    v10 = (System_Char_array *)sub_B5D5DC(char___TypeInfo, 1LL);
    if ( !v10 )
      sub_B5D69C(0LL, v11);
    if ( !v10->max_length )
    {
      v12 = sub_B5D6C8(v10);
      sub_B5D668(v12, 0LL);
    }
    v10->m_Items[2] = 44;
    return System_String__Split(v9, v10, 0LL);
  }
  return result;
}


int32_t __fastcall QuestPhaseEntity__GetNotDispEquipSkillChargeTurn(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42ED239 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_21417/*"notDispEquipSkillChargeTurn"*/, (_DWORD)method, v2, v3);
    byte_42ED239 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21417/*"notDispEquipSkillChargeTurn"*/, 0, v3);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetNotHavingQuests(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Int32_array *v8; // x2
  const MethodInfo *v9; // x3

  if ( (byte_42ED20D & 1) == 0 )
  {
    sub_B5D5C4(&int___TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_21420/*"notHavingQuest"*/, v5, v6, v7);
    byte_42ED20D = 1;
  }
  v8 = (System_Int32_array *)sub_B5D5DC(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_21420/*"notHavingQuest"*/, v8, v9);
}


System_Collections_Generic_Dictionary_int__int____o *__fastcall QuestPhaseEntity__GetNpcAiInfo(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  __int64 v35; // x21
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v36; // x22
  struct System_Collections_Generic_Dictionary_string__object__o *v37; // x0
  __int64 v38; // x1
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_Collections_Generic_Dictionary_int__int____o **v45; // x20
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  System_Xml_Schema_XmlSchemaObject_o *v47; // x22
  __int64 v48; // x10
  const MethodInfo *v49; // x2
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v51; // x19
  System_Xml_Schema_XmlSchemaObject_o *v52; // [xsp+8h] [xbp-38h] BYREF
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_42ED21B & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_object___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Action_object__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int_____ctor__, v11, v12, v13);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_int__int____TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_object__ForEach__, v17, v18, v19);
    sub_B5D5C4(&System_Collections_Generic_List_object__TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_QuestPhaseEntity___c__DisplayClass108_0__GetNpcAiInfo_b__0__, v23, v24, v25);
    sub_B5D5C4(&QuestPhaseEntity___c__DisplayClass108_0_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&StringLiteral_16494/*"aiMultiNpc"*/, v29, v30, v31);
    sub_B5D5C4(&StringLiteral_16495/*"aiNpc"*/, v32, v33, v34);
    byte_42ED21B = 1;
  }
  value = 0LL;
  v52 = 0LL;
  v35 = sub_B5D694(QuestPhaseEntity___c__DisplayClass108_0_TypeInfo);
  QuestPhaseEntity___c__DisplayClass108_0___ctor((QuestPhaseEntity___c__DisplayClass108_0_o *)v35, 0LL);
  v36 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__int____TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v36,
    (const MethodInfo_2F31510 *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  if ( !v35 )
    goto LABEL_14;
  *(_QWORD *)(v35 + 16) = v36;
  v45 = (System_Collections_Generic_Dictionary_int__int____o **)(v35 + 16);
  sub_B5D560((BattleServantConfConponent_o *)(v35 + 16), (System_Int32_array **)v36, v39, v40, v41, v42, v43, v44);
  script = this->fields.script;
  if ( !script )
    return *v45;
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
         (System_Xml_XmlQualifiedName_o *)StringLiteral_16494/*"aiMultiNpc"*/,
         &value,
         (const MethodInfo_2F289BC *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    v47 = value;
    if ( value )
    {
      v48 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
      if ( *(&value->klass->_2.bitflags2 + 1) >= (unsigned int)v48
        && (System_Collections_Generic_List_object__c *)value->klass->_2.typeHierarchy[v48 - 1] == System_Collections_Generic_List_object__TypeInfo )
      {
        v51 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_object__TypeInfo);
        System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
          v51,
          (Il2CppObject *)v35,
          Method_QuestPhaseEntity___c__DisplayClass108_0__GetNpcAiInfo_b__0__,
          (const MethodInfo_258B320 *)Method_System_Action_object___ctor__);
        System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
          (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)v47,
          (System_Action_T__o *)v51,
          (const MethodInfo_3057CD8 *)Method_System_Collections_Generic_List_object__ForEach__);
        return *v45;
      }
    }
  }
  v37 = this->fields.script;
  if ( !v37 )
LABEL_14:
    sub_B5D69C(v37, v38);
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v37,
         (System_Xml_XmlQualifiedName_o *)StringLiteral_16495/*"aiNpc"*/,
         &v52,
         (const MethodInfo_2F289BC *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    QuestPhaseEntity__SetNpcAiInfo(
      (System_Collections_Generic_IDictionary_int__int____o *)*v45,
      (Il2CppObject *)v52,
      v49);
  }
  return *v45;
}


int32_t __fastcall QuestPhaseEntity__GetOverWriteMasterImageId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42ED1EC & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_20657/*"masterImageId"*/, (_DWORD)method, v2, v3);
    byte_42ED1EC = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20657/*"masterImageId"*/, 0, v3);
}


int32_t __fastcall QuestPhaseEntity__GetOverwriteCommandSpellContinue(
        QuestPhaseEntity_o *this,
        int32_t def,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_42ED215 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_21635/*"overwriteCommandSpellContinue"*/, def, (_DWORD)method, v3);
    byte_42ED215 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21635/*"overwriteCommandSpellContinue"*/, def, v3);
}


int32_t __fastcall QuestPhaseEntity__GetOverwriteCommandSpellIcon(
        QuestPhaseEntity_o *this,
        int32_t genderType,
        System_Int32_array *defVal,
        const MethodInfo *method)
{
  System_Int32_array *ScriptIntArrayParam; // x0
  __int64 v8; // x0

  if ( (byte_42ED226 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_21636/*"overwriteCommandSpellIcons"*/, genderType, (_DWORD)defVal, method);
    byte_42ED226 = 1;
  }
  ScriptIntArrayParam = QuestPhaseEntity__getScriptIntArrayParam(
                          this,
                          (System_String_o *)StringLiteral_21636/*"overwriteCommandSpellIcons"*/,
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
    v8 = sub_B5D6C8(ScriptIntArrayParam);
    sub_B5D668(v8, 0LL);
  }
  return (int)ScriptIntArrayParam;
}


System_Collections_Generic_Dictionary_string__object__o *__fastcall QuestPhaseEntity__GetOverwriteEquipSkills(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Collections_Generic_Dictionary_string__object__o *result; // x0
  __int64 v9; // x9
  QuestPhaseEntity_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_42ED1D1 & 1) == 0 )
  {
    sub_B5D5C4(&System_Collections_Generic_Dictionary_string__object__TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_21646/*"overwriteEquipSkills"*/, v5, v6, v7);
    byte_42ED1D1 = 1;
  }
  result = (System_Collections_Generic_Dictionary_string__object__o *)QuestPhaseEntity__getScriptObj(
                                                                        this,
                                                                        (System_String_o *)StringLiteral_21646/*"overwriteEquipSkills"*/,
                                                                        v2);
  if ( result )
  {
    v9 = *(&System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.bitflags2 + 1);
    if ( *(&result->klass->_2.bitflags2 + 1) < (unsigned int)v9
      || (System_Collections_Generic_Dictionary_string__object__c *)result->klass->_2.typeHierarchy[v9 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
    {
      sub_B5D990(result);
      return QuestPhaseEntity__GetAddEquipSkills(v10, v11);
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  System_Int32_array *ScriptIntArrayParam; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_String_array **v22; // x2
  MethodInfo *v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_Int32_array *v28; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  const MethodInfo *v35; // x3
  System_Int32_array *v36; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7

  if ( (byte_42ED202 & 1) == 0 )
  {
    sub_B5D5C4(
      &StringLiteral_21650/*"overwriteLimitCountSvtIds"*/,
      (_DWORD)overwriteLimitCountSvtIds,
      (_DWORD)overwriteLimitCounts,
      overwriteLimitCountIconIds);
    sub_B5D5C4(&StringLiteral_21651/*"overwriteLimitCounts"*/, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_21649/*"overwriteLimitCountIconIds"*/, v12, v13, v14);
    byte_42ED202 = 1;
  }
  ScriptIntArrayParam = QuestPhaseEntity__getScriptIntArrayParam(
                          this,
                          (System_String_o *)StringLiteral_21650/*"overwriteLimitCountSvtIds"*/,
                          0LL,
                          (const MethodInfo *)overwriteLimitCountIconIds);
  *overwriteLimitCountSvtIds = ScriptIntArrayParam;
  sub_B5D560(
    (BattleServantConfConponent_o *)overwriteLimitCountSvtIds,
    (System_Int32_array **)ScriptIntArrayParam,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  if ( *overwriteLimitCountSvtIds )
  {
    v28 = QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_21651/*"overwriteLimitCounts"*/, 0LL, v23);
    *overwriteLimitCounts = v28;
    sub_B5D560(
      (BattleServantConfConponent_o *)overwriteLimitCounts,
      (System_Int32_array **)v28,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34);
    v36 = QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_21649/*"overwriteLimitCountIconIds"*/, 0LL, v35);
    *overwriteLimitCountIconIds = v36;
    sub_B5D560(
      (BattleServantConfConponent_o *)overwriteLimitCountIconIds,
      (System_Int32_array **)v36,
      v37,
      v38,
      v39,
      v40,
      v41,
      v42);
    return *overwriteLimitCounts != 0LL;
  }
  else
  {
    *overwriteLimitCounts = 0LL;
    sub_B5D560(
      (BattleServantConfConponent_o *)overwriteLimitCounts,
      0LL,
      v22,
      (System_String_array **)v23,
      v24,
      v25,
      v26,
      v27);
    *overwriteLimitCountIconIds = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)overwriteLimitCountIconIds, 0LL, v44, v45, v46, v47, v48, v49);
    return 0;
  }
}


System_Int32_array *__fastcall QuestPhaseEntity__GetOverwriteResultBgmCondIds(
        QuestPhaseEntity_o *this,
        System_Int32_array *defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_42ED1D5 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_21658/*"overwriteResultBgmCondIds"*/, (_DWORD)defVal, (_DWORD)method, v3);
    byte_42ED1D5 = 1;
  }
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_21658/*"overwriteResultBgmCondIds"*/, defVal, v3);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetOverwriteResultBgmIds(
        QuestPhaseEntity_o *this,
        System_Int32_array *defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_42ED1D4 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_21659/*"overwriteResultBgmIds"*/, (_DWORD)defVal, (_DWORD)method, v3);
    byte_42ED1D4 = 1;
  }
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_21659/*"overwriteResultBgmIds"*/, defVal, v3);
}


int32_t __fastcall QuestPhaseEntity__GetProgressAfterMovie(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42ED1EA & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_21840/*"progressAfterMovie"*/, (_DWORD)method, v2, v3);
    byte_42ED1EA = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21840/*"progressAfterMovie"*/, 0, v3);
}


int64_t __fastcall QuestPhaseEntity__GetQuestPhaseNo(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  return this->fields.phase + 100 * this->fields.questId;
}


int32_t __fastcall QuestPhaseEntity__GetQuestPhaseSelectRoute(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int32_t ScriptIntParam; // w0
  int32_t v12; // w19
  clsQuestCheck_o *v13; // x0
  __int64 v14; // x1

  if ( (byte_42ED1DF & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SingletonTemplate_clsQuestCheck__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_21750/*"phaseRouteSelect"*/, v8, v9, v10);
    byte_42ED1DF = 1;
  }
  ScriptIntParam = QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21750/*"phaseRouteSelect"*/, 0, v3);
  if ( ScriptIntParam < 1 )
    return 0;
  v12 = ScriptIntParam;
  if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
  }
  v13 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !v13 )
    sub_B5D69C(0LL, v14);
  if ( clsQuestCheck__CheckQuestPlayableNow(v13, v12, 0LL) )
    return v12;
  else
    return 0;
}


System_Int32_array *__fastcall QuestPhaseEntity__GetReelIconIdArray(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Int32_array *v8; // x2
  const MethodInfo *v9; // x3

  if ( (byte_42ED1F6 & 1) == 0 )
  {
    sub_B5D5C4(&int___TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_22024/*"reelIcon"*/, v5, v6, v7);
    byte_42ED1F6 = 1;
  }
  v8 = (System_Int32_array *)sub_B5D5DC(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_22024/*"reelIcon"*/, v8, v9);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetSelectableQuests(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42ED1DE & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_21906/*"questSelect"*/, (_DWORD)method, v2, v3);
    byte_42ED1DE = 1;
  }
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_21906/*"questSelect"*/, 0LL, v3);
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
      v11 = sub_B5D6C8(SelectableQuests);
      sub_B5D668(v11, 0LL);
    }
    return SelectableQuests->m_Items[selectIndex + 1];
  }
  return result;
}


System_Int32_array *__fastcall QuestPhaseEntity__GetShadowOffSvtIds(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Int32_array *v8; // x2
  const MethodInfo *v9; // x3

  if ( (byte_42ED205 & 1) == 0 )
  {
    sub_B5D5C4(&int___TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_22391/*"shadowOffSvtIds"*/, v5, v6, v7);
    byte_42ED205 = 1;
  }
  v8 = (System_Int32_array *)sub_B5D5DC(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_22391/*"shadowOffSvtIds"*/, v8, v9);
}


int32_t __fastcall QuestPhaseEntity__GetSingleForceSvtId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42ED203 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_22435/*"singleForceSvtId"*/, (_DWORD)method, v2, v3);
    byte_42ED203 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22435/*"singleForceSvtId"*/, 0, v3);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetStartMovieWave(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42ED1EB & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_20852/*"movieWave"*/, (_DWORD)method, v2, v3);
    byte_42ED1EB = 1;
  }
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_20852/*"movieWave"*/, 0LL, v3);
}


int32_t __fastcall QuestPhaseEntity__GetSupportInitDeckIndex(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42ED216 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_18699/*"eventDeckIndex"*/, (_DWORD)method, v2, v3);
    byte_42ED216 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_18699/*"eventDeckIndex"*/, 0, v3);
}


int32_t __fastcall QuestPhaseEntity__GetTemporaryCommandSpell(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42ED213 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_22945/*"temporaryCommandSpell"*/, (_DWORD)method, v2, v3);
    byte_42ED213 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22945/*"temporaryCommandSpell"*/, -1, v3);
}


int32_t __fastcall QuestPhaseEntity__GetUserEventDeckNo(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42ED204 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_23285/*"useEventDeckNo"*/, (_DWORD)method, v2, v3);
    byte_42ED204 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_23285/*"useEventDeckNo"*/, 1, v3);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetVoiceOffPlayerSvtIdArray(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42ED225 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_23487/*"voiceOffMySvtIds"*/, (_DWORD)method, v2, v3);
    byte_42ED225 = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_23487/*"voiceOffMySvtIds"*/, 0LL);
}


System_String_o *__fastcall QuestPhaseEntity__GetWarBoardStartMovieName(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3

  if ( (byte_42ED221 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_15614/*"WarBoardStartMovieName"*/, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_1/*""*/, v5, v6, v7);
    byte_42ED221 = 1;
  }
  return QuestPhaseEntity__getScriptStr(
           this,
           (System_String_o *)StringLiteral_15614/*"WarBoardStartMovieName"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v3);
}


System_String_array *__fastcall QuestPhaseEntity__GetWaveStartMovie(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42ED1E9 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_23565/*"waveStartMovie"*/, (_DWORD)method, v2, v3);
    byte_42ED1E9 = 1;
  }
  return QuestPhaseEntity__getScriptStringArrayParam(this, (System_String_o *)StringLiteral_23565/*"waveStartMovie"*/, 0LL, v3);
}


int32_t __fastcall QuestPhaseEntity__GetWinBgmOffFlg(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42ED1FE & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_18572/*"endBgmOff"*/, (_DWORD)method, v2, v3);
    byte_42ED1FE = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_18572/*"endBgmOff"*/, 0, v3);
}


int32_t __fastcall QuestPhaseEntity__GetWinVoiceOffFlg(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42ED1FC & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_18586/*"endVoiceOff"*/, (_DWORD)method, v2, v3);
    byte_42ED1FC = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_18586/*"endVoiceOff"*/, 0, v3);
}


bool __fastcall QuestPhaseEntity__HasReleaseFocusQuestBoardKey(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42ED236 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_20203/*"isReleaseFocus"*/, (_DWORD)method, v2, v3);
    byte_42ED236 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_20203/*"isReleaseFocus"*/, 0LL);
}


bool __fastcall QuestPhaseEntity__IsActiveAssistSkill(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Int32_array *v8; // x0
  const MethodInfo *v9; // x3
  System_Int32_array *ScriptIntArrayParam; // x0
  __int64 v11; // x1

  if ( (byte_42ED20F & 1) == 0 )
  {
    sub_B5D5C4(&int___TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_16696/*"assistIds"*/, v5, v6, v7);
    byte_42ED20F = 1;
  }
  v8 = (System_Int32_array *)sub_B5D5DC(int___TypeInfo, 0LL);
  ScriptIntArrayParam = QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_16696/*"assistIds"*/, v8, v9);
  if ( !ScriptIntArrayParam )
    sub_B5D69C(0LL, v11);
  return ScriptIntArrayParam->max_length != 0;
}


bool __fastcall QuestPhaseEntity__IsAreaImporveQuest(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3

  if ( (byte_42ED222 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_16647/*"areaImprovementQuest"*/, (_DWORD)method, (_DWORD)v2, v3);
    byte_42ED222 = 1;
  }
  return QuestPhaseEntity__getScriptObj(this, (System_String_o *)StringLiteral_16647/*"areaImprovementQuest"*/, v2) != 0LL;
}


bool __fastcall QuestPhaseEntity__IsContinueWaveRestart(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42ED234 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_17904/*"continueWaveRestart"*/, (_DWORD)method, v2, v3);
    byte_42ED234 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_17904/*"continueWaveRestart"*/, 0, v3) != 0;
}


bool __fastcall QuestPhaseEntity__IsHideAssistConfButton(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42ED212 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_19380/*"hideAssistConfButton"*/, (_DWORD)method, v2, v3);
    byte_42ED212 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19380/*"hideAssistConfButton"*/, 0, v3) != 0;
}


bool __fastcall QuestPhaseEntity__IsIgnoreBattleLoseDialog(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42ED1E3 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_19649/*"ignoreBattleLoseDialog"*/, (_DWORD)method, v2, v3);
    byte_42ED1E3 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_19649/*"ignoreBattleLoseDialog"*/, 0LL);
}


bool __fastcall QuestPhaseEntity__IsInterruptionQuest(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42ED23C & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_20103/*"interruptibleQuest"*/, (_DWORD)method, v2, v3);
    byte_42ED23C = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20103/*"interruptibleQuest"*/, 0, v3) != 0;
}


bool __fastcall QuestPhaseEntity__IsInvisibleConnectAndLoad(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42ED209 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_20144/*"invisibleConnectAndLoad"*/, (_DWORD)method, v2, v3);
    byte_42ED209 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20144/*"invisibleConnectAndLoad"*/, 0, v3) != 0;
}


bool __fastcall QuestPhaseEntity__IsKeepSubBgmAfterBattleResult(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42ED1FF & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_20374/*"keepSubBgmUntilBattleResult"*/, (_DWORD)method, v2, v3);
    byte_42ED1FF = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_20374/*"keepSubBgmUntilBattleResult"*/, 0LL);
}


bool __fastcall QuestPhaseEntity__IsMatchIndividuality(
        QuestPhaseEntity_o *this,
        System_Int32_array *individualitys,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  System_Collections_Generic_IEnumerable_T__o *individuality; // x21
  System_Collections_Generic_HashSet_int__o *v19; // x20
  System_Predicate_int__o *All_int; // x0
  __int64 v21; // x1
  System_Predicate_T__o *v22; // x21

  if ( (byte_42ED208 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Array_FindAll_int___, (_DWORD)individualitys, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int___ctor___68716240, v6, v7, v8);
    sub_B5D5C4(&System_Collections_Generic_HashSet_int__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_System_Predicate_int___ctor__, v12, v13, v14);
    sub_B5D5C4(&System_Predicate_int__TypeInfo, v15, v16, v17);
    byte_42ED208 = 1;
  }
  individuality = (System_Collections_Generic_IEnumerable_T__o *)this->fields.individuality;
  v19 = (System_Collections_Generic_HashSet_int__o *)sub_B5D694(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor_38794568(
    v19,
    individuality,
    (const MethodInfo_24FF548 *)Method_System_Collections_Generic_HashSet_int___ctor___68716240);
  All_int = (System_Predicate_int__o *)sub_B5D694(System_Predicate_int__TypeInfo);
  if ( !v19
    || (v22 = (System_Predicate_T__o *)All_int,
        System_Predicate_int____ctor(
          All_int,
          (Il2CppObject *)v19,
          (intptr_t)v19->klass->vtable._9_CopyTo.methodPtr,
          (const MethodInfo_2B91B48 *)Method_System_Predicate_int___ctor__),
        (All_int = (System_Predicate_int__o *)System_Array__FindAll_int_(
                                                individualitys,
                                                v22,
                                                (const MethodInfo_1FC050C *)Method_System_Array_FindAll_int___)) == 0LL) )
  {
    sub_B5D69C(All_int, v21);
  }
  return All_int->fields.m_target != 0LL;
}


bool __fastcall QuestPhaseEntity__IsNonStopEndBgm(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42ED1E0 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_21394/*"nonStopEndBgm"*/, (_DWORD)method, v2, v3);
    byte_42ED1E0 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21394/*"nonStopEndBgm"*/, 0, v3) != 0;
}


bool __fastcall QuestPhaseEntity__IsNotClassBoard(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42ED231 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_21415/*"notClassBoard"*/, (_DWORD)method, v2, v3);
    byte_42ED231 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21415/*"notClassBoard"*/, 0, v3) != 0;
}


bool __fastcall QuestPhaseEntity__IsNotResetResultDispFlag(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42ED1ED & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_21422/*"notResetResultDispFlag"*/, (_DWORD)method, v2, v3);
    byte_42ED1ED = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21422/*"notResetResultDispFlag"*/, 0, v3) != 0;
}


bool __fastcall QuestPhaseEntity__IsNotUseRestrictionDialog(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42ED232 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_21423/*"notUseRestrictionDialog"*/, (_DWORD)method, v2, v3);
    byte_42ED232 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21423/*"notUseRestrictionDialog"*/, 0, v3) != 0;
}


bool __fastcall QuestPhaseEntity__IsPlayScriptBeforeForWarBoard(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42ED20E & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_20206/*"isScriptPlayForWarBoard"*/, (_DWORD)method, v2, v3);
    byte_42ED20E = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20206/*"isScriptPlayForWarBoard"*/, 0, v3) != 0;
}


bool __fastcall QuestPhaseEntity__IsReleaseFocusQuestBoard(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42ED237 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_20203/*"isReleaseFocus"*/, (_DWORD)method, v2, v3);
    byte_42ED237 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20203/*"isReleaseFocus"*/, 0, v3) != 0;
}


bool __fastcall QuestPhaseEntity__IsRepeatReward(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42ED22F & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_22066/*"repeatReward"*/, (_DWORD)method, v2, v3);
    byte_42ED22F = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22066/*"repeatReward"*/, 0, v3) != 0;
}


bool __fastcall QuestPhaseEntity__IsSkipBattleFinish(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42ED229 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_22456/*"skipBattleFinish"*/, (_DWORD)method, v2, v3);
    byte_42ED229 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22456/*"skipBattleFinish"*/, 0, v3) != 0;
}


bool __fastcall QuestPhaseEntity__IsUseTemporaryCommandSpell(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42ED214 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_23289/*"useTemporaryCommandSpell"*/, (_DWORD)method, v2, v3);
    byte_42ED214 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_23289/*"useTemporaryCommandSpell"*/, -1, v3) == 1;
}


bool __fastcall QuestPhaseEntity__IsWaveCountInfinity(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42ED227 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_23562/*"waveCountInfinity"*/, (_DWORD)method, v2, v3);
    byte_42ED227 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_23562/*"waveCountInfinity"*/, -1, v3) != -1;
}


bool __fastcall QuestPhaseEntity__IsWaveSetup(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42ED233 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_23564/*"waveSetup"*/, (_DWORD)method, v2, v3);
    byte_42ED233 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_23564/*"waveSetup"*/, 0, v3) != 0;
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  __int64 v39; // x10
  System_Collections_Generic_Dictionary_string__object__c *v40; // x9
  System_Collections_Generic_Dictionary_string__object__o *v41; // x21
  int Value_long; // w20
  System_String_o *Value_string; // x0
  System_Collections_Generic_List_BattleActionData_HealData__o *v44; // x21
  QuestPhaseEntity___c_c *v45; // x0
  struct QuestPhaseEntity___c_StaticFields *static_fields; // x8
  System_Converter_BattleActionData_HealData__int__o *_9__109_0; // x22
  Il2CppObject *v48; // x23
  struct QuestPhaseEntity___c_StaticFields *v49; // x0
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  System_Collections_Generic_List_int__o *v56; // x0
  __int64 v57; // x1
  __int64 v58; // x3
  System_Collections_Generic_IDictionary_int__int____c *klass; // x8
  System_Collections_Generic_List_int__o *v60; // x21
  unsigned __int64 v61; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0

  if ( (byte_42ED21C & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_GetValue_long___, (_DWORD)obj, (_DWORD)method, v3);
    sub_B5D5C4(&Method_BasicHelper_GetValue_List_object____, v6, v7, v8);
    sub_B5D5C4(&Method_System_Converter_object__int___ctor__, v9, v10, v11);
    sub_B5D5C4(&System_Converter_object__int__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v15, v16, v17);
    sub_B5D5C4(&System_Collections_Generic_IDictionary_int__int____TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_object__ConvertAll_int___, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v24, v25, v26);
    sub_B5D5C4(&Method_QuestPhaseEntity___c__SetNpcAiInfo_b__109_0__, v27, v28, v29);
    sub_B5D5C4(&QuestPhaseEntity___c_TypeInfo, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_16493/*"aiIds"*/, v33, v34, v35);
    sub_B5D5C4(&StringLiteral_21436/*"npcId"*/, v36, v37, v38);
    byte_42ED21C = 1;
  }
  if ( obj )
  {
    v39 = *(&System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.bitflags2 + 1);
    if ( *(&obj->klass->_2.bitflags2 + 1) >= (unsigned int)v39 )
    {
      v40 = (System_Collections_Generic_Dictionary_string__object__c *)obj->klass->_2.typeHierarchy[v39 - 1];
      v41 = v40 == System_Collections_Generic_Dictionary_string__object__TypeInfo
          ? (System_Collections_Generic_Dictionary_string__object__o *)obj
          : 0LL;
      if ( v40 == System_Collections_Generic_Dictionary_string__object__TypeInfo )
      {
        Value_long = BasicHelper__GetValue_long_(
                       v41,
                       (System_String_o *)StringLiteral_21436/*"npcId"*/,
                       0LL,
                       (const MethodInfo_1AD8984 *)Method_BasicHelper_GetValue_long___);
        Value_string = BasicHelper__GetValue_string_(
                         v41,
                         (System_String_o *)StringLiteral_16493/*"aiIds"*/,
                         0LL,
                         (const MethodInfo_1AD8A70 *)Method_BasicHelper_GetValue_List_object____);
        if ( Value_long >= 1 )
        {
          v44 = (System_Collections_Generic_List_BattleActionData_HealData__o *)Value_string;
          if ( Value_string )
          {
            v45 = QuestPhaseEntity___c_TypeInfo;
            if ( (BYTE3(QuestPhaseEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !QuestPhaseEntity___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(QuestPhaseEntity___c_TypeInfo);
              v45 = QuestPhaseEntity___c_TypeInfo;
            }
            static_fields = v45->static_fields;
            _9__109_0 = (System_Converter_BattleActionData_HealData__int__o *)static_fields->__9__109_0;
            if ( !_9__109_0 )
            {
              if ( (BYTE3(v45->vtable._0_Equals.methodPtr) & 4) != 0 && !v45->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v45);
                static_fields = QuestPhaseEntity___c_TypeInfo->static_fields;
              }
              v48 = (Il2CppObject *)static_fields->__9;
              _9__109_0 = (System_Converter_BattleActionData_HealData__int__o *)sub_B5D694(System_Converter_object__int__TypeInfo);
              System_Converter_BattleActionData_HealData__int____ctor(
                _9__109_0,
                v48,
                Method_QuestPhaseEntity___c__SetNpcAiInfo_b__109_0__,
                (const MethodInfo_23F6FAC *)Method_System_Converter_object__int___ctor__);
              v49 = QuestPhaseEntity___c_TypeInfo->static_fields;
              v49->__9__109_0 = (struct System_Converter_object__int__o *)_9__109_0;
              sub_B5D560(
                (BattleServantConfConponent_o *)&v49->__9__109_0,
                (System_Int32_array **)_9__109_0,
                v50,
                v51,
                v52,
                v53,
                v54,
                v55);
            }
            v56 = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_BattleActionData_HealData___ConvertAll_int_(
                                                              v44,
                                                              (System_Converter_T__TOutput__o *)_9__109_0,
                                                              (const MethodInfo_192E0B4 *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
            if ( !v56
              || (v56 = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_int___ToArray(
                                                                    v56,
                                                                    (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__),
                  !dicNpcAiId) )
            {
              sub_B5D69C(v56, v57);
            }
            klass = dicNpcAiId->klass;
            v60 = v56;
            if ( *(_WORD *)&dicNpcAiId->klass->_2.bitflags1 )
            {
              v61 = 0LL;
              p_offset = &klass->_1.interfaceOffsets->offset;
              while ( *((System_Collections_Generic_IDictionary_int__int____c **)p_offset - 1) != System_Collections_Generic_IDictionary_int__int____TypeInfo )
              {
                ++v61;
                p_offset += 4;
                if ( v61 >= *(unsigned __int16 *)&dicNpcAiId->klass->_2.bitflags1 )
                  goto LABEL_26;
              }
              p_method = (__int64)&klass->vtable[*p_offset + 1].method;
            }
            else
            {
LABEL_26:
              p_method = sub_AF54C0(dicNpcAiId, System_Collections_Generic_IDictionary_int__int____TypeInfo, 1LL, v58);
            }
            (*(void (__fastcall **)(System_Collections_Generic_IDictionary_int__int____o *, _QWORD, System_Collections_Generic_List_int__o *, _QWORD))p_method)(
              dicNpcAiId,
              (unsigned int)Value_long,
              v60,
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

  if ( (byte_42ED1D9 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_16846/*"battleEffectId"*/, defVal, (_DWORD)method, v3);
    byte_42ED1D9 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_16846/*"battleEffectId"*/, defVal, v3);
}


int32_t __fastcall QuestPhaseEntity__getBattleFieldMotionId(
        QuestPhaseEntity_o *this,
        int32_t defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_42ED1DB & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_18947/*"fieldMotionId"*/, defVal, (_DWORD)method, v3);
    byte_42ED1DB = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_18947/*"fieldMotionId"*/, defVal, v3);
}


System_Int32_array *__fastcall QuestPhaseEntity__getBattleFieldMotionIds(
        QuestPhaseEntity_o *this,
        System_Int32_array *defVals,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  System_Int32_array *result; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  int32_t BattleFieldMotionId; // w20
  __int64 v13; // x0

  if ( (byte_42ED1DC & 1) == 0 )
  {
    sub_B5D5C4(&int___TypeInfo, (_DWORD)defVals, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_18948/*"fieldMotionIds"*/, v6, v7, v8);
    byte_42ED1DC = 1;
  }
  result = QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_18948/*"fieldMotionIds"*/, defVals, v3);
  if ( !result )
    goto LABEL_10;
  if ( *(_QWORD *)&result->max_length )
    return result;
  BattleFieldMotionId = QuestPhaseEntity__getBattleFieldMotionId(this, -1, v11);
  result = defVals;
  if ( BattleFieldMotionId == -1 )
    return result;
  result = (System_Int32_array *)sub_B5D5DC(int___TypeInfo, 1LL);
  if ( !result )
LABEL_10:
    sub_B5D69C(result, v10);
  if ( !result->max_length )
  {
    v13 = sub_B5D6C8(result);
    sub_B5D668(v13, 0LL);
  }
  result->m_Items[1] = BattleFieldMotionId;
  return result;
}


int32_t __fastcall QuestPhaseEntity__getBreakOnBattleWinWaitMSec(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42ED1E7 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_17141/*"breakOnBattleWinWaitMSec"*/, (_DWORD)method, v2, v3);
    byte_42ED1E7 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_17141/*"breakOnBattleWinWaitMSec"*/, 0, v3);
}


System_Int32_array *__fastcall QuestPhaseEntity__getEventGrounpIds(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Int32_array *v8; // x2
  const MethodInfo *v9; // x3

  if ( (byte_42ED1DD & 1) == 0 )
  {
    sub_B5D5C4(&int___TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_18700/*"eventGroupId"*/, v5, v6, v7);
    byte_42ED1DD = 1;
  }
  v8 = (System_Int32_array *)sub_B5D5DC(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_18700/*"eventGroupId"*/, v8, v9);
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
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42ED219 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_19390/*"hintLeftIndent"*/, (_DWORD)method, v2, v3);
    byte_42ED219 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19390/*"hintLeftIndent"*/, -1, v3);
}


System_String_o *__fastcall QuestPhaseEntity__getHintMessage(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3

  if ( (byte_42ED218 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_19391/*"hintMessage"*/, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_1/*""*/, v5, v6, v7);
    byte_42ED218 = 1;
  }
  return QuestPhaseEntity__getScriptStr(
           this,
           (System_String_o *)StringLiteral_19391/*"hintMessage"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v3);
}


System_String_o *__fastcall QuestPhaseEntity__getHintMessageTitle(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3

  if ( (byte_42ED217 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_19393/*"hintTitle"*/, v5, v6, v7);
    byte_42ED217 = 1;
  }
  return QuestPhaseEntity__getScriptStr(
           this,
           (System_String_o *)StringLiteral_19393/*"hintTitle"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v3);
}


int32_t __fastcall QuestPhaseEntity__getHintOpenType(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42ED21A & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_19392/*"hintOpenType"*/, (_DWORD)method, v2, v3);
    byte_42ED21A = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19392/*"hintOpenType"*/, 0, v3);
}


int32_t __fastcall QuestPhaseEntity__getLeave(QuestPhaseEntity_o *this, int32_t defVal, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_42ED1D8 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_20461/*"leave"*/, defVal, (_DWORD)method, v3);
    byte_42ED1D8 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20461/*"leave"*/, defVal, v3);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  System_Int32_array *individuality; // x3
  int32_t phase; // w19
  int32_t questId; // w20
  QuestBehaviorMaster_o *v16; // x21

  if ( (byte_42ED1C9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestBehaviorMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&int___TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9, v10);
    byte_42ED1C9 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestBehaviorMaster___);
  individuality = this->fields.individuality;
  questId = this->fields.questId;
  phase = this->fields.phase;
  v16 = (QuestBehaviorMaster_o *)Instance;
  if ( !individuality )
  {
    Instance = (DataManager_o *)sub_B5D5DC(int___TypeInfo, 0LL);
    individuality = (System_Int32_array *)Instance;
  }
  if ( !v16 )
LABEL_8:
    sub_B5D69C(Instance, v12);
  return QuestBehaviorMaster__getBattleIndividuality(v16, questId, phase, individuality, 0LL);
}


int32_t __fastcall QuestPhaseEntity__getQuestId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  return this->fields.questId;
}


int32_t __fastcall QuestPhaseEntity__getResultBgmId(QuestPhaseEntity_o *this, int32_t defVal, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_42ED1D3 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_22095/*"resultBgmId"*/, defVal, (_DWORD)method, v3);
    byte_42ED1D3 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22095/*"resultBgmId"*/, defVal, v3);
}


int32_t __fastcall QuestPhaseEntity__getResultEffectId(
        QuestPhaseEntity_o *this,
        int32_t defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_42ED1D7 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_22096/*"resultEffectId"*/, defVal, (_DWORD)method, v3);
    byte_42ED1D7 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22096/*"resultEffectId"*/, defVal, v3);
}


System_Int32_array *__fastcall QuestPhaseEntity__getResultEnemyVoiceIds(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Int32_array *v8; // x2
  const MethodInfo *v9; // x3

  if ( (byte_42ED1E1 & 1) == 0 )
  {
    sub_B5D5C4(&int___TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_22097/*"resultEnemyVoiceIds"*/, v5, v6, v7);
    byte_42ED1E1 = 1;
  }
  v8 = (System_Int32_array *)sub_B5D5DC(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_22097/*"resultEnemyVoiceIds"*/, v8, v9);
}


System_Int32_array *__fastcall QuestPhaseEntity__getScriptIntArrayParam(
        QuestPhaseEntity_o *this,
        System_String_o *key,
        System_Int32_array *defVal,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  System_Collections_Generic_List_object__o *ScriptObjListParam; // x0
  System_Collections_Generic_List_BattleActionData_HealData__o *v23; // x19
  QuestPhaseEntity___c_c *v24; // x0
  struct QuestPhaseEntity___c_StaticFields *static_fields; // x8
  System_Converter_BattleActionData_HealData__int__o *_9__26_0; // x20
  Il2CppObject *v27; // x21
  struct QuestPhaseEntity___c_StaticFields *v28; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_Collections_Generic_List_int__o *v35; // x0
  __int64 v36; // x1

  if ( (byte_42ED1CB & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Converter_object__int___ctor__, (_DWORD)key, (_DWORD)defVal, method);
    sub_B5D5C4(&System_Converter_object__int__TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_object__ConvertAll_int___, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v13, v14, v15);
    sub_B5D5C4(&Method_QuestPhaseEntity___c__getScriptIntArrayParam_b__26_0__, v16, v17, v18);
    sub_B5D5C4(&QuestPhaseEntity___c_TypeInfo, v19, v20, v21);
    byte_42ED1CB = 1;
  }
  ScriptObjListParam = QuestPhaseEntity__getScriptObjListParam(this, key, (const MethodInfo *)defVal);
  if ( !ScriptObjListParam )
    return defVal;
  v23 = (System_Collections_Generic_List_BattleActionData_HealData__o *)ScriptObjListParam;
  v24 = QuestPhaseEntity___c_TypeInfo;
  if ( (BYTE3(QuestPhaseEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestPhaseEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestPhaseEntity___c_TypeInfo);
    v24 = QuestPhaseEntity___c_TypeInfo;
  }
  static_fields = v24->static_fields;
  _9__26_0 = (System_Converter_BattleActionData_HealData__int__o *)static_fields->__9__26_0;
  if ( !_9__26_0 )
  {
    if ( (BYTE3(v24->vtable._0_Equals.methodPtr) & 4) != 0 && !v24->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v24);
      static_fields = QuestPhaseEntity___c_TypeInfo->static_fields;
    }
    v27 = (Il2CppObject *)static_fields->__9;
    _9__26_0 = (System_Converter_BattleActionData_HealData__int__o *)sub_B5D694(System_Converter_object__int__TypeInfo);
    System_Converter_BattleActionData_HealData__int____ctor(
      _9__26_0,
      v27,
      Method_QuestPhaseEntity___c__getScriptIntArrayParam_b__26_0__,
      (const MethodInfo_23F6FAC *)Method_System_Converter_object__int___ctor__);
    v28 = QuestPhaseEntity___c_TypeInfo->static_fields;
    v28->__9__26_0 = (struct System_Converter_object__int__o *)_9__26_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v28->__9__26_0,
      (System_Int32_array **)_9__26_0,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34);
  }
  v35 = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_BattleActionData_HealData___ConvertAll_int_(
                                                    v23,
                                                    (System_Converter_T__TOutput__o *)_9__26_0,
                                                    (const MethodInfo_192E0B4 *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
  if ( !v35 )
    sub_B5D69C(0LL, v36);
  return System_Collections_Generic_List_int___ToArray(
           v35,
           (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  if ( (byte_42ED1CA & 1) == 0 )
  {
    sub_B5D5C4(&long_TypeInfo, (_DWORD)key, defVal, method);
    byte_42ED1CA = 1;
  }
  ScriptObj = QuestPhaseEntity__getScriptObj(this, key, *(const MethodInfo **)&defVal);
  if ( !ScriptObj )
    return v4;
  if ( ScriptObj->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(ScriptObj);
  sub_B5D990(ScriptObj);
  return (unsigned int)QuestPhaseEntity__getScriptObj(v9, v10, v11);
}


Il2CppObject *__fastcall QuestPhaseEntity__getScriptObj(
        QuestPhaseEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  __int64 v3; // x3
  Il2CppObject *result; // x0
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42ED1CF & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__,
      (_DWORD)key,
      (_DWORD)method,
      v3);
    byte_42ED1CF = 1;
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
           (const MethodInfo_2F289BC *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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

  if ( (byte_42ED1CD & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_object__ToArray__, (_DWORD)key, (_DWORD)defVal, method);
    byte_42ED1CD = 1;
  }
  ScriptObjListParam = QuestPhaseEntity__getScriptObjListParam(this, key, (const MethodInfo *)defVal);
  if ( ScriptObjListParam )
    return (System_Object_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)ScriptObjListParam,
                                    (const MethodInfo_305910C *)Method_System_Collections_Generic_List_object__ToArray__);
  else
    return (System_Object_array *)defVal;
}


System_Collections_Generic_List_object__o *__fastcall QuestPhaseEntity__getScriptObjListParam(
        QuestPhaseEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Collections_Generic_List_object__o *result; // x0
  __int64 v7; // x9
  QuestPhaseEntity_o *v8; // x0
  System_String_o *v9; // x1
  System_String_array *v10; // x2
  const MethodInfo *v11; // x3

  if ( (byte_42ED1CE & 1) == 0 )
  {
    sub_B5D5C4(&System_Collections_Generic_List_object__TypeInfo, (_DWORD)key, (_DWORD)method, v3);
    byte_42ED1CE = 1;
  }
  result = (System_Collections_Generic_List_object__o *)QuestPhaseEntity__getScriptObj(this, key, method);
  if ( result )
  {
    v7 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
    if ( *(&result->klass->_2.bitflags2 + 1) < (unsigned int)v7
      || (System_Collections_Generic_List_object__c *)result->klass->_2.typeHierarchy[v7 - 1] != System_Collections_Generic_List_object__TypeInfo )
    {
      sub_B5D990(result);
      return (System_Collections_Generic_List_object__o *)QuestPhaseEntity__getScriptStringArrayParam(v8, v9, v10, v11);
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
  System_String_o *v4; // x19
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v14; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *v15; // x0
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0
  QuestPhaseEntity_o *v18; // x0
  const MethodInfo *v19; // x1

  v4 = defVal;
  if ( (byte_42ED1D0 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__,
      (_DWORD)key,
      (_DWORD)defVal,
      method);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7, v8, v9);
    sub_B5D5C4(&string_TypeInfo, v10, v11, v12);
    byte_42ED1D0 = 1;
  }
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)key,
          (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return v4;
  }
  v15 = this->fields.script;
  if ( !v15 )
    sub_B5D69C(0LL, v14);
  Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
           (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v15,
           (System_Type_o *)key,
           (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v4 = (System_String_o *)Item;
  if ( !Item || (System_String_c *)Item->klass == string_TypeInfo )
    return v4;
  sub_B5D990(Item);
  return (System_String_o *)QuestPhaseEntity__GetOverwriteEquipSkills(v18, v19);
}


System_String_array *__fastcall QuestPhaseEntity__getScriptStringArrayParam(
        QuestPhaseEntity_o *this,
        System_String_o *key,
        System_String_array *defVal,
        const MethodInfo *method)
{
  System_String_array *v4; // x20
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  System_Collections_Generic_List_object__o *ScriptObjListParam; // x0
  System_Collections_Generic_List_string__o *v23; // x19
  QuestPhaseEntity___c_c *v24; // x0
  struct QuestPhaseEntity___c_StaticFields *static_fields; // x8
  System_Converter_string__string__o *_9__27_0; // x20
  Il2CppObject *v27; // x21
  struct QuestPhaseEntity___c_StaticFields *v28; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_Collections_Generic_List_WarBoardUiData_SaveData__o *v35; // x0
  __int64 v36; // x1

  v4 = defVal;
  if ( (byte_42ED1CC & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Converter_object__string___ctor__, (_DWORD)key, (_DWORD)defVal, method);
    sub_B5D5C4(&System_Converter_object__string__TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_object__ConvertAll_string___, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__ToArray__, v13, v14, v15);
    sub_B5D5C4(&Method_QuestPhaseEntity___c__getScriptStringArrayParam_b__27_0__, v16, v17, v18);
    sub_B5D5C4(&QuestPhaseEntity___c_TypeInfo, v19, v20, v21);
    byte_42ED1CC = 1;
  }
  ScriptObjListParam = QuestPhaseEntity__getScriptObjListParam(this, key, (const MethodInfo *)defVal);
  if ( ScriptObjListParam )
  {
    v23 = (System_Collections_Generic_List_string__o *)ScriptObjListParam;
    v24 = QuestPhaseEntity___c_TypeInfo;
    if ( (BYTE3(QuestPhaseEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !QuestPhaseEntity___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestPhaseEntity___c_TypeInfo);
      v24 = QuestPhaseEntity___c_TypeInfo;
    }
    static_fields = v24->static_fields;
    _9__27_0 = (System_Converter_string__string__o *)static_fields->__9__27_0;
    if ( !_9__27_0 )
    {
      if ( (BYTE3(v24->vtable._0_Equals.methodPtr) & 4) != 0 && !v24->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v24);
        static_fields = QuestPhaseEntity___c_TypeInfo->static_fields;
      }
      v27 = (Il2CppObject *)static_fields->__9;
      _9__27_0 = (System_Converter_string__string__o *)sub_B5D694(System_Converter_object__string__TypeInfo);
      System_Converter_string__string____ctor(
        _9__27_0,
        v27,
        Method_QuestPhaseEntity___c__getScriptStringArrayParam_b__27_0__,
        (const MethodInfo_23F738C *)Method_System_Converter_object__string___ctor__);
      v28 = QuestPhaseEntity___c_TypeInfo->static_fields;
      v28->__9__27_0 = (struct System_Converter_object__string__o *)_9__27_0;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v28->__9__27_0,
        (System_Int32_array **)_9__27_0,
        v29,
        v30,
        v31,
        v32,
        v33,
        v34);
    }
    v35 = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)System_Collections_Generic_List_string___ConvertAll_string_(
                                                                          v23,
                                                                          (System_Converter_T__TOutput__o *)_9__27_0,
                                                                          (const MethodInfo_192E1C0 *)Method_System_Collections_Generic_List_object__ConvertAll_string___);
    if ( !v35 )
      sub_B5D69C(0LL, v36);
    return (System_String_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    v35,
                                    (const MethodInfo_305910C *)Method_System_Collections_Generic_List_string__ToArray__);
  }
  return v4;
}


int32_t __fastcall QuestPhaseEntity__getSpecialShadowEffectId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42ED1F2 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_19273/*"getSpecialShadowEffectId"*/, (_DWORD)method, v2, v3);
    byte_42ED1F2 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19273/*"getSpecialShadowEffectId"*/, 0, v3);
}


int32_t __fastcall QuestPhaseEntity__getTurnSituationType(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42ED1F1 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_23127/*"turnSituationType"*/, (_DWORD)method, v2, v3);
    byte_42ED1F1 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_23127/*"turnSituationType"*/, 0, v3);
}


int32_t __fastcall QuestPhaseEntity__getUniqueCameraId(
        QuestPhaseEntity_o *this,
        int32_t defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_42ED1DA & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_23208/*"uniqueCameraId"*/, defVal, (_DWORD)method, v3);
    byte_42ED1DA = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_23208/*"uniqueCameraId"*/, defVal, v3);
}


bool __fastcall QuestPhaseEntity__isBattleFinishCameraTargetAll(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42ED1F0 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_16848/*"battleFinishCameraTargetAll"*/, (_DWORD)method, v2, v3);
    byte_42ED1F0 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_16848/*"battleFinishCameraTargetAll"*/, 0, v3) != 0;
}


bool __fastcall QuestPhaseEntity__isBreakOnBattleWin(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42ED1E5 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_17139/*"breakOnBattleWin"*/, (_DWORD)method, v2, v3);
    byte_42ED1E5 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_17139/*"breakOnBattleWin"*/, 0, v3) != 0;
}


bool __fastcall QuestPhaseEntity__isBreakOnBattleWinFadeColorBlack(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42ED1E6 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_17140/*"breakOnBattleWinFadeColorBlack"*/, (_DWORD)method, v2, v3);
    byte_42ED1E6 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_17140/*"breakOnBattleWinFadeColorBlack"*/, 0, v3) != 0;
}


bool __fastcall QuestPhaseEntity__isDisableChangeRaidDownMessage(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42ED1F3 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_20179/*"isDisableChangeRaidDownMessage"*/, (_DWORD)method, v2, v3);
    byte_42ED1F3 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20179/*"isDisableChangeRaidDownMessage"*/, 0, v3) != 0;
}


bool __fastcall QuestPhaseEntity__isDispLoseResult(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42ED1E2 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_22098/*"resultLoseDisp"*/, (_DWORD)method, v2, v3);
    byte_42ED1E2 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22098/*"resultLoseDisp"*/, 0, v3) != 0;
}


bool __fastcall QuestPhaseEntity__isFadeOutBgmBeforeMovie(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42ED1D6 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_6623/*"FadeOutBgmBeforeMovie"*/, (_DWORD)method, v2, v3);
    byte_42ED1D6 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_6623/*"FadeOutBgmBeforeMovie"*/, 0, v3) != 0;
}


bool __fastcall QuestPhaseEntity__isNoResult(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42ED1E4 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_21378/*"noResult"*/, (_DWORD)method, v2, v3);
    byte_42ED1E4 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21378/*"noResult"*/, 0, v3) != 0;
}


bool __fastcall QuestPhaseEntity__isTurnSituationType(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  return QuestPhaseEntity__getTurnSituationType(this, method) > 0;
}


void __fastcall QuestPhaseEntity___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42E7EFC & 1) == 0 )
  {
    sub_B5D5C4(&QuestPhaseEntity___c_TypeInfo, v1, v2, v3);
    byte_42E7EFC = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(QuestPhaseEntity___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = (BattleServantConfConponent_o *)QuestPhaseEntity___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v4;
  sub_B5D560(static_fields, (System_Int32_array **)v4, v6, v7, v8, v9, v10, v11);
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
  __int64 v3; // x3
  System_String_o *v5; // x0

  if ( (byte_42E7EFE & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)x, (_DWORD)method, v3);
    byte_42E7EFE = 1;
  }
  if ( x )
    v5 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer, const MethodInfo *))x->klass->vtable[3].method)(
                              x,
                              x->klass->vtable[4].methodPtr,
                              method);
  else
    v5 = 0LL;
  if ( !v5 )
    v5 = (System_String_o *)StringLiteral_1/*""*/;
  return System_Int32__Parse(v5, 0LL);
}


int32_t __fastcall QuestPhaseEntity___c___getScriptIntArrayParam_b__26_0(
        QuestPhaseEntity___c_o *this,
        Il2CppObject *x,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_String_o *v5; // x0

  if ( (byte_42E7EFD & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)x, (_DWORD)method, v3);
    byte_42E7EFD = 1;
  }
  if ( x )
    v5 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer, const MethodInfo *))x->klass->vtable[3].method)(
                              x,
                              x->klass->vtable[4].methodPtr,
                              method);
  else
    v5 = 0LL;
  if ( !v5 )
    v5 = (System_String_o *)StringLiteral_1/*""*/;
  return System_Int32__Parse(v5, 0LL);
}


System_String_o *__fastcall QuestPhaseEntity___c___getScriptStringArrayParam_b__27_0(
        QuestPhaseEntity___c_o *this,
        Il2CppObject *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
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