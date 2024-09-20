void __fastcall EventMissionItemListViewItemDraw___cctor(const MethodInfo *method)
{
  if ( (byte_4A5EFB5 & 1) == 0 )
  {
    sub_1B885B0(&EventMissionItemListViewItemDraw_TypeInfo);
    byte_4A5EFB5 = 1;
  }
  EventMissionItemListViewItemDraw_TypeInfo->static_fields->TIME_UPDATE_ITVL_SEC = 60;
}


void __fastcall EventMissionItemListViewItemDraw___ctor(
        EventMissionItemListViewItemDraw_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A5EFB4 & 1) == 0 )
  {
    sub_1B885B0(&MissionListViewItemDraw_TypeInfo);
    byte_4A5EFB4 = 1;
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

  if ( (byte_4A5EFA9 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5EFA9 = 1;
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
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.baseStampSpriteAtlas, (int32_t)mAtlas, v6, v7);
    v12 = this->fields.stampSprite;
    if ( !v12 )
      goto LABEL_16;
    mSpriteName = v12->fields.mSpriteName;
    this->fields.baseStampSpriteName = mSpriteName;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.baseStampSpriteName, (int32_t)mSpriteName, v10, v11);
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
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.baseBoardMaskSpriteAtlas, (int32_t)v18, v15, v16);
      v21 = this->fields.boardMaskSprite;
      if ( v21 )
      {
        v22 = v21->fields.mSpriteName;
        this->fields.baseBoardMaskSpriteName = v22;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.baseBoardMaskSpriteName, (int32_t)v22, v19, v20);
        return;
      }
    }
LABEL_16:
    sub_1B8880C(v4, v5);
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
    sub_1B88814(this, manager);
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
      ItemIconComponent__SetItemImage_38147292((ItemIconComponent_o *)this, (int32_t)manager, v7, 0LL);
      return;
    }
LABEL_18:
    sub_1B8880C(this, manager);
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
  System_String_o *v3; // x20
  System_String_o *RestTime; // x2

  if ( (byte_4A5EFAF & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_117/*" "*/);
    sub_1B885B0(&StringLiteral_13325/*"TIME_REST_ACHIVE"*/);
    byte_4A5EFAF = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_13325/*"TIME_REST_ACHIVE"*/, 0LL);
  RestTime = LocalizationManager__GetRestTime(closeTime, 0LL);
  return System_String__Concat_61718292(v3, (System_String_o *)StringLiteral_117/*" "*/, RestTime, 0LL);
}


System_String_o *__fastcall EventMissionItemListViewItemDraw__GetRestTimeText(
        int64_t endTime,
        const MethodInfo *method)
{
  System_String_o *v3; // x20
  System_String_o *RestTime; // x1

  if ( (byte_4A5EFAE & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_13337/*"TIME_REST_QUEST"*/);
    byte_4A5EFAE = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_13337/*"TIME_REST_QUEST"*/, 0LL);
  RestTime = LocalizationManager__GetRestTime(endTime, 0LL);
  return System_String__Concat_61707032(v3, RestTime, 0LL);
}


void __fastcall EventMissionItemListViewItemDraw__InitDispResTime(
        EventMissionItemListViewItemDraw_o *this,
        MissionListViewItem_o *missionListviewItem,
        const MethodInfo *method)
{
  int64_t Time; // x0
  MethodInfo *AchiveTimeText; // x1
  int64_t v7; // x21
  bool *p_isDispTime; // x22
  int64_t v9; // x8
  int64_t v10; // x21
  System_String_o *RestTimeText; // x0
  int64_t v12; // x21
  int64_t v13; // x21
  int v14; // w8
  UILabel_o *timeOverLb; // x20

  if ( (byte_4A5EFAB & 1) == 0 )
  {
    sub_1B885B0(&EventMissionItemListViewItemDraw_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&StringLiteral_8678/*"MISSION_PERIOD_END"*/);
    byte_4A5EFAB = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  this->fields.isAchiveTime = 0;
  if ( !missionListviewItem )
    goto LABEL_43;
  v7 = Time;
  Time = (int64_t)MissionListViewItem__get_EventMissionEntity(missionListviewItem, 0LL);
  if ( !Time )
    goto LABEL_43;
  if ( v7 >= *(_QWORD *)(Time + 56) )
  {
    Time = (int64_t)MissionListViewItem__get_EventMissionEntity(missionListviewItem, 0LL);
    if ( !Time )
      goto LABEL_43;
    v9 = *(_QWORD *)(Time + 64);
    this->fields.isDispTime = v7 < v9;
    p_isDispTime = &this->fields.isDispTime;
    if ( v7 < v9 )
    {
      Time = (int64_t)MissionListViewItem__get_EventMissionEntity(missionListviewItem, 0LL);
      if ( !Time )
        goto LABEL_43;
      v10 = *(_QWORD *)(Time + 64);
      if ( !EventMissionItemListViewItemDraw_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventMissionItemListViewItemDraw_TypeInfo);
      RestTimeText = EventMissionItemListViewItemDraw__GetRestTimeText(v10, AchiveTimeText);
      if ( missionListviewItem->fields.progStatus == 3 )
      {
        Time = (int64_t)MissionListViewItem__get_EventMissionEntity(missionListviewItem, 0LL);
        if ( !Time )
          goto LABEL_43;
        v12 = *(_QWORD *)(Time + 72);
        if ( !EventMissionItemListViewItemDraw_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(EventMissionItemListViewItemDraw_TypeInfo);
        AchiveTimeText = (MethodInfo *)EventMissionItemListViewItemDraw__GetAchiveTimeText(v12, AchiveTimeText);
        this->fields.isAchiveTime = 1;
      }
      else
      {
        AchiveTimeText = (MethodInfo *)RestTimeText;
      }
      Time = (int64_t)this->fields.resTimeLb;
      if ( !Time )
LABEL_43:
        sub_1B8880C(Time, AchiveTimeText);
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
    v14 = 1;
    missionListviewItem->fields.isNowMission = 1;
    goto LABEL_29;
  }
  this->fields.isAchiveTime = 1;
  Time = (int64_t)MissionListViewItem__get_EventMissionEntity(missionListviewItem, 0LL);
  if ( !Time )
    goto LABEL_43;
  v13 = *(_QWORD *)(Time + 72);
  if ( !EventMissionItemListViewItemDraw_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventMissionItemListViewItemDraw_TypeInfo);
  Time = (int64_t)EventMissionItemListViewItemDraw__GetAchiveTimeText(v13, AchiveTimeText);
  if ( !this->fields.resTimeLb )
    goto LABEL_43;
  AchiveTimeText = (MethodInfo *)Time;
  Time = (int64_t)this->fields.resTimeLb;
LABEL_28:
  UILabel__set_text((UILabel_o *)Time, (System_String_o *)AchiveTimeText, 0LL);
  v14 = 0;
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
  if ( v14 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0LL);
    timeOverLb = this->fields.timeOverLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Time = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_8678/*"MISSION_PERIOD_END"*/, 0LL);
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


void __fastcall EventMissionItemListViewItemDraw__ModifyBoardImage(
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

  if ( (byte_4A5EFB3 & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5EFB3 = 1;
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
        v8 = this->fields.baseSprite;
        baseAtlas = this->fields.baseAtlas;
        baseSpriteName = this->fields.baseSpriteName;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        AtlasManager__SetMissionBoardSprite(v8, baseAtlas, baseSpriteName, bannerGroupId, 0LL);
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
  __int64 methodPtr_low; // x10
  UnityEngine_Object_o *baseButton; // x21
  const MethodInfo *v7; // x2

  if ( (byte_4A5EFB1 & 1) == 0 )
  {
    sub_1B885B0(&EventMissionItemListViewItem_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5EFB1 = 1;
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
      EventMissionItemListViewItemDraw__UpdateNewIcon(this, (EventMissionItemListViewItem_o *)missionListViewItem, v7);
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
  __int64 methodPtr_low; // x10
  __int64 v10; // x10
  __int64 v11; // x1
  UnityEngine_Component_o *iconLabel; // x0
  int v14; // w21
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x2
  UISprite_o *rewardBackSprite; // x21
  int32_t Type; // w0
  int32_t rewardObjectId; // w23
  int32_t klass; // w22
  int32_t v21; // w24
  UnityEngine_Object_o *stampSprite; // x21
  UISprite_o *v23; // x24
  System_String_o *baseStampSpriteName; // x21
  UIAtlas_o *baseStampSpriteAtlas; // x23
  int32_t bannerGroupId; // w22
  UnityEngine_Object_o *boardMaskSprite; // x21
  UISprite_o *v28; // x22
  System_String_o *baseBoardMaskSpriteName; // x19
  UIAtlas_o *baseBoardMaskSpriteAtlas; // x21
  int32_t v31; // w20

  if ( (byte_4A5EFAA & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&EventMissionItemListViewItem_TypeInfo);
    sub_1B885B0(&EventMissionItemListViewManager_TypeInfo);
    sub_1B885B0(&EventRewardRootComponent_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5EFAA = 1;
  }
  if ( !MissionListViewItemDraw__SetItem(
          (MissionListViewItemDraw_o *)this,
          missionListViewItem,
          mode,
          listViewManager,
          0LL) )
    return 0;
  if ( missionListViewItem )
  {
    methodPtr_low = LOBYTE(EventMissionItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(missionListViewItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
    {
      if ( (EventMissionItemListViewItem_c *)missionListViewItem->klass->_2.typeHierarchy[methodPtr_low - 1] != EventMissionItemListViewItem_TypeInfo )
        missionListViewItem = 0LL;
      if ( !listViewManager )
        goto LABEL_14;
      goto LABEL_12;
    }
    missionListViewItem = 0LL;
  }
  if ( !listViewManager )
    goto LABEL_14;
LABEL_12:
  v10 = LOBYTE(EventMissionItemListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(listViewManager->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v10 )
  {
    if ( (EventMissionItemListViewManager_c *)listViewManager->klass->_2.typeHierarchy[v10 - 1] != EventMissionItemListViewManager_TypeInfo )
      listViewManager = 0LL;
    if ( !missionListViewItem )
      return 0;
    goto LABEL_19;
  }
  listViewManager = 0LL;
LABEL_14:
  if ( !missionListViewItem )
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
      v14 = BYTE1(missionListViewItem[1].monitor);
      iconLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(iconLabel, 0LL);
      if ( iconLabel )
      {
        if ( v14 )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)iconLabel, 0, 0LL);
LABEL_30:
          EventMissionItemListViewItemDraw__SetRewardItemIcon(
            this,
            (EventMissionItemListViewItem_o *)missionListViewItem,
            (EventMissionItemListViewManager_o *)listViewManager,
            v15);
          EventMissionItemListViewItemDraw__UpdateNewIcon(
            this,
            (EventMissionItemListViewItem_o *)missionListViewItem,
            v16);
          rewardBackSprite = this->fields.rewardBackSprite;
          Type = MissionListViewItem__get_Type(missionListViewItem, 0LL);
          rewardObjectId = missionListViewItem->fields.rewardObjectId;
          klass = (int32_t)missionListViewItem[1].klass;
          v21 = Type;
          if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
          EventRewardRootComponent__SetRewardRaritySprite(rewardBackSprite, v21, rewardObjectId, klass, 0LL);
          goto LABEL_33;
        }
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)iconLabel, 1, 0LL);
        iconLabel = (UnityEngine_Component_o *)this->fields.iconLabel;
        if ( iconLabel )
        {
          UIIconLabel__Set_38235604(
            (UIIconLabel_o *)iconLabel,
            57,
            missionListViewItem->fields.dispNo,
            0,
            0,
            0LL,
            0,
            0,
            0,
            0LL);
          goto LABEL_30;
        }
      }
    }
    sub_1B8880C(iconLabel, v11);
  }
LABEL_33:
  stampSprite = (UnityEngine_Object_o *)this->fields.stampSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(stampSprite, 0LL, 0LL) )
  {
    v23 = this->fields.stampSprite;
    baseStampSpriteAtlas = this->fields.baseStampSpriteAtlas;
    baseStampSpriteName = this->fields.baseStampSpriteName;
    bannerGroupId = missionListViewItem->fields.bannerGroupId;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetMissionBoardStampSprite(v23, baseStampSpriteAtlas, baseStampSpriteName, bannerGroupId, 0LL);
  }
  boardMaskSprite = (UnityEngine_Object_o *)this->fields.boardMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(boardMaskSprite, 0LL, 0LL) )
  {
    v28 = this->fields.boardMaskSprite;
    baseBoardMaskSpriteAtlas = this->fields.baseBoardMaskSpriteAtlas;
    baseBoardMaskSpriteName = this->fields.baseBoardMaskSpriteName;
    v31 = missionListViewItem->fields.bannerGroupId;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetMissionBoardMaskSprite(v28, baseBoardMaskSpriteAtlas, baseBoardMaskSpriteName, v31, 0LL);
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
    sub_1B8880C(0LL, missionListViewItem);
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
  const MethodInfo *v7; // x1
  int32_t completedImg_high; // w1
  __int64 v9; // x23
  Il2CppObject *Master_object; // x22
  GiftEntity_array *GiftListById; // x0
  System_Collections_Generic_IEnumerable_TSource__o **p_giftEntityList; // x22
  int32_t v13; // w2
  int32_t v14; // w3
  GiftEntity_array *giftEntityList; // x24
  int32_t v16; // w2
  int32_t v17; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x24
  System_Func_object__bool__o *v19; // x25
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x0
  System_Object_array *v21; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  void *monitor; // x8
  Il2CppObject *v25; // x23
  int32_t m_CachedPtr; // w24
  System_String_o *v27; // x23
  EventMissionItemListViewItemDraw_o *itemIcon; // x21
  const MethodInfo *v29; // x1
  int32_t iconId; // w1
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x22
  _DWORD *v32; // x8
  int v33; // w9
  int32_t v34; // w2
  GiftEntity_array *v35; // x21
  GiftEntity_o *v36; // x8
  int v37; // w8
  int32_t v38; // w2
  GiftEntity_o *IconGiftEntity; // x0
  int32_t objectId; // w2
  int32_t num; // w3
  int32_t v42; // w3

  v5 = item;
  v6 = this;
  if ( (byte_4A5EFAC & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_EventMissionAddMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_GiftMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_GiftEntity___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_GiftEntity___);
    sub_1B885B0(&System_Func_GiftEntity__bool__TypeInfo);
    sub_1B885B0(&MissionInfoMaker_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_EventMissionItemListViewItemDraw___c__DisplayClass19_0__SetRewardItemIcon_b__0__);
    this = (EventMissionItemListViewItemDraw_o *)sub_1B885B0(&EventMissionItemListViewItemDraw___c__DisplayClass19_0_TypeInfo);
    byte_4A5EFAC = 1;
  }
  if ( !v5 )
    goto LABEL_82;
  if ( MissionListViewItem__get_EventRewardType((MissionListViewItem_o *)v5, 0LL) != 1 )
    goto LABEL_37;
  if ( EventMissionItemListViewItem__get_IsHideReward(v5, v7) )
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
  v9 = sub_1B887FC(EventMissionItemListViewItemDraw___c__DisplayClass19_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_GiftMaster___);
  this = (EventMissionItemListViewItemDraw_o *)MissionListViewItem__get_EventMissionEntity(
                                                 (MissionListViewItem_o *)v5,
                                                 0LL);
  if ( !this || !Master_object )
    goto LABEL_82;
  GiftListById = GiftMaster__GetGiftListById((GiftMaster_o *)Master_object, HIDWORD(this->fields.missionNoLb), 0LL);
  v6->fields.giftEntityList = GiftListById;
  p_giftEntityList = (System_Collections_Generic_IEnumerable_TSource__o **)&v6->fields.giftEntityList;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v6->fields.giftEntityList, (int32_t)GiftListById, v13, v14);
  giftEntityList = v6->fields.giftEntityList;
  if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
  this = (EventMissionItemListViewItemDraw_o *)MissionInfoMaker__GetSubGiftEntity(giftEntityList, 0LL);
  if ( !v9 )
    goto LABEL_82;
  *(_QWORD *)(v9 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 16), (int32_t)this, v16, v17);
  v18 = *p_giftEntityList;
  v19 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_GiftEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v19,
    (Il2CppObject *)v9,
    Method_EventMissionItemListViewItemDraw___c__DisplayClass19_0__SetRewardItemIcon_b__0__,
    0LL);
  v20 = System_Linq_Enumerable__Where_object_(
          v18,
          (System_Func_TSource__bool__o *)v19,
          (const MethodInfo_2EBE07C *)Method_System_Linq_Enumerable_Where_GiftEntity___);
  v21 = System_Linq_Enumerable__ToArray_object_(
          v20,
          (const MethodInfo_2EB86E4 *)Method_System_Linq_Enumerable_ToArray_GiftEntity___);
  *p_giftEntityList = (System_Collections_Generic_IEnumerable_TSource__o *)v21;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v6->fields.giftEntityList, (int32_t)v21, v22, v23);
  if ( !*p_giftEntityList )
    goto LABEL_82;
  monitor = (*p_giftEntityList)[1].monitor;
  if ( !monitor )
    return;
  v6->fields.isMultipleReward = (int)monitor > 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v25 = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventMissionAddMaster___);
  this = (EventMissionItemListViewItemDraw_o *)MissionListViewItem__get_EventMissionEntity(
                                                 (MissionListViewItem_o *)v5,
                                                 0LL);
  if ( !this )
    goto LABEL_82;
  m_CachedPtr = this->fields.m_CachedPtr;
  this = (EventMissionItemListViewItemDraw_o *)MissionListViewItem__get_EventMissionEntity(
                                                 (MissionListViewItem_o *)v5,
                                                 0LL);
  if ( !this || !v25 )
    goto LABEL_82;
  v27 = EventMissionAddMaster__GetEventMissionChangeRewardIcon(
          (EventMissionAddMaster_o *)v25,
          m_CachedPtr,
          HIDWORD(this->fields.m_CancellationTokenSource),
          0,
          0LL);
  if ( !System_String__IsNullOrEmpty(v27, 0LL) )
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
    if ( !System_String__IsNullOrEmpty(v27, 0LL) )
    {
      this = (EventMissionItemListViewItemDraw_o *)v6->fields.itemIcon;
      if ( !this )
        goto LABEL_82;
      ItemIconComponent__SetItemImageByName((ItemIconComponent_o *)this, v27, 0LL);
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
    v35 = (GiftEntity_array *)*p_giftEntityList;
    if ( !*p_giftEntityList )
      goto LABEL_82;
    if ( v35->max_length )
    {
      v36 = v35->m_Items[0];
      if ( !v36 )
        goto LABEL_82;
      item = (EventMissionItemListViewItem_o *)(unsigned int)v36->fields.prioredIconId;
      if ( (int)item < 1 )
      {
        if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
        IconGiftEntity = MissionInfoMaker__GetIconGiftEntity(v35, 0LL);
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
        v37 = v36->fields.num;
        if ( v37 <= 1 )
          v38 = -1;
        else
          v38 = v37;
        ItemIconComponent__SetItemImage_38147292((ItemIconComponent_o *)this, (int32_t)item, v38, 0LL);
      }
      goto LABEL_35;
    }
LABEL_83:
    sub_1B88814(this, item);
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
  v31 = *p_giftEntityList;
  if ( !v31 || !manager )
    goto LABEL_82;
  this = (EventMissionItemListViewItemDraw_o *)MissionListViewManager__GetAlphaAnimCnt(
                                                 (MissionListViewManager_o *)manager,
                                                 (int32_t)v31[1].monitor,
                                                 0LL);
  if ( (unsigned int)this >= LODWORD(v31[1].monitor) )
    goto LABEL_83;
  v32 = (_DWORD *)*((_QWORD *)&v31[2].klass + (int)this);
  if ( !v32 )
    goto LABEL_82;
  item = (EventMissionItemListViewItem_o *)(unsigned int)v32[11];
  this = (EventMissionItemListViewItemDraw_o *)v6->fields.itemIcon;
  v33 = v32[7];
  if ( (int)item < 1 )
  {
    if ( !this )
      goto LABEL_82;
    if ( v33 <= 1 )
      v42 = -1;
    else
      v42 = v32[7];
    ItemIconComponent__SetGiftDesignSize((ItemIconComponent_o *)this, v32[5], v32[6], v42, 0LL);
  }
  else
  {
    if ( !this )
      goto LABEL_82;
    if ( v33 <= 1 )
      v34 = -1;
    else
      v34 = v32[7];
    ItemIconComponent__SetItemImage_38147292((ItemIconComponent_o *)this, (int32_t)item, v34, 0LL);
  }
LABEL_37:
  if ( MissionListViewItem__get_EventRewardType((MissionListViewItem_o *)v5, 0LL) == 3 )
  {
    if ( EventMissionItemListViewItem__get_IsHideReward(v5, v29) )
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
    sub_1B8880C(this, item);
  }
}


void __fastcall EventMissionItemListViewItemDraw__SetRewardStatusImg(
        EventMissionItemListViewItemDraw_o *this,
        int32_t status,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_GameObject_o *lockImgInfo; // x0
  UILabel_o *timeOverLb; // x19

  if ( (byte_4A5EFAD & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_8678/*"MISSION_PERIOD_END"*/);
    byte_4A5EFAD = 1;
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
    lockImgInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8678/*"MISSION_PERIOD_END"*/, 0LL);
    if ( !timeOverLb )
LABEL_11:
      sub_1B8880C(lockImgInfo, v5);
    UILabel__set_text(timeOverLb, (System_String_o *)lockImgInfo, 0LL);
  }
}


void __fastcall EventMissionItemListViewItemDraw__UpdateItem(
        EventMissionItemListViewItemDraw_o *this,
        EventMissionItemListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  EventMissionEntity_o *EventMissionEntity; // x0
  const MethodInfo *v8; // x1
  UnityEngine_Component_o *resTimeLb; // x0
  UnityEngine_Component_o *v10; // x21
  int64_t oldTime; // x23
  int64_t v12; // x22
  EventMissionItemListViewItemDraw_c *v13; // x8
  UILabel_o *v14; // x23
  int64_t klass; // x24
  int64_t v16; // x24
  int64_t v17; // x21
  System_String_o *RestTime; // x21

  if ( (byte_4A5EFB0 & 1) == 0 )
  {
    sub_1B885B0(&EventMissionItemListViewItemDraw_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&StringLiteral_13349/*"TIME_REST_TIMEOVER"*/);
    byte_4A5EFB0 = 1;
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
          v10 = resTimeLb;
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
            v12 = (int64_t)resTimeLb;
            v13 = EventMissionItemListViewItemDraw_TypeInfo;
            if ( !EventMissionItemListViewItemDraw_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(EventMissionItemListViewItemDraw_TypeInfo);
              v13 = EventMissionItemListViewItemDraw_TypeInfo;
            }
            if ( v12 - oldTime >= v13->static_fields->TIME_UPDATE_ITVL_SEC )
            {
              if ( !v10 )
                goto LABEL_33;
              v14 = this->fields.resTimeLb;
              if ( this->fields.isAchiveTime )
              {
                klass = (int64_t)v10[3].klass;
                if ( !v13->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(v13);
                resTimeLb = (UnityEngine_Component_o *)EventMissionItemListViewItemDraw__GetAchiveTimeText(klass, v8);
              }
              else
              {
                v16 = *(_QWORD *)&v10[2].fields.m_CachedPtr;
                if ( !v13->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(v13);
                resTimeLb = (UnityEngine_Component_o *)EventMissionItemListViewItemDraw__GetRestTimeText(v16, v8);
              }
              v8 = (const MethodInfo *)resTimeLb;
              if ( !v14 )
                goto LABEL_33;
              UILabel__set_text(v14, (System_String_o *)resTimeLb, 0LL);
              this->fields.oldTime = v12;
              v17 = *(_QWORD *)&v10[2].fields.m_CachedPtr;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              RestTime = LocalizationManager__GetRestTime(v17, 0LL);
              resTimeLb = (UnityEngine_Component_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_13349/*"TIME_REST_TIMEOVER"*/,
                                                       0LL);
              if ( !RestTime )
                goto LABEL_33;
              if ( System_String__Equals_61715348(RestTime, (System_String_o *)resTimeLb, 0LL) )
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
                sub_1B8880C(resTimeLb, v8);
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

  if ( (byte_4A5EFB2 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5EFB2 = 1;
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
      sub_1B8880C(v6, v7);
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