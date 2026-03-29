void EventPointItemListViewItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct EventPointItemListViewItemDraw_StaticFields *static_fields; // x0

  if ( (byte_4D2AD1B & 1) == 0 )
  {
    sub_1C93AD4(&EventPointItemListViewItemDraw_TypeInfo);
    sub_1C93AD4(&StringLiteral_19463/*"event_rewardpoint_"*/);
    sub_1C93AD4(&StringLiteral_19459/*"event_rewardget_"*/);
    byte_4D2AD1B = 1;
  }
  EventPointItemListViewItemDraw_TypeInfo->static_fields->BOARD_SPRITE_BASE_NAME = (struct System_String_o *)StringLiteral_19463/*"event_rewardpoint_"*/;
  sub_1C93A78(EventPointItemListViewItemDraw_TypeInfo->static_fields, StringLiteral_19463/*"event_rewardpoint_"*/);
  v1 = StringLiteral_19459/*"event_rewardget_"*/;
  static_fields = EventPointItemListViewItemDraw_TypeInfo->static_fields;
  static_fields->GET_SPRITE_NAME = (struct System_String_o *)StringLiteral_19459/*"event_rewardget_"*/;
  sub_1C93A78(&static_fields->GET_SPRITE_NAME, v1);
}


void EventPointItemListViewItemDraw___ctor(EventPointItemListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void EventPointItemListViewItemDraw__Awake(EventPointItemListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *baseSprite; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  struct UISprite_o *v6; // x8
  struct UIAtlas_o *mAtlas; // x1
  struct UISprite_o *v8; // x8
  struct System_String_o *mSpriteName; // x1

  if ( (byte_4D2AD19 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2AD19 = 1;
  }
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(baseSprite, 0, 0);
  if ( (v4 & 1) != 0 )
  {
    v6 = this->fields.baseSprite;
    if ( !v6
      || (mAtlas = v6->fields.mAtlas,
          this->fields.baseAtlas = mAtlas,
          v4 = sub_1C93A78(&this->fields.baseAtlas, mAtlas),
          (v8 = this->fields.baseSprite) == 0) )
    {
      sub_1C93D2C(v4, v5);
    }
    mSpriteName = v8->fields.mSpriteName;
    this->fields.baseSpriteName = mSpriteName;
    sub_1C93A78(&this->fields.baseSpriteName, mSpriteName);
  }
}


void EventPointItemListViewItemDraw__SetItem(
        EventPointItemListViewItemDraw_o *this,
        EventPointItemListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  EventPointItemListViewItem_o *v5; // x20
  __int64 getRewardImgObj; // x0
  UnityEngine_Object_o *baseSprite; // x21
  struct EventRewardEntity_o *eventRewardEnt; // x8
  int bgImageId; // w24
  UISprite_o *v11; // x21
  System_String_o *v12; // x22
  System_String_o *v13; // x0
  System_String_o *v14; // x0
  System_String_o *v15; // x0
  System_String_o *v16; // x22
  __int64 v17; // x21
  const MethodInfo *v18; // x2
  int v19; // w8
  struct EventRewardEntity_o *v20; // x8
  unsigned int *giftEnt; // x8
  int64_t v22; // x8
  int64_t v23; // x2
  int32_t rewardNum; // w3
  struct GiftEntity_o *v25; // x8
  unsigned int type; // w8
  UnityEngine_Object_o *rarityInfo; // x22
  UnityEngine_Object_o *countLbInfo; // x22
  __int64 v29; // x8
  _QWORD *v30; // x9
  __int64 v31; // x10
  __int64 v32; // x0
  int v33; // w10
  __int64 v34; // x8
  _QWORD *v35; // x9
  __int64 v36; // x10
  __int64 v37; // x0
  struct EventPointBuffEntity_o *eventPointBuffEntity; // x8
  struct EventRewardEntity_o *v39; // x8
  UILabel_o *msgTextLabel; // x21
  const MethodInfo *v41; // x1
  UnityEngine_Object_o *baseButton; // x21
  _BOOL4 isGetReward; // w21
  struct EventRewardEntity_o *v44; // x8
  int v45; // w22
  UISprite_o *getSprite; // x21
  System_String_o *v47; // x20
  System_String_o *v48; // x0
  System_String_o *v49; // x0
  System_String_o *v50; // x0
  System_String_o *v51; // x20
  int32_t eventId; // [xsp+Ch] [xbp-34h] BYREF

  v5 = item;
  if ( (byte_4D2AD1A & 1) == 0 )
  {
    sub_1C93AD4(&EventPointItemListViewItemDraw_TypeInfo);
    sub_1C93AD4(&EventRewardRootComponent_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&StringLiteral_1123/*"00"*/);
    byte_4D2AD1A = 1;
  }
  eventId = 0;
  if ( !v5 || !mode )
    return;
  getRewardImgObj = (__int64)this->fields.getRewardImgObj;
  if ( !getRewardImgObj )
    goto LABEL_91;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)getRewardImgObj, 0, 0);
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  getRewardImgObj = UnityEngine_Object__op_Inequality(baseSprite, 0, 0);
  if ( (getRewardImgObj & 1) != 0 )
  {
    eventRewardEnt = v5->fields.eventRewardEnt;
    if ( !eventRewardEnt )
      goto LABEL_91;
    if ( eventRewardEnt->fields.eventId >= 1 )
    {
      bgImageId = eventRewardEnt->fields.bgImageId;
      v11 = this->fields.baseSprite;
      getRewardImgObj = (__int64)EventPointItemListViewItemDraw_TypeInfo;
      if ( !EventPointItemListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventPointItemListViewItemDraw_TypeInfo);
        getRewardImgObj = (__int64)EventPointItemListViewItemDraw_TypeInfo;
        eventRewardEnt = v5->fields.eventRewardEnt;
      }
      v12 = **(System_String_o ***)(getRewardImgObj + 184);
      if ( bgImageId < 1 )
      {
        if ( !eventRewardEnt )
          goto LABEL_91;
        eventId = eventRewardEnt->fields.eventId;
        v15 = System_Int32__ToString((int32_t)&eventId, 0);
        v14 = System_String__Concat_64463988(v12, v15, (System_String_o *)StringLiteral_1123/*"00"*/, 0);
      }
      else
      {
        if ( !eventRewardEnt )
          goto LABEL_91;
        eventId = eventRewardEnt->fields.bgImageId;
        v13 = System_Int32__ToString((int32_t)&eventId, 0);
        v14 = System_String__Concat_64425724(v12, v13, 0);
      }
      v16 = v14;
      if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
      EventRewardRootComponent__setRewardInfoImg(v11, v16, 0);
    }
  }
  v17 = sub_1C93D20(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    (System_Collections_Generic_List_object__o *)v17,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  if ( !v17 )
    goto LABEL_91;
  v18 = (const MethodInfo *)*(unsigned int *)(v17 + 24);
  v19 = *(_DWORD *)(v17 + 28) + 1;
  *(_DWORD *)(v17 + 24) = 0;
  *(_DWORD *)(v17 + 28) = v19;
  if ( (int)v18 >= 1 )
    System_Array__Clear(*(System_Array_o **)(v17 + 16), 0, (int32_t)v18, 0);
  v20 = v5->fields.eventRewardEnt;
  if ( !v20 )
    goto LABEL_91;
  if ( v20->fields.type != 1 )
    goto LABEL_62;
  giftEnt = (unsigned int *)v5->fields.giftEnt;
  if ( !giftEnt )
  {
    rewardNum = v5->fields.rewardNum;
    getRewardImgObj = (__int64)this->fields.itemIcon;
    item = 0;
    if ( rewardNum >= 1 )
    {
      if ( !getRewardImgObj )
        goto LABEL_91;
      goto LABEL_38;
    }
LABEL_60:
    if ( !getRewardImgObj )
      goto LABEL_91;
    ItemIconComponent__SetGift_41640856(
      (ItemIconComponent_o *)getRewardImgObj,
      (int32_t)item,
      v5->fields.rewardObjectId,
      -1,
      0,
      0);
    goto LABEL_62;
  }
  item = (EventPointItemListViewItem_o *)giftEnt[11];
  if ( (int)item >= 1 )
  {
    getRewardImgObj = (__int64)this->fields.itemIcon;
    if ( !getRewardImgObj )
      goto LABEL_91;
    v22 = giftEnt[7];
    if ( (int)v22 <= 1 )
      v23 = -1;
    else
      v23 = v22;
    ItemIconComponent__SetItemImage_41643304((ItemIconComponent_o *)getRewardImgObj, (int32_t)item, v23, 0);
    goto LABEL_62;
  }
  rewardNum = v5->fields.rewardNum;
  if ( rewardNum < 1 )
  {
    item = (EventPointItemListViewItem_o *)giftEnt[5];
    if ( (_DWORD)item == 12 )
    {
      eventPointBuffEntity = v5->fields.eventPointBuffEntity;
      if ( eventPointBuffEntity )
      {
        getRewardImgObj = (__int64)this->fields.itemIcon;
        if ( !getRewardImgObj )
          goto LABEL_91;
        ItemIconComponent__SetEventPointBuffImage(
          (ItemIconComponent_o *)getRewardImgObj,
          eventPointBuffEntity->fields.imageId,
          eventPointBuffEntity->fields.bgImageId,
          0);
        goto LABEL_62;
      }
    }
    getRewardImgObj = (__int64)this->fields.itemIcon;
    goto LABEL_60;
  }
  getRewardImgObj = (__int64)this->fields.itemIcon;
  LODWORD(giftEnt) = giftEnt[5];
  if ( !getRewardImgObj )
    goto LABEL_91;
LABEL_38:
  ItemIconComponent__SetGiftDesignSize(
    (ItemIconComponent_o *)getRewardImgObj,
    (int32_t)giftEnt,
    v5->fields.rewardObjectId,
    rewardNum,
    0);
  v25 = v5->fields.giftEnt;
  if ( !v25 || (type = v25->fields.type, type > 7) || ((1 << type) & 0xC2) == 0 )
  {
    item = (EventPointItemListViewItem_o *)this->fields.countLbInfo;
    v33 = *(_DWORD *)(v17 + 28);
    v34 = *(_QWORD *)(v17 + 16);
    v35 = Method_System_Collections_Generic_List_GameObject__Add__;
LABEL_51:
    *(_DWORD *)(v17 + 28) = v33 + 1;
    if ( !v34 )
      goto LABEL_91;
    v36 = *(int *)(v17 + 24);
    if ( (unsigned int)v36 >= *(_DWORD *)(v34 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)v17,
        (Il2CppObject *)item,
        *(const MethodInfo_387999C **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
    }
    else
    {
      v37 = v34 + 8 * v36;
      *(_DWORD *)(v17 + 24) = v36 + 1;
      *(_QWORD *)(v37 + 32) = item;
      getRewardImgObj = sub_1C93A78(v37 + 32, item);
    }
    goto LABEL_62;
  }
  rarityInfo = (UnityEngine_Object_o *)this->fields.rarityInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  getRewardImgObj = UnityEngine_Object__op_Inequality(rarityInfo, 0, 0);
  if ( (getRewardImgObj & 1) != 0 )
  {
    countLbInfo = (UnityEngine_Object_o *)this->fields.countLbInfo;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    getRewardImgObj = UnityEngine_Object__op_Inequality(countLbInfo, 0, 0);
    if ( (getRewardImgObj & 1) != 0 )
    {
      item = (EventPointItemListViewItem_o *)this->fields.rarityInfo;
      v29 = *(_QWORD *)(v17 + 16);
      v30 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++*(_DWORD *)(v17 + 28);
      if ( !v29 )
        goto LABEL_91;
      v31 = *(int *)(v17 + 24);
      if ( (unsigned int)v31 >= *(_DWORD *)(v29 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)v17,
          (Il2CppObject *)item,
          *(const MethodInfo_387999C **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
      }
      else
      {
        v32 = v29 + 8 * v31;
        *(_DWORD *)(v17 + 24) = v31 + 1;
        *(_QWORD *)(v32 + 32) = item;
        getRewardImgObj = sub_1C93A78(v32 + 32, item);
      }
      item = (EventPointItemListViewItem_o *)this->fields.countLbInfo;
      v33 = *(_DWORD *)(v17 + 28);
      v34 = *(_QWORD *)(v17 + 16);
      v35 = Method_System_Collections_Generic_List_GameObject__Add__;
      goto LABEL_51;
    }
  }
LABEL_62:
  v39 = v5->fields.eventRewardEnt;
  if ( !v39 )
    goto LABEL_91;
  if ( (v39->fields.type & 0xFFFFFFFE) == 2 )
  {
    getRewardImgObj = (__int64)this->fields.itemIcon;
    if ( !getRewardImgObj )
      goto LABEL_91;
    ItemIconComponent__SetItemImage((ItemIconComponent_o *)getRewardImgObj, v5->fields.iconId, 0);
  }
  getRewardImgObj = (__int64)this->fields.numDispctr;
  if ( !getRewardImgObj )
    goto LABEL_91;
  ItemNumDispControl__InitEventAlphaAnim(
    (ItemNumDispControl_o *)getRewardImgObj,
    (System_Collections_Generic_List_GameObject__o *)v17,
    v18);
  getRewardImgObj = (__int64)this->fields.nameTextLabel;
  if ( !getRewardImgObj )
    goto LABEL_91;
  UICrossNarrowLabel__SetCrossNarrowText((UICrossNarrowLabel_o *)getRewardImgObj, v5->fields.nameTxt, 0);
  getRewardImgObj = (__int64)this->fields.numTextLabel;
  if ( !getRewardImgObj )
    goto LABEL_91;
  UICrossNarrowLabel__SetCrossNarrowText((UICrossNarrowLabel_o *)getRewardImgObj, v5->fields.numTxt, 0);
  msgTextLabel = this->fields.msgTextLabel;
  getRewardImgObj = (__int64)EventPointItemListViewItem__get_needPointTxt(v5, v41);
  if ( !msgTextLabel )
    goto LABEL_91;
  UILabel__set_text(msgTextLabel, (System_String_o *)getRewardImgObj, 0);
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(baseButton, 0, 0) )
  {
    getRewardImgObj = (__int64)this->fields.baseButton;
    if ( getRewardImgObj )
    {
      isGetReward = v5->fields.isGetReward;
      UICommonButton__SetColliderEnable((UICommonButton_o *)getRewardImgObj, 1, 1, 0);
      getRewardImgObj = (__int64)this->fields.baseButton;
      if ( getRewardImgObj )
      {
        getRewardImgObj = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)getRewardImgObj
                                                                                      + 536LL))(
                            getRewardImgObj,
                            0,
                            1,
                            *(_QWORD *)(*(_QWORD *)getRewardImgObj + 544LL));
        if ( !isGetReward )
          return;
        v44 = v5->fields.eventRewardEnt;
        if ( v44 )
        {
          v45 = v44->fields.bgImageId;
          getSprite = this->fields.getSprite;
          getRewardImgObj = (__int64)EventPointItemListViewItemDraw_TypeInfo;
          if ( !EventPointItemListViewItemDraw_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(EventPointItemListViewItemDraw_TypeInfo);
            getRewardImgObj = (__int64)EventPointItemListViewItemDraw_TypeInfo;
            v44 = v5->fields.eventRewardEnt;
          }
          v47 = *(System_String_o **)(*(_QWORD *)(getRewardImgObj + 184) + 8LL);
          if ( v45 < 1 )
          {
            if ( !v44 )
              goto LABEL_91;
            eventId = v44->fields.eventId;
            v50 = System_Int32__ToString((int32_t)&eventId, 0);
            v49 = System_String__Concat_64463988(v47, v50, (System_String_o *)StringLiteral_1123/*"00"*/, 0);
          }
          else
          {
            if ( !v44 )
              goto LABEL_91;
            eventId = v44->fields.bgImageId;
            v48 = System_Int32__ToString((int32_t)&eventId, 0);
            v49 = System_String__Concat_64425724(v47, v48, 0);
          }
          v51 = v49;
          if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
          EventRewardRootComponent__setRewardInfoImg(getSprite, v51, 0);
          getRewardImgObj = (__int64)this->fields.getRewardImgObj;
          if ( getRewardImgObj )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)getRewardImgObj, 1, 0);
            return;
          }
        }
      }
    }
LABEL_91:
    sub_1C93D2C(getRewardImgObj, item);
  }
}