void EventMissionItemListViewItemDraw___cctor(const MethodInfo *method)
{
  if ( (byte_596A70A & 1) == 0 )
  {
    sub_2213A60(&EventMissionItemListViewItemDraw_TypeInfo);
    byte_596A70A = 1;
  }
  EventMissionItemListViewItemDraw_TypeInfo->static_fields->TIME_UPDATE_ITVL_SEC = 60;
}


void EventMissionItemListViewItemDraw___ctor(EventMissionItemListViewItemDraw_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_596A709 & 1) == 0 )
  {
    sub_2213A60(&MissionListViewItemDraw_TypeInfo);
    byte_596A709 = 1;
  }
  if ( !*(&MissionListViewItemDraw_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(MissionListViewItemDraw_TypeInfo, method, v2);
  MissionListViewItemDraw___ctor((MissionListViewItemDraw_o *)this, 0);
}


void EventMissionItemListViewItemDraw__Awake(EventMissionItemListViewItemDraw_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  UnityEngine_Object_o *stampSprite; // x20
  _BOOL8 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  struct UISprite_o *v14; // x8
  struct UIAtlas_o *mAtlas; // x1
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  struct UISprite_o *v22; // x8
  struct System_String_o *mSpriteName; // x1
  UnityEngine_Object_o *boardMaskSprite; // x20
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  struct UISprite_o *v31; // x8
  struct UIAtlas_o *v32; // x1
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  struct UISprite_o *v39; // x8
  struct System_String_o *v40; // x1

  if ( (byte_596A6FE & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596A6FE = 1;
  }
  MissionListViewItemDraw__Awake((MissionListViewItemDraw_o *)this, 0);
  stampSprite = (UnityEngine_Object_o *)this->fields.stampSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3, v4);
  v6 = UnityEngine_Object__op_Inequality(stampSprite, 0, 0);
  if ( v6 )
  {
    v14 = this->fields.stampSprite;
    if ( !v14 )
      goto LABEL_16;
    mAtlas = v14->fields.mAtlas;
    this->fields.baseStampSpriteAtlas = mAtlas;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.baseStampSpriteAtlas,
      (int32_t)mAtlas,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
    v22 = this->fields.stampSprite;
    if ( !v22 )
      goto LABEL_16;
    mSpriteName = v22->fields.mSpriteName;
    this->fields.baseStampSpriteName = mSpriteName;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.baseStampSpriteName,
      (int32_t)mSpriteName,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
  boardMaskSprite = (UnityEngine_Object_o *)this->fields.boardMaskSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
  v6 = UnityEngine_Object__op_Inequality(boardMaskSprite, 0, 0);
  if ( v6 )
  {
    v31 = this->fields.boardMaskSprite;
    if ( v31 )
    {
      v32 = v31->fields.mAtlas;
      this->fields.baseBoardMaskSpriteAtlas = v32;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.baseBoardMaskSpriteAtlas,
        (int32_t)v32,
        v25,
        v26,
        v27,
        v28,
        v29,
        v30);
      v39 = this->fields.boardMaskSprite;
      if ( v39 )
      {
        v40 = v39->fields.mSpriteName;
        this->fields.baseBoardMaskSpriteName = v40;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&this->fields.baseBoardMaskSpriteName,
          (int32_t)v40,
          v33,
          v34,
          v35,
          v36,
          v37,
          v38);
        return;
      }
    }
LABEL_16:
    sub_2213CDC(v6, v7);
  }
}


void EventMissionItemListViewItemDraw__ChangeNextRewardIcon(
        EventMissionItemListViewItemDraw_o *this,
        EventMissionItemListViewManager_o *manager,
        const MethodInfo *method)
{
  struct GiftEntity_array *giftEntityList; // x20
  EventMissionItemListViewItemDraw_o *v4; // x19
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
  this = (EventMissionItemListViewItemDraw_o *)MissionListViewManager__GetAlphaAnimCnt(
                                                 (MissionListViewManager_o *)manager,
                                                 giftEntityList->max_length,
                                                 0);
  if ( (unsigned int)this >= LODWORD(giftEntityList->max_length) )
    sub_2213CE4(this);
  v5 = giftEntityList->m_Items[(int)this];
  if ( !v5 )
    goto LABEL_18;
  manager = (EventMissionItemListViewManager_o *)(unsigned int)v5->fields.prioredIconId;
  this = (EventMissionItemListViewItemDraw_o *)v4->fields.itemIcon;
  if ( (int)manager >= 1 )
  {
    if ( this )
    {
      num = (unsigned int)v5->fields.num;
      if ( (int)num <= 1 )
        v7 = -1;
      else
        v7 = num;
      ItemIconComponent__SetItemImage_47887472((ItemIconComponent_o *)this, (int32_t)manager, v7, 0);
      return;
    }
LABEL_18:
    sub_2213CDC(this, manager);
  }
  if ( !this )
    goto LABEL_18;
  if ( v5->fields.num <= 1 )
    v8 = -1;
  else
    v8 = v5->fields.num;
  ItemIconComponent__SetGiftDesignSize((ItemIconComponent_o *)this, v5->fields.type, v5->fields.objectId, v8, 0);
}


System_String_o *EventMissionItemListViewItemDraw__GetAchiveTimeText(int64_t closeTime, const MethodInfo *method)
{
  __int64 v2; // x2
  System_String_o *v4; // x20
  System_String_o *RestTime; // x2

  if ( (byte_596A704 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_113/*" "*/);
    sub_2213A60(&StringLiteral_13971/*"TIME_REST_ACHIVE"*/);
    byte_596A704 = 1;
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method, v2);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_13971/*"TIME_REST_ACHIVE"*/, 0);
  RestTime = LocalizationManager__GetRestTime(closeTime, 0);
  return System_String__Concat_75694928(v4, (System_String_o *)StringLiteral_113/*" "*/, RestTime, 0);
}


System_String_o *EventMissionItemListViewItemDraw__GetRestTimeText(int64_t endTime, const MethodInfo *method)
{
  __int64 v2; // x2
  System_String_o *v4; // x20
  System_String_o *RestTime; // x1

  if ( (byte_596A703 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_13983/*"TIME_REST_QUEST"*/);
    byte_596A703 = 1;
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method, v2);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_13983/*"TIME_REST_QUEST"*/, 0);
  RestTime = LocalizationManager__GetRestTime(endTime, 0);
  return System_String__Concat_75651716(v4, RestTime, 0);
}


void EventMissionItemListViewItemDraw__InitDispResTime(
        EventMissionItemListViewItemDraw_o *this,
        MissionListViewItem_o *missionListviewItem,
        const MethodInfo *method)
{
  int64_t Time; // x0
  MethodInfo *AchiveTimeText; // x1
  int64_t v7; // x21
  bool *p_isDispTime; // x22
  int64_t v9; // x8
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
  UILabel_o *timeOverLb; // x20

  if ( (byte_596A700 & 1) == 0 )
  {
    sub_2213A60(&EventMissionItemListViewItemDraw_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&StringLiteral_9073/*"MISSION_PERIOD_END"*/);
    byte_596A700 = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, missionListviewItem, method);
  Time = NetworkManager__getTime(0);
  this->fields.isAchiveTime = 0;
  if ( !missionListviewItem )
    goto LABEL_44;
  v7 = Time;
  Time = (int64_t)MissionListViewItem__get_EventMissionEntity(missionListviewItem, 0);
  if ( !Time )
    goto LABEL_44;
  if ( v7 >= *(_QWORD *)(Time + 56) )
  {
    Time = (int64_t)MissionListViewItem__get_EventMissionEntity(missionListviewItem, 0);
    if ( !Time )
      goto LABEL_44;
    v9 = *(_QWORD *)(Time + 64);
    this->fields.isDispTime = v7 < v9;
    p_isDispTime = &this->fields.isDispTime;
    if ( v7 < v9 )
    {
      Time = (int64_t)MissionListViewItem__get_EventMissionEntity(missionListviewItem, 0);
      if ( !Time )
        goto LABEL_44;
      v11 = *(_QWORD *)(Time + 64);
      if ( !*(&EventMissionItemListViewItemDraw_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(EventMissionItemListViewItemDraw_TypeInfo, AchiveTimeText, v10);
      RestTimeText = EventMissionItemListViewItemDraw__GetRestTimeText(v11, AchiveTimeText);
      if ( missionListviewItem->fields.progStatus == 3 )
      {
        Time = (int64_t)MissionListViewItem__get_EventMissionEntity(missionListviewItem, 0);
        if ( !Time )
          goto LABEL_44;
        v14 = *(_QWORD *)(Time + 72);
        if ( !*(&EventMissionItemListViewItemDraw_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(EventMissionItemListViewItemDraw_TypeInfo, AchiveTimeText, v13);
        AchiveTimeText = (MethodInfo *)EventMissionItemListViewItemDraw__GetAchiveTimeText(v14, AchiveTimeText);
        this->fields.isAchiveTime = 1;
      }
      else
      {
        AchiveTimeText = (MethodInfo *)RestTimeText;
      }
      Time = (int64_t)this->fields.resTimeLb;
      if ( !Time )
LABEL_44:
        sub_2213CDC(Time, AchiveTimeText);
      goto LABEL_28;
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
    goto LABEL_29;
  }
  this->fields.isAchiveTime = 1;
  Time = (int64_t)MissionListViewItem__get_EventMissionEntity(missionListviewItem, 0);
  if ( !Time )
    goto LABEL_44;
  v16 = *(_QWORD *)(Time + 72);
  if ( !*(&EventMissionItemListViewItemDraw_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(EventMissionItemListViewItemDraw_TypeInfo, AchiveTimeText, v15);
  Time = (int64_t)EventMissionItemListViewItemDraw__GetAchiveTimeText(v16, AchiveTimeText);
  if ( !this->fields.resTimeLb )
    goto LABEL_44;
  AchiveTimeText = (MethodInfo *)Time;
  Time = (int64_t)this->fields.resTimeLb;
LABEL_28:
  UILabel__set_text((UILabel_o *)Time, (System_String_o *)AchiveTimeText, 0);
  v17 = 0;
  this->fields.oldTime = 0;
LABEL_29:
  if ( missionListviewItem->fields.progStatus == 4 )
  {
    this->fields.isDispTime = 0;
    this->fields.isAchiveTime = 0;
  }
  Time = (int64_t)this->fields.timeOverInfo;
  if ( v17 )
  {
    if ( !Time )
      goto LABEL_44;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0);
    timeOverLb = this->fields.timeOverLb;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v18, v19);
    Time = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_9073/*"MISSION_PERIOD_END"*/, 0);
    if ( !timeOverLb )
      goto LABEL_44;
    UILabel__set_text(timeOverLb, (System_String_o *)Time, 0);
  }
  else
  {
    if ( !Time )
      goto LABEL_44;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0);
  }
  Time = (int64_t)this->fields.resTimeLb;
  if ( !Time )
    goto LABEL_44;
  Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
  if ( !*p_isDispTime )
  {
    AchiveTimeText = (MethodInfo *)this->fields.isAchiveTime;
    if ( Time )
      goto LABEL_42;
    goto LABEL_44;
  }
  AchiveTimeText = (MethodInfo *)(&dword_0 + 1);
  if ( !Time )
    goto LABEL_44;
LABEL_42:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, (bool)AchiveTimeText, 0);
}


bool EventMissionItemListViewItemDraw__IsUseDefaultLockBoard(
        EventMissionItemListViewItemDraw_o *this,
        const MethodInfo *method)
{
  return 0;
}


// local variable allocation has failed, the output may be wrong!
void EventMissionItemListViewItemDraw__ModifyBoardImage(
        EventMissionItemListViewItemDraw_o *this,
        int32_t bannerGroupId,
        const MethodInfo *method)
{
  UnityEngine_Object_o *baseSprite; // x21
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Object_o *stampSprite; // x21
  __int64 v9; // x1
  __int64 v10; // x2
  UnityEngine_Object_o *boardMaskSprite; // x21
  __int64 v12; // x1
  __int64 v13; // x2
  UIAtlas_o *baseAtlas; // x22
  System_String_o *baseSpriteName; // x23
  UISprite_o *v16; // x21

  if ( (byte_596A708 & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596A708 = 1;
  }
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&bannerGroupId, method);
  if ( !UnityEngine_Object__op_Equality(baseSprite, 0, 0) )
  {
    stampSprite = (UnityEngine_Object_o *)this->fields.stampSprite;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
    if ( !UnityEngine_Object__op_Equality(stampSprite, 0, 0) )
    {
      boardMaskSprite = (UnityEngine_Object_o *)this->fields.boardMaskSprite;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9, v10);
      if ( !UnityEngine_Object__op_Equality(boardMaskSprite, 0, 0) )
      {
        baseAtlas = this->fields.baseAtlas;
        baseSpriteName = this->fields.baseSpriteName;
        v16 = this->fields.baseSprite;
        if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v12, v13);
        AtlasManager__SetMissionBoardSprite(v16, baseAtlas, baseSpriteName, bannerGroupId, 0);
        AtlasManager__SetMissionBoardStampSprite(
          this->fields.stampSprite,
          this->fields.baseStampSpriteAtlas,
          this->fields.baseStampSpriteName,
          bannerGroupId,
          0);
        AtlasManager__SetMissionBoardMaskSprite(
          this->fields.boardMaskSprite,
          this->fields.baseBoardMaskSpriteAtlas,
          this->fields.baseBoardMaskSpriteName,
          bannerGroupId,
          0);
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void EventMissionItemListViewItemDraw__OnChangeAlphaAnim(
        EventMissionItemListViewItemDraw_o *this,
        EventMissionItemListViewItem_o *item,
        int32_t mode,
        EventMissionItemListViewManager_o *manager,
        const MethodInfo *method)
{
  EventMissionItemListViewItemDraw__ChangeNextRewardIcon(this, manager, *(const MethodInfo **)&mode);
}


void EventMissionItemListViewItemDraw__SetInput(
        EventMissionItemListViewItemDraw_o *this,
        MissionListViewItem_o *missionListViewItem,
        const MethodInfo *method)
{
  __int64 naturalAligment; // x10
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Object_o *baseButton; // x21
  const MethodInfo *v9; // x2

  if ( (byte_596A706 & 1) == 0 )
  {
    sub_2213A60(&EventMissionItemListViewItem_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596A706 = 1;
  }
  if ( missionListViewItem
    && (naturalAligment = EventMissionItemListViewItem_TypeInfo->_2.naturalAligment,
        missionListViewItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment)
    && (EventMissionItemListViewItem_c *)missionListViewItem->klass->_2.typeHierarchy[naturalAligment - 1] == EventMissionItemListViewItem_TypeInfo )
  {
    MissionListViewItemDraw__SetInput((MissionListViewItemDraw_o *)this, missionListViewItem, 0);
    baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
    if ( UnityEngine_Object__op_Inequality(baseButton, 0, 0) )
      EventMissionItemListViewItemDraw__UpdateNewIcon(this, (EventMissionItemListViewItem_o *)missionListViewItem, v9);
  }
  else
  {
    MissionListViewItemDraw__SetInput((MissionListViewItemDraw_o *)this, 0, 0);
  }
}


bool EventMissionItemListViewItemDraw__SetItem(
        EventMissionItemListViewItemDraw_o *this,
        MissionListViewItem_o *missionListViewItem,
        int32_t mode,
        ListViewManager_o *listViewManager,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 naturalAligment; // x10
  __int64 v12; // x10
  __int64 v13; // x1
  __int64 v14; // x2
  UnityEngine_Component_o *iconLabel; // x0
  const MethodInfo *v17; // x3
  const MethodInfo *v18; // x2
  UISprite_o *rewardBackSprite; // x21
  __int64 v20; // x1
  __int64 v21; // x2
  int32_t Type; // w24
  int32_t rewardObjectId; // w22
  int32_t klass; // w23
  UnityEngine_Object_o *stampSprite; // x21
  __int64 v26; // x1
  __int64 v27; // x2
  UIAtlas_o *baseStampSpriteAtlas; // x22
  System_String_o *baseStampSpriteName; // x23
  UISprite_o *v30; // x21
  int32_t bannerGroupId; // w24
  UnityEngine_Object_o *boardMaskSprite; // x21
  __int64 v33; // x1
  __int64 v34; // x2
  UISprite_o *v35; // x21
  int32_t v36; // w20
  System_String_o *baseBoardMaskSpriteName; // x19
  UIAtlas_o *baseBoardMaskSpriteAtlas; // x22

  if ( (byte_596A6FF & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&EventMissionItemListViewItem_TypeInfo);
    sub_2213A60(&EventMissionItemListViewManager_TypeInfo);
    sub_2213A60(&EventRewardRootComponent_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596A6FF = 1;
  }
  if ( !MissionListViewItemDraw__SetItem(
          (MissionListViewItemDraw_o *)this,
          missionListViewItem,
          mode,
          listViewManager,
          0) )
    return 0;
  if ( missionListViewItem )
  {
    naturalAligment = EventMissionItemListViewItem_TypeInfo->_2.naturalAligment;
    if ( missionListViewItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
    {
      if ( (EventMissionItemListViewItem_c *)missionListViewItem->klass->_2.typeHierarchy[naturalAligment - 1] != EventMissionItemListViewItem_TypeInfo )
        missionListViewItem = 0;
      if ( !listViewManager )
        goto LABEL_14;
      goto LABEL_12;
    }
    missionListViewItem = 0;
  }
  if ( !listViewManager )
    goto LABEL_14;
LABEL_12:
  v12 = EventMissionItemListViewManager_TypeInfo->_2.naturalAligment;
  if ( listViewManager->klass->_2.naturalAligment >= (unsigned int)v12 )
  {
    if ( (EventMissionItemListViewManager_c *)listViewManager->klass->_2.typeHierarchy[v12 - 1] != EventMissionItemListViewManager_TypeInfo )
      listViewManager = 0;
    if ( !missionListViewItem )
      return 0;
    goto LABEL_19;
  }
  listViewManager = 0;
LABEL_14:
  if ( !missionListViewItem )
    return 0;
LABEL_19:
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9, v10);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)listViewManager, 0, 0) )
    return 0;
  if ( mode )
  {
    iconLabel = (UnityEngine_Component_o *)this->fields.iconLabel;
    if ( BYTE1(missionListViewItem[1].monitor) )
    {
      if ( iconLabel )
      {
        iconLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(iconLabel, 0);
        if ( iconLabel )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)iconLabel, 0, 0);
LABEL_32:
          EventMissionItemListViewItemDraw__SetRewardItemIcon(
            this,
            (EventMissionItemListViewItem_o *)missionListViewItem,
            (EventMissionItemListViewManager_o *)listViewManager,
            v17);
          EventMissionItemListViewItemDraw__UpdateNewIcon(
            this,
            (EventMissionItemListViewItem_o *)missionListViewItem,
            v18);
          rewardBackSprite = this->fields.rewardBackSprite;
          Type = MissionListViewItem__get_Type(missionListViewItem, 0);
          rewardObjectId = missionListViewItem->fields.rewardObjectId;
          klass = (int32_t)missionListViewItem[1].klass;
          if ( !*(&EventRewardRootComponent_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo, v20, v21);
          EventRewardRootComponent__SetRewardRaritySprite(rewardBackSprite, Type, rewardObjectId, klass, 0);
          goto LABEL_35;
        }
      }
    }
    else if ( iconLabel )
    {
      iconLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(iconLabel, 0);
      if ( iconLabel )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)iconLabel, 1, 0);
        iconLabel = (UnityEngine_Component_o *)this->fields.iconLabel;
        if ( iconLabel )
        {
          UIIconLabel__Set_48071660(
            (UIIconLabel_o *)iconLabel,
            57,
            missionListViewItem->fields.dispNo,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0);
          goto LABEL_32;
        }
      }
    }
    sub_2213CDC(iconLabel, v13);
  }
LABEL_35:
  stampSprite = (UnityEngine_Object_o *)this->fields.stampSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13, v14);
  if ( UnityEngine_Object__op_Inequality(stampSprite, 0, 0) )
  {
    baseStampSpriteAtlas = this->fields.baseStampSpriteAtlas;
    baseStampSpriteName = this->fields.baseStampSpriteName;
    v30 = this->fields.stampSprite;
    bannerGroupId = missionListViewItem->fields.bannerGroupId;
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v26, v27);
    AtlasManager__SetMissionBoardStampSprite(v30, baseStampSpriteAtlas, baseStampSpriteName, bannerGroupId, 0);
  }
  boardMaskSprite = (UnityEngine_Object_o *)this->fields.boardMaskSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v26, v27);
  if ( UnityEngine_Object__op_Inequality(boardMaskSprite, 0, 0) )
  {
    v35 = this->fields.boardMaskSprite;
    v36 = missionListViewItem->fields.bannerGroupId;
    baseBoardMaskSpriteAtlas = this->fields.baseBoardMaskSpriteAtlas;
    baseBoardMaskSpriteName = this->fields.baseBoardMaskSpriteName;
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v33, v34);
    AtlasManager__SetMissionBoardMaskSprite(v35, baseBoardMaskSpriteAtlas, baseBoardMaskSpriteName, v36, 0);
  }
  return 1;
}


void EventMissionItemListViewItemDraw__SetLockMissionBoard(
        EventMissionItemListViewItemDraw_o *this,
        MissionListViewItem_o *missionListViewItem,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *lockImgInfo; // x0

  lockImgInfo = this->fields.lockImgInfo;
  if ( !lockImgInfo )
    sub_2213CDC(0, missionListViewItem);
  UnityEngine_GameObject__SetActive(lockImgInfo, 1, 0);
}


void EventMissionItemListViewItemDraw__SetRewardItemIcon(
        EventMissionItemListViewItemDraw_o *this,
        EventMissionItemListViewItem_o *item,
        EventMissionItemListViewManager_o *manager,
        const MethodInfo *method)
{
  EventMissionItemListViewItem_o *v5; // x19
  EventMissionItemListViewItemDraw_o *v6; // x20
  const MethodInfo *v7; // x1
  int32_t completedImg_high; // w1
  __int64 v9; // x2
  int32_t missionNoLb_high; // w22
  GiftEntity_array *IconGiftEntities; // x0
  struct GiftEntity_array **p_giftEntityList; // x22
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  __int64 v19; // x2
  il2cpp_array_size_t max_length; // x8
  DataManager_c *v21; // x0
  Il2CppObject *Master_object; // x23
  int32_t m_CachedPtr; // w24
  System_String_o *v24; // x23
  __int64 v25; // x2
  __int64 v26; // x2
  EventMissionItemListViewItemDraw_o *itemIcon; // x21
  const MethodInfo *v28; // x1
  int32_t iconId; // w1
  struct GiftEntity_array *v30; // x22
  GiftEntity_o *v31; // x8
  int64_t v32; // x8
  int64_t v33; // x2
  struct GiftEntity_array *v34; // x21
  GiftEntity_o *v35; // x8
  int64_t v36; // x8
  int64_t v37; // x2
  GiftEntity_o *IconGiftEntity; // x0
  int32_t objectId; // w2
  int32_t num; // w3
  int32_t v41; // w3

  v5 = item;
  v6 = this;
  if ( (byte_596A701 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_EventMissionAddMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&MissionInfoMaker_TypeInfo);
    this = (EventMissionItemListViewItemDraw_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596A701 = 1;
  }
  if ( !v5 )
    goto LABEL_78;
  if ( MissionListViewItem__get_EventRewardType((MissionListViewItem_o *)v5, 0) != 1 )
    goto LABEL_33;
  if ( EventMissionItemListViewItem__get_IsHideReward(v5, v7) )
  {
    this = (EventMissionItemListViewItemDraw_o *)v6->fields.itemIcon;
    v6->fields.isMultipleReward = 0;
    if ( !this )
      goto LABEL_78;
    completedImg_high = 99;
LABEL_8:
    ItemIconComponent__SetItemImage((ItemIconComponent_o *)this, completedImg_high, 0);
    goto LABEL_33;
  }
  this = (EventMissionItemListViewItemDraw_o *)MissionListViewItem__get_EventMissionEntity(
                                                 (MissionListViewItem_o *)v5,
                                                 0);
  if ( !this )
    goto LABEL_78;
  missionNoLb_high = HIDWORD(this->fields.missionNoLb);
  if ( !*(&MissionInfoMaker_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo, item, v9);
  IconGiftEntities = MissionInfoMaker__GetIconGiftEntities(missionNoLb_high, 0);
  v6->fields.giftEntityList = IconGiftEntities;
  p_giftEntityList = &v6->fields.giftEntityList;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v6->fields.giftEntityList,
    (int32_t)IconGiftEntities,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  if ( !v6->fields.giftEntityList )
    goto LABEL_78;
  max_length = v6->fields.giftEntityList->max_length;
  if ( !max_length )
    return;
  v21 = DataManager_TypeInfo;
  v6->fields.isMultipleReward = (int)max_length > 1;
  if ( !*(&v21->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v21, item, v19);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventMissionAddMaster___);
  this = (EventMissionItemListViewItemDraw_o *)MissionListViewItem__get_EventMissionEntity(
                                                 (MissionListViewItem_o *)v5,
                                                 0);
  if ( !this )
    goto LABEL_78;
  m_CachedPtr = this->fields.m_CachedPtr;
  this = (EventMissionItemListViewItemDraw_o *)MissionListViewItem__get_EventMissionEntity(
                                                 (MissionListViewItem_o *)v5,
                                                 0);
  if ( !this || !Master_object )
    goto LABEL_78;
  v24 = EventMissionAddMaster__GetEventMissionChangeRewardIcon(
          (EventMissionAddMaster_o *)Master_object,
          m_CachedPtr,
          HIDWORD(this->fields.m_CancellationTokenSource),
          0,
          0);
  if ( !System_String__IsNullOrEmpty(v24, 0) )
    goto LABEL_22;
  this = (EventMissionItemListViewItemDraw_o *)MissionListViewItem__get_EventMissionEntity(
                                                 (MissionListViewItem_o *)v5,
                                                 0);
  if ( !this )
    goto LABEL_78;
  if ( SHIDWORD(this->fields.completedImg) >= 1 )
  {
LABEL_22:
    v6->fields.isMultipleReward = 0;
    v5->fields.isHideRewardDetail = 1;
LABEL_23:
    if ( !System_String__IsNullOrEmpty(v24, 0) )
    {
      this = (EventMissionItemListViewItemDraw_o *)v6->fields.itemIcon;
      if ( !this )
        goto LABEL_78;
      ItemIconComponent__SetItemImageByName((ItemIconComponent_o *)this, v24, 0);
LABEL_31:
      this = (EventMissionItemListViewItemDraw_o *)v6->fields.itemIcon;
      if ( !this )
        goto LABEL_78;
      ItemIconComponent__SetAlpha((ItemIconComponent_o *)this, 1.0, 0);
      goto LABEL_33;
    }
    this = (EventMissionItemListViewItemDraw_o *)MissionListViewItem__get_EventMissionEntity(
                                                   (MissionListViewItem_o *)v5,
                                                   0);
    if ( !this )
      goto LABEL_78;
    if ( SHIDWORD(this->fields.completedImg) >= 1 )
    {
      itemIcon = (EventMissionItemListViewItemDraw_o *)v6->fields.itemIcon;
      this = (EventMissionItemListViewItemDraw_o *)MissionListViewItem__get_EventMissionEntity(
                                                     (MissionListViewItem_o *)v5,
                                                     0);
      if ( !this || !itemIcon )
        goto LABEL_78;
      completedImg_high = HIDWORD(this->fields.completedImg);
      this = itemIcon;
      goto LABEL_8;
    }
    v34 = *p_giftEntityList;
    if ( !*p_giftEntityList )
      goto LABEL_78;
    if ( LODWORD(v34->max_length) )
    {
      v35 = v34->m_Items[0];
      if ( !v35 )
        goto LABEL_78;
      item = (EventMissionItemListViewItem_o *)(unsigned int)v35->fields.prioredIconId;
      if ( (int)item < 1 )
      {
        if ( !*(&MissionInfoMaker_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo, item, v26);
        IconGiftEntity = MissionInfoMaker__GetIconGiftEntity(v34, 0);
        if ( IconGiftEntity )
        {
          objectId = IconGiftEntity->fields.objectId;
          item = (EventMissionItemListViewItem_o *)(unsigned int)IconGiftEntity->fields.type;
          if ( IconGiftEntity->fields.num <= 1 )
            num = -1;
          else
            num = IconGiftEntity->fields.num;
        }
        else
        {
          objectId = 0;
          item = 0;
          num = -1;
        }
        this = (EventMissionItemListViewItemDraw_o *)v6->fields.itemIcon;
        if ( !this )
          goto LABEL_78;
        ItemIconComponent__SetGiftDesignSize((ItemIconComponent_o *)this, (int32_t)item, objectId, num, 0);
      }
      else
      {
        this = (EventMissionItemListViewItemDraw_o *)v6->fields.itemIcon;
        if ( !this )
          goto LABEL_78;
        v36 = (unsigned int)v35->fields.num;
        if ( (int)v36 <= 1 )
          v37 = -1;
        else
          v37 = v36;
        ItemIconComponent__SetItemImage_47887472((ItemIconComponent_o *)this, (int32_t)item, v37, 0);
      }
      goto LABEL_31;
    }
LABEL_79:
    sub_2213CE4(this);
  }
  if ( !v6->fields.isMultipleReward )
    goto LABEL_23;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, v25);
  this = (EventMissionItemListViewItemDraw_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)manager, 0, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_33;
  v30 = *p_giftEntityList;
  if ( !v30 || !manager )
    goto LABEL_78;
  this = (EventMissionItemListViewItemDraw_o *)MissionListViewManager__GetAlphaAnimCnt(
                                                 (MissionListViewManager_o *)manager,
                                                 v30->max_length,
                                                 0);
  if ( (unsigned int)this >= LODWORD(v30->max_length) )
    goto LABEL_79;
  v31 = v30->m_Items[(int)this];
  if ( !v31 )
    goto LABEL_78;
  item = (EventMissionItemListViewItem_o *)(unsigned int)v31->fields.prioredIconId;
  this = (EventMissionItemListViewItemDraw_o *)v6->fields.itemIcon;
  if ( (int)item < 1 )
  {
    if ( !this )
      goto LABEL_78;
    if ( v31->fields.num <= 1 )
      v41 = -1;
    else
      v41 = v31->fields.num;
    ItemIconComponent__SetGiftDesignSize((ItemIconComponent_o *)this, v31->fields.type, v31->fields.objectId, v41, 0);
  }
  else
  {
    if ( !this )
      goto LABEL_78;
    v32 = (unsigned int)v31->fields.num;
    if ( (int)v32 <= 1 )
      v33 = -1;
    else
      v33 = v32;
    ItemIconComponent__SetItemImage_47887472((ItemIconComponent_o *)this, (int32_t)item, v33, 0);
  }
LABEL_33:
  if ( MissionListViewItem__get_EventRewardType((MissionListViewItem_o *)v5, 0) == 3 )
  {
    if ( EventMissionItemListViewItem__get_IsHideReward(v5, v28) )
    {
      this = (EventMissionItemListViewItemDraw_o *)v6->fields.itemIcon;
      v6->fields.isMultipleReward = 0;
      if ( this )
      {
        iconId = 99;
LABEL_40:
        ItemIconComponent__SetItemImage((ItemIconComponent_o *)this, iconId, 0);
        return;
      }
    }
    else
    {
      this = (EventMissionItemListViewItemDraw_o *)v6->fields.itemIcon;
      if ( this )
      {
        iconId = v5->fields.iconId;
        goto LABEL_40;
      }
    }
LABEL_78:
    sub_2213CDC(this, item);
  }
}


void EventMissionItemListViewItemDraw__SetRewardStatusImg(
        EventMissionItemListViewItemDraw_o *this,
        int32_t status,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_GameObject_o *lockImgInfo; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  UILabel_o *timeOverLb; // x19

  if ( (byte_596A702 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_9073/*"MISSION_PERIOD_END"*/);
    byte_596A702 = 1;
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
    lockImgInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9073/*"MISSION_PERIOD_END"*/, 0);
    if ( !timeOverLb )
LABEL_11:
      sub_2213CDC(lockImgInfo, v5);
    UILabel__set_text(timeOverLb, (System_String_o *)lockImgInfo, 0);
  }
}


void EventMissionItemListViewItemDraw__UpdateItem(
        EventMissionItemListViewItemDraw_o *this,
        EventMissionItemListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  EventMissionEntity_o *EventMissionEntity; // x0
  const MethodInfo *v8; // x1
  UnityEngine_Component_o *resTimeLb; // x0
  UnityEngine_Component_o *v10; // x21
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x2
  int64_t v14; // x22
  int64_t oldTime; // x23
  EventMissionItemListViewItemDraw_c *v16; // x8
  UILabel_o *v17; // x23
  int64_t klass; // x24
  int64_t m_CachedPtr; // x24
  __int64 v20; // x1
  __int64 v21; // x2
  int64_t v22; // x21
  System_String_o *RestTime; // x21

  if ( (byte_596A705 & 1) == 0 )
  {
    sub_2213A60(&EventMissionItemListViewItemDraw_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&StringLiteral_13995/*"TIME_REST_TIMEOVER"*/);
    byte_596A705 = 1;
  }
  if ( item )
  {
    EventMissionEntity = MissionListViewItem__get_EventMissionEntity((MissionListViewItem_o *)item, 0);
    if ( mode )
    {
      if ( EventMissionEntity )
      {
        resTimeLb = (UnityEngine_Component_o *)this->fields.resTimeLb;
        if ( !resTimeLb )
          goto LABEL_34;
        resTimeLb = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(resTimeLb, 0);
        if ( !resTimeLb )
          goto LABEL_34;
        if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)resTimeLb, 0) )
        {
          resTimeLb = (UnityEngine_Component_o *)MissionListViewItem__get_EventMissionEntity(
                                                   (MissionListViewItem_o *)item,
                                                   0);
          if ( !this->fields.resTimeLb )
            goto LABEL_34;
          v10 = resTimeLb;
          resTimeLb = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this->fields.resTimeLb,
                                                   0);
          if ( !resTimeLb )
            goto LABEL_34;
          if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)resTimeLb, 0) )
          {
            if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v11, v12);
            resTimeLb = (UnityEngine_Component_o *)NetworkManager__getTime(0);
            v14 = (int64_t)resTimeLb;
            oldTime = this->fields.oldTime;
            v16 = EventMissionItemListViewItemDraw_TypeInfo;
            if ( !*(&EventMissionItemListViewItemDraw_TypeInfo->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(EventMissionItemListViewItemDraw_TypeInfo, v8, v13);
              v16 = EventMissionItemListViewItemDraw_TypeInfo;
            }
            if ( v14 - oldTime >= v16->static_fields->TIME_UPDATE_ITVL_SEC )
            {
              v17 = this->fields.resTimeLb;
              if ( this->fields.isAchiveTime )
              {
                if ( !v10 )
                  goto LABEL_34;
                klass = (int64_t)v10[3].klass;
                if ( !*(&v16->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(v16, v8, v13);
                resTimeLb = (UnityEngine_Component_o *)EventMissionItemListViewItemDraw__GetAchiveTimeText(klass, v8);
              }
              else
              {
                if ( !v10 )
                  goto LABEL_34;
                m_CachedPtr = v10[2].fields.m_CachedPtr;
                if ( !*(&v16->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(v16, v8, v13);
                resTimeLb = (UnityEngine_Component_o *)EventMissionItemListViewItemDraw__GetRestTimeText(
                                                         m_CachedPtr,
                                                         v8);
              }
              v8 = (const MethodInfo *)resTimeLb;
              if ( !v17 )
                goto LABEL_34;
              UILabel__set_text(v17, (System_String_o *)resTimeLb, 0);
              v22 = v10[2].fields.m_CachedPtr;
              this->fields.oldTime = v14;
              if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v20, v21);
              RestTime = LocalizationManager__GetRestTime(v22, 0);
              resTimeLb = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13995/*"TIME_REST_TIMEOVER"*/, 0);
              if ( !RestTime )
LABEL_34:
                sub_2213CDC(resTimeLb, v8);
              if ( System_String__Equals_75686512(RestTime, (System_String_o *)resTimeLb, 0) )
              {
                ((void (__fastcall *)(EventMissionItemListViewItemDraw_o *, EventMissionItemListViewItem_o *, const MethodInfo *))this->klass->vtable._5_InitDispResTime.methodPtr)(
                  this,
                  item,
                  this->klass->vtable._5_InitDispResTime.method);
                ((void (__fastcall *)(EventMissionItemListViewItem_o *, const MethodInfo *))item->klass->vtable._6_CheckMissionCond.methodPtr)(
                  item,
                  item->klass->vtable._6_CheckMissionCond.method);
                resTimeLb = (UnityEngine_Component_o *)this->fields.lockImgInfo;
                if ( resTimeLb )
                {
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)resTimeLb, 0, 0);
                  ((void (__fastcall *)(EventMissionItemListViewItemDraw_o *, _QWORD, const MethodInfo *))this->klass->vtable._8_SetRewardStatusImg.methodPtr)(
                    this,
                    (unsigned int)item->fields.progStatus,
                    this->klass->vtable._8_SetRewardStatusImg.method);
                  MissionListViewItemDraw__CheckLockMissionBoard(
                    (MissionListViewItemDraw_o *)this,
                    (MissionListViewItem_o *)item,
                    0);
                  return;
                }
                goto LABEL_34;
              }
            }
          }
        }
      }
    }
  }
}


void EventMissionItemListViewItemDraw__UpdateNewIcon(
        EventMissionItemListViewItemDraw_o *this,
        EventMissionItemListViewItem_o *item,
        const MethodInfo *method)
{
  UnityEngine_Object_o *newIcon; // x21
  ShiningIconComponent_o *v6; // x0
  __int64 v7; // x1

  if ( (byte_596A707 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596A707 = 1;
  }
  newIcon = (UnityEngine_Object_o *)this->fields.newIcon;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, method);
  v6 = (ShiningIconComponent_o *)UnityEngine_Object__op_Inequality(newIcon, 0, 0);
  if ( ((unsigned __int8)v6 & 1) != 0 )
  {
    if ( !item )
      goto LABEL_14;
    if ( item->fields.isNew && this->fields.isDispTime )
    {
      v6 = this->fields.newIcon;
      if ( v6 )
      {
        ShiningIconComponent__Set(v6, 0);
        return;
      }
LABEL_14:
      sub_2213CDC(v6, v7);
    }
    v6 = this->fields.newIcon;
    if ( !v6 )
      goto LABEL_14;
    ShiningIconComponent__Clear(v6, 0);
  }
}