void __fastcall StoneShopDetailDialog___ctor(StoneShopDetailDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4A5788F & 1) == 0 )
  {
    sub_1B885B0(&BaseDialog_TypeInfo);
    byte_4A5788F = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall StoneShopDetailDialog__Close(StoneShopDetailDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  StoneShopDetailDialog__Close_32985116(this, 0LL, v2);
}


void __fastcall StoneShopDetailDialog__Close_32985116(
        StoneShopDetailDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_Action_o *v6; // x20

  if ( (byte_4A5788C & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_StoneShopDetailDialog_EndClose__);
    byte_4A5788C = 1;
  }
  this->fields.closeEndFunc = callback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.closeEndFunc, (int32_t)callback, (int32_t)method, v3);
  v6 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_StoneShopDetailDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v6, 0LL);
}


void __fastcall StoneShopDetailDialog__EndClose(StoneShopDetailDialog_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  int32_t v4; // w3
  ServantStatusBattleListViewItem_o *p_closeEndFunc; // x19
  struct System_Action_o *v6; // x20
  struct System_Action_o *closeEndFunc; // t1

  StoneShopDetailDialog__Init(this, method);
  closeEndFunc = this->fields.closeEndFunc;
  p_closeEndFunc = (ServantStatusBattleListViewItem_o *)&this->fields.closeEndFunc;
  v6 = closeEndFunc;
  if ( closeEndFunc )
  {
    p_closeEndFunc->klass = 0LL;
    sub_1B88554(p_closeEndFunc, 0, v3, v4);
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
    sub_1B8880C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall StoneShopDetailDialog__OnClickClose(StoneShopDetailDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2
  int32_t v6; // w3
  ServantStatusBattleListViewItem_o *p_clickFunc; // x0
  struct System_Action_o *clickFunc; // x20

  if ( (byte_4A5788D & 1) == 0 )
  {
    sub_1B885B0(&Method_StoneShopDetailDialog_OnClickClose__);
    byte_4A5788D = 1;
  }
  v3 = Method_StoneShopDetailDialog_OnClickClose__;
  if ( (*((_BYTE *)Method_StoneShopDetailDialog_OnClickClose__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B885C8(Method_StoneShopDetailDialog_OnClickClose__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
  p_clickFunc = (ServantStatusBattleListViewItem_o *)&this->fields.clickFunc;
  clickFunc = this->fields.clickFunc;
  if ( clickFunc )
  {
    p_clickFunc->klass = 0LL;
    sub_1B88554(p_clickFunc, 0, (int32_t)v5, v6);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))clickFunc->fields.m_target)(
      clickFunc->fields.original_method_info,
      *(_QWORD *)&clickFunc->fields.extra_arg);
  }
  else
  {
    StoneShopDetailDialog__Close_32985116(this, 0LL, v5);
  }
}


void __fastcall StoneShopDetailDialog__OnEnable(StoneShopDetailDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_4A5788E & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_15643/*"Window/CloseButton"*/);
    byte_4A5788E = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_41945856(transform, (System_String_o *)StringLiteral_15643/*"Window/CloseButton"*/, 0LL);
}


void __fastcall StoneShopDetailDialog__Open(
        StoneShopDetailDialog_o *this,
        BankShopEntity_o *bankShop,
        System_Action_o *func,
        const MethodInfo *method)
{
  int32_t v7; // w2
  int32_t v8; // w3
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x2
  StoneShopDetailListViewManager_o *stoneShopDetailListViewManager; // x0
  float ListViewHeight; // s0
  float v13; // s8
  UILabel_o *titleLabel; // x21
  int32_t chargeStoneNum; // w23
  int32_t freeStoneNum; // w25
  UILabel_o *stoneInfoTitleLabel; // x20
  UILabel_o *stoneInfoDetailLabel; // x20
  System_String_o *v19; // x21
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  Il2CppObject *v23; // x22
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  Il2CppObject *v27; // x23
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  Il2CppObject *v31; // x0
  float topFocusOffset_low; // s9
  UnityEngine_GameObject_o *gameObject; // x0
  float v34; // s9
  UnityEngine_GameObject_o *v35; // x0
  UnityEngine_GameObject_o *v36; // x0
  UILabel_o *extraItemTitleLabel; // x20
  UILabel_o *buttonLabel; // x20
  struct StoneShopDetailListViewManager_o *v39; // x8
  int32_t v40; // [xsp+4h] [xbp-6Ch] BYREF
  int32_t v41; // [xsp+8h] [xbp-68h] BYREF
  int v42; // [xsp+Ch] [xbp-64h] BYREF
  Il2CppObject *entity; // [xsp+28h] [xbp-48h] BYREF

  if ( (byte_4A5788B & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_3756/*"COMMON_CONFIRM_CLOSE"*/);
    sub_1B885B0(&StringLiteral_12294/*"STONE_SHOP_EXTRA_ITEM_TITLE"*/);
    sub_1B885B0(&StringLiteral_12291/*"STONE_SHOP_DETAIL_TITLE"*/);
    sub_1B885B0(&StringLiteral_12296/*"STONE_SHOP_STONE_INFO_TEMPLATE"*/);
    sub_1B885B0(&StringLiteral_12297/*"STONE_SHOP_STONE_INFO_TITLE"*/);
    byte_4A5788B = 1;
  }
  entity = 0LL;
  StoneShopDetailDialog__Init(this, (const MethodInfo *)bankShop);
  this->fields.clickFunc = func;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.clickFunc, (int32_t)func, v7, v8);
  if ( bankShop )
  {
    stoneShopDetailListViewManager = this->fields.stoneShopDetailListViewManager;
    if ( stoneShopDetailListViewManager )
    {
      StoneShopDetailListViewManager__CreateList(stoneShopDetailListViewManager, bankShop, v10);
      stoneShopDetailListViewManager = this->fields.stoneShopDetailListViewManager;
      if ( stoneShopDetailListViewManager )
      {
        ListViewHeight = StoneShopDetailListViewManager__get_ListViewHeight(stoneShopDetailListViewManager, v9);
        stoneShopDetailListViewManager = this->fields.stoneShopDetailListViewManager;
        if ( stoneShopDetailListViewManager )
        {
          v13 = ListViewHeight;
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
                                                                                 (System_String_o *)StringLiteral_12291/*"STONE_SHOP_DETAIL_TITLE"*/,
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
                v13 + this->fields.stoneInfoOffset,
                0LL);
              chargeStoneNum = bankShop->fields.chargeStoneNum;
              freeStoneNum = bankShop->fields.freeStoneNum;
              stoneInfoTitleLabel = this->fields.stoneInfoTitleLabel;
              stoneShopDetailListViewManager = (StoneShopDetailListViewManager_o *)LocalizationManager__Get(
                                                                                     (System_String_o *)StringLiteral_12297/*"STONE_SHOP_STONE_INFO_TITLE"*/,
                                                                                     0LL);
              if ( stoneInfoTitleLabel )
              {
                UILabel__set_text(stoneInfoTitleLabel, (System_String_o *)stoneShopDetailListViewManager, 0LL);
                stoneInfoDetailLabel = this->fields.stoneInfoDetailLabel;
                v19 = LocalizationManager__Get((System_String_o *)StringLiteral_12296/*"STONE_SHOP_STONE_INFO_TEMPLATE"*/, 0LL);
                v42 = freeStoneNum + chargeStoneNum;
                v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v42, v20, v21, v22);
                v41 = chargeStoneNum;
                v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v41, v24, v25, v26);
                v40 = freeStoneNum;
                v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v40, v28, v29, v30);
                stoneShopDetailListViewManager = (StoneShopDetailListViewManager_o *)System_String__Format_61721472(
                                                                                       v19,
                                                                                       v23,
                                                                                       v27,
                                                                                       v31,
                                                                                       0LL);
                if ( stoneInfoDetailLabel )
                {
                  UILabel__set_text(stoneInfoDetailLabel, (System_String_o *)stoneShopDetailListViewManager, 0LL);
                  if ( !DataManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                  stoneShopDetailListViewManager = (StoneShopDetailListViewManager_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ItemMaster___);
                  if ( stoneShopDetailListViewManager )
                  {
                    stoneShopDetailListViewManager = (StoneShopDetailListViewManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                                           (DataMasterBase_TMaster__TEntity__PKType__o *)stoneShopDetailListViewManager,
                                                                                           &entity,
                                                                                           2,
                                                                                           (const MethodInfo_311D988 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
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
                      v34 = topFocusOffset_low * -0.5;
                      GameObjectExtensions__SetLocalPositionX(gameObject, v34 + 24.0, 0LL);
                      stoneShopDetailListViewManager = (StoneShopDetailListViewManager_o *)this->fields.stoneInfoIcon;
                      if ( stoneShopDetailListViewManager )
                      {
                        v35 = UnityEngine_Component__get_gameObject(
                                (UnityEngine_Component_o *)stoneShopDetailListViewManager,
                                0LL);
                        GameObjectExtensions__SetLocalPositionX(v35, v34, 0LL);
                        stoneShopDetailListViewManager = (StoneShopDetailListViewManager_o *)this->fields.extraItemTitleLabel;
                        if ( stoneShopDetailListViewManager )
                        {
                          v36 = UnityEngine_Component__get_gameObject(
                                  (UnityEngine_Component_o *)stoneShopDetailListViewManager,
                                  0LL);
                          GameObjectExtensions__SetLocalPositionY(v36, v13 + this->fields.extraItemOffset, 0LL);
                          extraItemTitleLabel = this->fields.extraItemTitleLabel;
                          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                          stoneShopDetailListViewManager = (StoneShopDetailListViewManager_o *)LocalizationManager__Get(
                                                                                                 (System_String_o *)StringLiteral_12294/*"STONE_SHOP_EXTRA_ITEM_TITLE"*/,
                                                                                                 0LL);
                          if ( extraItemTitleLabel )
                          {
                            UILabel__set_text(
                              extraItemTitleLabel,
                              (System_String_o *)stoneShopDetailListViewManager,
                              0LL);
                            buttonLabel = this->fields.buttonLabel;
                            stoneShopDetailListViewManager = (StoneShopDetailListViewManager_o *)LocalizationManager__Get(
                                                                                                   (System_String_o *)StringLiteral_3756/*"COMMON_CONFIRM_CLOSE"*/,
                                                                                                   0LL);
                            if ( buttonLabel )
                            {
                              UILabel__set_text(buttonLabel, (System_String_o *)stoneShopDetailListViewManager, 0LL);
                              v39 = this->fields.stoneShopDetailListViewManager;
                              if ( v39 )
                              {
                                stoneShopDetailListViewManager = (StoneShopDetailListViewManager_o *)v39->fields.scrollView;
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
    sub_1B8880C(stoneShopDetailListViewManager, v9);
  }
LABEL_34:
  BaseDialog__Open((BaseDialog_o *)this, 0LL, 0, 0LL);
}