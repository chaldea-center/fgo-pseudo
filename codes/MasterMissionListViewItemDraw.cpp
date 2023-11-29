void __fastcall MasterMissionListViewItemDraw___ctor(MasterMissionListViewItemDraw_o *this, const MethodInfo *method)
{
  if ( (byte_40FB23C & 1) == 0 )
  {
    sub_B16FFC(&MissionListViewItemDraw_TypeInfo, method);
    byte_40FB23C = 1;
  }
  if ( (BYTE3(MissionListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MissionListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionListViewItemDraw_TypeInfo);
  }
  MissionListViewItemDraw___ctor((MissionListViewItemDraw_o *)this, 0LL);
}


void __fastcall MasterMissionListViewItemDraw__ChangeNextRewardIcon(
        MasterMissionListViewItemDraw_o *this,
        MasterMissionListViewManager_o *manager,
        const MethodInfo *method)
{
  struct GiftEntity_array *giftEntityList; // x20
  __int64 AlphaAnimCnt; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  int32_t *v8; // x9
  int32_t v9; // w1
  ItemIconComponent_o *itemIcon; // x0
  int v11; // w8
  int32_t v12; // w2
  int32_t v13; // w3

  if ( !this->fields.isMultipleReward )
    return;
  giftEntityList = this->fields.giftEntityList;
  if ( !giftEntityList || !manager )
    goto LABEL_18;
  AlphaAnimCnt = MissionListViewManager__GetAlphaAnimCnt(
                   (MissionListViewManager_o *)manager,
                   giftEntityList->max_length,
                   0LL);
  if ( (unsigned int)AlphaAnimCnt >= giftEntityList->max_length )
  {
    sub_B17100(AlphaAnimCnt, v6, v7);
    sub_B170A0();
  }
  v8 = (int32_t *)giftEntityList->m_Items[(int)AlphaAnimCnt];
  if ( !v8 )
    goto LABEL_18;
  v9 = v8[11];
  itemIcon = this->fields.itemIcon;
  v11 = v8[7];
  if ( v9 >= 1 )
  {
    if ( itemIcon )
    {
      if ( v11 <= 1 )
        v12 = -1;
      else
        v12 = v8[7];
      ItemIconComponent__SetItemImage_28930192(itemIcon, v9, v12, 0LL);
      return;
    }
LABEL_18:
    sub_B170D4();
  }
  if ( !itemIcon )
    goto LABEL_18;
  if ( v11 <= 1 )
    v13 = -1;
  else
    v13 = v8[7];
  ItemIconComponent__SetGift(itemIcon, v8[5], v8[6], v13, 0, 0LL);
}


void __fastcall MasterMissionListViewItemDraw__InitDispResTime(
        MasterMissionListViewItemDraw_o *this,
        MissionListViewItem_o *missionListviewItem,
        const MethodInfo *method)
{
  MissionListViewItem_o *v3; // x20
  __int64 v5; // x1
  __int64 v6; // x10
  MasterMissionListViewItem_c *v7; // x9
  UnityEngine_GameObject_o *timeOverInfo; // x0
  UnityEngine_Component_o *resTimeLb; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  char v11; // w1
  int64_t Time; // x0
  int klass; // w8
  int64_t v14; // x21
  EventMissionEntity_o *v15; // x0
  EventMissionEntity_o *v16; // x0
  int64_t closedAt; // x8
  EventMissionEntity_o *EventMissionEntity; // x0
  _BOOL4 v19; // w8
  bool v20; // w22
  EventMissionEntity_o *v21; // x0
  UnityEngine_GameObject_o *v22; // x0
  UnityEngine_Component_o *v23; // x0

  v3 = missionListviewItem;
  if ( (byte_40FB238 & 1) == 0 )
  {
    sub_B16FFC(&MasterMissionListViewItem_TypeInfo, missionListviewItem);
    sub_B16FFC(&NetworkManager_TypeInfo, v5);
    byte_40FB238 = 1;
  }
  if ( v3 )
  {
    v6 = *(&MasterMissionListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v3->klass->_2.bitflags2 + 1) >= (unsigned int)v6 )
    {
      v7 = (MasterMissionListViewItem_c *)v3->klass->_2.typeHierarchy[v6 - 1];
      if ( v7 != MasterMissionListViewItem_TypeInfo )
        v3 = 0LL;
      if ( v7 == MasterMissionListViewItem_TypeInfo )
      {
        if ( !v3 )
          goto LABEL_44;
        if ( v3->fields.progStatus == 4 )
        {
          timeOverInfo = this->fields.timeOverInfo;
          this->fields.isDispTime = 0;
          if ( timeOverInfo )
          {
            UnityEngine_GameObject__SetActive(timeOverInfo, 0, 0LL);
            resTimeLb = (UnityEngine_Component_o *)this->fields.resTimeLb;
            if ( resTimeLb )
            {
              gameObject = UnityEngine_Component__get_gameObject(resTimeLb, 0LL);
              if ( gameObject )
              {
                v11 = 0;
LABEL_42:
                UnityEngine_GameObject__SetActive(gameObject, v11, 0LL);
                return;
              }
            }
          }
          goto LABEL_44;
        }
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        Time = NetworkManager__getTime(0LL);
        klass = (int)v3[1].klass;
        v14 = Time;
        if ( klass == 3 )
        {
          EventMissionEntity = MissionListViewItem__get_EventMissionEntity(v3, 0LL);
          if ( !EventMissionEntity )
            goto LABEL_44;
          if ( v14 >= EventMissionEntity->fields.startedAt )
          {
            v21 = MissionListViewItem__get_EventMissionEntity(v3, 0LL);
            if ( !v21 )
              goto LABEL_44;
            closedAt = v21->fields.closedAt;
LABEL_32:
            v19 = v14 < closedAt;
            if ( !this )
              goto LABEL_44;
LABEL_33:
            this->fields.isDispTime = v19;
            if ( v19 || v3->fields.progStatus == 3 )
            {
              v20 = 0;
              this->fields.oldTime = 0LL;
            }
            else
            {
              v20 = 1;
              v3->fields.isNowMission = 1;
            }
            goto LABEL_38;
          }
        }
        else
        {
          if ( klass != 1 )
          {
            v20 = 0;
            if ( v3->fields.progStatus != 3 )
              this->fields.isDispTime = 1;
LABEL_38:
            ((void (__fastcall *)(MasterMissionListViewItemDraw_o *, MissionListViewItem_o *, int64_t, Il2CppMethodPointer))this->klass->vtable._9_UpdateDispResTime.method)(
              this,
              v3,
              v14,
              this->klass->vtable._10_SetInput.methodPtr);
            v22 = this->fields.timeOverInfo;
            if ( v22 )
            {
              UnityEngine_GameObject__SetActive(v22, v20, 0LL);
              v23 = (UnityEngine_Component_o *)this->fields.resTimeLb;
              if ( v23 )
              {
                gameObject = UnityEngine_Component__get_gameObject(v23, 0LL);
                if ( this->fields.isDispTime )
                {
                  v11 = 1;
                  if ( gameObject )
                    goto LABEL_42;
                }
                else
                {
                  v11 = v3->fields.progStatus == 3;
                  if ( gameObject )
                    goto LABEL_42;
                }
              }
            }
LABEL_44:
            sub_B170D4();
          }
          v15 = MissionListViewItem__get_EventMissionEntity(v3, 0LL);
          if ( !v15 )
            goto LABEL_44;
          if ( v14 >= v15->fields.startedAt )
          {
            v16 = MissionListViewItem__get_EventMissionEntity(v3, 0LL);
            if ( !v16 )
              goto LABEL_44;
            closedAt = v16->fields.endedAt;
            goto LABEL_32;
          }
        }
        v19 = 0;
        if ( !this )
          goto LABEL_44;
        goto LABEL_33;
      }
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
  MissionListViewItem_o *v7; // x21
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x10
  __int64 v12; // x10
  const MethodInfo *v13; // x3

  v7 = missionListViewItem;
  if ( (byte_40FB237 & 1) == 0 )
  {
    sub_B16FFC(&MasterMissionListViewItem_TypeInfo, missionListViewItem);
    sub_B16FFC(&MasterMissionListViewManager_TypeInfo, v9);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v10);
    byte_40FB237 = 1;
  }
  if ( !MissionListViewItemDraw__SetItem((MissionListViewItemDraw_o *)this, v7, mode, listViewManager, 0LL) )
    return 0;
  if ( !mode )
    return 1;
  if ( !v7 )
  {
LABEL_8:
    if ( !listViewManager )
      goto LABEL_9;
    goto LABEL_14;
  }
  v11 = *(&MasterMissionListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v7->klass->_2.bitflags2 + 1) < (unsigned int)v11 )
  {
    v7 = 0LL;
    goto LABEL_8;
  }
  if ( (MasterMissionListViewItem_c *)v7->klass->_2.typeHierarchy[v11 - 1] != MasterMissionListViewItem_TypeInfo )
    v7 = 0LL;
  if ( !listViewManager )
  {
LABEL_9:
    if ( !v7 )
      return 0;
    goto LABEL_20;
  }
LABEL_14:
  v12 = *(&MasterMissionListViewManager_TypeInfo->_2.bitflags2 + 1);
  if ( *(&listViewManager->klass->_2.bitflags2 + 1) >= (unsigned int)v12 )
  {
    if ( (MasterMissionListViewManager_c *)listViewManager->klass->_2.typeHierarchy[v12 - 1] != MasterMissionListViewManager_TypeInfo )
      listViewManager = 0LL;
    if ( !v7 )
      return 0;
  }
  else
  {
    listViewManager = 0LL;
    if ( !v7 )
      return 0;
  }
LABEL_20:
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)listViewManager, 0LL, 0LL) )
    return 0;
  MasterMissionListViewItemDraw__SetRewardItemIcon(
    this,
    (MasterMissionListViewItem_o *)v7,
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  const MethodInfo *v11; // x1
  ItemIconComponent_o *itemIcon; // x0
  const MethodInfo *v13; // x1
  ItemIconComponent_o *v14; // x0
  int32_t iconId; // w1
  GiftMaster_o *Master_WarQuestSelectionMaster; // x22
  EventMissionEntity_o *EventMissionEntity; // x0
  struct GiftEntity_array *GiftListById; // x0
  struct GiftEntity_array **p_giftEntityList; // x22
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  __int64 v26; // x8
  WebViewManager_o *Instance; // x0
  EventMissionAddMaster_o *MasterData_WarQuestSelectionMaster; // x23
  EventMissionEntity_o *v29; // x0
  int32_t id; // w24
  EventMissionEntity_o *v31; // x0
  System_String_o *v32; // x23
  struct GiftEntity_array *v33; // x22
  __int64 AlphaAnimCnt; // x0
  __int64 v35; // x1
  __int64 v36; // x2
  int32_t *v37; // x9
  int32_t v38; // w1
  ItemIconComponent_o *v39; // x0
  int v40; // w8
  int32_t v41; // w2
  struct GiftEntity_array *v42; // x8
  GiftEntity_o *v43; // x8
  int32_t prioredIconId; // w1
  ItemIconComponent_o *v45; // x21
  int num; // w8
  int32_t v47; // w2
  ItemIconComponent_o *v48; // x0
  int32_t v49; // w3
  int32_t Type; // w0
  int32_t rewardObjectId; // w22
  int32_t v52; // w23
  int32_t DisplayGiftNum; // w0
  ItemIconComponent_o *v54; // x0

  if ( (byte_40FB239 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMissionAddMaster___, item);
    sub_B16FFC(&Method_DataManager_GetMaster_GiftMaster___, v7);
    sub_B16FFC(&DataManager_TypeInfo, v8);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v9);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_40FB239 = 1;
  }
  if ( !item )
    goto LABEL_65;
  if ( MissionListViewItem__get_EventRewardType((MissionListViewItem_o *)item, 0LL) != 1 )
    goto LABEL_8;
  if ( MasterMissionListViewItem__get_IsHideReward(item, v11) )
  {
    itemIcon = this->fields.itemIcon;
    this->fields.isMultipleReward = 0;
    if ( !itemIcon )
      goto LABEL_65;
    ItemIconComponent__SetItemImage(itemIcon, 99, 0LL);
    goto LABEL_8;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (GiftMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_GiftMaster___);
  EventMissionEntity = MissionListViewItem__get_EventMissionEntity((MissionListViewItem_o *)item, 0LL);
  if ( !EventMissionEntity )
    goto LABEL_65;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_65;
  GiftListById = GiftMaster__GetGiftListById(Master_WarQuestSelectionMaster, EventMissionEntity->fields.giftId, 0LL);
  this->fields.giftEntityList = GiftListById;
  p_giftEntityList = &this->fields.giftEntityList;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.giftEntityList,
    (System_Int32_array **)GiftListById,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  if ( !this->fields.giftEntityList )
    goto LABEL_65;
  v26 = *(_QWORD *)&this->fields.giftEntityList->max_length;
  if ( !v26 )
    return;
  this->fields.isMultipleReward = (int)v26 > 1;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_65;
  MasterData_WarQuestSelectionMaster = (EventMissionAddMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                    (DataManager_o *)Instance,
                                                                    (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMissionAddMaster___);
  v29 = MissionListViewItem__get_EventMissionEntity((MissionListViewItem_o *)item, 0LL);
  if ( !v29 )
    goto LABEL_65;
  id = v29->fields.id;
  v31 = MissionListViewItem__get_EventMissionEntity((MissionListViewItem_o *)item, 0LL);
  if ( !v31 || !MasterData_WarQuestSelectionMaster )
    goto LABEL_65;
  v32 = EventMissionAddMaster__GetEventMissionChangeRewardIcon(
          MasterData_WarQuestSelectionMaster,
          id,
          v31->fields.missionTargetId,
          0,
          0LL);
  if ( !System_String__IsNullOrEmpty(v32, 0LL) )
  {
    this->fields.isMultipleReward = 0;
    item->fields.isHideRewardDetail = 1;
  }
  if ( this->fields.isMultipleReward )
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)manager, 0LL, 0LL) )
      goto LABEL_8;
    v33 = *p_giftEntityList;
    if ( !v33 || !manager )
      goto LABEL_65;
    AlphaAnimCnt = MissionListViewManager__GetAlphaAnimCnt((MissionListViewManager_o *)manager, v33->max_length, 0LL);
    if ( (unsigned int)AlphaAnimCnt < v33->max_length )
    {
      v37 = (int32_t *)v33->m_Items[(int)AlphaAnimCnt];
      if ( !v37 )
        goto LABEL_65;
      v38 = v37[11];
      v39 = this->fields.itemIcon;
      v40 = v37[7];
      if ( v38 < 1 )
      {
        if ( !v39 )
          goto LABEL_65;
        if ( v40 <= 1 )
          v49 = -1;
        else
          v49 = v37[7];
        ItemIconComponent__SetGift(v39, v37[5], v37[6], v49, 0, 0LL);
      }
      else
      {
        if ( !v39 )
          goto LABEL_65;
        if ( v40 <= 1 )
          v41 = -1;
        else
          v41 = v37[7];
        ItemIconComponent__SetItemImage_28930192(v39, v38, v41, 0LL);
      }
      goto LABEL_8;
    }
LABEL_66:
    sub_B17100(AlphaAnimCnt, v35, v36);
    sub_B170A0();
  }
  AlphaAnimCnt = System_String__IsNullOrEmpty(v32, 0LL);
  if ( (AlphaAnimCnt & 1) != 0 )
  {
    v42 = *p_giftEntityList;
    if ( !*p_giftEntityList )
      goto LABEL_65;
    if ( !v42->max_length )
      goto LABEL_66;
    v43 = v42->m_Items[0];
    if ( !v43 )
      goto LABEL_65;
    prioredIconId = v43->fields.prioredIconId;
    v45 = this->fields.itemIcon;
    if ( prioredIconId < 1 )
    {
      Type = MissionListViewItem__get_Type((MissionListViewItem_o *)item, 0LL);
      rewardObjectId = item->fields.rewardObjectId;
      v52 = Type;
      DisplayGiftNum = MissionListViewItem__get_DisplayGiftNum((MissionListViewItem_o *)item, 0LL);
      if ( !v45 )
        goto LABEL_65;
      ItemIconComponent__SetGift(v45, v52, rewardObjectId, DisplayGiftNum, 0, 0LL);
    }
    else
    {
      if ( !v45 )
        goto LABEL_65;
      num = v43->fields.num;
      if ( num <= 1 )
        v47 = -1;
      else
        v47 = num;
      ItemIconComponent__SetItemImage_28930192(this->fields.itemIcon, prioredIconId, v47, 0LL);
    }
  }
  else
  {
    v48 = this->fields.itemIcon;
    if ( !v48 )
      goto LABEL_65;
    ItemIconComponent__SetItemImageByName(v48, v32, 0LL);
  }
  v54 = this->fields.itemIcon;
  if ( !v54 )
    goto LABEL_65;
  ItemIconComponent__SetAlpha(v54, 1.0, 0LL);
LABEL_8:
  if ( MissionListViewItem__get_EventRewardType((MissionListViewItem_o *)item, 0LL) == 3 )
  {
    if ( MasterMissionListViewItem__get_IsHideReward(item, v13) )
    {
      v14 = this->fields.itemIcon;
      this->fields.isMultipleReward = 0;
      if ( v14 )
      {
        iconId = 99;
LABEL_43:
        ItemIconComponent__SetItemImage(v14, iconId, 0LL);
        return;
      }
    }
    else
    {
      v14 = this->fields.itemIcon;
      if ( v14 )
      {
        iconId = item->fields.iconId;
        goto LABEL_43;
      }
    }
LABEL_65:
    sub_B170D4();
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
  __int64 v12; // x10
  MasterMissionListViewItem_c *v13; // x9
  MissionListViewItem_o *v14; // x0
  int32_t progStatus; // w20
  int klass; // w8
  UILabel_o *resTimeLb; // x19
  int64_t closedAt; // x20
  LocalizationManager_c *v19; // x8
  EventMissionEntity_o *EventMissionEntity; // x0
  System_String_o *RestTime; // x0
  System_String_o *v22; // x20
  __int64 *v23; // x8
  LocalizationManager_c *v24; // x8
  int64_t endedAt; // x20
  System_String_o *v26; // x0
  System_String_o *TimeText; // x0

  if ( (byte_40FB23A & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, missionListViewItem);
    sub_B16FFC(&MasterMissionListViewItem_TypeInfo, v6);
    sub_B16FFC(&MissionListViewItemDraw_TypeInfo, v7);
    sub_B16FFC(&NetworkManager_TypeInfo, v8);
    sub_B16FFC(&StringLiteral_13348, v9);
    sub_B16FFC(&StringLiteral_9331, v10);
    sub_B16FFC(&StringLiteral_13336, v11);
    byte_40FB23A = 1;
  }
  if ( missionListViewItem )
  {
    v12 = *(&MasterMissionListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&missionListViewItem->klass->_2.bitflags2 + 1) >= (unsigned int)v12 )
    {
      v13 = (MasterMissionListViewItem_c *)missionListViewItem->klass->_2.typeHierarchy[v12 - 1];
      v14 = v13 == MasterMissionListViewItem_TypeInfo ? missionListViewItem : 0LL;
      if ( v13 == MasterMissionListViewItem_TypeInfo )
      {
        if ( !v14 )
          goto LABEL_55;
        progStatus = v14->fields.progStatus;
        if ( progStatus == 4 )
          return;
        klass = (int)v14[1].klass;
        if ( klass == 3 || klass == 1 )
        {
          resTimeLb = this->fields.resTimeLb;
          EventMissionEntity = MissionListViewItem__get_EventMissionEntity(v14, 0LL);
          if ( !EventMissionEntity )
            goto LABEL_55;
          if ( progStatus == 3 )
          {
            v19 = LocalizationManager_TypeInfo;
            closedAt = EventMissionEntity->fields.closedAt;
LABEL_23:
            if ( (BYTE3(v19->vtable._0_Equals.methodPtr) & 4) != 0 && !v19->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(v19);
            RestTime = LocalizationManager__GetRestTime(closedAt, 0LL);
LABEL_32:
            v22 = RestTime;
            if ( (BYTE3(MissionListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !MissionListViewItemDraw_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(MissionListViewItemDraw_TypeInfo);
            }
            v23 = &StringLiteral_13336;
            goto LABEL_53;
          }
          v24 = LocalizationManager_TypeInfo;
          endedAt = EventMissionEntity->fields.endedAt;
        }
        else
        {
          if ( klass )
          {
            resTimeLb = this->fields.resTimeLb;
            if ( progStatus == 3 )
            {
              if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              RestTime = LocalizationManager__Get((System_String_o *)StringLiteral_9331, 0LL);
              goto LABEL_32;
            }
            if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v26 = LocalizationManager__Get((System_String_o *)StringLiteral_9331, 0LL);
LABEL_49:
            v22 = v26;
            if ( (BYTE3(MissionListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !MissionListViewItemDraw_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(MissionListViewItemDraw_TypeInfo);
            }
            v23 = &StringLiteral_13348;
LABEL_53:
            TimeText = MissionListViewItemDraw__GetTimeText((System_String_o *)*v23, v22, 0LL);
            if ( resTimeLb )
            {
              UILabel__set_text(resTimeLb, TimeText, 0LL);
              return;
            }
LABEL_55:
            sub_B170D4();
          }
          resTimeLb = this->fields.resTimeLb;
          if ( progStatus == 3 )
          {
            if ( (WORD1(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
              && !NetworkManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            }
            closedAt = NetworkManager__getNextDayStartTime(0LL);
            v19 = LocalizationManager_TypeInfo;
            goto LABEL_23;
          }
          if ( (WORD1(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          }
          endedAt = NetworkManager__getNextDayStartTime(0LL);
          v24 = LocalizationManager_TypeInfo;
        }
        if ( (BYTE3(v24->vtable._0_Equals.methodPtr) & 4) != 0 && !v24->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v24);
        v26 = LocalizationManager__GetRestTime(endedAt, 0LL);
        goto LABEL_49;
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
  UnityEngine_Component_o *resTimeLb; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  int64_t Time; // x0
  int64_t oldTime; // x23
  int64_t v15; // x22
  MissionListViewItemDraw_c *v16; // x8

  if ( (byte_40FB23B & 1) == 0 )
  {
    sub_B16FFC(&MissionListViewItemDraw_TypeInfo, item);
    sub_B16FFC(&NetworkManager_TypeInfo, v9);
    byte_40FB23B = 1;
  }
  if ( item )
  {
    EventMissionEntity = MissionListViewItem__get_EventMissionEntity((MissionListViewItem_o *)item, 0LL);
    if ( mode )
    {
      if ( EventMissionEntity && item->fields.missionType != 2 )
      {
        resTimeLb = (UnityEngine_Component_o *)this->fields.resTimeLb;
        if ( !resTimeLb )
          goto LABEL_21;
        gameObject = UnityEngine_Component__get_gameObject(resTimeLb, 0LL);
        if ( !gameObject )
          goto LABEL_21;
        if ( UnityEngine_GameObject__get_activeSelf(gameObject, 0LL) )
        {
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          }
          Time = NetworkManager__getTime(0LL);
          oldTime = this->fields.oldTime;
          v15 = Time;
          v16 = MissionListViewItemDraw_TypeInfo;
          if ( (BYTE3(MissionListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !MissionListViewItemDraw_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(MissionListViewItemDraw_TypeInfo);
            v16 = MissionListViewItemDraw_TypeInfo;
          }
          if ( v15 - oldTime >= v16->static_fields->TIME_UPDATE_ITVL_SEC )
          {
            ((void (__fastcall *)(MasterMissionListViewItemDraw_o *, MasterMissionListViewItem_o *, int64_t, Il2CppMethodPointer))this->klass->vtable._9_UpdateDispResTime.method)(
              this,
              item,
              v15,
              this->klass->vtable._10_SetInput.methodPtr);
            this->fields.oldTime = v15;
          }
        }
        if ( !manager )
LABEL_21:
          sub_B170D4();
        MissionListViewItemDraw__SetRewardIconAlpha(
          (MissionListViewItemDraw_o *)this,
          manager->fields.alphaAnimNow,
          0LL);
      }
    }
  }
}