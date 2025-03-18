void __fastcall QuestPhaseEntity___ctor(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C2244D & 1) == 0 )
  {
    sub_1C3B764(&Method_DataEntityBase_string___ctor__, method);
    byte_4C2244D = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_32989DC *)Method_DataEntityBase_string___ctor__);
}


void __fastcall QuestPhaseEntity___ctor_40949336(
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

  if ( (byte_4C2244E & 1) == 0 )
  {
    sub_1C3B764(&Method_DataEntityBase_string___ctor__, cSrc);
    sub_1C3B764(&int___TypeInfo, v5);
    byte_4C2244E = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_32989DC *)Method_DataEntityBase_string___ctor__);
  if ( !cSrc )
    sub_1C3B9C0(v6, v7);
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
      v14 = (struct System_Int32_array *)sub_1C3B8A0(v16, int___TypeInfo);
      if ( !v14 )
        goto LABEL_12;
    }
    else
    {
      v14 = 0LL;
    }
  }
  this->fields.classIds = v14;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.classIds, (int64_t)v14, v8, v9, v10, v11, v12, v13);
  individuality = (System_Array_o *)cSrc->fields.individuality;
  if ( !individuality )
    goto LABEL_13;
  v25 = System_Array__Clone(individuality, 0LL);
  if ( !v25 )
    goto LABEL_13;
  v17 = v25;
  v26 = (struct System_Int32_array *)sub_1C3B8A0(v25, int___TypeInfo);
  if ( !v26 )
  {
LABEL_12:
    sub_1C3BC80(v17);
LABEL_13:
    v26 = 0LL;
  }
  this->fields.individuality = v26;
  p_individuality = &this->fields.individuality;
  sub_1C3B708((PartyOrganizationUtility_o *)p_individuality, (int64_t)v26, v18, v19, v20, v21, v22, v23);
  *((_DWORD *)p_individuality + 2) = cSrc->fields.giftId;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall QuestPhaseEntity__CreatePK(int32_t questId, int32_t phase, const MethodInfo *method)
{
  if ( (byte_4C2244C & 1) == 0 )
  {
    sub_1C3B764(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&phase);
    byte_4C2244C = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           questId,
           phase,
           (const MethodInfo_2FEE38C *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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

  if ( (byte_4C2245D & 1) == 0 )
  {
    sub_1C3B764(&System_Collections_Generic_Dictionary_string__object__TypeInfo, method);
    sub_1C3B764(&StringLiteral_16986/*"blink"*/, v4);
    byte_4C2245D = 1;
  }
  result = (System_Collections_Generic_Dictionary_string__object__o *)QuestPhaseEntity__getScriptObj(
                                                                        this,
                                                                        (System_String_o *)StringLiteral_16986/*"blink"*/,
                                                                        v2);
  if ( result )
  {
    methodPtr_low = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (System_Collections_Generic_Dictionary_string__object__c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
    {
      sub_1C3BC80(result);
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

  if ( (byte_4C224C9 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_16999/*"body"*/, defVal);
    byte_4C224C9 = 1;
  }
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_16999/*"body"*/, defVal, v3);
}


int32_t __fastcall QuestPhaseEntity__GetAdvantageClassId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C2248C & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_17316/*"button_select_reg"*/, method);
    byte_4C2248C = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_17316/*"button_select_reg"*/, -1, v2);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetAssistIdArray(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Int32_array *v4; // x2
  const MethodInfo *v5; // x3

  if ( (byte_4C2249B & 1) == 0 )
  {
    sub_1C3B764(&int___TypeInfo, method);
    sub_1C3B764(&StringLiteral_17269/*"btn_txt_status_off"*/, v3);
    byte_4C2249B = 1;
  }
  v4 = (System_Int32_array *)sub_1C3B80C(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_17269/*"btn_txt_status_off"*/, v4, v5);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetAssistWeightArray(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Int32_array *v4; // x2
  const MethodInfo *v5; // x3

  if ( (byte_4C2249C & 1) == 0 )
  {
    sub_1C3B764(&int___TypeInfo, method);
    sub_1C3B764(&StringLiteral_17268/*"btn_txt_set{0}_1"*/, v3);
    byte_4C2249C = 1;
  }
  v4 = (System_Int32_array *)sub_1C3B80C(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_17268/*"btn_txt_set{0}_1"*/, v4, v5);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetAssumedEffectId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C224AE & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_17272/*"btn_txt_stock_02"*/, method);
    byte_4C224AE = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_17272/*"btn_txt_stock_02"*/, 0LL);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetBattleEffectMovieIds(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C224D1 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_3271/*"Bzip data error"*/, method);
    byte_4C224D1 = 1;
  }
  return EntityScriptUtil__GetIntArray(this->fields.script, (System_String_o *)StringLiteral_3271/*"Bzip data error"*/, 0LL, 0LL);
}


System_String_o *__fastcall QuestPhaseEntity__GetBattleFinishMovie(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C22473 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_17440/*"card_servant_np"*/, method);
    byte_4C22473 = 1;
  }
  return QuestPhaseEntity__getScriptStr(this, (System_String_o *)StringLiteral_17440/*"card_servant_np"*/, 0LL, v2);
}


int32_t __fastcall QuestPhaseEntity__GetBattleFinishWaitTime(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C224B7 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_17441/*"card_statussync"*/, method);
    byte_4C224B7 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_17441/*"card_statussync"*/, 0, v2);
}


int32_t __fastcall QuestPhaseEntity__GetBattleItemObjectId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C224C6 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_17445/*"cast"*/, method);
    byte_4C224C6 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_17445/*"cast"*/, 0, v2);
}


System_Collections_Generic_IEnumerable_int__o *__fastcall QuestPhaseEntity__GetBattleSkillDropEffectIds(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  if ( (byte_4C224DD & 1) == 0 )
  {
    sub_1C3B764(&QuestPhaseEntity__GetBattleSkillDropEffectIds_d__168_TypeInfo, method);
    byte_4C224DD = 1;
  }
  v3 = sub_1C3B9B0(QuestPhaseEntity__GetBattleSkillDropEffectIds_d__168_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = -2;
  *(_DWORD *)(v3 + 24) = System_Environment__get_CurrentManagedThreadId(0LL);
  *(_QWORD *)(v3 + 32) = this;
  sub_1C3B708((PartyOrganizationUtility_o *)(v3 + 32), (int64_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_Generic_IEnumerable_int__o *)v3;
}


System_Collections_Generic_IEnumerable_FunctionEntity__o *__fastcall QuestPhaseEntity__GetBattleSkillDropFunctionEntities(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  if ( (byte_4C224DC & 1) == 0 )
  {
    sub_1C3B764(&QuestPhaseEntity__GetBattleSkillDropFunctionEntities_d__167_TypeInfo, method);
    byte_4C224DC = 1;
  }
  v3 = sub_1C3B9B0(QuestPhaseEntity__GetBattleSkillDropFunctionEntities_d__167_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = -2;
  *(_DWORD *)(v3 + 32) = System_Environment__get_CurrentManagedThreadId(0LL);
  *(_QWORD *)(v3 + 40) = this;
  sub_1C3B708((PartyOrganizationUtility_o *)(v3 + 40), (int64_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_Generic_IEnumerable_FunctionEntity__o *)v3;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall QuestPhaseEntity__GetBeforeBattleSkillActor(
        QuestPhaseEntity_o *this,
        int32_t defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4C224B8 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_17488/*"charCount"*/, *(_QWORD *)&defVal);
    byte_4C224B8 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_17488/*"charCount"*/, defVal, v3);
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

  if ( (byte_4C22452 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Array_Empty_int___, method);
    sub_1C3B764(&Method_DataManager_GetMaster_BattleBgMaster___, v3);
    sub_1C3B764(&DataManager_TypeInfo, v4);
    byte_4C22452 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_BattleBgMaster___);
  PriorityBattleBgId = QuestPhaseEntity__GetPriorityBattleBgId(this, v6);
  PriorityBattleBgType = QuestPhaseEntity__GetPriorityBattleBgType(this, v8);
  if ( !Master_object )
    sub_1C3B9C0(PriorityBattleBgType, v10);
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
      sub_1C8D69C(Method_System_Array_Empty_int___);
      v14 = v13[7];
    }
    v15 = *(_QWORD *)(v14 + 16);
    if ( (*(_BYTE *)(v15 + 309) & 1) == 0 )
      v15 = sub_1C8D640(inited);
    if ( !*(_DWORD *)(v15 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v15);
    v16 = *(_QWORD *)(v13[7] + 16LL);
    if ( (*(_BYTE *)(v16 + 309) & 1) == 0 )
      v16 = sub_1C8D640(inited);
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

  if ( (byte_4C224AB & 1) == 0 )
  {
    sub_1C3B764(&int___TypeInfo, method);
    sub_1C3B764(&StringLiteral_18355/*"ease-in"*/, v3);
    byte_4C224AB = 1;
  }
  v4 = (System_Int32_array *)sub_1C3B80C(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_18355/*"ease-in"*/, v4, v5);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetCondHavingIds(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Int32_array *v4; // x2
  const MethodInfo *v5; // x3

  if ( (byte_4C22497 & 1) == 0 )
  {
    sub_1C3B764(&int___TypeInfo, method);
    sub_1C3B764(&StringLiteral_18552/*"effect/ef_noblegauge02"*/, v3);
    byte_4C22497 = 1;
  }
  v4 = (System_Int32_array *)sub_1C3B80C(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_18552/*"effect/ef_noblegauge02"*/, v4, v5);
}


int32_t __fastcall QuestPhaseEntity__GetCondQuestClearable(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C224CD & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_18555/*"effect/ef_shadow0"*/, method);
    byte_4C224CD = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_18555/*"effect/ef_shadow0"*/, 0, v2);
}


int32_t __fastcall QuestPhaseEntity__GetCorrectionIconId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C2248B & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_18626/*"en_Parts_Up01"*/, method);
    byte_4C2248B = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_18626/*"en_Parts_Up01"*/, -1, v2);
}


int32_t __fastcall QuestPhaseEntity__GetDefenceTargetContinueRecoverRate(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C224C3 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_19779/*"icon_class{0}"*/, method);
    byte_4C224C3 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19779/*"icon_class{0}"*/, 0, v2);
}


System_String_o *__fastcall QuestPhaseEntity__GetEffectOnMap(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C224D6 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_10875/*"RETURN_TUTORIAL"*/, method);
    byte_4C224D6 = 1;
  }
  return QuestPhaseEntity__getScriptStr(this, (System_String_o *)StringLiteral_10875/*"RETURN_TUTORIAL"*/, 0LL, v2);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetEnemyInfoDispNpcSvtIdList(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Int32_array *v4; // x2
  const MethodInfo *v5; // x3

  if ( (byte_4C224A9 & 1) == 0 )
  {
    sub_1C3B764(&int___TypeInfo, method);
    sub_1C3B764(&StringLiteral_22848/*"setNumItems"*/, v3);
    byte_4C224A9 = 1;
  }
  v4 = (System_Int32_array *)sub_1C3B80C(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_22848/*"setNumItems"*/, v4, v5);
}


System_String_array *__fastcall QuestPhaseEntity__GetEnemyInfoOverwriteNpcSvtNameList(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_String_array *v4; // x2
  const MethodInfo *v5; // x3

  if ( (byte_4C224AA & 1) == 0 )
  {
    sub_1C3B764(&string___TypeInfo, method);
    sub_1C3B764(&StringLiteral_22847/*"setNotificationUsesChronometer"*/, v3);
    byte_4C224AA = 1;
  }
  v4 = (System_String_array *)sub_1C3B80C(string___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptStringArrayParam(this, (System_String_o *)StringLiteral_22847/*"setNotificationUsesChronometer"*/, v4, v5);
}


int32_t __fastcall QuestPhaseEntity__GetEquipAddId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C224A8 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_19420/*"getLong"*/, method);
    byte_4C224A8 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19420/*"getLong"*/, 0, v2);
}


int32_t __fastcall QuestPhaseEntity__GetFinishEffectId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C22488 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_19818/*"icon_noblephantasmup"*/, method);
    byte_4C22488 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19818/*"icon_noblephantasmup"*/, -1, v2);
}


int32_t __fastcall QuestPhaseEntity__GetFormationBgmId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C224AF & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_19936/*"img_class_{0}"*/, method);
    byte_4C224AF = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19936/*"img_class_{0}"*/, -1, v2);
}


float __fastcall QuestPhaseEntity__GetFormationSubBgmFadeInTime(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C224B1 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_19937/*"img_classchart"*/, method);
    byte_4C224B1 = 1;
  }
  return (float)QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19937/*"img_classchart"*/, 0, v2) / 1000.0;
}


int32_t __fastcall QuestPhaseEntity__GetFormationSubBgmId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C224B0 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_19938/*"img_combine_0"*/, method);
    byte_4C224B0 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19938/*"img_combine_0"*/, -1, v2);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetGimmickAnimTypeArray(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C22486 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_20212/*"img_txt_form_servantequip"*/, method);
    byte_4C22486 = 1;
  }
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_20212/*"img_txt_form_servantequip"*/, 0LL, v2);
}


int32_t __fastcall QuestPhaseEntity__GetGimmickId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C2247F & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_20213/*"img_txt_form_servantequip_select"*/, method);
    byte_4C2247F = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20213/*"img_txt_form_servantequip_select"*/, -1, v2);
}


System_Object_array *__fastcall QuestPhaseEntity__GetGimmickResultVoiceArray(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C22485 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_23389/*"switch"*/, method);
    byte_4C22485 = 1;
  }
  return QuestPhaseEntity__getScriptObjArrayParam(this, (System_String_o *)StringLiteral_23389/*"switch"*/, 0LL, v2);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetGimmickSkillIdArray(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Int32_array *v4; // x2
  const MethodInfo *v5; // x3

  if ( (byte_4C22482 & 1) == 0 )
  {
    sub_1C3B764(&int___TypeInfo, method);
    sub_1C3B764(&StringLiteral_23299/*"subRenderMoveFSSideR"*/, v3);
    byte_4C22482 = 1;
  }
  v4 = (System_Int32_array *)sub_1C3B80C(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_23299/*"subRenderMoveFSSideR"*/, v4, v5);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetGimmickSkillRateArray(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Int32_array *v4; // x2
  const MethodInfo *v5; // x3

  if ( (byte_4C22483 & 1) == 0 )
  {
    sub_1C3B764(&int___TypeInfo, method);
    sub_1C3B764(&StringLiteral_23298/*"subRenderMoveFSSideL"*/, v3);
    byte_4C22483 = 1;
  }
  v4 = (System_Int32_array *)sub_1C3B80C(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_23298/*"subRenderMoveFSSideL"*/, v4, v5);
}


System_String_array *__fastcall QuestPhaseEntity__GetGimmickStartVoiceArray(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C22484 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_23992/*"uri=\"{0}\", "*/, method);
    byte_4C22484 = 1;
  }
  return QuestPhaseEntity__getScriptStringArrayParam(this, (System_String_o *)StringLiteral_23992/*"uri=\"{0}\", "*/, 0LL, v2);
}


int32_t __fastcall QuestPhaseEntity__GetGimmickSvtId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C22480 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_20214/*"img_txt_form_swap"*/, method);
    byte_4C22480 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20214/*"img_txt_form_swap"*/, -1, v2);
}


int32_t __fastcall QuestPhaseEntity__GetIconItemNumberDispType(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C224C8 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_20476/*"isPersonalRaid"*/, method);
    byte_4C224C8 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20476/*"isPersonalRaid"*/, 0, v2);
}


float __fastcall QuestPhaseEntity__GetIncomingCallDispTime(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C224BB & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_21036/*"md5"*/, method);
    byte_4C224BB = 1;
  }
  return (float)QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21036/*"md5"*/, 500, v2) / 1000.0;
}


System_String_o *__fastcall QuestPhaseEntity__GetIncomingCallMessage(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1

  if ( (byte_4C224BA & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_21037/*"md5-sess"*/, method);
    sub_1C3B764(&StringLiteral_1/*""*/, v4);
    byte_4C224BA = 1;
  }
  return QuestPhaseEntity__getScriptStr(
           this,
           (System_String_o *)StringLiteral_21037/*"md5-sess"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


System_String_o *__fastcall QuestPhaseEntity__GetIncomingCallTitle(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1

  if ( (byte_4C224B9 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_21038/*"md5RSA"*/, method);
    sub_1C3B764(&StringLiteral_1/*""*/, v4);
    byte_4C224B9 = 1;
  }
  return QuestPhaseEntity__getScriptStr(
           this,
           (System_String_o *)StringLiteral_21038/*"md5RSA"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


int32_t __fastcall QuestPhaseEntity__GetInitEventDeckNo(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C224E0 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_21076/*"messageShakeStop"*/, method);
    byte_4C224E0 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_21076/*"messageShakeStop"*/, 0, 0LL);
}


System_String_o *__fastcall QuestPhaseEntity__GetMapModelEntryAnimationName(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1

  if ( (byte_4C224B5 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_1467/*":"*/, method);
    sub_1C3B764(&StringLiteral_1/*""*/, v4);
    byte_4C224B5 = 1;
  }
  return QuestPhaseEntity__getScriptStr(
           this,
           (System_String_o *)StringLiteral_1467/*":"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


int32_t __fastcall QuestPhaseEntity__GetMasterSkillDelay(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C22491 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_21746/*"no UILabel"*/, method);
    byte_4C22491 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21746/*"no UILabel"*/, 0, v2);
}


System_String_o *__fastcall QuestPhaseEntity__GetMasterSkillDelayInfo(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C22492 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_21747/*"no arguments"*/, method);
    byte_4C22492 = 1;
  }
  return QuestPhaseEntity__getScriptStr(this, (System_String_o *)StringLiteral_21747/*"no arguments"*/, 0LL, v2);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetMoveSceneInfo(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Int32_array *v4; // x2
  const MethodInfo *v5; // x3

  if ( (byte_4C224BD & 1) == 0 )
  {
    sub_1C3B764(&int___TypeInfo, method);
    sub_1C3B764(&StringLiteral_21953/*"onstartparams"*/, v3);
    byte_4C224BD = 1;
  }
  v4 = (System_Int32_array *)sub_1C3B80C(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_21953/*"onstartparams"*/, v4, v5);
}


int32_t __fastcall QuestPhaseEntity__GetMovieAfterCrossFadeStartFrame(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C2247A & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_21958/*"op"*/, method);
    byte_4C2247A = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21958/*"op"*/, 0, v2);
}


int32_t __fastcall QuestPhaseEntity__GetMovieAfterCrossFadeTime(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C22479 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_21959/*"opPool"*/, method);
    byte_4C22479 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21959/*"opPool"*/, 0, v2);
}


int32_t __fastcall QuestPhaseEntity__GetNextSceneId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C22495 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_22502/*"reelSkill"*/, method);
    byte_4C22495 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22502/*"reelSkill"*/, 0, v2);
}


System_String_array *__fastcall QuestPhaseEntity__GetNextSceneParam(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  System_String_array *result; // x0

  if ( (byte_4C22496 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_22503/*"ref"*/, method);
    byte_4C22496 = 1;
  }
  result = (System_String_array *)QuestPhaseEntity__getScriptStr(this, (System_String_o *)StringLiteral_22503/*"ref"*/, 0LL, v2);
  if ( result )
    return System_String__Split((System_String_o *)result, 0x2Cu, 0, 0LL);
  return result;
}


int32_t __fastcall QuestPhaseEntity__GetNotDispEquipSkillChargeTurn(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C224C7 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_22596/*"reverseMyDeckSvtPosition"*/, method);
    byte_4C224C7 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22596/*"reverseMyDeckSvtPosition"*/, 0, v2);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetNotHavingQuests(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Int32_array *v4; // x2
  const MethodInfo *v5; // x3

  if ( (byte_4C22498 & 1) == 0 )
  {
    sub_1C3B764(&int___TypeInfo, method);
    sub_1C3B764(&StringLiteral_22601/*"revivalUnder"*/, v3);
    byte_4C22498 = 1;
  }
  v4 = (System_Int32_array *)sub_1C3B80C(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_22601/*"revivalUnder"*/, v4, v5);
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

  if ( (byte_4C224A6 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_object__TypeInfo, method);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v3);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_int__int_____ctor__, v4);
    sub_1C3B764(&System_Collections_Generic_Dictionary_int__int____TypeInfo, v5);
    sub_1C3B764(&Method_System_Collections_Generic_List_object__ForEach__, v6);
    sub_1C3B764(&System_Collections_Generic_List_object__TypeInfo, v7);
    sub_1C3B764(&Method_QuestPhaseEntity___c__DisplayClass113_0__GetNpcAiInfo_b__0__, v8);
    sub_1C3B764(&QuestPhaseEntity___c__DisplayClass113_0_TypeInfo, v9);
    sub_1C3B764(&StringLiteral_17044/*"box_gacha_draw"*/, v10);
    sub_1C3B764(&StringLiteral_17045/*"box_gacha_reset"*/, v11);
    byte_4C224A6 = 1;
  }
  obj = 0LL;
  value = 0LL;
  v12 = sub_1C3B9B0(QuestPhaseEntity___c__DisplayClass113_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  v13 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C3B9B0(System_Collections_Generic_Dictionary_int__int____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v13,
    (const MethodInfo_32F41C8 *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  if ( !v12 )
    goto LABEL_14;
  *(_QWORD *)(v12 + 16) = v13;
  v22 = (System_Collections_Generic_Dictionary_int__int____o **)(v12 + 16);
  sub_1C3B708((PartyOrganizationUtility_o *)(v12 + 16), (int64_t)v13, v16, v17, v18, v19, v20, v21);
  script = this->fields.script;
  if ( !script )
    return *v22;
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)script,
         (Il2CppObject *)StringLiteral_17044/*"box_gacha_draw"*/,
         &value,
         (const MethodInfo_3356F74 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    v24 = value;
    if ( value )
    {
      methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(value->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
        && (System_Collections_Generic_List_object__c *)value->klass->_2.typeHierarchy[methodPtr_low - 1] == System_Collections_Generic_List_object__TypeInfo )
      {
        v28 = (System_Action_object__o *)sub_1C3B9B0(System_Action_object__TypeInfo);
        System_Action_object____ctor(
          v28,
          (Il2CppObject *)v12,
          Method_QuestPhaseEntity___c__DisplayClass113_0__GetNpcAiInfo_b__0__,
          0LL);
        System_Collections_Generic_List_object___ForEach(
          (System_Collections_Generic_List_object__o *)v24,
          (System_Action_T__o *)v28,
          (const MethodInfo_368C6AC *)Method_System_Collections_Generic_List_object__ForEach__);
        return *v22;
      }
    }
  }
  v14 = this->fields.script;
  if ( !v14 )
LABEL_14:
    sub_1C3B9C0(v14, v15);
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)v14,
         (Il2CppObject *)StringLiteral_17045/*"box_gacha_reset"*/,
         &obj,
         (const MethodInfo_3356F74 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    QuestPhaseEntity__SetNpcAiInfo((System_Collections_Generic_IDictionary_int__int____o *)*v22, obj, v26);
  }
  return *v22;
}


System_String_o *__fastcall QuestPhaseEntity__GetOpenedPeriodMessage(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C224DF & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_22777/*"sequence"*/, method);
    byte_4C224DF = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_22777/*"sequence"*/, 0LL, 0LL);
}


int32_t __fastcall QuestPhaseEntity__GetOpenedPeriodPrivilegeId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C224DE & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_22778/*"sequence expected to contain elements only. Schema was not created using this tool."*/, method);
    byte_4C224DE = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22778/*"sequence expected to contain elements only. Schema was not created using this tool."*/, 0, 0LL);
}


int32_t __fastcall QuestPhaseEntity__GetOverWriteMasterImageId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C22477 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_21736/*"nistP224"*/, method);
    byte_4C22477 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21736/*"nistP224"*/, 0, v2);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall QuestPhaseEntity__GetOverwriteCommandSpellContinue(
        QuestPhaseEntity_o *this,
        int32_t def,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4C224A0 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_22839/*"setListener"*/, *(_QWORD *)&def);
    byte_4C224A0 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22839/*"setListener"*/, def, v3);
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

  if ( (byte_4C224B3 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_22840/*"setLogLevel"*/, *(_QWORD *)&genderType);
    byte_4C224B3 = 1;
  }
  ScriptIntArrayParam = QuestPhaseEntity__getScriptIntArrayParam(
                          this,
                          (System_String_o *)StringLiteral_22840/*"setLogLevel"*/,
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
    sub_1C3B9C8(ScriptIntArrayParam, v8);
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

  if ( (byte_4C2245C & 1) == 0 )
  {
    sub_1C3B764(&System_Collections_Generic_Dictionary_string__object__TypeInfo, method);
    sub_1C3B764(&StringLiteral_22850/*"setObfuscatedAccountId"*/, v4);
    byte_4C2245C = 1;
  }
  result = (System_Collections_Generic_Dictionary_string__object__o *)QuestPhaseEntity__getScriptObj(
                                                                        this,
                                                                        (System_String_o *)StringLiteral_22850/*"setObfuscatedAccountId"*/,
                                                                        v2);
  if ( result )
  {
    methodPtr_low = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (System_Collections_Generic_Dictionary_string__object__c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
    {
      sub_1C3BC80(result);
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

  if ( (byte_4C2248D & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_22854/*"setOldSkuPurchaseToken"*/, overwriteLimitCountSvtIds);
    sub_1C3B764(&StringLiteral_22855/*"setOnAttributionChangedListener"*/, v9);
    sub_1C3B764(&StringLiteral_22853/*"setOfflineMode"*/, v10);
    byte_4C2248D = 1;
  }
  ScriptIntArrayParam = QuestPhaseEntity__getScriptIntArrayParam(
                          this,
                          (System_String_o *)StringLiteral_22854/*"setOldSkuPurchaseToken"*/,
                          0LL,
                          (const MethodInfo *)overwriteLimitCountIconIds);
  *overwriteLimitCountSvtIds = ScriptIntArrayParam;
  sub_1C3B708(
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
    v24 = QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_22855/*"setOnAttributionChangedListener"*/, 0LL, v19);
    *overwriteLimitCounts = v24;
    sub_1C3B708((PartyOrganizationUtility_o *)overwriteLimitCounts, (int64_t)v24, v25, v26, v27, v28, v29, v30);
    v32 = QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_22853/*"setOfflineMode"*/, 0LL, v31);
    *overwriteLimitCountIconIds = v32;
    sub_1C3B708((PartyOrganizationUtility_o *)overwriteLimitCountIconIds, (int64_t)v32, v33, v34, v35, v36, v37, v38);
    return *overwriteLimitCounts != 0LL;
  }
  else
  {
    *overwriteLimitCounts = 0LL;
    sub_1C3B708((PartyOrganizationUtility_o *)overwriteLimitCounts, 0LL, v18, (int32_t)v19, v20, v21, v22, v23);
    *overwriteLimitCountIconIds = 0LL;
    sub_1C3B708((PartyOrganizationUtility_o *)overwriteLimitCountIconIds, 0LL, v40, v41, v42, v43, v44, v45);
    return 0;
  }
}


System_Int32_array *__fastcall QuestPhaseEntity__GetOverwriteResultBgmCondIds(
        QuestPhaseEntity_o *this,
        System_Int32_array *defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4C22460 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_22864/*"setPreinstallFilePath"*/, defVal);
    byte_4C22460 = 1;
  }
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_22864/*"setPreinstallFilePath"*/, defVal, v3);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetOverwriteResultBgmIds(
        QuestPhaseEntity_o *this,
        System_Int32_array *defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4C2245F & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_22865/*"setPreinstallTrackingEnabled"*/, defVal);
    byte_4C2245F = 1;
  }
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_22865/*"setPreinstallTrackingEnabled"*/, defVal, v3);
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

  if ( (byte_4C22450 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Array_Empty_int___, method);
    byte_4C22450 = 1;
  }
  result = QuestPhaseEntity__GetPrioredIndividualityLocal(this, method);
  if ( !result )
  {
    v5 = Method_System_Array_Empty_int___;
    v6 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v6 )
    {
      sub_1C8D69C(Method_System_Array_Empty_int___);
      v6 = v5[7];
    }
    v7 = *(_QWORD *)(v6 + 16);
    if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
      v7 = sub_1C8D640(inited);
    if ( !*(_DWORD *)(v7 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v7);
    v8 = *(_QWORD *)(v5[7] + 16LL);
    if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
      v8 = sub_1C8D640(inited);
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

  if ( (byte_4C22451 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMaster_QuestBehaviorMaster___, method);
    sub_1C3B764(&Method_DataManager_GetMaster_QuestPhaseIndividualityMaster___, v3);
    sub_1C3B764(&DataManager_TypeInfo, v4);
    byte_4C22451 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_QuestBehaviorMaster___);
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
    UniqueId = (System_Int32_array *)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_QuestPhaseIndividualityMaster___);
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
      sub_1C3B9C0(UniqueId, v8);
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

  if ( (byte_4C22453 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMaster_QuestBehaviorMaster___, method);
    sub_1C3B764(&DataManager_TypeInfo, v3);
    byte_4C22453 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_QuestBehaviorMaster___);
  UniqueId = QuestPhaseEntity__GetUniqueId(this, v5);
  if ( !Master_object )
    sub_1C3B9C0(UniqueId, v7);
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

  if ( (byte_4C22454 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMaster_QuestBehaviorMaster___, method);
    sub_1C3B764(&DataManager_TypeInfo, v3);
    byte_4C22454 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_QuestBehaviorMaster___);
  UniqueId = QuestPhaseEntity__GetUniqueId(this, v5);
  if ( !Master_object )
    sub_1C3B9C0(UniqueId, v7);
  return QuestBehaviorMaster__GetBattleBgType(
           (QuestBehaviorMaster_o *)Master_object,
           UniqueId,
           this->fields.battleBgType,
           v8);
}


int32_t __fastcall QuestPhaseEntity__GetProgressAfterMovie(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C22475 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_23092/*"specialAttrs"*/, method);
    byte_4C22475 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_23092/*"specialAttrs"*/, 0, v2);
}


int32_t __fastcall QuestPhaseEntity__GetQuestPhaseSelectRoute(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1
  int32_t ScriptIntParam; // w0
  int32_t v6; // w19
  Il2CppObject *Instance; // x0
  __int64 v8; // x1

  if ( (byte_4C2246A & 1) == 0 )
  {
    sub_1C3B764(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, method);
    sub_1C3B764(&StringLiteral_22980/*"shouldShowRequestPermissionRationale"*/, v4);
    byte_4C2246A = 1;
  }
  ScriptIntParam = QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22980/*"shouldShowRequestPermissionRationale"*/, 0, v2);
  if ( ScriptIntParam < 1 )
    return 0;
  v6 = ScriptIntParam;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Instance )
    sub_1C3B9C0(0LL, v8);
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

  if ( (byte_4C22481 & 1) == 0 )
  {
    sub_1C3B764(&int___TypeInfo, method);
    sub_1C3B764(&StringLiteral_23297/*"subRenderMoveFSR"*/, v3);
    byte_4C22481 = 1;
  }
  v4 = (System_Int32_array *)sub_1C3B80C(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_23297/*"subRenderMoveFSR"*/, v4, v5);
}


int32_t __fastcall QuestPhaseEntity__GetReferToQuestPhase(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C224CE & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_23303/*"subRenderShake"*/, method);
    byte_4C224CE = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_23303/*"subRenderShake"*/, 0, v2);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetSelectableQuests(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C22469 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_23163/*"startBattleSkip"*/, method);
    byte_4C22469 = 1;
  }
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_23163/*"startBattleSkip"*/, 0LL, v2);
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
      sub_1C3B9C8(SelectableQuests, v8);
    return SelectableQuests->m_Items[selectIndex + 1];
  }
  return result;
}


System_Int32_array *__fastcall QuestPhaseEntity__GetShadowOffSvtIds(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Int32_array *v4; // x2
  const MethodInfo *v5; // x3

  if ( (byte_4C22490 & 1) == 0 )
  {
    sub_1C3B764(&int___TypeInfo, method);
    sub_1C3B764(&StringLiteral_23736/*"treasurechest_img_bg_reward"*/, v3);
    byte_4C22490 = 1;
  }
  v4 = (System_Int32_array *)sub_1C3B80C(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_23736/*"treasurechest_img_bg_reward"*/, v4, v5);
}


int32_t __fastcall QuestPhaseEntity__GetSingleForceSvtId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C2248E & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_23825/*"unbound variable: "*/, method);
    byte_4C2248E = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_23825/*"unbound variable: "*/, 0, v2);
}


int32_t __fastcall QuestPhaseEntity__GetStartBattleSoundMode(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C224CC & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_13240/*"TUTORIAL_MESSAGE_BATTLE_210"*/, method);
    byte_4C224CC = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_13240/*"TUTORIAL_MESSAGE_BATTLE_210"*/, 0, v2);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetStartMovieWave(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C22476 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_21963/*"op_Decrement"*/, method);
    byte_4C22476 = 1;
  }
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_21963/*"op_Decrement"*/, 0LL, v2);
}


int32_t __fastcall QuestPhaseEntity__GetStartScreenEffect(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C224CB & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_13239/*"TUTORIAL_MESSAGE_BATTLE_153"*/, method);
    byte_4C224CB = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_13239/*"TUTORIAL_MESSAGE_BATTLE_153"*/, 0, v2);
}


int32_t __fastcall QuestPhaseEntity__GetSupportInitDeckIndex(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C224A1 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_19505/*"graphic.multithreaded"*/, method);
    byte_4C224A1 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19505/*"graphic.multithreaded"*/, 0, v2);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetTakeOverEnemyNpcIds(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C224DA & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_24335/*"weapon_"*/, method);
    byte_4C224DA = 1;
  }
  return EntityScriptUtil__GetIntArray(this->fields.script, (System_String_o *)StringLiteral_24335/*"weapon_"*/, 0LL, 0LL);
}


int32_t __fastcall QuestPhaseEntity__GetTemporaryCommandSpell(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C2249E & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_24383/*"wipein"*/, method);
    byte_4C2249E = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_24383/*"wipein"*/, -1, v2);
}


int64_t __fastcall QuestPhaseEntity__GetUniqueId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  int32_t phase; // w19
  int32_t questId; // w20

  if ( (byte_4C2244F & 1) == 0 )
  {
    sub_1C3B764(&BattleDataDefine_TypeInfo, method);
    byte_4C2244F = 1;
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

  if ( (byte_4C2248F & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_24859/*"ಀഀ"*/, method);
    byte_4C2248F = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_24859/*"ಀഀ"*/, 1, v2);
}


System_Int32_array *__fastcall QuestPhaseEntity__GetVoiceOffPlayerSvtIdArray(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C224B2 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_25097/*"􀀀"*/, method);
    byte_4C224B2 = 1;
  }
  return EntityScriptUtil__GetIntArrayDefaultEmpty(this->fields.script, (System_String_o *)StringLiteral_25097/*"􀀀"*/, 0LL);
}


System_String_o *__fastcall QuestPhaseEntity__GetWarBoardStartMovieName(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1

  if ( (byte_4C224AC & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_15902/*"_IsEnemy"*/, method);
    sub_1C3B764(&StringLiteral_1/*""*/, v4);
    byte_4C224AC = 1;
  }
  return QuestPhaseEntity__getScriptStr(
           this,
           (System_String_o *)StringLiteral_15902/*"_IsEnemy"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


System_String_array *__fastcall QuestPhaseEntity__GetWaveStartMovie(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C22474 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_25179, method);
    byte_4C22474 = 1;
  }
  return QuestPhaseEntity__getScriptStringArrayParam(this, (System_String_o *)StringLiteral_25179, 0LL, v2);
}


int32_t __fastcall QuestPhaseEntity__GetWinBgmOffFlg(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C22489 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_19370/*"gdprForgetMe"*/, method);
    byte_4C22489 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19370/*"gdprForgetMe"*/, 0, v2);
}


int32_t __fastcall QuestPhaseEntity__GetWinVoiceOffFlg(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C22487 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_19384/*"getAllValues"*/, method);
    byte_4C22487 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19384/*"getAllValues"*/, 0, v2);
}


bool __fastcall QuestPhaseEntity__HasReleaseFocusQuestBoardKey(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C224C4 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_21237/*"mstBgm"*/, method);
    byte_4C224C4 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_21237/*"mstBgm"*/, 0LL);
}


bool __fastcall QuestPhaseEntity__IsActiveAssistSkill(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Int32_array *v4; // x0
  const MethodInfo *v5; // x3
  System_Int32_array *ScriptIntArrayParam; // x0
  __int64 v7; // x1

  if ( (byte_4C2249A & 1) == 0 )
  {
    sub_1C3B764(&int___TypeInfo, method);
    sub_1C3B764(&StringLiteral_17269/*"btn_txt_status_off"*/, v3);
    byte_4C2249A = 1;
  }
  v4 = (System_Int32_array *)sub_1C3B80C(int___TypeInfo, 0LL);
  ScriptIntArrayParam = QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_17269/*"btn_txt_status_off"*/, v4, v5);
  if ( !ScriptIntArrayParam )
    sub_1C3B9C0(0LL, v7);
  return ScriptIntArrayParam->max_length != 0;
}


bool __fastcall QuestPhaseEntity__IsAreaImporveQuest(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4C224AD & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_17215/*"btn_txt_cardtoarchive_on"*/, method);
    byte_4C224AD = 1;
  }
  return QuestPhaseEntity__getScriptObj(this, (System_String_o *)StringLiteral_17215/*"btn_txt_cardtoarchive_on"*/, v2) != 0LL;
}


bool __fastcall QuestPhaseEntity__IsAutoExecute(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C224D5 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_21202/*"mr-IN"*/, method);
    byte_4C224D5 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_21202/*"mr-IN"*/, 0LL);
}


bool __fastcall QuestPhaseEntity__IsContinueWaveRestart(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C224C2 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_18602/*"ellipsis"*/, method);
    byte_4C224C2 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_18602/*"ellipsis"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__IsFadeOutMainBgmBeforeBattle(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C224CF & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_19751/*"icon_class001"*/, method);
    byte_4C224CF = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_19751/*"icon_class001"*/, 0LL);
}


bool __fastcall QuestPhaseEntity__IsHideAssistConfButton(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C2249D & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_20310/*"indexB"*/, method);
    byte_4C2249D = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20310/*"indexB"*/, 0, v2) != 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestPhaseEntity__IsHideBattlePointGauge(
        QuestPhaseEntity_o *this,
        int32_t battlePointId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_IEnumerable_TSource__o *IntArray; // x0

  if ( (byte_4C224D4 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Linq_Enumerable_Contains_int___, *(_QWORD *)&battlePointId);
    sub_1C3B764(&StringLiteral_7413/*"Indexing parameters of getter and setter must match."*/, v5);
    byte_4C224D4 = 1;
  }
  IntArray = (System_Collections_Generic_IEnumerable_TSource__o *)EntityScriptUtil__GetIntArray(
                                                                    this->fields.script,
                                                                    (System_String_o *)StringLiteral_7413/*"Indexing parameters of getter and setter must match."*/,
                                                                    0LL,
                                                                    0LL);
  if ( IntArray )
    LOBYTE(IntArray) = System_Linq_Enumerable__Contains_int_(
                         IntArray,
                         battlePointId,
                         (const MethodInfo_300875C *)Method_System_Linq_Enumerable_Contains_int___);
  return (char)IntArray;
}


bool __fastcall QuestPhaseEntity__IsIgnoreBattleLoseDialog(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C2246E & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_20627/*"jsonResponse"*/, method);
    byte_4C2246E = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_20627/*"jsonResponse"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestPhaseEntity__IsIgnoreBattlePointUp(
        QuestPhaseEntity_o *this,
        int32_t battlePointId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_IEnumerable_TSource__o *IntArray; // x0

  if ( (byte_4C224D2 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Linq_Enumerable_Contains_int___, *(_QWORD *)&battlePointId);
    sub_1C3B764(&StringLiteral_7628/*"Invalid attempt to call {0} when the stream non-writable."*/, v5);
    byte_4C224D2 = 1;
  }
  IntArray = (System_Collections_Generic_IEnumerable_TSource__o *)EntityScriptUtil__GetIntArray(
                                                                    this->fields.script,
                                                                    (System_String_o *)StringLiteral_7628/*"Invalid attempt to call {0} when the stream non-writable."*/,
                                                                    0LL,
                                                                    0LL);
  if ( IntArray )
    LOBYTE(IntArray) = System_Linq_Enumerable__Contains_int_(
                         IntArray,
                         battlePointId,
                         (const MethodInfo_300875C *)Method_System_Linq_Enumerable_Contains_int___);
  return (char)IntArray;
}


bool __fastcall QuestPhaseEntity__IsInterruptionQuest(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C224CA & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_21124/*"missing EncryptedContentInfo.EncryptedContent"*/, method);
    byte_4C224CA = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21124/*"missing EncryptedContentInfo.EncryptedContent"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__IsInvisibleConnectAndLoad(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C22494 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_21167/*"mode attribute is required"*/, method);
    byte_4C22494 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21167/*"mode attribute is required"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__IsKeepFieldBuffWhenMoveNextBattle(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C224E1 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_21398/*"mstFriendship"*/, method);
    byte_4C224E1 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_21398/*"mstFriendship"*/, 0, 0LL) != 0;
}


bool __fastcall QuestPhaseEntity__IsKeepSubBgmAfterBattleResult(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C2248A & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_21401/*"mstFuncCategory"*/, method);
    byte_4C2248A = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_21401/*"mstFuncCategory"*/, 0LL);
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

  if ( (byte_4C22493 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Array_FindAll_int___, individualitys);
    sub_1C3B764(&Method_System_Collections_Generic_HashSet_int___ctor___77832208, v5);
    sub_1C3B764(&System_Collections_Generic_HashSet_int__TypeInfo, v6);
    sub_1C3B764(&System_Predicate_int__TypeInfo, v7);
    byte_4C22493 = 1;
  }
  PrioredIndividuality = (System_Collections_Generic_IEnumerable_T__o *)QuestPhaseEntity__GetPrioredIndividuality(
                                                                          this,
                                                                          (const MethodInfo *)individualitys);
  v9 = (System_Collections_Generic_HashSet_int__o *)sub_1C3B9B0(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor_55842540(
    v9,
    PrioredIndividuality,
    (const MethodInfo_35416EC *)Method_System_Collections_Generic_HashSet_int___ctor___77832208);
  All_int = (System_Predicate_int__o *)sub_1C3B9B0(System_Predicate_int__TypeInfo);
  if ( !v9
    || (v12 = (System_Predicate_T__o *)All_int,
        System_Predicate_int____ctor(All_int, (Il2CppObject *)v9, (intptr_t)v9->klass->vtable._9_CopyTo.methodPtr, 0LL),
        (All_int = (System_Predicate_int__o *)System_Array__FindAll_int_(
                                                individualitys,
                                                v12,
                                                (const MethodInfo_30EC894 *)Method_System_Array_FindAll_int___)) == 0LL) )
  {
    sub_1C3B9C0(All_int, v11);
  }
  return All_int->fields.m_target != 0LL;
}


bool __fastcall QuestPhaseEntity__IsNonStopEndBgm(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C2246B & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_22563/*"resetItemId"*/, method);
    byte_4C2246B = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22563/*"resetItemId"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__IsNoneSupportFriendPoint(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C224D8 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_22575/*"restriction"*/, method);
    byte_4C224D8 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22575/*"restriction"*/, 0, 0LL) != 0;
}


bool __fastcall QuestPhaseEntity__IsNotClassBoard(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C224BE & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_22594/*"returnType"*/, method);
    byte_4C224BE = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22594/*"returnType"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__IsNotResetResultDispFlag(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C22478 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_22603/*"revokeCommandCodeIds"*/, method);
    byte_4C22478 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22603/*"revokeCommandCodeIds"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__IsNotUseRestrictionDialog(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C224BF & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_22605/*"rewardInfos"*/, method);
    byte_4C224BF = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22605/*"rewardInfos"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__IsPlayScriptBeforeForWarBoard(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C22499 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_21241/*"mstBlankEarthSpot"*/, method);
    byte_4C22499 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21241/*"mstBlankEarthSpot"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__IsReleaseFocusQuestBoard(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C224C5 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_21237/*"mstBgm"*/, method);
    byte_4C224C5 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21237/*"mstBgm"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__IsRepeatReward(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C224BC & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_23349/*"summon_up_04"*/, method);
    byte_4C224BC = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_23349/*"summon_up_04"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__IsReverseMyDeckSvtPosition(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C224D0 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_23401/*"sy5"*/, method);
    byte_4C224D0 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_23401/*"sy5"*/, 0LL);
}


bool __fastcall QuestPhaseEntity__IsSaveInterruptionEnemyData(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C224DB & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_23495/*"tVoiceUser"*/, method);
    byte_4C224DB = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_23495/*"tVoiceUser"*/, 0, 0LL) != 0;
}


bool __fastcall QuestPhaseEntity__IsSkipBattleFinish(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C224B6 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_23846/*"unit"*/, method);
    byte_4C224B6 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_23846/*"unit"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__IsSkipMoveNextBattleFade(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C224D9 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_23848/*"unity-base-dropdown"*/, method);
    byte_4C224D9 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_23848/*"unity-base-dropdown"*/, 0, 0LL) != 0;
}


bool __fastcall QuestPhaseEntity__IsUseTemporaryCommandSpell(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C2249F & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_24867/*"Ⴀᄀ"*/, method);
    byte_4C2249F = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_24867/*"Ⴀᄀ"*/, -1, v2) == 1;
}


bool __fastcall QuestPhaseEntity__IsWaveCountInfinity(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C224B4 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_25175, method);
    byte_4C224B4 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_25175, -1, v2) != -1;
}


bool __fastcall QuestPhaseEntity__IsWaveSetup(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C224C0 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_25177, method);
    byte_4C224C0 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_25177, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__IsWaveSetupAsOneParty(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C224C1 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_25178, method);
    byte_4C224C1 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_25178, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__PlayHappinessCounterEffect(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C224D3 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_10876/*"REVERT_BUFF_LOWER_LIMIT"*/, method);
    byte_4C224D3 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_10876/*"REVERT_BUFF_LOWER_LIMIT"*/, 0LL);
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

  if ( (byte_4C224A7 & 1) == 0 )
  {
    sub_1C3B764(&Method_BasicHelper_GetValue_long___, obj);
    sub_1C3B764(&Method_BasicHelper_GetValue_List_object____, v5);
    sub_1C3B764(&System_Converter_object__int__TypeInfo, v6);
    sub_1C3B764(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v7);
    sub_1C3B764(&System_Collections_Generic_IDictionary_int__int____TypeInfo, v8);
    sub_1C3B764(&Method_System_Collections_Generic_List_object__ConvertAll_int___, v9);
    sub_1C3B764(&Method_System_Collections_Generic_List_int__ToArray__, v10);
    sub_1C3B764(&Method_QuestPhaseEntity___c__SetNpcAiInfo_b__114_0__, v11);
    sub_1C3B764(&QuestPhaseEntity___c_TypeInfo, v12);
    sub_1C3B764(&StringLiteral_17043/*"box_g_open"*/, v13);
    sub_1C3B764(&StringLiteral_22621/*"ring_gard1_2"*/, v14);
    byte_4C224A7 = 1;
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
                       (System_String_o *)StringLiteral_22621/*"ring_gard1_2"*/,
                       0LL,
                       (const MethodInfo_2FDDDC4 *)Method_BasicHelper_GetValue_long___);
        Value_object = BasicHelper__GetValue_object_(
                         v17,
                         (System_String_o *)StringLiteral_17043/*"box_g_open"*/,
                         0LL,
                         (const MethodInfo_2FDDEB0 *)Method_BasicHelper_GetValue_List_object____);
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
              _9__114_0 = (System_Converter_object__int__o *)sub_1C3B9B0(System_Converter_object__int__TypeInfo);
              System_Converter_object__int____ctor(
                _9__114_0,
                v23,
                Method_QuestPhaseEntity___c__SetNpcAiInfo_b__114_0__,
                0LL);
              static_fields = QuestPhaseEntity___c_TypeInfo->static_fields;
              static_fields->__9__114_0 = _9__114_0;
              sub_1C3B708(
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
                                                              (const MethodInfo_2F1F8D4 *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
            if ( !v31
              || (v31 = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_int___ToArray(
                                                                    v31,
                                                                    (const MethodInfo_3670700 *)Method_System_Collections_Generic_List_int__ToArray__),
                  !dicNpcAiId) )
            {
              sub_1C3B9C0(v31, v32);
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
              p_method = sub_1C8D744(dicNpcAiId, System_Collections_Generic_IDictionary_int__int____TypeInfo, 1LL);
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
  System_Func_object__int__o *_9__162_1; // x22
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

  if ( (byte_4C224D7 & 1) == 0 )
  {
    sub_1C3B764(&Method_BasicHelper_GetValue_string__object___, *(_QWORD *)&servantId);
    sub_1C3B764(&Method_DataManager_GetMaster_CommonReleaseMaster___, v9);
    sub_1C3B764(&DataManager_TypeInfo, v10);
    sub_1C3B764(&Method_System_Linq_Enumerable_OrderByDescending_BattleTreasureDeviceSequenceSelectType__int___, v11);
    sub_1C3B764(&Method_System_Linq_Enumerable_ToArray_BattleTreasureDeviceSequenceSelectType___, v12);
    sub_1C3B764(&Method_System_Linq_Enumerable_Where_BattleTreasureDeviceSequenceSelectType___, v13);
    sub_1C3B764(&System_Func_BattleTreasureDeviceSequenceSelectType__bool__TypeInfo, v14);
    sub_1C3B764(&System_Func_BattleTreasureDeviceSequenceSelectType__int__TypeInfo, v15);
    sub_1C3B764(&Method_JsonManager_DeserializeArray_BattleTreasureDeviceSequenceSelectType___, v16);
    sub_1C3B764(&JsonManager_TypeInfo, v17);
    sub_1C3B764(&Method_QuestPhaseEntity___c__TryGetOverwritePlayerSequenceSelectTypeByGender_b__162_1__, v18);
    sub_1C3B764(
      &Method_QuestPhaseEntity___c__DisplayClass162_0__TryGetOverwritePlayerSequenceSelectTypeByGender_b__0__,
      v19);
    sub_1C3B764(&QuestPhaseEntity___c__DisplayClass162_0_TypeInfo, v20);
    sub_1C3B764(&QuestPhaseEntity___c_TypeInfo, v21);
    sub_1C3B764(&StringLiteral_22861/*"setOpenUrlCallback"*/, v22);
    byte_4C224D7 = 1;
  }
  v23 = sub_1C3B9B0(QuestPhaseEntity___c__DisplayClass162_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v23, 0LL);
  if ( !v23 )
    goto LABEL_28;
  *(_DWORD *)(v23 + 16) = servantId;
  *genderSelectType = -1;
  *patternId = -1;
  Value_object__object = BasicHelper__GetValue_object__object_(
                           (System_Collections_Generic_Dictionary_K__V__o *)this->fields.script,
                           (Il2CppObject *)StringLiteral_22861/*"setOpenUrlCallback"*/,
                           0LL,
                           (const MethodInfo_2FDE65C *)Method_BasicHelper_GetValue_string__object___);
  if ( !Value_object__object )
    return (char)Value_object__object;
  v27 = Value_object__object;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v28 = (System_Collections_Generic_IEnumerable_TSource__o *)JsonManager__DeserializeArray_object_(
                                                               v27,
                                                               (const MethodInfo_3058CE8 *)Method_JsonManager_DeserializeArray_BattleTreasureDeviceSequenceSelectType___);
  v29 = (System_Func_object__bool__o *)sub_1C3B9B0(System_Func_BattleTreasureDeviceSequenceSelectType__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v29,
    (Il2CppObject *)v23,
    Method_QuestPhaseEntity___c__DisplayClass162_0__TryGetOverwritePlayerSequenceSelectTypeByGender_b__0__,
    0LL);
  v30 = System_Linq_Enumerable__Where_object_(
          v28,
          (System_Func_TSource__bool__o *)v29,
          (const MethodInfo_3030BDC *)Method_System_Linq_Enumerable_Where_BattleTreasureDeviceSequenceSelectType___);
  v31 = QuestPhaseEntity___c_TypeInfo;
  v32 = v30;
  if ( !QuestPhaseEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestPhaseEntity___c_TypeInfo);
    v31 = QuestPhaseEntity___c_TypeInfo;
  }
  _9__162_1 = (System_Func_object__int__o *)v31->static_fields->__9__162_1;
  if ( !_9__162_1 )
  {
    if ( !v31->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v31);
      v31 = QuestPhaseEntity___c_TypeInfo;
    }
    v34 = (Il2CppObject *)v31->static_fields->__9;
    _9__162_1 = (System_Func_object__int__o *)sub_1C3B9B0(System_Func_BattleTreasureDeviceSequenceSelectType__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__162_1,
      v34,
      Method_QuestPhaseEntity___c__TryGetOverwritePlayerSequenceSelectTypeByGender_b__162_1__,
      0LL);
    static_fields = QuestPhaseEntity___c_TypeInfo->static_fields;
    static_fields->__9__162_1 = (struct System_Func_BattleTreasureDeviceSequenceSelectType__int__o *)_9__162_1;
    sub_1C3B708(
      (PartyOrganizationUtility_o *)&static_fields->__9__162_1,
      (int64_t)_9__162_1,
      v36,
      v37,
      v38,
      v39,
      v40,
      v41);
  }
  v42 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                               v32,
                                                               (System_Func_TSource__TKey__o *)_9__162_1,
                                                               (const MethodInfo_301A780 *)Method_System_Linq_Enumerable_OrderByDescending_BattleTreasureDeviceSequenceSelectType__int___);
  v43 = System_Linq_Enumerable__ToArray_object_(
          v42,
          (const MethodInfo_302ACC8 *)Method_System_Linq_Enumerable_ToArray_BattleTreasureDeviceSequenceSelectType___);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v43, 0LL) )
    goto LABEL_25;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !v43 )
LABEL_28:
    sub_1C3B9C0(Master_object, monitor_high);
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
      sub_1C3B9C8(Master_object, monitor_high);
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

  if ( (byte_4C22464 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_17437/*"card_limit"*/, *(_QWORD *)&defVal);
    byte_4C22464 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_17437/*"card_limit"*/, defVal, v3);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall QuestPhaseEntity__getBattleFieldMotionId(
        QuestPhaseEntity_o *this,
        int32_t defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4C22466 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_19787/*"icon_costume_02"*/, *(_QWORD *)&defVal);
    byte_4C22466 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_19787/*"icon_costume_02"*/, defVal, v3);
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

  if ( (byte_4C22467 & 1) == 0 )
  {
    sub_1C3B764(&int___TypeInfo, defVals);
    sub_1C3B764(&StringLiteral_19788/*"icon_costume_03"*/, v6);
    byte_4C22467 = 1;
  }
  result = QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_19788/*"icon_costume_03"*/, defVals, v3);
  if ( !result )
    goto LABEL_10;
  if ( *(_QWORD *)&result->max_length )
    return result;
  BattleFieldMotionId = QuestPhaseEntity__getBattleFieldMotionId(this, -1, v9);
  result = defVals;
  if ( BattleFieldMotionId == -1 )
    return result;
  result = (System_Int32_array *)sub_1C3B80C(int___TypeInfo, 1LL);
  if ( !result )
LABEL_10:
    sub_1C3B9C0(result, v8);
  if ( !result->max_length )
    sub_1C3B9C8(result, v8);
  result->m_Items[1] = BattleFieldMotionId;
  return result;
}


int32_t __fastcall QuestPhaseEntity__getBreakOnBattleWinWaitMSec(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C22472 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_17779/*"combine_01"*/, method);
    byte_4C22472 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_17779/*"combine_01"*/, 0, v2);
}


System_Int32_array *__fastcall QuestPhaseEntity__getEventGrounpIds(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Int32_array *v4; // x2
  const MethodInfo *v5; // x3

  if ( (byte_4C22468 & 1) == 0 )
  {
    sub_1C3B764(&int___TypeInfo, method);
    sub_1C3B764(&StringLiteral_19506/*"graphic.name"*/, v3);
    byte_4C22468 = 1;
  }
  v4 = (System_Int32_array *)sub_1C3B80C(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_19506/*"graphic.name"*/, v4, v5);
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

  if ( (byte_4C224A4 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_20327/*"info_base"*/, method);
    byte_4C224A4 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20327/*"info_base"*/, -1, v2);
}


System_String_o *__fastcall QuestPhaseEntity__getHintMessage(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1

  if ( (byte_4C224A3 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_20328/*"infos"*/, method);
    sub_1C3B764(&StringLiteral_1/*""*/, v4);
    byte_4C224A3 = 1;
  }
  return QuestPhaseEntity__getScriptStr(
           this,
           (System_String_o *)StringLiteral_20328/*"infos"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


System_String_o *__fastcall QuestPhaseEntity__getHintMessageTitle(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1

  if ( (byte_4C224A2 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_1/*""*/, method);
    sub_1C3B764(&StringLiteral_20330/*"inherit"*/, v4);
    byte_4C224A2 = 1;
  }
  return QuestPhaseEntity__getScriptStr(
           this,
           (System_String_o *)StringLiteral_20330/*"inherit"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           v2);
}


int32_t __fastcall QuestPhaseEntity__getHintOpenType(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C224A5 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_20329/*"inftynaeINFTYNAE0123456789.,-*/+%^()cosqrludxvRL=pP#"*/, method);
    byte_4C224A5 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20329/*"inftynaeINFTYNAE0123456789.,-*/+%^()cosqrludxvRL=pP#"*/, 0, v2);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall QuestPhaseEntity__getLeave(QuestPhaseEntity_o *this, int32_t defVal, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4C22463 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_21491/*"mstQuestSpotRelease"*/, *(_QWORD *)&defVal);
    byte_4C22463 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21491/*"mstQuestSpotRelease"*/, defVal, v3);
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

  if ( (byte_4C2245E & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_23384/*"svt_equip_combine"*/, *(_QWORD *)&defVal);
    byte_4C2245E = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_23384/*"svt_equip_combine"*/, defVal, v3);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall QuestPhaseEntity__getResultEffectId(
        QuestPhaseEntity_o *this,
        int32_t defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4C22462 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_23385/*"svt_equip_set"*/, *(_QWORD *)&defVal);
    byte_4C22462 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_23385/*"svt_equip_set"*/, defVal, v3);
}


System_Int32_array *__fastcall QuestPhaseEntity__getResultEnemyVoiceIds(
        QuestPhaseEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Int32_array *v4; // x2
  const MethodInfo *v5; // x3

  if ( (byte_4C2246C & 1) == 0 )
  {
    sub_1C3B764(&int___TypeInfo, method);
    sub_1C3B764(&StringLiteral_23386/*"svt_voice_id"*/, v3);
    byte_4C2246C = 1;
  }
  v4 = (System_Int32_array *)sub_1C3B80C(int___TypeInfo, 0LL);
  return QuestPhaseEntity__getScriptIntArrayParam(this, (System_String_o *)StringLiteral_23386/*"svt_voice_id"*/, v4, v5);
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

  if ( (byte_4C22456 & 1) == 0 )
  {
    sub_1C3B764(&System_Converter_object__int__TypeInfo, key);
    sub_1C3B764(&Method_System_Collections_Generic_List_object__ConvertAll_int___, v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_int__ToArray__, v8);
    sub_1C3B764(&Method_QuestPhaseEntity___c__getScriptIntArrayParam_b__31_0__, v9);
    sub_1C3B764(&QuestPhaseEntity___c_TypeInfo, v10);
    byte_4C22456 = 1;
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
    _9__31_0 = (System_Converter_object__int__o *)sub_1C3B9B0(System_Converter_object__int__TypeInfo);
    System_Converter_object__int____ctor(
      _9__31_0,
      v15,
      Method_QuestPhaseEntity___c__getScriptIntArrayParam_b__31_0__,
      0LL);
    static_fields = QuestPhaseEntity___c_TypeInfo->static_fields;
    static_fields->__9__31_0 = _9__31_0;
    sub_1C3B708(
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
                                                    (const MethodInfo_2F1F8D4 *)Method_System_Collections_Generic_List_object__ConvertAll_int___);
  if ( !v23 )
    sub_1C3B9C0(0LL, v24);
  return System_Collections_Generic_List_int___ToArray(
           v23,
           (const MethodInfo_3670700 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  if ( (byte_4C22455 & 1) == 0 )
  {
    sub_1C3B764(&long_TypeInfo, key);
    byte_4C22455 = 1;
  }
  ScriptObj = QuestPhaseEntity__getScriptObj(this, key, *(const MethodInfo **)&defVal);
  if ( !ScriptObj )
    return v4;
  if ( ScriptObj->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(ScriptObj, long_TypeInfo, v8, v9);
  sub_1C3BC80(ScriptObj);
  return (unsigned int)QuestPhaseEntity__getScriptObj(v11, v12, v13);
}


Il2CppObject *__fastcall QuestPhaseEntity__getScriptObj(
        QuestPhaseEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  Il2CppObject *result; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C2245A & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, key);
    byte_4C2245A = 1;
  }
  result = (Il2CppObject *)this->fields.script;
  if ( result )
  {
    value = 0LL;
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)result,
           (Il2CppObject *)key,
           &value,
           (const MethodInfo_3356F74 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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

  if ( (byte_4C22458 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_object__ToArray__, key);
    byte_4C22458 = 1;
  }
  ScriptObjListParam = QuestPhaseEntity__getScriptObjListParam(this, key, (const MethodInfo *)defVal);
  if ( ScriptObjListParam )
    return System_Collections_Generic_List_object___ToArray(
             ScriptObjListParam,
             (const MethodInfo_368D7C4 *)Method_System_Collections_Generic_List_object__ToArray__);
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

  if ( (byte_4C22459 & 1) == 0 )
  {
    sub_1C3B764(&System_Collections_Generic_List_object__TypeInfo, key);
    byte_4C22459 = 1;
  }
  result = (System_Collections_Generic_List_object__o *)QuestPhaseEntity__getScriptObj(this, key, method);
  if ( result )
  {
    methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (System_Collections_Generic_List_object__c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != System_Collections_Generic_List_object__TypeInfo )
    {
      sub_1C3BC80(result);
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

  if ( (byte_4C2245B & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    sub_1C3B764(&string_TypeInfo, v8);
    byte_4C2245B = 1;
  }
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)key,
          (const MethodInfo_335595C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return defVal;
  }
  v11 = this->fields.script;
  if ( !v11 )
    sub_1C3B9C0(0LL, v10);
  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
           (System_Collections_Generic_Dictionary_object__object__o *)v11,
           (Il2CppObject *)key,
           (const MethodInfo_33556E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  defVal = (System_String_o *)Item;
  if ( !Item || (System_String_c *)Item->klass == string_TypeInfo )
    return defVal;
  sub_1C3BC80(Item);
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

  if ( (byte_4C22457 & 1) == 0 )
  {
    sub_1C3B764(&System_Converter_object__string__TypeInfo, key);
    sub_1C3B764(&Method_System_Collections_Generic_List_object__ConvertAll_string___, v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_string__ToArray__, v8);
    sub_1C3B764(&Method_QuestPhaseEntity___c__getScriptStringArrayParam_b__32_0__, v9);
    sub_1C3B764(&QuestPhaseEntity___c_TypeInfo, v10);
    byte_4C22457 = 1;
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
    _9__32_0 = (System_Converter_TInput__TOutput__o *)sub_1C3B9B0(System_Converter_object__string__TypeInfo);
    System_Converter_object__object____ctor(
      _9__32_0,
      v15,
      Method_QuestPhaseEntity___c__getScriptStringArrayParam_b__32_0__,
      0LL);
    static_fields = QuestPhaseEntity___c_TypeInfo->static_fields;
    static_fields->__9__32_0 = (struct System_Converter_object__string__o *)_9__32_0;
    sub_1C3B708(
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
                                                       (const MethodInfo_2F1F9D8 *)Method_System_Collections_Generic_List_object__ConvertAll_string___);
  if ( !v23 )
    sub_1C3B9C0(0LL, v24);
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  v23,
                                  (const MethodInfo_368D7C4 *)Method_System_Collections_Generic_List_string__ToArray__);
}


int32_t __fastcall QuestPhaseEntity__getSpecialShadowEffectId(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C2247D & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_20187/*"img_txt_classscore_{0}"*/, method);
    byte_4C2247D = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20187/*"img_txt_classscore_{0}"*/, 0, v2);
}


int32_t __fastcall QuestPhaseEntity__getTurnSituationType(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C2247C & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_24596/*"{0:#,0} / {1:#,0}"*/, method);
    byte_4C2247C = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_24596/*"{0:#,0} / {1:#,0}"*/, 0, v2);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall QuestPhaseEntity__getUniqueCameraId(
        QuestPhaseEntity_o *this,
        int32_t defVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4C22465 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_24682/*"{0}({1})"*/, *(_QWORD *)&defVal);
    byte_4C22465 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_24682/*"{0}({1})"*/, defVal, v3);
}


bool __fastcall QuestPhaseEntity__isBattleFinishCameraTargetAll(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C2247B & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_17439/*"card_servant_"*/, method);
    byte_4C2247B = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_17439/*"card_servant_"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__isBreakOnBattleWin(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C22470 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_17777/*"combineExp"*/, method);
    byte_4C22470 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_17777/*"combineExp"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__isBreakOnBattleWinFadeColorBlack(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C22471 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_17778/*"combineResultMultipleForm"*/, method);
    byte_4C22471 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_17778/*"combineResultMultipleForm"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__isDisableChangeRaidDownMessage(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C2247E & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_21206/*"ms_Kanji"*/, method);
    byte_4C2247E = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_21206/*"ms_Kanji"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__isDispLoseResult(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C2246D & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_23387/*"sw"*/, method);
    byte_4C2246D = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_23387/*"sw"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__isFadeOutBgmBeforeMovie(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C22461 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_6722/*"FortuneBonusPlayAnim"*/, method);
    byte_4C22461 = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_6722/*"FortuneBonusPlayAnim"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__isNoResult(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C2246F & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_22546/*"repeatCount"*/, method);
    byte_4C2246F = 1;
  }
  return QuestPhaseEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22546/*"repeatCount"*/, 0, v2) != 0;
}


bool __fastcall QuestPhaseEntity__isTurnSituationType(QuestPhaseEntity_o *this, const MethodInfo *method)
{
  return QuestPhaseEntity__getTurnSituationType(this, method) > 0;
}


void __fastcall QuestPhaseEntity__GetBattleSkillDropEffectIds_d__168___ctor(
        QuestPhaseEntity__GetBattleSkillDropEffectIds_d__168_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
  this->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
}


bool __fastcall QuestPhaseEntity__GetBattleSkillDropEffectIds_d__168__MoveNext(
        QuestPhaseEntity__GetBattleSkillDropEffectIds_d__168_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  QuestPhaseEntity__GetBattleSkillDropEffectIds_d__168_o *v8; // x19
  __int64 v9; // x1
  __int64 v10; // x1
  int32_t _1__state; // w8
  QuestPhaseEntity_o *_4__this; // x0
  System_Collections_Generic_IEnumerable_FunctionEntity__o *BattleSkillDropFunctionEntities; // x0
  __int64 v14; // x1
  System_Collections_Generic_IEnumerable_FunctionEntity__o *v15; // x19
  System_Collections_Generic_IEnumerable_FunctionEntity__c *klass; // x8
  __int64 v17; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  struct BattleSkillDropInfo_JsonConvertData_o *data_5__3; // x8
  int32_t breakEffectId; // w8
  bool result; // w0
  PartyOrganizationUtility_o *p_data_5__3; // x19
  _BOOL8 BattleSkillDropInfoDict; // x0
  __int64 v25; // x1
  int64_t v26; // x1
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  struct System_Collections_Generic_IEnumerator_FunctionEntity__o *_7__wrap1; // x19
  System_Collections_Generic_IEnumerator_FunctionEntity__c *v34; // x8
  __int64 v35; // x9
  int *v36; // x10
  __int64 v37; // x0
  const MethodInfo *v38; // x1
  struct System_Collections_Generic_IEnumerator_FunctionEntity__o *v39; // x19
  System_Collections_Generic_IEnumerator_FunctionEntity__c *v40; // x8
  __int64 v41; // x9
  int *v42; // x10
  __int64 v43; // x0
  FunctionEntity_o *v44; // x0
  __int64 v45; // x1
  struct BattleSkillDropInfo_JsonConvertData_o *v46; // x9
  int32_t appearEffectId; // w9
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  QuestPhaseEntity__GetBattleSkillDropEffectIds_d__168_o *v54; // [xsp+18h] [xbp-28h]

  v8 = this;
  v54 = this;
  if ( (byte_4C224E5 & 1) == 0 )
  {
    sub_1C3B764(&System_Collections_Generic_IEnumerable_FunctionEntity__TypeInfo, method);
    sub_1C3B764(&System_Collections_Generic_IEnumerator_FunctionEntity__TypeInfo, v9);
    this = (QuestPhaseEntity__GetBattleSkillDropEffectIds_d__168_o *)sub_1C3B764(
                                                                       &System_Collections_IEnumerator_TypeInfo,
                                                                       v10);
    byte_4C224E5 = 1;
  }
  _1__state = v8->fields.__1__state;
  if ( _1__state == 2 )
  {
    v8->fields._data_5__3 = 0LL;
    p_data_5__3 = (PartyOrganizationUtility_o *)&v8->fields._data_5__3;
    LODWORD(p_data_5__3[-1].fields.questUseItemStateList) = -3;
    sub_1C3B708(p_data_5__3, 0LL, v2, v3, v4, v5, v6, v7);
    goto LABEL_18;
  }
  if ( _1__state == 1 )
  {
    data_5__3 = v8->fields._data_5__3;
    v8->fields.__1__state = -3;
    if ( !data_5__3 )
      sub_1C3B9C0(this, method);
    breakEffectId = data_5__3->fields.breakEffectId;
    result = 1;
    v8->fields.__1__state = 2;
    v8->fields.__2__current = breakEffectId;
  }
  else if ( _1__state )
  {
    return 0;
  }
  else
  {
    _4__this = v8->fields.__4__this;
    v8->fields.__1__state = -1;
    if ( !_4__this )
      sub_1C3B9C0(0LL, method);
    BattleSkillDropFunctionEntities = QuestPhaseEntity__GetBattleSkillDropFunctionEntities(_4__this, method);
    v15 = BattleSkillDropFunctionEntities;
    if ( !BattleSkillDropFunctionEntities )
      sub_1C3B9C0(0LL, v14);
    klass = BattleSkillDropFunctionEntities->klass;
    v17 = *(unsigned __int16 *)(&BattleSkillDropFunctionEntities->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&BattleSkillDropFunctionEntities->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_FunctionEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_FunctionEntity__TypeInfo )
      {
        --v17;
        p_offset += 4;
        if ( !v17 )
          goto LABEL_12;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_12:
      p_method = sub_1C8D744(
                   BattleSkillDropFunctionEntities,
                   System_Collections_Generic_IEnumerable_FunctionEntity__TypeInfo,
                   0LL);
    }
    v26 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_FunctionEntity__o *, _QWORD))p_method)(
            v15,
            *(_QWORD *)(p_method + 8));
    v54->fields.__7__wrap1 = (struct System_Collections_Generic_IEnumerator_FunctionEntity__o *)v26;
    sub_1C3B708((PartyOrganizationUtility_o *)&v54->fields.__7__wrap1, v26, v27, v28, v29, v30, v31, v32);
    v54->fields.__1__state = -3;
    do
    {
LABEL_18:
      _7__wrap1 = v54->fields.__7__wrap1;
      if ( !_7__wrap1 )
        sub_1C3B9C0(BattleSkillDropInfoDict, v25);
      v34 = _7__wrap1->klass;
      v35 = *(unsigned __int16 *)(&_7__wrap1->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&_7__wrap1->klass->_2.bitflags2 + 3) )
      {
        v36 = &v34->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)v36 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v35;
          v36 += 4;
          if ( !v35 )
            goto LABEL_23;
        }
        v37 = (__int64)&v34->vtable[*v36].method;
      }
      else
      {
LABEL_23:
        v37 = sub_1C8D744(v54->fields.__7__wrap1, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_FunctionEntity__o *, _QWORD))v37)(
              _7__wrap1,
              *(_QWORD *)(v37 + 8)) & 1) == 0 )
      {
        QuestPhaseEntity__GetBattleSkillDropEffectIds_d__168____m__Finally1(v54, v38);
        v54->fields.__7__wrap1 = 0LL;
        sub_1C3B708((PartyOrganizationUtility_o *)&v54->fields.__7__wrap1, 0LL, v48, v49, v50, v51, v52, v53);
        return 0;
      }
      v39 = v54->fields.__7__wrap1;
      if ( !v39 )
        sub_1C3B9C0(v54, v38);
      v40 = v39->klass;
      v41 = *(unsigned __int16 *)(&v39->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v39->klass->_2.bitflags2 + 3) )
      {
        v42 = &v40->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerator_FunctionEntity__c **)v42 - 1) != System_Collections_Generic_IEnumerator_FunctionEntity__TypeInfo )
        {
          --v41;
          v42 += 4;
          if ( !v41 )
            goto LABEL_31;
        }
        v43 = (__int64)&v40->vtable[*v42].method;
      }
      else
      {
LABEL_31:
        v43 = sub_1C8D744(v54->fields.__7__wrap1, System_Collections_Generic_IEnumerator_FunctionEntity__TypeInfo, 0LL);
      }
      v44 = (FunctionEntity_o *)(*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_FunctionEntity__o *, _QWORD))v43)(
                                  v39,
                                  *(_QWORD *)(v43 + 8));
      if ( !v44 )
        sub_1C3B9C0(0LL, v45);
      BattleSkillDropInfoDict = FunctionEntity__TryGetBattleSkillDropInfoDict(v44, &v54->fields._data_5__3, 0LL);
    }
    while ( !BattleSkillDropInfoDict );
    v46 = v54->fields._data_5__3;
    if ( !v46 )
      sub_1C3B9C0(BattleSkillDropInfoDict, v25);
    appearEffectId = v46->fields.appearEffectId;
    result = 1;
    v54->fields.__1__state = 1;
    v54->fields.__2__current = appearEffectId;
  }
  return result;
}


System_Collections_Generic_IEnumerator_int__o *__fastcall QuestPhaseEntity__GetBattleSkillDropEffectIds_d__168__System_Collections_Generic_IEnumerable_System_Int32__GetEnumerator(
        QuestPhaseEntity__GetBattleSkillDropEffectIds_d__168_o *this,
        const MethodInfo *method)
{
  int32_t l__initialThreadId; // w20
  __int64 v4; // x20
  struct QuestPhaseEntity_o *_4__this; // x1
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4C224E8 & 1) == 0 )
  {
    sub_1C3B764(&QuestPhaseEntity__GetBattleSkillDropEffectIds_d__168_TypeInfo, method);
    byte_4C224E8 = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0LL)) )
  {
    this->fields.__1__state = 0;
  }
  else
  {
    v4 = sub_1C3B9B0(QuestPhaseEntity__GetBattleSkillDropEffectIds_d__168_TypeInfo);
    System_Object___ctor((Il2CppObject *)v4, 0LL);
    *(_DWORD *)(v4 + 16) = 0;
    *(_DWORD *)(v4 + 24) = System_Environment__get_CurrentManagedThreadId(0LL);
    _4__this = this->fields.__4__this;
    *(_QWORD *)(v4 + 32) = _4__this;
    sub_1C3B708((PartyOrganizationUtility_o *)(v4 + 32), (int64_t)_4__this, v6, v7, v8, v9, v10, v11);
    return (System_Collections_Generic_IEnumerator_int__o *)v4;
  }
  return (System_Collections_Generic_IEnumerator_int__o *)this;
}


int32_t __fastcall QuestPhaseEntity__GetBattleSkillDropEffectIds_d__168__System_Collections_Generic_IEnumerator_System_Int32__get_Current(
        QuestPhaseEntity__GetBattleSkillDropEffectIds_d__168_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn QuestPhaseEntity__GetBattleSkillDropEffectIds_d__168__System_Collections_IEnumerator_Reset(
        QuestPhaseEntity__GetBattleSkillDropEffectIds_d__168_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C3B778(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C3B9B0(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C3B778(&Method_QuestPhaseEntity__GetBattleSkillDropEffectIds_d__168_System_Collections_IEnumerator_Reset__);
  sub_1C3B88C(v3, v4);
}


Il2CppObject *__fastcall QuestPhaseEntity__GetBattleSkillDropEffectIds_d__168__System_Collections_IEnumerator_get_Current(
        QuestPhaseEntity__GetBattleSkillDropEffectIds_d__168_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  int32_t _2__current; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C224E7 & 1) == 0 )
  {
    sub_1C3B764(&int_TypeInfo, method);
    byte_4C224E7 = 1;
  }
  _2__current = this->fields.__2__current;
  return (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &_2__current, v2, v3, v4);
}


void __fastcall QuestPhaseEntity__GetBattleSkillDropEffectIds_d__168__System_IDisposable_Dispose(
        QuestPhaseEntity__GetBattleSkillDropEffectIds_d__168_o *this,
        const MethodInfo *method)
{
  unsigned int v2; // w8

  v2 = this->fields.__1__state + 3;
  if ( v2 <= 5 && ((1 << v2) & 0x31) != 0 )
    QuestPhaseEntity__GetBattleSkillDropEffectIds_d__168____m__Finally1(this, method);
}


void __fastcall QuestPhaseEntity__GetBattleSkillDropEffectIds_d__168____m__Finally1(
        QuestPhaseEntity__GetBattleSkillDropEffectIds_d__168_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_IEnumerator_FunctionEntity__o *_7__wrap1; // x19
  System_Collections_Generic_IEnumerator_FunctionEntity__c *klass; // x8
  __int64 v5; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0

  if ( (byte_4C224E6 & 1) == 0 )
  {
    sub_1C3B764(&System_IDisposable_TypeInfo, method);
    byte_4C224E6 = 1;
  }
  _7__wrap1 = this->fields.__7__wrap1;
  this->fields.__1__state = -1;
  if ( _7__wrap1 )
  {
    klass = _7__wrap1->klass;
    v5 = *(unsigned __int16 *)(&_7__wrap1->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&_7__wrap1->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v5;
        p_offset += 4;
        if ( !v5 )
          goto LABEL_8;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_8:
      p_method = sub_1C8D744(_7__wrap1, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(struct System_Collections_Generic_IEnumerator_FunctionEntity__o *, _QWORD))p_method)(
      _7__wrap1,
      *(_QWORD *)(p_method + 8));
  }
}


void __fastcall QuestPhaseEntity__GetBattleSkillDropFunctionEntities_d__167___ctor(
        QuestPhaseEntity__GetBattleSkillDropFunctionEntities_d__167_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
  this->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
}


bool __fastcall QuestPhaseEntity__GetBattleSkillDropFunctionEntities_d__167__MoveNext(
        QuestPhaseEntity__GetBattleSkillDropFunctionEntities_d__167_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  const MethodInfo *v3; // x3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  long double inited; // q0
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  int32_t _1__state; // w8
  QuestPhaseEntity_o *_4__this; // x20
  _QWORD *v16; // x21
  __int64 v17; // x8
  __int64 v18; // x0
  __int64 p__7__wrap1; // x0
  struct System_Int32_array *ScriptIntArrayParam; // x0
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  int32_t v27; // w8
  int32_t v28; // w20
  struct System_Int32_array *_7__wrap1; // x9
  il2cpp_array_size_t max_length; // w10
  bool result; // w0
  Il2CppObject *v32; // x1
  struct FunctionEntity_o **p__2__current; // x19
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C224E9 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Array_Empty_int___, method);
    sub_1C3B764(&Method_DataManager_GetMaster_FunctionMaster___, v10);
    sub_1C3B764(&DataManager_TypeInfo, v11);
    sub_1C3B764(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__, v12);
    sub_1C3B764(&StringLiteral_17448/*"catch({0}) [{1}->{2}]"*/, v13);
    byte_4C224E9 = 1;
  }
  entity = 0LL;
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    goto LABEL_23;
  }
  if ( _1__state )
    return 0;
  this->fields.__1__state = -1;
  _4__this = this->fields.__4__this;
  v16 = Method_System_Array_Empty_int___;
  v17 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v17 )
  {
    sub_1C8D69C(Method_System_Array_Empty_int___);
    v17 = v16[7];
  }
  v18 = *(_QWORD *)(v17 + 16);
  if ( (*(_BYTE *)(v18 + 309) & 1) == 0 )
    v18 = sub_1C8D640(inited);
  if ( !*(_DWORD *)(v18 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v18);
  p__7__wrap1 = *(_QWORD *)(v16[7] + 16LL);
  if ( (*(_BYTE *)(p__7__wrap1 + 309) & 1) == 0 )
    p__7__wrap1 = sub_1C8D640(inited);
  if ( !_4__this )
LABEL_30:
    sub_1C3B9C0(p__7__wrap1, method);
  ScriptIntArrayParam = QuestPhaseEntity__getScriptIntArrayParam(
                          _4__this,
                          (System_String_o *)StringLiteral_17448/*"catch({0}) [{1}->{2}]"*/,
                          **(System_Int32_array ***)(p__7__wrap1 + 184),
                          v3);
  this->fields.__7__wrap1 = ScriptIntArrayParam;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.__7__wrap1,
    (int64_t)ScriptIntArrayParam,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  v27 = 0;
  for ( this->fields.__7__wrap2 = 0; ; this->fields.__7__wrap2 = v27 )
  {
    p__7__wrap1 = (__int64)&this->fields.__7__wrap1;
    _7__wrap1 = this->fields.__7__wrap1;
    if ( !_7__wrap1 )
      goto LABEL_30;
    max_length = _7__wrap1->max_length;
    if ( v27 >= (int)max_length )
    {
      *(_QWORD *)p__7__wrap1 = 0LL;
      sub_1C3B708((PartyOrganizationUtility_o *)p__7__wrap1, 0LL, v2, (int32_t)v3, v4, v5, v6, v7);
      return 0;
    }
    if ( v27 >= max_length )
      sub_1C3B9C8(p__7__wrap1, method);
    v28 = _7__wrap1->m_Items[v27 + 1];
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    p__7__wrap1 = (__int64)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_FunctionMaster___);
    if ( !p__7__wrap1 )
      goto LABEL_30;
    p__7__wrap1 = DataMasterBase_object__object__int___TryGetEntity(
                    (DataMasterBase_TMaster__TEntity__PKType__o *)p__7__wrap1,
                    &entity,
                    v28,
                    (const MethodInfo_329AE94 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__TryGetEntity__);
    if ( (p__7__wrap1 & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_30;
      if ( FuncList__Check(149, (int32_t)entity[1].monitor, 0LL) )
        break;
    }
LABEL_23:
    v27 = this->fields.__7__wrap2 + 1;
  }
  v32 = entity;
  this->fields.__2__current = (struct FunctionEntity_o *)entity;
  p__2__current = &this->fields.__2__current;
  sub_1C3B708((PartyOrganizationUtility_o *)p__2__current, (int64_t)v32, v2, (int32_t)v3, v4, v5, v6, v7);
  result = 1;
  *((_DWORD *)p__2__current - 2) = 1;
  return result;
}


System_Collections_Generic_IEnumerator_FunctionEntity__o *__fastcall QuestPhaseEntity__GetBattleSkillDropFunctionEntities_d__167__System_Collections_Generic_IEnumerable_FunctionEntity__GetEnumerator(
        QuestPhaseEntity__GetBattleSkillDropFunctionEntities_d__167_o *this,
        const MethodInfo *method)
{
  int32_t l__initialThreadId; // w20
  __int64 v4; // x20
  struct QuestPhaseEntity_o *_4__this; // x1
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4C224EA & 1) == 0 )
  {
    sub_1C3B764(&QuestPhaseEntity__GetBattleSkillDropFunctionEntities_d__167_TypeInfo, method);
    byte_4C224EA = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0LL)) )
  {
    this->fields.__1__state = 0;
  }
  else
  {
    v4 = sub_1C3B9B0(QuestPhaseEntity__GetBattleSkillDropFunctionEntities_d__167_TypeInfo);
    System_Object___ctor((Il2CppObject *)v4, 0LL);
    *(_DWORD *)(v4 + 16) = 0;
    *(_DWORD *)(v4 + 32) = System_Environment__get_CurrentManagedThreadId(0LL);
    _4__this = this->fields.__4__this;
    *(_QWORD *)(v4 + 40) = _4__this;
    sub_1C3B708((PartyOrganizationUtility_o *)(v4 + 40), (int64_t)_4__this, v6, v7, v8, v9, v10, v11);
    return (System_Collections_Generic_IEnumerator_FunctionEntity__o *)v4;
  }
  return (System_Collections_Generic_IEnumerator_FunctionEntity__o *)this;
}


FunctionEntity_o *__fastcall QuestPhaseEntity__GetBattleSkillDropFunctionEntities_d__167__System_Collections_Generic_IEnumerator_FunctionEntity__get_Current(
        QuestPhaseEntity__GetBattleSkillDropFunctionEntities_d__167_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn QuestPhaseEntity__GetBattleSkillDropFunctionEntities_d__167__System_Collections_IEnumerator_Reset(
        QuestPhaseEntity__GetBattleSkillDropFunctionEntities_d__167_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C3B778(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C3B9B0(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C3B778(&Method_QuestPhaseEntity__GetBattleSkillDropFunctionEntities_d__167_System_Collections_IEnumerator_Reset__);
  sub_1C3B88C(v3, v4);
}


Il2CppObject *__fastcall QuestPhaseEntity__GetBattleSkillDropFunctionEntities_d__167__System_Collections_IEnumerator_get_Current(
        QuestPhaseEntity__GetBattleSkillDropFunctionEntities_d__167_o *this,
        const MethodInfo *method)
{
  return (Il2CppObject *)this->fields.__2__current;
}


void __fastcall QuestPhaseEntity__GetBattleSkillDropFunctionEntities_d__167__System_IDisposable_Dispose(
        QuestPhaseEntity__GetBattleSkillDropFunctionEntities_d__167_o *this,
        const MethodInfo *method)
{
  ;
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

  if ( (byte_4C224E2 & 1) == 0 )
  {
    sub_1C3B764(&QuestPhaseEntity___c_TypeInfo, v1);
    byte_4C224E2 = 1;
  }
  v2 = (Il2CppObject *)sub_1C3B9B0(QuestPhaseEntity___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  QuestPhaseEntity___c_TypeInfo->static_fields->__9 = (struct QuestPhaseEntity___c_o *)v2;
  sub_1C3B708(
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

  if ( (byte_4C224E4 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_1/*""*/, x);
    byte_4C224E4 = 1;
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


int32_t __fastcall QuestPhaseEntity___c___TryGetOverwritePlayerSequenceSelectTypeByGender_b__162_1(
        QuestPhaseEntity___c_o *this,
        BattleTreasureDeviceSequenceSelectType_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C3B9C0(this, 0LL);
  return x->fields.priority;
}


int32_t __fastcall QuestPhaseEntity___c___getScriptIntArrayParam_b__31_0(
        QuestPhaseEntity___c_o *this,
        Il2CppObject *x,
        const MethodInfo *method)
{
  System_String_o *v4; // x0

  if ( (byte_4C224E3 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_1/*""*/, x);
    byte_4C224E3 = 1;
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
    sub_1C3B9C0(this, 0LL);
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


void __fastcall QuestPhaseEntity___c__DisplayClass162_0___ctor(
        QuestPhaseEntity___c__DisplayClass162_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestPhaseEntity___c__DisplayClass162_0___TryGetOverwritePlayerSequenceSelectTypeByGender_b__0(
        QuestPhaseEntity___c__DisplayClass162_0_o *this,
        BattleTreasureDeviceSequenceSelectType_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C3B9C0(this, 0LL);
  return x->fields.svtId == this->fields.servantId;
}