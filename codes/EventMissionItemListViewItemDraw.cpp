void __fastcall EventMissionItemListViewItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_40F88EC & 1) == 0 )
  {
    sub_B16FFC(&EventMissionItemListViewItemDraw_TypeInfo, v1);
    byte_40F88EC = 1;
  }
  EventMissionItemListViewItemDraw_TypeInfo->static_fields->TIME_UPDATE_ITVL_SEC = 60;
}


void __fastcall EventMissionItemListViewItemDraw___ctor(
        EventMissionItemListViewItemDraw_o *this,
        const MethodInfo *method)
{
  if ( (byte_40F88EB & 1) == 0 )
  {
    sub_B16FFC(&MissionListViewItemDraw_TypeInfo, method);
    byte_40F88EB = 1;
  }
  if ( (BYTE3(MissionListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MissionListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionListViewItemDraw_TypeInfo);
  }
  MissionListViewItemDraw___ctor((MissionListViewItemDraw_o *)this, 0LL);
}


void __fastcall EventMissionItemListViewItemDraw__ChangeNextRewardIcon(
        EventMissionItemListViewItemDraw_o *this,
        EventMissionItemListViewManager_o *manager,
        const MethodInfo *method)
{
  struct GiftEntity_array *giftEntityList; // x20
  __int64 AlphaAnimCnt; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  int32_t *v8; // x9
  int32_t v9; // w1
  ItemIconComponent_o *itemIcon; // x0
  int v11; // w8
  int32_t v12; // w2
  int32_t v13; // w3

  if ( !this->fields.isMultipleReward )
    return;
  giftEntityList = this->fields.giftEntityList;
  if ( !giftEntityList || !manager )
    goto LABEL_18;
  AlphaAnimCnt = MissionListViewManager__GetAlphaAnimCnt(
                   (MissionListViewManager_o *)manager,
                   giftEntityList->max_length,
                   0LL);
  if ( (unsigned int)AlphaAnimCnt >= giftEntityList->max_length )
  {
    sub_B17100(AlphaAnimCnt, v6, v7);
    sub_B170A0();
  }
  v8 = (int32_t *)giftEntityList->m_Items[(int)AlphaAnimCnt];
  if ( !v8 )
    goto LABEL_18;
  v9 = v8[11];
  itemIcon = this->fields.itemIcon;
  v11 = v8[7];
  if ( v9 >= 1 )
  {
    if ( itemIcon )
    {
      if ( v11 <= 1 )
        v12 = -1;
      else
        v12 = v8[7];
      ItemIconComponent__SetItemImage_28930192(itemIcon, v9, v12, 0LL);
      return;
    }
LABEL_18:
    sub_B170D4();
  }
  if ( !itemIcon )
    goto LABEL_18;
  if ( v11 <= 1 )
    v13 = -1;
  else
    v13 = v8[7];
  ItemIconComponent__SetGiftDesignSize(itemIcon, v8[5], v8[6], v13, 0LL);
}


System_String_o *__fastcall EventMissionItemListViewItemDraw__GetAchiveTimeText(
        int64_t closeTime,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_String_o *v5; // x20
  System_String_o *RestTime; // x2

  if ( (byte_40F88E6 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_80/*" "*/, v3);
    sub_B16FFC(&StringLiteral_13336/*"TIME_REST_ACHIVE"*/, v4);
    byte_40F88E6 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_13336/*"TIME_REST_ACHIVE"*/, 0LL);
  RestTime = LocalizationManager__GetRestTime(closeTime, 0LL);
  return System_String__Concat_43746016(v5, (System_String_o *)StringLiteral_80/*" "*/, RestTime, 0LL);
}


System_String_o *__fastcall EventMissionItemListViewItemDraw__GetRestTimeText(
        int64_t endTime,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_String_o *v4; // x20
  System_String_o *RestTime; // x1

  if ( (byte_40F88E5 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_13348/*"TIME_REST_QUEST"*/, v3);
    byte_40F88E5 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_13348/*"TIME_REST_QUEST"*/, 0LL);
  RestTime = LocalizationManager__GetRestTime(endTime, 0LL);
  return System_String__Concat_43743732(v4, RestTime, 0LL);
}


void __fastcall EventMissionItemListViewItemDraw__InitDispResTime(
        EventMissionItemListViewItemDraw_o *this,
        MissionListViewItem_o *missionListviewItem,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int64_t Time; // x0
  int64_t v9; // x21
  EventMissionEntity_o *EventMissionEntity; // x0
  bool *p_isDispTime; // x22
  EventMissionEntity_o *v12; // x0
  int64_t endedAt; // x8
  EventMissionEntity_o *v14; // x0
  const MethodInfo *v15; // x1
  int64_t v16; // x21
  System_String_o *RestTimeText; // x0
  EventMissionEntity_o *v18; // x0
  const MethodInfo *v19; // x1
  int64_t closedAt; // x21
  System_String_o *AchiveTimeText; // x1
  int32_t *p_progStatus; // x21
  int v23; // w8
  EventMissionEntity_o *v24; // x0
  const MethodInfo *v25; // x1
  int64_t v26; // x20
  System_String_o *v27; // x0
  UILabel_o *resTimeLb; // x0
  UnityEngine_GameObject_o *timeOverInfo; // x0
  UILabel_o *timeOverLb; // x20
  System_String_o *v31; // x0
  UnityEngine_Component_o *v32; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  char isAchiveTime; // w1

  if ( (byte_40F88E2 & 1) == 0 )
  {
    sub_B16FFC(&EventMissionItemListViewItemDraw_TypeInfo, missionListviewItem);
    sub_B16FFC(&LocalizationManager_TypeInfo, v5);
    sub_B16FFC(&NetworkManager_TypeInfo, v6);
    sub_B16FFC(&StringLiteral_8725/*"MISSION_PERIOD_END"*/, v7);
    byte_40F88E2 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  this->fields.isAchiveTime = 0;
  if ( !missionListviewItem )
    goto LABEL_49;
  v9 = Time;
  EventMissionEntity = MissionListViewItem__get_EventMissionEntity(missionListviewItem, 0LL);
  if ( !EventMissionEntity )
    goto LABEL_49;
  if ( v9 >= EventMissionEntity->fields.startedAt )
  {
    v12 = MissionListViewItem__get_EventMissionEntity(missionListviewItem, 0LL);
    if ( !v12 )
      goto LABEL_49;
    endedAt = v12->fields.endedAt;
    this->fields.isDispTime = v9 < endedAt;
    p_isDispTime = &this->fields.isDispTime;
    if ( v9 < endedAt )
    {
      v14 = MissionListViewItem__get_EventMissionEntity(missionListviewItem, 0LL);
      if ( !v14 )
        goto LABEL_49;
      v16 = v14->fields.endedAt;
      if ( (BYTE3(EventMissionItemListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventMissionItemListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventMissionItemListViewItemDraw_TypeInfo);
      }
      RestTimeText = EventMissionItemListViewItemDraw__GetRestTimeText(v16, v15);
      if ( missionListviewItem->fields.progStatus == 3 )
      {
        v18 = MissionListViewItem__get_EventMissionEntity(missionListviewItem, 0LL);
        if ( !v18 )
          goto LABEL_49;
        closedAt = v18->fields.closedAt;
        if ( (BYTE3(EventMissionItemListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !EventMissionItemListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventMissionItemListViewItemDraw_TypeInfo);
        }
        AchiveTimeText = EventMissionItemListViewItemDraw__GetAchiveTimeText(closedAt, v19);
        this->fields.isAchiveTime = 1;
      }
      else
      {
        AchiveTimeText = RestTimeText;
      }
      resTimeLb = this->fields.resTimeLb;
      if ( !resTimeLb )
LABEL_49:
        sub_B170D4();
      p_progStatus = &missionListviewItem->fields.progStatus;
      goto LABEL_33;
    }
  }
  else
  {
    this->fields.isDispTime = 0;
    p_isDispTime = &this->fields.isDispTime;
  }
  p_progStatus = &missionListviewItem->fields.progStatus;
  v23 = 1;
  if ( (unsigned int)(missionListviewItem->fields.progStatus - 3) >= 2 )
  {
    missionListviewItem->fields.isNowMission = 1;
    goto LABEL_34;
  }
  this->fields.isAchiveTime = 1;
  v24 = MissionListViewItem__get_EventMissionEntity(missionListviewItem, 0LL);
  if ( !v24 )
    goto LABEL_49;
  v26 = v24->fields.closedAt;
  if ( (BYTE3(EventMissionItemListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventMissionItemListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionItemListViewItemDraw_TypeInfo);
  }
  v27 = EventMissionItemListViewItemDraw__GetAchiveTimeText(v26, v25);
  if ( !this->fields.resTimeLb )
    goto LABEL_49;
  AchiveTimeText = v27;
  resTimeLb = this->fields.resTimeLb;
LABEL_33:
  UILabel__set_text(resTimeLb, AchiveTimeText, 0LL);
  v23 = 0;
  this->fields.oldTime = 0LL;
LABEL_34:
  if ( *p_progStatus == 4 )
  {
    this->fields.isDispTime = 0;
    this->fields.isAchiveTime = 0;
  }
  timeOverInfo = this->fields.timeOverInfo;
  if ( !timeOverInfo )
    goto LABEL_49;
  if ( v23 )
  {
    UnityEngine_GameObject__SetActive(timeOverInfo, 1, 0LL);
    timeOverLb = this->fields.timeOverLb;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v31 = LocalizationManager__Get((System_String_o *)StringLiteral_8725/*"MISSION_PERIOD_END"*/, 0LL);
    if ( !timeOverLb )
      goto LABEL_49;
    UILabel__set_text(timeOverLb, v31, 0LL);
  }
  else
  {
    UnityEngine_GameObject__SetActive(timeOverInfo, 0, 0LL);
  }
  v32 = (UnityEngine_Component_o *)this->fields.resTimeLb;
  if ( !v32 )
    goto LABEL_49;
  gameObject = UnityEngine_Component__get_gameObject(v32, 0LL);
  if ( !*p_isDispTime )
  {
    isAchiveTime = this->fields.isAchiveTime;
    if ( gameObject )
      goto LABEL_47;
    goto LABEL_49;
  }
  isAchiveTime = 1;
  if ( !gameObject )
    goto LABEL_49;
LABEL_47:
  UnityEngine_GameObject__SetActive(gameObject, isAchiveTime, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventMissionItemListViewItemDraw__ModifyBoardImage(
        EventMissionItemListViewItemDraw_o *this,
        int32_t bannerGroupId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *baseSprite; // x21
  UISprite_o *v7; // x22
  System_String_o *baseSpriteName; // x20
  UIAtlas_o *baseAtlas; // x21

  if ( (byte_40F88EA & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, *(_QWORD *)&bannerGroupId);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    byte_40F88EA = 1;
  }
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(baseSprite, 0LL, 0LL) )
  {
    v7 = this->fields.baseSprite;
    baseAtlas = this->fields.baseAtlas;
    baseSpriteName = this->fields.baseSpriteName;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetMissionBoardSprite(v7, baseAtlas, baseSpriteName, bannerGroupId, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventMissionItemListViewItemDraw__OnChangeAlphaAnim(
        EventMissionItemListViewItemDraw_o *this,
        EventMissionItemListViewItem_o *item,
        int32_t mode,
        EventMissionItemListViewManager_o *manager,
        const MethodInfo *method)
{
  EventMissionItemListViewItemDraw__ChangeNextRewardIcon(this, manager, *(const MethodInfo **)&mode);
}


void __fastcall EventMissionItemListViewItemDraw__SetInput(
        EventMissionItemListViewItemDraw_o *this,
        MissionListViewItem_o *missionListViewItem,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x10
  UnityEngine_Object_o *baseButton; // x21
  const MethodInfo *v8; // x2

  if ( (byte_40F88E8 & 1) == 0 )
  {
    sub_B16FFC(&EventMissionItemListViewItem_TypeInfo, missionListViewItem);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    byte_40F88E8 = 1;
  }
  if ( missionListViewItem
    && (v6 = *(&EventMissionItemListViewItem_TypeInfo->_2.bitflags2 + 1),
        *(&missionListViewItem->klass->_2.bitflags2 + 1) >= (unsigned int)v6)
    && (EventMissionItemListViewItem_c *)missionListViewItem->klass->_2.typeHierarchy[v6 - 1] == EventMissionItemListViewItem_TypeInfo )
  {
    MissionListViewItemDraw__SetInput((MissionListViewItemDraw_o *)this, missionListViewItem, 0LL);
    baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
      EventMissionItemListViewItemDraw__UpdateNewIcon(this, (EventMissionItemListViewItem_o *)missionListViewItem, v8);
  }
  else
  {
    MissionListViewItemDraw__SetInput((MissionListViewItemDraw_o *)this, 0LL, 0LL);
  }
}


bool __fastcall EventMissionItemListViewItemDraw__SetItem(
        EventMissionItemListViewItemDraw_o *this,
        MissionListViewItem_o *missionListViewItem,
        int32_t mode,
        ListViewManager_o *listViewManager,
        const MethodInfo *method)
{
  MissionListViewItem_o *v7; // x20
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x10
  __int64 v13; // x10
  UnityEngine_Component_o *iconLabel; // x0
  int v16; // w21
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v18; // x3
  UIIconLabel_o *v19; // x0
  const MethodInfo *v20; // x2
  UISprite_o *rewardBackSprite; // x19
  int32_t Type; // w0
  int32_t rewardObjectId; // w21
  int32_t klass; // w20
  int32_t v25; // w22

  v7 = missionListViewItem;
  if ( (byte_40F88E1 & 1) == 0 )
  {
    sub_B16FFC(&EventMissionItemListViewItem_TypeInfo, missionListViewItem);
    sub_B16FFC(&EventMissionItemListViewManager_TypeInfo, v9);
    sub_B16FFC(&EventRewardRootComponent_TypeInfo, v10);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v11);
    byte_40F88E1 = 1;
  }
  if ( !MissionListViewItemDraw__SetItem((MissionListViewItemDraw_o *)this, v7, mode, listViewManager, 0LL) )
    return 0;
  if ( !v7 )
  {
LABEL_7:
    if ( !listViewManager )
      goto LABEL_8;
LABEL_13:
    v13 = *(&EventMissionItemListViewManager_TypeInfo->_2.bitflags2 + 1);
    if ( *(&listViewManager->klass->_2.bitflags2 + 1) >= (unsigned int)v13 )
    {
      if ( (EventMissionItemListViewManager_c *)listViewManager->klass->_2.typeHierarchy[v13 - 1] != EventMissionItemListViewManager_TypeInfo )
        listViewManager = 0LL;
      if ( !v7 )
        return 0;
    }
    else
    {
      listViewManager = 0LL;
      if ( !v7 )
        return 0;
    }
    goto LABEL_19;
  }
  v12 = *(&EventMissionItemListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v7->klass->_2.bitflags2 + 1) < (unsigned int)v12 )
  {
    v7 = 0LL;
    goto LABEL_7;
  }
  if ( (EventMissionItemListViewItem_c *)v7->klass->_2.typeHierarchy[v12 - 1] != EventMissionItemListViewItem_TypeInfo )
    v7 = 0LL;
  if ( listViewManager )
    goto LABEL_13;
LABEL_8:
  if ( !v7 )
    return 0;
LABEL_19:
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)listViewManager, 0LL, 0LL) )
    return 0;
  if ( mode )
  {
    iconLabel = (UnityEngine_Component_o *)this->fields.iconLabel;
    if ( iconLabel )
    {
      v16 = BYTE1(v7[1].monitor);
      gameObject = UnityEngine_Component__get_gameObject(iconLabel, 0LL);
      if ( gameObject )
      {
        if ( v16 )
        {
          UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
LABEL_31:
          EventMissionItemListViewItemDraw__SetRewardItemIcon(
            this,
            (EventMissionItemListViewItem_o *)v7,
            (EventMissionItemListViewManager_o *)listViewManager,
            v18);
          EventMissionItemListViewItemDraw__UpdateNewIcon(this, (EventMissionItemListViewItem_o *)v7, v20);
          rewardBackSprite = this->fields.rewardBackSprite;
          Type = MissionListViewItem__get_Type(v7, 0LL);
          rewardObjectId = v7->fields.rewardObjectId;
          klass = (int32_t)v7[1].klass;
          v25 = Type;
          if ( (BYTE3(EventRewardRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
          }
          EventRewardRootComponent__SetRewardRaritySprite(rewardBackSprite, v25, rewardObjectId, klass, 0LL);
          return 1;
        }
        UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
        v19 = this->fields.iconLabel;
        if ( v19 )
        {
          UIIconLabel__Set_40377052(v19, 57, v7->fields.dispNo, 0, 0, 0LL, 0, 0, 0, 0LL);
          goto LABEL_31;
        }
      }
    }
    sub_B170D4();
  }
  return 1;
}


void __fastcall EventMissionItemListViewItemDraw__SetLockMissionBoard(
        EventMissionItemListViewItemDraw_o *this,
        MissionListViewItem_o *missionListViewItem,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *lockImgInfo; // x0

  lockImgInfo = this->fields.lockImgInfo;
  if ( !lockImgInfo )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(lockImgInfo, 1, 0LL);
}


void __fastcall EventMissionItemListViewItemDraw__SetRewardItemIcon(
        EventMissionItemListViewItemDraw_o *this,
        EventMissionItemListViewItem_o *item,
        EventMissionItemListViewManager_o *manager,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct EventMissionEntity_o *eventMissionEnt; // x8
  ItemIconComponent_o *itemIcon; // x0
  struct EventMissionEntity_o *v12; // x8
  ItemIconComponent_o *v13; // x0
  int32_t iconId; // w1
  GiftMaster_o *Master_WarQuestSelectionMaster; // x22
  EventMissionEntity_o *EventMissionEntity; // x0
  struct GiftEntity_array *GiftListById; // x0
  struct GiftEntity_array **p_giftEntityList; // x22
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  __int64 v25; // x8
  EventMissionAddMaster_o *v26; // x23
  EventMissionEntity_o *v27; // x0
  int32_t id; // w24
  EventMissionEntity_o *v29; // x0
  const MethodInfo *v30; // x4
  System_String_o *v31; // x23
  struct GiftEntity_array *v32; // x22
  __int64 AlphaAnimCnt; // x0
  __int64 v34; // x1
  __int64 v35; // x2
  int32_t *v36; // x9
  int32_t v37; // w1
  ItemIconComponent_o *v38; // x0
  int v39; // w8
  int32_t v40; // w2
  struct GiftEntity_array *v41; // x8
  GiftEntity_o *v42; // x8
  int32_t prioredIconId; // w1
  ItemIconComponent_o *v44; // x21
  int num; // w8
  int32_t v46; // w2
  ItemIconComponent_o *v47; // x0
  int32_t v48; // w3
  int32_t Type; // w0
  int32_t rewardObjectId; // w22
  int32_t v51; // w23
  int32_t DisplayGiftNum; // w0
  ItemIconComponent_o *v53; // x0

  if ( (byte_40F88E3 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_EventMissionAddMaster___, item);
    sub_B16FFC(&Method_DataManager_GetMaster_GiftMaster___, v7);
    sub_B16FFC(&DataManager_TypeInfo, v8);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v9);
    byte_40F88E3 = 1;
  }
  if ( !item )
    goto LABEL_69;
  if ( MissionListViewItem__get_EventRewardType((MissionListViewItem_o *)item, 0LL) != 1 )
    goto LABEL_9;
  eventMissionEnt = item->fields.eventMissionEnt;
  if ( !eventMissionEnt )
    goto LABEL_69;
  if ( ((item->fields.progStatus < 2u) & ((unsigned int)eventMissionEnt->fields.flag >> 1)) != 0 )
  {
    itemIcon = this->fields.itemIcon;
    this->fields.isMultipleReward = 0;
    if ( !itemIcon )
      goto LABEL_69;
    ItemIconComponent__SetItemImage(itemIcon, 99, 0LL);
    goto LABEL_9;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (GiftMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_GiftMaster___);
  EventMissionEntity = MissionListViewItem__get_EventMissionEntity((MissionListViewItem_o *)item, 0LL);
  if ( !EventMissionEntity )
    goto LABEL_69;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_69;
  GiftListById = GiftMaster__GetGiftListById(Master_WarQuestSelectionMaster, EventMissionEntity->fields.giftId, 0LL);
  this->fields.giftEntityList = GiftListById;
  p_giftEntityList = &this->fields.giftEntityList;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.giftEntityList,
    (System_Int32_array **)GiftListById,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  if ( !this->fields.giftEntityList )
    goto LABEL_69;
  v25 = *(_QWORD *)&this->fields.giftEntityList->max_length;
  if ( !v25 )
    return;
  this->fields.isMultipleReward = (int)v25 > 1;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v26 = (EventMissionAddMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_EventMissionAddMaster___);
  v27 = MissionListViewItem__get_EventMissionEntity((MissionListViewItem_o *)item, 0LL);
  if ( !v27 )
    goto LABEL_69;
  id = v27->fields.id;
  v29 = MissionListViewItem__get_EventMissionEntity((MissionListViewItem_o *)item, 0LL);
  if ( !v29 || !v26 )
    goto LABEL_69;
  v31 = EventMissionAddMaster__GetEventMissionChangeRewardIcon(v26, id, v29->fields.missionTargetId, 0, v30);
  if ( !System_String__IsNullOrEmpty(v31, 0LL) )
  {
    this->fields.isMultipleReward = 0;
    item->fields.isHideRewardDetail = 1;
  }
  if ( this->fields.isMultipleReward )
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)manager, 0LL, 0LL) )
      goto LABEL_9;
    v32 = *p_giftEntityList;
    if ( !v32 || !manager )
      goto LABEL_69;
    AlphaAnimCnt = MissionListViewManager__GetAlphaAnimCnt((MissionListViewManager_o *)manager, v32->max_length, 0LL);
    if ( (unsigned int)AlphaAnimCnt < v32->max_length )
    {
      v36 = (int32_t *)v32->m_Items[(int)AlphaAnimCnt];
      if ( !v36 )
        goto LABEL_69;
      v37 = v36[11];
      v38 = this->fields.itemIcon;
      v39 = v36[7];
      if ( v37 < 1 )
      {
        if ( !v38 )
          goto LABEL_69;
        if ( v39 <= 1 )
          v48 = -1;
        else
          v48 = v36[7];
        ItemIconComponent__SetGiftDesignSize(v38, v36[5], v36[6], v48, 0LL);
      }
      else
      {
        if ( !v38 )
          goto LABEL_69;
        if ( v39 <= 1 )
          v40 = -1;
        else
          v40 = v36[7];
        ItemIconComponent__SetItemImage_28930192(v38, v37, v40, 0LL);
      }
      goto LABEL_9;
    }
LABEL_70:
    sub_B17100(AlphaAnimCnt, v34, v35);
    sub_B170A0();
  }
  AlphaAnimCnt = System_String__IsNullOrEmpty(v31, 0LL);
  if ( (AlphaAnimCnt & 1) != 0 )
  {
    v41 = *p_giftEntityList;
    if ( !*p_giftEntityList )
      goto LABEL_69;
    if ( !v41->max_length )
      goto LABEL_70;
    v42 = v41->m_Items[0];
    if ( !v42 )
      goto LABEL_69;
    prioredIconId = v42->fields.prioredIconId;
    v44 = this->fields.itemIcon;
    if ( prioredIconId < 1 )
    {
      Type = MissionListViewItem__get_Type((MissionListViewItem_o *)item, 0LL);
      rewardObjectId = item->fields.rewardObjectId;
      v51 = Type;
      DisplayGiftNum = MissionListViewItem__get_DisplayGiftNum((MissionListViewItem_o *)item, 0LL);
      if ( !v44 )
        goto LABEL_69;
      ItemIconComponent__SetGiftDesignSize(v44, v51, rewardObjectId, DisplayGiftNum, 0LL);
    }
    else
    {
      if ( !v44 )
        goto LABEL_69;
      num = v42->fields.num;
      if ( num <= 1 )
        v46 = -1;
      else
        v46 = num;
      ItemIconComponent__SetItemImage_28930192(this->fields.itemIcon, prioredIconId, v46, 0LL);
    }
  }
  else
  {
    v47 = this->fields.itemIcon;
    if ( !v47 )
      goto LABEL_69;
    ItemIconComponent__SetItemImageByName(v47, v31, 0LL);
  }
  v53 = this->fields.itemIcon;
  if ( !v53 )
    goto LABEL_69;
  ItemIconComponent__SetAlpha(v53, 1.0, 0LL);
LABEL_9:
  if ( MissionListViewItem__get_EventRewardType((MissionListViewItem_o *)item, 0LL) == 3 )
  {
    v12 = item->fields.eventMissionEnt;
    if ( v12 )
    {
      if ( ((item->fields.progStatus < 2u) & ((unsigned int)v12->fields.flag >> 1)) != 0 )
      {
        v13 = this->fields.itemIcon;
        this->fields.isMultipleReward = 0;
        if ( v13 )
        {
          iconId = 99;
LABEL_47:
          ItemIconComponent__SetItemImage(v13, iconId, 0LL);
          return;
        }
      }
      else
      {
        v13 = this->fields.itemIcon;
        if ( v13 )
        {
          iconId = item->fields.iconId;
          goto LABEL_47;
        }
      }
    }
LABEL_69:
    sub_B170D4();
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventMissionItemListViewItemDraw__SetRewardStatusImg(
        EventMissionItemListViewItemDraw_o *this,
        int32_t status,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_GameObject_o *lockImgInfo; // x0
  UnityEngine_GameObject_o *timeOverInfo; // x0
  UILabel_o *timeOverLb; // x19
  System_String_o *v9; // x0

  if ( (byte_40F88E4 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, *(_QWORD *)&status);
    sub_B16FFC(&StringLiteral_8725/*"MISSION_PERIOD_END"*/, v5);
    byte_40F88E4 = 1;
  }
  MissionListViewItemDraw__SetRewardStatusImg((MissionListViewItemDraw_o *)this, status, 0LL);
  if ( status == 5 )
  {
    lockImgInfo = this->fields.lockImgInfo;
    if ( !lockImgInfo )
      goto LABEL_12;
    UnityEngine_GameObject__SetActive(lockImgInfo, 0, 0LL);
    timeOverInfo = this->fields.timeOverInfo;
    if ( !timeOverInfo )
      goto LABEL_12;
    UnityEngine_GameObject__SetActive(timeOverInfo, 1, 0LL);
    timeOverLb = this->fields.timeOverLb;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v9 = LocalizationManager__Get((System_String_o *)StringLiteral_8725/*"MISSION_PERIOD_END"*/, 0LL);
    if ( !timeOverLb )
LABEL_12:
      sub_B170D4();
    UILabel__set_text(timeOverLb, v9, 0LL);
  }
}


void __fastcall EventMissionItemListViewItemDraw__UpdateItem(
        EventMissionItemListViewItemDraw_o *this,
        EventMissionItemListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  EventMissionEntity_o *EventMissionEntity; // x0
  UnityEngine_Component_o *resTimeLb; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  EventMissionEntity_o *v13; // x0
  EventMissionEntity_o *v14; // x21
  UnityEngine_GameObject_o *v15; // x0
  int64_t Time; // x0
  const MethodInfo *v17; // x1
  int64_t oldTime; // x23
  int64_t v19; // x22
  EventMissionItemListViewItemDraw_c *v20; // x8
  UILabel_o *v21; // x23
  int64_t closedAt; // x24
  System_String_o *AchiveTimeText; // x0
  int64_t endedAt; // x24
  int64_t v25; // x21
  System_String_o *RestTime; // x21
  System_String_o *v27; // x0
  UnityEngine_GameObject_o *lockImgInfo; // x0

  if ( (byte_40F88E7 & 1) == 0 )
  {
    sub_B16FFC(&EventMissionItemListViewItemDraw_TypeInfo, item);
    sub_B16FFC(&LocalizationManager_TypeInfo, v7);
    sub_B16FFC(&NetworkManager_TypeInfo, v8);
    sub_B16FFC(&StringLiteral_13355/*"TIME_REST_TIMEOVER"*/, v9);
    byte_40F88E7 = 1;
  }
  if ( item )
  {
    EventMissionEntity = MissionListViewItem__get_EventMissionEntity((MissionListViewItem_o *)item, 0LL);
    if ( mode )
    {
      if ( EventMissionEntity )
      {
        resTimeLb = (UnityEngine_Component_o *)this->fields.resTimeLb;
        if ( !resTimeLb )
          goto LABEL_38;
        gameObject = UnityEngine_Component__get_gameObject(resTimeLb, 0LL);
        if ( !gameObject )
          goto LABEL_38;
        if ( UnityEngine_GameObject__get_activeSelf(gameObject, 0LL) )
        {
          v13 = MissionListViewItem__get_EventMissionEntity((MissionListViewItem_o *)item, 0LL);
          if ( !this->fields.resTimeLb )
            goto LABEL_38;
          v14 = v13;
          v15 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.resTimeLb, 0LL);
          if ( !v15 )
            goto LABEL_38;
          if ( UnityEngine_GameObject__get_activeSelf(v15, 0LL) )
          {
            if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !NetworkManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            }
            Time = NetworkManager__getTime(0LL);
            oldTime = this->fields.oldTime;
            v19 = Time;
            v20 = EventMissionItemListViewItemDraw_TypeInfo;
            if ( (BYTE3(EventMissionItemListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !EventMissionItemListViewItemDraw_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(EventMissionItemListViewItemDraw_TypeInfo);
              v20 = EventMissionItemListViewItemDraw_TypeInfo;
            }
            if ( v19 - oldTime >= v20->static_fields->TIME_UPDATE_ITVL_SEC )
            {
              if ( !v14 )
                goto LABEL_38;
              v21 = this->fields.resTimeLb;
              if ( this->fields.isAchiveTime )
              {
                closedAt = v14->fields.closedAt;
                if ( (BYTE3(v20->vtable._0_Equals.methodPtr) & 4) != 0 && !v20->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(v20);
                AchiveTimeText = EventMissionItemListViewItemDraw__GetAchiveTimeText(closedAt, v17);
              }
              else
              {
                endedAt = v14->fields.endedAt;
                if ( (BYTE3(v20->vtable._0_Equals.methodPtr) & 4) != 0 && !v20->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(v20);
                AchiveTimeText = EventMissionItemListViewItemDraw__GetRestTimeText(endedAt, v17);
              }
              if ( !v21 )
                goto LABEL_38;
              UILabel__set_text(v21, AchiveTimeText, 0LL);
              this->fields.oldTime = v19;
              v25 = v14->fields.endedAt;
              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              RestTime = LocalizationManager__GetRestTime(v25, 0LL);
              v27 = LocalizationManager__Get((System_String_o *)StringLiteral_13355/*"TIME_REST_TIMEOVER"*/, 0LL);
              if ( !RestTime )
                goto LABEL_38;
              if ( System_String__Equals_43731072(RestTime, v27, 0LL) )
              {
                ((void (__fastcall *)(EventMissionItemListViewItemDraw_o *, EventMissionItemListViewItem_o *, Il2CppMethodPointer))this->klass->vtable._5_InitDispResTime.method)(
                  this,
                  item,
                  this->klass->vtable._6_SetLockMissionBoard.methodPtr);
                ((void (__fastcall *)(EventMissionItemListViewItem_o *, Il2CppMethodPointer))item->klass->vtable._6_CheckMissionCond.method)(
                  item,
                  item->klass->vtable._7_SetGiftData.methodPtr);
                lockImgInfo = this->fields.lockImgInfo;
                if ( lockImgInfo )
                {
                  UnityEngine_GameObject__SetActive(lockImgInfo, 0, 0LL);
                  ((void (__fastcall *)(EventMissionItemListViewItemDraw_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._8_SetRewardStatusImg.method)(
                    this,
                    (unsigned int)item->fields.progStatus,
                    this->klass->vtable._9_UpdateDispResTime.methodPtr);
                  MissionListViewItemDraw__CheckLockMissionBoard(
                    (MissionListViewItemDraw_o *)this,
                    (MissionListViewItem_o *)item,
                    0LL);
                  return;
                }
LABEL_38:
                sub_B170D4();
              }
            }
          }
        }
      }
    }
  }
}


void __fastcall EventMissionItemListViewItemDraw__UpdateNewIcon(
        EventMissionItemListViewItemDraw_o *this,
        EventMissionItemListViewItem_o *item,
        const MethodInfo *method)
{
  UnityEngine_Object_o *newIcon; // x21
  ShiningIconComponent_o *v6; // x0
  ShiningIconComponent_o *v7; // x0

  if ( (byte_40F88E9 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, item);
    byte_40F88E9 = 1;
  }
  newIcon = (UnityEngine_Object_o *)this->fields.newIcon;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(newIcon, 0LL, 0LL) )
  {
    if ( !item )
      goto LABEL_15;
    if ( item->fields.isNew && this->fields.isDispTime )
    {
      v6 = this->fields.newIcon;
      if ( v6 )
      {
        ShiningIconComponent__Set(v6, 0LL);
        return;
      }
LABEL_15:
      sub_B170D4();
    }
    v7 = this->fields.newIcon;
    if ( !v7 )
      goto LABEL_15;
    ShiningIconComponent__Clear(v7, 0LL);
  }
}