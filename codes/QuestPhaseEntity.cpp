void __fastcall QuestPhaseEntity___ctor(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FC89D & 1) == 0 )
  {
    sub_1B640C8(&Method_DataEntityBase_string___ctor__, method);
    byte_49FC89D = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_30D3D1C *)Method_DataEntityBase_string___ctor__);
}


void __fastcall QuestPhaseEntity___ctor_39169188(
        QuestPhaseEntity_o *this,
        QuestPhaseEntity_o *cSrc,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x0
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

  if ( (byte_49FC89E & 1) == 0 )
  {
    sub_1B640C8(&Method_DataEntityBase_string___ctor__, cSrc);
    sub_1B640C8(&int___TypeInfo, v5);
    byte_49FC89E = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_30D3D1C *)Method_DataEntityBase_string___ctor__);
  if ( !cSrc )
    sub_1B64324(v6);
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
      v9 = (struct System_Int32_array *)sub_1B64204(v11, int___TypeInfo);
      if ( !v9 )
        goto LABEL_12;
    }
    else
    {
      v9 = 0LL;
    }
  }
  this->fields.classIds = v9;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.classIds, (int32_t)v9, v7, v8);
  individuality = (System_Array_o *)cSrc->fields.individuality;
  if ( !individuality )
    goto LABEL_13;
  v16 = System_Array__Clone(individuality, 0LL);
  if ( !v16 )
    goto LABEL_13;
  v12 = v16;
  v17 = (struct System_Int32_array *)sub_1B64204(v16, int___TypeInfo);
  if ( !v17 )
  {
LABEL_12:
    sub_1B645E4(v12);
LABEL_13:
    v17 = 0LL;
  }
  this->fields.individuality = v17;
  p_individuality = &this->fields.individuality;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)p_individuality, (int32_t)v17, v13, v14);
  *((_DWORD *)p_individuality + 2) = cSrc->fields.giftId;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall QuestPhaseEntity__CreatePK(int32_t questId, int32_t phase, const MethodInfo *method)
{
  if ( (byte_49FC89C & 1) == 0 )
  {
    sub_1B640C8(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&phase);
    byte_49FC89C = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           questId,
           phase,
           (const MethodInfo_2E37610 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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

  if ( (byte_49FC8AD & 1) == 0 )
  {
    sub_1B640C8(&System_Collections_Generic_Dictionary_string__object__TypeInfo, method);
    sub_1B640C8(&StringLiteral_16595/*"addEquipSkills"*/, v4);
    byte_49FC8AD = 1;
  }
  result = (System_Collections_Generic_Dictionary_string__object__o *)QuestPhaseEntity__getScriptObj(
                                                                        this,
                                                                        (System_String_o *)StringLiteral_16595/*"addEquipSkills"*/,
                                                                        v2);
  if ( result )
  {
    methodPtr_low = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (System_Collections_Generic_Dictionary_string__object__c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
    {
      sub_1B645E4(result);
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

  if ( (byte_49FC918 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_16607/*"addUniqueCameraIds"*/, defVal);
    byte_49FC918 = 1;
  }
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_16607/*"addUniqueCameraIds"*/, defVal, v3);
}


int32_t __fastcall QuestPhaseEntity__GetAdvantageClassId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FC8DC & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_16918/*"auto_sel_support_type"*/, method);
    byte_49FC8DC = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_16918/*"auto_sel_support_type"*/, -1, v2);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetAssistIdArray(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Int32_array *v4; // x2
  const MethodInfo *v5; // x3

  if ( (byte_49FC8EB & 1) == 0 )
  {
    sub_1B640C8(&int___TypeInfo, method);
    sub_1B640C8(&StringLiteral_16871/*"assistIds"*/, v3);
    byte_49FC8EB = 1;
  }
  v4 = (System_Int32_array *)sub_1B64170(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_16871/*"assistIds"*/, v4, v5);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetAssistWeightArray(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Int32_array *v4; // x2
  const MethodInfo *v5; // x3

  if ( (byte_49FC8EC & 1) == 0 )
  {
    sub_1B640C8(&int___TypeInfo, method);
    sub_1B640C8(&StringLiteral_16870/*"assistIdWeight"*/, v3);
    byte_49FC8EC = 1;
  }
  v4 = (System_Int32_array *)sub_1B64170(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_16870/*"assistIdWeight"*/, v4, v5);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetAssumedEffectId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FC8FE & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_16874/*"assumedEffectId"*/, method);
    byte_49FC8FE = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_16874/*"assumedEffectId"*/, 0LL);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetBattleEffectMovieIds(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_49FC920 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_3216/*"BattleEffectMovieIds"*/, method);
    byte_49FC920 = 1;
  }
  return EntityScriptUtil__GetIntArray(this->fields.script, (System_String_o *)StringLiteral_3216/*"BattleEffectMovieIds"*/, 0LL, 0LL);
}


System_String_o *__fastcall QuestPhaseEntity__GetBattleFinishMovie(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FC8C3 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_17041/*"battleFinishMovie"*/, method);
    byte_49FC8C3 = 1;
  }
  return QuestPhaseEntity__getScriptStr(this, (System_String_o *)StringLiteral_17041/*"battleFinishMovie"*/, 0LL, v2);
}


int32_t __fastcall QuestPhaseEntity__GetBattleFinishWaitTime(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FC907 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_17042/*"battleFinishWaitTime"*/, method);
    byte_49FC907 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_17042/*"battleFinishWaitTime"*/, 0, v2);
}


int32_t __fastcall QuestPhaseEntity__GetBattleItemObjectId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FC915 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_17046/*"battleItemObjectId"*/, method);
    byte_49FC915 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_17046/*"battleItemObjectId"*/, 0, v2);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall QuestPhaseEntity__GetBeforeBattleSkillActor(
        QuestPhaseEntity_o *this,
        int32_t defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_49FC908 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_17087/*"beforeBattleSkillActor"*/, *(_QWORD *)&defVal);
    byte_49FC908 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_17087/*"beforeBattleSkillActor"*/, defVal, v3);
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
  System_Int32_array *result; // x0
  _QWORD *v11; // x19
  __int64 v12; // x8
  __int64 v13; // x0
  __int64 v14; // x0

  if ( (byte_49FC8A2 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Array_Empty_int___, method);
    sub_1B640C8(&Method_DataManager_GetMaster_BattleBgMaster___, v3);
    sub_1B640C8(&DataManager_TypeInfo, v4);
    byte_49FC8A2 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_BattleBgMaster___);
  PriorityBattleBgId = QuestPhaseEntity__GetPriorityBattleBgId(this, v6);
  PriorityBattleBgType = QuestPhaseEntity__GetPriorityBattleBgType(this, v8);
  if ( !Master_object )
    sub_1B64324(PriorityBattleBgType);
  result = BattleBgMaster__GetBgIndividuality(
             (BattleBgMaster_o *)Master_object,
             PriorityBattleBgId,
             PriorityBattleBgType,
             0LL);
  if ( !result )
  {
    v11 = Method_System_Array_Empty_int___;
    v12 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v12 )
    {
      sub_1BB6000(Method_System_Array_Empty_int___);
      v12 = v11[7];
    }
    v13 = *(_QWORD *)(v12 + 16);
    if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
      v13 = sub_1BB5FA4(v13);
    if ( !*(_DWORD *)(v13 + 224) )
      j_il2cpp_runtime_class_init_0(v13);
    v14 = *(_QWORD *)(v11[7] + 16LL);
    if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
      v14 = sub_1BB5FA4(v14);
    return **(System_Int32_array ***)(v14 + 184);
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

  if ( (byte_49FC8FB & 1) == 0 )
  {
    sub_1B640C8(&int___TypeInfo, method);
    sub_1B640C8(&StringLiteral_17935/*"clearGiftItemListDisplay"*/, v3);
    byte_49FC8FB = 1;
  }
  v4 = (System_Int32_array *)sub_1B64170(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_17935/*"clearGiftItemListDisplay"*/, v4, v5);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetCondHavingIds(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Int32_array *v4; // x2
  const MethodInfo *v5; // x3

  if ( (byte_49FC8E7 & 1) == 0 )
  {
    sub_1B640C8(&int___TypeInfo, method);
    sub_1B640C8(&StringLiteral_18127/*"condHaving"*/, v3);
    byte_49FC8E7 = 1;
  }
  v4 = (System_Int32_array *)sub_1B64170(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_18127/*"condHaving"*/, v4, v5);
}


int32_t __fastcall QuestPhaseEntity__GetCondQuestClearable(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FC91C & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_18129/*"condQuestClearable"*/, method);
    byte_49FC91C = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_18129/*"condQuestClearable"*/, 0, v2);
}


int32_t __fastcall QuestPhaseEntity__GetCorrectionIconId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FC8DB & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_18200/*"correctionIconId"*/, method);
    byte_49FC8DB = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_18200/*"correctionIconId"*/, -1, v2);
}


int32_t __fastcall QuestPhaseEntity__GetDefenceTargetContinueRecoverRate(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FC912 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_19319/*"fieldHpContinueRecoverRate"*/, method);
    byte_49FC912 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19319/*"fieldHpContinueRecoverRate"*/, 0, v2);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetEnemyInfoDispNpcSvtIdList(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Int32_array *v4; // x2
  const MethodInfo *v5; // x3

  if ( (byte_49FC8F9 & 1) == 0 )
  {
    sub_1B640C8(&int___TypeInfo, method);
    sub_1B640C8(&StringLiteral_22299/*"overwriteEnemyInfos"*/, v3);
    byte_49FC8F9 = 1;
  }
  v4 = (System_Int32_array *)sub_1B64170(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_22299/*"overwriteEnemyInfos"*/, v4, v5);
}


System_String_array *__fastcall QuestPhaseEntity__GetEnemyInfoOverwriteNpcSvtNameList(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_String_array *v4; // x2
  const MethodInfo *v5; // x3

  if ( (byte_49FC8FA & 1) == 0 )
  {
    sub_1B640C8(&string___TypeInfo, method);
    sub_1B640C8(&StringLiteral_22298/*"overwriteEnemyInfoNames"*/, v3);
    byte_49FC8FA = 1;
  }
  v4 = (System_String_array *)sub_1B64170(string___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptStringArrayParam(this, (System_String_o *)StringLiteral_22298/*"overwriteEnemyInfoNames"*/, v4, v5);
}


int32_t __fastcall QuestPhaseEntity__GetEquipAddId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FC8F8 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_18972/*"equipAddId"*/, method);
    byte_49FC8F8 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_18972/*"equipAddId"*/, 0, v2);
}


int32_t __fastcall QuestPhaseEntity__GetFinishEffectId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FC8D8 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_19358/*"finishEffectId"*/, method);
    byte_49FC8D8 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19358/*"finishEffectId"*/, -1, v2);
}


int32_t __fastcall QuestPhaseEntity__GetFormationBgmId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FC8FF & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_19470/*"formationBgmId"*/, method);
    byte_49FC8FF = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19470/*"formationBgmId"*/, -1, v2);
}


float __fastcall QuestPhaseEntity__GetFormationSubBgmFadeInTime(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FC901 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_19471/*"formationSubBgmFadeInTime"*/, method);
    byte_49FC901 = 1;
  }
  return (float)QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19471/*"formationSubBgmFadeInTime"*/, 0, v2) / 1000.0;
}


int32_t __fastcall QuestPhaseEntity__GetFormationSubBgmId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FC900 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_19472/*"formationSubBgmId"*/, method);
    byte_49FC900 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19472/*"formationSubBgmId"*/, -1, v2);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetGimmickAnimTypeArray(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FC8D6 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_19738/*"gimmickAnimType"*/, method);
    byte_49FC8D6 = 1;
  }
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_19738/*"gimmickAnimType"*/, 0LL, v2);
}


int32_t __fastcall QuestPhaseEntity__GetGimmickId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FC8CF & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_19739/*"gimmickId"*/, method);
    byte_49FC8CF = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19739/*"gimmickId"*/, -1, v2);
}


System_Object_array *__fastcall QuestPhaseEntity__GetGimmickResultVoiceArray(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FC8D5 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_22815/*"resultVoice"*/, method);
    byte_49FC8D5 = 1;
  }
  return QuestPhaseEntity__getScriptObjArrayParam(this, (System_String_o *)StringLiteral_22815/*"resultVoice"*/, 0LL, v2);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetGimmickSkillIdArray(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Int32_array *v4; // x2
  const MethodInfo *v5; // x3

  if ( (byte_49FC8D2 & 1) == 0 )
  {
    sub_1B640C8(&int___TypeInfo, method);
    sub_1B640C8(&StringLiteral_22729/*"reelSkill"*/, v3);
    byte_49FC8D2 = 1;
  }
  v4 = (System_Int32_array *)sub_1B64170(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_22729/*"reelSkill"*/, v4, v5);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetGimmickSkillRateArray(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Int32_array *v4; // x2
  const MethodInfo *v5; // x3

  if ( (byte_49FC8D3 & 1) == 0 )
  {
    sub_1B640C8(&int___TypeInfo, method);
    sub_1B640C8(&StringLiteral_22728/*"reelRate"*/, v3);
    byte_49FC8D3 = 1;
  }
  v4 = (System_Int32_array *)sub_1B64170(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_22728/*"reelRate"*/, v4, v5);
}


System_String_array *__fastcall QuestPhaseEntity__GetGimmickStartVoiceArray(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FC8D4 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_23402/*"startVoice"*/, method);
    byte_49FC8D4 = 1;
  }
  return QuestPhaseEntity__getScriptStringArrayParam(this, (System_String_o *)StringLiteral_23402/*"startVoice"*/, 0LL, v2);
}


int32_t __fastcall QuestPhaseEntity__GetGimmickSvtId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FC8D0 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_19740/*"gimmickSvtId"*/, method);
    byte_49FC8D0 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19740/*"gimmickSvtId"*/, -1, v2);
}


int32_t __fastcall QuestPhaseEntity__GetIconItemNumberDispType(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FC917 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_20002/*"iconItemNumberDispType"*/, method);
    byte_49FC917 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20002/*"iconItemNumberDispType"*/, 0, v2);
}


float __fastcall QuestPhaseEntity__GetIncomingCallDispTime(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FC90B & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_20535/*"incomingCallDispTime"*/, method);
    byte_49FC90B = 1;
  }
  return (float)QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20535/*"incomingCallDispTime"*/, 500, v2) / 1000.0;
}


System_String_o *__fastcall QuestPhaseEntity__GetIncomingCallMessage(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1

  if ( (byte_49FC90A & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_20536/*"incomingCallMessage"*/, method);
    sub_1B640C8(&StringLiteral_1/*""*/, v4);
    byte_49FC90A = 1;
  }
  return QuestPhaseEntity__getScriptStr(
           this,
           (System_String_o *)StringLiteral_20536/*"incomingCallMessage"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


System_String_o *__fastcall QuestPhaseEntity__GetIncomingCallTitle(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1

  if ( (byte_49FC909 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_20537/*"incomingCallTitle"*/, method);
    sub_1B640C8(&StringLiteral_1/*""*/, v4);
    byte_49FC909 = 1;
  }
  return QuestPhaseEntity__getScriptStr(
           this,
           (System_String_o *)StringLiteral_20537/*"incomingCallTitle"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


System_String_o *__fastcall QuestPhaseEntity__GetMapModelEntryAnimationName(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1

  if ( (byte_49FC905 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_1490/*"3dMapEntryAnimName"*/, method);
    sub_1B640C8(&StringLiteral_1/*""*/, v4);
    byte_49FC905 = 1;
  }
  return QuestPhaseEntity__getScriptStr(
           this,
           (System_String_o *)StringLiteral_1490/*"3dMapEntryAnimName"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


int32_t __fastcall QuestPhaseEntity__GetMasterSkillDelay(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FC8E1 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_21230/*"masterSkillDelay"*/, method);
    byte_49FC8E1 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21230/*"masterSkillDelay"*/, 0, v2);
}


System_String_o *__fastcall QuestPhaseEntity__GetMasterSkillDelayInfo(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FC8E2 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_21231/*"masterSkillDelayInfo"*/, method);
    byte_49FC8E2 = 1;
  }
  return QuestPhaseEntity__getScriptStr(this, (System_String_o *)StringLiteral_21231/*"masterSkillDelayInfo"*/, 0LL, v2);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetMoveSceneInfo(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Int32_array *v4; // x2
  const MethodInfo *v5; // x3

  if ( (byte_49FC90D & 1) == 0 )
  {
    sub_1B640C8(&int___TypeInfo, method);
    sub_1B640C8(&StringLiteral_21438/*"moveSceneInfo"*/, v3);
    byte_49FC90D = 1;
  }
  v4 = (System_Int32_array *)sub_1B64170(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_21438/*"moveSceneInfo"*/, v4, v5);
}


int32_t __fastcall QuestPhaseEntity__GetMovieAfterCrossFadeStartFrame(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FC8CA & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_21443/*"movieAfterCrossFadeStartFrame"*/, method);
    byte_49FC8CA = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21443/*"movieAfterCrossFadeStartFrame"*/, 0, v2);
}


int32_t __fastcall QuestPhaseEntity__GetMovieAfterCrossFadeTime(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FC8C9 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_21444/*"movieAfterCrossFadeTime"*/, method);
    byte_49FC8C9 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21444/*"movieAfterCrossFadeTime"*/, 0, v2);
}


int32_t __fastcall QuestPhaseEntity__GetNextSceneId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FC8E5 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_21963/*"nextSceneId"*/, method);
    byte_49FC8E5 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21963/*"nextSceneId"*/, 0, v2);
}


System_String_array *__fastcall QuestPhaseEntity__GetNextSceneParam(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  System_String_array *result; // x0

  if ( (byte_49FC8E6 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_21964/*"nextSceneParam"*/, method);
    byte_49FC8E6 = 1;
  }
  result = (System_String_array *)QuestPhaseEntity__getScriptStr(this, (System_String_o *)StringLiteral_21964/*"nextSceneParam"*/, 0LL, v2);
  if ( result )
    return System_String__Split((System_String_o *)result, 0x2Cu, 0, 0LL);
  return result;
}


int32_t __fastcall QuestPhaseEntity__GetNotDispEquipSkillChargeTurn(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FC916 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_22054/*"notDispEquipSkillChargeTurn"*/, method);
    byte_49FC916 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22054/*"notDispEquipSkillChargeTurn"*/, 0, v2);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetNotHavingQuests(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Int32_array *v4; // x2
  const MethodInfo *v5; // x3

  if ( (byte_49FC8E8 & 1) == 0 )
  {
    sub_1B640C8(&int___TypeInfo, method);
    sub_1B640C8(&StringLiteral_22057/*"notHavingQuest"*/, v3);
    byte_49FC8E8 = 1;
  }
  v4 = (System_Int32_array *)sub_1B64170(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_22057/*"notHavingQuest"*/, v4, v5);
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
  __int64 v13; // x21
  __int64 v14; // x1
  __int64 v15; // x2
  System_Collections_Generic_Dictionary_int__object__o *v16; // x22
  struct System_Collections_Generic_Dictionary_string__object__o *v17; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  System_Collections_Generic_Dictionary_int__int____o **v20; // x20
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  Il2CppObject *v24; // x22
  __int64 methodPtr_low; // x10
  const MethodInfo *v26; // x2
  System_Action_object__o *v28; // x19
  Il2CppObject *obj; // [xsp+0h] [xbp-40h] BYREF
  Il2CppObject *value; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_49FC8F6 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_object__TypeInfo, method);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__int_____ctor__, v5);
    sub_1B640C8(&System_Collections_Generic_Dictionary_int__int____TypeInfo, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_object__ForEach__, v7);
    sub_1B640C8(&System_Collections_Generic_List_object__TypeInfo, v8);
    sub_1B640C8(&Method_QuestPhaseEntity___c__DisplayClass113_0__GetNpcAiInfo_b__0__, v9);
    sub_1B640C8(&QuestPhaseEntity___c__DisplayClass113_0_TypeInfo, v10);
    sub_1B640C8(&StringLiteral_16649/*"aiMultiNpc"*/, v11);
    sub_1B640C8(&StringLiteral_16650/*"aiNpc"*/, v12);
    byte_49FC8F6 = 1;
  }
  obj = 0LL;
  value = 0LL;
  v13 = sub_1B64314(QuestPhaseEntity___c__DisplayClass113_0_TypeInfo, method, v2);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  v16 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B64314(
                                                                  System_Collections_Generic_Dictionary_int__int____TypeInfo,
                                                                  v14,
                                                                  v15);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v16,
    (const MethodInfo_3122FB0 *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  if ( !v13 )
    goto LABEL_14;
  *(_QWORD *)(v13 + 16) = v16;
  v20 = (System_Collections_Generic_Dictionary_int__int____o **)(v13 + 16);
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v13 + 16), (int32_t)v16, v18, v19);
  script = this->fields.script;
  if ( !script )
    return *v20;
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)script,
         (Il2CppObject *)StringLiteral_16649/*"aiMultiNpc"*/,
         &value,
         (const MethodInfo_317AC04 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    v24 = value;
    if ( value )
    {
      methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(value->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
        && (System_Collections_Generic_List_object__c *)value->klass->_2.typeHierarchy[methodPtr_low - 1] == System_Collections_Generic_List_object__TypeInfo )
      {
        v28 = (System_Action_object__o *)sub_1B64314(System_Action_object__TypeInfo, v22, v23);
        System_Action_object____ctor(
          v28,
          (Il2CppObject *)v13,
          Method_QuestPhaseEntity___c__DisplayClass113_0__GetNpcAiInfo_b__0__,
          0LL);
        System_Collections_Generic_List_object___ForEach(
          (System_Collections_Generic_List_object__o *)v24,
          (System_Action_T__o *)v28,
          (const MethodInfo_34AE1B4 *)Method_System_Collections_Generic_List_object__ForEach__);
        return *v20;
      }
    }
  }
  v17 = this->fields.script;
  if ( !v17 )
LABEL_14:
    sub_1B64324(v17);
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)v17,
         (Il2CppObject *)StringLiteral_16650/*"aiNpc"*/,
         &obj,
         (const MethodInfo_317AC04 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    QuestPhaseEntity__SetNpcAiInfo((System_Collections_Generic_IDictionary_int__int____o *)*v20, obj, v26);
  }
  return *v20;
}


int32_t __fastcall QuestPhaseEntity__GetOverWriteMasterImageId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FC8C7 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_21220/*"masterImageId"*/, method);
    byte_49FC8C7 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21220/*"masterImageId"*/, 0, v2);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall QuestPhaseEntity__GetOverwriteCommandSpellContinue(
        QuestPhaseEntity_o *this,
        int32_t def,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_49FC8F0 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_22290/*"overwriteCommandSpellContinue"*/, *(_QWORD *)&def);
    byte_49FC8F0 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22290/*"overwriteCommandSpellContinue"*/, def, v3);
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

  if ( (byte_49FC903 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_22291/*"overwriteCommandSpellIcons"*/, *(_QWORD *)&genderType);
    byte_49FC903 = 1;
  }
  ScriptIntArrayParam = QuestPhaseEntity__getScriptIntArrayParam(
                          this,
                          (System_String_o *)StringLiteral_22291/*"overwriteCommandSpellIcons"*/,
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
    sub_1B6432C(ScriptIntArrayParam, v8);
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

  if ( (byte_49FC8AC & 1) == 0 )
  {
    sub_1B640C8(&System_Collections_Generic_Dictionary_string__object__TypeInfo, method);
    sub_1B640C8(&StringLiteral_22301/*"overwriteEquipSkills"*/, v4);
    byte_49FC8AC = 1;
  }
  result = (System_Collections_Generic_Dictionary_string__object__o *)QuestPhaseEntity__getScriptObj(
                                                                        this,
                                                                        (System_String_o *)StringLiteral_22301/*"overwriteEquipSkills"*/,
                                                                        v2);
  if ( result )
  {
    methodPtr_low = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (System_Collections_Generic_Dictionary_string__object__c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
    {
      sub_1B645E4(result);
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

  if ( (byte_49FC8DD & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_22305/*"overwriteLimitCountSvtIds"*/, overwriteLimitCountSvtIds);
    sub_1B640C8(&StringLiteral_22306/*"overwriteLimitCounts"*/, v9);
    sub_1B640C8(&StringLiteral_22304/*"overwriteLimitCountIconIds"*/, v10);
    byte_49FC8DD = 1;
  }
  ScriptIntArrayParam = QuestPhaseEntity__getScriptIntArrayParam(
                          this,
                          (System_String_o *)StringLiteral_22305/*"overwriteLimitCountSvtIds"*/,
                          0LL,
                          (const MethodInfo *)overwriteLimitCountIconIds);
  *overwriteLimitCountSvtIds = ScriptIntArrayParam;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)overwriteLimitCountSvtIds, (int32_t)ScriptIntArrayParam, v12, v13);
  if ( *overwriteLimitCountSvtIds )
  {
    v16 = QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_22306/*"overwriteLimitCounts"*/, 0LL, v15);
    *overwriteLimitCounts = v16;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)overwriteLimitCounts, (int32_t)v16, v17, v18);
    v20 = QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_22304/*"overwriteLimitCountIconIds"*/, 0LL, v19);
    *overwriteLimitCountIconIds = v20;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)overwriteLimitCountIconIds, (int32_t)v20, v21, v22);
    return *overwriteLimitCounts != 0LL;
  }
  else
  {
    *overwriteLimitCounts = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)overwriteLimitCounts, 0, v14, (int32_t)v15);
    *overwriteLimitCountIconIds = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)overwriteLimitCountIconIds, 0, v24, v25);
    return 0;
  }
}


System_Int32_array *__fastcall QuestPhaseEntity__GetOverwriteResultBgmCondIds(
        QuestPhaseEntity_o *this,
        System_Int32_array *defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_49FC8B0 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_22313/*"overwriteResultBgmCondIds"*/, defVal);
    byte_49FC8B0 = 1;
  }
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_22313/*"overwriteResultBgmCondIds"*/, defVal, v3);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetOverwriteResultBgmIds(
        QuestPhaseEntity_o *this,
        System_Int32_array *defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_49FC8AF & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_22314/*"overwriteResultBgmIds"*/, defVal);
    byte_49FC8AF = 1;
  }
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_22314/*"overwriteResultBgmIds"*/, defVal, v3);
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

  if ( (byte_49FC8A0 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Array_Empty_int___, method);
    byte_49FC8A0 = 1;
  }
  result = QuestPhaseEntity__GetPrioredIndividualityLocal(this, method);
  if ( !result )
  {
    v4 = Method_System_Array_Empty_int___;
    v5 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v5 )
    {
      sub_1BB6000(Method_System_Array_Empty_int___);
      v5 = v4[7];
    }
    v6 = *(_QWORD *)(v5 + 16);
    if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
      v6 = sub_1BB5FA4(v6);
    if ( !*(_DWORD *)(v6 + 224) )
      j_il2cpp_runtime_class_init_0(v6);
    v7 = *(_QWORD *)(v4[7] + 16LL);
    if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
      v7 = sub_1BB5FA4(v7);
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
  const MethodInfo *v8; // x3
  System_Int32_array *result; // x0
  const MethodInfo *v10; // x1
  QuestPhaseIndividualityEntity_o *v11; // x20
  const MethodInfo *v12; // x2
  QuestPhaseIndividualityEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49FC8A1 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_QuestBehaviorMaster___, method);
    sub_1B640C8(&Method_DataManager_GetMaster_QuestPhaseIndividualityMaster___, v3);
    sub_1B640C8(&DataManager_TypeInfo, v4);
    byte_49FC8A1 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_QuestBehaviorMaster___);
  UniqueId = (System_Int32_array *)QuestPhaseEntity__GetUniqueId(this, v6);
  if ( !Master_object )
    goto LABEL_15;
  result = QuestBehaviorMaster__GetBattleIndividuality(
             (QuestBehaviorMaster_o *)Master_object,
             (int64_t)UniqueId,
             0LL,
             v8);
  if ( !result )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    UniqueId = (System_Int32_array *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_QuestPhaseIndividualityMaster___);
    if ( !UniqueId )
      goto LABEL_15;
    if ( QuestPhaseIndividualityMaster__TryGetEntity(
           (QuestPhaseIndividualityMaster_o *)UniqueId,
           &entity,
           this->fields.questId,
           this->fields.phase,
           0LL) )
    {
      v11 = entity;
      UniqueId = QuestPhaseEntity__GetBgIndividuality(this, v10);
      if ( v11 )
        return QuestPhaseIndividualityEntity__GetAddAndDelAfterIndividuality(v11, UniqueId, v12);
LABEL_15:
      sub_1B64324(UniqueId);
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
  const MethodInfo *v7; // x3

  if ( (byte_49FC8A3 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_QuestBehaviorMaster___, method);
    sub_1B640C8(&DataManager_TypeInfo, v3);
    byte_49FC8A3 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_QuestBehaviorMaster___);
  UniqueId = QuestPhaseEntity__GetUniqueId(this, v5);
  if ( !Master_object )
    sub_1B64324(UniqueId);
  return QuestBehaviorMaster__GetBattleBg((QuestBehaviorMaster_o *)Master_object, UniqueId, this->fields.battleBgId, v7);
}


int32_t __fastcall QuestPhaseEntity__GetPriorityBattleBgType(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Master_object; // x20
  const MethodInfo *v5; // x1
  int64_t UniqueId; // x0
  const MethodInfo *v7; // x3

  if ( (byte_49FC8A4 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_QuestBehaviorMaster___, method);
    sub_1B640C8(&DataManager_TypeInfo, v3);
    byte_49FC8A4 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_QuestBehaviorMaster___);
  UniqueId = QuestPhaseEntity__GetUniqueId(this, v5);
  if ( !Master_object )
    sub_1B64324(UniqueId);
  return QuestBehaviorMaster__GetBattleBgType(
           (QuestBehaviorMaster_o *)Master_object,
           UniqueId,
           this->fields.battleBgType,
           v7);
}


int32_t __fastcall QuestPhaseEntity__GetProgressAfterMovie(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FC8C5 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_22528/*"progressAfterMovie"*/, method);
    byte_49FC8C5 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22528/*"progressAfterMovie"*/, 0, v2);
}


int32_t __fastcall QuestPhaseEntity__GetQuestPhaseSelectRoute(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1
  int32_t ScriptIntParam; // w0
  int32_t v6; // w19
  Il2CppObject *Instance; // x0

  if ( (byte_49FC8BA & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, method);
    sub_1B640C8(&StringLiteral_22425/*"phaseRouteSelect"*/, v4);
    byte_49FC8BA = 1;
  }
  ScriptIntParam = QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22425/*"phaseRouteSelect"*/, 0, v2);
  if ( ScriptIntParam < 1 )
    return 0;
  v6 = ScriptIntParam;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
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

  if ( (byte_49FC8D1 & 1) == 0 )
  {
    sub_1B640C8(&int___TypeInfo, method);
    sub_1B640C8(&StringLiteral_22727/*"reelIcon"*/, v3);
    byte_49FC8D1 = 1;
  }
  v4 = (System_Int32_array *)sub_1B64170(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_22727/*"reelIcon"*/, v4, v5);
}


int32_t __fastcall QuestPhaseEntity__GetReferToQuestPhase(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FC91D & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_22733/*"referToQuestPhase"*/, method);
    byte_49FC91D = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22733/*"referToQuestPhase"*/, 0, v2);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetSelectableQuests(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FC8B9 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_22601/*"questSelect"*/, method);
    byte_49FC8B9 = 1;
  }
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_22601/*"questSelect"*/, 0LL, v2);
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
      sub_1B6432C(SelectableQuests, v8);
    return SelectableQuests->m_Items[selectIndex + 1];
  }
  return result;
}


System_Int32_array *__fastcall QuestPhaseEntity__GetShadowOffSvtIds(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Int32_array *v4; // x2
  const MethodInfo *v5; // x3

  if ( (byte_49FC8E0 & 1) == 0 )
  {
    sub_1B640C8(&int___TypeInfo, method);
    sub_1B640C8(&StringLiteral_23151/*"shadowOffSvtIds"*/, v3);
    byte_49FC8E0 = 1;
  }
  v4 = (System_Int32_array *)sub_1B64170(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_23151/*"shadowOffSvtIds"*/, v4, v5);
}


int32_t __fastcall QuestPhaseEntity__GetSingleForceSvtId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FC8DE & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_23235/*"singleForceSvtId"*/, method);
    byte_49FC8DE = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_23235/*"singleForceSvtId"*/, 0, v2);
}


int32_t __fastcall QuestPhaseEntity__GetStartBattleSoundMode(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FC91B & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_12886/*"StartBattleSoundMode"*/, method);
    byte_49FC91B = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_12886/*"StartBattleSoundMode"*/, 0, v2);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetStartMovieWave(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FC8C6 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_21448/*"movieWave"*/, method);
    byte_49FC8C6 = 1;
  }
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_21448/*"movieWave"*/, 0LL, v2);
}


int32_t __fastcall QuestPhaseEntity__GetStartScreenEffect(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FC91A & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_12885/*"StartBattleScreenEffect"*/, method);
    byte_49FC91A = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_12885/*"StartBattleScreenEffect"*/, 0, v2);
}


int32_t __fastcall QuestPhaseEntity__GetSupportInitDeckIndex(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FC8F1 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_19057/*"eventDeckIndex"*/, method);
    byte_49FC8F1 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19057/*"eventDeckIndex"*/, 0, v2);
}


int32_t __fastcall QuestPhaseEntity__GetTemporaryCommandSpell(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FC8EE & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_23787/*"temporaryCommandSpell"*/, method);
    byte_49FC8EE = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_23787/*"temporaryCommandSpell"*/, -1, v2);
}


int64_t __fastcall QuestPhaseEntity__GetUniqueId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  int32_t phase; // w19
  int32_t questId; // w20

  if ( (byte_49FC89F & 1) == 0 )
  {
    sub_1B640C8(&BattleDataDefine_TypeInfo, method);
    byte_49FC89F = 1;
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

  if ( (byte_49FC8DF & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_24257/*"useEventDeckNo"*/, method);
    byte_49FC8DF = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_24257/*"useEventDeckNo"*/, 1, v2);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetVoiceOffPlayerSvtIdArray(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_49FC902 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_24489/*"voiceOffMySvtIds"*/, method);
    byte_49FC902 = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_24489/*"voiceOffMySvtIds"*/, 0LL);
}


System_String_o *__fastcall QuestPhaseEntity__GetWarBoardStartMovieName(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1

  if ( (byte_49FC8FC & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_15525/*"WarBoardStartMovieName"*/, method);
    sub_1B640C8(&StringLiteral_1/*""*/, v4);
    byte_49FC8FC = 1;
  }
  return QuestPhaseEntity__getScriptStr(
           this,
           (System_String_o *)StringLiteral_15525/*"WarBoardStartMovieName"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


System_String_array *__fastcall QuestPhaseEntity__GetWaveStartMovie(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FC8C4 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_24569/*"waveStartMovie"*/, method);
    byte_49FC8C4 = 1;
  }
  return QuestPhaseEntity__getScriptStringArrayParam(this, (System_String_o *)StringLiteral_24569/*"waveStartMovie"*/, 0LL, v2);
}


int32_t __fastcall QuestPhaseEntity__GetWinBgmOffFlg(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FC8D9 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_18927/*"endBgmOff"*/, method);
    byte_49FC8D9 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_18927/*"endBgmOff"*/, 0, v2);
}


int32_t __fastcall QuestPhaseEntity__GetWinVoiceOffFlg(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FC8D7 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_18941/*"endVoiceOff"*/, method);
    byte_49FC8D7 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_18941/*"endVoiceOff"*/, 0, v2);
}


bool __fastcall QuestPhaseEntity__HasReleaseFocusQuestBoardKey(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FC913 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_20729/*"isReleaseFocus"*/, method);
    byte_49FC913 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_20729/*"isReleaseFocus"*/, 0LL);
}


bool __fastcall QuestPhaseEntity__IsActiveAssistSkill(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Int32_array *v4; // x0
  const MethodInfo *v5; // x3
  System_Int32_array *ScriptIntArrayParam; // x0

  if ( (byte_49FC8EA & 1) == 0 )
  {
    sub_1B640C8(&int___TypeInfo, method);
    sub_1B640C8(&StringLiteral_16871/*"assistIds"*/, v3);
    byte_49FC8EA = 1;
  }
  v4 = (System_Int32_array *)sub_1B64170(int___TypeInfo, 0LL);
  ScriptIntArrayParam = QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_16871/*"assistIds"*/, v4, v5);
  if ( !ScriptIntArrayParam )
    sub_1B64324(0LL);
  return ScriptIntArrayParam->max_length != 0;
}


bool __fastcall QuestPhaseEntity__IsAreaImporveQuest(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_49FC8FD & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_16817/*"areaImprovementQuest"*/, method);
    byte_49FC8FD = 1;
  }
  return QuestPhaseEntity__getScriptObj(this, (System_String_o *)StringLiteral_16817/*"areaImprovementQuest"*/, v2) != 0LL;
}


bool __fastcall QuestPhaseEntity__IsContinueWaveRestart(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FC911 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_18176/*"continueWaveRestart"*/, method);
    byte_49FC911 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_18176/*"continueWaveRestart"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__IsFadeOutMainBgmBeforeBattle(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FC91E & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_19291/*"fadeOutMainBgmBeforeBattle"*/, method);
    byte_49FC91E = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_19291/*"fadeOutMainBgmBeforeBattle"*/, 0LL);
}


bool __fastcall QuestPhaseEntity__IsHideAssistConfButton(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FC8ED & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_19836/*"hideAssistConfButton"*/, method);
    byte_49FC8ED = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19836/*"hideAssistConfButton"*/, 0, v2) != 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestPhaseEntity__IsHideBattlePointGauge(
        QuestPhaseEntity_o *this,
        int32_t battlePointId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_IEnumerable_TSource__o *IntArray; // x0

  if ( (byte_49FC922 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_Contains_int___, *(_QWORD *)&battlePointId);
    sub_1B640C8(&StringLiteral_7213/*"HideBattlePointGauge"*/, v5);
    byte_49FC922 = 1;
  }
  IntArray = (System_Collections_Generic_IEnumerable_TSource__o *)EntityScriptUtil__GetIntArray(
                                                                    this->fields.script,
                                                                    (System_String_o *)StringLiteral_7213/*"HideBattlePointGauge"*/,
                                                                    0LL,
                                                                    0LL);
  if ( IntArray )
    LOBYTE(IntArray) = System_Linq_Enumerable__Contains_int_(
                         IntArray,
                         battlePointId,
                         (const MethodInfo_2E52CA8 *)Method_System_Linq_Enumerable_Contains_int___);
  return (char)IntArray;
}


bool __fastcall QuestPhaseEntity__IsIgnoreBattleLoseDialog(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FC8BE & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_20145/*"ignoreBattleLoseDialog"*/, method);
    byte_49FC8BE = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_20145/*"ignoreBattleLoseDialog"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestPhaseEntity__IsIgnoreBattlePointUp(
        QuestPhaseEntity_o *this,
        int32_t battlePointId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_IEnumerable_TSource__o *IntArray; // x0

  if ( (byte_49FC921 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_Contains_int___, *(_QWORD *)&battlePointId);
    sub_1B640C8(&StringLiteral_7427/*"IgnoreBattlePointUp"*/, v5);
    byte_49FC921 = 1;
  }
  IntArray = (System_Collections_Generic_IEnumerable_TSource__o *)EntityScriptUtil__GetIntArray(
                                                                    this->fields.script,
                                                                    (System_String_o *)StringLiteral_7427/*"IgnoreBattlePointUp"*/,
                                                                    0LL,
                                                                    0LL);
  if ( IntArray )
    LOBYTE(IntArray) = System_Linq_Enumerable__Contains_int_(
                         IntArray,
                         battlePointId,
                         (const MethodInfo_2E52CA8 *)Method_System_Linq_Enumerable_Contains_int___);
  return (char)IntArray;
}


bool __fastcall QuestPhaseEntity__IsInterruptionQuest(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FC919 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_20621/*"interruptibleQuest"*/, method);
    byte_49FC919 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20621/*"interruptibleQuest"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__IsInvisibleConnectAndLoad(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FC8E4 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_20663/*"invisibleConnectAndLoad"*/, method);
    byte_49FC8E4 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20663/*"invisibleConnectAndLoad"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__IsKeepSubBgmAfterBattleResult(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FC8DA & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_20895/*"keepSubBgmUntilBattleResult"*/, method);
    byte_49FC8DA = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_20895/*"keepSubBgmUntilBattleResult"*/, 0LL);
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
  __int64 v9; // x1
  __int64 v10; // x2
  System_Collections_Generic_HashSet_int__o *v11; // x20
  __int64 v12; // x1
  __int64 v13; // x2
  System_Predicate_int__o *All_int; // x0
  System_Predicate_T__o *v15; // x21

  if ( (byte_49FC8E3 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Array_FindAll_int___, individualitys);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_int___ctor___75637208, v5);
    sub_1B640C8(&System_Collections_Generic_HashSet_int__TypeInfo, v6);
    sub_1B640C8(&System_Predicate_int__TypeInfo, v7);
    byte_49FC8E3 = 1;
  }
  PrioredIndividuality = (System_Collections_Generic_IEnumerable_T__o *)QuestPhaseEntity__GetPrioredIndividuality(
                                                                          this,
                                                                          (const MethodInfo *)individualitys);
  v11 = (System_Collections_Generic_HashSet_int__o *)sub_1B64314(
                                                       System_Collections_Generic_HashSet_int__TypeInfo,
                                                       v9,
                                                       v10);
  System_Collections_Generic_HashSet_int____ctor_53885596(
    v11,
    PrioredIndividuality,
    (const MethodInfo_3363A9C *)Method_System_Collections_Generic_HashSet_int___ctor___75637208);
  All_int = (System_Predicate_int__o *)sub_1B64314(System_Predicate_int__TypeInfo, v12, v13);
  if ( !v11
    || (v15 = (System_Predicate_T__o *)All_int,
        System_Predicate_int____ctor(
          All_int,
          (Il2CppObject *)v11,
          (intptr_t)v11->klass->vtable._9_CopyTo.methodPtr,
          0LL),
        (All_int = (System_Predicate_int__o *)System_Array__FindAll_int_(
                                                individualitys,
                                                v15,
                                                (const MethodInfo_2F3021C *)Method_System_Array_FindAll_int___)) == 0LL) )
  {
    sub_1B64324(All_int);
  }
  return All_int->fields.m_target != 0LL;
}


bool __fastcall QuestPhaseEntity__IsNonStopEndBgm(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FC8BB & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_22023/*"nonStopEndBgm"*/, method);
    byte_49FC8BB = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22023/*"nonStopEndBgm"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__IsNotClassBoard(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FC90E & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_22052/*"notClassBoard"*/, method);
    byte_49FC90E = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22052/*"notClassBoard"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__IsNotResetResultDispFlag(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FC8C8 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_22059/*"notResetResultDispFlag"*/, method);
    byte_49FC8C8 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22059/*"notResetResultDispFlag"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__IsNotUseRestrictionDialog(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FC90F & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_22060/*"notUseRestrictionDialog"*/, method);
    byte_49FC90F = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22060/*"notUseRestrictionDialog"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__IsPlayScriptBeforeForWarBoard(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FC8E9 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_20733/*"isScriptPlayForWarBoard"*/, method);
    byte_49FC8E9 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20733/*"isScriptPlayForWarBoard"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__IsReleaseFocusQuestBoard(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FC914 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_20729/*"isReleaseFocus"*/, method);
    byte_49FC914 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20729/*"isReleaseFocus"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__IsRepeatReward(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FC90C & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_22778/*"repeatReward"*/, method);
    byte_49FC90C = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22778/*"repeatReward"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__IsReverseMyDeckSvtPosition(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FC91F & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_22826/*"reverseMyDeckSvtPosition"*/, method);
    byte_49FC91F = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_22826/*"reverseMyDeckSvtPosition"*/, 0LL);
}


bool __fastcall QuestPhaseEntity__IsSkipBattleFinish(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FC906 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_23256/*"skipBattleFinish"*/, method);
    byte_49FC906 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_23256/*"skipBattleFinish"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__IsUseTemporaryCommandSpell(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FC8EF & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_24263/*"useTemporaryCommandSpell"*/, method);
    byte_49FC8EF = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_24263/*"useTemporaryCommandSpell"*/, -1, v2) == 1;
}


bool __fastcall QuestPhaseEntity__IsWaveCountInfinity(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FC904 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_24566/*"waveCountInfinity"*/, method);
    byte_49FC904 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_24566/*"waveCountInfinity"*/, -1, v2) != -1;
}


bool __fastcall QuestPhaseEntity__IsWaveSetup(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FC910 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_24568/*"waveSetup"*/, method);
    byte_49FC910 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_24568/*"waveSetup"*/, 0, v2) != 0;
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
  __int64 v20; // x1
  __int64 v21; // x2
  System_Collections_Generic_List_object__o *v22; // x21
  QuestPhaseEntity___c_c *v23; // x0
  System_Converter_object__int__o *_9__114_0; // x22
  Il2CppObject *v25; // x23
  struct QuestPhaseEntity___c_StaticFields *static_fields; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  System_Collections_Generic_List_int__o *v29; // x0
  System_Collections_Generic_IDictionary_int__int____c *klass; // x8
  System_Collections_Generic_List_int__o *v31; // x21
  __int64 v32; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0

  if ( (byte_49FC8F7 & 1) == 0 )
  {
    sub_1B640C8(&Method_BasicHelper_GetValue_long___, obj);
    sub_1B640C8(&Method_BasicHelper_GetValue_List_object____, v5);
    sub_1B640C8(&System_Converter_object__int__TypeInfo, v6);
    sub_1B640C8(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v7);
    sub_1B640C8(&System_Collections_Generic_IDictionary_int__int____TypeInfo, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_object__ConvertAll_int___, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__ToArray__, v10);
    sub_1B640C8(&Method_QuestPhaseEntity___c__SetNpcAiInfo_b__114_0__, v11);
    sub_1B640C8(&QuestPhaseEntity___c_TypeInfo, v12);
    sub_1B640C8(&StringLiteral_16648/*"aiIds"*/, v13);
    sub_1B640C8(&StringLiteral_22076/*"npcId"*/, v14);
    byte_49FC8F7 = 1;
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
                       (System_String_o *)StringLiteral_22076/*"npcId"*/,
                       0LL,
                       (const MethodInfo_2E2771C *)Method_BasicHelper_GetValue_long___);
        Value_object = BasicHelper__GetValue_object_(
                         v17,
                         (System_String_o *)StringLiteral_16648/*"aiIds"*/,
                         0LL,
                         (const MethodInfo_2E27808 *)Method_BasicHelper_GetValue_List_object____);
        if ( Value_long >= 1 )
        {
          v22 = (System_Collections_Generic_List_object__o *)Value_object;
          if ( Value_object )
          {
            v23 = QuestPhaseEntity___c_TypeInfo;
            if ( !QuestPhaseEntity___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(QuestPhaseEntity___c_TypeInfo);
              v23 = QuestPhaseEntity___c_TypeInfo;
            }
            _9__114_0 = v23->static_fields->__9__114_0;
            if ( !_9__114_0 )
            {
              if ( !v23->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v23);
                v23 = QuestPhaseEntity___c_TypeInfo;
              }
              v25 = (Il2CppObject *)v23->static_fields->__9;
              _9__114_0 = (System_Converter_object__int__o *)sub_1B64314(
                                                               System_Converter_object__int__TypeInfo,
                                                               v20,
                                                               v21);
              System_Converter_object__int____ctor(
                _9__114_0,
                v25,
                Method_QuestPhaseEntity___c__SetNpcAiInfo_b__114_0__,
                0LL);
              static_fields = QuestPhaseEntity___c_TypeInfo->static_fields;
              static_fields->__9__114_0 = _9__114_0;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__114_0, (int32_t)_9__114_0, v27, v28);
            }
            v29 = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_object___ConvertAll_int_(
                                                              v22,
                                                              (System_Converter_T__TOutput__o *)_9__114_0,
                                                              (const MethodInfo_2D6F1A0 *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
            if ( !v29
              || (v29 = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_int___ToArray(
                                                                    v29,
                                                                    (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__),
                  !dicNpcAiId) )
            {
              sub_1B64324(v29);
            }
            klass = dicNpcAiId->klass;
            v31 = v29;
            v32 = *(unsigned __int16 *)(&dicNpcAiId->klass->_2.bitflags2 + 3);
            if ( *(_WORD *)(&dicNpcAiId->klass->_2.bitflags2 + 3) )
            {
              p_offset = &klass->_1.interfaceOffsets->offset;
              while ( *((System_Collections_Generic_IDictionary_int__int____c **)p_offset - 1) != System_Collections_Generic_IDictionary_int__int____TypeInfo )
              {
                --v32;
                p_offset += 4;
                if ( !v32 )
                  goto LABEL_24;
              }
              p_method = (__int64)&klass->vtable[*p_offset + 1].method;
            }
            else
            {
LABEL_24:
              p_method = sub_1BB60A8(dicNpcAiId, System_Collections_Generic_IDictionary_int__int____TypeInfo, 1LL);
            }
            (*(void (__fastcall **)(System_Collections_Generic_IDictionary_int__int____o *, _QWORD, System_Collections_Generic_List_int__o *, _QWORD))p_method)(
              dicNpcAiId,
              (unsigned int)Value_long,
              v31,
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

  if ( (byte_49FC8B4 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_17038/*"battleEffectId"*/, *(_QWORD *)&defVal);
    byte_49FC8B4 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_17038/*"battleEffectId"*/, defVal, v3);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall QuestPhaseEntity__getBattleFieldMotionId(
        QuestPhaseEntity_o *this,
        int32_t defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_49FC8B6 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_19327/*"fieldMotionId"*/, *(_QWORD *)&defVal);
    byte_49FC8B6 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19327/*"fieldMotionId"*/, defVal, v3);
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
  __int64 v10; // x1

  if ( (byte_49FC8B7 & 1) == 0 )
  {
    sub_1B640C8(&int___TypeInfo, defVals);
    sub_1B640C8(&StringLiteral_19328/*"fieldMotionIds"*/, v6);
    byte_49FC8B7 = 1;
  }
  result = QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_19328/*"fieldMotionIds"*/, defVals, v3);
  if ( !result )
    goto LABEL_10;
  if ( *(_QWORD *)&result->max_length )
    return result;
  BattleFieldMotionId = QuestPhaseEntity__getBattleFieldMotionId(this, -1, v8);
  result = defVals;
  if ( BattleFieldMotionId == -1 )
    return result;
  result = (System_Int32_array *)sub_1B64170(int___TypeInfo, 1LL);
  if ( !result )
LABEL_10:
    sub_1B64324(result);
  if ( !result->max_length )
    sub_1B6432C(result, v10);
  result->m_Items[1] = BattleFieldMotionId;
  return result;
}


int32_t __fastcall QuestPhaseEntity__getBreakOnBattleWinWaitMSec(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FC8C2 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_17375/*"breakOnBattleWinWaitMSec"*/, method);
    byte_49FC8C2 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_17375/*"breakOnBattleWinWaitMSec"*/, 0, v2);
}


System_Int32_array *__fastcall QuestPhaseEntity__getEventGrounpIds(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Int32_array *v4; // x2
  const MethodInfo *v5; // x3

  if ( (byte_49FC8B8 & 1) == 0 )
  {
    sub_1B640C8(&int___TypeInfo, method);
    sub_1B640C8(&StringLiteral_19058/*"eventGroupId"*/, v3);
    byte_49FC8B8 = 1;
  }
  v4 = (System_Int32_array *)sub_1B64170(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_19058/*"eventGroupId"*/, v4, v5);
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

  if ( (byte_49FC8F4 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_19853/*"hintLeftIndent"*/, method);
    byte_49FC8F4 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19853/*"hintLeftIndent"*/, -1, v2);
}


System_String_o *__fastcall QuestPhaseEntity__getHintMessage(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1

  if ( (byte_49FC8F3 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_19854/*"hintMessage"*/, method);
    sub_1B640C8(&StringLiteral_1/*""*/, v4);
    byte_49FC8F3 = 1;
  }
  return QuestPhaseEntity__getScriptStr(
           this,
           (System_String_o *)StringLiteral_19854/*"hintMessage"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


System_String_o *__fastcall QuestPhaseEntity__getHintMessageTitle(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1

  if ( (byte_49FC8F2 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_1/*""*/, method);
    sub_1B640C8(&StringLiteral_19856/*"hintTitle"*/, v4);
    byte_49FC8F2 = 1;
  }
  return QuestPhaseEntity__getScriptStr(
           this,
           (System_String_o *)StringLiteral_19856/*"hintTitle"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


int32_t __fastcall QuestPhaseEntity__getHintOpenType(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FC8F5 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_19855/*"hintOpenType"*/, method);
    byte_49FC8F5 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19855/*"hintOpenType"*/, 0, v2);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall QuestPhaseEntity__getLeave(QuestPhaseEntity_o *this, int32_t defVal, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_49FC8B3 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_20984/*"leave"*/, *(_QWORD *)&defVal);
    byte_49FC8B3 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20984/*"leave"*/, defVal, v3);
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

  if ( (byte_49FC8AE & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_22810/*"resultBgmId"*/, *(_QWORD *)&defVal);
    byte_49FC8AE = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22810/*"resultBgmId"*/, defVal, v3);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall QuestPhaseEntity__getResultEffectId(
        QuestPhaseEntity_o *this,
        int32_t defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_49FC8B2 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_22811/*"resultEffectId"*/, *(_QWORD *)&defVal);
    byte_49FC8B2 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22811/*"resultEffectId"*/, defVal, v3);
}


System_Int32_array *__fastcall QuestPhaseEntity__getResultEnemyVoiceIds(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Int32_array *v4; // x2
  const MethodInfo *v5; // x3

  if ( (byte_49FC8BC & 1) == 0 )
  {
    sub_1B640C8(&int___TypeInfo, method);
    sub_1B640C8(&StringLiteral_22812/*"resultEnemyVoiceIds"*/, v3);
    byte_49FC8BC = 1;
  }
  v4 = (System_Int32_array *)sub_1B64170(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_22812/*"resultEnemyVoiceIds"*/, v4, v5);
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
  __int64 v12; // x1
  __int64 v13; // x2
  System_Collections_Generic_List_object__o *v14; // x19
  QuestPhaseEntity___c_c *v15; // x0
  System_Converter_object__int__o *_9__31_0; // x20
  Il2CppObject *v17; // x21
  struct QuestPhaseEntity___c_StaticFields *static_fields; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  System_Collections_Generic_List_int__o *v21; // x0

  if ( (byte_49FC8A6 & 1) == 0 )
  {
    sub_1B640C8(&System_Converter_object__int__TypeInfo, key);
    sub_1B640C8(&Method_System_Collections_Generic_List_object__ConvertAll_int___, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__ToArray__, v8);
    sub_1B640C8(&Method_QuestPhaseEntity___c__getScriptIntArrayParam_b__31_0__, v9);
    sub_1B640C8(&QuestPhaseEntity___c_TypeInfo, v10);
    byte_49FC8A6 = 1;
  }
  ScriptObjListParam = QuestPhaseEntity__getScriptObjListParam(this, key, (const MethodInfo *)defVal);
  if ( !ScriptObjListParam )
    return defVal;
  v14 = ScriptObjListParam;
  v15 = QuestPhaseEntity___c_TypeInfo;
  if ( !QuestPhaseEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestPhaseEntity___c_TypeInfo);
    v15 = QuestPhaseEntity___c_TypeInfo;
  }
  _9__31_0 = v15->static_fields->__9__31_0;
  if ( !_9__31_0 )
  {
    if ( !v15->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v15);
      v15 = QuestPhaseEntity___c_TypeInfo;
    }
    v17 = (Il2CppObject *)v15->static_fields->__9;
    _9__31_0 = (System_Converter_object__int__o *)sub_1B64314(System_Converter_object__int__TypeInfo, v12, v13);
    System_Converter_object__int____ctor(
      _9__31_0,
      v17,
      Method_QuestPhaseEntity___c__getScriptIntArrayParam_b__31_0__,
      0LL);
    static_fields = QuestPhaseEntity___c_TypeInfo->static_fields;
    static_fields->__9__31_0 = _9__31_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__31_0, (int32_t)_9__31_0, v19, v20);
  }
  v21 = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_object___ConvertAll_int_(
                                                    v14,
                                                    (System_Converter_T__TOutput__o *)_9__31_0,
                                                    (const MethodInfo_2D6F1A0 *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
  if ( !v21 )
    sub_1B64324(0LL);
  return System_Collections_Generic_List_int___ToArray(
           v21,
           (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  if ( (byte_49FC8A5 & 1) == 0 )
  {
    sub_1B640C8(&long_TypeInfo, key);
    byte_49FC8A5 = 1;
  }
  ScriptObj = QuestPhaseEntity__getScriptObj(this, key, *(const MethodInfo **)&defVal);
  if ( !ScriptObj )
    return v4;
  if ( ScriptObj->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(ScriptObj, long_TypeInfo, v8, v9);
  sub_1B645E4(ScriptObj);
  return (unsigned int)QuestPhaseEntity__getScriptObj(v11, v12, v13);
}


Il2CppObject *__fastcall QuestPhaseEntity__getScriptObj(
        QuestPhaseEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  Il2CppObject *result; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49FC8AA & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, key);
    byte_49FC8AA = 1;
  }
  result = (Il2CppObject *)this->fields.script;
  if ( result )
  {
    value = 0LL;
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)result,
           (Il2CppObject *)key,
           &value,
           (const MethodInfo_317AC04 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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

  if ( (byte_49FC8A8 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_object__ToArray__, key);
    byte_49FC8A8 = 1;
  }
  ScriptObjListParam = QuestPhaseEntity__getScriptObjListParam(this, key, (const MethodInfo *)defVal);
  if ( ScriptObjListParam )
    return System_Collections_Generic_List_object___ToArray(
             ScriptObjListParam,
             (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_object__ToArray__);
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

  if ( (byte_49FC8A9 & 1) == 0 )
  {
    sub_1B640C8(&System_Collections_Generic_List_object__TypeInfo, key);
    byte_49FC8A9 = 1;
  }
  result = (System_Collections_Generic_List_object__o *)QuestPhaseEntity__getScriptObj(this, key, method);
  if ( result )
  {
    methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (System_Collections_Generic_List_object__c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != System_Collections_Generic_List_object__TypeInfo )
    {
      sub_1B645E4(result);
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
  Il2CppObject *Item; // x0
  QuestPhaseEntity_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_49FC8AB & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    sub_1B640C8(&string_TypeInfo, v8);
    byte_49FC8AB = 1;
  }
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)key,
          (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return defVal;
  }
  v10 = this->fields.script;
  if ( !v10 )
    sub_1B64324(0LL);
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)v10,
           (Il2CppObject *)key,
           (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  defVal = (System_String_o *)Item;
  if ( !Item || (System_String_c *)Item->klass == string_TypeInfo )
    return defVal;
  sub_1B645E4(Item);
  return (System_String_o *)QuestPhaseEntity__GetOverwriteEquipSkills(v13, v14);
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
  __int64 v12; // x1
  __int64 v13; // x2
  System_Collections_Generic_List_object__o *v14; // x19
  QuestPhaseEntity___c_c *v15; // x0
  System_Converter_TInput__TOutput__o *_9__32_0; // x20
  Il2CppObject *v17; // x21
  struct QuestPhaseEntity___c_StaticFields *static_fields; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  System_Collections_Generic_List_object__o *v21; // x0

  if ( (byte_49FC8A7 & 1) == 0 )
  {
    sub_1B640C8(&System_Converter_object__string__TypeInfo, key);
    sub_1B640C8(&Method_System_Collections_Generic_List_object__ConvertAll_string___, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__ToArray__, v8);
    sub_1B640C8(&Method_QuestPhaseEntity___c__getScriptStringArrayParam_b__32_0__, v9);
    sub_1B640C8(&QuestPhaseEntity___c_TypeInfo, v10);
    byte_49FC8A7 = 1;
  }
  ScriptObjListParam = QuestPhaseEntity__getScriptObjListParam(this, key, (const MethodInfo *)defVal);
  if ( !ScriptObjListParam )
    return defVal;
  v14 = ScriptObjListParam;
  v15 = QuestPhaseEntity___c_TypeInfo;
  if ( !QuestPhaseEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestPhaseEntity___c_TypeInfo);
    v15 = QuestPhaseEntity___c_TypeInfo;
  }
  _9__32_0 = (System_Converter_TInput__TOutput__o *)v15->static_fields->__9__32_0;
  if ( !_9__32_0 )
  {
    if ( !v15->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v15);
      v15 = QuestPhaseEntity___c_TypeInfo;
    }
    v17 = (Il2CppObject *)v15->static_fields->__9;
    _9__32_0 = (System_Converter_TInput__TOutput__o *)sub_1B64314(System_Converter_object__string__TypeInfo, v12, v13);
    System_Converter_object__object____ctor(
      _9__32_0,
      v17,
      Method_QuestPhaseEntity___c__getScriptStringArrayParam_b__32_0__,
      0LL);
    static_fields = QuestPhaseEntity___c_TypeInfo->static_fields;
    static_fields->__9__32_0 = (struct System_Converter_object__string__o *)_9__32_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__32_0, (int32_t)_9__32_0, v19, v20);
  }
  v21 = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___ConvertAll_object_(
                                                       v14,
                                                       (System_Converter_T__TOutput__o *)_9__32_0,
                                                       (const MethodInfo_2D6F2A4 *)Method_System_Collections_Generic_List_object__ConvertAll_string___);
  if ( !v21 )
    sub_1B64324(0LL);
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  v21,
                                  (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_string__ToArray__);
}


int32_t __fastcall QuestPhaseEntity__getSpecialShadowEffectId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FC8CD & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_19713/*"getSpecialShadowEffectId"*/, method);
    byte_49FC8CD = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19713/*"getSpecialShadowEffectId"*/, 0, v2);
}


int32_t __fastcall QuestPhaseEntity__getTurnSituationType(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FC8CC & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_23995/*"turnSituationType"*/, method);
    byte_49FC8CC = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_23995/*"turnSituationType"*/, 0, v2);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall QuestPhaseEntity__getUniqueCameraId(
        QuestPhaseEntity_o *this,
        int32_t defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_49FC8B5 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_24080/*"uniqueCameraId"*/, *(_QWORD *)&defVal);
    byte_49FC8B5 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_24080/*"uniqueCameraId"*/, defVal, v3);
}


bool __fastcall QuestPhaseEntity__isBattleFinishCameraTargetAll(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FC8CB & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_17040/*"battleFinishCameraTargetAll"*/, method);
    byte_49FC8CB = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_17040/*"battleFinishCameraTargetAll"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__isBreakOnBattleWin(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FC8C0 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_17373/*"breakOnBattleWin"*/, method);
    byte_49FC8C0 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_17373/*"breakOnBattleWin"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__isBreakOnBattleWinFadeColorBlack(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FC8C1 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_17374/*"breakOnBattleWinFadeColorBlack"*/, method);
    byte_49FC8C1 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_17374/*"breakOnBattleWinFadeColorBlack"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__isDisableChangeRaidDownMessage(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FC8CE & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_20704/*"isDisableChangeRaidDownMessage"*/, method);
    byte_49FC8CE = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20704/*"isDisableChangeRaidDownMessage"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__isDispLoseResult(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FC8BD & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_22813/*"resultLoseDisp"*/, method);
    byte_49FC8BD = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22813/*"resultLoseDisp"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__isFadeOutBgmBeforeMovie(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FC8B1 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_6534/*"FadeOutBgmBeforeMovie"*/, method);
    byte_49FC8B1 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_6534/*"FadeOutBgmBeforeMovie"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__isNoResult(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_49FC8BF & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_22007/*"noResult"*/, method);
    byte_49FC8BF = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22007/*"noResult"*/, 0, v2) != 0;
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
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FC923 & 1) == 0 )
  {
    sub_1B640C8(&QuestPhaseEntity___c_TypeInfo, v1);
    byte_49FC923 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(QuestPhaseEntity___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  QuestPhaseEntity___c_TypeInfo->static_fields->__9 = (struct QuestPhaseEntity___c_o *)v3;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)QuestPhaseEntity___c_TypeInfo->static_fields, (int32_t)v3, v4, v5);
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

  if ( (byte_49FC925 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_1/*""*/, x);
    byte_49FC925 = 1;
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

  if ( (byte_49FC924 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_1/*""*/, x);
    byte_49FC924 = 1;
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
    sub_1B64324(this);
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