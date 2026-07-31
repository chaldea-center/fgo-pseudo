void EventPointItemListViewItemDraw___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1
  int32_t v8; // w1
  struct EventPointItemListViewItemDraw_StaticFields *static_fields; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  if ( (byte_59327A8 & 1) == 0 )
  {
    sub_21FFC50(&EventPointItemListViewItemDraw_TypeInfo);
    sub_21FFC50(&StringLiteral_20119/*"event_rewardpoint_"*/);
    sub_21FFC50(&StringLiteral_20115/*"event_rewardget_"*/);
    byte_59327A8 = 1;
  }
  v7 = StringLiteral_20119/*"event_rewardpoint_"*/;
  EventPointItemListViewItemDraw_TypeInfo->static_fields->BOARD_SPRITE_BASE_NAME = (struct System_String_o *)StringLiteral_20119/*"event_rewardpoint_"*/;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)EventPointItemListViewItemDraw_TypeInfo->static_fields,
    v7,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v8 = StringLiteral_20115/*"event_rewardget_"*/;
  static_fields = EventPointItemListViewItemDraw_TypeInfo->static_fields;
  static_fields->GET_SPRITE_NAME = (struct System_String_o *)StringLiteral_20115/*"event_rewardget_"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&static_fields->GET_SPRITE_NAME, v8, v10, v11, v12, v13, v14, v15);
}


void EventPointItemListViewItemDraw___ctor(EventPointItemListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void EventPointItemListViewItemDraw__Awake(EventPointItemListViewItemDraw_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *baseSprite; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  struct UISprite_o *v13; // x8
  struct UIAtlas_o *mAtlas; // x1
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  struct UISprite_o *v21; // x8
  struct System_String_o *mSpriteName; // x1

  if ( (byte_59327A6 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_59327A6 = 1;
  }
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  v5 = UnityEngine_Object__op_Inequality(baseSprite, 0, 0);
  if ( v5 )
  {
    v13 = this->fields.baseSprite;
    if ( !v13
      || (mAtlas = v13->fields.mAtlas,
          this->fields.baseAtlas = mAtlas,
          sub_21FFBF4(
            (MissionNaviTransitionBoardItem_o *)&this->fields.baseAtlas,
            (int32_t)mAtlas,
            v7,
            v8,
            v9,
            v10,
            v11,
            v12),
          (v21 = this->fields.baseSprite) == 0) )
    {
      sub_21FFECC(v5, v6);
    }
    mSpriteName = v21->fields.mSpriteName;
    this->fields.baseSpriteName = mSpriteName;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.baseSpriteName,
      (int32_t)mSpriteName,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
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
  __int64 v8; // x1
  __int64 v9; // x2
  UnityEngine_Object_o *baseSprite; // x21
  __int64 v11; // x2
  struct EventRewardEntity_o *eventRewardEnt; // x8
  UISprite_o *v13; // x21
  int v14; // w9
  struct EventPointItemListViewItemDraw_StaticFields *v15; // x9
  System_String_o *v16; // x22
  System_String_o *v17; // x0
  System_String_o *v18; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  struct EventPointItemListViewItemDraw_StaticFields *static_fields; // x9
  System_String_o *BOARD_SPRITE_BASE_NAME; // x22
  System_String_o *v23; // x0
  System_String_o *v24; // x22
  __int64 v25; // x21
  const MethodInfo *v26; // x2
  int v27; // w8
  struct EventRewardEntity_o *v28; // x8
  unsigned int *giftEnt; // x8
  int64_t v30; // x8
  int64_t v31; // x2
  int32_t rewardNum; // w3
  __int64 v33; // x1
  __int64 v34; // x2
  struct GiftEntity_o *v35; // x8
  unsigned int type; // w8
  UnityEngine_Object_o *rarityInfo; // x22
  UnityEngine_Object_o *countLbInfo; // x22
  struct UnityEngine_GameObject_o *v39; // x1
  void *v40; // x2
  struct EventPointBuffEntity_o *eventPointBuffEntity; // x8
  struct EventRewardEntity_o *v42; // x8
  UILabel_o *msgTextLabel; // x21
  const MethodInfo *v44; // x1
  __int64 v45; // x1
  __int64 v46; // x2
  UnityEngine_Object_o *baseButton; // x21
  __int64 v48; // x2
  struct EventRewardEntity_o *v49; // x8
  UISprite_o *getSprite; // x21
  int v51; // w9
  struct EventPointItemListViewItemDraw_StaticFields *v52; // x9
  System_String_o *v53; // x20
  System_String_o *v54; // x0
  System_String_o *v55; // x0
  __int64 v56; // x1
  __int64 v57; // x2
  struct EventPointItemListViewItemDraw_StaticFields *v58; // x9
  System_String_o *GET_SPRITE_NAME; // x20
  System_String_o *v60; // x0
  System_String_o *v61; // x20
  int32_t eventId; // [xsp+Ch] [xbp-34h] BYREF

  v5 = item;
  if ( (byte_59327A7 & 1) == 0 )
  {
    sub_21FFC50(&EventPointItemListViewItemDraw_TypeInfo);
    sub_21FFC50(&EventRewardRootComponent_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_1205/*"00"*/);
    byte_59327A7 = 1;
  }
  eventId = 0;
  if ( !v5 || !mode )
    return;
  getRewardImgObj = (__int64)this->fields.getRewardImgObj;
  if ( !getRewardImgObj )
    goto LABEL_86;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)getRewardImgObj, 0, 0);
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v9);
  getRewardImgObj = UnityEngine_Object__op_Inequality(baseSprite, 0, 0);
  if ( (getRewardImgObj & 1) != 0 )
  {
    eventRewardEnt = v5->fields.eventRewardEnt;
    if ( !eventRewardEnt )
      goto LABEL_86;
    if ( eventRewardEnt->fields.eventId >= 1 )
    {
      v13 = this->fields.baseSprite;
      v14 = *(&EventPointItemListViewItemDraw_TypeInfo->_2.cctor_finished + 1);
      if ( eventRewardEnt->fields.bgImageId < 1 )
      {
        if ( !v14 )
        {
          j_il2cpp_runtime_class_init_0(EventPointItemListViewItemDraw_TypeInfo, item, v11);
          eventRewardEnt = v5->fields.eventRewardEnt;
          if ( !eventRewardEnt )
            goto LABEL_86;
        }
        static_fields = EventPointItemListViewItemDraw_TypeInfo->static_fields;
        eventId = eventRewardEnt->fields.eventId;
        BOARD_SPRITE_BASE_NAME = static_fields->BOARD_SPRITE_BASE_NAME;
        v23 = System_Int32__ToString((int32_t)&eventId, 0);
        v18 = System_String__Concat_75481624(BOARD_SPRITE_BASE_NAME, v23, (System_String_o *)StringLiteral_1205/*"00"*/, 0);
      }
      else
      {
        if ( !v14 )
        {
          j_il2cpp_runtime_class_init_0(EventPointItemListViewItemDraw_TypeInfo, item, v11);
          eventRewardEnt = v5->fields.eventRewardEnt;
          if ( !eventRewardEnt )
            goto LABEL_86;
        }
        v15 = EventPointItemListViewItemDraw_TypeInfo->static_fields;
        eventId = eventRewardEnt->fields.bgImageId;
        v16 = v15->BOARD_SPRITE_BASE_NAME;
        v17 = System_Int32__ToString((int32_t)&eventId, 0);
        v18 = System_String__Concat_75438412(v16, v17, 0);
      }
      v24 = v18;
      if ( !*(&EventRewardRootComponent_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo, v19, v20);
      EventRewardRootComponent__setRewardInfoImg(v13, v24, 0);
    }
  }
  v25 = sub_21FFEBC(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    (System_Collections_Generic_List_object__o *)v25,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  if ( !v25 )
    goto LABEL_86;
  v26 = (const MethodInfo *)*(unsigned int *)(v25 + 24);
  v27 = *(_DWORD *)(v25 + 28) + 1;
  *(_DWORD *)(v25 + 24) = 0;
  *(_DWORD *)(v25 + 28) = v27;
  if ( (int)v26 >= 1 )
    System_Array__Clear(*(System_Array_o **)(v25 + 16), 0, (int32_t)v26, 0);
  v28 = v5->fields.eventRewardEnt;
  if ( !v28 )
LABEL_86:
    sub_21FFECC(getRewardImgObj, item);
  if ( v28->fields.type == 1 )
  {
    giftEnt = (unsigned int *)v5->fields.giftEnt;
    if ( giftEnt )
    {
      item = (EventPointItemListViewItem_o *)giftEnt[11];
      if ( (int)item >= 1 )
      {
        getRewardImgObj = (__int64)this->fields.itemIcon;
        if ( !getRewardImgObj )
          goto LABEL_86;
        v30 = giftEnt[7];
        if ( (int)v30 <= 1 )
          v31 = -1;
        else
          v31 = v30;
        ItemIconComponent__SetItemImage_47939376((ItemIconComponent_o *)getRewardImgObj, (int32_t)item, v31, 0);
        goto LABEL_56;
      }
      rewardNum = v5->fields.rewardNum;
      item = (EventPointItemListViewItem_o *)giftEnt[5];
      if ( rewardNum >= 1 )
      {
LABEL_36:
        getRewardImgObj = (__int64)this->fields.itemIcon;
        if ( !getRewardImgObj )
          goto LABEL_86;
        ItemIconComponent__SetGiftDesignSize(
          (ItemIconComponent_o *)getRewardImgObj,
          (int32_t)item,
          v5->fields.rewardObjectId,
          rewardNum,
          0);
        v35 = v5->fields.giftEnt;
        if ( v35 && (type = v35->fields.type, type <= 7) && ((1 << type) & 0xC2) != 0 )
        {
          rarityInfo = (UnityEngine_Object_o *)this->fields.rarityInfo;
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v33, v34);
          getRewardImgObj = UnityEngine_Object__op_Inequality(rarityInfo, 0, 0);
          if ( (getRewardImgObj & 1) == 0 )
            goto LABEL_56;
          countLbInfo = (UnityEngine_Object_o *)this->fields.countLbInfo;
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, v26);
          getRewardImgObj = UnityEngine_Object__op_Inequality(countLbInfo, 0, 0);
          if ( (getRewardImgObj & 1) == 0 )
            goto LABEL_56;
          sub_1FEBF38(v25, this->fields.rarityInfo, Method_System_Collections_Generic_List_GameObject__Add__);
          v39 = this->fields.countLbInfo;
          v40 = Method_System_Collections_Generic_List_GameObject__Add__;
        }
        else
        {
          v39 = this->fields.countLbInfo;
          v40 = Method_System_Collections_Generic_List_GameObject__Add__;
        }
        getRewardImgObj = sub_1FEBF38(v25, v39, v40);
        goto LABEL_56;
      }
      if ( (_DWORD)item == 12 )
      {
        eventPointBuffEntity = v5->fields.eventPointBuffEntity;
        if ( eventPointBuffEntity )
        {
          getRewardImgObj = (__int64)this->fields.itemIcon;
          if ( !getRewardImgObj )
            goto LABEL_86;
          ItemIconComponent__SetEventPointBuffImage(
            (ItemIconComponent_o *)getRewardImgObj,
            eventPointBuffEntity->fields.imageId,
            eventPointBuffEntity->fields.bgImageId,
            0);
          goto LABEL_56;
        }
        item = (EventPointItemListViewItem_o *)(byte_9 + 3);
      }
    }
    else
    {
      rewardNum = v5->fields.rewardNum;
      item = 0;
      if ( rewardNum >= 1 )
        goto LABEL_36;
    }
    getRewardImgObj = (__int64)this->fields.itemIcon;
    if ( !getRewardImgObj )
      goto LABEL_86;
    ItemIconComponent__SetGift_47936840(
      (ItemIconComponent_o *)getRewardImgObj,
      (int32_t)item,
      v5->fields.rewardObjectId,
      -1,
      0,
      0);
  }
LABEL_56:
  v42 = v5->fields.eventRewardEnt;
  if ( !v42 )
    goto LABEL_86;
  if ( (v42->fields.type & 0xFFFFFFFE) == 2 )
  {
    getRewardImgObj = (__int64)this->fields.itemIcon;
    if ( !getRewardImgObj )
      goto LABEL_86;
    ItemIconComponent__SetItemImage((ItemIconComponent_o *)getRewardImgObj, v5->fields.iconId, 0);
  }
  getRewardImgObj = (__int64)this->fields.numDispctr;
  if ( !getRewardImgObj )
    goto LABEL_86;
  ItemNumDispControl__InitEventAlphaAnim(
    (ItemNumDispControl_o *)getRewardImgObj,
    (System_Collections_Generic_List_GameObject__o *)v25,
    v26);
  getRewardImgObj = (__int64)this->fields.nameTextLabel;
  if ( !getRewardImgObj )
    goto LABEL_86;
  UICrossNarrowLabel__SetCrossNarrowText((UICrossNarrowLabel_o *)getRewardImgObj, v5->fields.nameTxt, 0);
  getRewardImgObj = (__int64)this->fields.numTextLabel;
  if ( !getRewardImgObj )
    goto LABEL_86;
  UICrossNarrowLabel__SetCrossNarrowText((UICrossNarrowLabel_o *)getRewardImgObj, v5->fields.numTxt, 0);
  msgTextLabel = this->fields.msgTextLabel;
  getRewardImgObj = (__int64)EventPointItemListViewItem__get_needPointTxt(v5, v44);
  if ( !msgTextLabel )
    goto LABEL_86;
  UILabel__set_text(msgTextLabel, (System_String_o *)getRewardImgObj, 0);
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v45, v46);
  if ( UnityEngine_Object__op_Inequality(baseButton, 0, 0) )
  {
    getRewardImgObj = (__int64)this->fields.baseButton;
    if ( v5->fields.isGetReward )
    {
      if ( getRewardImgObj )
      {
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
          v49 = v5->fields.eventRewardEnt;
          if ( v49 )
          {
            getSprite = this->fields.getSprite;
            v51 = *(&EventPointItemListViewItemDraw_TypeInfo->_2.cctor_finished + 1);
            if ( v49->fields.bgImageId < 1 )
            {
              if ( !v51 )
              {
                j_il2cpp_runtime_class_init_0(EventPointItemListViewItemDraw_TypeInfo, item, v48);
                v49 = v5->fields.eventRewardEnt;
                if ( !v49 )
                  goto LABEL_86;
              }
              v58 = EventPointItemListViewItemDraw_TypeInfo->static_fields;
              eventId = v49->fields.eventId;
              GET_SPRITE_NAME = v58->GET_SPRITE_NAME;
              v60 = System_Int32__ToString((int32_t)&eventId, 0);
              v55 = System_String__Concat_75481624(GET_SPRITE_NAME, v60, (System_String_o *)StringLiteral_1205/*"00"*/, 0);
            }
            else
            {
              if ( !v51 )
              {
                j_il2cpp_runtime_class_init_0(EventPointItemListViewItemDraw_TypeInfo, item, v48);
                v49 = v5->fields.eventRewardEnt;
                if ( !v49 )
                  goto LABEL_86;
              }
              v52 = EventPointItemListViewItemDraw_TypeInfo->static_fields;
              eventId = v49->fields.bgImageId;
              v53 = v52->GET_SPRITE_NAME;
              v54 = System_Int32__ToString((int32_t)&eventId, 0);
              v55 = System_String__Concat_75438412(v53, v54, 0);
            }
            v61 = v55;
            if ( !*(&EventRewardRootComponent_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo, v56, v57);
            EventRewardRootComponent__setRewardInfoImg(getSprite, v61, 0);
            getRewardImgObj = (__int64)this->fields.getRewardImgObj;
            if ( getRewardImgObj )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)getRewardImgObj, 1, 0);
              return;
            }
          }
        }
      }
    }
    else if ( getRewardImgObj )
    {
      UICommonButton__SetColliderEnable((UICommonButton_o *)getRewardImgObj, 1, 1, 0);
      getRewardImgObj = (__int64)this->fields.baseButton;
      if ( getRewardImgObj )
      {
        (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)getRewardImgObj + 536LL))(
          getRewardImgObj,
          0,
          1,
          *(_QWORD *)(*(_QWORD *)getRewardImgObj + 544LL));
        return;
      }
    }
    goto LABEL_86;
  }
}