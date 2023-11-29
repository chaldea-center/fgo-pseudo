void __fastcall EventRandomMissionListViewItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  EventRandomMissionListViewItemDraw_c *v2; // x8

  if ( (byte_40F60AE & 1) == 0 )
  {
    sub_B16FFC(&EventRandomMissionListViewItemDraw_TypeInfo, v1);
    byte_40F60AE = 1;
  }
  EventRandomMissionListViewItemDraw_TypeInfo->static_fields->MISSION_COND_FONT_SIZE = 15;
  EventRandomMissionListViewItemDraw_TypeInfo->static_fields->REJECT_SPRITE_WIDTH = 81;
  v2 = EventRandomMissionListViewItemDraw_TypeInfo;
  EventRandomMissionListViewItemDraw_TypeInfo->static_fields->REJECT_SPRITE_HEIGHT = 36;
  v2->static_fields->RANK_SPRITE_WIDTH = 64;
  v2->static_fields->RANK_SPRITE_HEIGHT = 64;
}


void __fastcall EventRandomMissionListViewItemDraw___ctor(
        EventRandomMissionListViewItemDraw_o *this,
        const MethodInfo *method)
{
  if ( (byte_40F60AD & 1) == 0 )
  {
    sub_B16FFC(&MissionListViewItemDraw_TypeInfo, method);
    byte_40F60AD = 1;
  }
  if ( (BYTE3(MissionListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MissionListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionListViewItemDraw_TypeInfo);
  }
  MissionListViewItemDraw___ctor((MissionListViewItemDraw_o *)this, 0LL);
}


void __fastcall EventRandomMissionListViewItemDraw__ChangeNextRewardIcon(
        EventRandomMissionListViewItemDraw_o *this,
        EventRandomMissionListViewManager_o *manager,
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


System_String_o *__fastcall EventRandomMissionListViewItemDraw__GetAchiveTimeText(
        int64_t closeTime,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_String_o *v5; // x20
  System_String_o *RestTime; // x2

  if ( (byte_40F60A9 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_80, v3);
    sub_B16FFC(&StringLiteral_13336, v4);
    byte_40F60A9 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_13336, 0LL);
  RestTime = LocalizationManager__GetRestTime(closeTime, 0LL);
  return System_String__Concat_43746016(v5, (System_String_o *)StringLiteral_80, RestTime, 0LL);
}


System_String_o *__fastcall EventRandomMissionListViewItemDraw__GetRestTimeText(
        int64_t endTime,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_String_o *v4; // x20
  System_String_o *RestTime; // x1

  if ( (byte_40F60A8 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_13348, v3);
    byte_40F60A8 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_13348, 0LL);
  RestTime = LocalizationManager__GetRestTime(endTime, 0LL);
  return System_String__Concat_43743732(v4, RestTime, 0LL);
}


void __fastcall EventRandomMissionListViewItemDraw__InitDispResTime(
        EventRandomMissionListViewItemDraw_o *this,
        MissionListViewItem_o *missionListviewItem,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  int64_t Time; // x0
  int64_t v10; // x21
  EventMissionEntity_o *EventMissionEntity; // x0
  bool *p_isDispTime; // x22
  EventMissionEntity_o *v13; // x0
  int64_t endedAt; // x8
  EventMissionEntity_o *v15; // x0
  const MethodInfo *v16; // x1
  int64_t v17; // x21
  System_String_o *RestTimeText; // x0
  EventMissionEntity_o *v19; // x0
  const MethodInfo *v20; // x1
  int64_t closedAt; // x21
  System_String_o *AchiveTimeText; // x1
  int32_t *p_progStatus; // x23
  int v24; // w8
  EventMissionEntity_o *v25; // x0
  const MethodInfo *v26; // x1
  int64_t v27; // x21
  System_String_o *v28; // x0
  UILabel_o *resTimeLb; // x0
  UnityEngine_GameObject_o *timeOverInfo; // x0
  UILabel_o *timeOverLb; // x21
  System_String_o *v32; // x0
  __int64 v33; // x10
  UnityEngine_Component_o *v34; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  char isAchiveTime; // w1

  if ( (byte_40F60A5 & 1) == 0 )
  {
    sub_B16FFC(&EventRandomMissionListViewItemDraw_TypeInfo, missionListviewItem);
    sub_B16FFC(&EventRandomMissionListViewItem_TypeInfo, v5);
    sub_B16FFC(&LocalizationManager_TypeInfo, v6);
    sub_B16FFC(&NetworkManager_TypeInfo, v7);
    sub_B16FFC(&StringLiteral_8725, v8);
    byte_40F60A5 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  this->fields.isAchiveTime = 0;
  if ( !missionListviewItem )
    goto LABEL_51;
  v10 = Time;
  EventMissionEntity = MissionListViewItem__get_EventMissionEntity(missionListviewItem, 0LL);
  if ( !EventMissionEntity )
    goto LABEL_51;
  if ( v10 >= EventMissionEntity->fields.startedAt )
  {
    v13 = MissionListViewItem__get_EventMissionEntity(missionListviewItem, 0LL);
    if ( !v13 )
      goto LABEL_51;
    endedAt = v13->fields.endedAt;
    this->fields.isDispTime = v10 < endedAt;
    p_isDispTime = &this->fields.isDispTime;
    if ( v10 < endedAt )
    {
      v15 = MissionListViewItem__get_EventMissionEntity(missionListviewItem, 0LL);
      if ( !v15 )
        goto LABEL_51;
      v17 = v15->fields.endedAt;
      if ( (BYTE3(EventRandomMissionListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventRandomMissionListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRandomMissionListViewItemDraw_TypeInfo);
      }
      RestTimeText = EventRandomMissionListViewItemDraw__GetRestTimeText(v17, v16);
      if ( missionListviewItem->fields.progStatus == 3 )
      {
        v19 = MissionListViewItem__get_EventMissionEntity(missionListviewItem, 0LL);
        if ( !v19 )
          goto LABEL_51;
        closedAt = v19->fields.closedAt;
        if ( (BYTE3(EventRandomMissionListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !EventRandomMissionListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventRandomMissionListViewItemDraw_TypeInfo);
        }
        AchiveTimeText = EventRandomMissionListViewItemDraw__GetAchiveTimeText(closedAt, v20);
        this->fields.isAchiveTime = 1;
      }
      else
      {
        AchiveTimeText = RestTimeText;
      }
      resTimeLb = this->fields.resTimeLb;
      if ( !resTimeLb )
LABEL_51:
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
  v24 = 1;
  if ( (unsigned int)(missionListviewItem->fields.progStatus - 3) >= 2 )
  {
    missionListviewItem->fields.isNowMission = 1;
    goto LABEL_34;
  }
  this->fields.isAchiveTime = 1;
  v25 = MissionListViewItem__get_EventMissionEntity(missionListviewItem, 0LL);
  if ( !v25 )
    goto LABEL_51;
  v27 = v25->fields.closedAt;
  if ( (BYTE3(EventRandomMissionListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventRandomMissionListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRandomMissionListViewItemDraw_TypeInfo);
  }
  v28 = EventRandomMissionListViewItemDraw__GetAchiveTimeText(v27, v26);
  if ( !this->fields.resTimeLb )
    goto LABEL_51;
  AchiveTimeText = v28;
  resTimeLb = this->fields.resTimeLb;
LABEL_33:
  UILabel__set_text(resTimeLb, AchiveTimeText, 0LL);
  v24 = 0;
  this->fields.oldTime = 0LL;
LABEL_34:
  if ( *p_progStatus == 4 )
  {
    this->fields.isDispTime = 0;
    this->fields.isAchiveTime = 0;
  }
  timeOverInfo = this->fields.timeOverInfo;
  if ( !timeOverInfo )
    goto LABEL_51;
  if ( v24 )
  {
    UnityEngine_GameObject__SetActive(timeOverInfo, 1, 0LL);
    timeOverLb = this->fields.timeOverLb;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v32 = LocalizationManager__Get((System_String_o *)StringLiteral_8725, 0LL);
    if ( !timeOverLb )
      goto LABEL_51;
    UILabel__set_text(timeOverLb, v32, 0LL);
    v33 = *(&EventRandomMissionListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&missionListviewItem->klass->_2.bitflags2 + 1) >= (unsigned int)v33
      && (EventRandomMissionListViewItem_c *)missionListviewItem->klass->_2.typeHierarchy[v33 - 1] == EventRandomMissionListViewItem_TypeInfo )
    {
      BYTE1(missionListviewItem[1].fields.sortIndex) = 1;
    }
  }
  else
  {
    UnityEngine_GameObject__SetActive(timeOverInfo, 0, 0LL);
  }
  v34 = (UnityEngine_Component_o *)this->fields.resTimeLb;
  if ( !v34 )
    goto LABEL_51;
  gameObject = UnityEngine_Component__get_gameObject(v34, 0LL);
  if ( !*p_isDispTime )
  {
    isAchiveTime = this->fields.isAchiveTime;
    if ( gameObject )
      goto LABEL_49;
    goto LABEL_51;
  }
  isAchiveTime = 1;
  if ( !gameObject )
    goto LABEL_51;
LABEL_49:
  UnityEngine_GameObject__SetActive(gameObject, isAchiveTime, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRandomMissionListViewItemDraw__ModifyBoardImage(
        EventRandomMissionListViewItemDraw_o *this,
        int32_t bannerGroupId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *baseSprite; // x21
  UISprite_o *v7; // x22
  System_String_o *baseSpriteName; // x20
  UIAtlas_o *baseAtlas; // x21

  if ( (byte_40F60AC & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, *(_QWORD *)&bannerGroupId);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    byte_40F60AC = 1;
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
void __fastcall EventRandomMissionListViewItemDraw__OnChangeAlphaAnim(
        EventRandomMissionListViewItemDraw_o *this,
        EventRandomMissionListViewItem_o *item,
        int32_t mode,
        EventRandomMissionListViewManager_o *manager,
        const MethodInfo *method)
{
  EventRandomMissionListViewItemDraw__ChangeNextRewardIcon(this, manager, *(const MethodInfo **)&mode);
}


void __fastcall EventRandomMissionListViewItemDraw__SetInput(
        EventRandomMissionListViewItemDraw_o *this,
        MissionListViewItem_o *missionListViewItem,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x10
  UnityEngine_Object_o *baseButton; // x21
  UILabel_o *missionCondLb; // x20
  System_String_o *condMsg; // x19
  EventRandomMissionListViewItemDraw_c *v11; // x0

  if ( (byte_40F60AB & 1) == 0 )
  {
    sub_B16FFC(&EventRandomMissionListViewItemDraw_TypeInfo, missionListViewItem);
    sub_B16FFC(&EventRandomMissionListViewItem_TypeInfo, v5);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v6);
    byte_40F60AB = 1;
  }
  if ( missionListViewItem
    && (v7 = *(&EventRandomMissionListViewItem_TypeInfo->_2.bitflags2 + 1),
        *(&missionListViewItem->klass->_2.bitflags2 + 1) >= (unsigned int)v7)
    && (EventRandomMissionListViewItem_c *)missionListViewItem->klass->_2.typeHierarchy[v7 - 1] == EventRandomMissionListViewItem_TypeInfo )
  {
    MissionListViewItemDraw__SetInput((MissionListViewItemDraw_o *)this, missionListViewItem, 0LL);
    baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
    {
      missionCondLb = this->fields.missionCondLb;
      condMsg = missionListViewItem->fields.condMsg;
      v11 = EventRandomMissionListViewItemDraw_TypeInfo;
      if ( (BYTE3(EventRandomMissionListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventRandomMissionListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRandomMissionListViewItemDraw_TypeInfo);
        v11 = EventRandomMissionListViewItemDraw_TypeInfo;
      }
      WrapControlText__textAdjust(missionCondLb, condMsg, v11->static_fields->MISSION_COND_FONT_SIZE, 0, 0, 0LL);
    }
  }
  else
  {
    MissionListViewItemDraw__SetInput((MissionListViewItemDraw_o *)this, 0LL, 0LL);
  }
}


bool __fastcall EventRandomMissionListViewItemDraw__SetItem(
        EventRandomMissionListViewItemDraw_o *this,
        MissionListViewItem_o *missionListViewItem,
        int32_t mode,
        ListViewManager_o *listViewManager,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x10
  EventRandomMissionListViewItem_o *v21; // x20
  __int64 v22; // x10
  UnityEngine_GameObject_o *rewardImg; // x0
  ShiningIconComponent_o *receiveIcon; // x0
  UnityEngine_GameObject_o *rewardGetInfo; // x0
  UnityEngine_GameObject_o *rewardAchiveInfo; // x0
  UnityEngine_GameObject_o *compInfo; // x0
  UnityEngine_GameObject_o *completedImg; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *timeOverInfo; // x0
  UnityEngine_GameObject_o *lockImgInfo; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  struct GiftEntity_array *giftEnts; // x1
  struct GiftEntity_array *giftEntityList; // x8
  UILabel_o *missionCondLb; // x23
  System_String_o *condMsg; // x24
  EventRandomMissionListViewItemDraw_c *v43; // x0
  UILabel_o *missionProgressLb; // x0
  UIProgressBar_o *expBar; // x0
  MissionGiftMiniIconComponent_o *miniIconComponent; // x0
  UnityEngine_Object_o *baseButton; // x23
  UICommonButton_o *v48; // x0
  struct UICommonButton_o *v49; // x0
  UnityEngine_Object_o *baseSprite; // x22
  UISprite_o *v51; // x22
  Il2CppObject *v52; // x0
  const MethodInfo *v53; // x2
  System_String_o *v54; // x23
  UnityEngine_Object_o *timeOverSprite; // x22
  UISprite_o *v56; // x22
  Il2CppObject *v57; // x0
  const MethodInfo *v58; // x2
  System_String_o *v59; // x23
  UnityEngine_Object_o *rejectSprite; // x22
  const MethodInfo *v61; // x2
  UISprite_o *v62; // x22
  UIWidget_o *v63; // x22
  UIWidget_o *v64; // x0
  UnityEngine_Object_o *rankSprite; // x22
  const MethodInfo *v66; // x3
  EventRandomMissionMaster_o *Master_WarQuestSelectionMaster; // x0
  const MethodInfo *v68; // x3
  int v69; // w24
  UISprite_o *v70; // x22
  Il2CppObject *v71; // x23
  Il2CppObject *v72; // x0
  const MethodInfo *v73; // x2
  System_String_o *v74; // x23
  UIWidget_o *v75; // x22
  UIWidget_o *v76; // x0
  ShiningIconComponent_o *newIcon; // x0
  UnityEngine_Object_o *rewardBackSprite; // x21
  UISprite_o *v79; // x21
  int32_t Type; // w0
  const MethodInfo *v81; // x4
  int32_t rewardObjectId; // w23
  int32_t rewardRarityId; // w22
  int32_t v84; // w24
  UnityEngine_GameObject_o *v85; // x0
  int v86; // [xsp+8h] [xbp-68h] BYREF
  int32_t currentEventId; // [xsp+Ch] [xbp-64h] BYREF
  EventRandomMissionEntity_o *entity; // [xsp+10h] [xbp-60h] BYREF
  float barExp; // [xsp+1Ch] [xbp-54h] BYREF
  System_String_o *progTxt; // [xsp+28h] [xbp-48h] BYREF

  if ( (byte_40F60A4 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_EventRandomMissionMaster___, missionListViewItem);
    sub_B16FFC(&DataManager_TypeInfo, v9);
    sub_B16FFC(&EventRandomMissionListViewItemDraw_TypeInfo, v10);
    sub_B16FFC(&EventRandomMissionListViewItem_TypeInfo, v11);
    sub_B16FFC(&EventRandomMissionListViewManager_TypeInfo, v12);
    sub_B16FFC(&EventRewardRootComponent_TypeInfo, v13);
    sub_B16FFC(&int_TypeInfo, v14);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v15);
    sub_B16FFC(&StringLiteral_16938, v16);
    sub_B16FFC(&StringLiteral_20457, v17);
    sub_B16FFC(&StringLiteral_20454, v18);
    sub_B16FFC(&StringLiteral_20453, v19);
    byte_40F60A4 = 1;
  }
  progTxt = 0LL;
  barExp = 0.0;
  entity = 0LL;
  if ( !missionListViewItem
    || (v20 = *(&EventRandomMissionListViewItem_TypeInfo->_2.bitflags2 + 1),
        *(&missionListViewItem->klass->_2.bitflags2 + 1) < (unsigned int)v20) )
  {
    v21 = 0LL;
    if ( !listViewManager )
      goto LABEL_6;
LABEL_12:
    v22 = *(&EventRandomMissionListViewManager_TypeInfo->_2.bitflags2 + 1);
    if ( *(&listViewManager->klass->_2.bitflags2 + 1) >= (unsigned int)v22 )
    {
      if ( (EventRandomMissionListViewManager_c *)listViewManager->klass->_2.typeHierarchy[v22 - 1] != EventRandomMissionListViewManager_TypeInfo )
        listViewManager = 0LL;
      if ( !v21 )
        return 0;
    }
    else
    {
      listViewManager = 0LL;
      if ( !v21 )
        return 0;
    }
    goto LABEL_18;
  }
  if ( (EventRandomMissionListViewItem_c *)missionListViewItem->klass->_2.typeHierarchy[v20 - 1] == EventRandomMissionListViewItem_TypeInfo )
    v21 = (EventRandomMissionListViewItem_o *)missionListViewItem;
  else
    v21 = 0LL;
  if ( listViewManager )
    goto LABEL_12;
LABEL_6:
  if ( !v21 )
    return 0;
LABEL_18:
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)listViewManager, 0LL, 0LL) )
    return 0;
  if ( mode )
  {
    rewardImg = this->fields.rewardImg;
    if ( !rewardImg )
      goto LABEL_113;
    UnityEngine_GameObject__SetActive(rewardImg, 0, 0LL);
    receiveIcon = this->fields.receiveIcon;
    if ( !receiveIcon )
      goto LABEL_113;
    ShiningIconComponent__Clear(receiveIcon, 0LL);
    rewardGetInfo = this->fields.rewardGetInfo;
    if ( !rewardGetInfo )
      goto LABEL_113;
    UnityEngine_GameObject__SetActive(rewardGetInfo, 0, 0LL);
    rewardAchiveInfo = this->fields.rewardAchiveInfo;
    if ( !rewardAchiveInfo )
      goto LABEL_113;
    UnityEngine_GameObject__SetActive(rewardAchiveInfo, 0, 0LL);
    compInfo = this->fields.compInfo;
    if ( !compInfo )
      goto LABEL_113;
    UnityEngine_GameObject__SetActive(compInfo, 0, 0LL);
    completedImg = this->fields.completedImg;
    if ( !completedImg )
      goto LABEL_113;
    gameObject = UnityEngine_GameObject__get_gameObject(completedImg, 0LL);
    if ( !gameObject )
      goto LABEL_113;
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
    timeOverInfo = this->fields.timeOverInfo;
    if ( !timeOverInfo )
      goto LABEL_113;
    UnityEngine_GameObject__SetActive(timeOverInfo, 0, 0LL);
    lockImgInfo = this->fields.lockImgInfo;
    if ( !lockImgInfo )
      goto LABEL_113;
    UnityEngine_GameObject__SetActive(lockImgInfo, 0, 0LL);
    if ( !missionListViewItem )
      goto LABEL_113;
    giftEnts = missionListViewItem->fields.giftEnts;
    this->fields.giftEntityList = giftEnts;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.giftEntityList,
      (System_Int32_array **)giftEnts,
      v33,
      v34,
      v35,
      v36,
      v37,
      v38);
    giftEntityList = this->fields.giftEntityList;
    if ( !giftEntityList )
      goto LABEL_113;
    this->fields.isMultipleReward = (signed int)giftEntityList->max_length > 1;
    missionCondLb = this->fields.missionCondLb;
    condMsg = v21->fields.condMsg;
    v43 = EventRandomMissionListViewItemDraw_TypeInfo;
    if ( (BYTE3(EventRandomMissionListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventRandomMissionListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRandomMissionListViewItemDraw_TypeInfo);
      v43 = EventRandomMissionListViewItemDraw_TypeInfo;
    }
    WrapControlText__textAdjust(missionCondLb, condMsg, v43->static_fields->MISSION_COND_FONT_SIZE, 0, 0, 0LL);
    ((void (__fastcall *)(EventRandomMissionListViewItemDraw_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._8_SetRewardStatusImg.method)(
      this,
      (unsigned int)missionListViewItem->fields.progStatus,
      this->klass->vtable._9_UpdateDispResTime.methodPtr);
    if ( MissionListViewItem__GetProgInfo(missionListViewItem, &progTxt, &barExp, 0LL) )
    {
      missionProgressLb = this->fields.missionProgressLb;
      if ( !missionProgressLb )
        goto LABEL_113;
      UILabel__set_text(missionProgressLb, progTxt, 0LL);
      expBar = (UIProgressBar_o *)this->fields.expBar;
      if ( !expBar )
        goto LABEL_113;
      UIProgressBar__set_value(expBar, barExp, 0LL);
    }
    miniIconComponent = this->fields.miniIconComponent;
    if ( !miniIconComponent )
      goto LABEL_113;
    MissionGiftMiniIconComponent__SetMiniIcon(miniIconComponent, missionListViewItem->fields.subGiftEntity, 0LL);
    ((void (__fastcall *)(EventRandomMissionListViewItemDraw_o *, MissionListViewItem_o *, Il2CppMethodPointer))this->klass->vtable._5_InitDispResTime.method)(
      this,
      missionListViewItem,
      this->klass->vtable._6_SetLockMissionBoard.methodPtr);
    baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
    {
      v48 = this->fields.baseButton;
      if ( !v48 )
        goto LABEL_113;
      UICommonButton__SetColliderEnable(v48, missionListViewItem->fields.isColliderEnable, 1, 0LL);
      v49 = this->fields.baseButton;
      if ( !v49 )
        goto LABEL_113;
      ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, Il2CppMethodPointer))v49->klass->vtable._14_SetState.method)(
        v49,
        0LL,
        1LL,
        v49->klass->vtable._15_OnPress.methodPtr);
    }
    baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL) )
    {
      v51 = this->fields.baseSprite;
      currentEventId = v21->fields.currentEventId;
      v52 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &currentEventId);
      v54 = System_String__Format((System_String_o *)StringLiteral_20457, v52, 0LL);
      if ( (BYTE3(EventRewardRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
      }
      EventRewardRootComponent__setRewardInfoImg(v51, v54, v53);
    }
    timeOverSprite = (UnityEngine_Object_o *)this->fields.timeOverSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(timeOverSprite, 0LL, 0LL) )
    {
      v56 = this->fields.timeOverSprite;
      currentEventId = v21->fields.currentEventId;
      v57 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &currentEventId);
      v59 = System_String__Format((System_String_o *)StringLiteral_20453, v57, 0LL);
      if ( (BYTE3(EventRewardRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
      }
      EventRewardRootComponent__setRewardInfoImg(v56, v59, v58);
    }
    rejectSprite = (UnityEngine_Object_o *)this->fields.rejectSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(rejectSprite, 0LL, 0LL) )
    {
      v62 = this->fields.rejectSprite;
      if ( (BYTE3(EventRewardRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
      }
      EventRewardRootComponent__setRewardInfoImg(v62, (System_String_o *)StringLiteral_16938, v61);
      v63 = (UIWidget_o *)this->fields.rejectSprite;
      if ( (BYTE3(EventRandomMissionListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventRandomMissionListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRandomMissionListViewItemDraw_TypeInfo);
      }
      if ( !v63 )
        goto LABEL_113;
      UIWidget__set_width(v63, EventRandomMissionListViewItemDraw_TypeInfo->static_fields->REJECT_SPRITE_WIDTH, 0LL);
      v64 = (UIWidget_o *)this->fields.rejectSprite;
      if ( !v64 )
        goto LABEL_113;
      UIWidget__set_height(v64, EventRandomMissionListViewItemDraw_TypeInfo->static_fields->REJECT_SPRITE_HEIGHT, 0LL);
    }
    rankSprite = (UnityEngine_Object_o *)this->fields.rankSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(rankSprite, 0LL, 0LL) )
    {
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = (EventRandomMissionMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_EventRandomMissionMaster___);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_113;
      if ( EventRandomMissionMaster__TryGetEntity(
             Master_WarQuestSelectionMaster,
             &entity,
             v21->fields.currentMissionId,
             v68) )
      {
        if ( !entity )
          goto LABEL_113;
        v69 = (entity->fields.missionRank & ~(entity->fields.missionRank >> 31)) + 1;
      }
      else
      {
        v69 = 1;
      }
      v70 = this->fields.rankSprite;
      currentEventId = v21->fields.currentEventId;
      v71 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &currentEventId);
      v86 = v69;
      v72 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v86);
      v74 = System_String__Format_43739268((System_String_o *)StringLiteral_20454, v71, v72, 0LL);
      if ( (BYTE3(EventRewardRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
      }
      EventRewardRootComponent__setRewardInfoImg(v70, v74, v73);
      v75 = (UIWidget_o *)this->fields.rankSprite;
      if ( (BYTE3(EventRandomMissionListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventRandomMissionListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRandomMissionListViewItemDraw_TypeInfo);
      }
      if ( !v75
        || (UIWidget__set_width(v75, EventRandomMissionListViewItemDraw_TypeInfo->static_fields->RANK_SPRITE_WIDTH, 0LL),
            (v76 = (UIWidget_o *)this->fields.rankSprite) == 0LL) )
      {
LABEL_113:
        sub_B170D4();
      }
      UIWidget__set_height(v76, EventRandomMissionListViewItemDraw_TypeInfo->static_fields->RANK_SPRITE_HEIGHT, 0LL);
    }
    EventRandomMissionListViewItemDraw__SetRewardItemIcon(
      this,
      v21,
      (EventRandomMissionListViewManager_o *)listViewManager,
      v66);
    newIcon = this->fields.newIcon;
    if ( !newIcon )
      goto LABEL_113;
    ShiningIconComponent__Clear(newIcon, 0LL);
    rewardBackSprite = (UnityEngine_Object_o *)this->fields.rewardBackSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(rewardBackSprite, 0LL, 0LL) )
    {
      v79 = this->fields.rewardBackSprite;
      Type = MissionListViewItem__get_Type((MissionListViewItem_o *)v21, 0LL);
      rewardObjectId = v21->fields.rewardObjectId;
      rewardRarityId = v21->fields.rewardRarityId;
      v84 = Type;
      if ( (BYTE3(EventRewardRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
      }
      EventRewardRootComponent__SetRewardRaritySprite(v79, v84, rewardObjectId, rewardRarityId, v81);
    }
  }
  if ( v21->fields._IsDummy_k__BackingField )
  {
    v85 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( v85 )
    {
      UnityEngine_GameObject__SetActive(v85, 0, 0LL);
      return 1;
    }
    goto LABEL_113;
  }
  return 1;
}


void __fastcall EventRandomMissionListViewItemDraw__SetLockMissionBoard(
        EventRandomMissionListViewItemDraw_o *this,
        MissionListViewItem_o *missionListViewItem,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *lockImgInfo; // x0

  lockImgInfo = this->fields.lockImgInfo;
  if ( !lockImgInfo )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(lockImgInfo, 1, 0LL);
}


void __fastcall EventRandomMissionListViewItemDraw__SetRewardItemIcon(
        EventRandomMissionListViewItemDraw_o *this,
        EventRandomMissionListViewItem_o *item,
        EventRandomMissionListViewManager_o *manager,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  const MethodInfo *v9; // x1
  ItemIconComponent_o *itemIcon; // x0
  GiftMaster_o *Master_WarQuestSelectionMaster; // x22
  EventMissionEntity_o *EventMissionEntity; // x0
  struct GiftEntity_array *GiftListById; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  __int64 AlphaAnimCnt; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  struct GiftEntity_array *giftEntityList; // x8
  __int64 v24; // x9
  struct GiftEntity_array *v25; // x22
  int32_t *v26; // x9
  int32_t v27; // w1
  ItemIconComponent_o *v28; // x0
  int v29; // w8
  int32_t v30; // w2
  GiftEntity_o *v31; // x8
  int32_t prioredIconId; // w1
  ItemIconComponent_o *v33; // x21
  int num; // w8
  int32_t v35; // w2
  int32_t Type; // w0
  int32_t rewardObjectId; // w22
  int32_t v38; // w23
  int32_t DisplayGiftNum; // w0
  ItemIconComponent_o *v40; // x0
  const MethodInfo *v41; // x1
  ItemIconComponent_o *v42; // x0
  int32_t iconId; // w1
  int32_t v44; // w3

  if ( (byte_40F60A6 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_GiftMaster___, item);
    sub_B16FFC(&DataManager_TypeInfo, v7);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    byte_40F60A6 = 1;
  }
  if ( !item )
    goto LABEL_55;
  if ( MissionListViewItem__get_EventRewardType((MissionListViewItem_o *)item, 0LL) == 1 )
  {
    if ( EventRandomMissionListViewItem__get_IsHideReward(item, v9) )
    {
      itemIcon = this->fields.itemIcon;
      this->fields.isMultipleReward = 0;
      if ( !itemIcon )
        goto LABEL_55;
      ItemIconComponent__SetItemImage(itemIcon, 99, 0LL);
      goto LABEL_42;
    }
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (GiftMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_GiftMaster___);
    EventMissionEntity = MissionListViewItem__get_EventMissionEntity((MissionListViewItem_o *)item, 0LL);
    if ( !EventMissionEntity )
      goto LABEL_55;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_55;
    GiftListById = GiftMaster__GetGiftListById(Master_WarQuestSelectionMaster, EventMissionEntity->fields.giftId, 0LL);
    this->fields.giftEntityList = GiftListById;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.giftEntityList,
      (System_Int32_array **)GiftListById,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
    giftEntityList = this->fields.giftEntityList;
    if ( !giftEntityList )
      goto LABEL_55;
    v24 = *(_QWORD *)&giftEntityList->max_length;
    if ( !v24 )
      return;
    this->fields.isMultipleReward = (int)v24 > 1;
    if ( (int)v24 < 2 )
    {
      if ( giftEntityList->max_length )
      {
        v31 = giftEntityList->m_Items[0];
        if ( !v31 )
          goto LABEL_55;
        prioredIconId = v31->fields.prioredIconId;
        v33 = this->fields.itemIcon;
        if ( prioredIconId < 1 )
        {
          Type = MissionListViewItem__get_Type((MissionListViewItem_o *)item, 0LL);
          rewardObjectId = item->fields.rewardObjectId;
          v38 = Type;
          DisplayGiftNum = MissionListViewItem__get_DisplayGiftNum((MissionListViewItem_o *)item, 0LL);
          if ( !v33 )
            goto LABEL_55;
          ItemIconComponent__SetGiftDesignSize(v33, v38, rewardObjectId, DisplayGiftNum, 0LL);
        }
        else
        {
          if ( !v33 )
            goto LABEL_55;
          num = v31->fields.num;
          if ( num <= 1 )
            v35 = -1;
          else
            v35 = num;
          ItemIconComponent__SetItemImage_28930192(this->fields.itemIcon, prioredIconId, v35, 0LL);
        }
        v40 = this->fields.itemIcon;
        if ( !v40 )
LABEL_55:
          sub_B170D4();
        ItemIconComponent__SetAlpha(v40, 1.0, 0LL);
        goto LABEL_42;
      }
    }
    else
    {
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)manager, 0LL, 0LL) )
        goto LABEL_42;
      v25 = this->fields.giftEntityList;
      if ( !v25 || !manager )
        goto LABEL_55;
      AlphaAnimCnt = MissionListViewManager__GetAlphaAnimCnt((MissionListViewManager_o *)manager, v25->max_length, 0LL);
      if ( (unsigned int)AlphaAnimCnt < v25->max_length )
      {
        v26 = (int32_t *)v25->m_Items[(int)AlphaAnimCnt];
        if ( !v26 )
          goto LABEL_55;
        v27 = v26[11];
        v28 = this->fields.itemIcon;
        v29 = v26[7];
        if ( v27 < 1 )
        {
          if ( !v28 )
            goto LABEL_55;
          if ( v29 <= 1 )
            v44 = -1;
          else
            v44 = v26[7];
          ItemIconComponent__SetGiftDesignSize(v28, v26[5], v26[6], v44, 0LL);
        }
        else
        {
          if ( !v28 )
            goto LABEL_55;
          if ( v29 <= 1 )
            v30 = -1;
          else
            v30 = v26[7];
          ItemIconComponent__SetItemImage_28930192(v28, v27, v30, 0LL);
        }
        goto LABEL_42;
      }
    }
    sub_B17100(AlphaAnimCnt, v21, v22);
    sub_B170A0();
  }
LABEL_42:
  if ( MissionListViewItem__get_EventRewardType((MissionListViewItem_o *)item, 0LL) == 3 )
  {
    if ( EventRandomMissionListViewItem__get_IsHideReward(item, v41) )
    {
      v42 = this->fields.itemIcon;
      this->fields.isMultipleReward = 0;
      if ( v42 )
      {
        iconId = 99;
LABEL_49:
        ItemIconComponent__SetItemImage(v42, iconId, 0LL);
        return;
      }
    }
    else
    {
      v42 = this->fields.itemIcon;
      if ( v42 )
      {
        iconId = item->fields.iconId;
        goto LABEL_49;
      }
    }
    goto LABEL_55;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRandomMissionListViewItemDraw__SetRewardStatusImg(
        EventRandomMissionListViewItemDraw_o *this,
        int32_t status,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_GameObject_o *lockImgInfo; // x0
  UnityEngine_GameObject_o *timeOverInfo; // x0
  UILabel_o *timeOverLb; // x19
  System_String_o *v9; // x0

  if ( (byte_40F60A7 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, *(_QWORD *)&status);
    sub_B16FFC(&StringLiteral_8725, v5);
    byte_40F60A7 = 1;
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
    v9 = LocalizationManager__Get((System_String_o *)StringLiteral_8725, 0LL);
    if ( !timeOverLb )
LABEL_12:
      sub_B170D4();
    UILabel__set_text(timeOverLb, v9, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRandomMissionListViewItemDraw__UpdateItem(
        EventRandomMissionListViewItemDraw_o *this,
        EventRandomMissionListViewItem_o *item,
        int32_t mode,
        float alphaAnim,
        const MethodInfo *method)
{
  long double v5; // q8
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *resTimeLb; // x0
  UnityEngine_GameObject_o *v16; // x0
  EventMissionEntity_o *EventMissionEntity; // x0
  EventMissionEntity_o *v18; // x21
  UnityEngine_GameObject_o *v19; // x0
  int64_t Time; // x0
  const MethodInfo *v21; // x1
  int64_t oldTime; // x23
  int64_t v23; // x22
  MissionListViewItemDraw_c *v24; // x8
  UILabel_o *v25; // x23
  int64_t closedAt; // x24
  System_String_o *AchiveTimeText; // x0
  int64_t endedAt; // x24
  int64_t v29; // x21
  System_String_o *RestTime; // x21
  System_String_o *v31; // x0
  UnityEngine_GameObject_o *lockImgInfo; // x0
  UnityEngine_Object_o *rewardBackSprite; // x20
  struct UISprite_o *v34; // x0

  v5 = *(long double *)&alphaAnim;
  if ( (byte_40F60AA & 1) == 0 )
  {
    sub_B16FFC(&EventRandomMissionListViewItemDraw_TypeInfo, item);
    sub_B16FFC(&LocalizationManager_TypeInfo, v9);
    sub_B16FFC(&MissionListViewItemDraw_TypeInfo, v10);
    sub_B16FFC(&NetworkManager_TypeInfo, v11);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v12);
    sub_B16FFC(&StringLiteral_13355, v13);
    byte_40F60AA = 1;
  }
  if ( item && MissionListViewItem__get_EventMissionEntity((MissionListViewItem_o *)item, 0LL) )
  {
    if ( item->fields._IsDummy_k__BackingField )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
        return;
      }
LABEL_48:
      sub_B170D4();
    }
    if ( mode )
    {
      resTimeLb = (UnityEngine_Component_o *)this->fields.resTimeLb;
      if ( !resTimeLb )
        goto LABEL_48;
      v16 = UnityEngine_Component__get_gameObject(resTimeLb, 0LL);
      if ( !v16 )
        goto LABEL_48;
      if ( UnityEngine_GameObject__get_activeSelf(v16, 0LL) )
      {
        EventMissionEntity = MissionListViewItem__get_EventMissionEntity((MissionListViewItem_o *)item, 0LL);
        if ( !this->fields.resTimeLb )
          goto LABEL_48;
        v18 = EventMissionEntity;
        v19 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.resTimeLb, 0LL);
        if ( !v19 )
          goto LABEL_48;
        if ( UnityEngine_GameObject__get_activeSelf(v19, 0LL) )
        {
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          }
          Time = NetworkManager__getTime(0LL);
          oldTime = this->fields.oldTime;
          v23 = Time;
          v24 = MissionListViewItemDraw_TypeInfo;
          if ( (BYTE3(MissionListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !MissionListViewItemDraw_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(MissionListViewItemDraw_TypeInfo);
            v24 = MissionListViewItemDraw_TypeInfo;
          }
          if ( v23 - oldTime >= v24->static_fields->TIME_UPDATE_ITVL_SEC )
          {
            if ( !v18 )
              goto LABEL_48;
            v25 = this->fields.resTimeLb;
            if ( this->fields.isAchiveTime )
            {
              closedAt = v18->fields.closedAt;
              if ( (BYTE3(EventRandomMissionListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !EventRandomMissionListViewItemDraw_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(EventRandomMissionListViewItemDraw_TypeInfo);
              }
              AchiveTimeText = EventRandomMissionListViewItemDraw__GetAchiveTimeText(closedAt, v21);
            }
            else
            {
              endedAt = v18->fields.endedAt;
              if ( (BYTE3(EventRandomMissionListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !EventRandomMissionListViewItemDraw_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(EventRandomMissionListViewItemDraw_TypeInfo);
              }
              AchiveTimeText = EventRandomMissionListViewItemDraw__GetRestTimeText(endedAt, v21);
            }
            if ( !v25 )
              goto LABEL_48;
            UILabel__set_text(v25, AchiveTimeText, 0LL);
            this->fields.oldTime = v23;
            v29 = v18->fields.endedAt;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            RestTime = LocalizationManager__GetRestTime(v29, 0LL);
            v31 = LocalizationManager__Get((System_String_o *)StringLiteral_13355, 0LL);
            if ( !RestTime )
              goto LABEL_48;
            if ( System_String__Equals_43731072(RestTime, v31, 0LL) )
            {
              ((void (__fastcall *)(EventRandomMissionListViewItemDraw_o *, EventRandomMissionListViewItem_o *, Il2CppMethodPointer))this->klass->vtable._5_InitDispResTime.method)(
                this,
                item,
                this->klass->vtable._6_SetLockMissionBoard.methodPtr);
              ((void (__fastcall *)(EventRandomMissionListViewItem_o *, Il2CppMethodPointer))item->klass->vtable._6_CheckMissionCond.method)(
                item,
                item->klass->vtable._7_SetGiftData.methodPtr);
              lockImgInfo = this->fields.lockImgInfo;
              if ( !lockImgInfo )
                goto LABEL_48;
              UnityEngine_GameObject__SetActive(lockImgInfo, 0, 0LL);
              ((void (__fastcall *)(EventRandomMissionListViewItemDraw_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._8_SetRewardStatusImg.method)(
                this,
                (unsigned int)item->fields.progStatus,
                this->klass->vtable._9_UpdateDispResTime.methodPtr);
              MissionListViewItemDraw__CheckLockMissionBoard(
                (MissionListViewItemDraw_o *)this,
                (MissionListViewItem_o *)item,
                0LL);
            }
          }
        }
        MissionListViewItemDraw__SetRewardIconAlpha((MissionListViewItemDraw_o *)this, *(float *)&v5, 0LL);
        rewardBackSprite = (UnityEngine_Object_o *)this->fields.rewardBackSprite;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(rewardBackSprite, 0LL, 0LL) && this->fields.isMultipleReward )
        {
          v34 = this->fields.rewardBackSprite;
          if ( !v34 )
            goto LABEL_48;
          ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer, long double))v34->klass->vtable._8_set_alpha.method)(
            v34,
            v34->klass->vtable._9_CalculateFinalAlpha.methodPtr,
            v5);
        }
      }
    }
  }
}