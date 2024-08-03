void __fastcall CompleteMissionListViewItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1

  if ( (byte_49FB287 & 1) == 0 )
  {
    sub_1B640C8(&CompleteMissionListViewItemDraw_TypeInfo, v1);
    sub_1B640C8(&StringLiteral_6181/*"EventReward/EventRewardAtlas"*/, v4);
    byte_49FB287 = 1;
  }
  CompleteMissionListViewItemDraw_TypeInfo->static_fields->REWARDIMG_ATLAS_PATH = (struct System_String_o *)StringLiteral_6181/*"EventReward/EventRewardAtlas"*/;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)CompleteMissionListViewItemDraw_TypeInfo->static_fields,
    StringLiteral_6181/*"EventReward/EventRewardAtlas"*/,
    v2,
    v3);
}


void __fastcall CompleteMissionListViewItemDraw___ctor(
        CompleteMissionListViewItemDraw_o *this,
        const MethodInfo *method)
{
  if ( (byte_49FB286 & 1) == 0 )
  {
    sub_1B640C8(&MissionListViewItemDraw_TypeInfo, method);
    byte_49FB286 = 1;
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
  __int64 v5; // x1
  int32_t *v6; // x8
  int32_t v7; // w1
  int v8; // w9
  int32_t v9; // w2
  int32_t v10; // w3

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
    sub_1B6432C(this, v5);
  v6 = (int32_t *)giftEntityList->m_Items[(int)this];
  if ( !v6 )
    goto LABEL_18;
  v7 = v6[11];
  this = (CompleteMissionListViewItemDraw_o *)v4->fields.itemIcon;
  v8 = v6[7];
  if ( v7 >= 1 )
  {
    if ( this )
    {
      if ( v8 <= 1 )
        v9 = -1;
      else
        v9 = v6[7];
      ItemIconComponent__SetItemImage_37831688((ItemIconComponent_o *)this, v7, v9, 0LL);
      return;
    }
LABEL_18:
    sub_1B64324(this);
  }
  if ( !this )
    goto LABEL_18;
  if ( v8 <= 1 )
    v10 = -1;
  else
    v10 = v6[7];
  ItemIconComponent__SetGift_37829292((ItemIconComponent_o *)this, v6[5], v6[6], v10, 0, 0LL);
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
  if ( (byte_49FB281 & 1) == 0 )
  {
    sub_1B640C8(&Method_AssetData_GetObject_GameObject___, data);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, v5);
    this = (CompleteMissionListViewItemDraw_o *)sub_1B640C8(&UnityEngine_Object_TypeInfo, v6);
    byte_49FB281 = 1;
  }
  if ( !data )
    goto LABEL_14;
  Object_object = AssetData__GetObject_object_(
                    data,
                    (const MethodInfo_2E1B914 *)Method_AssetData_GetObject_GameObject___);
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
                           (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
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
    sub_1B64324(this);
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

  if ( (byte_49FB285 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, item);
    byte_49FB285 = 1;
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
  __int64 v18; // x1
  __int64 v19; // x2
  CompleteMissionListViewItemDraw_c *v20; // x0
  System_String_o *REWARDIMG_ATLAS_PATH; // x23
  AssetLoader_LoadEndDataHandler_o *v22; // x24
  const MethodInfo *v23; // x2
  __int64 methodPtr_low; // x10
  __int64 v25; // x10
  UISprite_o *rewardAchiveSprite; // x22
  System_String_o **v28; // x8
  System_String_o *v29; // x23
  Il2CppObject *v30; // x0
  System_String_o *v31; // x0
  const MethodInfo *v32; // x3
  int32_t currentEventId; // [xsp+Ch] [xbp-34h] BYREF

  v7 = missionListViewItem;
  if ( (byte_49FB280 & 1) == 0 )
  {
    sub_1B640C8(&AssetManager_TypeInfo, missionListViewItem);
    sub_1B640C8(&Method_CompleteMissionListViewItemDraw_EndLoadAchiveImg__, v9);
    sub_1B640C8(&CompleteMissionListViewItemDraw_TypeInfo, v10);
    sub_1B640C8(&CompleteMissionListViewItem_TypeInfo, v11);
    sub_1B640C8(&CompleteMissionListViewManager_TypeInfo, v12);
    sub_1B640C8(&int_TypeInfo, v13);
    sub_1B640C8(&AssetLoader_LoadEndDataHandler_TypeInfo, v14);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v15);
    sub_1B640C8(&StringLiteral_19169/*"event_rewardget_{0}01"*/, v16);
    sub_1B640C8(&StringLiteral_19170/*"event_rewardget_{0}02"*/, v17);
    byte_49FB280 = 1;
  }
  if ( !MissionListViewItemDraw__SetItem((MissionListViewItemDraw_o *)this, v7, mode, listViewManager, 0LL) )
    return 0;
  v20 = CompleteMissionListViewItemDraw_TypeInfo;
  if ( !CompleteMissionListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CompleteMissionListViewItemDraw_TypeInfo);
    v20 = CompleteMissionListViewItemDraw_TypeInfo;
  }
  if ( !v20->static_fields->achiveImgData )
  {
    if ( !v20->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v20);
      v20 = CompleteMissionListViewItemDraw_TypeInfo;
    }
    REWARDIMG_ATLAS_PATH = v20->static_fields->REWARDIMG_ATLAS_PATH;
    v22 = (AssetLoader_LoadEndDataHandler_o *)sub_1B64314(AssetLoader_LoadEndDataHandler_TypeInfo, v18, v19);
    AssetLoader_LoadEndDataHandler___ctor(
      v22,
      (Il2CppObject *)this,
      Method_CompleteMissionListViewItemDraw_EndLoadAchiveImg__,
      0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    if ( !AssetManager__loadAssetStorage(REWARDIMG_ATLAS_PATH, v22, 1, 0LL) )
      CompleteMissionListViewItemDraw__EndLoadAchiveImg(this, 0LL, v23);
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
  v25 = LOBYTE(CompleteMissionListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(listViewManager->klass->vtable._0_Equals.methodPtr) < (unsigned int)v25 )
  {
    listViewManager = 0LL;
    goto LABEL_24;
  }
  if ( (CompleteMissionListViewManager_c *)listViewManager->klass->_2.typeHierarchy[v25 - 1] != CompleteMissionListViewManager_TypeInfo )
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
    v28 = (System_String_o **)&StringLiteral_19169/*"event_rewardget_{0}01"*/;
  else
    v28 = (System_String_o **)&StringLiteral_19170/*"event_rewardget_{0}02"*/;
  v29 = *v28;
  currentEventId = v7->fields.currentEventId;
  v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &currentEventId);
  v31 = System_String__Format(v29, v30, 0LL);
  if ( !rewardAchiveSprite )
    sub_1B64324(v31);
  UISprite__set_spriteName(rewardAchiveSprite, v31, 0LL);
  CompleteMissionListViewItemDraw__SetRewardItemIcon(
    this,
    (CompleteMissionListViewItem_o *)v7,
    (CompleteMissionListViewManager_o *)listViewManager,
    v32);
  return 1;
}


void __fastcall CompleteMissionListViewItemDraw__SetRewardItemIcon(
        CompleteMissionListViewItemDraw_o *this,
        CompleteMissionListViewItem_o *item,
        CompleteMissionListViewManager_o *manager,
        const MethodInfo *method)
{
  CompleteMissionListViewItemDraw_o *v6; // x20
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  const MethodInfo *v10; // x1
  Il2CppObject *Master_object; // x22
  GiftEntity_array *GiftListById; // x0
  struct GiftEntity_array **p_giftEntityList; // x22
  int32_t v14; // w2
  int32_t v15; // w3
  __int64 v16; // x8
  Il2CppObject *v17; // x23
  int32_t m_CachedPtr; // w24
  System_String_o *v19; // x23
  struct GiftEntity_array *v20; // x22
  __int64 v21; // x1
  int32_t *v22; // x8
  int32_t v23; // w1
  int v24; // w9
  int32_t v25; // w2
  struct GiftEntity_array *v26; // x8
  GiftEntity_o *v27; // x8
  int32_t prioredIconId; // w1
  ItemIconComponent_o *itemIcon; // x21
  int num; // w8
  int32_t v31; // w2
  int32_t Type; // w0
  int32_t rewardObjectId; // w22
  int32_t v34; // w23
  const MethodInfo *v35; // x1
  int32_t iconId; // w1
  int32_t v37; // w3

  v6 = this;
  if ( (byte_49FB282 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_EventMissionAddMaster___, item);
    sub_1B640C8(&Method_DataManager_GetMaster_GiftMaster___, v7);
    sub_1B640C8(&DataManager_TypeInfo, v8);
    this = (CompleteMissionListViewItemDraw_o *)sub_1B640C8(&UnityEngine_Object_TypeInfo, v9);
    byte_49FB282 = 1;
  }
  if ( !item )
    goto LABEL_64;
  if ( MissionListViewItem__get_EventRewardType((MissionListViewItem_o *)item, 0LL) != 1 )
    goto LABEL_51;
  if ( CompleteMissionListViewItem__get_IsHideReward(item, v10) )
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
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_GiftMaster___);
  this = (CompleteMissionListViewItemDraw_o *)MissionListViewItem__get_EventMissionEntity(
                                                (MissionListViewItem_o *)item,
                                                0LL);
  if ( !this )
    goto LABEL_64;
  if ( !Master_object )
    goto LABEL_64;
  GiftListById = GiftMaster__GetGiftListById((GiftMaster_o *)Master_object, HIDWORD(this->fields.missionNoLb), 0LL);
  v6->fields.giftEntityList = GiftListById;
  p_giftEntityList = &v6->fields.giftEntityList;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v6->fields.giftEntityList, (int32_t)GiftListById, v14, v15);
  if ( !v6->fields.giftEntityList )
    goto LABEL_64;
  v16 = *(_QWORD *)&v6->fields.giftEntityList->max_length;
  if ( !v16 )
    return;
  v6->fields.isMultipleReward = (int)v16 > 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v17 = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_EventMissionAddMaster___);
  this = (CompleteMissionListViewItemDraw_o *)MissionListViewItem__get_EventMissionEntity(
                                                (MissionListViewItem_o *)item,
                                                0LL);
  if ( !this )
    goto LABEL_64;
  m_CachedPtr = this->fields.m_CachedPtr;
  this = (CompleteMissionListViewItemDraw_o *)MissionListViewItem__get_EventMissionEntity(
                                                (MissionListViewItem_o *)item,
                                                0LL);
  if ( !this || !v17 )
    goto LABEL_64;
  v19 = EventMissionAddMaster__GetEventMissionChangeRewardIcon(
          (EventMissionAddMaster_o *)v17,
          m_CachedPtr,
          HIDWORD(this->fields.m_CancellationTokenSource),
          0,
          0LL);
  if ( !System_String__IsNullOrEmpty(v19, 0LL) )
  {
    v6->fields.isMultipleReward = 0;
    item->fields.isHideRewardDetail = 1;
LABEL_35:
    this = (CompleteMissionListViewItemDraw_o *)System_String__IsNullOrEmpty(v19, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v26 = *p_giftEntityList;
      if ( !*p_giftEntityList )
        goto LABEL_64;
      if ( !v26->max_length )
        goto LABEL_65;
      v27 = v26->m_Items[0];
      if ( !v27 )
        goto LABEL_64;
      prioredIconId = v27->fields.prioredIconId;
      itemIcon = v6->fields.itemIcon;
      if ( prioredIconId < 1 )
      {
        Type = MissionListViewItem__get_Type((MissionListViewItem_o *)item, 0LL);
        rewardObjectId = item->fields.rewardObjectId;
        v34 = Type;
        this = (CompleteMissionListViewItemDraw_o *)MissionListViewItem__get_DisplayGiftNum(
                                                      (MissionListViewItem_o *)item,
                                                      0LL);
        if ( !itemIcon )
          goto LABEL_64;
        ItemIconComponent__SetGift_37829292(itemIcon, v34, rewardObjectId, (int32_t)this, 0, 0LL);
      }
      else
      {
        if ( !itemIcon )
          goto LABEL_64;
        num = v27->fields.num;
        if ( num <= 1 )
          v31 = -1;
        else
          v31 = num;
        ItemIconComponent__SetItemImage_37831688(v6->fields.itemIcon, prioredIconId, v31, 0LL);
      }
    }
    else
    {
      this = (CompleteMissionListViewItemDraw_o *)v6->fields.itemIcon;
      if ( !this )
        goto LABEL_64;
      ItemIconComponent__SetItemImageByName((ItemIconComponent_o *)this, v19, 0LL);
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
  v20 = *p_giftEntityList;
  if ( !v20 || !manager )
    goto LABEL_64;
  this = (CompleteMissionListViewItemDraw_o *)MissionListViewManager__GetAlphaAnimCnt(
                                                (MissionListViewManager_o *)manager,
                                                v20->max_length,
                                                0LL);
  if ( (unsigned int)this >= v20->max_length )
LABEL_65:
    sub_1B6432C(this, v21);
  v22 = (int32_t *)v20->m_Items[(int)this];
  if ( !v22 )
    goto LABEL_64;
  v23 = v22[11];
  this = (CompleteMissionListViewItemDraw_o *)v6->fields.itemIcon;
  v24 = v22[7];
  if ( v23 < 1 )
  {
    if ( !this )
      goto LABEL_64;
    if ( v24 <= 1 )
      v37 = -1;
    else
      v37 = v22[7];
    ItemIconComponent__SetGift_37829292((ItemIconComponent_o *)this, v22[5], v22[6], v37, 0, 0LL);
  }
  else
  {
    if ( !this )
      goto LABEL_64;
    if ( v24 <= 1 )
      v25 = -1;
    else
      v25 = v22[7];
    ItemIconComponent__SetItemImage_37831688((ItemIconComponent_o *)this, v23, v25, 0LL);
  }
LABEL_51:
  if ( MissionListViewItem__get_EventRewardType((MissionListViewItem_o *)item, 0LL) == 3 )
  {
    if ( CompleteMissionListViewItem__get_IsHideReward(item, v35) )
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
        iconId = item->fields.iconId;
        goto LABEL_58;
      }
    }
LABEL_64:
    sub_1B64324(this);
  }
}


void __fastcall CompleteMissionListViewItemDraw__UpdateDispResTime(
        CompleteMissionListViewItemDraw_o *this,
        MissionListViewItem_o *missionListViewItem,
        int64_t nowTime,
        const MethodInfo *method)
{
  __int64 methodPtr_low; // x10

  if ( (byte_49FB283 & 1) == 0 )
  {
    sub_1B640C8(&CompleteMissionListViewItem_TypeInfo, missionListViewItem);
    byte_49FB283 = 1;
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
  __int64 resTimeLb; // x0
  int64_t oldTime; // x23
  int64_t v13; // x22
  MissionListViewItemDraw_c *v14; // x8

  if ( (byte_49FB284 & 1) == 0 )
  {
    sub_1B640C8(&MissionListViewItemDraw_TypeInfo, item);
    sub_1B640C8(&NetworkManager_TypeInfo, v9);
    byte_49FB284 = 1;
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
          sub_1B64324(resTimeLb);
        MissionListViewItemDraw__SetRewardIconAlpha(
          (MissionListViewItemDraw_o *)this,
          manager->fields.alphaAnimNow,
          0LL);
      }
    }
  }
}