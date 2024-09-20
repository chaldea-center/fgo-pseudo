void __fastcall MasterMissionListViewItemDraw___ctor(MasterMissionListViewItemDraw_o *this, const MethodInfo *method)
{
  if ( (byte_4A5DC2A & 1) == 0 )
  {
    sub_1B885B0(&MissionListViewItemDraw_TypeInfo);
    byte_4A5DC2A = 1;
  }
  if ( !MissionListViewItemDraw_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MissionListViewItemDraw_TypeInfo);
  MissionListViewItemDraw___ctor((MissionListViewItemDraw_o *)this, 0LL);
}


void __fastcall MasterMissionListViewItemDraw__ChangeNextRewardIcon(
        MasterMissionListViewItemDraw_o *this,
        MasterMissionListViewManager_o *manager,
        const MethodInfo *method)
{
  struct GiftEntity_array *giftEntityList; // x20
  MasterMissionListViewItemDraw_o *v4; // x19
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
  this = (MasterMissionListViewItemDraw_o *)MissionListViewManager__GetAlphaAnimCnt(
                                              (MissionListViewManager_o *)manager,
                                              giftEntityList->max_length,
                                              0LL);
  if ( (unsigned int)this >= giftEntityList->max_length )
    sub_1B88814(this, manager);
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
  ItemIconComponent__SetGift_38144896((ItemIconComponent_o *)this, v5->fields.type, v5->fields.objectId, v8, 0, 0LL);
}


void __fastcall MasterMissionListViewItemDraw__InitDispResTime(
        MasterMissionListViewItemDraw_o *this,
        MissionListViewItem_o *missionListviewItem,
        const MethodInfo *method)
{
  MissionListViewItem_o *v3; // x20
  __int64 methodPtr_low; // x10
  UnityEngine_GameObject_o *timeOverInfo; // x0
  int64_t Time; // x0
  int klass; // w8
  int64_t v9; // x21
  UnityEngine_GameObject_c *v10; // x8
  _BOOL4 v11; // w8
  bool v12; // w22

  v3 = missionListviewItem;
  if ( (byte_4A5DC26 & 1) == 0 )
  {
    sub_1B885B0(&MasterMissionListViewItem_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5DC26 = 1;
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
LABEL_40:
              UnityEngine_GameObject__SetActive(timeOverInfo, (bool)missionListviewItem, 0LL);
              return;
            }
          }
        }
LABEL_41:
        sub_1B8880C(timeOverInfo, missionListviewItem);
      }
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Time = NetworkManager__getTime(0LL);
      klass = (int)v3[1].klass;
      v9 = Time;
      if ( klass == 3 )
      {
        timeOverInfo = (UnityEngine_GameObject_o *)MissionListViewItem__get_EventMissionEntity(v3, 0LL);
        if ( !timeOverInfo )
          goto LABEL_41;
        if ( v9 >= (__int64)timeOverInfo[2].monitor )
        {
          timeOverInfo = (UnityEngine_GameObject_o *)MissionListViewItem__get_EventMissionEntity(v3, 0LL);
          if ( !timeOverInfo )
            goto LABEL_41;
          v10 = timeOverInfo[3].klass;
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
          ((void (__fastcall *)(MasterMissionListViewItemDraw_o *, MissionListViewItem_o *, int64_t, Il2CppMethodPointer))this->klass->vtable._9_UpdateDispResTime.method)(
            this,
            v3,
            v9,
            this->klass->vtable._10_SetInput.methodPtr);
          timeOverInfo = this->fields.timeOverInfo;
          if ( timeOverInfo )
          {
            UnityEngine_GameObject__SetActive(timeOverInfo, v12, 0LL);
            timeOverInfo = (UnityEngine_GameObject_o *)this->fields.resTimeLb;
            if ( timeOverInfo )
            {
              timeOverInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)timeOverInfo, 0LL);
              missionListviewItem = (MissionListViewItem_o *)(this->fields.isDispTime
                                                           || (unsigned __int64)(v3->fields.progStatus == 3));
              if ( timeOverInfo )
                goto LABEL_40;
            }
          }
          goto LABEL_41;
        }
        timeOverInfo = (UnityEngine_GameObject_o *)MissionListViewItem__get_EventMissionEntity(v3, 0LL);
        if ( !timeOverInfo )
          goto LABEL_41;
        if ( v9 >= (__int64)timeOverInfo[2].monitor )
        {
          timeOverInfo = (UnityEngine_GameObject_o *)MissionListViewItem__get_EventMissionEntity(v3, 0LL);
          if ( !timeOverInfo )
            goto LABEL_41;
          v10 = *(UnityEngine_GameObject_c **)&timeOverInfo[2].fields.m_CachedPtr;
LABEL_27:
          v11 = v9 < (__int64)v10;
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
        this->fields.oldTime = 0LL;
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
  __int64 methodPtr_low; // x10
  int v10; // w24
  MissionListViewItem_o *v11; // x23
  __int64 v12; // x10
  const MethodInfo *v13; // x3

  if ( (byte_4A5DC25 & 1) == 0 )
  {
    sub_1B885B0(&MasterMissionListViewItem_TypeInfo);
    sub_1B885B0(&MasterMissionListViewManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5DC25 = 1;
  }
  if ( missionListViewItem
    && (methodPtr_low = LOBYTE(MasterMissionListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(missionListViewItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low)
    && (MasterMissionListViewItem_c *)missionListViewItem->klass->_2.typeHierarchy[methodPtr_low - 1] == MasterMissionListViewItem_TypeInfo )
  {
    v10 = 1;
    if ( LODWORD(missionListViewItem[1].klass) == 3 )
      missionListViewItem->fields.isChallengeButtonObjectExist = 1;
    v11 = missionListViewItem;
  }
  else
  {
    v10 = 0;
    v11 = 0LL;
  }
  if ( !MissionListViewItemDraw__SetItem(
          (MissionListViewItemDraw_o *)this,
          missionListViewItem,
          mode,
          listViewManager,
          0LL) )
    return 0;
  if ( !mode )
    return 1;
  if ( !listViewManager )
    goto LABEL_12;
  v12 = LOBYTE(MasterMissionListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(listViewManager->klass->vtable._0_Equals.methodPtr) < (unsigned int)v12 )
  {
    listViewManager = 0LL;
LABEL_12:
    if ( !v10 )
      return 0;
    goto LABEL_20;
  }
  if ( (MasterMissionListViewManager_c *)listViewManager->klass->_2.typeHierarchy[v12 - 1] != MasterMissionListViewManager_TypeInfo )
    listViewManager = 0LL;
  if ( !v10 )
    return 0;
LABEL_20:
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)listViewManager, 0LL, 0LL) )
    return 0;
  MasterMissionListViewItemDraw__SetRewardItemIcon(
    this,
    (MasterMissionListViewItem_o *)v11,
    (MasterMissionListViewManager_o *)listViewManager,
    v13);
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
  const MethodInfo *v7; // x1
  Il2CppObject *Master_object; // x22
  GiftEntity_array *GiftListById; // x0
  struct GiftEntity_array **p_giftEntityList; // x22
  int32_t v11; // w2
  int32_t v12; // w3
  __int64 v13; // x8
  Il2CppObject *MasterData_object; // x23
  int32_t m_CachedPtr; // w24
  System_String_o *v16; // x23
  struct GiftEntity_array *v17; // x22
  GiftEntity_o *v18; // x8
  int v19; // w9
  int32_t v20; // w2
  struct GiftEntity_array *v21; // x8
  GiftEntity_o *v22; // x8
  ItemIconComponent_o *itemIcon; // x21
  int num; // w8
  int32_t v25; // w2
  int32_t Type; // w0
  int32_t rewardObjectId; // w22
  int32_t v28; // w23
  const MethodInfo *v29; // x1
  int32_t iconId; // w1
  int32_t v31; // w3

  v5 = item;
  v6 = this;
  if ( (byte_4A5DC27 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventMissionAddMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_GiftMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    this = (MasterMissionListViewItemDraw_o *)sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5DC27 = 1;
  }
  if ( !v5 )
    goto LABEL_63;
  if ( MissionListViewItem__get_EventRewardType((MissionListViewItem_o *)v5, 0LL) != 1 )
    goto LABEL_50;
  if ( MasterMissionListViewItem__get_IsHideReward(v5, v7) )
  {
    this = (MasterMissionListViewItemDraw_o *)v6->fields.itemIcon;
    v6->fields.isMultipleReward = 0;
    if ( !this )
      goto LABEL_63;
    ItemIconComponent__SetItemImage((ItemIconComponent_o *)this, 99, 0LL);
    goto LABEL_50;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_GiftMaster___);
  this = (MasterMissionListViewItemDraw_o *)MissionListViewItem__get_EventMissionEntity(
                                              (MissionListViewItem_o *)v5,
                                              0LL);
  if ( !this )
    goto LABEL_63;
  if ( !Master_object )
    goto LABEL_63;
  GiftListById = GiftMaster__GetGiftListById((GiftMaster_o *)Master_object, HIDWORD(this->fields.missionNoLb), 0LL);
  v6->fields.giftEntityList = GiftListById;
  p_giftEntityList = &v6->fields.giftEntityList;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v6->fields.giftEntityList, (int32_t)GiftListById, v11, v12);
  if ( !v6->fields.giftEntityList )
    goto LABEL_63;
  v13 = *(_QWORD *)&v6->fields.giftEntityList->max_length;
  if ( !v13 )
    return;
  v6->fields.isMultipleReward = (int)v13 > 1;
  this = (MasterMissionListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_63;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)this,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventMissionAddMaster___);
  this = (MasterMissionListViewItemDraw_o *)MissionListViewItem__get_EventMissionEntity(
                                              (MissionListViewItem_o *)v5,
                                              0LL);
  if ( !this )
    goto LABEL_63;
  m_CachedPtr = this->fields.m_CachedPtr;
  this = (MasterMissionListViewItemDraw_o *)MissionListViewItem__get_EventMissionEntity(
                                              (MissionListViewItem_o *)v5,
                                              0LL);
  if ( !this || !MasterData_object )
    goto LABEL_63;
  v16 = EventMissionAddMaster__GetEventMissionChangeRewardIcon(
          (EventMissionAddMaster_o *)MasterData_object,
          m_CachedPtr,
          HIDWORD(this->fields.m_CancellationTokenSource),
          0,
          0LL);
  if ( !System_String__IsNullOrEmpty(v16, 0LL) )
  {
    v6->fields.isMultipleReward = 0;
    v5->fields.isHideRewardDetail = 1;
LABEL_34:
    this = (MasterMissionListViewItemDraw_o *)System_String__IsNullOrEmpty(v16, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v21 = *p_giftEntityList;
      if ( !*p_giftEntityList )
        goto LABEL_63;
      if ( !v21->max_length )
        goto LABEL_64;
      v22 = v21->m_Items[0];
      if ( !v22 )
        goto LABEL_63;
      item = (MasterMissionListViewItem_o *)(unsigned int)v22->fields.prioredIconId;
      itemIcon = v6->fields.itemIcon;
      if ( (int)item < 1 )
      {
        Type = MissionListViewItem__get_Type((MissionListViewItem_o *)v5, 0LL);
        rewardObjectId = v5->fields.rewardObjectId;
        v28 = Type;
        this = (MasterMissionListViewItemDraw_o *)MissionListViewItem__get_DisplayGiftNum(
                                                    (MissionListViewItem_o *)v5,
                                                    0LL);
        if ( !itemIcon )
          goto LABEL_63;
        ItemIconComponent__SetGift_38144896(itemIcon, v28, rewardObjectId, (int32_t)this, 0, 0LL);
      }
      else
      {
        if ( !itemIcon )
          goto LABEL_63;
        num = v22->fields.num;
        if ( num <= 1 )
          v25 = -1;
        else
          v25 = num;
        ItemIconComponent__SetItemImage_38147292(v6->fields.itemIcon, (int32_t)item, v25, 0LL);
      }
    }
    else
    {
      this = (MasterMissionListViewItemDraw_o *)v6->fields.itemIcon;
      if ( !this )
        goto LABEL_63;
      ItemIconComponent__SetItemImageByName((ItemIconComponent_o *)this, v16, 0LL);
    }
    this = (MasterMissionListViewItemDraw_o *)v6->fields.itemIcon;
    if ( !this )
      goto LABEL_63;
    ItemIconComponent__SetAlpha((ItemIconComponent_o *)this, 1.0, 0LL);
    goto LABEL_50;
  }
  if ( !v6->fields.isMultipleReward )
    goto LABEL_34;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (MasterMissionListViewItemDraw_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)manager, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_50;
  v17 = *p_giftEntityList;
  if ( !v17 || !manager )
    goto LABEL_63;
  this = (MasterMissionListViewItemDraw_o *)MissionListViewManager__GetAlphaAnimCnt(
                                              (MissionListViewManager_o *)manager,
                                              v17->max_length,
                                              0LL);
  if ( (unsigned int)this >= v17->max_length )
LABEL_64:
    sub_1B88814(this, item);
  v18 = v17->m_Items[(int)this];
  if ( !v18 )
    goto LABEL_63;
  item = (MasterMissionListViewItem_o *)(unsigned int)v18->fields.prioredIconId;
  this = (MasterMissionListViewItemDraw_o *)v6->fields.itemIcon;
  v19 = v18->fields.num;
  if ( (int)item < 1 )
  {
    if ( !this )
      goto LABEL_63;
    if ( v19 <= 1 )
      v31 = -1;
    else
      v31 = v18->fields.num;
    ItemIconComponent__SetGift_38144896(
      (ItemIconComponent_o *)this,
      v18->fields.type,
      v18->fields.objectId,
      v31,
      0,
      0LL);
  }
  else
  {
    if ( !this )
      goto LABEL_63;
    if ( v19 <= 1 )
      v20 = -1;
    else
      v20 = v18->fields.num;
    ItemIconComponent__SetItemImage_38147292((ItemIconComponent_o *)this, (int32_t)item, v20, 0LL);
  }
LABEL_50:
  if ( MissionListViewItem__get_EventRewardType((MissionListViewItem_o *)v5, 0LL) == 3 )
  {
    if ( MasterMissionListViewItem__get_IsHideReward(v5, v29) )
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
    sub_1B8880C(this, item);
  }
}


void __fastcall MasterMissionListViewItemDraw__UpdateDispResTime(
        MasterMissionListViewItemDraw_o *this,
        MissionListViewItem_o *missionListViewItem,
        int64_t nowTime,
        const MethodInfo *method)
{
  __int64 methodPtr_low; // x10
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

  if ( (byte_4A5DC28 & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&MasterMissionListViewItem_TypeInfo);
    sub_1B885B0(&MissionListViewItemDraw_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&StringLiteral_13337/*"TIME_REST_QUEST"*/);
    sub_1B885B0(&StringLiteral_9306/*"NO_TIME_INFO"*/);
    sub_1B885B0(&StringLiteral_13325/*"TIME_REST_ACHIVE"*/);
    byte_4A5DC28 = 1;
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
          resTimeLb = this->fields.resTimeLb;
          EventMissionEntity = MissionListViewItem__get_EventMissionEntity(missionListViewItem, 0LL);
          if ( !EventMissionEntity )
            goto LABEL_36;
          if ( progStatus == 3 )
          {
            v14 = *((_QWORD *)EventMissionEntity + 9);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            RestTime = LocalizationManager__GetRestTime(v14, 0LL);
            if ( !MissionListViewItemDraw_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(MissionListViewItemDraw_TypeInfo);
            goto LABEL_28;
          }
          v17 = *((_QWORD *)EventMissionEntity + 8);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          RestTime = LocalizationManager__GetRestTime(v17, 0LL);
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
            v11 = LocalizationManager__Get((System_String_o *)StringLiteral_9306/*"NO_TIME_INFO"*/, 0LL);
          }
          else
          {
            resTimeLb = this->fields.resTimeLb;
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            NextDayStartTime = NetworkManager__getNextDayStartTime(0LL);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v11 = LocalizationManager__GetRestTime(NextDayStartTime, 0LL);
          }
          RestTime = v11;
          if ( !MissionListViewItemDraw_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(MissionListViewItemDraw_TypeInfo);
          if ( progStatus == 3 )
          {
LABEL_28:
            v16 = &StringLiteral_13325/*"TIME_REST_ACHIVE"*/;
            goto LABEL_34;
          }
        }
        v16 = &StringLiteral_13337/*"TIME_REST_QUEST"*/;
LABEL_34:
        EventMissionEntity = MissionListViewItemDraw__GetTimeText((System_String_o *)*v16, RestTime, 0LL);
        if ( resTimeLb )
        {
          UILabel__set_text(resTimeLb, (System_String_o *)EventMissionEntity, 0LL);
          return;
        }
LABEL_36:
        sub_1B8880C(EventMissionEntity, v13);
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
  EventMissionEntity_o *EventMissionEntity; // x0
  __int64 v10; // x1
  __int64 resTimeLb; // x0
  int64_t oldTime; // x23
  int64_t v13; // x22
  MissionListViewItemDraw_c *v14; // x8

  if ( (byte_4A5DC29 & 1) == 0 )
  {
    sub_1B885B0(&MissionListViewItemDraw_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5DC29 = 1;
  }
  if ( item )
  {
    EventMissionEntity = MissionListViewItem__get_EventMissionEntity((MissionListViewItem_o *)item, 0LL);
    if ( mode )
    {
      if ( EventMissionEntity && item->fields.missionType != 2 )
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
          v13 = resTimeLb;
          v14 = MissionListViewItemDraw_TypeInfo;
          if ( !MissionListViewItemDraw_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(MissionListViewItemDraw_TypeInfo);
            v14 = MissionListViewItemDraw_TypeInfo;
          }
          if ( v13 - oldTime >= v14->static_fields->TIME_UPDATE_ITVL_SEC )
          {
            resTimeLb = ((__int64 (__fastcall *)(MasterMissionListViewItemDraw_o *, MasterMissionListViewItem_o *, int64_t, Il2CppMethodPointer))this->klass->vtable._9_UpdateDispResTime.method)(
                          this,
                          item,
                          v13,
                          this->klass->vtable._10_SetInput.methodPtr);
            this->fields.oldTime = v13;
          }
        }
        if ( !manager )
LABEL_19:
          sub_1B8880C(resTimeLb, v10);
        MissionListViewItemDraw__SetRewardIconAlpha(
          (MissionListViewItemDraw_o *)this,
          manager->fields.alphaAnimNow,
          0LL);
      }
    }
  }
}