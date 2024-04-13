void __fastcall BoxGachaItemListViewItemDraw___ctor(BoxGachaItemListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BoxGachaItemListViewItemDraw__Awake(BoxGachaItemListViewItemDraw_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *baseSprite; // x20
  _BOOL8 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  struct UISprite_o *v14; // x8
  struct UIAtlas_o *mAtlas; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  struct UISprite_o *v22; // x8
  struct System_String_o *mSpriteName; // x1

  if ( (byte_42EA570 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EA570 = 1;
  }
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL);
  if ( v6 )
  {
    v14 = this->fields.baseSprite;
    if ( !v14
      || (mAtlas = v14->fields.mAtlas,
          this->fields.baseAtlas = mAtlas,
          sub_B5D560(
            (BattleServantConfConponent_o *)&this->fields.baseAtlas,
            (System_Int32_array **)mAtlas,
            v8,
            v9,
            v10,
            v11,
            v12,
            v13),
          (v22 = this->fields.baseSprite) == 0LL) )
    {
      sub_B5D69C(v6, v7);
    }
    mSpriteName = v22->fields.mSpriteName;
    this->fields.baseSpriteName = mSpriteName;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.baseSpriteName,
      (System_Int32_array **)mSpriteName,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
}


void __fastcall BoxGachaItemListViewItemDraw__SetItem(
        BoxGachaItemListViewItemDraw_o *this,
        BoxGachaItemListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  BoxGachaItemListViewItem_o *v5; // x20
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  UnityEngine_GameObject_o *rareDispImgObj; // x0
  UnityEngine_Object_o *baseSprite; // x21
  struct BoxGachaBaseEntity_o *gachaBaseData; // x8
  int bannerId; // w8
  UISprite_o *v47; // x21
  System_String_o *v48; // x0
  __int64 *v49; // x8
  System_String_o *v50; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v51; // x21
  struct BoxGachaBaseEntity_o *v52; // x8
  unsigned int *giftEnt; // x8
  int v54; // w8
  int32_t v55; // w2
  struct BoxGachaBaseEntity_o *v56; // x8
  UILabel_o *rewardNumLabel; // x21
  System_String_o *v58; // x22
  Il2CppObject *v59; // x0
  UILabel_o *v60; // x21
  System_String_o *v61; // x22
  Il2CppObject *v62; // x0
  UILabel_o *maxNumLabel; // x21
  UnityEngine_Object_o *baseButton; // x21
  struct BoxGachaBaseEntity_o *v65; // x8
  int iconId; // w21
  struct BoxGachaBaseEntity_o *v67; // x8
  UISprite_o *rareDispSprite; // x20
  System_String_o *v69; // x0
  System_String_o *v70; // x21
  int32_t rewardNum; // w3
  int32_t targetObjectId; // w2
  struct GiftEntity_o *v73; // x8
  unsigned int type; // w8
  UnityEngine_Object_o *rarityInfo; // x22
  UnityEngine_Object_o *countLbInfo; // x22
  struct UnityEngine_GameObject_o *v77; // x1
  const MethodInfo_3056FC0 *v78; // x2
  int32_t v79; // [xsp+Ch] [xbp-44h] BYREF
  int32_t currenNum; // [xsp+18h] [xbp-38h] BYREF
  int32_t currentBoxGachaId; // [xsp+1Ch] [xbp-34h] BYREF

  v5 = item;
  if ( (byte_42EA571 & 1) == 0 )
  {
    sub_B5D5C4(&EventRewardRootComponent_TypeInfo, (_DWORD)item, mode, method);
    sub_B5D5C4(&int_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__Add__, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__Clear__, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject___ctor__, v16, v17, v18);
    sub_B5D5C4(&System_Collections_Generic_List_GameObject__TypeInfo, v19, v20, v21);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v22, v23, v24);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v25, v26, v27);
    sub_B5D5C4(&StringLiteral_18738/*"event_gachabanner_"*/, v28, v29, v30);
    sub_B5D5C4(&StringLiteral_2678/*"BOX_GACHA_REWARD_NORMAL_TXT"*/, v31, v32, v33);
    sub_B5D5C4(&StringLiteral_19578/*"icon_event_"*/, v34, v35, v36);
    sub_B5D5C4(&StringLiteral_2677/*"BOX_GACHA_REWARD_DRAW_TXT"*/, v37, v38, v39);
    sub_B5D5C4(&StringLiteral_18806/*"event_rewardgacha_"*/, v40, v41, v42);
    byte_42EA571 = 1;
  }
  currentBoxGachaId = 0;
  if ( !v5 || !mode )
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
  if ( ((unsigned __int8)rareDispImgObj & 1) != 0 && v5->fields.currentEventId >= 1 )
  {
    gachaBaseData = v5->fields.gachaBaseData;
    if ( !gachaBaseData )
      goto LABEL_88;
    bannerId = gachaBaseData->fields.bannerId;
    v47 = this->fields.baseSprite;
    if ( bannerId < 1 )
    {
      currentBoxGachaId = v5->fields.currentBoxGachaId;
      v48 = System_Int32__ToString((int32_t)&currentBoxGachaId, 0LL);
      v49 = &StringLiteral_18806/*"event_rewardgacha_"*/;
    }
    else
    {
      currentBoxGachaId = bannerId;
      v48 = System_Int32__ToString((int32_t)&currentBoxGachaId, 0LL);
      v49 = &StringLiteral_18738/*"event_gachabanner_"*/;
    }
    v50 = System_String__Concat_44577788((System_String_o *)*v49, v48, 0LL);
    if ( (BYTE3(EventRewardRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
    }
    EventRewardRootComponent__setRewardInfoImg(v47, v50, 0LL);
  }
  v51 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v51,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_GameObject___ctor__);
  if ( !v51
    || (System_Collections_Generic_List_XWeaponTrail_Element___Clear(
          (System_Collections_Generic_List_XWeaponTrail_Element__o *)v51,
          (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_GameObject__Clear__),
        (v52 = v5->fields.gachaBaseData) == 0LL) )
  {
LABEL_88:
    sub_B5D69C(rareDispImgObj, item);
  }
  if ( v52->fields.type == 1 )
  {
    giftEnt = (unsigned int *)v5->fields.giftEnt;
    if ( !giftEnt )
      goto LABEL_88;
    item = (BoxGachaItemListViewItem_o *)giftEnt[11];
    if ( (int)item < 1 )
    {
      rewardNum = v5->fields.rewardNum;
      rareDispImgObj = (UnityEngine_GameObject_o *)this->fields.itemIcon;
      item = (BoxGachaItemListViewItem_o *)giftEnt[5];
      targetObjectId = v5->fields.targetObjectId;
      if ( rewardNum >= 1 )
      {
        if ( !rareDispImgObj )
          goto LABEL_88;
        ItemIconComponent__SetGift(
          (ItemIconComponent_o *)rareDispImgObj,
          (int32_t)item,
          targetObjectId,
          rewardNum,
          0,
          0LL);
        v73 = v5->fields.giftEnt;
        if ( v73 && (type = v73->fields.type, type <= 7) && ((1 << type) & 0xC2) != 0 )
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
            v51,
            (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.rarityInfo,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_GameObject__Add__);
          v77 = this->fields.countLbInfo;
          v78 = (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_GameObject__Add__;
        }
        else
        {
          v77 = this->fields.countLbInfo;
          v78 = (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_GameObject__Add__;
        }
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v51,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v77,
          v78);
        goto LABEL_31;
      }
      if ( !rareDispImgObj )
        goto LABEL_88;
      ItemIconComponent__SetGift((ItemIconComponent_o *)rareDispImgObj, (int32_t)item, targetObjectId, -1, 0, 0LL);
    }
    else
    {
      rareDispImgObj = (UnityEngine_GameObject_o *)this->fields.itemIcon;
      if ( !rareDispImgObj )
        goto LABEL_88;
      v54 = giftEnt[7];
      if ( v54 <= 1 )
        v55 = -1;
      else
        v55 = v54;
      ItemIconComponent__SetItemImage_28499576((ItemIconComponent_o *)rareDispImgObj, (int32_t)item, v55, 0LL);
    }
  }
LABEL_31:
  v56 = v5->fields.gachaBaseData;
  if ( !v56 )
    goto LABEL_88;
  if ( (v56->fields.type & 0xFFFFFFFE) == 2 )
  {
    rareDispImgObj = (UnityEngine_GameObject_o *)this->fields.itemIcon;
    if ( !rareDispImgObj )
      goto LABEL_88;
    ItemIconComponent__SetItemImage((ItemIconComponent_o *)rareDispImgObj, v5->fields.targetImgId, 0LL);
  }
  rareDispImgObj = (UnityEngine_GameObject_o *)this->fields.numDispctr;
  if ( !rareDispImgObj )
    goto LABEL_88;
  ItemNumDispControl__InitEventAlphaAnim(
    (ItemNumDispControl_o *)rareDispImgObj,
    (System_Collections_Generic_List_GameObject__o *)v51,
    0LL);
  rareDispImgObj = (UnityEngine_GameObject_o *)this->fields.nameTextLabel;
  if ( !rareDispImgObj )
    goto LABEL_88;
  UILabel__set_text((UILabel_o *)rareDispImgObj, v5->fields.nameTxt, 0LL);
  rareDispImgObj = (UnityEngine_GameObject_o *)this->fields.msgTextLabel;
  if ( !rareDispImgObj )
    goto LABEL_88;
  UILabel__set_text((UILabel_o *)rareDispImgObj, v5->fields.detailTxt, 0LL);
  rewardNumLabel = this->fields.rewardNumLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v58 = LocalizationManager__Get((System_String_o *)StringLiteral_2678/*"BOX_GACHA_REWARD_NORMAL_TXT"*/, 0LL);
  currenNum = v5->fields.currenNum;
  v59 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &currenNum);
  rareDispImgObj = (UnityEngine_GameObject_o *)System_String__Format(v58, v59, 0LL);
  if ( !rewardNumLabel )
    goto LABEL_88;
  UILabel__set_text(rewardNumLabel, (System_String_o *)rareDispImgObj, 0LL);
  if ( v5->fields.isDraw )
  {
    v60 = this->fields.rewardNumLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v61 = LocalizationManager__Get((System_String_o *)StringLiteral_2677/*"BOX_GACHA_REWARD_DRAW_TXT"*/, 0LL);
    v79 = v5->fields.currenNum;
    v62 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v79);
    rareDispImgObj = (UnityEngine_GameObject_o *)System_String__Format(v61, v62, 0LL);
    if ( !v60 )
      goto LABEL_88;
    UILabel__set_text(v60, (System_String_o *)rareDispImgObj, 0LL);
  }
  maxNumLabel = this->fields.maxNumLabel;
  currentBoxGachaId = v5->fields.maxNum;
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
  UnityEngine_GameObject__SetActive(rareDispImgObj, v5->fields.currenNum < 1, 0LL);
  if ( v5->fields.isRare )
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
    v65 = v5->fields.gachaBaseData;
    if ( v65 )
    {
      rareDispImgObj = (UnityEngine_GameObject_o *)this->fields.baseButton;
      if ( rareDispImgObj )
      {
        iconId = v65->fields.iconId;
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
          v67 = v5->fields.gachaBaseData;
          if ( v67 )
          {
            rareDispSprite = this->fields.rareDispSprite;
            currentBoxGachaId = v67->fields.iconId;
            v69 = System_Int32__ToString((int32_t)&currentBoxGachaId, 0LL);
            v70 = System_String__Concat_44577788((System_String_o *)StringLiteral_19578/*"icon_event_"*/, v69, 0LL);
            if ( (BYTE3(EventRewardRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
            }
            EventRewardRootComponent__setRewardInfoImg(rareDispSprite, v70, 0LL);
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