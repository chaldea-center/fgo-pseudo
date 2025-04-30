void __fastcall EventPointItemListViewItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t v6; // w1
  struct EventPointItemListViewItemDraw_StaticFields *static_fields; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4A52804 & 1) == 0 )
  {
    sub_1B863B8(&EventPointItemListViewItemDraw_TypeInfo, v1);
    sub_1B863B8(&StringLiteral_19028/*"event_rewardpoint_"*/, v4);
    sub_1B863B8(&StringLiteral_19024/*"event_rewardget_"*/, v5);
    byte_4A52804 = 1;
  }
  EventPointItemListViewItemDraw_TypeInfo->static_fields->BOARD_SPRITE_BASE_NAME = (struct System_String_o *)StringLiteral_19028/*"event_rewardpoint_"*/;
  sub_1B8635C(
    (CGThumbnailListItem_o *)EventPointItemListViewItemDraw_TypeInfo->static_fields,
    StringLiteral_19028/*"event_rewardpoint_"*/,
    v2,
    v3);
  v6 = StringLiteral_19024/*"event_rewardget_"*/;
  static_fields = EventPointItemListViewItemDraw_TypeInfo->static_fields;
  static_fields->GET_SPRITE_NAME = (struct System_String_o *)StringLiteral_19024/*"event_rewardget_"*/;
  sub_1B8635C((CGThumbnailListItem_o *)&static_fields->GET_SPRITE_NAME, v6, v8, v9);
}


void __fastcall EventPointItemListViewItemDraw___ctor(EventPointItemListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventPointItemListViewItemDraw__Awake(EventPointItemListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *baseSprite; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  struct UISprite_o *v8; // x8
  struct UIAtlas_o *mAtlas; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct UISprite_o *v12; // x8
  struct System_String_o *mSpriteName; // x1

  if ( (byte_4A52802 & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Object_TypeInfo, method);
    byte_4A52802 = 1;
  }
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL);
  if ( v4 )
  {
    v8 = this->fields.baseSprite;
    if ( !v8
      || (mAtlas = v8->fields.mAtlas,
          this->fields.baseAtlas = mAtlas,
          sub_1B8635C((CGThumbnailListItem_o *)&this->fields.baseAtlas, (int32_t)mAtlas, v6, v7),
          (v12 = this->fields.baseSprite) == 0LL) )
    {
      sub_1B86614(v4, v5);
    }
    mSpriteName = v12->fields.mSpriteName;
    this->fields.baseSpriteName = mSpriteName;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.baseSpriteName, (int32_t)mSpriteName, v10, v11);
  }
}


void __fastcall EventPointItemListViewItemDraw__SetItem(
        EventPointItemListViewItemDraw_o *this,
        EventPointItemListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  EventPointItemListViewItem_o *v5; // x20
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  UnityEngine_GameObject_o *getRewardImgObj; // x0
  UnityEngine_Object_o *baseSprite; // x21
  int32_t BgImageId; // w0
  UISprite_o *v17; // x21
  int v18; // w23
  EventPointItemListViewItemDraw_c *v19; // x8
  System_String_o *BOARD_SPRITE_BASE_NAME; // x22
  System_String_o *v21; // x0
  System_String_o *v22; // x0
  System_String_o *v23; // x0
  System_String_o *v24; // x22
  __int64 v25; // x21
  int32_t v26; // w2
  int v27; // w8
  ItemIconComponent_o *itemIcon; // x22
  int32_t PrioredIconId; // w23
  int32_t v30; // w2
  ItemIconComponent_o *v31; // x22
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  UnityEngine_Object_o *rarityInfo; // x22
  UnityEngine_Object_o *countLbInfo; // x22
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  __int64 v38; // x8
  _QWORD *v39; // x9
  __int64 v40; // x10
  __int64 v41; // x0
  UILabel_o *msgTextLabel; // x21
  UnityEngine_Object_o *baseButton; // x21
  _BOOL4 isGetReward; // w21
  int32_t v45; // w0
  UISprite_o *getSprite; // x21
  int v47; // w23
  EventPointItemListViewItemDraw_c *v48; // x8
  System_String_o *GET_SPRITE_NAME; // x22
  System_String_o *v50; // x0
  System_String_o *v51; // x0
  System_String_o *v52; // x0
  System_String_o *v53; // x20
  struct EventPointBuffEntity_o *eventPointBuffEntity; // x8
  ItemIconComponent_o *v55; // x22
  int v56; // w10
  __int64 v57; // x8
  _QWORD *v58; // x9
  __int64 v59; // x10
  __int64 v60; // x0
  int32_t EventId; // [xsp+Ch] [xbp-34h] BYREF

  v5 = item;
  if ( (byte_4A52803 & 1) == 0 )
  {
    sub_1B863B8(&EventPointItemListViewItemDraw_TypeInfo, item);
    sub_1B863B8(&EventRewardRootComponent_TypeInfo, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_GameObject__Add__, v8);
    sub_1B863B8(&Method_System_Collections_Generic_List_GameObject__Clear__, v9);
    sub_1B863B8(&Method_System_Collections_Generic_List_GameObject___ctor__, v10);
    sub_1B863B8(&System_Collections_Generic_List_GameObject__TypeInfo, v11);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v12);
    sub_1B863B8(&StringLiteral_1146/*"00"*/, v13);
    byte_4A52803 = 1;
  }
  EventId = 0;
  if ( !v5 || !mode )
    return;
  getRewardImgObj = this->fields.getRewardImgObj;
  if ( !getRewardImgObj )
    goto LABEL_79;
  UnityEngine_GameObject__SetActive(getRewardImgObj, 0, 0LL);
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL)
    && EventPointItemListViewItem__get_GetEventId(v5, 0LL) >= 1 )
  {
    BgImageId = EventPointItemListViewItem__get_GetBgImageId(v5, 0LL);
    v17 = this->fields.baseSprite;
    v18 = BgImageId;
    v19 = EventPointItemListViewItemDraw_TypeInfo;
    if ( !EventPointItemListViewItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventPointItemListViewItemDraw_TypeInfo);
      v19 = EventPointItemListViewItemDraw_TypeInfo;
    }
    BOARD_SPRITE_BASE_NAME = v19->static_fields->BOARD_SPRITE_BASE_NAME;
    if ( v18 < 1 )
    {
      EventId = EventPointItemListViewItem__get_GetEventId(v5, 0LL);
      v23 = System_Int32__ToString((int32_t)&EventId, 0LL);
      v22 = System_String__Concat_61683424(BOARD_SPRITE_BASE_NAME, v23, (System_String_o *)StringLiteral_1146/*"00"*/, 0LL);
    }
    else
    {
      EventId = EventPointItemListViewItem__get_GetBgImageId(v5, 0LL);
      v21 = System_Int32__ToString((int32_t)&EventId, 0LL);
      v22 = System_String__Concat_61645176(BOARD_SPRITE_BASE_NAME, v21, 0LL);
    }
    v24 = v22;
    if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
    EventRewardRootComponent__setRewardInfoImg(v17, v24, 0LL);
  }
  v25 = sub_1B86604(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    (System_Collections_Generic_List_object__o *)v25,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  if ( !v25 )
    goto LABEL_79;
  v26 = *(_DWORD *)(v25 + 24);
  v27 = *(_DWORD *)(v25 + 28) + 1;
  *(_DWORD *)(v25 + 24) = 0;
  *(_DWORD *)(v25 + 28) = v27;
  if ( v26 >= 1 )
    System_Array__Clear(*(System_Array_o **)(v25 + 16), 0, v26, 0LL);
  if ( EventPointItemListViewItem__get_eventRewardType(v5, 0LL) == 1 )
  {
    if ( EventPointItemListViewItem__get_GetPrioredIconId(v5, 0LL) >= 1 )
    {
      itemIcon = this->fields.itemIcon;
      PrioredIconId = EventPointItemListViewItem__get_GetPrioredIconId(v5, 0LL);
      getRewardImgObj = (UnityEngine_GameObject_o *)EventPointItemListViewItem__get_GetGiftNum(v5, 0LL);
      if ( (int)getRewardImgObj < 2 )
      {
        v30 = -1;
      }
      else
      {
        getRewardImgObj = (UnityEngine_GameObject_o *)EventPointItemListViewItem__get_GetGiftNum(v5, 0LL);
        v30 = (int)getRewardImgObj;
      }
      if ( !itemIcon )
        goto LABEL_79;
      ItemIconComponent__SetItemImage_39101928(itemIcon, PrioredIconId, v30, 0LL);
      goto LABEL_42;
    }
    if ( v5->fields.rewardNum < 1 )
    {
      if ( EventPointItemListViewItem__get_Type(v5, 0LL) == 12
        && (eventPointBuffEntity = v5->fields.eventPointBuffEntity) != 0LL )
      {
        getRewardImgObj = (UnityEngine_GameObject_o *)this->fields.itemIcon;
        if ( !getRewardImgObj )
          goto LABEL_79;
        ItemIconComponent__SetEventPointBuffImage(
          (ItemIconComponent_o *)getRewardImgObj,
          eventPointBuffEntity->fields.imageId,
          eventPointBuffEntity->fields.bgImageId,
          0LL);
      }
      else
      {
        v55 = this->fields.itemIcon;
        getRewardImgObj = (UnityEngine_GameObject_o *)EventPointItemListViewItem__get_Type(v5, 0LL);
        if ( !v55 )
          goto LABEL_79;
        ItemIconComponent__SetGift_39099496(v55, (int32_t)getRewardImgObj, v5->fields.rewardObjectId, -1, 0, 0LL);
      }
    }
    else
    {
      v31 = this->fields.itemIcon;
      getRewardImgObj = (UnityEngine_GameObject_o *)EventPointItemListViewItem__get_Type(v5, 0LL);
      if ( !v31 )
        goto LABEL_79;
      ItemIconComponent__SetGiftDesignSize(
        v31,
        (int32_t)getRewardImgObj,
        v5->fields.rewardObjectId,
        v5->fields.rewardNum,
        0LL);
      if ( EventPointItemListViewItem__get_Type(v5, 0LL) != 1 && EventPointItemListViewItem__get_Type(v5, 0LL) != 6 )
      {
        getRewardImgObj = (UnityEngine_GameObject_o *)EventPointItemListViewItem__get_Type(v5, 0LL);
        if ( (_DWORD)getRewardImgObj != 7 )
        {
          item = (EventPointItemListViewItem_o *)this->fields.countLbInfo;
          v56 = *(_DWORD *)(v25 + 28);
          v57 = *(_QWORD *)(v25 + 16);
          v58 = Method_System_Collections_Generic_List_GameObject__Add__;
LABEL_75:
          *(_DWORD *)(v25 + 28) = v56 + 1;
          if ( !v57 )
            goto LABEL_79;
          v59 = *(int *)(v25 + 24);
          if ( (unsigned int)v59 >= *(_DWORD *)(v57 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)v25,
              (Il2CppObject *)item,
              *(const MethodInfo_35FC958 **)(*(_QWORD *)(v58[4] + 192LL) + 112LL));
          }
          else
          {
            v60 = v57 + 8 * v59;
            *(_DWORD *)(v25 + 24) = v59 + 1;
            *(_QWORD *)(v60 + 32) = item;
            sub_1B8635C((CGThumbnailListItem_o *)(v60 + 32), (int32_t)item, v32, v33);
          }
          goto LABEL_42;
        }
      }
      rarityInfo = (UnityEngine_Object_o *)this->fields.rarityInfo;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(rarityInfo, 0LL, 0LL) )
      {
        countLbInfo = (UnityEngine_Object_o *)this->fields.countLbInfo;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        getRewardImgObj = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(countLbInfo, 0LL, 0LL);
        if ( ((unsigned __int8)getRewardImgObj & 1) != 0 )
        {
          item = (EventPointItemListViewItem_o *)this->fields.rarityInfo;
          v38 = *(_QWORD *)(v25 + 16);
          v39 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++*(_DWORD *)(v25 + 28);
          if ( !v38 )
            goto LABEL_79;
          v40 = *(int *)(v25 + 24);
          if ( (unsigned int)v40 >= *(_DWORD *)(v38 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)v25,
              (Il2CppObject *)item,
              *(const MethodInfo_35FC958 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
          }
          else
          {
            v41 = v38 + 8 * v40;
            *(_DWORD *)(v25 + 24) = v40 + 1;
            *(_QWORD *)(v41 + 32) = item;
            sub_1B8635C((CGThumbnailListItem_o *)(v41 + 32), (int32_t)item, v36, v37);
          }
          item = (EventPointItemListViewItem_o *)this->fields.countLbInfo;
          v56 = *(_DWORD *)(v25 + 28);
          v57 = *(_QWORD *)(v25 + 16);
          v58 = Method_System_Collections_Generic_List_GameObject__Add__;
          goto LABEL_75;
        }
      }
    }
  }
LABEL_42:
  if ( EventPointItemListViewItem__get_eventRewardType(v5, 0LL) == 3
    || EventPointItemListViewItem__get_eventRewardType(v5, 0LL) == 2 )
  {
    getRewardImgObj = (UnityEngine_GameObject_o *)this->fields.itemIcon;
    if ( !getRewardImgObj )
      goto LABEL_79;
    ItemIconComponent__SetItemImage((ItemIconComponent_o *)getRewardImgObj, v5->fields.iconId, 0LL);
  }
  getRewardImgObj = (UnityEngine_GameObject_o *)this->fields.numDispctr;
  if ( !getRewardImgObj
    || (ItemNumDispControl__InitEventAlphaAnim(
          (ItemNumDispControl_o *)getRewardImgObj,
          (System_Collections_Generic_List_GameObject__o *)v25,
          0LL),
        (getRewardImgObj = (UnityEngine_GameObject_o *)this->fields.nameTextLabel) == 0LL)
    || (UICrossNarrowLabel__SetCrossNarrowText((UICrossNarrowLabel_o *)getRewardImgObj, v5->fields.nameTxt, 0LL),
        (getRewardImgObj = (UnityEngine_GameObject_o *)this->fields.numTextLabel) == 0LL)
    || (UICrossNarrowLabel__SetCrossNarrowText((UICrossNarrowLabel_o *)getRewardImgObj, v5->fields.numTxt, 0LL),
        msgTextLabel = this->fields.msgTextLabel,
        getRewardImgObj = (UnityEngine_GameObject_o *)EventPointItemListViewItem__get_needPointTxt(v5, 0LL),
        !msgTextLabel) )
  {
LABEL_79:
    sub_1B86614(getRewardImgObj, item);
  }
  UILabel__set_text(msgTextLabel, (System_String_o *)getRewardImgObj, 0LL);
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
  {
    getRewardImgObj = (UnityEngine_GameObject_o *)this->fields.baseButton;
    if ( getRewardImgObj )
    {
      isGetReward = v5->fields.isGetReward;
      UICommonButton__SetColliderEnable((UICommonButton_o *)getRewardImgObj, 1, 1, 0LL);
      getRewardImgObj = (UnityEngine_GameObject_o *)this->fields.baseButton;
      if ( getRewardImgObj )
      {
        ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))getRewardImgObj->klass[1]._1.implementedInterfaces)(
          getRewardImgObj,
          0LL,
          1LL,
          getRewardImgObj->klass[1]._1.interfaceOffsets);
        if ( !isGetReward )
          return;
        v45 = EventPointItemListViewItem__get_GetBgImageId(v5, 0LL);
        getSprite = this->fields.getSprite;
        v47 = v45;
        v48 = EventPointItemListViewItemDraw_TypeInfo;
        if ( !EventPointItemListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventPointItemListViewItemDraw_TypeInfo);
          v48 = EventPointItemListViewItemDraw_TypeInfo;
        }
        GET_SPRITE_NAME = v48->static_fields->GET_SPRITE_NAME;
        if ( v47 < 1 )
        {
          EventId = EventPointItemListViewItem__get_GetEventId(v5, 0LL);
          v52 = System_Int32__ToString((int32_t)&EventId, 0LL);
          v51 = System_String__Concat_61683424(GET_SPRITE_NAME, v52, (System_String_o *)StringLiteral_1146/*"00"*/, 0LL);
        }
        else
        {
          EventId = EventPointItemListViewItem__get_GetBgImageId(v5, 0LL);
          v50 = System_Int32__ToString((int32_t)&EventId, 0LL);
          v51 = System_String__Concat_61645176(GET_SPRITE_NAME, v50, 0LL);
        }
        v53 = v51;
        if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
        EventRewardRootComponent__setRewardInfoImg(getSprite, v53, 0LL);
        getRewardImgObj = this->fields.getRewardImgObj;
        if ( getRewardImgObj )
        {
          UnityEngine_GameObject__SetActive(getRewardImgObj, 1, 0LL);
          return;
        }
      }
    }
    goto LABEL_79;
  }
}