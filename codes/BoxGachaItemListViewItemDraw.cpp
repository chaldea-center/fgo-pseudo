void __fastcall BoxGachaItemListViewItemDraw___ctor(BoxGachaItemListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BoxGachaItemListViewItemDraw__Awake(BoxGachaItemListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *baseSprite; // x20
  _BOOL8 v4; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  struct UISprite_o *v11; // x8
  struct UIAtlas_o *mAtlas; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  struct UISprite_o *v19; // x8
  struct System_String_o *mSpriteName; // x1

  if ( (byte_4216326 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4216326 = 1;
  }
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v4 = UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL);
  if ( v4 )
  {
    v11 = this->fields.baseSprite;
    if ( !v11
      || (mAtlas = v11->fields.mAtlas,
          this->fields.baseAtlas = mAtlas,
          sub_B0D840(
            (BattleServantConfConponent_o *)&this->fields.baseAtlas,
            (System_Int32_array **)mAtlas,
            v5,
            v6,
            v7,
            v8,
            v9,
            v10),
          (v19 = this->fields.baseSprite) == 0LL) )
    {
      sub_B0D97C(v4);
    }
    mSpriteName = v19->fields.mSpriteName;
    this->fields.baseSpriteName = mSpriteName;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.baseSpriteName,
      (System_Int32_array **)mSpriteName,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
  }
}


void __fastcall BoxGachaItemListViewItemDraw__SetItem(
        BoxGachaItemListViewItemDraw_o *this,
        BoxGachaItemListViewItem_o *item,
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
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  UnityEngine_GameObject_o *rareDispImgObj; // x0
  UnityEngine_Object_o *baseSprite; // x21
  __int64 v21; // x1
  __int64 v22; // x2
  struct BoxGachaBaseEntity_o *gachaBaseData; // x8
  int bannerId; // w8
  UISprite_o *v25; // x21
  System_String_o *v26; // x0
  __int64 *v27; // x8
  System_String_o *v28; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v29; // x21
  struct BoxGachaBaseEntity_o *v30; // x8
  struct GiftEntity_o *giftEnt; // x8
  int32_t prioredIconId; // w1
  int num; // w8
  int32_t v34; // w2
  struct BoxGachaBaseEntity_o *v35; // x8
  UILabel_o *rewardNumLabel; // x21
  System_String_o *v37; // x22
  Il2CppObject *v38; // x0
  UILabel_o *v39; // x21
  System_String_o *v40; // x22
  Il2CppObject *v41; // x0
  UILabel_o *maxNumLabel; // x21
  UnityEngine_Object_o *baseButton; // x21
  struct BoxGachaBaseEntity_o *v44; // x8
  int iconId; // w21
  struct BoxGachaBaseEntity_o *v46; // x8
  UISprite_o *rareDispSprite; // x20
  System_String_o *v48; // x0
  System_String_o *v49; // x21
  int rewardNum; // w3
  int32_t type; // w1
  int32_t targetObjectId; // w2
  struct GiftEntity_o *v53; // x8
  unsigned int v54; // w8
  UnityEngine_Object_o *rarityInfo; // x22
  UnityEngine_Object_o *countLbInfo; // x22
  struct UnityEngine_GameObject_o *v57; // x1
  const MethodInfo_2FC56E8 *v58; // x2
  int32_t v59; // [xsp+Ch] [xbp-44h] BYREF
  int32_t currenNum; // [xsp+18h] [xbp-38h] BYREF
  int32_t currentBoxGachaId; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_4216327 & 1) == 0 )
  {
    sub_B0D8A4(&EventRewardRootComponent_TypeInfo, item);
    sub_B0D8A4(&int_TypeInfo, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__Add__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__Clear__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject___ctor__, v10);
    sub_B0D8A4(&System_Collections_Generic_List_GameObject__TypeInfo, v11);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v12);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v13);
    sub_B0D8A4(&StringLiteral_18566/*"event_gachabanner_"*/, v14);
    sub_B0D8A4(&StringLiteral_2635/*"BOX_GACHA_REWARD_NORMAL_TXT"*/, v15);
    sub_B0D8A4(&StringLiteral_19395/*"icon_event_"*/, v16);
    sub_B0D8A4(&StringLiteral_2634/*"BOX_GACHA_REWARD_DRAW_TXT"*/, v17);
    sub_B0D8A4(&StringLiteral_18633/*"event_rewardgacha_"*/, v18);
    byte_4216327 = 1;
  }
  currentBoxGachaId = 0;
  if ( !item || !mode )
    return;
  rareDispImgObj = this->fields.rareDispImgObj;
  if ( !rareDispImgObj )
    goto LABEL_88;
  UnityEngine_GameObject__SetActive(rareDispImgObj, 0, 0LL);
  rareDispImgObj = (UnityEngine_GameObject_o *)this->fields.bonusSprite;
  if ( !rareDispImgObj )
    goto LABEL_88;
  rareDispImgObj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)rareDispImgObj, 0LL);
  if ( !rareDispImgObj )
    goto LABEL_88;
  UnityEngine_GameObject__SetActive(rareDispImgObj, 0, 0LL);
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  rareDispImgObj = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL);
  if ( ((unsigned __int8)rareDispImgObj & 1) != 0 && item->fields.currentEventId >= 1 )
  {
    gachaBaseData = item->fields.gachaBaseData;
    if ( !gachaBaseData )
      goto LABEL_88;
    bannerId = gachaBaseData->fields.bannerId;
    v25 = this->fields.baseSprite;
    if ( bannerId < 1 )
    {
      currentBoxGachaId = item->fields.currentBoxGachaId;
      v26 = System_Int32__ToString((int32_t)&currentBoxGachaId, 0LL);
      v27 = &StringLiteral_18633/*"event_rewardgacha_"*/;
    }
    else
    {
      currentBoxGachaId = bannerId;
      v26 = System_Int32__ToString((int32_t)&currentBoxGachaId, 0LL);
      v27 = &StringLiteral_18566/*"event_gachabanner_"*/;
    }
    v28 = System_String__Concat_43849904((System_String_o *)*v27, v26, 0LL);
    if ( (BYTE3(EventRewardRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
    }
    EventRewardRootComponent__setRewardInfoImg(v25, v28, 0LL);
  }
  v29 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_GameObject__TypeInfo,
                                                                                                  v21,
                                                                                                  v22);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v29,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  if ( !v29
    || (System_Collections_Generic_List_XWeaponTrail_Element___Clear(
          (System_Collections_Generic_List_XWeaponTrail_Element__o *)v29,
          (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_GameObject__Clear__),
        (v30 = item->fields.gachaBaseData) == 0LL) )
  {
LABEL_88:
    sub_B0D97C(rareDispImgObj);
  }
  if ( v30->fields.type == 1 )
  {
    giftEnt = item->fields.giftEnt;
    if ( !giftEnt )
      goto LABEL_88;
    prioredIconId = giftEnt->fields.prioredIconId;
    if ( prioredIconId < 1 )
    {
      rewardNum = item->fields.rewardNum;
      rareDispImgObj = (UnityEngine_GameObject_o *)this->fields.itemIcon;
      type = giftEnt->fields.type;
      targetObjectId = item->fields.targetObjectId;
      if ( rewardNum >= 1 )
      {
        if ( !rareDispImgObj )
          goto LABEL_88;
        ItemIconComponent__SetGift((ItemIconComponent_o *)rareDispImgObj, type, targetObjectId, rewardNum, 0, 0LL);
        v53 = item->fields.giftEnt;
        if ( v53 && (v54 = v53->fields.type, v54 <= 7) && ((1 << v54) & 0xC2) != 0 )
        {
          rarityInfo = (UnityEngine_Object_o *)this->fields.rarityInfo;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          rareDispImgObj = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(rarityInfo, 0LL, 0LL);
          if ( ((unsigned __int8)rareDispImgObj & 1) == 0 )
            goto LABEL_31;
          countLbInfo = (UnityEngine_Object_o *)this->fields.countLbInfo;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          rareDispImgObj = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(countLbInfo, 0LL, 0LL);
          if ( ((unsigned __int8)rareDispImgObj & 1) == 0 )
            goto LABEL_31;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v29,
            (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.rarityInfo,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_GameObject__Add__);
          v57 = this->fields.countLbInfo;
          v58 = (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_GameObject__Add__;
        }
        else
        {
          v57 = this->fields.countLbInfo;
          v58 = (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_GameObject__Add__;
        }
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v29,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v57,
          v58);
        goto LABEL_31;
      }
      if ( !rareDispImgObj )
        goto LABEL_88;
      ItemIconComponent__SetGift((ItemIconComponent_o *)rareDispImgObj, type, targetObjectId, -1, 0, 0LL);
    }
    else
    {
      rareDispImgObj = (UnityEngine_GameObject_o *)this->fields.itemIcon;
      if ( !rareDispImgObj )
        goto LABEL_88;
      num = giftEnt->fields.num;
      if ( num <= 1 )
        v34 = -1;
      else
        v34 = num;
      ItemIconComponent__SetItemImage_26857580((ItemIconComponent_o *)rareDispImgObj, prioredIconId, v34, 0LL);
    }
  }
LABEL_31:
  v35 = item->fields.gachaBaseData;
  if ( !v35 )
    goto LABEL_88;
  if ( (v35->fields.type & 0xFFFFFFFE) == 2 )
  {
    rareDispImgObj = (UnityEngine_GameObject_o *)this->fields.itemIcon;
    if ( !rareDispImgObj )
      goto LABEL_88;
    ItemIconComponent__SetItemImage((ItemIconComponent_o *)rareDispImgObj, item->fields.targetImgId, 0LL);
  }
  rareDispImgObj = (UnityEngine_GameObject_o *)this->fields.numDispctr;
  if ( !rareDispImgObj )
    goto LABEL_88;
  ItemNumDispControl__InitEventAlphaAnim(
    (ItemNumDispControl_o *)rareDispImgObj,
    (System_Collections_Generic_List_GameObject__o *)v29,
    0LL);
  rareDispImgObj = (UnityEngine_GameObject_o *)this->fields.nameTextLabel;
  if ( !rareDispImgObj )
    goto LABEL_88;
  UILabel__set_text((UILabel_o *)rareDispImgObj, item->fields.nameTxt, 0LL);
  rareDispImgObj = (UnityEngine_GameObject_o *)this->fields.msgTextLabel;
  if ( !rareDispImgObj )
    goto LABEL_88;
  UILabel__set_text((UILabel_o *)rareDispImgObj, item->fields.detailTxt, 0LL);
  rewardNumLabel = this->fields.rewardNumLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v37 = LocalizationManager__Get((System_String_o *)StringLiteral_2635/*"BOX_GACHA_REWARD_NORMAL_TXT"*/, 0LL);
  currenNum = item->fields.currenNum;
  v38 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &currenNum);
  rareDispImgObj = (UnityEngine_GameObject_o *)System_String__Format(v37, v38, 0LL);
  if ( !rewardNumLabel )
    goto LABEL_88;
  UILabel__set_text(rewardNumLabel, (System_String_o *)rareDispImgObj, 0LL);
  if ( item->fields.isDraw )
  {
    v39 = this->fields.rewardNumLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v40 = LocalizationManager__Get((System_String_o *)StringLiteral_2634/*"BOX_GACHA_REWARD_DRAW_TXT"*/, 0LL);
    v59 = item->fields.currenNum;
    v41 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v59);
    rareDispImgObj = (UnityEngine_GameObject_o *)System_String__Format(v40, v41, 0LL);
    if ( !v39 )
      goto LABEL_88;
    UILabel__set_text(v39, (System_String_o *)rareDispImgObj, 0LL);
  }
  maxNumLabel = this->fields.maxNumLabel;
  currentBoxGachaId = item->fields.maxNum;
  rareDispImgObj = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&currentBoxGachaId, 0LL);
  if ( !maxNumLabel )
    goto LABEL_88;
  UILabel__set_text(maxNumLabel, (System_String_o *)rareDispImgObj, 0LL);
  rareDispImgObj = (UnityEngine_GameObject_o *)this->fields.maskSprite;
  if ( !rareDispImgObj )
    goto LABEL_88;
  rareDispImgObj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)rareDispImgObj, 0LL);
  if ( !rareDispImgObj )
    goto LABEL_88;
  UnityEngine_GameObject__SetActive(rareDispImgObj, item->fields.currenNum < 1, 0LL);
  if ( item->fields.isRare )
  {
    rareDispImgObj = (UnityEngine_GameObject_o *)this->fields.bonusSprite;
    if ( !rareDispImgObj )
      goto LABEL_88;
    rareDispImgObj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)rareDispImgObj, 0LL);
    if ( !rareDispImgObj )
      goto LABEL_88;
    UnityEngine_GameObject__SetActive(rareDispImgObj, 1, 0LL);
  }
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  rareDispImgObj = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL);
  if ( ((unsigned __int8)rareDispImgObj & 1) != 0 )
  {
    v44 = item->fields.gachaBaseData;
    if ( v44 )
    {
      rareDispImgObj = (UnityEngine_GameObject_o *)this->fields.baseButton;
      if ( rareDispImgObj )
      {
        iconId = v44->fields.iconId;
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
          v46 = item->fields.gachaBaseData;
          if ( v46 )
          {
            rareDispSprite = this->fields.rareDispSprite;
            currentBoxGachaId = v46->fields.iconId;
            v48 = System_Int32__ToString((int32_t)&currentBoxGachaId, 0LL);
            v49 = System_String__Concat_43849904((System_String_o *)StringLiteral_19395/*"icon_event_"*/, v48, 0LL);
            if ( (BYTE3(EventRewardRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
            }
            EventRewardRootComponent__setRewardInfoImg(rareDispSprite, v49, 0LL);
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
    goto LABEL_88;
  }
}