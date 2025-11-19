void CompleteMissionListViewItemDraw___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3

  if ( (byte_4CB4DB4 & 1) == 0 )
  {
    sub_1C6BA08(&CompleteMissionListViewItemDraw_TypeInfo);
    sub_1C6BA08(&StringLiteral_6238/*"EventReward/EventRewardAtlas"*/);
    byte_4CB4DB4 = 1;
  }
  CompleteMissionListViewItemDraw_TypeInfo->static_fields->REWARDIMG_ATLAS_PATH = (struct System_String_o *)StringLiteral_6238/*"EventReward/EventRewardAtlas"*/;
  sub_1C6B9AC(
    (CGThumbnailListItem_o *)CompleteMissionListViewItemDraw_TypeInfo->static_fields,
    StringLiteral_6238/*"EventReward/EventRewardAtlas"*/,
    v1,
    v2);
}


void CompleteMissionListViewItemDraw___ctor(CompleteMissionListViewItemDraw_o *this, const MethodInfo *method)
{
  if ( (byte_4CB4DB3 & 1) == 0 )
  {
    sub_1C6BA08(&MissionListViewItemDraw_TypeInfo);
    byte_4CB4DB3 = 1;
  }
  if ( !MissionListViewItemDraw_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MissionListViewItemDraw_TypeInfo);
  MissionListViewItemDraw___ctor((MissionListViewItemDraw_o *)this, 0);
}


void CompleteMissionListViewItemDraw__ChangeNextRewardIcon(
        CompleteMissionListViewItemDraw_o *this,
        CompleteMissionListViewManager_o *manager,
        const MethodInfo *method)
{
  struct GiftEntity_array *giftEntityList; // x20
  CompleteMissionListViewItemDraw_o *v4; // x19
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
  this = (CompleteMissionListViewItemDraw_o *)MissionListViewManager__GetAlphaAnimCnt(
                                                (MissionListViewManager_o *)manager,
                                                giftEntityList->max_length,
                                                0);
  if ( (unsigned int)this >= LODWORD(giftEntityList->max_length) )
    sub_1C6BC68(this);
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
        v7 = (unsigned int)v5->fields.num;
      ItemIconComponent__SetItemImage_41156088((ItemIconComponent_o *)this, (int32_t)manager, v7, 0);
      return;
    }
LABEL_18:
    sub_1C6BC60(this, manager);
  }
  if ( !this )
    goto LABEL_18;
  if ( num <= 1 )
    v8 = -1;
  else
    v8 = (unsigned int)v5->fields.num;
  ItemIconComponent__SetGift_41153640((ItemIconComponent_o *)this, v5->fields.type, v5->fields.objectId, v8, 0, 0);
}


void CompleteMissionListViewItemDraw__EndLoadAchiveImg(
        CompleteMissionListViewItemDraw_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  CompleteMissionListViewItemDraw_o *v4; // x19
  Il2CppObject *Object_object; // x20
  Il2CppObject *Component_object; // x20

  v4 = this;
  if ( (byte_4CB4DAE & 1) == 0 )
  {
    sub_1C6BA08(&Method_AssetData_GetObject_GameObject___);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    this = (CompleteMissionListViewItemDraw_o *)sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB4DAE = 1;
  }
  if ( !data )
    goto LABEL_14;
  Object_object = AssetData__GetObject_object_(
                    data,
                    (const MethodInfo_311C2F8 *)Method_AssetData_GetObject_GameObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (CompleteMissionListViewItemDraw_o *)UnityEngine_Object__op_Equality(
                                                (UnityEngine_Object_o *)Object_object,
                                                0,
                                                0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( Object_object )
    {
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)Object_object,
                           (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0) )
        return;
      this = (CompleteMissionListViewItemDraw_o *)v4->fields.rewardAchiveSprite;
      if ( this )
      {
        UISprite__set_atlas((UISprite_o *)this, (UIAtlas_o *)Component_object, 0);
        return;
      }
    }
LABEL_14:
    sub_1C6BC60(this, data);
  }
}


// local variable allocation has failed, the output may be wrong!
void CompleteMissionListViewItemDraw__OnChangeAlphaAnim(
        CompleteMissionListViewItemDraw_o *this,
        CompleteMissionListViewItem_o *item,
        int32_t mode,
        CompleteMissionListViewManager_o *manager,
        const MethodInfo *method)
{
  CompleteMissionListViewItemDraw__ChangeNextRewardIcon(this, manager, *(const MethodInfo **)&mode);
}


void CompleteMissionListViewItemDraw__SetInput(
        CompleteMissionListViewItemDraw_o *this,
        MissionListViewItem_o *item,
        const MethodInfo *method)
{
  UnityEngine_Object_o *baseButton; // x21

  if ( (byte_4CB4DB2 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB4DB2 = 1;
  }
  if ( item )
  {
    baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(baseButton, 0, 0) )
      ((void (__fastcall *)(CompleteMissionListViewItemDraw_o *, MissionListViewItem_o *, const MethodInfo *))this->klass->vtable._5_InitDispResTime.methodPtr)(
        this,
        item,
        this->klass->vtable._5_InitDispResTime.method);
  }
  MissionListViewItemDraw__SetInput((MissionListViewItemDraw_o *)this, item, 0);
}


bool CompleteMissionListViewItemDraw__SetItem(
        CompleteMissionListViewItemDraw_o *this,
        MissionListViewItem_o *missionListViewItem,
        int32_t mode,
        ListViewManager_o *listViewManager,
        const MethodInfo *method)
{
  CompleteMissionListViewItemDraw_c *v9; // x0
  System_String_o *REWARDIMG_ATLAS_PATH; // x23
  AssetLoader_LoadEndDataHandler_o *v11; // x24
  const MethodInfo *v12; // x2
  __int64 naturalAligment; // x10
  __int64 v14; // x10
  UISprite_o *rewardAchiveSprite; // x22
  System_String_o **v17; // x8
  System_String_o *v18; // x23
  Il2CppObject *v19; // x0
  System_String_o *v20; // x0
  __int64 v21; // x1
  const MethodInfo *v22; // x3
  int32_t currentEventId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4CB4DAD & 1) == 0 )
  {
    sub_1C6BA08(&AssetManager_TypeInfo);
    sub_1C6BA08(&Method_CompleteMissionListViewItemDraw_EndLoadAchiveImg__);
    sub_1C6BA08(&CompleteMissionListViewItemDraw_TypeInfo);
    sub_1C6BA08(&CompleteMissionListViewItem_TypeInfo);
    sub_1C6BA08(&CompleteMissionListViewManager_TypeInfo);
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&StringLiteral_19316/*"event_rewardget_{0}01"*/);
    sub_1C6BA08(&StringLiteral_19317/*"event_rewardget_{0}02"*/);
    byte_4CB4DAD = 1;
  }
  if ( !MissionListViewItemDraw__SetItem(
          (MissionListViewItemDraw_o *)this,
          missionListViewItem,
          mode,
          listViewManager,
          0) )
    return 0;
  v9 = CompleteMissionListViewItemDraw_TypeInfo;
  if ( !CompleteMissionListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CompleteMissionListViewItemDraw_TypeInfo);
    v9 = CompleteMissionListViewItemDraw_TypeInfo;
  }
  if ( !v9->static_fields->achiveImgData )
  {
    if ( !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      v9 = CompleteMissionListViewItemDraw_TypeInfo;
    }
    REWARDIMG_ATLAS_PATH = v9->static_fields->REWARDIMG_ATLAS_PATH;
    v11 = (AssetLoader_LoadEndDataHandler_o *)sub_1C6BC54(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v11,
      (Il2CppObject *)this,
      Method_CompleteMissionListViewItemDraw_EndLoadAchiveImg__,
      0);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    if ( !AssetManager__loadAssetStorage(REWARDIMG_ATLAS_PATH, v11, 1, 0) )
      CompleteMissionListViewItemDraw__EndLoadAchiveImg(this, 0, v12);
  }
  if ( !mode )
    return 1;
  if ( !missionListViewItem )
  {
LABEL_17:
    if ( !listViewManager )
      goto LABEL_24;
    goto LABEL_22;
  }
  naturalAligment = CompleteMissionListViewItem_TypeInfo->_2.naturalAligment;
  if ( missionListViewItem->klass->_2.naturalAligment < (unsigned int)naturalAligment )
  {
    missionListViewItem = 0;
    goto LABEL_17;
  }
  if ( (CompleteMissionListViewItem_c *)missionListViewItem->klass->_2.typeHierarchy[naturalAligment - 1] != CompleteMissionListViewItem_TypeInfo )
    missionListViewItem = 0;
  if ( !listViewManager )
  {
LABEL_24:
    if ( !missionListViewItem )
      return 0;
    goto LABEL_29;
  }
LABEL_22:
  v14 = CompleteMissionListViewManager_TypeInfo->_2.naturalAligment;
  if ( listViewManager->klass->_2.naturalAligment < (unsigned int)v14 )
  {
    listViewManager = 0;
    goto LABEL_24;
  }
  if ( (CompleteMissionListViewManager_c *)listViewManager->klass->_2.typeHierarchy[v14 - 1] != CompleteMissionListViewManager_TypeInfo )
    listViewManager = 0;
  if ( !missionListViewItem )
    return 0;
LABEL_29:
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)listViewManager, 0, 0) )
    return 0;
  rewardAchiveSprite = this->fields.rewardAchiveSprite;
  if ( missionListViewItem->fields.dispNo == 1 )
    v17 = (System_String_o **)&StringLiteral_19316/*"event_rewardget_{0}01"*/;
  else
    v17 = (System_String_o **)&StringLiteral_19317/*"event_rewardget_{0}02"*/;
  v18 = *v17;
  currentEventId = missionListViewItem->fields.currentEventId;
  v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &currentEventId);
  v20 = System_String__Format(v18, v19, 0);
  if ( !rewardAchiveSprite )
    sub_1C6BC60(v20, v21);
  UISprite__set_spriteName(rewardAchiveSprite, v20, 0);
  CompleteMissionListViewItemDraw__SetRewardItemIcon(
    this,
    (CompleteMissionListViewItem_o *)missionListViewItem,
    (CompleteMissionListViewManager_o *)listViewManager,
    v22);
  return 1;
}


void CompleteMissionListViewItemDraw__SetRewardItemIcon(
        CompleteMissionListViewItemDraw_o *this,
        CompleteMissionListViewItem_o *item,
        CompleteMissionListViewManager_o *manager,
        const MethodInfo *method)
{
  CompleteMissionListViewItem_o *v5; // x19
  CompleteMissionListViewItemDraw_o *v6; // x20
  const MethodInfo *v7; // x1
  int32_t missionNoLb_high; // w22
  GiftEntity_array *IconGiftEntities; // x0
  struct GiftEntity_array **p_giftEntityList; // x22
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  il2cpp_array_size_t max_length; // x8
  Il2CppObject *Master_object; // x23
  int32_t m_CachedPtr; // w24
  System_String_o *v16; // x23
  struct GiftEntity_array *v17; // x22
  GiftEntity_o *v18; // x9
  int v19; // w8
  int64_t v20; // x2
  struct GiftEntity_array *v21; // x8
  GiftEntity_o *v22; // x8
  ItemIconComponent_o *itemIcon; // x21
  int64_t num; // x8
  int64_t v25; // x2
  int32_t Type; // w0
  int32_t rewardObjectId; // w22
  int32_t v28; // w23
  const MethodInfo *v29; // x1
  int32_t iconId; // w1
  int64_t v31; // x3

  v5 = item;
  v6 = this;
  if ( (byte_4CB4DAF & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMaster_EventMissionAddMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&MissionInfoMaker_TypeInfo);
    this = (CompleteMissionListViewItemDraw_o *)sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB4DAF = 1;
  }
  if ( !v5 )
    goto LABEL_63;
  if ( MissionListViewItem__get_EventRewardType((MissionListViewItem_o *)v5, 0) != 1 )
    goto LABEL_50;
  if ( CompleteMissionListViewItem__get_IsHideReward(v5, v7) )
  {
    this = (CompleteMissionListViewItemDraw_o *)v6->fields.itemIcon;
    v6->fields.isMultipleReward = 0;
    if ( !this )
      goto LABEL_63;
    ItemIconComponent__SetItemImage((ItemIconComponent_o *)this, 99, 0);
    goto LABEL_50;
  }
  this = (CompleteMissionListViewItemDraw_o *)MissionListViewItem__get_EventMissionEntity(
                                                (MissionListViewItem_o *)v5,
                                                0);
  if ( !this )
    goto LABEL_63;
  missionNoLb_high = HIDWORD(this->fields.missionNoLb);
  if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
  IconGiftEntities = MissionInfoMaker__GetIconGiftEntities(missionNoLb_high, 0);
  v6->fields.giftEntityList = IconGiftEntities;
  p_giftEntityList = &v6->fields.giftEntityList;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v6->fields.giftEntityList, (int32_t)IconGiftEntities, v11, v12);
  if ( !v6->fields.giftEntityList )
    goto LABEL_63;
  max_length = v6->fields.giftEntityList->max_length;
  if ( !max_length )
    return;
  v6->fields.isMultipleReward = (int)max_length > 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_EventMissionAddMaster___);
  this = (CompleteMissionListViewItemDraw_o *)MissionListViewItem__get_EventMissionEntity(
                                                (MissionListViewItem_o *)v5,
                                                0);
  if ( !this )
    goto LABEL_63;
  m_CachedPtr = this->fields.m_CachedPtr;
  this = (CompleteMissionListViewItemDraw_o *)MissionListViewItem__get_EventMissionEntity(
                                                (MissionListViewItem_o *)v5,
                                                0);
  if ( !this || !Master_object )
    goto LABEL_63;
  v16 = EventMissionAddMaster__GetEventMissionChangeRewardIcon(
          (EventMissionAddMaster_o *)Master_object,
          m_CachedPtr,
          HIDWORD(this->fields.m_CancellationTokenSource),
          0,
          0);
  if ( !System_String__IsNullOrEmpty(v16, 0) )
  {
    v6->fields.isMultipleReward = 0;
    v5->fields.isHideRewardDetail = 1;
LABEL_34:
    this = (CompleteMissionListViewItemDraw_o *)System_String__IsNullOrEmpty(v16, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v21 = *p_giftEntityList;
      if ( !*p_giftEntityList )
        goto LABEL_63;
      if ( !LODWORD(v21->max_length) )
        goto LABEL_64;
      v22 = v21->m_Items[0];
      if ( !v22 )
        goto LABEL_63;
      item = (CompleteMissionListViewItem_o *)(unsigned int)v22->fields.prioredIconId;
      itemIcon = v6->fields.itemIcon;
      if ( (int)item < 1 )
      {
        Type = MissionListViewItem__get_Type((MissionListViewItem_o *)v5, 0);
        rewardObjectId = v5->fields.rewardObjectId;
        v28 = Type;
        this = (CompleteMissionListViewItemDraw_o *)MissionListViewItem__get_DisplayGiftNum(
                                                      (MissionListViewItem_o *)v5,
                                                      0);
        if ( !itemIcon )
          goto LABEL_63;
        ItemIconComponent__SetGift_41153640(itemIcon, v28, rewardObjectId, (int)this, 0, 0);
      }
      else
      {
        if ( !itemIcon )
          goto LABEL_63;
        num = (unsigned int)v22->fields.num;
        if ( (int)num <= 1 )
          v25 = -1;
        else
          v25 = num;
        ItemIconComponent__SetItemImage_41156088(v6->fields.itemIcon, (int32_t)item, v25, 0);
      }
    }
    else
    {
      this = (CompleteMissionListViewItemDraw_o *)v6->fields.itemIcon;
      if ( !this )
        goto LABEL_63;
      ItemIconComponent__SetItemImageByName((ItemIconComponent_o *)this, v16, 0);
    }
    this = (CompleteMissionListViewItemDraw_o *)v6->fields.itemIcon;
    if ( !this )
      goto LABEL_63;
    ItemIconComponent__SetAlpha((ItemIconComponent_o *)this, 1.0, 0);
    goto LABEL_50;
  }
  if ( !v6->fields.isMultipleReward )
    goto LABEL_34;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (CompleteMissionListViewItemDraw_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)manager, 0, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_50;
  v17 = *p_giftEntityList;
  if ( !v17 || !manager )
    goto LABEL_63;
  this = (CompleteMissionListViewItemDraw_o *)MissionListViewManager__GetAlphaAnimCnt(
                                                (MissionListViewManager_o *)manager,
                                                v17->max_length,
                                                0);
  if ( (unsigned int)this >= LODWORD(v17->max_length) )
LABEL_64:
    sub_1C6BC68(this);
  v18 = v17->m_Items[(int)this];
  if ( !v18 )
    goto LABEL_63;
  item = (CompleteMissionListViewItem_o *)(unsigned int)v18->fields.prioredIconId;
  this = (CompleteMissionListViewItemDraw_o *)v6->fields.itemIcon;
  v19 = v18->fields.num;
  if ( (int)item < 1 )
  {
    if ( !this )
      goto LABEL_63;
    if ( v19 <= 1 )
      v31 = -1;
    else
      v31 = (unsigned int)v18->fields.num;
    ItemIconComponent__SetGift_41153640((ItemIconComponent_o *)this, v18->fields.type, v18->fields.objectId, v31, 0, 0);
  }
  else
  {
    if ( !this )
      goto LABEL_63;
    if ( v19 <= 1 )
      v20 = -1;
    else
      v20 = (unsigned int)v18->fields.num;
    ItemIconComponent__SetItemImage_41156088((ItemIconComponent_o *)this, (int32_t)item, v20, 0);
  }
LABEL_50:
  if ( MissionListViewItem__get_EventRewardType((MissionListViewItem_o *)v5, 0) == 3 )
  {
    if ( CompleteMissionListViewItem__get_IsHideReward(v5, v29) )
    {
      this = (CompleteMissionListViewItemDraw_o *)v6->fields.itemIcon;
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
      this = (CompleteMissionListViewItemDraw_o *)v6->fields.itemIcon;
      if ( this )
      {
        iconId = v5->fields.iconId;
        goto LABEL_57;
      }
    }
LABEL_63:
    sub_1C6BC60(this, item);
  }
}


void CompleteMissionListViewItemDraw__UpdateDispResTime(
        CompleteMissionListViewItemDraw_o *this,
        MissionListViewItem_o *missionListViewItem,
        int64_t nowTime,
        const MethodInfo *method)
{
  __int64 naturalAligment; // x10

  if ( (byte_4CB4DB0 & 1) == 0 )
  {
    sub_1C6BA08(&CompleteMissionListViewItem_TypeInfo);
    byte_4CB4DB0 = 1;
  }
  if ( missionListViewItem )
  {
    naturalAligment = CompleteMissionListViewItem_TypeInfo->_2.naturalAligment;
    if ( missionListViewItem->klass->_2.naturalAligment >= (unsigned int)naturalAligment
      && (CompleteMissionListViewItem_c *)missionListViewItem->klass->_2.typeHierarchy[naturalAligment - 1] == CompleteMissionListViewItem_TypeInfo
      && !LODWORD(missionListViewItem[1].klass) )
    {
      MissionListViewItemDraw__UpdateDispResTime((MissionListViewItemDraw_o *)this, missionListViewItem, nowTime, 0);
    }
  }
}


void CompleteMissionListViewItemDraw__UpdateItem(
        CompleteMissionListViewItemDraw_o *this,
        CompleteMissionListViewItem_o *item,
        int32_t mode,
        CompleteMissionListViewManager_o *manager,
        const MethodInfo *method)
{
  EventMissionEntity_o *EventMissionEntity; // x0
  __int64 v10; // x1
  __int64 resTimeLb; // x0
  int64_t oldTime; // x23
  int64_t v13; // x22
  MissionListViewItemDraw_c *v14; // x8

  if ( (byte_4CB4DB1 & 1) == 0 )
  {
    sub_1C6BA08(&MissionListViewItemDraw_TypeInfo);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    byte_4CB4DB1 = 1;
  }
  if ( item )
  {
    EventMissionEntity = MissionListViewItem__get_EventMissionEntity((MissionListViewItem_o *)item, 0);
    if ( mode )
    {
      if ( EventMissionEntity )
      {
        resTimeLb = (__int64)this->fields.resTimeLb;
        if ( !resTimeLb )
          goto LABEL_18;
        resTimeLb = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)resTimeLb, 0);
        if ( !resTimeLb )
          goto LABEL_18;
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
            resTimeLb = ((__int64 (__fastcall *)(CompleteMissionListViewItemDraw_o *, CompleteMissionListViewItem_o *, int64_t, const MethodInfo *))this->klass->vtable._9_UpdateDispResTime.methodPtr)(
                          this,
                          item,
                          v13,
                          this->klass->vtable._9_UpdateDispResTime.method);
            this->fields.oldTime = v13;
          }
        }
        if ( !manager )
LABEL_18:
          sub_1C6BC60(resTimeLb, v10);
        MissionListViewItemDraw__SetRewardIconAlpha((MissionListViewItemDraw_o *)this, manager->fields.alphaAnimNow, 0);
      }
    }
  }
}