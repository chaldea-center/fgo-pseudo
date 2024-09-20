void __fastcall CompleteMissionListViewItemDraw___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3

  if ( (byte_4A59FB7 & 1) == 0 )
  {
    sub_1B885B0(&CompleteMissionListViewItemDraw_TypeInfo);
    sub_1B885B0(&StringLiteral_6208/*"EventReward/EventRewardAtlas"*/);
    byte_4A59FB7 = 1;
  }
  CompleteMissionListViewItemDraw_TypeInfo->static_fields->REWARDIMG_ATLAS_PATH = (struct System_String_o *)StringLiteral_6208/*"EventReward/EventRewardAtlas"*/;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)CompleteMissionListViewItemDraw_TypeInfo->static_fields,
    StringLiteral_6208/*"EventReward/EventRewardAtlas"*/,
    v1,
    v2);
}


void __fastcall CompleteMissionListViewItemDraw___ctor(
        CompleteMissionListViewItemDraw_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A59FB6 & 1) == 0 )
  {
    sub_1B885B0(&MissionListViewItemDraw_TypeInfo);
    byte_4A59FB6 = 1;
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
    sub_1B88814(this, manager);
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


void __fastcall CompleteMissionListViewItemDraw__EndLoadAchiveImg(
        CompleteMissionListViewItemDraw_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  CompleteMissionListViewItemDraw_o *v4; // x19
  Il2CppObject *Object_object; // x20
  Il2CppObject *Component_object; // x20

  v4 = this;
  if ( (byte_4A59FB1 & 1) == 0 )
  {
    sub_1B885B0(&Method_AssetData_GetObject_GameObject___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    this = (CompleteMissionListViewItemDraw_o *)sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A59FB1 = 1;
  }
  if ( !data )
    goto LABEL_14;
  Object_object = AssetData__GetObject_object_(
                    data,
                    (const MethodInfo_2E61D74 *)Method_AssetData_GetObject_GameObject___);
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
                           (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
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
    sub_1B8880C(this, data);
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

  if ( (byte_4A59FB5 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A59FB5 = 1;
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
  CompleteMissionListViewItemDraw_c *v9; // x0
  System_String_o *REWARDIMG_ATLAS_PATH; // x23
  AssetLoader_LoadEndDataHandler_o *v11; // x24
  const MethodInfo *v12; // x2
  __int64 methodPtr_low; // x10
  __int64 v14; // x10
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  UISprite_o *rewardAchiveSprite; // x22
  System_String_o **v20; // x8
  System_String_o *v21; // x23
  Il2CppObject *v22; // x0
  System_String_o *v23; // x0
  __int64 v24; // x1
  const MethodInfo *v25; // x3
  int32_t currentEventId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4A59FB0 & 1) == 0 )
  {
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&Method_CompleteMissionListViewItemDraw_EndLoadAchiveImg__);
    sub_1B885B0(&CompleteMissionListViewItemDraw_TypeInfo);
    sub_1B885B0(&CompleteMissionListViewItem_TypeInfo);
    sub_1B885B0(&CompleteMissionListViewManager_TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_19246/*"event_rewardget_{0}01"*/);
    sub_1B885B0(&StringLiteral_19247/*"event_rewardget_{0}02"*/);
    byte_4A59FB0 = 1;
  }
  if ( !MissionListViewItemDraw__SetItem(
          (MissionListViewItemDraw_o *)this,
          missionListViewItem,
          mode,
          listViewManager,
          0LL) )
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
    v11 = (AssetLoader_LoadEndDataHandler_o *)sub_1B887FC(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v11,
      (Il2CppObject *)this,
      Method_CompleteMissionListViewItemDraw_EndLoadAchiveImg__,
      0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    if ( !AssetManager__loadAssetStorage(REWARDIMG_ATLAS_PATH, v11, 1, 0LL) )
      CompleteMissionListViewItemDraw__EndLoadAchiveImg(this, 0LL, v12);
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
  methodPtr_low = LOBYTE(CompleteMissionListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(missionListViewItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
  {
    missionListViewItem = 0LL;
    goto LABEL_17;
  }
  if ( (CompleteMissionListViewItem_c *)missionListViewItem->klass->_2.typeHierarchy[methodPtr_low - 1] != CompleteMissionListViewItem_TypeInfo )
    missionListViewItem = 0LL;
  if ( !listViewManager )
  {
LABEL_24:
    if ( !missionListViewItem )
      return 0;
    goto LABEL_29;
  }
LABEL_22:
  v14 = LOBYTE(CompleteMissionListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(listViewManager->klass->vtable._0_Equals.methodPtr) < (unsigned int)v14 )
  {
    listViewManager = 0LL;
    goto LABEL_24;
  }
  if ( (CompleteMissionListViewManager_c *)listViewManager->klass->_2.typeHierarchy[v14 - 1] != CompleteMissionListViewManager_TypeInfo )
    listViewManager = 0LL;
  if ( !missionListViewItem )
    return 0;
LABEL_29:
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)listViewManager, 0LL, 0LL) )
    return 0;
  rewardAchiveSprite = this->fields.rewardAchiveSprite;
  if ( missionListViewItem->fields.dispNo == 1 )
    v20 = (System_String_o **)&StringLiteral_19246/*"event_rewardget_{0}01"*/;
  else
    v20 = (System_String_o **)&StringLiteral_19247/*"event_rewardget_{0}02"*/;
  v21 = *v20;
  currentEventId = missionListViewItem->fields.currentEventId;
  v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &currentEventId, v15, v16, v17);
  v23 = System_String__Format(v21, v22, 0LL);
  if ( !rewardAchiveSprite )
    sub_1B8880C(v23, v24);
  UISprite__set_spriteName(rewardAchiveSprite, v23, 0LL);
  CompleteMissionListViewItemDraw__SetRewardItemIcon(
    this,
    (CompleteMissionListViewItem_o *)missionListViewItem,
    (CompleteMissionListViewManager_o *)listViewManager,
    v25);
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
  const MethodInfo *v7; // x1
  Il2CppObject *Master_object; // x22
  GiftEntity_array *GiftListById; // x0
  struct GiftEntity_array **p_giftEntityList; // x22
  int32_t v11; // w2
  int32_t v12; // w3
  __int64 v13; // x8
  Il2CppObject *v14; // x23
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
  if ( (byte_4A59FB2 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_EventMissionAddMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_GiftMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    this = (CompleteMissionListViewItemDraw_o *)sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A59FB2 = 1;
  }
  if ( !v5 )
    goto LABEL_64;
  if ( MissionListViewItem__get_EventRewardType((MissionListViewItem_o *)v5, 0LL) != 1 )
    goto LABEL_51;
  if ( CompleteMissionListViewItem__get_IsHideReward(v5, v7) )
  {
    this = (CompleteMissionListViewItemDraw_o *)v6->fields.itemIcon;
    v6->fields.isMultipleReward = 0;
    if ( !this )
      goto LABEL_64;
    ItemIconComponent__SetItemImage((ItemIconComponent_o *)this, 99, 0LL);
    goto LABEL_51;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_GiftMaster___);
  this = (CompleteMissionListViewItemDraw_o *)MissionListViewItem__get_EventMissionEntity(
                                                (MissionListViewItem_o *)v5,
                                                0LL);
  if ( !this )
    goto LABEL_64;
  if ( !Master_object )
    goto LABEL_64;
  GiftListById = GiftMaster__GetGiftListById((GiftMaster_o *)Master_object, HIDWORD(this->fields.missionNoLb), 0LL);
  v6->fields.giftEntityList = GiftListById;
  p_giftEntityList = &v6->fields.giftEntityList;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v6->fields.giftEntityList, (int32_t)GiftListById, v11, v12);
  if ( !v6->fields.giftEntityList )
    goto LABEL_64;
  v13 = *(_QWORD *)&v6->fields.giftEntityList->max_length;
  if ( !v13 )
    return;
  v6->fields.isMultipleReward = (int)v13 > 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v14 = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventMissionAddMaster___);
  this = (CompleteMissionListViewItemDraw_o *)MissionListViewItem__get_EventMissionEntity(
                                                (MissionListViewItem_o *)v5,
                                                0LL);
  if ( !this )
    goto LABEL_64;
  m_CachedPtr = this->fields.m_CachedPtr;
  this = (CompleteMissionListViewItemDraw_o *)MissionListViewItem__get_EventMissionEntity(
                                                (MissionListViewItem_o *)v5,
                                                0LL);
  if ( !this || !v14 )
    goto LABEL_64;
  v16 = EventMissionAddMaster__GetEventMissionChangeRewardIcon(
          (EventMissionAddMaster_o *)v14,
          m_CachedPtr,
          HIDWORD(this->fields.m_CancellationTokenSource),
          0,
          0LL);
  if ( !System_String__IsNullOrEmpty(v16, 0LL) )
  {
    v6->fields.isMultipleReward = 0;
    v5->fields.isHideRewardDetail = 1;
LABEL_35:
    this = (CompleteMissionListViewItemDraw_o *)System_String__IsNullOrEmpty(v16, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v21 = *p_giftEntityList;
      if ( !*p_giftEntityList )
        goto LABEL_64;
      if ( !v21->max_length )
        goto LABEL_65;
      v22 = v21->m_Items[0];
      if ( !v22 )
        goto LABEL_64;
      item = (CompleteMissionListViewItem_o *)(unsigned int)v22->fields.prioredIconId;
      itemIcon = v6->fields.itemIcon;
      if ( (int)item < 1 )
      {
        Type = MissionListViewItem__get_Type((MissionListViewItem_o *)v5, 0LL);
        rewardObjectId = v5->fields.rewardObjectId;
        v28 = Type;
        this = (CompleteMissionListViewItemDraw_o *)MissionListViewItem__get_DisplayGiftNum(
                                                      (MissionListViewItem_o *)v5,
                                                      0LL);
        if ( !itemIcon )
          goto LABEL_64;
        ItemIconComponent__SetGift_38144896(itemIcon, v28, rewardObjectId, (int32_t)this, 0, 0LL);
      }
      else
      {
        if ( !itemIcon )
          goto LABEL_64;
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
      this = (CompleteMissionListViewItemDraw_o *)v6->fields.itemIcon;
      if ( !this )
        goto LABEL_64;
      ItemIconComponent__SetItemImageByName((ItemIconComponent_o *)this, v16, 0LL);
    }
    this = (CompleteMissionListViewItemDraw_o *)v6->fields.itemIcon;
    if ( !this )
      goto LABEL_64;
    ItemIconComponent__SetAlpha((ItemIconComponent_o *)this, 1.0, 0LL);
    goto LABEL_51;
  }
  if ( !v6->fields.isMultipleReward )
    goto LABEL_35;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (CompleteMissionListViewItemDraw_o *)UnityEngine_Object__op_Inequality(
                                                (UnityEngine_Object_o *)manager,
                                                0LL,
                                                0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_51;
  v17 = *p_giftEntityList;
  if ( !v17 || !manager )
    goto LABEL_64;
  this = (CompleteMissionListViewItemDraw_o *)MissionListViewManager__GetAlphaAnimCnt(
                                                (MissionListViewManager_o *)manager,
                                                v17->max_length,
                                                0LL);
  if ( (unsigned int)this >= v17->max_length )
LABEL_65:
    sub_1B88814(this, item);
  v18 = v17->m_Items[(int)this];
  if ( !v18 )
    goto LABEL_64;
  item = (CompleteMissionListViewItem_o *)(unsigned int)v18->fields.prioredIconId;
  this = (CompleteMissionListViewItemDraw_o *)v6->fields.itemIcon;
  v19 = v18->fields.num;
  if ( (int)item < 1 )
  {
    if ( !this )
      goto LABEL_64;
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
      goto LABEL_64;
    if ( v19 <= 1 )
      v20 = -1;
    else
      v20 = v18->fields.num;
    ItemIconComponent__SetItemImage_38147292((ItemIconComponent_o *)this, (int32_t)item, v20, 0LL);
  }
LABEL_51:
  if ( MissionListViewItem__get_EventRewardType((MissionListViewItem_o *)v5, 0LL) == 3 )
  {
    if ( CompleteMissionListViewItem__get_IsHideReward(v5, v29) )
    {
      this = (CompleteMissionListViewItemDraw_o *)v6->fields.itemIcon;
      v6->fields.isMultipleReward = 0;
      if ( this )
      {
        iconId = 99;
LABEL_58:
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
        goto LABEL_58;
      }
    }
LABEL_64:
    sub_1B8880C(this, item);
  }
}


void __fastcall CompleteMissionListViewItemDraw__UpdateDispResTime(
        CompleteMissionListViewItemDraw_o *this,
        MissionListViewItem_o *missionListViewItem,
        int64_t nowTime,
        const MethodInfo *method)
{
  __int64 methodPtr_low; // x10

  if ( (byte_4A59FB3 & 1) == 0 )
  {
    sub_1B885B0(&CompleteMissionListViewItem_TypeInfo);
    byte_4A59FB3 = 1;
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
  EventMissionEntity_o *EventMissionEntity; // x0
  __int64 v10; // x1
  __int64 resTimeLb; // x0
  int64_t oldTime; // x23
  int64_t v13; // x22
  MissionListViewItemDraw_c *v14; // x8

  if ( (byte_4A59FB4 & 1) == 0 )
  {
    sub_1B885B0(&MissionListViewItemDraw_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A59FB4 = 1;
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
          v13 = resTimeLb;
          v14 = MissionListViewItemDraw_TypeInfo;
          if ( !MissionListViewItemDraw_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(MissionListViewItemDraw_TypeInfo);
            v14 = MissionListViewItemDraw_TypeInfo;
          }
          if ( v13 - oldTime >= v14->static_fields->TIME_UPDATE_ITVL_SEC )
          {
            resTimeLb = ((__int64 (__fastcall *)(CompleteMissionListViewItemDraw_o *, CompleteMissionListViewItem_o *, int64_t, Il2CppMethodPointer))this->klass->vtable._9_UpdateDispResTime.method)(
                          this,
                          item,
                          v13,
                          this->klass->vtable._10_SetInput.methodPtr);
            this->fields.oldTime = v13;
          }
        }
        if ( !manager )
LABEL_18:
          sub_1B8880C(resTimeLb, v10);
        MissionListViewItemDraw__SetRewardIconAlpha(
          (MissionListViewItemDraw_o *)this,
          manager->fields.alphaAnimNow,
          0LL);
      }
    }
  }
}