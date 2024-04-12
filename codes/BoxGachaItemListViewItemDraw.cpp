void __fastcall BoxGachaItemListViewItemDraw___ctor(BoxGachaItemListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BoxGachaItemListViewItemDraw__Awake(BoxGachaItemListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *baseSprite; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  struct UISprite_o *v12; // x8
  struct UIAtlas_o *mAtlas; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  struct UISprite_o *v20; // x8
  struct System_String_o *mSpriteName; // x1

  if ( (byte_42B178E & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B178E = 1;
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
    v12 = this->fields.baseSprite;
    if ( !v12
      || (mAtlas = v12->fields.mAtlas,
          this->fields.baseAtlas = mAtlas,
          sub_B52920(
            (BattleServantConfConponent_o *)&this->fields.baseAtlas,
            (System_Int32_array **)mAtlas,
            v6,
            v7,
            v8,
            v9,
            v10,
            v11),
          (v20 = this->fields.baseSprite) == 0LL) )
    {
      sub_B52A5C(v4, v5);
    }
    mSpriteName = v20->fields.mSpriteName;
    this->fields.baseSpriteName = mSpriteName;
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields.baseSpriteName,
      (System_Int32_array **)mSpriteName,
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
  UnityEngine_GameObject_o *rareDispImgObj; // x0
  UnityEngine_Object_o *baseSprite; // x21
  struct BoxGachaBaseEntity_o *gachaBaseData; // x8
  int bannerId; // w8
  UISprite_o *v11; // x21
  System_String_o *v12; // x0
  __int64 *v13; // x8
  System_String_o *v14; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v15; // x21
  struct BoxGachaBaseEntity_o *v16; // x8
  unsigned int *giftEnt; // x8
  int v18; // w8
  int32_t v19; // w2
  struct BoxGachaBaseEntity_o *v20; // x8
  UILabel_o *rewardNumLabel; // x21
  System_String_o *v22; // x22
  Il2CppObject *v23; // x0
  UILabel_o *v24; // x21
  System_String_o *v25; // x22
  Il2CppObject *v26; // x0
  UILabel_o *maxNumLabel; // x21
  UnityEngine_Object_o *baseButton; // x21
  struct BoxGachaBaseEntity_o *v29; // x8
  int iconId; // w21
  struct BoxGachaBaseEntity_o *v31; // x8
  UISprite_o *rareDispSprite; // x20
  System_String_o *v33; // x0
  System_String_o *v34; // x21
  int32_t rewardNum; // w3
  int32_t targetObjectId; // w2
  struct GiftEntity_o *v37; // x8
  unsigned int type; // w8
  UnityEngine_Object_o *rarityInfo; // x22
  UnityEngine_Object_o *countLbInfo; // x22
  struct UnityEngine_GameObject_o *v41; // x1
  const MethodInfo_2FF1604 *v42; // x2
  int32_t v43; // [xsp+Ch] [xbp-44h] BYREF
  int32_t currenNum; // [xsp+18h] [xbp-38h] BYREF
  int32_t currentBoxGachaId; // [xsp+1Ch] [xbp-34h] BYREF

  v5 = item;
  if ( (byte_42B178F & 1) == 0 )
  {
    sub_B52984(&EventRewardRootComponent_TypeInfo);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_B52984(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&StringLiteral_18643/*"event_gachabanner_"*/);
    sub_B52984(&StringLiteral_2656/*"BOX_GACHA_REWARD_NORMAL_TXT"*/);
    sub_B52984(&StringLiteral_19480/*"icon_event_"*/);
    sub_B52984(&StringLiteral_2655/*"BOX_GACHA_REWARD_DRAW_TXT"*/);
    sub_B52984(&StringLiteral_18711/*"event_rewardgacha_"*/);
    byte_42B178F = 1;
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
    v11 = this->fields.baseSprite;
    if ( bannerId < 1 )
    {
      currentBoxGachaId = v5->fields.currentBoxGachaId;
      v12 = System_Int32__ToString((int32_t)&currentBoxGachaId, 0LL);
      v13 = &StringLiteral_18711/*"event_rewardgacha_"*/;
    }
    else
    {
      currentBoxGachaId = bannerId;
      v12 = System_Int32__ToString((int32_t)&currentBoxGachaId, 0LL);
      v13 = &StringLiteral_18643/*"event_gachabanner_"*/;
    }
    v14 = System_String__Concat_44568316((System_String_o *)*v13, v12, 0LL);
    if ( (BYTE3(EventRewardRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
    }
    EventRewardRootComponent__setRewardInfoImg(v11, v14, 0LL);
  }
  v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v15,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  if ( !v15
    || (System_Collections_Generic_List_XWeaponTrail_Element___Clear(
          (System_Collections_Generic_List_XWeaponTrail_Element__o *)v15,
          (const MethodInfo_2FF1A0C *)Method_System_Collections_Generic_List_GameObject__Clear__),
        (v16 = v5->fields.gachaBaseData) == 0LL) )
  {
LABEL_88:
    sub_B52A5C(rareDispImgObj, item);
  }
  if ( v16->fields.type == 1 )
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
        v37 = v5->fields.giftEnt;
        if ( v37 && (type = v37->fields.type, type <= 7) && ((1 << type) & 0xC2) != 0 )
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
            v15,
            (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.rarityInfo,
            (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_GameObject__Add__);
          v41 = this->fields.countLbInfo;
          v42 = (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_GameObject__Add__;
        }
        else
        {
          v41 = this->fields.countLbInfo;
          v42 = (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_GameObject__Add__;
        }
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v15,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v41,
          v42);
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
      v18 = giftEnt[7];
      if ( v18 <= 1 )
        v19 = -1;
      else
        v19 = v18;
      ItemIconComponent__SetItemImage_28310700((ItemIconComponent_o *)rareDispImgObj, (int32_t)item, v19, 0LL);
    }
  }
LABEL_31:
  v20 = v5->fields.gachaBaseData;
  if ( !v20 )
    goto LABEL_88;
  if ( (v20->fields.type & 0xFFFFFFFE) == 2 )
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
    (System_Collections_Generic_List_GameObject__o *)v15,
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
  v22 = LocalizationManager__Get((System_String_o *)StringLiteral_2656/*"BOX_GACHA_REWARD_NORMAL_TXT"*/, 0LL);
  currenNum = v5->fields.currenNum;
  v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &currenNum);
  rareDispImgObj = (UnityEngine_GameObject_o *)System_String__Format(v22, v23, 0LL);
  if ( !rewardNumLabel )
    goto LABEL_88;
  UILabel__set_text(rewardNumLabel, (System_String_o *)rareDispImgObj, 0LL);
  if ( v5->fields.isDraw )
  {
    v24 = this->fields.rewardNumLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v25 = LocalizationManager__Get((System_String_o *)StringLiteral_2655/*"BOX_GACHA_REWARD_DRAW_TXT"*/, 0LL);
    v43 = v5->fields.currenNum;
    v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v43);
    rareDispImgObj = (UnityEngine_GameObject_o *)System_String__Format(v25, v26, 0LL);
    if ( !v24 )
      goto LABEL_88;
    UILabel__set_text(v24, (System_String_o *)rareDispImgObj, 0LL);
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
    v29 = v5->fields.gachaBaseData;
    if ( v29 )
    {
      rareDispImgObj = (UnityEngine_GameObject_o *)this->fields.baseButton;
      if ( rareDispImgObj )
      {
        iconId = v29->fields.iconId;
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
          v31 = v5->fields.gachaBaseData;
          if ( v31 )
          {
            rareDispSprite = this->fields.rareDispSprite;
            currentBoxGachaId = v31->fields.iconId;
            v33 = System_Int32__ToString((int32_t)&currentBoxGachaId, 0LL);
            v34 = System_String__Concat_44568316((System_String_o *)StringLiteral_19480/*"icon_event_"*/, v33, 0LL);
            if ( (BYTE3(EventRewardRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
            }
            EventRewardRootComponent__setRewardInfoImg(rareDispSprite, v34, 0LL);
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