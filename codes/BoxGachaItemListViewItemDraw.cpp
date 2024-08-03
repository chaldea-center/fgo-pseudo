void __fastcall BoxGachaItemListViewItemDraw___ctor(BoxGachaItemListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BoxGachaItemListViewItemDraw__Awake(BoxGachaItemListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *baseSprite; // x20
  _BOOL8 v4; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  struct UISprite_o *v7; // x8
  struct UIAtlas_o *mAtlas; // x1
  int32_t v9; // w2
  int32_t v10; // w3
  struct UISprite_o *v11; // x8
  struct System_String_o *mSpriteName; // x1

  if ( (byte_4A00181 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_4A00181 = 1;
  }
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL);
  if ( v4 )
  {
    v7 = this->fields.baseSprite;
    if ( !v7
      || (mAtlas = v7->fields.mAtlas,
          this->fields.baseAtlas = mAtlas,
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.baseAtlas, (int32_t)mAtlas, v5, v6),
          (v11 = this->fields.baseSprite) == 0LL) )
    {
      sub_1B64324(v4);
    }
    mSpriteName = v11->fields.mSpriteName;
    this->fields.baseSpriteName = mSpriteName;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.baseSpriteName, (int32_t)mSpriteName, v9, v10);
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
  __int64 v29; // x21
  int32_t v30; // w2
  int v31; // w8
  struct BoxGachaBaseEntity_o *v32; // x8
  struct GiftEntity_o *giftEnt; // x8
  int32_t prioredIconId; // w1
  int num; // w8
  int32_t v36; // w2
  struct BoxGachaBaseEntity_o *v37; // x8
  UILabel_o *rewardNumLabel; // x21
  System_String_o *v39; // x22
  Il2CppObject *v40; // x0
  UILabel_o *v41; // x21
  System_String_o *v42; // x22
  Il2CppObject *v43; // x0
  UILabel_o *maxNumLabel; // x21
  UnityEngine_Object_o *baseButton; // x21
  struct BoxGachaBaseEntity_o *v46; // x8
  int iconId; // w21
  struct BoxGachaBaseEntity_o *v48; // x8
  UISprite_o *rareDispSprite; // x20
  System_String_o *v50; // x0
  System_String_o *v51; // x21
  int rewardNum; // w3
  int32_t type; // w1
  int32_t targetObjectId; // w2
  int32_t v55; // w2
  int32_t v56; // w3
  struct GiftEntity_o *v57; // x8
  unsigned int v58; // w8
  UnityEngine_Object_o *rarityInfo; // x22
  UnityEngine_Object_o *countLbInfo; // x22
  int32_t v61; // w2
  int32_t v62; // w3
  Il2CppObject *v63; // x1
  __int64 v64; // x8
  _QWORD *v65; // x9
  __int64 v66; // x10
  __int64 v67; // x0
  Il2CppObject *v68; // x1
  int v69; // w10
  __int64 v70; // x8
  _QWORD *v71; // x9
  __int64 v72; // x10
  __int64 v73; // x0
  int32_t v74; // [xsp+4h] [xbp-4Ch] BYREF
  int32_t currenNum; // [xsp+8h] [xbp-48h] BYREF
  int32_t currentBoxGachaId; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4A00182 & 1) == 0 )
  {
    sub_1B640C8(&EventRewardRootComponent_TypeInfo, item);
    sub_1B640C8(&int_TypeInfo, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__Add__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__Clear__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject___ctor__, v10);
    sub_1B640C8(&System_Collections_Generic_List_GameObject__TypeInfo, v11);
    sub_1B640C8(&LocalizationManager_TypeInfo, v12);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v13);
    sub_1B640C8(&StringLiteral_19098/*"event_gachabanner_"*/, v14);
    sub_1B640C8(&StringLiteral_3082/*"BOX_GACHA_REWARD_NORMAL_TXT"*/, v15);
    sub_1B640C8(&StringLiteral_20064/*"icon_event_"*/, v16);
    sub_1B640C8(&StringLiteral_3081/*"BOX_GACHA_REWARD_DRAW_TXT"*/, v17);
    sub_1B640C8(&StringLiteral_19166/*"event_rewardgacha_"*/, v18);
    byte_4A00182 = 1;
  }
  currentBoxGachaId = 0;
  if ( !item || !mode )
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
  if ( ((unsigned __int8)rareDispImgObj & 1) != 0 && item->fields.currentEventId >= 1 )
  {
    gachaBaseData = item->fields.gachaBaseData;
    if ( !gachaBaseData )
      goto LABEL_89;
    bannerId = gachaBaseData->fields.bannerId;
    v25 = this->fields.baseSprite;
    if ( bannerId < 1 )
    {
      currentBoxGachaId = item->fields.currentBoxGachaId;
      v26 = System_Int32__ToString((int32_t)&currentBoxGachaId, 0LL);
      v27 = &StringLiteral_19166/*"event_rewardgacha_"*/;
    }
    else
    {
      currentBoxGachaId = bannerId;
      v26 = System_Int32__ToString((int32_t)&currentBoxGachaId, 0LL);
      v27 = &StringLiteral_19098/*"event_gachabanner_"*/;
    }
    v28 = System_String__Concat_61375396((System_String_o *)*v27, v26, 0LL);
    if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
    EventRewardRootComponent__setRewardInfoImg(v25, v28, 0LL);
  }
  v29 = sub_1B64314(System_Collections_Generic_List_GameObject__TypeInfo, v21, v22);
  System_Collections_Generic_List_object____ctor(
    (System_Collections_Generic_List_object__o *)v29,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  if ( !v29 )
    goto LABEL_89;
  v30 = *(_DWORD *)(v29 + 24);
  v31 = *(_DWORD *)(v29 + 28) + 1;
  *(_DWORD *)(v29 + 24) = 0;
  *(_DWORD *)(v29 + 28) = v31;
  if ( v30 >= 1 )
    System_Array__Clear(*(System_Array_o **)(v29 + 16), 0, v30, 0LL);
  v32 = item->fields.gachaBaseData;
  if ( !v32 )
LABEL_89:
    sub_1B64324(rareDispImgObj);
  if ( v32->fields.type == 1 )
  {
    giftEnt = item->fields.giftEnt;
    if ( !giftEnt )
      goto LABEL_89;
    prioredIconId = giftEnt->fields.prioredIconId;
    if ( prioredIconId < 1 )
    {
      rewardNum = item->fields.rewardNum;
      rareDispImgObj = (UnityEngine_GameObject_o *)this->fields.itemIcon;
      type = giftEnt->fields.type;
      targetObjectId = item->fields.targetObjectId;
      if ( rewardNum < 1 )
      {
        if ( !rareDispImgObj )
          goto LABEL_89;
        ItemIconComponent__SetGift_37829292((ItemIconComponent_o *)rareDispImgObj, type, targetObjectId, -1, 0, 0LL);
      }
      else
      {
        if ( !rareDispImgObj )
          goto LABEL_89;
        ItemIconComponent__SetGift_37829292(
          (ItemIconComponent_o *)rareDispImgObj,
          type,
          targetObjectId,
          rewardNum,
          0,
          0LL);
        v57 = item->fields.giftEnt;
        if ( v57 && (v58 = v57->fields.type, v58 <= 7) && ((1 << v58) & 0xC2) != 0 )
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
          v63 = (Il2CppObject *)this->fields.rarityInfo;
          v64 = *(_QWORD *)(v29 + 16);
          v65 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++*(_DWORD *)(v29 + 28);
          if ( !v64 )
            goto LABEL_89;
          v66 = *(int *)(v29 + 24);
          if ( (unsigned int)v66 >= *(_DWORD *)(v64 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)v29,
              v63,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v65[4] + 192LL) + 112LL));
          }
          else
          {
            v67 = v64 + 8 * v66;
            *(_DWORD *)(v29 + 24) = v66 + 1;
            *(_QWORD *)(v67 + 32) = v63;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v67 + 32), (int32_t)v63, v61, v62);
          }
          v68 = (Il2CppObject *)this->fields.countLbInfo;
          v69 = *(_DWORD *)(v29 + 28);
          v70 = *(_QWORD *)(v29 + 16);
          v71 = Method_System_Collections_Generic_List_GameObject__Add__;
        }
        else
        {
          v68 = (Il2CppObject *)this->fields.countLbInfo;
          v69 = *(_DWORD *)(v29 + 28);
          v70 = *(_QWORD *)(v29 + 16);
          v71 = Method_System_Collections_Generic_List_GameObject__Add__;
        }
        *(_DWORD *)(v29 + 28) = v69 + 1;
        if ( !v70 )
          goto LABEL_89;
        v72 = *(int *)(v29 + 24);
        if ( (unsigned int)v72 >= *(_DWORD *)(v70 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)v29,
            v68,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v71[4] + 192LL) + 112LL));
        }
        else
        {
          v73 = v70 + 8 * v72;
          *(_DWORD *)(v29 + 24) = v72 + 1;
          *(_QWORD *)(v73 + 32) = v68;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v73 + 32), (int32_t)v68, v55, v56);
        }
      }
    }
    else
    {
      rareDispImgObj = (UnityEngine_GameObject_o *)this->fields.itemIcon;
      if ( !rareDispImgObj )
        goto LABEL_89;
      num = giftEnt->fields.num;
      if ( num <= 1 )
        v36 = -1;
      else
        v36 = num;
      ItemIconComponent__SetItemImage_37831688((ItemIconComponent_o *)rareDispImgObj, prioredIconId, v36, 0LL);
    }
  }
LABEL_31:
  v37 = item->fields.gachaBaseData;
  if ( !v37 )
    goto LABEL_89;
  if ( (v37->fields.type & 0xFFFFFFFE) == 2 )
  {
    rareDispImgObj = (UnityEngine_GameObject_o *)this->fields.itemIcon;
    if ( !rareDispImgObj )
      goto LABEL_89;
    ItemIconComponent__SetItemImage((ItemIconComponent_o *)rareDispImgObj, item->fields.targetImgId, 0LL);
  }
  rareDispImgObj = (UnityEngine_GameObject_o *)this->fields.numDispctr;
  if ( !rareDispImgObj )
    goto LABEL_89;
  ItemNumDispControl__InitEventAlphaAnim(
    (ItemNumDispControl_o *)rareDispImgObj,
    (System_Collections_Generic_List_GameObject__o *)v29,
    0LL);
  rareDispImgObj = (UnityEngine_GameObject_o *)this->fields.nameTextLabel;
  if ( !rareDispImgObj )
    goto LABEL_89;
  UILabel__set_text((UILabel_o *)rareDispImgObj, item->fields.nameTxt, 0LL);
  rareDispImgObj = (UnityEngine_GameObject_o *)this->fields.msgTextLabel;
  if ( !rareDispImgObj )
    goto LABEL_89;
  UILabel__set_text((UILabel_o *)rareDispImgObj, item->fields.detailTxt, 0LL);
  rewardNumLabel = this->fields.rewardNumLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v39 = LocalizationManager__Get((System_String_o *)StringLiteral_3082/*"BOX_GACHA_REWARD_NORMAL_TXT"*/, 0LL);
  currenNum = item->fields.currenNum;
  v40 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &currenNum);
  rareDispImgObj = (UnityEngine_GameObject_o *)System_String__Format(v39, v40, 0LL);
  if ( !rewardNumLabel )
    goto LABEL_89;
  UILabel__set_text(rewardNumLabel, (System_String_o *)rareDispImgObj, 0LL);
  if ( item->fields.isDraw )
  {
    v41 = this->fields.rewardNumLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v42 = LocalizationManager__Get((System_String_o *)StringLiteral_3081/*"BOX_GACHA_REWARD_DRAW_TXT"*/, 0LL);
    v74 = item->fields.currenNum;
    v43 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v74);
    rareDispImgObj = (UnityEngine_GameObject_o *)System_String__Format(v42, v43, 0LL);
    if ( !v41 )
      goto LABEL_89;
    UILabel__set_text(v41, (System_String_o *)rareDispImgObj, 0LL);
  }
  maxNumLabel = this->fields.maxNumLabel;
  currentBoxGachaId = item->fields.maxNum;
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
  UnityEngine_GameObject__SetActive(rareDispImgObj, item->fields.currenNum < 1, 0LL);
  if ( item->fields.isRare )
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
    v46 = item->fields.gachaBaseData;
    if ( v46 )
    {
      rareDispImgObj = (UnityEngine_GameObject_o *)this->fields.baseButton;
      if ( rareDispImgObj )
      {
        iconId = v46->fields.iconId;
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
          v48 = item->fields.gachaBaseData;
          if ( v48 )
          {
            rareDispSprite = this->fields.rareDispSprite;
            currentBoxGachaId = v48->fields.iconId;
            v50 = System_Int32__ToString((int32_t)&currentBoxGachaId, 0LL);
            v51 = System_String__Concat_61375396((System_String_o *)StringLiteral_20064/*"icon_event_"*/, v50, 0LL);
            if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
            EventRewardRootComponent__setRewardInfoImg(rareDispSprite, v51, 0LL);
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