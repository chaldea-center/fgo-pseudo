void __fastcall BoxGachaItemListViewItemDraw___ctor(BoxGachaItemListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BoxGachaItemListViewItemDraw__Awake(BoxGachaItemListViewItemDraw_o *this, const MethodInfo *method)
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

  if ( (byte_4BCBAEC & 1) == 0 )
  {
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, method);
    byte_4BCBAEC = 1;
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
          sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.baseAtlas, (int64_t)mAtlas, v6, v7, v8, v9, v10, v11),
          (v20 = this->fields.baseSprite) == 0LL) )
    {
      sub_1C1AE30(v4, v5);
    }
    mSpriteName = v20->fields.mSpriteName;
    this->fields.baseSpriteName = mSpriteName;
    sub_1C1AB78(
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


void __fastcall BoxGachaItemListViewItemDraw__SetItem(
        BoxGachaItemListViewItemDraw_o *this,
        BoxGachaItemListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  BoxGachaItemListViewItem_o *v5; // x20
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  UnityEngine_GameObject_o *rareDispImgObj; // x0
  UnityEngine_Object_o *baseSprite; // x21
  struct BoxGachaBaseEntity_o *gachaBaseData; // x8
  int bannerId; // w8
  UISprite_o *v23; // x21
  System_String_o *v24; // x0
  __int64 *v25; // x8
  System_String_o *v26; // x22
  __int64 v27; // x21
  int32_t v28; // w2
  int v29; // w8
  struct BoxGachaBaseEntity_o *v30; // x8
  unsigned int *giftEnt; // x8
  int v32; // w8
  int32_t v33; // w2
  struct BoxGachaBaseEntity_o *v34; // x8
  UILabel_o *rewardNumLabel; // x21
  System_String_o *v36; // x22
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  Il2CppObject *v40; // x0
  UILabel_o *v41; // x21
  System_String_o *v42; // x22
  __int64 v43; // x2
  __int64 v44; // x3
  __int64 v45; // x4
  Il2CppObject *v46; // x0
  UILabel_o *maxNumLabel; // x21
  UnityEngine_Object_o *baseButton; // x21
  struct BoxGachaBaseEntity_o *v49; // x8
  int iconId; // w21
  struct BoxGachaBaseEntity_o *v51; // x8
  UISprite_o *rareDispSprite; // x20
  System_String_o *v53; // x0
  System_String_o *v54; // x21
  int32_t rewardNum; // w3
  int32_t targetObjectId; // w2
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  struct GiftEntity_o *v63; // x8
  unsigned int type; // w8
  UnityEngine_Object_o *rarityInfo; // x22
  UnityEngine_Object_o *countLbInfo; // x22
  int64_t v67; // x2
  int32_t v68; // w3
  System_String_o *v69; // x4
  BattleSetupInfo_o *v70; // x5
  FollowerInfo_o *v71; // x6
  PartyListViewItem_o *v72; // x7
  __int64 v73; // x8
  _QWORD *v74; // x9
  __int64 v75; // x10
  __int64 v76; // x0
  int v77; // w10
  __int64 v78; // x8
  _QWORD *v79; // x9
  __int64 v80; // x10
  __int64 v81; // x0
  int32_t v82; // [xsp+4h] [xbp-4Ch] BYREF
  int32_t currenNum; // [xsp+8h] [xbp-48h] BYREF
  int32_t currentBoxGachaId; // [xsp+Ch] [xbp-44h] BYREF

  v5 = item;
  if ( (byte_4BCBAED & 1) == 0 )
  {
    sub_1C1ABD4(&EventRewardRootComponent_TypeInfo, item);
    sub_1C1ABD4(&int_TypeInfo, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_GameObject__Add__, v8);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_GameObject__Clear__, v9);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_GameObject___ctor__, v10);
    sub_1C1ABD4(&System_Collections_Generic_List_GameObject__TypeInfo, v11);
    sub_1C1ABD4(&LocalizationManager_TypeInfo, v12);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v13);
    sub_1C1ABD4(&StringLiteral_19491/*"event_gachabanner_"*/, v14);
    sub_1C1ABD4(&StringLiteral_3139/*"BOX_GACHA_REWARD_NORMAL_TXT"*/, v15);
    sub_1C1ABD4(&StringLiteral_20483/*"icon_event_"*/, v16);
    sub_1C1ABD4(&StringLiteral_3138/*"BOX_GACHA_REWARD_DRAW_TXT"*/, v17);
    sub_1C1ABD4(&StringLiteral_19560/*"event_rewardgacha_"*/, v18);
    byte_4BCBAED = 1;
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
    v23 = this->fields.baseSprite;
    if ( bannerId < 1 )
    {
      currentBoxGachaId = v5->fields.currentBoxGachaId;
      v24 = System_Int32__ToString((int32_t)&currentBoxGachaId, 0LL);
      v25 = &StringLiteral_19560/*"event_rewardgacha_"*/;
    }
    else
    {
      currentBoxGachaId = bannerId;
      v24 = System_Int32__ToString((int32_t)&currentBoxGachaId, 0LL);
      v25 = &StringLiteral_19491/*"event_gachabanner_"*/;
    }
    v26 = System_String__Concat_63040368((System_String_o *)*v25, v24, 0LL);
    if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
    EventRewardRootComponent__setRewardInfoImg(v23, v26, 0LL);
  }
  v27 = sub_1C1AE20(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    (System_Collections_Generic_List_object__o *)v27,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_GameObject___ctor__);
  if ( !v27 )
    goto LABEL_89;
  v28 = *(_DWORD *)(v27 + 24);
  v29 = *(_DWORD *)(v27 + 28) + 1;
  *(_DWORD *)(v27 + 24) = 0;
  *(_DWORD *)(v27 + 28) = v29;
  if ( v28 >= 1 )
    System_Array__Clear(*(System_Array_o **)(v27 + 16), 0, v28, 0LL);
  v30 = v5->fields.gachaBaseData;
  if ( !v30 )
LABEL_89:
    sub_1C1AE30(rareDispImgObj, item);
  if ( v30->fields.type == 1 )
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
        ItemIconComponent__SetGift_39340176(
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
        ItemIconComponent__SetGift_39340176(
          (ItemIconComponent_o *)rareDispImgObj,
          (int32_t)item,
          targetObjectId,
          rewardNum,
          0,
          0LL);
        v63 = v5->fields.giftEnt;
        if ( v63 && (type = v63->fields.type, type <= 7) && ((1 << type) & 0xC2) != 0 )
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
          v73 = *(_QWORD *)(v27 + 16);
          v74 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++*(_DWORD *)(v27 + 28);
          if ( !v73 )
            goto LABEL_89;
          v75 = *(int *)(v27 + 24);
          if ( (unsigned int)v75 >= *(_DWORD *)(v73 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)v27,
              (Il2CppObject *)item,
              *(const MethodInfo_363C890 **)(*(_QWORD *)(v74[4] + 192LL) + 112LL));
          }
          else
          {
            v76 = v73 + 8 * v75;
            *(_DWORD *)(v27 + 24) = v75 + 1;
            *(_QWORD *)(v76 + 32) = item;
            sub_1C1AB78((PartyOrganizationUtility_o *)(v76 + 32), (int64_t)item, v67, v68, v69, v70, v71, v72);
          }
          item = (BoxGachaItemListViewItem_o *)this->fields.countLbInfo;
          v77 = *(_DWORD *)(v27 + 28);
          v78 = *(_QWORD *)(v27 + 16);
          v79 = Method_System_Collections_Generic_List_GameObject__Add__;
        }
        else
        {
          item = (BoxGachaItemListViewItem_o *)this->fields.countLbInfo;
          v77 = *(_DWORD *)(v27 + 28);
          v78 = *(_QWORD *)(v27 + 16);
          v79 = Method_System_Collections_Generic_List_GameObject__Add__;
        }
        *(_DWORD *)(v27 + 28) = v77 + 1;
        if ( !v78 )
          goto LABEL_89;
        v80 = *(int *)(v27 + 24);
        if ( (unsigned int)v80 >= *(_DWORD *)(v78 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)v27,
            (Il2CppObject *)item,
            *(const MethodInfo_363C890 **)(*(_QWORD *)(v79[4] + 192LL) + 112LL));
        }
        else
        {
          v81 = v78 + 8 * v80;
          *(_DWORD *)(v27 + 24) = v80 + 1;
          *(_QWORD *)(v81 + 32) = item;
          sub_1C1AB78((PartyOrganizationUtility_o *)(v81 + 32), (int64_t)item, v57, v58, v59, v60, v61, v62);
        }
      }
    }
    else
    {
      rareDispImgObj = (UnityEngine_GameObject_o *)this->fields.itemIcon;
      if ( !rareDispImgObj )
        goto LABEL_89;
      v32 = giftEnt[7];
      if ( v32 <= 1 )
        v33 = -1;
      else
        v33 = v32;
      ItemIconComponent__SetItemImage_39342608((ItemIconComponent_o *)rareDispImgObj, (int32_t)item, v33, 0LL);
    }
  }
LABEL_31:
  v34 = v5->fields.gachaBaseData;
  if ( !v34 )
    goto LABEL_89;
  if ( (v34->fields.type & 0xFFFFFFFE) == 2 )
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
    (System_Collections_Generic_List_GameObject__o *)v27,
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
  v36 = LocalizationManager__Get((System_String_o *)StringLiteral_3139/*"BOX_GACHA_REWARD_NORMAL_TXT"*/, 0LL);
  currenNum = v5->fields.currenNum;
  v40 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &currenNum, v37, v38, v39);
  rareDispImgObj = (UnityEngine_GameObject_o *)System_String__Format(v36, v40, 0LL);
  if ( !rewardNumLabel )
    goto LABEL_89;
  UILabel__set_text(rewardNumLabel, (System_String_o *)rareDispImgObj, 0LL);
  if ( v5->fields.isDraw )
  {
    v41 = this->fields.rewardNumLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v42 = LocalizationManager__Get((System_String_o *)StringLiteral_3138/*"BOX_GACHA_REWARD_DRAW_TXT"*/, 0LL);
    v82 = v5->fields.currenNum;
    v46 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v82, v43, v44, v45);
    rareDispImgObj = (UnityEngine_GameObject_o *)System_String__Format(v42, v46, 0LL);
    if ( !v41 )
      goto LABEL_89;
    UILabel__set_text(v41, (System_String_o *)rareDispImgObj, 0LL);
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
    v49 = v5->fields.gachaBaseData;
    if ( v49 )
    {
      rareDispImgObj = (UnityEngine_GameObject_o *)this->fields.baseButton;
      if ( rareDispImgObj )
      {
        iconId = v49->fields.iconId;
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
          v51 = v5->fields.gachaBaseData;
          if ( v51 )
          {
            rareDispSprite = this->fields.rareDispSprite;
            currentBoxGachaId = v51->fields.iconId;
            v53 = System_Int32__ToString((int32_t)&currentBoxGachaId, 0LL);
            v54 = System_String__Concat_63040368((System_String_o *)StringLiteral_20483/*"icon_event_"*/, v53, 0LL);
            if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
            EventRewardRootComponent__setRewardInfoImg(rareDispSprite, v54, 0LL);
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