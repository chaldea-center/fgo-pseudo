void __fastcall CompleteMissionListViewItemDraw___cctor(const MethodInfo *method)
{
  int v1; // w1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v12; // x1

  if ( (byte_42E8EF1 & 1) == 0 )
  {
    sub_B5D5C4(&CompleteMissionListViewItemDraw_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_6269/*"EventReward/EventRewardAtlas"*/, v8, v9, v10);
    byte_42E8EF1 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)CompleteMissionListViewItemDraw_TypeInfo->static_fields;
  v12 = (System_Int32_array **)StringLiteral_6269/*"EventReward/EventRewardAtlas"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_6269/*"EventReward/EventRewardAtlas"*/;
  sub_B5D560(static_fields, v12, v2, v3, v4, v5, v6, v7);
}


void __fastcall CompleteMissionListViewItemDraw___ctor(
        CompleteMissionListViewItemDraw_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E8EF0 & 1) == 0 )
  {
    sub_B5D5C4(&MissionListViewItemDraw_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8EF0 = 1;
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
    v9 = sub_B5D6C8(this);
    sub_B5D668(v9, 0LL);
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


void __fastcall CompleteMissionListViewItemDraw__EndLoadAchiveImg(
        CompleteMissionListViewItemDraw_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  __int64 v3; // x3
  CompleteMissionListViewItemDraw_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  UnityEngine_Object_o *Object_Texture2D; // x20
  UnityEngine_Object_o *Component_srcLineSprite; // x20

  v5 = this;
  if ( (byte_42E8EEB & 1) == 0 )
  {
    sub_B5D5C4(&Method_AssetData_GetObject_GameObject___, (_DWORD)data, (_DWORD)method, v3);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, v6, v7, v8);
    this = (CompleteMissionListViewItemDraw_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, v9, v10, v11);
    byte_42E8EEB = 1;
  }
  if ( !data )
    goto LABEL_16;
  Object_Texture2D = (UnityEngine_Object_o *)AssetData__GetObject_Texture2D_(
                                               data,
                                               (const MethodInfo_1AD08C8 *)Method_AssetData_GetObject_GameObject___);
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
                                                          (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Equality(Component_srcLineSprite, 0LL, 0LL) )
        return;
      this = (CompleteMissionListViewItemDraw_o *)v5->fields.rewardAchiveSprite;
      if ( this )
      {
        UISprite__set_atlas((UISprite_o *)this, (UIAtlas_o *)Component_srcLineSprite, 0LL);
        return;
      }
    }
LABEL_16:
    sub_B5D69C(this, data);
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
  __int64 v3; // x3
  UnityEngine_Object_o *baseButton; // x21

  if ( (byte_42E8EEF & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)item, (_DWORD)method, v3);
    byte_42E8EEF = 1;
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
  ListViewManager_o *v5; // x20
  MissionListViewItem_o *v7; // x21
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
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  CompleteMissionListViewItemDraw_c *v36; // x0
  struct CompleteMissionListViewItemDraw_StaticFields *static_fields; // x8
  System_String_o *REWARDIMG_ATLAS_PATH; // x23
  AssetLoader_LoadEndDataHandler_o *v39; // x24
  const MethodInfo *v40; // x2
  __int64 v41; // x10
  __int64 v42; // x10
  UISprite_o *rewardAchiveSprite; // x22
  System_String_o **v45; // x8
  System_String_o *v46; // x23
  Il2CppObject *v47; // x0
  System_String_o *v48; // x0
  __int64 v49; // x1
  const MethodInfo *v50; // x3
  int32_t currentEventId; // [xsp+Ch] [xbp-34h] BYREF

  v5 = listViewManager;
  v7 = missionListViewItem;
  if ( (byte_42E8EEA & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, (_DWORD)missionListViewItem, mode, listViewManager);
    sub_B5D5C4(&Method_CompleteMissionListViewItemDraw_EndLoadAchiveImg__, v9, v10, v11);
    sub_B5D5C4(&CompleteMissionListViewItemDraw_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&CompleteMissionListViewItem_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&CompleteMissionListViewManager_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&int_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&AssetLoader_LoadEndDataHandler_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_18809/*"event_rewardget_{0}01"*/, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_18810/*"event_rewardget_{0}02"*/, v33, v34, v35);
    byte_42E8EEA = 1;
  }
  if ( !MissionListViewItemDraw__SetItem((MissionListViewItemDraw_o *)this, v7, mode, v5, 0LL) )
    return 0;
  v36 = CompleteMissionListViewItemDraw_TypeInfo;
  if ( (BYTE3(CompleteMissionListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CompleteMissionListViewItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CompleteMissionListViewItemDraw_TypeInfo);
    v36 = CompleteMissionListViewItemDraw_TypeInfo;
  }
  static_fields = v36->static_fields;
  if ( !static_fields->achiveImgData )
  {
    if ( (BYTE3(v36->vtable._0_Equals.methodPtr) & 4) != 0 && !v36->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v36);
      static_fields = CompleteMissionListViewItemDraw_TypeInfo->static_fields;
    }
    REWARDIMG_ATLAS_PATH = static_fields->REWARDIMG_ATLAS_PATH;
    v39 = (AssetLoader_LoadEndDataHandler_o *)sub_B5D694(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v39,
      (Il2CppObject *)this,
      Method_CompleteMissionListViewItemDraw_EndLoadAchiveImg__,
      0LL);
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    if ( !AssetManager__loadAssetStorage(REWARDIMG_ATLAS_PATH, v39, 1, 0LL) )
      CompleteMissionListViewItemDraw__EndLoadAchiveImg(this, 0LL, v40);
  }
  if ( !mode )
    return 1;
  if ( !v7 )
  {
LABEL_20:
    if ( !v5 )
      goto LABEL_21;
    goto LABEL_26;
  }
  v41 = *(&CompleteMissionListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v7->klass->_2.bitflags2 + 1) < (unsigned int)v41 )
  {
    v7 = 0LL;
    goto LABEL_20;
  }
  if ( (CompleteMissionListViewItem_c *)v7->klass->_2.typeHierarchy[v41 - 1] != CompleteMissionListViewItem_TypeInfo )
    v7 = 0LL;
  if ( !v5 )
  {
LABEL_21:
    if ( !v7 )
      return 0;
    goto LABEL_32;
  }
LABEL_26:
  v42 = *(&CompleteMissionListViewManager_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v5->klass->_2.bitflags2 + 1) >= (unsigned int)v42 )
  {
    if ( (CompleteMissionListViewManager_c *)v5->klass->_2.typeHierarchy[v42 - 1] != CompleteMissionListViewManager_TypeInfo )
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
LABEL_32:
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v5, 0LL, 0LL) )
    return 0;
  rewardAchiveSprite = this->fields.rewardAchiveSprite;
  if ( v7->fields.dispNo == 1 )
    v45 = (System_String_o **)&StringLiteral_18809/*"event_rewardget_{0}01"*/;
  else
    v45 = (System_String_o **)&StringLiteral_18810/*"event_rewardget_{0}02"*/;
  v46 = *v45;
  currentEventId = v7->fields.currentEventId;
  v47 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &currentEventId);
  v48 = System_String__Format(v46, v47, 0LL);
  if ( !rewardAchiveSprite )
    sub_B5D69C(v48, v49);
  UISprite__set_spriteName(rewardAchiveSprite, v48, 0LL);
  CompleteMissionListViewItemDraw__SetRewardItemIcon(
    this,
    (CompleteMissionListViewItem_o *)v7,
    (CompleteMissionListViewManager_o *)v5,
    v50);
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x1
  int32_t iconId; // w1
  GiftMaster_o *Master_WarQuestSelectionMaster; // x22
  System_Int32_array **GiftListById; // x0
  struct GiftEntity_array **p_giftEntityList; // x22
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  __int64 v28; // x8
  EventMissionAddMaster_o *v29; // x23
  int32_t m_CachedPtr; // w24
  System_String_o *v31; // x23
  struct GiftEntity_array *v32; // x22
  GiftEntity_o *v33; // x9
  int num; // w8
  int32_t v35; // w2
  struct GiftEntity_array *v36; // x8
  GiftEntity_o *v37; // x8
  ItemIconComponent_o *itemIcon; // x21
  int v39; // w8
  int32_t v40; // w2
  int32_t v41; // w3
  int32_t Type; // w0
  int32_t rewardObjectId; // w22
  int32_t v44; // w23
  __int64 v45; // x0

  v5 = item;
  v6 = this;
  if ( (byte_42E8EEC & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_EventMissionAddMaster___, (_DWORD)item, (_DWORD)manager, method);
    sub_B5D5C4(&Method_DataManager_GetMaster_GiftMaster___, v7, v8, v9);
    sub_B5D5C4(&DataManager_TypeInfo, v10, v11, v12);
    this = (CompleteMissionListViewItemDraw_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, v13, v14, v15);
    byte_42E8EEC = 1;
  }
  if ( !v5 )
    goto LABEL_67;
  if ( MissionListViewItem__get_EventRewardType((MissionListViewItem_o *)v5, 0LL) != 1 )
    goto LABEL_8;
  if ( CompleteMissionListViewItem__get_IsHideReward(v5, v16) )
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
  Master_WarQuestSelectionMaster = (GiftMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_GiftMaster___);
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
  sub_B5D560((BattleServantConfConponent_o *)&v6->fields.giftEntityList, GiftListById, v22, v23, v24, v25, v26, v27);
  if ( !v6->fields.giftEntityList )
    goto LABEL_67;
  v28 = *(_QWORD *)&v6->fields.giftEntityList->max_length;
  if ( !v28 )
    return;
  v6->fields.isMultipleReward = (int)v28 > 1;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v29 = (EventMissionAddMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EventMissionAddMaster___);
  this = (CompleteMissionListViewItemDraw_o *)MissionListViewItem__get_EventMissionEntity(
                                                (MissionListViewItem_o *)v5,
                                                0LL);
  if ( !this )
    goto LABEL_67;
  m_CachedPtr = this->fields.m_CachedPtr;
  this = (CompleteMissionListViewItemDraw_o *)MissionListViewItem__get_EventMissionEntity(
                                                (MissionListViewItem_o *)v5,
                                                0LL);
  if ( !this || !v29 )
    goto LABEL_67;
  v31 = EventMissionAddMaster__GetEventMissionChangeRewardIcon(
          v29,
          m_CachedPtr,
          HIDWORD(this->fields.baseSprite),
          0,
          0LL);
  if ( !System_String__IsNullOrEmpty(v31, 0LL) )
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
    v32 = *p_giftEntityList;
    if ( !v32 || !manager )
      goto LABEL_67;
    this = (CompleteMissionListViewItemDraw_o *)MissionListViewManager__GetAlphaAnimCnt(
                                                  (MissionListViewManager_o *)manager,
                                                  v32->max_length,
                                                  0LL);
    if ( (unsigned int)this < v32->max_length )
    {
      v33 = v32->m_Items[(int)this];
      if ( !v33 )
        goto LABEL_67;
      item = (CompleteMissionListViewItem_o *)(unsigned int)v33->fields.prioredIconId;
      this = (CompleteMissionListViewItemDraw_o *)v6->fields.itemIcon;
      num = v33->fields.num;
      if ( (int)item < 1 )
      {
        if ( !this )
          goto LABEL_67;
        if ( num <= 1 )
          v41 = -1;
        else
          v41 = v33->fields.num;
        ItemIconComponent__SetGift((ItemIconComponent_o *)this, v33->fields.type, v33->fields.objectId, v41, 0, 0LL);
      }
      else
      {
        if ( !this )
          goto LABEL_67;
        if ( num <= 1 )
          v35 = -1;
        else
          v35 = v33->fields.num;
        ItemIconComponent__SetItemImage_28499576((ItemIconComponent_o *)this, (int32_t)item, v35, 0LL);
      }
      goto LABEL_8;
    }
LABEL_68:
    v45 = sub_B5D6C8(this);
    sub_B5D668(v45, 0LL);
  }
  this = (CompleteMissionListViewItemDraw_o *)System_String__IsNullOrEmpty(v31, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v36 = *p_giftEntityList;
    if ( !*p_giftEntityList )
      goto LABEL_67;
    if ( !v36->max_length )
      goto LABEL_68;
    v37 = v36->m_Items[0];
    if ( !v37 )
      goto LABEL_67;
    item = (CompleteMissionListViewItem_o *)(unsigned int)v37->fields.prioredIconId;
    itemIcon = v6->fields.itemIcon;
    if ( (int)item < 1 )
    {
      Type = MissionListViewItem__get_Type((MissionListViewItem_o *)v5, 0LL);
      rewardObjectId = v5->fields.rewardObjectId;
      v44 = Type;
      this = (CompleteMissionListViewItemDraw_o *)MissionListViewItem__get_DisplayGiftNum(
                                                    (MissionListViewItem_o *)v5,
                                                    0LL);
      if ( !itemIcon )
        goto LABEL_67;
      ItemIconComponent__SetGift(itemIcon, v44, rewardObjectId, (int32_t)this, 0, 0LL);
    }
    else
    {
      if ( !itemIcon )
        goto LABEL_67;
      v39 = v37->fields.num;
      if ( v39 <= 1 )
        v40 = -1;
      else
        v40 = v39;
      ItemIconComponent__SetItemImage_28499576(v6->fields.itemIcon, (int32_t)item, v40, 0LL);
    }
  }
  else
  {
    this = (CompleteMissionListViewItemDraw_o *)v6->fields.itemIcon;
    if ( !this )
      goto LABEL_67;
    ItemIconComponent__SetItemImageByName((ItemIconComponent_o *)this, v31, 0LL);
  }
  this = (CompleteMissionListViewItemDraw_o *)v6->fields.itemIcon;
  if ( !this )
    goto LABEL_67;
  ItemIconComponent__SetAlpha((ItemIconComponent_o *)this, 1.0, 0LL);
LABEL_8:
  if ( MissionListViewItem__get_EventRewardType((MissionListViewItem_o *)v5, 0LL) == 3 )
  {
    if ( CompleteMissionListViewItem__get_IsHideReward(v5, v17) )
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
    sub_B5D69C(this, item);
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
  if ( (byte_42E8EED & 1) == 0 )
  {
    this = (CompleteMissionListViewItemDraw_o *)sub_B5D5C4(
                                                  &CompleteMissionListViewItem_TypeInfo,
                                                  (_DWORD)missionListViewItem,
                                                  nowTime,
                                                  method);
    byte_42E8EED = 1;
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
          sub_B5D69C(this, 0LL);
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  EventMissionEntity_o *EventMissionEntity; // x0
  __int64 v13; // x1
  __int64 resTimeLb; // x0
  int64_t oldTime; // x23
  int64_t v16; // x22
  MissionListViewItemDraw_c *v17; // x8

  if ( (byte_42E8EEE & 1) == 0 )
  {
    sub_B5D5C4(&MissionListViewItemDraw_TypeInfo, (_DWORD)item, mode, manager);
    sub_B5D5C4(&NetworkManager_TypeInfo, v9, v10, v11);
    byte_42E8EEE = 1;
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
            resTimeLb = ((__int64 (__fastcall *)(CompleteMissionListViewItemDraw_o *, CompleteMissionListViewItem_o *, int64_t, Il2CppMethodPointer))this->klass->vtable._9_UpdateDispResTime.method)(
                          this,
                          item,
                          v16,
                          this->klass->vtable._10_SetInput.methodPtr);
            this->fields.oldTime = v16;
          }
        }
        if ( !manager )
LABEL_20:
          sub_B5D69C(resTimeLb, v13);
        MissionListViewItemDraw__SetRewardIconAlpha(
          (MissionListViewItemDraw_o *)this,
          manager->fields.alphaAnimNow,
          0LL);
      }
    }
  }
}