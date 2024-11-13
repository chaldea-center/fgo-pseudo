void __fastcall EventRandomMissionListViewItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  struct EventRandomMissionListViewItemDraw_StaticFields *static_fields; // x8

  if ( (byte_4B1A2F1 & 1) == 0 )
  {
    sub_1BCA7E0(&EventRandomMissionListViewItemDraw_TypeInfo, v1, v2);
    byte_4B1A2F1 = 1;
  }
  static_fields = EventRandomMissionListViewItemDraw_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->MISSION_COND_FONT_SIZE = xmmword_BD2C30;
  static_fields->RANK_SPRITE_HEIGHT = 64;
}


void __fastcall EventRandomMissionListViewItemDraw___ctor(
        EventRandomMissionListViewItemDraw_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1A2F0 & 1) == 0 )
  {
    sub_1BCA7E0(&MissionListViewItemDraw_TypeInfo, method, v2);
    byte_4B1A2F0 = 1;
  }
  if ( !MissionListViewItemDraw_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MissionListViewItemDraw_TypeInfo, method);
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
    sub_1BCAA44(this, manager);
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
      ItemIconComponent__SetItemImage_38857576((ItemIconComponent_o *)this, (int32_t)manager, v7, 0LL);
      return;
    }
LABEL_18:
    sub_1BCAA3C(this, manager);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  System_String_o *v8; // x20
  System_String_o *RestTime; // x2

  if ( (byte_4B1A2EC & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_116/*" "*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_13488/*"TIME_REST_ACHIVE"*/, v6, v7);
    byte_4B1A2EC = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_13488/*"TIME_REST_ACHIVE"*/, 0LL);
  RestTime = LocalizationManager__GetRestTime(closeTime, 0LL);
  return System_String__Concat_62412480(v8, (System_String_o *)StringLiteral_116/*" "*/, RestTime, 0LL);
}


System_String_o *__fastcall EventRandomMissionListViewItemDraw__GetRestTimeText(
        int64_t endTime,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  System_String_o *v6; // x20
  System_String_o *RestTime; // x1

  if ( (byte_4B1A2EB & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_13500/*"TIME_REST_QUEST"*/, v4, v5);
    byte_4B1A2EB = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_13500/*"TIME_REST_QUEST"*/, 0LL);
  RestTime = LocalizationManager__GetRestTime(endTime, 0LL);
  return System_String__Concat_62401220(v6, RestTime, 0LL);
}


void __fastcall EventRandomMissionListViewItemDraw__InitDispResTime(
        EventRandomMissionListViewItemDraw_o *this,
        MissionListViewItem_o *missionListviewItem,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  int64_t Time; // x0
  MethodInfo *AchiveTimeText; // x1
  int64_t v15; // x21
  bool *p_isDispTime; // x22
  int64_t v17; // x8
  int64_t v18; // x21
  System_String_o *RestTimeText; // x0
  int64_t v20; // x21
  int64_t v21; // x21
  int v22; // w8
  __int64 v23; // x1
  UILabel_o *timeOverLb; // x21
  __int64 methodPtr_low; // x10

  if ( (byte_4B1A2E8 & 1) == 0 )
  {
    sub_1BCA7E0(&EventRandomMissionListViewItemDraw_TypeInfo, missionListviewItem, method);
    sub_1BCA7E0(&EventRandomMissionListViewItem_TypeInfo, v5, v6);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&StringLiteral_8805/*"MISSION_PERIOD_END"*/, v11, v12);
    byte_4B1A2E8 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, missionListviewItem);
  Time = NetworkManager__getTime(0LL);
  this->fields.isAchiveTime = 0;
  if ( !missionListviewItem )
    goto LABEL_45;
  v15 = Time;
  Time = (int64_t)MissionListViewItem__get_EventMissionEntity(missionListviewItem, 0LL);
  if ( !Time )
    goto LABEL_45;
  if ( v15 >= *(_QWORD *)(Time + 56) )
  {
    Time = (int64_t)MissionListViewItem__get_EventMissionEntity(missionListviewItem, 0LL);
    if ( !Time )
      goto LABEL_45;
    v17 = *(_QWORD *)(Time + 64);
    this->fields.isDispTime = v15 < v17;
    p_isDispTime = &this->fields.isDispTime;
    if ( v15 < v17 )
    {
      Time = (int64_t)MissionListViewItem__get_EventMissionEntity(missionListviewItem, 0LL);
      if ( !Time )
        goto LABEL_45;
      v18 = *(_QWORD *)(Time + 64);
      if ( !EventRandomMissionListViewItemDraw_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventRandomMissionListViewItemDraw_TypeInfo, AchiveTimeText);
      RestTimeText = EventRandomMissionListViewItemDraw__GetRestTimeText(v18, AchiveTimeText);
      if ( missionListviewItem->fields.progStatus == 3 )
      {
        Time = (int64_t)MissionListViewItem__get_EventMissionEntity(missionListviewItem, 0LL);
        if ( !Time )
          goto LABEL_45;
        v20 = *(_QWORD *)(Time + 72);
        if ( !EventRandomMissionListViewItemDraw_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(EventRandomMissionListViewItemDraw_TypeInfo, AchiveTimeText);
        AchiveTimeText = (MethodInfo *)EventRandomMissionListViewItemDraw__GetAchiveTimeText(v20, AchiveTimeText);
        this->fields.isAchiveTime = 1;
      }
      else
      {
        AchiveTimeText = (MethodInfo *)RestTimeText;
      }
      Time = (int64_t)this->fields.resTimeLb;
      if ( !Time )
LABEL_45:
        sub_1BCAA3C(Time, AchiveTimeText);
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
    v22 = 1;
    missionListviewItem->fields.isNowMission = 1;
    goto LABEL_29;
  }
  this->fields.isAchiveTime = 1;
  Time = (int64_t)MissionListViewItem__get_EventMissionEntity(missionListviewItem, 0LL);
  if ( !Time )
    goto LABEL_45;
  v21 = *(_QWORD *)(Time + 72);
  if ( !EventRandomMissionListViewItemDraw_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventRandomMissionListViewItemDraw_TypeInfo, AchiveTimeText);
  Time = (int64_t)EventRandomMissionListViewItemDraw__GetAchiveTimeText(v21, AchiveTimeText);
  if ( !this->fields.resTimeLb )
    goto LABEL_45;
  AchiveTimeText = (MethodInfo *)Time;
  Time = (int64_t)this->fields.resTimeLb;
LABEL_28:
  UILabel__set_text((UILabel_o *)Time, (System_String_o *)AchiveTimeText, 0LL);
  v22 = 0;
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
  if ( v22 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0LL);
    timeOverLb = this->fields.timeOverLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v23);
    Time = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_8805/*"MISSION_PERIOD_END"*/, 0LL);
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


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRandomMissionListViewItemDraw__ModifyBoardImage(
        EventRandomMissionListViewItemDraw_o *this,
        int32_t bannerGroupId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Object_o *baseSprite; // x21
  __int64 v8; // x1
  UISprite_o *v9; // x22
  System_String_o *baseSpriteName; // x20
  UIAtlas_o *baseAtlas; // x21

  if ( (byte_4B1A2EF & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, *(_QWORD *)&bannerGroupId, method);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v5, v6);
    byte_4B1A2EF = 1;
  }
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&bannerGroupId);
  if ( !UnityEngine_Object__op_Equality(baseSprite, 0LL, 0LL) )
  {
    v9 = this->fields.baseSprite;
    baseAtlas = this->fields.baseAtlas;
    baseSpriteName = this->fields.baseSpriteName;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v8);
    AtlasManager__SetMissionBoardSprite(v9, baseAtlas, baseSpriteName, bannerGroupId, 0LL);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 methodPtr_low; // x10
  __int64 v10; // x1
  UnityEngine_Object_o *baseButton; // x21
  __int64 v12; // x1
  UILabel_o *missionCondLb; // x20
  System_String_o *condMsg; // x19
  EventRandomMissionListViewItemDraw_c *v15; // x0

  if ( (byte_4B1A2EE & 1) == 0 )
  {
    sub_1BCA7E0(&EventRandomMissionListViewItemDraw_TypeInfo, missionListViewItem, method);
    sub_1BCA7E0(&EventRandomMissionListViewItem_TypeInfo, v5, v6);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    byte_4B1A2EE = 1;
  }
  if ( missionListViewItem
    && (methodPtr_low = LOBYTE(EventRandomMissionListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(missionListViewItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low)
    && (EventRandomMissionListViewItem_c *)missionListViewItem->klass->_2.typeHierarchy[methodPtr_low - 1] == EventRandomMissionListViewItem_TypeInfo )
  {
    MissionListViewItemDraw__SetInput((MissionListViewItemDraw_o *)this, missionListViewItem, 0LL);
    baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
    if ( UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
    {
      missionCondLb = this->fields.missionCondLb;
      condMsg = missionListViewItem->fields.condMsg;
      v15 = EventRandomMissionListViewItemDraw_TypeInfo;
      if ( !EventRandomMissionListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRandomMissionListViewItemDraw_TypeInfo, v12);
        v15 = EventRandomMissionListViewItemDraw_TypeInfo;
      }
      WrapControlText__textAdjust(missionCondLb, condMsg, v15->static_fields->MISSION_COND_FONT_SIZE, 0, 0, 0LL);
    }
  }
  else
  {
    MissionListViewItemDraw__SetInput((MissionListViewItemDraw_o *)this, 0LL, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventRandomMissionListViewItemDraw__SetItem(
        EventRandomMissionListViewItemDraw_o *this,
        MissionListViewItem_o *missionListViewItem,
        int32_t mode,
        ListViewManager_o *listViewManager,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 methodPtr_low; // x10
  EventRandomMissionListViewItem_o *v32; // x20
  __int64 v33; // x10
  __int64 v34; // x1
  UnityEngine_GameObject_o *rewardImg; // x0
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  struct GiftEntity_array *giftEnts; // x1
  struct GiftEntity_array *giftEntityList; // x8
  UILabel_o *missionCondLb; // x23
  System_String_o *condMsg; // x24
  EventRandomMissionListViewItemDraw_c *v47; // x0
  __int64 v48; // x1
  UnityEngine_Object_o *baseButton; // x23
  UnityEngine_Object_o *baseSprite; // x22
  __int64 v51; // x1
  UISprite_o *v52; // x22
  Il2CppObject *v53; // x0
  __int64 v54; // x1
  System_String_o *v55; // x23
  UnityEngine_Object_o *timeOverSprite; // x22
  __int64 v57; // x1
  UISprite_o *v58; // x22
  Il2CppObject *v59; // x0
  __int64 v60; // x1
  System_String_o *v61; // x23
  UnityEngine_Object_o *rejectSprite; // x22
  __int64 v63; // x1
  UISprite_o *v64; // x22
  UIWidget_o *v65; // x22
  UnityEngine_Object_o *rankSprite; // x22
  __int64 v67; // x1
  const MethodInfo *v68; // x3
  int v69; // w24
  UISprite_o *v70; // x22
  Il2CppObject *v71; // x23
  Il2CppObject *v72; // x0
  __int64 v73; // x1
  System_String_o *v74; // x23
  UIWidget_o *v75; // x22
  __int64 v76; // x1
  UnityEngine_Object_o *rewardBackSprite; // x21
  UISprite_o *v78; // x21
  int32_t Type; // w0
  __int64 v80; // x1
  int32_t rewardObjectId; // w23
  int32_t rewardRarityId; // w22
  int32_t v83; // w24
  int v84; // [xsp+0h] [xbp-70h] BYREF
  int32_t currentEventId; // [xsp+4h] [xbp-6Ch] BYREF
  EventRandomMissionEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF
  float barExp; // [xsp+14h] [xbp-5Ch] BYREF
  System_String_o *progTxt; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_4B1A2E7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventRandomMissionMaster___, missionListViewItem, *(_QWORD *)&mode);
    sub_1BCA7E0(&DataManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&EventRandomMissionListViewItemDraw_TypeInfo, v11, v12);
    sub_1BCA7E0(&EventRandomMissionListViewItem_TypeInfo, v13, v14);
    sub_1BCA7E0(&EventRandomMissionListViewManager_TypeInfo, v15, v16);
    sub_1BCA7E0(&EventRewardRootComponent_TypeInfo, v17, v18);
    sub_1BCA7E0(&int_TypeInfo, v19, v20);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v21, v22);
    sub_1BCA7E0(&StringLiteral_17700/*"btn_mission_cancel"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_21710/*"mission_board_{0}01"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_21707/*"mission_board_rank_{0}{1:D2}"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_21706/*"mission_board_mask_{0}01"*/, v29, v30);
    byte_4B1A2E7 = 1;
  }
  progTxt = 0LL;
  barExp = 0.0;
  entity = 0LL;
  if ( missionListViewItem
    && (methodPtr_low = LOBYTE(EventRandomMissionListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(missionListViewItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (EventRandomMissionListViewItem_c *)missionListViewItem->klass->_2.typeHierarchy[methodPtr_low - 1] == EventRandomMissionListViewItem_TypeInfo )
      v32 = (EventRandomMissionListViewItem_o *)missionListViewItem;
    else
      v32 = 0LL;
    if ( !listViewManager )
      goto LABEL_13;
  }
  else
  {
    v32 = 0LL;
    if ( !listViewManager )
      goto LABEL_13;
  }
  v33 = LOBYTE(EventRandomMissionListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(listViewManager->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v33 )
  {
    if ( (EventRandomMissionListViewManager_c *)listViewManager->klass->_2.typeHierarchy[v33 - 1] != EventRandomMissionListViewManager_TypeInfo )
      listViewManager = 0LL;
    if ( !v32 )
      return 0;
    goto LABEL_18;
  }
  listViewManager = 0LL;
LABEL_13:
  if ( !v32 )
    return 0;
LABEL_18:
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, missionListViewItem);
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
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.giftEntityList,
      (int64_t)giftEnts,
      v37,
      v38,
      v39,
      v40,
      v41,
      v42);
    giftEntityList = this->fields.giftEntityList;
    if ( !giftEntityList )
      goto LABEL_97;
    this->fields.isMultipleReward = (signed int)giftEntityList->max_length > 1;
    missionCondLb = this->fields.missionCondLb;
    condMsg = v32->fields.condMsg;
    v47 = EventRandomMissionListViewItemDraw_TypeInfo;
    if ( !EventRandomMissionListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRandomMissionListViewItemDraw_TypeInfo, v34);
      v47 = EventRandomMissionListViewItemDraw_TypeInfo;
    }
    WrapControlText__textAdjust(missionCondLb, condMsg, v47->static_fields->MISSION_COND_FONT_SIZE, 0, 0, 0LL);
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
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v48);
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
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v34);
    if ( UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL) )
    {
      v52 = this->fields.baseSprite;
      currentEventId = v32->fields.currentEventId;
      v53 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &currentEventId);
      v55 = System_String__Format((System_String_o *)StringLiteral_21710/*"mission_board_{0}01"*/, v53, 0LL);
      if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo, v54);
      EventRewardRootComponent__setRewardInfoImg(v52, v55, 0LL);
    }
    timeOverSprite = (UnityEngine_Object_o *)this->fields.timeOverSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v51);
    if ( UnityEngine_Object__op_Inequality(timeOverSprite, 0LL, 0LL) )
    {
      v58 = this->fields.timeOverSprite;
      currentEventId = v32->fields.currentEventId;
      v59 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &currentEventId);
      v61 = System_String__Format((System_String_o *)StringLiteral_21706/*"mission_board_mask_{0}01"*/, v59, 0LL);
      if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo, v60);
      EventRewardRootComponent__setRewardInfoImg(v58, v61, 0LL);
    }
    rejectSprite = (UnityEngine_Object_o *)this->fields.rejectSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v57);
    if ( UnityEngine_Object__op_Inequality(rejectSprite, 0LL, 0LL) )
    {
      v64 = this->fields.rejectSprite;
      if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo, v63);
      EventRewardRootComponent__setRewardInfoImg(v64, (System_String_o *)StringLiteral_17700/*"btn_mission_cancel"*/, 0LL);
      rewardImg = (UnityEngine_GameObject_o *)EventRandomMissionListViewItemDraw_TypeInfo;
      v65 = (UIWidget_o *)this->fields.rejectSprite;
      if ( !EventRandomMissionListViewItemDraw_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventRandomMissionListViewItemDraw_TypeInfo, v34);
      if ( !v65 )
        goto LABEL_97;
      UIWidget__set_width(v65, EventRandomMissionListViewItemDraw_TypeInfo->static_fields->REJECT_SPRITE_WIDTH, 0LL);
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
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v63);
    if ( UnityEngine_Object__op_Inequality(rankSprite, 0LL, 0LL) )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v67);
      rewardImg = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventRandomMissionMaster___);
      if ( !rewardImg )
        goto LABEL_97;
      rewardImg = (UnityEngine_GameObject_o *)EventRandomMissionMaster__TryGetEntity(
                                                (EventRandomMissionMaster_o *)rewardImg,
                                                &entity,
                                                v32->fields.currentMissionId,
                                                0LL);
      if ( ((unsigned __int8)rewardImg & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_97;
        v69 = (entity->fields.missionRank & ~(entity->fields.missionRank >> 31)) + 1;
      }
      else
      {
        v69 = 1;
      }
      v70 = this->fields.rankSprite;
      currentEventId = v32->fields.currentEventId;
      v71 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &currentEventId);
      v84 = v69;
      v72 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v84);
      v74 = System_String__Format_62415592((System_String_o *)StringLiteral_21707/*"mission_board_rank_{0}{1:D2}"*/, v71, v72, 0LL);
      if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo, v73);
      EventRewardRootComponent__setRewardInfoImg(v70, v74, 0LL);
      rewardImg = (UnityEngine_GameObject_o *)EventRandomMissionListViewItemDraw_TypeInfo;
      v75 = (UIWidget_o *)this->fields.rankSprite;
      if ( !EventRandomMissionListViewItemDraw_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventRandomMissionListViewItemDraw_TypeInfo, v34);
      if ( !v75
        || (UIWidget__set_width(v75, EventRandomMissionListViewItemDraw_TypeInfo->static_fields->RANK_SPRITE_WIDTH, 0LL),
            (rewardImg = (UnityEngine_GameObject_o *)this->fields.rankSprite) == 0LL) )
      {
LABEL_97:
        sub_1BCAA3C(rewardImg, v34);
      }
      UIWidget__set_height(
        (UIWidget_o *)rewardImg,
        EventRandomMissionListViewItemDraw_TypeInfo->static_fields->RANK_SPRITE_HEIGHT,
        0LL);
    }
    EventRandomMissionListViewItemDraw__SetRewardItemIcon(
      this,
      v32,
      (EventRandomMissionListViewManager_o *)listViewManager,
      v68);
    rewardImg = (UnityEngine_GameObject_o *)this->fields.newIcon;
    if ( !rewardImg )
      goto LABEL_97;
    ShiningIconComponent__Clear((ShiningIconComponent_o *)rewardImg, 0LL);
    rewardBackSprite = (UnityEngine_Object_o *)this->fields.rewardBackSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v76);
    if ( UnityEngine_Object__op_Inequality(rewardBackSprite, 0LL, 0LL) )
    {
      v78 = this->fields.rewardBackSprite;
      Type = MissionListViewItem__get_Type((MissionListViewItem_o *)v32, 0LL);
      rewardObjectId = v32->fields.rewardObjectId;
      rewardRarityId = v32->fields.rewardRarityId;
      v83 = Type;
      if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo, v80);
      EventRewardRootComponent__SetRewardRaritySprite(v78, v83, rewardObjectId, rewardRarityId, 0LL);
    }
  }
  if ( v32->fields._IsDummy_k__BackingField )
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
    sub_1BCAA3C(0LL, missionListViewItem);
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
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  const MethodInfo *v11; // x1
  Il2CppObject *Master_object; // x22
  GiftEntity_array *GiftListById; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  struct GiftEntity_array *giftEntityList; // x8
  __int64 v21; // x9
  struct GiftEntity_array *v22; // x22
  GiftEntity_o *v23; // x8
  int v24; // w9
  int32_t v25; // w2
  GiftEntity_o *v26; // x8
  ItemIconComponent_o *itemIcon; // x21
  int num; // w8
  int32_t v29; // w2
  int32_t Type; // w0
  int32_t rewardObjectId; // w22
  int32_t v32; // w23
  const MethodInfo *v33; // x1
  int32_t iconId; // w1
  int32_t v35; // w3

  v5 = item;
  v6 = this;
  if ( (byte_4B1A2E9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_GiftMaster___, item, manager);
    sub_1BCA7E0(&DataManager_TypeInfo, v7, v8);
    this = (EventRandomMissionListViewItemDraw_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v9, v10);
    byte_4B1A2E9 = 1;
  }
  if ( !v5 )
    goto LABEL_53;
  if ( MissionListViewItem__get_EventRewardType((MissionListViewItem_o *)v5, 0LL) == 1 )
  {
    if ( EventRandomMissionListViewItem__get_IsHideReward(v5, v11) )
    {
      this = (EventRandomMissionListViewItemDraw_o *)v6->fields.itemIcon;
      v6->fields.isMultipleReward = 0;
      if ( !this )
        goto LABEL_53;
      ItemIconComponent__SetItemImage((ItemIconComponent_o *)this, 99, 0LL);
      goto LABEL_40;
    }
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, item);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_GiftMaster___);
    this = (EventRandomMissionListViewItemDraw_o *)MissionListViewItem__get_EventMissionEntity(
                                                     (MissionListViewItem_o *)v5,
                                                     0LL);
    if ( !this )
      goto LABEL_53;
    if ( !Master_object )
      goto LABEL_53;
    GiftListById = GiftMaster__GetGiftListById((GiftMaster_o *)Master_object, HIDWORD(this->fields.missionNoLb), 0LL);
    v6->fields.giftEntityList = GiftListById;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&v6->fields.giftEntityList,
      (int64_t)GiftListById,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
    giftEntityList = v6->fields.giftEntityList;
    if ( !giftEntityList )
      goto LABEL_53;
    v21 = *(_QWORD *)&giftEntityList->max_length;
    if ( !v21 )
      return;
    v6->fields.isMultipleReward = (int)v21 > 1;
    if ( (int)v21 < 2 )
    {
      if ( (_DWORD)v21 )
      {
        v26 = giftEntityList->m_Items[0];
        if ( !v26 )
          goto LABEL_53;
        item = (EventRandomMissionListViewItem_o *)(unsigned int)v26->fields.prioredIconId;
        itemIcon = v6->fields.itemIcon;
        if ( (int)item < 1 )
        {
          Type = MissionListViewItem__get_Type((MissionListViewItem_o *)v5, 0LL);
          rewardObjectId = v5->fields.rewardObjectId;
          v32 = Type;
          this = (EventRandomMissionListViewItemDraw_o *)MissionListViewItem__get_DisplayGiftNum(
                                                           (MissionListViewItem_o *)v5,
                                                           0LL);
          if ( !itemIcon )
            goto LABEL_53;
          ItemIconComponent__SetGiftDesignSize(itemIcon, v32, rewardObjectId, (int32_t)this, 0LL);
        }
        else
        {
          if ( !itemIcon )
            goto LABEL_53;
          num = v26->fields.num;
          if ( num <= 1 )
            v29 = -1;
          else
            v29 = num;
          ItemIconComponent__SetItemImage_38857576(v6->fields.itemIcon, (int32_t)item, v29, 0LL);
        }
        this = (EventRandomMissionListViewItemDraw_o *)v6->fields.itemIcon;
        if ( !this )
LABEL_53:
          sub_1BCAA3C(this, item);
        ItemIconComponent__SetAlpha((ItemIconComponent_o *)this, 1.0, 0LL);
        goto LABEL_40;
      }
    }
    else
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
      this = (EventRandomMissionListViewItemDraw_o *)UnityEngine_Object__op_Inequality(
                                                       (UnityEngine_Object_o *)manager,
                                                       0LL,
                                                       0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_40;
      v22 = v6->fields.giftEntityList;
      if ( !v22 || !manager )
        goto LABEL_53;
      this = (EventRandomMissionListViewItemDraw_o *)MissionListViewManager__GetAlphaAnimCnt(
                                                       (MissionListViewManager_o *)manager,
                                                       v22->max_length,
                                                       0LL);
      if ( (unsigned int)this < v22->max_length )
      {
        v23 = v22->m_Items[(int)this];
        if ( !v23 )
          goto LABEL_53;
        item = (EventRandomMissionListViewItem_o *)(unsigned int)v23->fields.prioredIconId;
        this = (EventRandomMissionListViewItemDraw_o *)v6->fields.itemIcon;
        v24 = v23->fields.num;
        if ( (int)item < 1 )
        {
          if ( !this )
            goto LABEL_53;
          if ( v24 <= 1 )
            v35 = -1;
          else
            v35 = v23->fields.num;
          ItemIconComponent__SetGiftDesignSize(
            (ItemIconComponent_o *)this,
            v23->fields.type,
            v23->fields.objectId,
            v35,
            0LL);
        }
        else
        {
          if ( !this )
            goto LABEL_53;
          if ( v24 <= 1 )
            v25 = -1;
          else
            v25 = v23->fields.num;
          ItemIconComponent__SetItemImage_38857576((ItemIconComponent_o *)this, (int32_t)item, v25, 0LL);
        }
        goto LABEL_40;
      }
    }
    sub_1BCAA44(this, item);
  }
LABEL_40:
  if ( MissionListViewItem__get_EventRewardType((MissionListViewItem_o *)v5, 0LL) == 3 )
  {
    if ( EventRandomMissionListViewItem__get_IsHideReward(v5, v33) )
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


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRandomMissionListViewItemDraw__SetRewardStatusImg(
        EventRandomMissionListViewItemDraw_o *this,
        int32_t status,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  UnityEngine_GameObject_o *lockImgInfo; // x0
  __int64 v9; // x1
  UILabel_o *timeOverLb; // x19

  if ( (byte_4B1A2EA & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, *(_QWORD *)&status, method);
    sub_1BCA7E0(&StringLiteral_8805/*"MISSION_PERIOD_END"*/, v5, v6);
    byte_4B1A2EA = 1;
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
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v9);
    lockImgInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8805/*"MISSION_PERIOD_END"*/, 0LL);
    if ( !timeOverLb )
LABEL_11:
      sub_1BCAA3C(lockImgInfo, v7);
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
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  const MethodInfo *v19; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v21; // x21
  __int64 v22; // x1
  int64_t oldTime; // x23
  int64_t v24; // x22
  MissionListViewItemDraw_c *v25; // x8
  UILabel_o *resTimeLb; // x23
  int64_t klass; // x24
  int64_t v28; // x24
  __int64 v29; // x1
  int64_t v30; // x21
  System_String_o *RestTime; // x21
  __int64 v32; // x1
  UnityEngine_Object_o *rewardBackSprite; // x20

  v5 = *(long double *)&alphaAnim;
  if ( (byte_4B1A2ED & 1) == 0 )
  {
    sub_1BCA7E0(&EventRandomMissionListViewItemDraw_TypeInfo, item, *(_QWORD *)&mode);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&MissionListViewItemDraw_TypeInfo, v11, v12);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v15, v16);
    sub_1BCA7E0(&StringLiteral_13512/*"TIME_REST_TIMEOVER"*/, v17, v18);
    byte_4B1A2ED = 1;
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
      sub_1BCAA3C(gameObject, v19);
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
        v21 = gameObject;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.resTimeLb, 0LL);
        if ( !gameObject )
          goto LABEL_42;
        if ( UnityEngine_GameObject__get_activeSelf(gameObject, 0LL) )
        {
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v22);
          gameObject = (UnityEngine_GameObject_o *)NetworkManager__getTime(0LL);
          oldTime = this->fields.oldTime;
          v24 = (int64_t)gameObject;
          v25 = MissionListViewItemDraw_TypeInfo;
          if ( !MissionListViewItemDraw_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(MissionListViewItemDraw_TypeInfo, v19);
            v25 = MissionListViewItemDraw_TypeInfo;
          }
          if ( v24 - oldTime >= v25->static_fields->TIME_UPDATE_ITVL_SEC )
          {
            if ( !v21 )
              goto LABEL_42;
            resTimeLb = this->fields.resTimeLb;
            if ( this->fields.isAchiveTime )
            {
              klass = (int64_t)v21[3].klass;
              if ( !EventRandomMissionListViewItemDraw_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(EventRandomMissionListViewItemDraw_TypeInfo, v19);
              gameObject = (UnityEngine_GameObject_o *)EventRandomMissionListViewItemDraw__GetAchiveTimeText(klass, v19);
            }
            else
            {
              v28 = *(_QWORD *)&v21[2].fields.m_CachedPtr;
              if ( !EventRandomMissionListViewItemDraw_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(EventRandomMissionListViewItemDraw_TypeInfo, v19);
              gameObject = (UnityEngine_GameObject_o *)EventRandomMissionListViewItemDraw__GetRestTimeText(v28, v19);
            }
            v19 = (const MethodInfo *)gameObject;
            if ( !resTimeLb )
              goto LABEL_42;
            UILabel__set_text(resTimeLb, (System_String_o *)gameObject, 0LL);
            this->fields.oldTime = v24;
            v30 = *(_QWORD *)&v21[2].fields.m_CachedPtr;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v29);
            RestTime = LocalizationManager__GetRestTime(v30, 0LL);
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_13512/*"TIME_REST_TIMEOVER"*/,
                                                       0LL);
            if ( !RestTime )
              goto LABEL_42;
            if ( System_String__Equals_62409536(RestTime, (System_String_o *)gameObject, 0LL) )
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
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v32);
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