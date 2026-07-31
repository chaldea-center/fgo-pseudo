void EventRandomMissionListViewItemDraw___cctor(const MethodInfo *method)
{
  struct EventRandomMissionListViewItemDraw_StaticFields *static_fields; // x8

  if ( (byte_5932864 & 1) == 0 )
  {
    sub_21FFC50(&EventRandomMissionListViewItemDraw_TypeInfo);
    byte_5932864 = 1;
  }
  static_fields = EventRandomMissionListViewItemDraw_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->MISSION_COND_FONT_SIZE = xmmword_E94A80;
  static_fields->RANK_SPRITE_HEIGHT = 64;
}


void EventRandomMissionListViewItemDraw___ctor(EventRandomMissionListViewItemDraw_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_5932863 & 1) == 0 )
  {
    sub_21FFC50(&MissionListViewItemDraw_TypeInfo);
    byte_5932863 = 1;
  }
  if ( !*(&MissionListViewItemDraw_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(MissionListViewItemDraw_TypeInfo, method, v2);
  MissionListViewItemDraw___ctor((MissionListViewItemDraw_o *)this, 0);
}


void EventRandomMissionListViewItemDraw__ChangeNextRewardIcon(
        EventRandomMissionListViewItemDraw_o *this,
        EventRandomMissionListViewManager_o *manager,
        const MethodInfo *method)
{
  struct GiftEntity_array *giftEntityList; // x20
  EventRandomMissionListViewItemDraw_o *v4; // x19
  GiftEntity_o *v5; // x8
  int64_t num; // x8
  int64_t v7; // x2
  int32_t v8; // w3

  if ( !this->fields.isMultipleReward )
    return;
  giftEntityList = this->fields.giftEntityList;
  v4 = this;
  if ( !giftEntityList || !manager )
    goto LABEL_18;
  this = (EventRandomMissionListViewItemDraw_o *)MissionListViewManager__GetAlphaAnimCnt(
                                                   (MissionListViewManager_o *)manager,
                                                   giftEntityList->max_length,
                                                   0);
  if ( (unsigned int)this >= LODWORD(giftEntityList->max_length) )
    sub_21FFED4(this);
  v5 = giftEntityList->m_Items[(int)this];
  if ( !v5 )
    goto LABEL_18;
  manager = (EventRandomMissionListViewManager_o *)(unsigned int)v5->fields.prioredIconId;
  this = (EventRandomMissionListViewItemDraw_o *)v4->fields.itemIcon;
  if ( (int)manager >= 1 )
  {
    if ( this )
    {
      num = (unsigned int)v5->fields.num;
      if ( (int)num <= 1 )
        v7 = -1;
      else
        v7 = num;
      ItemIconComponent__SetItemImage_47939376((ItemIconComponent_o *)this, (int32_t)manager, v7, 0);
      return;
    }
LABEL_18:
    sub_21FFECC(this, manager);
  }
  if ( !this )
    goto LABEL_18;
  if ( v5->fields.num <= 1 )
    v8 = -1;
  else
    v8 = v5->fields.num;
  ItemIconComponent__SetGiftDesignSize((ItemIconComponent_o *)this, v5->fields.type, v5->fields.objectId, v8, 0);
}


System_String_o *EventRandomMissionListViewItemDraw__GetAchiveTimeText(int64_t closeTime, const MethodInfo *method)
{
  __int64 v2; // x2
  System_String_o *v4; // x20
  System_String_o *RestTime; // x2

  if ( (byte_593285F & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_113/*" "*/);
    sub_21FFC50(&StringLiteral_13941/*"TIME_REST_ACHIVE"*/);
    byte_593285F = 1;
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method, v2);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_13941/*"TIME_REST_ACHIVE"*/, 0);
  RestTime = LocalizationManager__GetRestTime(closeTime, 0);
  return System_String__Concat_75481624(v4, (System_String_o *)StringLiteral_113/*" "*/, RestTime, 0);
}


System_String_o *EventRandomMissionListViewItemDraw__GetRestTimeText(int64_t endTime, const MethodInfo *method)
{
  __int64 v2; // x2
  System_String_o *v4; // x20
  System_String_o *RestTime; // x1

  if ( (byte_593285E & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_13953/*"TIME_REST_QUEST"*/);
    byte_593285E = 1;
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method, v2);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_13953/*"TIME_REST_QUEST"*/, 0);
  RestTime = LocalizationManager__GetRestTime(endTime, 0);
  return System_String__Concat_75438412(v4, RestTime, 0);
}


void EventRandomMissionListViewItemDraw__InitDispResTime(
        EventRandomMissionListViewItemDraw_o *this,
        MissionListViewItem_o *missionListviewItem,
        const MethodInfo *method)
{
  int64_t Time; // x0
  MethodInfo *AchiveTimeText; // x1
  int64_t v7; // x21
  bool *p_isDispTime; // x22
  bool v9; // cc
  __int64 v10; // x2
  int64_t v11; // x21
  System_String_o *RestTimeText; // x0
  __int64 v13; // x2
  int64_t v14; // x21
  __int64 v15; // x2
  int64_t v16; // x21
  int v17; // w8
  __int64 v18; // x1
  __int64 v19; // x2
  UILabel_o *timeOverLb; // x21
  __int64 naturalAligment; // x10

  if ( (byte_593285B & 1) == 0 )
  {
    sub_21FFC50(&EventRandomMissionListViewItemDraw_TypeInfo);
    sub_21FFC50(&EventRandomMissionListViewItem_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&StringLiteral_9060/*"MISSION_PERIOD_END"*/);
    byte_593285B = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, missionListviewItem, method);
  Time = NetworkManager__getTime(0);
  this->fields.isAchiveTime = 0;
  if ( !missionListviewItem )
    goto LABEL_47;
  v7 = Time;
  Time = (int64_t)MissionListViewItem__get_EventMissionEntity(missionListviewItem, 0);
  if ( !Time )
    goto LABEL_47;
  if ( v7 >= *(_QWORD *)(Time + 56) )
  {
    Time = (int64_t)MissionListViewItem__get_EventMissionEntity(missionListviewItem, 0);
    if ( !Time )
      goto LABEL_47;
    v9 = v7 < *(_QWORD *)(Time + 64);
    this->fields.isDispTime = v9;
    p_isDispTime = &this->fields.isDispTime;
    if ( v9 )
    {
      Time = (int64_t)MissionListViewItem__get_EventMissionEntity(missionListviewItem, 0);
      if ( !Time )
        goto LABEL_47;
      v11 = *(_QWORD *)(Time + 64);
      if ( !*(&EventRandomMissionListViewItemDraw_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(EventRandomMissionListViewItemDraw_TypeInfo, AchiveTimeText, v10);
      RestTimeText = EventRandomMissionListViewItemDraw__GetRestTimeText(v11, AchiveTimeText);
      if ( missionListviewItem->fields.progStatus == 3 )
      {
        Time = (int64_t)MissionListViewItem__get_EventMissionEntity(missionListviewItem, 0);
        if ( !Time )
          goto LABEL_47;
        v14 = *(_QWORD *)(Time + 72);
        if ( !*(&EventRandomMissionListViewItemDraw_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(EventRandomMissionListViewItemDraw_TypeInfo, AchiveTimeText, v13);
        AchiveTimeText = (MethodInfo *)EventRandomMissionListViewItemDraw__GetAchiveTimeText(v14, AchiveTimeText);
        this->fields.isAchiveTime = 1;
      }
      else
      {
        AchiveTimeText = (MethodInfo *)RestTimeText;
      }
      Time = (int64_t)this->fields.resTimeLb;
      if ( !Time )
LABEL_47:
        sub_21FFECC(Time, AchiveTimeText);
      goto LABEL_29;
    }
  }
  else
  {
    this->fields.isDispTime = 0;
    p_isDispTime = &this->fields.isDispTime;
  }
  if ( (unsigned int)(missionListviewItem->fields.progStatus - 3) >= 2 )
  {
    v17 = 1;
    missionListviewItem->fields.isNowMission = 1;
    goto LABEL_30;
  }
  this->fields.isAchiveTime = 1;
  Time = (int64_t)MissionListViewItem__get_EventMissionEntity(missionListviewItem, 0);
  if ( !Time )
    goto LABEL_47;
  v16 = *(_QWORD *)(Time + 72);
  if ( !*(&EventRandomMissionListViewItemDraw_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(EventRandomMissionListViewItemDraw_TypeInfo, AchiveTimeText, v15);
  Time = (int64_t)EventRandomMissionListViewItemDraw__GetAchiveTimeText(v16, AchiveTimeText);
  if ( !this->fields.resTimeLb )
    goto LABEL_47;
  AchiveTimeText = (MethodInfo *)Time;
  Time = (int64_t)this->fields.resTimeLb;
LABEL_29:
  UILabel__set_text((UILabel_o *)Time, (System_String_o *)AchiveTimeText, 0);
  v17 = 0;
  this->fields.oldTime = 0;
LABEL_30:
  if ( missionListviewItem->fields.progStatus == 4 )
  {
    this->fields.isDispTime = 0;
    this->fields.isAchiveTime = 0;
  }
  Time = (int64_t)this->fields.timeOverInfo;
  if ( v17 )
  {
    if ( !Time )
      goto LABEL_47;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0);
    timeOverLb = this->fields.timeOverLb;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v18, v19);
    Time = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_9060/*"MISSION_PERIOD_END"*/, 0);
    if ( !timeOverLb )
      goto LABEL_47;
    UILabel__set_text(timeOverLb, (System_String_o *)Time, 0);
    naturalAligment = EventRandomMissionListViewItem_TypeInfo->_2.naturalAligment;
    if ( missionListviewItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment
      && (EventRandomMissionListViewItem_c *)missionListviewItem->klass->_2.typeHierarchy[naturalAligment - 1] == EventRandomMissionListViewItem_TypeInfo )
    {
      BYTE1(missionListviewItem[1].fields.sortIndex) = 1;
    }
  }
  else
  {
    if ( !Time )
      goto LABEL_47;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0);
  }
  Time = (int64_t)this->fields.resTimeLb;
  if ( !Time )
    goto LABEL_47;
  Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
  if ( !*p_isDispTime )
  {
    AchiveTimeText = (MethodInfo *)this->fields.isAchiveTime;
    if ( Time )
      goto LABEL_45;
    goto LABEL_47;
  }
  AchiveTimeText = (MethodInfo *)(&dword_0 + 1);
  if ( !Time )
    goto LABEL_47;
LABEL_45:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, (bool)AchiveTimeText, 0);
}


// local variable allocation has failed, the output may be wrong!
void EventRandomMissionListViewItemDraw__ModifyBoardImage(
        EventRandomMissionListViewItemDraw_o *this,
        int32_t bannerGroupId,
        const MethodInfo *method)
{
  UnityEngine_Object_o *baseSprite; // x21
  __int64 v6; // x1
  __int64 v7; // x2
  UISprite_o *v8; // x21
  System_String_o *baseSpriteName; // x20
  UIAtlas_o *baseAtlas; // x22

  if ( (byte_5932862 & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5932862 = 1;
  }
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&bannerGroupId, method);
  if ( !UnityEngine_Object__op_Equality(baseSprite, 0, 0) )
  {
    v8 = this->fields.baseSprite;
    baseAtlas = this->fields.baseAtlas;
    baseSpriteName = this->fields.baseSpriteName;
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v6, v7);
    AtlasManager__SetMissionBoardSprite(v8, baseAtlas, baseSpriteName, bannerGroupId, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void EventRandomMissionListViewItemDraw__OnChangeAlphaAnim(
        EventRandomMissionListViewItemDraw_o *this,
        EventRandomMissionListViewItem_o *item,
        int32_t mode,
        EventRandomMissionListViewManager_o *manager,
        const MethodInfo *method)
{
  EventRandomMissionListViewItemDraw__ChangeNextRewardIcon(this, manager, *(const MethodInfo **)&mode);
}


void EventRandomMissionListViewItemDraw__SetInput(
        EventRandomMissionListViewItemDraw_o *this,
        MissionListViewItem_o *missionListViewItem,
        const MethodInfo *method)
{
  __int64 naturalAligment; // x10
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Object_o *baseButton; // x21
  __int64 v9; // x1
  __int64 v10; // x2
  UILabel_o *missionCondLb; // x20
  System_String_o *condMsg; // x19
  EventRandomMissionListViewItemDraw_c *v13; // x0

  if ( (byte_5932861 & 1) == 0 )
  {
    sub_21FFC50(&EventRandomMissionListViewItemDraw_TypeInfo);
    sub_21FFC50(&EventRandomMissionListViewItem_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5932861 = 1;
  }
  if ( missionListViewItem
    && (naturalAligment = EventRandomMissionListViewItem_TypeInfo->_2.naturalAligment,
        missionListViewItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment)
    && (EventRandomMissionListViewItem_c *)missionListViewItem->klass->_2.typeHierarchy[naturalAligment - 1] == EventRandomMissionListViewItem_TypeInfo )
  {
    MissionListViewItemDraw__SetInput((MissionListViewItemDraw_o *)this, missionListViewItem, 0);
    baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
    if ( UnityEngine_Object__op_Inequality(baseButton, 0, 0) )
    {
      missionCondLb = this->fields.missionCondLb;
      condMsg = missionListViewItem->fields.condMsg;
      v13 = EventRandomMissionListViewItemDraw_TypeInfo;
      if ( !*(&EventRandomMissionListViewItemDraw_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(EventRandomMissionListViewItemDraw_TypeInfo, v9, v10);
        v13 = EventRandomMissionListViewItemDraw_TypeInfo;
      }
      WrapControlText__textAdjust(missionCondLb, condMsg, v13->static_fields->MISSION_COND_FONT_SIZE, 0, 0);
    }
  }
  else
  {
    MissionListViewItemDraw__SetInput((MissionListViewItemDraw_o *)this, 0, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
bool EventRandomMissionListViewItemDraw__SetItem(
        EventRandomMissionListViewItemDraw_o *this,
        MissionListViewItem_o *missionListViewItem,
        int32_t mode,
        ListViewManager_o *listViewManager,
        const MethodInfo *method)
{
  __int64 naturalAligment; // x10
  EventRandomMissionListViewItem_o *v10; // x20
  __int64 v11; // x10
  __int64 v12; // x1
  UnityEngine_GameObject_o *rewardImg; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  struct GiftEntity_array *giftEnts; // x1
  __int64 v22; // x2
  struct GiftEntity_array *giftEntityList; // x8
  UILabel_o *missionCondLb; // x23
  EventRandomMissionListViewItemDraw_c *v25; // x0
  System_String_o *condMsg; // x24
  __int64 v27; // x1
  __int64 v28; // x2
  UnityEngine_Object_o *baseButton; // x23
  __int64 v30; // x2
  UnityEngine_Object_o *baseSprite; // x22
  __int64 v32; // x1
  __int64 v33; // x2
  UISprite_o *v34; // x22
  Il2CppObject *v35; // x0
  __int64 v36; // x1
  __int64 v37; // x2
  System_String_o *v38; // x23
  UnityEngine_Object_o *timeOverSprite; // x22
  __int64 v40; // x1
  __int64 v41; // x2
  UISprite_o *v42; // x22
  Il2CppObject *v43; // x0
  __int64 v44; // x1
  __int64 v45; // x2
  System_String_o *v46; // x23
  UnityEngine_Object_o *rejectSprite; // x22
  __int64 v48; // x1
  __int64 v49; // x2
  UISprite_o *v50; // x22
  __int64 v51; // x2
  UIWidget_o *v52; // x22
  UnityEngine_Object_o *rankSprite; // x22
  __int64 v54; // x1
  __int64 v55; // x2
  const MethodInfo *v56; // x3
  int v57; // w24
  UISprite_o *v58; // x22
  Il2CppObject *v59; // x23
  Il2CppObject *v60; // x0
  __int64 v61; // x1
  __int64 v62; // x2
  System_String_o *v63; // x23
  __int64 v64; // x2
  UIWidget_o *v65; // x22
  __int64 v66; // x1
  __int64 v67; // x2
  UnityEngine_Object_o *rewardBackSprite; // x21
  UISprite_o *v69; // x21
  __int64 v70; // x1
  __int64 v71; // x2
  int32_t Type; // w24
  int32_t rewardObjectId; // w22
  int32_t rewardRarityId; // w23
  int v75; // [xsp+0h] [xbp-70h] BYREF
  int32_t currentEventId; // [xsp+4h] [xbp-6Ch] BYREF
  EventRandomMissionEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF
  float barExp; // [xsp+14h] [xbp-5Ch] BYREF
  System_String_o *progTxt; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_593285A & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_EventRandomMissionMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&EventRandomMissionListViewItemDraw_TypeInfo);
    sub_21FFC50(&EventRandomMissionListViewItem_TypeInfo);
    sub_21FFC50(&EventRandomMissionListViewManager_TypeInfo);
    sub_21FFC50(&EventRewardRootComponent_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_18235/*"btn_mission_cancel"*/);
    sub_21FFC50(&StringLiteral_22678/*"mission_board_{0}01"*/);
    sub_21FFC50(&StringLiteral_22675/*"mission_board_rank_{0}{1:D2}"*/);
    sub_21FFC50(&StringLiteral_22674/*"mission_board_mask_{0}01"*/);
    byte_593285A = 1;
  }
  progTxt = 0;
  barExp = 0.0;
  entity = 0;
  if ( missionListViewItem
    && (naturalAligment = EventRandomMissionListViewItem_TypeInfo->_2.naturalAligment,
        missionListViewItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (EventRandomMissionListViewItem_c *)missionListViewItem->klass->_2.typeHierarchy[naturalAligment - 1] == EventRandomMissionListViewItem_TypeInfo )
      v10 = (EventRandomMissionListViewItem_o *)missionListViewItem;
    else
      v10 = 0;
    if ( !listViewManager )
      goto LABEL_13;
  }
  else
  {
    v10 = 0;
    if ( !listViewManager )
      goto LABEL_13;
  }
  v11 = EventRandomMissionListViewManager_TypeInfo->_2.naturalAligment;
  if ( listViewManager->klass->_2.naturalAligment >= (unsigned int)v11 )
  {
    if ( (EventRandomMissionListViewManager_c *)listViewManager->klass->_2.typeHierarchy[v11 - 1] != EventRandomMissionListViewManager_TypeInfo )
      listViewManager = 0;
    if ( !v10 )
      return 0;
    goto LABEL_18;
  }
  listViewManager = 0;
LABEL_13:
  if ( !v10 )
    return 0;
LABEL_18:
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, missionListViewItem, *(_QWORD *)&mode);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)listViewManager, 0, 0) )
    return 0;
  if ( mode )
  {
    rewardImg = this->fields.rewardImg;
    if ( !rewardImg )
      goto LABEL_97;
    UnityEngine_GameObject__SetActive(rewardImg, 0, 0);
    rewardImg = (UnityEngine_GameObject_o *)this->fields.receiveIcon;
    if ( !rewardImg )
      goto LABEL_97;
    ShiningIconComponent__Clear((ShiningIconComponent_o *)rewardImg, 0);
    rewardImg = this->fields.rewardGetInfo;
    if ( !rewardImg )
      goto LABEL_97;
    UnityEngine_GameObject__SetActive(rewardImg, 0, 0);
    rewardImg = this->fields.rewardAchiveInfo;
    if ( !rewardImg )
      goto LABEL_97;
    UnityEngine_GameObject__SetActive(rewardImg, 0, 0);
    rewardImg = this->fields.compInfo;
    if ( !rewardImg )
      goto LABEL_97;
    UnityEngine_GameObject__SetActive(rewardImg, 0, 0);
    rewardImg = this->fields.completedImg;
    if ( !rewardImg )
      goto LABEL_97;
    rewardImg = UnityEngine_GameObject__get_gameObject(rewardImg, 0);
    if ( !rewardImg )
      goto LABEL_97;
    UnityEngine_GameObject__SetActive(rewardImg, 0, 0);
    rewardImg = this->fields.timeOverInfo;
    if ( !rewardImg )
      goto LABEL_97;
    UnityEngine_GameObject__SetActive(rewardImg, 0, 0);
    rewardImg = this->fields.lockImgInfo;
    if ( !rewardImg )
      goto LABEL_97;
    UnityEngine_GameObject__SetActive(rewardImg, 0, 0);
    if ( !missionListViewItem )
      goto LABEL_97;
    giftEnts = missionListViewItem->fields.giftEnts;
    this->fields.giftEntityList = giftEnts;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.giftEntityList,
      (int32_t)giftEnts,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
    giftEntityList = this->fields.giftEntityList;
    if ( !giftEntityList )
      goto LABEL_97;
    missionCondLb = this->fields.missionCondLb;
    v25 = EventRandomMissionListViewItemDraw_TypeInfo;
    this->fields.isMultipleReward = SLODWORD(giftEntityList->max_length) > 1;
    condMsg = v10->fields.condMsg;
    if ( !*(&v25->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v25, v12, v22);
      v25 = EventRandomMissionListViewItemDraw_TypeInfo;
    }
    WrapControlText__textAdjust(missionCondLb, condMsg, v25->static_fields->MISSION_COND_FONT_SIZE, 0, 0);
    ((void (__fastcall *)(EventRandomMissionListViewItemDraw_o *, _QWORD, const MethodInfo *))this->klass->vtable._8_SetRewardStatusImg.methodPtr)(
      this,
      (unsigned int)missionListViewItem->fields.progStatus,
      this->klass->vtable._8_SetRewardStatusImg.method);
    if ( MissionListViewItem__GetProgInfo(missionListViewItem, &progTxt, &barExp, 0) )
    {
      rewardImg = (UnityEngine_GameObject_o *)this->fields.missionProgressLb;
      if ( !rewardImg )
        goto LABEL_97;
      UILabel__set_text((UILabel_o *)rewardImg, progTxt, 0);
      rewardImg = (UnityEngine_GameObject_o *)this->fields.expBar;
      if ( !rewardImg )
        goto LABEL_97;
      UIProgressBar__set_value((UIProgressBar_o *)rewardImg, barExp, 0);
    }
    rewardImg = (UnityEngine_GameObject_o *)this->fields.miniIconComponent;
    if ( !rewardImg )
      goto LABEL_97;
    MissionGiftMiniIconComponent__SetMiniIcon(
      (MissionGiftMiniIconComponent_o *)rewardImg,
      missionListViewItem->fields.subGiftEntity,
      0);
    ((void (__fastcall *)(EventRandomMissionListViewItemDraw_o *, MissionListViewItem_o *, const MethodInfo *))this->klass->vtable._5_InitDispResTime.methodPtr)(
      this,
      missionListViewItem,
      this->klass->vtable._5_InitDispResTime.method);
    baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v27, v28);
    if ( UnityEngine_Object__op_Inequality(baseButton, 0, 0) )
    {
      rewardImg = (UnityEngine_GameObject_o *)this->fields.baseButton;
      if ( !rewardImg )
        goto LABEL_97;
      UICommonButton__SetColliderEnable(
        (UICommonButton_o *)rewardImg,
        missionListViewItem->fields.isColliderEnable,
        1,
        0);
      rewardImg = (UnityEngine_GameObject_o *)this->fields.baseButton;
      if ( !rewardImg )
        goto LABEL_97;
      ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, __int64, Il2CppClass **))rewardImg->klass[1]._1.nestedTypes)(
        rewardImg,
        0,
        1,
        rewardImg->klass[1]._1.implementedInterfaces);
    }
    baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12, v30);
    if ( UnityEngine_Object__op_Inequality(baseSprite, 0, 0) )
    {
      v34 = this->fields.baseSprite;
      currentEventId = v10->fields.currentEventId;
      v35 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &currentEventId);
      v38 = System_String__Format((System_String_o *)StringLiteral_22678/*"mission_board_{0}01"*/, v35, 0);
      if ( !*(&EventRewardRootComponent_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo, v36, v37);
      EventRewardRootComponent__setRewardInfoImg(v34, v38, 0);
    }
    timeOverSprite = (UnityEngine_Object_o *)this->fields.timeOverSprite;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v32, v33);
    if ( UnityEngine_Object__op_Inequality(timeOverSprite, 0, 0) )
    {
      v42 = this->fields.timeOverSprite;
      currentEventId = v10->fields.currentEventId;
      v43 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &currentEventId);
      v46 = System_String__Format((System_String_o *)StringLiteral_22674/*"mission_board_mask_{0}01"*/, v43, 0);
      if ( !*(&EventRewardRootComponent_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo, v44, v45);
      EventRewardRootComponent__setRewardInfoImg(v42, v46, 0);
    }
    rejectSprite = (UnityEngine_Object_o *)this->fields.rejectSprite;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v40, v41);
    if ( UnityEngine_Object__op_Inequality(rejectSprite, 0, 0) )
    {
      v50 = this->fields.rejectSprite;
      if ( !*(&EventRewardRootComponent_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo, v48, v49);
      EventRewardRootComponent__setRewardInfoImg(v50, (System_String_o *)StringLiteral_18235/*"btn_mission_cancel"*/, 0);
      rewardImg = (UnityEngine_GameObject_o *)EventRandomMissionListViewItemDraw_TypeInfo;
      v52 = (UIWidget_o *)this->fields.rejectSprite;
      if ( !*(&EventRandomMissionListViewItemDraw_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(EventRandomMissionListViewItemDraw_TypeInfo, v12, v51);
      if ( !v52 )
        goto LABEL_97;
      UIWidget__set_width(v52, EventRandomMissionListViewItemDraw_TypeInfo->static_fields->REJECT_SPRITE_WIDTH, 0);
      rewardImg = (UnityEngine_GameObject_o *)this->fields.rejectSprite;
      if ( !rewardImg )
        goto LABEL_97;
      UIWidget__set_height(
        (UIWidget_o *)rewardImg,
        EventRandomMissionListViewItemDraw_TypeInfo->static_fields->REJECT_SPRITE_HEIGHT,
        0);
    }
    rankSprite = (UnityEngine_Object_o *)this->fields.rankSprite;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v48, v49);
    if ( UnityEngine_Object__op_Inequality(rankSprite, 0, 0) )
    {
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v54, v55);
      rewardImg = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_EventRandomMissionMaster___);
      if ( !rewardImg )
        goto LABEL_97;
      rewardImg = (UnityEngine_GameObject_o *)EventRandomMissionMaster__TryGetEntity(
                                                (EventRandomMissionMaster_o *)rewardImg,
                                                &entity,
                                                v10->fields.currentMissionId,
                                                0);
      if ( ((unsigned __int8)rewardImg & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_97;
        v57 = (entity->fields.missionRank & ~(entity->fields.missionRank >> 31)) + 1;
      }
      else
      {
        v57 = 1;
      }
      v58 = this->fields.rankSprite;
      currentEventId = v10->fields.currentEventId;
      v59 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &currentEventId);
      v75 = v57;
      v60 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v75);
      v63 = System_String__Format_75484576((System_String_o *)StringLiteral_22675/*"mission_board_rank_{0}{1:D2}"*/, v59, v60, 0);
      if ( !*(&EventRewardRootComponent_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo, v61, v62);
      EventRewardRootComponent__setRewardInfoImg(v58, v63, 0);
      rewardImg = (UnityEngine_GameObject_o *)EventRandomMissionListViewItemDraw_TypeInfo;
      v65 = (UIWidget_o *)this->fields.rankSprite;
      if ( !*(&EventRandomMissionListViewItemDraw_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(EventRandomMissionListViewItemDraw_TypeInfo, v12, v64);
      if ( !v65
        || (UIWidget__set_width(v65, EventRandomMissionListViewItemDraw_TypeInfo->static_fields->RANK_SPRITE_WIDTH, 0),
            (rewardImg = (UnityEngine_GameObject_o *)this->fields.rankSprite) == 0) )
      {
LABEL_97:
        sub_21FFECC(rewardImg, v12);
      }
      UIWidget__set_height(
        (UIWidget_o *)rewardImg,
        EventRandomMissionListViewItemDraw_TypeInfo->static_fields->RANK_SPRITE_HEIGHT,
        0);
    }
    EventRandomMissionListViewItemDraw__SetRewardItemIcon(
      this,
      v10,
      (EventRandomMissionListViewManager_o *)listViewManager,
      v56);
    rewardImg = (UnityEngine_GameObject_o *)this->fields.newIcon;
    if ( !rewardImg )
      goto LABEL_97;
    ShiningIconComponent__Clear((ShiningIconComponent_o *)rewardImg, 0);
    rewardBackSprite = (UnityEngine_Object_o *)this->fields.rewardBackSprite;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v66, v67);
    if ( UnityEngine_Object__op_Inequality(rewardBackSprite, 0, 0) )
    {
      v69 = this->fields.rewardBackSprite;
      Type = MissionListViewItem__get_Type((MissionListViewItem_o *)v10, 0);
      rewardObjectId = v10->fields.rewardObjectId;
      rewardRarityId = v10->fields.rewardRarityId;
      if ( !*(&EventRewardRootComponent_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo, v70, v71);
      EventRewardRootComponent__SetRewardRaritySprite(v69, Type, rewardObjectId, rewardRarityId, 0);
    }
  }
  if ( v10->fields._IsDummy_k__BackingField )
  {
    rewardImg = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( rewardImg )
    {
      UnityEngine_GameObject__SetActive(rewardImg, 0, 0);
      return 1;
    }
    goto LABEL_97;
  }
  return 1;
}


void EventRandomMissionListViewItemDraw__SetLockMissionBoard(
        EventRandomMissionListViewItemDraw_o *this,
        MissionListViewItem_o *missionListViewItem,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *lockImgInfo; // x0

  lockImgInfo = this->fields.lockImgInfo;
  if ( !lockImgInfo )
    sub_21FFECC(0, missionListViewItem);
  UnityEngine_GameObject__SetActive(lockImgInfo, 1, 0);
}


void EventRandomMissionListViewItemDraw__SetRewardItemIcon(
        EventRandomMissionListViewItemDraw_o *this,
        EventRandomMissionListViewItem_o *item,
        EventRandomMissionListViewManager_o *manager,
        const MethodInfo *method)
{
  EventRandomMissionListViewItem_o *v5; // x19
  EventRandomMissionListViewItemDraw_o *v6; // x20
  const MethodInfo *v7; // x1
  __int64 v8; // x2
  Il2CppObject *Master_object; // x22
  GiftEntity_array *GiftListById; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  __int64 v17; // x2
  struct GiftEntity_array *giftEntityList; // x8
  il2cpp_array_size_t max_length; // x9
  struct GiftEntity_array *v20; // x22
  GiftEntity_o *v21; // x8
  int64_t v22; // x8
  int64_t v23; // x2
  GiftEntity_o *v24; // x8
  ItemIconComponent_o *itemIcon; // x21
  int64_t num; // x8
  int64_t v27; // x2
  int32_t Type; // w0
  int32_t rewardObjectId; // w22
  int32_t v30; // w23
  const MethodInfo *v31; // x1
  int32_t iconId; // w1
  int32_t v33; // w3

  v5 = item;
  v6 = this;
  if ( (byte_593285C & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_GiftMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    this = (EventRandomMissionListViewItemDraw_o *)sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593285C = 1;
  }
  if ( !v5 )
    goto LABEL_53;
  if ( MissionListViewItem__get_EventRewardType((MissionListViewItem_o *)v5, 0) == 1 )
  {
    if ( EventRandomMissionListViewItem__get_IsHideReward(v5, v7) )
    {
      this = (EventRandomMissionListViewItemDraw_o *)v6->fields.itemIcon;
      v6->fields.isMultipleReward = 0;
      if ( !this )
        goto LABEL_53;
      ItemIconComponent__SetItemImage((ItemIconComponent_o *)this, 99, 0);
      goto LABEL_40;
    }
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, item, v8);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_GiftMaster___);
    this = (EventRandomMissionListViewItemDraw_o *)MissionListViewItem__get_EventMissionEntity(
                                                     (MissionListViewItem_o *)v5,
                                                     0);
    if ( !this )
      goto LABEL_53;
    if ( !Master_object )
      goto LABEL_53;
    GiftListById = GiftMaster__GetGiftListById((GiftMaster_o *)Master_object, HIDWORD(this->fields.missionNoLb), 0);
    v6->fields.giftEntityList = GiftListById;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&v6->fields.giftEntityList,
      (int32_t)GiftListById,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
    giftEntityList = v6->fields.giftEntityList;
    if ( !giftEntityList )
      goto LABEL_53;
    max_length = giftEntityList->max_length;
    if ( !max_length )
      return;
    v6->fields.isMultipleReward = (int)max_length > 1;
    if ( (int)max_length < 2 )
    {
      if ( (_DWORD)max_length )
      {
        v24 = giftEntityList->m_Items[0];
        if ( !v24 )
          goto LABEL_53;
        item = (EventRandomMissionListViewItem_o *)(unsigned int)v24->fields.prioredIconId;
        itemIcon = v6->fields.itemIcon;
        if ( (int)item < 1 )
        {
          Type = MissionListViewItem__get_Type((MissionListViewItem_o *)v5, 0);
          rewardObjectId = v5->fields.rewardObjectId;
          v30 = Type;
          this = (EventRandomMissionListViewItemDraw_o *)MissionListViewItem__get_DisplayGiftNum(
                                                           (MissionListViewItem_o *)v5,
                                                           0);
          if ( !itemIcon )
            goto LABEL_53;
          ItemIconComponent__SetGiftDesignSize(itemIcon, v30, rewardObjectId, (int32_t)this, 0);
        }
        else
        {
          if ( !itemIcon )
            goto LABEL_53;
          num = (unsigned int)v24->fields.num;
          if ( (int)num <= 1 )
            v27 = -1;
          else
            v27 = num;
          ItemIconComponent__SetItemImage_47939376(v6->fields.itemIcon, (int32_t)item, v27, 0);
        }
        this = (EventRandomMissionListViewItemDraw_o *)v6->fields.itemIcon;
        if ( !this )
LABEL_53:
          sub_21FFECC(this, item);
        ItemIconComponent__SetAlpha((ItemIconComponent_o *)this, 1.0, 0);
        goto LABEL_40;
      }
    }
    else
    {
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, v17);
      this = (EventRandomMissionListViewItemDraw_o *)UnityEngine_Object__op_Inequality(
                                                       (UnityEngine_Object_o *)manager,
                                                       0,
                                                       0);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_40;
      v20 = v6->fields.giftEntityList;
      if ( !v20 || !manager )
        goto LABEL_53;
      this = (EventRandomMissionListViewItemDraw_o *)MissionListViewManager__GetAlphaAnimCnt(
                                                       (MissionListViewManager_o *)manager,
                                                       v20->max_length,
                                                       0);
      if ( (unsigned int)this < LODWORD(v20->max_length) )
      {
        v21 = v20->m_Items[(int)this];
        if ( !v21 )
          goto LABEL_53;
        item = (EventRandomMissionListViewItem_o *)(unsigned int)v21->fields.prioredIconId;
        this = (EventRandomMissionListViewItemDraw_o *)v6->fields.itemIcon;
        if ( (int)item < 1 )
        {
          if ( !this )
            goto LABEL_53;
          if ( v21->fields.num <= 1 )
            v33 = -1;
          else
            v33 = v21->fields.num;
          ItemIconComponent__SetGiftDesignSize(
            (ItemIconComponent_o *)this,
            v21->fields.type,
            v21->fields.objectId,
            v33,
            0);
        }
        else
        {
          if ( !this )
            goto LABEL_53;
          v22 = (unsigned int)v21->fields.num;
          if ( (int)v22 <= 1 )
            v23 = -1;
          else
            v23 = v22;
          ItemIconComponent__SetItemImage_47939376((ItemIconComponent_o *)this, (int32_t)item, v23, 0);
        }
        goto LABEL_40;
      }
    }
    sub_21FFED4(this);
  }
LABEL_40:
  if ( MissionListViewItem__get_EventRewardType((MissionListViewItem_o *)v5, 0) == 3 )
  {
    if ( EventRandomMissionListViewItem__get_IsHideReward(v5, v31) )
    {
      this = (EventRandomMissionListViewItemDraw_o *)v6->fields.itemIcon;
      v6->fields.isMultipleReward = 0;
      if ( this )
      {
        iconId = 99;
LABEL_47:
        ItemIconComponent__SetItemImage((ItemIconComponent_o *)this, iconId, 0);
        return;
      }
    }
    else
    {
      this = (EventRandomMissionListViewItemDraw_o *)v6->fields.itemIcon;
      if ( this )
      {
        iconId = v5->fields.iconId;
        goto LABEL_47;
      }
    }
    goto LABEL_53;
  }
}


void EventRandomMissionListViewItemDraw__SetRewardStatusImg(
        EventRandomMissionListViewItemDraw_o *this,
        int32_t status,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_GameObject_o *lockImgInfo; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  UILabel_o *timeOverLb; // x19

  if ( (byte_593285D & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_9060/*"MISSION_PERIOD_END"*/);
    byte_593285D = 1;
  }
  MissionListViewItemDraw__SetRewardStatusImg((MissionListViewItemDraw_o *)this, status, 0);
  if ( status == 5 )
  {
    lockImgInfo = this->fields.lockImgInfo;
    if ( !lockImgInfo )
      goto LABEL_11;
    UnityEngine_GameObject__SetActive(lockImgInfo, 0, 0);
    lockImgInfo = this->fields.timeOverInfo;
    if ( !lockImgInfo )
      goto LABEL_11;
    UnityEngine_GameObject__SetActive(lockImgInfo, 1, 0);
    timeOverLb = this->fields.timeOverLb;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7, v8);
    lockImgInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9060/*"MISSION_PERIOD_END"*/, 0);
    if ( !timeOverLb )
LABEL_11:
      sub_21FFECC(lockImgInfo, v5);
    UILabel__set_text(timeOverLb, (System_String_o *)lockImgInfo, 0);
  }
}


void EventRandomMissionListViewItemDraw__UpdateItem(
        EventRandomMissionListViewItemDraw_o *this,
        EventRandomMissionListViewItem_o *item,
        int32_t mode,
        float alphaAnim,
        const MethodInfo *method)
{
  const MethodInfo *v9; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v11; // x21
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x2
  int64_t v15; // x22
  int64_t oldTime; // x23
  MissionListViewItemDraw_c *v17; // x8
  UILabel_o *resTimeLb; // x23
  int64_t klass; // x24
  int64_t m_CachedPtr; // x24
  __int64 v21; // x1
  __int64 v22; // x2
  int64_t v23; // x21
  System_String_o *RestTime; // x21
  __int64 v25; // x1
  __int64 v26; // x2
  UnityEngine_Object_o *rewardBackSprite; // x20

  if ( (byte_5932860 & 1) == 0 )
  {
    sub_21FFC50(&EventRandomMissionListViewItemDraw_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&MissionListViewItemDraw_TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_13965/*"TIME_REST_TIMEOVER"*/);
    byte_5932860 = 1;
  }
  if ( item && MissionListViewItem__get_EventMissionEntity((MissionListViewItem_o *)item, 0) )
  {
    if ( item->fields._IsDummy_k__BackingField )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive(gameObject, 0, 0);
        return;
      }
      goto LABEL_43;
    }
    if ( mode )
    {
      gameObject = (UnityEngine_GameObject_o *)this->fields.resTimeLb;
      if ( !gameObject )
        goto LABEL_43;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_43;
      if ( UnityEngine_GameObject__get_activeSelf(gameObject, 0) )
      {
        gameObject = (UnityEngine_GameObject_o *)MissionListViewItem__get_EventMissionEntity(
                                                   (MissionListViewItem_o *)item,
                                                   0);
        if ( !this->fields.resTimeLb )
          goto LABEL_43;
        v11 = gameObject;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.resTimeLb, 0);
        if ( !gameObject )
          goto LABEL_43;
        if ( UnityEngine_GameObject__get_activeSelf(gameObject, 0) )
        {
          if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v12, v13);
          gameObject = (UnityEngine_GameObject_o *)NetworkManager__getTime(0);
          v15 = (int64_t)gameObject;
          oldTime = this->fields.oldTime;
          v17 = MissionListViewItemDraw_TypeInfo;
          if ( !*(&MissionListViewItemDraw_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(MissionListViewItemDraw_TypeInfo, v9, v14);
            v17 = MissionListViewItemDraw_TypeInfo;
          }
          if ( v15 - oldTime >= v17->static_fields->TIME_UPDATE_ITVL_SEC )
          {
            resTimeLb = this->fields.resTimeLb;
            if ( this->fields.isAchiveTime )
            {
              if ( !v11 )
                goto LABEL_43;
              klass = (int64_t)v11[3].klass;
              if ( !*(&EventRandomMissionListViewItemDraw_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(EventRandomMissionListViewItemDraw_TypeInfo, v9, v14);
              gameObject = (UnityEngine_GameObject_o *)EventRandomMissionListViewItemDraw__GetAchiveTimeText(klass, v9);
            }
            else
            {
              if ( !v11 )
                goto LABEL_43;
              m_CachedPtr = v11[2].fields.m_CachedPtr;
              if ( !*(&EventRandomMissionListViewItemDraw_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(EventRandomMissionListViewItemDraw_TypeInfo, v9, v14);
              gameObject = (UnityEngine_GameObject_o *)EventRandomMissionListViewItemDraw__GetRestTimeText(
                                                         m_CachedPtr,
                                                         v9);
            }
            v9 = (const MethodInfo *)gameObject;
            if ( !resTimeLb )
              goto LABEL_43;
            UILabel__set_text(resTimeLb, (System_String_o *)gameObject, 0);
            v23 = v11[2].fields.m_CachedPtr;
            this->fields.oldTime = v15;
            if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v21, v22);
            RestTime = LocalizationManager__GetRestTime(v23, 0);
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13965/*"TIME_REST_TIMEOVER"*/, 0);
            if ( !RestTime )
LABEL_43:
              sub_21FFECC(gameObject, v9);
            if ( System_String__Equals_75473208(RestTime, (System_String_o *)gameObject, 0) )
            {
              ((void (__fastcall *)(EventRandomMissionListViewItemDraw_o *, EventRandomMissionListViewItem_o *, const MethodInfo *))this->klass->vtable._5_InitDispResTime.methodPtr)(
                this,
                item,
                this->klass->vtable._5_InitDispResTime.method);
              ((void (__fastcall *)(EventRandomMissionListViewItem_o *, const MethodInfo *))item->klass->vtable._6_CheckMissionCond.methodPtr)(
                item,
                item->klass->vtable._6_CheckMissionCond.method);
              gameObject = this->fields.lockImgInfo;
              if ( !gameObject )
                goto LABEL_43;
              UnityEngine_GameObject__SetActive(gameObject, 0, 0);
              ((void (__fastcall *)(EventRandomMissionListViewItemDraw_o *, _QWORD, const MethodInfo *))this->klass->vtable._8_SetRewardStatusImg.methodPtr)(
                this,
                (unsigned int)item->fields.progStatus,
                this->klass->vtable._8_SetRewardStatusImg.method);
              MissionListViewItemDraw__CheckLockMissionBoard(
                (MissionListViewItemDraw_o *)this,
                (MissionListViewItem_o *)item,
                0);
            }
          }
        }
        MissionListViewItemDraw__SetRewardIconAlpha((MissionListViewItemDraw_o *)this, alphaAnim, 0);
        rewardBackSprite = (UnityEngine_Object_o *)this->fields.rewardBackSprite;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v25, v26);
        if ( UnityEngine_Object__op_Inequality(rewardBackSprite, 0, 0) && this->fields.isMultipleReward )
        {
          gameObject = (UnityEngine_GameObject_o *)this->fields.rewardBackSprite;
          if ( !gameObject )
            goto LABEL_43;
          ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *, float))gameObject->klass[1]._1.element_class)(
            gameObject,
            gameObject->klass[1]._1.castClass,
            alphaAnim);
        }
      }
    }
  }
}