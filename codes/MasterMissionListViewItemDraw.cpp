void __fastcall MasterMissionListViewItemDraw___ctor(MasterMissionListViewItemDraw_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E89BD & 1) == 0 )
  {
    sub_B5D5C4(&MissionListViewItemDraw_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E89BD = 1;
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
  MasterMissionListViewItemDraw_o *v4; // x19
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
  this = (MasterMissionListViewItemDraw_o *)MissionListViewManager__GetAlphaAnimCnt(
                                              (MissionListViewManager_o *)manager,
                                              giftEntityList->max_length,
                                              0LL);
  if ( (unsigned int)this >= giftEntityList->max_length )
  {
    v9 = sub_B5D6C8(this);
    sub_B5D668(v9, 0LL);
  }
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
      ItemIconComponent__SetItemImage_28499576((ItemIconComponent_o *)this, (int32_t)manager, v7, 0LL);
      return;
    }
LABEL_18:
    sub_B5D69C(this, manager);
  }
  if ( !this )
    goto LABEL_18;
  if ( num <= 1 )
    v8 = -1;
  else
    v8 = v5->fields.num;
  ItemIconComponent__SetGift((ItemIconComponent_o *)this, v5->fields.type, v5->fields.objectId, v8, 0, 0LL);
}


void __fastcall MasterMissionListViewItemDraw__InitDispResTime(
        MasterMissionListViewItemDraw_o *this,
        MissionListViewItem_o *missionListviewItem,
        const MethodInfo *method)
{
  __int64 v3; // x3
  MissionListViewItem_o *v4; // x20
  MasterMissionListViewItemDraw_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  __int64 v9; // x10
  MasterMissionListViewItem_c *v10; // x9
  int64_t Time; // x0
  int klass; // w8
  __int64 v13; // x21
  struct UILabel_o *missionNoLb; // x8
  _BOOL4 v15; // w8
  bool v16; // w22

  v4 = missionListviewItem;
  v5 = this;
  if ( (byte_42E89B9 & 1) == 0 )
  {
    sub_B5D5C4(&MasterMissionListViewItem_TypeInfo, (_DWORD)missionListviewItem, (_DWORD)method, v3);
    this = (MasterMissionListViewItemDraw_o *)sub_B5D5C4(&NetworkManager_TypeInfo, v6, v7, v8);
    byte_42E89B9 = 1;
  }
  if ( v4 )
  {
    v9 = *(&MasterMissionListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v4->klass->_2.bitflags2 + 1) >= (unsigned int)v9 )
    {
      v10 = (MasterMissionListViewItem_c *)v4->klass->_2.typeHierarchy[v9 - 1];
      if ( v10 != MasterMissionListViewItem_TypeInfo )
        v4 = 0LL;
      if ( v10 == MasterMissionListViewItem_TypeInfo )
      {
        if ( !v4 )
          goto LABEL_44;
        if ( v4->fields.progStatus == 4 )
        {
          this = (MasterMissionListViewItemDraw_o *)v5->fields.timeOverInfo;
          v5->fields.isDispTime = 0;
          if ( this )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
            this = (MasterMissionListViewItemDraw_o *)v5->fields.resTimeLb;
            if ( this )
            {
              this = (MasterMissionListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)this,
                                                          0LL);
              if ( this )
              {
                LOBYTE(missionListviewItem) = 0;
LABEL_42:
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, (bool)missionListviewItem, 0LL);
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
        klass = (int)v4[1].klass;
        v13 = Time;
        if ( klass == 3 )
        {
          this = (MasterMissionListViewItemDraw_o *)MissionListViewItem__get_EventMissionEntity(v4, 0LL);
          if ( !this )
            goto LABEL_44;
          if ( v13 >= (__int64)this->fields.itemIcon )
          {
            this = (MasterMissionListViewItemDraw_o *)MissionListViewItem__get_EventMissionEntity(v4, 0LL);
            if ( !this )
              goto LABEL_44;
            missionNoLb = this->fields.missionNoLb;
LABEL_32:
            v15 = v13 < (__int64)missionNoLb;
            if ( !v5 )
              goto LABEL_44;
LABEL_33:
            v5->fields.isDispTime = v15;
            if ( v15 || v4->fields.progStatus == 3 )
            {
              v16 = 0;
              v5->fields.oldTime = 0LL;
            }
            else
            {
              v16 = 1;
              v4->fields.isNowMission = 1;
            }
            goto LABEL_38;
          }
        }
        else
        {
          if ( klass != 1 )
          {
            v16 = 0;
            if ( v4->fields.progStatus != 3 )
              v5->fields.isDispTime = 1;
LABEL_38:
            ((void (__fastcall *)(MasterMissionListViewItemDraw_o *, MissionListViewItem_o *, __int64, Il2CppMethodPointer))v5->klass->vtable._9_UpdateDispResTime.method)(
              v5,
              v4,
              v13,
              v5->klass->vtable._10_SetInput.methodPtr);
            this = (MasterMissionListViewItemDraw_o *)v5->fields.timeOverInfo;
            if ( this )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v16, 0LL);
              this = (MasterMissionListViewItemDraw_o *)v5->fields.resTimeLb;
              if ( this )
              {
                this = (MasterMissionListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                            (UnityEngine_Component_o *)this,
                                                            0LL);
                if ( v5->fields.isDispTime )
                {
                  missionListviewItem = (MissionListViewItem_o *)(&dword_0 + 1);
                  if ( this )
                    goto LABEL_42;
                }
                else
                {
                  missionListviewItem = (MissionListViewItem_o *)(v4->fields.progStatus == 3);
                  if ( this )
                    goto LABEL_42;
                }
              }
            }
LABEL_44:
            sub_B5D69C(this, missionListviewItem);
          }
          this = (MasterMissionListViewItemDraw_o *)MissionListViewItem__get_EventMissionEntity(v4, 0LL);
          if ( !this )
            goto LABEL_44;
          if ( v13 >= (__int64)this->fields.itemIcon )
          {
            this = (MasterMissionListViewItemDraw_o *)MissionListViewItem__get_EventMissionEntity(v4, 0LL);
            if ( !this )
              goto LABEL_44;
            missionNoLb = this->fields.missionCondLb;
            goto LABEL_32;
          }
        }
        v15 = 0;
        if ( !v5 )
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
  ListViewManager_o *v5; // x20
  MissionListViewItem_o *v7; // x21
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  __int64 v15; // x10
  __int64 v16; // x10
  const MethodInfo *v17; // x3

  v5 = listViewManager;
  v7 = missionListViewItem;
  if ( (byte_42E89B8 & 1) == 0 )
  {
    sub_B5D5C4(&MasterMissionListViewItem_TypeInfo, (_DWORD)missionListViewItem, mode, listViewManager);
    sub_B5D5C4(&MasterMissionListViewManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v12, v13, v14);
    byte_42E89B8 = 1;
  }
  if ( !MissionListViewItemDraw__SetItem((MissionListViewItemDraw_o *)this, v7, mode, v5, 0LL) )
    return 0;
  if ( !mode )
    return 1;
  if ( !v7 )
  {
LABEL_8:
    if ( !v5 )
      goto LABEL_9;
    goto LABEL_14;
  }
  v15 = *(&MasterMissionListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v7->klass->_2.bitflags2 + 1) < (unsigned int)v15 )
  {
    v7 = 0LL;
    goto LABEL_8;
  }
  if ( (MasterMissionListViewItem_c *)v7->klass->_2.typeHierarchy[v15 - 1] != MasterMissionListViewItem_TypeInfo )
    v7 = 0LL;
  if ( !v5 )
  {
LABEL_9:
    if ( !v7 )
      return 0;
    goto LABEL_20;
  }
LABEL_14:
  v16 = *(&MasterMissionListViewManager_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v5->klass->_2.bitflags2 + 1) >= (unsigned int)v16 )
  {
    if ( (MasterMissionListViewManager_c *)v5->klass->_2.typeHierarchy[v16 - 1] != MasterMissionListViewManager_TypeInfo )
      v5 = 0LL;
    if ( !v7 )
      return 0;
  }
  else
  {
    v5 = 0LL;
    if ( !v7 )
      return 0;
  }
LABEL_20:
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v5, 0LL, 0LL) )
    return 0;
  MasterMissionListViewItemDraw__SetRewardItemIcon(
    this,
    (MasterMissionListViewItem_o *)v7,
    (MasterMissionListViewManager_o *)v5,
    v17);
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  const MethodInfo *v19; // x1
  const MethodInfo *v20; // x1
  int32_t iconId; // w1
  GiftMaster_o *Master_WarQuestSelectionMaster; // x22
  System_Int32_array **GiftListById; // x0
  struct GiftEntity_array **p_giftEntityList; // x22
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  __int64 v31; // x8
  EventMissionAddMaster_o *MasterData_WarQuestSelectionMaster; // x23
  int32_t m_CachedPtr; // w24
  System_String_o *v34; // x23
  struct GiftEntity_array *v35; // x22
  GiftEntity_o *v36; // x9
  int num; // w8
  int32_t v38; // w2
  struct GiftEntity_array *v39; // x8
  GiftEntity_o *v40; // x8
  ItemIconComponent_o *itemIcon; // x21
  int v42; // w8
  int32_t v43; // w2
  int32_t v44; // w3
  int32_t Type; // w0
  int32_t rewardObjectId; // w22
  int32_t v47; // w23
  __int64 v48; // x0

  v5 = item;
  v6 = this;
  if ( (byte_42E89BA & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventMissionAddMaster___, (_DWORD)item, (_DWORD)manager, method);
    sub_B5D5C4(&Method_DataManager_GetMaster_GiftMaster___, v7, v8, v9);
    sub_B5D5C4(&DataManager_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v13, v14, v15);
    this = (MasterMissionListViewItemDraw_o *)sub_B5D5C4(
                                                &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                                v16,
                                                v17,
                                                v18);
    byte_42E89BA = 1;
  }
  if ( !v5 )
    goto LABEL_65;
  if ( MissionListViewItem__get_EventRewardType((MissionListViewItem_o *)v5, 0LL) != 1 )
    goto LABEL_8;
  if ( MasterMissionListViewItem__get_IsHideReward(v5, v19) )
  {
    this = (MasterMissionListViewItemDraw_o *)v6->fields.itemIcon;
    v6->fields.isMultipleReward = 0;
    if ( !this )
      goto LABEL_65;
    ItemIconComponent__SetItemImage((ItemIconComponent_o *)this, 99, 0LL);
    goto LABEL_8;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (GiftMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_GiftMaster___);
  this = (MasterMissionListViewItemDraw_o *)MissionListViewItem__get_EventMissionEntity(
                                              (MissionListViewItem_o *)v5,
                                              0LL);
  if ( !this )
    goto LABEL_65;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_65;
  GiftListById = (System_Int32_array **)GiftMaster__GetGiftListById(
                                          Master_WarQuestSelectionMaster,
                                          HIDWORD(this->fields.iconLabel),
                                          0LL);
  v6->fields.giftEntityList = (struct GiftEntity_array *)GiftListById;
  p_giftEntityList = &v6->fields.giftEntityList;
  sub_B5D560((BattleServantConfConponent_o *)&v6->fields.giftEntityList, GiftListById, v25, v26, v27, v28, v29, v30);
  if ( !v6->fields.giftEntityList )
    goto LABEL_65;
  v31 = *(_QWORD *)&v6->fields.giftEntityList->max_length;
  if ( !v31 )
    return;
  v6->fields.isMultipleReward = (int)v31 > 1;
  this = (MasterMissionListViewItemDraw_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_65;
  MasterData_WarQuestSelectionMaster = (EventMissionAddMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                    (DataManager_o *)this,
                                                                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMissionAddMaster___);
  this = (MasterMissionListViewItemDraw_o *)MissionListViewItem__get_EventMissionEntity(
                                              (MissionListViewItem_o *)v5,
                                              0LL);
  if ( !this )
    goto LABEL_65;
  m_CachedPtr = this->fields.m_CachedPtr;
  this = (MasterMissionListViewItemDraw_o *)MissionListViewItem__get_EventMissionEntity(
                                              (MissionListViewItem_o *)v5,
                                              0LL);
  if ( !this || !MasterData_WarQuestSelectionMaster )
    goto LABEL_65;
  v34 = EventMissionAddMaster__GetEventMissionChangeRewardIcon(
          MasterData_WarQuestSelectionMaster,
          m_CachedPtr,
          HIDWORD(this->fields.baseSprite),
          0,
          0LL);
  if ( !System_String__IsNullOrEmpty(v34, 0LL) )
  {
    v6->fields.isMultipleReward = 0;
    v5->fields.isHideRewardDetail = 1;
  }
  if ( v6->fields.isMultipleReward )
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (MasterMissionListViewItemDraw_o *)UnityEngine_Object__op_Inequality(
                                                (UnityEngine_Object_o *)manager,
                                                0LL,
                                                0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
      goto LABEL_8;
    v35 = *p_giftEntityList;
    if ( !v35 || !manager )
      goto LABEL_65;
    this = (MasterMissionListViewItemDraw_o *)MissionListViewManager__GetAlphaAnimCnt(
                                                (MissionListViewManager_o *)manager,
                                                v35->max_length,
                                                0LL);
    if ( (unsigned int)this < v35->max_length )
    {
      v36 = v35->m_Items[(int)this];
      if ( !v36 )
        goto LABEL_65;
      item = (MasterMissionListViewItem_o *)(unsigned int)v36->fields.prioredIconId;
      this = (MasterMissionListViewItemDraw_o *)v6->fields.itemIcon;
      num = v36->fields.num;
      if ( (int)item < 1 )
      {
        if ( !this )
          goto LABEL_65;
        if ( num <= 1 )
          v44 = -1;
        else
          v44 = v36->fields.num;
        ItemIconComponent__SetGift((ItemIconComponent_o *)this, v36->fields.type, v36->fields.objectId, v44, 0, 0LL);
      }
      else
      {
        if ( !this )
          goto LABEL_65;
        if ( num <= 1 )
          v38 = -1;
        else
          v38 = v36->fields.num;
        ItemIconComponent__SetItemImage_28499576((ItemIconComponent_o *)this, (int32_t)item, v38, 0LL);
      }
      goto LABEL_8;
    }
LABEL_66:
    v48 = sub_B5D6C8(this);
    sub_B5D668(v48, 0LL);
  }
  this = (MasterMissionListViewItemDraw_o *)System_String__IsNullOrEmpty(v34, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v39 = *p_giftEntityList;
    if ( !*p_giftEntityList )
      goto LABEL_65;
    if ( !v39->max_length )
      goto LABEL_66;
    v40 = v39->m_Items[0];
    if ( !v40 )
      goto LABEL_65;
    item = (MasterMissionListViewItem_o *)(unsigned int)v40->fields.prioredIconId;
    itemIcon = v6->fields.itemIcon;
    if ( (int)item < 1 )
    {
      Type = MissionListViewItem__get_Type((MissionListViewItem_o *)v5, 0LL);
      rewardObjectId = v5->fields.rewardObjectId;
      v47 = Type;
      this = (MasterMissionListViewItemDraw_o *)MissionListViewItem__get_DisplayGiftNum(
                                                  (MissionListViewItem_o *)v5,
                                                  0LL);
      if ( !itemIcon )
        goto LABEL_65;
      ItemIconComponent__SetGift(itemIcon, v47, rewardObjectId, (int32_t)this, 0, 0LL);
    }
    else
    {
      if ( !itemIcon )
        goto LABEL_65;
      v42 = v40->fields.num;
      if ( v42 <= 1 )
        v43 = -1;
      else
        v43 = v42;
      ItemIconComponent__SetItemImage_28499576(v6->fields.itemIcon, (int32_t)item, v43, 0LL);
    }
  }
  else
  {
    this = (MasterMissionListViewItemDraw_o *)v6->fields.itemIcon;
    if ( !this )
      goto LABEL_65;
    ItemIconComponent__SetItemImageByName((ItemIconComponent_o *)this, v34, 0LL);
  }
  this = (MasterMissionListViewItemDraw_o *)v6->fields.itemIcon;
  if ( !this )
    goto LABEL_65;
  ItemIconComponent__SetAlpha((ItemIconComponent_o *)this, 1.0, 0LL);
LABEL_8:
  if ( MissionListViewItem__get_EventRewardType((MissionListViewItem_o *)v5, 0LL) == 3 )
  {
    if ( MasterMissionListViewItem__get_IsHideReward(v5, v20) )
    {
      this = (MasterMissionListViewItemDraw_o *)v6->fields.itemIcon;
      v6->fields.isMultipleReward = 0;
      if ( this )
      {
        iconId = 99;
LABEL_43:
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
        goto LABEL_43;
      }
    }
LABEL_65:
    sub_B5D69C(this, item);
  }
}


void __fastcall MasterMissionListViewItemDraw__UpdateDispResTime(
        MasterMissionListViewItemDraw_o *this,
        MissionListViewItem_o *missionListViewItem,
        int64_t nowTime,
        const MethodInfo *method)
{
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  __int64 v24; // x10
  MasterMissionListViewItem_c *v25; // x9
  MissionListViewItem_o *EventMissionEntity; // x0
  int32_t progStatus; // w20
  int klass; // w8
  UILabel_o *resTimeLb; // x19
  int64_t sortValue2; // x20
  LocalizationManager_c *v31; // x8
  System_String_o *RestTime; // x0
  System_String_o *v33; // x20
  __int64 *v34; // x8
  LocalizationManager_c *v35; // x8
  int64_t sortValue1B; // x20
  System_String_o *v37; // x0

  if ( (byte_42E89BB & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)missionListViewItem, nowTime, method);
    sub_B5D5C4(&MasterMissionListViewItem_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&MissionListViewItemDraw_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&NetworkManager_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_13560/*"TIME_REST_QUEST"*/, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_9457/*"NO_TIME_INFO"*/, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_13548/*"TIME_REST_ACHIVE"*/, v21, v22, v23);
    byte_42E89BB = 1;
  }
  if ( missionListViewItem )
  {
    v24 = *(&MasterMissionListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&missionListViewItem->klass->_2.bitflags2 + 1) >= (unsigned int)v24 )
    {
      v25 = (MasterMissionListViewItem_c *)missionListViewItem->klass->_2.typeHierarchy[v24 - 1];
      EventMissionEntity = v25 == MasterMissionListViewItem_TypeInfo ? missionListViewItem : 0LL;
      if ( v25 == MasterMissionListViewItem_TypeInfo )
      {
        if ( !EventMissionEntity )
          goto LABEL_55;
        progStatus = EventMissionEntity->fields.progStatus;
        if ( progStatus == 4 )
          return;
        klass = (int)EventMissionEntity[1].klass;
        if ( klass == 3 || klass == 1 )
        {
          resTimeLb = this->fields.resTimeLb;
          EventMissionEntity = (MissionListViewItem_o *)MissionListViewItem__get_EventMissionEntity(
                                                          EventMissionEntity,
                                                          0LL);
          if ( !EventMissionEntity )
            goto LABEL_55;
          if ( progStatus == 3 )
          {
            v31 = LocalizationManager_TypeInfo;
            sortValue2 = EventMissionEntity->fields.sortValue2;
LABEL_23:
            if ( (BYTE3(v31->vtable._0_Equals.methodPtr) & 4) != 0 && !v31->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(v31);
            RestTime = LocalizationManager__GetRestTime(sortValue2, 0LL);
LABEL_32:
            v33 = RestTime;
            if ( (BYTE3(MissionListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !MissionListViewItemDraw_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(MissionListViewItemDraw_TypeInfo);
            }
            v34 = &StringLiteral_13548/*"TIME_REST_ACHIVE"*/;
            goto LABEL_53;
          }
          v35 = LocalizationManager_TypeInfo;
          sortValue1B = EventMissionEntity->fields.sortValue1B;
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
              RestTime = LocalizationManager__Get((System_String_o *)StringLiteral_9457/*"NO_TIME_INFO"*/, 0LL);
              goto LABEL_32;
            }
            if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v37 = LocalizationManager__Get((System_String_o *)StringLiteral_9457/*"NO_TIME_INFO"*/, 0LL);
LABEL_49:
            v33 = v37;
            if ( (BYTE3(MissionListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !MissionListViewItemDraw_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(MissionListViewItemDraw_TypeInfo);
            }
            v34 = &StringLiteral_13560/*"TIME_REST_QUEST"*/;
LABEL_53:
            EventMissionEntity = (MissionListViewItem_o *)MissionListViewItemDraw__GetTimeText(
                                                            (System_String_o *)*v34,
                                                            v33,
                                                            0LL);
            if ( resTimeLb )
            {
              UILabel__set_text(resTimeLb, (System_String_o *)EventMissionEntity, 0LL);
              return;
            }
LABEL_55:
            sub_B5D69C(EventMissionEntity, missionListViewItem);
          }
          resTimeLb = this->fields.resTimeLb;
          if ( progStatus == 3 )
          {
            if ( (WORD1(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
              && !NetworkManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            }
            sortValue2 = NetworkManager__getNextDayStartTime(0LL);
            v31 = LocalizationManager_TypeInfo;
            goto LABEL_23;
          }
          if ( (WORD1(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          }
          sortValue1B = NetworkManager__getNextDayStartTime(0LL);
          v35 = LocalizationManager_TypeInfo;
        }
        if ( (BYTE3(v35->vtable._0_Equals.methodPtr) & 4) != 0 && !v35->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v35);
        v37 = LocalizationManager__GetRestTime(sortValue1B, 0LL);
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  EventMissionEntity_o *EventMissionEntity; // x0
  __int64 v13; // x1
  __int64 resTimeLb; // x0
  int64_t oldTime; // x23
  int64_t v16; // x22
  MissionListViewItemDraw_c *v17; // x8

  if ( (byte_42E89BC & 1) == 0 )
  {
    sub_B5D5C4(&MissionListViewItemDraw_TypeInfo, (_DWORD)item, mode, manager);
    sub_B5D5C4(&NetworkManager_TypeInfo, v9, v10, v11);
    byte_42E89BC = 1;
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
          goto LABEL_21;
        resTimeLb = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)resTimeLb, 0LL);
        if ( !resTimeLb )
          goto LABEL_21;
        resTimeLb = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)resTimeLb, 0LL);
        if ( (resTimeLb & 1) != 0 )
        {
          if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          }
          resTimeLb = NetworkManager__getTime(0LL);
          oldTime = this->fields.oldTime;
          v16 = resTimeLb;
          v17 = MissionListViewItemDraw_TypeInfo;
          if ( (BYTE3(MissionListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !MissionListViewItemDraw_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(MissionListViewItemDraw_TypeInfo);
            v17 = MissionListViewItemDraw_TypeInfo;
          }
          if ( v16 - oldTime >= v17->static_fields->TIME_UPDATE_ITVL_SEC )
          {
            resTimeLb = ((__int64 (__fastcall *)(MasterMissionListViewItemDraw_o *, MasterMissionListViewItem_o *, int64_t, Il2CppMethodPointer))this->klass->vtable._9_UpdateDispResTime.method)(
                          this,
                          item,
                          v16,
                          this->klass->vtable._10_SetInput.methodPtr);
            this->fields.oldTime = v16;
          }
        }
        if ( !manager )
LABEL_21:
          sub_B5D69C(resTimeLb, v13);
        MissionListViewItemDraw__SetRewardIconAlpha(
          (MissionListViewItemDraw_o *)this,
          manager->fields.alphaAnimNow,
          0LL);
      }
    }
  }
}