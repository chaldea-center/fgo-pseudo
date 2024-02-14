void __fastcall EventMissionItemListViewItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4214CBF & 1) == 0 )
  {
    sub_B0D8A4(&EventMissionItemListViewItemDraw_TypeInfo, v1);
    byte_4214CBF = 1;
  }
  EventMissionItemListViewItemDraw_TypeInfo->static_fields->TIME_UPDATE_ITVL_SEC = 60;
}


void __fastcall EventMissionItemListViewItemDraw___ctor(
        EventMissionItemListViewItemDraw_o *this,
        const MethodInfo *method)
{
  if ( (byte_4214CBE & 1) == 0 )
  {
    sub_B0D8A4(&MissionListViewItemDraw_TypeInfo, method);
    byte_4214CBE = 1;
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
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  struct UISprite_o *v11; // x8
  struct UIAtlas_o *mAtlas; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  struct UISprite_o *v19; // x8
  struct System_String_o *mSpriteName; // x1
  UnityEngine_Object_o *boardMaskSprite; // x20
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  struct UISprite_o *v28; // x8
  struct UIAtlas_o *v29; // x1
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  struct UISprite_o *v36; // x8
  struct System_String_o *v37; // x1

  if ( (byte_4214CB3 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4214CB3 = 1;
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
    v11 = this->fields.stampSprite;
    if ( !v11 )
      goto LABEL_18;
    mAtlas = v11->fields.mAtlas;
    this->fields.baseStampSpriteAtlas = mAtlas;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.baseStampSpriteAtlas,
      (System_Int32_array **)mAtlas,
      v5,
      v6,
      v7,
      v8,
      v9,
      v10);
    v19 = this->fields.stampSprite;
    if ( !v19 )
      goto LABEL_18;
    mSpriteName = v19->fields.mSpriteName;
    this->fields.baseStampSpriteName = mSpriteName;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.baseStampSpriteName,
      (System_Int32_array **)mSpriteName,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
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
    v28 = this->fields.boardMaskSprite;
    if ( v28 )
    {
      v29 = v28->fields.mAtlas;
      this->fields.baseBoardMaskSpriteAtlas = v29;
      sub_B0D840(
        (BattleServantConfConponent_o *)&this->fields.baseBoardMaskSpriteAtlas,
        (System_Int32_array **)v29,
        v22,
        v23,
        v24,
        v25,
        v26,
        v27);
      v36 = this->fields.boardMaskSprite;
      if ( v36 )
      {
        v37 = v36->fields.mSpriteName;
        this->fields.baseBoardMaskSpriteName = v37;
        sub_B0D840(
          (BattleServantConfConponent_o *)&this->fields.baseBoardMaskSpriteName,
          (System_Int32_array **)v37,
          v30,
          v31,
          v32,
          v33,
          v34,
          v35);
        return;
      }
    }
LABEL_18:
    sub_B0D97C(v4);
  }
}


void __fastcall EventMissionItemListViewItemDraw__ChangeNextRewardIcon(
        EventMissionItemListViewItemDraw_o *this,
        EventMissionItemListViewManager_o *manager,
        const MethodInfo *method)
{
  struct GiftEntity_array *giftEntityList; // x20
  EventMissionItemListViewItemDraw_o *v4; // x19
  int32_t *v5; // x9
  int32_t v6; // w1
  int v7; // w8
  int32_t v8; // w2
  int32_t v9; // w3
  __int64 v10; // x0

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
    v10 = sub_B0D9A8(this);
    sub_B0D948(v10, 0LL);
  }
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
        v8 = v5[7];
      ItemIconComponent__SetItemImage_26857580((ItemIconComponent_o *)this, v6, v8, 0LL);
      return;
    }
LABEL_18:
    sub_B0D97C(this);
  }
  if ( !this )
    goto LABEL_18;
  if ( v7 <= 1 )
    v9 = -1;
  else
    v9 = v5[7];
  ItemIconComponent__SetGiftDesignSize((ItemIconComponent_o *)this, v5[5], v5[6], v9, 0LL);
}


System_String_o *__fastcall EventMissionItemListViewItemDraw__GetAchiveTimeText(
        int64_t closeTime,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_String_o *v5; // x20
  System_String_o *RestTime; // x2

  if ( (byte_4214CB9 & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_80/*" "*/, v3);
    sub_B0D8A4(&StringLiteral_13436/*"TIME_REST_ACHIVE"*/, v4);
    byte_4214CB9 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_13436/*"TIME_REST_ACHIVE"*/, 0LL);
  RestTime = LocalizationManager__GetRestTime(closeTime, 0LL);
  return System_String__Concat_43852188(v5, (System_String_o *)StringLiteral_80/*" "*/, RestTime, 0LL);
}


System_String_o *__fastcall EventMissionItemListViewItemDraw__GetRestTimeText(
        int64_t endTime,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_String_o *v4; // x20
  System_String_o *RestTime; // x1

  if ( (byte_4214CB8 & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_13448/*"TIME_REST_QUEST"*/, v3);
    byte_4214CB8 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_13448/*"TIME_REST_QUEST"*/, 0LL);
  RestTime = LocalizationManager__GetRestTime(endTime, 0LL);
  return System_String__Concat_43849904(v4, RestTime, 0LL);
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
  int32_t *p_progStatus; // x21
  int v19; // w8
  const MethodInfo *v20; // x1
  int64_t v21; // x20
  UILabel_o *timeOverLb; // x20
  char isAchiveTime; // w1

  if ( (byte_4214CB5 & 1) == 0 )
  {
    sub_B0D8A4(&EventMissionItemListViewItemDraw_TypeInfo, missionListviewItem);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v5);
    sub_B0D8A4(&NetworkManager_TypeInfo, v6);
    sub_B0D8A4(&StringLiteral_8776/*"MISSION_PERIOD_END"*/, v7);
    byte_4214CB5 = 1;
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
  Time = (int64_t)MissionListViewItem__get_EventMissionEntity(missionListviewItem, 0LL);
  if ( !Time )
    goto LABEL_49;
  if ( v9 >= *(_QWORD *)(Time + 56) )
  {
    Time = (int64_t)MissionListViewItem__get_EventMissionEntity(missionListviewItem, 0LL);
    if ( !Time )
      goto LABEL_49;
    v11 = *(_QWORD *)(Time + 64);
    this->fields.isDispTime = v9 < v11;
    p_isDispTime = &this->fields.isDispTime;
    if ( v9 < v11 )
    {
      Time = (int64_t)MissionListViewItem__get_EventMissionEntity(missionListviewItem, 0LL);
      if ( !Time )
        goto LABEL_49;
      v13 = *(_QWORD *)(Time + 64);
      if ( (BYTE3(EventMissionItemListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventMissionItemListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventMissionItemListViewItemDraw_TypeInfo);
      }
      RestTimeText = EventMissionItemListViewItemDraw__GetRestTimeText(v13, v12);
      if ( missionListviewItem->fields.progStatus == 3 )
      {
        Time = (int64_t)MissionListViewItem__get_EventMissionEntity(missionListviewItem, 0LL);
        if ( !Time )
          goto LABEL_49;
        v16 = *(_QWORD *)(Time + 72);
        if ( (BYTE3(EventMissionItemListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !EventMissionItemListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventMissionItemListViewItemDraw_TypeInfo);
        }
        AchiveTimeText = EventMissionItemListViewItemDraw__GetAchiveTimeText(v16, v15);
        this->fields.isAchiveTime = 1;
      }
      else
      {
        AchiveTimeText = RestTimeText;
      }
      Time = (int64_t)this->fields.resTimeLb;
      if ( !Time )
LABEL_49:
        sub_B0D97C(Time);
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
  v19 = 1;
  if ( (unsigned int)(missionListviewItem->fields.progStatus - 3) >= 2 )
  {
    missionListviewItem->fields.isNowMission = 1;
    goto LABEL_34;
  }
  this->fields.isAchiveTime = 1;
  Time = (int64_t)MissionListViewItem__get_EventMissionEntity(missionListviewItem, 0LL);
  if ( !Time )
    goto LABEL_49;
  v21 = *(_QWORD *)(Time + 72);
  if ( (BYTE3(EventMissionItemListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventMissionItemListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventMissionItemListViewItemDraw_TypeInfo);
  }
  Time = (int64_t)EventMissionItemListViewItemDraw__GetAchiveTimeText(v21, v20);
  if ( !this->fields.resTimeLb )
    goto LABEL_49;
  AchiveTimeText = (System_String_o *)Time;
  Time = (int64_t)this->fields.resTimeLb;
LABEL_33:
  UILabel__set_text((UILabel_o *)Time, AchiveTimeText, 0LL);
  v19 = 0;
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
  if ( v19 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0LL);
    timeOverLb = this->fields.timeOverLb;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    Time = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_8776/*"MISSION_PERIOD_END"*/, 0LL);
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
    isAchiveTime = this->fields.isAchiveTime;
    if ( Time )
      goto LABEL_47;
    goto LABEL_49;
  }
  isAchiveTime = 1;
  if ( !Time )
    goto LABEL_49;
LABEL_47:
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

  if ( (byte_4214CBD & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, *(_QWORD *)&bannerGroupId);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v5);
    byte_4214CBD = 1;
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
        v9 = this->fields.baseSprite;
        baseAtlas = this->fields.baseAtlas;
        baseSpriteName = this->fields.baseSpriteName;
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
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
  __int64 v6; // x10
  UnityEngine_Object_o *baseButton; // x21
  const MethodInfo *v8; // x2

  if ( (byte_4214CBB & 1) == 0 )
  {
    sub_B0D8A4(&EventMissionItemListViewItem_TypeInfo, missionListViewItem);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v5);
    byte_4214CBB = 1;
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
  __int64 v12; // x1
  __int64 v13; // x10
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
  if ( (byte_4214CB4 & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, missionListViewItem);
    sub_B0D8A4(&EventMissionItemListViewItem_TypeInfo, v9);
    sub_B0D8A4(&EventMissionItemListViewManager_TypeInfo, v10);
    sub_B0D8A4(&EventRewardRootComponent_TypeInfo, v11);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v12);
    byte_4214CB4 = 1;
  }
  if ( !MissionListViewItemDraw__SetItem((MissionListViewItemDraw_o *)this, v7, mode, listViewManager, 0LL) )
    return 0;
  if ( !v7 )
  {
LABEL_7:
    if ( !listViewManager )
      goto LABEL_8;
LABEL_13:
    v14 = *(&EventMissionItemListViewManager_TypeInfo->_2.bitflags2 + 1);
    if ( *(&listViewManager->klass->_2.bitflags2 + 1) >= (unsigned int)v14 )
    {
      if ( (EventMissionItemListViewManager_c *)listViewManager->klass->_2.typeHierarchy[v14 - 1] != EventMissionItemListViewManager_TypeInfo )
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
  v13 = *(&EventMissionItemListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v7->klass->_2.bitflags2 + 1) < (unsigned int)v13 )
  {
    v7 = 0LL;
    goto LABEL_7;
  }
  if ( (EventMissionItemListViewItem_c *)v7->klass->_2.typeHierarchy[v13 - 1] != EventMissionItemListViewItem_TypeInfo )
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
      v17 = BYTE1(v7[1].monitor);
      iconLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(iconLabel, 0LL);
      if ( iconLabel )
      {
        if ( v17 )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)iconLabel, 0, 0LL);
          goto LABEL_31;
        }
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)iconLabel, 1, 0LL);
        iconLabel = (UnityEngine_Component_o *)this->fields.iconLabel;
        if ( iconLabel )
        {
          UIIconLabel__Set_41076120((UIIconLabel_o *)iconLabel, 57, v7->fields.dispNo, 0, 0, 0LL, 0, 0, 0, 0LL);
LABEL_31:
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
          if ( (BYTE3(EventRewardRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
          }
          EventRewardRootComponent__SetRewardRaritySprite(rewardBackSprite, v24, rewardObjectId, klass, 0LL);
          goto LABEL_35;
        }
      }
    }
    sub_B0D97C(iconLabel);
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
    v26 = this->fields.stampSprite;
    baseStampSpriteAtlas = this->fields.baseStampSpriteAtlas;
    baseStampSpriteName = this->fields.baseStampSpriteName;
    bannerGroupId = v7->fields.bannerGroupId;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetMissionBoardStampSprite(v26, baseStampSpriteAtlas, baseStampSpriteName, bannerGroupId, 0LL);
  }
  boardMaskSprite = (UnityEngine_Object_o *)this->fields.boardMaskSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(boardMaskSprite, 0LL, 0LL) )
  {
    v31 = this->fields.boardMaskSprite;
    baseBoardMaskSpriteAtlas = this->fields.baseBoardMaskSpriteAtlas;
    baseBoardMaskSpriteName = this->fields.baseBoardMaskSpriteName;
    v34 = v7->fields.bannerGroupId;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
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
    sub_B0D97C(0LL);
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
  struct EventMissionEntity_o *eventMissionEnt; // x8
  struct EventMissionEntity_o *v11; // x8
  int32_t iconId; // w1
  GiftMaster_o *Master_WarQuestSelectionMaster; // x22
  System_Int32_array **GiftListById; // x0
  struct GiftEntity_array **p_giftEntityList; // x22
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  __int64 v22; // x8
  EventMissionAddMaster_o *v23; // x23
  int32_t m_CachedPtr; // w24
  System_String_o *v25; // x23
  struct GiftEntity_array *v26; // x22
  int32_t *v27; // x9
  int32_t v28; // w1
  int v29; // w8
  int32_t v30; // w2
  struct GiftEntity_array *v31; // x8
  GiftEntity_o *v32; // x8
  int32_t prioredIconId; // w1
  ItemIconComponent_o *itemIcon; // x21
  int num; // w8
  int32_t v36; // w2
  int32_t v37; // w3
  int32_t Type; // w0
  int32_t rewardObjectId; // w22
  int32_t v40; // w23
  __int64 v41; // x0

  v6 = this;
  if ( (byte_4214CB6 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_EventMissionAddMaster___, item);
    sub_B0D8A4(&Method_DataManager_GetMaster_GiftMaster___, v7);
    sub_B0D8A4(&DataManager_TypeInfo, v8);
    this = (EventMissionItemListViewItemDraw_o *)sub_B0D8A4(&UnityEngine_Object_TypeInfo, v9);
    byte_4214CB6 = 1;
  }
  if ( !item )
    goto LABEL_69;
  this = (EventMissionItemListViewItemDraw_o *)MissionListViewItem__get_EventRewardType(
                                                 (MissionListViewItem_o *)item,
                                                 0LL);
  if ( (_DWORD)this != 1 )
    goto LABEL_9;
  eventMissionEnt = item->fields.eventMissionEnt;
  if ( !eventMissionEnt )
    goto LABEL_69;
  if ( ((item->fields.progStatus < 2u) & ((unsigned int)eventMissionEnt->fields.flag >> 1)) != 0 )
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
  Master_WarQuestSelectionMaster = (GiftMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_GiftMaster___);
  this = (EventMissionItemListViewItemDraw_o *)MissionListViewItem__get_EventMissionEntity(
                                                 (MissionListViewItem_o *)item,
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
  sub_B0D840((BattleServantConfConponent_o *)&v6->fields.giftEntityList, GiftListById, v16, v17, v18, v19, v20, v21);
  if ( !v6->fields.giftEntityList )
    goto LABEL_69;
  v22 = *(_QWORD *)&v6->fields.giftEntityList->max_length;
  if ( !v22 )
    return;
  v6->fields.isMultipleReward = (int)v22 > 1;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v23 = (EventMissionAddMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_EventMissionAddMaster___);
  this = (EventMissionItemListViewItemDraw_o *)MissionListViewItem__get_EventMissionEntity(
                                                 (MissionListViewItem_o *)item,
                                                 0LL);
  if ( !this )
    goto LABEL_69;
  m_CachedPtr = this->fields.m_CachedPtr;
  this = (EventMissionItemListViewItemDraw_o *)MissionListViewItem__get_EventMissionEntity(
                                                 (MissionListViewItem_o *)item,
                                                 0LL);
  if ( !this || !v23 )
    goto LABEL_69;
  v25 = EventMissionAddMaster__GetEventMissionChangeRewardIcon(
          v23,
          m_CachedPtr,
          HIDWORD(this->fields.baseSprite),
          0,
          0LL);
  if ( !System_String__IsNullOrEmpty(v25, 0LL) )
  {
    v6->fields.isMultipleReward = 0;
    item->fields.isHideRewardDetail = 1;
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
    v26 = *p_giftEntityList;
    if ( !v26 || !manager )
      goto LABEL_69;
    this = (EventMissionItemListViewItemDraw_o *)MissionListViewManager__GetAlphaAnimCnt(
                                                   (MissionListViewManager_o *)manager,
                                                   v26->max_length,
                                                   0LL);
    if ( (unsigned int)this < v26->max_length )
    {
      v27 = (int32_t *)v26->m_Items[(int)this];
      if ( !v27 )
        goto LABEL_69;
      v28 = v27[11];
      this = (EventMissionItemListViewItemDraw_o *)v6->fields.itemIcon;
      v29 = v27[7];
      if ( v28 < 1 )
      {
        if ( !this )
          goto LABEL_69;
        if ( v29 <= 1 )
          v37 = -1;
        else
          v37 = v27[7];
        ItemIconComponent__SetGiftDesignSize((ItemIconComponent_o *)this, v27[5], v27[6], v37, 0LL);
      }
      else
      {
        if ( !this )
          goto LABEL_69;
        if ( v29 <= 1 )
          v30 = -1;
        else
          v30 = v27[7];
        ItemIconComponent__SetItemImage_26857580((ItemIconComponent_o *)this, v28, v30, 0LL);
      }
      goto LABEL_9;
    }
LABEL_70:
    v41 = sub_B0D9A8(this);
    sub_B0D948(v41, 0LL);
  }
  this = (EventMissionItemListViewItemDraw_o *)System_String__IsNullOrEmpty(v25, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v31 = *p_giftEntityList;
    if ( !*p_giftEntityList )
      goto LABEL_69;
    if ( !v31->max_length )
      goto LABEL_70;
    v32 = v31->m_Items[0];
    if ( !v32 )
      goto LABEL_69;
    prioredIconId = v32->fields.prioredIconId;
    itemIcon = v6->fields.itemIcon;
    if ( prioredIconId < 1 )
    {
      Type = MissionListViewItem__get_Type((MissionListViewItem_o *)item, 0LL);
      rewardObjectId = item->fields.rewardObjectId;
      v40 = Type;
      this = (EventMissionItemListViewItemDraw_o *)MissionListViewItem__get_DisplayGiftNum(
                                                     (MissionListViewItem_o *)item,
                                                     0LL);
      if ( !itemIcon )
        goto LABEL_69;
      ItemIconComponent__SetGiftDesignSize(itemIcon, v40, rewardObjectId, (int32_t)this, 0LL);
    }
    else
    {
      if ( !itemIcon )
        goto LABEL_69;
      num = v32->fields.num;
      if ( num <= 1 )
        v36 = -1;
      else
        v36 = num;
      ItemIconComponent__SetItemImage_26857580(v6->fields.itemIcon, prioredIconId, v36, 0LL);
    }
  }
  else
  {
    this = (EventMissionItemListViewItemDraw_o *)v6->fields.itemIcon;
    if ( !this )
      goto LABEL_69;
    ItemIconComponent__SetItemImageByName((ItemIconComponent_o *)this, v25, 0LL);
  }
  this = (EventMissionItemListViewItemDraw_o *)v6->fields.itemIcon;
  if ( !this )
    goto LABEL_69;
  ItemIconComponent__SetAlpha((ItemIconComponent_o *)this, 1.0, 0LL);
LABEL_9:
  this = (EventMissionItemListViewItemDraw_o *)MissionListViewItem__get_EventRewardType(
                                                 (MissionListViewItem_o *)item,
                                                 0LL);
  if ( (_DWORD)this == 3 )
  {
    v11 = item->fields.eventMissionEnt;
    if ( v11 )
    {
      if ( ((item->fields.progStatus < 2u) & ((unsigned int)v11->fields.flag >> 1)) != 0 )
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
          iconId = item->fields.iconId;
          goto LABEL_47;
        }
      }
    }
LABEL_69:
    sub_B0D97C(this);
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

  if ( (byte_4214CB7 & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, *(_QWORD *)&status);
    sub_B0D8A4(&StringLiteral_8776/*"MISSION_PERIOD_END"*/, v5);
    byte_4214CB7 = 1;
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
    lockImgInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8776/*"MISSION_PERIOD_END"*/, 0LL);
    if ( !timeOverLb )
LABEL_12:
      sub_B0D97C(lockImgInfo);
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

  if ( (byte_4214CBA & 1) == 0 )
  {
    sub_B0D8A4(&EventMissionItemListViewItemDraw_TypeInfo, item);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v7);
    sub_B0D8A4(&NetworkManager_TypeInfo, v8);
    sub_B0D8A4(&StringLiteral_13455/*"TIME_REST_TIMEOVER"*/, v9);
    byte_4214CBA = 1;
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
          v12 = resTimeLb;
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
            v15 = (int64_t)resTimeLb;
            v16 = EventMissionItemListViewItemDraw_TypeInfo;
            if ( (BYTE3(EventMissionItemListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !EventMissionItemListViewItemDraw_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(EventMissionItemListViewItemDraw_TypeInfo);
              v16 = EventMissionItemListViewItemDraw_TypeInfo;
            }
            if ( v15 - oldTime >= v16->static_fields->TIME_UPDATE_ITVL_SEC )
            {
              if ( !v12 )
                goto LABEL_38;
              v17 = this->fields.resTimeLb;
              if ( this->fields.isAchiveTime )
              {
                klass = (int64_t)v12[3].klass;
                if ( (BYTE3(v16->vtable._0_Equals.methodPtr) & 4) != 0 && !v16->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(v16);
                resTimeLb = (UnityEngine_Component_o *)EventMissionItemListViewItemDraw__GetAchiveTimeText(klass, v13);
              }
              else
              {
                v19 = *(_QWORD *)&v12[2].fields.m_CachedPtr;
                if ( (BYTE3(v16->vtable._0_Equals.methodPtr) & 4) != 0 && !v16->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(v16);
                resTimeLb = (UnityEngine_Component_o *)EventMissionItemListViewItemDraw__GetRestTimeText(v19, v13);
              }
              if ( !v17 )
                goto LABEL_38;
              UILabel__set_text(v17, (System_String_o *)resTimeLb, 0LL);
              this->fields.oldTime = v15;
              v20 = *(_QWORD *)&v12[2].fields.m_CachedPtr;
              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              RestTime = LocalizationManager__GetRestTime(v20, 0LL);
              resTimeLb = (UnityEngine_Component_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_13455/*"TIME_REST_TIMEOVER"*/,
                                                       0LL);
              if ( !RestTime )
                goto LABEL_38;
              if ( System_String__Equals_43837244(RestTime, (System_String_o *)resTimeLb, 0LL) )
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
                sub_B0D97C(resTimeLb);
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

  if ( (byte_4214CBC & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, item);
    byte_4214CBC = 1;
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
      sub_B0D97C(v6);
    }
    v6 = this->fields.newIcon;
    if ( !v6 )
      goto LABEL_15;
    ShiningIconComponent__Clear(v6, 0LL);
  }
}