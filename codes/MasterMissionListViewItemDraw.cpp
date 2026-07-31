void MasterMissionListViewItemDraw___ctor(MasterMissionListViewItemDraw_o *this, const MethodInfo *method)
{
  if ( (byte_593C056 & 1) == 0 )
  {
    sub_21FFC50(&MissionListViewItemDraw_TypeInfo);
    byte_593C056 = 1;
  }
  if ( !*(&MissionListViewItemDraw_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(MissionListViewItemDraw_TypeInfo, method);
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
  GiftEntity_o *v6; // x8
  int64_t num; // x8
  int64_t v8; // x2
  int64_t v9; // x3

  if ( !this->fields.isMultipleReward )
    return;
  giftEntityList = this->fields.giftEntityList;
  if ( !giftEntityList || !manager )
    goto LABEL_18;
  max_length = giftEntityList->max_length;
  v5 = manager->fields.alphaAnimCnt % (int)max_length;
  if ( v5 >= max_length )
    sub_21FFED4(this);
  v6 = giftEntityList->m_Items[v5];
  if ( !v6 )
    goto LABEL_18;
  manager = (MasterMissionListViewManager_o *)(unsigned int)v6->fields.prioredIconId;
  this = (MasterMissionListViewItemDraw_o *)this->fields.itemIcon;
  if ( (int)manager >= 1 )
  {
    if ( this )
    {
      num = (unsigned int)v6->fields.num;
      if ( (int)num <= 1 )
        v8 = -1;
      else
        v8 = num;
      ItemIconComponent__SetItemImage_47939376((ItemIconComponent_o *)this, (int32_t)manager, v8, 0);
      return;
    }
LABEL_18:
    sub_21FFECC(this, manager);
  }
  if ( !this )
    goto LABEL_18;
  if ( v6->fields.num <= 1 )
    v9 = -1;
  else
    v9 = (unsigned int)v6->fields.num;
  ItemIconComponent__SetGift_47936840((ItemIconComponent_o *)this, v6->fields.type, v6->fields.objectId, v9, 0, 0);
}


void MasterMissionListViewItemDraw__InitDispResTime(
        MasterMissionListViewItemDraw_o *this,
        MissionListViewItem_o *missionListviewItem,
        const MethodInfo *method)
{
  MissionListViewItem_o *v3; // x20
  __int64 naturalAligment; // x10
  UnityEngine_GameObject_o *timeOverInfo; // x0
  int klass; // w8
  struct EventMissionEntity_o *v8; // x8
  __int64 closedAt; // x8
  struct EventMissionEntity_o *eventMissionEnt; // x8
  _BOOL4 v11; // w8
  bool v12; // w21

  v3 = missionListviewItem;
  if ( (byte_593C052 & 1) == 0 )
  {
    sub_21FFC50(&MasterMissionListViewItem_TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_593C052 = 1;
  }
  if ( v3 )
  {
    naturalAligment = MasterMissionListViewItem_TypeInfo->_2.naturalAligment;
    if ( v3->klass->_2.naturalAligment >= (unsigned int)naturalAligment
      && (MasterMissionListViewItem_c *)v3->klass->_2.typeHierarchy[naturalAligment - 1] == MasterMissionListViewItem_TypeInfo )
    {
      if ( v3->fields.progStatus == 4 )
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
              LOBYTE(missionListviewItem) = 0;
LABEL_36:
              UnityEngine_GameObject__SetActive(timeOverInfo, (bool)missionListviewItem, 0);
              return;
            }
          }
        }
LABEL_38:
        sub_21FFECC(timeOverInfo, missionListviewItem);
      }
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, missionListviewItem);
      timeOverInfo = (UnityEngine_GameObject_o *)NetworkManager__getTime(0);
      klass = (int)v3[1].klass;
      if ( klass == 3 )
      {
        eventMissionEnt = v3->fields.eventMissionEnt;
        if ( !eventMissionEnt )
          goto LABEL_38;
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
          v12 = 0;
          if ( v3->fields.progStatus != 3 )
            this->fields.isDispTime = 1;
LABEL_30:
          ((void (__fastcall *)(MasterMissionListViewItemDraw_o *, MissionListViewItem_o *, UnityEngine_GameObject_o *, const MethodInfo *))this->klass->vtable._9_UpdateDispResTime.methodPtr)(
            this,
            v3,
            timeOverInfo,
            this->klass->vtable._9_UpdateDispResTime.method);
          timeOverInfo = this->fields.timeOverInfo;
          if ( timeOverInfo )
          {
            UnityEngine_GameObject__SetActive(timeOverInfo, v12, 0);
            timeOverInfo = (UnityEngine_GameObject_o *)this->fields.resTimeLb;
            if ( timeOverInfo )
            {
              timeOverInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)timeOverInfo, 0);
              missionListviewItem = (MissionListViewItem_o *)(this->fields.isDispTime
                                                           || (unsigned __int64)(v3->fields.progStatus == 3));
              if ( timeOverInfo )
                goto LABEL_36;
            }
          }
          goto LABEL_38;
        }
        v8 = v3->fields.eventMissionEnt;
        if ( !v8 )
          goto LABEL_38;
        if ( (__int64)timeOverInfo >= v8->fields.startedAt )
        {
          closedAt = v8->fields.endedAt;
LABEL_25:
          v11 = (__int64)timeOverInfo < closedAt;
          goto LABEL_26;
        }
      }
      v11 = 0;
LABEL_26:
      if ( !this )
        goto LABEL_38;
      this->fields.isDispTime = v11;
      if ( v11 || v3->fields.progStatus == 3 )
      {
        v12 = 0;
        this->fields.oldTime = 0;
      }
      else
      {
        v12 = 1;
        v3->fields.isNowMission = 1;
      }
      goto LABEL_30;
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
  __int64 v12; // x1
  __int64 v13; // x10
  const MethodInfo *v14; // x3

  if ( (byte_593C051 & 1) == 0 )
  {
    sub_21FFC50(&MasterMissionListViewItem_TypeInfo);
    sub_21FFC50(&MasterMissionListViewManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593C051 = 1;
  }
  if ( missionListViewItem
    && (naturalAligment = MasterMissionListViewItem_TypeInfo->_2.naturalAligment,
        missionListViewItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment)
    && (MasterMissionListViewItem_c *)missionListViewItem->klass->_2.typeHierarchy[naturalAligment - 1] == MasterMissionListViewItem_TypeInfo )
  {
    v10 = 1;
    v11 = missionListViewItem;
    if ( LODWORD(missionListViewItem[1].klass) == 3 )
    {
      v11 = missionListViewItem;
      missionListViewItem->fields.isChallengeButtonObjectExist = 1;
    }
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
  v13 = MasterMissionListViewManager_TypeInfo->_2.naturalAligment;
  if ( listViewManager->klass->_2.naturalAligment < (unsigned int)v13 )
  {
    listViewManager = 0;
LABEL_12:
    if ( !v10 )
      return 0;
    goto LABEL_19;
  }
  if ( (MasterMissionListViewManager_c *)listViewManager->klass->_2.typeHierarchy[v13 - 1] != MasterMissionListViewManager_TypeInfo )
    listViewManager = 0;
  if ( !v10 )
    return 0;
LABEL_19:
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)listViewManager, 0, 0) )
    return 0;
  MasterMissionListViewItemDraw__SetRewardItemIcon(
    this,
    (MasterMissionListViewItem_o *)v11,
    (MasterMissionListViewManager_o *)listViewManager,
    v14);
  return 1;
}


void MasterMissionListViewItemDraw__SetRewardItemIcon(
        MasterMissionListViewItemDraw_o *this,
        MasterMissionListViewItem_o *item,
        MasterMissionListViewManager_o *manager,
        const MethodInfo *method)
{
  MasterMissionListViewItem_o *v5; // x19
  MasterMissionListViewItemDraw_o *v6; // x20
  struct EventMissionEntity_o *eventMissionEnt; // x8
  struct EventMissionEntity_o *v8; // x8
  int32_t giftId; // w22
  GiftEntity_array *IconGiftEntities; // x0
  struct GiftEntity_array **p_giftEntityList; // x22
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  il2cpp_array_size_t max_length; // x8
  struct EventMissionEntity_o *v19; // x8
  System_String_o *v20; // x23
  __int64 v21; // x1
  struct GiftEntity_array *v22; // x8
  unsigned int v23; // w10
  int v24; // w9
  GiftEntity_o *v25; // x8
  int64_t v26; // x8
  int64_t v27; // x2
  struct GiftEntity_array *v28; // x8
  GiftEntity_o *v29; // x8
  ItemIconComponent_o *itemIcon; // x21
  int64_t num; // x8
  int64_t v32; // x2
  int32_t Type; // w0
  int32_t rewardObjectId; // w22
  int32_t v35; // w23
  const MethodInfo *v36; // x1
  struct EventMissionEntity_o *v37; // x8
  int32_t iconId; // w1
  int64_t v39; // x3

  v5 = item;
  v6 = this;
  if ( (byte_593C053 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_EventMissionAddMaster___);
    sub_21FFC50(&MissionInfoMaker_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    this = (MasterMissionListViewItemDraw_o *)sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_593C053 = 1;
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
    ItemIconComponent__SetItemImage((ItemIconComponent_o *)this, 99, 0);
    goto LABEL_49;
  }
  v8 = v5->fields.eventMissionEnt;
  if ( !v8 )
    goto LABEL_63;
  giftId = v8->fields.giftId;
  if ( !*(&MissionInfoMaker_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo, item);
  IconGiftEntities = MissionInfoMaker__GetIconGiftEntities(giftId, (const MethodInfo *)item);
  v6->fields.giftEntityList = IconGiftEntities;
  p_giftEntityList = &v6->fields.giftEntityList;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v6->fields.giftEntityList,
    (int32_t)IconGiftEntities,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  if ( !v6->fields.giftEntityList )
    goto LABEL_63;
  max_length = v6->fields.giftEntityList->max_length;
  if ( !max_length )
    return;
  v6->fields.isMultipleReward = (int)max_length > 1;
  this = (MasterMissionListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_63;
  this = (MasterMissionListViewItemDraw_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)this,
                                              (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventMissionAddMaster___);
  v19 = v5->fields.eventMissionEnt;
  if ( !v19 || !this )
    goto LABEL_63;
  v20 = EventMissionAddMaster__GetEventMissionChangeRewardIcon(
          (EventMissionAddMaster_o *)this,
          v19->fields.id,
          v19->fields.missionTargetId,
          0,
          0);
  if ( !System_String__IsNullOrEmpty(v20, 0) )
  {
    v6->fields.isMultipleReward = 0;
    v5->fields.isHideRewardDetail = 1;
LABEL_33:
    this = (MasterMissionListViewItemDraw_o *)System_String__IsNullOrEmpty(v20, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v28 = *p_giftEntityList;
      if ( !*p_giftEntityList )
        goto LABEL_63;
      if ( !LODWORD(v28->max_length) )
        goto LABEL_64;
      v29 = v28->m_Items[0];
      if ( !v29 )
        goto LABEL_63;
      item = (MasterMissionListViewItem_o *)(unsigned int)v29->fields.prioredIconId;
      itemIcon = v6->fields.itemIcon;
      if ( (int)item < 1 )
      {
        Type = MissionListViewItem__get_Type((MissionListViewItem_o *)v5, (const MethodInfo *)item);
        rewardObjectId = v5->fields.rewardObjectId;
        v35 = Type;
        this = (MasterMissionListViewItemDraw_o *)MissionListViewItem__get_DisplayGiftNum(
                                                    (MissionListViewItem_o *)v5,
                                                    v36);
        if ( !itemIcon )
          goto LABEL_63;
        ItemIconComponent__SetGift_47936840(itemIcon, v35, rewardObjectId, (int)this, 0, 0);
      }
      else
      {
        if ( !itemIcon )
          goto LABEL_63;
        num = (unsigned int)v29->fields.num;
        if ( (int)num <= 1 )
          v32 = -1;
        else
          v32 = num;
        ItemIconComponent__SetItemImage_47939376(v6->fields.itemIcon, (int32_t)item, v32, 0);
      }
    }
    else
    {
      this = (MasterMissionListViewItemDraw_o *)v6->fields.itemIcon;
      if ( !this )
        goto LABEL_63;
      ItemIconComponent__SetItemImageByName((ItemIconComponent_o *)this, v20, 0);
    }
    this = (MasterMissionListViewItemDraw_o *)v6->fields.itemIcon;
    if ( !this )
      goto LABEL_63;
    ItemIconComponent__SetAlpha((ItemIconComponent_o *)this, 1.0, 0);
    goto LABEL_49;
  }
  if ( !v6->fields.isMultipleReward )
    goto LABEL_33;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21);
  this = (MasterMissionListViewItemDraw_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)manager, 0, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_49;
  v22 = *p_giftEntityList;
  if ( !*p_giftEntityList || !manager )
    goto LABEL_63;
  v23 = v22->max_length;
  v24 = manager->fields.alphaAnimCnt % (int)v23;
  if ( v24 >= v23 )
LABEL_64:
    sub_21FFED4(this);
  v25 = v22->m_Items[v24];
  if ( !v25 )
    goto LABEL_63;
  item = (MasterMissionListViewItem_o *)(unsigned int)v25->fields.prioredIconId;
  this = (MasterMissionListViewItemDraw_o *)v6->fields.itemIcon;
  if ( (int)item < 1 )
  {
    if ( !this )
      goto LABEL_63;
    if ( v25->fields.num <= 1 )
      v39 = -1;
    else
      v39 = (unsigned int)v25->fields.num;
    ItemIconComponent__SetGift_47936840((ItemIconComponent_o *)this, v25->fields.type, v25->fields.objectId, v39, 0, 0);
  }
  else
  {
    if ( !this )
      goto LABEL_63;
    v26 = (unsigned int)v25->fields.num;
    if ( (int)v26 <= 1 )
      v27 = -1;
    else
      v27 = v26;
    ItemIconComponent__SetItemImage_47939376((ItemIconComponent_o *)this, (int32_t)item, v27, 0);
  }
LABEL_49:
  v37 = v5->fields.eventMissionEnt;
  if ( !v37 )
    goto LABEL_63;
  if ( v37->fields.rewardType == 3 )
  {
    if ( MasterMissionListViewItem__get_IsHideReward(v5, (const MethodInfo *)item) )
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
        iconId = v5->fields.iconId;
        goto LABEL_57;
      }
    }
LABEL_63:
    sub_21FFECC(this, item);
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
  int32_t progStatus; // w8
  int klass; // w9
  UILabel_o *resTimeLb; // x19
  int v10; // w9
  int64_t closedAt; // x20
  LocalizationManager_c *v12; // x0
  struct EventMissionEntity_o *eventMissionEnt; // x9
  System_String_o *RestTime; // x0
  __int64 v15; // x1
  const MethodInfo *v16; // x2
  int64_t endedAt; // x20
  LocalizationManager_c *v18; // x0
  int v19; // w9
  System_String_o *v20; // x20
  __int64 *v21; // x8
  System_String_o *v22; // x0
  __int64 v23; // x1

  v5 = this;
  if ( (byte_593C054 & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&MasterMissionListViewItem_TypeInfo);
    sub_21FFC50(&MissionListViewItemDraw_TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&StringLiteral_13953/*"TIME_REST_QUEST"*/);
    sub_21FFC50(&StringLiteral_9711/*"NO_TIME_INFO"*/);
    this = (MasterMissionListViewItemDraw_o *)sub_21FFC50(&StringLiteral_13941/*"TIME_REST_ACHIVE"*/);
    byte_593C054 = 1;
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
          resTimeLb = v5->fields.resTimeLb;
          eventMissionEnt = missionListViewItem->fields.eventMissionEnt;
          if ( progStatus == 3 )
          {
            if ( !eventMissionEnt )
              goto LABEL_45;
            closedAt = eventMissionEnt->fields.closedAt;
            v12 = LocalizationManager_TypeInfo;
            if ( *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
              goto LABEL_20;
            goto LABEL_19;
          }
          if ( !eventMissionEnt )
            goto LABEL_45;
          endedAt = eventMissionEnt->fields.endedAt;
          v18 = LocalizationManager_TypeInfo;
          if ( *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            goto LABEL_36;
        }
        else
        {
          if ( klass )
          {
            resTimeLb = v5->fields.resTimeLb;
            v19 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
            if ( progStatus == 3 )
            {
              if ( !v19 )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, missionListViewItem);
              RestTime = LocalizationManager__Get((System_String_o *)StringLiteral_9711/*"NO_TIME_INFO"*/, 0);
              goto LABEL_28;
            }
            if ( !v19 )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, missionListViewItem);
            v22 = LocalizationManager__Get((System_String_o *)StringLiteral_9711/*"NO_TIME_INFO"*/, 0);
LABEL_40:
            v20 = v22;
            if ( !*(&MissionListViewItemDraw_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(MissionListViewItemDraw_TypeInfo, v23);
            v21 = &StringLiteral_13953/*"TIME_REST_QUEST"*/;
LABEL_43:
            this = (MasterMissionListViewItemDraw_o *)MissionListViewItemDraw__GetTimeText(
                                                        (System_String_o *)*v21,
                                                        v20,
                                                        v16);
            if ( resTimeLb )
            {
              UILabel__set_text(resTimeLb, (System_String_o *)this, 0);
              return;
            }
LABEL_45:
            sub_21FFECC(this, missionListViewItem);
          }
          resTimeLb = v5->fields.resTimeLb;
          v10 = *(&NetworkManager_TypeInfo->_2.cctor_finished + 1);
          if ( progStatus == 3 )
          {
            if ( !v10 )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, missionListViewItem);
            closedAt = NetworkManager__getNextDayStartTime(0);
            if ( *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
              goto LABEL_20;
            v12 = LocalizationManager_TypeInfo;
LABEL_19:
            j_il2cpp_runtime_class_init_0(v12, missionListViewItem);
LABEL_20:
            RestTime = LocalizationManager__GetRestTime(closedAt, 0);
LABEL_28:
            v20 = RestTime;
            if ( !*(&MissionListViewItemDraw_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(MissionListViewItemDraw_TypeInfo, v15);
            v21 = &StringLiteral_13941/*"TIME_REST_ACHIVE"*/;
            goto LABEL_43;
          }
          if ( !v10 )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, missionListViewItem);
          endedAt = NetworkManager__getNextDayStartTime(0);
          if ( *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          {
LABEL_36:
            v22 = LocalizationManager__GetRestTime(endedAt, 0);
            goto LABEL_40;
          }
          v18 = LocalizationManager_TypeInfo;
        }
        j_il2cpp_runtime_class_init_0(v18, missionListViewItem);
        goto LABEL_36;
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
  int64_t v10; // x22
  int64_t oldTime; // x23
  MissionListViewItemDraw_c *v12; // x8

  if ( (byte_593C055 & 1) == 0 )
  {
    sub_21FFC50(&MissionListViewItemDraw_TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_593C055 = 1;
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
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, item);
      resTimeLb = NetworkManager__getTime(0);
      v10 = resTimeLb;
      oldTime = this->fields.oldTime;
      v12 = MissionListViewItemDraw_TypeInfo;
      if ( !*(&MissionListViewItemDraw_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(MissionListViewItemDraw_TypeInfo, item);
        v12 = MissionListViewItemDraw_TypeInfo;
      }
      if ( v10 - oldTime >= v12->static_fields->TIME_UPDATE_ITVL_SEC )
      {
        resTimeLb = ((__int64 (__fastcall *)(MasterMissionListViewItemDraw_o *, MasterMissionListViewItem_o *, int64_t, const MethodInfo *))this->klass->vtable._9_UpdateDispResTime.methodPtr)(
                      this,
                      item,
                      v10,
                      this->klass->vtable._9_UpdateDispResTime.method);
        this->fields.oldTime = v10;
      }
    }
    if ( !manager )
LABEL_19:
      sub_21FFECC(resTimeLb, item);
    MissionListViewItemDraw__SetRewardIconAlpha(
      (MissionListViewItemDraw_o *)this,
      manager->fields.alphaAnimNow,
      (const MethodInfo *)item);
  }
}