void MasterMissionListViewItemDraw___ctor(MasterMissionListViewItemDraw_o *this, const MethodInfo *method)
{
  if ( (byte_4CF17EA & 1) == 0 )
  {
    sub_1C7BAE8(&MissionListViewItemDraw_TypeInfo);
    byte_4CF17EA = 1;
  }
  if ( !MissionListViewItemDraw_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MissionListViewItemDraw_TypeInfo);
  MissionListViewItemDraw___ctor((MissionListViewItemDraw_o *)this, 0);
}


void MasterMissionListViewItemDraw__ChangeNextRewardIcon(
        MasterMissionListViewItemDraw_o *this,
        MasterMissionListViewManager_o *manager,
        const MethodInfo *method)
{
  struct GiftEntity_array *giftEntityList; // x20
  MasterMissionListViewItemDraw_o *v4; // x19
  GiftEntity_o *v5; // x9
  int num; // w8
  int64_t v7; // x2
  int64_t v8; // x3

  if ( !this->fields.isMultipleReward )
    return;
  giftEntityList = this->fields.giftEntityList;
  v4 = this;
  if ( !giftEntityList || !manager )
    goto LABEL_18;
  this = (MasterMissionListViewItemDraw_o *)MissionListViewManager__GetAlphaAnimCnt(
                                              (MissionListViewManager_o *)manager,
                                              giftEntityList->max_length,
                                              0);
  if ( (unsigned int)this >= LODWORD(giftEntityList->max_length) )
    sub_1C7BD48(this);
  v5 = giftEntityList->m_Items[(int)this];
  if ( !v5 )
    goto LABEL_18;
  manager = (MasterMissionListViewManager_o *)(unsigned int)v5->fields.prioredIconId;
  this = (MasterMissionListViewItemDraw_o *)v4->fields.itemIcon;
  num = v5->fields.num;
  if ( (int)manager >= 1 )
  {
    if ( this )
    {
      if ( num <= 1 )
        v7 = -1;
      else
        v7 = (unsigned int)v5->fields.num;
      ItemIconComponent__SetItemImage_41490236((ItemIconComponent_o *)this, (int32_t)manager, v7, 0);
      return;
    }
LABEL_18:
    sub_1C7BD40(this, manager);
  }
  if ( !this )
    goto LABEL_18;
  if ( num <= 1 )
    v8 = -1;
  else
    v8 = (unsigned int)v5->fields.num;
  ItemIconComponent__SetGift_41487788((ItemIconComponent_o *)this, v5->fields.type, v5->fields.objectId, v8, 0, 0);
}


void MasterMissionListViewItemDraw__InitDispResTime(
        MasterMissionListViewItemDraw_o *this,
        MissionListViewItem_o *missionListviewItem,
        const MethodInfo *method)
{
  MissionListViewItem_o *v3; // x20
  __int64 naturalAligment; // x10
  UnityEngine_GameObject_o *timeOverInfo; // x0
  int64_t Time; // x0
  int klass; // w8
  int64_t v9; // x21
  intptr_t m_CachedPtr; // x8
  _BOOL4 v11; // w8
  bool v12; // w22

  v3 = missionListviewItem;
  if ( (byte_4CF17E6 & 1) == 0 )
  {
    sub_1C7BAE8(&MasterMissionListViewItem_TypeInfo);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    byte_4CF17E6 = 1;
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
LABEL_40:
              UnityEngine_GameObject__SetActive(timeOverInfo, (bool)missionListviewItem, 0);
              return;
            }
          }
        }
LABEL_41:
        sub_1C7BD40(timeOverInfo, missionListviewItem);
      }
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Time = NetworkManager__getTime(0);
      klass = (int)v3[1].klass;
      v9 = Time;
      if ( klass == 3 )
      {
        timeOverInfo = (UnityEngine_GameObject_o *)MissionListViewItem__get_EventMissionEntity(v3, 0);
        if ( !timeOverInfo )
          goto LABEL_41;
        if ( v9 >= (__int64)timeOverInfo[2].monitor )
        {
          timeOverInfo = (UnityEngine_GameObject_o *)MissionListViewItem__get_EventMissionEntity(v3, 0);
          if ( !timeOverInfo )
            goto LABEL_41;
          m_CachedPtr = (intptr_t)timeOverInfo[3].klass;
          goto LABEL_27;
        }
      }
      else
      {
        if ( klass != 1 )
        {
          v12 = 0;
          if ( v3->fields.progStatus != 3 )
            this->fields.isDispTime = 1;
LABEL_34:
          ((void (__fastcall *)(MasterMissionListViewItemDraw_o *, MissionListViewItem_o *, int64_t, const MethodInfo *))this->klass->vtable._9_UpdateDispResTime.methodPtr)(
            this,
            v3,
            v9,
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
                goto LABEL_40;
            }
          }
          goto LABEL_41;
        }
        timeOverInfo = (UnityEngine_GameObject_o *)MissionListViewItem__get_EventMissionEntity(v3, 0);
        if ( !timeOverInfo )
          goto LABEL_41;
        if ( v9 >= (__int64)timeOverInfo[2].monitor )
        {
          timeOverInfo = (UnityEngine_GameObject_o *)MissionListViewItem__get_EventMissionEntity(v3, 0);
          if ( !timeOverInfo )
            goto LABEL_41;
          m_CachedPtr = timeOverInfo[2].fields.m_CachedPtr;
LABEL_27:
          v11 = v9 < m_CachedPtr;
          goto LABEL_28;
        }
      }
      v11 = 0;
LABEL_28:
      if ( !this )
        goto LABEL_41;
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
      goto LABEL_34;
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

  if ( (byte_4CF17E5 & 1) == 0 )
  {
    sub_1C7BAE8(&MasterMissionListViewItem_TypeInfo);
    sub_1C7BAE8(&MasterMissionListViewManager_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF17E5 = 1;
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
          0) )
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
  MasterMissionListViewItem_o *v5; // x19
  MasterMissionListViewItemDraw_o *v6; // x20
  const MethodInfo *v7; // x1
  int32_t missionNoLb_high; // w22
  GiftEntity_array *IconGiftEntities; // x0
  struct GiftEntity_array **p_giftEntityList; // x22
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  il2cpp_array_size_t max_length; // x8
  Il2CppObject *MasterData_object; // x23
  int32_t m_CachedPtr; // w24
  System_String_o *v20; // x23
  struct GiftEntity_array *v21; // x22
  GiftEntity_o *v22; // x9
  int v23; // w8
  int64_t v24; // x2
  struct GiftEntity_array *v25; // x8
  GiftEntity_o *v26; // x8
  ItemIconComponent_o *itemIcon; // x21
  int64_t num; // x8
  int64_t v29; // x2
  int32_t Type; // w0
  int32_t rewardObjectId; // w22
  int32_t v32; // w23
  const MethodInfo *v33; // x1
  int32_t iconId; // w1
  int64_t v35; // x3

  v5 = item;
  v6 = this;
  if ( (byte_4CF17E7 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_EventMissionAddMaster___);
    sub_1C7BAE8(&MissionInfoMaker_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    this = (MasterMissionListViewItemDraw_o *)sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CF17E7 = 1;
  }
  if ( !v5 )
    goto LABEL_62;
  if ( MissionListViewItem__get_EventRewardType((MissionListViewItem_o *)v5, 0) != 1 )
    goto LABEL_49;
  if ( MasterMissionListViewItem__get_IsHideReward(v5, v7) )
  {
    this = (MasterMissionListViewItemDraw_o *)v6->fields.itemIcon;
    v6->fields.isMultipleReward = 0;
    if ( !this )
      goto LABEL_62;
    ItemIconComponent__SetItemImage((ItemIconComponent_o *)this, 99, 0);
    goto LABEL_49;
  }
  this = (MasterMissionListViewItemDraw_o *)MissionListViewItem__get_EventMissionEntity((MissionListViewItem_o *)v5, 0);
  if ( !this )
    goto LABEL_62;
  missionNoLb_high = HIDWORD(this->fields.missionNoLb);
  if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
  IconGiftEntities = MissionInfoMaker__GetIconGiftEntities(missionNoLb_high, (const MethodInfo *)item);
  v6->fields.giftEntityList = IconGiftEntities;
  p_giftEntityList = &v6->fields.giftEntityList;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&v6->fields.giftEntityList,
    (int32_t)IconGiftEntities,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  if ( !v6->fields.giftEntityList )
    goto LABEL_62;
  max_length = v6->fields.giftEntityList->max_length;
  if ( !max_length )
    return;
  v6->fields.isMultipleReward = (int)max_length > 1;
  this = (MasterMissionListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_62;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)this,
                        (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_EventMissionAddMaster___);
  this = (MasterMissionListViewItemDraw_o *)MissionListViewItem__get_EventMissionEntity((MissionListViewItem_o *)v5, 0);
  if ( !this )
    goto LABEL_62;
  m_CachedPtr = this->fields.m_CachedPtr;
  this = (MasterMissionListViewItemDraw_o *)MissionListViewItem__get_EventMissionEntity((MissionListViewItem_o *)v5, 0);
  if ( !this || !MasterData_object )
    goto LABEL_62;
  v20 = EventMissionAddMaster__GetEventMissionChangeRewardIcon(
          (EventMissionAddMaster_o *)MasterData_object,
          m_CachedPtr,
          HIDWORD(this->fields.m_CancellationTokenSource),
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
      v25 = *p_giftEntityList;
      if ( !*p_giftEntityList )
        goto LABEL_62;
      if ( !LODWORD(v25->max_length) )
        goto LABEL_63;
      v26 = v25->m_Items[0];
      if ( !v26 )
        goto LABEL_62;
      item = (MasterMissionListViewItem_o *)(unsigned int)v26->fields.prioredIconId;
      itemIcon = v6->fields.itemIcon;
      if ( (int)item < 1 )
      {
        Type = MissionListViewItem__get_Type((MissionListViewItem_o *)v5, 0);
        rewardObjectId = v5->fields.rewardObjectId;
        v32 = Type;
        this = (MasterMissionListViewItemDraw_o *)MissionListViewItem__get_DisplayGiftNum(
                                                    (MissionListViewItem_o *)v5,
                                                    0);
        if ( !itemIcon )
          goto LABEL_62;
        ItemIconComponent__SetGift_41487788(itemIcon, v32, rewardObjectId, (int)this, 0, 0);
      }
      else
      {
        if ( !itemIcon )
          goto LABEL_62;
        num = (unsigned int)v26->fields.num;
        if ( (int)num <= 1 )
          v29 = -1;
        else
          v29 = num;
        ItemIconComponent__SetItemImage_41490236(v6->fields.itemIcon, (int32_t)item, v29, 0);
      }
    }
    else
    {
      this = (MasterMissionListViewItemDraw_o *)v6->fields.itemIcon;
      if ( !this )
        goto LABEL_62;
      ItemIconComponent__SetItemImageByName((ItemIconComponent_o *)this, v20, 0);
    }
    this = (MasterMissionListViewItemDraw_o *)v6->fields.itemIcon;
    if ( !this )
      goto LABEL_62;
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
  v21 = *p_giftEntityList;
  if ( !v21 || !manager )
    goto LABEL_62;
  this = (MasterMissionListViewItemDraw_o *)MissionListViewManager__GetAlphaAnimCnt(
                                              (MissionListViewManager_o *)manager,
                                              v21->max_length,
                                              0);
  if ( (unsigned int)this >= LODWORD(v21->max_length) )
LABEL_63:
    sub_1C7BD48(this);
  v22 = v21->m_Items[(int)this];
  if ( !v22 )
    goto LABEL_62;
  item = (MasterMissionListViewItem_o *)(unsigned int)v22->fields.prioredIconId;
  this = (MasterMissionListViewItemDraw_o *)v6->fields.itemIcon;
  v23 = v22->fields.num;
  if ( (int)item < 1 )
  {
    if ( !this )
      goto LABEL_62;
    if ( v23 <= 1 )
      v35 = -1;
    else
      v35 = (unsigned int)v22->fields.num;
    ItemIconComponent__SetGift_41487788((ItemIconComponent_o *)this, v22->fields.type, v22->fields.objectId, v35, 0, 0);
  }
  else
  {
    if ( !this )
      goto LABEL_62;
    if ( v23 <= 1 )
      v24 = -1;
    else
      v24 = (unsigned int)v22->fields.num;
    ItemIconComponent__SetItemImage_41490236((ItemIconComponent_o *)this, (int32_t)item, v24, 0);
  }
LABEL_49:
  if ( MissionListViewItem__get_EventRewardType((MissionListViewItem_o *)v5, 0) == 3 )
  {
    if ( MasterMissionListViewItem__get_IsHideReward(v5, v33) )
    {
      this = (MasterMissionListViewItemDraw_o *)v6->fields.itemIcon;
      v6->fields.isMultipleReward = 0;
      if ( this )
      {
        iconId = 99;
LABEL_56:
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
        goto LABEL_56;
      }
    }
LABEL_62:
    sub_1C7BD40(this, item);
  }
}


void MasterMissionListViewItemDraw__UpdateDispResTime(
        MasterMissionListViewItemDraw_o *this,
        MissionListViewItem_o *missionListViewItem,
        int64_t nowTime,
        const MethodInfo *method)
{
  __int64 naturalAligment; // x10
  int32_t progStatus; // w21
  int klass; // w8
  UILabel_o *resTimeLb; // x19
  int64_t NextDayStartTime; // x20
  System_String_o *v11; // x0
  void *EventMissionEntity; // x0
  __int64 v13; // x1
  int64_t v14; // x20
  System_String_o *RestTime; // x20
  __int64 *v16; // x8
  int64_t v17; // x20

  if ( (byte_4CF17E8 & 1) == 0 )
  {
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&MasterMissionListViewItem_TypeInfo);
    sub_1C7BAE8(&MissionListViewItemDraw_TypeInfo);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_13484/*"TIME_REST_QUEST"*/);
    sub_1C7BAE8(&StringLiteral_9364/*"NO_TIME_INFO"*/);
    sub_1C7BAE8(&StringLiteral_13472/*"TIME_REST_ACHIVE"*/);
    byte_4CF17E8 = 1;
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
          resTimeLb = this->fields.resTimeLb;
          EventMissionEntity = MissionListViewItem__get_EventMissionEntity(missionListViewItem, 0);
          if ( !EventMissionEntity )
            goto LABEL_36;
          if ( progStatus == 3 )
          {
            v14 = *((_QWORD *)EventMissionEntity + 9);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            RestTime = LocalizationManager__GetRestTime(v14, 0);
            if ( !MissionListViewItemDraw_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(MissionListViewItemDraw_TypeInfo);
            goto LABEL_28;
          }
          v17 = *((_QWORD *)EventMissionEntity + 8);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          RestTime = LocalizationManager__GetRestTime(v17, 0);
          if ( !MissionListViewItemDraw_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(MissionListViewItemDraw_TypeInfo);
        }
        else
        {
          if ( klass )
          {
            resTimeLb = this->fields.resTimeLb;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v11 = LocalizationManager__Get((System_String_o *)StringLiteral_9364/*"NO_TIME_INFO"*/, 0);
          }
          else
          {
            resTimeLb = this->fields.resTimeLb;
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
            v16 = &StringLiteral_13472/*"TIME_REST_ACHIVE"*/;
            goto LABEL_34;
          }
        }
        v16 = &StringLiteral_13484/*"TIME_REST_QUEST"*/;
LABEL_34:
        EventMissionEntity = MissionListViewItemDraw__GetTimeText((System_String_o *)*v16, RestTime, 0);
        if ( resTimeLb )
        {
          UILabel__set_text(resTimeLb, (System_String_o *)EventMissionEntity, 0);
          return;
        }
LABEL_36:
        sub_1C7BD40(EventMissionEntity, v13);
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
  EventMissionEntity_o *EventMissionEntity; // x0
  __int64 v10; // x1
  __int64 resTimeLb; // x0
  int64_t oldTime; // x23
  int64_t v13; // x22
  MissionListViewItemDraw_c *v14; // x8

  if ( (byte_4CF17E9 & 1) == 0 )
  {
    sub_1C7BAE8(&MissionListViewItemDraw_TypeInfo);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    byte_4CF17E9 = 1;
  }
  if ( item )
  {
    EventMissionEntity = MissionListViewItem__get_EventMissionEntity((MissionListViewItem_o *)item, 0);
    if ( mode )
    {
      if ( EventMissionEntity && item->fields.missionType != 2 )
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
          v13 = resTimeLb;
          v14 = MissionListViewItemDraw_TypeInfo;
          if ( !MissionListViewItemDraw_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(MissionListViewItemDraw_TypeInfo);
            v14 = MissionListViewItemDraw_TypeInfo;
          }
          if ( v13 - oldTime >= v14->static_fields->TIME_UPDATE_ITVL_SEC )
          {
            resTimeLb = ((__int64 (__fastcall *)(MasterMissionListViewItemDraw_o *, MasterMissionListViewItem_o *, int64_t, const MethodInfo *))this->klass->vtable._9_UpdateDispResTime.methodPtr)(
                          this,
                          item,
                          v13,
                          this->klass->vtable._9_UpdateDispResTime.method);
            this->fields.oldTime = v13;
          }
        }
        if ( !manager )
LABEL_19:
          sub_1C7BD40(resTimeLb, v10);
        MissionListViewItemDraw__SetRewardIconAlpha((MissionListViewItemDraw_o *)this, manager->fields.alphaAnimNow, 0);
      }
    }
  }
}