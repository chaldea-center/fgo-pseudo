void __fastcall BoxGachaItemListViewItemDraw___ctor(BoxGachaItemListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BoxGachaItemListViewItemDraw__Awake(BoxGachaItemListViewItemDraw_o *this, const MethodInfo *method)
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

  if ( (byte_4A5EF6D & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5EF6D = 1;
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


void __fastcall BoxGachaItemListViewItemDraw__SetItem(
        BoxGachaItemListViewItemDraw_o *this,
        BoxGachaItemListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  BoxGachaItemListViewItem_o *v5; // x20
  UnityEngine_GameObject_o *rareDispImgObj; // x0
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
  int32_t v21; // w2
  struct BoxGachaBaseEntity_o *v22; // x8
  UILabel_o *rewardNumLabel; // x21
  System_String_o *v24; // x22
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  Il2CppObject *v28; // x0
  UILabel_o *v29; // x21
  System_String_o *v30; // x22
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  Il2CppObject *v34; // x0
  UILabel_o *maxNumLabel; // x21
  UnityEngine_Object_o *baseButton; // x21
  struct BoxGachaBaseEntity_o *v37; // x8
  int iconId; // w21
  struct BoxGachaBaseEntity_o *v39; // x8
  UISprite_o *rareDispSprite; // x20
  System_String_o *v41; // x0
  System_String_o *v42; // x21
  int32_t rewardNum; // w3
  int32_t targetObjectId; // w2
  int32_t v45; // w2
  int32_t v46; // w3
  struct GiftEntity_o *v47; // x8
  unsigned int type; // w8
  UnityEngine_Object_o *rarityInfo; // x22
  UnityEngine_Object_o *countLbInfo; // x22
  int32_t v51; // w2
  int32_t v52; // w3
  __int64 v53; // x8
  _QWORD *v54; // x9
  __int64 v55; // x10
  __int64 v56; // x0
  int v57; // w10
  __int64 v58; // x8
  _QWORD *v59; // x9
  __int64 v60; // x10
  __int64 v61; // x0
  int32_t v62; // [xsp+4h] [xbp-4Ch] BYREF
  int32_t currenNum; // [xsp+8h] [xbp-48h] BYREF
  int32_t currentBoxGachaId; // [xsp+Ch] [xbp-44h] BYREF

  v5 = item;
  if ( (byte_4A5EF6E & 1) == 0 )
  {
    sub_1B885B0(&EventRewardRootComponent_TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_19174/*"event_gachabanner_"*/);
    sub_1B885B0(&StringLiteral_3102/*"BOX_GACHA_REWARD_NORMAL_TXT"*/);
    sub_1B885B0(&StringLiteral_20144/*"icon_event_"*/);
    sub_1B885B0(&StringLiteral_3101/*"BOX_GACHA_REWARD_DRAW_TXT"*/);
    sub_1B885B0(&StringLiteral_19243/*"event_rewardgacha_"*/);
    byte_4A5EF6E = 1;
  }
  currentBoxGachaId = 0;
  if ( !v5 || !mode )
    return;
  rareDispImgObj = this->fields.rareDispImgObj;
  if ( !rareDispImgObj )
    goto LABEL_89;
  UnityEngine_GameObject__SetActive(rareDispImgObj, 0, 0LL);
  rareDispImgObj = (UnityEngine_GameObject_o *)this->fields.bonusSprite;
  if ( !rareDispImgObj )
    goto LABEL_89;
  rareDispImgObj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)rareDispImgObj, 0LL);
  if ( !rareDispImgObj )
    goto LABEL_89;
  UnityEngine_GameObject__SetActive(rareDispImgObj, 0, 0LL);
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  rareDispImgObj = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL);
  if ( ((unsigned __int8)rareDispImgObj & 1) != 0 && v5->fields.currentEventId >= 1 )
  {
    gachaBaseData = v5->fields.gachaBaseData;
    if ( !gachaBaseData )
      goto LABEL_89;
    bannerId = gachaBaseData->fields.bannerId;
    v11 = this->fields.baseSprite;
    if ( bannerId < 1 )
    {
      currentBoxGachaId = v5->fields.currentBoxGachaId;
      v12 = System_Int32__ToString((int32_t)&currentBoxGachaId, 0LL);
      v13 = &StringLiteral_19243/*"event_rewardgacha_"*/;
    }
    else
    {
      currentBoxGachaId = bannerId;
      v12 = System_Int32__ToString((int32_t)&currentBoxGachaId, 0LL);
      v13 = &StringLiteral_19174/*"event_gachabanner_"*/;
    }
    v14 = System_String__Concat_61707032((System_String_o *)*v13, v12, 0LL);
    if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
    EventRewardRootComponent__setRewardInfoImg(v11, v14, 0LL);
  }
  v15 = sub_1B887FC(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    (System_Collections_Generic_List_object__o *)v15,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  if ( !v15 )
    goto LABEL_89;
  v16 = *(_DWORD *)(v15 + 24);
  v17 = *(_DWORD *)(v15 + 28) + 1;
  *(_DWORD *)(v15 + 24) = 0;
  *(_DWORD *)(v15 + 28) = v17;
  if ( v16 >= 1 )
    System_Array__Clear(*(System_Array_o **)(v15 + 16), 0, v16, 0LL);
  v18 = v5->fields.gachaBaseData;
  if ( !v18 )
LABEL_89:
    sub_1B8880C(rareDispImgObj, item);
  if ( v18->fields.type == 1 )
  {
    giftEnt = (unsigned int *)v5->fields.giftEnt;
    if ( !giftEnt )
      goto LABEL_89;
    item = (BoxGachaItemListViewItem_o *)giftEnt[11];
    if ( (int)item < 1 )
    {
      rewardNum = v5->fields.rewardNum;
      rareDispImgObj = (UnityEngine_GameObject_o *)this->fields.itemIcon;
      item = (BoxGachaItemListViewItem_o *)giftEnt[5];
      targetObjectId = v5->fields.targetObjectId;
      if ( rewardNum < 1 )
      {
        if ( !rareDispImgObj )
          goto LABEL_89;
        ItemIconComponent__SetGift_38144896(
          (ItemIconComponent_o *)rareDispImgObj,
          (int32_t)item,
          targetObjectId,
          -1,
          0,
          0LL);
      }
      else
      {
        if ( !rareDispImgObj )
          goto LABEL_89;
        ItemIconComponent__SetGift_38144896(
          (ItemIconComponent_o *)rareDispImgObj,
          (int32_t)item,
          targetObjectId,
          rewardNum,
          0,
          0LL);
        v47 = v5->fields.giftEnt;
        if ( v47 && (type = v47->fields.type, type <= 7) && ((1 << type) & 0xC2) != 0 )
        {
          rarityInfo = (UnityEngine_Object_o *)this->fields.rarityInfo;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          rareDispImgObj = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(rarityInfo, 0LL, 0LL);
          if ( ((unsigned __int8)rareDispImgObj & 1) == 0 )
            goto LABEL_31;
          countLbInfo = (UnityEngine_Object_o *)this->fields.countLbInfo;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          rareDispImgObj = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(countLbInfo, 0LL, 0LL);
          if ( ((unsigned __int8)rareDispImgObj & 1) == 0 )
            goto LABEL_31;
          item = (BoxGachaItemListViewItem_o *)this->fields.rarityInfo;
          v53 = *(_QWORD *)(v15 + 16);
          v54 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++*(_DWORD *)(v15 + 28);
          if ( !v53 )
            goto LABEL_89;
          v55 = *(int *)(v15 + 24);
          if ( (unsigned int)v55 >= *(_DWORD *)(v53 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)v15,
              (Il2CppObject *)item,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
          }
          else
          {
            v56 = v53 + 8 * v55;
            *(_DWORD *)(v15 + 24) = v55 + 1;
            *(_QWORD *)(v56 + 32) = item;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v56 + 32), (int32_t)item, v51, v52);
          }
          item = (BoxGachaItemListViewItem_o *)this->fields.countLbInfo;
          v57 = *(_DWORD *)(v15 + 28);
          v58 = *(_QWORD *)(v15 + 16);
          v59 = Method_System_Collections_Generic_List_GameObject__Add__;
        }
        else
        {
          item = (BoxGachaItemListViewItem_o *)this->fields.countLbInfo;
          v57 = *(_DWORD *)(v15 + 28);
          v58 = *(_QWORD *)(v15 + 16);
          v59 = Method_System_Collections_Generic_List_GameObject__Add__;
        }
        *(_DWORD *)(v15 + 28) = v57 + 1;
        if ( !v58 )
          goto LABEL_89;
        v60 = *(int *)(v15 + 24);
        if ( (unsigned int)v60 >= *(_DWORD *)(v58 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)v15,
            (Il2CppObject *)item,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v59[4] + 192LL) + 112LL));
        }
        else
        {
          v61 = v58 + 8 * v60;
          *(_DWORD *)(v15 + 24) = v60 + 1;
          *(_QWORD *)(v61 + 32) = item;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v61 + 32), (int32_t)item, v45, v46);
        }
      }
    }
    else
    {
      rareDispImgObj = (UnityEngine_GameObject_o *)this->fields.itemIcon;
      if ( !rareDispImgObj )
        goto LABEL_89;
      v20 = giftEnt[7];
      if ( v20 <= 1 )
        v21 = -1;
      else
        v21 = v20;
      ItemIconComponent__SetItemImage_38147292((ItemIconComponent_o *)rareDispImgObj, (int32_t)item, v21, 0LL);
    }
  }
LABEL_31:
  v22 = v5->fields.gachaBaseData;
  if ( !v22 )
    goto LABEL_89;
  if ( (v22->fields.type & 0xFFFFFFFE) == 2 )
  {
    rareDispImgObj = (UnityEngine_GameObject_o *)this->fields.itemIcon;
    if ( !rareDispImgObj )
      goto LABEL_89;
    ItemIconComponent__SetItemImage((ItemIconComponent_o *)rareDispImgObj, v5->fields.targetImgId, 0LL);
  }
  rareDispImgObj = (UnityEngine_GameObject_o *)this->fields.numDispctr;
  if ( !rareDispImgObj )
    goto LABEL_89;
  ItemNumDispControl__InitEventAlphaAnim(
    (ItemNumDispControl_o *)rareDispImgObj,
    (System_Collections_Generic_List_GameObject__o *)v15,
    0LL);
  rareDispImgObj = (UnityEngine_GameObject_o *)this->fields.nameTextLabel;
  if ( !rareDispImgObj )
    goto LABEL_89;
  UILabel__set_text((UILabel_o *)rareDispImgObj, v5->fields.nameTxt, 0LL);
  rareDispImgObj = (UnityEngine_GameObject_o *)this->fields.msgTextLabel;
  if ( !rareDispImgObj )
    goto LABEL_89;
  UILabel__set_text((UILabel_o *)rareDispImgObj, v5->fields.detailTxt, 0LL);
  rewardNumLabel = this->fields.rewardNumLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v24 = LocalizationManager__Get((System_String_o *)StringLiteral_3102/*"BOX_GACHA_REWARD_NORMAL_TXT"*/, 0LL);
  currenNum = v5->fields.currenNum;
  v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &currenNum, v25, v26, v27);
  rareDispImgObj = (UnityEngine_GameObject_o *)System_String__Format(v24, v28, 0LL);
  if ( !rewardNumLabel )
    goto LABEL_89;
  UILabel__set_text(rewardNumLabel, (System_String_o *)rareDispImgObj, 0LL);
  if ( v5->fields.isDraw )
  {
    v29 = this->fields.rewardNumLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v30 = LocalizationManager__Get((System_String_o *)StringLiteral_3101/*"BOX_GACHA_REWARD_DRAW_TXT"*/, 0LL);
    v62 = v5->fields.currenNum;
    v34 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v62, v31, v32, v33);
    rareDispImgObj = (UnityEngine_GameObject_o *)System_String__Format(v30, v34, 0LL);
    if ( !v29 )
      goto LABEL_89;
    UILabel__set_text(v29, (System_String_o *)rareDispImgObj, 0LL);
  }
  maxNumLabel = this->fields.maxNumLabel;
  currentBoxGachaId = v5->fields.maxNum;
  rareDispImgObj = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&currentBoxGachaId, 0LL);
  if ( !maxNumLabel )
    goto LABEL_89;
  UILabel__set_text(maxNumLabel, (System_String_o *)rareDispImgObj, 0LL);
  rareDispImgObj = (UnityEngine_GameObject_o *)this->fields.maskSprite;
  if ( !rareDispImgObj )
    goto LABEL_89;
  rareDispImgObj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)rareDispImgObj, 0LL);
  if ( !rareDispImgObj )
    goto LABEL_89;
  UnityEngine_GameObject__SetActive(rareDispImgObj, v5->fields.currenNum < 1, 0LL);
  if ( v5->fields.isRare )
  {
    rareDispImgObj = (UnityEngine_GameObject_o *)this->fields.bonusSprite;
    if ( !rareDispImgObj )
      goto LABEL_89;
    rareDispImgObj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)rareDispImgObj, 0LL);
    if ( !rareDispImgObj )
      goto LABEL_89;
    UnityEngine_GameObject__SetActive(rareDispImgObj, 1, 0LL);
  }
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  rareDispImgObj = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL);
  if ( ((unsigned __int8)rareDispImgObj & 1) != 0 )
  {
    v37 = v5->fields.gachaBaseData;
    if ( v37 )
    {
      rareDispImgObj = (UnityEngine_GameObject_o *)this->fields.baseButton;
      if ( rareDispImgObj )
      {
        iconId = v37->fields.iconId;
        UICommonButton__SetColliderEnable((UICommonButton_o *)rareDispImgObj, 1, 1, 0LL);
        rareDispImgObj = (UnityEngine_GameObject_o *)this->fields.baseButton;
        if ( rareDispImgObj )
        {
          rareDispImgObj = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))rareDispImgObj->klass[1]._1.implementedInterfaces)(
                                                         rareDispImgObj,
                                                         0LL,
                                                         1LL,
                                                         rareDispImgObj->klass[1]._1.interfaceOffsets);
          if ( iconId < 1 )
            return;
          v39 = v5->fields.gachaBaseData;
          if ( v39 )
          {
            rareDispSprite = this->fields.rareDispSprite;
            currentBoxGachaId = v39->fields.iconId;
            v41 = System_Int32__ToString((int32_t)&currentBoxGachaId, 0LL);
            v42 = System_String__Concat_61707032((System_String_o *)StringLiteral_20144/*"icon_event_"*/, v41, 0LL);
            if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
            EventRewardRootComponent__setRewardInfoImg(rareDispSprite, v42, 0LL);
            rareDispImgObj = this->fields.rareDispImgObj;
            if ( rareDispImgObj )
            {
              UnityEngine_GameObject__SetActive(rareDispImgObj, 1, 0LL);
              return;
            }
          }
        }
      }
    }
    goto LABEL_89;
  }
}