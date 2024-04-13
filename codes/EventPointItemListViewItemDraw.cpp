void __fastcall EventPointItemListViewItemDraw___cctor(const MethodInfo *method)
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v15; // x1
  struct EventPointItemListViewItemDraw_StaticFields *v16; // x0
  System_Int32_array **v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  if ( (byte_42E90CD & 1) == 0 )
  {
    sub_B5D5C4(&EventPointItemListViewItemDraw_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_18811/*"event_rewardpoint_"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_18807/*"event_rewardget_"*/, v11, v12, v13);
    byte_42E90CD = 1;
  }
  static_fields = (BattleServantConfConponent_o *)EventPointItemListViewItemDraw_TypeInfo->static_fields;
  v15 = (System_Int32_array **)StringLiteral_18811/*"event_rewardpoint_"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_18811/*"event_rewardpoint_"*/;
  sub_B5D560(static_fields, v15, v2, v3, v4, v5, v6, v7);
  v16 = EventPointItemListViewItemDraw_TypeInfo->static_fields;
  v17 = (System_Int32_array **)StringLiteral_18807/*"event_rewardget_"*/;
  v16->GET_SPRITE_NAME = (struct System_String_o *)StringLiteral_18807/*"event_rewardget_"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v16->GET_SPRITE_NAME, v17, v18, v19, v20, v21, v22, v23);
}


void __fastcall EventPointItemListViewItemDraw___ctor(EventPointItemListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventPointItemListViewItemDraw__Awake(EventPointItemListViewItemDraw_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *baseSprite; // x20
  _BOOL8 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  struct UISprite_o *v14; // x8
  struct UIAtlas_o *mAtlas; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  struct UISprite_o *v22; // x8
  struct System_String_o *mSpriteName; // x1

  if ( (byte_42E90CB & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E90CB = 1;
  }
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL);
  if ( v6 )
  {
    v14 = this->fields.baseSprite;
    if ( !v14
      || (mAtlas = v14->fields.mAtlas,
          this->fields.baseAtlas = mAtlas,
          sub_B5D560(
            (BattleServantConfConponent_o *)&this->fields.baseAtlas,
            (System_Int32_array **)mAtlas,
            v8,
            v9,
            v10,
            v11,
            v12,
            v13),
          (v22 = this->fields.baseSprite) == 0LL) )
    {
      sub_B5D69C(v6, v7);
    }
    mSpriteName = v22->fields.mSpriteName;
    this->fields.baseSpriteName = mSpriteName;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.baseSpriteName,
      (System_Int32_array **)mSpriteName,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
}


void __fastcall EventPointItemListViewItemDraw__SetItem(
        EventPointItemListViewItemDraw_o *this,
        EventPointItemListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  EventPointItemListViewItem_o *v5; // x20
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  UnityEngine_GameObject_o *getRewardImgObj; // x0
  UnityEngine_Object_o *baseSprite; // x21
  struct EventRewardEntity_o *eventRewardEnt; // x8
  UISprite_o *v31; // x21
  System_String_o *v32; // x22
  System_String_o *v33; // x0
  System_String_o *v34; // x0
  System_String_o *BOARD_SPRITE_BASE_NAME; // x22
  System_String_o *v36; // x0
  System_String_o *v37; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v38; // x21
  struct EventRewardEntity_o *v39; // x8
  unsigned int *giftEnt; // x8
  int v41; // w8
  int32_t v42; // w2
  int32_t rewardNum; // w3
  struct EventPointBuffEntity_o *eventPointBuffEntity; // x8
  struct GiftEntity_o *v45; // x8
  unsigned int type; // w8
  UnityEngine_Object_o *rarityInfo; // x22
  UnityEngine_Object_o *countLbInfo; // x22
  struct UnityEngine_GameObject_o *v49; // x1
  const MethodInfo_3056FC0 *v50; // x2
  struct EventRewardEntity_o *v51; // x8
  UILabel_o *msgTextLabel; // x21
  const MethodInfo *v53; // x1
  UnityEngine_Object_o *baseButton; // x21
  _BOOL4 isGetReward; // w21
  struct EventRewardEntity_o *v56; // x8
  UISprite_o *getSprite; // x21
  System_String_o *v58; // x20
  System_String_o *v59; // x0
  System_String_o *v60; // x0
  System_String_o *GET_SPRITE_NAME; // x20
  System_String_o *v62; // x0
  System_String_o *v63; // x20
  int32_t eventId; // [xsp+Ch] [xbp-24h] BYREF

  v5 = item;
  if ( (byte_42E90CC & 1) == 0 )
  {
    sub_B5D5C4(&EventPointItemListViewItemDraw_TypeInfo, (_DWORD)item, mode, method);
    sub_B5D5C4(&EventRewardRootComponent_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__Add__, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__Clear__, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject___ctor__, v16, v17, v18);
    sub_B5D5C4(&System_Collections_Generic_List_GameObject__TypeInfo, v19, v20, v21);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v22, v23, v24);
    sub_B5D5C4(&StringLiteral_982/*"00"*/, v25, v26, v27);
    byte_42E90CC = 1;
  }
  eventId = 0;
  if ( !v5 || !mode )
    return;
  getRewardImgObj = this->fields.getRewardImgObj;
  if ( !getRewardImgObj )
    goto LABEL_94;
  UnityEngine_GameObject__SetActive(getRewardImgObj, 0, 0LL);
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  getRewardImgObj = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL);
  if ( ((unsigned __int8)getRewardImgObj & 1) != 0 )
  {
    eventRewardEnt = v5->fields.eventRewardEnt;
    if ( !eventRewardEnt )
      goto LABEL_94;
    if ( eventRewardEnt->fields.eventId >= 1 )
    {
      v31 = this->fields.baseSprite;
      if ( eventRewardEnt->fields.bgImageId < 1 )
      {
        if ( (WORD1(EventPointItemListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !EventPointItemListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventPointItemListViewItemDraw_TypeInfo);
          eventRewardEnt = v5->fields.eventRewardEnt;
          if ( !eventRewardEnt )
            goto LABEL_94;
        }
        BOARD_SPRITE_BASE_NAME = EventPointItemListViewItemDraw_TypeInfo->static_fields->BOARD_SPRITE_BASE_NAME;
        eventId = eventRewardEnt->fields.eventId;
        v36 = System_Int32__ToString((int32_t)&eventId, 0LL);
        v34 = System_String__Concat_44580072(BOARD_SPRITE_BASE_NAME, v36, (System_String_o *)StringLiteral_982/*"00"*/, 0LL);
      }
      else
      {
        if ( (WORD1(EventPointItemListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !EventPointItemListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventPointItemListViewItemDraw_TypeInfo);
          eventRewardEnt = v5->fields.eventRewardEnt;
          if ( !eventRewardEnt )
            goto LABEL_94;
        }
        v32 = EventPointItemListViewItemDraw_TypeInfo->static_fields->BOARD_SPRITE_BASE_NAME;
        eventId = eventRewardEnt->fields.bgImageId;
        v33 = System_Int32__ToString((int32_t)&eventId, 0LL);
        v34 = System_String__Concat_44577788(v32, v33, 0LL);
      }
      v37 = v34;
      if ( (BYTE3(EventRewardRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
      }
      EventRewardRootComponent__setRewardInfoImg(v31, v37, 0LL);
    }
  }
  v38 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v38,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_GameObject___ctor__);
  if ( !v38 )
    goto LABEL_94;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)v38,
    (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_GameObject__Clear__);
  v39 = v5->fields.eventRewardEnt;
  if ( !v39 )
    goto LABEL_94;
  if ( v39->fields.type == 1 )
  {
    giftEnt = (unsigned int *)v5->fields.giftEnt;
    if ( giftEnt )
    {
      item = (EventPointItemListViewItem_o *)giftEnt[11];
      if ( (int)item >= 1 )
      {
        getRewardImgObj = (UnityEngine_GameObject_o *)this->fields.itemIcon;
        if ( !getRewardImgObj )
          goto LABEL_94;
        v41 = giftEnt[7];
        if ( v41 <= 1 )
          v42 = -1;
        else
          v42 = v41;
        ItemIconComponent__SetItemImage_28499576((ItemIconComponent_o *)getRewardImgObj, (int32_t)item, v42, 0LL);
        goto LABEL_63;
      }
    }
    rewardNum = v5->fields.rewardNum;
    if ( rewardNum < 1 )
    {
      if ( giftEnt )
      {
        item = (EventPointItemListViewItem_o *)giftEnt[5];
        if ( (_DWORD)item == 12 )
        {
          eventPointBuffEntity = v5->fields.eventPointBuffEntity;
          if ( eventPointBuffEntity )
          {
            getRewardImgObj = (UnityEngine_GameObject_o *)this->fields.itemIcon;
            if ( !getRewardImgObj )
              goto LABEL_94;
            ItemIconComponent__SetEventPointBuffImage(
              (ItemIconComponent_o *)getRewardImgObj,
              eventPointBuffEntity->fields.imageId,
              eventPointBuffEntity->fields.bgImageId,
              0LL);
            goto LABEL_63;
          }
          item = (EventPointItemListViewItem_o *)(byte_9 + 3);
        }
      }
      else
      {
        item = 0LL;
      }
      getRewardImgObj = (UnityEngine_GameObject_o *)this->fields.itemIcon;
      if ( !getRewardImgObj )
        goto LABEL_94;
      ItemIconComponent__SetGift(
        (ItemIconComponent_o *)getRewardImgObj,
        (int32_t)item,
        v5->fields.rewardObjectId,
        -1,
        0,
        0LL);
      goto LABEL_63;
    }
    getRewardImgObj = (UnityEngine_GameObject_o *)this->fields.itemIcon;
    if ( giftEnt )
    {
      item = (EventPointItemListViewItem_o *)giftEnt[5];
      if ( !getRewardImgObj )
        goto LABEL_94;
    }
    else
    {
      item = 0LL;
      if ( !getRewardImgObj )
        goto LABEL_94;
    }
    ItemIconComponent__SetGiftDesignSize(
      (ItemIconComponent_o *)getRewardImgObj,
      (int32_t)item,
      v5->fields.rewardObjectId,
      rewardNum,
      0LL);
    v45 = v5->fields.giftEnt;
    if ( v45 && (type = v45->fields.type, type <= 7) && ((1 << type) & 0xC2) != 0 )
    {
      rarityInfo = (UnityEngine_Object_o *)this->fields.rarityInfo;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      getRewardImgObj = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(rarityInfo, 0LL, 0LL);
      if ( ((unsigned __int8)getRewardImgObj & 1) == 0 )
        goto LABEL_63;
      countLbInfo = (UnityEngine_Object_o *)this->fields.countLbInfo;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      getRewardImgObj = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(countLbInfo, 0LL, 0LL);
      if ( ((unsigned __int8)getRewardImgObj & 1) == 0 )
        goto LABEL_63;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v38,
        (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.rarityInfo,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_GameObject__Add__);
      v49 = this->fields.countLbInfo;
      v50 = (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_GameObject__Add__;
    }
    else
    {
      v49 = this->fields.countLbInfo;
      v50 = (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_GameObject__Add__;
    }
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v38,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v49,
      v50);
  }
LABEL_63:
  v51 = v5->fields.eventRewardEnt;
  if ( !v51 )
    goto LABEL_94;
  if ( (v51->fields.type & 0xFFFFFFFE) == 2 )
  {
    getRewardImgObj = (UnityEngine_GameObject_o *)this->fields.itemIcon;
    if ( !getRewardImgObj )
      goto LABEL_94;
    ItemIconComponent__SetItemImage((ItemIconComponent_o *)getRewardImgObj, v5->fields.iconId, 0LL);
  }
  getRewardImgObj = (UnityEngine_GameObject_o *)this->fields.numDispctr;
  if ( !getRewardImgObj )
    goto LABEL_94;
  ItemNumDispControl__InitEventAlphaAnim(
    (ItemNumDispControl_o *)getRewardImgObj,
    (System_Collections_Generic_List_GameObject__o *)v38,
    0LL);
  getRewardImgObj = (UnityEngine_GameObject_o *)this->fields.nameTextLabel;
  if ( !getRewardImgObj )
    goto LABEL_94;
  UICrossNarrowLabel__SetCrossNarrowText((UICrossNarrowLabel_o *)getRewardImgObj, v5->fields.nameTxt, 0LL);
  getRewardImgObj = (UnityEngine_GameObject_o *)this->fields.numTextLabel;
  if ( !getRewardImgObj )
    goto LABEL_94;
  UICrossNarrowLabel__SetCrossNarrowText((UICrossNarrowLabel_o *)getRewardImgObj, v5->fields.numTxt, 0LL);
  msgTextLabel = this->fields.msgTextLabel;
  getRewardImgObj = (UnityEngine_GameObject_o *)EventPointItemListViewItem__get_needPointTxt(v5, v53);
  if ( !msgTextLabel )
    goto LABEL_94;
  UILabel__set_text(msgTextLabel, (System_String_o *)getRewardImgObj, 0LL);
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
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
        getRewardImgObj = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))getRewardImgObj->klass[1]._1.implementedInterfaces)(
                                                        getRewardImgObj,
                                                        0LL,
                                                        1LL,
                                                        getRewardImgObj->klass[1]._1.interfaceOffsets);
        if ( !isGetReward )
          return;
        v56 = v5->fields.eventRewardEnt;
        if ( v56 )
        {
          getSprite = this->fields.getSprite;
          if ( v56->fields.bgImageId < 1 )
          {
            if ( (WORD1(EventPointItemListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
              && !EventPointItemListViewItemDraw_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(EventPointItemListViewItemDraw_TypeInfo);
              v56 = v5->fields.eventRewardEnt;
              if ( !v56 )
                goto LABEL_94;
            }
            GET_SPRITE_NAME = EventPointItemListViewItemDraw_TypeInfo->static_fields->GET_SPRITE_NAME;
            eventId = v56->fields.eventId;
            v62 = System_Int32__ToString((int32_t)&eventId, 0LL);
            v60 = System_String__Concat_44580072(GET_SPRITE_NAME, v62, (System_String_o *)StringLiteral_982/*"00"*/, 0LL);
          }
          else
          {
            if ( (WORD1(EventPointItemListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
              && !EventPointItemListViewItemDraw_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(EventPointItemListViewItemDraw_TypeInfo);
              v56 = v5->fields.eventRewardEnt;
              if ( !v56 )
                goto LABEL_94;
            }
            v58 = EventPointItemListViewItemDraw_TypeInfo->static_fields->GET_SPRITE_NAME;
            eventId = v56->fields.bgImageId;
            v59 = System_Int32__ToString((int32_t)&eventId, 0LL);
            v60 = System_String__Concat_44577788(v58, v59, 0LL);
          }
          v63 = v60;
          if ( (BYTE3(EventRewardRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
          }
          EventRewardRootComponent__setRewardInfoImg(getSprite, v63, 0LL);
          getRewardImgObj = this->fields.getRewardImgObj;
          if ( getRewardImgObj )
          {
            UnityEngine_GameObject__SetActive(getRewardImgObj, 1, 0LL);
            return;
          }
        }
      }
    }
LABEL_94:
    sub_B5D69C(getRewardImgObj, item);
  }
}