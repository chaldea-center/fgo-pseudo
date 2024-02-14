void __fastcall CompleteMissionListViewItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v10; // x1

  if ( (byte_4214E66 & 1) == 0 )
  {
    sub_B0D8A4(&CompleteMissionListViewItemDraw_TypeInfo, v1);
    sub_B0D8A4(&StringLiteral_6207/*"EventReward/EventRewardAtlas"*/, v8);
    byte_4214E66 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)CompleteMissionListViewItemDraw_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_6207/*"EventReward/EventRewardAtlas"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_6207/*"EventReward/EventRewardAtlas"*/;
  sub_B0D840(static_fields, v10, v2, v3, v4, v5, v6, v7);
}


void __fastcall CompleteMissionListViewItemDraw___ctor(
        CompleteMissionListViewItemDraw_o *this,
        const MethodInfo *method)
{
  if ( (byte_4214E65 & 1) == 0 )
  {
    sub_B0D8A4(&MissionListViewItemDraw_TypeInfo, method);
    byte_4214E65 = 1;
  }
  if ( (BYTE3(MissionListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MissionListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MissionListViewItemDraw_TypeInfo);
  }
  MissionListViewItemDraw___ctor((MissionListViewItemDraw_o *)this, 0LL);
}


void __fastcall CompleteMissionListViewItemDraw__ChangeNextRewardIcon(
        CompleteMissionListViewItemDraw_o *this,
        CompleteMissionListViewManager_o *manager,
        const MethodInfo *method)
{
  struct GiftEntity_array *giftEntityList; // x20
  CompleteMissionListViewItemDraw_o *v4; // x19
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
  this = (CompleteMissionListViewItemDraw_o *)MissionListViewManager__GetAlphaAnimCnt(
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
  this = (CompleteMissionListViewItemDraw_o *)v4->fields.itemIcon;
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


void __fastcall CompleteMissionListViewItemDraw__EndLoadAchiveImg(
        CompleteMissionListViewItemDraw_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  CompleteMissionListViewItemDraw_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Object_o *Object_Texture2D; // x20
  UnityEngine_Object_o *Component_srcLineSprite; // x20

  v4 = this;
  if ( (byte_4214E60 & 1) == 0 )
  {
    sub_B0D8A4(&Method_AssetData_GetObject_GameObject___, data);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, v5);
    this = (CompleteMissionListViewItemDraw_o *)sub_B0D8A4(&UnityEngine_Object_TypeInfo, v6);
    byte_4214E60 = 1;
  }
  if ( !data )
    goto LABEL_16;
  Object_Texture2D = (UnityEngine_Object_o *)AssetData__GetObject_Texture2D_(
                                               data,
                                               (const MethodInfo_1700CCC *)Method_AssetData_GetObject_GameObject___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (CompleteMissionListViewItemDraw_o *)UnityEngine_Object__op_Equality(Object_Texture2D, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( Object_Texture2D )
    {
      Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          (UnityEngine_GameObject_o *)Object_Texture2D,
                                                          (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Equality(Component_srcLineSprite, 0LL, 0LL) )
        return;
      this = (CompleteMissionListViewItemDraw_o *)v4->fields.rewardAchiveSprite;
      if ( this )
      {
        UISprite__set_atlas((UISprite_o *)this, (UIAtlas_o *)Component_srcLineSprite, 0LL);
        return;
      }
    }
LABEL_16:
    sub_B0D97C(this);
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

  if ( (byte_4214E64 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, item);
    byte_4214E64 = 1;
  }
  if ( item )
  {
    baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
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
  struct CompleteMissionListViewItemDraw_StaticFields *static_fields; // x8
  System_String_o *REWARDIMG_ATLAS_PATH; // x23
  AssetLoader_LoadEndDataHandler_o *v23; // x24
  const MethodInfo *v24; // x2
  __int64 v25; // x10
  __int64 v26; // x10
  UISprite_o *rewardAchiveSprite; // x22
  System_String_o **v29; // x8
  System_String_o *v30; // x23
  Il2CppObject *v31; // x0
  System_String_o *v32; // x0
  const MethodInfo *v33; // x3
  int32_t currentEventId; // [xsp+Ch] [xbp-34h] BYREF

  v7 = missionListViewItem;
  if ( (byte_4214E5F & 1) == 0 )
  {
    sub_B0D8A4(&AssetManager_TypeInfo, missionListViewItem);
    sub_B0D8A4(&Method_CompleteMissionListViewItemDraw_EndLoadAchiveImg__, v9);
    sub_B0D8A4(&CompleteMissionListViewItemDraw_TypeInfo, v10);
    sub_B0D8A4(&CompleteMissionListViewItem_TypeInfo, v11);
    sub_B0D8A4(&CompleteMissionListViewManager_TypeInfo, v12);
    sub_B0D8A4(&int_TypeInfo, v13);
    sub_B0D8A4(&AssetLoader_LoadEndDataHandler_TypeInfo, v14);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v15);
    sub_B0D8A4(&StringLiteral_18636/*"event_rewardget_{0}01"*/, v16);
    sub_B0D8A4(&StringLiteral_18637/*"event_rewardget_{0}02"*/, v17);
    byte_4214E5F = 1;
  }
  if ( !MissionListViewItemDraw__SetItem((MissionListViewItemDraw_o *)this, v7, mode, listViewManager, 0LL) )
    return 0;
  v20 = CompleteMissionListViewItemDraw_TypeInfo;
  if ( (BYTE3(CompleteMissionListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CompleteMissionListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CompleteMissionListViewItemDraw_TypeInfo);
    v20 = CompleteMissionListViewItemDraw_TypeInfo;
  }
  static_fields = v20->static_fields;
  if ( !static_fields->achiveImgData )
  {
    if ( (BYTE3(v20->vtable._0_Equals.methodPtr) & 4) != 0 && !v20->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v20);
      static_fields = CompleteMissionListViewItemDraw_TypeInfo->static_fields;
    }
    REWARDIMG_ATLAS_PATH = static_fields->REWARDIMG_ATLAS_PATH;
    v23 = (AssetLoader_LoadEndDataHandler_o *)sub_B0D974(AssetLoader_LoadEndDataHandler_TypeInfo, v18, v19);
    AssetLoader_LoadEndDataHandler___ctor(
      v23,
      (Il2CppObject *)this,
      Method_CompleteMissionListViewItemDraw_EndLoadAchiveImg__,
      0LL);
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    if ( !AssetManager__loadAssetStorage(REWARDIMG_ATLAS_PATH, v23, 1, 0LL) )
      CompleteMissionListViewItemDraw__EndLoadAchiveImg(this, 0LL, v24);
  }
  if ( !mode )
    return 1;
  if ( !v7 )
  {
LABEL_20:
    if ( !listViewManager )
      goto LABEL_21;
    goto LABEL_26;
  }
  v25 = *(&CompleteMissionListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v7->klass->_2.bitflags2 + 1) < (unsigned int)v25 )
  {
    v7 = 0LL;
    goto LABEL_20;
  }
  if ( (CompleteMissionListViewItem_c *)v7->klass->_2.typeHierarchy[v25 - 1] != CompleteMissionListViewItem_TypeInfo )
    v7 = 0LL;
  if ( !listViewManager )
  {
LABEL_21:
    if ( !v7 )
      return 0;
    goto LABEL_32;
  }
LABEL_26:
  v26 = *(&CompleteMissionListViewManager_TypeInfo->_2.bitflags2 + 1);
  if ( *(&listViewManager->klass->_2.bitflags2 + 1) >= (unsigned int)v26 )
  {
    if ( (CompleteMissionListViewManager_c *)listViewManager->klass->_2.typeHierarchy[v26 - 1] != CompleteMissionListViewManager_TypeInfo )
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
LABEL_32:
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)listViewManager, 0LL, 0LL) )
    return 0;
  rewardAchiveSprite = this->fields.rewardAchiveSprite;
  if ( v7->fields.dispNo == 1 )
    v29 = (System_String_o **)&StringLiteral_18636/*"event_rewardget_{0}01"*/;
  else
    v29 = (System_String_o **)&StringLiteral_18637/*"event_rewardget_{0}02"*/;
  v30 = *v29;
  currentEventId = v7->fields.currentEventId;
  v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &currentEventId);
  v32 = System_String__Format(v30, v31, 0LL);
  if ( !rewardAchiveSprite )
    sub_B0D97C(v32);
  UISprite__set_spriteName(rewardAchiveSprite, v32, 0LL);
  CompleteMissionListViewItemDraw__SetRewardItemIcon(
    this,
    (CompleteMissionListViewItem_o *)v7,
    (CompleteMissionListViewManager_o *)listViewManager,
    v33);
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
  const MethodInfo *v11; // x1
  int32_t iconId; // w1
  GiftMaster_o *Master_WarQuestSelectionMaster; // x22
  System_Int32_array **GiftListById; // x0
  struct GiftEntity_array **p_giftEntityList; // x22
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  __int64 v22; // x8
  EventMissionAddMaster_o *v23; // x23
  int32_t m_CachedPtr; // w24
  System_String_o *v25; // x23
  struct GiftEntity_array *v26; // x22
  int32_t *v27; // x9
  int32_t v28; // w1
  int v29; // w8
  int32_t v30; // w2
  struct GiftEntity_array *v31; // x8
  GiftEntity_o *v32; // x8
  int32_t prioredIconId; // w1
  ItemIconComponent_o *itemIcon; // x21
  int num; // w8
  int32_t v36; // w2
  int32_t v37; // w3
  int32_t Type; // w0
  int32_t rewardObjectId; // w22
  int32_t v40; // w23
  __int64 v41; // x0

  v6 = this;
  if ( (byte_4214E61 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_EventMissionAddMaster___, item);
    sub_B0D8A4(&Method_DataManager_GetMaster_GiftMaster___, v7);
    sub_B0D8A4(&DataManager_TypeInfo, v8);
    this = (CompleteMissionListViewItemDraw_o *)sub_B0D8A4(&UnityEngine_Object_TypeInfo, v9);
    byte_4214E61 = 1;
  }
  if ( !item )
    goto LABEL_67;
  if ( MissionListViewItem__get_EventRewardType((MissionListViewItem_o *)item, 0LL) != 1 )
    goto LABEL_8;
  if ( CompleteMissionListViewItem__get_IsHideReward(item, v10) )
  {
    this = (CompleteMissionListViewItemDraw_o *)v6->fields.itemIcon;
    v6->fields.isMultipleReward = 0;
    if ( !this )
      goto LABEL_67;
    ItemIconComponent__SetItemImage((ItemIconComponent_o *)this, 99, 0LL);
    goto LABEL_8;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (GiftMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_GiftMaster___);
  this = (CompleteMissionListViewItemDraw_o *)MissionListViewItem__get_EventMissionEntity(
                                                (MissionListViewItem_o *)item,
                                                0LL);
  if ( !this )
    goto LABEL_67;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_67;
  GiftListById = (System_Int32_array **)GiftMaster__GetGiftListById(
                                          Master_WarQuestSelectionMaster,
                                          HIDWORD(this->fields.iconLabel),
                                          0LL);
  v6->fields.giftEntityList = (struct GiftEntity_array *)GiftListById;
  p_giftEntityList = &v6->fields.giftEntityList;
  sub_B0D840((BattleServantConfConponent_o *)&v6->fields.giftEntityList, GiftListById, v16, v17, v18, v19, v20, v21);
  if ( !v6->fields.giftEntityList )
    goto LABEL_67;
  v22 = *(_QWORD *)&v6->fields.giftEntityList->max_length;
  if ( !v22 )
    return;
  v6->fields.isMultipleReward = (int)v22 > 1;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v23 = (EventMissionAddMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_EventMissionAddMaster___);
  this = (CompleteMissionListViewItemDraw_o *)MissionListViewItem__get_EventMissionEntity(
                                                (MissionListViewItem_o *)item,
                                                0LL);
  if ( !this )
    goto LABEL_67;
  m_CachedPtr = this->fields.m_CachedPtr;
  this = (CompleteMissionListViewItemDraw_o *)MissionListViewItem__get_EventMissionEntity(
                                                (MissionListViewItem_o *)item,
                                                0LL);
  if ( !this || !v23 )
    goto LABEL_67;
  v25 = EventMissionAddMaster__GetEventMissionChangeRewardIcon(
          v23,
          m_CachedPtr,
          HIDWORD(this->fields.baseSprite),
          0,
          0LL);
  if ( !System_String__IsNullOrEmpty(v25, 0LL) )
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
    this = (CompleteMissionListViewItemDraw_o *)UnityEngine_Object__op_Inequality(
                                                  (UnityEngine_Object_o *)manager,
                                                  0LL,
                                                  0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
      goto LABEL_8;
    v26 = *p_giftEntityList;
    if ( !v26 || !manager )
      goto LABEL_67;
    this = (CompleteMissionListViewItemDraw_o *)MissionListViewManager__GetAlphaAnimCnt(
                                                  (MissionListViewManager_o *)manager,
                                                  v26->max_length,
                                                  0LL);
    if ( (unsigned int)this < v26->max_length )
    {
      v27 = (int32_t *)v26->m_Items[(int)this];
      if ( !v27 )
        goto LABEL_67;
      v28 = v27[11];
      this = (CompleteMissionListViewItemDraw_o *)v6->fields.itemIcon;
      v29 = v27[7];
      if ( v28 < 1 )
      {
        if ( !this )
          goto LABEL_67;
        if ( v29 <= 1 )
          v37 = -1;
        else
          v37 = v27[7];
        ItemIconComponent__SetGift((ItemIconComponent_o *)this, v27[5], v27[6], v37, 0, 0LL);
      }
      else
      {
        if ( !this )
          goto LABEL_67;
        if ( v29 <= 1 )
          v30 = -1;
        else
          v30 = v27[7];
        ItemIconComponent__SetItemImage_26857580((ItemIconComponent_o *)this, v28, v30, 0LL);
      }
      goto LABEL_8;
    }
LABEL_68:
    v41 = sub_B0D9A8(this);
    sub_B0D948(v41, 0LL);
  }
  this = (CompleteMissionListViewItemDraw_o *)System_String__IsNullOrEmpty(v25, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v31 = *p_giftEntityList;
    if ( !*p_giftEntityList )
      goto LABEL_67;
    if ( !v31->max_length )
      goto LABEL_68;
    v32 = v31->m_Items[0];
    if ( !v32 )
      goto LABEL_67;
    prioredIconId = v32->fields.prioredIconId;
    itemIcon = v6->fields.itemIcon;
    if ( prioredIconId < 1 )
    {
      Type = MissionListViewItem__get_Type((MissionListViewItem_o *)item, 0LL);
      rewardObjectId = item->fields.rewardObjectId;
      v40 = Type;
      this = (CompleteMissionListViewItemDraw_o *)MissionListViewItem__get_DisplayGiftNum(
                                                    (MissionListViewItem_o *)item,
                                                    0LL);
      if ( !itemIcon )
        goto LABEL_67;
      ItemIconComponent__SetGift(itemIcon, v40, rewardObjectId, (int32_t)this, 0, 0LL);
    }
    else
    {
      if ( !itemIcon )
        goto LABEL_67;
      num = v32->fields.num;
      if ( num <= 1 )
        v36 = -1;
      else
        v36 = num;
      ItemIconComponent__SetItemImage_26857580(v6->fields.itemIcon, prioredIconId, v36, 0LL);
    }
  }
  else
  {
    this = (CompleteMissionListViewItemDraw_o *)v6->fields.itemIcon;
    if ( !this )
      goto LABEL_67;
    ItemIconComponent__SetItemImageByName((ItemIconComponent_o *)this, v25, 0LL);
  }
  this = (CompleteMissionListViewItemDraw_o *)v6->fields.itemIcon;
  if ( !this )
    goto LABEL_67;
  ItemIconComponent__SetAlpha((ItemIconComponent_o *)this, 1.0, 0LL);
LABEL_8:
  if ( MissionListViewItem__get_EventRewardType((MissionListViewItem_o *)item, 0LL) == 3 )
  {
    if ( CompleteMissionListViewItem__get_IsHideReward(item, v11) )
    {
      this = (CompleteMissionListViewItemDraw_o *)v6->fields.itemIcon;
      v6->fields.isMultipleReward = 0;
      if ( this )
      {
        iconId = 99;
LABEL_45:
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
        goto LABEL_45;
      }
    }
LABEL_67:
    sub_B0D97C(this);
  }
}


void __fastcall CompleteMissionListViewItemDraw__UpdateDispResTime(
        CompleteMissionListViewItemDraw_o *this,
        MissionListViewItem_o *missionListViewItem,
        int64_t nowTime,
        const MethodInfo *method)
{
  MissionListViewItemDraw_o *v6; // x20
  __int64 v7; // x10
  CompleteMissionListViewItem_c *v8; // x9
  MissionListViewItem_o *v9; // x1

  v6 = (MissionListViewItemDraw_o *)this;
  if ( (byte_4214E62 & 1) == 0 )
  {
    this = (CompleteMissionListViewItemDraw_o *)sub_B0D8A4(&CompleteMissionListViewItem_TypeInfo, missionListViewItem);
    byte_4214E62 = 1;
  }
  if ( missionListViewItem )
  {
    v7 = *(&CompleteMissionListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&missionListViewItem->klass->_2.bitflags2 + 1) >= (unsigned int)v7 )
    {
      v8 = (CompleteMissionListViewItem_c *)missionListViewItem->klass->_2.typeHierarchy[v7 - 1];
      v9 = v8 == CompleteMissionListViewItem_TypeInfo ? missionListViewItem : 0LL;
      if ( v8 == CompleteMissionListViewItem_TypeInfo )
      {
        if ( !v9 )
          sub_B0D97C(this);
        if ( !LODWORD(v9[1].klass) )
          MissionListViewItemDraw__UpdateDispResTime(v6, v9, nowTime, 0LL);
      }
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

  if ( (byte_4214E63 & 1) == 0 )
  {
    sub_B0D8A4(&MissionListViewItemDraw_TypeInfo, item);
    sub_B0D8A4(&NetworkManager_TypeInfo, v9);
    byte_4214E63 = 1;
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
          goto LABEL_20;
        resTimeLb = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)resTimeLb, 0LL);
        if ( !resTimeLb )
          goto LABEL_20;
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
            resTimeLb = ((__int64 (__fastcall *)(CompleteMissionListViewItemDraw_o *, CompleteMissionListViewItem_o *, int64_t, Il2CppMethodPointer))this->klass->vtable._9_UpdateDispResTime.method)(
                          this,
                          item,
                          v13,
                          this->klass->vtable._10_SetInput.methodPtr);
            this->fields.oldTime = v13;
          }
        }
        if ( !manager )
LABEL_20:
          sub_B0D97C(resTimeLb);
        MissionListViewItemDraw__SetRewardIconAlpha(
          (MissionListViewItemDraw_o *)this,
          manager->fields.alphaAnimNow,
          0LL);
      }
    }
  }
}