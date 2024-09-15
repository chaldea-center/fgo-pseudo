void __fastcall QuestPhaseEntity___ctor(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A2E3DC & 1) == 0 )
  {
    sub_1B761C0(&Method_DataEntityBase_string___ctor__, method);
    byte_4A2E3DC = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_30FF5F8 *)Method_DataEntityBase_string___ctor__);
}


void __fastcall QuestPhaseEntity___ctor_39312316(
        QuestPhaseEntity_o *this,
        QuestPhaseEntity_o *cSrc,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  struct System_Int32_array *v10; // x1
  System_Array_o *classIds; // x0
  Il2CppObject *v12; // x0
  Il2CppObject *v13; // x21
  int32_t v14; // w2
  int32_t v15; // w3
  System_Array_o *individuality; // x0
  Il2CppObject *v17; // x0
  struct System_Int32_array *v18; // x1
  struct System_Int32_array **p_individuality; // x19

  if ( (byte_4A2E3DD & 1) == 0 )
  {
    sub_1B761C0(&Method_DataEntityBase_string___ctor__, cSrc);
    sub_1B761C0(&int___TypeInfo, v5);
    byte_4A2E3DD = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_30FF5F8 *)Method_DataEntityBase_string___ctor__);
  if ( !cSrc )
    sub_1B7641C(v6, v7);
  v10 = 0LL;
  *(_QWORD *)&this->fields.questId = *(_QWORD *)&cSrc->fields.questId;
  this->fields.isNpcOnly = cSrc->fields.isNpcOnly;
  *(_OWORD *)&this->fields.battleBgId = *(_OWORD *)&cSrc->fields.battleBgId;
  classIds = (System_Array_o *)cSrc->fields.classIds;
  if ( classIds )
  {
    v12 = System_Array__Clone(classIds, 0LL);
    if ( v12 )
    {
      v13 = v12;
      v10 = (struct System_Int32_array *)sub_1B762FC(v12, int___TypeInfo);
      if ( !v10 )
        goto LABEL_12;
    }
    else
    {
      v10 = 0LL;
    }
  }
  this->fields.classIds = v10;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.classIds, (int32_t)v10, v8, v9);
  individuality = (System_Array_o *)cSrc->fields.individuality;
  if ( !individuality )
    goto LABEL_13;
  v17 = System_Array__Clone(individuality, 0LL);
  if ( !v17 )
    goto LABEL_13;
  v13 = v17;
  v18 = (struct System_Int32_array *)sub_1B762FC(v17, int___TypeInfo);
  if ( !v18 )
  {
LABEL_12:
    sub_1B766DC(v13);
LABEL_13:
    v18 = 0LL;
  }
  this->fields.individuality = v18;
  p_individuality = &this->fields.individuality;
  sub_1B76164((ServantStatusBattleListViewItem_o *)p_individuality, (int32_t)v18, v14, v15);
  *((_DWORD *)p_individuality + 2) = cSrc->fields.giftId;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall QuestPhaseEntity__CreatePK(int32_t questId, int32_t phase, const MethodInfo *method)
{
  if ( (byte_4A2E3DB & 1) == 0 )
  {
    sub_1B761C0(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&phase);
    byte_4A2E3DB = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           questId,
           phase,
           (const MethodInfo_2E6062C *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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

  if ( (byte_4A2E3EC & 1) == 0 )
  {
    sub_1B761C0(&System_Collections_Generic_Dictionary_string__object__TypeInfo, method);
    sub_1B761C0(&StringLiteral_16658/*"addEquipSkills"*/, v4);
    byte_4A2E3EC = 1;
  }
  result = (System_Collections_Generic_Dictionary_string__object__o *)QuestPhaseEntity__getScriptObj(
                                                                        this,
                                                                        (System_String_o *)StringLiteral_16658/*"addEquipSkills"*/,
                                                                        v2);
  if ( result )
  {
    methodPtr_low = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (System_Collections_Generic_Dictionary_string__object__c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
    {
      sub_1B766DC(result);
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

  if ( (byte_4A2E457 & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_16670/*"addUniqueCameraIds"*/, defVal);
    byte_4A2E457 = 1;
  }
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_16670/*"addUniqueCameraIds"*/, defVal, v3);
}


int32_t __fastcall QuestPhaseEntity__GetAdvantageClassId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A2E41B & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_16981/*"auto_sel_support_type"*/, method);
    byte_4A2E41B = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_16981/*"auto_sel_support_type"*/, -1, v2);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetAssistIdArray(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Int32_array *v4; // x2
  const MethodInfo *v5; // x3

  if ( (byte_4A2E42A & 1) == 0 )
  {
    sub_1B761C0(&int___TypeInfo, method);
    sub_1B761C0(&StringLiteral_16934/*"assistIds"*/, v3);
    byte_4A2E42A = 1;
  }
  v4 = (System_Int32_array *)sub_1B76268(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_16934/*"assistIds"*/, v4, v5);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetAssistWeightArray(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Int32_array *v4; // x2
  const MethodInfo *v5; // x3

  if ( (byte_4A2E42B & 1) == 0 )
  {
    sub_1B761C0(&int___TypeInfo, method);
    sub_1B761C0(&StringLiteral_16933/*"assistIdWeight"*/, v3);
    byte_4A2E42B = 1;
  }
  v4 = (System_Int32_array *)sub_1B76268(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_16933/*"assistIdWeight"*/, v4, v5);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetAssumedEffectId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A2E43D & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_16937/*"assumedEffectId"*/, method);
    byte_4A2E43D = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_16937/*"assumedEffectId"*/, 0LL);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetBattleEffectMovieIds(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A2E45F & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_3236/*"BattleEffectMovieIds"*/, method);
    byte_4A2E45F = 1;
  }
  return EntityScriptUtil__GetIntArray(this->fields.script, (System_String_o *)StringLiteral_3236/*"BattleEffectMovieIds"*/, 0LL, 0LL);
}


System_String_o *__fastcall QuestPhaseEntity__GetBattleFinishMovie(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A2E402 & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_17103/*"battleFinishMovie"*/, method);
    byte_4A2E402 = 1;
  }
  return QuestPhaseEntity__getScriptStr(this, (System_String_o *)StringLiteral_17103/*"battleFinishMovie"*/, 0LL, v2);
}


int32_t __fastcall QuestPhaseEntity__GetBattleFinishWaitTime(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A2E446 & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_17104/*"battleFinishWaitTime"*/, method);
    byte_4A2E446 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_17104/*"battleFinishWaitTime"*/, 0, v2);
}


int32_t __fastcall QuestPhaseEntity__GetBattleItemObjectId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A2E454 & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_17108/*"battleItemObjectId"*/, method);
    byte_4A2E454 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_17108/*"battleItemObjectId"*/, 0, v2);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall QuestPhaseEntity__GetBeforeBattleSkillActor(
        QuestPhaseEntity_o *this,
        int32_t defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4A2E447 & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_17149/*"beforeBattleSkillActor"*/, *(_QWORD *)&defVal);
    byte_4A2E447 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_17149/*"beforeBattleSkillActor"*/, defVal, v3);
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
  _QWORD *v12; // x19
  __int64 v13; // x8
  __int64 v14; // x0
  __int64 v15; // x0

  if ( (byte_4A2E3E1 & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Array_Empty_int___, method);
    sub_1B761C0(&Method_DataManager_GetMaster_BattleBgMaster___, v3);
    sub_1B761C0(&DataManager_TypeInfo, v4);
    byte_4A2E3E1 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E623B4 *)Method_DataManager_GetMaster_BattleBgMaster___);
  PriorityBattleBgId = QuestPhaseEntity__GetPriorityBattleBgId(this, v6);
  PriorityBattleBgType = QuestPhaseEntity__GetPriorityBattleBgType(this, v8);
  if ( !Master_object )
    sub_1B7641C(PriorityBattleBgType, v10);
  result = BattleBgMaster__GetBgIndividuality(
             (BattleBgMaster_o *)Master_object,
             PriorityBattleBgId,
             PriorityBattleBgType,
             0LL);
  if ( !result )
  {
    v12 = Method_System_Array_Empty_int___;
    v13 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v13 )
    {
      sub_1BC80F8(Method_System_Array_Empty_int___);
      v13 = v12[7];
    }
    v14 = *(_QWORD *)(v13 + 16);
    if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
      v14 = sub_1BC809C(v14);
    if ( !*(_DWORD *)(v14 + 224) )
      j_il2cpp_runtime_class_init_0(v14);
    v15 = *(_QWORD *)(v12[7] + 16LL);
    if ( (*(_BYTE *)(v15 + 309) & 1) == 0 )
      v15 = sub_1BC809C(v15);
    return **(System_Int32_array ***)(v15 + 184);
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

  if ( (byte_4A2E43A & 1) == 0 )
  {
    sub_1B761C0(&int___TypeInfo, method);
    sub_1B761C0(&StringLiteral_17999/*"clearGiftItemListDisplay"*/, v3);
    byte_4A2E43A = 1;
  }
  v4 = (System_Int32_array *)sub_1B76268(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_17999/*"clearGiftItemListDisplay"*/, v4, v5);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetCondHavingIds(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Int32_array *v4; // x2
  const MethodInfo *v5; // x3

  if ( (byte_4A2E426 & 1) == 0 )
  {
    sub_1B761C0(&int___TypeInfo, method);
    sub_1B761C0(&StringLiteral_18191/*"condHaving"*/, v3);
    byte_4A2E426 = 1;
  }
  v4 = (System_Int32_array *)sub_1B76268(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_18191/*"condHaving"*/, v4, v5);
}


int32_t __fastcall QuestPhaseEntity__GetCondQuestClearable(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A2E45B & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_18194/*"condQuestClearable"*/, method);
    byte_4A2E45B = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_18194/*"condQuestClearable"*/, 0, v2);
}


int32_t __fastcall QuestPhaseEntity__GetCorrectionIconId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A2E41A & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_18265/*"correctionIconId"*/, method);
    byte_4A2E41A = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_18265/*"correctionIconId"*/, -1, v2);
}


int32_t __fastcall QuestPhaseEntity__GetDefenceTargetContinueRecoverRate(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A2E451 & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_19390/*"fieldHpContinueRecoverRate"*/, method);
    byte_4A2E451 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19390/*"fieldHpContinueRecoverRate"*/, 0, v2);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetEnemyInfoDispNpcSvtIdList(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Int32_array *v4; // x2
  const MethodInfo *v5; // x3

  if ( (byte_4A2E438 & 1) == 0 )
  {
    sub_1B761C0(&int___TypeInfo, method);
    sub_1B761C0(&StringLiteral_22378/*"overwriteEnemyInfos"*/, v3);
    byte_4A2E438 = 1;
  }
  v4 = (System_Int32_array *)sub_1B76268(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_22378/*"overwriteEnemyInfos"*/, v4, v5);
}


System_String_array *__fastcall QuestPhaseEntity__GetEnemyInfoOverwriteNpcSvtNameList(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_String_array *v4; // x2
  const MethodInfo *v5; // x3

  if ( (byte_4A2E439 & 1) == 0 )
  {
    sub_1B761C0(&string___TypeInfo, method);
    sub_1B761C0(&StringLiteral_22377/*"overwriteEnemyInfoNames"*/, v3);
    byte_4A2E439 = 1;
  }
  v4 = (System_String_array *)sub_1B76268(string___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptStringArrayParam(this, (System_String_o *)StringLiteral_22377/*"overwriteEnemyInfoNames"*/, v4, v5);
}


int32_t __fastcall QuestPhaseEntity__GetEquipAddId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A2E437 & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_19039/*"equipAddId"*/, method);
    byte_4A2E437 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19039/*"equipAddId"*/, 0, v2);
}


int32_t __fastcall QuestPhaseEntity__GetFinishEffectId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A2E417 & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_19429/*"finishEffectId"*/, method);
    byte_4A2E417 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19429/*"finishEffectId"*/, -1, v2);
}


int32_t __fastcall QuestPhaseEntity__GetFormationBgmId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A2E43E & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_19542/*"formationBgmId"*/, method);
    byte_4A2E43E = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19542/*"formationBgmId"*/, -1, v2);
}


float __fastcall QuestPhaseEntity__GetFormationSubBgmFadeInTime(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A2E440 & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_19543/*"formationSubBgmFadeInTime"*/, method);
    byte_4A2E440 = 1;
  }
  return (float)QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19543/*"formationSubBgmFadeInTime"*/, 0, v2) / 1000.0;
}


int32_t __fastcall QuestPhaseEntity__GetFormationSubBgmId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A2E43F & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_19544/*"formationSubBgmId"*/, method);
    byte_4A2E43F = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19544/*"formationSubBgmId"*/, -1, v2);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetGimmickAnimTypeArray(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A2E415 & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_19811/*"gimmickAnimType"*/, method);
    byte_4A2E415 = 1;
  }
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_19811/*"gimmickAnimType"*/, 0LL, v2);
}


int32_t __fastcall QuestPhaseEntity__GetGimmickId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A2E40E & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_19812/*"gimmickId"*/, method);
    byte_4A2E40E = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19812/*"gimmickId"*/, -1, v2);
}


System_Object_array *__fastcall QuestPhaseEntity__GetGimmickResultVoiceArray(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A2E414 & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_22899/*"resultVoice"*/, method);
    byte_4A2E414 = 1;
  }
  return QuestPhaseEntity__getScriptObjArrayParam(this, (System_String_o *)StringLiteral_22899/*"resultVoice"*/, 0LL, v2);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetGimmickSkillIdArray(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Int32_array *v4; // x2
  const MethodInfo *v5; // x3

  if ( (byte_4A2E411 & 1) == 0 )
  {
    sub_1B761C0(&int___TypeInfo, method);
    sub_1B761C0(&StringLiteral_22813/*"reelSkill"*/, v3);
    byte_4A2E411 = 1;
  }
  v4 = (System_Int32_array *)sub_1B76268(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_22813/*"reelSkill"*/, v4, v5);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetGimmickSkillRateArray(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Int32_array *v4; // x2
  const MethodInfo *v5; // x3

  if ( (byte_4A2E412 & 1) == 0 )
  {
    sub_1B761C0(&int___TypeInfo, method);
    sub_1B761C0(&StringLiteral_22812/*"reelRate"*/, v3);
    byte_4A2E412 = 1;
  }
  v4 = (System_Int32_array *)sub_1B76268(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_22812/*"reelRate"*/, v4, v5);
}


System_String_array *__fastcall QuestPhaseEntity__GetGimmickStartVoiceArray(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A2E413 & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_23487/*"startVoice"*/, method);
    byte_4A2E413 = 1;
  }
  return QuestPhaseEntity__getScriptStringArrayParam(this, (System_String_o *)StringLiteral_23487/*"startVoice"*/, 0LL, v2);
}


int32_t __fastcall QuestPhaseEntity__GetGimmickSvtId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A2E40F & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_19813/*"gimmickSvtId"*/, method);
    byte_4A2E40F = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19813/*"gimmickSvtId"*/, -1, v2);
}


int32_t __fastcall QuestPhaseEntity__GetIconItemNumberDispType(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A2E456 & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_20075/*"iconItemNumberDispType"*/, method);
    byte_4A2E456 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20075/*"iconItemNumberDispType"*/, 0, v2);
}


float __fastcall QuestPhaseEntity__GetIncomingCallDispTime(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A2E44A & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_20609/*"incomingCallDispTime"*/, method);
    byte_4A2E44A = 1;
  }
  return (float)QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20609/*"incomingCallDispTime"*/, 500, v2) / 1000.0;
}


System_String_o *__fastcall QuestPhaseEntity__GetIncomingCallMessage(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1

  if ( (byte_4A2E449 & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_20610/*"incomingCallMessage"*/, method);
    sub_1B761C0(&StringLiteral_1/*""*/, v4);
    byte_4A2E449 = 1;
  }
  return QuestPhaseEntity__getScriptStr(
           this,
           (System_String_o *)StringLiteral_20610/*"incomingCallMessage"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


System_String_o *__fastcall QuestPhaseEntity__GetIncomingCallTitle(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1

  if ( (byte_4A2E448 & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_20611/*"incomingCallTitle"*/, method);
    sub_1B761C0(&StringLiteral_1/*""*/, v4);
    byte_4A2E448 = 1;
  }
  return QuestPhaseEntity__getScriptStr(
           this,
           (System_String_o *)StringLiteral_20611/*"incomingCallTitle"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


System_String_o *__fastcall QuestPhaseEntity__GetMapModelEntryAnimationName(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1

  if ( (byte_4A2E444 & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_1489/*"3dMapEntryAnimName"*/, method);
    sub_1B761C0(&StringLiteral_1/*""*/, v4);
    byte_4A2E444 = 1;
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

  if ( (byte_4A2E420 & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_21305/*"masterSkillDelay"*/, method);
    byte_4A2E420 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21305/*"masterSkillDelay"*/, 0, v2);
}


System_String_o *__fastcall QuestPhaseEntity__GetMasterSkillDelayInfo(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A2E421 & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_21306/*"masterSkillDelayInfo"*/, method);
    byte_4A2E421 = 1;
  }
  return QuestPhaseEntity__getScriptStr(this, (System_String_o *)StringLiteral_21306/*"masterSkillDelayInfo"*/, 0LL, v2);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetMoveSceneInfo(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Int32_array *v4; // x2
  const MethodInfo *v5; // x3

  if ( (byte_4A2E44C & 1) == 0 )
  {
    sub_1B761C0(&int___TypeInfo, method);
    sub_1B761C0(&StringLiteral_21513/*"moveSceneInfo"*/, v3);
    byte_4A2E44C = 1;
  }
  v4 = (System_Int32_array *)sub_1B76268(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_21513/*"moveSceneInfo"*/, v4, v5);
}


int32_t __fastcall QuestPhaseEntity__GetMovieAfterCrossFadeStartFrame(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A2E409 & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_21518/*"movieAfterCrossFadeStartFrame"*/, method);
    byte_4A2E409 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21518/*"movieAfterCrossFadeStartFrame"*/, 0, v2);
}


int32_t __fastcall QuestPhaseEntity__GetMovieAfterCrossFadeTime(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A2E408 & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_21519/*"movieAfterCrossFadeTime"*/, method);
    byte_4A2E408 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21519/*"movieAfterCrossFadeTime"*/, 0, v2);
}


int32_t __fastcall QuestPhaseEntity__GetNextSceneId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A2E424 & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_22041/*"nextSceneId"*/, method);
    byte_4A2E424 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22041/*"nextSceneId"*/, 0, v2);
}


System_String_array *__fastcall QuestPhaseEntity__GetNextSceneParam(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  System_String_array *result; // x0

  if ( (byte_4A2E425 & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_22042/*"nextSceneParam"*/, method);
    byte_4A2E425 = 1;
  }
  result = (System_String_array *)QuestPhaseEntity__getScriptStr(this, (System_String_o *)StringLiteral_22042/*"nextSceneParam"*/, 0LL, v2);
  if ( result )
    return System_String__Split((System_String_o *)result, 0x2Cu, 0, 0LL);
  return result;
}


int32_t __fastcall QuestPhaseEntity__GetNotDispEquipSkillChargeTurn(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A2E455 & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_22132/*"notDispEquipSkillChargeTurn"*/, method);
    byte_4A2E455 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22132/*"notDispEquipSkillChargeTurn"*/, 0, v2);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetNotHavingQuests(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Int32_array *v4; // x2
  const MethodInfo *v5; // x3

  if ( (byte_4A2E427 & 1) == 0 )
  {
    sub_1B761C0(&int___TypeInfo, method);
    sub_1B761C0(&StringLiteral_22136/*"notHavingQuest"*/, v3);
    byte_4A2E427 = 1;
  }
  v4 = (System_Int32_array *)sub_1B76268(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_22136/*"notHavingQuest"*/, v4, v5);
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
  int32_t v16; // w2
  int32_t v17; // w3
  System_Collections_Generic_Dictionary_int__int____o **v18; // x20
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  Il2CppObject *v20; // x22
  __int64 methodPtr_low; // x10
  const MethodInfo *v22; // x2
  System_Action_object__o *v24; // x19
  Il2CppObject *obj; // [xsp+0h] [xbp-40h] BYREF
  Il2CppObject *value; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A2E435 & 1) == 0 )
  {
    sub_1B761C0(&System_Action_object__TypeInfo, method);
    sub_1B761C0(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v3);
    sub_1B761C0(&Method_System_Collections_Generic_Dictionary_int__int_____ctor__, v4);
    sub_1B761C0(&System_Collections_Generic_Dictionary_int__int____TypeInfo, v5);
    sub_1B761C0(&Method_System_Collections_Generic_List_object__ForEach__, v6);
    sub_1B761C0(&System_Collections_Generic_List_object__TypeInfo, v7);
    sub_1B761C0(&Method_QuestPhaseEntity___c__DisplayClass113_0__GetNpcAiInfo_b__0__, v8);
    sub_1B761C0(&QuestPhaseEntity___c__DisplayClass113_0_TypeInfo, v9);
    sub_1B761C0(&StringLiteral_16712/*"aiMultiNpc"*/, v10);
    sub_1B761C0(&StringLiteral_16713/*"aiNpc"*/, v11);
    byte_4A2E435 = 1;
  }
  obj = 0LL;
  value = 0LL;
  v12 = sub_1B7640C(QuestPhaseEntity___c__DisplayClass113_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  v13 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B7640C(System_Collections_Generic_Dictionary_int__int____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v13,
    (const MethodInfo_314EEA0 *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  if ( !v12 )
    goto LABEL_14;
  *(_QWORD *)(v12 + 16) = v13;
  v18 = (System_Collections_Generic_Dictionary_int__int____o **)(v12 + 16);
  sub_1B76164((ServantStatusBattleListViewItem_o *)(v12 + 16), (int32_t)v13, v16, v17);
  script = this->fields.script;
  if ( !script )
    return *v18;
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)script,
         (Il2CppObject *)StringLiteral_16712/*"aiMultiNpc"*/,
         &value,
         (const MethodInfo_31A753C *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    v20 = value;
    if ( value )
    {
      methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(value->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
        && (System_Collections_Generic_List_object__c *)value->klass->_2.typeHierarchy[methodPtr_low - 1] == System_Collections_Generic_List_object__TypeInfo )
      {
        v24 = (System_Action_object__o *)sub_1B7640C(System_Action_object__TypeInfo);
        System_Action_object____ctor(
          v24,
          (Il2CppObject *)v12,
          Method_QuestPhaseEntity___c__DisplayClass113_0__GetNpcAiInfo_b__0__,
          0LL);
        System_Collections_Generic_List_object___ForEach(
          (System_Collections_Generic_List_object__o *)v20,
          (System_Action_T__o *)v24,
          (const MethodInfo_34D8014 *)Method_System_Collections_Generic_List_object__ForEach__);
        return *v18;
      }
    }
  }
  v14 = this->fields.script;
  if ( !v14 )
LABEL_14:
    sub_1B7641C(v14, v15);
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)v14,
         (Il2CppObject *)StringLiteral_16713/*"aiNpc"*/,
         &obj,
         (const MethodInfo_31A753C *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    QuestPhaseEntity__SetNpcAiInfo((System_Collections_Generic_IDictionary_int__int____o *)*v18, obj, v22);
  }
  return *v18;
}


int32_t __fastcall QuestPhaseEntity__GetOverWriteMasterImageId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A2E406 & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_21295/*"masterImageId"*/, method);
    byte_4A2E406 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21295/*"masterImageId"*/, 0, v2);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall QuestPhaseEntity__GetOverwriteCommandSpellContinue(
        QuestPhaseEntity_o *this,
        int32_t def,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4A2E42F & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_22369/*"overwriteCommandSpellContinue"*/, *(_QWORD *)&def);
    byte_4A2E42F = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22369/*"overwriteCommandSpellContinue"*/, def, v3);
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

  if ( (byte_4A2E442 & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_22370/*"overwriteCommandSpellIcons"*/, *(_QWORD *)&genderType);
    byte_4A2E442 = 1;
  }
  ScriptIntArrayParam = QuestPhaseEntity__getScriptIntArrayParam(
                          this,
                          (System_String_o *)StringLiteral_22370/*"overwriteCommandSpellIcons"*/,
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
    sub_1B76424(ScriptIntArrayParam, v8);
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

  if ( (byte_4A2E3EB & 1) == 0 )
  {
    sub_1B761C0(&System_Collections_Generic_Dictionary_string__object__TypeInfo, method);
    sub_1B761C0(&StringLiteral_22380/*"overwriteEquipSkills"*/, v4);
    byte_4A2E3EB = 1;
  }
  result = (System_Collections_Generic_Dictionary_string__object__o *)QuestPhaseEntity__getScriptObj(
                                                                        this,
                                                                        (System_String_o *)StringLiteral_22380/*"overwriteEquipSkills"*/,
                                                                        v2);
  if ( result )
  {
    methodPtr_low = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (System_Collections_Generic_Dictionary_string__object__c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
    {
      sub_1B766DC(result);
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
  int32_t v12; // w2
  int32_t v13; // w3
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  System_Int32_array *v16; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  const MethodInfo *v19; // x3
  System_Int32_array *v20; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  int32_t v24; // w2
  int32_t v25; // w3

  if ( (byte_4A2E41C & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_22384/*"overwriteLimitCountSvtIds"*/, overwriteLimitCountSvtIds);
    sub_1B761C0(&StringLiteral_22385/*"overwriteLimitCounts"*/, v9);
    sub_1B761C0(&StringLiteral_22383/*"overwriteLimitCountIconIds"*/, v10);
    byte_4A2E41C = 1;
  }
  ScriptIntArrayParam = QuestPhaseEntity__getScriptIntArrayParam(
                          this,
                          (System_String_o *)StringLiteral_22384/*"overwriteLimitCountSvtIds"*/,
                          0LL,
                          (const MethodInfo *)overwriteLimitCountIconIds);
  *overwriteLimitCountSvtIds = ScriptIntArrayParam;
  sub_1B76164((ServantStatusBattleListViewItem_o *)overwriteLimitCountSvtIds, (int32_t)ScriptIntArrayParam, v12, v13);
  if ( *overwriteLimitCountSvtIds )
  {
    v16 = QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_22385/*"overwriteLimitCounts"*/, 0LL, v15);
    *overwriteLimitCounts = v16;
    sub_1B76164((ServantStatusBattleListViewItem_o *)overwriteLimitCounts, (int32_t)v16, v17, v18);
    v20 = QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_22383/*"overwriteLimitCountIconIds"*/, 0LL, v19);
    *overwriteLimitCountIconIds = v20;
    sub_1B76164((ServantStatusBattleListViewItem_o *)overwriteLimitCountIconIds, (int32_t)v20, v21, v22);
    return *overwriteLimitCounts != 0LL;
  }
  else
  {
    *overwriteLimitCounts = 0LL;
    sub_1B76164((ServantStatusBattleListViewItem_o *)overwriteLimitCounts, 0, v14, (int32_t)v15);
    *overwriteLimitCountIconIds = 0LL;
    sub_1B76164((ServantStatusBattleListViewItem_o *)overwriteLimitCountIconIds, 0, v24, v25);
    return 0;
  }
}


System_Int32_array *__fastcall QuestPhaseEntity__GetOverwriteResultBgmCondIds(
        QuestPhaseEntity_o *this,
        System_Int32_array *defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4A2E3EF & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_22393/*"overwriteResultBgmCondIds"*/, defVal);
    byte_4A2E3EF = 1;
  }
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_22393/*"overwriteResultBgmCondIds"*/, defVal, v3);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetOverwriteResultBgmIds(
        QuestPhaseEntity_o *this,
        System_Int32_array *defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4A2E3EE & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_22394/*"overwriteResultBgmIds"*/, defVal);
    byte_4A2E3EE = 1;
  }
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_22394/*"overwriteResultBgmIds"*/, defVal, v3);
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

  if ( (byte_4A2E3DF & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Array_Empty_int___, method);
    byte_4A2E3DF = 1;
  }
  result = QuestPhaseEntity__GetPrioredIndividualityLocal(this, method);
  if ( !result )
  {
    v4 = Method_System_Array_Empty_int___;
    v5 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v5 )
    {
      sub_1BC80F8(Method_System_Array_Empty_int___);
      v5 = v4[7];
    }
    v6 = *(_QWORD *)(v5 + 16);
    if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
      v6 = sub_1BC809C(v6);
    if ( !*(_DWORD *)(v6 + 224) )
      j_il2cpp_runtime_class_init_0(v6);
    v7 = *(_QWORD *)(v4[7] + 16LL);
    if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
      v7 = sub_1BC809C(v7);
    return **(System_Int32_array ***)(v7 + 184);
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

  if ( (byte_4A2E3E0 & 1) == 0 )
  {
    sub_1B761C0(&Method_DataManager_GetMaster_QuestBehaviorMaster___, method);
    sub_1B761C0(&Method_DataManager_GetMaster_QuestPhaseIndividualityMaster___, v3);
    sub_1B761C0(&DataManager_TypeInfo, v4);
    byte_4A2E3E0 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E623B4 *)Method_DataManager_GetMaster_QuestBehaviorMaster___);
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
    UniqueId = (System_Int32_array *)DataManager__GetMaster_object_((const MethodInfo_2E623B4 *)Method_DataManager_GetMaster_QuestPhaseIndividualityMaster___);
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
      sub_1B7641C(UniqueId, v8);
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

  if ( (byte_4A2E3E2 & 1) == 0 )
  {
    sub_1B761C0(&Method_DataManager_GetMaster_QuestBehaviorMaster___, method);
    sub_1B761C0(&DataManager_TypeInfo, v3);
    byte_4A2E3E2 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E623B4 *)Method_DataManager_GetMaster_QuestBehaviorMaster___);
  UniqueId = QuestPhaseEntity__GetUniqueId(this, v5);
  if ( !Master_object )
    sub_1B7641C(UniqueId, v7);
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

  if ( (byte_4A2E3E3 & 1) == 0 )
  {
    sub_1B761C0(&Method_DataManager_GetMaster_QuestBehaviorMaster___, method);
    sub_1B761C0(&DataManager_TypeInfo, v3);
    byte_4A2E3E3 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E623B4 *)Method_DataManager_GetMaster_QuestBehaviorMaster___);
  UniqueId = QuestPhaseEntity__GetUniqueId(this, v5);
  if ( !Master_object )
    sub_1B7641C(UniqueId, v7);
  return QuestBehaviorMaster__GetBattleBgType(
           (QuestBehaviorMaster_o *)Master_object,
           UniqueId,
           this->fields.battleBgType,
           v8);
}


int32_t __fastcall QuestPhaseEntity__GetProgressAfterMovie(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A2E404 & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_22610/*"progressAfterMovie"*/, method);
    byte_4A2E404 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22610/*"progressAfterMovie"*/, 0, v2);
}


int32_t __fastcall QuestPhaseEntity__GetQuestPhaseSelectRoute(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1
  int32_t ScriptIntParam; // w0
  int32_t v6; // w19
  Il2CppObject *Instance; // x0
  __int64 v8; // x1

  if ( (byte_4A2E3F9 & 1) == 0 )
  {
    sub_1B761C0(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, method);
    sub_1B761C0(&StringLiteral_22506/*"phaseRouteSelect"*/, v4);
    byte_4A2E3F9 = 1;
  }
  ScriptIntParam = QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22506/*"phaseRouteSelect"*/, 0, v2);
  if ( ScriptIntParam < 1 )
    return 0;
  v6 = ScriptIntParam;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_371299C *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Instance )
    sub_1B7641C(0LL, v8);
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

  if ( (byte_4A2E410 & 1) == 0 )
  {
    sub_1B761C0(&int___TypeInfo, method);
    sub_1B761C0(&StringLiteral_22811/*"reelIcon"*/, v3);
    byte_4A2E410 = 1;
  }
  v4 = (System_Int32_array *)sub_1B76268(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_22811/*"reelIcon"*/, v4, v5);
}


int32_t __fastcall QuestPhaseEntity__GetReferToQuestPhase(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A2E45C & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_22817/*"referToQuestPhase"*/, method);
    byte_4A2E45C = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22817/*"referToQuestPhase"*/, 0, v2);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetSelectableQuests(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A2E3F8 & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_22683/*"questSelect"*/, method);
    byte_4A2E3F8 = 1;
  }
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_22683/*"questSelect"*/, 0LL, v2);
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
      sub_1B76424(SelectableQuests, v8);
    return SelectableQuests->m_Items[selectIndex + 1];
  }
  return result;
}


System_Int32_array *__fastcall QuestPhaseEntity__GetShadowOffSvtIds(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Int32_array *v4; // x2
  const MethodInfo *v5; // x3

  if ( (byte_4A2E41F & 1) == 0 )
  {
    sub_1B761C0(&int___TypeInfo, method);
    sub_1B761C0(&StringLiteral_23236/*"shadowOffSvtIds"*/, v3);
    byte_4A2E41F = 1;
  }
  v4 = (System_Int32_array *)sub_1B76268(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_23236/*"shadowOffSvtIds"*/, v4, v5);
}


int32_t __fastcall QuestPhaseEntity__GetSingleForceSvtId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A2E41D & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_23321/*"singleForceSvtId"*/, method);
    byte_4A2E41D = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_23321/*"singleForceSvtId"*/, 0, v2);
}


int32_t __fastcall QuestPhaseEntity__GetStartBattleSoundMode(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A2E45A & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_12944/*"StartBattleSoundMode"*/, method);
    byte_4A2E45A = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_12944/*"StartBattleSoundMode"*/, 0, v2);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetStartMovieWave(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A2E405 & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_21523/*"movieWave"*/, method);
    byte_4A2E405 = 1;
  }
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_21523/*"movieWave"*/, 0LL, v2);
}


int32_t __fastcall QuestPhaseEntity__GetStartScreenEffect(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A2E459 & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_12943/*"StartBattleScreenEffect"*/, method);
    byte_4A2E459 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_12943/*"StartBattleScreenEffect"*/, 0, v2);
}


int32_t __fastcall QuestPhaseEntity__GetSupportInitDeckIndex(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A2E430 & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_19124/*"eventDeckIndex"*/, method);
    byte_4A2E430 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19124/*"eventDeckIndex"*/, 0, v2);
}


int32_t __fastcall QuestPhaseEntity__GetTemporaryCommandSpell(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A2E42D & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_23873/*"temporaryCommandSpell"*/, method);
    byte_4A2E42D = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_23873/*"temporaryCommandSpell"*/, -1, v2);
}


int64_t __fastcall QuestPhaseEntity__GetUniqueId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  int32_t phase; // w19
  int32_t questId; // w20

  if ( (byte_4A2E3DE & 1) == 0 )
  {
    sub_1B761C0(&BattleDataDefine_TypeInfo, method);
    byte_4A2E3DE = 1;
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

  if ( (byte_4A2E41E & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_24343/*"useEventDeckNo"*/, method);
    byte_4A2E41E = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_24343/*"useEventDeckNo"*/, 1, v2);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetVoiceOffPlayerSvtIdArray(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A2E441 & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_24575/*"voiceOffMySvtIds"*/, method);
    byte_4A2E441 = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_24575/*"voiceOffMySvtIds"*/, 0LL);
}


System_String_o *__fastcall QuestPhaseEntity__GetWarBoardStartMovieName(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1

  if ( (byte_4A2E43B & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_15587/*"WarBoardStartMovieName"*/, method);
    sub_1B761C0(&StringLiteral_1/*""*/, v4);
    byte_4A2E43B = 1;
  }
  return QuestPhaseEntity__getScriptStr(
           this,
           (System_String_o *)StringLiteral_15587/*"WarBoardStartMovieName"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


System_String_array *__fastcall QuestPhaseEntity__GetWaveStartMovie(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A2E403 & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_24655/*"waveStartMovie"*/, method);
    byte_4A2E403 = 1;
  }
  return QuestPhaseEntity__getScriptStringArrayParam(this, (System_String_o *)StringLiteral_24655/*"waveStartMovie"*/, 0LL, v2);
}


int32_t __fastcall QuestPhaseEntity__GetWinBgmOffFlg(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A2E418 & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_18994/*"endBgmOff"*/, method);
    byte_4A2E418 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_18994/*"endBgmOff"*/, 0, v2);
}


int32_t __fastcall QuestPhaseEntity__GetWinVoiceOffFlg(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A2E416 & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_19008/*"endVoiceOff"*/, method);
    byte_4A2E416 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19008/*"endVoiceOff"*/, 0, v2);
}


bool __fastcall QuestPhaseEntity__HasReleaseFocusQuestBoardKey(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A2E452 & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_20804/*"isReleaseFocus"*/, method);
    byte_4A2E452 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_20804/*"isReleaseFocus"*/, 0LL);
}


bool __fastcall QuestPhaseEntity__IsActiveAssistSkill(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Int32_array *v4; // x0
  const MethodInfo *v5; // x3
  System_Int32_array *ScriptIntArrayParam; // x0
  __int64 v7; // x1

  if ( (byte_4A2E429 & 1) == 0 )
  {
    sub_1B761C0(&int___TypeInfo, method);
    sub_1B761C0(&StringLiteral_16934/*"assistIds"*/, v3);
    byte_4A2E429 = 1;
  }
  v4 = (System_Int32_array *)sub_1B76268(int___TypeInfo, 0LL);
  ScriptIntArrayParam = QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_16934/*"assistIds"*/, v4, v5);
  if ( !ScriptIntArrayParam )
    sub_1B7641C(0LL, v7);
  return ScriptIntArrayParam->max_length != 0;
}


bool __fastcall QuestPhaseEntity__IsAreaImporveQuest(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4A2E43C & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_16880/*"areaImprovementQuest"*/, method);
    byte_4A2E43C = 1;
  }
  return QuestPhaseEntity__getScriptObj(this, (System_String_o *)StringLiteral_16880/*"areaImprovementQuest"*/, v2) != 0LL;
}


bool __fastcall QuestPhaseEntity__IsContinueWaveRestart(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A2E450 & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_18241/*"continueWaveRestart"*/, method);
    byte_4A2E450 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_18241/*"continueWaveRestart"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__IsFadeOutMainBgmBeforeBattle(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A2E45D & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_19362/*"fadeOutMainBgmBeforeBattle"*/, method);
    byte_4A2E45D = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_19362/*"fadeOutMainBgmBeforeBattle"*/, 0LL);
}


bool __fastcall QuestPhaseEntity__IsHideAssistConfButton(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A2E42C & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_19909/*"hideAssistConfButton"*/, method);
    byte_4A2E42C = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19909/*"hideAssistConfButton"*/, 0, v2) != 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestPhaseEntity__IsHideBattlePointGauge(
        QuestPhaseEntity_o *this,
        int32_t battlePointId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_IEnumerable_TSource__o *IntArray; // x0

  if ( (byte_4A2E462 & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Linq_Enumerable_Contains_int___, *(_QWORD *)&battlePointId);
    sub_1B761C0(&StringLiteral_7242/*"HideBattlePointGauge"*/, v5);
    byte_4A2E462 = 1;
  }
  IntArray = (System_Collections_Generic_IEnumerable_TSource__o *)EntityScriptUtil__GetIntArray(
                                                                    this->fields.script,
                                                                    (System_String_o *)StringLiteral_7242/*"HideBattlePointGauge"*/,
                                                                    0LL,
                                                                    0LL);
  if ( IntArray )
    LOBYTE(IntArray) = System_Linq_Enumerable__Contains_int_(
                         IntArray,
                         battlePointId,
                         (const MethodInfo_2E7C514 *)Method_System_Linq_Enumerable_Contains_int___);
  return (char)IntArray;
}


bool __fastcall QuestPhaseEntity__IsIgnoreBattleLoseDialog(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A2E3FD & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_20218/*"ignoreBattleLoseDialog"*/, method);
    byte_4A2E3FD = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_20218/*"ignoreBattleLoseDialog"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestPhaseEntity__IsIgnoreBattlePointUp(
        QuestPhaseEntity_o *this,
        int32_t battlePointId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_IEnumerable_TSource__o *IntArray; // x0

  if ( (byte_4A2E460 & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Linq_Enumerable_Contains_int___, *(_QWORD *)&battlePointId);
    sub_1B761C0(&StringLiteral_7457/*"IgnoreBattlePointUp"*/, v5);
    byte_4A2E460 = 1;
  }
  IntArray = (System_Collections_Generic_IEnumerable_TSource__o *)EntityScriptUtil__GetIntArray(
                                                                    this->fields.script,
                                                                    (System_String_o *)StringLiteral_7457/*"IgnoreBattlePointUp"*/,
                                                                    0LL,
                                                                    0LL);
  if ( IntArray )
    LOBYTE(IntArray) = System_Linq_Enumerable__Contains_int_(
                         IntArray,
                         battlePointId,
                         (const MethodInfo_2E7C514 *)Method_System_Linq_Enumerable_Contains_int___);
  return (char)IntArray;
}


bool __fastcall QuestPhaseEntity__IsInterruptionQuest(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A2E458 & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_20695/*"interruptibleQuest"*/, method);
    byte_4A2E458 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20695/*"interruptibleQuest"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__IsInvisibleConnectAndLoad(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A2E423 & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_20737/*"invisibleConnectAndLoad"*/, method);
    byte_4A2E423 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20737/*"invisibleConnectAndLoad"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__IsKeepSubBgmAfterBattleResult(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A2E419 & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_20970/*"keepSubBgmUntilBattleResult"*/, method);
    byte_4A2E419 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_20970/*"keepSubBgmUntilBattleResult"*/, 0LL);
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

  if ( (byte_4A2E422 & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Array_FindAll_int___, individualitys);
    sub_1B761C0(&Method_System_Collections_Generic_HashSet_int___ctor___75834376, v5);
    sub_1B761C0(&System_Collections_Generic_HashSet_int__TypeInfo, v6);
    sub_1B761C0(&System_Predicate_int__TypeInfo, v7);
    byte_4A2E422 = 1;
  }
  PrioredIndividuality = (System_Collections_Generic_IEnumerable_T__o *)QuestPhaseEntity__GetPrioredIndividuality(
                                                                          this,
                                                                          (const MethodInfo *)individualitys);
  v9 = (System_Collections_Generic_HashSet_int__o *)sub_1B7640C(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor_54066152(
    v9,
    PrioredIndividuality,
    (const MethodInfo_338FBE8 *)Method_System_Collections_Generic_HashSet_int___ctor___75834376);
  All_int = (System_Predicate_int__o *)sub_1B7640C(System_Predicate_int__TypeInfo);
  if ( !v9
    || (v12 = (System_Predicate_T__o *)All_int,
        System_Predicate_int____ctor(All_int, (Il2CppObject *)v9, (intptr_t)v9->klass->vtable._9_CopyTo.methodPtr, 0LL),
        (All_int = (System_Predicate_int__o *)System_Array__FindAll_int_(
                                                individualitys,
                                                v12,
                                                (const MethodInfo_2F5AEE4 *)Method_System_Array_FindAll_int___)) == 0LL) )
  {
    sub_1B7641C(All_int, v11);
  }
  return All_int->fields.m_target != 0LL;
}


bool __fastcall QuestPhaseEntity__IsNonStopEndBgm(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A2E3FA & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_22101/*"nonStopEndBgm"*/, method);
    byte_4A2E3FA = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22101/*"nonStopEndBgm"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__IsNotClassBoard(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A2E44D & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_22130/*"notClassBoard"*/, method);
    byte_4A2E44D = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22130/*"notClassBoard"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__IsNotResetResultDispFlag(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A2E407 & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_22138/*"notResetResultDispFlag"*/, method);
    byte_4A2E407 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22138/*"notResetResultDispFlag"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__IsNotUseRestrictionDialog(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A2E44E & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_22139/*"notUseRestrictionDialog"*/, method);
    byte_4A2E44E = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22139/*"notUseRestrictionDialog"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__IsPlayScriptBeforeForWarBoard(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A2E428 & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_20808/*"isScriptPlayForWarBoard"*/, method);
    byte_4A2E428 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20808/*"isScriptPlayForWarBoard"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__IsReleaseFocusQuestBoard(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A2E453 & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_20804/*"isReleaseFocus"*/, method);
    byte_4A2E453 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20804/*"isReleaseFocus"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__IsRepeatReward(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A2E44B & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_22862/*"repeatReward"*/, method);
    byte_4A2E44B = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22862/*"repeatReward"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__IsReverseMyDeckSvtPosition(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A2E45E & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_22910/*"reverseMyDeckSvtPosition"*/, method);
    byte_4A2E45E = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_22910/*"reverseMyDeckSvtPosition"*/, 0LL);
}


bool __fastcall QuestPhaseEntity__IsSkipBattleFinish(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A2E445 & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_23342/*"skipBattleFinish"*/, method);
    byte_4A2E445 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_23342/*"skipBattleFinish"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__IsUseTemporaryCommandSpell(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A2E42E & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_24349/*"useTemporaryCommandSpell"*/, method);
    byte_4A2E42E = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_24349/*"useTemporaryCommandSpell"*/, -1, v2) == 1;
}


bool __fastcall QuestPhaseEntity__IsWaveCountInfinity(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A2E443 & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_24652/*"waveCountInfinity"*/, method);
    byte_4A2E443 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_24652/*"waveCountInfinity"*/, -1, v2) != -1;
}


bool __fastcall QuestPhaseEntity__IsWaveSetup(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A2E44F & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_24654/*"waveSetup"*/, method);
    byte_4A2E44F = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_24654/*"waveSetup"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__PlayHappinessCounterEffect(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A2E461 & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_10649/*"PlayHappinessCounterEffect"*/, method);
    byte_4A2E461 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_10649/*"PlayHappinessCounterEffect"*/, 0LL);
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
  int32_t v25; // w2
  int32_t v26; // w3
  System_Collections_Generic_List_int__o *v27; // x0
  __int64 v28; // x1
  System_Collections_Generic_IDictionary_int__int____c *klass; // x8
  System_Collections_Generic_List_int__o *v30; // x21
  __int64 v31; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0

  if ( (byte_4A2E436 & 1) == 0 )
  {
    sub_1B761C0(&Method_BasicHelper_GetValue_long___, obj);
    sub_1B761C0(&Method_BasicHelper_GetValue_List_object____, v5);
    sub_1B761C0(&System_Converter_object__int__TypeInfo, v6);
    sub_1B761C0(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v7);
    sub_1B761C0(&System_Collections_Generic_IDictionary_int__int____TypeInfo, v8);
    sub_1B761C0(&Method_System_Collections_Generic_List_object__ConvertAll_int___, v9);
    sub_1B761C0(&Method_System_Collections_Generic_List_int__ToArray__, v10);
    sub_1B761C0(&Method_QuestPhaseEntity___c__SetNpcAiInfo_b__114_0__, v11);
    sub_1B761C0(&QuestPhaseEntity___c_TypeInfo, v12);
    sub_1B761C0(&StringLiteral_16711/*"aiIds"*/, v13);
    sub_1B761C0(&StringLiteral_22155/*"npcId"*/, v14);
    byte_4A2E436 = 1;
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
                       (System_String_o *)StringLiteral_22155/*"npcId"*/,
                       0LL,
                       (const MethodInfo_2E5067C *)Method_BasicHelper_GetValue_long___);
        Value_object = BasicHelper__GetValue_object_(
                         v17,
                         (System_String_o *)StringLiteral_16711/*"aiIds"*/,
                         0LL,
                         (const MethodInfo_2E50768 *)Method_BasicHelper_GetValue_List_object____);
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
              _9__114_0 = (System_Converter_object__int__o *)sub_1B7640C(System_Converter_object__int__TypeInfo);
              System_Converter_object__int____ctor(
                _9__114_0,
                v23,
                Method_QuestPhaseEntity___c__SetNpcAiInfo_b__114_0__,
                0LL);
              static_fields = QuestPhaseEntity___c_TypeInfo->static_fields;
              static_fields->__9__114_0 = _9__114_0;
              sub_1B76164((ServantStatusBattleListViewItem_o *)&static_fields->__9__114_0, (int32_t)_9__114_0, v25, v26);
            }
            v27 = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_object___ConvertAll_int_(
                                                              v20,
                                                              (System_Converter_T__TOutput__o *)_9__114_0,
                                                              (const MethodInfo_2D97794 *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
            if ( !v27
              || (v27 = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_int___ToArray(
                                                                    v27,
                                                                    (const MethodInfo_34BC068 *)Method_System_Collections_Generic_List_int__ToArray__),
                  !dicNpcAiId) )
            {
              sub_1B7641C(v27, v28);
            }
            klass = dicNpcAiId->klass;
            v30 = v27;
            v31 = *(unsigned __int16 *)(&dicNpcAiId->klass->_2.bitflags2 + 3);
            if ( *(_WORD *)(&dicNpcAiId->klass->_2.bitflags2 + 3) )
            {
              p_offset = &klass->_1.interfaceOffsets->offset;
              while ( *((System_Collections_Generic_IDictionary_int__int____c **)p_offset - 1) != System_Collections_Generic_IDictionary_int__int____TypeInfo )
              {
                --v31;
                p_offset += 4;
                if ( !v31 )
                  goto LABEL_24;
              }
              p_method = (__int64)&klass->vtable[*p_offset + 1].method;
            }
            else
            {
LABEL_24:
              p_method = sub_1BC81A0(dicNpcAiId, System_Collections_Generic_IDictionary_int__int____TypeInfo, 1LL);
            }
            (*(void (__fastcall **)(System_Collections_Generic_IDictionary_int__int____o *, _QWORD, System_Collections_Generic_List_int__o *, _QWORD))p_method)(
              dicNpcAiId,
              (unsigned int)Value_long,
              v30,
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

  if ( (byte_4A2E3F3 & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_17100/*"battleEffectId"*/, *(_QWORD *)&defVal);
    byte_4A2E3F3 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_17100/*"battleEffectId"*/, defVal, v3);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall QuestPhaseEntity__getBattleFieldMotionId(
        QuestPhaseEntity_o *this,
        int32_t defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4A2E3F5 & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_19398/*"fieldMotionId"*/, *(_QWORD *)&defVal);
    byte_4A2E3F5 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19398/*"fieldMotionId"*/, defVal, v3);
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

  if ( (byte_4A2E3F6 & 1) == 0 )
  {
    sub_1B761C0(&int___TypeInfo, defVals);
    sub_1B761C0(&StringLiteral_19399/*"fieldMotionIds"*/, v6);
    byte_4A2E3F6 = 1;
  }
  result = QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_19399/*"fieldMotionIds"*/, defVals, v3);
  if ( !result )
    goto LABEL_10;
  if ( *(_QWORD *)&result->max_length )
    return result;
  BattleFieldMotionId = QuestPhaseEntity__getBattleFieldMotionId(this, -1, v9);
  result = defVals;
  if ( BattleFieldMotionId == -1 )
    return result;
  result = (System_Int32_array *)sub_1B76268(int___TypeInfo, 1LL);
  if ( !result )
LABEL_10:
    sub_1B7641C(result, v8);
  if ( !result->max_length )
    sub_1B76424(result, v8);
  result->m_Items[1] = BattleFieldMotionId;
  return result;
}


int32_t __fastcall QuestPhaseEntity__getBreakOnBattleWinWaitMSec(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A2E401 & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_17439/*"breakOnBattleWinWaitMSec"*/, method);
    byte_4A2E401 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_17439/*"breakOnBattleWinWaitMSec"*/, 0, v2);
}


System_Int32_array *__fastcall QuestPhaseEntity__getEventGrounpIds(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Int32_array *v4; // x2
  const MethodInfo *v5; // x3

  if ( (byte_4A2E3F7 & 1) == 0 )
  {
    sub_1B761C0(&int___TypeInfo, method);
    sub_1B761C0(&StringLiteral_19125/*"eventGroupId"*/, v3);
    byte_4A2E3F7 = 1;
  }
  v4 = (System_Int32_array *)sub_1B76268(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_19125/*"eventGroupId"*/, v4, v5);
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

  if ( (byte_4A2E433 & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_19926/*"hintLeftIndent"*/, method);
    byte_4A2E433 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19926/*"hintLeftIndent"*/, -1, v2);
}


System_String_o *__fastcall QuestPhaseEntity__getHintMessage(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1

  if ( (byte_4A2E432 & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_19927/*"hintMessage"*/, method);
    sub_1B761C0(&StringLiteral_1/*""*/, v4);
    byte_4A2E432 = 1;
  }
  return QuestPhaseEntity__getScriptStr(
           this,
           (System_String_o *)StringLiteral_19927/*"hintMessage"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


System_String_o *__fastcall QuestPhaseEntity__getHintMessageTitle(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1

  if ( (byte_4A2E431 & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_1/*""*/, method);
    sub_1B761C0(&StringLiteral_19929/*"hintTitle"*/, v4);
    byte_4A2E431 = 1;
  }
  return QuestPhaseEntity__getScriptStr(
           this,
           (System_String_o *)StringLiteral_19929/*"hintTitle"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


int32_t __fastcall QuestPhaseEntity__getHintOpenType(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A2E434 & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_19928/*"hintOpenType"*/, method);
    byte_4A2E434 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19928/*"hintOpenType"*/, 0, v2);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall QuestPhaseEntity__getLeave(QuestPhaseEntity_o *this, int32_t defVal, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4A2E3F2 & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_21059/*"leave"*/, *(_QWORD *)&defVal);
    byte_4A2E3F2 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21059/*"leave"*/, defVal, v3);
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

  if ( (byte_4A2E3ED & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_22894/*"resultBgmId"*/, *(_QWORD *)&defVal);
    byte_4A2E3ED = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22894/*"resultBgmId"*/, defVal, v3);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall QuestPhaseEntity__getResultEffectId(
        QuestPhaseEntity_o *this,
        int32_t defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4A2E3F1 & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_22895/*"resultEffectId"*/, *(_QWORD *)&defVal);
    byte_4A2E3F1 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22895/*"resultEffectId"*/, defVal, v3);
}


System_Int32_array *__fastcall QuestPhaseEntity__getResultEnemyVoiceIds(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Int32_array *v4; // x2
  const MethodInfo *v5; // x3

  if ( (byte_4A2E3FB & 1) == 0 )
  {
    sub_1B761C0(&int___TypeInfo, method);
    sub_1B761C0(&StringLiteral_22896/*"resultEnemyVoiceIds"*/, v3);
    byte_4A2E3FB = 1;
  }
  v4 = (System_Int32_array *)sub_1B76268(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_22896/*"resultEnemyVoiceIds"*/, v4, v5);
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
  int32_t v17; // w2
  int32_t v18; // w3
  System_Collections_Generic_List_int__o *v19; // x0
  __int64 v20; // x1

  if ( (byte_4A2E3E5 & 1) == 0 )
  {
    sub_1B761C0(&System_Converter_object__int__TypeInfo, key);
    sub_1B761C0(&Method_System_Collections_Generic_List_object__ConvertAll_int___, v7);
    sub_1B761C0(&Method_System_Collections_Generic_List_int__ToArray__, v8);
    sub_1B761C0(&Method_QuestPhaseEntity___c__getScriptIntArrayParam_b__31_0__, v9);
    sub_1B761C0(&QuestPhaseEntity___c_TypeInfo, v10);
    byte_4A2E3E5 = 1;
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
    _9__31_0 = (System_Converter_object__int__o *)sub_1B7640C(System_Converter_object__int__TypeInfo);
    System_Converter_object__int____ctor(
      _9__31_0,
      v15,
      Method_QuestPhaseEntity___c__getScriptIntArrayParam_b__31_0__,
      0LL);
    static_fields = QuestPhaseEntity___c_TypeInfo->static_fields;
    static_fields->__9__31_0 = _9__31_0;
    sub_1B76164((ServantStatusBattleListViewItem_o *)&static_fields->__9__31_0, (int32_t)_9__31_0, v17, v18);
  }
  v19 = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_object___ConvertAll_int_(
                                                    v12,
                                                    (System_Converter_T__TOutput__o *)_9__31_0,
                                                    (const MethodInfo_2D97794 *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
  if ( !v19 )
    sub_1B7641C(0LL, v20);
  return System_Collections_Generic_List_int___ToArray(
           v19,
           (const MethodInfo_34BC068 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  if ( (byte_4A2E3E4 & 1) == 0 )
  {
    sub_1B761C0(&long_TypeInfo, key);
    byte_4A2E3E4 = 1;
  }
  ScriptObj = QuestPhaseEntity__getScriptObj(this, key, *(const MethodInfo **)&defVal);
  if ( !ScriptObj )
    return v4;
  if ( ScriptObj->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(ScriptObj, long_TypeInfo, v8, v9);
  sub_1B766DC(ScriptObj);
  return (unsigned int)QuestPhaseEntity__getScriptObj(v11, v12, v13);
}


Il2CppObject *__fastcall QuestPhaseEntity__getScriptObj(
        QuestPhaseEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  Il2CppObject *result; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A2E3E9 & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, key);
    byte_4A2E3E9 = 1;
  }
  result = (Il2CppObject *)this->fields.script;
  if ( result )
  {
    value = 0LL;
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)result,
           (Il2CppObject *)key,
           &value,
           (const MethodInfo_31A753C *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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

  if ( (byte_4A2E3E7 & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Collections_Generic_List_object__ToArray__, key);
    byte_4A2E3E7 = 1;
  }
  ScriptObjListParam = QuestPhaseEntity__getScriptObjListParam(this, key, (const MethodInfo *)defVal);
  if ( ScriptObjListParam )
    return System_Collections_Generic_List_object___ToArray(
             ScriptObjListParam,
             (const MethodInfo_34D912C *)Method_System_Collections_Generic_List_object__ToArray__);
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

  if ( (byte_4A2E3E8 & 1) == 0 )
  {
    sub_1B761C0(&System_Collections_Generic_List_object__TypeInfo, key);
    byte_4A2E3E8 = 1;
  }
  result = (System_Collections_Generic_List_object__o *)QuestPhaseEntity__getScriptObj(this, key, method);
  if ( result )
  {
    methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (System_Collections_Generic_List_object__c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != System_Collections_Generic_List_object__TypeInfo )
    {
      sub_1B766DC(result);
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

  if ( (byte_4A2E3EA & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    sub_1B761C0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    sub_1B761C0(&string_TypeInfo, v8);
    byte_4A2E3EA = 1;
  }
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)key,
          (const MethodInfo_31A5F24 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return defVal;
  }
  v11 = this->fields.script;
  if ( !v11 )
    sub_1B7641C(0LL, v10);
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)v11,
           (Il2CppObject *)key,
           (const MethodInfo_31A5CB0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  defVal = (System_String_o *)Item;
  if ( !Item || (System_String_c *)Item->klass == string_TypeInfo )
    return defVal;
  sub_1B766DC(Item);
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
  int32_t v17; // w2
  int32_t v18; // w3
  System_Collections_Generic_List_object__o *v19; // x0
  __int64 v20; // x1

  if ( (byte_4A2E3E6 & 1) == 0 )
  {
    sub_1B761C0(&System_Converter_object__string__TypeInfo, key);
    sub_1B761C0(&Method_System_Collections_Generic_List_object__ConvertAll_string___, v7);
    sub_1B761C0(&Method_System_Collections_Generic_List_string__ToArray__, v8);
    sub_1B761C0(&Method_QuestPhaseEntity___c__getScriptStringArrayParam_b__32_0__, v9);
    sub_1B761C0(&QuestPhaseEntity___c_TypeInfo, v10);
    byte_4A2E3E6 = 1;
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
    _9__32_0 = (System_Converter_TInput__TOutput__o *)sub_1B7640C(System_Converter_object__string__TypeInfo);
    System_Converter_object__object____ctor(
      _9__32_0,
      v15,
      Method_QuestPhaseEntity___c__getScriptStringArrayParam_b__32_0__,
      0LL);
    static_fields = QuestPhaseEntity___c_TypeInfo->static_fields;
    static_fields->__9__32_0 = (struct System_Converter_object__string__o *)_9__32_0;
    sub_1B76164((ServantStatusBattleListViewItem_o *)&static_fields->__9__32_0, (int32_t)_9__32_0, v17, v18);
  }
  v19 = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___ConvertAll_object_(
                                                       v12,
                                                       (System_Converter_T__TOutput__o *)_9__32_0,
                                                       (const MethodInfo_2D97898 *)Method_System_Collections_Generic_List_object__ConvertAll_string___);
  if ( !v19 )
    sub_1B7641C(0LL, v20);
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  v19,
                                  (const MethodInfo_34D912C *)Method_System_Collections_Generic_List_string__ToArray__);
}


int32_t __fastcall QuestPhaseEntity__getSpecialShadowEffectId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A2E40C & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_19786/*"getSpecialShadowEffectId"*/, method);
    byte_4A2E40C = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19786/*"getSpecialShadowEffectId"*/, 0, v2);
}


int32_t __fastcall QuestPhaseEntity__getTurnSituationType(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A2E40B & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_24081/*"turnSituationType"*/, method);
    byte_4A2E40B = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_24081/*"turnSituationType"*/, 0, v2);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall QuestPhaseEntity__getUniqueCameraId(
        QuestPhaseEntity_o *this,
        int32_t defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4A2E3F4 & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_24166/*"uniqueCameraId"*/, *(_QWORD *)&defVal);
    byte_4A2E3F4 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_24166/*"uniqueCameraId"*/, defVal, v3);
}


bool __fastcall QuestPhaseEntity__isBattleFinishCameraTargetAll(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A2E40A & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_17102/*"battleFinishCameraTargetAll"*/, method);
    byte_4A2E40A = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_17102/*"battleFinishCameraTargetAll"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__isBreakOnBattleWin(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A2E3FF & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_17437/*"breakOnBattleWin"*/, method);
    byte_4A2E3FF = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_17437/*"breakOnBattleWin"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__isBreakOnBattleWinFadeColorBlack(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A2E400 & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_17438/*"breakOnBattleWinFadeColorBlack"*/, method);
    byte_4A2E400 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_17438/*"breakOnBattleWinFadeColorBlack"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__isDisableChangeRaidDownMessage(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A2E40D & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_20778/*"isDisableChangeRaidDownMessage"*/, method);
    byte_4A2E40D = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20778/*"isDisableChangeRaidDownMessage"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__isDispLoseResult(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A2E3FC & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_22897/*"resultLoseDisp"*/, method);
    byte_4A2E3FC = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22897/*"resultLoseDisp"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__isFadeOutBgmBeforeMovie(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A2E3F0 & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_6559/*"FadeOutBgmBeforeMovie"*/, method);
    byte_4A2E3F0 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_6559/*"FadeOutBgmBeforeMovie"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__isNoResult(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A2E3FE & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_22085/*"noResult"*/, method);
    byte_4A2E3FE = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22085/*"noResult"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__isTurnSituationType(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  return QuestPhaseEntity__getTurnSituationType(this, method) > 0;
}


void __fastcall QuestPhaseEntity___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_4A2E463 & 1) == 0 )
  {
    sub_1B761C0(&QuestPhaseEntity___c_TypeInfo, v1);
    byte_4A2E463 = 1;
  }
  v2 = (Il2CppObject *)sub_1B7640C(QuestPhaseEntity___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  QuestPhaseEntity___c_TypeInfo->static_fields->__9 = (struct QuestPhaseEntity___c_o *)v2;
  sub_1B76164((ServantStatusBattleListViewItem_o *)QuestPhaseEntity___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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

  if ( (byte_4A2E465 & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_1/*""*/, x);
    byte_4A2E465 = 1;
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

  if ( (byte_4A2E464 & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_1/*""*/, x);
    byte_4A2E464 = 1;
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
    sub_1B7641C(this, 0LL);
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