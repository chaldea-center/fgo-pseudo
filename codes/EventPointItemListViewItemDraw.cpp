void __fastcall EventPointItemListViewItemDraw___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v8; // x1
  struct EventPointItemListViewItemDraw_StaticFields *v9; // x0
  System_Int32_array **v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_4351EAE & 1) == 0 )
  {
    sub_B70694(&EventPointItemListViewItemDraw_TypeInfo);
    sub_B70694(&StringLiteral_18861/*"event_rewardpoint_"*/);
    sub_B70694(&StringLiteral_18857/*"event_rewardget_"*/);
    byte_4351EAE = 1;
  }
  static_fields = (BattleServantConfConponent_o *)EventPointItemListViewItemDraw_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_18861/*"event_rewardpoint_"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_18861/*"event_rewardpoint_"*/;
  sub_B70630(static_fields, v8, v1, v2, v3, v4, v5, v6);
  v9 = EventPointItemListViewItemDraw_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_18857/*"event_rewardget_"*/;
  v9->GET_SPRITE_NAME = (struct System_String_o *)StringLiteral_18857/*"event_rewardget_"*/;
  sub_B70630((BattleServantConfConponent_o *)&v9->GET_SPRITE_NAME, v10, v11, v12, v13, v14, v15, v16);
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
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  struct UISprite_o *v12; // x8
  struct UIAtlas_o *mAtlas; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  struct UISprite_o *v20; // x8
  struct System_String_o *mSpriteName; // x1

  if ( (byte_4351EAC & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4351EAC = 1;
  }
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v4 = UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL);
  if ( v4 )
  {
    v12 = this->fields.baseSprite;
    if ( !v12
      || (mAtlas = v12->fields.mAtlas,
          this->fields.baseAtlas = mAtlas,
          sub_B70630(
            (BattleServantConfConponent_o *)&this->fields.baseAtlas,
            (System_Int32_array **)mAtlas,
            v6,
            v7,
            v8,
            v9,
            v10,
            v11),
          (v20 = this->fields.baseSprite) == 0LL) )
    {
      sub_B7076C(v4, v5);
    }
    mSpriteName = v20->fields.mSpriteName;
    this->fields.baseSpriteName = mSpriteName;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.baseSpriteName,
      (System_Int32_array **)mSpriteName,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
  }
}


void __fastcall EventPointItemListViewItemDraw__SetItem(
        EventPointItemListViewItemDraw_o *this,
        EventPointItemListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  EventPointItemListViewItem_o *v5; // x20
  UnityEngine_GameObject_o *getRewardImgObj; // x0
  UnityEngine_Object_o *baseSprite; // x21
  struct EventRewardEntity_o *eventRewardEnt; // x8
  UISprite_o *v10; // x21
  System_String_o *v11; // x22
  System_String_o *v12; // x0
  System_String_o *v13; // x0
  System_String_o *BOARD_SPRITE_BASE_NAME; // x22
  System_String_o *v15; // x0
  System_String_o *v16; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v17; // x21
  struct EventRewardEntity_o *v18; // x8
  unsigned int *giftEnt; // x8
  int v20; // w8
  int32_t v21; // w2
  int32_t rewardNum; // w3
  struct EventPointBuffEntity_o *eventPointBuffEntity; // x8
  struct GiftEntity_o *v24; // x8
  unsigned int type; // w8
  UnityEngine_Object_o *rarityInfo; // x22
  UnityEngine_Object_o *countLbInfo; // x22
  struct UnityEngine_GameObject_o *v28; // x1
  const MethodInfo_3025688 *v29; // x2
  struct EventRewardEntity_o *v30; // x8
  UILabel_o *msgTextLabel; // x21
  const MethodInfo *v32; // x1
  UnityEngine_Object_o *baseButton; // x21
  _BOOL4 isGetReward; // w21
  struct EventRewardEntity_o *v35; // x8
  UISprite_o *getSprite; // x21
  System_String_o *v37; // x20
  System_String_o *v38; // x0
  System_String_o *v39; // x0
  System_String_o *GET_SPRITE_NAME; // x20
  System_String_o *v41; // x0
  System_String_o *v42; // x20
  int32_t eventId; // [xsp+Ch] [xbp-24h] BYREF

  v5 = item;
  if ( (byte_4351EAD & 1) == 0 )
  {
    sub_B70694(&EventPointItemListViewItemDraw_TypeInfo);
    sub_B70694(&EventRewardRootComponent_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_B70694(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_B70694(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&StringLiteral_987/*"00"*/);
    byte_4351EAD = 1;
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
      v10 = this->fields.baseSprite;
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
        v15 = System_Int32__ToString((int32_t)&eventId, 0LL);
        v13 = System_String__Concat_44760452(BOARD_SPRITE_BASE_NAME, v15, (System_String_o *)StringLiteral_987/*"00"*/, 0LL);
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
        v11 = EventPointItemListViewItemDraw_TypeInfo->static_fields->BOARD_SPRITE_BASE_NAME;
        eventId = eventRewardEnt->fields.bgImageId;
        v12 = System_Int32__ToString((int32_t)&eventId, 0LL);
        v13 = System_String__Concat_44758168(v11, v12, 0LL);
      }
      v16 = v13;
      if ( (BYTE3(EventRewardRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
      }
      EventRewardRootComponent__setRewardInfoImg(v10, v16, 0LL);
    }
  }
  v17 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v17,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  if ( !v17 )
    goto LABEL_94;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)v17,
    (const MethodInfo_3025A90 *)Method_System_Collections_Generic_List_GameObject__Clear__);
  v18 = v5->fields.eventRewardEnt;
  if ( !v18 )
    goto LABEL_94;
  if ( v18->fields.type == 1 )
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
        v20 = giftEnt[7];
        if ( v20 <= 1 )
          v21 = -1;
        else
          v21 = v20;
        ItemIconComponent__SetItemImage_27826684((ItemIconComponent_o *)getRewardImgObj, (int32_t)item, v21, 0LL);
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
    v24 = v5->fields.giftEnt;
    if ( v24 && (type = v24->fields.type, type <= 7) && ((1 << type) & 0xC2) != 0 )
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
        v17,
        (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.rarityInfo,
        (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_GameObject__Add__);
      v28 = this->fields.countLbInfo;
      v29 = (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_GameObject__Add__;
    }
    else
    {
      v28 = this->fields.countLbInfo;
      v29 = (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_GameObject__Add__;
    }
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v17,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v28,
      v29);
  }
LABEL_63:
  v30 = v5->fields.eventRewardEnt;
  if ( !v30 )
    goto LABEL_94;
  if ( (v30->fields.type & 0xFFFFFFFE) == 2 )
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
    (System_Collections_Generic_List_GameObject__o *)v17,
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
  getRewardImgObj = (UnityEngine_GameObject_o *)EventPointItemListViewItem__get_needPointTxt(v5, v32);
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
        v35 = v5->fields.eventRewardEnt;
        if ( v35 )
        {
          getSprite = this->fields.getSprite;
          if ( v35->fields.bgImageId < 1 )
          {
            if ( (WORD1(EventPointItemListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
              && !EventPointItemListViewItemDraw_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(EventPointItemListViewItemDraw_TypeInfo);
              v35 = v5->fields.eventRewardEnt;
              if ( !v35 )
                goto LABEL_94;
            }
            GET_SPRITE_NAME = EventPointItemListViewItemDraw_TypeInfo->static_fields->GET_SPRITE_NAME;
            eventId = v35->fields.eventId;
            v41 = System_Int32__ToString((int32_t)&eventId, 0LL);
            v39 = System_String__Concat_44760452(GET_SPRITE_NAME, v41, (System_String_o *)StringLiteral_987/*"00"*/, 0LL);
          }
          else
          {
            if ( (WORD1(EventPointItemListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
              && !EventPointItemListViewItemDraw_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(EventPointItemListViewItemDraw_TypeInfo);
              v35 = v5->fields.eventRewardEnt;
              if ( !v35 )
                goto LABEL_94;
            }
            v37 = EventPointItemListViewItemDraw_TypeInfo->static_fields->GET_SPRITE_NAME;
            eventId = v35->fields.bgImageId;
            v38 = System_Int32__ToString((int32_t)&eventId, 0LL);
            v39 = System_String__Concat_44758168(v37, v38, 0LL);
          }
          v42 = v39;
          if ( (BYTE3(EventRewardRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
          }
          EventRewardRootComponent__setRewardInfoImg(getSprite, v42, 0LL);
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
    sub_B7076C(getRewardImgObj, item);
  }
}