void __fastcall QuestInformationListViewItem___ctor(
        QuestInformationListViewItem_o *this,
        int32_t index,
        int32_t type,
        int32_t target,
        const MethodInfo *method)
{
  ListViewItem___ctor_23700744((ListViewItem_o *)this, index, 0LL);
  this->fields.infoType = 0;
  this->fields.mRewardType = type;
  this->fields.targetId = target;
  if ( !target )
    this->fields.mRewardType = 0;
}


void __fastcall QuestInformationListViewItem___ctor_23267720(
        QuestInformationListViewItem_o *this,
        int32_t index,
        ViewEnemyEntity_o *viewEnemyEnt,
        bool isUnknown,
        const MethodInfo *method)
{
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  int32_t *p_targetId; // x21
  _BOOL4 IsEventMission; // w8
  struct System_String_o *BattleName; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  QuestInformationListViewItem_MissionTargetState_o v29; // w8
  unsigned int v30; // w9
  int32_t v31; // w8
  QuestInformationListViewItem_MissionTargetState_o missionTargetState; // [xsp+Ch] [xbp-14h] BYREF

  missionTargetState = 0;
  ListViewItem___ctor_23700744((ListViewItem_o *)this, index, 0LL);
  this->fields.infoType = 1;
  if ( viewEnemyEnt )
  {
    ViewEnemyEntity__IsMissionTarget(viewEnemyEnt, viewEnemyEnt->fields.questId, &missionTargetState, 0LL);
    if ( isUnknown )
    {
      *(_QWORD *)&this->fields.targetId = 0LL;
      p_targetId = &this->fields.targetId;
      this->fields.nameText = 0LL;
      *(_QWORD *)&this->fields.iconId = 0LL;
      *(_QWORD *)&this->fields.dispType = 0LL;
      sub_B0D840((BattleServantConfConponent_o *)&this->fields.nameText, 0LL, v14, v15, v16, v17, v18, v19);
      *(_WORD *)&this->fields.weeklyMissionTarget = 0;
      IsEventMission = missionTargetState.fields.IsEventMission;
      this->fields.completeMissionTarget = 0;
      this->fields.eventMissionTarget = IsEventMission;
    }
    else
    {
      this->fields.targetId = viewEnemyEnt->fields.svtId;
      p_targetId = &this->fields.targetId;
      this->fields.targetCnt = viewEnemyEnt->fields.limitCount;
      this->fields.iconId = viewEnemyEnt->fields.iconId;
      this->fields.classId = viewEnemyEnt->fields.classId;
      this->fields.dispType = viewEnemyEnt->fields.displayType;
      this->fields.enemyNameEffectId = ViewEnemyEntity__getEnemyNameEffect(viewEnemyEnt, 0LL);
      BattleName = ViewEnemyEntity__getBattleName(viewEnemyEnt, 0LL);
      this->fields.nameText = BattleName;
      sub_B0D840(
        (BattleServantConfConponent_o *)&this->fields.nameText,
        (System_Int32_array **)BattleName,
        v23,
        v24,
        v25,
        v26,
        v27,
        v28);
      v29 = missionTargetState;
      v30 = HIBYTE(*(unsigned int *)&missionTargetState);
      this->fields.weeklyMissionTarget = (*(_WORD *)&missionTargetState.fields.IsEventMission & 0xFF00) != 0;
      this->fields.eventMissionTarget = v29.fields.IsEventMission;
      this->fields.limitMissionTarget = (*(_DWORD *)&v29 & 0xFF0000) != 0;
      this->fields.completeMissionTarget = v30 != 0;
    }
  }
  else
  {
    *(_QWORD *)&this->fields.targetId = 0LL;
    p_targetId = &this->fields.targetId;
    this->fields.nameText = 0LL;
    *(_QWORD *)&this->fields.iconId = 0LL;
    *(_QWORD *)&this->fields.dispType = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)&this->fields.nameText, 0LL, v8, v9, v10, v11, v12, v13);
    *(_DWORD *)&this->fields.weeklyMissionTarget = 0;
  }
  if ( *p_targetId )
  {
    if ( this->fields.iconId )
      v31 = 2;
    else
      v31 = 1;
    this->fields.mEnemyType = v31;
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