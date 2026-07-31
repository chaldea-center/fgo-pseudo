void CompleteMissionListViewItemDraw___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1

  if ( (byte_593703D & 1) == 0 )
  {
    sub_21FFC50(&CompleteMissionListViewItemDraw_TypeInfo);
    sub_21FFC50(&StringLiteral_6500/*"EventReward/EventRewardAtlas"*/);
    byte_593703D = 1;
  }
  v7 = StringLiteral_6500/*"EventReward/EventRewardAtlas"*/;
  CompleteMissionListViewItemDraw_TypeInfo->static_fields->REWARDIMG_ATLAS_PATH = (struct System_String_o *)StringLiteral_6500/*"EventReward/EventRewardAtlas"*/;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)CompleteMissionListViewItemDraw_TypeInfo->static_fields,
    v7,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
}


void CompleteMissionListViewItemDraw___ctor(CompleteMissionListViewItemDraw_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_593703C & 1) == 0 )
  {
    sub_21FFC50(&MissionListViewItemDraw_TypeInfo);
    byte_593703C = 1;
  }
  if ( !*(&MissionListViewItemDraw_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(MissionListViewItemDraw_TypeInfo, method, v2);
  MissionListViewItemDraw___ctor((MissionListViewItemDraw_o *)this, 0);
}


void CompleteMissionListViewItemDraw__ChangeNextRewardIcon(
        CompleteMissionListViewItemDraw_o *this,
        CompleteMissionListViewManager_o *manager,
        const MethodInfo *method)
{
  struct GiftEntity_array *giftEntityList; // x20
  CompleteMissionListViewItemDraw_o *v4; // x19
  GiftEntity_o *v5; // x8
  int64_t num; // x8
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
    sub_21FFED4(this);
  v5 = giftEntityList->m_Items[(int)this];
  if ( !v5 )
    goto LABEL_18;
  manager = (CompleteMissionListViewManager_o *)(unsigned int)v5->fields.prioredIconId;
  this = (CompleteMissionListViewItemDraw_o *)v4->fields.itemIcon;
  if ( (int)manager >= 1 )
  {
    if ( this )
    {
      num = (unsigned int)v5->fields.num;
      if ( (int)num <= 1 )
        v7 = -1;
      else
        v7 = num;
      ItemIconComponent__SetItemImage_47939376((ItemIconComponent_o *)this, (int32_t)manager, v7, 0);
      return;
    }
LABEL_18:
    sub_21FFECC(this, manager);
  }
  if ( !this )
    goto LABEL_18;
  if ( v5->fields.num <= 1 )
    v8 = -1;
  else
    v8 = (unsigned int)v5->fields.num;
  ItemIconComponent__SetGift_47936840((ItemIconComponent_o *)this, v5->fields.type, v5->fields.objectId, v8, 0, 0);
}


void CompleteMissionListViewItemDraw__EndLoadAchiveImg(
        CompleteMissionListViewItemDraw_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  CompleteMissionListViewItemDraw_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  Il2CppObject *Object_object; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  Il2CppObject *Component_object; // x20

  v4 = this;
  if ( (byte_5937037 & 1) == 0 )
  {
    sub_21FFC50(&Method_AssetData_GetObject_GameObject___);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    this = (CompleteMissionListViewItemDraw_o *)sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5937037 = 1;
  }
  if ( !data )
    goto LABEL_14;
  Object_object = AssetData__GetObject_object_(
                    data,
                    (const MethodInfo_379EFEC *)Method_AssetData_GetObject_GameObject___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
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
                           (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v9);
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
    sub_21FFECC(this, data);
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

  if ( (byte_593703B & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593703B = 1;
  }
  if ( item )
  {
    baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, method);
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
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  CompleteMissionListViewItemDraw_c *v11; // x0
  struct CompleteMissionListViewItemDraw_StaticFields *static_fields; // x8
  System_String_o *REWARDIMG_ATLAS_PATH; // x23
  AssetLoader_LoadEndDataHandler_o *v14; // x24
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 naturalAligment; // x10
  __int64 v18; // x10
  System_String_o **v20; // x9
  System_String_o *v21; // x23
  UISprite_o *rewardAchiveSprite; // x22
  Il2CppObject *v23; // x0
  System_String_o *v24; // x0
  __int64 v25; // x1
  const MethodInfo *v26; // x3
  int32_t currentEventId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_5937036 & 1) == 0 )
  {
    sub_21FFC50(&AssetManager_TypeInfo);
    sub_21FFC50(&Method_CompleteMissionListViewItemDraw_EndLoadAchiveImg__);
    sub_21FFC50(&CompleteMissionListViewItemDraw_TypeInfo);
    sub_21FFC50(&CompleteMissionListViewItem_TypeInfo);
    sub_21FFC50(&CompleteMissionListViewManager_TypeInfo);
    sub_21FFC50(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_20117/*"event_rewardget_{0}01"*/);
    sub_21FFC50(&StringLiteral_20118/*"event_rewardget_{0}02"*/);
    byte_5937036 = 1;
  }
  if ( !MissionListViewItemDraw__SetItem(
          (MissionListViewItemDraw_o *)this,
          missionListViewItem,
          mode,
          listViewManager,
          0) )
    return 0;
  v11 = CompleteMissionListViewItemDraw_TypeInfo;
  if ( !*(&CompleteMissionListViewItemDraw_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(CompleteMissionListViewItemDraw_TypeInfo, v9, v10);
    v11 = CompleteMissionListViewItemDraw_TypeInfo;
  }
  static_fields = v11->static_fields;
  if ( !static_fields->achiveImgData )
  {
    if ( !*(&v11->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v11, v9, v10);
      static_fields = CompleteMissionListViewItemDraw_TypeInfo->static_fields;
    }
    REWARDIMG_ATLAS_PATH = static_fields->REWARDIMG_ATLAS_PATH;
    v14 = (AssetLoader_LoadEndDataHandler_o *)sub_21FFEBC(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v14,
      (Il2CppObject *)this,
      Method_CompleteMissionListViewItemDraw_EndLoadAchiveImg__,
      0);
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v15, v16);
    if ( !AssetManager__loadAssetStorage(REWARDIMG_ATLAS_PATH, v14, 1, 0, 0) )
      CompleteMissionListViewItemDraw__EndLoadAchiveImg(this, 0, v10);
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
  v18 = CompleteMissionListViewManager_TypeInfo->_2.naturalAligment;
  if ( listViewManager->klass->_2.naturalAligment < (unsigned int)v18 )
  {
    listViewManager = 0;
    goto LABEL_24;
  }
  if ( (CompleteMissionListViewManager_c *)listViewManager->klass->_2.typeHierarchy[v18 - 1] != CompleteMissionListViewManager_TypeInfo )
    listViewManager = 0;
  if ( !missionListViewItem )
    return 0;
LABEL_29:
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9, v10);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)listViewManager, 0, 0) )
    return 0;
  v20 = (System_String_o **)&StringLiteral_20117/*"event_rewardget_{0}01"*/;
  if ( missionListViewItem->fields.dispNo != 1 )
    v20 = (System_String_o **)&StringLiteral_20118/*"event_rewardget_{0}02"*/;
  v21 = *v20;
  rewardAchiveSprite = this->fields.rewardAchiveSprite;
  currentEventId = missionListViewItem->fields.currentEventId;
  v23 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &currentEventId);
  v24 = System_String__Format(v21, v23, 0);
  if ( !rewardAchiveSprite )
    sub_21FFECC(v24, v25);
  UISprite__set_spriteName(rewardAchiveSprite, v24, 0);
  CompleteMissionListViewItemDraw__SetRewardItemIcon(
    this,
    (CompleteMissionListViewItem_o *)missionListViewItem,
    (CompleteMissionListViewManager_o *)listViewManager,
    v26);
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
  __int64 v8; // x2
  int32_t missionNoLb_high; // w22
  GiftEntity_array *IconGiftEntities; // x0
  struct GiftEntity_array **p_giftEntityList; // x22
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  __int64 v18; // x2
  il2cpp_array_size_t max_length; // x8
  DataManager_c *v20; // x0
  Il2CppObject *Master_object; // x23
  int32_t m_CachedPtr; // w24
  System_String_o *v23; // x23
  __int64 v24; // x1
  __int64 v25; // x2
  struct GiftEntity_array *v26; // x22
  GiftEntity_o *v27; // x8
  int64_t v28; // x8
  int64_t v29; // x2
  struct GiftEntity_array *v30; // x8
  GiftEntity_o *v31; // x8
  ItemIconComponent_o *itemIcon; // x21
  int64_t num; // x8
  int64_t v34; // x2
  int32_t Type; // w0
  int32_t rewardObjectId; // w22
  int32_t v37; // w23
  const MethodInfo *v38; // x1
  int32_t iconId; // w1
  int64_t v40; // x3

  v5 = item;
  v6 = this;
  if ( (byte_5937038 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_EventMissionAddMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&MissionInfoMaker_TypeInfo);
    this = (CompleteMissionListViewItemDraw_o *)sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5937038 = 1;
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
  if ( !*(&MissionInfoMaker_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo, item, v8);
  IconGiftEntities = MissionInfoMaker__GetIconGiftEntities(missionNoLb_high, 0);
  v6->fields.giftEntityList = IconGiftEntities;
  p_giftEntityList = &v6->fields.giftEntityList;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v6->fields.giftEntityList,
    (int32_t)IconGiftEntities,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  if ( !v6->fields.giftEntityList )
    goto LABEL_63;
  max_length = v6->fields.giftEntityList->max_length;
  if ( !max_length )
    return;
  v20 = DataManager_TypeInfo;
  v6->fields.isMultipleReward = (int)max_length > 1;
  if ( !*(&v20->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v20, item, v18);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_EventMissionAddMaster___);
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
  v23 = EventMissionAddMaster__GetEventMissionChangeRewardIcon(
          (EventMissionAddMaster_o *)Master_object,
          m_CachedPtr,
          HIDWORD(this->fields.m_CancellationTokenSource),
          0,
          0);
  if ( !System_String__IsNullOrEmpty(v23, 0) )
  {
    v6->fields.isMultipleReward = 0;
    v5->fields.isHideRewardDetail = 1;
LABEL_34:
    this = (CompleteMissionListViewItemDraw_o *)System_String__IsNullOrEmpty(v23, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v30 = *p_giftEntityList;
      if ( !*p_giftEntityList )
        goto LABEL_63;
      if ( !LODWORD(v30->max_length) )
        goto LABEL_64;
      v31 = v30->m_Items[0];
      if ( !v31 )
        goto LABEL_63;
      item = (CompleteMissionListViewItem_o *)(unsigned int)v31->fields.prioredIconId;
      itemIcon = v6->fields.itemIcon;
      if ( (int)item < 1 )
      {
        Type = MissionListViewItem__get_Type((MissionListViewItem_o *)v5, 0);
        rewardObjectId = v5->fields.rewardObjectId;
        v37 = Type;
        this = (CompleteMissionListViewItemDraw_o *)MissionListViewItem__get_DisplayGiftNum(
                                                      (MissionListViewItem_o *)v5,
                                                      0);
        if ( !itemIcon )
          goto LABEL_63;
        ItemIconComponent__SetGift_47936840(itemIcon, v37, rewardObjectId, (int)this, 0, 0);
      }
      else
      {
        if ( !itemIcon )
          goto LABEL_63;
        num = (unsigned int)v31->fields.num;
        if ( (int)num <= 1 )
          v34 = -1;
        else
          v34 = num;
        ItemIconComponent__SetItemImage_47939376(v6->fields.itemIcon, (int32_t)item, v34, 0);
      }
    }
    else
    {
      this = (CompleteMissionListViewItemDraw_o *)v6->fields.itemIcon;
      if ( !this )
        goto LABEL_63;
      ItemIconComponent__SetItemImageByName((ItemIconComponent_o *)this, v23, 0);
    }
    this = (CompleteMissionListViewItemDraw_o *)v6->fields.itemIcon;
    if ( !this )
      goto LABEL_63;
    ItemIconComponent__SetAlpha((ItemIconComponent_o *)this, 1.0, 0);
    goto LABEL_50;
  }
  if ( !v6->fields.isMultipleReward )
    goto LABEL_34;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24, v25);
  this = (CompleteMissionListViewItemDraw_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)manager, 0, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_50;
  v26 = *p_giftEntityList;
  if ( !v26 || !manager )
    goto LABEL_63;
  this = (CompleteMissionListViewItemDraw_o *)MissionListViewManager__GetAlphaAnimCnt(
                                                (MissionListViewManager_o *)manager,
                                                v26->max_length,
                                                0);
  if ( (unsigned int)this >= LODWORD(v26->max_length) )
LABEL_64:
    sub_21FFED4(this);
  v27 = v26->m_Items[(int)this];
  if ( !v27 )
    goto LABEL_63;
  item = (CompleteMissionListViewItem_o *)(unsigned int)v27->fields.prioredIconId;
  this = (CompleteMissionListViewItemDraw_o *)v6->fields.itemIcon;
  if ( (int)item < 1 )
  {
    if ( !this )
      goto LABEL_63;
    if ( v27->fields.num <= 1 )
      v40 = -1;
    else
      v40 = (unsigned int)v27->fields.num;
    ItemIconComponent__SetGift_47936840((ItemIconComponent_o *)this, v27->fields.type, v27->fields.objectId, v40, 0, 0);
  }
  else
  {
    if ( !this )
      goto LABEL_63;
    v28 = (unsigned int)v27->fields.num;
    if ( (int)v28 <= 1 )
      v29 = -1;
    else
      v29 = v28;
    ItemIconComponent__SetItemImage_47939376((ItemIconComponent_o *)this, (int32_t)item, v29, 0);
  }
LABEL_50:
  if ( MissionListViewItem__get_EventRewardType((MissionListViewItem_o *)v5, 0) == 3 )
  {
    if ( CompleteMissionListViewItem__get_IsHideReward(v5, v38) )
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
    sub_21FFECC(this, item);
  }
}


void CompleteMissionListViewItemDraw__UpdateDispResTime(
        CompleteMissionListViewItemDraw_o *this,
        MissionListViewItem_o *missionListViewItem,
        int64_t nowTime,
        const MethodInfo *method)
{
  __int64 naturalAligment; // x10

  if ( (byte_5937039 & 1) == 0 )
  {
    sub_21FFC50(&CompleteMissionListViewItem_TypeInfo);
    byte_5937039 = 1;
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
  __int64 v12; // x2
  __int64 v13; // x2
  int64_t v14; // x22
  int64_t oldTime; // x23
  MissionListViewItemDraw_c *v16; // x8

  if ( (byte_593703A & 1) == 0 )
  {
    sub_21FFC50(&MissionListViewItemDraw_TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_593703A = 1;
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
          if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v10, v12);
          resTimeLb = NetworkManager__getTime(0);
          v14 = resTimeLb;
          oldTime = this->fields.oldTime;
          v16 = MissionListViewItemDraw_TypeInfo;
          if ( !*(&MissionListViewItemDraw_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(MissionListViewItemDraw_TypeInfo, v10, v13);
            v16 = MissionListViewItemDraw_TypeInfo;
          }
          if ( v14 - oldTime >= v16->static_fields->TIME_UPDATE_ITVL_SEC )
          {
            resTimeLb = ((__int64 (__fastcall *)(CompleteMissionListViewItemDraw_o *, CompleteMissionListViewItem_o *, int64_t, const MethodInfo *))this->klass->vtable._9_UpdateDispResTime.methodPtr)(
                          this,
                          item,
                          v14,
                          this->klass->vtable._9_UpdateDispResTime.method);
            this->fields.oldTime = v14;
          }
        }
        if ( !manager )
LABEL_18:
          sub_21FFECC(resTimeLb, v10);
        MissionListViewItemDraw__SetRewardIconAlpha((MissionListViewItemDraw_o *)this, manager->fields.alphaAnimNow, 0);
      }
    }
  }
}