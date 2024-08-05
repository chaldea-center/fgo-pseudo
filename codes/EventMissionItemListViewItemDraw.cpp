void __fastcall EventMissionItemListViewItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4A022CB & 1) == 0 )
  {
    sub_1B64870(&EventMissionItemListViewItemDraw_TypeInfo, v1);
    byte_4A022CB = 1;
  }
  EventMissionItemListViewItemDraw_TypeInfo->static_fields->TIME_UPDATE_ITVL_SEC = 60;
}


void __fastcall EventMissionItemListViewItemDraw___ctor(
        EventMissionItemListViewItemDraw_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A022CA & 1) == 0 )
  {
    sub_1B64870(&MissionListViewItemDraw_TypeInfo, method);
    byte_4A022CA = 1;
  }
  if ( !MissionListViewItemDraw_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MissionListViewItemDraw_TypeInfo);
  MissionListViewItemDraw___ctor((MissionListViewItemDraw_o *)this, 0LL);
}


void __fastcall EventMissionItemListViewItemDraw__Awake(
        EventMissionItemListViewItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *stampSprite; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  struct UISprite_o *v8; // x8
  struct UIAtlas_o *mAtlas; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  struct UISprite_o *v12; // x8
  struct System_String_o *mSpriteName; // x1
  UnityEngine_Object_o *boardMaskSprite; // x20
  int32_t v15; // w2
  int32_t v16; // w3
  struct UISprite_o *v17; // x8
  struct UIAtlas_o *v18; // x1
  int32_t v19; // w2
  int32_t v20; // w3
  struct UISprite_o *v21; // x8
  struct System_String_o *v22; // x1

  if ( (byte_4A022BF & 1) == 0 )
  {
    sub_1B64870(&UnityEngine_Object_TypeInfo, method);
    byte_4A022BF = 1;
  }
  MissionListViewItemDraw__Awake((MissionListViewItemDraw_o *)this, 0LL);
  stampSprite = (UnityEngine_Object_o *)this->fields.stampSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(stampSprite, 0LL, 0LL);
  if ( v4 )
  {
    v8 = this->fields.stampSprite;
    if ( !v8 )
      goto LABEL_16;
    mAtlas = v8->fields.mAtlas;
    this->fields.baseStampSpriteAtlas = mAtlas;
    sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.baseStampSpriteAtlas, (int32_t)mAtlas, v6, v7);
    v12 = this->fields.stampSprite;
    if ( !v12 )
      goto LABEL_16;
    mSpriteName = v12->fields.mSpriteName;
    this->fields.baseStampSpriteName = mSpriteName;
    sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.baseStampSpriteName, (int32_t)mSpriteName, v10, v11);
  }
  boardMaskSprite = (UnityEngine_Object_o *)this->fields.boardMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(boardMaskSprite, 0LL, 0LL);
  if ( v4 )
  {
    v17 = this->fields.boardMaskSprite;
    if ( v17 )
    {
      v18 = v17->fields.mAtlas;
      this->fields.baseBoardMaskSpriteAtlas = v18;
      sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.baseBoardMaskSpriteAtlas, (int32_t)v18, v15, v16);
      v21 = this->fields.boardMaskSprite;
      if ( v21 )
      {
        v22 = v21->fields.mSpriteName;
        this->fields.baseBoardMaskSpriteName = v22;
        sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.baseBoardMaskSpriteName, (int32_t)v22, v19, v20);
        return;
      }
    }
LABEL_16:
    sub_1B64ACC(v4, v5);
  }
}


void __fastcall EventMissionItemListViewItemDraw__ChangeNextRewardIcon(
        EventMissionItemListViewItemDraw_o *this,
        EventMissionItemListViewManager_o *manager,
        const MethodInfo *method)
{
  struct GiftEntity_array *giftEntityList; // x20
  EventMissionItemListViewItemDraw_o *v4; // x19
  GiftEntity_o *v5; // x8
  int num; // w9
  int32_t v7; // w2
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
                                                 0LL);
  if ( (unsigned int)this >= giftEntityList->max_length )
    sub_1B64AD4(this, manager);
  v5 = giftEntityList->m_Items[(int)this];
  if ( !v5 )
    goto LABEL_18;
  manager = (EventMissionItemListViewManager_o *)(unsigned int)v5->fields.prioredIconId;
  this = (EventMissionItemListViewItemDraw_o *)v4->fields.itemIcon;
  num = v5->fields.num;
  if ( (int)manager >= 1 )
  {
    if ( this )
    {
      if ( num <= 1 )
        v7 = -1;
      else
        v7 = v5->fields.num;
      ItemIconComponent__SetItemImage_37836068((ItemIconComponent_o *)this, (int32_t)manager, v7, 0LL);
      return;
    }
LABEL_18:
    sub_1B64ACC(this, manager);
  }
  if ( !this )
    goto LABEL_18;
  if ( num <= 1 )
    v8 = -1;
  else
    v8 = v5->fields.num;
  ItemIconComponent__SetGiftDesignSize((ItemIconComponent_o *)this, v5->fields.type, v5->fields.objectId, v8, 0LL);
}


System_String_o *__fastcall EventMissionItemListViewItemDraw__GetAchiveTimeText(
        int64_t closeTime,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_String_o *v5; // x20
  System_String_o *RestTime; // x2

  if ( (byte_4A022C5 & 1) == 0 )
  {
    sub_1B64870(&LocalizationManager_TypeInfo, method);
    sub_1B64870(&StringLiteral_117/*" "*/, v3);
    sub_1B64870(&StringLiteral_13265/*"TIME_REST_ACHIVE"*/, v4);
    byte_4A022C5 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_13265/*"TIME_REST_ACHIVE"*/, 0LL);
  RestTime = LocalizationManager__GetRestTime(closeTime, 0LL);
  return System_String__Concat_61394836(v5, (System_String_o *)StringLiteral_117/*" "*/, RestTime, 0LL);
}


System_String_o *__fastcall EventMissionItemListViewItemDraw__GetRestTimeText(
        int64_t endTime,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_String_o *v4; // x20
  System_String_o *RestTime; // x1

  if ( (byte_4A022C4 & 1) == 0 )
  {
    sub_1B64870(&LocalizationManager_TypeInfo, method);
    sub_1B64870(&StringLiteral_13277/*"TIME_REST_QUEST"*/, v3);
    byte_4A022C4 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_13277/*"TIME_REST_QUEST"*/, 0LL);
  RestTime = LocalizationManager__GetRestTime(endTime, 0LL);
  return System_String__Concat_61383576(v4, RestTime, 0LL);
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
  MethodInfo *AchiveTimeText; // x1
  int64_t v10; // x21
  bool *p_isDispTime; // x22
  int64_t v12; // x8
  int64_t v13; // x21
  System_String_o *RestTimeText; // x0
  int64_t v15; // x21
  int64_t v16; // x21
  int v17; // w8
  UILabel_o *timeOverLb; // x20

  if ( (byte_4A022C1 & 1) == 0 )
  {
    sub_1B64870(&EventMissionItemListViewItemDraw_TypeInfo, missionListviewItem);
    sub_1B64870(&LocalizationManager_TypeInfo, v5);
    sub_1B64870(&NetworkManager_TypeInfo, v6);
    sub_1B64870(&StringLiteral_8640/*"MISSION_PERIOD_END"*/, v7);
    byte_4A022C1 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  this->fields.isAchiveTime = 0;
  if ( !missionListviewItem )
    goto LABEL_43;
  v10 = Time;
  Time = (int64_t)MissionListViewItem__get_EventMissionEntity(missionListviewItem, 0LL);
  if ( !Time )
    goto LABEL_43;
  if ( v10 >= *(_QWORD *)(Time + 56) )
  {
    Time = (int64_t)MissionListViewItem__get_EventMissionEntity(missionListviewItem, 0LL);
    if ( !Time )
      goto LABEL_43;
    v12 = *(_QWORD *)(Time + 64);
    this->fields.isDispTime = v10 < v12;
    p_isDispTime = &this->fields.isDispTime;
    if ( v10 < v12 )
    {
      Time = (int64_t)MissionListViewItem__get_EventMissionEntity(missionListviewItem, 0LL);
      if ( !Time )
        goto LABEL_43;
      v13 = *(_QWORD *)(Time + 64);
      if ( !EventMissionItemListViewItemDraw_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventMissionItemListViewItemDraw_TypeInfo);
      RestTimeText = EventMissionItemListViewItemDraw__GetRestTimeText(v13, AchiveTimeText);
      if ( missionListviewItem->fields.progStatus == 3 )
      {
        Time = (int64_t)MissionListViewItem__get_EventMissionEntity(missionListviewItem, 0LL);
        if ( !Time )
          goto LABEL_43;
        v15 = *(_QWORD *)(Time + 72);
        if ( !EventMissionItemListViewItemDraw_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(EventMissionItemListViewItemDraw_TypeInfo);
        AchiveTimeText = (MethodInfo *)EventMissionItemListViewItemDraw__GetAchiveTimeText(v15, AchiveTimeText);
        this->fields.isAchiveTime = 1;
      }
      else
      {
        AchiveTimeText = (MethodInfo *)RestTimeText;
      }
      Time = (int64_t)this->fields.resTimeLb;
      if ( !Time )
LABEL_43:
        sub_1B64ACC(Time, AchiveTimeText);
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
  Time = (int64_t)MissionListViewItem__get_EventMissionEntity(missionListviewItem, 0LL);
  if ( !Time )
    goto LABEL_43;
  v16 = *(_QWORD *)(Time + 72);
  if ( !EventMissionItemListViewItemDraw_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventMissionItemListViewItemDraw_TypeInfo);
  Time = (int64_t)EventMissionItemListViewItemDraw__GetAchiveTimeText(v16, AchiveTimeText);
  if ( !this->fields.resTimeLb )
    goto LABEL_43;
  AchiveTimeText = (MethodInfo *)Time;
  Time = (int64_t)this->fields.resTimeLb;
LABEL_28:
  UILabel__set_text((UILabel_o *)Time, (System_String_o *)AchiveTimeText, 0LL);
  v17 = 0;
  this->fields.oldTime = 0LL;
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
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0LL);
    timeOverLb = this->fields.timeOverLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Time = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_8640/*"MISSION_PERIOD_END"*/, 0LL);
    if ( !timeOverLb )
      goto LABEL_43;
    UILabel__set_text(timeOverLb, (System_String_o *)Time, 0LL);
  }
  else
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
  }
  Time = (int64_t)this->fields.resTimeLb;
  if ( !Time )
    goto LABEL_43;
  Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
  if ( !*p_isDispTime )
  {
    AchiveTimeText = (MethodInfo *)this->fields.isAchiveTime;
    if ( Time )
      goto LABEL_41;
    goto LABEL_43;
  }
  AchiveTimeText = (MethodInfo *)(&dword_0 + 1);
  if ( !Time )
    goto LABEL_43;
LABEL_41:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, (bool)AchiveTimeText, 0LL);
}


bool __fastcall EventMissionItemListViewItemDraw__IsUseDefaultLockBoard(
        EventMissionItemListViewItemDraw_o *this,
        const MethodInfo *method)
{
  return 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventMissionItemListViewItemDraw__ModifyBoardImage(
        EventMissionItemListViewItemDraw_o *this,
        int32_t bannerGroupId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *baseSprite; // x21
  UnityEngine_Object_o *stampSprite; // x21
  UnityEngine_Object_o *boardMaskSprite; // x21
  UISprite_o *v9; // x23
  System_String_o *baseSpriteName; // x21
  UIAtlas_o *baseAtlas; // x22

  if ( (byte_4A022C9 & 1) == 0 )
  {
    sub_1B64870(&AtlasManager_TypeInfo, *(_QWORD *)&bannerGroupId);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v5);
    byte_4A022C9 = 1;
  }
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(baseSprite, 0LL, 0LL) )
  {
    stampSprite = (UnityEngine_Object_o *)this->fields.stampSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(stampSprite, 0LL, 0LL) )
    {
      boardMaskSprite = (UnityEngine_Object_o *)this->fields.boardMaskSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Equality(boardMaskSprite, 0LL, 0LL) )
      {
        v9 = this->fields.baseSprite;
        baseAtlas = this->fields.baseAtlas;
        baseSpriteName = this->fields.baseSpriteName;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        AtlasManager__SetMissionBoardSprite(v9, baseAtlas, baseSpriteName, bannerGroupId, 0LL);
        AtlasManager__SetMissionBoardStampSprite(
          this->fields.stampSprite,
          this->fields.baseStampSpriteAtlas,
          this->fields.baseStampSpriteName,
          bannerGroupId,
          0LL);
        AtlasManager__SetMissionBoardMaskSprite(
          this->fields.boardMaskSprite,
          this->fields.baseBoardMaskSpriteAtlas,
          this->fields.baseBoardMaskSpriteName,
          bannerGroupId,
          0LL);
      }
    }
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
  __int64 methodPtr_low; // x10
  UnityEngine_Object_o *baseButton; // x21
  const MethodInfo *v8; // x2

  if ( (byte_4A022C7 & 1) == 0 )
  {
    sub_1B64870(&EventMissionItemListViewItem_TypeInfo, missionListViewItem);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v5);
    byte_4A022C7 = 1;
  }
  if ( missionListViewItem
    && (methodPtr_low = LOBYTE(EventMissionItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(missionListViewItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low)
    && (EventMissionItemListViewItem_c *)missionListViewItem->klass->_2.typeHierarchy[methodPtr_low - 1] == EventMissionItemListViewItem_TypeInfo )
  {
    MissionListViewItemDraw__SetInput((MissionListViewItemDraw_o *)this, missionListViewItem, 0LL);
    baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
  __int64 v12; // x1
  __int64 methodPtr_low; // x10
  __int64 v14; // x10
  __int64 v15; // x1
  UnityEngine_Component_o *iconLabel; // x0
  int v18; // w21
  const MethodInfo *v19; // x3
  const MethodInfo *v20; // x2
  UISprite_o *rewardBackSprite; // x21
  int32_t Type; // w0
  int32_t rewardObjectId; // w23
  int32_t klass; // w22
  int32_t v25; // w24
  UnityEngine_Object_o *stampSprite; // x21
  UISprite_o *v27; // x24
  System_String_o *baseStampSpriteName; // x21
  UIAtlas_o *baseStampSpriteAtlas; // x23
  int32_t bannerGroupId; // w22
  UnityEngine_Object_o *boardMaskSprite; // x21
  UISprite_o *v32; // x22
  System_String_o *baseBoardMaskSpriteName; // x19
  UIAtlas_o *baseBoardMaskSpriteAtlas; // x21
  int32_t v35; // w20

  v7 = missionListViewItem;
  if ( (byte_4A022C0 & 1) == 0 )
  {
    sub_1B64870(&AtlasManager_TypeInfo, missionListViewItem);
    sub_1B64870(&EventMissionItemListViewItem_TypeInfo, v9);
    sub_1B64870(&EventMissionItemListViewManager_TypeInfo, v10);
    sub_1B64870(&EventRewardRootComponent_TypeInfo, v11);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v12);
    byte_4A022C0 = 1;
  }
  if ( !MissionListViewItemDraw__SetItem((MissionListViewItemDraw_o *)this, v7, mode, listViewManager, 0LL) )
    return 0;
  if ( v7 )
  {
    methodPtr_low = LOBYTE(EventMissionItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v7->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
    {
      if ( (EventMissionItemListViewItem_c *)v7->klass->_2.typeHierarchy[methodPtr_low - 1] != EventMissionItemListViewItem_TypeInfo )
        v7 = 0LL;
      if ( !listViewManager )
        goto LABEL_14;
      goto LABEL_12;
    }
    v7 = 0LL;
  }
  if ( !listViewManager )
    goto LABEL_14;
LABEL_12:
  v14 = LOBYTE(EventMissionItemListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(listViewManager->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v14 )
  {
    if ( (EventMissionItemListViewManager_c *)listViewManager->klass->_2.typeHierarchy[v14 - 1] != EventMissionItemListViewManager_TypeInfo )
      listViewManager = 0LL;
    if ( !v7 )
      return 0;
    goto LABEL_19;
  }
  listViewManager = 0LL;
LABEL_14:
  if ( !v7 )
    return 0;
LABEL_19:
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)listViewManager, 0LL, 0LL) )
    return 0;
  if ( mode )
  {
    iconLabel = (UnityEngine_Component_o *)this->fields.iconLabel;
    if ( iconLabel )
    {
      v18 = BYTE1(v7[1].monitor);
      iconLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(iconLabel, 0LL);
      if ( iconLabel )
      {
        if ( v18 )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)iconLabel, 0, 0LL);
LABEL_30:
          EventMissionItemListViewItemDraw__SetRewardItemIcon(
            this,
            (EventMissionItemListViewItem_o *)v7,
            (EventMissionItemListViewManager_o *)listViewManager,
            v19);
          EventMissionItemListViewItemDraw__UpdateNewIcon(this, (EventMissionItemListViewItem_o *)v7, v20);
          rewardBackSprite = this->fields.rewardBackSprite;
          Type = MissionListViewItem__get_Type(v7, 0LL);
          rewardObjectId = v7->fields.rewardObjectId;
          klass = (int32_t)v7[1].klass;
          v25 = Type;
          if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
          EventRewardRootComponent__SetRewardRaritySprite(rewardBackSprite, v25, rewardObjectId, klass, 0LL);
          goto LABEL_33;
        }
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)iconLabel, 1, 0LL);
        iconLabel = (UnityEngine_Component_o *)this->fields.iconLabel;
        if ( iconLabel )
        {
          UIIconLabel__Set_37925528((UIIconLabel_o *)iconLabel, 57, v7->fields.dispNo, 0, 0, 0LL, 0, 0, 0, 0LL);
          goto LABEL_30;
        }
      }
    }
    sub_1B64ACC(iconLabel, v15);
  }
LABEL_33:
  stampSprite = (UnityEngine_Object_o *)this->fields.stampSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(stampSprite, 0LL, 0LL) )
  {
    v27 = this->fields.stampSprite;
    baseStampSpriteAtlas = this->fields.baseStampSpriteAtlas;
    baseStampSpriteName = this->fields.baseStampSpriteName;
    bannerGroupId = v7->fields.bannerGroupId;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetMissionBoardStampSprite(v27, baseStampSpriteAtlas, baseStampSpriteName, bannerGroupId, 0LL);
  }
  boardMaskSprite = (UnityEngine_Object_o *)this->fields.boardMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(boardMaskSprite, 0LL, 0LL) )
  {
    v32 = this->fields.boardMaskSprite;
    baseBoardMaskSpriteAtlas = this->fields.baseBoardMaskSpriteAtlas;
    baseBoardMaskSpriteName = this->fields.baseBoardMaskSpriteName;
    v35 = v7->fields.bannerGroupId;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetMissionBoardMaskSprite(v32, baseBoardMaskSpriteAtlas, baseBoardMaskSpriteName, v35, 0LL);
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
    sub_1B64ACC(0LL, missionListViewItem);
  UnityEngine_GameObject__SetActive(lockImgInfo, 1, 0LL);
}


void __fastcall EventMissionItemListViewItemDraw__SetRewardItemIcon(
        EventMissionItemListViewItemDraw_o *this,
        EventMissionItemListViewItem_o *item,
        EventMissionItemListViewManager_o *manager,
        const MethodInfo *method)
{
  EventMissionItemListViewItem_o *v5; // x19
  EventMissionItemListViewItemDraw_o *v6; // x20
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  const MethodInfo *v16; // x1
  int32_t completedImg_high; // w1
  __int64 v18; // x23
  Il2CppObject *Master_object; // x22
  GiftEntity_array *GiftListById; // x0
  System_Collections_Generic_IEnumerable_TSource__o **p_giftEntityList; // x22
  int32_t v22; // w2
  int32_t v23; // w3
  GiftEntity_array *giftEntityList; // x24
  int32_t v25; // w2
  int32_t v26; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x24
  System_Func_object__bool__o *v28; // x25
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x0
  System_Object_array *v30; // x0
  int32_t v31; // w2
  int32_t v32; // w3
  void *monitor; // x8
  Il2CppObject *v34; // x23
  int32_t m_CachedPtr; // w24
  System_String_o *v36; // x23
  EventMissionItemListViewItemDraw_o *itemIcon; // x21
  const MethodInfo *v38; // x1
  int32_t iconId; // w1
  System_Collections_Generic_IEnumerable_TSource__o *v40; // x22
  _DWORD *v41; // x8
  int v42; // w9
  int32_t v43; // w2
  GiftEntity_array *v44; // x21
  GiftEntity_o *v45; // x8
  int v46; // w8
  int32_t v47; // w2
  GiftEntity_o *IconGiftEntity; // x0
  int32_t objectId; // w2
  int32_t num; // w3
  int32_t v51; // w3

  v5 = item;
  v6 = this;
  if ( (byte_4A022C2 & 1) == 0 )
  {
    sub_1B64870(&Method_DataManager_GetMaster_EventMissionAddMaster___, item);
    sub_1B64870(&Method_DataManager_GetMaster_GiftMaster___, v7);
    sub_1B64870(&DataManager_TypeInfo, v8);
    sub_1B64870(&Method_System_Linq_Enumerable_ToArray_GiftEntity___, v9);
    sub_1B64870(&Method_System_Linq_Enumerable_Where_GiftEntity___, v10);
    sub_1B64870(&System_Func_GiftEntity__bool__TypeInfo, v11);
    sub_1B64870(&MissionInfoMaker_TypeInfo, v12);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v13);
    sub_1B64870(&Method_EventMissionItemListViewItemDraw___c__DisplayClass19_0__SetRewardItemIcon_b__0__, v14);
    this = (EventMissionItemListViewItemDraw_o *)sub_1B64870(
                                                   &EventMissionItemListViewItemDraw___c__DisplayClass19_0_TypeInfo,
                                                   v15);
    byte_4A022C2 = 1;
  }
  if ( !v5 )
    goto LABEL_82;
  if ( MissionListViewItem__get_EventRewardType((MissionListViewItem_o *)v5, 0LL) != 1 )
    goto LABEL_37;
  if ( EventMissionItemListViewItem__get_IsHideReward(v5, v16) )
  {
    this = (EventMissionItemListViewItemDraw_o *)v6->fields.itemIcon;
    v6->fields.isMultipleReward = 0;
    if ( !this )
      goto LABEL_82;
    completedImg_high = 99;
LABEL_8:
    ItemIconComponent__SetItemImage((ItemIconComponent_o *)this, completedImg_high, 0LL);
    goto LABEL_37;
  }
  v18 = sub_1B64ABC(EventMissionItemListViewItemDraw___c__DisplayClass19_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v18, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E3B674 *)Method_DataManager_GetMaster_GiftMaster___);
  this = (EventMissionItemListViewItemDraw_o *)MissionListViewItem__get_EventMissionEntity(
                                                 (MissionListViewItem_o *)v5,
                                                 0LL);
  if ( !this || !Master_object )
    goto LABEL_82;
  GiftListById = GiftMaster__GetGiftListById((GiftMaster_o *)Master_object, HIDWORD(this->fields.missionNoLb), 0LL);
  v6->fields.giftEntityList = GiftListById;
  p_giftEntityList = (System_Collections_Generic_IEnumerable_TSource__o **)&v6->fields.giftEntityList;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&v6->fields.giftEntityList, (int32_t)GiftListById, v22, v23);
  giftEntityList = v6->fields.giftEntityList;
  if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
  this = (EventMissionItemListViewItemDraw_o *)MissionInfoMaker__GetSubGiftEntity(giftEntityList, 0LL);
  if ( !v18 )
    goto LABEL_82;
  *(_QWORD *)(v18 + 16) = this;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v18 + 16), (int32_t)this, v25, v26);
  v27 = *p_giftEntityList;
  v28 = (System_Func_object__bool__o *)sub_1B64ABC(System_Func_GiftEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v28,
    (Il2CppObject *)v18,
    Method_EventMissionItemListViewItemDraw___c__DisplayClass19_0__SetRewardItemIcon_b__0__,
    0LL);
  v29 = System_Linq_Enumerable__Where_object_(
          v27,
          (System_Func_TSource__bool__o *)v28,
          (const MethodInfo_2E79378 *)Method_System_Linq_Enumerable_Where_GiftEntity___);
  v30 = System_Linq_Enumerable__ToArray_object_(
          v29,
          (const MethodInfo_2E736A0 *)Method_System_Linq_Enumerable_ToArray_GiftEntity___);
  *p_giftEntityList = (System_Collections_Generic_IEnumerable_TSource__o *)v30;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&v6->fields.giftEntityList, (int32_t)v30, v31, v32);
  if ( !*p_giftEntityList )
    goto LABEL_82;
  monitor = (*p_giftEntityList)[1].monitor;
  if ( !monitor )
    return;
  v6->fields.isMultipleReward = (int)monitor > 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v34 = DataManager__GetMaster_object_((const MethodInfo_2E3B674 *)Method_DataManager_GetMaster_EventMissionAddMaster___);
  this = (EventMissionItemListViewItemDraw_o *)MissionListViewItem__get_EventMissionEntity(
                                                 (MissionListViewItem_o *)v5,
                                                 0LL);
  if ( !this )
    goto LABEL_82;
  m_CachedPtr = this->fields.m_CachedPtr;
  this = (EventMissionItemListViewItemDraw_o *)MissionListViewItem__get_EventMissionEntity(
                                                 (MissionListViewItem_o *)v5,
                                                 0LL);
  if ( !this || !v34 )
    goto LABEL_82;
  v36 = EventMissionAddMaster__GetEventMissionChangeRewardIcon(
          (EventMissionAddMaster_o *)v34,
          m_CachedPtr,
          HIDWORD(this->fields.m_CancellationTokenSource),
          0,
          0LL);
  if ( !System_String__IsNullOrEmpty(v36, 0LL) )
    goto LABEL_26;
  this = (EventMissionItemListViewItemDraw_o *)MissionListViewItem__get_EventMissionEntity(
                                                 (MissionListViewItem_o *)v5,
                                                 0LL);
  if ( !this )
    goto LABEL_82;
  if ( SHIDWORD(this->fields.completedImg) >= 1 )
  {
LABEL_26:
    v6->fields.isMultipleReward = 0;
    v5->fields.isHideRewardDetail = 1;
LABEL_27:
    if ( !System_String__IsNullOrEmpty(v36, 0LL) )
    {
      this = (EventMissionItemListViewItemDraw_o *)v6->fields.itemIcon;
      if ( !this )
        goto LABEL_82;
      ItemIconComponent__SetItemImageByName((ItemIconComponent_o *)this, v36, 0LL);
LABEL_35:
      this = (EventMissionItemListViewItemDraw_o *)v6->fields.itemIcon;
      if ( !this )
        goto LABEL_82;
      ItemIconComponent__SetAlpha((ItemIconComponent_o *)this, 1.0, 0LL);
      goto LABEL_37;
    }
    this = (EventMissionItemListViewItemDraw_o *)MissionListViewItem__get_EventMissionEntity(
                                                   (MissionListViewItem_o *)v5,
                                                   0LL);
    if ( !this )
      goto LABEL_82;
    if ( SHIDWORD(this->fields.completedImg) >= 1 )
    {
      itemIcon = (EventMissionItemListViewItemDraw_o *)v6->fields.itemIcon;
      this = (EventMissionItemListViewItemDraw_o *)MissionListViewItem__get_EventMissionEntity(
                                                     (MissionListViewItem_o *)v5,
                                                     0LL);
      if ( !this || !itemIcon )
        goto LABEL_82;
      completedImg_high = HIDWORD(this->fields.completedImg);
      this = itemIcon;
      goto LABEL_8;
    }
    v44 = (GiftEntity_array *)*p_giftEntityList;
    if ( !*p_giftEntityList )
      goto LABEL_82;
    if ( v44->max_length )
    {
      v45 = v44->m_Items[0];
      if ( !v45 )
        goto LABEL_82;
      item = (EventMissionItemListViewItem_o *)(unsigned int)v45->fields.prioredIconId;
      if ( (int)item < 1 )
      {
        if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
        IconGiftEntity = MissionInfoMaker__GetIconGiftEntity(v44, 0LL);
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
          item = 0LL;
          num = -1;
        }
        this = (EventMissionItemListViewItemDraw_o *)v6->fields.itemIcon;
        if ( !this )
          goto LABEL_82;
        ItemIconComponent__SetGiftDesignSize((ItemIconComponent_o *)this, (int32_t)item, objectId, num, 0LL);
      }
      else
      {
        this = (EventMissionItemListViewItemDraw_o *)v6->fields.itemIcon;
        if ( !this )
          goto LABEL_82;
        v46 = v45->fields.num;
        if ( v46 <= 1 )
          v47 = -1;
        else
          v47 = v46;
        ItemIconComponent__SetItemImage_37836068((ItemIconComponent_o *)this, (int32_t)item, v47, 0LL);
      }
      goto LABEL_35;
    }
LABEL_83:
    sub_1B64AD4(this, item);
  }
  if ( !v6->fields.isMultipleReward )
    goto LABEL_27;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (EventMissionItemListViewItemDraw_o *)UnityEngine_Object__op_Inequality(
                                                 (UnityEngine_Object_o *)manager,
                                                 0LL,
                                                 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_37;
  v40 = *p_giftEntityList;
  if ( !v40 || !manager )
    goto LABEL_82;
  this = (EventMissionItemListViewItemDraw_o *)MissionListViewManager__GetAlphaAnimCnt(
                                                 (MissionListViewManager_o *)manager,
                                                 (int32_t)v40[1].monitor,
                                                 0LL);
  if ( (unsigned int)this >= LODWORD(v40[1].monitor) )
    goto LABEL_83;
  v41 = (_DWORD *)*((_QWORD *)&v40[2].klass + (int)this);
  if ( !v41 )
    goto LABEL_82;
  item = (EventMissionItemListViewItem_o *)(unsigned int)v41[11];
  this = (EventMissionItemListViewItemDraw_o *)v6->fields.itemIcon;
  v42 = v41[7];
  if ( (int)item < 1 )
  {
    if ( !this )
      goto LABEL_82;
    if ( v42 <= 1 )
      v51 = -1;
    else
      v51 = v41[7];
    ItemIconComponent__SetGiftDesignSize((ItemIconComponent_o *)this, v41[5], v41[6], v51, 0LL);
  }
  else
  {
    if ( !this )
      goto LABEL_82;
    if ( v42 <= 1 )
      v43 = -1;
    else
      v43 = v41[7];
    ItemIconComponent__SetItemImage_37836068((ItemIconComponent_o *)this, (int32_t)item, v43, 0LL);
  }
LABEL_37:
  if ( MissionListViewItem__get_EventRewardType((MissionListViewItem_o *)v5, 0LL) == 3 )
  {
    if ( EventMissionItemListViewItem__get_IsHideReward(v5, v38) )
    {
      this = (EventMissionItemListViewItemDraw_o *)v6->fields.itemIcon;
      v6->fields.isMultipleReward = 0;
      if ( this )
      {
        iconId = 99;
LABEL_44:
        ItemIconComponent__SetItemImage((ItemIconComponent_o *)this, iconId, 0LL);
        return;
      }
    }
    else
    {
      this = (EventMissionItemListViewItemDraw_o *)v6->fields.itemIcon;
      if ( this )
      {
        iconId = v5->fields.iconId;
        goto LABEL_44;
      }
    }
LABEL_82:
    sub_1B64ACC(this, item);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventMissionItemListViewItemDraw__SetRewardStatusImg(
        EventMissionItemListViewItemDraw_o *this,
        int32_t status,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_GameObject_o *lockImgInfo; // x0
  UILabel_o *timeOverLb; // x19

  if ( (byte_4A022C3 & 1) == 0 )
  {
    sub_1B64870(&LocalizationManager_TypeInfo, *(_QWORD *)&status);
    sub_1B64870(&StringLiteral_8640/*"MISSION_PERIOD_END"*/, v5);
    byte_4A022C3 = 1;
  }
  MissionListViewItemDraw__SetRewardStatusImg((MissionListViewItemDraw_o *)this, status, 0LL);
  if ( status == 5 )
  {
    lockImgInfo = this->fields.lockImgInfo;
    if ( !lockImgInfo )
      goto LABEL_11;
    UnityEngine_GameObject__SetActive(lockImgInfo, 0, 0LL);
    lockImgInfo = this->fields.timeOverInfo;
    if ( !lockImgInfo )
      goto LABEL_11;
    UnityEngine_GameObject__SetActive(lockImgInfo, 1, 0LL);
    timeOverLb = this->fields.timeOverLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    lockImgInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8640/*"MISSION_PERIOD_END"*/, 0LL);
    if ( !timeOverLb )
LABEL_11:
      sub_1B64ACC(lockImgInfo, v6);
    UILabel__set_text(timeOverLb, (System_String_o *)lockImgInfo, 0LL);
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
  const MethodInfo *v11; // x1
  UnityEngine_Component_o *resTimeLb; // x0
  UnityEngine_Component_o *v13; // x21
  int64_t oldTime; // x23
  int64_t v15; // x22
  EventMissionItemListViewItemDraw_c *v16; // x8
  UILabel_o *v17; // x23
  int64_t klass; // x24
  int64_t v19; // x24
  int64_t v20; // x21
  System_String_o *RestTime; // x21

  if ( (byte_4A022C6 & 1) == 0 )
  {
    sub_1B64870(&EventMissionItemListViewItemDraw_TypeInfo, item);
    sub_1B64870(&LocalizationManager_TypeInfo, v7);
    sub_1B64870(&NetworkManager_TypeInfo, v8);
    sub_1B64870(&StringLiteral_13284/*"TIME_REST_TIMEOVER"*/, v9);
    byte_4A022C6 = 1;
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
          goto LABEL_33;
        resTimeLb = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(resTimeLb, 0LL);
        if ( !resTimeLb )
          goto LABEL_33;
        if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)resTimeLb, 0LL) )
        {
          resTimeLb = (UnityEngine_Component_o *)MissionListViewItem__get_EventMissionEntity(
                                                   (MissionListViewItem_o *)item,
                                                   0LL);
          if ( !this->fields.resTimeLb )
            goto LABEL_33;
          v13 = resTimeLb;
          resTimeLb = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this->fields.resTimeLb,
                                                   0LL);
          if ( !resTimeLb )
            goto LABEL_33;
          if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)resTimeLb, 0LL) )
          {
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            resTimeLb = (UnityEngine_Component_o *)NetworkManager__getTime(0LL);
            oldTime = this->fields.oldTime;
            v15 = (int64_t)resTimeLb;
            v16 = EventMissionItemListViewItemDraw_TypeInfo;
            if ( !EventMissionItemListViewItemDraw_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(EventMissionItemListViewItemDraw_TypeInfo);
              v16 = EventMissionItemListViewItemDraw_TypeInfo;
            }
            if ( v15 - oldTime >= v16->static_fields->TIME_UPDATE_ITVL_SEC )
            {
              if ( !v13 )
                goto LABEL_33;
              v17 = this->fields.resTimeLb;
              if ( this->fields.isAchiveTime )
              {
                klass = (int64_t)v13[3].klass;
                if ( !v16->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(v16);
                resTimeLb = (UnityEngine_Component_o *)EventMissionItemListViewItemDraw__GetAchiveTimeText(klass, v11);
              }
              else
              {
                v19 = *(_QWORD *)&v13[2].fields.m_CachedPtr;
                if ( !v16->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(v16);
                resTimeLb = (UnityEngine_Component_o *)EventMissionItemListViewItemDraw__GetRestTimeText(v19, v11);
              }
              v11 = (const MethodInfo *)resTimeLb;
              if ( !v17 )
                goto LABEL_33;
              UILabel__set_text(v17, (System_String_o *)resTimeLb, 0LL);
              this->fields.oldTime = v15;
              v20 = *(_QWORD *)&v13[2].fields.m_CachedPtr;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              RestTime = LocalizationManager__GetRestTime(v20, 0LL);
              resTimeLb = (UnityEngine_Component_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_13284/*"TIME_REST_TIMEOVER"*/,
                                                       0LL);
              if ( !RestTime )
                goto LABEL_33;
              if ( System_String__Equals_61391892(RestTime, (System_String_o *)resTimeLb, 0LL) )
              {
                ((void (__fastcall *)(EventMissionItemListViewItemDraw_o *, EventMissionItemListViewItem_o *, Il2CppMethodPointer))this->klass->vtable._5_InitDispResTime.method)(
                  this,
                  item,
                  this->klass->vtable._6_SetLockMissionBoard.methodPtr);
                ((void (__fastcall *)(EventMissionItemListViewItem_o *, Il2CppMethodPointer))item->klass->vtable._6_CheckMissionCond.method)(
                  item,
                  item->klass->vtable._7_SetGiftData.methodPtr);
                resTimeLb = (UnityEngine_Component_o *)this->fields.lockImgInfo;
                if ( resTimeLb )
                {
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)resTimeLb, 0, 0LL);
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
LABEL_33:
                sub_1B64ACC(resTimeLb, v11);
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
  __int64 v7; // x1

  if ( (byte_4A022C8 & 1) == 0 )
  {
    sub_1B64870(&UnityEngine_Object_TypeInfo, item);
    byte_4A022C8 = 1;
  }
  newIcon = (UnityEngine_Object_o *)this->fields.newIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = (ShiningIconComponent_o *)UnityEngine_Object__op_Inequality(newIcon, 0LL, 0LL);
  if ( ((unsigned __int8)v6 & 1) != 0 )
  {
    if ( !item )
      goto LABEL_14;
    if ( item->fields.isNew && this->fields.isDispTime )
    {
      v6 = this->fields.newIcon;
      if ( v6 )
      {
        ShiningIconComponent__Set(v6, 0LL);
        return;
      }
LABEL_14:
      sub_1B64ACC(v6, v7);
    }
    v6 = this->fields.newIcon;
    if ( !v6 )
      goto LABEL_14;
    ShiningIconComponent__Clear(v6, 0LL);
  }
}


void __fastcall EventMissionItemListViewItemDraw___c__DisplayClass19_0___ctor(
        EventMissionItemListViewItemDraw___c__DisplayClass19_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall EventMissionItemListViewItemDraw___c__DisplayClass19_0___SetRewardItemIcon_b__0(
        EventMissionItemListViewItemDraw___c__DisplayClass19_0_o *this,
        GiftEntity_o *entity,
        const MethodInfo *method)
{
  return entity != this->fields.subGiftEntity;
}