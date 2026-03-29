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

  if ( (byte_4D2ABFA & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2ABFA = 1;
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
          v4 = sub_1C93A78(&this->fields.baseAtlas, mAtlas),
          (v8 = this->fields.baseSprite) == 0) )
    {
      sub_1C93D2C(v4, v5);
    }
    mSpriteName = v8->fields.mSpriteName;
    this->fields.baseSpriteName = mSpriteName;
    sub_1C93A78(&this->fields.baseSpriteName, mSpriteName);
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
  Il2CppObject *v24; // x0
  UILabel_o *v25; // x21
  System_String_o *v26; // x22
  Il2CppObject *v27; // x0
  UILabel_o *maxNumLabel; // x21
  UnityEngine_Object_o *baseButton; // x21
  struct BoxGachaBaseEntity_o *v30; // x8
  int iconId; // w21
  struct BoxGachaBaseEntity_o *v32; // x8
  UISprite_o *rareDispSprite; // x20
  System_String_o *v34; // x0
  System_String_o *v35; // x21
  int64_t rewardNum; // x3
  int32_t targetObjectId; // w2
  struct GiftEntity_o *v38; // x8
  unsigned int type; // w8
  UnityEngine_Object_o *rarityInfo; // x22
  UnityEngine_Object_o *countLbInfo; // x22
  __int64 v42; // x8
  _QWORD *v43; // x9
  __int64 v44; // x10
  __int64 v45; // x0
  int v46; // w10
  __int64 v47; // x8
  _QWORD *v48; // x9
  __int64 v49; // x10
  __int64 v50; // x0
  int32_t v51; // [xsp+4h] [xbp-4Ch] BYREF
  int32_t currenNum; // [xsp+8h] [xbp-48h] BYREF
  int32_t currentBoxGachaId; // [xsp+Ch] [xbp-44h] BYREF

  v5 = item;
  if ( (byte_4D2ABFB & 1) == 0 )
  {
    sub_1C93AD4(&EventRewardRootComponent_TypeInfo);
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&StringLiteral_19389/*"event_gachabanner_"*/);
    sub_1C93AD4(&StringLiteral_3014/*"BOX_GACHA_REWARD_NORMAL_TXT"*/);
    sub_1C93AD4(&StringLiteral_20416/*"icon_event_"*/);
    sub_1C93AD4(&StringLiteral_3013/*"BOX_GACHA_REWARD_DRAW_TXT"*/);
    sub_1C93AD4(&StringLiteral_19458/*"event_rewardgacha_"*/);
    byte_4D2ABFB = 1;
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
      v13 = &StringLiteral_19458/*"event_rewardgacha_"*/;
    }
    else
    {
      currentBoxGachaId = bannerId;
      v12 = System_Int32__ToString((int32_t)&currentBoxGachaId, 0);
      v13 = &StringLiteral_19389/*"event_gachabanner_"*/;
    }
    v14 = System_String__Concat_64425724((System_String_o *)*v13, v12, 0);
    if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
    EventRewardRootComponent__setRewardInfoImg(v11, v14, 0);
  }
  v15 = sub_1C93D20(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    (System_Collections_Generic_List_object__o *)v15,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_GameObject___ctor__);
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
    sub_1C93D2C(rareDispImgObj, item);
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
        ItemIconComponent__SetGift_41640856(
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
        ItemIconComponent__SetGift_41640856(
          (ItemIconComponent_o *)rareDispImgObj,
          (int32_t)item,
          targetObjectId,
          rewardNum,
          0,
          0);
        v38 = v5->fields.giftEnt;
        if ( v38 && (type = v38->fields.type, type <= 7) && ((1 << type) & 0xC2) != 0 )
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
          v42 = *(_QWORD *)(v15 + 16);
          v43 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++*(_DWORD *)(v15 + 28);
          if ( !v42 )
            goto LABEL_89;
          v44 = *(int *)(v15 + 24);
          if ( (unsigned int)v44 >= *(_DWORD *)(v42 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)v15,
              (Il2CppObject *)item,
              *(const MethodInfo_387999C **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
          }
          else
          {
            v45 = v42 + 8 * v44;
            *(_DWORD *)(v15 + 24) = v44 + 1;
            *(_QWORD *)(v45 + 32) = item;
            rareDispImgObj = sub_1C93A78(v45 + 32, item);
          }
          item = (BoxGachaItemListViewItem_o *)this->fields.countLbInfo;
          v46 = *(_DWORD *)(v15 + 28);
          v47 = *(_QWORD *)(v15 + 16);
          v48 = Method_System_Collections_Generic_List_GameObject__Add__;
        }
        else
        {
          item = (BoxGachaItemListViewItem_o *)this->fields.countLbInfo;
          v46 = *(_DWORD *)(v15 + 28);
          v47 = *(_QWORD *)(v15 + 16);
          v48 = Method_System_Collections_Generic_List_GameObject__Add__;
        }
        *(_DWORD *)(v15 + 28) = v46 + 1;
        if ( !v47 )
          goto LABEL_89;
        v49 = *(int *)(v15 + 24);
        if ( (unsigned int)v49 >= *(_DWORD *)(v47 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)v15,
            (Il2CppObject *)item,
            *(const MethodInfo_387999C **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
        }
        else
        {
          v50 = v47 + 8 * v49;
          *(_DWORD *)(v15 + 24) = v49 + 1;
          *(_QWORD *)(v50 + 32) = item;
          rareDispImgObj = sub_1C93A78(v50 + 32, item);
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
      ItemIconComponent__SetItemImage_41643304((ItemIconComponent_o *)rareDispImgObj, (int32_t)item, v20, 0);
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
  v23 = LocalizationManager__Get((System_String_o *)StringLiteral_3014/*"BOX_GACHA_REWARD_NORMAL_TXT"*/, 0);
  currenNum = v5->fields.currenNum;
  v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &currenNum);
  rareDispImgObj = (__int64)System_String__Format(v23, v24, 0);
  if ( !rewardNumLabel )
    goto LABEL_89;
  UILabel__set_text(rewardNumLabel, (System_String_o *)rareDispImgObj, 0);
  if ( v5->fields.isDraw )
  {
    v25 = this->fields.rewardNumLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v26 = LocalizationManager__Get((System_String_o *)StringLiteral_3013/*"BOX_GACHA_REWARD_DRAW_TXT"*/, 0);
    v51 = v5->fields.currenNum;
    v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v51);
    rareDispImgObj = (__int64)System_String__Format(v26, v27, 0);
    if ( !v25 )
      goto LABEL_89;
    UILabel__set_text(v25, (System_String_o *)rareDispImgObj, 0);
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
    v30 = v5->fields.gachaBaseData;
    if ( v30 )
    {
      rareDispImgObj = (__int64)this->fields.baseButton;
      if ( rareDispImgObj )
      {
        iconId = v30->fields.iconId;
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
          v32 = v5->fields.gachaBaseData;
          if ( v32 )
          {
            rareDispSprite = this->fields.rareDispSprite;
            currentBoxGachaId = v32->fields.iconId;
            v34 = System_Int32__ToString((int32_t)&currentBoxGachaId, 0);
            v35 = System_String__Concat_64425724((System_String_o *)StringLiteral_20416/*"icon_event_"*/, v34, 0);
            if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
            EventRewardRootComponent__setRewardInfoImg(rareDispSprite, v35, 0);
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