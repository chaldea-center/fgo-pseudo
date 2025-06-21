void __fastcall MasterMissionListViewItemDraw___ctor(MasterMissionListViewItemDraw_o *this, const MethodInfo *method)
{
  if ( (byte_4B1F6EB & 1) == 0 )
  {
    sub_1BCAFF8(&MissionListViewItemDraw_TypeInfo, method);
    byte_4B1F6EB = 1;
  }
  if ( !MissionListViewItemDraw_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MissionListViewItemDraw_TypeInfo);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall MasterMissionListViewItemDraw__ChangeNextRewardIcon(
        MasterMissionListViewItemDraw_o *this,
        MasterMissionListViewManager_o *manager,
        const MethodInfo *method)
{
  struct GiftEntity_array *giftEntityList; // x8
  il2cpp_array_size_t max_length; // w10
  int v5; // w9
  GiftEntity_o *v6; // x8
  int num; // w9
  int32_t v8; // w2
  int32_t v9; // w3

  if ( !this->fields.isMultipleReward )
    return;
  giftEntityList = this->fields.giftEntityList;
  if ( !giftEntityList || !manager )
    goto LABEL_18;
  max_length = giftEntityList->max_length;
  v5 = manager->fields.alphaAnimCnt % (int)max_length;
  if ( v5 >= max_length )
    sub_1BCB25C(this, manager, method);
  v6 = giftEntityList->m_Items[v5];
  if ( !v6 )
    goto LABEL_18;
  manager = (MasterMissionListViewManager_o *)(unsigned int)v6->fields.prioredIconId;
  this = (MasterMissionListViewItemDraw_o *)this->fields.itemIcon;
  num = v6->fields.num;
  if ( (int)manager >= 1 )
  {
    if ( this )
    {
      if ( num <= 1 )
        v8 = -1;
      else
        v8 = v6->fields.num;
      ItemIconComponent__SetItemImage_40110424((ItemIconComponent_o *)this, (int32_t)manager, v8, 0LL);
      return;
    }
LABEL_18:
    sub_1BCB254(this, manager);
  }
  if ( !this )
    goto LABEL_18;
  if ( num <= 1 )
    v9 = -1;
  else
    v9 = v6->fields.num;
  ItemIconComponent__SetGift_40107980((ItemIconComponent_o *)this, v6->fields.type, v6->fields.objectId, v9, 0, 0LL);
}


void __fastcall MasterMissionListViewItemDraw__InitDispResTime(
        MasterMissionListViewItemDraw_o *this,
        MissionListViewItem_o *missionListviewItem,
        const MethodInfo *method)
{
  MissionListViewItem_o *v3; // x20
  __int64 v5; // x1
  __int64 methodPtr_low; // x10
  UnityEngine_GameObject_o *timeOverInfo; // x0
  int klass; // w8
  struct EventMissionEntity_o *v9; // x8
  __int64 closedAt; // x8
  struct EventMissionEntity_o *eventMissionEnt; // x8
  _BOOL4 v12; // w8
  bool v13; // w21

  v3 = missionListviewItem;
  if ( (byte_4B1F6E7 & 1) == 0 )
  {
    sub_1BCAFF8(&MasterMissionListViewItem_TypeInfo, missionListviewItem);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v5);
    byte_4B1F6E7 = 1;
  }
  if ( v3 )
  {
    methodPtr_low = LOBYTE(MasterMissionListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v3->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
      && (MasterMissionListViewItem_c *)v3->klass->_2.typeHierarchy[methodPtr_low - 1] == MasterMissionListViewItem_TypeInfo )
    {
      if ( v3->fields.progStatus == 4 )
      {
        timeOverInfo = this->fields.timeOverInfo;
        this->fields.isDispTime = 0;
        if ( timeOverInfo )
        {
          UnityEngine_GameObject__SetActive(timeOverInfo, 0, 0LL);
          timeOverInfo = (UnityEngine_GameObject_o *)this->fields.resTimeLb;
          if ( timeOverInfo )
          {
            timeOverInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)timeOverInfo, 0LL);
            if ( timeOverInfo )
            {
              LOBYTE(missionListviewItem) = 0;
LABEL_38:
              UnityEngine_GameObject__SetActive(timeOverInfo, (bool)missionListviewItem, 0LL);
              return;
            }
          }
        }
LABEL_39:
        sub_1BCB254(timeOverInfo, missionListviewItem);
      }
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      timeOverInfo = (UnityEngine_GameObject_o *)NetworkManager__getTime(0LL);
      klass = (int)v3[1].klass;
      if ( klass == 3 )
      {
        eventMissionEnt = v3->fields.eventMissionEnt;
        if ( !eventMissionEnt )
          goto LABEL_39;
        if ( (__int64)timeOverInfo >= eventMissionEnt->fields.startedAt )
        {
          closedAt = eventMissionEnt->fields.closedAt;
          goto LABEL_25;
        }
      }
      else
      {
        if ( klass != 1 )
        {
          v13 = 0;
          if ( v3->fields.progStatus != 3 )
            this->fields.isDispTime = 1;
LABEL_32:
          ((void (__fastcall *)(MasterMissionListViewItemDraw_o *, MissionListViewItem_o *, UnityEngine_GameObject_o *, Il2CppMethodPointer))this->klass->vtable._9_UpdateDispResTime.method)(
            this,
            v3,
            timeOverInfo,
            this->klass->vtable._10_SetInput.methodPtr);
          timeOverInfo = this->fields.timeOverInfo;
          if ( timeOverInfo )
          {
            UnityEngine_GameObject__SetActive(timeOverInfo, v13, 0LL);
            timeOverInfo = (UnityEngine_GameObject_o *)this->fields.resTimeLb;
            if ( timeOverInfo )
            {
              timeOverInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)timeOverInfo, 0LL);
              missionListviewItem = (MissionListViewItem_o *)(this->fields.isDispTime
                                                           || (unsigned __int64)(v3->fields.progStatus == 3));
              if ( timeOverInfo )
                goto LABEL_38;
            }
          }
          goto LABEL_39;
        }
        v9 = v3->fields.eventMissionEnt;
        if ( !v9 )
          goto LABEL_39;
        if ( (__int64)timeOverInfo >= v9->fields.startedAt )
        {
          closedAt = v9->fields.endedAt;
LABEL_25:
          v12 = (__int64)timeOverInfo < closedAt;
          goto LABEL_26;
        }
      }
      v12 = 0;
LABEL_26:
      if ( !this )
        goto LABEL_39;
      this->fields.isDispTime = v12;
      if ( v12 || v3->fields.progStatus == 3 )
      {
        v13 = 0;
        this->fields.oldTime = 0LL;
      }
      else
      {
        v13 = 1;
        v3->fields.isNowMission = 1;
      }
      goto LABEL_32;
    }
  }
}


bool __fastcall MasterMissionListViewItemDraw__IsUseDefaultLockBoard(
        MasterMissionListViewItemDraw_o *this,
        const MethodInfo *method)
{
  return 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterMissionListViewItemDraw__OnChangeAlphaAnim(
        MasterMissionListViewItemDraw_o *this,
        MasterMissionListViewItem_o *item,
        int32_t mode,
        MasterMissionListViewManager_o *manager,
        const MethodInfo *method)
{
  MasterMissionListViewItemDraw__ChangeNextRewardIcon(this, manager, *(const MethodInfo **)&mode);
}


bool __fastcall MasterMissionListViewItemDraw__SetItem(
        MasterMissionListViewItemDraw_o *this,
        MissionListViewItem_o *missionListViewItem,
        int32_t mode,
        ListViewManager_o *listViewManager,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 methodPtr_low; // x10
  int v12; // w24
  MissionListViewItem_o *v13; // x23
  __int64 v14; // x10
  const MethodInfo *v15; // x3

  if ( (byte_4B1F6E6 & 1) == 0 )
  {
    sub_1BCAFF8(&MasterMissionListViewItem_TypeInfo, missionListViewItem);
    sub_1BCAFF8(&MasterMissionListViewManager_TypeInfo, v9);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v10);
    byte_4B1F6E6 = 1;
  }
  if ( missionListViewItem
    && (methodPtr_low = LOBYTE(MasterMissionListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(missionListViewItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low)
    && (MasterMissionListViewItem_c *)missionListViewItem->klass->_2.typeHierarchy[methodPtr_low - 1] == MasterMissionListViewItem_TypeInfo )
  {
    v12 = 1;
    if ( LODWORD(missionListViewItem[1].klass) == 3 )
      missionListViewItem->fields.isChallengeButtonObjectExist = 1;
    v13 = missionListViewItem;
  }
  else
  {
    v12 = 0;
    v13 = 0LL;
  }
  if ( !MissionListViewItemDraw__SetItem(
          (MissionListViewItemDraw_o *)this,
          missionListViewItem,
          mode,
          listViewManager,
          method) )
    return 0;
  if ( !mode )
    return 1;
  if ( !listViewManager )
    goto LABEL_12;
  v14 = LOBYTE(MasterMissionListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(listViewManager->klass->vtable._0_Equals.methodPtr) < (unsigned int)v14 )
  {
    listViewManager = 0LL;
LABEL_12:
    if ( !v12 )
      return 0;
    goto LABEL_20;
  }
  if ( (MasterMissionListViewManager_c *)listViewManager->klass->_2.typeHierarchy[v14 - 1] != MasterMissionListViewManager_TypeInfo )
    listViewManager = 0LL;
  if ( !v12 )
    return 0;
LABEL_20:
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)listViewManager, 0LL, 0LL) )
    return 0;
  MasterMissionListViewItemDraw__SetRewardItemIcon(
    this,
    (MasterMissionListViewItem_o *)v13,
    (MasterMissionListViewManager_o *)listViewManager,
    v15);
  return 1;
}


void __fastcall MasterMissionListViewItemDraw__SetRewardItemIcon(
        MasterMissionListViewItemDraw_o *this,
        MasterMissionListViewItem_o *item,
        MasterMissionListViewManager_o *manager,
        const MethodInfo *method)
{
  MasterMissionListViewItem_o *v5; // x19
  MasterMissionListViewItemDraw_o *v6; // x20
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct EventMissionEntity_o *eventMissionEnt; // x8
  struct EventMissionEntity_o *v11; // x8
  int32_t giftId; // w22
  GiftEntity_array *IconGiftEntities; // x0
  struct GiftEntity_array **p_giftEntityList; // x22
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  __int64 v17; // x8
  struct EventMissionEntity_o *v18; // x8
  System_String_o *v19; // x23
  __int64 v20; // x2
  struct GiftEntity_array *v21; // x8
  unsigned int max_length; // w10
  int v23; // w9
  GiftEntity_o *v24; // x8
  int v25; // w9
  int32_t v26; // w2
  struct GiftEntity_array *v27; // x8
  GiftEntity_o *v28; // x8
  ItemIconComponent_o *itemIcon; // x21
  int num; // w8
  int32_t v31; // w2
  int32_t Type; // w0
  int32_t rewardObjectId; // w22
  int32_t v34; // w23
  const MethodInfo *v35; // x1
  struct EventMissionEntity_o *v36; // x8
  int32_t iconId; // w1
  int32_t v38; // w3

  v5 = item;
  v6 = this;
  if ( (byte_4B1F6E8 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_EventMissionAddMaster___, item);
    sub_1BCAFF8(&MissionInfoMaker_TypeInfo, v7);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v8);
    this = (MasterMissionListViewItemDraw_o *)sub_1BCAFF8(
                                                &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                                v9);
    byte_4B1F6E8 = 1;
  }
  if ( !v5 )
    goto LABEL_63;
  eventMissionEnt = v5->fields.eventMissionEnt;
  if ( !eventMissionEnt )
    goto LABEL_63;
  if ( eventMissionEnt->fields.rewardType != 1 )
    goto LABEL_49;
  this = (MasterMissionListViewItemDraw_o *)MasterMissionListViewItem__get_IsHideReward(v5, (const MethodInfo *)item);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    this = (MasterMissionListViewItemDraw_o *)v6->fields.itemIcon;
    v6->fields.isMultipleReward = 0;
    if ( !this )
      goto LABEL_63;
    ItemIconComponent__SetItemImage((ItemIconComponent_o *)this, 99, 0LL);
    goto LABEL_49;
  }
  v11 = v5->fields.eventMissionEnt;
  if ( !v11 )
    goto LABEL_63;
  giftId = v11->fields.giftId;
  if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
  IconGiftEntities = MissionInfoMaker__GetIconGiftEntities(giftId, (const MethodInfo *)item);
  v6->fields.giftEntityList = IconGiftEntities;
  p_giftEntityList = &v6->fields.giftEntityList;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v6->fields.giftEntityList, (int32_t)IconGiftEntities, v15, v16);
  if ( !v6->fields.giftEntityList )
    goto LABEL_63;
  v17 = *(_QWORD *)&v6->fields.giftEntityList->max_length;
  if ( !v17 )
    return;
  v6->fields.isMultipleReward = (int)v17 > 1;
  this = (MasterMissionListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_63;
  this = (MasterMissionListViewItemDraw_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)this,
                                              (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_EventMissionAddMaster___);
  v18 = v5->fields.eventMissionEnt;
  if ( !v18 || !this )
    goto LABEL_63;
  v19 = EventMissionAddMaster__GetEventMissionChangeRewardIcon(
          (EventMissionAddMaster_o *)this,
          v18->fields.id,
          v18->fields.missionTargetId,
          0,
          0LL);
  if ( !System_String__IsNullOrEmpty(v19, 0LL) )
  {
    v6->fields.isMultipleReward = 0;
    v5->fields.isHideRewardDetail = 1;
LABEL_33:
    this = (MasterMissionListViewItemDraw_o *)System_String__IsNullOrEmpty(v19, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v27 = *p_giftEntityList;
      if ( !*p_giftEntityList )
        goto LABEL_63;
      if ( !v27->max_length )
        goto LABEL_64;
      v28 = v27->m_Items[0];
      if ( !v28 )
        goto LABEL_63;
      item = (MasterMissionListViewItem_o *)(unsigned int)v28->fields.prioredIconId;
      itemIcon = v6->fields.itemIcon;
      if ( (int)item < 1 )
      {
        Type = MissionListViewItem__get_Type((MissionListViewItem_o *)v5, (const MethodInfo *)item);
        rewardObjectId = v5->fields.rewardObjectId;
        v34 = Type;
        this = (MasterMissionListViewItemDraw_o *)MissionListViewItem__get_DisplayGiftNum(
                                                    (MissionListViewItem_o *)v5,
                                                    v35);
        if ( !itemIcon )
          goto LABEL_63;
        ItemIconComponent__SetGift_40107980(itemIcon, v34, rewardObjectId, (int32_t)this, 0, 0LL);
      }
      else
      {
        if ( !itemIcon )
          goto LABEL_63;
        num = v28->fields.num;
        if ( num <= 1 )
          v31 = -1;
        else
          v31 = num;
        ItemIconComponent__SetItemImage_40110424(v6->fields.itemIcon, (int32_t)item, v31, 0LL);
      }
    }
    else
    {
      this = (MasterMissionListViewItemDraw_o *)v6->fields.itemIcon;
      if ( !this )
        goto LABEL_63;
      ItemIconComponent__SetItemImageByName((ItemIconComponent_o *)this, v19, 0LL);
    }
    this = (MasterMissionListViewItemDraw_o *)v6->fields.itemIcon;
    if ( !this )
      goto LABEL_63;
    ItemIconComponent__SetAlpha((ItemIconComponent_o *)this, 1.0, 0LL);
    goto LABEL_49;
  }
  if ( !v6->fields.isMultipleReward )
    goto LABEL_33;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (MasterMissionListViewItemDraw_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)manager, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_49;
  v21 = *p_giftEntityList;
  if ( !*p_giftEntityList || !manager )
    goto LABEL_63;
  max_length = v21->max_length;
  v23 = manager->fields.alphaAnimCnt % (int)max_length;
  if ( v23 >= max_length )
LABEL_64:
    sub_1BCB25C(this, item, v20);
  v24 = v21->m_Items[v23];
  if ( !v24 )
    goto LABEL_63;
  item = (MasterMissionListViewItem_o *)(unsigned int)v24->fields.prioredIconId;
  this = (MasterMissionListViewItemDraw_o *)v6->fields.itemIcon;
  v25 = v24->fields.num;
  if ( (int)item < 1 )
  {
    if ( !this )
      goto LABEL_63;
    if ( v25 <= 1 )
      v38 = -1;
    else
      v38 = v24->fields.num;
    ItemIconComponent__SetGift_40107980(
      (ItemIconComponent_o *)this,
      v24->fields.type,
      v24->fields.objectId,
      v38,
      0,
      0LL);
  }
  else
  {
    if ( !this )
      goto LABEL_63;
    if ( v25 <= 1 )
      v26 = -1;
    else
      v26 = v24->fields.num;
    ItemIconComponent__SetItemImage_40110424((ItemIconComponent_o *)this, (int32_t)item, v26, 0LL);
  }
LABEL_49:
  v36 = v5->fields.eventMissionEnt;
  if ( !v36 )
    goto LABEL_63;
  if ( v36->fields.rewardType == 3 )
  {
    if ( MasterMissionListViewItem__get_IsHideReward(v5, (const MethodInfo *)item) )
    {
      this = (MasterMissionListViewItemDraw_o *)v6->fields.itemIcon;
      v6->fields.isMultipleReward = 0;
      if ( this )
      {
        iconId = 99;
LABEL_57:
        ItemIconComponent__SetItemImage((ItemIconComponent_o *)this, iconId, 0LL);
        return;
      }
    }
    else
    {
      this = (MasterMissionListViewItemDraw_o *)v6->fields.itemIcon;
      if ( this )
      {
        iconId = v5->fields.iconId;
        goto LABEL_57;
      }
    }
LABEL_63:
    sub_1BCB254(this, item);
  }
}


void __fastcall MasterMissionListViewItemDraw__UpdateDispResTime(
        MasterMissionListViewItemDraw_o *this,
        MissionListViewItem_o *missionListViewItem,
        int64_t nowTime,
        const MethodInfo *method)
{
  MasterMissionListViewItemDraw_o *v5; // x19
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 methodPtr_low; // x10
  int32_t progStatus; // w21
  int klass; // w8
  UILabel_o *resTimeLb; // x19
  int64_t NextDayStartTime; // x20
  System_String_o *v17; // x0
  const MethodInfo *v18; // x2
  struct EventMissionEntity_o *eventMissionEnt; // x8
  int64_t closedAt; // x20
  System_String_o *RestTime; // x20
  __int64 *v22; // x8
  int64_t endedAt; // x20

  v5 = this;
  if ( (byte_4B1F6E9 & 1) == 0 )
  {
    sub_1BCAFF8(&LocalizationManager_TypeInfo, missionListViewItem);
    sub_1BCAFF8(&MasterMissionListViewItem_TypeInfo, v6);
    sub_1BCAFF8(&MissionListViewItemDraw_TypeInfo, v7);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v8);
    sub_1BCAFF8(&StringLiteral_13311/*"TIME_REST_QUEST"*/, v9);
    sub_1BCAFF8(&StringLiteral_9264/*"NO_TIME_INFO"*/, v10);
    this = (MasterMissionListViewItemDraw_o *)sub_1BCAFF8(&StringLiteral_13299/*"TIME_REST_ACHIVE"*/, v11);
    byte_4B1F6E9 = 1;
  }
  if ( missionListViewItem )
  {
    methodPtr_low = LOBYTE(MasterMissionListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(missionListViewItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
      && (MasterMissionListViewItem_c *)missionListViewItem->klass->_2.typeHierarchy[methodPtr_low - 1] == MasterMissionListViewItem_TypeInfo )
    {
      progStatus = missionListViewItem->fields.progStatus;
      if ( progStatus != 4 )
      {
        klass = (int)missionListViewItem[1].klass;
        if ( klass == 3 || klass == 1 )
        {
          eventMissionEnt = missionListViewItem->fields.eventMissionEnt;
          if ( !eventMissionEnt )
            goto LABEL_36;
          resTimeLb = v5->fields.resTimeLb;
          if ( progStatus == 3 )
          {
            closedAt = eventMissionEnt->fields.closedAt;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            RestTime = LocalizationManager__GetRestTime(closedAt, 0LL);
            if ( !MissionListViewItemDraw_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(MissionListViewItemDraw_TypeInfo);
            goto LABEL_28;
          }
          endedAt = eventMissionEnt->fields.endedAt;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          RestTime = LocalizationManager__GetRestTime(endedAt, 0LL);
          if ( !MissionListViewItemDraw_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(MissionListViewItemDraw_TypeInfo);
        }
        else
        {
          if ( klass )
          {
            resTimeLb = v5->fields.resTimeLb;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v17 = LocalizationManager__Get((System_String_o *)StringLiteral_9264/*"NO_TIME_INFO"*/, 0LL);
          }
          else
          {
            resTimeLb = v5->fields.resTimeLb;
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            NextDayStartTime = NetworkManager__getNextDayStartTime(0LL);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v17 = LocalizationManager__GetRestTime(NextDayStartTime, 0LL);
          }
          RestTime = v17;
          if ( !MissionListViewItemDraw_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(MissionListViewItemDraw_TypeInfo);
          if ( progStatus == 3 )
          {
LABEL_28:
            v22 = &StringLiteral_13299/*"TIME_REST_ACHIVE"*/;
            goto LABEL_34;
          }
        }
        v22 = &StringLiteral_13311/*"TIME_REST_QUEST"*/;
LABEL_34:
        this = (MasterMissionListViewItemDraw_o *)MissionListViewItemDraw__GetTimeText(
                                                    (System_String_o *)*v22,
                                                    RestTime,
                                                    v18);
        if ( resTimeLb )
        {
          UILabel__set_text(resTimeLb, (System_String_o *)this, 0LL);
          return;
        }
LABEL_36:
        sub_1BCB254(this, missionListViewItem);
      }
    }
  }
}


void __fastcall MasterMissionListViewItemDraw__UpdateItem(
        MasterMissionListViewItemDraw_o *this,
        MasterMissionListViewItem_o *item,
        int32_t mode,
        MasterMissionListViewManager_o *manager,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 resTimeLb; // x0
  int64_t oldTime; // x23
  int64_t v12; // x22
  MissionListViewItemDraw_c *v13; // x8

  if ( (byte_4B1F6EA & 1) == 0 )
  {
    sub_1BCAFF8(&MissionListViewItemDraw_TypeInfo, item);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v9);
    byte_4B1F6EA = 1;
  }
  if ( item && mode && item->fields.eventMissionEnt && item->fields.missionType != 2 )
  {
    resTimeLb = (__int64)this->fields.resTimeLb;
    if ( !resTimeLb )
      goto LABEL_19;
    resTimeLb = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)resTimeLb, 0LL);
    if ( !resTimeLb )
      goto LABEL_19;
    resTimeLb = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)resTimeLb, 0LL);
    if ( (resTimeLb & 1) != 0 )
    {
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      resTimeLb = NetworkManager__getTime(0LL);
      oldTime = this->fields.oldTime;
      v12 = resTimeLb;
      v13 = MissionListViewItemDraw_TypeInfo;
      if ( !MissionListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MissionListViewItemDraw_TypeInfo);
        v13 = MissionListViewItemDraw_TypeInfo;
      }
      if ( v12 - oldTime >= v13->static_fields->TIME_UPDATE_ITVL_SEC )
      {
        resTimeLb = ((__int64 (__fastcall *)(MasterMissionListViewItemDraw_o *, MasterMissionListViewItem_o *, int64_t, Il2CppMethodPointer))this->klass->vtable._9_UpdateDispResTime.method)(
                      this,
                      item,
                      v12,
                      this->klass->vtable._10_SetInput.methodPtr);
        this->fields.oldTime = v12;
      }
    }
    if ( !manager )
LABEL_19:
      sub_1BCB254(resTimeLb, item);
    MissionListViewItemDraw__SetRewardIconAlpha(
      (MissionListViewItemDraw_o *)this,
      manager->fields.alphaAnimNow,
      (const MethodInfo *)item);
  }
}