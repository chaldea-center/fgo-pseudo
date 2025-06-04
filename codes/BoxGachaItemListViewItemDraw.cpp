void __fastcall BoxGachaItemListViewItemDraw___ctor(BoxGachaItemListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BoxGachaItemListViewItemDraw__Awake(BoxGachaItemListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *baseSprite; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  struct UISprite_o *v6; // x8
  struct UISprite_o *v7; // x8

  if ( (byte_4AFC533 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    byte_4AFC533 = 1;
  }
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL);
  if ( (v4 & 1) != 0 )
  {
    v6 = this->fields.baseSprite;
    if ( !v6
      || (this->fields.baseAtlas = v6->fields.mAtlas,
          v4 = sub_1BC2FAC(&this->fields.baseAtlas),
          (v7 = this->fields.baseSprite) == 0LL) )
    {
      sub_1BC3264(v4, v5);
    }
    this->fields.baseSpriteName = v7->fields.mSpriteName;
    sub_1BC2FAC(&this->fields.baseSpriteName);
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
  __int64 rareDispImgObj; // x0
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
  struct GiftEntity_o *v57; // x8
  unsigned int type; // w8
  UnityEngine_Object_o *rarityInfo; // x22
  UnityEngine_Object_o *countLbInfo; // x22
  __int64 v61; // x8
  _QWORD *v62; // x9
  __int64 v63; // x10
  __int64 v64; // x0
  int v65; // w10
  __int64 v66; // x8
  _QWORD *v67; // x9
  __int64 v68; // x10
  __int64 v69; // x0
  int32_t v70; // [xsp+4h] [xbp-4Ch] BYREF
  int32_t currenNum; // [xsp+8h] [xbp-48h] BYREF
  int32_t currentBoxGachaId; // [xsp+Ch] [xbp-44h] BYREF

  v5 = item;
  if ( (byte_4AFC534 & 1) == 0 )
  {
    sub_1BC3008(&EventRewardRootComponent_TypeInfo, item);
    sub_1BC3008(&int_TypeInfo, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_GameObject__Add__, v8);
    sub_1BC3008(&Method_System_Collections_Generic_List_GameObject__Clear__, v9);
    sub_1BC3008(&Method_System_Collections_Generic_List_GameObject___ctor__, v10);
    sub_1BC3008(&System_Collections_Generic_List_GameObject__TypeInfo, v11);
    sub_1BC3008(&LocalizationManager_TypeInfo, v12);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v13);
    sub_1BC3008(&StringLiteral_19009/*"event_gachabanner_"*/, v14);
    sub_1BC3008(&StringLiteral_2979/*"BOX_GACHA_REWARD_NORMAL_TXT"*/, v15);
    sub_1BC3008(&StringLiteral_19999/*"icon_event_"*/, v16);
    sub_1BC3008(&StringLiteral_2978/*"BOX_GACHA_REWARD_DRAW_TXT"*/, v17);
    sub_1BC3008(&StringLiteral_19078/*"event_rewardgacha_"*/, v18);
    byte_4AFC534 = 1;
  }
  currentBoxGachaId = 0;
  if ( !v5 || !mode )
    return;
  rareDispImgObj = (__int64)this->fields.rareDispImgObj;
  if ( !rareDispImgObj )
    goto LABEL_89;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)rareDispImgObj, 0, 0LL);
  rareDispImgObj = (__int64)this->fields.bonusSprite;
  if ( !rareDispImgObj )
    goto LABEL_89;
  rareDispImgObj = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)rareDispImgObj, 0LL);
  if ( !rareDispImgObj )
    goto LABEL_89;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)rareDispImgObj, 0, 0LL);
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  rareDispImgObj = UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL);
  if ( (rareDispImgObj & 1) != 0 && v5->fields.currentEventId >= 1 )
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
      v25 = &StringLiteral_19078/*"event_rewardgacha_"*/;
    }
    else
    {
      currentBoxGachaId = bannerId;
      v24 = System_Int32__ToString((int32_t)&currentBoxGachaId, 0LL);
      v25 = &StringLiteral_19009/*"event_gachabanner_"*/;
    }
    v26 = System_String__Concat_62348648((System_String_o *)*v25, v24, 0LL);
    if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
    EventRewardRootComponent__setRewardInfoImg(v23, v26, 0LL);
  }
  v27 = sub_1BC3254(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    (System_Collections_Generic_List_object__o *)v27,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_GameObject___ctor__);
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
    sub_1BC3264(rareDispImgObj, item);
  if ( v30->fields.type == 1 )
  {
    giftEnt = (unsigned int *)v5->fields.giftEnt;
    if ( !giftEnt )
      goto LABEL_89;
    item = (BoxGachaItemListViewItem_o *)giftEnt[11];
    if ( (int)item < 1 )
    {
      rewardNum = v5->fields.rewardNum;
      rareDispImgObj = (__int64)this->fields.itemIcon;
      item = (BoxGachaItemListViewItem_o *)giftEnt[5];
      targetObjectId = v5->fields.targetObjectId;
      if ( rewardNum < 1 )
      {
        if ( !rareDispImgObj )
          goto LABEL_89;
        ItemIconComponent__SetGift_39952716(
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
        ItemIconComponent__SetGift_39952716(
          (ItemIconComponent_o *)rareDispImgObj,
          (int32_t)item,
          targetObjectId,
          rewardNum,
          0,
          0LL);
        v57 = v5->fields.giftEnt;
        if ( v57 && (type = v57->fields.type, type <= 7) && ((1 << type) & 0xC2) != 0 )
        {
          rarityInfo = (UnityEngine_Object_o *)this->fields.rarityInfo;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          rareDispImgObj = UnityEngine_Object__op_Inequality(rarityInfo, 0LL, 0LL);
          if ( (rareDispImgObj & 1) == 0 )
            goto LABEL_31;
          countLbInfo = (UnityEngine_Object_o *)this->fields.countLbInfo;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          rareDispImgObj = UnityEngine_Object__op_Inequality(countLbInfo, 0LL, 0LL);
          if ( (rareDispImgObj & 1) == 0 )
            goto LABEL_31;
          item = (BoxGachaItemListViewItem_o *)this->fields.rarityInfo;
          v61 = *(_QWORD *)(v27 + 16);
          v62 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++*(_DWORD *)(v27 + 28);
          if ( !v61 )
            goto LABEL_89;
          v63 = *(int *)(v27 + 24);
          if ( (unsigned int)v63 >= *(_DWORD *)(v61 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)v27,
              (Il2CppObject *)item,
              *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v62[4] + 192LL) + 112LL));
          }
          else
          {
            v64 = v61 + 8 * v63;
            *(_DWORD *)(v27 + 24) = v63 + 1;
            *(_QWORD *)(v64 + 32) = item;
            rareDispImgObj = sub_1BC2FAC(v64 + 32);
          }
          item = (BoxGachaItemListViewItem_o *)this->fields.countLbInfo;
          v65 = *(_DWORD *)(v27 + 28);
          v66 = *(_QWORD *)(v27 + 16);
          v67 = Method_System_Collections_Generic_List_GameObject__Add__;
        }
        else
        {
          item = (BoxGachaItemListViewItem_o *)this->fields.countLbInfo;
          v65 = *(_DWORD *)(v27 + 28);
          v66 = *(_QWORD *)(v27 + 16);
          v67 = Method_System_Collections_Generic_List_GameObject__Add__;
        }
        *(_DWORD *)(v27 + 28) = v65 + 1;
        if ( !v66 )
          goto LABEL_89;
        v68 = *(int *)(v27 + 24);
        if ( (unsigned int)v68 >= *(_DWORD *)(v66 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)v27,
            (Il2CppObject *)item,
            *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v67[4] + 192LL) + 112LL));
        }
        else
        {
          v69 = v66 + 8 * v68;
          *(_DWORD *)(v27 + 24) = v68 + 1;
          *(_QWORD *)(v69 + 32) = item;
          rareDispImgObj = sub_1BC2FAC(v69 + 32);
        }
      }
    }
    else
    {
      rareDispImgObj = (__int64)this->fields.itemIcon;
      if ( !rareDispImgObj )
        goto LABEL_89;
      v32 = giftEnt[7];
      if ( v32 <= 1 )
        v33 = -1;
      else
        v33 = v32;
      ItemIconComponent__SetItemImage_39955160((ItemIconComponent_o *)rareDispImgObj, (int32_t)item, v33, 0LL);
    }
  }
LABEL_31:
  v34 = v5->fields.gachaBaseData;
  if ( !v34 )
    goto LABEL_89;
  if ( (v34->fields.type & 0xFFFFFFFE) == 2 )
  {
    rareDispImgObj = (__int64)this->fields.itemIcon;
    if ( !rareDispImgObj )
      goto LABEL_89;
    ItemIconComponent__SetItemImage((ItemIconComponent_o *)rareDispImgObj, v5->fields.targetImgId, 0LL);
  }
  rareDispImgObj = (__int64)this->fields.numDispctr;
  if ( !rareDispImgObj )
    goto LABEL_89;
  ItemNumDispControl__InitEventAlphaAnim(
    (ItemNumDispControl_o *)rareDispImgObj,
    (System_Collections_Generic_List_GameObject__o *)v27,
    0LL);
  rareDispImgObj = (__int64)this->fields.nameTextLabel;
  if ( !rareDispImgObj )
    goto LABEL_89;
  UILabel__set_text((UILabel_o *)rareDispImgObj, v5->fields.nameTxt, 0LL);
  rareDispImgObj = (__int64)this->fields.msgTextLabel;
  if ( !rareDispImgObj )
    goto LABEL_89;
  UILabel__set_text((UILabel_o *)rareDispImgObj, v5->fields.detailTxt, 0LL);
  rewardNumLabel = this->fields.rewardNumLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v36 = LocalizationManager__Get((System_String_o *)StringLiteral_2979/*"BOX_GACHA_REWARD_NORMAL_TXT"*/, 0LL);
  currenNum = v5->fields.currenNum;
  v40 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &currenNum, v37, v38, v39);
  rareDispImgObj = (__int64)System_String__Format(v36, v40, 0LL);
  if ( !rewardNumLabel )
    goto LABEL_89;
  UILabel__set_text(rewardNumLabel, (System_String_o *)rareDispImgObj, 0LL);
  if ( v5->fields.isDraw )
  {
    v41 = this->fields.rewardNumLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v42 = LocalizationManager__Get((System_String_o *)StringLiteral_2978/*"BOX_GACHA_REWARD_DRAW_TXT"*/, 0LL);
    v70 = v5->fields.currenNum;
    v46 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v70, v43, v44, v45);
    rareDispImgObj = (__int64)System_String__Format(v42, v46, 0LL);
    if ( !v41 )
      goto LABEL_89;
    UILabel__set_text(v41, (System_String_o *)rareDispImgObj, 0LL);
  }
  maxNumLabel = this->fields.maxNumLabel;
  currentBoxGachaId = v5->fields.maxNum;
  rareDispImgObj = (__int64)System_Int32__ToString((int32_t)&currentBoxGachaId, 0LL);
  if ( !maxNumLabel )
    goto LABEL_89;
  UILabel__set_text(maxNumLabel, (System_String_o *)rareDispImgObj, 0LL);
  rareDispImgObj = (__int64)this->fields.maskSprite;
  if ( !rareDispImgObj )
    goto LABEL_89;
  rareDispImgObj = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)rareDispImgObj, 0LL);
  if ( !rareDispImgObj )
    goto LABEL_89;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)rareDispImgObj, v5->fields.currenNum < 1, 0LL);
  if ( v5->fields.isRare )
  {
    rareDispImgObj = (__int64)this->fields.bonusSprite;
    if ( !rareDispImgObj )
      goto LABEL_89;
    rareDispImgObj = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)rareDispImgObj, 0LL);
    if ( !rareDispImgObj )
      goto LABEL_89;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)rareDispImgObj, 1, 0LL);
  }
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  rareDispImgObj = UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL);
  if ( (rareDispImgObj & 1) != 0 )
  {
    v49 = v5->fields.gachaBaseData;
    if ( v49 )
    {
      rareDispImgObj = (__int64)this->fields.baseButton;
      if ( rareDispImgObj )
      {
        iconId = v49->fields.iconId;
        UICommonButton__SetColliderEnable((UICommonButton_o *)rareDispImgObj, 1, 1, 0LL);
        rareDispImgObj = (__int64)this->fields.baseButton;
        if ( rareDispImgObj )
        {
          rareDispImgObj = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)rareDispImgObj
                                                                                       + 536LL))(
                             rareDispImgObj,
                             0LL,
                             1LL,
                             *(_QWORD *)(*(_QWORD *)rareDispImgObj + 544LL));
          if ( iconId < 1 )
            return;
          v51 = v5->fields.gachaBaseData;
          if ( v51 )
          {
            rareDispSprite = this->fields.rareDispSprite;
            currentBoxGachaId = v51->fields.iconId;
            v53 = System_Int32__ToString((int32_t)&currentBoxGachaId, 0LL);
            v54 = System_String__Concat_62348648((System_String_o *)StringLiteral_19999/*"icon_event_"*/, v53, 0LL);
            if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
            EventRewardRootComponent__setRewardInfoImg(rareDispSprite, v54, 0LL);
            rareDispImgObj = (__int64)this->fields.rareDispImgObj;
            if ( rareDispImgObj )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)rareDispImgObj, 1, 0LL);
              return;
            }
          }
        }
      }
    }
    goto LABEL_89;
  }
}