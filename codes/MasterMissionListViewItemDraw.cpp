void MasterMissionListViewItemDraw___ctor(MasterMissionListViewItemDraw_o *this, const MethodInfo *method)
{
  if ( (byte_4C460F7 & 1) == 0 )
  {
    sub_1C37058(&MissionListViewItemDraw_TypeInfo);
    byte_4C460F7 = 1;
  }
  if ( !MissionListViewItemDraw_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MissionListViewItemDraw_TypeInfo);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void MasterMissionListViewItemDraw__ChangeNextRewardIcon(
        MasterMissionListViewItemDraw_o *this,
        MasterMissionListViewManager_o *manager,
        const MethodInfo *method)
{
  struct GiftEntity_array *giftEntityList; // x8
  unsigned int max_length; // w10
  int v5; // w9
  int32_t *v6; // x9
  int32_t v7; // w1
  int v8; // w8
  int64_t v9; // x2
  int64_t v10; // x3

  if ( !this->fields.isMultipleReward )
    return;
  giftEntityList = this->fields.giftEntityList;
  if ( !giftEntityList || !manager )
    goto LABEL_18;
  max_length = giftEntityList->max_length;
  v5 = manager->fields.alphaAnimCnt % (int)max_length;
  if ( v5 >= max_length )
    sub_1C372BC(this);
  v6 = (int32_t *)giftEntityList->m_Items[v5];
  if ( !v6 )
    goto LABEL_18;
  v7 = v6[11];
  this = (MasterMissionListViewItemDraw_o *)this->fields.itemIcon;
  v8 = v6[7];
  if ( v7 >= 1 )
  {
    if ( this )
    {
      if ( v8 <= 1 )
        v9 = -1;
      else
        v9 = (unsigned int)v6[7];
      ItemIconComponent__SetItemImage_40924348((ItemIconComponent_o *)this, v7, v9, 0);
      return;
    }
LABEL_18:
    sub_1C372B4(this);
  }
  if ( !this )
    goto LABEL_18;
  if ( v8 <= 1 )
    v10 = -1;
  else
    v10 = (unsigned int)v6[7];
  ItemIconComponent__SetGift_40921900((ItemIconComponent_o *)this, v6[5], v6[6], v10, 0, 0);
}


void MasterMissionListViewItemDraw__InitDispResTime(
        MasterMissionListViewItemDraw_o *this,
        MissionListViewItem_o *missionListviewItem,
        const MethodInfo *method)
{
  __int64 naturalAligment; // x10
  UnityEngine_GameObject_o *timeOverInfo; // x0
  bool v7; // w1
  int klass; // w8
  struct EventMissionEntity_o *v9; // x8
  int64_t closedAt; // x8
  struct EventMissionEntity_o *eventMissionEnt; // x8
  _BOOL4 v12; // w8
  bool v13; // w21

  if ( (byte_4C460F3 & 1) == 0 )
  {
    sub_1C37058(&MasterMissionListViewItem_TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C460F3 = 1;
  }
  if ( missionListviewItem )
  {
    naturalAligment = MasterMissionListViewItem_TypeInfo->_2.naturalAligment;
    if ( missionListviewItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment
      && (MasterMissionListViewItem_c *)missionListviewItem->klass->_2.typeHierarchy[naturalAligment - 1] == MasterMissionListViewItem_TypeInfo )
    {
      if ( missionListviewItem->fields.progStatus == 4 )
      {
        timeOverInfo = this->fields.timeOverInfo;
        this->fields.isDispTime = 0;
        if ( timeOverInfo )
        {
          UnityEngine_GameObject__SetActive(timeOverInfo, 0, 0);
          timeOverInfo = (UnityEngine_GameObject_o *)this->fields.resTimeLb;
          if ( timeOverInfo )
          {
            timeOverInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)timeOverInfo, 0);
            if ( timeOverInfo )
            {
              v7 = 0;
LABEL_38:
              UnityEngine_GameObject__SetActive(timeOverInfo, v7, 0);
              return;
            }
          }
        }
LABEL_39:
        sub_1C372B4(timeOverInfo);
      }
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      timeOverInfo = (UnityEngine_GameObject_o *)NetworkManager__getTime(0);
      klass = (int)missionListviewItem[1].klass;
      if ( klass == 3 )
      {
        eventMissionEnt = missionListviewItem->fields.eventMissionEnt;
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
          if ( missionListviewItem->fields.progStatus != 3 )
            this->fields.isDispTime = 1;
LABEL_32:
          ((void (__fastcall *)(MasterMissionListViewItemDraw_o *, MissionListViewItem_o *, UnityEngine_GameObject_o *, const MethodInfo *))this->klass->vtable._9_UpdateDispResTime.methodPtr)(
            this,
            missionListviewItem,
            timeOverInfo,
            this->klass->vtable._9_UpdateDispResTime.method);
          timeOverInfo = this->fields.timeOverInfo;
          if ( timeOverInfo )
          {
            UnityEngine_GameObject__SetActive(timeOverInfo, v13, 0);
            timeOverInfo = (UnityEngine_GameObject_o *)this->fields.resTimeLb;
            if ( timeOverInfo )
            {
              timeOverInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)timeOverInfo, 0);
              v7 = this->fields.isDispTime || missionListviewItem->fields.progStatus == 3;
              if ( timeOverInfo )
                goto LABEL_38;
            }
          }
          goto LABEL_39;
        }
        v9 = missionListviewItem->fields.eventMissionEnt;
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
      if ( v12 || missionListviewItem->fields.progStatus == 3 )
      {
        v13 = 0;
        this->fields.oldTime = 0;
      }
      else
      {
        v13 = 1;
        missionListviewItem->fields.isNowMission = 1;
      }
      goto LABEL_32;
    }
  }
}


bool MasterMissionListViewItemDraw__IsUseDefaultLockBoard(
        MasterMissionListViewItemDraw_o *this,
        const MethodInfo *method)
{
  return 0;
}


// local variable allocation has failed, the output may be wrong!
void MasterMissionListViewItemDraw__OnChangeAlphaAnim(
        MasterMissionListViewItemDraw_o *this,
        MasterMissionListViewItem_o *item,
        int32_t mode,
        MasterMissionListViewManager_o *manager,
        const MethodInfo *method)
{
  MasterMissionListViewItemDraw__ChangeNextRewardIcon(this, manager, *(const MethodInfo **)&mode);
}


bool MasterMissionListViewItemDraw__SetItem(
        MasterMissionListViewItemDraw_o *this,
        MissionListViewItem_o *missionListViewItem,
        int32_t mode,
        ListViewManager_o *listViewManager,
        const MethodInfo *method)
{
  __int64 naturalAligment; // x10
  int v10; // w24
  MissionListViewItem_o *v11; // x23
  __int64 v12; // x10
  const MethodInfo *v13; // x3

  if ( (byte_4C460F2 & 1) == 0 )
  {
    sub_1C37058(&MasterMissionListViewItem_TypeInfo);
    sub_1C37058(&MasterMissionListViewManager_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C460F2 = 1;
  }
  if ( missionListViewItem
    && (naturalAligment = MasterMissionListViewItem_TypeInfo->_2.naturalAligment,
        missionListViewItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment)
    && (MasterMissionListViewItem_c *)missionListViewItem->klass->_2.typeHierarchy[naturalAligment - 1] == MasterMissionListViewItem_TypeInfo )
  {
    v10 = 1;
    if ( LODWORD(missionListViewItem[1].klass) == 3 )
      missionListViewItem->fields.isChallengeButtonObjectExist = 1;
    v11 = missionListViewItem;
  }
  else
  {
    v10 = 0;
    v11 = 0;
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
  v12 = MasterMissionListViewManager_TypeInfo->_2.naturalAligment;
  if ( listViewManager->klass->_2.naturalAligment < (unsigned int)v12 )
  {
    listViewManager = 0;
LABEL_12:
    if ( !v10 )
      return 0;
    goto LABEL_20;
  }
  if ( (MasterMissionListViewManager_c *)listViewManager->klass->_2.typeHierarchy[v12 - 1] != MasterMissionListViewManager_TypeInfo )
    listViewManager = 0;
  if ( !v10 )
    return 0;
LABEL_20:
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)listViewManager, 0, 0) )
    return 0;
  MasterMissionListViewItemDraw__SetRewardItemIcon(
    this,
    (MasterMissionListViewItem_o *)v11,
    (MasterMissionListViewManager_o *)listViewManager,
    v13);
  return 1;
}


void MasterMissionListViewItemDraw__SetRewardItemIcon(
        MasterMissionListViewItemDraw_o *this,
        MasterMissionListViewItem_o *item,
        MasterMissionListViewManager_o *manager,
        const MethodInfo *method)
{
  MasterMissionListViewItemDraw_o *v6; // x20
  struct EventMissionEntity_o *eventMissionEnt; // x8
  const MethodInfo *v8; // x1
  struct EventMissionEntity_o *v9; // x8
  int32_t giftId; // w22
  GiftEntity_array *IconGiftEntities; // x0
  struct GiftEntity_array **p_giftEntityList; // x22
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  il2cpp_array_size_t max_length; // x8
  struct EventMissionEntity_o *v16; // x8
  System_String_o *v17; // x23
  struct GiftEntity_array *v18; // x8
  unsigned int v19; // w10
  int v20; // w9
  int32_t *v21; // x9
  int32_t v22; // w1
  int v23; // w8
  int64_t v24; // x2
  struct GiftEntity_array *v25; // x8
  GiftEntity_o *v26; // x8
  const MethodInfo *prioredIconId; // x1
  ItemIconComponent_o *itemIcon; // x21
  int64_t num; // x8
  int64_t v30; // x2
  int32_t Type; // w0
  int32_t rewardObjectId; // w22
  int32_t v33; // w23
  const MethodInfo *v34; // x1
  struct EventMissionEntity_o *v35; // x8
  int32_t iconId; // w1
  int64_t v37; // x3

  v6 = this;
  if ( (byte_4C460F4 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_EventMissionAddMaster___);
    sub_1C37058(&MissionInfoMaker_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    this = (MasterMissionListViewItemDraw_o *)sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C460F4 = 1;
  }
  if ( !item )
    goto LABEL_63;
  eventMissionEnt = item->fields.eventMissionEnt;
  if ( !eventMissionEnt )
    goto LABEL_63;
  if ( eventMissionEnt->fields.rewardType != 1 )
    goto LABEL_49;
  this = (MasterMissionListViewItemDraw_o *)MasterMissionListViewItem__get_IsHideReward(item, (const MethodInfo *)item);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    this = (MasterMissionListViewItemDraw_o *)v6->fields.itemIcon;
    v6->fields.isMultipleReward = 0;
    if ( !this )
      goto LABEL_63;
    ItemIconComponent__SetItemImage((ItemIconComponent_o *)this, 99, 0);
    goto LABEL_49;
  }
  v9 = item->fields.eventMissionEnt;
  if ( !v9 )
    goto LABEL_63;
  giftId = v9->fields.giftId;
  if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
  IconGiftEntities = MissionInfoMaker__GetIconGiftEntities(giftId, v8);
  v6->fields.giftEntityList = IconGiftEntities;
  p_giftEntityList = &v6->fields.giftEntityList;
  sub_1C36FFC((CGThumbnailListItem_o *)&v6->fields.giftEntityList, (int32_t)IconGiftEntities, v13, v14);
  if ( !v6->fields.giftEntityList )
    goto LABEL_63;
  max_length = v6->fields.giftEntityList->max_length;
  if ( !max_length )
    return;
  v6->fields.isMultipleReward = (int)max_length > 1;
  this = (MasterMissionListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_63;
  this = (MasterMissionListViewItemDraw_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)this,
                                              (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_EventMissionAddMaster___);
  v16 = item->fields.eventMissionEnt;
  if ( !v16 || !this )
    goto LABEL_63;
  v17 = EventMissionAddMaster__GetEventMissionChangeRewardIcon(
          (EventMissionAddMaster_o *)this,
          v16->fields.id,
          v16->fields.missionTargetId,
          0,
          0);
  if ( !System_String__IsNullOrEmpty(v17, 0) )
  {
    v6->fields.isMultipleReward = 0;
    item->fields.isHideRewardDetail = 1;
LABEL_33:
    this = (MasterMissionListViewItemDraw_o *)System_String__IsNullOrEmpty(v17, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v25 = *p_giftEntityList;
      if ( !*p_giftEntityList )
        goto LABEL_63;
      if ( !LODWORD(v25->max_length) )
        goto LABEL_64;
      v26 = v25->m_Items[0];
      if ( !v26 )
        goto LABEL_63;
      prioredIconId = (const MethodInfo *)(unsigned int)v26->fields.prioredIconId;
      itemIcon = v6->fields.itemIcon;
      if ( (int)prioredIconId < 1 )
      {
        Type = MissionListViewItem__get_Type((MissionListViewItem_o *)item, prioredIconId);
        rewardObjectId = item->fields.rewardObjectId;
        v33 = Type;
        this = (MasterMissionListViewItemDraw_o *)MissionListViewItem__get_DisplayGiftNum(
                                                    (MissionListViewItem_o *)item,
                                                    v34);
        if ( !itemIcon )
          goto LABEL_63;
        ItemIconComponent__SetGift_40921900(itemIcon, v33, rewardObjectId, (int)this, 0, 0);
      }
      else
      {
        if ( !itemIcon )
          goto LABEL_63;
        num = (unsigned int)v26->fields.num;
        if ( (int)num <= 1 )
          v30 = -1;
        else
          v30 = num;
        ItemIconComponent__SetItemImage_40924348(v6->fields.itemIcon, (int32_t)prioredIconId, v30, 0);
      }
    }
    else
    {
      this = (MasterMissionListViewItemDraw_o *)v6->fields.itemIcon;
      if ( !this )
        goto LABEL_63;
      ItemIconComponent__SetItemImageByName((ItemIconComponent_o *)this, v17, 0);
    }
    this = (MasterMissionListViewItemDraw_o *)v6->fields.itemIcon;
    if ( !this )
      goto LABEL_63;
    ItemIconComponent__SetAlpha((ItemIconComponent_o *)this, 1.0, 0);
    goto LABEL_49;
  }
  if ( !v6->fields.isMultipleReward )
    goto LABEL_33;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (MasterMissionListViewItemDraw_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)manager, 0, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_49;
  v18 = *p_giftEntityList;
  if ( !*p_giftEntityList || !manager )
    goto LABEL_63;
  v19 = v18->max_length;
  v20 = manager->fields.alphaAnimCnt % (int)v19;
  if ( v20 >= v19 )
LABEL_64:
    sub_1C372BC(this);
  v21 = (int32_t *)v18->m_Items[v20];
  if ( !v21 )
    goto LABEL_63;
  v22 = v21[11];
  this = (MasterMissionListViewItemDraw_o *)v6->fields.itemIcon;
  v23 = v21[7];
  if ( v22 < 1 )
  {
    if ( !this )
      goto LABEL_63;
    if ( v23 <= 1 )
      v37 = -1;
    else
      v37 = (unsigned int)v21[7];
    ItemIconComponent__SetGift_40921900((ItemIconComponent_o *)this, v21[5], v21[6], v37, 0, 0);
  }
  else
  {
    if ( !this )
      goto LABEL_63;
    if ( v23 <= 1 )
      v24 = -1;
    else
      v24 = (unsigned int)v21[7];
    ItemIconComponent__SetItemImage_40924348((ItemIconComponent_o *)this, v22, v24, 0);
  }
LABEL_49:
  v35 = item->fields.eventMissionEnt;
  if ( !v35 )
    goto LABEL_63;
  if ( v35->fields.rewardType == 3 )
  {
    if ( MasterMissionListViewItem__get_IsHideReward(item, (const MethodInfo *)item) )
    {
      this = (MasterMissionListViewItemDraw_o *)v6->fields.itemIcon;
      v6->fields.isMultipleReward = 0;
      if ( this )
      {
        iconId = 99;
LABEL_57:
        ItemIconComponent__SetItemImage((ItemIconComponent_o *)this, iconId, 0);
        return;
      }
    }
    else
    {
      this = (MasterMissionListViewItemDraw_o *)v6->fields.itemIcon;
      if ( this )
      {
        iconId = item->fields.iconId;
        goto LABEL_57;
      }
    }
LABEL_63:
    sub_1C372B4(this);
  }
}


void MasterMissionListViewItemDraw__UpdateDispResTime(
        MasterMissionListViewItemDraw_o *this,
        MissionListViewItem_o *missionListViewItem,
        int64_t nowTime,
        const MethodInfo *method)
{
  MasterMissionListViewItemDraw_o *v5; // x19
  __int64 naturalAligment; // x10
  int32_t progStatus; // w21
  int klass; // w8
  UILabel_o *resTimeLb; // x19
  int64_t NextDayStartTime; // x20
  System_String_o *v11; // x0
  const MethodInfo *v12; // x2
  struct EventMissionEntity_o *eventMissionEnt; // x8
  int64_t closedAt; // x20
  System_String_o *RestTime; // x20
  __int64 *v16; // x8
  int64_t endedAt; // x20

  v5 = this;
  if ( (byte_4C460F5 & 1) == 0 )
  {
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&MasterMissionListViewItem_TypeInfo);
    sub_1C37058(&MissionListViewItemDraw_TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&StringLiteral_13427/*"TIME_REST_QUEST"*/);
    sub_1C37058(&StringLiteral_9338/*"NO_TIME_INFO"*/);
    this = (MasterMissionListViewItemDraw_o *)sub_1C37058(&StringLiteral_13415/*"TIME_REST_ACHIVE"*/);
    byte_4C460F5 = 1;
  }
  if ( missionListViewItem )
  {
    naturalAligment = MasterMissionListViewItem_TypeInfo->_2.naturalAligment;
    if ( missionListViewItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment
      && (MasterMissionListViewItem_c *)missionListViewItem->klass->_2.typeHierarchy[naturalAligment - 1] == MasterMissionListViewItem_TypeInfo )
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
            RestTime = LocalizationManager__GetRestTime(closedAt, 0);
            if ( !MissionListViewItemDraw_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(MissionListViewItemDraw_TypeInfo);
            goto LABEL_28;
          }
          endedAt = eventMissionEnt->fields.endedAt;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          RestTime = LocalizationManager__GetRestTime(endedAt, 0);
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
            v11 = LocalizationManager__Get((System_String_o *)StringLiteral_9338/*"NO_TIME_INFO"*/, 0);
          }
          else
          {
            resTimeLb = v5->fields.resTimeLb;
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            NextDayStartTime = NetworkManager__getNextDayStartTime(0);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v11 = LocalizationManager__GetRestTime(NextDayStartTime, 0);
          }
          RestTime = v11;
          if ( !MissionListViewItemDraw_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(MissionListViewItemDraw_TypeInfo);
          if ( progStatus == 3 )
          {
LABEL_28:
            v16 = &StringLiteral_13415/*"TIME_REST_ACHIVE"*/;
            goto LABEL_34;
          }
        }
        v16 = &StringLiteral_13427/*"TIME_REST_QUEST"*/;
LABEL_34:
        this = (MasterMissionListViewItemDraw_o *)MissionListViewItemDraw__GetTimeText(
                                                    (System_String_o *)*v16,
                                                    RestTime,
                                                    v12);
        if ( resTimeLb )
        {
          UILabel__set_text(resTimeLb, (System_String_o *)this, 0);
          return;
        }
LABEL_36:
        sub_1C372B4(this);
      }
    }
  }
}


void MasterMissionListViewItemDraw__UpdateItem(
        MasterMissionListViewItemDraw_o *this,
        MasterMissionListViewItem_o *item,
        int32_t mode,
        MasterMissionListViewManager_o *manager,
        const MethodInfo *method)
{
  __int64 resTimeLb; // x0
  const MethodInfo *v10; // x1
  int64_t oldTime; // x23
  int64_t v12; // x22
  MissionListViewItemDraw_c *v13; // x8

  if ( (byte_4C460F6 & 1) == 0 )
  {
    sub_1C37058(&MissionListViewItemDraw_TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C460F6 = 1;
  }
  if ( item && mode && item->fields.eventMissionEnt && item->fields.missionType != 2 )
  {
    resTimeLb = (__int64)this->fields.resTimeLb;
    if ( !resTimeLb )
      goto LABEL_19;
    resTimeLb = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)resTimeLb, 0);
    if ( !resTimeLb )
      goto LABEL_19;
    resTimeLb = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)resTimeLb, 0);
    if ( (resTimeLb & 1) != 0 )
    {
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      resTimeLb = NetworkManager__getTime(0);
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
        resTimeLb = ((__int64 (__fastcall *)(MasterMissionListViewItemDraw_o *, MasterMissionListViewItem_o *, int64_t, const MethodInfo *))this->klass->vtable._9_UpdateDispResTime.methodPtr)(
                      this,
                      item,
                      v12,
                      this->klass->vtable._9_UpdateDispResTime.method);
        this->fields.oldTime = v12;
      }
    }
    if ( !manager )
LABEL_19:
      sub_1C372B4(resTimeLb);
    MissionListViewItemDraw__SetRewardIconAlpha((MissionListViewItemDraw_o *)this, manager->fields.alphaAnimNow, v10);
  }
}