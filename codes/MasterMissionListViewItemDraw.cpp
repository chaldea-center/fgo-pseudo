void __fastcall MasterMissionListViewItemDraw___ctor(MasterMissionListViewItemDraw_o *this, const MethodInfo *method)
{
  if ( (byte_4C24AA0 & 1) == 0 )
  {
    sub_1C3B764(&MissionListViewItemDraw_TypeInfo, method);
    byte_4C24AA0 = 1;
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
    sub_1C3B9C8(this, manager);
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
      ItemIconComponent__SetItemImage_39568612((ItemIconComponent_o *)this, (int32_t)manager, v7, 0LL);
      return;
    }
LABEL_18:
    sub_1C3B9C0(this, manager);
  }
  if ( !this )
    goto LABEL_18;
  if ( num <= 1 )
    v8 = -1;
  else
    v8 = v5->fields.num;
  ItemIconComponent__SetGift_39566180((ItemIconComponent_o *)this, v5->fields.type, v5->fields.objectId, v8, 0, 0LL);
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
  int64_t Time; // x0
  int klass; // w8
  int64_t v10; // x21
  UnityEngine_GameObject_c *v11; // x8
  _BOOL4 v12; // w8
  bool v13; // w22

  v3 = missionListviewItem;
  if ( (byte_4C24A9C & 1) == 0 )
  {
    sub_1C3B764(&MasterMissionListViewItem_TypeInfo, missionListviewItem);
    sub_1C3B764(&NetworkManager_TypeInfo, v5);
    byte_4C24A9C = 1;
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
        sub_1C3B9C0(timeOverInfo, missionListviewItem);
      }
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Time = NetworkManager__getTime(0LL);
      klass = (int)v3[1].klass;
      v10 = Time;
      if ( klass == 3 )
      {
        timeOverInfo = (UnityEngine_GameObject_o *)MissionListViewItem__get_EventMissionEntity(v3, 0LL);
        if ( !timeOverInfo )
          goto LABEL_41;
        if ( v10 >= (__int64)timeOverInfo[2].monitor )
        {
          timeOverInfo = (UnityEngine_GameObject_o *)MissionListViewItem__get_EventMissionEntity(v3, 0LL);
          if ( !timeOverInfo )
            goto LABEL_41;
          v11 = timeOverInfo[3].klass;
          goto LABEL_27;
        }
      }
      else
      {
        if ( klass != 1 )
        {
          v13 = 0;
          if ( v3->fields.progStatus != 3 )
            this->fields.isDispTime = 1;
LABEL_34:
          ((void (__fastcall *)(MasterMissionListViewItemDraw_o *, MissionListViewItem_o *, int64_t, Il2CppMethodPointer))this->klass->vtable._9_UpdateDispResTime.method)(
            this,
            v3,
            v10,
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
                goto LABEL_40;
            }
          }
          goto LABEL_41;
        }
        timeOverInfo = (UnityEngine_GameObject_o *)MissionListViewItem__get_EventMissionEntity(v3, 0LL);
        if ( !timeOverInfo )
          goto LABEL_41;
        if ( v10 >= (__int64)timeOverInfo[2].monitor )
        {
          timeOverInfo = (UnityEngine_GameObject_o *)MissionListViewItem__get_EventMissionEntity(v3, 0LL);
          if ( !timeOverInfo )
            goto LABEL_41;
          v11 = *(UnityEngine_GameObject_c **)&timeOverInfo[2].fields.m_CachedPtr;
LABEL_27:
          v12 = v10 < (__int64)v11;
          goto LABEL_28;
        }
      }
      v12 = 0;
LABEL_28:
      if ( !this )
        goto LABEL_41;
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 methodPtr_low; // x10
  int v12; // w24
  MissionListViewItem_o *v13; // x23
  __int64 v14; // x10
  const MethodInfo *v15; // x3

  if ( (byte_4C24A9B & 1) == 0 )
  {
    sub_1C3B764(&MasterMissionListViewItem_TypeInfo, missionListViewItem);
    sub_1C3B764(&MasterMissionListViewManager_TypeInfo, v9);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v10);
    byte_4C24A9B = 1;
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
          0LL) )
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
  const MethodInfo *v10; // x1
  int32_t missionNoLb_high; // w22
  GiftEntity_array *IconGiftEntities; // x0
  struct GiftEntity_array **p_giftEntityList; // x22
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  __int64 v20; // x8
  Il2CppObject *MasterData_object; // x23
  int32_t m_CachedPtr; // w24
  System_String_o *v23; // x23
  struct GiftEntity_array *v24; // x22
  GiftEntity_o *v25; // x8
  int v26; // w9
  int32_t v27; // w2
  struct GiftEntity_array *v28; // x8
  GiftEntity_o *v29; // x8
  ItemIconComponent_o *itemIcon; // x21
  int num; // w8
  int32_t v32; // w2
  int32_t Type; // w0
  int32_t rewardObjectId; // w22
  int32_t v35; // w23
  const MethodInfo *v36; // x1
  int32_t iconId; // w1
  int32_t v38; // w3

  v5 = item;
  v6 = this;
  if ( (byte_4C24A9D & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_EventMissionAddMaster___, item);
    sub_1C3B764(&MissionInfoMaker_TypeInfo, v7);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v8);
    this = (MasterMissionListViewItemDraw_o *)sub_1C3B764(
                                                &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                                v9);
    byte_4C24A9D = 1;
  }
  if ( !v5 )
    goto LABEL_62;
  if ( MissionListViewItem__get_EventRewardType((MissionListViewItem_o *)v5, 0LL) != 1 )
    goto LABEL_49;
  if ( MasterMissionListViewItem__get_IsHideReward(v5, v10) )
  {
    this = (MasterMissionListViewItemDraw_o *)v6->fields.itemIcon;
    v6->fields.isMultipleReward = 0;
    if ( !this )
      goto LABEL_62;
    ItemIconComponent__SetItemImage((ItemIconComponent_o *)this, 99, 0LL);
    goto LABEL_49;
  }
  this = (MasterMissionListViewItemDraw_o *)MissionListViewItem__get_EventMissionEntity(
                                              (MissionListViewItem_o *)v5,
                                              0LL);
  if ( !this )
    goto LABEL_62;
  missionNoLb_high = HIDWORD(this->fields.missionNoLb);
  if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
  IconGiftEntities = MissionInfoMaker__GetIconGiftEntities(missionNoLb_high, 0LL);
  v6->fields.giftEntityList = IconGiftEntities;
  p_giftEntityList = &v6->fields.giftEntityList;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&v6->fields.giftEntityList,
    (int64_t)IconGiftEntities,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  if ( !v6->fields.giftEntityList )
    goto LABEL_62;
  v20 = *(_QWORD *)&v6->fields.giftEntityList->max_length;
  if ( !v20 )
    return;
  v6->fields.isMultipleReward = (int)v20 > 1;
  this = (MasterMissionListViewItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_62;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)this,
                        (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_EventMissionAddMaster___);
  this = (MasterMissionListViewItemDraw_o *)MissionListViewItem__get_EventMissionEntity(
                                              (MissionListViewItem_o *)v5,
                                              0LL);
  if ( !this )
    goto LABEL_62;
  m_CachedPtr = this->fields.m_CachedPtr;
  this = (MasterMissionListViewItemDraw_o *)MissionListViewItem__get_EventMissionEntity(
                                              (MissionListViewItem_o *)v5,
                                              0LL);
  if ( !this || !MasterData_object )
    goto LABEL_62;
  v23 = EventMissionAddMaster__GetEventMissionChangeRewardIcon(
          (EventMissionAddMaster_o *)MasterData_object,
          m_CachedPtr,
          HIDWORD(this->fields.m_CancellationTokenSource),
          0,
          0LL);
  if ( !System_String__IsNullOrEmpty(v23, 0LL) )
  {
    v6->fields.isMultipleReward = 0;
    v5->fields.isHideRewardDetail = 1;
LABEL_33:
    this = (MasterMissionListViewItemDraw_o *)System_String__IsNullOrEmpty(v23, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v28 = *p_giftEntityList;
      if ( !*p_giftEntityList )
        goto LABEL_62;
      if ( !v28->max_length )
        goto LABEL_63;
      v29 = v28->m_Items[0];
      if ( !v29 )
        goto LABEL_62;
      item = (MasterMissionListViewItem_o *)(unsigned int)v29->fields.prioredIconId;
      itemIcon = v6->fields.itemIcon;
      if ( (int)item < 1 )
      {
        Type = MissionListViewItem__get_Type((MissionListViewItem_o *)v5, 0LL);
        rewardObjectId = v5->fields.rewardObjectId;
        v35 = Type;
        this = (MasterMissionListViewItemDraw_o *)MissionListViewItem__get_DisplayGiftNum(
                                                    (MissionListViewItem_o *)v5,
                                                    0LL);
        if ( !itemIcon )
          goto LABEL_62;
        ItemIconComponent__SetGift_39566180(itemIcon, v35, rewardObjectId, (int32_t)this, 0, 0LL);
      }
      else
      {
        if ( !itemIcon )
          goto LABEL_62;
        num = v29->fields.num;
        if ( num <= 1 )
          v32 = -1;
        else
          v32 = num;
        ItemIconComponent__SetItemImage_39568612(v6->fields.itemIcon, (int32_t)item, v32, 0LL);
      }
    }
    else
    {
      this = (MasterMissionListViewItemDraw_o *)v6->fields.itemIcon;
      if ( !this )
        goto LABEL_62;
      ItemIconComponent__SetItemImageByName((ItemIconComponent_o *)this, v23, 0LL);
    }
    this = (MasterMissionListViewItemDraw_o *)v6->fields.itemIcon;
    if ( !this )
      goto LABEL_62;
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
  v24 = *p_giftEntityList;
  if ( !v24 || !manager )
    goto LABEL_62;
  this = (MasterMissionListViewItemDraw_o *)MissionListViewManager__GetAlphaAnimCnt(
                                              (MissionListViewManager_o *)manager,
                                              v24->max_length,
                                              0LL);
  if ( (unsigned int)this >= v24->max_length )
LABEL_63:
    sub_1C3B9C8(this, item);
  v25 = v24->m_Items[(int)this];
  if ( !v25 )
    goto LABEL_62;
  item = (MasterMissionListViewItem_o *)(unsigned int)v25->fields.prioredIconId;
  this = (MasterMissionListViewItemDraw_o *)v6->fields.itemIcon;
  v26 = v25->fields.num;
  if ( (int)item < 1 )
  {
    if ( !this )
      goto LABEL_62;
    if ( v26 <= 1 )
      v38 = -1;
    else
      v38 = v25->fields.num;
    ItemIconComponent__SetGift_39566180(
      (ItemIconComponent_o *)this,
      v25->fields.type,
      v25->fields.objectId,
      v38,
      0,
      0LL);
  }
  else
  {
    if ( !this )
      goto LABEL_62;
    if ( v26 <= 1 )
      v27 = -1;
    else
      v27 = v25->fields.num;
    ItemIconComponent__SetItemImage_39568612((ItemIconComponent_o *)this, (int32_t)item, v27, 0LL);
  }
LABEL_49:
  if ( MissionListViewItem__get_EventRewardType((MissionListViewItem_o *)v5, 0LL) == 3 )
  {
    if ( MasterMissionListViewItem__get_IsHideReward(v5, v36) )
    {
      this = (MasterMissionListViewItemDraw_o *)v6->fields.itemIcon;
      v6->fields.isMultipleReward = 0;
      if ( this )
      {
        iconId = 99;
LABEL_56:
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
        goto LABEL_56;
      }
    }
LABEL_62:
    sub_1C3B9C0(this, item);
  }
}


void __fastcall MasterMissionListViewItemDraw__UpdateDispResTime(
        MasterMissionListViewItemDraw_o *this,
        MissionListViewItem_o *missionListViewItem,
        int64_t nowTime,
        const MethodInfo *method)
{
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
  void *EventMissionEntity; // x0
  __int64 v19; // x1
  int64_t v20; // x20
  System_String_o *RestTime; // x20
  __int64 *v22; // x8
  int64_t v23; // x20

  if ( (byte_4C24A9E & 1) == 0 )
  {
    sub_1C3B764(&LocalizationManager_TypeInfo, missionListViewItem);
    sub_1C3B764(&MasterMissionListViewItem_TypeInfo, v6);
    sub_1C3B764(&MissionListViewItemDraw_TypeInfo, v7);
    sub_1C3B764(&NetworkManager_TypeInfo, v8);
    sub_1C3B764(&StringLiteral_13631/*"The current position on the Reader is neither an element nor an attribute."*/, v9);
    sub_1C3B764(&StringLiteral_9496/*"ORDEAL_CALL_CLEAR_BGM_NAME"*/, v10);
    sub_1C3B764(&StringLiteral_13619/*"The constraint name {0} is already used in the schema."*/, v11);
    byte_4C24A9E = 1;
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
            v20 = *((_QWORD *)EventMissionEntity + 9);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            RestTime = LocalizationManager__GetRestTime(v20, 0LL);
            if ( !MissionListViewItemDraw_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(MissionListViewItemDraw_TypeInfo);
            goto LABEL_28;
          }
          v23 = *((_QWORD *)EventMissionEntity + 8);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          RestTime = LocalizationManager__GetRestTime(v23, 0LL);
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
            v17 = LocalizationManager__Get((System_String_o *)StringLiteral_9496/*"ORDEAL_CALL_CLEAR_BGM_NAME"*/, 0LL);
          }
          else
          {
            resTimeLb = this->fields.resTimeLb;
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
            v22 = &StringLiteral_13619/*"The constraint name {0} is already used in the schema."*/;
            goto LABEL_34;
          }
        }
        v22 = &StringLiteral_13631/*"The current position on the Reader is neither an element nor an attribute."*/;
LABEL_34:
        EventMissionEntity = MissionListViewItemDraw__GetTimeText((System_String_o *)*v22, RestTime, 0LL);
        if ( resTimeLb )
        {
          UILabel__set_text(resTimeLb, (System_String_o *)EventMissionEntity, 0LL);
          return;
        }
LABEL_36:
        sub_1C3B9C0(EventMissionEntity, v19);
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
  EventMissionEntity_o *EventMissionEntity; // x0
  __int64 v11; // x1
  __int64 resTimeLb; // x0
  int64_t oldTime; // x23
  int64_t v14; // x22
  MissionListViewItemDraw_c *v15; // x8

  if ( (byte_4C24A9F & 1) == 0 )
  {
    sub_1C3B764(&MissionListViewItemDraw_TypeInfo, item);
    sub_1C3B764(&NetworkManager_TypeInfo, v9);
    byte_4C24A9F = 1;
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
          v14 = resTimeLb;
          v15 = MissionListViewItemDraw_TypeInfo;
          if ( !MissionListViewItemDraw_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(MissionListViewItemDraw_TypeInfo);
            v15 = MissionListViewItemDraw_TypeInfo;
          }
          if ( v14 - oldTime >= v15->static_fields->TIME_UPDATE_ITVL_SEC )
          {
            resTimeLb = ((__int64 (__fastcall *)(MasterMissionListViewItemDraw_o *, MasterMissionListViewItem_o *, int64_t, Il2CppMethodPointer))this->klass->vtable._9_UpdateDispResTime.method)(
                          this,
                          item,
                          v14,
                          this->klass->vtable._10_SetInput.methodPtr);
            this->fields.oldTime = v14;
          }
        }
        if ( !manager )
LABEL_19:
          sub_1C3B9C0(resTimeLb, v11);
        MissionListViewItemDraw__SetRewardIconAlpha(
          (MissionListViewItemDraw_o *)this,
          manager->fields.alphaAnimNow,
          0LL);
      }
    }
  }
}