void ExRoomMissionListViewItemDraw___ctor(ExRoomMissionListViewItemDraw_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_5932E0C & 1) == 0 )
  {
    sub_21FFC50(&MissionListViewItemDraw_TypeInfo);
    byte_5932E0C = 1;
  }
  if ( !*(&MissionListViewItemDraw_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(MissionListViewItemDraw_TypeInfo, method, v2);
  MissionListViewItemDraw___ctor((MissionListViewItemDraw_o *)this, 0);
}


void ExRoomMissionListViewItemDraw__ApplyRewardItemIcon(
        ExRoomMissionListViewItemDraw_o *this,
        ExRoomMissionListViewItem_RewardIconDrawInfo_o *drawInfo,
        bool resetAlpha,
        const MethodInfo *method)
{
  ItemIconComponent_o *itemIcon; // x0

  itemIcon = this->fields.itemIcon;
  if ( drawInfo->fields._ShouldUseSetItemImage_k__BackingField )
  {
    if ( !itemIcon )
      goto LABEL_9;
    ItemIconComponent__SetItemImage_47939376(
      itemIcon,
      drawInfo->fields._ItemImageId_k__BackingField,
      drawInfo->fields._Count_k__BackingField,
      0);
    if ( resetAlpha )
      goto LABEL_4;
  }
  else
  {
    if ( !itemIcon )
      goto LABEL_9;
    ItemIconComponent__SetGift_47936840(
      itemIcon,
      drawInfo->fields._GiftType_k__BackingField,
      drawInfo->fields._ObjectId_k__BackingField,
      drawInfo->fields._Count_k__BackingField,
      0,
      0);
    if ( resetAlpha )
    {
LABEL_4:
      itemIcon = this->fields.itemIcon;
      if ( itemIcon )
      {
        ItemIconComponent__SetAlpha(itemIcon, 1.0, 0);
        return;
      }
LABEL_9:
      sub_21FFECC(itemIcon, drawInfo);
    }
  }
}


void ExRoomMissionListViewItemDraw__ChangeNextRewardIcon(
        ExRoomMissionListViewItemDraw_o *this,
        ExRoomMissionListViewItem_o *item,
        ExRoomMissionListViewManager_o *manager,
        const MethodInfo *method)
{
  _BOOL4 isMultipleReward; // w8
  ExRoomMissionListViewItem_o *v5; // x20
  struct GiftEntity_array *rewardDisplayGiftEntities; // x8
  int32_t AlphaAnimCnt; // w21
  const MethodInfo *v9; // x2
  GiftEntity_o *RewardEntityForDisplay; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  const MethodInfo *v17; // x2
  const MethodInfo *v18; // x3
  ExRoomMissionListViewItem_RewardIconDrawInfo_o v19; // [xsp+0h] [xbp-50h] BYREF
  ExRoomMissionListViewItem_RewardIconDrawInfo_o v20; // [xsp+18h] [xbp-38h] BYREF

  isMultipleReward = this->fields.isMultipleReward;
  memset(&v20, 0, sizeof(v20));
  if ( isMultipleReward )
  {
    v5 = item;
    if ( !item )
      goto LABEL_8;
    rewardDisplayGiftEntities = item->fields.rewardDisplayGiftEntities;
    if ( rewardDisplayGiftEntities )
    {
      item = (ExRoomMissionListViewItem_o *)LODWORD(rewardDisplayGiftEntities->max_length);
      if ( (int)item >= 1 )
      {
        if ( manager )
        {
          AlphaAnimCnt = MissionListViewManager__GetAlphaAnimCnt((MissionListViewManager_o *)manager, (int32_t)item, 0);
          RewardEntityForDisplay = ExRoomMissionListViewItem__GetRewardEntityForDisplay(v5, AlphaAnimCnt, v9);
          v5->fields.currentDisplayRewardGiftEntity = RewardEntityForDisplay;
          sub_21FFBF4(
            (MissionNaviTransitionBoardItem_o *)&v5->fields.currentDisplayRewardGiftEntity,
            (int32_t)RewardEntityForDisplay,
            v11,
            v12,
            v13,
            v14,
            v15,
            v16);
          ExRoomMissionListViewItem__GetRewardIconDrawInfo(&v20, v5, AlphaAnimCnt, v17);
          v19 = v20;
          ExRoomMissionListViewItemDraw__ApplyRewardItemIcon(this, &v19, 0, v18);
          return;
        }
LABEL_8:
        sub_21FFECC(this, item);
      }
    }
  }
}


void ExRoomMissionListViewItemDraw__InitDispResTime(
        ExRoomMissionListViewItemDraw_o *this,
        MissionListViewItem_o *missionListviewItem,
        const MethodInfo *method)
{
  __int64 naturalAligment; // x10
  __int64 v6; // x1
  __int64 v7; // x2
  int64_t Time; // x0
  struct EventMissionEntity_o *eventMissionEnt; // x8
  int64_t v10; // x21
  int32_t progStatus; // w9
  _BOOL8 v12; // x1
  int64_t endedAt; // x8
  bool v14; // cc
  bool v15; // w8
  _BOOL4 v16; // w8
  int64_t v17; // x8
  bool v18; // w8
  UnityEngine_GameObject_o *timeOverInfo; // x0

  if ( (byte_5932E07 & 1) == 0 )
  {
    sub_21FFC50(&ExRoomMissionListViewItem_TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5932E07 = 1;
  }
  if ( missionListviewItem )
  {
    naturalAligment = ExRoomMissionListViewItem_TypeInfo->_2.naturalAligment;
    if ( missionListviewItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment
      && (ExRoomMissionListViewItem_c *)missionListviewItem->klass->_2.typeHierarchy[naturalAligment - 1] == ExRoomMissionListViewItem_TypeInfo
      && MissionListViewItem__get_EventMissionEntity(missionListviewItem, 0) )
    {
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6, v7);
      Time = NetworkManager__getTime(0);
      eventMissionEnt = missionListviewItem->fields.eventMissionEnt;
      v10 = Time;
      if ( !eventMissionEnt )
        goto LABEL_14;
      progStatus = missionListviewItem->fields.progStatus;
      if ( progStatus == 4 )
        goto LABEL_14;
      if ( progStatus != 3 )
      {
        endedAt = eventMissionEnt->fields.endedAt;
        v14 = endedAt <= Time;
        v15 = endedAt > Time;
        v12 = v14;
        v16 = v15;
        this->fields.isDispTime = v16;
        if ( v16 )
          v17 = 0;
        else
          v17 = Time;
        this->fields.oldTime = v17;
        goto LABEL_25;
      }
      if ( eventMissionEnt->fields.startedAt <= Time )
      {
        v12 = 0;
        v18 = eventMissionEnt->fields.closedAt >= Time;
        this->fields.isDispTime = v18;
        if ( v18 )
        {
          this->fields.oldTime = 0;
          goto LABEL_25;
        }
      }
      else
      {
LABEL_14:
        v12 = 0;
        this->fields.isDispTime = 0;
      }
      this->fields.oldTime = Time;
LABEL_25:
      timeOverInfo = this->fields.timeOverInfo;
      if ( !timeOverInfo )
        sub_21FFECC(0, v12);
      UnityEngine_GameObject__SetActive(timeOverInfo, v12, 0);
      BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.resTimeLb, this->fields.isDispTime, 0);
      ((void (__fastcall *)(ExRoomMissionListViewItemDraw_o *, MissionListViewItem_o *, int64_t, const MethodInfo *))this->klass->vtable._9_UpdateDispResTime.methodPtr)(
        this,
        missionListviewItem,
        v10,
        this->klass->vtable._9_UpdateDispResTime.method);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void ExRoomMissionListViewItemDraw__OnChangeAlphaAnim(
        ExRoomMissionListViewItemDraw_o *this,
        ExRoomMissionListViewItem_o *item,
        int32_t mode,
        ExRoomMissionListViewManager_o *manager,
        const MethodInfo *method)
{
  const MethodInfo *v9; // x3

  if ( (byte_5932E0B & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5932E0B = 1;
  }
  if ( item && mode )
  {
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, *(_QWORD *)&mode);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)manager, 0, 0) )
      ExRoomMissionListViewItemDraw__ChangeNextRewardIcon(this, item, manager, v9);
  }
}


bool ExRoomMissionListViewItemDraw__SetItem(
        ExRoomMissionListViewItemDraw_o *this,
        MissionListViewItem_o *missionListViewItem,
        int32_t mode,
        ListViewManager_o *listViewManager,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 naturalAligment; // x10
  __int64 v12; // x10
  const MethodInfo *v13; // x3

  if ( (byte_5932E06 & 1) == 0 )
  {
    sub_21FFC50(&ExRoomMissionListViewItem_TypeInfo);
    sub_21FFC50(&ExRoomMissionListViewManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5932E06 = 1;
  }
  if ( !MissionListViewItemDraw__SetItem(
          (MissionListViewItemDraw_o *)this,
          missionListViewItem,
          mode,
          listViewManager,
          0) )
    return 0;
  if ( !mode )
    return 1;
  if ( !missionListViewItem )
  {
LABEL_8:
    if ( !listViewManager )
      goto LABEL_15;
    goto LABEL_13;
  }
  naturalAligment = ExRoomMissionListViewItem_TypeInfo->_2.naturalAligment;
  if ( missionListViewItem->klass->_2.naturalAligment < (unsigned int)naturalAligment )
  {
    missionListViewItem = 0;
    goto LABEL_8;
  }
  if ( (ExRoomMissionListViewItem_c *)missionListViewItem->klass->_2.typeHierarchy[naturalAligment - 1] != ExRoomMissionListViewItem_TypeInfo )
    missionListViewItem = 0;
  if ( !listViewManager )
  {
LABEL_15:
    if ( !missionListViewItem )
      return 0;
    goto LABEL_20;
  }
LABEL_13:
  v12 = ExRoomMissionListViewManager_TypeInfo->_2.naturalAligment;
  if ( listViewManager->klass->_2.naturalAligment < (unsigned int)v12 )
  {
    listViewManager = 0;
    goto LABEL_15;
  }
  if ( (ExRoomMissionListViewManager_c *)listViewManager->klass->_2.typeHierarchy[v12 - 1] != ExRoomMissionListViewManager_TypeInfo )
    listViewManager = 0;
  if ( !missionListViewItem )
    return 0;
LABEL_20:
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9, v10);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)listViewManager, 0, 0) )
    return 0;
  ExRoomMissionListViewItemDraw__SetRewardItemIcon(
    this,
    (ExRoomMissionListViewItem_o *)missionListViewItem,
    (ExRoomMissionListViewManager_o *)listViewManager,
    v13);
  return 1;
}


void ExRoomMissionListViewItemDraw__SetRewardItemIcon(
        ExRoomMissionListViewItemDraw_o *this,
        ExRoomMissionListViewItem_o *item,
        ExRoomMissionListViewManager_o *manager,
        const MethodInfo *method)
{
  struct GiftEntity_array *rewardDisplayGiftEntities; // x9
  int32_t max_length; // w22
  UnityEngine_Object_c *v9; // x0
  int v10; // w8
  _BOOL8 v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x3
  int32_t AlphaAnimCnt; // w23
  struct GiftEntity_o *RewardEntityForDisplay; // x0
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  const MethodInfo *v23; // x2
  int32_t Count_k__BackingField; // w8
  char ShouldUseSetItemImage_k__BackingField; // w9
  ExRoomMissionListViewItem_RewardIconDrawInfo_o v26; // [xsp+0h] [xbp-70h] BYREF
  ExRoomMissionListViewItem_RewardIconDrawInfo_o v27; // [xsp+18h] [xbp-58h] BYREF
  __int16 v28; // [xsp+2Ch] [xbp-44h]
  bool v29; // [xsp+2Eh] [xbp-42h]
  __int64 v30; // [xsp+30h] [xbp-40h]
  int32_t ObjectId_k__BackingField; // [xsp+38h] [xbp-38h]

  if ( (byte_5932E0A & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5932E0A = 1;
  }
  ObjectId_k__BackingField = 0;
  v30 = 0;
  v28 = 0;
  v29 = 0;
  if ( item && (rewardDisplayGiftEntities = item->fields.rewardDisplayGiftEntities) != 0 )
    max_length = rewardDisplayGiftEntities->max_length;
  else
    max_length = 0;
  v9 = UnityEngine_Object_TypeInfo;
  v10 = *(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1);
  this->fields.isMultipleReward = max_length > 1;
  if ( !v10 )
    j_il2cpp_runtime_class_init_0(v9, item, manager);
  v11 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)manager, 0, 0);
  AlphaAnimCnt = 0;
  if ( v11 && max_length >= 1 )
  {
    if ( !manager )
      sub_21FFECC(v11, v12);
    AlphaAnimCnt = MissionListViewManager__GetAlphaAnimCnt((MissionListViewManager_o *)manager, max_length, 0);
  }
  if ( item )
  {
    RewardEntityForDisplay = ExRoomMissionListViewItem__GetRewardEntityForDisplay(item, AlphaAnimCnt, v13);
    item->fields.currentDisplayRewardGiftEntity = RewardEntityForDisplay;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&item->fields.currentDisplayRewardGiftEntity,
      (int32_t)RewardEntityForDisplay,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
    ExRoomMissionListViewItem__GetRewardIconDrawInfo(&v27, item, AlphaAnimCnt, v23);
    v30 = *(_QWORD *)&v27.fields._ItemImageId_k__BackingField;
    Count_k__BackingField = v27.fields._Count_k__BackingField;
    v28 = *(_WORD *)(&v27.fields._ShouldUseSetItemImage_k__BackingField + 1);
    v29 = *(&v27.fields._ShouldUseSetItemImage_k__BackingField + 3);
    ObjectId_k__BackingField = v27.fields._ObjectId_k__BackingField;
    ShouldUseSetItemImage_k__BackingField = v27.fields._ShouldUseSetItemImage_k__BackingField;
  }
  else
  {
    ShouldUseSetItemImage_k__BackingField = 1;
    Count_k__BackingField = -1;
    ObjectId_k__BackingField = 0;
    v30 = 0;
    v28 = 0;
    v29 = 0;
  }
  v26.fields._ShouldUseSetItemImage_k__BackingField = ShouldUseSetItemImage_k__BackingField;
  *(_QWORD *)&v26.fields._ItemImageId_k__BackingField = v30;
  v26.fields._ObjectId_k__BackingField = ObjectId_k__BackingField;
  v26.fields._Count_k__BackingField = Count_k__BackingField;
  *(_WORD *)(&v26.fields._ShouldUseSetItemImage_k__BackingField + 1) = v28;
  *(&v26.fields._ShouldUseSetItemImage_k__BackingField + 3) = v29;
  ExRoomMissionListViewItemDraw__ApplyRewardItemIcon(this, &v26, 1, v14);
}


void ExRoomMissionListViewItemDraw__UpdateDispResTime(
        ExRoomMissionListViewItemDraw_o *this,
        MissionListViewItem_o *missionListViewItem,
        int64_t nowTime,
        const MethodInfo *method)
{
  __int64 naturalAligment; // x10
  UILabel_o *resTimeLb; // x19
  System_String_o *RemainingTimeTextKey; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  struct EventMissionEntity_o *eventMissionEnt; // x8
  System_String_o *v12; // x21
  __int64 v13; // x9
  int64_t v14; // x20
  __int64 v15; // x1
  __int64 v16; // x2
  System_String_o *RestTime; // x20
  System_String_o *TimeText; // x1

  if ( (byte_5932E08 & 1) == 0 )
  {
    sub_21FFC50(&ExRoomMissionListViewItem_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&MissionListViewItemDraw_TypeInfo);
    byte_5932E08 = 1;
  }
  if ( missionListViewItem )
  {
    naturalAligment = ExRoomMissionListViewItem_TypeInfo->_2.naturalAligment;
    if ( missionListViewItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment
      && (ExRoomMissionListViewItem_c *)missionListViewItem->klass->_2.typeHierarchy[naturalAligment - 1] == ExRoomMissionListViewItem_TypeInfo
      && this->fields.isDispTime )
    {
      resTimeLb = this->fields.resTimeLb;
      RemainingTimeTextKey = ExRoomMissionListViewItem__GetRemainingTimeTextKey(
                               (ExRoomMissionListViewItem_o *)missionListViewItem,
                               (const MethodInfo *)missionListViewItem);
      eventMissionEnt = missionListViewItem->fields.eventMissionEnt;
      v12 = RemainingTimeTextKey;
      if ( eventMissionEnt )
      {
        v13 = 64;
        if ( missionListViewItem->fields.progStatus == 3 )
          v13 = 72;
        v14 = *(int64_t *)((char *)&eventMissionEnt->klass + v13);
      }
      else
      {
        v14 = 0;
      }
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v9, v10);
      RestTime = LocalizationManager__GetRestTime(v14, 0);
      if ( !*(&MissionListViewItemDraw_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(MissionListViewItemDraw_TypeInfo, v15, v16);
      TimeText = MissionListViewItemDraw__GetTimeText(v12, RestTime, 0);
      UILabelHelper__SetTextSafely(resTimeLb, TimeText, 0);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void ExRoomMissionListViewItemDraw__UpdateItem(
        ExRoomMissionListViewItemDraw_o *this,
        ExRoomMissionListViewItem_o *item,
        int32_t mode,
        ExRoomMissionListViewManager_o *manager,
        const MethodInfo *method)
{
  UnityEngine_Object_o *resTimeLb; // x22
  __int64 gameObject; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x2
  int64_t v14; // x22
  int64_t oldTime; // x23
  MissionListViewItemDraw_c *v16; // x8

  if ( (byte_5932E09 & 1) == 0 )
  {
    sub_21FFC50(&MissionListViewItemDraw_TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5932E09 = 1;
  }
  if ( item && mode )
  {
    resTimeLb = (UnityEngine_Object_o *)this->fields.resTimeLb;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, *(_QWORD *)&mode);
    gameObject = UnityEngine_Object__op_Inequality(resTimeLb, 0, 0);
    if ( (gameObject & 1) != 0 )
    {
      gameObject = (__int64)this->fields.resTimeLb;
      if ( !gameObject )
        goto LABEL_20;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_20;
      gameObject = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)gameObject, 0);
      if ( (gameObject & 1) != 0 )
      {
        if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v11, v12);
        gameObject = NetworkManager__getTime(0);
        v14 = gameObject;
        oldTime = this->fields.oldTime;
        v16 = MissionListViewItemDraw_TypeInfo;
        if ( !*(&MissionListViewItemDraw_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(MissionListViewItemDraw_TypeInfo, v11, v13);
          v16 = MissionListViewItemDraw_TypeInfo;
        }
        if ( v14 - oldTime >= v16->static_fields->TIME_UPDATE_ITVL_SEC )
        {
          gameObject = ((__int64 (__fastcall *)(ExRoomMissionListViewItemDraw_o *, ExRoomMissionListViewItem_o *, int64_t, const MethodInfo *))this->klass->vtable._9_UpdateDispResTime.methodPtr)(
                         this,
                         item,
                         v14,
                         this->klass->vtable._9_UpdateDispResTime.method);
          this->fields.oldTime = v14;
        }
      }
    }
    if ( manager )
    {
      MissionListViewItemDraw__SetRewardIconAlpha((MissionListViewItemDraw_o *)this, manager->fields.alphaAnimNow, 0);
      return;
    }
LABEL_20:
    sub_21FFECC(gameObject, v11);
  }
}