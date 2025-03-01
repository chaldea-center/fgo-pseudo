void __fastcall QuestInformationListViewItem___ctor(
        QuestInformationListViewItem_o *this,
        int32_t index,
        int32_t type,
        int32_t target,
        const MethodInfo *method)
{
  ListViewItem___ctor_42081352((ListViewItem_o *)this, index, 0LL);
  this->fields.infoType = 0;
  this->fields.mRewardType = type;
  this->fields.targetId = target;
  if ( !target )
    this->fields.mRewardType = 0;
}


void __fastcall QuestInformationListViewItem___ctor_35195956(
        QuestInformationListViewItem_o *this,
        int32_t index,
        ViewEnemyEntity_o *viewEnemyEnt,
        bool isUnknown,
        const MethodInfo *method)
{
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  bool IsEventMission; // w8
  struct System_String_o *BattleName; // x0
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  int32_t v28; // w8
  QuestInformationListViewItem_MissionTargetState_o missionTargetState; // [xsp+Ch] [xbp-24h] BYREF

  missionTargetState = 0;
  ListViewItem___ctor_42081352((ListViewItem_o *)this, index, 0LL);
  this->fields.infoType = 1;
  if ( viewEnemyEnt )
  {
    ViewEnemyEntity__IsMissionTarget(viewEnemyEnt, viewEnemyEnt->fields.questId, &missionTargetState, 0LL);
    if ( isUnknown )
    {
      this->fields.nameText = 0LL;
      *(_QWORD *)&this->fields.targetId = 0LL;
      *(_QWORD *)&this->fields.iconId = 0LL;
      *(_QWORD *)&this->fields.dispType = 0LL;
      sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.nameText, 0LL, v14, v15, v16, v17, v18, v19);
      *(_WORD *)&this->fields.weeklyMissionTarget = 0;
      IsEventMission = missionTargetState.fields.IsEventMission;
      this->fields.completeMissionTarget = 0;
      this->fields.eventMissionTarget = IsEventMission;
    }
    else
    {
      *(int8x16_t *)&this->fields.targetId = vextq_s8(
                                               *(int8x16_t *)&viewEnemyEnt->fields.classId,
                                               *(int8x16_t *)&viewEnemyEnt->fields.classId,
                                               4uLL);
      this->fields.dispType = viewEnemyEnt->fields.displayType;
      this->fields.enemyNameEffectId = ViewEnemyEntity__getEnemyNameEffect(viewEnemyEnt, 0LL);
      BattleName = ViewEnemyEntity__getBattleName(viewEnemyEnt, 0LL);
      this->fields.nameText = BattleName;
      sub_1C2E0D0(
        (PartyOrganizationUtility_o *)&this->fields.nameText,
        (int64_t)BattleName,
        v22,
        v23,
        v24,
        v25,
        v26,
        v27);
      this->fields.weeklyMissionTarget = missionTargetState.fields.IsWeeklyMission;
      this->fields.limitMissionTarget = missionTargetState.fields.IsLimitMission;
      this->fields.eventMissionTarget = missionTargetState.fields.IsEventMission;
      this->fields.completeMissionTarget = missionTargetState.fields.IsCompleteMission;
    }
  }
  else
  {
    this->fields.nameText = 0LL;
    *(_QWORD *)&this->fields.targetId = 0LL;
    *(_QWORD *)&this->fields.dispType = 0LL;
    *(_QWORD *)&this->fields.iconId = 0LL;
    sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.nameText, 0LL, v8, v9, v10, v11, v12, v13);
    *(_DWORD *)&this->fields.weeklyMissionTarget = 0;
  }
  if ( this->fields.targetId )
  {
    if ( this->fields.iconId )
      v28 = 2;
    else
      v28 = 1;
    this->fields.mEnemyType = v28;
  }
  else
  {
    this->fields.mEnemyType = 0;
  }
}


void __fastcall QuestInformationListViewItem__Finalize(QuestInformationListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0LL);
}


int32_t __fastcall QuestInformationListViewItem__GetGiftType(
        QuestInformationListViewItem_o *this,
        const MethodInfo *method)
{
  if ( this->fields.mRewardType == 2 )
    return 2;
  else
    return 1;
}


int32_t __fastcall QuestInformationListViewItem__get_ClassId(
        QuestInformationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.classId;
}


int32_t __fastcall QuestInformationListViewItem__get_DisplayType(
        QuestInformationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.dispType;
}


int32_t __fastcall QuestInformationListViewItem__get_EnemyNameEffectId(
        QuestInformationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.enemyNameEffectId;
}


int32_t __fastcall QuestInformationListViewItem__get_IconId(
        QuestInformationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.iconId;
}


bool __fastcall QuestInformationListViewItem__get_IsCompleteMissionTarget(
        QuestInformationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.completeMissionTarget;
}


bool __fastcall QuestInformationListViewItem__get_IsEventMissionTarget(
        QuestInformationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.eventMissionTarget;
}


bool __fastcall QuestInformationListViewItem__get_IsLimitMissionTarget(
        QuestInformationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.limitMissionTarget;
}


bool __fastcall QuestInformationListViewItem__get_IsWeeklyMissionTarget(
        QuestInformationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.weeklyMissionTarget;
}


System_String_o *__fastcall QuestInformationListViewItem__get_NameString(
        QuestInformationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.nameText;
}


int32_t __fastcall QuestInformationListViewItem__get_TargetCnt(
        QuestInformationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.targetCnt;
}


int32_t __fastcall QuestInformationListViewItem__get_TargetId(
        QuestInformationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.targetId;
}


bool __fastcall QuestInformationListViewItem__isEnemyNotServant(
        QuestInformationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.mEnemyType == 2;
}


bool __fastcall QuestInformationListViewItem__isEnemyServant(
        QuestInformationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.mEnemyType == 1;
}


bool __fastcall QuestInformationListViewItem__isEnemyUnknown(
        QuestInformationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.mEnemyType == 0;
}


bool __fastcall QuestInformationListViewItem__isRewardItem(
        QuestInformationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.mRewardType == 2;
}


bool __fastcall QuestInformationListViewItem__isRewardServant(
        QuestInformationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.mRewardType == 1;
}


bool __fastcall QuestInformationListViewItem__isRewardUndrop(
        QuestInformationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.mRewardType == 0;
}