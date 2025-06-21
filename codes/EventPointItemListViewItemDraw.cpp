void __fastcall EventPointItemListViewItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  struct EventPointItemListViewItemDraw_StaticFields *static_fields; // x0

  if ( (byte_4B16B11 & 1) == 0 )
  {
    sub_1BCAFF8(&EventPointItemListViewItemDraw_TypeInfo, v1);
    sub_1BCAFF8(&StringLiteral_19097/*"event_rewardpoint_"*/, v2);
    sub_1BCAFF8(&StringLiteral_19093/*"event_rewardget_"*/, v3);
    byte_4B16B11 = 1;
  }
  EventPointItemListViewItemDraw_TypeInfo->static_fields->BOARD_SPRITE_BASE_NAME = (struct System_String_o *)StringLiteral_19097/*"event_rewardpoint_"*/;
  sub_1BCAF9C(EventPointItemListViewItemDraw_TypeInfo->static_fields);
  static_fields = EventPointItemListViewItemDraw_TypeInfo->static_fields;
  static_fields->GET_SPRITE_NAME = (struct System_String_o *)StringLiteral_19093/*"event_rewardget_"*/;
  sub_1BCAF9C(&static_fields->GET_SPRITE_NAME);
}


void __fastcall EventPointItemListViewItemDraw___ctor(EventPointItemListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventPointItemListViewItemDraw__Awake(EventPointItemListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *baseSprite; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  struct UISprite_o *v6; // x8
  struct UISprite_o *v7; // x8

  if ( (byte_4B16B0F & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, method);
    byte_4B16B0F = 1;
  }
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL);
  if ( (v4 & 1) != 0 )
  {
    v6 = this->fields.baseSprite;
    if ( !v6
      || (this->fields.baseAtlas = v6->fields.mAtlas,
          v4 = sub_1BCAF9C(&this->fields.baseAtlas),
          (v7 = this->fields.baseSprite) == 0LL) )
    {
      sub_1BCB254(v4, v5);
    }
    this->fields.baseSpriteName = v7->fields.mSpriteName;
    sub_1BCAF9C(&this->fields.baseSpriteName);
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
  __int64 getRewardImgObj; // x0
  UnityEngine_Object_o *baseSprite; // x21
  struct EventRewardEntity_o *eventRewardEnt; // x8
  int bgImageId; // w24
  UISprite_o *v18; // x21
  System_String_o *v19; // x22
  System_String_o *v20; // x0
  System_String_o *v21; // x0
  System_String_o *v22; // x0
  System_String_o *v23; // x22
  __int64 v24; // x21
  const MethodInfo *v25; // x2
  int v26; // w8
  struct EventRewardEntity_o *v27; // x8
  unsigned int *giftEnt; // x8
  int v29; // w8
  int32_t v30; // w2
  int32_t rewardNum; // w3
  struct GiftEntity_o *v32; // x8
  unsigned int type; // w8
  UnityEngine_Object_o *rarityInfo; // x22
  UnityEngine_Object_o *countLbInfo; // x22
  __int64 v36; // x8
  _QWORD *v37; // x9
  __int64 v38; // x10
  __int64 v39; // x0
  int v40; // w10
  __int64 v41; // x8
  _QWORD *v42; // x9
  __int64 v43; // x10
  __int64 v44; // x0
  struct EventPointBuffEntity_o *eventPointBuffEntity; // x8
  struct EventRewardEntity_o *v46; // x8
  UILabel_o *msgTextLabel; // x21
  const MethodInfo *v48; // x1
  UnityEngine_Object_o *baseButton; // x21
  _BOOL4 isGetReward; // w21
  struct EventRewardEntity_o *v51; // x8
  int v52; // w22
  UISprite_o *getSprite; // x21
  System_String_o *v54; // x20
  System_String_o *v55; // x0
  System_String_o *v56; // x0
  System_String_o *v57; // x0
  System_String_o *v58; // x20
  int32_t eventId; // [xsp+Ch] [xbp-34h] BYREF

  v5 = item;
  if ( (byte_4B16B10 & 1) == 0 )
  {
    sub_1BCAFF8(&EventPointItemListViewItemDraw_TypeInfo, item);
    sub_1BCAFF8(&EventRewardRootComponent_TypeInfo, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_GameObject__Add__, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_GameObject__Clear__, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_GameObject___ctor__, v10);
    sub_1BCAFF8(&System_Collections_Generic_List_GameObject__TypeInfo, v11);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v12);
    sub_1BCAFF8(&StringLiteral_1120/*"00"*/, v13);
    byte_4B16B10 = 1;
  }
  eventId = 0;
  if ( !v5 || !mode )
    return;
  getRewardImgObj = (__int64)this->fields.getRewardImgObj;
  if ( !getRewardImgObj )
    goto LABEL_91;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)getRewardImgObj, 0, 0LL);
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  getRewardImgObj = UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL);
  if ( (getRewardImgObj & 1) != 0 )
  {
    eventRewardEnt = v5->fields.eventRewardEnt;
    if ( !eventRewardEnt )
      goto LABEL_91;
    if ( eventRewardEnt->fields.eventId >= 1 )
    {
      bgImageId = eventRewardEnt->fields.bgImageId;
      v18 = this->fields.baseSprite;
      getRewardImgObj = (__int64)EventPointItemListViewItemDraw_TypeInfo;
      if ( !EventPointItemListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventPointItemListViewItemDraw_TypeInfo);
        getRewardImgObj = (__int64)EventPointItemListViewItemDraw_TypeInfo;
        eventRewardEnt = v5->fields.eventRewardEnt;
      }
      v19 = **(System_String_o ***)(getRewardImgObj + 184);
      if ( bgImageId < 1 )
      {
        if ( !eventRewardEnt )
          goto LABEL_91;
        eventId = eventRewardEnt->fields.eventId;
        v22 = System_Int32__ToString((int32_t)&eventId, 0LL);
        v21 = System_String__Concat_62488672(v19, v22, (System_String_o *)StringLiteral_1120/*"00"*/, 0LL);
      }
      else
      {
        if ( !eventRewardEnt )
          goto LABEL_91;
        eventId = eventRewardEnt->fields.bgImageId;
        v20 = System_Int32__ToString((int32_t)&eventId, 0LL);
        v21 = System_String__Concat_62450424(v19, v20, 0LL);
      }
      v23 = v21;
      if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
      EventRewardRootComponent__setRewardInfoImg(v18, v23, 0LL);
    }
  }
  v24 = sub_1BCB244(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    (System_Collections_Generic_List_object__o *)v24,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_GameObject___ctor__);
  if ( !v24 )
    goto LABEL_91;
  v25 = (const MethodInfo *)*(unsigned int *)(v24 + 24);
  v26 = *(_DWORD *)(v24 + 28) + 1;
  *(_DWORD *)(v24 + 24) = 0;
  *(_DWORD *)(v24 + 28) = v26;
  if ( (int)v25 >= 1 )
    System_Array__Clear(*(System_Array_o **)(v24 + 16), 0, (int32_t)v25, 0LL);
  v27 = v5->fields.eventRewardEnt;
  if ( !v27 )
    goto LABEL_91;
  if ( v27->fields.type != 1 )
    goto LABEL_62;
  giftEnt = (unsigned int *)v5->fields.giftEnt;
  if ( !giftEnt )
  {
    rewardNum = v5->fields.rewardNum;
    getRewardImgObj = (__int64)this->fields.itemIcon;
    item = 0LL;
    if ( rewardNum >= 1 )
    {
      if ( !getRewardImgObj )
        goto LABEL_91;
      goto LABEL_38;
    }
LABEL_60:
    if ( !getRewardImgObj )
      goto LABEL_91;
    ItemIconComponent__SetGift_40107980(
      (ItemIconComponent_o *)getRewardImgObj,
      (int32_t)item,
      v5->fields.rewardObjectId,
      -1,
      0,
      0LL);
    goto LABEL_62;
  }
  item = (EventPointItemListViewItem_o *)giftEnt[11];
  if ( (int)item >= 1 )
  {
    getRewardImgObj = (__int64)this->fields.itemIcon;
    if ( !getRewardImgObj )
      goto LABEL_91;
    v29 = giftEnt[7];
    if ( v29 <= 1 )
      v30 = -1;
    else
      v30 = v29;
    ItemIconComponent__SetItemImage_40110424((ItemIconComponent_o *)getRewardImgObj, (int32_t)item, v30, 0LL);
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
          0LL);
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
    0LL);
  v32 = v5->fields.giftEnt;
  if ( !v32 || (type = v32->fields.type, type > 7) || ((1 << type) & 0xC2) == 0 )
  {
    item = (EventPointItemListViewItem_o *)this->fields.countLbInfo;
    v40 = *(_DWORD *)(v24 + 28);
    v41 = *(_QWORD *)(v24 + 16);
    v42 = Method_System_Collections_Generic_List_GameObject__Add__;
LABEL_51:
    *(_DWORD *)(v24 + 28) = v40 + 1;
    if ( !v41 )
      goto LABEL_91;
    v43 = *(int *)(v24 + 24);
    if ( (unsigned int)v43 >= *(_DWORD *)(v41 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)v24,
        (Il2CppObject *)item,
        *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
    }
    else
    {
      v44 = v41 + 8 * v43;
      *(_DWORD *)(v24 + 24) = v43 + 1;
      *(_QWORD *)(v44 + 32) = item;
      getRewardImgObj = sub_1BCAF9C(v44 + 32);
    }
    goto LABEL_62;
  }
  rarityInfo = (UnityEngine_Object_o *)this->fields.rarityInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  getRewardImgObj = UnityEngine_Object__op_Inequality(rarityInfo, 0LL, 0LL);
  if ( (getRewardImgObj & 1) != 0 )
  {
    countLbInfo = (UnityEngine_Object_o *)this->fields.countLbInfo;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    getRewardImgObj = UnityEngine_Object__op_Inequality(countLbInfo, 0LL, 0LL);
    if ( (getRewardImgObj & 1) != 0 )
    {
      item = (EventPointItemListViewItem_o *)this->fields.rarityInfo;
      v36 = *(_QWORD *)(v24 + 16);
      v37 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++*(_DWORD *)(v24 + 28);
      if ( !v36 )
        goto LABEL_91;
      v38 = *(int *)(v24 + 24);
      if ( (unsigned int)v38 >= *(_DWORD *)(v36 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)v24,
          (Il2CppObject *)item,
          *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
      }
      else
      {
        v39 = v36 + 8 * v38;
        *(_DWORD *)(v24 + 24) = v38 + 1;
        *(_QWORD *)(v39 + 32) = item;
        getRewardImgObj = sub_1BCAF9C(v39 + 32);
      }
      item = (EventPointItemListViewItem_o *)this->fields.countLbInfo;
      v40 = *(_DWORD *)(v24 + 28);
      v41 = *(_QWORD *)(v24 + 16);
      v42 = Method_System_Collections_Generic_List_GameObject__Add__;
      goto LABEL_51;
    }
  }
LABEL_62:
  v46 = v5->fields.eventRewardEnt;
  if ( !v46 )
    goto LABEL_91;
  if ( (v46->fields.type & 0xFFFFFFFE) == 2 )
  {
    getRewardImgObj = (__int64)this->fields.itemIcon;
    if ( !getRewardImgObj )
      goto LABEL_91;
    ItemIconComponent__SetItemImage((ItemIconComponent_o *)getRewardImgObj, v5->fields.iconId, 0LL);
  }
  getRewardImgObj = (__int64)this->fields.numDispctr;
  if ( !getRewardImgObj )
    goto LABEL_91;
  ItemNumDispControl__InitEventAlphaAnim(
    (ItemNumDispControl_o *)getRewardImgObj,
    (System_Collections_Generic_List_GameObject__o *)v24,
    v25);
  getRewardImgObj = (__int64)this->fields.nameTextLabel;
  if ( !getRewardImgObj )
    goto LABEL_91;
  UICrossNarrowLabel__SetCrossNarrowText((UICrossNarrowLabel_o *)getRewardImgObj, v5->fields.nameTxt, 0LL);
  getRewardImgObj = (__int64)this->fields.numTextLabel;
  if ( !getRewardImgObj )
    goto LABEL_91;
  UICrossNarrowLabel__SetCrossNarrowText((UICrossNarrowLabel_o *)getRewardImgObj, v5->fields.numTxt, 0LL);
  msgTextLabel = this->fields.msgTextLabel;
  getRewardImgObj = (__int64)EventPointItemListViewItem__get_needPointTxt(v5, v48);
  if ( !msgTextLabel )
    goto LABEL_91;
  UILabel__set_text(msgTextLabel, (System_String_o *)getRewardImgObj, 0LL);
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
  {
    getRewardImgObj = (__int64)this->fields.baseButton;
    if ( getRewardImgObj )
    {
      isGetReward = v5->fields.isGetReward;
      UICommonButton__SetColliderEnable((UICommonButton_o *)getRewardImgObj, 1, 1, 0LL);
      getRewardImgObj = (__int64)this->fields.baseButton;
      if ( getRewardImgObj )
      {
        getRewardImgObj = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)getRewardImgObj
                                                                                      + 536LL))(
                            getRewardImgObj,
                            0LL,
                            1LL,
                            *(_QWORD *)(*(_QWORD *)getRewardImgObj + 544LL));
        if ( !isGetReward )
          return;
        v51 = v5->fields.eventRewardEnt;
        if ( v51 )
        {
          v52 = v51->fields.bgImageId;
          getSprite = this->fields.getSprite;
          getRewardImgObj = (__int64)EventPointItemListViewItemDraw_TypeInfo;
          if ( !EventPointItemListViewItemDraw_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(EventPointItemListViewItemDraw_TypeInfo);
            getRewardImgObj = (__int64)EventPointItemListViewItemDraw_TypeInfo;
            v51 = v5->fields.eventRewardEnt;
          }
          v54 = *(System_String_o **)(*(_QWORD *)(getRewardImgObj + 184) + 8LL);
          if ( v52 < 1 )
          {
            if ( !v51 )
              goto LABEL_91;
            eventId = v51->fields.eventId;
            v57 = System_Int32__ToString((int32_t)&eventId, 0LL);
            v56 = System_String__Concat_62488672(v54, v57, (System_String_o *)StringLiteral_1120/*"00"*/, 0LL);
          }
          else
          {
            if ( !v51 )
              goto LABEL_91;
            eventId = v51->fields.bgImageId;
            v55 = System_Int32__ToString((int32_t)&eventId, 0LL);
            v56 = System_String__Concat_62450424(v54, v55, 0LL);
          }
          v58 = v56;
          if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
          EventRewardRootComponent__setRewardInfoImg(getSprite, v58, 0LL);
          getRewardImgObj = (__int64)this->fields.getRewardImgObj;
          if ( getRewardImgObj )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)getRewardImgObj, 1, 0LL);
            return;
          }
        }
      }
    }
LABEL_91:
    sub_1BCB254(getRewardImgObj, item);
  }
}