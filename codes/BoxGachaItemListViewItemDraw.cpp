void __fastcall BoxGachaItemListViewItemDraw___ctor(BoxGachaItemListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BoxGachaItemListViewItemDraw__Awake(BoxGachaItemListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *baseSprite; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  struct UISprite_o *v10; // x8
  struct UIAtlas_o *mAtlas; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  struct UISprite_o *v18; // x8
  struct System_String_o *mSpriteName; // x1

  if ( (byte_40FB44D & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FB44D = 1;
  }
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL) )
  {
    v10 = this->fields.baseSprite;
    if ( !v10
      || (mAtlas = v10->fields.mAtlas,
          this->fields.baseAtlas = mAtlas,
          sub_B16F98(
            (BattleServantConfConponent_o *)&this->fields.baseAtlas,
            (System_Int32_array **)mAtlas,
            v4,
            v5,
            v6,
            v7,
            v8,
            v9),
          (v18 = this->fields.baseSprite) == 0LL) )
    {
      sub_B170D4();
    }
    mSpriteName = v18->fields.mSpriteName;
    this->fields.baseSpriteName = mSpriteName;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.baseSpriteName,
      (System_Int32_array **)mSpriteName,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
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
  UnityEngine_Component_o *bonusSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *baseSprite; // x21
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  struct BoxGachaBaseEntity_o *gachaBaseData; // x8
  int bannerId; // w8
  UISprite_o *v29; // x21
  System_String_o *v30; // x0
  __int64 *v31; // x8
  System_String_o *v32; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v33; // x21
  struct BoxGachaBaseEntity_o *v34; // x8
  struct GiftEntity_o *giftEnt; // x8
  int32_t prioredIconId; // w1
  ItemIconComponent_o *v37; // x0
  int num; // w8
  int32_t v39; // w2
  struct BoxGachaBaseEntity_o *v40; // x8
  ItemIconComponent_o *v41; // x0
  ItemNumDispControl_o *numDispctr; // x0
  UILabel_o *nameTextLabel; // x0
  UILabel_o *msgTextLabel; // x0
  UILabel_o *rewardNumLabel; // x21
  System_String_o *v46; // x22
  Il2CppObject *v47; // x0
  System_String_o *v48; // x0
  UILabel_o *v49; // x21
  System_String_o *v50; // x22
  Il2CppObject *v51; // x0
  System_String_o *v52; // x0
  UILabel_o *maxNumLabel; // x21
  System_String_o *v54; // x0
  UnityEngine_Component_o *maskSprite; // x0
  UnityEngine_GameObject_o *v56; // x0
  UnityEngine_Component_o *v57; // x0
  UnityEngine_GameObject_o *v58; // x0
  UnityEngine_Object_o *baseButton; // x21
  struct BoxGachaBaseEntity_o *v60; // x8
  UICommonButton_o *v61; // x0
  int iconId; // w21
  struct UICommonButton_o *v63; // x0
  struct BoxGachaBaseEntity_o *v64; // x8
  UISprite_o *rareDispSprite; // x20
  System_String_o *v66; // x0
  System_String_o *v67; // x21
  UnityEngine_GameObject_o *v68; // x0
  int rewardNum; // w3
  ItemIconComponent_o *itemIcon; // x0
  int32_t type; // w1
  int32_t targetObjectId; // w2
  struct GiftEntity_o *v73; // x8
  unsigned int v74; // w8
  UnityEngine_Object_o *rarityInfo; // x22
  UnityEngine_Object_o *countLbInfo; // x22
  struct UnityEngine_GameObject_o *v77; // x1
  const MethodInfo_2F25CD8 *v78; // x2
  int32_t v79; // [xsp+Ch] [xbp-44h] BYREF
  int32_t currenNum; // [xsp+18h] [xbp-38h] BYREF
  int32_t currentBoxGachaId; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_40FB44E & 1) == 0 )
  {
    sub_B16FFC(&EventRewardRootComponent_TypeInfo, item);
    sub_B16FFC(&int_TypeInfo, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__Add__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__Clear__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject___ctor__, v10);
    sub_B16FFC(&System_Collections_Generic_List_GameObject__TypeInfo, v11);
    sub_B16FFC(&LocalizationManager_TypeInfo, v12);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v13);
    sub_B16FFC(&StringLiteral_18440, v14);
    sub_B16FFC(&StringLiteral_2613, v15);
    sub_B16FFC(&StringLiteral_19260, v16);
    sub_B16FFC(&StringLiteral_2612, v17);
    sub_B16FFC(&StringLiteral_18506, v18);
    byte_40FB44E = 1;
  }
  currentBoxGachaId = 0;
  if ( !item || !mode )
    return;
  rareDispImgObj = this->fields.rareDispImgObj;
  if ( !rareDispImgObj )
    goto LABEL_88;
  UnityEngine_GameObject__SetActive(rareDispImgObj, 0, 0LL);
  bonusSprite = (UnityEngine_Component_o *)this->fields.bonusSprite;
  if ( !bonusSprite )
    goto LABEL_88;
  gameObject = UnityEngine_Component__get_gameObject(bonusSprite, 0LL);
  if ( !gameObject )
    goto LABEL_88;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL) && item->fields.currentEventId >= 1 )
  {
    gachaBaseData = item->fields.gachaBaseData;
    if ( !gachaBaseData )
      goto LABEL_88;
    bannerId = gachaBaseData->fields.bannerId;
    v29 = this->fields.baseSprite;
    if ( bannerId < 1 )
    {
      currentBoxGachaId = item->fields.currentBoxGachaId;
      v30 = System_Int32__ToString((int32_t)&currentBoxGachaId, 0LL);
      v31 = &StringLiteral_18506;
    }
    else
    {
      currentBoxGachaId = bannerId;
      v30 = System_Int32__ToString((int32_t)&currentBoxGachaId, 0LL);
      v31 = &StringLiteral_18440;
    }
    v32 = System_String__Concat_43743732((System_String_o *)*v31, v30, 0LL);
    if ( (BYTE3(EventRewardRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
    }
    EventRewardRootComponent__setRewardInfoImg(v29, v32, 0LL);
  }
  v33 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_GameObject__TypeInfo,
                                                                                                  v23,
                                                                                                  v24,
                                                                                                  v25,
                                                                                                  v26);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v33,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  if ( !v33
    || (System_Collections_Generic_List_XWeaponTrail_Element___Clear(
          (System_Collections_Generic_List_XWeaponTrail_Element__o *)v33,
          (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_GameObject__Clear__),
        (v34 = item->fields.gachaBaseData) == 0LL) )
  {
LABEL_88:
    sub_B170D4();
  }
  if ( v34->fields.type == 1 )
  {
    giftEnt = item->fields.giftEnt;
    if ( !giftEnt )
      goto LABEL_88;
    prioredIconId = giftEnt->fields.prioredIconId;
    if ( prioredIconId < 1 )
    {
      rewardNum = item->fields.rewardNum;
      itemIcon = this->fields.itemIcon;
      type = giftEnt->fields.type;
      targetObjectId = item->fields.targetObjectId;
      if ( rewardNum >= 1 )
      {
        if ( !itemIcon )
          goto LABEL_88;
        ItemIconComponent__SetGift(itemIcon, type, targetObjectId, rewardNum, 0, 0LL);
        v73 = item->fields.giftEnt;
        if ( v73 && (v74 = v73->fields.type, v74 <= 7) && ((1 << v74) & 0xC2) != 0 )
        {
          rarityInfo = (UnityEngine_Object_o *)this->fields.rarityInfo;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( !UnityEngine_Object__op_Inequality(rarityInfo, 0LL, 0LL) )
            goto LABEL_31;
          countLbInfo = (UnityEngine_Object_o *)this->fields.countLbInfo;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( !UnityEngine_Object__op_Inequality(countLbInfo, 0LL, 0LL) )
            goto LABEL_31;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v33,
            (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.rarityInfo,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_GameObject__Add__);
          v77 = this->fields.countLbInfo;
          v78 = (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_GameObject__Add__;
        }
        else
        {
          v77 = this->fields.countLbInfo;
          v78 = (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_GameObject__Add__;
        }
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v33,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v77,
          v78);
        goto LABEL_31;
      }
      if ( !itemIcon )
        goto LABEL_88;
      ItemIconComponent__SetGift(itemIcon, type, targetObjectId, -1, 0, 0LL);
    }
    else
    {
      v37 = this->fields.itemIcon;
      if ( !v37 )
        goto LABEL_88;
      num = giftEnt->fields.num;
      if ( num <= 1 )
        v39 = -1;
      else
        v39 = num;
      ItemIconComponent__SetItemImage_28930192(v37, prioredIconId, v39, 0LL);
    }
  }
LABEL_31:
  v40 = item->fields.gachaBaseData;
  if ( !v40 )
    goto LABEL_88;
  if ( (v40->fields.type & 0xFFFFFFFE) == 2 )
  {
    v41 = this->fields.itemIcon;
    if ( !v41 )
      goto LABEL_88;
    ItemIconComponent__SetItemImage(v41, item->fields.targetImgId, 0LL);
  }
  numDispctr = this->fields.numDispctr;
  if ( !numDispctr )
    goto LABEL_88;
  ItemNumDispControl__InitEventAlphaAnim(numDispctr, (System_Collections_Generic_List_GameObject__o *)v33, 0LL);
  nameTextLabel = (UILabel_o *)this->fields.nameTextLabel;
  if ( !nameTextLabel )
    goto LABEL_88;
  UILabel__set_text(nameTextLabel, item->fields.nameTxt, 0LL);
  msgTextLabel = this->fields.msgTextLabel;
  if ( !msgTextLabel )
    goto LABEL_88;
  UILabel__set_text(msgTextLabel, item->fields.detailTxt, 0LL);
  rewardNumLabel = this->fields.rewardNumLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v46 = LocalizationManager__Get((System_String_o *)StringLiteral_2613, 0LL);
  currenNum = item->fields.currenNum;
  v47 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &currenNum);
  v48 = System_String__Format(v46, v47, 0LL);
  if ( !rewardNumLabel )
    goto LABEL_88;
  UILabel__set_text(rewardNumLabel, v48, 0LL);
  if ( item->fields.isDraw )
  {
    v49 = this->fields.rewardNumLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v50 = LocalizationManager__Get((System_String_o *)StringLiteral_2612, 0LL);
    v79 = item->fields.currenNum;
    v51 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v79);
    v52 = System_String__Format(v50, v51, 0LL);
    if ( !v49 )
      goto LABEL_88;
    UILabel__set_text(v49, v52, 0LL);
  }
  maxNumLabel = this->fields.maxNumLabel;
  currentBoxGachaId = item->fields.maxNum;
  v54 = System_Int32__ToString((int32_t)&currentBoxGachaId, 0LL);
  if ( !maxNumLabel )
    goto LABEL_88;
  UILabel__set_text(maxNumLabel, v54, 0LL);
  maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
  if ( !maskSprite )
    goto LABEL_88;
  v56 = UnityEngine_Component__get_gameObject(maskSprite, 0LL);
  if ( !v56 )
    goto LABEL_88;
  UnityEngine_GameObject__SetActive(v56, item->fields.currenNum < 1, 0LL);
  if ( item->fields.isRare )
  {
    v57 = (UnityEngine_Component_o *)this->fields.bonusSprite;
    if ( !v57 )
      goto LABEL_88;
    v58 = UnityEngine_Component__get_gameObject(v57, 0LL);
    if ( !v58 )
      goto LABEL_88;
    UnityEngine_GameObject__SetActive(v58, 1, 0LL);
  }
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
  {
    v60 = item->fields.gachaBaseData;
    if ( v60 )
    {
      v61 = this->fields.baseButton;
      if ( v61 )
      {
        iconId = v60->fields.iconId;
        UICommonButton__SetColliderEnable(v61, 1, 1, 0LL);
        v63 = this->fields.baseButton;
        if ( v63 )
        {
          ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, Il2CppMethodPointer))v63->klass->vtable._14_SetState.method)(
            v63,
            0LL,
            1LL,
            v63->klass->vtable._15_OnPress.methodPtr);
          if ( iconId < 1 )
            return;
          v64 = item->fields.gachaBaseData;
          if ( v64 )
          {
            rareDispSprite = this->fields.rareDispSprite;
            currentBoxGachaId = v64->fields.iconId;
            v66 = System_Int32__ToString((int32_t)&currentBoxGachaId, 0LL);
            v67 = System_String__Concat_43743732((System_String_o *)StringLiteral_19260, v66, 0LL);
            if ( (BYTE3(EventRewardRootComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
            }
            EventRewardRootComponent__setRewardInfoImg(rareDispSprite, v67, 0LL);
            v68 = this->fields.rareDispImgObj;
            if ( v68 )
            {
              UnityEngine_GameObject__SetActive(v68, 1, 0LL);
              return;
            }
          }
        }
      }
    }
    goto LABEL_88;
  }
}