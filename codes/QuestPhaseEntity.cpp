void __fastcall QuestPhaseEntity___ctor(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B166AB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_string___ctor__, method, v2);
    byte_4B166AB = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31B2CB8 *)Method_DataEntityBase_string___ctor__);
}


void __fastcall QuestPhaseEntity___ctor_40220008(
        QuestPhaseEntity_o *this,
        QuestPhaseEntity_o *cSrc,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x0
  __int64 v8; // x1
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  struct System_Int32_array *v15; // x1
  System_Array_o *classIds; // x0
  Il2CppObject *v17; // x0
  Il2CppObject *v18; // x21
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  System_Array_o *individuality; // x0
  Il2CppObject *v26; // x0
  struct System_Int32_array *v27; // x1
  struct System_Int32_array **p_individuality; // x19

  if ( (byte_4B166AC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_string___ctor__, cSrc, method);
    sub_1BCA7E0(&int___TypeInfo, v5, v6);
    byte_4B166AC = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31B2CB8 *)Method_DataEntityBase_string___ctor__);
  if ( !cSrc )
    sub_1BCAA3C(v7, v8);
  v15 = 0LL;
  *(_QWORD *)&this->fields.questId = *(_QWORD *)&cSrc->fields.questId;
  this->fields.isNpcOnly = cSrc->fields.isNpcOnly;
  *(_OWORD *)&this->fields.battleBgId = *(_OWORD *)&cSrc->fields.battleBgId;
  classIds = (System_Array_o *)cSrc->fields.classIds;
  if ( classIds )
  {
    v17 = System_Array__Clone(classIds, 0LL);
    if ( v17 )
    {
      v18 = v17;
      v15 = (struct System_Int32_array *)sub_1BCA91C(v17, int___TypeInfo);
      if ( !v15 )
        goto LABEL_12;
    }
    else
    {
      v15 = 0LL;
    }
  }
  this->fields.classIds = v15;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.classIds, (int64_t)v15, v9, v10, v11, v12, v13, v14);
  individuality = (System_Array_o *)cSrc->fields.individuality;
  if ( !individuality )
    goto LABEL_13;
  v26 = System_Array__Clone(individuality, 0LL);
  if ( !v26 )
    goto LABEL_13;
  v18 = v26;
  v27 = (struct System_Int32_array *)sub_1BCA91C(v26, int___TypeInfo);
  if ( !v27 )
  {
LABEL_12:
    sub_1BCACFC(v18);
LABEL_13:
    v27 = 0LL;
  }
  this->fields.individuality = v27;
  p_individuality = &this->fields.individuality;
  sub_1BCA784((PartyOrganizationUtility_o *)p_individuality, (int64_t)v27, v19, v20, v21, v22, v23, v24);
  *((_DWORD *)p_individuality + 2) = cSrc->fields.giftId;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall QuestPhaseEntity__CreatePK(int32_t questId, int32_t phase, const MethodInfo *method)
{
  if ( (byte_4B166AA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&phase, method);
    byte_4B166AA = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           questId,
           phase,
           (const MethodInfo_2F10EB4 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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
  __int64 v5; // x2
  System_Collections_Generic_Dictionary_string__object__o *result; // x0
  __int64 methodPtr_low; // x9
  QuestPhaseEntity_o *v8; // x0
  int32_t v9; // w1
  const MethodInfo *v10; // x2

  if ( (byte_4B166BB & 1) == 0 )
  {
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_string__object__TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_16833/*"addEquipSkills"*/, v4, v5);
    byte_4B166BB = 1;
  }
  result = (System_Collections_Generic_Dictionary_string__object__o *)QuestPhaseEntity__getScriptObj(
                                                                        this,
                                                                        (System_String_o *)StringLiteral_16833/*"addEquipSkills"*/,
                                                                        v2);
  if ( result )
  {
    methodPtr_low = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (System_Collections_Generic_Dictionary_string__object__c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
    {
      sub_1BCACFC(result);
      return (System_Collections_Generic_Dictionary_string__object__o *)QuestPhaseEntity__getResultBgmId(v8, v9, v10);
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

  if ( (byte_4B16726 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_16845/*"addUniqueCameraIds"*/, defVal, method);
    byte_4B16726 = 1;
  }
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_16845/*"addUniqueCameraIds"*/, defVal, v3);
}


int32_t __fastcall QuestPhaseEntity__GetAdvantageClassId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B166EA & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_17158/*"auto_sel_support_type"*/, method, v2);
    byte_4B166EA = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_17158/*"auto_sel_support_type"*/, -1, v3);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetAssistIdArray(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  System_Int32_array *v6; // x2
  const MethodInfo *v7; // x3

  if ( (byte_4B166F9 & 1) == 0 )
  {
    sub_1BCA7E0(&int___TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_17111/*"assistIds"*/, v4, v5);
    byte_4B166F9 = 1;
  }
  v6 = (System_Int32_array *)sub_1BCA888(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_17111/*"assistIds"*/, v6, v7);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetAssistWeightArray(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  System_Int32_array *v6; // x2
  const MethodInfo *v7; // x3

  if ( (byte_4B166FA & 1) == 0 )
  {
    sub_1BCA7E0(&int___TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_17110/*"assistIdWeight"*/, v4, v5);
    byte_4B166FA = 1;
  }
  v6 = (System_Int32_array *)sub_1BCA888(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_17110/*"assistIdWeight"*/, v6, v7);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetAssumedEffectId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1670C & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_17114/*"assumedEffectId"*/, method, v2);
    byte_4B1670C = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_17114/*"assumedEffectId"*/, 0LL);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetBattleEffectMovieIds(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1672E & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_3261/*"BattleEffectMovieIds"*/, method, v2);
    byte_4B1672E = 1;
  }
  return EntityScriptUtil__GetIntArray(this->fields.script, (System_String_o *)StringLiteral_3261/*"BattleEffectMovieIds"*/, 0LL, 0LL);
}


System_String_o *__fastcall QuestPhaseEntity__GetBattleFinishMovie(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B166D1 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_17281/*"battleFinishMovie"*/, method, v2);
    byte_4B166D1 = 1;
  }
  return QuestPhaseEntity__getScriptStr(this, (System_String_o *)StringLiteral_17281/*"battleFinishMovie"*/, 0LL, v3);
}


int32_t __fastcall QuestPhaseEntity__GetBattleFinishWaitTime(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B16715 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_17282/*"battleFinishWaitTime"*/, method, v2);
    byte_4B16715 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_17282/*"battleFinishWaitTime"*/, 0, v3);
}


int32_t __fastcall QuestPhaseEntity__GetBattleItemObjectId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B16723 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_17286/*"battleItemObjectId"*/, method, v2);
    byte_4B16723 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_17286/*"battleItemObjectId"*/, 0, v3);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall QuestPhaseEntity__GetBeforeBattleSkillActor(
        QuestPhaseEntity_o *this,
        int32_t defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4B16716 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_17327/*"beforeBattleSkillActor"*/, *(_QWORD *)&defVal, method);
    byte_4B16716 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_17327/*"beforeBattleSkillActor"*/, defVal, v3);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetBgIndividuality(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Master_object; // x20
  const MethodInfo *v9; // x1
  int32_t PriorityBattleBgId; // w21
  const MethodInfo *v11; // x1
  __int64 PriorityBattleBgType; // x0
  __int64 v13; // x1
  System_Int32_array *result; // x0
  __int64 v15; // x1
  long double inited; // q0
  _QWORD *v17; // x19
  __int64 v18; // x8
  __int64 v19; // x0
  __int64 v20; // x0

  if ( (byte_4B166B0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_Empty_int___, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMaster_BattleBgMaster___, v4, v5);
    sub_1BCA7E0(&DataManager_TypeInfo, v6, v7);
    byte_4B166B0 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_BattleBgMaster___);
  PriorityBattleBgId = QuestPhaseEntity__GetPriorityBattleBgId(this, v9);
  PriorityBattleBgType = QuestPhaseEntity__GetPriorityBattleBgType(this, v11);
  if ( !Master_object )
    sub_1BCAA3C(PriorityBattleBgType, v13);
  result = BattleBgMaster__GetBgIndividuality(
             (BattleBgMaster_o *)Master_object,
             PriorityBattleBgId,
             PriorityBattleBgType,
             0LL);
  if ( !result )
  {
    v17 = Method_System_Array_Empty_int___;
    v18 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v18 )
    {
      sub_1C1C718(Method_System_Array_Empty_int___, v15);
      v18 = v17[7];
    }
    v19 = *(_QWORD *)(v18 + 16);
    if ( (*(_BYTE *)(v19 + 309) & 1) == 0 )
      v19 = sub_1C1C6BC(inited);
    if ( !*(_DWORD *)(v19 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v19, v15);
    v20 = *(_QWORD *)(v17[7] + 16LL);
    if ( (*(_BYTE *)(v20 + 309) & 1) == 0 )
      v20 = sub_1C1C6BC(inited);
    return **(System_Int32_array ***)(v20 + 184);
  }
  return result;
}


System_Int32_array *__fastcall QuestPhaseEntity__GetClearGiftItemListDisplay(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  System_Int32_array *v6; // x2
  const MethodInfo *v7; // x3

  if ( (byte_4B16709 & 1) == 0 )
  {
    sub_1BCA7E0(&int___TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_18187/*"clearGiftItemListDisplay"*/, v4, v5);
    byte_4B16709 = 1;
  }
  v6 = (System_Int32_array *)sub_1BCA888(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_18187/*"clearGiftItemListDisplay"*/, v6, v7);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetCondHavingIds(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  System_Int32_array *v6; // x2
  const MethodInfo *v7; // x3

  if ( (byte_4B166F5 & 1) == 0 )
  {
    sub_1BCA7E0(&int___TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_18381/*"condHaving"*/, v4, v5);
    byte_4B166F5 = 1;
  }
  v6 = (System_Int32_array *)sub_1BCA888(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_18381/*"condHaving"*/, v6, v7);
}


int32_t __fastcall QuestPhaseEntity__GetCondQuestClearable(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B1672A & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_18384/*"condQuestClearable"*/, method, v2);
    byte_4B1672A = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_18384/*"condQuestClearable"*/, 0, v3);
}


int32_t __fastcall QuestPhaseEntity__GetCorrectionIconId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B166E9 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_18455/*"correctionIconId"*/, method, v2);
    byte_4B166E9 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_18455/*"correctionIconId"*/, -1, v3);
}


int32_t __fastcall QuestPhaseEntity__GetDefenceTargetContinueRecoverRate(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B16720 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_19598/*"fieldHpContinueRecoverRate"*/, method, v2);
    byte_4B16720 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19598/*"fieldHpContinueRecoverRate"*/, 0, v3);
}


System_String_o *__fastcall QuestPhaseEntity__GetEffectOnMap(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B16733 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_10786/*"PlayGetEffectOnMap"*/, method, v2);
    byte_4B16733 = 1;
  }
  return QuestPhaseEntity__getScriptStr(this, (System_String_o *)StringLiteral_10786/*"PlayGetEffectOnMap"*/, 0LL, v3);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetEnemyInfoDispNpcSvtIdList(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  System_Int32_array *v6; // x2
  const MethodInfo *v7; // x3

  if ( (byte_4B16707 & 1) == 0 )
  {
    sub_1BCA7E0(&int___TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_22628/*"overwriteEnemyInfos"*/, v4, v5);
    byte_4B16707 = 1;
  }
  v6 = (System_Int32_array *)sub_1BCA888(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_22628/*"overwriteEnemyInfos"*/, v6, v7);
}


System_String_array *__fastcall QuestPhaseEntity__GetEnemyInfoOverwriteNpcSvtNameList(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  System_String_array *v6; // x2
  const MethodInfo *v7; // x3

  if ( (byte_4B16708 & 1) == 0 )
  {
    sub_1BCA7E0(&string___TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_22627/*"overwriteEnemyInfoNames"*/, v4, v5);
    byte_4B16708 = 1;
  }
  v6 = (System_String_array *)sub_1BCA888(string___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptStringArrayParam(this, (System_String_o *)StringLiteral_22627/*"overwriteEnemyInfoNames"*/, v6, v7);
}


int32_t __fastcall QuestPhaseEntity__GetEquipAddId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B16706 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_19242/*"equipAddId"*/, method, v2);
    byte_4B16706 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19242/*"equipAddId"*/, 0, v3);
}


int32_t __fastcall QuestPhaseEntity__GetFinishEffectId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B166E6 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_19637/*"finishEffectId"*/, method, v2);
    byte_4B166E6 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19637/*"finishEffectId"*/, -1, v3);
}


int32_t __fastcall QuestPhaseEntity__GetFormationBgmId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B1670D & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_19750/*"formationBgmId"*/, method, v2);
    byte_4B1670D = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19750/*"formationBgmId"*/, -1, v3);
}


float __fastcall QuestPhaseEntity__GetFormationSubBgmFadeInTime(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B1670F & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_19751/*"formationSubBgmFadeInTime"*/, method, v2);
    byte_4B1670F = 1;
  }
  return (float)QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19751/*"formationSubBgmFadeInTime"*/, 0, v3) / 1000.0;
}


int32_t __fastcall QuestPhaseEntity__GetFormationSubBgmId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B1670E & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_19752/*"formationSubBgmId"*/, method, v2);
    byte_4B1670E = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19752/*"formationSubBgmId"*/, -1, v3);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetGimmickAnimTypeArray(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B166E4 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_20025/*"gimmickAnimType"*/, method, v2);
    byte_4B166E4 = 1;
  }
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_20025/*"gimmickAnimType"*/, 0LL, v3);
}


int32_t __fastcall QuestPhaseEntity__GetGimmickId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B166DD & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_20026/*"gimmickId"*/, method, v2);
    byte_4B166DD = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20026/*"gimmickId"*/, -1, v3);
}


System_Object_array *__fastcall QuestPhaseEntity__GetGimmickResultVoiceArray(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B166E3 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_23156/*"resultVoice"*/, method, v2);
    byte_4B166E3 = 1;
  }
  return QuestPhaseEntity__getScriptObjArrayParam(this, (System_String_o *)StringLiteral_23156/*"resultVoice"*/, 0LL, v3);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetGimmickSkillIdArray(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  System_Int32_array *v6; // x2
  const MethodInfo *v7; // x3

  if ( (byte_4B166E0 & 1) == 0 )
  {
    sub_1BCA7E0(&int___TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_23068/*"reelSkill"*/, v4, v5);
    byte_4B166E0 = 1;
  }
  v6 = (System_Int32_array *)sub_1BCA888(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_23068/*"reelSkill"*/, v6, v7);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetGimmickSkillRateArray(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  System_Int32_array *v6; // x2
  const MethodInfo *v7; // x3

  if ( (byte_4B166E1 & 1) == 0 )
  {
    sub_1BCA7E0(&int___TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_23067/*"reelRate"*/, v4, v5);
    byte_4B166E1 = 1;
  }
  v6 = (System_Int32_array *)sub_1BCA888(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_23067/*"reelRate"*/, v6, v7);
}


System_String_array *__fastcall QuestPhaseEntity__GetGimmickStartVoiceArray(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B166E2 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_23747/*"startVoice"*/, method, v2);
    byte_4B166E2 = 1;
  }
  return QuestPhaseEntity__getScriptStringArrayParam(this, (System_String_o *)StringLiteral_23747/*"startVoice"*/, 0LL, v3);
}


int32_t __fastcall QuestPhaseEntity__GetGimmickSvtId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B166DE & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_20027/*"gimmickSvtId"*/, method, v2);
    byte_4B166DE = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20027/*"gimmickSvtId"*/, -1, v3);
}


int32_t __fastcall QuestPhaseEntity__GetIconItemNumberDispType(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B16725 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_20289/*"iconItemNumberDispType"*/, method, v2);
    byte_4B16725 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20289/*"iconItemNumberDispType"*/, 0, v3);
}


float __fastcall QuestPhaseEntity__GetIncomingCallDispTime(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B16719 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_20840/*"incomingCallDispTime"*/, method, v2);
    byte_4B16719 = 1;
  }
  return (float)QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20840/*"incomingCallDispTime"*/, 500, v3) / 1000.0;
}


System_String_o *__fastcall QuestPhaseEntity__GetIncomingCallMessage(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2

  if ( (byte_4B16718 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_20841/*"incomingCallMessage"*/, method, v2);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v5, v6);
    byte_4B16718 = 1;
  }
  return QuestPhaseEntity__getScriptStr(
           this,
           (System_String_o *)StringLiteral_20841/*"incomingCallMessage"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v3);
}


System_String_o *__fastcall QuestPhaseEntity__GetIncomingCallTitle(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2

  if ( (byte_4B16717 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_20842/*"incomingCallTitle"*/, method, v2);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v5, v6);
    byte_4B16717 = 1;
  }
  return QuestPhaseEntity__getScriptStr(
           this,
           (System_String_o *)StringLiteral_20842/*"incomingCallTitle"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v3);
}


System_String_o *__fastcall QuestPhaseEntity__GetMapModelEntryAnimationName(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2

  if ( (byte_4B16713 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1485/*"3dMapEntryAnimName"*/, method, v2);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v5, v6);
    byte_4B16713 = 1;
  }
  return QuestPhaseEntity__getScriptStr(
           this,
           (System_String_o *)StringLiteral_1485/*"3dMapEntryAnimName"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v3);
}


int32_t __fastcall QuestPhaseEntity__GetMasterSkillDelay(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B166EF & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_21546/*"masterSkillDelay"*/, method, v2);
    byte_4B166EF = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21546/*"masterSkillDelay"*/, 0, v3);
}


System_String_o *__fastcall QuestPhaseEntity__GetMasterSkillDelayInfo(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B166F0 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_21547/*"masterSkillDelayInfo"*/, method, v2);
    byte_4B166F0 = 1;
  }
  return QuestPhaseEntity__getScriptStr(this, (System_String_o *)StringLiteral_21547/*"masterSkillDelayInfo"*/, 0LL, v3);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetMoveSceneInfo(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  System_Int32_array *v6; // x2
  const MethodInfo *v7; // x3

  if ( (byte_4B1671B & 1) == 0 )
  {
    sub_1BCA7E0(&int___TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_21752/*"moveSceneInfo"*/, v4, v5);
    byte_4B1671B = 1;
  }
  v6 = (System_Int32_array *)sub_1BCA888(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_21752/*"moveSceneInfo"*/, v6, v7);
}


int32_t __fastcall QuestPhaseEntity__GetMovieAfterCrossFadeStartFrame(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B166D8 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_21757/*"movieAfterCrossFadeStartFrame"*/, method, v2);
    byte_4B166D8 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21757/*"movieAfterCrossFadeStartFrame"*/, 0, v3);
}


int32_t __fastcall QuestPhaseEntity__GetMovieAfterCrossFadeTime(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B166D7 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_21758/*"movieAfterCrossFadeTime"*/, method, v2);
    byte_4B166D7 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21758/*"movieAfterCrossFadeTime"*/, 0, v3);
}


int32_t __fastcall QuestPhaseEntity__GetNextSceneId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B166F3 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_22287/*"nextSceneId"*/, method, v2);
    byte_4B166F3 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22287/*"nextSceneId"*/, 0, v3);
}


System_String_array *__fastcall QuestPhaseEntity__GetNextSceneParam(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  System_String_array *result; // x0

  if ( (byte_4B166F4 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_22288/*"nextSceneParam"*/, method, v2);
    byte_4B166F4 = 1;
  }
  result = (System_String_array *)QuestPhaseEntity__getScriptStr(this, (System_String_o *)StringLiteral_22288/*"nextSceneParam"*/, 0LL, v3);
  if ( result )
    return System_String__Split((System_String_o *)result, 0x2Cu, 0, 0LL);
  return result;
}


int32_t __fastcall QuestPhaseEntity__GetNotDispEquipSkillChargeTurn(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B16724 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_22380/*"notDispEquipSkillChargeTurn"*/, method, v2);
    byte_4B16724 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22380/*"notDispEquipSkillChargeTurn"*/, 0, v3);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetNotHavingQuests(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  System_Int32_array *v6; // x2
  const MethodInfo *v7; // x3

  if ( (byte_4B166F6 & 1) == 0 )
  {
    sub_1BCA7E0(&int___TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_22384/*"notHavingQuest"*/, v4, v5);
    byte_4B166F6 = 1;
  }
  v6 = (System_Int32_array *)sub_1BCA888(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_22384/*"notHavingQuest"*/, v6, v7);
}


System_Collections_Generic_Dictionary_int__int____o *__fastcall QuestPhaseEntity__GetNpcAiInfo(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x21
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  System_Collections_Generic_Dictionary_int__object__o *v27; // x22
  struct System_Collections_Generic_Dictionary_string__object__o *v28; // x0
  __int64 v29; // x1
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  System_Collections_Generic_Dictionary_int__int____o **v36; // x20
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v38; // x2
  __int64 v39; // x3
  Il2CppObject *v40; // x22
  __int64 methodPtr_low; // x10
  const MethodInfo *v42; // x2
  System_Action_object__o *v44; // x19
  Il2CppObject *obj; // [xsp+0h] [xbp-40h] BYREF
  Il2CppObject *value; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B16704 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_object__TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int_____ctor__, v7, v8);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_int__int____TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_object__ForEach__, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_List_object__TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_QuestPhaseEntity___c__DisplayClass113_0__GetNpcAiInfo_b__0__, v15, v16);
    sub_1BCA7E0(&QuestPhaseEntity___c__DisplayClass113_0_TypeInfo, v17, v18);
    sub_1BCA7E0(&StringLiteral_16887/*"aiMultiNpc"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_16888/*"aiNpc"*/, v21, v22);
    byte_4B16704 = 1;
  }
  obj = 0LL;
  value = 0LL;
  v23 = sub_1BCAA2C(QuestPhaseEntity___c__DisplayClass113_0_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v23, 0LL);
  v27 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BCAA2C(
                                                                  System_Collections_Generic_Dictionary_int__int____TypeInfo,
                                                                  v24,
                                                                  v25,
                                                                  v26);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v27,
    (const MethodInfo_3205510 *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  if ( !v23 )
    goto LABEL_14;
  *(_QWORD *)(v23 + 16) = v27;
  v36 = (System_Collections_Generic_Dictionary_int__int____o **)(v23 + 16);
  sub_1BCA784((PartyOrganizationUtility_o *)(v23 + 16), (int64_t)v27, v30, v31, v32, v33, v34, v35);
  script = this->fields.script;
  if ( !script )
    return *v36;
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)script,
         (Il2CppObject *)StringLiteral_16887/*"aiMultiNpc"*/,
         &value,
         (const MethodInfo_3266A6C *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    v40 = value;
    if ( value )
    {
      methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(value->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
        && (System_Collections_Generic_List_object__c *)value->klass->_2.typeHierarchy[methodPtr_low - 1] == System_Collections_Generic_List_object__TypeInfo )
      {
        v44 = (System_Action_object__o *)sub_1BCAA2C(System_Action_object__TypeInfo, v29, v38, v39);
        System_Action_object____ctor(
          v44,
          (Il2CppObject *)v23,
          Method_QuestPhaseEntity___c__DisplayClass113_0__GetNpcAiInfo_b__0__,
          0LL);
        System_Collections_Generic_List_object___ForEach(
          (System_Collections_Generic_List_object__o *)v40,
          (System_Action_T__o *)v44,
          (const MethodInfo_35A269C *)Method_System_Collections_Generic_List_object__ForEach__);
        return *v36;
      }
    }
  }
  v28 = this->fields.script;
  if ( !v28 )
LABEL_14:
    sub_1BCAA3C(v28, v29);
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)v28,
         (Il2CppObject *)StringLiteral_16888/*"aiNpc"*/,
         &obj,
         (const MethodInfo_3266A6C *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    QuestPhaseEntity__SetNpcAiInfo((System_Collections_Generic_IDictionary_int__int____o *)*v36, obj, v42);
  }
  return *v36;
}


int32_t __fastcall QuestPhaseEntity__GetOverWriteMasterImageId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B166D5 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_21536/*"masterImageId"*/, method, v2);
    byte_4B166D5 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21536/*"masterImageId"*/, 0, v3);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall QuestPhaseEntity__GetOverwriteCommandSpellContinue(
        QuestPhaseEntity_o *this,
        int32_t def,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4B166FE & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_22619/*"overwriteCommandSpellContinue"*/, *(_QWORD *)&def, method);
    byte_4B166FE = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22619/*"overwriteCommandSpellContinue"*/, def, v3);
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

  if ( (byte_4B16711 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_22620/*"overwriteCommandSpellIcons"*/, *(_QWORD *)&genderType, defVal);
    byte_4B16711 = 1;
  }
  ScriptIntArrayParam = QuestPhaseEntity__getScriptIntArrayParam(
                          this,
                          (System_String_o *)StringLiteral_22620/*"overwriteCommandSpellIcons"*/,
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
    sub_1BCAA44(ScriptIntArrayParam, v8);
  }
  return (int)ScriptIntArrayParam;
}


System_Collections_Generic_Dictionary_string__object__o *__fastcall QuestPhaseEntity__GetOverwriteEquipSkills(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  System_Collections_Generic_Dictionary_string__object__o *result; // x0
  __int64 methodPtr_low; // x9
  QuestPhaseEntity_o *v8; // x0
  const MethodInfo *v9; // x1

  if ( (byte_4B166BA & 1) == 0 )
  {
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_string__object__TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_22630/*"overwriteEquipSkills"*/, v4, v5);
    byte_4B166BA = 1;
  }
  result = (System_Collections_Generic_Dictionary_string__object__o *)QuestPhaseEntity__getScriptObj(
                                                                        this,
                                                                        (System_String_o *)StringLiteral_22630/*"overwriteEquipSkills"*/,
                                                                        v2);
  if ( result )
  {
    methodPtr_low = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (System_Collections_Generic_Dictionary_string__object__c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
    {
      sub_1BCACFC(result);
      return QuestPhaseEntity__GetAddEquipSkills(v8, v9);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  System_Int32_array *ScriptIntArrayParam; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  int64_t v20; // x2
  const MethodInfo *v21; // x3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  System_Int32_array *v26; // x0
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  const MethodInfo *v33; // x3
  System_Int32_array *v34; // x0
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7

  if ( (byte_4B166EB & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_22634/*"overwriteLimitCountSvtIds"*/, overwriteLimitCountSvtIds, overwriteLimitCounts);
    sub_1BCA7E0(&StringLiteral_22635/*"overwriteLimitCounts"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_22633/*"overwriteLimitCountIconIds"*/, v11, v12);
    byte_4B166EB = 1;
  }
  ScriptIntArrayParam = QuestPhaseEntity__getScriptIntArrayParam(
                          this,
                          (System_String_o *)StringLiteral_22634/*"overwriteLimitCountSvtIds"*/,
                          0LL,
                          (const MethodInfo *)overwriteLimitCountIconIds);
  *overwriteLimitCountSvtIds = ScriptIntArrayParam;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)overwriteLimitCountSvtIds,
    (int64_t)ScriptIntArrayParam,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  if ( *overwriteLimitCountSvtIds )
  {
    v26 = QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_22635/*"overwriteLimitCounts"*/, 0LL, v21);
    *overwriteLimitCounts = v26;
    sub_1BCA784((PartyOrganizationUtility_o *)overwriteLimitCounts, (int64_t)v26, v27, v28, v29, v30, v31, v32);
    v34 = QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_22633/*"overwriteLimitCountIconIds"*/, 0LL, v33);
    *overwriteLimitCountIconIds = v34;
    sub_1BCA784((PartyOrganizationUtility_o *)overwriteLimitCountIconIds, (int64_t)v34, v35, v36, v37, v38, v39, v40);
    return *overwriteLimitCounts != 0LL;
  }
  else
  {
    *overwriteLimitCounts = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)overwriteLimitCounts, 0LL, v20, (int32_t)v21, v22, v23, v24, v25);
    *overwriteLimitCountIconIds = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)overwriteLimitCountIconIds, 0LL, v42, v43, v44, v45, v46, v47);
    return 0;
  }
}


System_Int32_array *__fastcall QuestPhaseEntity__GetOverwriteResultBgmCondIds(
        QuestPhaseEntity_o *this,
        System_Int32_array *defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4B166BE & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_22643/*"overwriteResultBgmCondIds"*/, defVal, method);
    byte_4B166BE = 1;
  }
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_22643/*"overwriteResultBgmCondIds"*/, defVal, v3);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetOverwriteResultBgmIds(
        QuestPhaseEntity_o *this,
        System_Int32_array *defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4B166BD & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_22644/*"overwriteResultBgmIds"*/, defVal, method);
    byte_4B166BD = 1;
  }
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_22644/*"overwriteResultBgmIds"*/, defVal, v3);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetPrioredIndividuality(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  System_Int32_array *result; // x0
  __int64 v5; // x1
  long double inited; // q0
  _QWORD *v7; // x19
  __int64 v8; // x8
  __int64 v9; // x0
  __int64 v10; // x0

  if ( (byte_4B166AE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_Empty_int___, method, v2);
    byte_4B166AE = 1;
  }
  result = QuestPhaseEntity__GetPrioredIndividualityLocal(this, method);
  if ( !result )
  {
    v7 = Method_System_Array_Empty_int___;
    v8 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v8 )
    {
      sub_1C1C718(Method_System_Array_Empty_int___, v5);
      v8 = v7[7];
    }
    v9 = *(_QWORD *)(v8 + 16);
    if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
      v9 = sub_1C1C6BC(inited);
    if ( !*(_DWORD *)(v9 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v9, v5);
    v10 = *(_QWORD *)(v7[7] + 16LL);
    if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
      v10 = sub_1C1C6BC(inited);
    return **(System_Int32_array ***)(v10 + 184);
  }
  return result;
}


System_Int32_array *__fastcall QuestPhaseEntity__GetPrioredIndividualityLocal(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Master_object; // x20
  const MethodInfo *v9; // x1
  System_Int32_array *UniqueId; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x3
  System_Int32_array *result; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x1
  QuestPhaseIndividualityEntity_o *v16; // x20
  const MethodInfo *v17; // x2
  QuestPhaseIndividualityEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B166AF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_QuestBehaviorMaster___, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMaster_QuestPhaseIndividualityMaster___, v4, v5);
    sub_1BCA7E0(&DataManager_TypeInfo, v6, v7);
    byte_4B166AF = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_QuestBehaviorMaster___);
  UniqueId = (System_Int32_array *)QuestPhaseEntity__GetUniqueId(this, v9);
  if ( !Master_object )
    goto LABEL_15;
  result = QuestBehaviorMaster__GetBattleIndividuality(
             (QuestBehaviorMaster_o *)Master_object,
             (int64_t)UniqueId,
             0LL,
             v12);
  if ( !result )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v14);
    UniqueId = (System_Int32_array *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_QuestPhaseIndividualityMaster___);
    if ( !UniqueId )
      goto LABEL_15;
    if ( QuestPhaseIndividualityMaster__TryGetEntity(
           (QuestPhaseIndividualityMaster_o *)UniqueId,
           &entity,
           this->fields.questId,
           this->fields.phase,
           0LL) )
    {
      v16 = entity;
      UniqueId = QuestPhaseEntity__GetBgIndividuality(this, v15);
      if ( v16 )
        return QuestPhaseIndividualityEntity__GetAddAndDelAfterIndividuality(v16, UniqueId, v17);
LABEL_15:
      sub_1BCAA3C(UniqueId, v11);
    }
    return this->fields.individuality;
  }
  return result;
}


int32_t __fastcall QuestPhaseEntity__GetPriorityBattleBgId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *Master_object; // x20
  const MethodInfo *v7; // x1
  int64_t UniqueId; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x3

  if ( (byte_4B166B1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_QuestBehaviorMaster___, method, v2);
    sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    byte_4B166B1 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_QuestBehaviorMaster___);
  UniqueId = QuestPhaseEntity__GetUniqueId(this, v7);
  if ( !Master_object )
    sub_1BCAA3C(UniqueId, v9);
  return QuestBehaviorMaster__GetBattleBg(
           (QuestBehaviorMaster_o *)Master_object,
           UniqueId,
           this->fields.battleBgId,
           v10);
}


int32_t __fastcall QuestPhaseEntity__GetPriorityBattleBgType(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *Master_object; // x20
  const MethodInfo *v7; // x1
  int64_t UniqueId; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x3

  if ( (byte_4B166B2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_QuestBehaviorMaster___, method, v2);
    sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    byte_4B166B2 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_QuestBehaviorMaster___);
  UniqueId = QuestPhaseEntity__GetUniqueId(this, v7);
  if ( !Master_object )
    sub_1BCAA3C(UniqueId, v9);
  return QuestBehaviorMaster__GetBattleBgType(
           (QuestBehaviorMaster_o *)Master_object,
           UniqueId,
           this->fields.battleBgType,
           v10);
}


int32_t __fastcall QuestPhaseEntity__GetProgressAfterMovie(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B166D3 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_22864/*"progressAfterMovie"*/, method, v2);
    byte_4B166D3 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22864/*"progressAfterMovie"*/, 0, v3);
}


int32_t __fastcall QuestPhaseEntity__GetQuestPhaseSelectRoute(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  int32_t ScriptIntParam; // w0
  int32_t v8; // w19
  Il2CppObject *Instance; // x0
  __int64 v10; // x1

  if ( (byte_4B166C8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, method, v2);
    sub_1BCA7E0(&StringLiteral_22758/*"phaseRouteSelect"*/, v5, v6);
    byte_4B166C8 = 1;
  }
  ScriptIntParam = QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22758/*"phaseRouteSelect"*/, 0, v3);
  if ( ScriptIntParam < 1 )
    return 0;
  v8 = ScriptIntParam;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v10);
  if ( clsQuestCheck__CheckQuestPlayableNow((clsQuestCheck_o *)Instance, v8, 0LL) )
    return v8;
  else
    return 0;
}


System_Int32_array *__fastcall QuestPhaseEntity__GetReelIconIdArray(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  System_Int32_array *v6; // x2
  const MethodInfo *v7; // x3

  if ( (byte_4B166DF & 1) == 0 )
  {
    sub_1BCA7E0(&int___TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_23066/*"reelIcon"*/, v4, v5);
    byte_4B166DF = 1;
  }
  v6 = (System_Int32_array *)sub_1BCA888(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_23066/*"reelIcon"*/, v6, v7);
}


int32_t __fastcall QuestPhaseEntity__GetReferToQuestPhase(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B1672B & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_23072/*"referToQuestPhase"*/, method, v2);
    byte_4B1672B = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_23072/*"referToQuestPhase"*/, 0, v3);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetSelectableQuests(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B166C7 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_22936/*"questSelect"*/, method, v2);
    byte_4B166C7 = 1;
  }
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_22936/*"questSelect"*/, 0LL, v3);
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
      sub_1BCAA44(SelectableQuests, v8);
    return SelectableQuests->m_Items[selectIndex + 1];
  }
  return result;
}


System_Int32_array *__fastcall QuestPhaseEntity__GetShadowOffSvtIds(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  System_Int32_array *v6; // x2
  const MethodInfo *v7; // x3

  if ( (byte_4B166EE & 1) == 0 )
  {
    sub_1BCA7E0(&int___TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_23493/*"shadowOffSvtIds"*/, v4, v5);
    byte_4B166EE = 1;
  }
  v6 = (System_Int32_array *)sub_1BCA888(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_23493/*"shadowOffSvtIds"*/, v6, v7);
}


int32_t __fastcall QuestPhaseEntity__GetSingleForceSvtId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B166EC & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_23581/*"singleForceSvtId"*/, method, v2);
    byte_4B166EC = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_23581/*"singleForceSvtId"*/, 0, v3);
}


int32_t __fastcall QuestPhaseEntity__GetStartBattleSoundMode(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B16729 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_13110/*"StartBattleSoundMode"*/, method, v2);
    byte_4B16729 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_13110/*"StartBattleSoundMode"*/, 0, v3);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetStartMovieWave(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B166D4 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_21762/*"movieWave"*/, method, v2);
    byte_4B166D4 = 1;
  }
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_21762/*"movieWave"*/, 0LL, v3);
}


int32_t __fastcall QuestPhaseEntity__GetStartScreenEffect(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B16728 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_13109/*"StartBattleScreenEffect"*/, method, v2);
    byte_4B16728 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_13109/*"StartBattleScreenEffect"*/, 0, v3);
}


int32_t __fastcall QuestPhaseEntity__GetSupportInitDeckIndex(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B166FF & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_19327/*"eventDeckIndex"*/, method, v2);
    byte_4B166FF = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19327/*"eventDeckIndex"*/, 0, v3);
}


int32_t __fastcall QuestPhaseEntity__GetTemporaryCommandSpell(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B166FC & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_24135/*"temporaryCommandSpell"*/, method, v2);
    byte_4B166FC = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_24135/*"temporaryCommandSpell"*/, -1, v3);
}


int64_t __fastcall QuestPhaseEntity__GetUniqueId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t phase; // w19
  int32_t questId; // w20

  if ( (byte_4B166AD & 1) == 0 )
  {
    sub_1BCA7E0(&BattleDataDefine_TypeInfo, method, v2);
    byte_4B166AD = 1;
  }
  questId = this->fields.questId;
  phase = this->fields.phase;
  if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo, method);
  return BattleDataDefine__MakeQuestPhaseUniqueId(questId, phase, 0LL);
}


int32_t __fastcall QuestPhaseEntity__GetUserEventDeckNo(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B166ED & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_24608/*"useEventDeckNo"*/, method, v2);
    byte_4B166ED = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_24608/*"useEventDeckNo"*/, 1, v3);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetVoiceOffPlayerSvtIdArray(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16710 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_24842/*"voiceOffMySvtIds"*/, method, v2);
    byte_4B16710 = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_24842/*"voiceOffMySvtIds"*/, 0LL);
}


System_String_o *__fastcall QuestPhaseEntity__GetWarBoardStartMovieName(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2

  if ( (byte_4B1670A & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_15760/*"WarBoardStartMovieName"*/, method, v2);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v5, v6);
    byte_4B1670A = 1;
  }
  return QuestPhaseEntity__getScriptStr(
           this,
           (System_String_o *)StringLiteral_15760/*"WarBoardStartMovieName"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v3);
}


System_String_array *__fastcall QuestPhaseEntity__GetWaveStartMovie(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B166D2 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_24922/*"waveStartMovie"*/, method, v2);
    byte_4B166D2 = 1;
  }
  return QuestPhaseEntity__getScriptStringArrayParam(this, (System_String_o *)StringLiteral_24922/*"waveStartMovie"*/, 0LL, v3);
}


int32_t __fastcall QuestPhaseEntity__GetWinBgmOffFlg(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B166E7 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_19194/*"endBgmOff"*/, method, v2);
    byte_4B166E7 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19194/*"endBgmOff"*/, 0, v3);
}


int32_t __fastcall QuestPhaseEntity__GetWinVoiceOffFlg(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B166E5 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_19208/*"endVoiceOff"*/, method, v2);
    byte_4B166E5 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19208/*"endVoiceOff"*/, 0, v3);
}


bool __fastcall QuestPhaseEntity__HasReleaseFocusQuestBoardKey(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16721 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_21040/*"isReleaseFocus"*/, method, v2);
    byte_4B16721 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_21040/*"isReleaseFocus"*/, 0LL);
}


bool __fastcall QuestPhaseEntity__IsActiveAssistSkill(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  System_Int32_array *v6; // x0
  const MethodInfo *v7; // x3
  System_Int32_array *ScriptIntArrayParam; // x0
  __int64 v9; // x1

  if ( (byte_4B166F8 & 1) == 0 )
  {
    sub_1BCA7E0(&int___TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_17111/*"assistIds"*/, v4, v5);
    byte_4B166F8 = 1;
  }
  v6 = (System_Int32_array *)sub_1BCA888(int___TypeInfo, 0LL);
  ScriptIntArrayParam = QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_17111/*"assistIds"*/, v6, v7);
  if ( !ScriptIntArrayParam )
    sub_1BCAA3C(0LL, v9);
  return ScriptIntArrayParam->max_length != 0;
}


bool __fastcall QuestPhaseEntity__IsAreaImporveQuest(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4B1670B & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_17057/*"areaImprovementQuest"*/, method, v2);
    byte_4B1670B = 1;
  }
  return QuestPhaseEntity__getScriptObj(this, (System_String_o *)StringLiteral_17057/*"areaImprovementQuest"*/, v2) != 0LL;
}


bool __fastcall QuestPhaseEntity__IsAutoExecute(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16732 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_21007/*"isAutoExecute"*/, method, v2);
    byte_4B16732 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_21007/*"isAutoExecute"*/, 0LL);
}


bool __fastcall QuestPhaseEntity__IsContinueWaveRestart(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B1671F & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_18431/*"continueWaveRestart"*/, method, v2);
    byte_4B1671F = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_18431/*"continueWaveRestart"*/, 0, v3) != 0;
}


bool __fastcall QuestPhaseEntity__IsFadeOutMainBgmBeforeBattle(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1672C & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_19570/*"fadeOutMainBgmBeforeBattle"*/, method, v2);
    byte_4B1672C = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_19570/*"fadeOutMainBgmBeforeBattle"*/, 0LL);
}


bool __fastcall QuestPhaseEntity__IsHideAssistConfButton(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B166FB & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_20123/*"hideAssistConfButton"*/, method, v2);
    byte_4B166FB = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20123/*"hideAssistConfButton"*/, 0, v3) != 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestPhaseEntity__IsHideBattlePointGauge(
        QuestPhaseEntity_o *this,
        int32_t battlePointId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  System_Collections_Generic_IEnumerable_TSource__o *IntArray; // x0

  if ( (byte_4B16731 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Contains_int___, *(_QWORD *)&battlePointId, method);
    sub_1BCA7E0(&StringLiteral_7368/*"HideBattlePointGauge"*/, v5, v6);
    byte_4B16731 = 1;
  }
  IntArray = (System_Collections_Generic_IEnumerable_TSource__o *)EntityScriptUtil__GetIntArray(
                                                                    this->fields.script,
                                                                    (System_String_o *)StringLiteral_7368/*"HideBattlePointGauge"*/,
                                                                    0LL,
                                                                    0LL);
  if ( IntArray )
    LOBYTE(IntArray) = System_Linq_Enumerable__Contains_int_(
                         IntArray,
                         battlePointId,
                         (const MethodInfo_2F2AF7C *)Method_System_Linq_Enumerable_Contains_int___);
  return (char)IntArray;
}


bool __fastcall QuestPhaseEntity__IsIgnoreBattleLoseDialog(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B166CC & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_20439/*"ignoreBattleLoseDialog"*/, method, v2);
    byte_4B166CC = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_20439/*"ignoreBattleLoseDialog"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestPhaseEntity__IsIgnoreBattlePointUp(
        QuestPhaseEntity_o *this,
        int32_t battlePointId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  System_Collections_Generic_IEnumerable_TSource__o *IntArray; // x0

  if ( (byte_4B1672F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Contains_int___, *(_QWORD *)&battlePointId, method);
    sub_1BCA7E0(&StringLiteral_7583/*"IgnoreBattlePointUp"*/, v5, v6);
    byte_4B1672F = 1;
  }
  IntArray = (System_Collections_Generic_IEnumerable_TSource__o *)EntityScriptUtil__GetIntArray(
                                                                    this->fields.script,
                                                                    (System_String_o *)StringLiteral_7583/*"IgnoreBattlePointUp"*/,
                                                                    0LL,
                                                                    0LL);
  if ( IntArray )
    LOBYTE(IntArray) = System_Linq_Enumerable__Contains_int_(
                         IntArray,
                         battlePointId,
                         (const MethodInfo_2F2AF7C *)Method_System_Linq_Enumerable_Contains_int___);
  return (char)IntArray;
}


bool __fastcall QuestPhaseEntity__IsInterruptionQuest(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B16727 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_20926/*"interruptibleQuest"*/, method, v2);
    byte_4B16727 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20926/*"interruptibleQuest"*/, 0, v3) != 0;
}


bool __fastcall QuestPhaseEntity__IsInvisibleConnectAndLoad(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B166F2 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_20969/*"invisibleConnectAndLoad"*/, method, v2);
    byte_4B166F2 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20969/*"invisibleConnectAndLoad"*/, 0, v3) != 0;
}


bool __fastcall QuestPhaseEntity__IsKeepSubBgmAfterBattleResult(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B166E8 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_21203/*"keepSubBgmUntilBattleResult"*/, method, v2);
    byte_4B166E8 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_21203/*"keepSubBgmUntilBattleResult"*/, 0LL);
}


bool __fastcall QuestPhaseEntity__IsMatchIndividuality(
        QuestPhaseEntity_o *this,
        System_Int32_array *individualitys,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  System_Collections_Generic_IEnumerable_T__o *PrioredIndividuality; // x21
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  System_Collections_Generic_HashSet_int__o *v15; // x20
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  System_Predicate_int__o *All_int; // x0
  __int64 v20; // x1
  System_Predicate_T__o *v21; // x21

  if ( (byte_4B166F1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_FindAll_int___, individualitys, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int___ctor___76767240, v5, v6);
    sub_1BCA7E0(&System_Collections_Generic_HashSet_int__TypeInfo, v7, v8);
    sub_1BCA7E0(&System_Predicate_int__TypeInfo, v9, v10);
    byte_4B166F1 = 1;
  }
  PrioredIndividuality = (System_Collections_Generic_IEnumerable_T__o *)QuestPhaseEntity__GetPrioredIndividuality(
                                                                          this,
                                                                          (const MethodInfo *)individualitys);
  v15 = (System_Collections_Generic_HashSet_int__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_HashSet_int__TypeInfo,
                                                       v12,
                                                       v13,
                                                       v14);
  System_Collections_Generic_HashSet_int____ctor_54873236(
    v15,
    PrioredIndividuality,
    (const MethodInfo_3454C94 *)Method_System_Collections_Generic_HashSet_int___ctor___76767240);
  All_int = (System_Predicate_int__o *)sub_1BCAA2C(System_Predicate_int__TypeInfo, v16, v17, v18);
  if ( !v15
    || (v21 = (System_Predicate_T__o *)All_int,
        System_Predicate_int____ctor(
          All_int,
          (Il2CppObject *)v15,
          (intptr_t)v15->klass->vtable._9_CopyTo.methodPtr,
          0LL),
        (All_int = (System_Predicate_int__o *)System_Array__FindAll_int_(
                                                individualitys,
                                                v21,
                                                (const MethodInfo_300CD54 *)Method_System_Array_FindAll_int___)) == 0LL) )
  {
    sub_1BCAA3C(All_int, v20);
  }
  return All_int->fields.m_target != 0LL;
}


bool __fastcall QuestPhaseEntity__IsNonStopEndBgm(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B166C9 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_22349/*"nonStopEndBgm"*/, method, v2);
    byte_4B166C9 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22349/*"nonStopEndBgm"*/, 0, v3) != 0;
}


bool __fastcall QuestPhaseEntity__IsNotClassBoard(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B1671C & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_22378/*"notClassBoard"*/, method, v2);
    byte_4B1671C = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22378/*"notClassBoard"*/, 0, v3) != 0;
}


bool __fastcall QuestPhaseEntity__IsNotResetResultDispFlag(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B166D6 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_22386/*"notResetResultDispFlag"*/, method, v2);
    byte_4B166D6 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22386/*"notResetResultDispFlag"*/, 0, v3) != 0;
}


bool __fastcall QuestPhaseEntity__IsNotUseRestrictionDialog(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B1671D & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_22387/*"notUseRestrictionDialog"*/, method, v2);
    byte_4B1671D = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22387/*"notUseRestrictionDialog"*/, 0, v3) != 0;
}


bool __fastcall QuestPhaseEntity__IsPlayScriptBeforeForWarBoard(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B166F7 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_21044/*"isScriptPlayForWarBoard"*/, method, v2);
    byte_4B166F7 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21044/*"isScriptPlayForWarBoard"*/, 0, v3) != 0;
}


bool __fastcall QuestPhaseEntity__IsReleaseFocusQuestBoard(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B16722 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_21040/*"isReleaseFocus"*/, method, v2);
    byte_4B16722 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21040/*"isReleaseFocus"*/, 0, v3) != 0;
}


bool __fastcall QuestPhaseEntity__IsRepeatReward(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B1671A & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_23117/*"repeatReward"*/, method, v2);
    byte_4B1671A = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_23117/*"repeatReward"*/, 0, v3) != 0;
}


bool __fastcall QuestPhaseEntity__IsReverseMyDeckSvtPosition(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1672D & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_23168/*"reverseMyDeckSvtPosition"*/, method, v2);
    byte_4B1672D = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_23168/*"reverseMyDeckSvtPosition"*/, 0LL);
}


bool __fastcall QuestPhaseEntity__IsSkipBattleFinish(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B16714 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_23602/*"skipBattleFinish"*/, method, v2);
    byte_4B16714 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_23602/*"skipBattleFinish"*/, 0, v3) != 0;
}


bool __fastcall QuestPhaseEntity__IsUseTemporaryCommandSpell(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B166FD & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_24615/*"useTemporaryCommandSpell"*/, method, v2);
    byte_4B166FD = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_24615/*"useTemporaryCommandSpell"*/, -1, v3) == 1;
}


bool __fastcall QuestPhaseEntity__IsWaveCountInfinity(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B16712 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_24919/*"waveCountInfinity"*/, method, v2);
    byte_4B16712 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_24919/*"waveCountInfinity"*/, -1, v3) != -1;
}


bool __fastcall QuestPhaseEntity__IsWaveSetup(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B1671E & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_24921/*"waveSetup"*/, method, v2);
    byte_4B1671E = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_24921/*"waveSetup"*/, 0, v3) != 0;
}


bool __fastcall QuestPhaseEntity__PlayHappinessCounterEffect(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16730 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_10787/*"PlayHappinessCounterEffect"*/, method, v2);
    byte_4B16730 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_10787/*"PlayHappinessCounterEffect"*/, 0LL);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 methodPtr_low; // x10
  System_Collections_Generic_Dictionary_string__object__c *v26; // x9
  System_Collections_Generic_Dictionary_string__object__o *v27; // x21
  int Value_long; // w20
  Il2CppObject *Value_object; // x0
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  System_Collections_Generic_List_object__o *v33; // x21
  QuestPhaseEntity___c_c *v34; // x0
  System_Converter_object__int__o *_9__114_0; // x22
  Il2CppObject *v36; // x23
  struct QuestPhaseEntity___c_StaticFields *static_fields; // x0
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  System_Collections_Generic_List_int__o *v44; // x0
  __int64 v45; // x1
  System_Collections_Generic_IDictionary_int__int____c *klass; // x8
  System_Collections_Generic_List_int__o *v47; // x21
  __int64 v48; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0

  if ( (byte_4B16705 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_GetValue_long___, obj, method);
    sub_1BCA7E0(&Method_BasicHelper_GetValue_List_object____, v5, v6);
    sub_1BCA7E0(&System_Converter_object__int__TypeInfo, v7, v8);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v9, v10);
    sub_1BCA7E0(&System_Collections_Generic_IDictionary_int__int____TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_object__ConvertAll_int___, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v15, v16);
    sub_1BCA7E0(&Method_QuestPhaseEntity___c__SetNpcAiInfo_b__114_0__, v17, v18);
    sub_1BCA7E0(&QuestPhaseEntity___c_TypeInfo, v19, v20);
    sub_1BCA7E0(&StringLiteral_16886/*"aiIds"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_22403/*"npcId"*/, v23, v24);
    byte_4B16705 = 1;
  }
  if ( obj )
  {
    methodPtr_low = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(obj->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low )
    {
      v26 = (System_Collections_Generic_Dictionary_string__object__c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1];
      v27 = v26 == System_Collections_Generic_Dictionary_string__object__TypeInfo
          ? (System_Collections_Generic_Dictionary_string__object__o *)obj
          : 0LL;
      if ( v26 == System_Collections_Generic_Dictionary_string__object__TypeInfo )
      {
        Value_long = BasicHelper__GetValue_long_(
                       v27,
                       (System_String_o *)StringLiteral_22403/*"npcId"*/,
                       0LL,
                       (const MethodInfo_2F00B40 *)Method_BasicHelper_GetValue_long___);
        Value_object = BasicHelper__GetValue_object_(
                         v27,
                         (System_String_o *)StringLiteral_16886/*"aiIds"*/,
                         0LL,
                         (const MethodInfo_2F00C2C *)Method_BasicHelper_GetValue_List_object____);
        if ( Value_long >= 1 )
        {
          v33 = (System_Collections_Generic_List_object__o *)Value_object;
          if ( Value_object )
          {
            v34 = QuestPhaseEntity___c_TypeInfo;
            if ( !QuestPhaseEntity___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(QuestPhaseEntity___c_TypeInfo, v30);
              v34 = QuestPhaseEntity___c_TypeInfo;
            }
            _9__114_0 = v34->static_fields->__9__114_0;
            if ( !_9__114_0 )
            {
              if ( !v34->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v34, v30);
                v34 = QuestPhaseEntity___c_TypeInfo;
              }
              v36 = (Il2CppObject *)v34->static_fields->__9;
              _9__114_0 = (System_Converter_object__int__o *)sub_1BCAA2C(
                                                               System_Converter_object__int__TypeInfo,
                                                               v30,
                                                               v31,
                                                               v32);
              System_Converter_object__int____ctor(
                _9__114_0,
                v36,
                Method_QuestPhaseEntity___c__SetNpcAiInfo_b__114_0__,
                0LL);
              static_fields = QuestPhaseEntity___c_TypeInfo->static_fields;
              static_fields->__9__114_0 = _9__114_0;
              sub_1BCA784(
                (PartyOrganizationUtility_o *)&static_fields->__9__114_0,
                (int64_t)_9__114_0,
                v38,
                v39,
                v40,
                v41,
                v42,
                v43);
            }
            v44 = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_object___ConvertAll_int_(
                                                              v33,
                                                              (System_Converter_T__TOutput__o *)_9__114_0,
                                                              (const MethodInfo_2E42B5C *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
            if ( !v44
              || (v44 = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_int___ToArray(
                                                                    v44,
                                                                    (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__),
                  !dicNpcAiId) )
            {
              sub_1BCAA3C(v44, v45);
            }
            klass = dicNpcAiId->klass;
            v47 = v44;
            v48 = *(unsigned __int16 *)(&dicNpcAiId->klass->_2.bitflags2 + 3);
            if ( *(_WORD *)(&dicNpcAiId->klass->_2.bitflags2 + 3) )
            {
              p_offset = &klass->_1.interfaceOffsets->offset;
              while ( *((System_Collections_Generic_IDictionary_int__int____c **)p_offset - 1) != System_Collections_Generic_IDictionary_int__int____TypeInfo )
              {
                --v48;
                p_offset += 4;
                if ( !v48 )
                  goto LABEL_24;
              }
              p_method = (__int64)&klass->vtable[*p_offset + 1].method;
            }
            else
            {
LABEL_24:
              p_method = sub_1C1C7C0(dicNpcAiId, System_Collections_Generic_IDictionary_int__int____TypeInfo, 1LL);
            }
            (*(void (__fastcall **)(System_Collections_Generic_IDictionary_int__int____o *, _QWORD, System_Collections_Generic_List_int__o *, _QWORD))p_method)(
              dicNpcAiId,
              (unsigned int)Value_long,
              v47,
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

  if ( (byte_4B166C2 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_17278/*"battleEffectId"*/, *(_QWORD *)&defVal, method);
    byte_4B166C2 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_17278/*"battleEffectId"*/, defVal, v3);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall QuestPhaseEntity__getBattleFieldMotionId(
        QuestPhaseEntity_o *this,
        int32_t defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4B166C4 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_19606/*"fieldMotionId"*/, *(_QWORD *)&defVal, method);
    byte_4B166C4 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19606/*"fieldMotionId"*/, defVal, v3);
}


System_Int32_array *__fastcall QuestPhaseEntity__getBattleFieldMotionIds(
        QuestPhaseEntity_o *this,
        System_Int32_array *defVals,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  System_Int32_array *result; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  int32_t BattleFieldMotionId; // w20

  if ( (byte_4B166C5 & 1) == 0 )
  {
    sub_1BCA7E0(&int___TypeInfo, defVals, method);
    sub_1BCA7E0(&StringLiteral_19607/*"fieldMotionIds"*/, v6, v7);
    byte_4B166C5 = 1;
  }
  result = QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_19607/*"fieldMotionIds"*/, defVals, v3);
  if ( !result )
    goto LABEL_10;
  if ( *(_QWORD *)&result->max_length )
    return result;
  BattleFieldMotionId = QuestPhaseEntity__getBattleFieldMotionId(this, -1, v10);
  result = defVals;
  if ( BattleFieldMotionId == -1 )
    return result;
  result = (System_Int32_array *)sub_1BCA888(int___TypeInfo, 1LL);
  if ( !result )
LABEL_10:
    sub_1BCAA3C(result, v9);
  if ( !result->max_length )
    sub_1BCAA44(result, v9);
  result->m_Items[1] = BattleFieldMotionId;
  return result;
}


int32_t __fastcall QuestPhaseEntity__getBreakOnBattleWinWaitMSec(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B166D0 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_17618/*"breakOnBattleWinWaitMSec"*/, method, v2);
    byte_4B166D0 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_17618/*"breakOnBattleWinWaitMSec"*/, 0, v3);
}


System_Int32_array *__fastcall QuestPhaseEntity__getEventGrounpIds(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  System_Int32_array *v6; // x2
  const MethodInfo *v7; // x3

  if ( (byte_4B166C6 & 1) == 0 )
  {
    sub_1BCA7E0(&int___TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_19328/*"eventGroupId"*/, v4, v5);
    byte_4B166C6 = 1;
  }
  v6 = (System_Int32_array *)sub_1BCA888(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_19328/*"eventGroupId"*/, v6, v7);
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
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B16702 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_20140/*"hintLeftIndent"*/, method, v2);
    byte_4B16702 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20140/*"hintLeftIndent"*/, -1, v3);
}


System_String_o *__fastcall QuestPhaseEntity__getHintMessage(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2

  if ( (byte_4B16701 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_20141/*"hintMessage"*/, method, v2);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v5, v6);
    byte_4B16701 = 1;
  }
  return QuestPhaseEntity__getScriptStr(
           this,
           (System_String_o *)StringLiteral_20141/*"hintMessage"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v3);
}


System_String_o *__fastcall QuestPhaseEntity__getHintMessageTitle(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2

  if ( (byte_4B16700 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, method, v2);
    sub_1BCA7E0(&StringLiteral_20143/*"hintTitle"*/, v5, v6);
    byte_4B16700 = 1;
  }
  return QuestPhaseEntity__getScriptStr(
           this,
           (System_String_o *)StringLiteral_20143/*"hintTitle"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v3);
}


int32_t __fastcall QuestPhaseEntity__getHintOpenType(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B16703 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_20142/*"hintOpenType"*/, method, v2);
    byte_4B16703 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20142/*"hintOpenType"*/, 0, v3);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall QuestPhaseEntity__getLeave(QuestPhaseEntity_o *this, int32_t defVal, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4B166C1 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_21292/*"leave"*/, *(_QWORD *)&defVal, method);
    byte_4B166C1 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21292/*"leave"*/, defVal, v3);
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

  if ( (byte_4B166BC & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_23151/*"resultBgmId"*/, *(_QWORD *)&defVal, method);
    byte_4B166BC = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_23151/*"resultBgmId"*/, defVal, v3);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall QuestPhaseEntity__getResultEffectId(
        QuestPhaseEntity_o *this,
        int32_t defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4B166C0 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_23152/*"resultEffectId"*/, *(_QWORD *)&defVal, method);
    byte_4B166C0 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_23152/*"resultEffectId"*/, defVal, v3);
}


System_Int32_array *__fastcall QuestPhaseEntity__getResultEnemyVoiceIds(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  System_Int32_array *v6; // x2
  const MethodInfo *v7; // x3

  if ( (byte_4B166CA & 1) == 0 )
  {
    sub_1BCA7E0(&int___TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_23153/*"resultEnemyVoiceIds"*/, v4, v5);
    byte_4B166CA = 1;
  }
  v6 = (System_Int32_array *)sub_1BCA888(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_23153/*"resultEnemyVoiceIds"*/, v6, v7);
}


System_Int32_array *__fastcall QuestPhaseEntity__getScriptIntArrayParam(
        QuestPhaseEntity_o *this,
        System_String_o *key,
        System_Int32_array *defVal,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  System_Collections_Generic_List_object__o *ScriptObjListParam; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  System_Collections_Generic_List_object__o *v19; // x19
  QuestPhaseEntity___c_c *v20; // x0
  System_Converter_object__int__o *_9__31_0; // x20
  Il2CppObject *v22; // x21
  struct QuestPhaseEntity___c_StaticFields *static_fields; // x0
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  System_Collections_Generic_List_int__o *v30; // x0
  __int64 v31; // x1

  if ( (byte_4B166B4 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Converter_object__int__TypeInfo, key, defVal);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_object__ConvertAll_int___, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v9, v10);
    sub_1BCA7E0(&Method_QuestPhaseEntity___c__getScriptIntArrayParam_b__31_0__, v11, v12);
    sub_1BCA7E0(&QuestPhaseEntity___c_TypeInfo, v13, v14);
    byte_4B166B4 = 1;
  }
  ScriptObjListParam = QuestPhaseEntity__getScriptObjListParam(this, key, (const MethodInfo *)defVal);
  if ( !ScriptObjListParam )
    return defVal;
  v19 = ScriptObjListParam;
  v20 = QuestPhaseEntity___c_TypeInfo;
  if ( !QuestPhaseEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestPhaseEntity___c_TypeInfo, v16);
    v20 = QuestPhaseEntity___c_TypeInfo;
  }
  _9__31_0 = v20->static_fields->__9__31_0;
  if ( !_9__31_0 )
  {
    if ( !v20->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v20, v16);
      v20 = QuestPhaseEntity___c_TypeInfo;
    }
    v22 = (Il2CppObject *)v20->static_fields->__9;
    _9__31_0 = (System_Converter_object__int__o *)sub_1BCAA2C(System_Converter_object__int__TypeInfo, v16, v17, v18);
    System_Converter_object__int____ctor(
      _9__31_0,
      v22,
      Method_QuestPhaseEntity___c__getScriptIntArrayParam_b__31_0__,
      0LL);
    static_fields = QuestPhaseEntity___c_TypeInfo->static_fields;
    static_fields->__9__31_0 = _9__31_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__31_0,
      (int64_t)_9__31_0,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29);
  }
  v30 = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_object___ConvertAll_int_(
                                                    v19,
                                                    (System_Converter_T__TOutput__o *)_9__31_0,
                                                    (const MethodInfo_2E42B5C *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
  if ( !v30 )
    sub_1BCAA3C(0LL, v31);
  return System_Collections_Generic_List_int___ToArray(
           v30,
           (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  if ( (byte_4B166B3 & 1) == 0 )
  {
    sub_1BCA7E0(&long_TypeInfo, key, *(_QWORD *)&defVal);
    byte_4B166B3 = 1;
  }
  ScriptObj = QuestPhaseEntity__getScriptObj(this, key, *(const MethodInfo **)&defVal);
  if ( !ScriptObj )
    return v4;
  if ( ScriptObj->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(ScriptObj, long_TypeInfo, v8, v9);
  sub_1BCACFC(ScriptObj);
  return (unsigned int)QuestPhaseEntity__getScriptObj(v11, v12, v13);
}


Il2CppObject *__fastcall QuestPhaseEntity__getScriptObj(
        QuestPhaseEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  Il2CppObject *result; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B166B8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, key, method);
    byte_4B166B8 = 1;
  }
  result = (Il2CppObject *)this->fields.script;
  if ( result )
  {
    value = 0LL;
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)result,
           (Il2CppObject *)key,
           &value,
           (const MethodInfo_3266A6C *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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

  if ( (byte_4B166B6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_object__ToArray__, key, defVal);
    byte_4B166B6 = 1;
  }
  ScriptObjListParam = QuestPhaseEntity__getScriptObjListParam(this, key, (const MethodInfo *)defVal);
  if ( ScriptObjListParam )
    return System_Collections_Generic_List_object___ToArray(
             ScriptObjListParam,
             (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_object__ToArray__);
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

  if ( (byte_4B166B7 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Collections_Generic_List_object__TypeInfo, key, method);
    byte_4B166B7 = 1;
  }
  result = (System_Collections_Generic_List_object__o *)QuestPhaseEntity__getScriptObj(this, key, method);
  if ( result )
  {
    methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (System_Collections_Generic_List_object__c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != System_Collections_Generic_List_object__TypeInfo )
    {
      sub_1BCACFC(result);
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
  System_String_o *v4; // x19
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v12; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *v13; // x0
  Il2CppObject *Item; // x0
  QuestPhaseEntity_o *v16; // x0
  const MethodInfo *v17; // x1

  v4 = defVal;
  if ( (byte_4B166B9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key, defVal);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7, v8);
    sub_1BCA7E0(&string_TypeInfo, v9, v10);
    byte_4B166B9 = 1;
  }
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)key,
          (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return v4;
  }
  v13 = this->fields.script;
  if ( !v13 )
    sub_1BCAA3C(0LL, v12);
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)v13,
           (Il2CppObject *)key,
           (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v4 = (System_String_o *)Item;
  if ( !Item || (System_String_c *)Item->klass == string_TypeInfo )
    return v4;
  sub_1BCACFC(Item);
  return (System_String_o *)QuestPhaseEntity__GetOverwriteEquipSkills(v16, v17);
}


System_String_array *__fastcall QuestPhaseEntity__getScriptStringArrayParam(
        QuestPhaseEntity_o *this,
        System_String_o *key,
        System_String_array *defVal,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  System_Collections_Generic_List_object__o *ScriptObjListParam; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  System_Collections_Generic_List_object__o *v19; // x19
  QuestPhaseEntity___c_c *v20; // x0
  System_Converter_TInput__TOutput__o *_9__32_0; // x20
  Il2CppObject *v22; // x21
  struct QuestPhaseEntity___c_StaticFields *static_fields; // x0
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  System_Collections_Generic_List_object__o *v30; // x0
  __int64 v31; // x1

  if ( (byte_4B166B5 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Converter_object__string__TypeInfo, key, defVal);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_object__ConvertAll_string___, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__ToArray__, v9, v10);
    sub_1BCA7E0(&Method_QuestPhaseEntity___c__getScriptStringArrayParam_b__32_0__, v11, v12);
    sub_1BCA7E0(&QuestPhaseEntity___c_TypeInfo, v13, v14);
    byte_4B166B5 = 1;
  }
  ScriptObjListParam = QuestPhaseEntity__getScriptObjListParam(this, key, (const MethodInfo *)defVal);
  if ( !ScriptObjListParam )
    return defVal;
  v19 = ScriptObjListParam;
  v20 = QuestPhaseEntity___c_TypeInfo;
  if ( !QuestPhaseEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestPhaseEntity___c_TypeInfo, v16);
    v20 = QuestPhaseEntity___c_TypeInfo;
  }
  _9__32_0 = (System_Converter_TInput__TOutput__o *)v20->static_fields->__9__32_0;
  if ( !_9__32_0 )
  {
    if ( !v20->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v20, v16);
      v20 = QuestPhaseEntity___c_TypeInfo;
    }
    v22 = (Il2CppObject *)v20->static_fields->__9;
    _9__32_0 = (System_Converter_TInput__TOutput__o *)sub_1BCAA2C(
                                                        System_Converter_object__string__TypeInfo,
                                                        v16,
                                                        v17,
                                                        v18);
    System_Converter_object__object____ctor(
      _9__32_0,
      v22,
      Method_QuestPhaseEntity___c__getScriptStringArrayParam_b__32_0__,
      0LL);
    static_fields = QuestPhaseEntity___c_TypeInfo->static_fields;
    static_fields->__9__32_0 = (struct System_Converter_object__string__o *)_9__32_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__32_0,
      (int64_t)_9__32_0,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29);
  }
  v30 = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___ConvertAll_object_(
                                                       v19,
                                                       (System_Converter_T__TOutput__o *)_9__32_0,
                                                       (const MethodInfo_2E42C60 *)Method_System_Collections_Generic_List_object__ConvertAll_string___);
  if ( !v30 )
    sub_1BCAA3C(0LL, v31);
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  v30,
                                  (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_string__ToArray__);
}


int32_t __fastcall QuestPhaseEntity__getSpecialShadowEffectId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B166DB & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_20000/*"getSpecialShadowEffectId"*/, method, v2);
    byte_4B166DB = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20000/*"getSpecialShadowEffectId"*/, 0, v3);
}


int32_t __fastcall QuestPhaseEntity__getTurnSituationType(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B166DA & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_24346/*"turnSituationType"*/, method, v2);
    byte_4B166DA = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_24346/*"turnSituationType"*/, 0, v3);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall QuestPhaseEntity__getUniqueCameraId(
        QuestPhaseEntity_o *this,
        int32_t defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4B166C3 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_24431/*"uniqueCameraId"*/, *(_QWORD *)&defVal, method);
    byte_4B166C3 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_24431/*"uniqueCameraId"*/, defVal, v3);
}


bool __fastcall QuestPhaseEntity__isBattleFinishCameraTargetAll(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B166D9 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_17280/*"battleFinishCameraTargetAll"*/, method, v2);
    byte_4B166D9 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_17280/*"battleFinishCameraTargetAll"*/, 0, v3) != 0;
}


bool __fastcall QuestPhaseEntity__isBreakOnBattleWin(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B166CE & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_17616/*"breakOnBattleWin"*/, method, v2);
    byte_4B166CE = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_17616/*"breakOnBattleWin"*/, 0, v3) != 0;
}


bool __fastcall QuestPhaseEntity__isBreakOnBattleWinFadeColorBlack(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B166CF & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_17617/*"breakOnBattleWinFadeColorBlack"*/, method, v2);
    byte_4B166CF = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_17617/*"breakOnBattleWinFadeColorBlack"*/, 0, v3) != 0;
}


bool __fastcall QuestPhaseEntity__isDisableChangeRaidDownMessage(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B166DC & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_21011/*"isDisableChangeRaidDownMessage"*/, method, v2);
    byte_4B166DC = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21011/*"isDisableChangeRaidDownMessage"*/, 0, v3) != 0;
}


bool __fastcall QuestPhaseEntity__isDispLoseResult(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B166CB & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_23154/*"resultLoseDisp"*/, method, v2);
    byte_4B166CB = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_23154/*"resultLoseDisp"*/, 0, v3) != 0;
}


bool __fastcall QuestPhaseEntity__isFadeOutBgmBeforeMovie(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B166BF & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_6679/*"FadeOutBgmBeforeMovie"*/, method, v2);
    byte_4B166BF = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_6679/*"FadeOutBgmBeforeMovie"*/, 0, v3) != 0;
}


bool __fastcall QuestPhaseEntity__isNoResult(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3

  if ( (byte_4B166CD & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_22332/*"noResult"*/, method, v2);
    byte_4B166CD = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22332/*"noResult"*/, 0, v3) != 0;
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
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B16734 & 1) == 0 )
  {
    sub_1BCA7E0(&QuestPhaseEntity___c_TypeInfo, v1, v2);
    byte_4B16734 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(QuestPhaseEntity___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  QuestPhaseEntity___c_TypeInfo->static_fields->__9 = (struct QuestPhaseEntity___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)QuestPhaseEntity___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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

  if ( (byte_4B16736 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, x, method);
    byte_4B16736 = 1;
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

  if ( (byte_4B16735 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, x, method);
    byte_4B16735 = 1;
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
    sub_1BCAA3C(this, 0LL);
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