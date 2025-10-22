void BoxGachaItemListViewItemDraw___ctor(BoxGachaItemListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void BoxGachaItemListViewItemDraw__Awake(BoxGachaItemListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *baseSprite; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  struct UISprite_o *v6; // x8
  struct UIAtlas_o *mAtlas; // x1
  struct UISprite_o *v8; // x8
  struct System_String_o *mSpriteName; // x1

  if ( (byte_4C51126 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C51126 = 1;
  }
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(baseSprite, 0, 0);
  if ( (v4 & 1) != 0 )
  {
    v6 = this->fields.baseSprite;
    if ( !v6
      || (mAtlas = v6->fields.mAtlas,
          this->fields.baseAtlas = mAtlas,
          v4 = sub_1C3E508(&this->fields.baseAtlas, mAtlas),
          (v8 = this->fields.baseSprite) == 0) )
    {
      sub_1C3E7C0(v4, v5);
    }
    mSpriteName = v8->fields.mSpriteName;
    this->fields.baseSpriteName = mSpriteName;
    sub_1C3E508(&this->fields.baseSpriteName, mSpriteName);
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
  unsigned int *giftEnt; // x8
  int v20; // w8
  struct BoxGachaBaseEntity_o *v21; // x8
  UILabel_o *rewardNumLabel; // x21
  System_String_o *v23; // x22
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  __int64 v27; // x5
  __int64 v28; // x6
  __int64 v29; // x7
  Il2CppObject *v30; // x0
  UILabel_o *v31; // x21
  System_String_o *v32; // x22
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  __int64 v36; // x5
  __int64 v37; // x6
  __int64 v38; // x7
  Il2CppObject *v39; // x0
  UILabel_o *maxNumLabel; // x21
  UnityEngine_Object_o *baseButton; // x21
  struct BoxGachaBaseEntity_o *v42; // x8
  int iconId; // w21
  struct BoxGachaBaseEntity_o *v44; // x8
  UISprite_o *rareDispSprite; // x20
  System_String_o *v46; // x0
  System_String_o *v47; // x21
  int64_t rewardNum; // x3
  int32_t targetObjectId; // w2
  struct GiftEntity_o *v50; // x8
  unsigned int type; // w8
  UnityEngine_Object_o *rarityInfo; // x22
  UnityEngine_Object_o *countLbInfo; // x22
  __int64 v54; // x8
  _QWORD *v55; // x9
  __int64 v56; // x10
  __int64 v57; // x0
  int v58; // w10
  __int64 v59; // x8
  _QWORD *v60; // x9
  __int64 v61; // x10
  __int64 v62; // x0
  int32_t v63; // [xsp+4h] [xbp-4Ch] BYREF
  int32_t currenNum; // [xsp+8h] [xbp-48h] BYREF
  int32_t currentBoxGachaId; // [xsp+Ch] [xbp-44h] BYREF

  v5 = item;
  if ( (byte_4C51127 & 1) == 0 )
  {
    sub_1C3E564(&EventRewardRootComponent_TypeInfo);
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_1C3E564(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&StringLiteral_19213/*"event_gachabanner_"*/);
    sub_1C3E564(&StringLiteral_3000/*"BOX_GACHA_REWARD_NORMAL_TXT"*/);
    sub_1C3E564(&StringLiteral_20211/*"icon_event_"*/);
    sub_1C3E564(&StringLiteral_2999/*"BOX_GACHA_REWARD_DRAW_TXT"*/);
    sub_1C3E564(&StringLiteral_19282/*"event_rewardgacha_"*/);
    byte_4C51127 = 1;
  }
  currentBoxGachaId = 0;
  if ( !v5 || !mode )
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
  if ( (rareDispImgObj & 1) != 0 && v5->fields.currentEventId >= 1 )
  {
    gachaBaseData = v5->fields.gachaBaseData;
    if ( !gachaBaseData )
      goto LABEL_89;
    bannerId = gachaBaseData->fields.bannerId;
    v11 = this->fields.baseSprite;
    if ( bannerId < 1 )
    {
      currentBoxGachaId = v5->fields.currentBoxGachaId;
      v12 = System_Int32__ToString((int32_t)&currentBoxGachaId, 0);
      v13 = &StringLiteral_19282/*"event_rewardgacha_"*/;
    }
    else
    {
      currentBoxGachaId = bannerId;
      v12 = System_Int32__ToString((int32_t)&currentBoxGachaId, 0);
      v13 = &StringLiteral_19213/*"event_gachabanner_"*/;
    }
    v14 = System_String__Concat_63636468((System_String_o *)*v13, v12, 0);
    if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
    EventRewardRootComponent__setRewardInfoImg(v11, v14, 0);
  }
  v15 = sub_1C3E7B0(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    (System_Collections_Generic_List_object__o *)v15,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_GameObject___ctor__);
  if ( !v15 )
    goto LABEL_89;
  v16 = *(_DWORD *)(v15 + 24);
  v17 = *(_DWORD *)(v15 + 28) + 1;
  *(_DWORD *)(v15 + 24) = 0;
  *(_DWORD *)(v15 + 28) = v17;
  if ( v16 >= 1 )
    System_Array__Clear(*(System_Array_o **)(v15 + 16), 0, v16, 0);
  v18 = v5->fields.gachaBaseData;
  if ( !v18 )
LABEL_89:
    sub_1C3E7C0(rareDispImgObj, item);
  if ( v18->fields.type == 1 )
  {
    giftEnt = (unsigned int *)v5->fields.giftEnt;
    if ( !giftEnt )
      goto LABEL_89;
    item = (BoxGachaItemListViewItem_o *)giftEnt[11];
    if ( (int)item < 1 )
    {
      rewardNum = (unsigned int)v5->fields.rewardNum;
      rareDispImgObj = (__int64)this->fields.itemIcon;
      item = (BoxGachaItemListViewItem_o *)giftEnt[5];
      targetObjectId = v5->fields.targetObjectId;
      if ( (int)rewardNum < 1 )
      {
        if ( !rareDispImgObj )
          goto LABEL_89;
        ItemIconComponent__SetGift_40968388(
          (ItemIconComponent_o *)rareDispImgObj,
          (int32_t)item,
          targetObjectId,
          -1,
          0,
          0);
      }
      else
      {
        if ( !rareDispImgObj )
          goto LABEL_89;
        ItemIconComponent__SetGift_40968388(
          (ItemIconComponent_o *)rareDispImgObj,
          (int32_t)item,
          targetObjectId,
          rewardNum,
          0,
          0);
        v50 = v5->fields.giftEnt;
        if ( v50 && (type = v50->fields.type, type <= 7) && ((1 << type) & 0xC2) != 0 )
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
          item = (BoxGachaItemListViewItem_o *)this->fields.rarityInfo;
          v54 = *(_QWORD *)(v15 + 16);
          v55 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++*(_DWORD *)(v15 + 28);
          if ( !v54 )
            goto LABEL_89;
          v56 = *(int *)(v15 + 24);
          if ( (unsigned int)v56 >= *(_DWORD *)(v54 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)v15,
              (Il2CppObject *)item,
              *(const MethodInfo_37B5460 **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
          }
          else
          {
            v57 = v54 + 8 * v56;
            *(_DWORD *)(v15 + 24) = v56 + 1;
            *(_QWORD *)(v57 + 32) = item;
            rareDispImgObj = sub_1C3E508(v57 + 32, item);
          }
          item = (BoxGachaItemListViewItem_o *)this->fields.countLbInfo;
          v58 = *(_DWORD *)(v15 + 28);
          v59 = *(_QWORD *)(v15 + 16);
          v60 = Method_System_Collections_Generic_List_GameObject__Add__;
        }
        else
        {
          item = (BoxGachaItemListViewItem_o *)this->fields.countLbInfo;
          v58 = *(_DWORD *)(v15 + 28);
          v59 = *(_QWORD *)(v15 + 16);
          v60 = Method_System_Collections_Generic_List_GameObject__Add__;
        }
        *(_DWORD *)(v15 + 28) = v58 + 1;
        if ( !v59 )
          goto LABEL_89;
        v61 = *(int *)(v15 + 24);
        if ( (unsigned int)v61 >= *(_DWORD *)(v59 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)v15,
            (Il2CppObject *)item,
            *(const MethodInfo_37B5460 **)(*(_QWORD *)(v60[4] + 192LL) + 112LL));
        }
        else
        {
          v62 = v59 + 8 * v61;
          *(_DWORD *)(v15 + 24) = v61 + 1;
          *(_QWORD *)(v62 + 32) = item;
          rareDispImgObj = sub_1C3E508(v62 + 32, item);
        }
      }
    }
    else
    {
      rareDispImgObj = (__int64)this->fields.itemIcon;
      if ( !rareDispImgObj )
        goto LABEL_89;
      v20 = giftEnt[7];
      if ( v20 <= 1 )
        v20 = -1;
      ItemIconComponent__SetItemImage_40970836((ItemIconComponent_o *)rareDispImgObj, (int32_t)item, v20, 0);
    }
  }
LABEL_30:
  v21 = v5->fields.gachaBaseData;
  if ( !v21 )
    goto LABEL_89;
  if ( (v21->fields.type & 0xFFFFFFFE) == 2 )
  {
    rareDispImgObj = (__int64)this->fields.itemIcon;
    if ( !rareDispImgObj )
      goto LABEL_89;
    ItemIconComponent__SetItemImage((ItemIconComponent_o *)rareDispImgObj, v5->fields.targetImgId, 0);
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
  UILabel__set_text((UILabel_o *)rareDispImgObj, v5->fields.nameTxt, 0);
  rareDispImgObj = (__int64)this->fields.msgTextLabel;
  if ( !rareDispImgObj )
    goto LABEL_89;
  UILabel__set_text((UILabel_o *)rareDispImgObj, v5->fields.detailTxt, 0);
  rareDispImgObj = (__int64)this->fields.msgTextLabel;
  if ( !rareDispImgObj )
    goto LABEL_89;
  UILabel__SetCondensedScale((UILabel_o *)rareDispImgObj, 350, 0, 0);
  rewardNumLabel = this->fields.rewardNumLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v23 = LocalizationManager__Get((System_String_o *)StringLiteral_3000/*"BOX_GACHA_REWARD_NORMAL_TXT"*/, 0);
  currenNum = v5->fields.currenNum;
  v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &currenNum, v24, v25, v26, v27, v28, v29);
  rareDispImgObj = (__int64)System_String__Format(v23, v30, 0);
  if ( !rewardNumLabel )
    goto LABEL_89;
  UILabel__set_text(rewardNumLabel, (System_String_o *)rareDispImgObj, 0);
  if ( v5->fields.isDraw )
  {
    v31 = this->fields.rewardNumLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v32 = LocalizationManager__Get((System_String_o *)StringLiteral_2999/*"BOX_GACHA_REWARD_DRAW_TXT"*/, 0);
    v63 = v5->fields.currenNum;
    v39 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v63, v33, v34, v35, v36, v37, v38);
    rareDispImgObj = (__int64)System_String__Format(v32, v39, 0);
    if ( !v31 )
      goto LABEL_89;
    UILabel__set_text(v31, (System_String_o *)rareDispImgObj, 0);
  }
  maxNumLabel = this->fields.maxNumLabel;
  currentBoxGachaId = v5->fields.maxNum;
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
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)rareDispImgObj, v5->fields.currenNum < 1, 0);
  if ( v5->fields.isRare )
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
    v42 = v5->fields.gachaBaseData;
    if ( v42 )
    {
      rareDispImgObj = (__int64)this->fields.baseButton;
      if ( rareDispImgObj )
      {
        iconId = v42->fields.iconId;
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
          v44 = v5->fields.gachaBaseData;
          if ( v44 )
          {
            rareDispSprite = this->fields.rareDispSprite;
            currentBoxGachaId = v44->fields.iconId;
            v46 = System_Int32__ToString((int32_t)&currentBoxGachaId, 0);
            v47 = System_String__Concat_63636468((System_String_o *)StringLiteral_20211/*"icon_event_"*/, v46, 0);
            if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
            EventRewardRootComponent__setRewardInfoImg(rareDispSprite, v47, 0);
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