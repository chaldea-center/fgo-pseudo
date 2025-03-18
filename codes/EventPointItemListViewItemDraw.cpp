void __fastcall EventPointItemListViewItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x1
  int64_t v10; // x1
  struct EventPointItemListViewItemDraw_StaticFields *static_fields; // x0
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  if ( (byte_4C2617D & 1) == 0 )
  {
    sub_1C3B764(&EventPointItemListViewItemDraw_TypeInfo, v1);
    sub_1C3B764(&StringLiteral_19627/*"hover"*/, v8);
    sub_1C3B764(&StringLiteral_19623/*"hostNameOrAddress"*/, v9);
    byte_4C2617D = 1;
  }
  EventPointItemListViewItemDraw_TypeInfo->static_fields->BOARD_SPRITE_BASE_NAME = (struct System_String_o *)StringLiteral_19627/*"hover"*/;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)EventPointItemListViewItemDraw_TypeInfo->static_fields,
    StringLiteral_19627/*"hover"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v10 = StringLiteral_19623/*"hostNameOrAddress"*/;
  static_fields = EventPointItemListViewItemDraw_TypeInfo->static_fields;
  static_fields->GET_SPRITE_NAME = (struct System_String_o *)StringLiteral_19623/*"hostNameOrAddress"*/;
  sub_1C3B708((PartyOrganizationUtility_o *)&static_fields->GET_SPRITE_NAME, v10, v12, v13, v14, v15, v16, v17);
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
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  struct UISprite_o *v12; // x8
  struct UIAtlas_o *mAtlas; // x1
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  struct UISprite_o *v20; // x8
  struct System_String_o *mSpriteName; // x1

  if ( (byte_4C2617B & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, method);
    byte_4C2617B = 1;
  }
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL);
  if ( v4 )
  {
    v12 = this->fields.baseSprite;
    if ( !v12
      || (mAtlas = v12->fields.mAtlas,
          this->fields.baseAtlas = mAtlas,
          sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.baseAtlas, (int64_t)mAtlas, v6, v7, v8, v9, v10, v11),
          (v20 = this->fields.baseSprite) == 0LL) )
    {
      sub_1C3B9C0(v4, v5);
    }
    mSpriteName = v20->fields.mSpriteName;
    this->fields.baseSpriteName = mSpriteName;
    sub_1C3B708(
      (PartyOrganizationUtility_o *)&this->fields.baseSpriteName,
      (int64_t)mSpriteName,
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
  int64_t v25; // x2
  int v26; // w8
  struct EventRewardEntity_o *v27; // x8
  unsigned int *giftEnt; // x8
  int v29; // w8
  int32_t v30; // w2
  int32_t rewardNum; // w3
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  struct GiftEntity_o *v38; // x8
  unsigned int type; // w8
  UnityEngine_Object_o *rarityInfo; // x22
  UnityEngine_Object_o *countLbInfo; // x22
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  __int64 v47; // x8
  _QWORD *v48; // x9
  __int64 v49; // x10
  __int64 v50; // x0
  int v51; // w10
  __int64 v52; // x8
  _QWORD *v53; // x9
  __int64 v54; // x10
  __int64 v55; // x0
  struct EventPointBuffEntity_o *eventPointBuffEntity; // x8
  struct EventRewardEntity_o *v57; // x8
  UILabel_o *msgTextLabel; // x21
  const MethodInfo *v59; // x1
  UnityEngine_Object_o *baseButton; // x21
  _BOOL4 isGetReward; // w21
  struct EventRewardEntity_o *v62; // x8
  int v63; // w22
  UISprite_o *getSprite; // x21
  System_String_o *v65; // x20
  System_String_o *v66; // x0
  System_String_o *v67; // x0
  System_String_o *v68; // x0
  System_String_o *v69; // x20
  int32_t eventId; // [xsp+Ch] [xbp-34h] BYREF

  v5 = item;
  if ( (byte_4C2617C & 1) == 0 )
  {
    sub_1C3B764(&EventPointItemListViewItemDraw_TypeInfo, item);
    sub_1C3B764(&EventRewardRootComponent_TypeInfo, v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_GameObject__Add__, v8);
    sub_1C3B764(&Method_System_Collections_Generic_List_GameObject__Clear__, v9);
    sub_1C3B764(&Method_System_Collections_Generic_List_GameObject___ctor__, v10);
    sub_1C3B764(&System_Collections_Generic_List_GameObject__TypeInfo, v11);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v12);
    sub_1C3B764(&StringLiteral_1199/*"1.2.840.10045.2.1"*/, v13);
    byte_4C2617C = 1;
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
        v21 = System_String__Concat_63379872(v19, v22, (System_String_o *)StringLiteral_1199/*"1.2.840.10045.2.1"*/, 0LL);
      }
      else
      {
        if ( !eventRewardEnt )
          goto LABEL_91;
        eventId = eventRewardEnt->fields.bgImageId;
        v20 = System_Int32__ToString((int32_t)&eventId, 0LL);
        v21 = System_String__Concat_63368612(v19, v20, 0LL);
      }
      v23 = v21;
      if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
      EventRewardRootComponent__setRewardInfoImg(v18, v23, 0LL);
    }
  }
  v24 = sub_1C3B9B0(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    (System_Collections_Generic_List_object__o *)v24,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  if ( !v24 )
    goto LABEL_91;
  v25 = *(unsigned int *)(v24 + 24);
  v26 = *(_DWORD *)(v24 + 28) + 1;
  *(_DWORD *)(v24 + 24) = 0;
  *(_DWORD *)(v24 + 28) = v26;
  if ( (int)v25 >= 1 )
    System_Array__Clear(*(System_Array_o **)(v24 + 16), 0, v25, 0LL);
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
    ItemIconComponent__SetGift_39566180(
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
    ItemIconComponent__SetItemImage_39568612((ItemIconComponent_o *)getRewardImgObj, (int32_t)item, v30, 0LL);
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
  v38 = v5->fields.giftEnt;
  if ( !v38 || (type = v38->fields.type, type > 7) || ((1 << type) & 0xC2) == 0 )
  {
    item = (EventPointItemListViewItem_o *)this->fields.countLbInfo;
    v51 = *(_DWORD *)(v24 + 28);
    v52 = *(_QWORD *)(v24 + 16);
    v53 = Method_System_Collections_Generic_List_GameObject__Add__;
LABEL_51:
    *(_DWORD *)(v24 + 28) = v51 + 1;
    if ( !v52 )
      goto LABEL_91;
    v54 = *(int *)(v24 + 24);
    if ( (unsigned int)v54 >= *(_DWORD *)(v52 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)v24,
        (Il2CppObject *)item,
        *(const MethodInfo_368BC6C **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
    }
    else
    {
      v55 = v52 + 8 * v54;
      *(_DWORD *)(v24 + 24) = v54 + 1;
      *(_QWORD *)(v55 + 32) = item;
      sub_1C3B708((PartyOrganizationUtility_o *)(v55 + 32), (int64_t)item, v32, v33, v34, v35, v36, v37);
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
      v47 = *(_QWORD *)(v24 + 16);
      v48 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++*(_DWORD *)(v24 + 28);
      if ( !v47 )
        goto LABEL_91;
      v49 = *(int *)(v24 + 24);
      if ( (unsigned int)v49 >= *(_DWORD *)(v47 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)v24,
          (Il2CppObject *)item,
          *(const MethodInfo_368BC6C **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
      }
      else
      {
        v50 = v47 + 8 * v49;
        *(_DWORD *)(v24 + 24) = v49 + 1;
        *(_QWORD *)(v50 + 32) = item;
        sub_1C3B708((PartyOrganizationUtility_o *)(v50 + 32), (int64_t)item, v25, v42, v43, v44, v45, v46);
      }
      item = (EventPointItemListViewItem_o *)this->fields.countLbInfo;
      v51 = *(_DWORD *)(v24 + 28);
      v52 = *(_QWORD *)(v24 + 16);
      v53 = Method_System_Collections_Generic_List_GameObject__Add__;
      goto LABEL_51;
    }
  }
LABEL_62:
  v57 = v5->fields.eventRewardEnt;
  if ( !v57 )
    goto LABEL_91;
  if ( (v57->fields.type & 0xFFFFFFFE) == 2 )
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
    (const MethodInfo *)v25);
  getRewardImgObj = (__int64)this->fields.nameTextLabel;
  if ( !getRewardImgObj )
    goto LABEL_91;
  UICrossNarrowLabel__SetCrossNarrowText((UICrossNarrowLabel_o *)getRewardImgObj, v5->fields.nameTxt, 0LL);
  getRewardImgObj = (__int64)this->fields.numTextLabel;
  if ( !getRewardImgObj )
    goto LABEL_91;
  UICrossNarrowLabel__SetCrossNarrowText((UICrossNarrowLabel_o *)getRewardImgObj, v5->fields.numTxt, 0LL);
  msgTextLabel = this->fields.msgTextLabel;
  getRewardImgObj = (__int64)EventPointItemListViewItem__get_needPointTxt(v5, v59);
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
        v62 = v5->fields.eventRewardEnt;
        if ( v62 )
        {
          v63 = v62->fields.bgImageId;
          getSprite = this->fields.getSprite;
          getRewardImgObj = (__int64)EventPointItemListViewItemDraw_TypeInfo;
          if ( !EventPointItemListViewItemDraw_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(EventPointItemListViewItemDraw_TypeInfo);
            getRewardImgObj = (__int64)EventPointItemListViewItemDraw_TypeInfo;
            v62 = v5->fields.eventRewardEnt;
          }
          v65 = *(System_String_o **)(*(_QWORD *)(getRewardImgObj + 184) + 8LL);
          if ( v63 < 1 )
          {
            if ( !v62 )
              goto LABEL_91;
            eventId = v62->fields.eventId;
            v68 = System_Int32__ToString((int32_t)&eventId, 0LL);
            v67 = System_String__Concat_63379872(v65, v68, (System_String_o *)StringLiteral_1199/*"1.2.840.10045.2.1"*/, 0LL);
          }
          else
          {
            if ( !v62 )
              goto LABEL_91;
            eventId = v62->fields.bgImageId;
            v66 = System_Int32__ToString((int32_t)&eventId, 0LL);
            v67 = System_String__Concat_63368612(v65, v66, 0LL);
          }
          v69 = v67;
          if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
          EventRewardRootComponent__setRewardInfoImg(getSprite, v69, 0LL);
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
    sub_1C3B9C0(getRewardImgObj, item);
  }
}