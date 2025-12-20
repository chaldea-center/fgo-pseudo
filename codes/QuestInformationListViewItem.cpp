void QuestInformationListViewItem___ctor(
        QuestInformationListViewItem_o *this,
        int32_t index,
        int32_t type,
        int32_t target,
        const MethodInfo *method)
{
  ListViewItem___ctor_44594388((ListViewItem_o *)this, index, 0);
  this->fields.infoType = 0;
  this->fields.mRewardType = type;
  this->fields.targetId = target;
  if ( !target )
    this->fields.mRewardType = 0;
}


void QuestInformationListViewItem___ctor_37167760(
        QuestInformationListViewItem_o *this,
        int32_t index,
        ViewEnemyEntity_o *viewEnemyEnt,
        bool isUnknown,
        const MethodInfo *method)
{
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  struct System_String_o **p_nameText; // x20
  bool IsEventMission; // w8
  int32_t v29; // w8
  struct System_String_o *BattleName; // x0
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7
  NpcServantDisplayTypeDetailMaster_o *Master_object; // x0
  __int64 v38; // x1
  float b; // s0
  float a; // s1
  float r; // s2
  float g; // s3
  float v43; // s0
  float v44; // s1
  float v45; // s2
  float v46; // s3
  System_Nullable_Color__o v48; // [xsp+8h] [xbp-58h] BYREF
  NpcServantDisplayTypeDetailEntity_o *entity; // [xsp+20h] [xbp-40h] BYREF
  QuestInformationListViewItem_MissionTargetState_o missionTargetState; // [xsp+2Ch] [xbp-34h] BYREF

  if ( (byte_4D294AE & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMaster_NpcServantDisplayTypeDetailMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_System_Nullable_Color__GetValueOrDefault__);
    sub_1C94098(&Method_System_Nullable_Color__get_HasValue__);
    byte_4D294AE = 1;
  }
  missionTargetState = 0;
  entity = 0;
  ListViewItem___ctor_44594388((ListViewItem_o *)this, index, 0);
  this->fields.infoType = 1;
  if ( !viewEnemyEnt )
  {
    this->fields.nameText = 0;
    p_nameText = &this->fields.nameText;
    *(_QWORD *)&this->fields.targetId = 0;
    *(_QWORD *)&this->fields.dispType = 0;
    *(_QWORD *)&this->fields.iconId = 0;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.nameText, 0, v9, v10, v11, v12, v13, v14);
    __asm { FMOV            V0.4S, #1.0 }
    *(_QWORD *)&this->fields.weeklyMissionTarget = 0;
    this->fields.mainColor = _Q0;
    goto LABEL_7;
  }
  ViewEnemyEntity__IsMissionTarget(viewEnemyEnt, viewEnemyEnt->fields.questId, &missionTargetState, 0);
  if ( isUnknown )
  {
    this->fields.nameText = 0;
    p_nameText = &this->fields.nameText;
    *(_QWORD *)&this->fields.targetId = 0;
    *(_QWORD *)&this->fields.iconId = 0;
    *(_QWORD *)&this->fields.dispType = 0;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.nameText, 0, v15, v16, v17, v18, v19, v20);
    *(_WORD *)&this->fields.weeklyMissionTarget = 0;
    IsEventMission = missionTargetState.fields.IsEventMission;
    __asm { FMOV            V0.4S, #1.0 }
    this->fields.completeMissionTarget = 0;
    this->fields.colorType = 0;
    this->fields.mainColor = _Q0;
    this->fields.eventMissionTarget = IsEventMission;
LABEL_7:
    p_nameText[4] = 0;
    p_nameText[5] = 0;
    goto LABEL_8;
  }
  *(int8x16_t *)&this->fields.targetId = vextq_s8(
                                           *(int8x16_t *)&viewEnemyEnt->fields.classId,
                                           *(int8x16_t *)&viewEnemyEnt->fields.classId,
                                           4u);
  this->fields.dispType = viewEnemyEnt->fields.displayType;
  this->fields.enemyNameEffectId = ViewEnemyEntity__getEnemyNameEffect(viewEnemyEnt, 0);
  BattleName = ViewEnemyEntity__getBattleName(viewEnemyEnt, 0);
  this->fields.nameText = BattleName;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.nameText, (int32_t)BattleName, v31, v32, v33, v34, v35, v36);
  this->fields._IsGrand_k__BackingField = ViewEnemyEntity__IsGrand(viewEnemyEnt, 0);
  this->fields.weeklyMissionTarget = missionTargetState.fields.IsWeeklyMission;
  this->fields.limitMissionTarget = missionTargetState.fields.IsLimitMission;
  this->fields.eventMissionTarget = missionTargetState.fields.IsEventMission;
  this->fields.completeMissionTarget = missionTargetState.fields.IsCompleteMission;
  this->fields.colorType = ViewEnemyEntity__GetColorType(viewEnemyEnt, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (NpcServantDisplayTypeDetailMaster_o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_NpcServantDisplayTypeDetailMaster___);
  if ( !Master_object )
    goto LABEL_26;
  if ( !NpcServantDisplayTypeDetailMaster__TryGetEntity(
          Master_object,
          &entity,
          this->fields.dispType,
          this->fields.colorType,
          0) )
  {
    __asm { FMOV            V0.4S, #1.0 }
    this->fields.mainColor = _Q0;
    *(_QWORD *)&this->fields.addColor.fields.r = 0;
    *(_QWORD *)&this->fields.addColor.fields.b = 0;
    goto LABEL_8;
  }
  Master_object = (NpcServantDisplayTypeDetailMaster_o *)entity;
  if ( !entity )
    goto LABEL_26;
  NpcServantDisplayTypeDetailEntity__get_MainColor(&v48, entity, 0);
  b = v48.fields.value.fields.b;
  a = v48.fields.value.fields.a;
  r = v48.fields.value.fields.r;
  g = v48.fields.value.fields.g;
  if ( !v48.fields.hasValue )
  {
    a = 1.0;
    b = 1.0;
    g = 1.0;
    r = 1.0;
  }
  this->fields.mainColor.fields.r = r;
  this->fields.mainColor.fields.g = g;
  this->fields.mainColor.fields.b = b;
  this->fields.mainColor.fields.a = a;
  Master_object = (NpcServantDisplayTypeDetailMaster_o *)entity;
  if ( !entity )
LABEL_26:
    sub_1C942F0(Master_object, v38);
  NpcServantDisplayTypeDetailEntity__get_AddColor(&v48, entity, 0);
  v43 = v48.fields.value.fields.b;
  v44 = v48.fields.value.fields.a;
  v45 = v48.fields.value.fields.r;
  v46 = v48.fields.value.fields.g;
  if ( !v48.fields.hasValue )
  {
    v44 = 0.0;
    v43 = 0.0;
    v46 = 0.0;
    v45 = 0.0;
  }
  this->fields.addColor.fields.r = v45;
  this->fields.addColor.fields.g = v46;
  this->fields.addColor.fields.b = v43;
  this->fields.addColor.fields.a = v44;
LABEL_8:
  if ( this->fields.targetId )
  {
    if ( this->fields.iconId )
      v29 = 2;
    else
      v29 = 1;
    this->fields.mEnemyType = v29;
  }
  else
  {
    this->fields.mEnemyType = 0;
  }
}


void QuestInformationListViewItem__Finalize(QuestInformationListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0);
}


int32_t QuestInformationListViewItem__GetGiftType(QuestInformationListViewItem_o *this, const MethodInfo *method)
{
  if ( this->fields.mRewardType == 2 )
    return 2;
  else
    return 1;
}


UnityEngine_Color_o QuestInformationListViewItem__get_AddColor(
        QuestInformationListViewItem_o *this,
        const MethodInfo *method)
{
  float r; // s0
  float g; // s1
  float b; // s2
  float a; // s3
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  r = this->fields.addColor.fields.r;
  g = this->fields.addColor.fields.g;
  b = this->fields.addColor.fields.b;
  a = this->fields.addColor.fields.a;
  result.fields.a = a;
  result.fields.b = b;
  result.fields.g = g;
  result.fields.r = r;
  return result;
}


int32_t QuestInformationListViewItem__get_ClassId(QuestInformationListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.classId;
}


int32_t QuestInformationListViewItem__get_ColorType(QuestInformationListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.colorType;
}


int32_t QuestInformationListViewItem__get_DisplayType(QuestInformationListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.dispType;
}


int32_t QuestInformationListViewItem__get_EnemyNameEffectId(
        QuestInformationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.enemyNameEffectId;
}


int32_t QuestInformationListViewItem__get_IconId(QuestInformationListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.iconId;
}


bool QuestInformationListViewItem__get_IsCompleteMissionTarget(
        QuestInformationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.completeMissionTarget;
}


bool QuestInformationListViewItem__get_IsEventMissionTarget(
        QuestInformationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.eventMissionTarget;
}


bool QuestInformationListViewItem__get_IsGrand(QuestInformationListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._IsGrand_k__BackingField;
}


bool QuestInformationListViewItem__get_IsLimitMissionTarget(
        QuestInformationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.limitMissionTarget;
}


bool QuestInformationListViewItem__get_IsWeeklyMissionTarget(
        QuestInformationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.weeklyMissionTarget;
}


UnityEngine_Color_o QuestInformationListViewItem__get_MainColor(
        QuestInformationListViewItem_o *this,
        const MethodInfo *method)
{
  float r; // s0
  float g; // s1
  float b; // s2
  float a; // s3
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  r = this->fields.mainColor.fields.r;
  g = this->fields.mainColor.fields.g;
  b = this->fields.mainColor.fields.b;
  a = this->fields.mainColor.fields.a;
  result.fields.a = a;
  result.fields.b = b;
  result.fields.g = g;
  result.fields.r = r;
  return result;
}


System_String_o *QuestInformationListViewItem__get_NameString(
        QuestInformationListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.nameText;
}


int32_t QuestInformationListViewItem__get_TargetCnt(QuestInformationListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.targetCnt;
}


int32_t QuestInformationListViewItem__get_TargetId(QuestInformationListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.targetId;
}


bool QuestInformationListViewItem__isEnemyNotServant(QuestInformationListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.mEnemyType == 2;
}


bool QuestInformationListViewItem__isEnemyServant(QuestInformationListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.mEnemyType == 1;
}


bool QuestInformationListViewItem__isEnemyUnknown(QuestInformationListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.mEnemyType == 0;
}


bool QuestInformationListViewItem__isRewardItem(QuestInformationListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.mRewardType == 2;
}


bool QuestInformationListViewItem__isRewardServant(QuestInformationListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.mRewardType == 1;
}


bool QuestInformationListViewItem__isRewardUndrop(QuestInformationListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.mRewardType == 0;
}


void QuestInformationListViewItem__set_IsGrand(
        QuestInformationListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsGrand_k__BackingField = value;
}