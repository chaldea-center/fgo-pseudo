void BoxGachaItemListViewItemDraw___ctor(BoxGachaItemListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void BoxGachaItemListViewItemDraw__Awake(BoxGachaItemListViewItemDraw_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *baseSprite; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  struct UISprite_o *v13; // x8
  struct UIAtlas_o *mAtlas; // x1
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  struct UISprite_o *v21; // x8
  struct System_String_o *mSpriteName; // x1

  if ( (byte_596A6C3 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596A6C3 = 1;
  }
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  v5 = UnityEngine_Object__op_Inequality(baseSprite, 0, 0);
  if ( v5 )
  {
    v13 = this->fields.baseSprite;
    if ( !v13
      || (mAtlas = v13->fields.mAtlas,
          this->fields.baseAtlas = mAtlas,
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&this->fields.baseAtlas,
            (int32_t)mAtlas,
            v7,
            v8,
            v9,
            v10,
            v11,
            v12),
          (v21 = this->fields.baseSprite) == 0) )
    {
      sub_2213CDC(v5, v6);
    }
    mSpriteName = v21->fields.mSpriteName;
    this->fields.baseSpriteName = mSpriteName;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.baseSpriteName,
      (int32_t)mSpriteName,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
  }
}


void BoxGachaItemListViewItemDraw__SetItem(
        BoxGachaItemListViewItemDraw_o *this,
        BoxGachaItemListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  BoxGachaItemListViewItem_o *v5; // x20
  __int64 rareDispImgObj; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  UnityEngine_Object_o *baseSprite; // x21
  struct BoxGachaBaseEntity_o *gachaBaseData; // x8
  int bannerId; // w8
  UISprite_o *v13; // x21
  System_String_o *v14; // x0
  __int64 *v15; // x8
  __int64 v16; // x1
  __int64 v17; // x2
  System_String_o *v18; // x22
  __int64 v19; // x21
  int32_t v20; // w2
  int v21; // w8
  struct BoxGachaBaseEntity_o *v22; // x8
  struct GiftEntity_o *giftEnt; // x8
  int num; // w8
  struct BoxGachaBaseEntity_o *v25; // x8
  __int64 v26; // x1
  __int64 v27; // x2
  UILabel_o *rewardNumLabel; // x21
  System_String_o *v29; // x22
  Il2CppObject *v30; // x0
  __int64 v31; // x1
  __int64 v32; // x2
  UILabel_o *v33; // x21
  System_String_o *v34; // x22
  Il2CppObject *v35; // x0
  UILabel_o *maxNumLabel; // x21
  __int64 v37; // x2
  UnityEngine_Object_o *baseButton; // x21
  struct BoxGachaBaseEntity_o *v39; // x8
  struct BoxGachaBaseEntity_o *v40; // x8
  UISprite_o *rareDispSprite; // x20
  System_String_o *v42; // x0
  __int64 v43; // x1
  __int64 v44; // x2
  System_String_o *v45; // x21
  int64_t rewardNum; // x3
  __int64 v47; // x1
  __int64 v48; // x2
  struct GiftEntity_o *v49; // x8
  unsigned int type; // w8
  UnityEngine_Object_o *rarityInfo; // x22
  __int64 v52; // x2
  UnityEngine_Object_o *countLbInfo; // x22
  struct UnityEngine_GameObject_o *v54; // x1
  void *v55; // x2
  int32_t v56; // [xsp+4h] [xbp-4Ch] BYREF
  int32_t currenNum; // [xsp+8h] [xbp-48h] BYREF
  int32_t currentBoxGachaId; // [xsp+Ch] [xbp-44h] BYREF

  v5 = item;
  if ( (byte_596A6C4 & 1) == 0 )
  {
    sub_2213A60(&EventRewardRootComponent_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_2213A60(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_20087/*"event_gachabanner_"*/);
    sub_2213A60(&StringLiteral_3122/*"BOX_GACHA_REWARD_NORMAL_TXT"*/);
    sub_2213A60(&StringLiteral_21164/*"icon_event_"*/);
    sub_2213A60(&StringLiteral_3121/*"BOX_GACHA_REWARD_DRAW_TXT"*/);
    sub_2213A60(&StringLiteral_20156/*"event_rewardgacha_"*/);
    byte_596A6C4 = 1;
  }
  currentBoxGachaId = 0;
  if ( !v5 || !mode )
    return;
  rareDispImgObj = (__int64)this->fields.rareDispImgObj;
  if ( !rareDispImgObj )
    goto LABEL_85;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)rareDispImgObj, 0, 0);
  rareDispImgObj = (__int64)this->fields.bonusSprite;
  if ( !rareDispImgObj )
    goto LABEL_85;
  rareDispImgObj = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)rareDispImgObj, 0);
  if ( !rareDispImgObj )
    goto LABEL_85;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)rareDispImgObj, 0, 0);
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v9);
  rareDispImgObj = UnityEngine_Object__op_Inequality(baseSprite, 0, 0);
  if ( (rareDispImgObj & 1) != 0 && v5->fields.currentEventId >= 1 )
  {
    gachaBaseData = v5->fields.gachaBaseData;
    if ( !gachaBaseData )
      goto LABEL_85;
    bannerId = gachaBaseData->fields.bannerId;
    v13 = this->fields.baseSprite;
    if ( bannerId < 1 )
    {
      currentBoxGachaId = v5->fields.currentBoxGachaId;
      v14 = System_Int32__ToString((int32_t)&currentBoxGachaId, 0);
      v15 = &StringLiteral_20156/*"event_rewardgacha_"*/;
    }
    else
    {
      currentBoxGachaId = bannerId;
      v14 = System_Int32__ToString((int32_t)&currentBoxGachaId, 0);
      v15 = &StringLiteral_20087/*"event_gachabanner_"*/;
    }
    v18 = System_String__Concat_75651716((System_String_o *)*v15, v14, 0);
    if ( !*(&EventRewardRootComponent_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo, v16, v17);
    EventRewardRootComponent__setRewardInfoImg(v13, v18, 0);
  }
  v19 = sub_2213CCC(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    (System_Collections_Generic_List_object__o *)v19,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_GameObject___ctor__);
  if ( !v19 )
    goto LABEL_85;
  v20 = *(_DWORD *)(v19 + 24);
  v21 = *(_DWORD *)(v19 + 28) + 1;
  *(_DWORD *)(v19 + 24) = 0;
  *(_DWORD *)(v19 + 28) = v21;
  if ( v20 >= 1 )
    System_Array__Clear(*(System_Array_o **)(v19 + 16), 0, v20, 0);
  v22 = v5->fields.gachaBaseData;
  if ( !v22 )
LABEL_85:
    sub_2213CDC(rareDispImgObj, item);
  if ( v22->fields.type == 1 )
  {
    giftEnt = v5->fields.giftEnt;
    if ( !giftEnt )
      goto LABEL_85;
    item = (BoxGachaItemListViewItem_o *)(unsigned int)giftEnt->fields.prioredIconId;
    if ( (int)item < 1 )
    {
      rewardNum = (unsigned int)v5->fields.rewardNum;
      rareDispImgObj = (__int64)this->fields.itemIcon;
      if ( (int)rewardNum >= 1 )
      {
        if ( !rareDispImgObj )
          goto LABEL_85;
        ItemIconComponent__SetGift_47884936(
          (ItemIconComponent_o *)rareDispImgObj,
          giftEnt->fields.type,
          v5->fields.targetObjectId,
          rewardNum,
          0,
          0);
        v49 = v5->fields.giftEnt;
        if ( v49 && (type = v49->fields.type, type <= 7) && ((1 << type) & 0xC2) != 0 )
        {
          rarityInfo = (UnityEngine_Object_o *)this->fields.rarityInfo;
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v47, v48);
          rareDispImgObj = UnityEngine_Object__op_Inequality(rarityInfo, 0, 0);
          if ( (rareDispImgObj & 1) == 0 )
            goto LABEL_30;
          countLbInfo = (UnityEngine_Object_o *)this->fields.countLbInfo;
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, v52);
          rareDispImgObj = UnityEngine_Object__op_Inequality(countLbInfo, 0, 0);
          if ( (rareDispImgObj & 1) == 0 )
            goto LABEL_30;
          sub_1FFEDA8(v19, this->fields.rarityInfo, Method_System_Collections_Generic_List_GameObject__Add__);
          v54 = this->fields.countLbInfo;
          v55 = Method_System_Collections_Generic_List_GameObject__Add__;
        }
        else
        {
          v54 = this->fields.countLbInfo;
          v55 = Method_System_Collections_Generic_List_GameObject__Add__;
        }
        rareDispImgObj = sub_1FFEDA8(v19, v54, v55);
        goto LABEL_30;
      }
      if ( !rareDispImgObj )
        goto LABEL_85;
      ItemIconComponent__SetGift_47884936(
        (ItemIconComponent_o *)rareDispImgObj,
        giftEnt->fields.type,
        v5->fields.targetObjectId,
        -1,
        0,
        0);
    }
    else
    {
      rareDispImgObj = (__int64)this->fields.itemIcon;
      if ( !rareDispImgObj )
        goto LABEL_85;
      num = giftEnt->fields.num;
      if ( num <= 1 )
        num = -1;
      ItemIconComponent__SetItemImage_47887472((ItemIconComponent_o *)rareDispImgObj, (int32_t)item, num, 0);
    }
  }
LABEL_30:
  v25 = v5->fields.gachaBaseData;
  if ( !v25 )
    goto LABEL_85;
  if ( (v25->fields.type & 0xFFFFFFFE) == 2 )
  {
    rareDispImgObj = (__int64)this->fields.itemIcon;
    if ( !rareDispImgObj )
      goto LABEL_85;
    ItemIconComponent__SetItemImage((ItemIconComponent_o *)rareDispImgObj, v5->fields.targetImgId, 0);
  }
  rareDispImgObj = (__int64)this->fields.numDispctr;
  if ( !rareDispImgObj )
    goto LABEL_85;
  ItemNumDispControl__InitEventAlphaAnim(
    (ItemNumDispControl_o *)rareDispImgObj,
    (System_Collections_Generic_List_GameObject__o *)v19,
    0);
  rareDispImgObj = (__int64)this->fields.nameTextLabel;
  if ( !rareDispImgObj )
    goto LABEL_85;
  UILabel__set_text((UILabel_o *)rareDispImgObj, v5->fields.nameTxt, 0);
  rareDispImgObj = (__int64)this->fields.msgTextLabel;
  if ( !rareDispImgObj )
    goto LABEL_85;
  UILabel__set_text((UILabel_o *)rareDispImgObj, v5->fields.detailTxt, 0);
  rareDispImgObj = (__int64)this->fields.msgTextLabel;
  if ( !rareDispImgObj )
    goto LABEL_85;
  UILabel__SetCondensedScale((UILabel_o *)rareDispImgObj, 350, 0, 0);
  rewardNumLabel = this->fields.rewardNumLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v26, v27);
  v29 = LocalizationManager__Get((System_String_o *)StringLiteral_3122/*"BOX_GACHA_REWARD_NORMAL_TXT"*/, 0);
  currenNum = v5->fields.currenNum;
  v30 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &currenNum);
  rareDispImgObj = (__int64)System_String__Format(v29, v30, 0);
  if ( !rewardNumLabel )
    goto LABEL_85;
  UILabel__set_text(rewardNumLabel, (System_String_o *)rareDispImgObj, 0);
  if ( v5->fields.isDraw )
  {
    v33 = this->fields.rewardNumLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v31, v32);
    v34 = LocalizationManager__Get((System_String_o *)StringLiteral_3121/*"BOX_GACHA_REWARD_DRAW_TXT"*/, 0);
    v56 = v5->fields.currenNum;
    v35 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v56);
    rareDispImgObj = (__int64)System_String__Format(v34, v35, 0);
    if ( !v33 )
      goto LABEL_85;
    UILabel__set_text(v33, (System_String_o *)rareDispImgObj, 0);
  }
  maxNumLabel = this->fields.maxNumLabel;
  currentBoxGachaId = v5->fields.maxNum;
  rareDispImgObj = (__int64)System_Int32__ToString((int32_t)&currentBoxGachaId, 0);
  if ( !maxNumLabel )
    goto LABEL_85;
  UILabel__set_text(maxNumLabel, (System_String_o *)rareDispImgObj, 0);
  rareDispImgObj = (__int64)this->fields.maskSprite;
  if ( !rareDispImgObj )
    goto LABEL_85;
  rareDispImgObj = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)rareDispImgObj, 0);
  if ( !rareDispImgObj )
    goto LABEL_85;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)rareDispImgObj, v5->fields.currenNum < 1, 0);
  if ( v5->fields.isRare )
  {
    rareDispImgObj = (__int64)this->fields.bonusSprite;
    if ( !rareDispImgObj )
      goto LABEL_85;
    rareDispImgObj = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)rareDispImgObj, 0);
    if ( !rareDispImgObj )
      goto LABEL_85;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)rareDispImgObj, 1, 0);
  }
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, v37);
  rareDispImgObj = UnityEngine_Object__op_Inequality(baseButton, 0, 0);
  if ( (rareDispImgObj & 1) != 0 )
  {
    v39 = v5->fields.gachaBaseData;
    if ( !v39 )
      goto LABEL_85;
    rareDispImgObj = (__int64)this->fields.baseButton;
    if ( v39->fields.iconId >= 1 )
    {
      if ( rareDispImgObj )
      {
        UICommonButton__SetColliderEnable((UICommonButton_o *)rareDispImgObj, 1, 1, 0);
        rareDispImgObj = (__int64)this->fields.baseButton;
        if ( rareDispImgObj )
        {
          rareDispImgObj = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)rareDispImgObj
                                                                                       + 536LL))(
                             rareDispImgObj,
                             0,
                             1,
                             *(_QWORD *)(*(_QWORD *)rareDispImgObj + 544LL));
          v40 = v5->fields.gachaBaseData;
          if ( v40 )
          {
            rareDispSprite = this->fields.rareDispSprite;
            currentBoxGachaId = v40->fields.iconId;
            v42 = System_Int32__ToString((int32_t)&currentBoxGachaId, 0);
            v45 = System_String__Concat_75651716((System_String_o *)StringLiteral_21164/*"icon_event_"*/, v42, 0);
            if ( !*(&EventRewardRootComponent_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo, v43, v44);
            EventRewardRootComponent__setRewardInfoImg(rareDispSprite, v45, 0);
            rareDispImgObj = (__int64)this->fields.rareDispImgObj;
            if ( rareDispImgObj )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)rareDispImgObj, 1, 0);
              return;
            }
          }
        }
      }
      goto LABEL_85;
    }
    if ( !rareDispImgObj )
      goto LABEL_85;
    UICommonButton__SetColliderEnable((UICommonButton_o *)rareDispImgObj, 1, 1, 0);
    rareDispImgObj = (__int64)this->fields.baseButton;
    if ( !rareDispImgObj )
      goto LABEL_85;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)rareDispImgObj + 536LL))(
      rareDispImgObj,
      0,
      1,
      *(_QWORD *)(*(_QWORD *)rareDispImgObj + 544LL));
  }
}