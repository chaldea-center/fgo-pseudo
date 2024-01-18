void __fastcall EventRandomMissionListViewItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  EventRandomMissionListViewItemDraw_c *v2; // x8

  if ( (byte_418874A & 1) == 0 )
  {
    sub_B2C35C(&EventRandomMissionListViewItemDraw_TypeInfo, v1);
    byte_418874A = 1;
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
  if ( (byte_4188749 & 1) == 0 )
  {
    sub_B2C35C(&MissionListViewItemDraw_TypeInfo, method);
    byte_4188749 = 1;
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
  EventRandomMissionListViewItemDraw_o *v4; // x19
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
  this = (EventRandomMissionListViewItemDraw_o *)MissionListViewManager__GetAlphaAnimCnt(
                                                   (MissionListViewManager_o *)manager,
                                                   giftEntityList->max_length,
                                                   0LL);
  if ( (unsigned int)this >= giftEntityList->max_length )
  {
    v9 = sub_B2C460(this);
    sub_B2C400(v9, 0LL);
  }
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
      ItemIconComponent__SetItemImage_27396332((ItemIconComponent_o *)this, (int32_t)manager, v7, 0LL);
      return;
    }
LABEL_18:
    sub_B2C434(this, manager);
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
  __int64 v3; // x1
  __int64 v4; // x1
  System_String_o *v5; // x20
  System_String_o *RestTime; // x2

  if ( (byte_4188745 & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_80/*" "*/, v3);
    sub_B2C35C(&StringLiteral_13392/*"TIME_REST_ACHIVE"*/, v4);
    byte_4188745 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_13392/*"TIME_REST_ACHIVE"*/, 0LL);
  RestTime = LocalizationManager__GetRestTime(closeTime, 0LL);
  return System_String__Concat_44307816(v5, (System_String_o *)StringLiteral_80/*" "*/, RestTime, 0LL);
}


System_String_o *__fastcall EventRandomMissionListViewItemDraw__GetRestTimeText(
        int64_t endTime,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_String_o *v4; // x20
  System_String_o *RestTime; // x1

  if ( (byte_4188744 & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_13404/*"TIME_REST_QUEST"*/, v3);
    byte_4188744 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_13404/*"TIME_REST_QUEST"*/, 0LL);
  RestTime = LocalizationManager__GetRestTime(endTime, 0LL);
  return System_String__Concat_44305532(v4, RestTime, 0LL);
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
  MethodInfo *AchiveTimeText; // x1
  int64_t v11; // x21
  bool *p_isDispTime; // x22
  int64_t v13; // x8
  int64_t v14; // x21
  System_String_o *RestTimeText; // x0
  int64_t v16; // x21
  int32_t *p_progStatus; // x23
  int v18; // w8
  int64_t v19; // x21
  UILabel_o *timeOverLb; // x21
  __int64 v21; // x10

  if ( (byte_4188741 & 1) == 0 )
  {
    sub_B2C35C(&EventRandomMissionListViewItemDraw_TypeInfo, missionListviewItem);
    sub_B2C35C(&EventRandomMissionListViewItem_TypeInfo, v5);
    sub_B2C35C(&LocalizationManager_TypeInfo, v6);
    sub_B2C35C(&NetworkManager_TypeInfo, v7);
    sub_B2C35C(&StringLiteral_8754/*"MISSION_PERIOD_END"*/, v8);
    byte_4188741 = 1;
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
  v11 = Time;
  Time = (int64_t)MissionListViewItem__get_EventMissionEntity(missionListviewItem, 0LL);
  if ( !Time )
    goto LABEL_51;
  if ( v11 >= *(_QWORD *)(Time + 56) )
  {
    Time = (int64_t)MissionListViewItem__get_EventMissionEntity(missionListviewItem, 0LL);
    if ( !Time )
      goto LABEL_51;
    v13 = *(_QWORD *)(Time + 64);
    this->fields.isDispTime = v11 < v13;
    p_isDispTime = &this->fields.isDispTime;
    if ( v11 < v13 )
    {
      Time = (int64_t)MissionListViewItem__get_EventMissionEntity(missionListviewItem, 0LL);
      if ( !Time )
        goto LABEL_51;
      v14 = *(_QWORD *)(Time + 64);
      if ( (BYTE3(EventRandomMissionListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventRandomMissionListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRandomMissionListViewItemDraw_TypeInfo);
      }
      RestTimeText = EventRandomMissionListViewItemDraw__GetRestTimeText(v14, AchiveTimeText);
      if ( missionListviewItem->fields.progStatus == 3 )
      {
        Time = (int64_t)MissionListViewItem__get_EventMissionEntity(missionListviewItem, 0LL);
        if ( !Time )
          goto LABEL_51;
        v16 = *(_QWORD *)(Time + 72);
        if ( (BYTE3(EventRandomMissionListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !EventRandomMissionListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventRandomMissionListViewItemDraw_TypeInfo);
        }
        AchiveTimeText = (MethodInfo *)EventRandomMissionListViewItemDraw__GetAchiveTimeText(v16, AchiveTimeText);
        this->fields.isAchiveTime = 1;
      }
      else
      {
        AchiveTimeText = (MethodInfo *)RestTimeText;
      }
      Time = (int64_t)this->fields.resTimeLb;
      if ( !Time )
LABEL_51:
        sub_B2C434(Time, AchiveTimeText);
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
  v18 = 1;
  if ( (unsigned int)(missionListviewItem->fields.progStatus - 3) >= 2 )
  {
    missionListviewItem->fields.isNowMission = 1;
    goto LABEL_34;
  }
  this->fields.isAchiveTime = 1;
  Time = (int64_t)MissionListViewItem__get_EventMissionEntity(missionListviewItem, 0LL);
  if ( !Time )
    goto LABEL_51;
  v19 = *(_QWORD *)(Time + 72);
  if ( (BYTE3(EventRandomMissionListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventRandomMissionListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRandomMissionListViewItemDraw_TypeInfo);
  }
  Time = (int64_t)EventRandomMissionListViewItemDraw__GetAchiveTimeText(v19, AchiveTimeText);
  if ( !this->fields.resTimeLb )
    goto LABEL_51;
  AchiveTimeText = (MethodInfo *)Time;
  Time = (int64_t)this->fields.resTimeLb;
LABEL_33:
  UILabel__set_text((UILabel_o *)Time, (System_String_o *)AchiveTimeText, 0LL);
  v18 = 0;
  this->fields.oldTime = 0LL;
LABEL_34:
  if ( *p_progStatus == 4 )
  {
    this->fields.isDispTime = 0;
    this->fields.isAchiveTime = 0;
  }
  Time = (int64_t)this->fields.timeOverInfo;
  if ( !Time )
    goto LABEL_51;
  if ( v18 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, 1, 0LL);
    timeOverLb = this->fields.timeOverLb;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    Time = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_8754/*"MISSION_PERIOD_END"*/, 0LL);
    if ( !timeOverLb )
      goto LABEL_51;
    UILabel__set_text(timeOverLb, (System_String_o *)Time, 0LL);
    v21 = *(&EventRandomMissionListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&missionListviewItem->klass->_2.bitflags2 + 1) >= (unsigned int)v21
      && (EventRandomMissionListViewItem_c *)missionListviewItem->klass->_2.typeHierarchy[v21 - 1] == EventRandomMissionListViewItem_TypeInfo )
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
    goto LABEL_51;
  Time = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Time, 0LL);
  if ( !*p_isDispTime )
  {
    AchiveTimeText = (MethodInfo *)this->fields.isAchiveTime;
    if ( Time )
      goto LABEL_49;
    goto LABEL_51;
  }
  AchiveTimeText = (MethodInfo *)(&dword_0 + 1);
  if ( !Time )
    goto LABEL_51;
LABEL_49:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Time, (bool)AchiveTimeText, 0LL);
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

  if ( (byte_4188748 & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, *(_QWORD *)&bannerGroupId);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    byte_4188748 = 1;
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

  if ( (byte_4188747 & 1) == 0 )
  {
    sub_B2C35C(&EventRandomMissionListViewItemDraw_TypeInfo, missionListViewItem);
    sub_B2C35C(&EventRandomMissionListViewItem_TypeInfo, v5);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v6);
    byte_4188747 = 1;
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
  __int64 v23; // x1
  UnityEngine_GameObject_o *rewardImg; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  struct GiftEntity_array *giftEnts; // x1
  struct GiftEntity_array *giftEntityList; // x8
  UILabel_o *missionCondLb; // x23
  System_String_o *condMsg; // x24
  EventRandomMissionListViewItemDraw_c *v36; // x0
  UnityEngine_Object_o *baseButton; // x23
  UnityEngine_Object_o *baseSprite; // x22
  UISprite_o *v39; // x22
  Il2CppObject *v40; // x0
  System_String_o *v41; // x23
  UnityEngine_Object_o *timeOverSprite; // x22
  UISprite_o *v43; // x22
  Il2CppObject *v44; // x0
  System_String_o *v45; // x23
  UnityEngine_Object_o *rejectSprite; // x22
  UISprite_o *v47; // x22
  UIWidget_o *v48; // x22
  UnityEngine_Object_o *rankSprite; // x22
  const MethodInfo *v50; // x3
  const MethodInfo *v51; // x3
  int v52; // w24
  UISprite_o *v53; // x22
  Il2CppObject *v54; // x23
  Il2CppObject *v55; // x0
  System_String_o *v56; // x23
  UIWidget_o *v57; // x22
  UnityEngine_Object_o *rewardBackSprite; // x21
  UISprite_o *v59; // x21
  int32_t Type; // w0
  int32_t rewardObjectId; // w23
  int32_t rewardRarityId; // w22
  int32_t v63; // w24
  int v64; // [xsp+8h] [xbp-68h] BYREF
  int32_t currentEventId; // [xsp+Ch] [xbp-64h] BYREF
  EventRandomMissionEntity_o *entity; // [xsp+10h] [xbp-60h] BYREF
  float barExp; // [xsp+1Ch] [xbp-54h] BYREF
  System_String_o *progTxt; // [xsp+28h] [xbp-48h] BYREF

  if ( (byte_4188740 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_EventRandomMissionMaster___, missionListViewItem);
    sub_B2C35C(&DataManager_TypeInfo, v9);
    sub_B2C35C(&EventRandomMissionListViewItemDraw_TypeInfo, v10);
    sub_B2C35C(&EventRandomMissionListViewItem_TypeInfo, v11);
    sub_B2C35C(&EventRandomMissionListViewManager_TypeInfo, v12);
    sub_B2C35C(&EventRewardRootComponent_TypeInfo, v13);
    sub_B2C35C(&int_TypeInfo, v14);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v15);
    sub_B2C35C(&StringLiteral_17004/*"btn_mission_cancel"*/, v16);
    sub_B2C35C(&StringLiteral_20542/*"mission_board_{0}01"*/, v17);
    sub_B2C35C(&StringLiteral_20539/*"mission_board_rank_{0}{1:D2}"*/, v18);
    sub_B2C35C(&StringLiteral_20538/*"mission_board_mask_{0}01"*/, v19);
    byte_4188740 = 1;
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
    rewardImg = (UnityEngine_GameObject_o *)this->fields.receiveIcon;
    if ( !rewardImg )
      goto LABEL_113;
    ShiningIconComponent__Clear((ShiningIconComponent_o *)rewardImg, 0LL);
    rewardImg = this->fields.rewardGetInfo;
    if ( !rewardImg )
      goto LABEL_113;
    UnityEngine_GameObject__SetActive(rewardImg, 0, 0LL);
    rewardImg = this->fields.rewardAchiveInfo;
    if ( !rewardImg )
      goto LABEL_113;
    UnityEngine_GameObject__SetActive(rewardImg, 0, 0LL);
    rewardImg = this->fields.compInfo;
    if ( !rewardImg )
      goto LABEL_113;
    UnityEngine_GameObject__SetActive(rewardImg, 0, 0LL);
    rewardImg = this->fields.completedImg;
    if ( !rewardImg )
      goto LABEL_113;
    rewardImg = UnityEngine_GameObject__get_gameObject(rewardImg, 0LL);
    if ( !rewardImg )
      goto LABEL_113;
    UnityEngine_GameObject__SetActive(rewardImg, 0, 0LL);
    rewardImg = this->fields.timeOverInfo;
    if ( !rewardImg )
      goto LABEL_113;
    UnityEngine_GameObject__SetActive(rewardImg, 0, 0LL);
    rewardImg = this->fields.lockImgInfo;
    if ( !rewardImg )
      goto LABEL_113;
    UnityEngine_GameObject__SetActive(rewardImg, 0, 0LL);
    if ( !missionListViewItem )
      goto LABEL_113;
    giftEnts = missionListViewItem->fields.giftEnts;
    this->fields.giftEntityList = giftEnts;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.giftEntityList,
      (System_Int32_array **)giftEnts,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
    giftEntityList = this->fields.giftEntityList;
    if ( !giftEntityList )
      goto LABEL_113;
    this->fields.isMultipleReward = (signed int)giftEntityList->max_length > 1;
    missionCondLb = this->fields.missionCondLb;
    condMsg = v21->fields.condMsg;
    v36 = EventRandomMissionListViewItemDraw_TypeInfo;
    if ( (BYTE3(EventRandomMissionListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventRandomMissionListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRandomMissionListViewItemDraw_TypeInfo);
      v36 = EventRandomMissionListViewItemDraw_TypeInfo;
    }
    WrapControlText__textAdjust(missionCondLb, condMsg, v36->static_fields->MISSION_COND_FONT_SIZE, 0, 0, 0LL);
    ((void (__fastcall *)(EventRandomMissionListViewItemDraw_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._8_SetRewardStatusImg.method)(
      this,
      (unsigned int)missionListViewItem->fields.progStatus,
      this->klass->vtable._9_UpdateDispResTime.methodPtr);
    if ( MissionListViewItem__GetProgInfo(missionListViewItem, &progTxt, &barExp, 0LL) )
    {
      rewardImg = (UnityEngine_GameObject_o *)this->fields.missionProgressLb;
      if ( !rewardImg )
        goto LABEL_113;
      UILabel__set_text((UILabel_o *)rewardImg, progTxt, 0LL);
      rewardImg = (UnityEngine_GameObject_o *)this->fields.expBar;
      if ( !rewardImg )
        goto LABEL_113;
      UIProgressBar__set_value((UIProgressBar_o *)rewardImg, barExp, 0LL);
    }
    rewardImg = (UnityEngine_GameObject_o *)this->fields.miniIconComponent;
    if ( !rewardImg )
      goto LABEL_113;
    MissionGiftMiniIconComponent__SetMiniIcon(
      (MissionGiftMiniIconComponent_o *)rewardImg,
      missionListViewItem->fields.subGiftEntity,
      0LL);
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
      rewardImg = (UnityEngine_GameObject_o *)this->fields.baseButton;
      if ( !rewardImg )
        goto LABEL_113;
      UICommonButton__SetColliderEnable(
        (UICommonButton_o *)rewardImg,
        missionListViewItem->fields.isColliderEnable,
        1,
        0LL);
      rewardImg = (UnityEngine_GameObject_o *)this->fields.baseButton;
      if ( !rewardImg )
        goto LABEL_113;
      ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))rewardImg->klass[1]._1.implementedInterfaces)(
        rewardImg,
        0LL,
        1LL,
        rewardImg->klass[1]._1.interfaceOffsets);
    }
    baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL) )
    {
      v39 = this->fields.baseSprite;
      currentEventId = v21->fields.currentEventId;
      v40 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &currentEventId);
      v41 = System_String__Format((System_String_o *)StringLiteral_20542/*"mission_board_{0}01"*/, v40, 0LL);
      if ( (BYTE3(EventRewardRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
      }
      EventRewardRootComponent__setRewardInfoImg(v39, v41, 0LL);
    }
    timeOverSprite = (UnityEngine_Object_o *)this->fields.timeOverSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(timeOverSprite, 0LL, 0LL) )
    {
      v43 = this->fields.timeOverSprite;
      currentEventId = v21->fields.currentEventId;
      v44 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &currentEventId);
      v45 = System_String__Format((System_String_o *)StringLiteral_20538/*"mission_board_mask_{0}01"*/, v44, 0LL);
      if ( (BYTE3(EventRewardRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
      }
      EventRewardRootComponent__setRewardInfoImg(v43, v45, 0LL);
    }
    rejectSprite = (UnityEngine_Object_o *)this->fields.rejectSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(rejectSprite, 0LL, 0LL) )
    {
      v47 = this->fields.rejectSprite;
      if ( (BYTE3(EventRewardRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
      }
      EventRewardRootComponent__setRewardInfoImg(v47, (System_String_o *)StringLiteral_17004/*"btn_mission_cancel"*/, 0LL);
      rewardImg = (UnityEngine_GameObject_o *)EventRandomMissionListViewItemDraw_TypeInfo;
      v48 = (UIWidget_o *)this->fields.rejectSprite;
      if ( (BYTE3(EventRandomMissionListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventRandomMissionListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRandomMissionListViewItemDraw_TypeInfo);
      }
      if ( !v48 )
        goto LABEL_113;
      UIWidget__set_width(v48, EventRandomMissionListViewItemDraw_TypeInfo->static_fields->REJECT_SPRITE_WIDTH, 0LL);
      rewardImg = (UnityEngine_GameObject_o *)this->fields.rejectSprite;
      if ( !rewardImg )
        goto LABEL_113;
      UIWidget__set_height(
        (UIWidget_o *)rewardImg,
        EventRandomMissionListViewItemDraw_TypeInfo->static_fields->REJECT_SPRITE_HEIGHT,
        0LL);
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
      rewardImg = (UnityEngine_GameObject_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_EventRandomMissionMaster___);
      if ( !rewardImg )
        goto LABEL_113;
      rewardImg = (UnityEngine_GameObject_o *)EventRandomMissionMaster__TryGetEntity(
                                                (EventRandomMissionMaster_o *)rewardImg,
                                                &entity,
                                                v21->fields.currentMissionId,
                                                v51);
      if ( ((unsigned __int8)rewardImg & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_113;
        v52 = (entity->fields.missionRank & ~(entity->fields.missionRank >> 31)) + 1;
      }
      else
      {
        v52 = 1;
      }
      v53 = this->fields.rankSprite;
      currentEventId = v21->fields.currentEventId;
      v54 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &currentEventId);
      v64 = v52;
      v55 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v64);
      v56 = System_String__Format_44301068((System_String_o *)StringLiteral_20539/*"mission_board_rank_{0}{1:D2}"*/, v54, v55, 0LL);
      if ( (BYTE3(EventRewardRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
      }
      EventRewardRootComponent__setRewardInfoImg(v53, v56, 0LL);
      rewardImg = (UnityEngine_GameObject_o *)EventRandomMissionListViewItemDraw_TypeInfo;
      v57 = (UIWidget_o *)this->fields.rankSprite;
      if ( (BYTE3(EventRandomMissionListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventRandomMissionListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRandomMissionListViewItemDraw_TypeInfo);
      }
      if ( !v57
        || (UIWidget__set_width(v57, EventRandomMissionListViewItemDraw_TypeInfo->static_fields->RANK_SPRITE_WIDTH, 0LL),
            (rewardImg = (UnityEngine_GameObject_o *)this->fields.rankSprite) == 0LL) )
      {
LABEL_113:
        sub_B2C434(rewardImg, v23);
      }
      UIWidget__set_height(
        (UIWidget_o *)rewardImg,
        EventRandomMissionListViewItemDraw_TypeInfo->static_fields->RANK_SPRITE_HEIGHT,
        0LL);
    }
    EventRandomMissionListViewItemDraw__SetRewardItemIcon(
      this,
      v21,
      (EventRandomMissionListViewManager_o *)listViewManager,
      v50);
    rewardImg = (UnityEngine_GameObject_o *)this->fields.newIcon;
    if ( !rewardImg )
      goto LABEL_113;
    ShiningIconComponent__Clear((ShiningIconComponent_o *)rewardImg, 0LL);
    rewardBackSprite = (UnityEngine_Object_o *)this->fields.rewardBackSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(rewardBackSprite, 0LL, 0LL) )
    {
      v59 = this->fields.rewardBackSprite;
      Type = MissionListViewItem__get_Type((MissionListViewItem_o *)v21, 0LL);
      rewardObjectId = v21->fields.rewardObjectId;
      rewardRarityId = v21->fields.rewardRarityId;
      v63 = Type;
      if ( (BYTE3(EventRewardRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
      }
      EventRewardRootComponent__SetRewardRaritySprite(v59, v63, rewardObjectId, rewardRarityId, 0LL);
    }
  }
  if ( v21->fields._IsDummy_k__BackingField )
  {
    rewardImg = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( rewardImg )
    {
      UnityEngine_GameObject__SetActive(rewardImg, 0, 0LL);
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
    sub_B2C434(0LL, missionListViewItem);
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
  __int64 v8; // x1
  const MethodInfo *v9; // x1
  GiftMaster_o *Master_WarQuestSelectionMaster; // x22
  System_Int32_array **GiftListById; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  struct GiftEntity_array *giftEntityList; // x8
  __int64 v19; // x9
  struct GiftEntity_array *v20; // x22
  GiftEntity_o *v21; // x9
  int v22; // w8
  int32_t v23; // w2
  GiftEntity_o *v24; // x8
  ItemIconComponent_o *itemIcon; // x21
  int num; // w8
  int32_t v27; // w2
  int32_t Type; // w0
  int32_t rewardObjectId; // w22
  int32_t v30; // w23
  const MethodInfo *v31; // x1
  int32_t iconId; // w1
  int32_t v33; // w3
  __int64 v34; // x0

  v5 = item;
  v6 = this;
  if ( (byte_4188742 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_GiftMaster___, item);
    sub_B2C35C(&DataManager_TypeInfo, v7);
    this = (EventRandomMissionListViewItemDraw_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, v8);
    byte_4188742 = 1;
  }
  if ( !v5 )
    goto LABEL_55;
  if ( MissionListViewItem__get_EventRewardType((MissionListViewItem_o *)v5, 0LL) == 1 )
  {
    if ( EventRandomMissionListViewItem__get_IsHideReward(v5, v9) )
    {
      this = (EventRandomMissionListViewItemDraw_o *)v6->fields.itemIcon;
      v6->fields.isMultipleReward = 0;
      if ( !this )
        goto LABEL_55;
      ItemIconComponent__SetItemImage((ItemIconComponent_o *)this, 99, 0LL);
      goto LABEL_42;
    }
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (GiftMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_GiftMaster___);
    this = (EventRandomMissionListViewItemDraw_o *)MissionListViewItem__get_EventMissionEntity(
                                                     (MissionListViewItem_o *)v5,
                                                     0LL);
    if ( !this )
      goto LABEL_55;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_55;
    GiftListById = (System_Int32_array **)GiftMaster__GetGiftListById(
                                            Master_WarQuestSelectionMaster,
                                            HIDWORD(this->fields.iconLabel),
                                            0LL);
    v6->fields.giftEntityList = (struct GiftEntity_array *)GiftListById;
    sub_B2C2F8((BattleServantConfConponent_o *)&v6->fields.giftEntityList, GiftListById, v12, v13, v14, v15, v16, v17);
    giftEntityList = v6->fields.giftEntityList;
    if ( !giftEntityList )
      goto LABEL_55;
    v19 = *(_QWORD *)&giftEntityList->max_length;
    if ( !v19 )
      return;
    v6->fields.isMultipleReward = (int)v19 > 1;
    if ( (int)v19 < 2 )
    {
      if ( giftEntityList->max_length )
      {
        v24 = giftEntityList->m_Items[0];
        if ( !v24 )
          goto LABEL_55;
        item = (EventRandomMissionListViewItem_o *)(unsigned int)v24->fields.prioredIconId;
        itemIcon = v6->fields.itemIcon;
        if ( (int)item < 1 )
        {
          Type = MissionListViewItem__get_Type((MissionListViewItem_o *)v5, 0LL);
          rewardObjectId = v5->fields.rewardObjectId;
          v30 = Type;
          this = (EventRandomMissionListViewItemDraw_o *)MissionListViewItem__get_DisplayGiftNum(
                                                           (MissionListViewItem_o *)v5,
                                                           0LL);
          if ( !itemIcon )
            goto LABEL_55;
          ItemIconComponent__SetGiftDesignSize(itemIcon, v30, rewardObjectId, (int32_t)this, 0LL);
        }
        else
        {
          if ( !itemIcon )
            goto LABEL_55;
          num = v24->fields.num;
          if ( num <= 1 )
            v27 = -1;
          else
            v27 = num;
          ItemIconComponent__SetItemImage_27396332(v6->fields.itemIcon, (int32_t)item, v27, 0LL);
        }
        this = (EventRandomMissionListViewItemDraw_o *)v6->fields.itemIcon;
        if ( !this )
LABEL_55:
          sub_B2C434(this, item);
        ItemIconComponent__SetAlpha((ItemIconComponent_o *)this, 1.0, 0LL);
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
      this = (EventRandomMissionListViewItemDraw_o *)UnityEngine_Object__op_Inequality(
                                                       (UnityEngine_Object_o *)manager,
                                                       0LL,
                                                       0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_42;
      v20 = v6->fields.giftEntityList;
      if ( !v20 || !manager )
        goto LABEL_55;
      this = (EventRandomMissionListViewItemDraw_o *)MissionListViewManager__GetAlphaAnimCnt(
                                                       (MissionListViewManager_o *)manager,
                                                       v20->max_length,
                                                       0LL);
      if ( (unsigned int)this < v20->max_length )
      {
        v21 = v20->m_Items[(int)this];
        if ( !v21 )
          goto LABEL_55;
        item = (EventRandomMissionListViewItem_o *)(unsigned int)v21->fields.prioredIconId;
        this = (EventRandomMissionListViewItemDraw_o *)v6->fields.itemIcon;
        v22 = v21->fields.num;
        if ( (int)item < 1 )
        {
          if ( !this )
            goto LABEL_55;
          if ( v22 <= 1 )
            v33 = -1;
          else
            v33 = v21->fields.num;
          ItemIconComponent__SetGiftDesignSize(
            (ItemIconComponent_o *)this,
            v21->fields.type,
            v21->fields.objectId,
            v33,
            0LL);
        }
        else
        {
          if ( !this )
            goto LABEL_55;
          if ( v22 <= 1 )
            v23 = -1;
          else
            v23 = v21->fields.num;
          ItemIconComponent__SetItemImage_27396332((ItemIconComponent_o *)this, (int32_t)item, v23, 0LL);
        }
        goto LABEL_42;
      }
    }
    v34 = sub_B2C460(this);
    sub_B2C400(v34, 0LL);
  }
LABEL_42:
  if ( MissionListViewItem__get_EventRewardType((MissionListViewItem_o *)v5, 0LL) == 3 )
  {
    if ( EventRandomMissionListViewItem__get_IsHideReward(v5, v31) )
    {
      this = (EventRandomMissionListViewItemDraw_o *)v6->fields.itemIcon;
      v6->fields.isMultipleReward = 0;
      if ( this )
      {
        iconId = 99;
LABEL_49:
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
  __int64 v6; // x1
  UnityEngine_GameObject_o *lockImgInfo; // x0
  UILabel_o *timeOverLb; // x19

  if ( (byte_4188743 & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, *(_QWORD *)&status);
    sub_B2C35C(&StringLiteral_8754/*"MISSION_PERIOD_END"*/, v5);
    byte_4188743 = 1;
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
    lockImgInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8754/*"MISSION_PERIOD_END"*/, 0LL);
    if ( !timeOverLb )
LABEL_12:
      sub_B2C434(lockImgInfo, v6);
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
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  const MethodInfo *v14; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v16; // x21
  int64_t oldTime; // x23
  int64_t v18; // x22
  MissionListViewItemDraw_c *v19; // x8
  UILabel_o *resTimeLb; // x23
  int64_t klass; // x24
  int64_t v22; // x24
  int64_t v23; // x21
  System_String_o *RestTime; // x21
  UnityEngine_Object_o *rewardBackSprite; // x20

  v5 = *(long double *)&alphaAnim;
  if ( (byte_4188746 & 1) == 0 )
  {
    sub_B2C35C(&EventRandomMissionListViewItemDraw_TypeInfo, item);
    sub_B2C35C(&LocalizationManager_TypeInfo, v9);
    sub_B2C35C(&MissionListViewItemDraw_TypeInfo, v10);
    sub_B2C35C(&NetworkManager_TypeInfo, v11);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v12);
    sub_B2C35C(&StringLiteral_13411/*"TIME_REST_TIMEOVER"*/, v13);
    byte_4188746 = 1;
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
      sub_B2C434(gameObject, v14);
    }
    if ( mode )
    {
      gameObject = (UnityEngine_GameObject_o *)this->fields.resTimeLb;
      if ( !gameObject )
        goto LABEL_48;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_48;
      if ( UnityEngine_GameObject__get_activeSelf(gameObject, 0LL) )
      {
        gameObject = (UnityEngine_GameObject_o *)MissionListViewItem__get_EventMissionEntity(
                                                   (MissionListViewItem_o *)item,
                                                   0LL);
        if ( !this->fields.resTimeLb )
          goto LABEL_48;
        v16 = gameObject;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.resTimeLb, 0LL);
        if ( !gameObject )
          goto LABEL_48;
        if ( UnityEngine_GameObject__get_activeSelf(gameObject, 0LL) )
        {
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          }
          gameObject = (UnityEngine_GameObject_o *)NetworkManager__getTime(0LL);
          oldTime = this->fields.oldTime;
          v18 = (int64_t)gameObject;
          v19 = MissionListViewItemDraw_TypeInfo;
          if ( (BYTE3(MissionListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !MissionListViewItemDraw_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(MissionListViewItemDraw_TypeInfo);
            v19 = MissionListViewItemDraw_TypeInfo;
          }
          if ( v18 - oldTime >= v19->static_fields->TIME_UPDATE_ITVL_SEC )
          {
            if ( !v16 )
              goto LABEL_48;
            resTimeLb = this->fields.resTimeLb;
            if ( this->fields.isAchiveTime )
            {
              klass = (int64_t)v16[3].klass;
              if ( (BYTE3(EventRandomMissionListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !EventRandomMissionListViewItemDraw_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(EventRandomMissionListViewItemDraw_TypeInfo);
              }
              gameObject = (UnityEngine_GameObject_o *)EventRandomMissionListViewItemDraw__GetAchiveTimeText(klass, v14);
            }
            else
            {
              v22 = *(_QWORD *)&v16[2].fields.m_CachedPtr;
              if ( (BYTE3(EventRandomMissionListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !EventRandomMissionListViewItemDraw_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(EventRandomMissionListViewItemDraw_TypeInfo);
              }
              gameObject = (UnityEngine_GameObject_o *)EventRandomMissionListViewItemDraw__GetRestTimeText(v22, v14);
            }
            v14 = (const MethodInfo *)gameObject;
            if ( !resTimeLb )
              goto LABEL_48;
            UILabel__set_text(resTimeLb, (System_String_o *)gameObject, 0LL);
            this->fields.oldTime = v18;
            v23 = *(_QWORD *)&v16[2].fields.m_CachedPtr;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            RestTime = LocalizationManager__GetRestTime(v23, 0LL);
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_13411/*"TIME_REST_TIMEOVER"*/,
                                                       0LL);
            if ( !RestTime )
              goto LABEL_48;
            if ( System_String__Equals_44292872(RestTime, (System_String_o *)gameObject, 0LL) )
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
                goto LABEL_48;
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
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(rewardBackSprite, 0LL, 0LL) && this->fields.isMultipleReward )
        {
          gameObject = (UnityEngine_GameObject_o *)this->fields.rewardBackSprite;
          if ( !gameObject )
            goto LABEL_48;
          ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *, long double))gameObject->klass[1]._1.castClass)(
            gameObject,
            gameObject->klass[1]._1.declaringType,
            v5);
        }
      }
    }
  }
}