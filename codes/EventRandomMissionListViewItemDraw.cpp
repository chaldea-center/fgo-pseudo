void EventRandomMissionListViewItemDraw___cctor(const MethodInfo *method)
{
  struct EventRandomMissionListViewItemDraw_StaticFields *static_fields; // x8

  if ( (byte_4D26C5D & 1) == 0 )
  {
    sub_1C94098(&EventRandomMissionListViewItemDraw_TypeInfo);
    byte_4D26C5D = 1;
  }
  static_fields = EventRandomMissionListViewItemDraw_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->MISSION_COND_FONT_SIZE = xmmword_CFEF50;
  static_fields->RANK_SPRITE_HEIGHT = 64;
}


void EventRandomMissionListViewItemDraw___ctor(EventRandomMissionListViewItemDraw_o *this, const MethodInfo *method)
{
  if ( (byte_4D26C5C & 1) == 0 )
  {
    sub_1C94098(&MissionListViewItemDraw_TypeInfo);
    byte_4D26C5C = 1;
  }
  if ( !MissionListViewItemDraw_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MissionListViewItemDraw_TypeInfo);
  MissionListViewItemDraw___ctor((MissionListViewItemDraw_o *)this, 0);
}


void EventRandomMissionListViewItemDraw__ChangeNextRewardIcon(
        EventRandomMissionListViewItemDraw_o *this,
        EventRandomMissionListViewManager_o *manager,
        const MethodInfo *method)
{
  struct GiftEntity_array *giftEntityList; // x20
  EventRandomMissionListViewItemDraw_o *v4; // x19
  GiftEntity_o *v5; // x9
  int num; // w8
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
    sub_1C942F8(this);
  v5 = giftEntityList->m_Items[(int)this];
  if ( !v5 )
    goto LABEL_18;
  manager = (EventRandomMissionListViewManager_o *)(unsigned int)v5->fields.prioredIconId;
  this = (EventRandomMissionListViewItemDraw_o *)v4->fields.itemIcon;
  num = v5->fields.num;
  if ( (int)manager >= 1 )
  {
    if ( this )
    {
      if ( num <= 1 )
        v7 = -1;
      else
        v7 = (unsigned int)v5->fields.num;
      ItemIconComponent__SetItemImage_41676908((ItemIconComponent_o *)this, (int32_t)manager, v7, 0);
      return;
    }
LABEL_18:
    sub_1C942F0(this, manager);
  }
  if ( !this )
    goto LABEL_18;
  if ( num <= 1 )
    v8 = -1;
  else
    v8 = v5->fields.num;
  ItemIconComponent__SetGiftDesignSize((ItemIconComponent_o *)this, v5->fields.type, v5->fields.objectId, v8, 0);
}


System_String_o *EventRandomMissionListViewItemDraw__GetAchiveTimeText(int64_t closeTime, const MethodInfo *method)
{
  System_String_o *v3; // x20
  System_String_o *RestTime; // x2

  if ( (byte_4D26C58 & 1) == 0 )
  {
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&StringLiteral_113/*" "*/);
    sub_1C94098(&StringLiteral_13470/*"TIME_REST_ACHIVE"*/);
    byte_4D26C58 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_13470/*"TIME_REST_ACHIVE"*/, 0);
  RestTime = LocalizationManager__GetRestTime(closeTime, 0);
  return System_String__Concat_64456008(v3, (System_String_o *)StringLiteral_113/*" "*/, RestTime, 0);
}


System_String_o *EventRandomMissionListViewItemDraw__GetRestTimeText(int64_t endTime, const MethodInfo *method)
{
  System_String_o *v3; // x20
  System_String_o *RestTime; // x1

  if ( (byte_4D26C57 & 1) == 0 )
  {
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&StringLiteral_13482/*"TIME_REST_QUEST"*/);
    byte_4D26C57 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_13482/*"TIME_REST_QUEST"*/, 0);
  RestTime = LocalizationManager__GetRestTime(endTime, 0);
  return System_String__Concat_64417744(v3, RestTime, 0);
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
  int64_t v10; // x21
  System_String_o *RestTimeText; // x0
  int64_t v12; // x21
  int64_t v13; // x21
  int v14; // w8
  UILabel_o *timeOverLb; // x21
  __int64 naturalAligment; // x10

  if ( (byte_4D26C54 & 1) == 0 )
  {
    sub_1C94098(&EventRandomMissionListViewItemDraw_TypeInfo);
    sub_1C94098(&EventRandomMissionListViewItem_TypeInfo);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&StringLiteral_8730/*"MISSION_PERIOD_END"*/);
    byte_4D26C54 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  this->fields.isAchiveTime = 0;
  if ( !missionListviewItem )
    goto LABEL_46;
  v7 = Time;
  Time = (int64_t)MissionListViewItem__get_EventMissionEntity(missionListviewItem, 0);
  if ( !Time )
    goto LABEL_46;
  if ( v7 >= *(_QWORD *)(Time + 56) )
  {
    Time = (int64_t)MissionListViewItem__get_EventMissionEntity(missionListviewItem, 0);
    if ( !Time )
      goto LABEL_46;
    v9 = v7 < *(_QWORD *)(Time + 64);
    this->fields.isDispTime = v9;
    p_isDispTime = &this->fields.isDispTime;
    if ( v9 )
    {
      Time = (int64_t)MissionListViewItem__get_EventMissionEntity(missionListviewItem, 0);
      if ( !Time )
        goto LABEL_46;
      v10 = *(_QWORD *)(Time + 64);
      if ( !EventRandomMissionListViewItemDraw_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventRandomMissionListViewItemDraw_TypeInfo);
      RestTimeText = EventRandomMissionListViewItemDraw__GetRestTimeText(v10, AchiveTimeText);
      if ( missionListviewItem->fields.progStatus == 3 )
      {
        Time = (int64_t)MissionListViewItem__get_EventMissionEntity(missionListviewItem, 0);
        if ( !Time )
          goto LABEL_46;
        v12 = *(_QWORD *)(Time + 72);
        if ( !EventRandomMissionListViewItemDraw_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(EventRandomMissionListViewItemDraw_TypeInfo);
        AchiveTimeText = (MethodInfo *)EventRandomMissionListViewItemDraw__GetAchiveTimeText(v12, AchiveTimeText);
        this->fields.isAchiveTime = 1;
      }
      else
      {
        AchiveTimeText = (MethodInfo *)RestTimeText;
      }
      Time = (int64_t)this->fields.resTimeLb;
      if ( !Time )
LABEL_46:
        sub_1C942F0(Time, AchiveTimeText);
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
    v14 = 1;
    missionListviewItem->fields.isNowMission = 1;
    goto LABEL_30;
  }
  this->fields.isAchiveTime = 1;
  Time = (int64_t)MissionListViewItem__get_EventMissionEntity(missionListviewItem, 0);
  if ( !Time )
    goto LABEL_46;
  v13 = *(_QWORD *)(Time + 72);
  if ( !EventRandomMissionListViewItemDraw_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventRandomMissionListViewItemDraw_TypeInfo);
  Time = (int64_t)EventRandomMissionListViewItemDraw__GetAchiveTimeText(v13, AchiveTimeText);
  if ( !this->fields.resTimeLb )
    goto LABEL_46;
  AchiveTimeText = (MethodInfo *)Time;
  Time = (int64_t)this->fields.resTimeLb;
LABEL_29:
  UILabel__set_text((UILabel_o *)Time, (System_String_o *)AchiveTimeText, 0);
  v14 = 0;
  this->fields.oldTime = 0;
LABEL_30:
  if ( missionListviewItem->fields.progStatus == 4 )
  {
    this->fields.isDispTime = 0;
    this->fields.isAchiveTime = 0;
  }
  Time = (int64_t)this->fields.timeOverInfo;
  if ( !Time )
    goto LABEL_46;
  if ( v14 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0);
    timeOverLb = this->fields.timeOverLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Time = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_8730/*"MISSION_PERIOD_END"*/, 0);
    if ( !timeOverLb )
      goto LABEL_46;
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
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0);
  }
  Time = (int64_t)this->fields.resTimeLb;
  if ( !Time )
    goto LABEL_46;
  Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
  if ( !*p_isDispTime )
  {
    AchiveTimeText = (MethodInfo *)this->fields.isAchiveTime;
    if ( Time )
      goto LABEL_44;
    goto LABEL_46;
  }
  AchiveTimeText = (MethodInfo *)(&dword_0 + 1);
  if ( !Time )
    goto LABEL_46;
LABEL_44:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, (bool)AchiveTimeText, 0);
}


void EventRandomMissionListViewItemDraw__ModifyBoardImage(
        EventRandomMissionListViewItemDraw_o *this,
        int32_t bannerGroupId,
        const MethodInfo *method)
{
  UnityEngine_Object_o *baseSprite; // x21
  UISprite_o *v6; // x22
  System_String_o *baseSpriteName; // x20
  UIAtlas_o *baseAtlas; // x21

  if ( (byte_4D26C5B & 1) == 0 )
  {
    sub_1C94098(&AtlasManager_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D26C5B = 1;
  }
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(baseSprite, 0, 0) )
  {
    v6 = this->fields.baseSprite;
    baseAtlas = this->fields.baseAtlas;
    baseSpriteName = this->fields.baseSpriteName;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetMissionBoardSprite(v6, baseAtlas, baseSpriteName, bannerGroupId, 0);
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
  UnityEngine_Object_o *baseButton; // x21
  UILabel_o *missionCondLb; // x20
  System_String_o *condMsg; // x19
  EventRandomMissionListViewItemDraw_c *v9; // x0

  if ( (byte_4D26C5A & 1) == 0 )
  {
    sub_1C94098(&EventRandomMissionListViewItemDraw_TypeInfo);
    sub_1C94098(&EventRandomMissionListViewItem_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D26C5A = 1;
  }
  if ( missionListViewItem
    && (naturalAligment = EventRandomMissionListViewItem_TypeInfo->_2.naturalAligment,
        missionListViewItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment)
    && (EventRandomMissionListViewItem_c *)missionListViewItem->klass->_2.typeHierarchy[naturalAligment - 1] == EventRandomMissionListViewItem_TypeInfo )
  {
    MissionListViewItemDraw__SetInput((MissionListViewItemDraw_o *)this, missionListViewItem, 0);
    baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(baseButton, 0, 0) )
    {
      missionCondLb = this->fields.missionCondLb;
      condMsg = missionListViewItem->fields.condMsg;
      v9 = EventRandomMissionListViewItemDraw_TypeInfo;
      if ( !EventRandomMissionListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRandomMissionListViewItemDraw_TypeInfo);
        v9 = EventRandomMissionListViewItemDraw_TypeInfo;
      }
      WrapControlText__textAdjust(missionCondLb, condMsg, v9->static_fields->MISSION_COND_FONT_SIZE, 0, 0);
    }
  }
  else
  {
    MissionListViewItemDraw__SetInput((MissionListViewItemDraw_o *)this, 0, 0);
  }
}


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
  struct GiftEntity_array *giftEnts; // x1
  struct GiftEntity_array *giftEntityList; // x8
  UILabel_o *missionCondLb; // x23
  System_String_o *condMsg; // x24
  EventRandomMissionListViewItemDraw_c *v19; // x0
  UnityEngine_Object_o *baseButton; // x23
  UnityEngine_Object_o *baseSprite; // x22
  UISprite_o *v22; // x22
  Il2CppObject *v23; // x0
  System_String_o *v24; // x23
  UnityEngine_Object_o *timeOverSprite; // x22
  UISprite_o *v26; // x22
  Il2CppObject *v27; // x0
  System_String_o *v28; // x23
  UnityEngine_Object_o *rejectSprite; // x22
  UISprite_o *v30; // x22
  UIWidget_o *v31; // x22
  UnityEngine_Object_o *rankSprite; // x22
  const MethodInfo *v33; // x3
  int v34; // w24
  UISprite_o *v35; // x22
  Il2CppObject *v36; // x23
  Il2CppObject *v37; // x0
  System_String_o *v38; // x23
  UIWidget_o *v39; // x22
  UnityEngine_Object_o *rewardBackSprite; // x21
  UISprite_o *v41; // x21
  int32_t Type; // w0
  int32_t rewardObjectId; // w23
  int32_t rewardRarityId; // w22
  int32_t v45; // w24
  int v46; // [xsp+0h] [xbp-70h] BYREF
  int32_t currentEventId; // [xsp+4h] [xbp-6Ch] BYREF
  EventRandomMissionEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF
  float barExp; // [xsp+14h] [xbp-5Ch] BYREF
  System_String_o *progTxt; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_4D26C53 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMaster_EventRandomMissionMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&EventRandomMissionListViewItemDraw_TypeInfo);
    sub_1C94098(&EventRandomMissionListViewItem_TypeInfo);
    sub_1C94098(&EventRandomMissionListViewManager_TypeInfo);
    sub_1C94098(&EventRewardRootComponent_TypeInfo);
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&StringLiteral_17590/*"btn_mission_cancel"*/);
    sub_1C94098(&StringLiteral_21828/*"mission_board_{0}01"*/);
    sub_1C94098(&StringLiteral_21825/*"mission_board_rank_{0}{1:D2}"*/);
    sub_1C94098(&StringLiteral_21824/*"mission_board_mask_{0}01"*/);
    byte_4D26C53 = 1;
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
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    rewardImg = (UnityEngine_GameObject_o *)sub_1C9403C(&this->fields.giftEntityList, giftEnts);
    giftEntityList = this->fields.giftEntityList;
    if ( !giftEntityList )
      goto LABEL_97;
    this->fields.isMultipleReward = SLODWORD(giftEntityList->max_length) > 1;
    missionCondLb = this->fields.missionCondLb;
    condMsg = v10->fields.condMsg;
    v19 = EventRandomMissionListViewItemDraw_TypeInfo;
    if ( !EventRandomMissionListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRandomMissionListViewItemDraw_TypeInfo);
      v19 = EventRandomMissionListViewItemDraw_TypeInfo;
    }
    WrapControlText__textAdjust(missionCondLb, condMsg, v19->static_fields->MISSION_COND_FONT_SIZE, 0, 0);
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
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(baseSprite, 0, 0) )
    {
      v22 = this->fields.baseSprite;
      currentEventId = v10->fields.currentEventId;
      v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &currentEventId);
      v24 = System_String__Format((System_String_o *)StringLiteral_21828/*"mission_board_{0}01"*/, v23, 0);
      if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
      EventRewardRootComponent__setRewardInfoImg(v22, v24, 0);
    }
    timeOverSprite = (UnityEngine_Object_o *)this->fields.timeOverSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(timeOverSprite, 0, 0) )
    {
      v26 = this->fields.timeOverSprite;
      currentEventId = v10->fields.currentEventId;
      v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &currentEventId);
      v28 = System_String__Format((System_String_o *)StringLiteral_21824/*"mission_board_mask_{0}01"*/, v27, 0);
      if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
      EventRewardRootComponent__setRewardInfoImg(v26, v28, 0);
    }
    rejectSprite = (UnityEngine_Object_o *)this->fields.rejectSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(rejectSprite, 0, 0) )
    {
      v30 = this->fields.rejectSprite;
      if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
      EventRewardRootComponent__setRewardInfoImg(v30, (System_String_o *)StringLiteral_17590/*"btn_mission_cancel"*/, 0);
      rewardImg = (UnityEngine_GameObject_o *)EventRandomMissionListViewItemDraw_TypeInfo;
      v31 = (UIWidget_o *)this->fields.rejectSprite;
      if ( !EventRandomMissionListViewItemDraw_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventRandomMissionListViewItemDraw_TypeInfo);
      if ( !v31 )
        goto LABEL_97;
      UIWidget__set_width(v31, EventRandomMissionListViewItemDraw_TypeInfo->static_fields->REJECT_SPRITE_WIDTH, 0);
      rewardImg = (UnityEngine_GameObject_o *)this->fields.rejectSprite;
      if ( !rewardImg )
        goto LABEL_97;
      UIWidget__set_height(
        (UIWidget_o *)rewardImg,
        EventRandomMissionListViewItemDraw_TypeInfo->static_fields->REJECT_SPRITE_HEIGHT,
        0);
    }
    rankSprite = (UnityEngine_Object_o *)this->fields.rankSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(rankSprite, 0, 0) )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      rewardImg = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_EventRandomMissionMaster___);
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
        v34 = (entity->fields.missionRank & ~(entity->fields.missionRank >> 31)) + 1;
      }
      else
      {
        v34 = 1;
      }
      v35 = this->fields.rankSprite;
      currentEventId = v10->fields.currentEventId;
      v36 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &currentEventId);
      v46 = v34;
      v37 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v46);
      v38 = System_String__Format_64459052((System_String_o *)StringLiteral_21825/*"mission_board_rank_{0}{1:D2}"*/, v36, v37, 0);
      if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
      EventRewardRootComponent__setRewardInfoImg(v35, v38, 0);
      rewardImg = (UnityEngine_GameObject_o *)EventRandomMissionListViewItemDraw_TypeInfo;
      v39 = (UIWidget_o *)this->fields.rankSprite;
      if ( !EventRandomMissionListViewItemDraw_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventRandomMissionListViewItemDraw_TypeInfo);
      if ( !v39
        || (UIWidget__set_width(v39, EventRandomMissionListViewItemDraw_TypeInfo->static_fields->RANK_SPRITE_WIDTH, 0),
            (rewardImg = (UnityEngine_GameObject_o *)this->fields.rankSprite) == 0) )
      {
LABEL_97:
        sub_1C942F0(rewardImg, v12);
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
      v33);
    rewardImg = (UnityEngine_GameObject_o *)this->fields.newIcon;
    if ( !rewardImg )
      goto LABEL_97;
    ShiningIconComponent__Clear((ShiningIconComponent_o *)rewardImg, 0);
    rewardBackSprite = (UnityEngine_Object_o *)this->fields.rewardBackSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(rewardBackSprite, 0, 0) )
    {
      v41 = this->fields.rewardBackSprite;
      Type = MissionListViewItem__get_Type((MissionListViewItem_o *)v10, 0);
      rewardObjectId = v10->fields.rewardObjectId;
      rewardRarityId = v10->fields.rewardRarityId;
      v45 = Type;
      if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
      EventRewardRootComponent__SetRewardRaritySprite(v41, v45, rewardObjectId, rewardRarityId, 0);
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
    sub_1C942F0(0, missionListViewItem);
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
  Il2CppObject *Master_object; // x22
  GiftEntity_array *GiftListById; // x0
  struct GiftEntity_array *giftEntityList; // x8
  il2cpp_array_size_t max_length; // x9
  struct GiftEntity_array *v12; // x22
  GiftEntity_o *v13; // x9
  int v14; // w8
  int64_t v15; // x2
  GiftEntity_o *v16; // x8
  ItemIconComponent_o *itemIcon; // x21
  int64_t num; // x8
  int64_t v19; // x2
  int32_t Type; // w0
  int32_t rewardObjectId; // w22
  int32_t v22; // w23
  const MethodInfo *v23; // x1
  int32_t iconId; // w1
  int32_t v25; // w3

  v5 = item;
  v6 = this;
  if ( (byte_4D26C55 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMaster_GiftMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    this = (EventRandomMissionListViewItemDraw_o *)sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D26C55 = 1;
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
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_GiftMaster___);
    this = (EventRandomMissionListViewItemDraw_o *)MissionListViewItem__get_EventMissionEntity(
                                                     (MissionListViewItem_o *)v5,
                                                     0);
    if ( !this )
      goto LABEL_53;
    if ( !Master_object )
      goto LABEL_53;
    GiftListById = GiftMaster__GetGiftListById((GiftMaster_o *)Master_object, HIDWORD(this->fields.missionNoLb), 0);
    v6->fields.giftEntityList = GiftListById;
    this = (EventRandomMissionListViewItemDraw_o *)sub_1C9403C(&v6->fields.giftEntityList, GiftListById);
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
        v16 = giftEntityList->m_Items[0];
        if ( !v16 )
          goto LABEL_53;
        item = (EventRandomMissionListViewItem_o *)(unsigned int)v16->fields.prioredIconId;
        itemIcon = v6->fields.itemIcon;
        if ( (int)item < 1 )
        {
          Type = MissionListViewItem__get_Type((MissionListViewItem_o *)v5, 0);
          rewardObjectId = v5->fields.rewardObjectId;
          v22 = Type;
          this = (EventRandomMissionListViewItemDraw_o *)MissionListViewItem__get_DisplayGiftNum(
                                                           (MissionListViewItem_o *)v5,
                                                           0);
          if ( !itemIcon )
            goto LABEL_53;
          ItemIconComponent__SetGiftDesignSize(itemIcon, v22, rewardObjectId, (int32_t)this, 0);
        }
        else
        {
          if ( !itemIcon )
            goto LABEL_53;
          num = (unsigned int)v16->fields.num;
          if ( (int)num <= 1 )
            v19 = -1;
          else
            v19 = num;
          ItemIconComponent__SetItemImage_41676908(v6->fields.itemIcon, (int32_t)item, v19, 0);
        }
        this = (EventRandomMissionListViewItemDraw_o *)v6->fields.itemIcon;
        if ( !this )
LABEL_53:
          sub_1C942F0(this, item);
        ItemIconComponent__SetAlpha((ItemIconComponent_o *)this, 1.0, 0);
        goto LABEL_40;
      }
    }
    else
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (EventRandomMissionListViewItemDraw_o *)UnityEngine_Object__op_Inequality(
                                                       (UnityEngine_Object_o *)manager,
                                                       0,
                                                       0);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_40;
      v12 = v6->fields.giftEntityList;
      if ( !v12 || !manager )
        goto LABEL_53;
      this = (EventRandomMissionListViewItemDraw_o *)MissionListViewManager__GetAlphaAnimCnt(
                                                       (MissionListViewManager_o *)manager,
                                                       v12->max_length,
                                                       0);
      if ( (unsigned int)this < LODWORD(v12->max_length) )
      {
        v13 = v12->m_Items[(int)this];
        if ( !v13 )
          goto LABEL_53;
        item = (EventRandomMissionListViewItem_o *)(unsigned int)v13->fields.prioredIconId;
        this = (EventRandomMissionListViewItemDraw_o *)v6->fields.itemIcon;
        v14 = v13->fields.num;
        if ( (int)item < 1 )
        {
          if ( !this )
            goto LABEL_53;
          if ( v14 <= 1 )
            v25 = -1;
          else
            v25 = v13->fields.num;
          ItemIconComponent__SetGiftDesignSize(
            (ItemIconComponent_o *)this,
            v13->fields.type,
            v13->fields.objectId,
            v25,
            0);
        }
        else
        {
          if ( !this )
            goto LABEL_53;
          if ( v14 <= 1 )
            v15 = -1;
          else
            v15 = (unsigned int)v13->fields.num;
          ItemIconComponent__SetItemImage_41676908((ItemIconComponent_o *)this, (int32_t)item, v15, 0);
        }
        goto LABEL_40;
      }
    }
    sub_1C942F8(this);
  }
LABEL_40:
  if ( MissionListViewItem__get_EventRewardType((MissionListViewItem_o *)v5, 0) == 3 )
  {
    if ( EventRandomMissionListViewItem__get_IsHideReward(v5, v23) )
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
  UILabel_o *timeOverLb; // x19

  if ( (byte_4D26C56 & 1) == 0 )
  {
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&StringLiteral_8730/*"MISSION_PERIOD_END"*/);
    byte_4D26C56 = 1;
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
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    lockImgInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8730/*"MISSION_PERIOD_END"*/, 0);
    if ( !timeOverLb )
LABEL_11:
      sub_1C942F0(lockImgInfo, v5);
    UILabel__set_text(timeOverLb, (System_String_o *)lockImgInfo, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void EventRandomMissionListViewItemDraw__UpdateItem(
        EventRandomMissionListViewItemDraw_o *this,
        EventRandomMissionListViewItem_o *item,
        int32_t mode,
        float alphaAnim,
        const MethodInfo *method)
{
  long double v5; // q8
  const MethodInfo *v9; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v11; // x21
  int64_t oldTime; // x23
  int64_t v13; // x22
  MissionListViewItemDraw_c *v14; // x8
  UILabel_o *resTimeLb; // x23
  int64_t klass; // x24
  int64_t m_CachedPtr; // x24
  int64_t v18; // x21
  System_String_o *RestTime; // x21
  UnityEngine_Object_o *rewardBackSprite; // x20

  v5 = *(long double *)&alphaAnim;
  if ( (byte_4D26C59 & 1) == 0 )
  {
    sub_1C94098(&EventRandomMissionListViewItemDraw_TypeInfo);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&MissionListViewItemDraw_TypeInfo);
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&StringLiteral_13494/*"TIME_REST_TIMEOVER"*/);
    byte_4D26C59 = 1;
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
LABEL_42:
      sub_1C942F0(gameObject, v9);
    }
    if ( mode )
    {
      gameObject = (UnityEngine_GameObject_o *)this->fields.resTimeLb;
      if ( !gameObject )
        goto LABEL_42;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_42;
      if ( UnityEngine_GameObject__get_activeSelf(gameObject, 0) )
      {
        gameObject = (UnityEngine_GameObject_o *)MissionListViewItem__get_EventMissionEntity(
                                                   (MissionListViewItem_o *)item,
                                                   0);
        if ( !this->fields.resTimeLb )
          goto LABEL_42;
        v11 = gameObject;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.resTimeLb, 0);
        if ( !gameObject )
          goto LABEL_42;
        if ( UnityEngine_GameObject__get_activeSelf(gameObject, 0) )
        {
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          gameObject = (UnityEngine_GameObject_o *)NetworkManager__getTime(0);
          oldTime = this->fields.oldTime;
          v13 = (int64_t)gameObject;
          v14 = MissionListViewItemDraw_TypeInfo;
          if ( !MissionListViewItemDraw_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(MissionListViewItemDraw_TypeInfo);
            v14 = MissionListViewItemDraw_TypeInfo;
          }
          if ( v13 - oldTime >= v14->static_fields->TIME_UPDATE_ITVL_SEC )
          {
            if ( !v11 )
              goto LABEL_42;
            resTimeLb = this->fields.resTimeLb;
            if ( this->fields.isAchiveTime )
            {
              klass = (int64_t)v11[3].klass;
              if ( !EventRandomMissionListViewItemDraw_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(EventRandomMissionListViewItemDraw_TypeInfo);
              gameObject = (UnityEngine_GameObject_o *)EventRandomMissionListViewItemDraw__GetAchiveTimeText(klass, v9);
            }
            else
            {
              m_CachedPtr = v11[2].fields.m_CachedPtr;
              if ( !EventRandomMissionListViewItemDraw_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(EventRandomMissionListViewItemDraw_TypeInfo);
              gameObject = (UnityEngine_GameObject_o *)EventRandomMissionListViewItemDraw__GetRestTimeText(
                                                         m_CachedPtr,
                                                         v9);
            }
            v9 = (const MethodInfo *)gameObject;
            if ( !resTimeLb )
              goto LABEL_42;
            UILabel__set_text(resTimeLb, (System_String_o *)gameObject, 0);
            this->fields.oldTime = v13;
            v18 = v11[2].fields.m_CachedPtr;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            RestTime = LocalizationManager__GetRestTime(v18, 0);
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13494/*"TIME_REST_TIMEOVER"*/, 0);
            if ( !RestTime )
              goto LABEL_42;
            if ( System_String__Equals_64453064(RestTime, (System_String_o *)gameObject, 0) )
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
                goto LABEL_42;
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
        MissionListViewItemDraw__SetRewardIconAlpha((MissionListViewItemDraw_o *)this, *(float *)&v5, 0);
        rewardBackSprite = (UnityEngine_Object_o *)this->fields.rewardBackSprite;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(rewardBackSprite, 0, 0) && this->fields.isMultipleReward )
        {
          gameObject = (UnityEngine_GameObject_o *)this->fields.rewardBackSprite;
          if ( !gameObject )
            goto LABEL_42;
          ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *, long double))gameObject->klass[1]._1.element_class)(
            gameObject,
            gameObject->klass[1]._1.castClass,
            v5);
        }
      }
    }
  }
}