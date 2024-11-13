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
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  int64_t v12; // x1
  struct EventPointItemListViewItemDraw_StaticFields *static_fields; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7

  if ( (byte_4B1A25D & 1) == 0 )
  {
    sub_1BCA7E0(&EventPointItemListViewItemDraw_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_19449/*"event_rewardpoint_"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_19445/*"event_rewardget_"*/, v10, v11);
    byte_4B1A25D = 1;
  }
  EventPointItemListViewItemDraw_TypeInfo->static_fields->BOARD_SPRITE_BASE_NAME = (struct System_String_o *)StringLiteral_19449/*"event_rewardpoint_"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)EventPointItemListViewItemDraw_TypeInfo->static_fields,
    StringLiteral_19449/*"event_rewardpoint_"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v12 = StringLiteral_19445/*"event_rewardget_"*/;
  static_fields = EventPointItemListViewItemDraw_TypeInfo->static_fields;
  static_fields->GET_SPRITE_NAME = (struct System_String_o *)StringLiteral_19445/*"event_rewardget_"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->GET_SPRITE_NAME, v12, v14, v15, v16, v17, v18, v19);
}


void __fastcall EventPointItemListViewItemDraw___ctor(EventPointItemListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventPointItemListViewItemDraw__Awake(EventPointItemListViewItemDraw_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *baseSprite; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  struct UISprite_o *v13; // x8
  struct UIAtlas_o *mAtlas; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  struct UISprite_o *v21; // x8
  struct System_String_o *mSpriteName; // x1

  if ( (byte_4B1A25B & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B1A25B = 1;
  }
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v5 = UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL);
  if ( v5 )
  {
    v13 = this->fields.baseSprite;
    if ( !v13
      || (mAtlas = v13->fields.mAtlas,
          this->fields.baseAtlas = mAtlas,
          sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.baseAtlas, (int64_t)mAtlas, v7, v8, v9, v10, v11, v12),
          (v21 = this->fields.baseSprite) == 0LL) )
    {
      sub_1BCAA3C(v5, v6);
    }
    mSpriteName = v21->fields.mSpriteName;
    this->fields.baseSpriteName = mSpriteName;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.baseSpriteName,
      (int64_t)mSpriteName,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventPointItemListViewItemDraw__SetItem(
        EventPointItemListViewItemDraw_o *this,
        EventPointItemListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  EventPointItemListViewItem_o *v5; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 getRewardImgObj; // x0
  __int64 v22; // x1
  UnityEngine_Object_o *baseSprite; // x21
  __int64 v24; // x2
  __int64 v25; // x3
  struct EventRewardEntity_o *eventRewardEnt; // x8
  int bgImageId; // w24
  UISprite_o *v28; // x21
  System_String_o *v29; // x22
  System_String_o *v30; // x0
  System_String_o *v31; // x0
  __int64 v32; // x1
  System_String_o *v33; // x0
  System_String_o *v34; // x22
  __int64 v35; // x21
  int64_t v36; // x2
  int v37; // w8
  struct EventRewardEntity_o *v38; // x8
  unsigned int *giftEnt; // x8
  int v40; // w8
  int32_t v41; // w2
  int32_t rewardNum; // w3
  __int64 v43; // x1
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  struct GiftEntity_o *v50; // x8
  unsigned int type; // w8
  UnityEngine_Object_o *rarityInfo; // x22
  UnityEngine_Object_o *countLbInfo; // x22
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  __int64 v59; // x8
  _QWORD *v60; // x9
  __int64 v61; // x10
  __int64 v62; // x0
  int v63; // w10
  __int64 v64; // x8
  _QWORD *v65; // x9
  __int64 v66; // x10
  __int64 v67; // x0
  struct EventPointBuffEntity_o *eventPointBuffEntity; // x8
  struct EventRewardEntity_o *v69; // x8
  UILabel_o *msgTextLabel; // x21
  const MethodInfo *v71; // x1
  __int64 v72; // x1
  UnityEngine_Object_o *baseButton; // x21
  _BOOL4 isGetReward; // w21
  struct EventRewardEntity_o *v75; // x8
  int v76; // w22
  UISprite_o *getSprite; // x21
  System_String_o *v78; // x20
  System_String_o *v79; // x0
  System_String_o *v80; // x0
  __int64 v81; // x1
  System_String_o *v82; // x0
  System_String_o *v83; // x20
  int32_t eventId; // [xsp+Ch] [xbp-34h] BYREF

  v5 = item;
  if ( (byte_4B1A25C & 1) == 0 )
  {
    sub_1BCA7E0(&EventPointItemListViewItemDraw_TypeInfo, item, *(_QWORD *)&mode);
    sub_1BCA7E0(&EventRewardRootComponent_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__Add__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__Clear__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject___ctor__, v13, v14);
    sub_1BCA7E0(&System_Collections_Generic_List_GameObject__TypeInfo, v15, v16);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v17, v18);
    sub_1BCA7E0(&StringLiteral_1217/*"00"*/, v19, v20);
    byte_4B1A25C = 1;
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22);
  getRewardImgObj = UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL);
  if ( (getRewardImgObj & 1) != 0 )
  {
    eventRewardEnt = v5->fields.eventRewardEnt;
    if ( !eventRewardEnt )
      goto LABEL_91;
    if ( eventRewardEnt->fields.eventId >= 1 )
    {
      bgImageId = eventRewardEnt->fields.bgImageId;
      v28 = this->fields.baseSprite;
      getRewardImgObj = (__int64)EventPointItemListViewItemDraw_TypeInfo;
      if ( !EventPointItemListViewItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventPointItemListViewItemDraw_TypeInfo, item);
        getRewardImgObj = (__int64)EventPointItemListViewItemDraw_TypeInfo;
        eventRewardEnt = v5->fields.eventRewardEnt;
      }
      v29 = **(System_String_o ***)(getRewardImgObj + 184);
      if ( bgImageId < 1 )
      {
        if ( !eventRewardEnt )
          goto LABEL_91;
        eventId = eventRewardEnt->fields.eventId;
        v33 = System_Int32__ToString((int32_t)&eventId, 0LL);
        v31 = System_String__Concat_62412480(v29, v33, (System_String_o *)StringLiteral_1217/*"00"*/, 0LL);
      }
      else
      {
        if ( !eventRewardEnt )
          goto LABEL_91;
        eventId = eventRewardEnt->fields.bgImageId;
        v30 = System_Int32__ToString((int32_t)&eventId, 0LL);
        v31 = System_String__Concat_62401220(v29, v30, 0LL);
      }
      v34 = v31;
      if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo, v32);
      EventRewardRootComponent__setRewardInfoImg(v28, v34, 0LL);
    }
  }
  v35 = sub_1BCAA2C(System_Collections_Generic_List_GameObject__TypeInfo, item, v24, v25);
  System_Collections_Generic_List_object____ctor(
    (System_Collections_Generic_List_object__o *)v35,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  if ( !v35 )
    goto LABEL_91;
  v36 = *(unsigned int *)(v35 + 24);
  v37 = *(_DWORD *)(v35 + 28) + 1;
  *(_DWORD *)(v35 + 24) = 0;
  *(_DWORD *)(v35 + 28) = v37;
  if ( (int)v36 >= 1 )
    System_Array__Clear(*(System_Array_o **)(v35 + 16), 0, v36, 0LL);
  v38 = v5->fields.eventRewardEnt;
  if ( !v38 )
    goto LABEL_91;
  if ( v38->fields.type != 1 )
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
    ItemIconComponent__SetGift_38855180(
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
    v40 = giftEnt[7];
    if ( v40 <= 1 )
      v41 = -1;
    else
      v41 = v40;
    ItemIconComponent__SetItemImage_38857576((ItemIconComponent_o *)getRewardImgObj, (int32_t)item, v41, 0LL);
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
  v50 = v5->fields.giftEnt;
  if ( !v50 || (type = v50->fields.type, type > 7) || ((1 << type) & 0xC2) == 0 )
  {
    item = (EventPointItemListViewItem_o *)this->fields.countLbInfo;
    v63 = *(_DWORD *)(v35 + 28);
    v64 = *(_QWORD *)(v35 + 16);
    v65 = Method_System_Collections_Generic_List_GameObject__Add__;
LABEL_51:
    *(_DWORD *)(v35 + 28) = v63 + 1;
    if ( !v64 )
      goto LABEL_91;
    v66 = *(int *)(v35 + 24);
    if ( (unsigned int)v66 >= *(_DWORD *)(v64 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)v35,
        (Il2CppObject *)item,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v65[4] + 192LL) + 112LL));
    }
    else
    {
      v67 = v64 + 8 * v66;
      *(_DWORD *)(v35 + 24) = v66 + 1;
      *(_QWORD *)(v67 + 32) = item;
      sub_1BCA784((PartyOrganizationUtility_o *)(v67 + 32), (int64_t)item, v44, v45, v46, v47, v48, v49);
    }
    goto LABEL_62;
  }
  rarityInfo = (UnityEngine_Object_o *)this->fields.rarityInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v43);
  getRewardImgObj = UnityEngine_Object__op_Inequality(rarityInfo, 0LL, 0LL);
  if ( (getRewardImgObj & 1) != 0 )
  {
    countLbInfo = (UnityEngine_Object_o *)this->fields.countLbInfo;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
    getRewardImgObj = UnityEngine_Object__op_Inequality(countLbInfo, 0LL, 0LL);
    if ( (getRewardImgObj & 1) != 0 )
    {
      item = (EventPointItemListViewItem_o *)this->fields.rarityInfo;
      v59 = *(_QWORD *)(v35 + 16);
      v60 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++*(_DWORD *)(v35 + 28);
      if ( !v59 )
        goto LABEL_91;
      v61 = *(int *)(v35 + 24);
      if ( (unsigned int)v61 >= *(_DWORD *)(v59 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)v35,
          (Il2CppObject *)item,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v60[4] + 192LL) + 112LL));
      }
      else
      {
        v62 = v59 + 8 * v61;
        *(_DWORD *)(v35 + 24) = v61 + 1;
        *(_QWORD *)(v62 + 32) = item;
        sub_1BCA784((PartyOrganizationUtility_o *)(v62 + 32), (int64_t)item, v36, v54, v55, v56, v57, v58);
      }
      item = (EventPointItemListViewItem_o *)this->fields.countLbInfo;
      v63 = *(_DWORD *)(v35 + 28);
      v64 = *(_QWORD *)(v35 + 16);
      v65 = Method_System_Collections_Generic_List_GameObject__Add__;
      goto LABEL_51;
    }
  }
LABEL_62:
  v69 = v5->fields.eventRewardEnt;
  if ( !v69 )
    goto LABEL_91;
  if ( (v69->fields.type & 0xFFFFFFFE) == 2 )
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
    (System_Collections_Generic_List_GameObject__o *)v35,
    (const MethodInfo *)v36);
  getRewardImgObj = (__int64)this->fields.nameTextLabel;
  if ( !getRewardImgObj )
    goto LABEL_91;
  UICrossNarrowLabel__SetCrossNarrowText((UICrossNarrowLabel_o *)getRewardImgObj, v5->fields.nameTxt, 0LL);
  getRewardImgObj = (__int64)this->fields.numTextLabel;
  if ( !getRewardImgObj )
    goto LABEL_91;
  UICrossNarrowLabel__SetCrossNarrowText((UICrossNarrowLabel_o *)getRewardImgObj, v5->fields.numTxt, 0LL);
  msgTextLabel = this->fields.msgTextLabel;
  getRewardImgObj = (__int64)EventPointItemListViewItem__get_needPointTxt(v5, v71);
  if ( !msgTextLabel )
    goto LABEL_91;
  UILabel__set_text(msgTextLabel, (System_String_o *)getRewardImgObj, 0LL);
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v72);
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
        v75 = v5->fields.eventRewardEnt;
        if ( v75 )
        {
          v76 = v75->fields.bgImageId;
          getSprite = this->fields.getSprite;
          getRewardImgObj = (__int64)EventPointItemListViewItemDraw_TypeInfo;
          if ( !EventPointItemListViewItemDraw_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(EventPointItemListViewItemDraw_TypeInfo, item);
            getRewardImgObj = (__int64)EventPointItemListViewItemDraw_TypeInfo;
            v75 = v5->fields.eventRewardEnt;
          }
          v78 = *(System_String_o **)(*(_QWORD *)(getRewardImgObj + 184) + 8LL);
          if ( v76 < 1 )
          {
            if ( !v75 )
              goto LABEL_91;
            eventId = v75->fields.eventId;
            v82 = System_Int32__ToString((int32_t)&eventId, 0LL);
            v80 = System_String__Concat_62412480(v78, v82, (System_String_o *)StringLiteral_1217/*"00"*/, 0LL);
          }
          else
          {
            if ( !v75 )
              goto LABEL_91;
            eventId = v75->fields.bgImageId;
            v79 = System_Int32__ToString((int32_t)&eventId, 0LL);
            v80 = System_String__Concat_62401220(v78, v79, 0LL);
          }
          v83 = v80;
          if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo, v81);
          EventRewardRootComponent__setRewardInfoImg(getSprite, v83, 0LL);
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
    sub_1BCAA3C(getRewardImgObj, item);
  }
}