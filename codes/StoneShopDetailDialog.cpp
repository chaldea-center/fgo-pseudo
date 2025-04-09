void __fastcall StoneShopDetailDialog___ctor(StoneShopDetailDialog_o *this, const MethodInfo *method)
{
  if ( (byte_49B73B7 & 1) == 0 )
  {
    sub_1B4CF90(&BaseDialog_TypeInfo, method);
    byte_49B73B7 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall StoneShopDetailDialog__Close(StoneShopDetailDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  StoneShopDetailDialog__Close_33303348(this, 0LL, v2);
}


void __fastcall StoneShopDetailDialog__Close_33303348(
        StoneShopDetailDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  System_Action_o *v7; // x20

  if ( (byte_49B73B4 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, callback);
    sub_1B4CF90(&Method_StoneShopDetailDialog_EndClose__, v6);
    byte_49B73B4 = 1;
  }
  this->fields.closeEndFunc = callback;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.closeEndFunc, (int32_t)callback, (int32_t)method, v3);
  v7 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_StoneShopDetailDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v7, 0LL);
}


void __fastcall StoneShopDetailDialog__EndClose(StoneShopDetailDialog_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  const MethodInfo *v4; // x3
  CGThumbnailListItem_o *p_closeEndFunc; // x19
  struct System_Action_o *v6; // x20
  struct System_Action_o *closeEndFunc; // t1

  StoneShopDetailDialog__Init(this, method);
  closeEndFunc = this->fields.closeEndFunc;
  p_closeEndFunc = (CGThumbnailListItem_o *)&this->fields.closeEndFunc;
  v6 = closeEndFunc;
  if ( closeEndFunc )
  {
    p_closeEndFunc->klass = 0LL;
    sub_1B4CF34(p_closeEndFunc, 0, v3, v4);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v6->fields.m_target)(
      v6->fields.original_method_info,
      *(_QWORD *)&v6->fields.extra_arg);
  }
}


void __fastcall StoneShopDetailDialog__Init(StoneShopDetailDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B4D1EC(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall StoneShopDetailDialog__OnClickClose(StoneShopDetailDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x3
  CGThumbnailListItem_o *p_clickFunc; // x0
  struct System_Action_o *clickFunc; // x20

  if ( (byte_49B73B5 & 1) == 0 )
  {
    sub_1B4CF90(&Method_StoneShopDetailDialog_OnClickClose__, method);
    byte_49B73B5 = 1;
  }
  v3 = Method_StoneShopDetailDialog_OnClickClose__;
  if ( (*((_BYTE *)Method_StoneShopDetailDialog_OnClickClose__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B4CFA8(Method_StoneShopDetailDialog_OnClickClose__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0LL);
  p_clickFunc = (CGThumbnailListItem_o *)&this->fields.clickFunc;
  clickFunc = this->fields.clickFunc;
  if ( clickFunc )
  {
    p_clickFunc->klass = 0LL;
    sub_1B4CF34(p_clickFunc, 0, (int32_t)v5, v6);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))clickFunc->fields.m_target)(
      clickFunc->fields.original_method_info,
      *(_QWORD *)&clickFunc->fields.extra_arg);
  }
  else
  {
    StoneShopDetailDialog__Close_33303348(this, 0LL, v5);
  }
}


void __fastcall StoneShopDetailDialog__OnEnable(StoneShopDetailDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_49B73B6 & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_15343/*"Window/CloseButton"*/, method);
    byte_49B73B6 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_42438944(transform, (System_String_o *)StringLiteral_15343/*"Window/CloseButton"*/, 0LL);
}


void __fastcall StoneShopDetailDialog__Open(
        StoneShopDetailDialog_o *this,
        BankShopEntity_o *bankShop,
        System_Action_o *func,
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
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  __int64 v18; // x1
  StoneShopDetailListViewManager_o *stoneShopDetailListViewManager; // x0
  float ListViewHeight; // s0
  float v21; // s8
  UILabel_o *titleLabel; // x21
  int32_t chargeStoneNum; // w23
  int32_t freeStoneNum; // w25
  UILabel_o *stoneInfoTitleLabel; // x20
  UILabel_o *stoneInfoDetailLabel; // x20
  System_String_o *v27; // x21
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  Il2CppObject *v31; // x22
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  Il2CppObject *v35; // x23
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  Il2CppObject *v39; // x0
  float topFocusOffset_low; // s9
  UnityEngine_GameObject_o *gameObject; // x0
  float v42; // s9
  UnityEngine_GameObject_o *v43; // x0
  UnityEngine_GameObject_o *v44; // x0
  UILabel_o *extraItemTitleLabel; // x20
  UILabel_o *buttonLabel; // x20
  struct StoneShopDetailListViewManager_o *v47; // x8
  int32_t v48; // [xsp+4h] [xbp-6Ch] BYREF
  int32_t v49; // [xsp+8h] [xbp-68h] BYREF
  int v50; // [xsp+Ch] [xbp-64h] BYREF
  Il2CppObject *entity; // [xsp+28h] [xbp-48h] BYREF

  if ( (byte_49B73B3 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMaster_ItemMaster___, bankShop);
    sub_1B4CF90(&DataManager_TypeInfo, v7);
    sub_1B4CF90(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v8);
    sub_1B4CF90(&int_TypeInfo, v9);
    sub_1B4CF90(&LocalizationManager_TypeInfo, v10);
    sub_1B4CF90(&StringLiteral_3657/*"COMMON_CONFIRM_CLOSE"*/, v11);
    sub_1B4CF90(&StringLiteral_12100/*"STONE_SHOP_EXTRA_ITEM_TITLE"*/, v12);
    sub_1B4CF90(&StringLiteral_12097/*"STONE_SHOP_DETAIL_TITLE"*/, v13);
    sub_1B4CF90(&StringLiteral_12102/*"STONE_SHOP_STONE_INFO_TEMPLATE"*/, v14);
    sub_1B4CF90(&StringLiteral_12103/*"STONE_SHOP_STONE_INFO_TITLE"*/, v15);
    byte_49B73B3 = 1;
  }
  entity = 0LL;
  StoneShopDetailDialog__Init(this, (const MethodInfo *)bankShop);
  this->fields.clickFunc = func;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.clickFunc, (int32_t)func, v16, v17);
  if ( bankShop )
  {
    stoneShopDetailListViewManager = this->fields.stoneShopDetailListViewManager;
    if ( stoneShopDetailListViewManager )
    {
      StoneShopDetailListViewManager__CreateList(stoneShopDetailListViewManager, bankShop, 0LL);
      stoneShopDetailListViewManager = this->fields.stoneShopDetailListViewManager;
      if ( stoneShopDetailListViewManager )
      {
        ListViewHeight = StoneShopDetailListViewManager__get_ListViewHeight(stoneShopDetailListViewManager, 0LL);
        stoneShopDetailListViewManager = this->fields.stoneShopDetailListViewManager;
        if ( stoneShopDetailListViewManager )
        {
          v21 = ListViewHeight;
          if ( ListViewManager__get_ItemSum((ListViewManager_o *)stoneShopDetailListViewManager, 0LL) <= 0 )
          {
            stoneShopDetailListViewManager = (StoneShopDetailListViewManager_o *)this->fields.extraItemTitleLabel;
            if ( !stoneShopDetailListViewManager )
              goto LABEL_35;
            stoneShopDetailListViewManager = (StoneShopDetailListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                                                   (UnityEngine_Component_o *)stoneShopDetailListViewManager,
                                                                                   0LL);
            if ( !stoneShopDetailListViewManager )
              goto LABEL_35;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)stoneShopDetailListViewManager, 0, 0LL);
          }
          titleLabel = this->fields.titleLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          stoneShopDetailListViewManager = (StoneShopDetailListViewManager_o *)LocalizationManager__Get(
                                                                                 (System_String_o *)StringLiteral_12097/*"STONE_SHOP_DETAIL_TITLE"*/,
                                                                                 0LL);
          if ( titleLabel )
          {
            UILabel__set_text(titleLabel, (System_String_o *)stoneShopDetailListViewManager, 0LL);
            stoneShopDetailListViewManager = (StoneShopDetailListViewManager_o *)this->fields.titleDetailLabel;
            if ( stoneShopDetailListViewManager )
            {
              UILabel__set_text((UILabel_o *)stoneShopDetailListViewManager, bankShop->fields.nameDetail, 0LL);
              GameObjectExtensions__SetLocalPositionY(
                this->fields.stoneInfoContainer,
                v21 + this->fields.stoneInfoOffset,
                0LL);
              chargeStoneNum = bankShop->fields.chargeStoneNum;
              freeStoneNum = bankShop->fields.freeStoneNum;
              stoneInfoTitleLabel = this->fields.stoneInfoTitleLabel;
              stoneShopDetailListViewManager = (StoneShopDetailListViewManager_o *)LocalizationManager__Get(
                                                                                     (System_String_o *)StringLiteral_12103/*"STONE_SHOP_STONE_INFO_TITLE"*/,
                                                                                     0LL);
              if ( stoneInfoTitleLabel )
              {
                UILabel__set_text(stoneInfoTitleLabel, (System_String_o *)stoneShopDetailListViewManager, 0LL);
                stoneInfoDetailLabel = this->fields.stoneInfoDetailLabel;
                v27 = LocalizationManager__Get((System_String_o *)StringLiteral_12102/*"STONE_SHOP_STONE_INFO_TEMPLATE"*/, 0LL);
                v50 = freeStoneNum + chargeStoneNum;
                v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v50, v28, v29, v30);
                v49 = chargeStoneNum;
                v35 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v49, v32, v33, v34);
                v48 = freeStoneNum;
                v39 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v48, v36, v37, v38);
                stoneShopDetailListViewManager = (StoneShopDetailListViewManager_o *)System_String__Format_61134828(
                                                                                       v27,
                                                                                       v31,
                                                                                       v35,
                                                                                       v39,
                                                                                       0LL);
                if ( stoneInfoDetailLabel )
                {
                  UILabel__set_text(stoneInfoDetailLabel, (System_String_o *)stoneShopDetailListViewManager, 0LL);
                  if ( !DataManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                  stoneShopDetailListViewManager = (StoneShopDetailListViewManager_o *)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_ItemMaster___);
                  if ( stoneShopDetailListViewManager )
                  {
                    stoneShopDetailListViewManager = (StoneShopDetailListViewManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                                           (DataMasterBase_TMaster__TEntity__PKType__o *)stoneShopDetailListViewManager,
                                                                                           &entity,
                                                                                           2,
                                                                                           (const MethodInfo_319D9E8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
                    if ( ((unsigned __int8)stoneShopDetailListViewManager & 1) != 0 )
                    {
                      if ( !entity )
                        goto LABEL_35;
                      stoneShopDetailListViewManager = (StoneShopDetailListViewManager_o *)this->fields.stoneInfoIcon;
                      if ( !stoneShopDetailListViewManager )
                        goto LABEL_35;
                      ItemIconComponent__SetItemImage(
                        (ItemIconComponent_o *)stoneShopDetailListViewManager,
                        (int32_t)entity[2].monitor,
                        0LL);
                    }
                    stoneShopDetailListViewManager = (StoneShopDetailListViewManager_o *)this->fields.stoneInfoDetailLabel;
                    if ( stoneShopDetailListViewManager )
                    {
                      topFocusOffset_low = (float)SLODWORD(stoneShopDetailListViewManager->fields.topFocusOffset);
                      gameObject = UnityEngine_Component__get_gameObject(
                                     (UnityEngine_Component_o *)stoneShopDetailListViewManager,
                                     0LL);
                      v42 = topFocusOffset_low * -0.5;
                      GameObjectExtensions__SetLocalPositionX(gameObject, v42 + 24.0, 0LL);
                      stoneShopDetailListViewManager = (StoneShopDetailListViewManager_o *)this->fields.stoneInfoIcon;
                      if ( stoneShopDetailListViewManager )
                      {
                        v43 = UnityEngine_Component__get_gameObject(
                                (UnityEngine_Component_o *)stoneShopDetailListViewManager,
                                0LL);
                        GameObjectExtensions__SetLocalPositionX(v43, v42, 0LL);
                        stoneShopDetailListViewManager = (StoneShopDetailListViewManager_o *)this->fields.extraItemTitleLabel;
                        if ( stoneShopDetailListViewManager )
                        {
                          v44 = UnityEngine_Component__get_gameObject(
                                  (UnityEngine_Component_o *)stoneShopDetailListViewManager,
                                  0LL);
                          GameObjectExtensions__SetLocalPositionY(v44, v21 + this->fields.extraItemOffset, 0LL);
                          extraItemTitleLabel = this->fields.extraItemTitleLabel;
                          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                          stoneShopDetailListViewManager = (StoneShopDetailListViewManager_o *)LocalizationManager__Get(
                                                                                                 (System_String_o *)StringLiteral_12100/*"STONE_SHOP_EXTRA_ITEM_TITLE"*/,
                                                                                                 0LL);
                          if ( extraItemTitleLabel )
                          {
                            UILabel__set_text(
                              extraItemTitleLabel,
                              (System_String_o *)stoneShopDetailListViewManager,
                              0LL);
                            buttonLabel = this->fields.buttonLabel;
                            stoneShopDetailListViewManager = (StoneShopDetailListViewManager_o *)LocalizationManager__Get(
                                                                                                   (System_String_o *)StringLiteral_3657/*"COMMON_CONFIRM_CLOSE"*/,
                                                                                                   0LL);
                            if ( buttonLabel )
                            {
                              UILabel__set_text(buttonLabel, (System_String_o *)stoneShopDetailListViewManager, 0LL);
                              v47 = this->fields.stoneShopDetailListViewManager;
                              if ( v47 )
                              {
                                stoneShopDetailListViewManager = (StoneShopDetailListViewManager_o *)v47->fields.scrollView;
                                if ( stoneShopDetailListViewManager )
                                {
                                  UIScrollView__ResetPosition((UIScrollView_o *)stoneShopDetailListViewManager, 0LL);
                                  goto LABEL_34;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_35:
    sub_1B4D1EC(stoneShopDetailListViewManager, v18);
  }
LABEL_34:
  BaseDialog__Open((BaseDialog_o *)this, 0LL, 0, 0LL);
}