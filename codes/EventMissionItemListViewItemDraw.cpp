void __fastcall EventMissionItemListViewItemDraw___cctor(const MethodInfo *method)
{
  if ( (byte_42B0504 & 1) == 0 )
  {
    sub_B52984(&EventMissionItemListViewItemDraw_TypeInfo);
    byte_42B0504 = 1;
  }
  EventMissionItemListViewItemDraw_TypeInfo->static_fields->TIME_UPDATE_ITVL_SEC = 60;
}


void __fastcall EventMissionItemListViewItemDraw___ctor(
        EventMissionItemListViewItemDraw_o *this,
        const MethodInfo *method)
{
  if ( (byte_42B0503 & 1) == 0 )
  {
    sub_B52984(&MissionListViewItemDraw_TypeInfo);
    byte_42B0503 = 1;
  }
  if ( (BYTE3(MissionListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MissionListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionListViewItemDraw_TypeInfo);
  }
  MissionListViewItemDraw___ctor((MissionListViewItemDraw_o *)this, 0LL);
}


void __fastcall EventMissionItemListViewItemDraw__Awake(
        EventMissionItemListViewItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *stampSprite; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  struct UISprite_o *v12; // x8
  struct UIAtlas_o *mAtlas; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  struct UISprite_o *v20; // x8
  struct System_String_o *mSpriteName; // x1
  UnityEngine_Object_o *boardMaskSprite; // x20
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  struct UISprite_o *v29; // x8
  struct UIAtlas_o *v30; // x1
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  struct UISprite_o *v37; // x8
  struct System_String_o *v38; // x1

  if ( (byte_42B04F8 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B04F8 = 1;
  }
  MissionListViewItemDraw__Awake((MissionListViewItemDraw_o *)this, 0LL);
  stampSprite = (UnityEngine_Object_o *)this->fields.stampSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v4 = UnityEngine_Object__op_Inequality(stampSprite, 0LL, 0LL);
  if ( v4 )
  {
    v12 = this->fields.stampSprite;
    if ( !v12 )
      goto LABEL_18;
    mAtlas = v12->fields.mAtlas;
    this->fields.baseStampSpriteAtlas = mAtlas;
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields.baseStampSpriteAtlas,
      (System_Int32_array **)mAtlas,
      v6,
      v7,
      v8,
      v9,
      v10,
      v11);
    v20 = this->fields.stampSprite;
    if ( !v20 )
      goto LABEL_18;
    mSpriteName = v20->fields.mSpriteName;
    this->fields.baseStampSpriteName = mSpriteName;
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields.baseStampSpriteName,
      (System_Int32_array **)mSpriteName,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
  }
  boardMaskSprite = (UnityEngine_Object_o *)this->fields.boardMaskSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v4 = UnityEngine_Object__op_Inequality(boardMaskSprite, 0LL, 0LL);
  if ( v4 )
  {
    v29 = this->fields.boardMaskSprite;
    if ( v29 )
    {
      v30 = v29->fields.mAtlas;
      this->fields.baseBoardMaskSpriteAtlas = v30;
      sub_B52920(
        (BattleServantConfConponent_o *)&this->fields.baseBoardMaskSpriteAtlas,
        (System_Int32_array **)v30,
        v23,
        v24,
        v25,
        v26,
        v27,
        v28);
      v37 = this->fields.boardMaskSprite;
      if ( v37 )
      {
        v38 = v37->fields.mSpriteName;
        this->fields.baseBoardMaskSpriteName = v38;
        sub_B52920(
          (BattleServantConfConponent_o *)&this->fields.baseBoardMaskSpriteName,
          (System_Int32_array **)v38,
          v31,
          v32,
          v33,
          v34,
          v35,
          v36);
        return;
      }
    }
LABEL_18:
    sub_B52A5C(v4, v5);
  }
}


void __fastcall EventMissionItemListViewItemDraw__ChangeNextRewardIcon(
        EventMissionItemListViewItemDraw_o *this,
        EventMissionItemListViewManager_o *manager,
        const MethodInfo *method)
{
  struct GiftEntity_array *giftEntityList; // x20
  EventMissionItemListViewItemDraw_o *v4; // x19
  GiftEntity_o *v5; // x9
  int num; // w8
  int32_t v7; // w2
  int32_t v8; // w3
  __int64 v9; // x0

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
  {
    v9 = sub_B52A88(this);
    sub_B52A28(v9, 0LL);
  }
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
      ItemIconComponent__SetItemImage_28310700((ItemIconComponent_o *)this, (int32_t)manager, v7, 0LL);
      return;
    }
LABEL_18:
    sub_B52A5C(this, manager);
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

  if ( (byte_42B04FE & 1) == 0 )
  {
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_81/*" "*/);
    sub_B52984(&StringLiteral_13489/*"TIME_REST_ACHIVE"*/);
    byte_42B04FE = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_13489/*"TIME_REST_ACHIVE"*/, 0LL);
  RestTime = LocalizationManager__GetRestTime(closeTime, 0LL);
  return System_String__Concat_44570600(v3, (System_String_o *)StringLiteral_81/*" "*/, RestTime, 0LL);
}


System_String_o *__fastcall EventMissionItemListViewItemDraw__GetRestTimeText(
        int64_t endTime,
        const MethodInfo *method)
{
  System_String_o *v3; // x20
  System_String_o *RestTime; // x1

  if ( (byte_42B04FD & 1) == 0 )
  {
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_13501/*"TIME_REST_QUEST"*/);
    byte_42B04FD = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_13501/*"TIME_REST_QUEST"*/, 0LL);
  RestTime = LocalizationManager__GetRestTime(endTime, 0LL);
  return System_String__Concat_44568316(v3, RestTime, 0LL);
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
  int32_t *p_progStatus; // x21
  int v14; // w8
  int64_t v15; // x20
  UILabel_o *timeOverLb; // x20

  if ( (byte_42B04FA & 1) == 0 )
  {
    sub_B52984(&EventMissionItemListViewItemDraw_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&StringLiteral_8807/*"MISSION_PERIOD_END"*/);
    byte_42B04FA = 1;
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
  v7 = Time;
  Time = (int64_t)MissionListViewItem__get_EventMissionEntity(missionListviewItem, 0LL);
  if ( !Time )
    goto LABEL_49;
  if ( v7 >= *(_QWORD *)(Time + 56) )
  {
    Time = (int64_t)MissionListViewItem__get_EventMissionEntity(missionListviewItem, 0LL);
    if ( !Time )
      goto LABEL_49;
    v9 = *(_QWORD *)(Time + 64);
    this->fields.isDispTime = v7 < v9;
    p_isDispTime = &this->fields.isDispTime;
    if ( v7 < v9 )
    {
      Time = (int64_t)MissionListViewItem__get_EventMissionEntity(missionListviewItem, 0LL);
      if ( !Time )
        goto LABEL_49;
      v10 = *(_QWORD *)(Time + 64);
      if ( (BYTE3(EventMissionItemListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventMissionItemListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventMissionItemListViewItemDraw_TypeInfo);
      }
      RestTimeText = EventMissionItemListViewItemDraw__GetRestTimeText(v10, AchiveTimeText);
      if ( missionListviewItem->fields.progStatus == 3 )
      {
        Time = (int64_t)MissionListViewItem__get_EventMissionEntity(missionListviewItem, 0LL);
        if ( !Time )
          goto LABEL_49;
        v12 = *(_QWORD *)(Time + 72);
        if ( (BYTE3(EventMissionItemListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !EventMissionItemListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventMissionItemListViewItemDraw_TypeInfo);
        }
        AchiveTimeText = (MethodInfo *)EventMissionItemListViewItemDraw__GetAchiveTimeText(v12, AchiveTimeText);
        this->fields.isAchiveTime = 1;
      }
      else
      {
        AchiveTimeText = (MethodInfo *)RestTimeText;
      }
      Time = (int64_t)this->fields.resTimeLb;
      if ( !Time )
LABEL_49:
        sub_B52A5C(Time, AchiveTimeText);
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
  v14 = 1;
  if ( (unsigned int)(missionListviewItem->fields.progStatus - 3) >= 2 )
  {
    missionListviewItem->fields.isNowMission = 1;
    goto LABEL_34;
  }
  this->fields.isAchiveTime = 1;
  Time = (int64_t)MissionListViewItem__get_EventMissionEntity(missionListviewItem, 0LL);
  if ( !Time )
    goto LABEL_49;
  v15 = *(_QWORD *)(Time + 72);
  if ( (BYTE3(EventMissionItemListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventMissionItemListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionItemListViewItemDraw_TypeInfo);
  }
  Time = (int64_t)EventMissionItemListViewItemDraw__GetAchiveTimeText(v15, AchiveTimeText);
  if ( !this->fields.resTimeLb )
    goto LABEL_49;
  AchiveTimeText = (MethodInfo *)Time;
  Time = (int64_t)this->fields.resTimeLb;
LABEL_33:
  UILabel__set_text((UILabel_o *)Time, (System_String_o *)AchiveTimeText, 0LL);
  v14 = 0;
  this->fields.oldTime = 0LL;
LABEL_34:
  if ( *p_progStatus == 4 )
  {
    this->fields.isDispTime = 0;
    this->fields.isAchiveTime = 0;
  }
  Time = (int64_t)this->fields.timeOverInfo;
  if ( !Time )
    goto LABEL_49;
  if ( v14 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0LL);
    timeOverLb = this->fields.timeOverLb;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    Time = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_8807/*"MISSION_PERIOD_END"*/, 0LL);
    if ( !timeOverLb )
      goto LABEL_49;
    UILabel__set_text(timeOverLb, (System_String_o *)Time, 0LL);
  }
  else
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
  }
  Time = (int64_t)this->fields.resTimeLb;
  if ( !Time )
    goto LABEL_49;
  Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
  if ( !*p_isDispTime )
  {
    AchiveTimeText = (MethodInfo *)this->fields.isAchiveTime;
    if ( Time )
      goto LABEL_47;
    goto LABEL_49;
  }
  AchiveTimeText = (MethodInfo *)(&dword_0 + 1);
  if ( !Time )
    goto LABEL_49;
LABEL_47:
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

  if ( (byte_42B0502 & 1) == 0 )
  {
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B0502 = 1;
  }
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(baseSprite, 0LL, 0LL) )
  {
    stampSprite = (UnityEngine_Object_o *)this->fields.stampSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality(stampSprite, 0LL, 0LL) )
    {
      boardMaskSprite = (UnityEngine_Object_o *)this->fields.boardMaskSprite;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Equality(boardMaskSprite, 0LL, 0LL) )
      {
        v8 = this->fields.baseSprite;
        baseAtlas = this->fields.baseAtlas;
        baseSpriteName = this->fields.baseSpriteName;
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
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
  __int64 v5; // x10
  UnityEngine_Object_o *baseButton; // x21
  const MethodInfo *v7; // x2

  if ( (byte_42B0500 & 1) == 0 )
  {
    sub_B52984(&EventMissionItemListViewItem_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B0500 = 1;
  }
  if ( missionListViewItem
    && (v5 = *(&EventMissionItemListViewItem_TypeInfo->_2.bitflags2 + 1),
        *(&missionListViewItem->klass->_2.bitflags2 + 1) >= (unsigned int)v5)
    && (EventMissionItemListViewItem_c *)missionListViewItem->klass->_2.typeHierarchy[v5 - 1] == EventMissionItemListViewItem_TypeInfo )
  {
    MissionListViewItemDraw__SetInput((MissionListViewItemDraw_o *)this, missionListViewItem, 0LL);
    baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
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
  __int64 v9; // x10
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

  if ( (byte_42B04F9 & 1) == 0 )
  {
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&EventMissionItemListViewItem_TypeInfo);
    sub_B52984(&EventMissionItemListViewManager_TypeInfo);
    sub_B52984(&EventRewardRootComponent_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B04F9 = 1;
  }
  if ( !MissionListViewItemDraw__SetItem(
          (MissionListViewItemDraw_o *)this,
          missionListViewItem,
          mode,
          listViewManager,
          0LL) )
    return 0;
  if ( !missionListViewItem )
  {
LABEL_7:
    if ( !listViewManager )
      goto LABEL_8;
LABEL_13:
    v10 = *(&EventMissionItemListViewManager_TypeInfo->_2.bitflags2 + 1);
    if ( *(&listViewManager->klass->_2.bitflags2 + 1) >= (unsigned int)v10 )
    {
      if ( (EventMissionItemListViewManager_c *)listViewManager->klass->_2.typeHierarchy[v10 - 1] != EventMissionItemListViewManager_TypeInfo )
        listViewManager = 0LL;
      if ( !missionListViewItem )
        return 0;
    }
    else
    {
      listViewManager = 0LL;
      if ( !missionListViewItem )
        return 0;
    }
    goto LABEL_19;
  }
  v9 = *(&EventMissionItemListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&missionListViewItem->klass->_2.bitflags2 + 1) < (unsigned int)v9 )
  {
    missionListViewItem = 0LL;
    goto LABEL_7;
  }
  if ( (EventMissionItemListViewItem_c *)missionListViewItem->klass->_2.typeHierarchy[v9 - 1] != EventMissionItemListViewItem_TypeInfo )
    missionListViewItem = 0LL;
  if ( listViewManager )
    goto LABEL_13;
LABEL_8:
  if ( !missionListViewItem )
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
      v14 = BYTE1(missionListViewItem[1].monitor);
      iconLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(iconLabel, 0LL);
      if ( iconLabel )
      {
        if ( v14 )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)iconLabel, 0, 0LL);
          goto LABEL_31;
        }
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)iconLabel, 1, 0LL);
        iconLabel = (UnityEngine_Component_o *)this->fields.iconLabel;
        if ( iconLabel )
        {
          UIIconLabel__Set_41786400(
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
LABEL_31:
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
          if ( (BYTE3(EventRewardRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
          }
          EventRewardRootComponent__SetRewardRaritySprite(rewardBackSprite, v21, rewardObjectId, klass, 0LL);
          goto LABEL_35;
        }
      }
    }
    sub_B52A5C(iconLabel, v11);
  }
LABEL_35:
  stampSprite = (UnityEngine_Object_o *)this->fields.stampSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(stampSprite, 0LL, 0LL) )
  {
    v23 = this->fields.stampSprite;
    baseStampSpriteAtlas = this->fields.baseStampSpriteAtlas;
    baseStampSpriteName = this->fields.baseStampSpriteName;
    bannerGroupId = missionListViewItem->fields.bannerGroupId;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetMissionBoardStampSprite(v23, baseStampSpriteAtlas, baseStampSpriteName, bannerGroupId, 0LL);
  }
  boardMaskSprite = (UnityEngine_Object_o *)this->fields.boardMaskSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(boardMaskSprite, 0LL, 0LL) )
  {
    v28 = this->fields.boardMaskSprite;
    baseBoardMaskSpriteAtlas = this->fields.baseBoardMaskSpriteAtlas;
    baseBoardMaskSpriteName = this->fields.baseBoardMaskSpriteName;
    v31 = missionListViewItem->fields.bannerGroupId;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
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
    sub_B52A5C(0LL, missionListViewItem);
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
  struct EventMissionEntity_o *eventMissionEnt; // x8
  struct EventMissionEntity_o *v8; // x8
  int32_t iconId; // w1
  GiftMaster_o *Master_WarQuestSelectionMaster; // x22
  System_Int32_array **GiftListById; // x0
  struct GiftEntity_array **p_giftEntityList; // x22
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  __int64 v19; // x8
  EventMissionAddMaster_o *v20; // x23
  int32_t m_CachedPtr; // w24
  System_String_o *v22; // x23
  struct GiftEntity_array *v23; // x22
  GiftEntity_o *v24; // x9
  int num; // w8
  int32_t v26; // w2
  struct GiftEntity_array *v27; // x8
  GiftEntity_o *v28; // x8
  ItemIconComponent_o *itemIcon; // x21
  int v30; // w8
  int32_t v31; // w2
  int32_t v32; // w3
  int32_t Type; // w0
  int32_t rewardObjectId; // w22
  int32_t v35; // w23
  __int64 v36; // x0

  v5 = item;
  v6 = this;
  if ( (byte_42B04FB & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_EventMissionAddMaster___);
    sub_B52984(&Method_DataManager_GetMaster_GiftMaster___);
    sub_B52984(&DataManager_TypeInfo);
    this = (EventMissionItemListViewItemDraw_o *)sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B04FB = 1;
  }
  if ( !v5 )
    goto LABEL_69;
  this = (EventMissionItemListViewItemDraw_o *)MissionListViewItem__get_EventRewardType(
                                                 (MissionListViewItem_o *)v5,
                                                 0LL);
  if ( (_DWORD)this != 1 )
    goto LABEL_9;
  eventMissionEnt = v5->fields.eventMissionEnt;
  if ( !eventMissionEnt )
    goto LABEL_69;
  if ( ((v5->fields.progStatus < 2u) & ((unsigned int)eventMissionEnt->fields.flag >> 1)) != 0 )
  {
    this = (EventMissionItemListViewItemDraw_o *)v6->fields.itemIcon;
    v6->fields.isMultipleReward = 0;
    if ( !this )
      goto LABEL_69;
    ItemIconComponent__SetItemImage((ItemIconComponent_o *)this, 99, 0LL);
    goto LABEL_9;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (GiftMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_GiftMaster___);
  this = (EventMissionItemListViewItemDraw_o *)MissionListViewItem__get_EventMissionEntity(
                                                 (MissionListViewItem_o *)v5,
                                                 0LL);
  if ( !this )
    goto LABEL_69;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_69;
  GiftListById = (System_Int32_array **)GiftMaster__GetGiftListById(
                                          Master_WarQuestSelectionMaster,
                                          HIDWORD(this->fields.iconLabel),
                                          0LL);
  v6->fields.giftEntityList = (struct GiftEntity_array *)GiftListById;
  p_giftEntityList = &v6->fields.giftEntityList;
  sub_B52920((BattleServantConfConponent_o *)&v6->fields.giftEntityList, GiftListById, v13, v14, v15, v16, v17, v18);
  if ( !v6->fields.giftEntityList )
    goto LABEL_69;
  v19 = *(_QWORD *)&v6->fields.giftEntityList->max_length;
  if ( !v19 )
    return;
  v6->fields.isMultipleReward = (int)v19 > 1;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v20 = (EventMissionAddMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_EventMissionAddMaster___);
  this = (EventMissionItemListViewItemDraw_o *)MissionListViewItem__get_EventMissionEntity(
                                                 (MissionListViewItem_o *)v5,
                                                 0LL);
  if ( !this )
    goto LABEL_69;
  m_CachedPtr = this->fields.m_CachedPtr;
  this = (EventMissionItemListViewItemDraw_o *)MissionListViewItem__get_EventMissionEntity(
                                                 (MissionListViewItem_o *)v5,
                                                 0LL);
  if ( !this || !v20 )
    goto LABEL_69;
  v22 = EventMissionAddMaster__GetEventMissionChangeRewardIcon(
          v20,
          m_CachedPtr,
          HIDWORD(this->fields.baseSprite),
          0,
          0LL);
  if ( !System_String__IsNullOrEmpty(v22, 0LL) )
  {
    v6->fields.isMultipleReward = 0;
    v5->fields.isHideRewardDetail = 1;
  }
  if ( v6->fields.isMultipleReward )
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (EventMissionItemListViewItemDraw_o *)UnityEngine_Object__op_Inequality(
                                                   (UnityEngine_Object_o *)manager,
                                                   0LL,
                                                   0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
      goto LABEL_9;
    v23 = *p_giftEntityList;
    if ( !v23 || !manager )
      goto LABEL_69;
    this = (EventMissionItemListViewItemDraw_o *)MissionListViewManager__GetAlphaAnimCnt(
                                                   (MissionListViewManager_o *)manager,
                                                   v23->max_length,
                                                   0LL);
    if ( (unsigned int)this < v23->max_length )
    {
      v24 = v23->m_Items[(int)this];
      if ( !v24 )
        goto LABEL_69;
      item = (EventMissionItemListViewItem_o *)(unsigned int)v24->fields.prioredIconId;
      this = (EventMissionItemListViewItemDraw_o *)v6->fields.itemIcon;
      num = v24->fields.num;
      if ( (int)item < 1 )
      {
        if ( !this )
          goto LABEL_69;
        if ( num <= 1 )
          v32 = -1;
        else
          v32 = v24->fields.num;
        ItemIconComponent__SetGiftDesignSize(
          (ItemIconComponent_o *)this,
          v24->fields.type,
          v24->fields.objectId,
          v32,
          0LL);
      }
      else
      {
        if ( !this )
          goto LABEL_69;
        if ( num <= 1 )
          v26 = -1;
        else
          v26 = v24->fields.num;
        ItemIconComponent__SetItemImage_28310700((ItemIconComponent_o *)this, (int32_t)item, v26, 0LL);
      }
      goto LABEL_9;
    }
LABEL_70:
    v36 = sub_B52A88(this);
    sub_B52A28(v36, 0LL);
  }
  this = (EventMissionItemListViewItemDraw_o *)System_String__IsNullOrEmpty(v22, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v27 = *p_giftEntityList;
    if ( !*p_giftEntityList )
      goto LABEL_69;
    if ( !v27->max_length )
      goto LABEL_70;
    v28 = v27->m_Items[0];
    if ( !v28 )
      goto LABEL_69;
    item = (EventMissionItemListViewItem_o *)(unsigned int)v28->fields.prioredIconId;
    itemIcon = v6->fields.itemIcon;
    if ( (int)item < 1 )
    {
      Type = MissionListViewItem__get_Type((MissionListViewItem_o *)v5, 0LL);
      rewardObjectId = v5->fields.rewardObjectId;
      v35 = Type;
      this = (EventMissionItemListViewItemDraw_o *)MissionListViewItem__get_DisplayGiftNum(
                                                     (MissionListViewItem_o *)v5,
                                                     0LL);
      if ( !itemIcon )
        goto LABEL_69;
      ItemIconComponent__SetGiftDesignSize(itemIcon, v35, rewardObjectId, (int32_t)this, 0LL);
    }
    else
    {
      if ( !itemIcon )
        goto LABEL_69;
      v30 = v28->fields.num;
      if ( v30 <= 1 )
        v31 = -1;
      else
        v31 = v30;
      ItemIconComponent__SetItemImage_28310700(v6->fields.itemIcon, (int32_t)item, v31, 0LL);
    }
  }
  else
  {
    this = (EventMissionItemListViewItemDraw_o *)v6->fields.itemIcon;
    if ( !this )
      goto LABEL_69;
    ItemIconComponent__SetItemImageByName((ItemIconComponent_o *)this, v22, 0LL);
  }
  this = (EventMissionItemListViewItemDraw_o *)v6->fields.itemIcon;
  if ( !this )
    goto LABEL_69;
  ItemIconComponent__SetAlpha((ItemIconComponent_o *)this, 1.0, 0LL);
LABEL_9:
  this = (EventMissionItemListViewItemDraw_o *)MissionListViewItem__get_EventRewardType(
                                                 (MissionListViewItem_o *)v5,
                                                 0LL);
  if ( (_DWORD)this == 3 )
  {
    v8 = v5->fields.eventMissionEnt;
    if ( v8 )
    {
      if ( ((v5->fields.progStatus < 2u) & ((unsigned int)v8->fields.flag >> 1)) != 0 )
      {
        this = (EventMissionItemListViewItemDraw_o *)v6->fields.itemIcon;
        v6->fields.isMultipleReward = 0;
        if ( this )
        {
          iconId = 99;
LABEL_47:
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
          goto LABEL_47;
        }
      }
    }
LABEL_69:
    sub_B52A5C(this, item);
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

  if ( (byte_42B04FC & 1) == 0 )
  {
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_8807/*"MISSION_PERIOD_END"*/);
    byte_42B04FC = 1;
  }
  MissionListViewItemDraw__SetRewardStatusImg((MissionListViewItemDraw_o *)this, status, 0LL);
  if ( status == 5 )
  {
    lockImgInfo = this->fields.lockImgInfo;
    if ( !lockImgInfo )
      goto LABEL_12;
    UnityEngine_GameObject__SetActive(lockImgInfo, 0, 0LL);
    lockImgInfo = this->fields.timeOverInfo;
    if ( !lockImgInfo )
      goto LABEL_12;
    UnityEngine_GameObject__SetActive(lockImgInfo, 1, 0LL);
    timeOverLb = this->fields.timeOverLb;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    lockImgInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8807/*"MISSION_PERIOD_END"*/, 0LL);
    if ( !timeOverLb )
LABEL_12:
      sub_B52A5C(lockImgInfo, v5);
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

  if ( (byte_42B04FF & 1) == 0 )
  {
    sub_B52984(&EventMissionItemListViewItemDraw_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&StringLiteral_13508/*"TIME_REST_TIMEOVER"*/);
    byte_42B04FF = 1;
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
        resTimeLb = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(resTimeLb, 0LL);
        if ( !resTimeLb )
          goto LABEL_38;
        if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)resTimeLb, 0LL) )
        {
          resTimeLb = (UnityEngine_Component_o *)MissionListViewItem__get_EventMissionEntity(
                                                   (MissionListViewItem_o *)item,
                                                   0LL);
          if ( !this->fields.resTimeLb )
            goto LABEL_38;
          v10 = resTimeLb;
          resTimeLb = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this->fields.resTimeLb,
                                                   0LL);
          if ( !resTimeLb )
            goto LABEL_38;
          if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)resTimeLb, 0LL) )
          {
            if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !NetworkManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            }
            resTimeLb = (UnityEngine_Component_o *)NetworkManager__getTime(0LL);
            oldTime = this->fields.oldTime;
            v12 = (int64_t)resTimeLb;
            v13 = EventMissionItemListViewItemDraw_TypeInfo;
            if ( (BYTE3(EventMissionItemListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !EventMissionItemListViewItemDraw_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(EventMissionItemListViewItemDraw_TypeInfo);
              v13 = EventMissionItemListViewItemDraw_TypeInfo;
            }
            if ( v12 - oldTime >= v13->static_fields->TIME_UPDATE_ITVL_SEC )
            {
              if ( !v10 )
                goto LABEL_38;
              v14 = this->fields.resTimeLb;
              if ( this->fields.isAchiveTime )
              {
                klass = (int64_t)v10[3].klass;
                if ( (BYTE3(v13->vtable._0_Equals.methodPtr) & 4) != 0 && !v13->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(v13);
                resTimeLb = (UnityEngine_Component_o *)EventMissionItemListViewItemDraw__GetAchiveTimeText(klass, v8);
              }
              else
              {
                v16 = *(_QWORD *)&v10[2].fields.m_CachedPtr;
                if ( (BYTE3(v13->vtable._0_Equals.methodPtr) & 4) != 0 && !v13->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(v13);
                resTimeLb = (UnityEngine_Component_o *)EventMissionItemListViewItemDraw__GetRestTimeText(v16, v8);
              }
              v8 = (const MethodInfo *)resTimeLb;
              if ( !v14 )
                goto LABEL_38;
              UILabel__set_text(v14, (System_String_o *)resTimeLb, 0LL);
              this->fields.oldTime = v12;
              v17 = *(_QWORD *)&v10[2].fields.m_CachedPtr;
              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              RestTime = LocalizationManager__GetRestTime(v17, 0LL);
              resTimeLb = (UnityEngine_Component_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_13508/*"TIME_REST_TIMEOVER"*/,
                                                       0LL);
              if ( !RestTime )
                goto LABEL_38;
              if ( System_String__Equals_44555656(RestTime, (System_String_o *)resTimeLb, 0LL) )
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
LABEL_38:
                sub_B52A5C(resTimeLb, v8);
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

  if ( (byte_42B0501 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B0501 = 1;
  }
  newIcon = (UnityEngine_Object_o *)this->fields.newIcon;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = (ShiningIconComponent_o *)UnityEngine_Object__op_Inequality(newIcon, 0LL, 0LL);
  if ( ((unsigned __int8)v6 & 1) != 0 )
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
      sub_B52A5C(v6, v7);
    }
    v6 = this->fields.newIcon;
    if ( !v6 )
      goto LABEL_15;
    ShiningIconComponent__Clear(v6, 0LL);
  }
}