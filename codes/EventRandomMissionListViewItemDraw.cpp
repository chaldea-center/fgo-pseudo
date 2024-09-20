void __fastcall EventRandomMissionListViewItemDraw___cctor(const MethodInfo *method)
{
  struct EventRandomMissionListViewItemDraw_StaticFields *static_fields; // x8

  if ( (byte_4A5F0FF & 1) == 0 )
  {
    sub_1B885B0(&EventRandomMissionListViewItemDraw_TypeInfo);
    byte_4A5F0FF = 1;
  }
  static_fields = EventRandomMissionListViewItemDraw_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->MISSION_COND_FONT_SIZE = xmmword_BB4A60;
  static_fields->RANK_SPRITE_HEIGHT = 64;
}


void __fastcall EventRandomMissionListViewItemDraw___ctor(
        EventRandomMissionListViewItemDraw_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A5F0FE & 1) == 0 )
  {
    sub_1B885B0(&MissionListViewItemDraw_TypeInfo);
    byte_4A5F0FE = 1;
  }
  if ( !MissionListViewItemDraw_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MissionListViewItemDraw_TypeInfo);
  MissionListViewItemDraw___ctor((MissionListViewItemDraw_o *)this, 0LL);
}


void __fastcall EventRandomMissionListViewItemDraw__ChangeNextRewardIcon(
        EventRandomMissionListViewItemDraw_o *this,
        EventRandomMissionListViewManager_o *manager,
        const MethodInfo *method)
{
  struct GiftEntity_array *giftEntityList; // x20
  EventRandomMissionListViewItemDraw_o *v4; // x19
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
  this = (EventRandomMissionListViewItemDraw_o *)MissionListViewManager__GetAlphaAnimCnt(
                                                   (MissionListViewManager_o *)manager,
                                                   giftEntityList->max_length,
                                                   0LL);
  if ( (unsigned int)this >= giftEntityList->max_length )
    sub_1B88814(this, manager);
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


System_String_o *__fastcall EventRandomMissionListViewItemDraw__GetAchiveTimeText(
        int64_t closeTime,
        const MethodInfo *method)
{
  System_String_o *v3; // x20
  System_String_o *RestTime; // x2

  if ( (byte_4A5F0FA & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_117/*" "*/);
    sub_1B885B0(&StringLiteral_13325/*"TIME_REST_ACHIVE"*/);
    byte_4A5F0FA = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_13325/*"TIME_REST_ACHIVE"*/, 0LL);
  RestTime = LocalizationManager__GetRestTime(closeTime, 0LL);
  return System_String__Concat_61718292(v3, (System_String_o *)StringLiteral_117/*" "*/, RestTime, 0LL);
}


System_String_o *__fastcall EventRandomMissionListViewItemDraw__GetRestTimeText(
        int64_t endTime,
        const MethodInfo *method)
{
  System_String_o *v3; // x20
  System_String_o *RestTime; // x1

  if ( (byte_4A5F0F9 & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_13337/*"TIME_REST_QUEST"*/);
    byte_4A5F0F9 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_13337/*"TIME_REST_QUEST"*/, 0LL);
  RestTime = LocalizationManager__GetRestTime(endTime, 0LL);
  return System_String__Concat_61707032(v3, RestTime, 0LL);
}


void __fastcall EventRandomMissionListViewItemDraw__InitDispResTime(
        EventRandomMissionListViewItemDraw_o *this,
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
  UILabel_o *timeOverLb; // x21
  __int64 methodPtr_low; // x10

  if ( (byte_4A5F0F6 & 1) == 0 )
  {
    sub_1B885B0(&EventRandomMissionListViewItemDraw_TypeInfo);
    sub_1B885B0(&EventRandomMissionListViewItem_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&StringLiteral_8678/*"MISSION_PERIOD_END"*/);
    byte_4A5F0F6 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  this->fields.isAchiveTime = 0;
  if ( !missionListviewItem )
    goto LABEL_45;
  v7 = Time;
  Time = (int64_t)MissionListViewItem__get_EventMissionEntity(missionListviewItem, 0LL);
  if ( !Time )
    goto LABEL_45;
  if ( v7 >= *(_QWORD *)(Time + 56) )
  {
    Time = (int64_t)MissionListViewItem__get_EventMissionEntity(missionListviewItem, 0LL);
    if ( !Time )
      goto LABEL_45;
    v9 = *(_QWORD *)(Time + 64);
    this->fields.isDispTime = v7 < v9;
    p_isDispTime = &this->fields.isDispTime;
    if ( v7 < v9 )
    {
      Time = (int64_t)MissionListViewItem__get_EventMissionEntity(missionListviewItem, 0LL);
      if ( !Time )
        goto LABEL_45;
      v10 = *(_QWORD *)(Time + 64);
      if ( !EventRandomMissionListViewItemDraw_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventRandomMissionListViewItemDraw_TypeInfo);
      RestTimeText = EventRandomMissionListViewItemDraw__GetRestTimeText(v10, AchiveTimeText);
      if ( missionListviewItem->fields.progStatus == 3 )
      {
        Time = (int64_t)MissionListViewItem__get_EventMissionEntity(missionListviewItem, 0LL);
        if ( !Time )
          goto LABEL_45;
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
LABEL_45:
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
    goto LABEL_45;
  v13 = *(_QWORD *)(Time + 72);
  if ( !EventRandomMissionListViewItemDraw_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventRandomMissionListViewItemDraw_TypeInfo);
  Time = (int64_t)EventRandomMissionListViewItemDraw__GetAchiveTimeText(v13, AchiveTimeText);
  if ( !this->fields.resTimeLb )
    goto LABEL_45;
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
    goto LABEL_45;
  if ( v14 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0LL);
    timeOverLb = this->fields.timeOverLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Time = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_8678/*"MISSION_PERIOD_END"*/, 0LL);
    if ( !timeOverLb )
      goto LABEL_45;
    UILabel__set_text(timeOverLb, (System_String_o *)Time, 0LL);
    methodPtr_low = LOBYTE(EventRandomMissionListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(missionListviewItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
      && (EventRandomMissionListViewItem_c *)missionListviewItem->klass->_2.typeHierarchy[methodPtr_low - 1] == EventRandomMissionListViewItem_TypeInfo )
    {
      BYTE1(missionListviewItem[1].fields.sortIndex) = 1;
    }
  }
  else
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 0, 0LL);
  }
  Time = (int64_t)this->fields.resTimeLb;
  if ( !Time )
    goto LABEL_45;
  Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
  if ( !*p_isDispTime )
  {
    AchiveTimeText = (MethodInfo *)this->fields.isAchiveTime;
    if ( Time )
      goto LABEL_43;
    goto LABEL_45;
  }
  AchiveTimeText = (MethodInfo *)(&dword_0 + 1);
  if ( !Time )
    goto LABEL_45;
LABEL_43:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, (bool)AchiveTimeText, 0LL);
}


void __fastcall EventRandomMissionListViewItemDraw__ModifyBoardImage(
        EventRandomMissionListViewItemDraw_o *this,
        int32_t bannerGroupId,
        const MethodInfo *method)
{
  UnityEngine_Object_o *baseSprite; // x21
  UISprite_o *v6; // x22
  System_String_o *baseSpriteName; // x20
  UIAtlas_o *baseAtlas; // x21

  if ( (byte_4A5F0FD & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5F0FD = 1;
  }
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(baseSprite, 0LL, 0LL) )
  {
    v6 = this->fields.baseSprite;
    baseAtlas = this->fields.baseAtlas;
    baseSpriteName = this->fields.baseSpriteName;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetMissionBoardSprite(v6, baseAtlas, baseSpriteName, bannerGroupId, 0LL);
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
  __int64 methodPtr_low; // x10
  UnityEngine_Object_o *baseButton; // x21
  UILabel_o *missionCondLb; // x20
  System_String_o *condMsg; // x19
  EventRandomMissionListViewItemDraw_c *v9; // x0

  if ( (byte_4A5F0FC & 1) == 0 )
  {
    sub_1B885B0(&EventRandomMissionListViewItemDraw_TypeInfo);
    sub_1B885B0(&EventRandomMissionListViewItem_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5F0FC = 1;
  }
  if ( missionListViewItem
    && (methodPtr_low = LOBYTE(EventRandomMissionListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(missionListViewItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low)
    && (EventRandomMissionListViewItem_c *)missionListViewItem->klass->_2.typeHierarchy[methodPtr_low - 1] == EventRandomMissionListViewItem_TypeInfo )
  {
    MissionListViewItemDraw__SetInput((MissionListViewItemDraw_o *)this, missionListViewItem, 0LL);
    baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
    {
      missionCondLb = this->fields.missionCondLb;
      condMsg = missionListViewItem->fields.condMsg;
      v9 = EventRandomMissionListViewItemDraw_TypeInfo;
      if ( !EventRandomMissionListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRandomMissionListViewItemDraw_TypeInfo);
        v9 = EventRandomMissionListViewItemDraw_TypeInfo;
      }
      WrapControlText__textAdjust(missionCondLb, condMsg, v9->static_fields->MISSION_COND_FONT_SIZE, 0, 0, 0LL);
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
  __int64 methodPtr_low; // x10
  EventRandomMissionListViewItem_o *v10; // x20
  __int64 v11; // x10
  __int64 v12; // x1
  UnityEngine_GameObject_o *rewardImg; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  struct GiftEntity_array *giftEnts; // x1
  struct GiftEntity_array *giftEntityList; // x8
  UILabel_o *missionCondLb; // x23
  System_String_o *condMsg; // x24
  EventRandomMissionListViewItemDraw_c *v21; // x0
  UnityEngine_Object_o *baseButton; // x23
  UnityEngine_Object_o *baseSprite; // x22
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  UISprite_o *v27; // x22
  Il2CppObject *v28; // x0
  System_String_o *v29; // x23
  UnityEngine_Object_o *timeOverSprite; // x22
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  UISprite_o *v34; // x22
  Il2CppObject *v35; // x0
  System_String_o *v36; // x23
  UnityEngine_Object_o *rejectSprite; // x22
  UISprite_o *v38; // x22
  UIWidget_o *v39; // x22
  UnityEngine_Object_o *rankSprite; // x22
  const MethodInfo *v41; // x3
  __int64 v42; // x2
  __int64 v43; // x3
  __int64 v44; // x4
  int v45; // w24
  UISprite_o *v46; // x22
  Il2CppObject *v47; // x23
  __int64 v48; // x2
  __int64 v49; // x3
  __int64 v50; // x4
  Il2CppObject *v51; // x0
  System_String_o *v52; // x23
  UIWidget_o *v53; // x22
  UnityEngine_Object_o *rewardBackSprite; // x21
  UISprite_o *v55; // x21
  int32_t Type; // w0
  int32_t rewardObjectId; // w23
  int32_t rewardRarityId; // w22
  int32_t v59; // w24
  int v60; // [xsp+0h] [xbp-70h] BYREF
  int32_t currentEventId; // [xsp+4h] [xbp-6Ch] BYREF
  EventRandomMissionEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF
  float barExp; // [xsp+14h] [xbp-5Ch] BYREF
  System_String_o *progTxt; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_4A5F0F5 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_EventRandomMissionMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&EventRandomMissionListViewItemDraw_TypeInfo);
    sub_1B885B0(&EventRandomMissionListViewItem_TypeInfo);
    sub_1B885B0(&EventRandomMissionListViewManager_TypeInfo);
    sub_1B885B0(&EventRewardRootComponent_TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_17523/*"btn_mission_cancel"*/);
    sub_1B885B0(&StringLiteral_21478/*"mission_board_{0}01"*/);
    sub_1B885B0(&StringLiteral_21475/*"mission_board_rank_{0}{1:D2}"*/);
    sub_1B885B0(&StringLiteral_21474/*"mission_board_mask_{0}01"*/);
    byte_4A5F0F5 = 1;
  }
  progTxt = 0LL;
  barExp = 0.0;
  entity = 0LL;
  if ( missionListViewItem
    && (methodPtr_low = LOBYTE(EventRandomMissionListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(missionListViewItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (EventRandomMissionListViewItem_c *)missionListViewItem->klass->_2.typeHierarchy[methodPtr_low - 1] == EventRandomMissionListViewItem_TypeInfo )
      v10 = (EventRandomMissionListViewItem_o *)missionListViewItem;
    else
      v10 = 0LL;
    if ( !listViewManager )
      goto LABEL_13;
  }
  else
  {
    v10 = 0LL;
    if ( !listViewManager )
      goto LABEL_13;
  }
  v11 = LOBYTE(EventRandomMissionListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(listViewManager->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v11 )
  {
    if ( (EventRandomMissionListViewManager_c *)listViewManager->klass->_2.typeHierarchy[v11 - 1] != EventRandomMissionListViewManager_TypeInfo )
      listViewManager = 0LL;
    if ( !v10 )
      return 0;
    goto LABEL_18;
  }
  listViewManager = 0LL;
LABEL_13:
  if ( !v10 )
    return 0;
LABEL_18:
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)listViewManager, 0LL, 0LL) )
    return 0;
  if ( mode )
  {
    rewardImg = this->fields.rewardImg;
    if ( !rewardImg )
      goto LABEL_97;
    UnityEngine_GameObject__SetActive(rewardImg, 0, 0LL);
    rewardImg = (UnityEngine_GameObject_o *)this->fields.receiveIcon;
    if ( !rewardImg )
      goto LABEL_97;
    ShiningIconComponent__Clear((ShiningIconComponent_o *)rewardImg, 0LL);
    rewardImg = this->fields.rewardGetInfo;
    if ( !rewardImg )
      goto LABEL_97;
    UnityEngine_GameObject__SetActive(rewardImg, 0, 0LL);
    rewardImg = this->fields.rewardAchiveInfo;
    if ( !rewardImg )
      goto LABEL_97;
    UnityEngine_GameObject__SetActive(rewardImg, 0, 0LL);
    rewardImg = this->fields.compInfo;
    if ( !rewardImg )
      goto LABEL_97;
    UnityEngine_GameObject__SetActive(rewardImg, 0, 0LL);
    rewardImg = this->fields.completedImg;
    if ( !rewardImg )
      goto LABEL_97;
    rewardImg = UnityEngine_GameObject__get_gameObject(rewardImg, 0LL);
    if ( !rewardImg )
      goto LABEL_97;
    UnityEngine_GameObject__SetActive(rewardImg, 0, 0LL);
    rewardImg = this->fields.timeOverInfo;
    if ( !rewardImg )
      goto LABEL_97;
    UnityEngine_GameObject__SetActive(rewardImg, 0, 0LL);
    rewardImg = this->fields.lockImgInfo;
    if ( !rewardImg )
      goto LABEL_97;
    UnityEngine_GameObject__SetActive(rewardImg, 0, 0LL);
    if ( !missionListViewItem )
      goto LABEL_97;
    giftEnts = missionListViewItem->fields.giftEnts;
    this->fields.giftEntityList = giftEnts;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.giftEntityList, (int32_t)giftEnts, v15, v16);
    giftEntityList = this->fields.giftEntityList;
    if ( !giftEntityList )
      goto LABEL_97;
    this->fields.isMultipleReward = (signed int)giftEntityList->max_length > 1;
    missionCondLb = this->fields.missionCondLb;
    condMsg = v10->fields.condMsg;
    v21 = EventRandomMissionListViewItemDraw_TypeInfo;
    if ( !EventRandomMissionListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRandomMissionListViewItemDraw_TypeInfo);
      v21 = EventRandomMissionListViewItemDraw_TypeInfo;
    }
    WrapControlText__textAdjust(missionCondLb, condMsg, v21->static_fields->MISSION_COND_FONT_SIZE, 0, 0, 0LL);
    ((void (__fastcall *)(EventRandomMissionListViewItemDraw_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._8_SetRewardStatusImg.method)(
      this,
      (unsigned int)missionListViewItem->fields.progStatus,
      this->klass->vtable._9_UpdateDispResTime.methodPtr);
    if ( MissionListViewItem__GetProgInfo(missionListViewItem, &progTxt, &barExp, 0LL) )
    {
      rewardImg = (UnityEngine_GameObject_o *)this->fields.missionProgressLb;
      if ( !rewardImg )
        goto LABEL_97;
      UILabel__set_text((UILabel_o *)rewardImg, progTxt, 0LL);
      rewardImg = (UnityEngine_GameObject_o *)this->fields.expBar;
      if ( !rewardImg )
        goto LABEL_97;
      UIProgressBar__set_value((UIProgressBar_o *)rewardImg, barExp, 0LL);
    }
    rewardImg = (UnityEngine_GameObject_o *)this->fields.miniIconComponent;
    if ( !rewardImg )
      goto LABEL_97;
    MissionGiftMiniIconComponent__SetMiniIcon(
      (MissionGiftMiniIconComponent_o *)rewardImg,
      missionListViewItem->fields.subGiftEntity,
      0LL);
    ((void (__fastcall *)(EventRandomMissionListViewItemDraw_o *, MissionListViewItem_o *, Il2CppMethodPointer))this->klass->vtable._5_InitDispResTime.method)(
      this,
      missionListViewItem,
      this->klass->vtable._6_SetLockMissionBoard.methodPtr);
    baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
    {
      rewardImg = (UnityEngine_GameObject_o *)this->fields.baseButton;
      if ( !rewardImg )
        goto LABEL_97;
      UICommonButton__SetColliderEnable(
        (UICommonButton_o *)rewardImg,
        missionListViewItem->fields.isColliderEnable,
        1,
        0LL);
      rewardImg = (UnityEngine_GameObject_o *)this->fields.baseButton;
      if ( !rewardImg )
        goto LABEL_97;
      ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))rewardImg->klass[1]._1.implementedInterfaces)(
        rewardImg,
        0LL,
        1LL,
        rewardImg->klass[1]._1.interfaceOffsets);
    }
    baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL) )
    {
      v27 = this->fields.baseSprite;
      currentEventId = v10->fields.currentEventId;
      v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &currentEventId, v24, v25, v26);
      v29 = System_String__Format((System_String_o *)StringLiteral_21478/*"mission_board_{0}01"*/, v28, 0LL);
      if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
      EventRewardRootComponent__setRewardInfoImg(v27, v29, 0LL);
    }
    timeOverSprite = (UnityEngine_Object_o *)this->fields.timeOverSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(timeOverSprite, 0LL, 0LL) )
    {
      v34 = this->fields.timeOverSprite;
      currentEventId = v10->fields.currentEventId;
      v35 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &currentEventId, v31, v32, v33);
      v36 = System_String__Format((System_String_o *)StringLiteral_21474/*"mission_board_mask_{0}01"*/, v35, 0LL);
      if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
      EventRewardRootComponent__setRewardInfoImg(v34, v36, 0LL);
    }
    rejectSprite = (UnityEngine_Object_o *)this->fields.rejectSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(rejectSprite, 0LL, 0LL) )
    {
      v38 = this->fields.rejectSprite;
      if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
      EventRewardRootComponent__setRewardInfoImg(v38, (System_String_o *)StringLiteral_17523/*"btn_mission_cancel"*/, 0LL);
      rewardImg = (UnityEngine_GameObject_o *)EventRandomMissionListViewItemDraw_TypeInfo;
      v39 = (UIWidget_o *)this->fields.rejectSprite;
      if ( !EventRandomMissionListViewItemDraw_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventRandomMissionListViewItemDraw_TypeInfo);
      if ( !v39 )
        goto LABEL_97;
      UIWidget__set_width(v39, EventRandomMissionListViewItemDraw_TypeInfo->static_fields->REJECT_SPRITE_WIDTH, 0LL);
      rewardImg = (UnityEngine_GameObject_o *)this->fields.rejectSprite;
      if ( !rewardImg )
        goto LABEL_97;
      UIWidget__set_height(
        (UIWidget_o *)rewardImg,
        EventRandomMissionListViewItemDraw_TypeInfo->static_fields->REJECT_SPRITE_HEIGHT,
        0LL);
    }
    rankSprite = (UnityEngine_Object_o *)this->fields.rankSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(rankSprite, 0LL, 0LL) )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      rewardImg = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventRandomMissionMaster___);
      if ( !rewardImg )
        goto LABEL_97;
      rewardImg = (UnityEngine_GameObject_o *)EventRandomMissionMaster__TryGetEntity(
                                                (EventRandomMissionMaster_o *)rewardImg,
                                                &entity,
                                                v10->fields.currentMissionId,
                                                0LL);
      if ( ((unsigned __int8)rewardImg & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_97;
        v45 = (entity->fields.missionRank & ~(entity->fields.missionRank >> 31)) + 1;
      }
      else
      {
        v45 = 1;
      }
      v46 = this->fields.rankSprite;
      currentEventId = v10->fields.currentEventId;
      v47 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &currentEventId, v42, v43, v44);
      v60 = v45;
      v51 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v60, v48, v49, v50);
      v52 = System_String__Format_61721404((System_String_o *)StringLiteral_21475/*"mission_board_rank_{0}{1:D2}"*/, v47, v51, 0LL);
      if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
      EventRewardRootComponent__setRewardInfoImg(v46, v52, 0LL);
      rewardImg = (UnityEngine_GameObject_o *)EventRandomMissionListViewItemDraw_TypeInfo;
      v53 = (UIWidget_o *)this->fields.rankSprite;
      if ( !EventRandomMissionListViewItemDraw_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventRandomMissionListViewItemDraw_TypeInfo);
      if ( !v53
        || (UIWidget__set_width(v53, EventRandomMissionListViewItemDraw_TypeInfo->static_fields->RANK_SPRITE_WIDTH, 0LL),
            (rewardImg = (UnityEngine_GameObject_o *)this->fields.rankSprite) == 0LL) )
      {
LABEL_97:
        sub_1B8880C(rewardImg, v12);
      }
      UIWidget__set_height(
        (UIWidget_o *)rewardImg,
        EventRandomMissionListViewItemDraw_TypeInfo->static_fields->RANK_SPRITE_HEIGHT,
        0LL);
    }
    EventRandomMissionListViewItemDraw__SetRewardItemIcon(
      this,
      v10,
      (EventRandomMissionListViewManager_o *)listViewManager,
      v41);
    rewardImg = (UnityEngine_GameObject_o *)this->fields.newIcon;
    if ( !rewardImg )
      goto LABEL_97;
    ShiningIconComponent__Clear((ShiningIconComponent_o *)rewardImg, 0LL);
    rewardBackSprite = (UnityEngine_Object_o *)this->fields.rewardBackSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(rewardBackSprite, 0LL, 0LL) )
    {
      v55 = this->fields.rewardBackSprite;
      Type = MissionListViewItem__get_Type((MissionListViewItem_o *)v10, 0LL);
      rewardObjectId = v10->fields.rewardObjectId;
      rewardRarityId = v10->fields.rewardRarityId;
      v59 = Type;
      if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
      EventRewardRootComponent__SetRewardRaritySprite(v55, v59, rewardObjectId, rewardRarityId, 0LL);
    }
  }
  if ( v10->fields._IsDummy_k__BackingField )
  {
    rewardImg = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( rewardImg )
    {
      UnityEngine_GameObject__SetActive(rewardImg, 0, 0LL);
      return 1;
    }
    goto LABEL_97;
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
    sub_1B8880C(0LL, missionListViewItem);
  UnityEngine_GameObject__SetActive(lockImgInfo, 1, 0LL);
}


void __fastcall EventRandomMissionListViewItemDraw__SetRewardItemIcon(
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
  int32_t v10; // w2
  int32_t v11; // w3
  struct GiftEntity_array *giftEntityList; // x8
  __int64 v13; // x9
  struct GiftEntity_array *v14; // x22
  GiftEntity_o *v15; // x8
  int v16; // w9
  int32_t v17; // w2
  GiftEntity_o *v18; // x8
  ItemIconComponent_o *itemIcon; // x21
  int num; // w8
  int32_t v21; // w2
  int32_t Type; // w0
  int32_t rewardObjectId; // w22
  int32_t v24; // w23
  const MethodInfo *v25; // x1
  int32_t iconId; // w1
  int32_t v27; // w3

  v5 = item;
  v6 = this;
  if ( (byte_4A5F0F7 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_GiftMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    this = (EventRandomMissionListViewItemDraw_o *)sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5F0F7 = 1;
  }
  if ( !v5 )
    goto LABEL_53;
  if ( MissionListViewItem__get_EventRewardType((MissionListViewItem_o *)v5, 0LL) == 1 )
  {
    if ( EventRandomMissionListViewItem__get_IsHideReward(v5, v7) )
    {
      this = (EventRandomMissionListViewItemDraw_o *)v6->fields.itemIcon;
      v6->fields.isMultipleReward = 0;
      if ( !this )
        goto LABEL_53;
      ItemIconComponent__SetItemImage((ItemIconComponent_o *)this, 99, 0LL);
      goto LABEL_40;
    }
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_GiftMaster___);
    this = (EventRandomMissionListViewItemDraw_o *)MissionListViewItem__get_EventMissionEntity(
                                                     (MissionListViewItem_o *)v5,
                                                     0LL);
    if ( !this )
      goto LABEL_53;
    if ( !Master_object )
      goto LABEL_53;
    GiftListById = GiftMaster__GetGiftListById((GiftMaster_o *)Master_object, HIDWORD(this->fields.missionNoLb), 0LL);
    v6->fields.giftEntityList = GiftListById;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v6->fields.giftEntityList, (int32_t)GiftListById, v10, v11);
    giftEntityList = v6->fields.giftEntityList;
    if ( !giftEntityList )
      goto LABEL_53;
    v13 = *(_QWORD *)&giftEntityList->max_length;
    if ( !v13 )
      return;
    v6->fields.isMultipleReward = (int)v13 > 1;
    if ( (int)v13 < 2 )
    {
      if ( (_DWORD)v13 )
      {
        v18 = giftEntityList->m_Items[0];
        if ( !v18 )
          goto LABEL_53;
        item = (EventRandomMissionListViewItem_o *)(unsigned int)v18->fields.prioredIconId;
        itemIcon = v6->fields.itemIcon;
        if ( (int)item < 1 )
        {
          Type = MissionListViewItem__get_Type((MissionListViewItem_o *)v5, 0LL);
          rewardObjectId = v5->fields.rewardObjectId;
          v24 = Type;
          this = (EventRandomMissionListViewItemDraw_o *)MissionListViewItem__get_DisplayGiftNum(
                                                           (MissionListViewItem_o *)v5,
                                                           0LL);
          if ( !itemIcon )
            goto LABEL_53;
          ItemIconComponent__SetGiftDesignSize(itemIcon, v24, rewardObjectId, (int32_t)this, 0LL);
        }
        else
        {
          if ( !itemIcon )
            goto LABEL_53;
          num = v18->fields.num;
          if ( num <= 1 )
            v21 = -1;
          else
            v21 = num;
          ItemIconComponent__SetItemImage_38147292(v6->fields.itemIcon, (int32_t)item, v21, 0LL);
        }
        this = (EventRandomMissionListViewItemDraw_o *)v6->fields.itemIcon;
        if ( !this )
LABEL_53:
          sub_1B8880C(this, item);
        ItemIconComponent__SetAlpha((ItemIconComponent_o *)this, 1.0, 0LL);
        goto LABEL_40;
      }
    }
    else
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (EventRandomMissionListViewItemDraw_o *)UnityEngine_Object__op_Inequality(
                                                       (UnityEngine_Object_o *)manager,
                                                       0LL,
                                                       0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_40;
      v14 = v6->fields.giftEntityList;
      if ( !v14 || !manager )
        goto LABEL_53;
      this = (EventRandomMissionListViewItemDraw_o *)MissionListViewManager__GetAlphaAnimCnt(
                                                       (MissionListViewManager_o *)manager,
                                                       v14->max_length,
                                                       0LL);
      if ( (unsigned int)this < v14->max_length )
      {
        v15 = v14->m_Items[(int)this];
        if ( !v15 )
          goto LABEL_53;
        item = (EventRandomMissionListViewItem_o *)(unsigned int)v15->fields.prioredIconId;
        this = (EventRandomMissionListViewItemDraw_o *)v6->fields.itemIcon;
        v16 = v15->fields.num;
        if ( (int)item < 1 )
        {
          if ( !this )
            goto LABEL_53;
          if ( v16 <= 1 )
            v27 = -1;
          else
            v27 = v15->fields.num;
          ItemIconComponent__SetGiftDesignSize(
            (ItemIconComponent_o *)this,
            v15->fields.type,
            v15->fields.objectId,
            v27,
            0LL);
        }
        else
        {
          if ( !this )
            goto LABEL_53;
          if ( v16 <= 1 )
            v17 = -1;
          else
            v17 = v15->fields.num;
          ItemIconComponent__SetItemImage_38147292((ItemIconComponent_o *)this, (int32_t)item, v17, 0LL);
        }
        goto LABEL_40;
      }
    }
    sub_1B88814(this, item);
  }
LABEL_40:
  if ( MissionListViewItem__get_EventRewardType((MissionListViewItem_o *)v5, 0LL) == 3 )
  {
    if ( EventRandomMissionListViewItem__get_IsHideReward(v5, v25) )
    {
      this = (EventRandomMissionListViewItemDraw_o *)v6->fields.itemIcon;
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


void __fastcall EventRandomMissionListViewItemDraw__SetRewardStatusImg(
        EventRandomMissionListViewItemDraw_o *this,
        int32_t status,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_GameObject_o *lockImgInfo; // x0
  UILabel_o *timeOverLb; // x19

  if ( (byte_4A5F0F8 & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_8678/*"MISSION_PERIOD_END"*/);
    byte_4A5F0F8 = 1;
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


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRandomMissionListViewItemDraw__UpdateItem(
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
  int64_t v17; // x24
  int64_t v18; // x21
  System_String_o *RestTime; // x21
  UnityEngine_Object_o *rewardBackSprite; // x20

  v5 = *(long double *)&alphaAnim;
  if ( (byte_4A5F0FB & 1) == 0 )
  {
    sub_1B885B0(&EventRandomMissionListViewItemDraw_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&MissionListViewItemDraw_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_13349/*"TIME_REST_TIMEOVER"*/);
    byte_4A5F0FB = 1;
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
LABEL_42:
      sub_1B8880C(gameObject, v9);
    }
    if ( mode )
    {
      gameObject = (UnityEngine_GameObject_o *)this->fields.resTimeLb;
      if ( !gameObject )
        goto LABEL_42;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_42;
      if ( UnityEngine_GameObject__get_activeSelf(gameObject, 0LL) )
      {
        gameObject = (UnityEngine_GameObject_o *)MissionListViewItem__get_EventMissionEntity(
                                                   (MissionListViewItem_o *)item,
                                                   0LL);
        if ( !this->fields.resTimeLb )
          goto LABEL_42;
        v11 = gameObject;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.resTimeLb, 0LL);
        if ( !gameObject )
          goto LABEL_42;
        if ( UnityEngine_GameObject__get_activeSelf(gameObject, 0LL) )
        {
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          gameObject = (UnityEngine_GameObject_o *)NetworkManager__getTime(0LL);
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
              v17 = *(_QWORD *)&v11[2].fields.m_CachedPtr;
              if ( !EventRandomMissionListViewItemDraw_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(EventRandomMissionListViewItemDraw_TypeInfo);
              gameObject = (UnityEngine_GameObject_o *)EventRandomMissionListViewItemDraw__GetRestTimeText(v17, v9);
            }
            v9 = (const MethodInfo *)gameObject;
            if ( !resTimeLb )
              goto LABEL_42;
            UILabel__set_text(resTimeLb, (System_String_o *)gameObject, 0LL);
            this->fields.oldTime = v13;
            v18 = *(_QWORD *)&v11[2].fields.m_CachedPtr;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            RestTime = LocalizationManager__GetRestTime(v18, 0LL);
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_13349/*"TIME_REST_TIMEOVER"*/,
                                                       0LL);
            if ( !RestTime )
              goto LABEL_42;
            if ( System_String__Equals_61715348(RestTime, (System_String_o *)gameObject, 0LL) )
            {
              ((void (__fastcall *)(EventRandomMissionListViewItemDraw_o *, EventRandomMissionListViewItem_o *, Il2CppMethodPointer))this->klass->vtable._5_InitDispResTime.method)(
                this,
                item,
                this->klass->vtable._6_SetLockMissionBoard.methodPtr);
              ((void (__fastcall *)(EventRandomMissionListViewItem_o *, Il2CppMethodPointer))item->klass->vtable._6_CheckMissionCond.method)(
                item,
                item->klass->vtable._7_SetGiftData.methodPtr);
              gameObject = this->fields.lockImgInfo;
              if ( !gameObject )
                goto LABEL_42;
              UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
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
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(rewardBackSprite, 0LL, 0LL) && this->fields.isMultipleReward )
        {
          gameObject = (UnityEngine_GameObject_o *)this->fields.rewardBackSprite;
          if ( !gameObject )
            goto LABEL_42;
          ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *, long double))gameObject->klass[1]._1.castClass)(
            gameObject,
            gameObject->klass[1]._1.declaringType,
            v5);
        }
      }
    }
  }
}