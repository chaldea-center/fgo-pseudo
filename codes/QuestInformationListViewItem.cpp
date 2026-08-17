void QuestInformationListViewItem___ctor(
        QuestInformationListViewItem_o *this,
        int32_t index,
        int32_t type,
        int32_t target,
        const MethodInfo *method)
{
  ListViewItem___ctor_50819428((ListViewItem_o *)this, index, 0);
  this->fields.infoType = 0;
  this->fields.mRewardType = type;
  this->fields.targetId = target;
  if ( !target )
    this->fields.mRewardType = 0;
}


void QuestInformationListViewItem___ctor_43363196(
        QuestInformationListViewItem_o *this,
        int32_t index,
        ViewEnemyEntity_o *viewEnemyEnt,
        bool isUnknown,
        const MethodInfo *method)
{
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  struct System_String_o **p_nameText; // x20
  bool IsEventMission; // w8
  int32_t v28; // w8
  struct System_String_o *BattleName; // x0
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  uint8x8_t v36; // d0
  int16x8_t v37; // q0
  __int64 v38; // x1
  __int64 v39; // x2
  NpcServantDisplayTypeDetailEntity_o *Master_object; // x0
  __int64 v41; // x1
  float a; // s0
  float r; // s1
  float g; // s2
  float b; // s3
  float v46; // s0
  float v47; // s1
  float v48; // s2
  float v49; // s3
  System_Nullable_Color__o v51; // [xsp+Ch] [xbp-54h] BYREF
  NpcServantDisplayTypeDetailEntity_o *entity; // [xsp+20h] [xbp-40h] BYREF
  QuestInformationListViewItem_MissionTargetState_o missionTargetState; // [xsp+2Ch] [xbp-34h] BYREF

  if ( (byte_596D387 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_NpcServantDisplayTypeDetailMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Nullable_Color__GetValueOrDefault__);
    sub_2213A60(&Method_System_Nullable_Color__get_HasValue__);
    byte_596D387 = 1;
  }
  missionTargetState = 0;
  entity = 0;
  ListViewItem___ctor_50819428((ListViewItem_o *)this, index, 0);
  this->fields.infoType = 1;
  if ( !viewEnemyEnt )
  {
    this->fields.nameText = 0;
    p_nameText = &this->fields.nameText;
    *(_QWORD *)&this->fields.targetId = 0;
    *(_QWORD *)&this->fields.dispType = 0;
    *(_QWORD *)&this->fields.iconId = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.nameText, 0, v9, v10, v11, v12, v13, v14);
    __asm { FMOV            V0.4S, #1.0 }
    *(_QWORD *)&this->fields.weeklyMissionTarget = 0;
    goto LABEL_7;
  }
  ViewEnemyEntity__IsMissionTarget(viewEnemyEnt, viewEnemyEnt->fields.questId, &missionTargetState, 0);
  if ( isUnknown )
  {
    *(_QWORD *)&this->fields.targetId = 0;
    this->fields.nameText = 0;
    p_nameText = &this->fields.nameText;
    *(_QWORD *)&this->fields.dispType = 0;
    *(_QWORD *)&this->fields.iconId = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.nameText, 0, v15, v16, v17, v18, v19, v20);
    IsEventMission = missionTargetState.fields.IsEventMission;
    *(_WORD *)&this->fields.weeklyMissionTarget = 0;
    __asm { FMOV            V0.4S, #1.0 }
    this->fields.completeMissionTarget = 0;
    this->fields.colorType = 0;
    this->fields.eventMissionTarget = IsEventMission;
LABEL_7:
    *((_OWORD *)p_nameText + 1) = _Q0;
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
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.nameText,
    (int32_t)BattleName,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  this->fields._IsGrand_k__BackingField = ViewEnemyEntity__IsGrand(viewEnemyEnt, 0);
  LODWORD(v36.n64_u64[0]) = missionTargetState;
  v37 = vmovl_u8(v36);
  v37.n128_u64[0] = vzip2_s16(
                      vzip1_s16(
                        (int16x4_t)(v37.n128_u64[0] & 0xFF01FF01FF01FF01LL),
                        vext_s8(
                          (int8x8_t)(v37.n128_u64[0] & 0xFF01FF01FF01FF01LL),
                          (int8x8_t)(v37.n128_u64[0] & 0xFF01FF01FF01FF01LL),
                          6u)),
                      (int16x4_t)(v37.n128_u64[0] & 0xFF01FF01FF01FF01LL)).n64_u64[0];
  *(_DWORD *)&this->fields.weeklyMissionTarget = vmovn_s16(v37).n64_u32[0];
  this->fields.colorType = ViewEnemyEntity__GetColorType(viewEnemyEnt, 0);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v38, v39);
  Master_object = (NpcServantDisplayTypeDetailEntity_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_NpcServantDisplayTypeDetailMaster___);
  if ( !Master_object )
LABEL_28:
    sub_2213CDC(Master_object, v41);
  if ( NpcServantDisplayTypeDetailMaster__TryGetEntity(
         (NpcServantDisplayTypeDetailMaster_o *)Master_object,
         &entity,
         this->fields.dispType,
         this->fields.colorType,
         0) )
  {
    Master_object = entity;
    if ( entity )
    {
      NpcServantDisplayTypeDetailEntity__get_MainColor(&v51, entity, 0);
      a = 1.0;
      Master_object = entity;
      r = v51.fields.value.fields.r;
      g = v51.fields.value.fields.g;
      b = v51.fields.value.fields.b;
      if ( v51.fields.hasValue )
      {
        a = v51.fields.value.fields.a;
      }
      else
      {
        r = 1.0;
        g = 1.0;
        b = 1.0;
      }
      this->fields.mainColor.fields.r = r;
      this->fields.mainColor.fields.g = g;
      this->fields.mainColor.fields.b = b;
      this->fields.mainColor.fields.a = a;
      if ( Master_object )
      {
        NpcServantDisplayTypeDetailEntity__get_AddColor(&v51, Master_object, 0);
        v46 = 0.0;
        v47 = v51.fields.value.fields.r;
        v48 = v51.fields.value.fields.g;
        v49 = v51.fields.value.fields.b;
        if ( v51.fields.hasValue )
        {
          v46 = v51.fields.value.fields.a;
        }
        else
        {
          v47 = 0.0;
          v48 = 0.0;
          v49 = 0.0;
        }
        this->fields.addColor.fields.r = v47;
        this->fields.addColor.fields.g = v48;
        this->fields.addColor.fields.b = v49;
        this->fields.addColor.fields.a = v46;
        goto LABEL_8;
      }
    }
    goto LABEL_28;
  }
  __asm { FMOV            V0.4S, #1.0 }
  *(_QWORD *)&this->fields.addColor.fields.r = 0;
  *(_QWORD *)&this->fields.addColor.fields.b = 0;
  this->fields.mainColor = _Q0;
LABEL_8:
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