void __fastcall EventPointItemListViewItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v11; // x1
  struct EventPointItemListViewItemDraw_StaticFields *v12; // x0
  System_Int32_array **v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_41878C2 & 1) == 0 )
  {
    sub_B2C35C(&EventPointItemListViewItemDraw_TypeInfo, v1);
    sub_B2C35C(&StringLiteral_18580/*"event_rewardpoint_"*/, v8);
    sub_B2C35C(&StringLiteral_18576/*"event_rewardget_"*/, v9);
    byte_41878C2 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)EventPointItemListViewItemDraw_TypeInfo->static_fields;
  v11 = (System_Int32_array **)StringLiteral_18580/*"event_rewardpoint_"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_18580/*"event_rewardpoint_"*/;
  sub_B2C2F8(static_fields, v11, v2, v3, v4, v5, v6, v7);
  v12 = EventPointItemListViewItemDraw_TypeInfo->static_fields;
  v13 = (System_Int32_array **)StringLiteral_18576/*"event_rewardget_"*/;
  v12->GET_SPRITE_NAME = (struct System_String_o *)StringLiteral_18576/*"event_rewardget_"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v12->GET_SPRITE_NAME, v13, v14, v15, v16, v17, v18, v19);
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

  if ( (byte_41878C0 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_41878C0 = 1;
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
          sub_B2C2F8(
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
      sub_B2C434(v4, v5);
    }
    mSpriteName = v20->fields.mSpriteName;
    this->fields.baseSpriteName = mSpriteName;
    sub_B2C2F8(
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  UnityEngine_GameObject_o *getRewardImgObj; // x0
  UnityEngine_Object_o *baseSprite; // x21
  struct EventRewardEntity_o *eventRewardEnt; // x8
  UISprite_o *v17; // x21
  System_String_o *v18; // x22
  System_String_o *v19; // x0
  System_String_o *v20; // x0
  System_String_o *BOARD_SPRITE_BASE_NAME; // x22
  System_String_o *v22; // x0
  System_String_o *v23; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v24; // x21
  struct EventRewardEntity_o *v25; // x8
  unsigned int *giftEnt; // x8
  int v27; // w8
  int32_t v28; // w2
  int32_t rewardNum; // w3
  struct EventPointBuffEntity_o *eventPointBuffEntity; // x8
  struct GiftEntity_o *v31; // x8
  unsigned int type; // w8
  UnityEngine_Object_o *rarityInfo; // x22
  UnityEngine_Object_o *countLbInfo; // x22
  struct UnityEngine_GameObject_o *v35; // x1
  const MethodInfo_2EF4460 *v36; // x2
  struct EventRewardEntity_o *v37; // x8
  UILabel_o *msgTextLabel; // x21
  const MethodInfo *v39; // x1
  UnityEngine_Object_o *baseButton; // x21
  _BOOL4 isGetReward; // w21
  struct EventRewardEntity_o *v42; // x8
  UISprite_o *getSprite; // x21
  System_String_o *v44; // x20
  System_String_o *v45; // x0
  System_String_o *v46; // x0
  System_String_o *GET_SPRITE_NAME; // x20
  System_String_o *v48; // x0
  System_String_o *v49; // x20
  int32_t eventId; // [xsp+Ch] [xbp-24h] BYREF

  v5 = item;
  if ( (byte_41878C1 & 1) == 0 )
  {
    sub_B2C35C(&EventPointItemListViewItemDraw_TypeInfo, item);
    sub_B2C35C(&EventRewardRootComponent_TypeInfo, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__Add__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__Clear__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject___ctor__, v10);
    sub_B2C35C(&System_Collections_Generic_List_GameObject__TypeInfo, v11);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v12);
    sub_B2C35C(&StringLiteral_962/*"00"*/, v13);
    byte_41878C1 = 1;
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
      v17 = this->fields.baseSprite;
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
        v22 = System_Int32__ToString((int32_t)&eventId, 0LL);
        v20 = System_String__Concat_44307816(BOARD_SPRITE_BASE_NAME, v22, (System_String_o *)StringLiteral_962/*"00"*/, 0LL);
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
        v18 = EventPointItemListViewItemDraw_TypeInfo->static_fields->BOARD_SPRITE_BASE_NAME;
        eventId = eventRewardEnt->fields.bgImageId;
        v19 = System_Int32__ToString((int32_t)&eventId, 0LL);
        v20 = System_String__Concat_44305532(v18, v19, 0LL);
      }
      v23 = v20;
      if ( (BYTE3(EventRewardRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
      }
      EventRewardRootComponent__setRewardInfoImg(v17, v23, 0LL);
    }
  }
  v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v24,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_GameObject___ctor__);
  if ( !v24 )
    goto LABEL_94;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)v24,
    (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_GameObject__Clear__);
  v25 = v5->fields.eventRewardEnt;
  if ( !v25 )
    goto LABEL_94;
  if ( v25->fields.type == 1 )
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
        v27 = giftEnt[7];
        if ( v27 <= 1 )
          v28 = -1;
        else
          v28 = v27;
        ItemIconComponent__SetItemImage_27396332((ItemIconComponent_o *)getRewardImgObj, (int32_t)item, v28, 0LL);
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
    v31 = v5->fields.giftEnt;
    if ( v31 && (type = v31->fields.type, type <= 7) && ((1 << type) & 0xC2) != 0 )
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
        v24,
        (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.rarityInfo,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_GameObject__Add__);
      v35 = this->fields.countLbInfo;
      v36 = (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_GameObject__Add__;
    }
    else
    {
      v35 = this->fields.countLbInfo;
      v36 = (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_GameObject__Add__;
    }
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v24,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v35,
      v36);
  }
LABEL_63:
  v37 = v5->fields.eventRewardEnt;
  if ( !v37 )
    goto LABEL_94;
  if ( (v37->fields.type & 0xFFFFFFFE) == 2 )
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
    (System_Collections_Generic_List_GameObject__o *)v24,
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
  getRewardImgObj = (UnityEngine_GameObject_o *)EventPointItemListViewItem__get_needPointTxt(v5, v39);
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
        v42 = v5->fields.eventRewardEnt;
        if ( v42 )
        {
          getSprite = this->fields.getSprite;
          if ( v42->fields.bgImageId < 1 )
          {
            if ( (WORD1(EventPointItemListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
              && !EventPointItemListViewItemDraw_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(EventPointItemListViewItemDraw_TypeInfo);
              v42 = v5->fields.eventRewardEnt;
              if ( !v42 )
                goto LABEL_94;
            }
            GET_SPRITE_NAME = EventPointItemListViewItemDraw_TypeInfo->static_fields->GET_SPRITE_NAME;
            eventId = v42->fields.eventId;
            v48 = System_Int32__ToString((int32_t)&eventId, 0LL);
            v46 = System_String__Concat_44307816(GET_SPRITE_NAME, v48, (System_String_o *)StringLiteral_962/*"00"*/, 0LL);
          }
          else
          {
            if ( (WORD1(EventPointItemListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
              && !EventPointItemListViewItemDraw_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(EventPointItemListViewItemDraw_TypeInfo);
              v42 = v5->fields.eventRewardEnt;
              if ( !v42 )
                goto LABEL_94;
            }
            v44 = EventPointItemListViewItemDraw_TypeInfo->static_fields->GET_SPRITE_NAME;
            eventId = v42->fields.bgImageId;
            v45 = System_Int32__ToString((int32_t)&eventId, 0LL);
            v46 = System_String__Concat_44305532(v44, v45, 0LL);
          }
          v49 = v46;
          if ( (BYTE3(EventRewardRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
          }
          EventRewardRootComponent__setRewardInfoImg(getSprite, v49, 0LL);
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
    sub_B2C434(getRewardImgObj, item);
  }
}