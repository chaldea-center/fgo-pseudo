void __fastcall EventMissionItemListViewItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4A001C9 & 1) == 0 )
  {
    sub_1B640C8(&EventMissionItemListViewItemDraw_TypeInfo, v1);
    byte_4A001C9 = 1;
  }
  EventMissionItemListViewItemDraw_TypeInfo->static_fields->TIME_UPDATE_ITVL_SEC = 60;
}


void __fastcall EventMissionItemListViewItemDraw___ctor(
        EventMissionItemListViewItemDraw_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A001C8 & 1) == 0 )
  {
    sub_1B640C8(&MissionListViewItemDraw_TypeInfo, method);
    byte_4A001C8 = 1;
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
  int32_t v5; // w2
  int32_t v6; // w3
  struct UISprite_o *v7; // x8
  struct UIAtlas_o *mAtlas; // x1
  int32_t v9; // w2
  int32_t v10; // w3
  struct UISprite_o *v11; // x8
  struct System_String_o *mSpriteName; // x1
  UnityEngine_Object_o *boardMaskSprite; // x20
  int32_t v14; // w2
  int32_t v15; // w3
  struct UISprite_o *v16; // x8
  struct UIAtlas_o *v17; // x1
  int32_t v18; // w2
  int32_t v19; // w3
  struct UISprite_o *v20; // x8
  struct System_String_o *v21; // x1

  if ( (byte_4A001BD & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_4A001BD = 1;
  }
  MissionListViewItemDraw__Awake((MissionListViewItemDraw_o *)this, 0LL);
  stampSprite = (UnityEngine_Object_o *)this->fields.stampSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(stampSprite, 0LL, 0LL);
  if ( v4 )
  {
    v7 = this->fields.stampSprite;
    if ( !v7 )
      goto LABEL_16;
    mAtlas = v7->fields.mAtlas;
    this->fields.baseStampSpriteAtlas = mAtlas;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.baseStampSpriteAtlas, (int32_t)mAtlas, v5, v6);
    v11 = this->fields.stampSprite;
    if ( !v11 )
      goto LABEL_16;
    mSpriteName = v11->fields.mSpriteName;
    this->fields.baseStampSpriteName = mSpriteName;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.baseStampSpriteName, (int32_t)mSpriteName, v9, v10);
  }
  boardMaskSprite = (UnityEngine_Object_o *)this->fields.boardMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(boardMaskSprite, 0LL, 0LL);
  if ( v4 )
  {
    v16 = this->fields.boardMaskSprite;
    if ( v16 )
    {
      v17 = v16->fields.mAtlas;
      this->fields.baseBoardMaskSpriteAtlas = v17;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.baseBoardMaskSpriteAtlas, (int32_t)v17, v14, v15);
      v20 = this->fields.boardMaskSprite;
      if ( v20 )
      {
        v21 = v20->fields.mSpriteName;
        this->fields.baseBoardMaskSpriteName = v21;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.baseBoardMaskSpriteName, (int32_t)v21, v18, v19);
        return;
      }
    }
LABEL_16:
    sub_1B64324(v4);
  }
}


void __fastcall EventMissionItemListViewItemDraw__ChangeNextRewardIcon(
        EventMissionItemListViewItemDraw_o *this,
        EventMissionItemListViewManager_o *manager,
        const MethodInfo *method)
{
  struct GiftEntity_array *giftEntityList; // x20
  EventMissionItemListViewItemDraw_o *v4; // x19
  __int64 v5; // x1
  int32_t *v6; // x8
  int32_t v7; // w1
  int v8; // w9
  int32_t v9; // w2
  int32_t v10; // w3

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
    sub_1B6432C(this, v5);
  v6 = (int32_t *)giftEntityList->m_Items[(int)this];
  if ( !v6 )
    goto LABEL_18;
  v7 = v6[11];
  this = (EventMissionItemListViewItemDraw_o *)v4->fields.itemIcon;
  v8 = v6[7];
  if ( v7 >= 1 )
  {
    if ( this )
    {
      if ( v8 <= 1 )
        v9 = -1;
      else
        v9 = v6[7];
      ItemIconComponent__SetItemImage_37831688((ItemIconComponent_o *)this, v7, v9, 0LL);
      return;
    }
LABEL_18:
    sub_1B64324(this);
  }
  if ( !this )
    goto LABEL_18;
  if ( v8 <= 1 )
    v10 = -1;
  else
    v10 = v6[7];
  ItemIconComponent__SetGiftDesignSize((ItemIconComponent_o *)this, v6[5], v6[6], v10, 0LL);
}


System_String_o *__fastcall EventMissionItemListViewItemDraw__GetAchiveTimeText(
        int64_t closeTime,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_String_o *v5; // x20
  System_String_o *RestTime; // x2

  if ( (byte_4A001C3 & 1) == 0 )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, method);
    sub_1B640C8(&StringLiteral_117/*" "*/, v3);
    sub_1B640C8(&StringLiteral_13261/*"TIME_REST_ACHIVE"*/, v4);
    byte_4A001C3 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_13261/*"TIME_REST_ACHIVE"*/, 0LL);
  RestTime = LocalizationManager__GetRestTime(closeTime, 0LL);
  return System_String__Concat_61386656(v5, (System_String_o *)StringLiteral_117/*" "*/, RestTime, 0LL);
}


System_String_o *__fastcall EventMissionItemListViewItemDraw__GetRestTimeText(
        int64_t endTime,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_String_o *v4; // x20
  System_String_o *RestTime; // x1

  if ( (byte_4A001C2 & 1) == 0 )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, method);
    sub_1B640C8(&StringLiteral_13273/*"TIME_REST_QUEST"*/, v3);
    byte_4A001C2 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_13273/*"TIME_REST_QUEST"*/, 0LL);
  RestTime = LocalizationManager__GetRestTime(endTime, 0LL);
  return System_String__Concat_61375396(v4, RestTime, 0LL);
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
  bool *p_isDispTime; // x22
  int64_t v11; // x8
  const MethodInfo *v12; // x1
  int64_t v13; // x21
  System_String_o *RestTimeText; // x0
  const MethodInfo *v15; // x1
  int64_t v16; // x21
  System_String_o *AchiveTimeText; // x1
  const MethodInfo *v18; // x1
  int64_t v19; // x21
  int v20; // w8
  UILabel_o *timeOverLb; // x20
  char isAchiveTime; // w1

  if ( (byte_4A001BF & 1) == 0 )
  {
    sub_1B640C8(&EventMissionItemListViewItemDraw_TypeInfo, missionListviewItem);
    sub_1B640C8(&LocalizationManager_TypeInfo, v5);
    sub_1B640C8(&NetworkManager_TypeInfo, v6);
    sub_1B640C8(&StringLiteral_8638/*"MISSION_PERIOD_END"*/, v7);
    byte_4A001BF = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  this->fields.isAchiveTime = 0;
  if ( !missionListviewItem )
    goto LABEL_43;
  v9 = Time;
  Time = (int64_t)MissionListViewItem__get_EventMissionEntity(missionListviewItem, 0LL);
  if ( !Time )
    goto LABEL_43;
  if ( v9 >= *(_QWORD *)(Time + 56) )
  {
    Time = (int64_t)MissionListViewItem__get_EventMissionEntity(missionListviewItem, 0LL);
    if ( !Time )
      goto LABEL_43;
    v11 = *(_QWORD *)(Time + 64);
    this->fields.isDispTime = v9 < v11;
    p_isDispTime = &this->fields.isDispTime;
    if ( v9 < v11 )
    {
      Time = (int64_t)MissionListViewItem__get_EventMissionEntity(missionListviewItem, 0LL);
      if ( !Time )
        goto LABEL_43;
      v13 = *(_QWORD *)(Time + 64);
      if ( !EventMissionItemListViewItemDraw_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventMissionItemListViewItemDraw_TypeInfo);
      RestTimeText = EventMissionItemListViewItemDraw__GetRestTimeText(v13, v12);
      if ( missionListviewItem->fields.progStatus == 3 )
      {
        Time = (int64_t)MissionListViewItem__get_EventMissionEntity(missionListviewItem, 0LL);
        if ( !Time )
          goto LABEL_43;
        v16 = *(_QWORD *)(Time + 72);
        if ( !EventMissionItemListViewItemDraw_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(EventMissionItemListViewItemDraw_TypeInfo);
        AchiveTimeText = EventMissionItemListViewItemDraw__GetAchiveTimeText(v16, v15);
        this->fields.isAchiveTime = 1;
      }
      else
      {
        AchiveTimeText = RestTimeText;
      }
      Time = (int64_t)this->fields.resTimeLb;
      if ( !Time )
LABEL_43:
        sub_1B64324(Time);
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
    v20 = 1;
    missionListviewItem->fields.isNowMission = 1;
    goto LABEL_29;
  }
  this->fields.isAchiveTime = 1;
  Time = (int64_t)MissionListViewItem__get_EventMissionEntity(missionListviewItem, 0LL);
  if ( !Time )
    goto LABEL_43;
  v19 = *(_QWORD *)(Time + 72);
  if ( !EventMissionItemListViewItemDraw_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventMissionItemListViewItemDraw_TypeInfo);
  Time = (int64_t)EventMissionItemListViewItemDraw__GetAchiveTimeText(v19, v18);
  if ( !this->fields.resTimeLb )
    goto LABEL_43;
  AchiveTimeText = (System_String_o *)Time;
  Time = (int64_t)this->fields.resTimeLb;
LABEL_28:
  UILabel__set_text((UILabel_o *)Time, AchiveTimeText, 0LL);
  v20 = 0;
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
  if ( v20 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0LL);
    timeOverLb = this->fields.timeOverLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Time = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_8638/*"MISSION_PERIOD_END"*/, 0LL);
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
    isAchiveTime = this->fields.isAchiveTime;
    if ( Time )
      goto LABEL_41;
    goto LABEL_43;
  }
  isAchiveTime = 1;
  if ( !Time )
    goto LABEL_43;
LABEL_41:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, isAchiveTime, 0LL);
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

  if ( (byte_4A001C7 & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, *(_QWORD *)&bannerGroupId);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v5);
    byte_4A001C7 = 1;
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

  if ( (byte_4A001C5 & 1) == 0 )
  {
    sub_1B640C8(&EventMissionItemListViewItem_TypeInfo, missionListViewItem);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v5);
    byte_4A001C5 = 1;
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
  UnityEngine_Component_o *iconLabel; // x0
  int v17; // w21
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x2
  UISprite_o *rewardBackSprite; // x21
  int32_t Type; // w0
  int32_t rewardObjectId; // w23
  int32_t klass; // w22
  int32_t v24; // w24
  UnityEngine_Object_o *stampSprite; // x21
  UISprite_o *v26; // x24
  System_String_o *baseStampSpriteName; // x21
  UIAtlas_o *baseStampSpriteAtlas; // x23
  int32_t bannerGroupId; // w22
  UnityEngine_Object_o *boardMaskSprite; // x21
  UISprite_o *v31; // x22
  System_String_o *baseBoardMaskSpriteName; // x19
  UIAtlas_o *baseBoardMaskSpriteAtlas; // x21
  int32_t v34; // w20

  v7 = missionListViewItem;
  if ( (byte_4A001BE & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, missionListViewItem);
    sub_1B640C8(&EventMissionItemListViewItem_TypeInfo, v9);
    sub_1B640C8(&EventMissionItemListViewManager_TypeInfo, v10);
    sub_1B640C8(&EventRewardRootComponent_TypeInfo, v11);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v12);
    byte_4A001BE = 1;
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
      v17 = BYTE1(v7[1].monitor);
      iconLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(iconLabel, 0LL);
      if ( iconLabel )
      {
        if ( v17 )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)iconLabel, 0, 0LL);
LABEL_30:
          EventMissionItemListViewItemDraw__SetRewardItemIcon(
            this,
            (EventMissionItemListViewItem_o *)v7,
            (EventMissionItemListViewManager_o *)listViewManager,
            v18);
          EventMissionItemListViewItemDraw__UpdateNewIcon(this, (EventMissionItemListViewItem_o *)v7, v19);
          rewardBackSprite = this->fields.rewardBackSprite;
          Type = MissionListViewItem__get_Type(v7, 0LL);
          rewardObjectId = v7->fields.rewardObjectId;
          klass = (int32_t)v7[1].klass;
          v24 = Type;
          if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
          EventRewardRootComponent__SetRewardRaritySprite(rewardBackSprite, v24, rewardObjectId, klass, 0LL);
          goto LABEL_33;
        }
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)iconLabel, 1, 0LL);
        iconLabel = (UnityEngine_Component_o *)this->fields.iconLabel;
        if ( iconLabel )
        {
          UIIconLabel__Set_37921148((UIIconLabel_o *)iconLabel, 57, v7->fields.dispNo, 0, 0, 0LL, 0, 0, 0, 0LL);
          goto LABEL_30;
        }
      }
    }
    sub_1B64324(iconLabel);
  }
LABEL_33:
  stampSprite = (UnityEngine_Object_o *)this->fields.stampSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(stampSprite, 0LL, 0LL) )
  {
    v26 = this->fields.stampSprite;
    baseStampSpriteAtlas = this->fields.baseStampSpriteAtlas;
    baseStampSpriteName = this->fields.baseStampSpriteName;
    bannerGroupId = v7->fields.bannerGroupId;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetMissionBoardStampSprite(v26, baseStampSpriteAtlas, baseStampSpriteName, bannerGroupId, 0LL);
  }
  boardMaskSprite = (UnityEngine_Object_o *)this->fields.boardMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(boardMaskSprite, 0LL, 0LL) )
  {
    v31 = this->fields.boardMaskSprite;
    baseBoardMaskSpriteAtlas = this->fields.baseBoardMaskSpriteAtlas;
    baseBoardMaskSpriteName = this->fields.baseBoardMaskSpriteName;
    v34 = v7->fields.bannerGroupId;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetMissionBoardMaskSprite(v31, baseBoardMaskSpriteAtlas, baseBoardMaskSpriteName, v34, 0LL);
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
    sub_1B64324(0LL);
  UnityEngine_GameObject__SetActive(lockImgInfo, 1, 0LL);
}


void __fastcall EventMissionItemListViewItemDraw__SetRewardItemIcon(
        EventMissionItemListViewItemDraw_o *this,
        EventMissionItemListViewItem_o *item,
        EventMissionItemListViewManager_o *manager,
        const MethodInfo *method)
{
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
  __int64 v17; // x1
  __int64 v18; // x2
  int32_t completedImg_high; // w1
  __int64 v20; // x23
  Il2CppObject *Master_object; // x22
  GiftEntity_array *GiftListById; // x0
  System_Collections_Generic_IEnumerable_TSource__o **p_giftEntityList; // x22
  int32_t v24; // w2
  int32_t v25; // w3
  GiftEntity_array *giftEntityList; // x24
  int32_t v27; // w2
  int32_t v28; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x24
  __int64 v30; // x1
  __int64 v31; // x2
  System_Func_object__bool__o *v32; // x25
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x0
  System_Object_array *v34; // x0
  int32_t v35; // w2
  int32_t v36; // w3
  void *monitor; // x8
  Il2CppObject *v38; // x23
  int32_t m_CachedPtr; // w24
  System_String_o *v40; // x23
  __int64 v41; // x1
  EventMissionItemListViewItemDraw_o *itemIcon; // x21
  const MethodInfo *v43; // x1
  int32_t iconId; // w1
  System_Collections_Generic_IEnumerable_TSource__o *v45; // x22
  int32_t *v46; // x8
  int32_t v47; // w1
  int v48; // w9
  int32_t v49; // w2
  GiftEntity_array *v50; // x21
  GiftEntity_o *v51; // x8
  int32_t prioredIconId; // w1
  int v53; // w8
  int32_t v54; // w2
  GiftEntity_o *IconGiftEntity; // x0
  int32_t objectId; // w2
  int32_t type; // w1
  int32_t num; // w3
  int32_t v59; // w3

  v6 = this;
  if ( (byte_4A001C0 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_EventMissionAddMaster___, item);
    sub_1B640C8(&Method_DataManager_GetMaster_GiftMaster___, v7);
    sub_1B640C8(&DataManager_TypeInfo, v8);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_GiftEntity___, v9);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_GiftEntity___, v10);
    sub_1B640C8(&System_Func_GiftEntity__bool__TypeInfo, v11);
    sub_1B640C8(&MissionInfoMaker_TypeInfo, v12);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v13);
    sub_1B640C8(&Method_EventMissionItemListViewItemDraw___c__DisplayClass19_0__SetRewardItemIcon_b__0__, v14);
    this = (EventMissionItemListViewItemDraw_o *)sub_1B640C8(
                                                   &EventMissionItemListViewItemDraw___c__DisplayClass19_0_TypeInfo,
                                                   v15);
    byte_4A001C0 = 1;
  }
  if ( !item )
    goto LABEL_82;
  if ( MissionListViewItem__get_EventRewardType((MissionListViewItem_o *)item, 0LL) != 1 )
    goto LABEL_37;
  if ( EventMissionItemListViewItem__get_IsHideReward(item, v16) )
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
  v20 = sub_1B64314(EventMissionItemListViewItemDraw___c__DisplayClass19_0_TypeInfo, v17, v18);
  System_Object___ctor((Il2CppObject *)v20, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_GiftMaster___);
  this = (EventMissionItemListViewItemDraw_o *)MissionListViewItem__get_EventMissionEntity(
                                                 (MissionListViewItem_o *)item,
                                                 0LL);
  if ( !this || !Master_object )
    goto LABEL_82;
  GiftListById = GiftMaster__GetGiftListById((GiftMaster_o *)Master_object, HIDWORD(this->fields.missionNoLb), 0LL);
  v6->fields.giftEntityList = GiftListById;
  p_giftEntityList = (System_Collections_Generic_IEnumerable_TSource__o **)&v6->fields.giftEntityList;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v6->fields.giftEntityList, (int32_t)GiftListById, v24, v25);
  giftEntityList = v6->fields.giftEntityList;
  if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
  this = (EventMissionItemListViewItemDraw_o *)MissionInfoMaker__GetSubGiftEntity(giftEntityList, 0LL);
  if ( !v20 )
    goto LABEL_82;
  *(_QWORD *)(v20 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v20 + 16), (int32_t)this, v27, v28);
  v29 = *p_giftEntityList;
  v32 = (System_Func_object__bool__o *)sub_1B64314(System_Func_GiftEntity__bool__TypeInfo, v30, v31);
  System_Func_object__bool____ctor(
    v32,
    (Il2CppObject *)v20,
    Method_EventMissionItemListViewItemDraw___c__DisplayClass19_0__SetRewardItemIcon_b__0__,
    0LL);
  v33 = System_Linq_Enumerable__Where_object_(
          v29,
          (System_Func_TSource__bool__o *)v32,
          (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_GiftEntity___);
  v34 = System_Linq_Enumerable__ToArray_object_(
          v33,
          (const MethodInfo_2E713C4 *)Method_System_Linq_Enumerable_ToArray_GiftEntity___);
  *p_giftEntityList = (System_Collections_Generic_IEnumerable_TSource__o *)v34;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v6->fields.giftEntityList, (int32_t)v34, v35, v36);
  if ( !*p_giftEntityList )
    goto LABEL_82;
  monitor = (*p_giftEntityList)[1].monitor;
  if ( !monitor )
    return;
  v6->fields.isMultipleReward = (int)monitor > 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v38 = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_EventMissionAddMaster___);
  this = (EventMissionItemListViewItemDraw_o *)MissionListViewItem__get_EventMissionEntity(
                                                 (MissionListViewItem_o *)item,
                                                 0LL);
  if ( !this )
    goto LABEL_82;
  m_CachedPtr = this->fields.m_CachedPtr;
  this = (EventMissionItemListViewItemDraw_o *)MissionListViewItem__get_EventMissionEntity(
                                                 (MissionListViewItem_o *)item,
                                                 0LL);
  if ( !this || !v38 )
    goto LABEL_82;
  v40 = EventMissionAddMaster__GetEventMissionChangeRewardIcon(
          (EventMissionAddMaster_o *)v38,
          m_CachedPtr,
          HIDWORD(this->fields.m_CancellationTokenSource),
          0,
          0LL);
  if ( !System_String__IsNullOrEmpty(v40, 0LL) )
    goto LABEL_26;
  this = (EventMissionItemListViewItemDraw_o *)MissionListViewItem__get_EventMissionEntity(
                                                 (MissionListViewItem_o *)item,
                                                 0LL);
  if ( !this )
    goto LABEL_82;
  if ( SHIDWORD(this->fields.completedImg) >= 1 )
  {
LABEL_26:
    v6->fields.isMultipleReward = 0;
    item->fields.isHideRewardDetail = 1;
LABEL_27:
    if ( !System_String__IsNullOrEmpty(v40, 0LL) )
    {
      this = (EventMissionItemListViewItemDraw_o *)v6->fields.itemIcon;
      if ( !this )
        goto LABEL_82;
      ItemIconComponent__SetItemImageByName((ItemIconComponent_o *)this, v40, 0LL);
LABEL_35:
      this = (EventMissionItemListViewItemDraw_o *)v6->fields.itemIcon;
      if ( !this )
        goto LABEL_82;
      ItemIconComponent__SetAlpha((ItemIconComponent_o *)this, 1.0, 0LL);
      goto LABEL_37;
    }
    this = (EventMissionItemListViewItemDraw_o *)MissionListViewItem__get_EventMissionEntity(
                                                   (MissionListViewItem_o *)item,
                                                   0LL);
    if ( !this )
      goto LABEL_82;
    if ( SHIDWORD(this->fields.completedImg) >= 1 )
    {
      itemIcon = (EventMissionItemListViewItemDraw_o *)v6->fields.itemIcon;
      this = (EventMissionItemListViewItemDraw_o *)MissionListViewItem__get_EventMissionEntity(
                                                     (MissionListViewItem_o *)item,
                                                     0LL);
      if ( !this || !itemIcon )
        goto LABEL_82;
      completedImg_high = HIDWORD(this->fields.completedImg);
      this = itemIcon;
      goto LABEL_8;
    }
    v50 = (GiftEntity_array *)*p_giftEntityList;
    if ( !*p_giftEntityList )
      goto LABEL_82;
    if ( v50->max_length )
    {
      v51 = v50->m_Items[0];
      if ( !v51 )
        goto LABEL_82;
      prioredIconId = v51->fields.prioredIconId;
      if ( prioredIconId < 1 )
      {
        if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
        IconGiftEntity = MissionInfoMaker__GetIconGiftEntity(v50, 0LL);
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
          goto LABEL_82;
        ItemIconComponent__SetGiftDesignSize((ItemIconComponent_o *)this, type, objectId, num, 0LL);
      }
      else
      {
        this = (EventMissionItemListViewItemDraw_o *)v6->fields.itemIcon;
        if ( !this )
          goto LABEL_82;
        v53 = v51->fields.num;
        if ( v53 <= 1 )
          v54 = -1;
        else
          v54 = v53;
        ItemIconComponent__SetItemImage_37831688((ItemIconComponent_o *)this, prioredIconId, v54, 0LL);
      }
      goto LABEL_35;
    }
LABEL_83:
    sub_1B6432C(this, v41);
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
  v45 = *p_giftEntityList;
  if ( !v45 || !manager )
    goto LABEL_82;
  this = (EventMissionItemListViewItemDraw_o *)MissionListViewManager__GetAlphaAnimCnt(
                                                 (MissionListViewManager_o *)manager,
                                                 (int32_t)v45[1].monitor,
                                                 0LL);
  if ( (unsigned int)this >= LODWORD(v45[1].monitor) )
    goto LABEL_83;
  v46 = (int32_t *)*((_QWORD *)&v45[2].klass + (int)this);
  if ( !v46 )
    goto LABEL_82;
  v47 = v46[11];
  this = (EventMissionItemListViewItemDraw_o *)v6->fields.itemIcon;
  v48 = v46[7];
  if ( v47 < 1 )
  {
    if ( !this )
      goto LABEL_82;
    if ( v48 <= 1 )
      v59 = -1;
    else
      v59 = v46[7];
    ItemIconComponent__SetGiftDesignSize((ItemIconComponent_o *)this, v46[5], v46[6], v59, 0LL);
  }
  else
  {
    if ( !this )
      goto LABEL_82;
    if ( v48 <= 1 )
      v49 = -1;
    else
      v49 = v46[7];
    ItemIconComponent__SetItemImage_37831688((ItemIconComponent_o *)this, v47, v49, 0LL);
  }
LABEL_37:
  if ( MissionListViewItem__get_EventRewardType((MissionListViewItem_o *)item, 0LL) == 3 )
  {
    if ( EventMissionItemListViewItem__get_IsHideReward(item, v43) )
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
        iconId = item->fields.iconId;
        goto LABEL_44;
      }
    }
LABEL_82:
    sub_1B64324(this);
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
  UILabel_o *timeOverLb; // x19

  if ( (byte_4A001C1 & 1) == 0 )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, *(_QWORD *)&status);
    sub_1B640C8(&StringLiteral_8638/*"MISSION_PERIOD_END"*/, v5);
    byte_4A001C1 = 1;
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
    lockImgInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8638/*"MISSION_PERIOD_END"*/, 0LL);
    if ( !timeOverLb )
LABEL_11:
      sub_1B64324(lockImgInfo);
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
  UnityEngine_Component_o *resTimeLb; // x0
  UnityEngine_Component_o *v12; // x21
  const MethodInfo *v13; // x1
  int64_t oldTime; // x23
  int64_t v15; // x22
  EventMissionItemListViewItemDraw_c *v16; // x8
  UILabel_o *v17; // x23
  int64_t klass; // x24
  int64_t v19; // x24
  int64_t v20; // x21
  System_String_o *RestTime; // x21

  if ( (byte_4A001C4 & 1) == 0 )
  {
    sub_1B640C8(&EventMissionItemListViewItemDraw_TypeInfo, item);
    sub_1B640C8(&LocalizationManager_TypeInfo, v7);
    sub_1B640C8(&NetworkManager_TypeInfo, v8);
    sub_1B640C8(&StringLiteral_13280/*"TIME_REST_TIMEOVER"*/, v9);
    byte_4A001C4 = 1;
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
          v12 = resTimeLb;
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
              if ( !v12 )
                goto LABEL_33;
              v17 = this->fields.resTimeLb;
              if ( this->fields.isAchiveTime )
              {
                klass = (int64_t)v12[3].klass;
                if ( !v16->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(v16);
                resTimeLb = (UnityEngine_Component_o *)EventMissionItemListViewItemDraw__GetAchiveTimeText(klass, v13);
              }
              else
              {
                v19 = *(_QWORD *)&v12[2].fields.m_CachedPtr;
                if ( !v16->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(v16);
                resTimeLb = (UnityEngine_Component_o *)EventMissionItemListViewItemDraw__GetRestTimeText(v19, v13);
              }
              if ( !v17 )
                goto LABEL_33;
              UILabel__set_text(v17, (System_String_o *)resTimeLb, 0LL);
              this->fields.oldTime = v15;
              v20 = *(_QWORD *)&v12[2].fields.m_CachedPtr;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              RestTime = LocalizationManager__GetRestTime(v20, 0LL);
              resTimeLb = (UnityEngine_Component_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_13280/*"TIME_REST_TIMEOVER"*/,
                                                       0LL);
              if ( !RestTime )
                goto LABEL_33;
              if ( System_String__Equals_61383712(RestTime, (System_String_o *)resTimeLb, 0LL) )
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
                sub_1B64324(resTimeLb);
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

  if ( (byte_4A001C6 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, item);
    byte_4A001C6 = 1;
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
      sub_1B64324(v6);
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