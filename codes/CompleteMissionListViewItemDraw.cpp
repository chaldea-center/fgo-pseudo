void __fastcall CompleteMissionListViewItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1

  if ( (byte_4BC679B & 1) == 0 )
  {
    sub_1C1ABD4(&CompleteMissionListViewItemDraw_TypeInfo, v1);
    sub_1C1ABD4(&StringLiteral_6366/*"EventReward/EventRewardAtlas"*/, v8);
    byte_4BC679B = 1;
  }
  CompleteMissionListViewItemDraw_TypeInfo->static_fields->REWARDIMG_ATLAS_PATH = (struct System_String_o *)StringLiteral_6366/*"EventReward/EventRewardAtlas"*/;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)CompleteMissionListViewItemDraw_TypeInfo->static_fields,
    StringLiteral_6366/*"EventReward/EventRewardAtlas"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall CompleteMissionListViewItemDraw___ctor(
        CompleteMissionListViewItemDraw_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BC679A & 1) == 0 )
  {
    sub_1C1ABD4(&MissionListViewItemDraw_TypeInfo, method);
    byte_4BC679A = 1;
  }
  if ( !MissionListViewItemDraw_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MissionListViewItemDraw_TypeInfo);
  MissionListViewItemDraw___ctor((MissionListViewItemDraw_o *)this, 0LL);
}


void __fastcall CompleteMissionListViewItemDraw__ChangeNextRewardIcon(
        CompleteMissionListViewItemDraw_o *this,
        CompleteMissionListViewManager_o *manager,
        const MethodInfo *method)
{
  struct GiftEntity_array *giftEntityList; // x20
  CompleteMissionListViewItemDraw_o *v4; // x19
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
  this = (CompleteMissionListViewItemDraw_o *)MissionListViewManager__GetAlphaAnimCnt(
                                                (MissionListViewManager_o *)manager,
                                                giftEntityList->max_length,
                                                0LL);
  if ( (unsigned int)this >= giftEntityList->max_length )
    sub_1C1AE38(this, manager);
  v5 = giftEntityList->m_Items[(int)this];
  if ( !v5 )
    goto LABEL_18;
  manager = (CompleteMissionListViewManager_o *)(unsigned int)v5->fields.prioredIconId;
  this = (CompleteMissionListViewItemDraw_o *)v4->fields.itemIcon;
  num = v5->fields.num;
  if ( (int)manager >= 1 )
  {
    if ( this )
    {
      if ( num <= 1 )
        v7 = -1;
      else
        v7 = v5->fields.num;
      ItemIconComponent__SetItemImage_39342608((ItemIconComponent_o *)this, (int32_t)manager, v7, 0LL);
      return;
    }
LABEL_18:
    sub_1C1AE30(this, manager);
  }
  if ( !this )
    goto LABEL_18;
  if ( num <= 1 )
    v8 = -1;
  else
    v8 = v5->fields.num;
  ItemIconComponent__SetGift_39340176((ItemIconComponent_o *)this, v5->fields.type, v5->fields.objectId, v8, 0, 0LL);
}


void __fastcall CompleteMissionListViewItemDraw__EndLoadAchiveImg(
        CompleteMissionListViewItemDraw_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  CompleteMissionListViewItemDraw_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *Object_object; // x20
  Il2CppObject *Component_object; // x20

  v4 = this;
  if ( (byte_4BC6795 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_AssetData_GetObject_GameObject___, data);
    sub_1C1ABD4(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, v5);
    this = (CompleteMissionListViewItemDraw_o *)sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v6);
    byte_4BC6795 = 1;
  }
  if ( !data )
    goto LABEL_14;
  Object_object = AssetData__GetObject_object_(
                    data,
                    (const MethodInfo_2F8144C *)Method_AssetData_GetObject_GameObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (CompleteMissionListViewItemDraw_o *)UnityEngine_Object__op_Equality(
                                                (UnityEngine_Object_o *)Object_object,
                                                0LL,
                                                0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( Object_object )
    {
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)Object_object,
                           (const MethodInfo_2FEFBC0 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
        return;
      this = (CompleteMissionListViewItemDraw_o *)v4->fields.rewardAchiveSprite;
      if ( this )
      {
        UISprite__set_atlas((UISprite_o *)this, (UIAtlas_o *)Component_object, 0LL);
        return;
      }
    }
LABEL_14:
    sub_1C1AE30(this, data);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CompleteMissionListViewItemDraw__OnChangeAlphaAnim(
        CompleteMissionListViewItemDraw_o *this,
        CompleteMissionListViewItem_o *item,
        int32_t mode,
        CompleteMissionListViewManager_o *manager,
        const MethodInfo *method)
{
  CompleteMissionListViewItemDraw__ChangeNextRewardIcon(this, manager, *(const MethodInfo **)&mode);
}


void __fastcall CompleteMissionListViewItemDraw__SetInput(
        CompleteMissionListViewItemDraw_o *this,
        MissionListViewItem_o *item,
        const MethodInfo *method)
{
  UnityEngine_Object_o *baseButton; // x21

  if ( (byte_4BC6799 & 1) == 0 )
  {
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, item);
    byte_4BC6799 = 1;
  }
  if ( item )
  {
    baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
      ((void (__fastcall *)(CompleteMissionListViewItemDraw_o *, MissionListViewItem_o *, Il2CppMethodPointer))this->klass->vtable._5_InitDispResTime.method)(
        this,
        item,
        this->klass->vtable._6_SetLockMissionBoard.methodPtr);
  }
  MissionListViewItemDraw__SetInput((MissionListViewItemDraw_o *)this, item, 0LL);
}


bool __fastcall CompleteMissionListViewItemDraw__SetItem(
        CompleteMissionListViewItemDraw_o *this,
        MissionListViewItem_o *missionListViewItem,
        int32_t mode,
        ListViewManager_o *listViewManager,
        const MethodInfo *method)
{
  MissionListViewItem_o *v7; // x21
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  CompleteMissionListViewItemDraw_c *v18; // x0
  System_String_o *REWARDIMG_ATLAS_PATH; // x23
  AssetLoader_LoadEndDataHandler_o *v20; // x24
  const MethodInfo *v21; // x2
  __int64 methodPtr_low; // x10
  __int64 v23; // x10
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  UISprite_o *rewardAchiveSprite; // x22
  System_String_o **v29; // x8
  System_String_o *v30; // x23
  Il2CppObject *v31; // x0
  System_String_o *v32; // x0
  __int64 v33; // x1
  const MethodInfo *v34; // x3
  int32_t currentEventId; // [xsp+Ch] [xbp-34h] BYREF

  v7 = missionListViewItem;
  if ( (byte_4BC6794 & 1) == 0 )
  {
    sub_1C1ABD4(&AssetManager_TypeInfo, missionListViewItem);
    sub_1C1ABD4(&Method_CompleteMissionListViewItemDraw_EndLoadAchiveImg__, v9);
    sub_1C1ABD4(&CompleteMissionListViewItemDraw_TypeInfo, v10);
    sub_1C1ABD4(&CompleteMissionListViewItem_TypeInfo, v11);
    sub_1C1ABD4(&CompleteMissionListViewManager_TypeInfo, v12);
    sub_1C1ABD4(&int_TypeInfo, v13);
    sub_1C1ABD4(&AssetLoader_LoadEndDataHandler_TypeInfo, v14);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v15);
    sub_1C1ABD4(&StringLiteral_19563/*"event_rewardget_{0}01"*/, v16);
    sub_1C1ABD4(&StringLiteral_19564/*"event_rewardget_{0}02"*/, v17);
    byte_4BC6794 = 1;
  }
  if ( !MissionListViewItemDraw__SetItem((MissionListViewItemDraw_o *)this, v7, mode, listViewManager, 0LL) )
    return 0;
  v18 = CompleteMissionListViewItemDraw_TypeInfo;
  if ( !CompleteMissionListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CompleteMissionListViewItemDraw_TypeInfo);
    v18 = CompleteMissionListViewItemDraw_TypeInfo;
  }
  if ( !v18->static_fields->achiveImgData )
  {
    if ( !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      v18 = CompleteMissionListViewItemDraw_TypeInfo;
    }
    REWARDIMG_ATLAS_PATH = v18->static_fields->REWARDIMG_ATLAS_PATH;
    v20 = (AssetLoader_LoadEndDataHandler_o *)sub_1C1AE20(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v20,
      (Il2CppObject *)this,
      Method_CompleteMissionListViewItemDraw_EndLoadAchiveImg__,
      0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    if ( !AssetManager__loadAssetStorage(REWARDIMG_ATLAS_PATH, v20, 1, 0LL) )
      CompleteMissionListViewItemDraw__EndLoadAchiveImg(this, 0LL, v21);
  }
  if ( !mode )
    return 1;
  if ( !v7 )
  {
LABEL_17:
    if ( !listViewManager )
      goto LABEL_24;
    goto LABEL_22;
  }
  methodPtr_low = LOBYTE(CompleteMissionListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(v7->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
  {
    v7 = 0LL;
    goto LABEL_17;
  }
  if ( (CompleteMissionListViewItem_c *)v7->klass->_2.typeHierarchy[methodPtr_low - 1] != CompleteMissionListViewItem_TypeInfo )
    v7 = 0LL;
  if ( !listViewManager )
  {
LABEL_24:
    if ( !v7 )
      return 0;
    goto LABEL_29;
  }
LABEL_22:
  v23 = LOBYTE(CompleteMissionListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(listViewManager->klass->vtable._0_Equals.methodPtr) < (unsigned int)v23 )
  {
    listViewManager = 0LL;
    goto LABEL_24;
  }
  if ( (CompleteMissionListViewManager_c *)listViewManager->klass->_2.typeHierarchy[v23 - 1] != CompleteMissionListViewManager_TypeInfo )
    listViewManager = 0LL;
  if ( !v7 )
    return 0;
LABEL_29:
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)listViewManager, 0LL, 0LL) )
    return 0;
  rewardAchiveSprite = this->fields.rewardAchiveSprite;
  if ( v7->fields.dispNo == 1 )
    v29 = (System_String_o **)&StringLiteral_19563/*"event_rewardget_{0}01"*/;
  else
    v29 = (System_String_o **)&StringLiteral_19564/*"event_rewardget_{0}02"*/;
  v30 = *v29;
  currentEventId = v7->fields.currentEventId;
  v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &currentEventId, v24, v25, v26);
  v32 = System_String__Format(v30, v31, 0LL);
  if ( !rewardAchiveSprite )
    sub_1C1AE30(v32, v33);
  UISprite__set_spriteName(rewardAchiveSprite, v32, 0LL);
  CompleteMissionListViewItemDraw__SetRewardItemIcon(
    this,
    (CompleteMissionListViewItem_o *)v7,
    (CompleteMissionListViewManager_o *)listViewManager,
    v34);
  return 1;
}


void __fastcall CompleteMissionListViewItemDraw__SetRewardItemIcon(
        CompleteMissionListViewItemDraw_o *this,
        CompleteMissionListViewItem_o *item,
        CompleteMissionListViewManager_o *manager,
        const MethodInfo *method)
{
  CompleteMissionListViewItem_o *v5; // x19
  CompleteMissionListViewItemDraw_o *v6; // x20
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
  Il2CppObject *Master_object; // x23
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
  if ( (byte_4BC6796 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMaster_EventMissionAddMaster___, item);
    sub_1C1ABD4(&DataManager_TypeInfo, v7);
    sub_1C1ABD4(&MissionInfoMaker_TypeInfo, v8);
    this = (CompleteMissionListViewItemDraw_o *)sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v9);
    byte_4BC6796 = 1;
  }
  if ( !v5 )
    goto LABEL_63;
  if ( MissionListViewItem__get_EventRewardType((MissionListViewItem_o *)v5, 0LL) != 1 )
    goto LABEL_50;
  if ( CompleteMissionListViewItem__get_IsHideReward(v5, v10) )
  {
    this = (CompleteMissionListViewItemDraw_o *)v6->fields.itemIcon;
    v6->fields.isMultipleReward = 0;
    if ( !this )
      goto LABEL_63;
    ItemIconComponent__SetItemImage((ItemIconComponent_o *)this, 99, 0LL);
    goto LABEL_50;
  }
  this = (CompleteMissionListViewItemDraw_o *)MissionListViewItem__get_EventMissionEntity(
                                                (MissionListViewItem_o *)v5,
                                                0LL);
  if ( !this )
    goto LABEL_63;
  missionNoLb_high = HIDWORD(this->fields.missionNoLb);
  if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
  IconGiftEntities = MissionInfoMaker__GetIconGiftEntities(missionNoLb_high, 0LL);
  v6->fields.giftEntityList = IconGiftEntities;
  p_giftEntityList = &v6->fields.giftEntityList;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&v6->fields.giftEntityList,
    (int64_t)IconGiftEntities,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  if ( !v6->fields.giftEntityList )
    goto LABEL_63;
  v20 = *(_QWORD *)&v6->fields.giftEntityList->max_length;
  if ( !v20 )
    return;
  v6->fields.isMultipleReward = (int)v20 > 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_EventMissionAddMaster___);
  this = (CompleteMissionListViewItemDraw_o *)MissionListViewItem__get_EventMissionEntity(
                                                (MissionListViewItem_o *)v5,
                                                0LL);
  if ( !this )
    goto LABEL_63;
  m_CachedPtr = this->fields.m_CachedPtr;
  this = (CompleteMissionListViewItemDraw_o *)MissionListViewItem__get_EventMissionEntity(
                                                (MissionListViewItem_o *)v5,
                                                0LL);
  if ( !this || !Master_object )
    goto LABEL_63;
  v23 = EventMissionAddMaster__GetEventMissionChangeRewardIcon(
          (EventMissionAddMaster_o *)Master_object,
          m_CachedPtr,
          HIDWORD(this->fields.m_CancellationTokenSource),
          0,
          0LL);
  if ( !System_String__IsNullOrEmpty(v23, 0LL) )
  {
    v6->fields.isMultipleReward = 0;
    v5->fields.isHideRewardDetail = 1;
LABEL_34:
    this = (CompleteMissionListViewItemDraw_o *)System_String__IsNullOrEmpty(v23, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v28 = *p_giftEntityList;
      if ( !*p_giftEntityList )
        goto LABEL_63;
      if ( !v28->max_length )
        goto LABEL_64;
      v29 = v28->m_Items[0];
      if ( !v29 )
        goto LABEL_63;
      item = (CompleteMissionListViewItem_o *)(unsigned int)v29->fields.prioredIconId;
      itemIcon = v6->fields.itemIcon;
      if ( (int)item < 1 )
      {
        Type = MissionListViewItem__get_Type((MissionListViewItem_o *)v5, 0LL);
        rewardObjectId = v5->fields.rewardObjectId;
        v35 = Type;
        this = (CompleteMissionListViewItemDraw_o *)MissionListViewItem__get_DisplayGiftNum(
                                                      (MissionListViewItem_o *)v5,
                                                      0LL);
        if ( !itemIcon )
          goto LABEL_63;
        ItemIconComponent__SetGift_39340176(itemIcon, v35, rewardObjectId, (int32_t)this, 0, 0LL);
      }
      else
      {
        if ( !itemIcon )
          goto LABEL_63;
        num = v29->fields.num;
        if ( num <= 1 )
          v32 = -1;
        else
          v32 = num;
        ItemIconComponent__SetItemImage_39342608(v6->fields.itemIcon, (int32_t)item, v32, 0LL);
      }
    }
    else
    {
      this = (CompleteMissionListViewItemDraw_o *)v6->fields.itemIcon;
      if ( !this )
        goto LABEL_63;
      ItemIconComponent__SetItemImageByName((ItemIconComponent_o *)this, v23, 0LL);
    }
    this = (CompleteMissionListViewItemDraw_o *)v6->fields.itemIcon;
    if ( !this )
      goto LABEL_63;
    ItemIconComponent__SetAlpha((ItemIconComponent_o *)this, 1.0, 0LL);
    goto LABEL_50;
  }
  if ( !v6->fields.isMultipleReward )
    goto LABEL_34;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (CompleteMissionListViewItemDraw_o *)UnityEngine_Object__op_Inequality(
                                                (UnityEngine_Object_o *)manager,
                                                0LL,
                                                0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_50;
  v24 = *p_giftEntityList;
  if ( !v24 || !manager )
    goto LABEL_63;
  this = (CompleteMissionListViewItemDraw_o *)MissionListViewManager__GetAlphaAnimCnt(
                                                (MissionListViewManager_o *)manager,
                                                v24->max_length,
                                                0LL);
  if ( (unsigned int)this >= v24->max_length )
LABEL_64:
    sub_1C1AE38(this, item);
  v25 = v24->m_Items[(int)this];
  if ( !v25 )
    goto LABEL_63;
  item = (CompleteMissionListViewItem_o *)(unsigned int)v25->fields.prioredIconId;
  this = (CompleteMissionListViewItemDraw_o *)v6->fields.itemIcon;
  v26 = v25->fields.num;
  if ( (int)item < 1 )
  {
    if ( !this )
      goto LABEL_63;
    if ( v26 <= 1 )
      v38 = -1;
    else
      v38 = v25->fields.num;
    ItemIconComponent__SetGift_39340176(
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
      goto LABEL_63;
    if ( v26 <= 1 )
      v27 = -1;
    else
      v27 = v25->fields.num;
    ItemIconComponent__SetItemImage_39342608((ItemIconComponent_o *)this, (int32_t)item, v27, 0LL);
  }
LABEL_50:
  if ( MissionListViewItem__get_EventRewardType((MissionListViewItem_o *)v5, 0LL) == 3 )
  {
    if ( CompleteMissionListViewItem__get_IsHideReward(v5, v36) )
    {
      this = (CompleteMissionListViewItemDraw_o *)v6->fields.itemIcon;
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
      this = (CompleteMissionListViewItemDraw_o *)v6->fields.itemIcon;
      if ( this )
      {
        iconId = v5->fields.iconId;
        goto LABEL_57;
      }
    }
LABEL_63:
    sub_1C1AE30(this, item);
  }
}


void __fastcall CompleteMissionListViewItemDraw__UpdateDispResTime(
        CompleteMissionListViewItemDraw_o *this,
        MissionListViewItem_o *missionListViewItem,
        int64_t nowTime,
        const MethodInfo *method)
{
  __int64 methodPtr_low; // x10

  if ( (byte_4BC6797 & 1) == 0 )
  {
    sub_1C1ABD4(&CompleteMissionListViewItem_TypeInfo, missionListViewItem);
    byte_4BC6797 = 1;
  }
  if ( missionListViewItem )
  {
    methodPtr_low = LOBYTE(CompleteMissionListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(missionListViewItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
      && (CompleteMissionListViewItem_c *)missionListViewItem->klass->_2.typeHierarchy[methodPtr_low - 1] == CompleteMissionListViewItem_TypeInfo
      && !LODWORD(missionListViewItem[1].klass) )
    {
      MissionListViewItemDraw__UpdateDispResTime((MissionListViewItemDraw_o *)this, missionListViewItem, nowTime, 0LL);
    }
  }
}


void __fastcall CompleteMissionListViewItemDraw__UpdateItem(
        CompleteMissionListViewItemDraw_o *this,
        CompleteMissionListViewItem_o *item,
        int32_t mode,
        CompleteMissionListViewManager_o *manager,
        const MethodInfo *method)
{
  __int64 v9; // x1
  EventMissionEntity_o *EventMissionEntity; // x0
  __int64 v11; // x1
  __int64 resTimeLb; // x0
  int64_t oldTime; // x23
  int64_t v14; // x22
  MissionListViewItemDraw_c *v15; // x8

  if ( (byte_4BC6798 & 1) == 0 )
  {
    sub_1C1ABD4(&MissionListViewItemDraw_TypeInfo, item);
    sub_1C1ABD4(&NetworkManager_TypeInfo, v9);
    byte_4BC6798 = 1;
  }
  if ( item )
  {
    EventMissionEntity = MissionListViewItem__get_EventMissionEntity((MissionListViewItem_o *)item, 0LL);
    if ( mode )
    {
      if ( EventMissionEntity )
      {
        resTimeLb = (__int64)this->fields.resTimeLb;
        if ( !resTimeLb )
          goto LABEL_18;
        resTimeLb = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)resTimeLb, 0LL);
        if ( !resTimeLb )
          goto LABEL_18;
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
            resTimeLb = ((__int64 (__fastcall *)(CompleteMissionListViewItemDraw_o *, CompleteMissionListViewItem_o *, int64_t, Il2CppMethodPointer))this->klass->vtable._9_UpdateDispResTime.method)(
                          this,
                          item,
                          v14,
                          this->klass->vtable._10_SetInput.methodPtr);
            this->fields.oldTime = v14;
          }
        }
        if ( !manager )
LABEL_18:
          sub_1C1AE30(resTimeLb, v11);
        MissionListViewItemDraw__SetRewardIconAlpha(
          (MissionListViewItemDraw_o *)this,
          manager->fields.alphaAnimNow,
          0LL);
      }
    }
  }
}