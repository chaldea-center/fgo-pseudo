void EventPointItemListViewItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct EventPointItemListViewItemDraw_StaticFields *static_fields; // x0

  if ( (byte_4C31EDE & 1) == 0 )
  {
    sub_1C32C20(&EventPointItemListViewItemDraw_TypeInfo);
    sub_1C32C20(&StringLiteral_19266/*"event_rewardpoint_"*/);
    sub_1C32C20(&StringLiteral_19262/*"event_rewardget_"*/);
    byte_4C31EDE = 1;
  }
  EventPointItemListViewItemDraw_TypeInfo->static_fields->BOARD_SPRITE_BASE_NAME = (struct System_String_o *)StringLiteral_19266/*"event_rewardpoint_"*/;
  sub_1C32BC4(EventPointItemListViewItemDraw_TypeInfo->static_fields, StringLiteral_19266/*"event_rewardpoint_"*/);
  v1 = StringLiteral_19262/*"event_rewardget_"*/;
  static_fields = EventPointItemListViewItemDraw_TypeInfo->static_fields;
  static_fields->GET_SPRITE_NAME = (struct System_String_o *)StringLiteral_19262/*"event_rewardget_"*/;
  sub_1C32BC4(&static_fields->GET_SPRITE_NAME, v1);
}


void EventPointItemListViewItemDraw___ctor(EventPointItemListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void EventPointItemListViewItemDraw__Awake(EventPointItemListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *baseSprite; // x20
  __int64 v4; // x0
  struct UISprite_o *v5; // x8
  struct UIAtlas_o *mAtlas; // x1
  struct UISprite_o *v7; // x8
  struct System_String_o *mSpriteName; // x1

  if ( (byte_4C31EDC & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C31EDC = 1;
  }
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(baseSprite, 0, 0);
  if ( (v4 & 1) != 0 )
  {
    v5 = this->fields.baseSprite;
    if ( !v5
      || (mAtlas = v5->fields.mAtlas,
          this->fields.baseAtlas = mAtlas,
          v4 = sub_1C32BC4(&this->fields.baseAtlas, mAtlas),
          (v7 = this->fields.baseSprite) == 0) )
    {
      sub_1C32E7C(v4);
    }
    mSpriteName = v7->fields.mSpriteName;
    this->fields.baseSpriteName = mSpriteName;
    sub_1C32BC4(&this->fields.baseSpriteName, mSpriteName);
  }
}


void EventPointItemListViewItemDraw__SetItem(
        EventPointItemListViewItemDraw_o *this,
        EventPointItemListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
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
  struct GiftEntity_o *giftEnt; // x8
  int32_t prioredIconId; // w1
  int64_t num; // x8
  int64_t v24; // x2
  int rewardNum; // w3
  int32_t type; // w1
  struct GiftEntity_o *v27; // x8
  unsigned int v28; // w8
  UnityEngine_Object_o *rarityInfo; // x22
  UnityEngine_Object_o *v30; // x22
  Il2CppObject *v31; // x1
  __int64 v32; // x8
  _QWORD *v33; // x9
  __int64 v34; // x10
  __int64 v35; // x0
  Il2CppObject *countLbInfo; // x1
  int v37; // w10
  __int64 v38; // x8
  _QWORD *v39; // x9
  __int64 v40; // x10
  __int64 v41; // x0
  struct EventPointBuffEntity_o *eventPointBuffEntity; // x8
  struct EventRewardEntity_o *v43; // x8
  UILabel_o *msgTextLabel; // x21
  const MethodInfo *v45; // x1
  UnityEngine_Object_o *baseButton; // x21
  _BOOL4 isGetReward; // w21
  struct EventRewardEntity_o *v48; // x8
  int v49; // w22
  UISprite_o *getSprite; // x21
  System_String_o *v51; // x20
  System_String_o *v52; // x0
  System_String_o *v53; // x0
  System_String_o *v54; // x0
  System_String_o *v55; // x20
  int32_t eventId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C31EDD & 1) == 0 )
  {
    sub_1C32C20(&EventPointItemListViewItemDraw_TypeInfo);
    sub_1C32C20(&EventRewardRootComponent_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_1129/*"00"*/);
    byte_4C31EDD = 1;
  }
  eventId = 0;
  if ( !item || !mode )
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
    eventRewardEnt = item->fields.eventRewardEnt;
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
        eventRewardEnt = item->fields.eventRewardEnt;
      }
      v12 = **(System_String_o ***)(getRewardImgObj + 184);
      if ( bgImageId < 1 )
      {
        if ( !eventRewardEnt )
          goto LABEL_91;
        eventId = eventRewardEnt->fields.eventId;
        v15 = System_Int32__ToString((int32_t)&eventId, 0);
        v14 = System_String__Concat_63556792(v12, v15, (System_String_o *)StringLiteral_1129/*"00"*/, 0);
      }
      else
      {
        if ( !eventRewardEnt )
          goto LABEL_91;
        eventId = eventRewardEnt->fields.bgImageId;
        v13 = System_Int32__ToString((int32_t)&eventId, 0);
        v14 = System_String__Concat_63518544(v12, v13, 0);
      }
      v16 = v14;
      if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
      EventRewardRootComponent__setRewardInfoImg(v11, v16, 0);
    }
  }
  v17 = sub_1C32E6C(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    (System_Collections_Generic_List_object__o *)v17,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  if ( !v17 )
    goto LABEL_91;
  v18 = (const MethodInfo *)*(unsigned int *)(v17 + 24);
  v19 = *(_DWORD *)(v17 + 28) + 1;
  *(_DWORD *)(v17 + 24) = 0;
  *(_DWORD *)(v17 + 28) = v19;
  if ( (int)v18 >= 1 )
    System_Array__Clear(*(System_Array_o **)(v17 + 16), 0, (int32_t)v18, 0);
  v20 = item->fields.eventRewardEnt;
  if ( !v20 )
    goto LABEL_91;
  if ( v20->fields.type != 1 )
    goto LABEL_62;
  giftEnt = item->fields.giftEnt;
  if ( !giftEnt )
  {
    rewardNum = item->fields.rewardNum;
    getRewardImgObj = (__int64)this->fields.itemIcon;
    type = 0;
    if ( rewardNum >= 1 )
    {
      if ( !getRewardImgObj )
        goto LABEL_91;
      goto LABEL_38;
    }
LABEL_60:
    if ( !getRewardImgObj )
      goto LABEL_91;
    ItemIconComponent__SetGift_40822420(
      (ItemIconComponent_o *)getRewardImgObj,
      type,
      item->fields.rewardObjectId,
      -1,
      0,
      0);
    goto LABEL_62;
  }
  prioredIconId = giftEnt->fields.prioredIconId;
  if ( prioredIconId >= 1 )
  {
    getRewardImgObj = (__int64)this->fields.itemIcon;
    if ( !getRewardImgObj )
      goto LABEL_91;
    num = (unsigned int)giftEnt->fields.num;
    if ( (int)num <= 1 )
      v24 = -1;
    else
      v24 = num;
    ItemIconComponent__SetItemImage_40824868((ItemIconComponent_o *)getRewardImgObj, prioredIconId, v24, 0);
    goto LABEL_62;
  }
  rewardNum = item->fields.rewardNum;
  if ( rewardNum < 1 )
  {
    type = giftEnt->fields.type;
    if ( type == 12 )
    {
      eventPointBuffEntity = item->fields.eventPointBuffEntity;
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
  LODWORD(giftEnt) = giftEnt->fields.type;
  if ( !getRewardImgObj )
    goto LABEL_91;
LABEL_38:
  ItemIconComponent__SetGiftDesignSize(
    (ItemIconComponent_o *)getRewardImgObj,
    (int32_t)giftEnt,
    item->fields.rewardObjectId,
    rewardNum,
    0);
  v27 = item->fields.giftEnt;
  if ( !v27 || (v28 = v27->fields.type, v28 > 7) || ((1 << v28) & 0xC2) == 0 )
  {
    countLbInfo = (Il2CppObject *)this->fields.countLbInfo;
    v37 = *(_DWORD *)(v17 + 28);
    v38 = *(_QWORD *)(v17 + 16);
    v39 = Method_System_Collections_Generic_List_GameObject__Add__;
LABEL_51:
    *(_DWORD *)(v17 + 28) = v37 + 1;
    if ( !v38 )
      goto LABEL_91;
    v40 = *(int *)(v17 + 24);
    if ( (unsigned int)v40 >= *(_DWORD *)(v38 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)v17,
        countLbInfo,
        *(const MethodInfo_37987BC **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
    }
    else
    {
      v41 = v38 + 8 * v40;
      *(_DWORD *)(v17 + 24) = v40 + 1;
      *(_QWORD *)(v41 + 32) = countLbInfo;
      getRewardImgObj = sub_1C32BC4(v41 + 32, countLbInfo);
    }
    goto LABEL_62;
  }
  rarityInfo = (UnityEngine_Object_o *)this->fields.rarityInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  getRewardImgObj = UnityEngine_Object__op_Inequality(rarityInfo, 0, 0);
  if ( (getRewardImgObj & 1) != 0 )
  {
    v30 = (UnityEngine_Object_o *)this->fields.countLbInfo;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    getRewardImgObj = UnityEngine_Object__op_Inequality(v30, 0, 0);
    if ( (getRewardImgObj & 1) != 0 )
    {
      v31 = (Il2CppObject *)this->fields.rarityInfo;
      v32 = *(_QWORD *)(v17 + 16);
      v33 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++*(_DWORD *)(v17 + 28);
      if ( !v32 )
        goto LABEL_91;
      v34 = *(int *)(v17 + 24);
      if ( (unsigned int)v34 >= *(_DWORD *)(v32 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)v17,
          v31,
          *(const MethodInfo_37987BC **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
      }
      else
      {
        v35 = v32 + 8 * v34;
        *(_DWORD *)(v17 + 24) = v34 + 1;
        *(_QWORD *)(v35 + 32) = v31;
        getRewardImgObj = sub_1C32BC4(v35 + 32, v31);
      }
      countLbInfo = (Il2CppObject *)this->fields.countLbInfo;
      v37 = *(_DWORD *)(v17 + 28);
      v38 = *(_QWORD *)(v17 + 16);
      v39 = Method_System_Collections_Generic_List_GameObject__Add__;
      goto LABEL_51;
    }
  }
LABEL_62:
  v43 = item->fields.eventRewardEnt;
  if ( !v43 )
    goto LABEL_91;
  if ( (v43->fields.type & 0xFFFFFFFE) == 2 )
  {
    getRewardImgObj = (__int64)this->fields.itemIcon;
    if ( !getRewardImgObj )
      goto LABEL_91;
    ItemIconComponent__SetItemImage((ItemIconComponent_o *)getRewardImgObj, item->fields.iconId, 0);
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
  UICrossNarrowLabel__SetCrossNarrowText((UICrossNarrowLabel_o *)getRewardImgObj, item->fields.nameTxt, 0);
  getRewardImgObj = (__int64)this->fields.numTextLabel;
  if ( !getRewardImgObj )
    goto LABEL_91;
  UICrossNarrowLabel__SetCrossNarrowText((UICrossNarrowLabel_o *)getRewardImgObj, item->fields.numTxt, 0);
  msgTextLabel = this->fields.msgTextLabel;
  getRewardImgObj = (__int64)EventPointItemListViewItem__get_needPointTxt(item, v45);
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
      isGetReward = item->fields.isGetReward;
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
        v48 = item->fields.eventRewardEnt;
        if ( v48 )
        {
          v49 = v48->fields.bgImageId;
          getSprite = this->fields.getSprite;
          getRewardImgObj = (__int64)EventPointItemListViewItemDraw_TypeInfo;
          if ( !EventPointItemListViewItemDraw_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(EventPointItemListViewItemDraw_TypeInfo);
            getRewardImgObj = (__int64)EventPointItemListViewItemDraw_TypeInfo;
            v48 = item->fields.eventRewardEnt;
          }
          v51 = *(System_String_o **)(*(_QWORD *)(getRewardImgObj + 184) + 8LL);
          if ( v49 < 1 )
          {
            if ( !v48 )
              goto LABEL_91;
            eventId = v48->fields.eventId;
            v54 = System_Int32__ToString((int32_t)&eventId, 0);
            v53 = System_String__Concat_63556792(v51, v54, (System_String_o *)StringLiteral_1129/*"00"*/, 0);
          }
          else
          {
            if ( !v48 )
              goto LABEL_91;
            eventId = v48->fields.bgImageId;
            v52 = System_Int32__ToString((int32_t)&eventId, 0);
            v53 = System_String__Concat_63518544(v51, v52, 0);
          }
          v55 = v53;
          if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
          EventRewardRootComponent__setRewardInfoImg(getSprite, v55, 0);
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
    sub_1C32E7C(getRewardImgObj);
  }
}