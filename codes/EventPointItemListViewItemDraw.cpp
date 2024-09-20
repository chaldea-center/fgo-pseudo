void __fastcall EventPointItemListViewItemDraw___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  int32_t v3; // w1
  struct EventPointItemListViewItemDraw_StaticFields *static_fields; // x0
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_4A5F071 & 1) == 0 )
  {
    sub_1B885B0(&EventPointItemListViewItemDraw_TypeInfo);
    sub_1B885B0(&StringLiteral_19248/*"event_rewardpoint_"*/);
    sub_1B885B0(&StringLiteral_19244/*"event_rewardget_"*/);
    byte_4A5F071 = 1;
  }
  EventPointItemListViewItemDraw_TypeInfo->static_fields->BOARD_SPRITE_BASE_NAME = (struct System_String_o *)StringLiteral_19248/*"event_rewardpoint_"*/;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)EventPointItemListViewItemDraw_TypeInfo->static_fields,
    StringLiteral_19248/*"event_rewardpoint_"*/,
    v1,
    v2);
  v3 = StringLiteral_19244/*"event_rewardget_"*/;
  static_fields = EventPointItemListViewItemDraw_TypeInfo->static_fields;
  static_fields->GET_SPRITE_NAME = (struct System_String_o *)StringLiteral_19244/*"event_rewardget_"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->GET_SPRITE_NAME, v3, v5, v6);
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
  int32_t v7; // w3
  struct UISprite_o *v8; // x8
  struct UIAtlas_o *mAtlas; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  struct UISprite_o *v12; // x8
  struct System_String_o *mSpriteName; // x1

  if ( (byte_4A5F06F & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5F06F = 1;
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
          sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.baseAtlas, (int32_t)mAtlas, v6, v7),
          (v12 = this->fields.baseSprite) == 0LL) )
    {
      sub_1B8880C(v4, v5);
    }
    mSpriteName = v12->fields.mSpriteName;
    this->fields.baseSpriteName = mSpriteName;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.baseSpriteName, (int32_t)mSpriteName, v10, v11);
  }
}


void __fastcall EventPointItemListViewItemDraw__SetItem(
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
  int v22; // w8
  int32_t v23; // w2
  int32_t rewardNum; // w3
  int32_t v25; // w2
  int32_t v26; // w3
  struct GiftEntity_o *v27; // x8
  unsigned int type; // w8
  UnityEngine_Object_o *rarityInfo; // x22
  UnityEngine_Object_o *countLbInfo; // x22
  int32_t v31; // w3
  __int64 v32; // x8
  _QWORD *v33; // x9
  __int64 v34; // x10
  __int64 v35; // x0
  int v36; // w10
  __int64 v37; // x8
  _QWORD *v38; // x9
  __int64 v39; // x10
  __int64 v40; // x0
  struct EventPointBuffEntity_o *eventPointBuffEntity; // x8
  struct EventRewardEntity_o *v42; // x8
  UILabel_o *msgTextLabel; // x21
  const MethodInfo *v44; // x1
  UnityEngine_Object_o *baseButton; // x21
  _BOOL4 isGetReward; // w21
  struct EventRewardEntity_o *v47; // x8
  int v48; // w22
  UISprite_o *getSprite; // x21
  System_String_o *v50; // x20
  System_String_o *v51; // x0
  System_String_o *v52; // x0
  System_String_o *v53; // x0
  System_String_o *v54; // x20
  int32_t eventId; // [xsp+Ch] [xbp-34h] BYREF

  v5 = item;
  if ( (byte_4A5F070 & 1) == 0 )
  {
    sub_1B885B0(&EventPointItemListViewItemDraw_TypeInfo);
    sub_1B885B0(&EventRewardRootComponent_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_1221/*"00"*/);
    byte_4A5F070 = 1;
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
        v15 = System_Int32__ToString((int32_t)&eventId, 0LL);
        v14 = System_String__Concat_61718292(v12, v15, (System_String_o *)StringLiteral_1221/*"00"*/, 0LL);
      }
      else
      {
        if ( !eventRewardEnt )
          goto LABEL_91;
        eventId = eventRewardEnt->fields.bgImageId;
        v13 = System_Int32__ToString((int32_t)&eventId, 0LL);
        v14 = System_String__Concat_61707032(v12, v13, 0LL);
      }
      v16 = v14;
      if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
      EventRewardRootComponent__setRewardInfoImg(v11, v16, 0LL);
    }
  }
  v17 = sub_1B887FC(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    (System_Collections_Generic_List_object__o *)v17,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  if ( !v17 )
    goto LABEL_91;
  v18 = (const MethodInfo *)*(unsigned int *)(v17 + 24);
  v19 = *(_DWORD *)(v17 + 28) + 1;
  *(_DWORD *)(v17 + 24) = 0;
  *(_DWORD *)(v17 + 28) = v19;
  if ( (int)v18 >= 1 )
    System_Array__Clear(*(System_Array_o **)(v17 + 16), 0, (int32_t)v18, 0LL);
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
    ItemIconComponent__SetGift_38144896(
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
    v22 = giftEnt[7];
    if ( v22 <= 1 )
      v23 = -1;
    else
      v23 = v22;
    ItemIconComponent__SetItemImage_38147292((ItemIconComponent_o *)getRewardImgObj, (int32_t)item, v23, 0LL);
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
  v27 = v5->fields.giftEnt;
  if ( !v27 || (type = v27->fields.type, type > 7) || ((1 << type) & 0xC2) == 0 )
  {
    item = (EventPointItemListViewItem_o *)this->fields.countLbInfo;
    v36 = *(_DWORD *)(v17 + 28);
    v37 = *(_QWORD *)(v17 + 16);
    v38 = Method_System_Collections_Generic_List_GameObject__Add__;
LABEL_51:
    *(_DWORD *)(v17 + 28) = v36 + 1;
    if ( !v37 )
      goto LABEL_91;
    v39 = *(int *)(v17 + 24);
    if ( (unsigned int)v39 >= *(_DWORD *)(v37 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)v17,
        (Il2CppObject *)item,
        *(const MethodInfo_34FD834 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
    }
    else
    {
      v40 = v37 + 8 * v39;
      *(_DWORD *)(v17 + 24) = v39 + 1;
      *(_QWORD *)(v40 + 32) = item;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v40 + 32), (int32_t)item, v25, v26);
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
          (Il2CppObject *)item,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
      }
      else
      {
        v35 = v32 + 8 * v34;
        *(_DWORD *)(v17 + 24) = v34 + 1;
        *(_QWORD *)(v35 + 32) = item;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v35 + 32), (int32_t)item, (int32_t)v18, v31);
      }
      item = (EventPointItemListViewItem_o *)this->fields.countLbInfo;
      v36 = *(_DWORD *)(v17 + 28);
      v37 = *(_QWORD *)(v17 + 16);
      v38 = Method_System_Collections_Generic_List_GameObject__Add__;
      goto LABEL_51;
    }
  }
LABEL_62:
  v42 = v5->fields.eventRewardEnt;
  if ( !v42 )
    goto LABEL_91;
  if ( (v42->fields.type & 0xFFFFFFFE) == 2 )
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
    (System_Collections_Generic_List_GameObject__o *)v17,
    v18);
  getRewardImgObj = (__int64)this->fields.nameTextLabel;
  if ( !getRewardImgObj )
    goto LABEL_91;
  UICrossNarrowLabel__SetCrossNarrowText((UICrossNarrowLabel_o *)getRewardImgObj, v5->fields.nameTxt, 0LL);
  getRewardImgObj = (__int64)this->fields.numTextLabel;
  if ( !getRewardImgObj )
    goto LABEL_91;
  UICrossNarrowLabel__SetCrossNarrowText((UICrossNarrowLabel_o *)getRewardImgObj, v5->fields.numTxt, 0LL);
  msgTextLabel = this->fields.msgTextLabel;
  getRewardImgObj = (__int64)EventPointItemListViewItem__get_needPointTxt(v5, v44);
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
        v47 = v5->fields.eventRewardEnt;
        if ( v47 )
        {
          v48 = v47->fields.bgImageId;
          getSprite = this->fields.getSprite;
          getRewardImgObj = (__int64)EventPointItemListViewItemDraw_TypeInfo;
          if ( !EventPointItemListViewItemDraw_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(EventPointItemListViewItemDraw_TypeInfo);
            getRewardImgObj = (__int64)EventPointItemListViewItemDraw_TypeInfo;
            v47 = v5->fields.eventRewardEnt;
          }
          v50 = *(System_String_o **)(*(_QWORD *)(getRewardImgObj + 184) + 8LL);
          if ( v48 < 1 )
          {
            if ( !v47 )
              goto LABEL_91;
            eventId = v47->fields.eventId;
            v53 = System_Int32__ToString((int32_t)&eventId, 0LL);
            v52 = System_String__Concat_61718292(v50, v53, (System_String_o *)StringLiteral_1221/*"00"*/, 0LL);
          }
          else
          {
            if ( !v47 )
              goto LABEL_91;
            eventId = v47->fields.bgImageId;
            v51 = System_Int32__ToString((int32_t)&eventId, 0LL);
            v52 = System_String__Concat_61707032(v50, v51, 0LL);
          }
          v54 = v52;
          if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
          EventRewardRootComponent__setRewardInfoImg(getSprite, v54, 0LL);
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
    sub_1B8880C(getRewardImgObj, item);
  }
}