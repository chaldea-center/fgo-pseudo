void BoxGachaItemListViewItemDraw___ctor(BoxGachaItemListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void BoxGachaItemListViewItemDraw__Awake(BoxGachaItemListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *baseSprite; // x20
  __int64 v4; // x0
  struct UISprite_o *v5; // x8
  struct UIAtlas_o *mAtlas; // x1
  struct UISprite_o *v7; // x8
  struct System_String_o *mSpriteName; // x1

  if ( (byte_4C31DBC & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C31DBC = 1;
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


void BoxGachaItemListViewItemDraw__SetItem(
        BoxGachaItemListViewItemDraw_o *this,
        BoxGachaItemListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 rareDispImgObj; // x0
  UnityEngine_Object_o *baseSprite; // x21
  struct BoxGachaBaseEntity_o *gachaBaseData; // x8
  int bannerId; // w8
  UISprite_o *v11; // x21
  System_String_o *v12; // x0
  __int64 *v13; // x8
  System_String_o *v14; // x22
  __int64 v15; // x21
  int32_t v16; // w2
  int v17; // w8
  struct BoxGachaBaseEntity_o *v18; // x8
  struct GiftEntity_o *giftEnt; // x8
  int32_t prioredIconId; // w1
  int num; // w8
  struct BoxGachaBaseEntity_o *v22; // x8
  UILabel_o *rewardNumLabel; // x21
  System_String_o *v24; // x22
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  __int64 v28; // x5
  __int64 v29; // x6
  __int64 v30; // x7
  Il2CppObject *v31; // x0
  UILabel_o *v32; // x21
  System_String_o *v33; // x22
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  __int64 v37; // x5
  __int64 v38; // x6
  __int64 v39; // x7
  Il2CppObject *v40; // x0
  UILabel_o *maxNumLabel; // x21
  UnityEngine_Object_o *baseButton; // x21
  struct BoxGachaBaseEntity_o *v43; // x8
  int iconId; // w21
  struct BoxGachaBaseEntity_o *v45; // x8
  UISprite_o *rareDispSprite; // x20
  System_String_o *v47; // x0
  System_String_o *v48; // x21
  int64_t rewardNum; // x3
  int32_t type; // w1
  int32_t targetObjectId; // w2
  struct GiftEntity_o *v52; // x8
  unsigned int v53; // w8
  UnityEngine_Object_o *rarityInfo; // x22
  UnityEngine_Object_o *countLbInfo; // x22
  Il2CppObject *v56; // x1
  __int64 v57; // x8
  _QWORD *v58; // x9
  __int64 v59; // x10
  __int64 v60; // x0
  Il2CppObject *v61; // x1
  int v62; // w10
  __int64 v63; // x8
  _QWORD *v64; // x9
  __int64 v65; // x10
  __int64 v66; // x0
  int32_t v67; // [xsp+4h] [xbp-4Ch] BYREF
  int32_t currenNum; // [xsp+8h] [xbp-48h] BYREF
  int32_t currentBoxGachaId; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4C31DBD & 1) == 0 )
  {
    sub_1C32C20(&EventRewardRootComponent_TypeInfo);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_19192/*"event_gachabanner_"*/);
    sub_1C32C20(&StringLiteral_3000/*"BOX_GACHA_REWARD_NORMAL_TXT"*/);
    sub_1C32C20(&StringLiteral_20190/*"icon_event_"*/);
    sub_1C32C20(&StringLiteral_2999/*"BOX_GACHA_REWARD_DRAW_TXT"*/);
    sub_1C32C20(&StringLiteral_19261/*"event_rewardgacha_"*/);
    byte_4C31DBD = 1;
  }
  currentBoxGachaId = 0;
  if ( !item || !mode )
    return;
  rareDispImgObj = (__int64)this->fields.rareDispImgObj;
  if ( !rareDispImgObj )
    goto LABEL_89;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)rareDispImgObj, 0, 0);
  rareDispImgObj = (__int64)this->fields.bonusSprite;
  if ( !rareDispImgObj )
    goto LABEL_89;
  rareDispImgObj = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)rareDispImgObj, 0);
  if ( !rareDispImgObj )
    goto LABEL_89;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)rareDispImgObj, 0, 0);
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  rareDispImgObj = UnityEngine_Object__op_Inequality(baseSprite, 0, 0);
  if ( (rareDispImgObj & 1) != 0 && item->fields.currentEventId >= 1 )
  {
    gachaBaseData = item->fields.gachaBaseData;
    if ( !gachaBaseData )
      goto LABEL_89;
    bannerId = gachaBaseData->fields.bannerId;
    v11 = this->fields.baseSprite;
    if ( bannerId < 1 )
    {
      currentBoxGachaId = item->fields.currentBoxGachaId;
      v12 = System_Int32__ToString((int32_t)&currentBoxGachaId, 0);
      v13 = &StringLiteral_19261/*"event_rewardgacha_"*/;
    }
    else
    {
      currentBoxGachaId = bannerId;
      v12 = System_Int32__ToString((int32_t)&currentBoxGachaId, 0);
      v13 = &StringLiteral_19192/*"event_gachabanner_"*/;
    }
    v14 = System_String__Concat_63518544((System_String_o *)*v13, v12, 0);
    if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
    EventRewardRootComponent__setRewardInfoImg(v11, v14, 0);
  }
  v15 = sub_1C32E6C(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    (System_Collections_Generic_List_object__o *)v15,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  if ( !v15 )
    goto LABEL_89;
  v16 = *(_DWORD *)(v15 + 24);
  v17 = *(_DWORD *)(v15 + 28) + 1;
  *(_DWORD *)(v15 + 24) = 0;
  *(_DWORD *)(v15 + 28) = v17;
  if ( v16 >= 1 )
    System_Array__Clear(*(System_Array_o **)(v15 + 16), 0, v16, 0);
  v18 = item->fields.gachaBaseData;
  if ( !v18 )
LABEL_89:
    sub_1C32E7C(rareDispImgObj);
  if ( v18->fields.type == 1 )
  {
    giftEnt = item->fields.giftEnt;
    if ( !giftEnt )
      goto LABEL_89;
    prioredIconId = giftEnt->fields.prioredIconId;
    if ( prioredIconId < 1 )
    {
      rewardNum = (unsigned int)item->fields.rewardNum;
      rareDispImgObj = (__int64)this->fields.itemIcon;
      type = giftEnt->fields.type;
      targetObjectId = item->fields.targetObjectId;
      if ( (int)rewardNum < 1 )
      {
        if ( !rareDispImgObj )
          goto LABEL_89;
        ItemIconComponent__SetGift_40822420((ItemIconComponent_o *)rareDispImgObj, type, targetObjectId, -1, 0, 0);
      }
      else
      {
        if ( !rareDispImgObj )
          goto LABEL_89;
        ItemIconComponent__SetGift_40822420(
          (ItemIconComponent_o *)rareDispImgObj,
          type,
          targetObjectId,
          rewardNum,
          0,
          0);
        v52 = item->fields.giftEnt;
        if ( v52 && (v53 = v52->fields.type, v53 <= 7) && ((1 << v53) & 0xC2) != 0 )
        {
          rarityInfo = (UnityEngine_Object_o *)this->fields.rarityInfo;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          rareDispImgObj = UnityEngine_Object__op_Inequality(rarityInfo, 0, 0);
          if ( (rareDispImgObj & 1) == 0 )
            goto LABEL_30;
          countLbInfo = (UnityEngine_Object_o *)this->fields.countLbInfo;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          rareDispImgObj = UnityEngine_Object__op_Inequality(countLbInfo, 0, 0);
          if ( (rareDispImgObj & 1) == 0 )
            goto LABEL_30;
          v56 = (Il2CppObject *)this->fields.rarityInfo;
          v57 = *(_QWORD *)(v15 + 16);
          v58 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++*(_DWORD *)(v15 + 28);
          if ( !v57 )
            goto LABEL_89;
          v59 = *(int *)(v15 + 24);
          if ( (unsigned int)v59 >= *(_DWORD *)(v57 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)v15,
              v56,
              *(const MethodInfo_37987BC **)(*(_QWORD *)(v58[4] + 192LL) + 112LL));
          }
          else
          {
            v60 = v57 + 8 * v59;
            *(_DWORD *)(v15 + 24) = v59 + 1;
            *(_QWORD *)(v60 + 32) = v56;
            rareDispImgObj = sub_1C32BC4(v60 + 32, v56);
          }
          v61 = (Il2CppObject *)this->fields.countLbInfo;
          v62 = *(_DWORD *)(v15 + 28);
          v63 = *(_QWORD *)(v15 + 16);
          v64 = Method_System_Collections_Generic_List_GameObject__Add__;
        }
        else
        {
          v61 = (Il2CppObject *)this->fields.countLbInfo;
          v62 = *(_DWORD *)(v15 + 28);
          v63 = *(_QWORD *)(v15 + 16);
          v64 = Method_System_Collections_Generic_List_GameObject__Add__;
        }
        *(_DWORD *)(v15 + 28) = v62 + 1;
        if ( !v63 )
          goto LABEL_89;
        v65 = *(int *)(v15 + 24);
        if ( (unsigned int)v65 >= *(_DWORD *)(v63 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)v15,
            v61,
            *(const MethodInfo_37987BC **)(*(_QWORD *)(v64[4] + 192LL) + 112LL));
        }
        else
        {
          v66 = v63 + 8 * v65;
          *(_DWORD *)(v15 + 24) = v65 + 1;
          *(_QWORD *)(v66 + 32) = v61;
          rareDispImgObj = sub_1C32BC4(v66 + 32, v61);
        }
      }
    }
    else
    {
      rareDispImgObj = (__int64)this->fields.itemIcon;
      if ( !rareDispImgObj )
        goto LABEL_89;
      num = giftEnt->fields.num;
      if ( num <= 1 )
        num = -1;
      ItemIconComponent__SetItemImage_40824868((ItemIconComponent_o *)rareDispImgObj, prioredIconId, num, 0);
    }
  }
LABEL_30:
  v22 = item->fields.gachaBaseData;
  if ( !v22 )
    goto LABEL_89;
  if ( (v22->fields.type & 0xFFFFFFFE) == 2 )
  {
    rareDispImgObj = (__int64)this->fields.itemIcon;
    if ( !rareDispImgObj )
      goto LABEL_89;
    ItemIconComponent__SetItemImage((ItemIconComponent_o *)rareDispImgObj, item->fields.targetImgId, 0);
  }
  rareDispImgObj = (__int64)this->fields.numDispctr;
  if ( !rareDispImgObj )
    goto LABEL_89;
  ItemNumDispControl__InitEventAlphaAnim(
    (ItemNumDispControl_o *)rareDispImgObj,
    (System_Collections_Generic_List_GameObject__o *)v15,
    0);
  rareDispImgObj = (__int64)this->fields.nameTextLabel;
  if ( !rareDispImgObj )
    goto LABEL_89;
  UILabel__set_text((UILabel_o *)rareDispImgObj, item->fields.nameTxt, 0);
  rareDispImgObj = (__int64)this->fields.msgTextLabel;
  if ( !rareDispImgObj )
    goto LABEL_89;
  UILabel__set_text((UILabel_o *)rareDispImgObj, item->fields.detailTxt, 0);
  rareDispImgObj = (__int64)this->fields.msgTextLabel;
  if ( !rareDispImgObj )
    goto LABEL_89;
  UILabel__SetCondensedScale((UILabel_o *)rareDispImgObj, 350, 0, 0);
  rewardNumLabel = this->fields.rewardNumLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v24 = LocalizationManager__Get((System_String_o *)StringLiteral_3000/*"BOX_GACHA_REWARD_NORMAL_TXT"*/, 0);
  currenNum = item->fields.currenNum;
  v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &currenNum, v25, v26, v27, v28, v29, v30);
  rareDispImgObj = (__int64)System_String__Format(v24, v31, 0);
  if ( !rewardNumLabel )
    goto LABEL_89;
  UILabel__set_text(rewardNumLabel, (System_String_o *)rareDispImgObj, 0);
  if ( item->fields.isDraw )
  {
    v32 = this->fields.rewardNumLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v33 = LocalizationManager__Get((System_String_o *)StringLiteral_2999/*"BOX_GACHA_REWARD_DRAW_TXT"*/, 0);
    v67 = item->fields.currenNum;
    v40 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v67, v34, v35, v36, v37, v38, v39);
    rareDispImgObj = (__int64)System_String__Format(v33, v40, 0);
    if ( !v32 )
      goto LABEL_89;
    UILabel__set_text(v32, (System_String_o *)rareDispImgObj, 0);
  }
  maxNumLabel = this->fields.maxNumLabel;
  currentBoxGachaId = item->fields.maxNum;
  rareDispImgObj = (__int64)System_Int32__ToString((int32_t)&currentBoxGachaId, 0);
  if ( !maxNumLabel )
    goto LABEL_89;
  UILabel__set_text(maxNumLabel, (System_String_o *)rareDispImgObj, 0);
  rareDispImgObj = (__int64)this->fields.maskSprite;
  if ( !rareDispImgObj )
    goto LABEL_89;
  rareDispImgObj = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)rareDispImgObj, 0);
  if ( !rareDispImgObj )
    goto LABEL_89;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)rareDispImgObj, item->fields.currenNum < 1, 0);
  if ( item->fields.isRare )
  {
    rareDispImgObj = (__int64)this->fields.bonusSprite;
    if ( !rareDispImgObj )
      goto LABEL_89;
    rareDispImgObj = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)rareDispImgObj, 0);
    if ( !rareDispImgObj )
      goto LABEL_89;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)rareDispImgObj, 1, 0);
  }
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  rareDispImgObj = UnityEngine_Object__op_Inequality(baseButton, 0, 0);
  if ( (rareDispImgObj & 1) != 0 )
  {
    v43 = item->fields.gachaBaseData;
    if ( v43 )
    {
      rareDispImgObj = (__int64)this->fields.baseButton;
      if ( rareDispImgObj )
      {
        iconId = v43->fields.iconId;
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
          if ( iconId < 1 )
            return;
          v45 = item->fields.gachaBaseData;
          if ( v45 )
          {
            rareDispSprite = this->fields.rareDispSprite;
            currentBoxGachaId = v45->fields.iconId;
            v47 = System_Int32__ToString((int32_t)&currentBoxGachaId, 0);
            v48 = System_String__Concat_63518544((System_String_o *)StringLiteral_20190/*"icon_event_"*/, v47, 0);
            if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
            EventRewardRootComponent__setRewardInfoImg(rareDispSprite, v48, 0);
            rareDispImgObj = (__int64)this->fields.rareDispImgObj;
            if ( rareDispImgObj )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)rareDispImgObj, 1, 0);
              return;
            }
          }
        }
      }
    }
    goto LABEL_89;
  }
}