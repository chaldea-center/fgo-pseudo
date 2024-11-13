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
  __int64 v9; // x2

  if ( (byte_4B14F30 & 1) == 0 )
  {
    sub_1BCA7E0(&CompleteMissionListViewItemDraw_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_6328/*"EventReward/EventRewardAtlas"*/, v8, v9);
    byte_4B14F30 = 1;
  }
  CompleteMissionListViewItemDraw_TypeInfo->static_fields->REWARDIMG_ATLAS_PATH = (struct System_String_o *)StringLiteral_6328/*"EventReward/EventRewardAtlas"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)CompleteMissionListViewItemDraw_TypeInfo->static_fields,
    StringLiteral_6328/*"EventReward/EventRewardAtlas"*/,
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
  __int64 v2; // x2

  if ( (byte_4B14F2F & 1) == 0 )
  {
    sub_1BCA7E0(&MissionListViewItemDraw_TypeInfo, method, v2);
    byte_4B14F2F = 1;
  }
  if ( !MissionListViewItemDraw_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MissionListViewItemDraw_TypeInfo, method);
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
    sub_1BCAA44(this, manager);
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
      ItemIconComponent__SetItemImage_38857576((ItemIconComponent_o *)this, (int32_t)manager, v7, 0LL);
      return;
    }
LABEL_18:
    sub_1BCAA3C(this, manager);
  }
  if ( !this )
    goto LABEL_18;
  if ( num <= 1 )
    v8 = -1;
  else
    v8 = v5->fields.num;
  ItemIconComponent__SetGift_38855180((ItemIconComponent_o *)this, v5->fields.type, v5->fields.objectId, v8, 0, 0LL);
}


void __fastcall CompleteMissionListViewItemDraw__EndLoadAchiveImg(
        CompleteMissionListViewItemDraw_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  CompleteMissionListViewItemDraw_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  Il2CppObject *Object_object; // x20
  __int64 v11; // x1
  Il2CppObject *Component_object; // x20

  v4 = this;
  if ( (byte_4B14F2A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AssetData_GetObject_GameObject___, data, method);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, v5, v6);
    this = (CompleteMissionListViewItemDraw_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    byte_4B14F2A = 1;
  }
  if ( !data )
    goto LABEL_14;
  Object_object = AssetData__GetObject_object_(
                    data,
                    (const MethodInfo_2EF4D38 *)Method_AssetData_GetObject_GameObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
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
                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
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
    sub_1BCAA3C(this, data);
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

  if ( (byte_4B14F2E & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, item, method);
    byte_4B14F2E = 1;
  }
  if ( item )
  {
    baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
    if ( UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
      ((void (__fastcall *)(CompleteMissionListViewItemDraw_o *, MissionListViewItem_o *, Il2CppMethodPointer))this->klass->vtable._5_InitDispResTime.method)(
        this,
        item,
        this->klass->vtable._6_SetLockMissionBoard.methodPtr);
  }
  MissionListViewItemDraw__SetInput((MissionListViewItemDraw_o *)this, item, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CompleteMissionListViewItemDraw__SetItem(
        CompleteMissionListViewItemDraw_o *this,
        MissionListViewItem_o *missionListViewItem,
        int32_t mode,
        ListViewManager_o *listViewManager,
        const MethodInfo *method)
{
  MissionListViewItem_o *v7; // x21
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  CompleteMissionListViewItemDraw_c *v30; // x0
  System_String_o *REWARDIMG_ATLAS_PATH; // x23
  AssetLoader_LoadEndDataHandler_o *v32; // x24
  __int64 v33; // x1
  const MethodInfo *v34; // x2
  __int64 methodPtr_low; // x10
  __int64 v36; // x10
  UISprite_o *rewardAchiveSprite; // x22
  System_String_o **v39; // x8
  System_String_o *v40; // x23
  Il2CppObject *v41; // x0
  System_String_o *v42; // x0
  __int64 v43; // x1
  const MethodInfo *v44; // x3
  int32_t currentEventId; // [xsp+Ch] [xbp-34h] BYREF

  v7 = missionListViewItem;
  if ( (byte_4B14F29 & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, missionListViewItem, *(_QWORD *)&mode);
    sub_1BCA7E0(&Method_CompleteMissionListViewItemDraw_EndLoadAchiveImg__, v9, v10);
    sub_1BCA7E0(&CompleteMissionListViewItemDraw_TypeInfo, v11, v12);
    sub_1BCA7E0(&CompleteMissionListViewItem_TypeInfo, v13, v14);
    sub_1BCA7E0(&CompleteMissionListViewManager_TypeInfo, v15, v16);
    sub_1BCA7E0(&int_TypeInfo, v17, v18);
    sub_1BCA7E0(&AssetLoader_LoadEndDataHandler_TypeInfo, v19, v20);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v21, v22);
    sub_1BCA7E0(&StringLiteral_19447/*"event_rewardget_{0}01"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_19448/*"event_rewardget_{0}02"*/, v25, v26);
    byte_4B14F29 = 1;
  }
  if ( !MissionListViewItemDraw__SetItem((MissionListViewItemDraw_o *)this, v7, mode, listViewManager, 0LL) )
    return 0;
  v30 = CompleteMissionListViewItemDraw_TypeInfo;
  if ( !CompleteMissionListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CompleteMissionListViewItemDraw_TypeInfo, v27);
    v30 = CompleteMissionListViewItemDraw_TypeInfo;
  }
  if ( !v30->static_fields->achiveImgData )
  {
    if ( !v30->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v30, v27);
      v30 = CompleteMissionListViewItemDraw_TypeInfo;
    }
    REWARDIMG_ATLAS_PATH = v30->static_fields->REWARDIMG_ATLAS_PATH;
    v32 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCAA2C(AssetLoader_LoadEndDataHandler_TypeInfo, v27, v28, v29);
    AssetLoader_LoadEndDataHandler___ctor(
      v32,
      (Il2CppObject *)this,
      Method_CompleteMissionListViewItemDraw_EndLoadAchiveImg__,
      0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v33);
    if ( !AssetManager__loadAssetStorage(REWARDIMG_ATLAS_PATH, v32, 1, 0LL) )
      CompleteMissionListViewItemDraw__EndLoadAchiveImg(this, 0LL, v34);
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
  v36 = LOBYTE(CompleteMissionListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(listViewManager->klass->vtable._0_Equals.methodPtr) < (unsigned int)v36 )
  {
    listViewManager = 0LL;
    goto LABEL_24;
  }
  if ( (CompleteMissionListViewManager_c *)listViewManager->klass->_2.typeHierarchy[v36 - 1] != CompleteMissionListViewManager_TypeInfo )
    listViewManager = 0LL;
  if ( !v7 )
    return 0;
LABEL_29:
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v27);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)listViewManager, 0LL, 0LL) )
    return 0;
  rewardAchiveSprite = this->fields.rewardAchiveSprite;
  if ( v7->fields.dispNo == 1 )
    v39 = (System_String_o **)&StringLiteral_19447/*"event_rewardget_{0}01"*/;
  else
    v39 = (System_String_o **)&StringLiteral_19448/*"event_rewardget_{0}02"*/;
  v40 = *v39;
  currentEventId = v7->fields.currentEventId;
  v41 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &currentEventId);
  v42 = System_String__Format(v40, v41, 0LL);
  if ( !rewardAchiveSprite )
    sub_1BCAA3C(v42, v43);
  UISprite__set_spriteName(rewardAchiveSprite, v42, 0LL);
  CompleteMissionListViewItemDraw__SetRewardItemIcon(
    this,
    (CompleteMissionListViewItem_o *)v7,
    (CompleteMissionListViewManager_o *)listViewManager,
    v44);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  const MethodInfo *v13; // x1
  Il2CppObject *Master_object; // x22
  GiftEntity_array *GiftListById; // x0
  struct GiftEntity_array **p_giftEntityList; // x22
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  __int64 v23; // x8
  Il2CppObject *v24; // x23
  int32_t m_CachedPtr; // w24
  System_String_o *v26; // x23
  __int64 v27; // x1
  struct GiftEntity_array *v28; // x22
  GiftEntity_o *v29; // x8
  int v30; // w9
  int32_t v31; // w2
  struct GiftEntity_array *v32; // x8
  GiftEntity_o *v33; // x8
  ItemIconComponent_o *itemIcon; // x21
  int num; // w8
  int32_t v36; // w2
  int32_t Type; // w0
  int32_t rewardObjectId; // w22
  int32_t v39; // w23
  const MethodInfo *v40; // x1
  int32_t iconId; // w1
  int32_t v42; // w3

  v5 = item;
  v6 = this;
  if ( (byte_4B14F2B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventMissionAddMaster___, item, manager);
    sub_1BCA7E0(&Method_DataManager_GetMaster_GiftMaster___, v7, v8);
    sub_1BCA7E0(&DataManager_TypeInfo, v9, v10);
    this = (CompleteMissionListViewItemDraw_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v11, v12);
    byte_4B14F2B = 1;
  }
  if ( !v5 )
    goto LABEL_64;
  if ( MissionListViewItem__get_EventRewardType((MissionListViewItem_o *)v5, 0LL) != 1 )
    goto LABEL_51;
  if ( CompleteMissionListViewItem__get_IsHideReward(v5, v13) )
  {
    this = (CompleteMissionListViewItemDraw_o *)v6->fields.itemIcon;
    v6->fields.isMultipleReward = 0;
    if ( !this )
      goto LABEL_64;
    ItemIconComponent__SetItemImage((ItemIconComponent_o *)this, 99, 0LL);
    goto LABEL_51;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, item);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_GiftMaster___);
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
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v6->fields.giftEntityList,
    (int64_t)GiftListById,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  if ( !v6->fields.giftEntityList )
    goto LABEL_64;
  v23 = *(_QWORD *)&v6->fields.giftEntityList->max_length;
  if ( !v23 )
    return;
  v6->fields.isMultipleReward = (int)v23 > 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, item);
  v24 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventMissionAddMaster___);
  this = (CompleteMissionListViewItemDraw_o *)MissionListViewItem__get_EventMissionEntity(
                                                (MissionListViewItem_o *)v5,
                                                0LL);
  if ( !this )
    goto LABEL_64;
  m_CachedPtr = this->fields.m_CachedPtr;
  this = (CompleteMissionListViewItemDraw_o *)MissionListViewItem__get_EventMissionEntity(
                                                (MissionListViewItem_o *)v5,
                                                0LL);
  if ( !this || !v24 )
    goto LABEL_64;
  v26 = EventMissionAddMaster__GetEventMissionChangeRewardIcon(
          (EventMissionAddMaster_o *)v24,
          m_CachedPtr,
          HIDWORD(this->fields.m_CancellationTokenSource),
          0,
          0LL);
  if ( !System_String__IsNullOrEmpty(v26, 0LL) )
  {
    v6->fields.isMultipleReward = 0;
    v5->fields.isHideRewardDetail = 1;
LABEL_35:
    this = (CompleteMissionListViewItemDraw_o *)System_String__IsNullOrEmpty(v26, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v32 = *p_giftEntityList;
      if ( !*p_giftEntityList )
        goto LABEL_64;
      if ( !v32->max_length )
        goto LABEL_65;
      v33 = v32->m_Items[0];
      if ( !v33 )
        goto LABEL_64;
      item = (CompleteMissionListViewItem_o *)(unsigned int)v33->fields.prioredIconId;
      itemIcon = v6->fields.itemIcon;
      if ( (int)item < 1 )
      {
        Type = MissionListViewItem__get_Type((MissionListViewItem_o *)v5, 0LL);
        rewardObjectId = v5->fields.rewardObjectId;
        v39 = Type;
        this = (CompleteMissionListViewItemDraw_o *)MissionListViewItem__get_DisplayGiftNum(
                                                      (MissionListViewItem_o *)v5,
                                                      0LL);
        if ( !itemIcon )
          goto LABEL_64;
        ItemIconComponent__SetGift_38855180(itemIcon, v39, rewardObjectId, (int32_t)this, 0, 0LL);
      }
      else
      {
        if ( !itemIcon )
          goto LABEL_64;
        num = v33->fields.num;
        if ( num <= 1 )
          v36 = -1;
        else
          v36 = num;
        ItemIconComponent__SetItemImage_38857576(v6->fields.itemIcon, (int32_t)item, v36, 0LL);
      }
    }
    else
    {
      this = (CompleteMissionListViewItemDraw_o *)v6->fields.itemIcon;
      if ( !this )
        goto LABEL_64;
      ItemIconComponent__SetItemImageByName((ItemIconComponent_o *)this, v26, 0LL);
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v27);
  this = (CompleteMissionListViewItemDraw_o *)UnityEngine_Object__op_Inequality(
                                                (UnityEngine_Object_o *)manager,
                                                0LL,
                                                0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_51;
  v28 = *p_giftEntityList;
  if ( !v28 || !manager )
    goto LABEL_64;
  this = (CompleteMissionListViewItemDraw_o *)MissionListViewManager__GetAlphaAnimCnt(
                                                (MissionListViewManager_o *)manager,
                                                v28->max_length,
                                                0LL);
  if ( (unsigned int)this >= v28->max_length )
LABEL_65:
    sub_1BCAA44(this, item);
  v29 = v28->m_Items[(int)this];
  if ( !v29 )
    goto LABEL_64;
  item = (CompleteMissionListViewItem_o *)(unsigned int)v29->fields.prioredIconId;
  this = (CompleteMissionListViewItemDraw_o *)v6->fields.itemIcon;
  v30 = v29->fields.num;
  if ( (int)item < 1 )
  {
    if ( !this )
      goto LABEL_64;
    if ( v30 <= 1 )
      v42 = -1;
    else
      v42 = v29->fields.num;
    ItemIconComponent__SetGift_38855180(
      (ItemIconComponent_o *)this,
      v29->fields.type,
      v29->fields.objectId,
      v42,
      0,
      0LL);
  }
  else
  {
    if ( !this )
      goto LABEL_64;
    if ( v30 <= 1 )
      v31 = -1;
    else
      v31 = v29->fields.num;
    ItemIconComponent__SetItemImage_38857576((ItemIconComponent_o *)this, (int32_t)item, v31, 0LL);
  }
LABEL_51:
  if ( MissionListViewItem__get_EventRewardType((MissionListViewItem_o *)v5, 0LL) == 3 )
  {
    if ( CompleteMissionListViewItem__get_IsHideReward(v5, v40) )
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
    sub_1BCAA3C(this, item);
  }
}


void __fastcall CompleteMissionListViewItemDraw__UpdateDispResTime(
        CompleteMissionListViewItemDraw_o *this,
        MissionListViewItem_o *missionListViewItem,
        int64_t nowTime,
        const MethodInfo *method)
{
  __int64 methodPtr_low; // x10

  if ( (byte_4B14F2C & 1) == 0 )
  {
    sub_1BCA7E0(&CompleteMissionListViewItem_TypeInfo, missionListViewItem, nowTime);
    byte_4B14F2C = 1;
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


// local variable allocation has failed, the output may be wrong!
void __fastcall CompleteMissionListViewItemDraw__UpdateItem(
        CompleteMissionListViewItemDraw_o *this,
        CompleteMissionListViewItem_o *item,
        int32_t mode,
        CompleteMissionListViewManager_o *manager,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  EventMissionEntity_o *EventMissionEntity; // x0
  __int64 v12; // x1
  __int64 resTimeLb; // x0
  int64_t oldTime; // x23
  int64_t v15; // x22
  MissionListViewItemDraw_c *v16; // x8

  if ( (byte_4B14F2D & 1) == 0 )
  {
    sub_1BCA7E0(&MissionListViewItemDraw_TypeInfo, item, *(_QWORD *)&mode);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v9, v10);
    byte_4B14F2D = 1;
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
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v12);
          resTimeLb = NetworkManager__getTime(0LL);
          oldTime = this->fields.oldTime;
          v15 = resTimeLb;
          v16 = MissionListViewItemDraw_TypeInfo;
          if ( !MissionListViewItemDraw_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(MissionListViewItemDraw_TypeInfo, v12);
            v16 = MissionListViewItemDraw_TypeInfo;
          }
          if ( v15 - oldTime >= v16->static_fields->TIME_UPDATE_ITVL_SEC )
          {
            resTimeLb = ((__int64 (__fastcall *)(CompleteMissionListViewItemDraw_o *, CompleteMissionListViewItem_o *, int64_t, Il2CppMethodPointer))this->klass->vtable._9_UpdateDispResTime.method)(
                          this,
                          item,
                          v15,
                          this->klass->vtable._10_SetInput.methodPtr);
            this->fields.oldTime = v15;
          }
        }
        if ( !manager )
LABEL_18:
          sub_1BCAA3C(resTimeLb, v12);
        MissionListViewItemDraw__SetRewardIconAlpha(
          (MissionListViewItemDraw_o *)this,
          manager->fields.alphaAnimNow,
          0LL);
      }
    }
  }
}