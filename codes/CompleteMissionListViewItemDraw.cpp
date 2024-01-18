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

  if ( (byte_4187F4F & 1) == 0 )
  {
    sub_B2C35C(&CompleteMissionListViewItemDraw_TypeInfo, v1);
    sub_B2C35C(&StringLiteral_6190/*"EventReward/EventRewardAtlas"*/, v8);
    byte_4187F4F = 1;
  }
  static_fields = (BattleServantConfConponent_o *)CompleteMissionListViewItemDraw_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_6190/*"EventReward/EventRewardAtlas"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_6190/*"EventReward/EventRewardAtlas"*/;
  sub_B2C2F8(static_fields, v10, v2, v3, v4, v5, v6, v7);
}


void __fastcall CompleteMissionListViewItemDraw___ctor(
        CompleteMissionListViewItemDraw_o *this,
        const MethodInfo *method)
{
  if ( (byte_4187F4E & 1) == 0 )
  {
    sub_B2C35C(&MissionListViewItemDraw_TypeInfo, method);
    byte_4187F4E = 1;
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
  this = (CompleteMissionListViewItemDraw_o *)MissionListViewManager__GetAlphaAnimCnt(
                                                (MissionListViewManager_o *)manager,
                                                giftEntityList->max_length,
                                                0LL);
  if ( (unsigned int)this >= giftEntityList->max_length )
  {
    v9 = sub_B2C460(this);
    sub_B2C400(v9, 0LL);
  }
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
      ItemIconComponent__SetItemImage_27396332((ItemIconComponent_o *)this, (int32_t)manager, v7, 0LL);
      return;
    }
LABEL_18:
    sub_B2C434(this, manager);
  }
  if ( !this )
    goto LABEL_18;
  if ( num <= 1 )
    v8 = -1;
  else
    v8 = v5->fields.num;
  ItemIconComponent__SetGift((ItemIconComponent_o *)this, v5->fields.type, v5->fields.objectId, v8, 0, 0LL);
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
  if ( (byte_4187F49 & 1) == 0 )
  {
    sub_B2C35C(&Method_AssetData_GetObject_GameObject___, data);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, v5);
    this = (CompleteMissionListViewItemDraw_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, v6);
    byte_4187F49 = 1;
  }
  if ( !data )
    goto LABEL_16;
  Object_Texture2D = (UnityEngine_Object_o *)AssetData__GetObject_Texture2D_(
                                               data,
                                               (const MethodInfo_1720240 *)Method_AssetData_GetObject_GameObject___);
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
                                                          (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
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
    sub_B2C434(this, data);
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

  if ( (byte_4187F4D & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, item);
    byte_4187F4D = 1;
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
  CompleteMissionListViewItemDraw_c *v18; // x0
  struct CompleteMissionListViewItemDraw_StaticFields *static_fields; // x8
  System_String_o *REWARDIMG_ATLAS_PATH; // x23
  AssetLoader_LoadEndDataHandler_o *v21; // x24
  const MethodInfo *v22; // x2
  __int64 v23; // x10
  __int64 v24; // x10
  UISprite_o *rewardAchiveSprite; // x22
  System_String_o **v27; // x8
  System_String_o *v28; // x23
  Il2CppObject *v29; // x0
  System_String_o *v30; // x0
  __int64 v31; // x1
  const MethodInfo *v32; // x3
  int32_t currentEventId; // [xsp+Ch] [xbp-34h] BYREF

  v7 = missionListViewItem;
  if ( (byte_4187F48 & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, missionListViewItem);
    sub_B2C35C(&Method_CompleteMissionListViewItemDraw_EndLoadAchiveImg__, v9);
    sub_B2C35C(&CompleteMissionListViewItemDraw_TypeInfo, v10);
    sub_B2C35C(&CompleteMissionListViewItem_TypeInfo, v11);
    sub_B2C35C(&CompleteMissionListViewManager_TypeInfo, v12);
    sub_B2C35C(&int_TypeInfo, v13);
    sub_B2C35C(&AssetLoader_LoadEndDataHandler_TypeInfo, v14);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v15);
    sub_B2C35C(&StringLiteral_18578/*"event_rewardget_{0}01"*/, v16);
    sub_B2C35C(&StringLiteral_18579/*"event_rewardget_{0}02"*/, v17);
    byte_4187F48 = 1;
  }
  if ( !MissionListViewItemDraw__SetItem((MissionListViewItemDraw_o *)this, v7, mode, listViewManager, 0LL) )
    return 0;
  v18 = CompleteMissionListViewItemDraw_TypeInfo;
  if ( (BYTE3(CompleteMissionListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CompleteMissionListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CompleteMissionListViewItemDraw_TypeInfo);
    v18 = CompleteMissionListViewItemDraw_TypeInfo;
  }
  static_fields = v18->static_fields;
  if ( !static_fields->achiveImgData )
  {
    if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 && !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      static_fields = CompleteMissionListViewItemDraw_TypeInfo->static_fields;
    }
    REWARDIMG_ATLAS_PATH = static_fields->REWARDIMG_ATLAS_PATH;
    v21 = (AssetLoader_LoadEndDataHandler_o *)sub_B2C42C(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v21,
      (Il2CppObject *)this,
      Method_CompleteMissionListViewItemDraw_EndLoadAchiveImg__,
      0LL);
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    if ( !AssetManager__loadAssetStorage(REWARDIMG_ATLAS_PATH, v21, 1, 0LL) )
      CompleteMissionListViewItemDraw__EndLoadAchiveImg(this, 0LL, v22);
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
  v23 = *(&CompleteMissionListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v7->klass->_2.bitflags2 + 1) < (unsigned int)v23 )
  {
    v7 = 0LL;
    goto LABEL_20;
  }
  if ( (CompleteMissionListViewItem_c *)v7->klass->_2.typeHierarchy[v23 - 1] != CompleteMissionListViewItem_TypeInfo )
    v7 = 0LL;
  if ( !listViewManager )
  {
LABEL_21:
    if ( !v7 )
      return 0;
    goto LABEL_32;
  }
LABEL_26:
  v24 = *(&CompleteMissionListViewManager_TypeInfo->_2.bitflags2 + 1);
  if ( *(&listViewManager->klass->_2.bitflags2 + 1) >= (unsigned int)v24 )
  {
    if ( (CompleteMissionListViewManager_c *)listViewManager->klass->_2.typeHierarchy[v24 - 1] != CompleteMissionListViewManager_TypeInfo )
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
    v27 = (System_String_o **)&StringLiteral_18578/*"event_rewardget_{0}01"*/;
  else
    v27 = (System_String_o **)&StringLiteral_18579/*"event_rewardget_{0}02"*/;
  v28 = *v27;
  currentEventId = v7->fields.currentEventId;
  v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &currentEventId);
  v30 = System_String__Format(v28, v29, 0LL);
  if ( !rewardAchiveSprite )
    sub_B2C434(v30, v31);
  UISprite__set_spriteName(rewardAchiveSprite, v30, 0LL);
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
  CompleteMissionListViewItem_o *v5; // x19
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
  GiftEntity_o *v27; // x9
  int num; // w8
  int32_t v29; // w2
  struct GiftEntity_array *v30; // x8
  GiftEntity_o *v31; // x8
  ItemIconComponent_o *itemIcon; // x21
  int v33; // w8
  int32_t v34; // w2
  int32_t v35; // w3
  int32_t Type; // w0
  int32_t rewardObjectId; // w22
  int32_t v38; // w23
  __int64 v39; // x0

  v5 = item;
  v6 = this;
  if ( (byte_4187F4A & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_EventMissionAddMaster___, item);
    sub_B2C35C(&Method_DataManager_GetMaster_GiftMaster___, v7);
    sub_B2C35C(&DataManager_TypeInfo, v8);
    this = (CompleteMissionListViewItemDraw_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, v9);
    byte_4187F4A = 1;
  }
  if ( !v5 )
    goto LABEL_67;
  if ( MissionListViewItem__get_EventRewardType((MissionListViewItem_o *)v5, 0LL) != 1 )
    goto LABEL_8;
  if ( CompleteMissionListViewItem__get_IsHideReward(v5, v10) )
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
  Master_WarQuestSelectionMaster = (GiftMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_GiftMaster___);
  this = (CompleteMissionListViewItemDraw_o *)MissionListViewItem__get_EventMissionEntity(
                                                (MissionListViewItem_o *)v5,
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
  sub_B2C2F8((BattleServantConfConponent_o *)&v6->fields.giftEntityList, GiftListById, v16, v17, v18, v19, v20, v21);
  if ( !v6->fields.giftEntityList )
    goto LABEL_67;
  v22 = *(_QWORD *)&v6->fields.giftEntityList->max_length;
  if ( !v22 )
    return;
  v6->fields.isMultipleReward = (int)v22 > 1;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v23 = (EventMissionAddMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_EventMissionAddMaster___);
  this = (CompleteMissionListViewItemDraw_o *)MissionListViewItem__get_EventMissionEntity(
                                                (MissionListViewItem_o *)v5,
                                                0LL);
  if ( !this )
    goto LABEL_67;
  m_CachedPtr = this->fields.m_CachedPtr;
  this = (CompleteMissionListViewItemDraw_o *)MissionListViewItem__get_EventMissionEntity(
                                                (MissionListViewItem_o *)v5,
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
    v5->fields.isHideRewardDetail = 1;
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
      v27 = v26->m_Items[(int)this];
      if ( !v27 )
        goto LABEL_67;
      item = (CompleteMissionListViewItem_o *)(unsigned int)v27->fields.prioredIconId;
      this = (CompleteMissionListViewItemDraw_o *)v6->fields.itemIcon;
      num = v27->fields.num;
      if ( (int)item < 1 )
      {
        if ( !this )
          goto LABEL_67;
        if ( num <= 1 )
          v35 = -1;
        else
          v35 = v27->fields.num;
        ItemIconComponent__SetGift((ItemIconComponent_o *)this, v27->fields.type, v27->fields.objectId, v35, 0, 0LL);
      }
      else
      {
        if ( !this )
          goto LABEL_67;
        if ( num <= 1 )
          v29 = -1;
        else
          v29 = v27->fields.num;
        ItemIconComponent__SetItemImage_27396332((ItemIconComponent_o *)this, (int32_t)item, v29, 0LL);
      }
      goto LABEL_8;
    }
LABEL_68:
    v39 = sub_B2C460(this);
    sub_B2C400(v39, 0LL);
  }
  this = (CompleteMissionListViewItemDraw_o *)System_String__IsNullOrEmpty(v25, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v30 = *p_giftEntityList;
    if ( !*p_giftEntityList )
      goto LABEL_67;
    if ( !v30->max_length )
      goto LABEL_68;
    v31 = v30->m_Items[0];
    if ( !v31 )
      goto LABEL_67;
    item = (CompleteMissionListViewItem_o *)(unsigned int)v31->fields.prioredIconId;
    itemIcon = v6->fields.itemIcon;
    if ( (int)item < 1 )
    {
      Type = MissionListViewItem__get_Type((MissionListViewItem_o *)v5, 0LL);
      rewardObjectId = v5->fields.rewardObjectId;
      v38 = Type;
      this = (CompleteMissionListViewItemDraw_o *)MissionListViewItem__get_DisplayGiftNum(
                                                    (MissionListViewItem_o *)v5,
                                                    0LL);
      if ( !itemIcon )
        goto LABEL_67;
      ItemIconComponent__SetGift(itemIcon, v38, rewardObjectId, (int32_t)this, 0, 0LL);
    }
    else
    {
      if ( !itemIcon )
        goto LABEL_67;
      v33 = v31->fields.num;
      if ( v33 <= 1 )
        v34 = -1;
      else
        v34 = v33;
      ItemIconComponent__SetItemImage_27396332(v6->fields.itemIcon, (int32_t)item, v34, 0LL);
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
  if ( MissionListViewItem__get_EventRewardType((MissionListViewItem_o *)v5, 0LL) == 3 )
  {
    if ( CompleteMissionListViewItem__get_IsHideReward(v5, v11) )
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
        iconId = v5->fields.iconId;
        goto LABEL_45;
      }
    }
LABEL_67:
    sub_B2C434(this, item);
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
  if ( (byte_4187F4B & 1) == 0 )
  {
    this = (CompleteMissionListViewItemDraw_o *)sub_B2C35C(&CompleteMissionListViewItem_TypeInfo, missionListViewItem);
    byte_4187F4B = 1;
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
          sub_B2C434(this, 0LL);
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
  __int64 v11; // x1
  __int64 resTimeLb; // x0
  int64_t oldTime; // x23
  int64_t v14; // x22
  MissionListViewItemDraw_c *v15; // x8

  if ( (byte_4187F4C & 1) == 0 )
  {
    sub_B2C35C(&MissionListViewItemDraw_TypeInfo, item);
    sub_B2C35C(&NetworkManager_TypeInfo, v9);
    byte_4187F4C = 1;
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
          v14 = resTimeLb;
          v15 = MissionListViewItemDraw_TypeInfo;
          if ( (BYTE3(MissionListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !MissionListViewItemDraw_TypeInfo->_2.cctor_finished )
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
LABEL_20:
          sub_B2C434(resTimeLb, v11);
        MissionListViewItemDraw__SetRewardIconAlpha(
          (MissionListViewItemDraw_o *)this,
          manager->fields.alphaAnimNow,
          0LL);
      }
    }
  }
}