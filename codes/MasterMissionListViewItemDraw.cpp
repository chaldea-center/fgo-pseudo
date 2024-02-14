void __fastcall MasterMissionListViewItemDraw___ctor(MasterMissionListViewItemDraw_o *this, const MethodInfo *method)
{
  if ( (byte_4216AE7 & 1) == 0 )
  {
    sub_B0D8A4(&MissionListViewItemDraw_TypeInfo, method);
    byte_4216AE7 = 1;
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
  int32_t *v5; // x9
  int32_t v6; // w1
  int v7; // w8
  int32_t v8; // w2
  int32_t v9; // w3
  __int64 v10; // x0

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
    v10 = sub_B0D9A8(this);
    sub_B0D948(v10, 0LL);
  }
  v5 = (int32_t *)giftEntityList->m_Items[(int)this];
  if ( !v5 )
    goto LABEL_18;
  v6 = v5[11];
  this = (MasterMissionListViewItemDraw_o *)v4->fields.itemIcon;
  v7 = v5[7];
  if ( v6 >= 1 )
  {
    if ( this )
    {
      if ( v7 <= 1 )
        v8 = -1;
      else
        v8 = v5[7];
      ItemIconComponent__SetItemImage_26857580((ItemIconComponent_o *)this, v6, v8, 0LL);
      return;
    }
LABEL_18:
    sub_B0D97C(this);
  }
  if ( !this )
    goto LABEL_18;
  if ( v7 <= 1 )
    v9 = -1;
  else
    v9 = v5[7];
  ItemIconComponent__SetGift((ItemIconComponent_o *)this, v5[5], v5[6], v9, 0, 0LL);
}


void __fastcall MasterMissionListViewItemDraw__InitDispResTime(
        MasterMissionListViewItemDraw_o *this,
        MissionListViewItem_o *missionListviewItem,
        const MethodInfo *method)
{
  MissionListViewItem_o *v3; // x20
  MasterMissionListViewItemDraw_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x10
  MasterMissionListViewItem_c *v7; // x9
  char v8; // w1
  int64_t Time; // x0
  int klass; // w8
  __int64 v11; // x21
  struct UILabel_o *missionNoLb; // x8
  _BOOL4 v13; // w8
  bool v14; // w22

  v3 = missionListviewItem;
  v4 = this;
  if ( (byte_4216AE3 & 1) == 0 )
  {
    sub_B0D8A4(&MasterMissionListViewItem_TypeInfo, missionListviewItem);
    this = (MasterMissionListViewItemDraw_o *)sub_B0D8A4(&NetworkManager_TypeInfo, v5);
    byte_4216AE3 = 1;
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
          this = (MasterMissionListViewItemDraw_o *)v4->fields.timeOverInfo;
          v4->fields.isDispTime = 0;
          if ( this )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
            this = (MasterMissionListViewItemDraw_o *)v4->fields.resTimeLb;
            if ( this )
            {
              this = (MasterMissionListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)this,
                                                          0LL);
              if ( this )
              {
                v8 = 0;
LABEL_42:
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v8, 0LL);
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
        v11 = Time;
        if ( klass == 3 )
        {
          this = (MasterMissionListViewItemDraw_o *)MissionListViewItem__get_EventMissionEntity(v3, 0LL);
          if ( !this )
            goto LABEL_44;
          if ( v11 >= (__int64)this->fields.itemIcon )
          {
            this = (MasterMissionListViewItemDraw_o *)MissionListViewItem__get_EventMissionEntity(v3, 0LL);
            if ( !this )
              goto LABEL_44;
            missionNoLb = this->fields.missionNoLb;
LABEL_32:
            v13 = v11 < (__int64)missionNoLb;
            if ( !v4 )
              goto LABEL_44;
LABEL_33:
            v4->fields.isDispTime = v13;
            if ( v13 || v3->fields.progStatus == 3 )
            {
              v14 = 0;
              v4->fields.oldTime = 0LL;
            }
            else
            {
              v14 = 1;
              v3->fields.isNowMission = 1;
            }
            goto LABEL_38;
          }
        }
        else
        {
          if ( klass != 1 )
          {
            v14 = 0;
            if ( v3->fields.progStatus != 3 )
              v4->fields.isDispTime = 1;
LABEL_38:
            ((void (__fastcall *)(MasterMissionListViewItemDraw_o *, MissionListViewItem_o *, __int64, Il2CppMethodPointer))v4->klass->vtable._9_UpdateDispResTime.method)(
              v4,
              v3,
              v11,
              v4->klass->vtable._10_SetInput.methodPtr);
            this = (MasterMissionListViewItemDraw_o *)v4->fields.timeOverInfo;
            if ( this )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v14, 0LL);
              this = (MasterMissionListViewItemDraw_o *)v4->fields.resTimeLb;
              if ( this )
              {
                this = (MasterMissionListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                            (UnityEngine_Component_o *)this,
                                                            0LL);
                if ( v4->fields.isDispTime )
                {
                  v8 = 1;
                  if ( this )
                    goto LABEL_42;
                }
                else
                {
                  v8 = v3->fields.progStatus == 3;
                  if ( this )
                    goto LABEL_42;
                }
              }
            }
LABEL_44:
            sub_B0D97C(this);
          }
          this = (MasterMissionListViewItemDraw_o *)MissionListViewItem__get_EventMissionEntity(v3, 0LL);
          if ( !this )
            goto LABEL_44;
          if ( v11 >= (__int64)this->fields.itemIcon )
          {
            this = (MasterMissionListViewItemDraw_o *)MissionListViewItem__get_EventMissionEntity(v3, 0LL);
            if ( !this )
              goto LABEL_44;
            missionNoLb = this->fields.missionCondLb;
            goto LABEL_32;
          }
        }
        v13 = 0;
        if ( !v4 )
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
  if ( (byte_4216AE2 & 1) == 0 )
  {
    sub_B0D8A4(&MasterMissionListViewItem_TypeInfo, missionListViewItem);
    sub_B0D8A4(&MasterMissionListViewManager_TypeInfo, v9);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v10);
    byte_4216AE2 = 1;
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
  MasterMissionListViewItemDraw_o *v6; // x20
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x1
  int32_t iconId; // w1
  GiftMaster_o *Master_WarQuestSelectionMaster; // x22
  System_Int32_array **GiftListById; // x0
  struct GiftEntity_array **p_giftEntityList; // x22
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  __int64 v23; // x8
  EventMissionAddMaster_o *MasterData_WarQuestSelectionMaster; // x23
  int32_t m_CachedPtr; // w24
  System_String_o *v26; // x23
  struct GiftEntity_array *v27; // x22
  int32_t *v28; // x9
  int32_t v29; // w1
  int v30; // w8
  int32_t v31; // w2
  struct GiftEntity_array *v32; // x8
  GiftEntity_o *v33; // x8
  int32_t prioredIconId; // w1
  ItemIconComponent_o *itemIcon; // x21
  int num; // w8
  int32_t v37; // w2
  int32_t v38; // w3
  int32_t Type; // w0
  int32_t rewardObjectId; // w22
  int32_t v41; // w23
  __int64 v42; // x0

  v6 = this;
  if ( (byte_4216AE4 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventMissionAddMaster___, item);
    sub_B0D8A4(&Method_DataManager_GetMaster_GiftMaster___, v7);
    sub_B0D8A4(&DataManager_TypeInfo, v8);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v9);
    this = (MasterMissionListViewItemDraw_o *)sub_B0D8A4(
                                                &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                                v10);
    byte_4216AE4 = 1;
  }
  if ( !item )
    goto LABEL_65;
  if ( MissionListViewItem__get_EventRewardType((MissionListViewItem_o *)item, 0LL) != 1 )
    goto LABEL_8;
  if ( MasterMissionListViewItem__get_IsHideReward(item, v11) )
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
  Master_WarQuestSelectionMaster = (GiftMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_GiftMaster___);
  this = (MasterMissionListViewItemDraw_o *)MissionListViewItem__get_EventMissionEntity(
                                              (MissionListViewItem_o *)item,
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
  sub_B0D840((BattleServantConfConponent_o *)&v6->fields.giftEntityList, GiftListById, v17, v18, v19, v20, v21, v22);
  if ( !v6->fields.giftEntityList )
    goto LABEL_65;
  v23 = *(_QWORD *)&v6->fields.giftEntityList->max_length;
  if ( !v23 )
    return;
  v6->fields.isMultipleReward = (int)v23 > 1;
  this = (MasterMissionListViewItemDraw_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_65;
  MasterData_WarQuestSelectionMaster = (EventMissionAddMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                    (DataManager_o *)this,
                                                                    (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventMissionAddMaster___);
  this = (MasterMissionListViewItemDraw_o *)MissionListViewItem__get_EventMissionEntity(
                                              (MissionListViewItem_o *)item,
                                              0LL);
  if ( !this )
    goto LABEL_65;
  m_CachedPtr = this->fields.m_CachedPtr;
  this = (MasterMissionListViewItemDraw_o *)MissionListViewItem__get_EventMissionEntity(
                                              (MissionListViewItem_o *)item,
                                              0LL);
  if ( !this || !MasterData_WarQuestSelectionMaster )
    goto LABEL_65;
  v26 = EventMissionAddMaster__GetEventMissionChangeRewardIcon(
          MasterData_WarQuestSelectionMaster,
          m_CachedPtr,
          HIDWORD(this->fields.baseSprite),
          0,
          0LL);
  if ( !System_String__IsNullOrEmpty(v26, 0LL) )
  {
    v6->fields.isMultipleReward = 0;
    item->fields.isHideRewardDetail = 1;
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
    v27 = *p_giftEntityList;
    if ( !v27 || !manager )
      goto LABEL_65;
    this = (MasterMissionListViewItemDraw_o *)MissionListViewManager__GetAlphaAnimCnt(
                                                (MissionListViewManager_o *)manager,
                                                v27->max_length,
                                                0LL);
    if ( (unsigned int)this < v27->max_length )
    {
      v28 = (int32_t *)v27->m_Items[(int)this];
      if ( !v28 )
        goto LABEL_65;
      v29 = v28[11];
      this = (MasterMissionListViewItemDraw_o *)v6->fields.itemIcon;
      v30 = v28[7];
      if ( v29 < 1 )
      {
        if ( !this )
          goto LABEL_65;
        if ( v30 <= 1 )
          v38 = -1;
        else
          v38 = v28[7];
        ItemIconComponent__SetGift((ItemIconComponent_o *)this, v28[5], v28[6], v38, 0, 0LL);
      }
      else
      {
        if ( !this )
          goto LABEL_65;
        if ( v30 <= 1 )
          v31 = -1;
        else
          v31 = v28[7];
        ItemIconComponent__SetItemImage_26857580((ItemIconComponent_o *)this, v29, v31, 0LL);
      }
      goto LABEL_8;
    }
LABEL_66:
    v42 = sub_B0D9A8(this);
    sub_B0D948(v42, 0LL);
  }
  this = (MasterMissionListViewItemDraw_o *)System_String__IsNullOrEmpty(v26, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v32 = *p_giftEntityList;
    if ( !*p_giftEntityList )
      goto LABEL_65;
    if ( !v32->max_length )
      goto LABEL_66;
    v33 = v32->m_Items[0];
    if ( !v33 )
      goto LABEL_65;
    prioredIconId = v33->fields.prioredIconId;
    itemIcon = v6->fields.itemIcon;
    if ( prioredIconId < 1 )
    {
      Type = MissionListViewItem__get_Type((MissionListViewItem_o *)item, 0LL);
      rewardObjectId = item->fields.rewardObjectId;
      v41 = Type;
      this = (MasterMissionListViewItemDraw_o *)MissionListViewItem__get_DisplayGiftNum(
                                                  (MissionListViewItem_o *)item,
                                                  0LL);
      if ( !itemIcon )
        goto LABEL_65;
      ItemIconComponent__SetGift(itemIcon, v41, rewardObjectId, (int32_t)this, 0, 0LL);
    }
    else
    {
      if ( !itemIcon )
        goto LABEL_65;
      num = v33->fields.num;
      if ( num <= 1 )
        v37 = -1;
      else
        v37 = num;
      ItemIconComponent__SetItemImage_26857580(v6->fields.itemIcon, prioredIconId, v37, 0LL);
    }
  }
  else
  {
    this = (MasterMissionListViewItemDraw_o *)v6->fields.itemIcon;
    if ( !this )
      goto LABEL_65;
    ItemIconComponent__SetItemImageByName((ItemIconComponent_o *)this, v26, 0LL);
  }
  this = (MasterMissionListViewItemDraw_o *)v6->fields.itemIcon;
  if ( !this )
    goto LABEL_65;
  ItemIconComponent__SetAlpha((ItemIconComponent_o *)this, 1.0, 0LL);
LABEL_8:
  if ( MissionListViewItem__get_EventRewardType((MissionListViewItem_o *)item, 0LL) == 3 )
  {
    if ( MasterMissionListViewItem__get_IsHideReward(item, v12) )
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
        iconId = item->fields.iconId;
        goto LABEL_43;
      }
    }
LABEL_65:
    sub_B0D97C(this);
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
  MissionListViewItem_o *EventMissionEntity; // x0
  int32_t progStatus; // w20
  int klass; // w8
  UILabel_o *resTimeLb; // x19
  int64_t sortValue2; // x20
  LocalizationManager_c *v19; // x8
  System_String_o *RestTime; // x0
  System_String_o *v21; // x20
  __int64 *v22; // x8
  LocalizationManager_c *v23; // x8
  int64_t sortValue1B; // x20
  System_String_o *v25; // x0

  if ( (byte_4216AE5 & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, missionListViewItem);
    sub_B0D8A4(&MasterMissionListViewItem_TypeInfo, v6);
    sub_B0D8A4(&MissionListViewItemDraw_TypeInfo, v7);
    sub_B0D8A4(&NetworkManager_TypeInfo, v8);
    sub_B0D8A4(&StringLiteral_13448/*"TIME_REST_QUEST"*/, v9);
    sub_B0D8A4(&StringLiteral_9384/*"NO_TIME_INFO"*/, v10);
    sub_B0D8A4(&StringLiteral_13436/*"TIME_REST_ACHIVE"*/, v11);
    byte_4216AE5 = 1;
  }
  if ( missionListViewItem )
  {
    v12 = *(&MasterMissionListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&missionListViewItem->klass->_2.bitflags2 + 1) >= (unsigned int)v12 )
    {
      v13 = (MasterMissionListViewItem_c *)missionListViewItem->klass->_2.typeHierarchy[v12 - 1];
      EventMissionEntity = v13 == MasterMissionListViewItem_TypeInfo ? missionListViewItem : 0LL;
      if ( v13 == MasterMissionListViewItem_TypeInfo )
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
            v19 = LocalizationManager_TypeInfo;
            sortValue2 = EventMissionEntity->fields.sortValue2;
LABEL_23:
            if ( (BYTE3(v19->vtable._0_Equals.methodPtr) & 4) != 0 && !v19->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(v19);
            RestTime = LocalizationManager__GetRestTime(sortValue2, 0LL);
LABEL_32:
            v21 = RestTime;
            if ( (BYTE3(MissionListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !MissionListViewItemDraw_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(MissionListViewItemDraw_TypeInfo);
            }
            v22 = &StringLiteral_13436/*"TIME_REST_ACHIVE"*/;
            goto LABEL_53;
          }
          v23 = LocalizationManager_TypeInfo;
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
              RestTime = LocalizationManager__Get((System_String_o *)StringLiteral_9384/*"NO_TIME_INFO"*/, 0LL);
              goto LABEL_32;
            }
            if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v25 = LocalizationManager__Get((System_String_o *)StringLiteral_9384/*"NO_TIME_INFO"*/, 0LL);
LABEL_49:
            v21 = v25;
            if ( (BYTE3(MissionListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !MissionListViewItemDraw_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(MissionListViewItemDraw_TypeInfo);
            }
            v22 = &StringLiteral_13448/*"TIME_REST_QUEST"*/;
LABEL_53:
            EventMissionEntity = (MissionListViewItem_o *)MissionListViewItemDraw__GetTimeText(
                                                            (System_String_o *)*v22,
                                                            v21,
                                                            0LL);
            if ( resTimeLb )
            {
              UILabel__set_text(resTimeLb, (System_String_o *)EventMissionEntity, 0LL);
              return;
            }
LABEL_55:
            sub_B0D97C(EventMissionEntity);
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
            v19 = LocalizationManager_TypeInfo;
            goto LABEL_23;
          }
          if ( (WORD1(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !NetworkManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          }
          sortValue1B = NetworkManager__getNextDayStartTime(0LL);
          v23 = LocalizationManager_TypeInfo;
        }
        if ( (BYTE3(v23->vtable._0_Equals.methodPtr) & 4) != 0 && !v23->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v23);
        v25 = LocalizationManager__GetRestTime(sortValue1B, 0LL);
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
  __int64 resTimeLb; // x0
  int64_t oldTime; // x23
  int64_t v13; // x22
  MissionListViewItemDraw_c *v14; // x8

  if ( (byte_4216AE6 & 1) == 0 )
  {
    sub_B0D8A4(&MissionListViewItemDraw_TypeInfo, item);
    sub_B0D8A4(&NetworkManager_TypeInfo, v9);
    byte_4216AE6 = 1;
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
          v13 = resTimeLb;
          v14 = MissionListViewItemDraw_TypeInfo;
          if ( (BYTE3(MissionListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !MissionListViewItemDraw_TypeInfo->_2.cctor_finished )
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
LABEL_21:
          sub_B0D97C(resTimeLb);
        MissionListViewItemDraw__SetRewardIconAlpha(
          (MissionListViewItemDraw_o *)this,
          manager->fields.alphaAnimNow,
          0LL);
      }
    }
  }
}