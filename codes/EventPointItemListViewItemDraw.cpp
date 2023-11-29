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

  if ( (byte_40FAC31 & 1) == 0 )
  {
    sub_B16FFC(&EventPointItemListViewItemDraw_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_18510, v8);
    sub_B16FFC(&StringLiteral_18507, v9);
    byte_40FAC31 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)EventPointItemListViewItemDraw_TypeInfo->static_fields;
  v11 = (System_Int32_array **)StringLiteral_18510;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_18510;
  sub_B16F98(static_fields, v11, v2, v3, v4, v5, v6, v7);
  v12 = EventPointItemListViewItemDraw_TypeInfo->static_fields;
  v13 = (System_Int32_array **)StringLiteral_18507;
  v12->GET_SPRITE_NAME = (struct System_String_o *)StringLiteral_18507;
  sub_B16F98((BattleServantConfConponent_o *)&v12->GET_SPRITE_NAME, v13, v14, v15, v16, v17, v18, v19);
}


void __fastcall EventPointItemListViewItemDraw___ctor(EventPointItemListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventPointItemListViewItemDraw__Awake(EventPointItemListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *baseSprite; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  struct UISprite_o *v10; // x8
  struct UIAtlas_o *mAtlas; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  struct UISprite_o *v18; // x8
  struct System_String_o *mSpriteName; // x1

  if ( (byte_40FAC2F & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FAC2F = 1;
  }
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL) )
  {
    v10 = this->fields.baseSprite;
    if ( !v10
      || (mAtlas = v10->fields.mAtlas,
          this->fields.baseAtlas = mAtlas,
          sub_B16F98(
            (BattleServantConfConponent_o *)&this->fields.baseAtlas,
            (System_Int32_array **)mAtlas,
            v4,
            v5,
            v6,
            v7,
            v8,
            v9),
          (v18 = this->fields.baseSprite) == 0LL) )
    {
      sub_B170D4();
    }
    mSpriteName = v18->fields.mSpriteName;
    this->fields.baseSpriteName = mSpriteName;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.baseSpriteName,
      (System_Int32_array **)mSpriteName,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
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
  __int64 v18; // x3
  __int64 v19; // x4
  struct EventRewardEntity_o *eventRewardEnt; // x8
  UISprite_o *v21; // x21
  System_String_o *v22; // x22
  System_String_o *v23; // x0
  System_String_o *v24; // x0
  System_String_o *BOARD_SPRITE_BASE_NAME; // x22
  System_String_o *v26; // x0
  System_String_o *v27; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v28; // x21
  struct EventRewardEntity_o *v29; // x8
  struct GiftEntity_o *giftEnt; // x8
  int32_t prioredIconId; // w1
  ItemIconComponent_o *itemIcon; // x0
  int num; // w8
  int32_t v34; // w2
  int rewardNum; // w3
  ItemIconComponent_o *v36; // x0
  int32_t v37; // w1
  int32_t type; // w1
  struct EventPointBuffEntity_o *eventPointBuffEntity; // x8
  ItemIconComponent_o *v40; // x0
  struct GiftEntity_o *v41; // x8
  unsigned int v42; // w8
  UnityEngine_Object_o *rarityInfo; // x22
  UnityEngine_Object_o *countLbInfo; // x22
  struct UnityEngine_GameObject_o *v45; // x1
  const MethodInfo_2F25CD8 *v46; // x2
  ItemIconComponent_o *v47; // x0
  struct EventRewardEntity_o *v48; // x8
  ItemIconComponent_o *v49; // x0
  ItemNumDispControl_o *numDispctr; // x0
  UICrossNarrowLabel_o *nameTextLabel; // x0
  UICrossNarrowLabel_o *numTextLabel; // x0
  UILabel_o *msgTextLabel; // x21
  const MethodInfo *v54; // x1
  System_String_o *needPointTxt; // x0
  UnityEngine_Object_o *baseButton; // x21
  UICommonButton_o *v57; // x0
  _BOOL4 isGetReward; // w21
  struct UICommonButton_o *v59; // x0
  struct EventRewardEntity_o *v60; // x8
  UISprite_o *getSprite; // x21
  System_String_o *v62; // x20
  System_String_o *v63; // x0
  System_String_o *v64; // x0
  System_String_o *GET_SPRITE_NAME; // x20
  System_String_o *v66; // x0
  System_String_o *v67; // x20
  UnityEngine_GameObject_o *v68; // x0
  int32_t eventId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_40FAC30 & 1) == 0 )
  {
    sub_B16FFC(&EventPointItemListViewItemDraw_TypeInfo, item);
    sub_B16FFC(&EventRewardRootComponent_TypeInfo, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__Add__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__Clear__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject___ctor__, v10);
    sub_B16FFC(&System_Collections_Generic_List_GameObject__TypeInfo, v11);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v12);
    sub_B16FFC(&StringLiteral_960, v13);
    byte_40FAC30 = 1;
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
  if ( UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL) )
  {
    eventRewardEnt = item->fields.eventRewardEnt;
    if ( !eventRewardEnt )
      goto LABEL_94;
    if ( eventRewardEnt->fields.eventId >= 1 )
    {
      v21 = this->fields.baseSprite;
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
        v26 = System_Int32__ToString((int32_t)&eventId, 0LL);
        v24 = System_String__Concat_43746016(BOARD_SPRITE_BASE_NAME, v26, (System_String_o *)StringLiteral_960, 0LL);
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
        v22 = EventPointItemListViewItemDraw_TypeInfo->static_fields->BOARD_SPRITE_BASE_NAME;
        eventId = eventRewardEnt->fields.bgImageId;
        v23 = System_Int32__ToString((int32_t)&eventId, 0LL);
        v24 = System_String__Concat_43743732(v22, v23, 0LL);
      }
      v27 = v24;
      if ( (BYTE3(EventRewardRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
      }
      EventRewardRootComponent__setRewardInfoImg(v21, v27, 0LL);
    }
  }
  v28 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_GameObject__TypeInfo,
                                                                                                  v16,
                                                                                                  v17,
                                                                                                  v18,
                                                                                                  v19);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v28,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  if ( !v28 )
    goto LABEL_94;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)v28,
    (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_GameObject__Clear__);
  v29 = item->fields.eventRewardEnt;
  if ( !v29 )
    goto LABEL_94;
  if ( v29->fields.type == 1 )
  {
    giftEnt = item->fields.giftEnt;
    if ( giftEnt )
    {
      prioredIconId = giftEnt->fields.prioredIconId;
      if ( prioredIconId >= 1 )
      {
        itemIcon = this->fields.itemIcon;
        if ( !itemIcon )
          goto LABEL_94;
        num = giftEnt->fields.num;
        if ( num <= 1 )
          v34 = -1;
        else
          v34 = num;
        ItemIconComponent__SetItemImage_28930192(itemIcon, prioredIconId, v34, 0LL);
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
            v40 = this->fields.itemIcon;
            if ( !v40 )
              goto LABEL_94;
            ItemIconComponent__SetEventPointBuffImage(
              v40,
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
      v47 = this->fields.itemIcon;
      if ( !v47 )
        goto LABEL_94;
      ItemIconComponent__SetGift(v47, type, item->fields.rewardObjectId, -1, 0, 0LL);
      goto LABEL_63;
    }
    v36 = this->fields.itemIcon;
    if ( giftEnt )
    {
      v37 = giftEnt->fields.type;
      if ( !v36 )
        goto LABEL_94;
    }
    else
    {
      v37 = 0;
      if ( !v36 )
        goto LABEL_94;
    }
    ItemIconComponent__SetGiftDesignSize(v36, v37, item->fields.rewardObjectId, rewardNum, 0LL);
    v41 = item->fields.giftEnt;
    if ( v41 && (v42 = v41->fields.type, v42 <= 7) && ((1 << v42) & 0xC2) != 0 )
    {
      rarityInfo = (UnityEngine_Object_o *)this->fields.rarityInfo;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Inequality(rarityInfo, 0LL, 0LL) )
        goto LABEL_63;
      countLbInfo = (UnityEngine_Object_o *)this->fields.countLbInfo;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Inequality(countLbInfo, 0LL, 0LL) )
        goto LABEL_63;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v28,
        (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.rarityInfo,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_GameObject__Add__);
      v45 = this->fields.countLbInfo;
      v46 = (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_GameObject__Add__;
    }
    else
    {
      v45 = this->fields.countLbInfo;
      v46 = (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_GameObject__Add__;
    }
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v28,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v45,
      v46);
  }
LABEL_63:
  v48 = item->fields.eventRewardEnt;
  if ( !v48 )
    goto LABEL_94;
  if ( (v48->fields.type & 0xFFFFFFFE) == 2 )
  {
    v49 = this->fields.itemIcon;
    if ( !v49 )
      goto LABEL_94;
    ItemIconComponent__SetItemImage(v49, item->fields.iconId, 0LL);
  }
  numDispctr = this->fields.numDispctr;
  if ( !numDispctr )
    goto LABEL_94;
  ItemNumDispControl__InitEventAlphaAnim(numDispctr, (System_Collections_Generic_List_GameObject__o *)v28, 0LL);
  nameTextLabel = this->fields.nameTextLabel;
  if ( !nameTextLabel )
    goto LABEL_94;
  UICrossNarrowLabel__SetCrossNarrowText(nameTextLabel, item->fields.nameTxt, 0LL);
  numTextLabel = this->fields.numTextLabel;
  if ( !numTextLabel )
    goto LABEL_94;
  UICrossNarrowLabel__SetCrossNarrowText(numTextLabel, item->fields.numTxt, 0LL);
  msgTextLabel = this->fields.msgTextLabel;
  needPointTxt = EventPointItemListViewItem__get_needPointTxt(item, v54);
  if ( !msgTextLabel )
    goto LABEL_94;
  UILabel__set_text(msgTextLabel, needPointTxt, 0LL);
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
  {
    v57 = this->fields.baseButton;
    if ( v57 )
    {
      isGetReward = item->fields.isGetReward;
      UICommonButton__SetColliderEnable(v57, 1, 1, 0LL);
      v59 = this->fields.baseButton;
      if ( v59 )
      {
        ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, Il2CppMethodPointer))v59->klass->vtable._14_SetState.method)(
          v59,
          0LL,
          1LL,
          v59->klass->vtable._15_OnPress.methodPtr);
        if ( !isGetReward )
          return;
        v60 = item->fields.eventRewardEnt;
        if ( v60 )
        {
          getSprite = this->fields.getSprite;
          if ( v60->fields.bgImageId < 1 )
          {
            if ( (WORD1(EventPointItemListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
              && !EventPointItemListViewItemDraw_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(EventPointItemListViewItemDraw_TypeInfo);
              v60 = item->fields.eventRewardEnt;
              if ( !v60 )
                goto LABEL_94;
            }
            GET_SPRITE_NAME = EventPointItemListViewItemDraw_TypeInfo->static_fields->GET_SPRITE_NAME;
            eventId = v60->fields.eventId;
            v66 = System_Int32__ToString((int32_t)&eventId, 0LL);
            v64 = System_String__Concat_43746016(GET_SPRITE_NAME, v66, (System_String_o *)StringLiteral_960, 0LL);
          }
          else
          {
            if ( (WORD1(EventPointItemListViewItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
              && !EventPointItemListViewItemDraw_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(EventPointItemListViewItemDraw_TypeInfo);
              v60 = item->fields.eventRewardEnt;
              if ( !v60 )
                goto LABEL_94;
            }
            v62 = EventPointItemListViewItemDraw_TypeInfo->static_fields->GET_SPRITE_NAME;
            eventId = v60->fields.bgImageId;
            v63 = System_Int32__ToString((int32_t)&eventId, 0LL);
            v64 = System_String__Concat_43743732(v62, v63, 0LL);
          }
          v67 = v64;
          if ( (BYTE3(EventRewardRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
          }
          EventRewardRootComponent__setRewardInfoImg(getSprite, v67, 0LL);
          v68 = this->fields.getRewardImgObj;
          if ( v68 )
          {
            UnityEngine_GameObject__SetActive(v68, 1, 0LL);
            return;
          }
        }
      }
    }
LABEL_94:
    sub_B170D4();
  }
}