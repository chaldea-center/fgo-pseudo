void EventMissionItemListViewItemDraw___cctor(const MethodInfo *method)
{
  if ( (byte_4C3D3ED & 1) == 0 )
  {
    sub_1C37058(&EventMissionItemListViewItemDraw_TypeInfo);
    byte_4C3D3ED = 1;
  }
  EventMissionItemListViewItemDraw_TypeInfo->static_fields->TIME_UPDATE_ITVL_SEC = 60;
}


void EventMissionItemListViewItemDraw___ctor(EventMissionItemListViewItemDraw_o *this, const MethodInfo *method)
{
  if ( (byte_4C3D3EC & 1) == 0 )
  {
    sub_1C37058(&MissionListViewItemDraw_TypeInfo);
    byte_4C3D3EC = 1;
  }
  if ( !MissionListViewItemDraw_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MissionListViewItemDraw_TypeInfo);
  MissionListViewItemDraw___ctor((MissionListViewItemDraw_o *)this, 0);
}


void EventMissionItemListViewItemDraw__Awake(EventMissionItemListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *stampSprite; // x20
  __int64 v4; // x0
  struct UISprite_o *v5; // x8
  struct UIAtlas_o *mAtlas; // x1
  struct UISprite_o *v7; // x8
  struct System_String_o *mSpriteName; // x1
  UnityEngine_Object_o *boardMaskSprite; // x20
  struct UISprite_o *v10; // x8
  struct UIAtlas_o *v11; // x1
  struct UISprite_o *v12; // x8
  struct System_String_o *v13; // x1

  if ( (byte_4C3D3E1 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3D3E1 = 1;
  }
  MissionListViewItemDraw__Awake((MissionListViewItemDraw_o *)this, 0);
  stampSprite = (UnityEngine_Object_o *)this->fields.stampSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(stampSprite, 0, 0);
  if ( (v4 & 1) != 0 )
  {
    v5 = this->fields.stampSprite;
    if ( !v5 )
      goto LABEL_16;
    mAtlas = v5->fields.mAtlas;
    this->fields.baseStampSpriteAtlas = mAtlas;
    v4 = sub_1C36FFC(&this->fields.baseStampSpriteAtlas, mAtlas);
    v7 = this->fields.stampSprite;
    if ( !v7 )
      goto LABEL_16;
    mSpriteName = v7->fields.mSpriteName;
    this->fields.baseStampSpriteName = mSpriteName;
    sub_1C36FFC(&this->fields.baseStampSpriteName, mSpriteName);
  }
  boardMaskSprite = (UnityEngine_Object_o *)this->fields.boardMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(boardMaskSprite, 0, 0);
  if ( (v4 & 1) != 0 )
  {
    v10 = this->fields.boardMaskSprite;
    if ( v10 )
    {
      v11 = v10->fields.mAtlas;
      this->fields.baseBoardMaskSpriteAtlas = v11;
      v4 = sub_1C36FFC(&this->fields.baseBoardMaskSpriteAtlas, v11);
      v12 = this->fields.boardMaskSprite;
      if ( v12 )
      {
        v13 = v12->fields.mSpriteName;
        this->fields.baseBoardMaskSpriteName = v13;
        sub_1C36FFC(&this->fields.baseBoardMaskSpriteName, v13);
        return;
      }
    }
LABEL_16:
    sub_1C372B4(v4);
  }
}


void EventMissionItemListViewItemDraw__ChangeNextRewardIcon(
        EventMissionItemListViewItemDraw_o *this,
        EventMissionItemListViewManager_o *manager,
        const MethodInfo *method)
{
  struct GiftEntity_array *giftEntityList; // x20
  EventMissionItemListViewItemDraw_o *v4; // x19
  int32_t *v5; // x9
  int32_t v6; // w1
  int v7; // w8
  int64_t v8; // x2
  int32_t v9; // w3

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
    sub_1C372BC(this);
  v5 = (int32_t *)giftEntityList->m_Items[(int)this];
  if ( !v5 )
    goto LABEL_18;
  v6 = v5[11];
  this = (EventMissionItemListViewItemDraw_o *)v4->fields.itemIcon;
  v7 = v5[7];
  if ( v6 >= 1 )
  {
    if ( this )
    {
      if ( v7 <= 1 )
        v8 = -1;
      else
        v8 = (unsigned int)v5[7];
      ItemIconComponent__SetItemImage_40924348((ItemIconComponent_o *)this, v6, v8, 0);
      return;
    }
LABEL_18:
    sub_1C372B4(this);
  }
  if ( !this )
    goto LABEL_18;
  if ( v7 <= 1 )
    v9 = -1;
  else
    v9 = v5[7];
  ItemIconComponent__SetGiftDesignSize((ItemIconComponent_o *)this, v5[5], v5[6], v9, 0);
}


System_String_o *EventMissionItemListViewItemDraw__GetAchiveTimeText(int64_t closeTime, const MethodInfo *method)
{
  System_String_o *v3; // x20
  System_String_o *RestTime; // x2

  if ( (byte_4C3D3E7 & 1) == 0 )
  {
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&StringLiteral_113/*" "*/);
    sub_1C37058(&StringLiteral_13415/*"TIME_REST_ACHIVE"*/);
    byte_4C3D3E7 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_13415/*"TIME_REST_ACHIVE"*/, 0);
  RestTime = LocalizationManager__GetRestTime(closeTime, 0);
  return System_String__Concat_63599904(v3, (System_String_o *)StringLiteral_113/*" "*/, RestTime, 0);
}


System_String_o *EventMissionItemListViewItemDraw__GetRestTimeText(int64_t endTime, const MethodInfo *method)
{
  System_String_o *v3; // x20
  System_String_o *RestTime; // x1

  if ( (byte_4C3D3E6 & 1) == 0 )
  {
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&StringLiteral_13427/*"TIME_REST_QUEST"*/);
    byte_4C3D3E6 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_13427/*"TIME_REST_QUEST"*/, 0);
  RestTime = LocalizationManager__GetRestTime(endTime, 0);
  return System_String__Concat_63561656(v3, RestTime, 0);
}


void EventMissionItemListViewItemDraw__InitDispResTime(
        EventMissionItemListViewItemDraw_o *this,
        MissionListViewItem_o *missionListviewItem,
        const MethodInfo *method)
{
  int64_t Time; // x0
  int64_t v6; // x21
  bool *p_isDispTime; // x22
  int64_t v8; // x8
  const MethodInfo *v9; // x1
  int64_t v10; // x21
  System_String_o *RestTimeText; // x0
  const MethodInfo *v12; // x1
  int64_t v13; // x21
  System_String_o *AchiveTimeText; // x1
  const MethodInfo *v15; // x1
  int64_t v16; // x21
  int v17; // w8
  UILabel_o *timeOverLb; // x20
  char isAchiveTime; // w1

  if ( (byte_4C3D3E3 & 1) == 0 )
  {
    sub_1C37058(&EventMissionItemListViewItemDraw_TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&StringLiteral_8710/*"MISSION_PERIOD_END"*/);
    byte_4C3D3E3 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  this->fields.isAchiveTime = 0;
  if ( !missionListviewItem )
    goto LABEL_43;
  v6 = Time;
  Time = (int64_t)MissionListViewItem__get_EventMissionEntity(missionListviewItem, 0);
  if ( !Time )
    goto LABEL_43;
  if ( v6 >= *(_QWORD *)(Time + 56) )
  {
    Time = (int64_t)MissionListViewItem__get_EventMissionEntity(missionListviewItem, 0);
    if ( !Time )
      goto LABEL_43;
    v8 = *(_QWORD *)(Time + 64);
    this->fields.isDispTime = v6 < v8;
    p_isDispTime = &this->fields.isDispTime;
    if ( v6 < v8 )
    {
      Time = (int64_t)MissionListViewItem__get_EventMissionEntity(missionListviewItem, 0);
      if ( !Time )
        goto LABEL_43;
      v10 = *(_QWORD *)(Time + 64);
      if ( !EventMissionItemListViewItemDraw_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventMissionItemListViewItemDraw_TypeInfo);
      RestTimeText = EventMissionItemListViewItemDraw__GetRestTimeText(v10, v9);
      if ( missionListviewItem->fields.progStatus == 3 )
      {
        Time = (int64_t)MissionListViewItem__get_EventMissionEntity(missionListviewItem, 0);
        if ( !Time )
          goto LABEL_43;
        v13 = *(_QWORD *)(Time + 72);
        if ( !EventMissionItemListViewItemDraw_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(EventMissionItemListViewItemDraw_TypeInfo);
        AchiveTimeText = EventMissionItemListViewItemDraw__GetAchiveTimeText(v13, v12);
        this->fields.isAchiveTime = 1;
      }
      else
      {
        AchiveTimeText = RestTimeText;
      }
      Time = (int64_t)this->fields.resTimeLb;
      if ( !Time )
LABEL_43:
        sub_1C372B4(Time);
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
    goto LABEL_43;
  v16 = *(_QWORD *)(Time + 72);
  if ( !EventMissionItemListViewItemDraw_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventMissionItemListViewItemDraw_TypeInfo);
  Time = (int64_t)EventMissionItemListViewItemDraw__GetAchiveTimeText(v16, v15);
  if ( !this->fields.resTimeLb )
    goto LABEL_43;
  AchiveTimeText = (System_String_o *)Time;
  Time = (int64_t)this->fields.resTimeLb;
LABEL_28:
  UILabel__set_text((UILabel_o *)Time, AchiveTimeText, 0);
  v17 = 0;
  this->fields.oldTime = 0;
LABEL_29:
  if ( missionListviewItem->fields.progStatus == 4 )
  {
    this->fields.isDispTime = 0;
    this->fields.isAchiveTime = 0;
  }
  Time = (int64_t)this->fields.timeOverInfo;
  if ( !Time )
    goto LABEL_43;
  if ( v17 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0);
    timeOverLb = this->fields.timeOverLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Time = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_8710/*"MISSION_PERIOD_END"*/, 0);
    if ( !timeOverLb )
      goto LABEL_43;
    UILabel__set_text(timeOverLb, (System_String_o *)Time, 0);
  }
  else
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0);
  }
  Time = (int64_t)this->fields.resTimeLb;
  if ( !Time )
    goto LABEL_43;
  Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0);
  if ( !*p_isDispTime )
  {
    isAchiveTime = this->fields.isAchiveTime;
    if ( Time )
      goto LABEL_41;
    goto LABEL_43;
  }
  isAchiveTime = 1;
  if ( !Time )
    goto LABEL_43;
LABEL_41:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, isAchiveTime, 0);
}


bool EventMissionItemListViewItemDraw__IsUseDefaultLockBoard(
        EventMissionItemListViewItemDraw_o *this,
        const MethodInfo *method)
{
  return 0;
}


void EventMissionItemListViewItemDraw__ModifyBoardImage(
        EventMissionItemListViewItemDraw_o *this,
        int32_t bannerGroupId,
        const MethodInfo *method)
{
  UnityEngine_Object_o *baseSprite; // x21
  UnityEngine_Object_o *stampSprite; // x21
  UnityEngine_Object_o *boardMaskSprite; // x21
  UISprite_o *v8; // x23
  System_String_o *baseSpriteName; // x21
  UIAtlas_o *baseAtlas; // x22

  if ( (byte_4C3D3EB & 1) == 0 )
  {
    sub_1C37058(&AtlasManager_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3D3EB = 1;
  }
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(baseSprite, 0, 0) )
  {
    stampSprite = (UnityEngine_Object_o *)this->fields.stampSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(stampSprite, 0, 0) )
    {
      boardMaskSprite = (UnityEngine_Object_o *)this->fields.boardMaskSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Equality(boardMaskSprite, 0, 0) )
      {
        v8 = this->fields.baseSprite;
        baseAtlas = this->fields.baseAtlas;
        baseSpriteName = this->fields.baseSpriteName;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        AtlasManager__SetMissionBoardSprite(v8, baseAtlas, baseSpriteName, bannerGroupId, 0);
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
  UnityEngine_Object_o *baseButton; // x21
  const MethodInfo *v7; // x2

  if ( (byte_4C3D3E9 & 1) == 0 )
  {
    sub_1C37058(&EventMissionItemListViewItem_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3D3E9 = 1;
  }
  if ( missionListViewItem
    && (naturalAligment = EventMissionItemListViewItem_TypeInfo->_2.naturalAligment,
        missionListViewItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment)
    && (EventMissionItemListViewItem_c *)missionListViewItem->klass->_2.typeHierarchy[naturalAligment - 1] == EventMissionItemListViewItem_TypeInfo )
  {
    MissionListViewItemDraw__SetInput((MissionListViewItemDraw_o *)this, missionListViewItem, 0);
    baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(baseButton, 0, 0) )
      EventMissionItemListViewItemDraw__UpdateNewIcon(this, (EventMissionItemListViewItem_o *)missionListViewItem, v7);
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
  __int64 naturalAligment; // x10
  __int64 v10; // x10
  UnityEngine_Component_o *iconLabel; // x0
  int v13; // w21
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x2
  UISprite_o *rewardBackSprite; // x21
  int32_t Type; // w0
  int32_t rewardObjectId; // w23
  int32_t klass; // w22
  int32_t v20; // w24
  UnityEngine_Object_o *stampSprite; // x21
  UISprite_o *v22; // x24
  System_String_o *baseStampSpriteName; // x21
  UIAtlas_o *baseStampSpriteAtlas; // x23
  int32_t bannerGroupId; // w22
  UnityEngine_Object_o *boardMaskSprite; // x21
  UISprite_o *v27; // x22
  System_String_o *baseBoardMaskSpriteName; // x19
  UIAtlas_o *baseBoardMaskSpriteAtlas; // x21
  int32_t v30; // w20

  if ( (byte_4C3D3E2 & 1) == 0 )
  {
    sub_1C37058(&AtlasManager_TypeInfo);
    sub_1C37058(&EventMissionItemListViewItem_TypeInfo);
    sub_1C37058(&EventMissionItemListViewManager_TypeInfo);
    sub_1C37058(&EventRewardRootComponent_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3D3E2 = 1;
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
  v10 = EventMissionItemListViewManager_TypeInfo->_2.naturalAligment;
  if ( listViewManager->klass->_2.naturalAligment >= (unsigned int)v10 )
  {
    if ( (EventMissionItemListViewManager_c *)listViewManager->klass->_2.typeHierarchy[v10 - 1] != EventMissionItemListViewManager_TypeInfo )
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
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)listViewManager, 0, 0) )
    return 0;
  if ( mode )
  {
    iconLabel = (UnityEngine_Component_o *)this->fields.iconLabel;
    if ( iconLabel )
    {
      v13 = BYTE1(missionListViewItem[1].monitor);
      iconLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(iconLabel, 0);
      if ( iconLabel )
      {
        if ( v13 )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)iconLabel, 0, 0);
LABEL_30:
          EventMissionItemListViewItemDraw__SetRewardItemIcon(
            this,
            (EventMissionItemListViewItem_o *)missionListViewItem,
            (EventMissionItemListViewManager_o *)listViewManager,
            v14);
          EventMissionItemListViewItemDraw__UpdateNewIcon(
            this,
            (EventMissionItemListViewItem_o *)missionListViewItem,
            v15);
          rewardBackSprite = this->fields.rewardBackSprite;
          Type = MissionListViewItem__get_Type(missionListViewItem, 0);
          rewardObjectId = missionListViewItem->fields.rewardObjectId;
          klass = (int32_t)missionListViewItem[1].klass;
          v20 = Type;
          if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
          EventRewardRootComponent__SetRewardRaritySprite(rewardBackSprite, v20, rewardObjectId, klass, 0);
          goto LABEL_33;
        }
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)iconLabel, 1, 0);
        iconLabel = (UnityEngine_Component_o *)this->fields.iconLabel;
        if ( iconLabel )
        {
          UIIconLabel__Set_41110308(
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
          goto LABEL_30;
        }
      }
    }
    sub_1C372B4(iconLabel);
  }
LABEL_33:
  stampSprite = (UnityEngine_Object_o *)this->fields.stampSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(stampSprite, 0, 0) )
  {
    v22 = this->fields.stampSprite;
    baseStampSpriteAtlas = this->fields.baseStampSpriteAtlas;
    baseStampSpriteName = this->fields.baseStampSpriteName;
    bannerGroupId = missionListViewItem->fields.bannerGroupId;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetMissionBoardStampSprite(v22, baseStampSpriteAtlas, baseStampSpriteName, bannerGroupId, 0);
  }
  boardMaskSprite = (UnityEngine_Object_o *)this->fields.boardMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(boardMaskSprite, 0, 0) )
  {
    v27 = this->fields.boardMaskSprite;
    baseBoardMaskSpriteAtlas = this->fields.baseBoardMaskSpriteAtlas;
    baseBoardMaskSpriteName = this->fields.baseBoardMaskSpriteName;
    v30 = missionListViewItem->fields.bannerGroupId;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetMissionBoardMaskSprite(v27, baseBoardMaskSpriteAtlas, baseBoardMaskSpriteName, v30, 0);
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
    sub_1C372B4(0);
  UnityEngine_GameObject__SetActive(lockImgInfo, 1, 0);
}


void EventMissionItemListViewItemDraw__SetRewardItemIcon(
        EventMissionItemListViewItemDraw_o *this,
        EventMissionItemListViewItem_o *item,
        EventMissionItemListViewManager_o *manager,
        const MethodInfo *method)
{
  EventMissionItemListViewItemDraw_o *v6; // x20
  const MethodInfo *v7; // x1
  int32_t completedImg_high; // w1
  int32_t missionNoLb_high; // w22
  GiftEntity_array *IconGiftEntities; // x0
  struct GiftEntity_array **p_giftEntityList; // x22
  il2cpp_array_size_t max_length; // x8
  Il2CppObject *Master_object; // x23
  int32_t m_CachedPtr; // w24
  System_String_o *v15; // x23
  EventMissionItemListViewItemDraw_o *itemIcon; // x21
  const MethodInfo *v17; // x1
  int32_t iconId; // w1
  struct GiftEntity_array *v19; // x22
  int32_t *v20; // x9
  int32_t v21; // w1
  int v22; // w8
  int64_t v23; // x2
  struct GiftEntity_array *v24; // x21
  GiftEntity_o *v25; // x8
  int32_t prioredIconId; // w1
  int64_t v27; // x8
  int64_t v28; // x2
  GiftEntity_o *IconGiftEntity; // x0
  int32_t objectId; // w2
  int32_t type; // w1
  int32_t num; // w3
  int32_t v33; // w3

  v6 = this;
  if ( (byte_4C3D3E4 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_EventMissionAddMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&MissionInfoMaker_TypeInfo);
    this = (EventMissionItemListViewItemDraw_o *)sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3D3E4 = 1;
  }
  if ( !item )
    goto LABEL_78;
  if ( MissionListViewItem__get_EventRewardType((MissionListViewItem_o *)item, 0) != 1 )
    goto LABEL_33;
  if ( EventMissionItemListViewItem__get_IsHideReward(item, v7) )
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
                                                 (MissionListViewItem_o *)item,
                                                 0);
  if ( !this )
    goto LABEL_78;
  missionNoLb_high = HIDWORD(this->fields.missionNoLb);
  if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
  IconGiftEntities = MissionInfoMaker__GetIconGiftEntities(missionNoLb_high, 0);
  v6->fields.giftEntityList = IconGiftEntities;
  p_giftEntityList = &v6->fields.giftEntityList;
  this = (EventMissionItemListViewItemDraw_o *)sub_1C36FFC(&v6->fields.giftEntityList, IconGiftEntities);
  if ( !v6->fields.giftEntityList )
    goto LABEL_78;
  max_length = v6->fields.giftEntityList->max_length;
  if ( !max_length )
    return;
  v6->fields.isMultipleReward = (int)max_length > 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_EventMissionAddMaster___);
  this = (EventMissionItemListViewItemDraw_o *)MissionListViewItem__get_EventMissionEntity(
                                                 (MissionListViewItem_o *)item,
                                                 0);
  if ( !this )
    goto LABEL_78;
  m_CachedPtr = this->fields.m_CachedPtr;
  this = (EventMissionItemListViewItemDraw_o *)MissionListViewItem__get_EventMissionEntity(
                                                 (MissionListViewItem_o *)item,
                                                 0);
  if ( !this || !Master_object )
    goto LABEL_78;
  v15 = EventMissionAddMaster__GetEventMissionChangeRewardIcon(
          (EventMissionAddMaster_o *)Master_object,
          m_CachedPtr,
          HIDWORD(this->fields.m_CancellationTokenSource),
          0,
          0);
  if ( !System_String__IsNullOrEmpty(v15, 0) )
    goto LABEL_22;
  this = (EventMissionItemListViewItemDraw_o *)MissionListViewItem__get_EventMissionEntity(
                                                 (MissionListViewItem_o *)item,
                                                 0);
  if ( !this )
    goto LABEL_78;
  if ( SHIDWORD(this->fields.completedImg) >= 1 )
  {
LABEL_22:
    v6->fields.isMultipleReward = 0;
    item->fields.isHideRewardDetail = 1;
LABEL_23:
    if ( !System_String__IsNullOrEmpty(v15, 0) )
    {
      this = (EventMissionItemListViewItemDraw_o *)v6->fields.itemIcon;
      if ( !this )
        goto LABEL_78;
      ItemIconComponent__SetItemImageByName((ItemIconComponent_o *)this, v15, 0);
LABEL_31:
      this = (EventMissionItemListViewItemDraw_o *)v6->fields.itemIcon;
      if ( !this )
        goto LABEL_78;
      ItemIconComponent__SetAlpha((ItemIconComponent_o *)this, 1.0, 0);
      goto LABEL_33;
    }
    this = (EventMissionItemListViewItemDraw_o *)MissionListViewItem__get_EventMissionEntity(
                                                   (MissionListViewItem_o *)item,
                                                   0);
    if ( !this )
      goto LABEL_78;
    if ( SHIDWORD(this->fields.completedImg) >= 1 )
    {
      itemIcon = (EventMissionItemListViewItemDraw_o *)v6->fields.itemIcon;
      this = (EventMissionItemListViewItemDraw_o *)MissionListViewItem__get_EventMissionEntity(
                                                     (MissionListViewItem_o *)item,
                                                     0);
      if ( !this || !itemIcon )
        goto LABEL_78;
      completedImg_high = HIDWORD(this->fields.completedImg);
      this = itemIcon;
      goto LABEL_8;
    }
    v24 = *p_giftEntityList;
    if ( !*p_giftEntityList )
      goto LABEL_78;
    if ( LODWORD(v24->max_length) )
    {
      v25 = v24->m_Items[0];
      if ( !v25 )
        goto LABEL_78;
      prioredIconId = v25->fields.prioredIconId;
      if ( prioredIconId < 1 )
      {
        if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
        IconGiftEntity = MissionInfoMaker__GetIconGiftEntity(v24, 0);
        if ( IconGiftEntity )
        {
          objectId = IconGiftEntity->fields.objectId;
          type = IconGiftEntity->fields.type;
          if ( IconGiftEntity->fields.num <= 1 )
            num = -1;
          else
            num = IconGiftEntity->fields.num;
        }
        else
        {
          objectId = 0;
          type = 0;
          num = -1;
        }
        this = (EventMissionItemListViewItemDraw_o *)v6->fields.itemIcon;
        if ( !this )
          goto LABEL_78;
        ItemIconComponent__SetGiftDesignSize((ItemIconComponent_o *)this, type, objectId, num, 0);
      }
      else
      {
        this = (EventMissionItemListViewItemDraw_o *)v6->fields.itemIcon;
        if ( !this )
          goto LABEL_78;
        v27 = (unsigned int)v25->fields.num;
        if ( (int)v27 <= 1 )
          v28 = -1;
        else
          v28 = v27;
        ItemIconComponent__SetItemImage_40924348((ItemIconComponent_o *)this, prioredIconId, v28, 0);
      }
      goto LABEL_31;
    }
LABEL_79:
    sub_1C372BC(this);
  }
  if ( !v6->fields.isMultipleReward )
    goto LABEL_23;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (EventMissionItemListViewItemDraw_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)manager, 0, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_33;
  v19 = *p_giftEntityList;
  if ( !v19 || !manager )
    goto LABEL_78;
  this = (EventMissionItemListViewItemDraw_o *)MissionListViewManager__GetAlphaAnimCnt(
                                                 (MissionListViewManager_o *)manager,
                                                 v19->max_length,
                                                 0);
  if ( (unsigned int)this >= LODWORD(v19->max_length) )
    goto LABEL_79;
  v20 = (int32_t *)v19->m_Items[(int)this];
  if ( !v20 )
    goto LABEL_78;
  v21 = v20[11];
  this = (EventMissionItemListViewItemDraw_o *)v6->fields.itemIcon;
  v22 = v20[7];
  if ( v21 < 1 )
  {
    if ( !this )
      goto LABEL_78;
    if ( v22 <= 1 )
      v33 = -1;
    else
      v33 = v20[7];
    ItemIconComponent__SetGiftDesignSize((ItemIconComponent_o *)this, v20[5], v20[6], v33, 0);
  }
  else
  {
    if ( !this )
      goto LABEL_78;
    if ( v22 <= 1 )
      v23 = -1;
    else
      v23 = (unsigned int)v20[7];
    ItemIconComponent__SetItemImage_40924348((ItemIconComponent_o *)this, v21, v23, 0);
  }
LABEL_33:
  if ( MissionListViewItem__get_EventRewardType((MissionListViewItem_o *)item, 0) == 3 )
  {
    if ( EventMissionItemListViewItem__get_IsHideReward(item, v17) )
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
        iconId = item->fields.iconId;
        goto LABEL_40;
      }
    }
LABEL_78:
    sub_1C372B4(this);
  }
}


void EventMissionItemListViewItemDraw__SetRewardStatusImg(
        EventMissionItemListViewItemDraw_o *this,
        int32_t status,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *lockImgInfo; // x0
  UILabel_o *timeOverLb; // x19

  if ( (byte_4C3D3E5 & 1) == 0 )
  {
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&StringLiteral_8710/*"MISSION_PERIOD_END"*/);
    byte_4C3D3E5 = 1;
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
    lockImgInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8710/*"MISSION_PERIOD_END"*/, 0);
    if ( !timeOverLb )
LABEL_11:
      sub_1C372B4(lockImgInfo);
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
  UnityEngine_Component_o *resTimeLb; // x0
  UnityEngine_Component_o *v9; // x21
  const MethodInfo *v10; // x1
  int64_t oldTime; // x23
  int64_t v12; // x22
  EventMissionItemListViewItemDraw_c *v13; // x8
  UILabel_o *v14; // x23
  int64_t klass; // x24
  int64_t m_CachedPtr; // x24
  int64_t v17; // x21
  System_String_o *RestTime; // x21

  if ( (byte_4C3D3E8 & 1) == 0 )
  {
    sub_1C37058(&EventMissionItemListViewItemDraw_TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&StringLiteral_13439/*"TIME_REST_TIMEOVER"*/);
    byte_4C3D3E8 = 1;
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
          goto LABEL_33;
        resTimeLb = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(resTimeLb, 0);
        if ( !resTimeLb )
          goto LABEL_33;
        if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)resTimeLb, 0) )
        {
          resTimeLb = (UnityEngine_Component_o *)MissionListViewItem__get_EventMissionEntity(
                                                   (MissionListViewItem_o *)item,
                                                   0);
          if ( !this->fields.resTimeLb )
            goto LABEL_33;
          v9 = resTimeLb;
          resTimeLb = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this->fields.resTimeLb,
                                                   0);
          if ( !resTimeLb )
            goto LABEL_33;
          if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)resTimeLb, 0) )
          {
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            resTimeLb = (UnityEngine_Component_o *)NetworkManager__getTime(0);
            oldTime = this->fields.oldTime;
            v12 = (int64_t)resTimeLb;
            v13 = EventMissionItemListViewItemDraw_TypeInfo;
            if ( !EventMissionItemListViewItemDraw_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(EventMissionItemListViewItemDraw_TypeInfo);
              v13 = EventMissionItemListViewItemDraw_TypeInfo;
            }
            if ( v12 - oldTime >= v13->static_fields->TIME_UPDATE_ITVL_SEC )
            {
              if ( !v9 )
                goto LABEL_33;
              v14 = this->fields.resTimeLb;
              if ( this->fields.isAchiveTime )
              {
                klass = (int64_t)v9[3].klass;
                if ( !v13->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(v13);
                resTimeLb = (UnityEngine_Component_o *)EventMissionItemListViewItemDraw__GetAchiveTimeText(klass, v10);
              }
              else
              {
                m_CachedPtr = v9[2].fields.m_CachedPtr;
                if ( !v13->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(v13);
                resTimeLb = (UnityEngine_Component_o *)EventMissionItemListViewItemDraw__GetRestTimeText(
                                                         m_CachedPtr,
                                                         v10);
              }
              if ( !v14 )
                goto LABEL_33;
              UILabel__set_text(v14, (System_String_o *)resTimeLb, 0);
              this->fields.oldTime = v12;
              v17 = v9[2].fields.m_CachedPtr;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              RestTime = LocalizationManager__GetRestTime(v17, 0);
              resTimeLb = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13439/*"TIME_REST_TIMEOVER"*/, 0);
              if ( !RestTime )
                goto LABEL_33;
              if ( System_String__Equals_63596960(RestTime, (System_String_o *)resTimeLb, 0) )
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
LABEL_33:
                sub_1C372B4(resTimeLb);
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

  if ( (byte_4C3D3EA & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3D3EA = 1;
  }
  newIcon = (UnityEngine_Object_o *)this->fields.newIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
      sub_1C372B4(v6);
    }
    v6 = this->fields.newIcon;
    if ( !v6 )
      goto LABEL_14;
    ShiningIconComponent__Clear(v6, 0);
  }
}