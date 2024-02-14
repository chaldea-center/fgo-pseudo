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

  if ( (byte_4214D66 & 1) == 0 )
  {
    sub_B0D8A4(&EventPointItemListViewItemDraw_TypeInfo, v1);
    sub_B0D8A4(&StringLiteral_18638/*"event_rewardpoint_"*/, v8);
    sub_B0D8A4(&StringLiteral_18634/*"event_rewardget_"*/, v9);
    byte_4214D66 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)EventPointItemListViewItemDraw_TypeInfo->static_fields;
  v11 = (System_Int32_array **)StringLiteral_18638/*"event_rewardpoint_"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_18638/*"event_rewardpoint_"*/;
  sub_B0D840(static_fields, v11, v2, v3, v4, v5, v6, v7);
  v12 = EventPointItemListViewItemDraw_TypeInfo->static_fields;
  v13 = (System_Int32_array **)StringLiteral_18634/*"event_rewardget_"*/;
  v12->GET_SPRITE_NAME = (struct System_String_o *)StringLiteral_18634/*"event_rewardget_"*/;
  sub_B0D840((BattleServantConfConponent_o *)&v12->GET_SPRITE_NAME, v13, v14, v15, v16, v17, v18, v19);
}


void __fastcall EventPointItemListViewItemDraw___ctor(EventPointItemListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventPointItemListViewItemDraw__Awake(EventPointItemListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *baseSprite; // x20
  _BOOL8 v4; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  struct UISprite_o *v11; // x8
  struct UIAtlas_o *mAtlas; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  struct UISprite_o *v19; // x8
  struct System_String_o *mSpriteName; // x1

  if ( (byte_4214D64 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4214D64 = 1;
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
    v11 = this->fields.baseSprite;
    if ( !v11
      || (mAtlas = v11->fields.mAtlas,
          this->fields.baseAtlas = mAtlas,
          sub_B0D840(
            (BattleServantConfConponent_o *)&this->fields.baseAtlas,
            (System_Int32_array **)mAtlas,
            v5,
            v6,
            v7,
            v8,
            v9,
            v10),
          (v19 = this->fields.baseSprite) == 0LL) )
    {
      sub_B0D97C(v4);
    }
    mSpriteName = v19->fields.mSpriteName;
    this->fields.baseSpriteName = mSpriteName;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.baseSpriteName,
      (System_Int32_array **)mSpriteName,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
  }
}


void __fastcall EventPointItemListViewItemDraw__SetItem(
        EventPointItemListViewItemDraw_o *this,
        EventPointItemListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  UnityEngine_GameObject_o *getRewardImgObj; // x0
  UnityEngine_Object_o *baseSprite; // x21
  __int64 v16; // x1
  __int64 v17; // x2
  struct EventRewardEntity_o *eventRewardEnt; // x8
  UISprite_o *v19; // x21
  System_String_o *v20; // x22
  System_String_o *v21; // x0
  System_String_o *v22; // x0
  System_String_o *BOARD_SPRITE_BASE_NAME; // x22
  System_String_o *v24; // x0
  System_String_o *v25; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v26; // x21
  struct EventRewardEntity_o *v27; // x8
  struct GiftEntity_o *giftEnt; // x8
  int32_t prioredIconId; // w1
  int num; // w8
  int32_t v31; // w2
  int rewardNum; // w3
  int32_t v33; // w1
  int32_t type; // w1
  struct EventPointBuffEntity_o *eventPointBuffEntity; // x8
  struct GiftEntity_o *v36; // x8
  unsigned int v37; // w8
  UnityEngine_Object_o *rarityInfo; // x22
  UnityEngine_Object_o *countLbInfo; // x22
  struct UnityEngine_GameObject_o *v40; // x1
  const MethodInfo_2FC56E8 *v41; // x2
  struct EventRewardEntity_o *v42; // x8
  UILabel_o *msgTextLabel; // x21
  const MethodInfo *v44; // x1
  UnityEngine_Object_o *baseButton; // x21
  _BOOL4 isGetReward; // w21
  struct EventRewardEntity_o *v47; // x8
  UISprite_o *getSprite; // x21
  System_String_o *v49; // x20
  System_String_o *v50; // x0
  System_String_o *v51; // x0
  System_String_o *GET_SPRITE_NAME; // x20
  System_String_o *v53; // x0
  System_String_o *v54; // x20
  int32_t eventId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4214D65 & 1) == 0 )
  {
    sub_B0D8A4(&EventPointItemListViewItemDraw_TypeInfo, item);
    sub_B0D8A4(&EventRewardRootComponent_TypeInfo, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__Add__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__Clear__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject___ctor__, v10);
    sub_B0D8A4(&System_Collections_Generic_List_GameObject__TypeInfo, v11);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v12);
    sub_B0D8A4(&StringLiteral_969/*"00"*/, v13);
    byte_4214D65 = 1;
  }
  eventId = 0;
  if ( !item || !mode )
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
    eventRewardEnt = item->fields.eventRewardEnt;
    if ( !eventRewardEnt )
      goto LABEL_94;
    if ( eventRewardEnt->fields.eventId >= 1 )
    {
      v19 = this->fields.baseSprite;
      if ( eventRewardEnt->fields.bgImageId < 1 )
      {
        if ( (WORD1(EventPointItemListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !EventPointItemListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventPointItemListViewItemDraw_TypeInfo);
          eventRewardEnt = item->fields.eventRewardEnt;
          if ( !eventRewardEnt )
            goto LABEL_94;
        }
        BOARD_SPRITE_BASE_NAME = EventPointItemListViewItemDraw_TypeInfo->static_fields->BOARD_SPRITE_BASE_NAME;
        eventId = eventRewardEnt->fields.eventId;
        v24 = System_Int32__ToString((int32_t)&eventId, 0LL);
        v22 = System_String__Concat_43852188(BOARD_SPRITE_BASE_NAME, v24, (System_String_o *)StringLiteral_969/*"00"*/, 0LL);
      }
      else
      {
        if ( (WORD1(EventPointItemListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !EventPointItemListViewItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(EventPointItemListViewItemDraw_TypeInfo);
          eventRewardEnt = item->fields.eventRewardEnt;
          if ( !eventRewardEnt )
            goto LABEL_94;
        }
        v20 = EventPointItemListViewItemDraw_TypeInfo->static_fields->BOARD_SPRITE_BASE_NAME;
        eventId = eventRewardEnt->fields.bgImageId;
        v21 = System_Int32__ToString((int32_t)&eventId, 0LL);
        v22 = System_String__Concat_43849904(v20, v21, 0LL);
      }
      v25 = v22;
      if ( (BYTE3(EventRewardRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
      }
      EventRewardRootComponent__setRewardInfoImg(v19, v25, 0LL);
    }
  }
  v26 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_GameObject__TypeInfo,
                                                                                                  v16,
                                                                                                  v17);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v26,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  if ( !v26 )
    goto LABEL_94;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)v26,
    (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_GameObject__Clear__);
  v27 = item->fields.eventRewardEnt;
  if ( !v27 )
    goto LABEL_94;
  if ( v27->fields.type == 1 )
  {
    giftEnt = item->fields.giftEnt;
    if ( giftEnt )
    {
      prioredIconId = giftEnt->fields.prioredIconId;
      if ( prioredIconId >= 1 )
      {
        getRewardImgObj = (UnityEngine_GameObject_o *)this->fields.itemIcon;
        if ( !getRewardImgObj )
          goto LABEL_94;
        num = giftEnt->fields.num;
        if ( num <= 1 )
          v31 = -1;
        else
          v31 = num;
        ItemIconComponent__SetItemImage_26857580((ItemIconComponent_o *)getRewardImgObj, prioredIconId, v31, 0LL);
        goto LABEL_63;
      }
    }
    rewardNum = item->fields.rewardNum;
    if ( rewardNum < 1 )
    {
      if ( giftEnt )
      {
        type = giftEnt->fields.type;
        if ( type == 12 )
        {
          eventPointBuffEntity = item->fields.eventPointBuffEntity;
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
          type = 12;
        }
      }
      else
      {
        type = 0;
      }
      getRewardImgObj = (UnityEngine_GameObject_o *)this->fields.itemIcon;
      if ( !getRewardImgObj )
        goto LABEL_94;
      ItemIconComponent__SetGift((ItemIconComponent_o *)getRewardImgObj, type, item->fields.rewardObjectId, -1, 0, 0LL);
      goto LABEL_63;
    }
    getRewardImgObj = (UnityEngine_GameObject_o *)this->fields.itemIcon;
    if ( giftEnt )
    {
      v33 = giftEnt->fields.type;
      if ( !getRewardImgObj )
        goto LABEL_94;
    }
    else
    {
      v33 = 0;
      if ( !getRewardImgObj )
        goto LABEL_94;
    }
    ItemIconComponent__SetGiftDesignSize(
      (ItemIconComponent_o *)getRewardImgObj,
      v33,
      item->fields.rewardObjectId,
      rewardNum,
      0LL);
    v36 = item->fields.giftEnt;
    if ( v36 && (v37 = v36->fields.type, v37 <= 7) && ((1 << v37) & 0xC2) != 0 )
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
        v26,
        (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.rarityInfo,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_GameObject__Add__);
      v40 = this->fields.countLbInfo;
      v41 = (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_GameObject__Add__;
    }
    else
    {
      v40 = this->fields.countLbInfo;
      v41 = (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_GameObject__Add__;
    }
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v26,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v40,
      v41);
  }
LABEL_63:
  v42 = item->fields.eventRewardEnt;
  if ( !v42 )
    goto LABEL_94;
  if ( (v42->fields.type & 0xFFFFFFFE) == 2 )
  {
    getRewardImgObj = (UnityEngine_GameObject_o *)this->fields.itemIcon;
    if ( !getRewardImgObj )
      goto LABEL_94;
    ItemIconComponent__SetItemImage((ItemIconComponent_o *)getRewardImgObj, item->fields.iconId, 0LL);
  }
  getRewardImgObj = (UnityEngine_GameObject_o *)this->fields.numDispctr;
  if ( !getRewardImgObj )
    goto LABEL_94;
  ItemNumDispControl__InitEventAlphaAnim(
    (ItemNumDispControl_o *)getRewardImgObj,
    (System_Collections_Generic_List_GameObject__o *)v26,
    0LL);
  getRewardImgObj = (UnityEngine_GameObject_o *)this->fields.nameTextLabel;
  if ( !getRewardImgObj )
    goto LABEL_94;
  UICrossNarrowLabel__SetCrossNarrowText((UICrossNarrowLabel_o *)getRewardImgObj, item->fields.nameTxt, 0LL);
  getRewardImgObj = (UnityEngine_GameObject_o *)this->fields.numTextLabel;
  if ( !getRewardImgObj )
    goto LABEL_94;
  UICrossNarrowLabel__SetCrossNarrowText((UICrossNarrowLabel_o *)getRewardImgObj, item->fields.numTxt, 0LL);
  msgTextLabel = this->fields.msgTextLabel;
  getRewardImgObj = (UnityEngine_GameObject_o *)EventPointItemListViewItem__get_needPointTxt(item, v44);
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
      isGetReward = item->fields.isGetReward;
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
        v47 = item->fields.eventRewardEnt;
        if ( v47 )
        {
          getSprite = this->fields.getSprite;
          if ( v47->fields.bgImageId < 1 )
          {
            if ( (WORD1(EventPointItemListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
              && !EventPointItemListViewItemDraw_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(EventPointItemListViewItemDraw_TypeInfo);
              v47 = item->fields.eventRewardEnt;
              if ( !v47 )
                goto LABEL_94;
            }
            GET_SPRITE_NAME = EventPointItemListViewItemDraw_TypeInfo->static_fields->GET_SPRITE_NAME;
            eventId = v47->fields.eventId;
            v53 = System_Int32__ToString((int32_t)&eventId, 0LL);
            v51 = System_String__Concat_43852188(GET_SPRITE_NAME, v53, (System_String_o *)StringLiteral_969/*"00"*/, 0LL);
          }
          else
          {
            if ( (WORD1(EventPointItemListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
              && !EventPointItemListViewItemDraw_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(EventPointItemListViewItemDraw_TypeInfo);
              v47 = item->fields.eventRewardEnt;
              if ( !v47 )
                goto LABEL_94;
            }
            v49 = EventPointItemListViewItemDraw_TypeInfo->static_fields->GET_SPRITE_NAME;
            eventId = v47->fields.bgImageId;
            v50 = System_Int32__ToString((int32_t)&eventId, 0LL);
            v51 = System_String__Concat_43849904(v49, v50, 0LL);
          }
          v54 = v51;
          if ( (BYTE3(EventRewardRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
          }
          EventRewardRootComponent__setRewardInfoImg(getSprite, v54, 0LL);
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
    sub_B0D97C(getRewardImgObj);
  }
}