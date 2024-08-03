void __fastcall EventPointItemListViewItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t v6; // w1
  struct EventPointItemListViewItemDraw_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_4A0027C & 1) == 0 )
  {
    sub_1B640C8(&EventPointItemListViewItemDraw_TypeInfo, v1);
    sub_1B640C8(&StringLiteral_19171/*"event_rewardpoint_"*/, v4);
    sub_1B640C8(&StringLiteral_19167/*"event_rewardget_"*/, v5);
    byte_4A0027C = 1;
  }
  EventPointItemListViewItemDraw_TypeInfo->static_fields->BOARD_SPRITE_BASE_NAME = (struct System_String_o *)StringLiteral_19171/*"event_rewardpoint_"*/;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)EventPointItemListViewItemDraw_TypeInfo->static_fields,
    StringLiteral_19171/*"event_rewardpoint_"*/,
    v2,
    v3);
  v6 = StringLiteral_19167/*"event_rewardget_"*/;
  static_fields = EventPointItemListViewItemDraw_TypeInfo->static_fields;
  static_fields->GET_SPRITE_NAME = (struct System_String_o *)StringLiteral_19167/*"event_rewardget_"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->GET_SPRITE_NAME, v6, v8, v9);
}


void __fastcall EventPointItemListViewItemDraw___ctor(EventPointItemListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventPointItemListViewItemDraw__Awake(EventPointItemListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *baseSprite; // x20
  _BOOL8 v4; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  struct UISprite_o *v7; // x8
  struct UIAtlas_o *mAtlas; // x1
  int32_t v9; // w2
  int32_t v10; // w3
  struct UISprite_o *v11; // x8
  struct System_String_o *mSpriteName; // x1

  if ( (byte_4A0027A & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_4A0027A = 1;
  }
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL);
  if ( v4 )
  {
    v7 = this->fields.baseSprite;
    if ( !v7
      || (mAtlas = v7->fields.mAtlas,
          this->fields.baseAtlas = mAtlas,
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.baseAtlas, (int32_t)mAtlas, v5, v6),
          (v11 = this->fields.baseSprite) == 0LL) )
    {
      sub_1B64324(v4);
    }
    mSpriteName = v11->fields.mSpriteName;
    this->fields.baseSpriteName = mSpriteName;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.baseSpriteName, (int32_t)mSpriteName, v9, v10);
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
  __int64 getRewardImgObj; // x0
  UnityEngine_Object_o *baseSprite; // x21
  __int64 v16; // x1
  __int64 v17; // x2
  struct EventRewardEntity_o *eventRewardEnt; // x8
  int bgImageId; // w24
  UISprite_o *v20; // x21
  System_String_o *v21; // x22
  System_String_o *v22; // x0
  System_String_o *v23; // x0
  System_String_o *v24; // x0
  System_String_o *v25; // x22
  __int64 v26; // x21
  const MethodInfo *v27; // x2
  int v28; // w8
  struct EventRewardEntity_o *v29; // x8
  struct GiftEntity_o *giftEnt; // x8
  int32_t prioredIconId; // w1
  int num; // w8
  int32_t v33; // w2
  int rewardNum; // w3
  int32_t type; // w1
  int32_t v36; // w2
  int32_t v37; // w3
  struct GiftEntity_o *v38; // x8
  unsigned int v39; // w8
  UnityEngine_Object_o *rarityInfo; // x22
  UnityEngine_Object_o *v41; // x22
  int32_t v42; // w3
  Il2CppObject *v43; // x1
  __int64 v44; // x8
  _QWORD *v45; // x9
  __int64 v46; // x10
  __int64 v47; // x0
  Il2CppObject *countLbInfo; // x1
  int v49; // w10
  __int64 v50; // x8
  _QWORD *v51; // x9
  __int64 v52; // x10
  __int64 v53; // x0
  struct EventPointBuffEntity_o *eventPointBuffEntity; // x8
  struct EventRewardEntity_o *v55; // x8
  UILabel_o *msgTextLabel; // x21
  const MethodInfo *v57; // x1
  UnityEngine_Object_o *baseButton; // x21
  _BOOL4 isGetReward; // w21
  struct EventRewardEntity_o *v60; // x8
  int v61; // w22
  UISprite_o *getSprite; // x21
  System_String_o *v63; // x20
  System_String_o *v64; // x0
  System_String_o *v65; // x0
  System_String_o *v66; // x0
  System_String_o *v67; // x20
  int32_t eventId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4A0027B & 1) == 0 )
  {
    sub_1B640C8(&EventPointItemListViewItemDraw_TypeInfo, item);
    sub_1B640C8(&EventRewardRootComponent_TypeInfo, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__Add__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__Clear__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject___ctor__, v10);
    sub_1B640C8(&System_Collections_Generic_List_GameObject__TypeInfo, v11);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v12);
    sub_1B640C8(&StringLiteral_1222/*"00"*/, v13);
    byte_4A0027B = 1;
  }
  eventId = 0;
  if ( !item || !mode )
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
    eventRewardEnt = item->fields.eventRewardEnt;
    if ( !eventRewardEnt )
      goto LABEL_91;
    if ( eventRewardEnt->fields.eventId >= 1 )
    {
      bgImageId = eventRewardEnt->fields.bgImageId;
      v20 = this->fields.baseSprite;
      getRewardImgObj = (__int64)EventPointItemListViewItemDraw_TypeInfo;
      if ( !EventPointItemListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventPointItemListViewItemDraw_TypeInfo);
        getRewardImgObj = (__int64)EventPointItemListViewItemDraw_TypeInfo;
        eventRewardEnt = item->fields.eventRewardEnt;
      }
      v21 = **(System_String_o ***)(getRewardImgObj + 184);
      if ( bgImageId < 1 )
      {
        if ( !eventRewardEnt )
          goto LABEL_91;
        eventId = eventRewardEnt->fields.eventId;
        v24 = System_Int32__ToString((int32_t)&eventId, 0LL);
        v23 = System_String__Concat_61386656(v21, v24, (System_String_o *)StringLiteral_1222/*"00"*/, 0LL);
      }
      else
      {
        if ( !eventRewardEnt )
          goto LABEL_91;
        eventId = eventRewardEnt->fields.bgImageId;
        v22 = System_Int32__ToString((int32_t)&eventId, 0LL);
        v23 = System_String__Concat_61375396(v21, v22, 0LL);
      }
      v25 = v23;
      if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
      EventRewardRootComponent__setRewardInfoImg(v20, v25, 0LL);
    }
  }
  v26 = sub_1B64314(System_Collections_Generic_List_GameObject__TypeInfo, v16, v17);
  System_Collections_Generic_List_object____ctor(
    (System_Collections_Generic_List_object__o *)v26,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  if ( !v26 )
    goto LABEL_91;
  v27 = (const MethodInfo *)*(unsigned int *)(v26 + 24);
  v28 = *(_DWORD *)(v26 + 28) + 1;
  *(_DWORD *)(v26 + 24) = 0;
  *(_DWORD *)(v26 + 28) = v28;
  if ( (int)v27 >= 1 )
    System_Array__Clear(*(System_Array_o **)(v26 + 16), 0, (int32_t)v27, 0LL);
  v29 = item->fields.eventRewardEnt;
  if ( !v29 )
    goto LABEL_91;
  if ( v29->fields.type != 1 )
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
    ItemIconComponent__SetGift_37829292(
      (ItemIconComponent_o *)getRewardImgObj,
      type,
      item->fields.rewardObjectId,
      -1,
      0,
      0LL);
    goto LABEL_62;
  }
  prioredIconId = giftEnt->fields.prioredIconId;
  if ( prioredIconId >= 1 )
  {
    getRewardImgObj = (__int64)this->fields.itemIcon;
    if ( !getRewardImgObj )
      goto LABEL_91;
    num = giftEnt->fields.num;
    if ( num <= 1 )
      v33 = -1;
    else
      v33 = num;
    ItemIconComponent__SetItemImage_37831688((ItemIconComponent_o *)getRewardImgObj, prioredIconId, v33, 0LL);
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
          0LL);
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
    0LL);
  v38 = item->fields.giftEnt;
  if ( !v38 || (v39 = v38->fields.type, v39 > 7) || ((1 << v39) & 0xC2) == 0 )
  {
    countLbInfo = (Il2CppObject *)this->fields.countLbInfo;
    v49 = *(_DWORD *)(v26 + 28);
    v50 = *(_QWORD *)(v26 + 16);
    v51 = Method_System_Collections_Generic_List_GameObject__Add__;
LABEL_51:
    *(_DWORD *)(v26 + 28) = v49 + 1;
    if ( !v50 )
      goto LABEL_91;
    v52 = *(int *)(v26 + 24);
    if ( (unsigned int)v52 >= *(_DWORD *)(v50 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)v26,
        countLbInfo,
        *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
    }
    else
    {
      v53 = v50 + 8 * v52;
      *(_DWORD *)(v26 + 24) = v52 + 1;
      *(_QWORD *)(v53 + 32) = countLbInfo;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v53 + 32), (int32_t)countLbInfo, v36, v37);
    }
    goto LABEL_62;
  }
  rarityInfo = (UnityEngine_Object_o *)this->fields.rarityInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  getRewardImgObj = UnityEngine_Object__op_Inequality(rarityInfo, 0LL, 0LL);
  if ( (getRewardImgObj & 1) != 0 )
  {
    v41 = (UnityEngine_Object_o *)this->fields.countLbInfo;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    getRewardImgObj = UnityEngine_Object__op_Inequality(v41, 0LL, 0LL);
    if ( (getRewardImgObj & 1) != 0 )
    {
      v43 = (Il2CppObject *)this->fields.rarityInfo;
      v44 = *(_QWORD *)(v26 + 16);
      v45 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++*(_DWORD *)(v26 + 28);
      if ( !v44 )
        goto LABEL_91;
      v46 = *(int *)(v26 + 24);
      if ( (unsigned int)v46 >= *(_DWORD *)(v44 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)v26,
          v43,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
      }
      else
      {
        v47 = v44 + 8 * v46;
        *(_DWORD *)(v26 + 24) = v46 + 1;
        *(_QWORD *)(v47 + 32) = v43;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v47 + 32), (int32_t)v43, (int32_t)v27, v42);
      }
      countLbInfo = (Il2CppObject *)this->fields.countLbInfo;
      v49 = *(_DWORD *)(v26 + 28);
      v50 = *(_QWORD *)(v26 + 16);
      v51 = Method_System_Collections_Generic_List_GameObject__Add__;
      goto LABEL_51;
    }
  }
LABEL_62:
  v55 = item->fields.eventRewardEnt;
  if ( !v55 )
    goto LABEL_91;
  if ( (v55->fields.type & 0xFFFFFFFE) == 2 )
  {
    getRewardImgObj = (__int64)this->fields.itemIcon;
    if ( !getRewardImgObj )
      goto LABEL_91;
    ItemIconComponent__SetItemImage((ItemIconComponent_o *)getRewardImgObj, item->fields.iconId, 0LL);
  }
  getRewardImgObj = (__int64)this->fields.numDispctr;
  if ( !getRewardImgObj )
    goto LABEL_91;
  ItemNumDispControl__InitEventAlphaAnim(
    (ItemNumDispControl_o *)getRewardImgObj,
    (System_Collections_Generic_List_GameObject__o *)v26,
    v27);
  getRewardImgObj = (__int64)this->fields.nameTextLabel;
  if ( !getRewardImgObj )
    goto LABEL_91;
  UICrossNarrowLabel__SetCrossNarrowText((UICrossNarrowLabel_o *)getRewardImgObj, item->fields.nameTxt, 0LL);
  getRewardImgObj = (__int64)this->fields.numTextLabel;
  if ( !getRewardImgObj )
    goto LABEL_91;
  UICrossNarrowLabel__SetCrossNarrowText((UICrossNarrowLabel_o *)getRewardImgObj, item->fields.numTxt, 0LL);
  msgTextLabel = this->fields.msgTextLabel;
  getRewardImgObj = (__int64)EventPointItemListViewItem__get_needPointTxt(item, v57);
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
      isGetReward = item->fields.isGetReward;
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
        v60 = item->fields.eventRewardEnt;
        if ( v60 )
        {
          v61 = v60->fields.bgImageId;
          getSprite = this->fields.getSprite;
          getRewardImgObj = (__int64)EventPointItemListViewItemDraw_TypeInfo;
          if ( !EventPointItemListViewItemDraw_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(EventPointItemListViewItemDraw_TypeInfo);
            getRewardImgObj = (__int64)EventPointItemListViewItemDraw_TypeInfo;
            v60 = item->fields.eventRewardEnt;
          }
          v63 = *(System_String_o **)(*(_QWORD *)(getRewardImgObj + 184) + 8LL);
          if ( v61 < 1 )
          {
            if ( !v60 )
              goto LABEL_91;
            eventId = v60->fields.eventId;
            v66 = System_Int32__ToString((int32_t)&eventId, 0LL);
            v65 = System_String__Concat_61386656(v63, v66, (System_String_o *)StringLiteral_1222/*"00"*/, 0LL);
          }
          else
          {
            if ( !v60 )
              goto LABEL_91;
            eventId = v60->fields.bgImageId;
            v64 = System_Int32__ToString((int32_t)&eventId, 0LL);
            v65 = System_String__Concat_61375396(v63, v64, 0LL);
          }
          v67 = v65;
          if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
          EventRewardRootComponent__setRewardInfoImg(getSprite, v67, 0LL);
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
    sub_1B64324(getRewardImgObj);
  }
}