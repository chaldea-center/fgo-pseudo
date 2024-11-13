void __fastcall BoxGachaItemListViewItemDraw___ctor(BoxGachaItemListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BoxGachaItemListViewItemDraw__Awake(BoxGachaItemListViewItemDraw_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *baseSprite; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  struct UISprite_o *v13; // x8
  struct UIAtlas_o *mAtlas; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  struct UISprite_o *v21; // x8
  struct System_String_o *mSpriteName; // x1

  if ( (byte_4B1A15D & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B1A15D = 1;
  }
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v5 = UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL);
  if ( v5 )
  {
    v13 = this->fields.baseSprite;
    if ( !v13
      || (mAtlas = v13->fields.mAtlas,
          this->fields.baseAtlas = mAtlas,
          sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.baseAtlas, (int64_t)mAtlas, v7, v8, v9, v10, v11, v12),
          (v21 = this->fields.baseSprite) == 0LL) )
    {
      sub_1BCAA3C(v5, v6);
    }
    mSpriteName = v21->fields.mSpriteName;
    this->fields.baseSpriteName = mSpriteName;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.baseSpriteName,
      (int64_t)mSpriteName,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BoxGachaItemListViewItemDraw__SetItem(
        BoxGachaItemListViewItemDraw_o *this,
        BoxGachaItemListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  BoxGachaItemListViewItem_o *v5; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  UnityEngine_GameObject_o *rareDispImgObj; // x0
  __int64 v32; // x1
  UnityEngine_Object_o *baseSprite; // x21
  __int64 v34; // x2
  __int64 v35; // x3
  struct BoxGachaBaseEntity_o *gachaBaseData; // x8
  int bannerId; // w8
  UISprite_o *v38; // x21
  System_String_o *v39; // x0
  __int64 *v40; // x8
  __int64 v41; // x1
  System_String_o *v42; // x22
  __int64 v43; // x21
  int32_t v44; // w2
  int v45; // w8
  struct BoxGachaBaseEntity_o *v46; // x8
  unsigned int *giftEnt; // x8
  int v48; // w8
  int32_t v49; // w2
  struct BoxGachaBaseEntity_o *v50; // x8
  __int64 v51; // x1
  UILabel_o *rewardNumLabel; // x21
  System_String_o *v53; // x22
  Il2CppObject *v54; // x0
  __int64 v55; // x1
  UILabel_o *v56; // x21
  System_String_o *v57; // x22
  Il2CppObject *v58; // x0
  UILabel_o *maxNumLabel; // x21
  UnityEngine_Object_o *baseButton; // x21
  struct BoxGachaBaseEntity_o *v61; // x8
  int iconId; // w21
  struct BoxGachaBaseEntity_o *v63; // x8
  UISprite_o *rareDispSprite; // x20
  System_String_o *v65; // x0
  __int64 v66; // x1
  System_String_o *v67; // x21
  int32_t rewardNum; // w3
  int32_t targetObjectId; // w2
  __int64 v70; // x1
  int64_t v71; // x2
  int32_t v72; // w3
  System_String_o *v73; // x4
  BattleSetupInfo_o *v74; // x5
  FollowerInfo_o *v75; // x6
  PartyListViewItem_o *v76; // x7
  struct GiftEntity_o *v77; // x8
  unsigned int type; // w8
  UnityEngine_Object_o *rarityInfo; // x22
  UnityEngine_Object_o *countLbInfo; // x22
  int64_t v81; // x2
  int32_t v82; // w3
  System_String_o *v83; // x4
  BattleSetupInfo_o *v84; // x5
  FollowerInfo_o *v85; // x6
  PartyListViewItem_o *v86; // x7
  __int64 v87; // x8
  _QWORD *v88; // x9
  __int64 v89; // x10
  __int64 v90; // x0
  int v91; // w10
  __int64 v92; // x8
  _QWORD *v93; // x9
  __int64 v94; // x10
  __int64 v95; // x0
  int32_t v96; // [xsp+4h] [xbp-4Ch] BYREF
  int32_t currenNum; // [xsp+8h] [xbp-48h] BYREF
  int32_t currentBoxGachaId; // [xsp+Ch] [xbp-44h] BYREF

  v5 = item;
  if ( (byte_4B1A15E & 1) == 0 )
  {
    sub_1BCA7E0(&EventRewardRootComponent_TypeInfo, item, *(_QWORD *)&mode);
    sub_1BCA7E0(&int_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__Add__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__Clear__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject___ctor__, v13, v14);
    sub_1BCA7E0(&System_Collections_Generic_List_GameObject__TypeInfo, v15, v16);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v17, v18);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v19, v20);
    sub_1BCA7E0(&StringLiteral_19375/*"event_gachabanner_"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_3125/*"BOX_GACHA_REWARD_NORMAL_TXT"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_20357/*"icon_event_"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_3124/*"BOX_GACHA_REWARD_DRAW_TXT"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_19444/*"event_rewardgacha_"*/, v29, v30);
    byte_4B1A15E = 1;
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v32);
  rareDispImgObj = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL);
  if ( ((unsigned __int8)rareDispImgObj & 1) != 0 && v5->fields.currentEventId >= 1 )
  {
    gachaBaseData = v5->fields.gachaBaseData;
    if ( !gachaBaseData )
      goto LABEL_89;
    bannerId = gachaBaseData->fields.bannerId;
    v38 = this->fields.baseSprite;
    if ( bannerId < 1 )
    {
      currentBoxGachaId = v5->fields.currentBoxGachaId;
      v39 = System_Int32__ToString((int32_t)&currentBoxGachaId, 0LL);
      v40 = &StringLiteral_19444/*"event_rewardgacha_"*/;
    }
    else
    {
      currentBoxGachaId = bannerId;
      v39 = System_Int32__ToString((int32_t)&currentBoxGachaId, 0LL);
      v40 = &StringLiteral_19375/*"event_gachabanner_"*/;
    }
    v42 = System_String__Concat_62401220((System_String_o *)*v40, v39, 0LL);
    if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo, v41);
    EventRewardRootComponent__setRewardInfoImg(v38, v42, 0LL);
  }
  v43 = sub_1BCAA2C(System_Collections_Generic_List_GameObject__TypeInfo, item, v34, v35);
  System_Collections_Generic_List_object____ctor(
    (System_Collections_Generic_List_object__o *)v43,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  if ( !v43 )
    goto LABEL_89;
  v44 = *(_DWORD *)(v43 + 24);
  v45 = *(_DWORD *)(v43 + 28) + 1;
  *(_DWORD *)(v43 + 24) = 0;
  *(_DWORD *)(v43 + 28) = v45;
  if ( v44 >= 1 )
    System_Array__Clear(*(System_Array_o **)(v43 + 16), 0, v44, 0LL);
  v46 = v5->fields.gachaBaseData;
  if ( !v46 )
LABEL_89:
    sub_1BCAA3C(rareDispImgObj, item);
  if ( v46->fields.type == 1 )
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
        ItemIconComponent__SetGift_38855180(
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
        ItemIconComponent__SetGift_38855180(
          (ItemIconComponent_o *)rareDispImgObj,
          (int32_t)item,
          targetObjectId,
          rewardNum,
          0,
          0LL);
        v77 = v5->fields.giftEnt;
        if ( v77 && (type = v77->fields.type, type <= 7) && ((1 << type) & 0xC2) != 0 )
        {
          rarityInfo = (UnityEngine_Object_o *)this->fields.rarityInfo;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v70);
          rareDispImgObj = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(rarityInfo, 0LL, 0LL);
          if ( ((unsigned __int8)rareDispImgObj & 1) == 0 )
            goto LABEL_31;
          countLbInfo = (UnityEngine_Object_o *)this->fields.countLbInfo;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
          rareDispImgObj = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(countLbInfo, 0LL, 0LL);
          if ( ((unsigned __int8)rareDispImgObj & 1) == 0 )
            goto LABEL_31;
          item = (BoxGachaItemListViewItem_o *)this->fields.rarityInfo;
          v87 = *(_QWORD *)(v43 + 16);
          v88 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++*(_DWORD *)(v43 + 28);
          if ( !v87 )
            goto LABEL_89;
          v89 = *(int *)(v43 + 24);
          if ( (unsigned int)v89 >= *(_DWORD *)(v87 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)v43,
              (Il2CppObject *)item,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v88[4] + 192LL) + 112LL));
          }
          else
          {
            v90 = v87 + 8 * v89;
            *(_DWORD *)(v43 + 24) = v89 + 1;
            *(_QWORD *)(v90 + 32) = item;
            sub_1BCA784((PartyOrganizationUtility_o *)(v90 + 32), (int64_t)item, v81, v82, v83, v84, v85, v86);
          }
          item = (BoxGachaItemListViewItem_o *)this->fields.countLbInfo;
          v91 = *(_DWORD *)(v43 + 28);
          v92 = *(_QWORD *)(v43 + 16);
          v93 = Method_System_Collections_Generic_List_GameObject__Add__;
        }
        else
        {
          item = (BoxGachaItemListViewItem_o *)this->fields.countLbInfo;
          v91 = *(_DWORD *)(v43 + 28);
          v92 = *(_QWORD *)(v43 + 16);
          v93 = Method_System_Collections_Generic_List_GameObject__Add__;
        }
        *(_DWORD *)(v43 + 28) = v91 + 1;
        if ( !v92 )
          goto LABEL_89;
        v94 = *(int *)(v43 + 24);
        if ( (unsigned int)v94 >= *(_DWORD *)(v92 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)v43,
            (Il2CppObject *)item,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v93[4] + 192LL) + 112LL));
        }
        else
        {
          v95 = v92 + 8 * v94;
          *(_DWORD *)(v43 + 24) = v94 + 1;
          *(_QWORD *)(v95 + 32) = item;
          sub_1BCA784((PartyOrganizationUtility_o *)(v95 + 32), (int64_t)item, v71, v72, v73, v74, v75, v76);
        }
      }
    }
    else
    {
      rareDispImgObj = (UnityEngine_GameObject_o *)this->fields.itemIcon;
      if ( !rareDispImgObj )
        goto LABEL_89;
      v48 = giftEnt[7];
      if ( v48 <= 1 )
        v49 = -1;
      else
        v49 = v48;
      ItemIconComponent__SetItemImage_38857576((ItemIconComponent_o *)rareDispImgObj, (int32_t)item, v49, 0LL);
    }
  }
LABEL_31:
  v50 = v5->fields.gachaBaseData;
  if ( !v50 )
    goto LABEL_89;
  if ( (v50->fields.type & 0xFFFFFFFE) == 2 )
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
    (System_Collections_Generic_List_GameObject__o *)v43,
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
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v51);
  v53 = LocalizationManager__Get((System_String_o *)StringLiteral_3125/*"BOX_GACHA_REWARD_NORMAL_TXT"*/, 0LL);
  currenNum = v5->fields.currenNum;
  v54 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &currenNum);
  rareDispImgObj = (UnityEngine_GameObject_o *)System_String__Format(v53, v54, 0LL);
  if ( !rewardNumLabel )
    goto LABEL_89;
  UILabel__set_text(rewardNumLabel, (System_String_o *)rareDispImgObj, 0LL);
  if ( v5->fields.isDraw )
  {
    v56 = this->fields.rewardNumLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v55);
    v57 = LocalizationManager__Get((System_String_o *)StringLiteral_3124/*"BOX_GACHA_REWARD_DRAW_TXT"*/, 0LL);
    v96 = v5->fields.currenNum;
    v58 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v96);
    rareDispImgObj = (UnityEngine_GameObject_o *)System_String__Format(v57, v58, 0LL);
    if ( !v56 )
      goto LABEL_89;
    UILabel__set_text(v56, (System_String_o *)rareDispImgObj, 0LL);
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
  rareDispImgObj = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL);
  if ( ((unsigned __int8)rareDispImgObj & 1) != 0 )
  {
    v61 = v5->fields.gachaBaseData;
    if ( v61 )
    {
      rareDispImgObj = (UnityEngine_GameObject_o *)this->fields.baseButton;
      if ( rareDispImgObj )
      {
        iconId = v61->fields.iconId;
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
          v63 = v5->fields.gachaBaseData;
          if ( v63 )
          {
            rareDispSprite = this->fields.rareDispSprite;
            currentBoxGachaId = v63->fields.iconId;
            v65 = System_Int32__ToString((int32_t)&currentBoxGachaId, 0LL);
            v67 = System_String__Concat_62401220((System_String_o *)StringLiteral_20357/*"icon_event_"*/, v65, 0LL);
            if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo, v66);
            EventRewardRootComponent__setRewardInfoImg(rareDispSprite, v67, 0LL);
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