void StoneShopDetailDialog___ctor(StoneShopDetailDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_593481D & 1) == 0 )
  {
    sub_21FFC50(&BaseDialog_TypeInfo);
    byte_593481D = 1;
  }
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method, v2);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void StoneShopDetailDialog__Close(StoneShopDetailDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  StoneShopDetailDialog__Close_42077576(this, 0, v2);
}


void StoneShopDetailDialog__Close_42077576(
        StoneShopDetailDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_Action_o *v10; // x20

  if ( (byte_593481A & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_StoneShopDetailDialog_EndClose__);
    byte_593481A = 1;
  }
  this->fields.closeEndFunc = callback;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.closeEndFunc,
    (int32_t)callback,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v10 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_StoneShopDetailDialog_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v10, 0);
}


void StoneShopDetailDialog__EndClose(StoneShopDetailDialog_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x2
  System_String_o *v4; // x3
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7
  MissionNaviTransitionBoardItem_o *p_closeEndFunc; // x19
  struct System_Action_o *v10; // x20
  struct System_Action_o *closeEndFunc; // t1

  StoneShopDetailDialog__Init(this, method);
  closeEndFunc = this->fields.closeEndFunc;
  p_closeEndFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.closeEndFunc;
  v10 = closeEndFunc;
  if ( closeEndFunc )
  {
    p_closeEndFunc->klass = 0;
    sub_21FFBF4(p_closeEndFunc, 0, v3, v4, v5, v6, v7, v8);
    ((void (__fastcall *)(intptr_t, intptr_t))v10->fields.invoke_impl)(v10->fields.method_code, v10->fields.method);
  }
}


void StoneShopDetailDialog__Init(StoneShopDetailDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_21FFECC(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void StoneShopDetailDialog__OnClickClose(StoneShopDetailDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  MissionNaviTransitionBoardItem_o *p_clickFunc; // x0
  struct System_Action_o *clickFunc; // x20

  if ( (byte_593481B & 1) == 0 )
  {
    sub_21FFC50(&Method_StoneShopDetailDialog_OnClickClose__);
    byte_593481B = 1;
  }
  v3 = Method_StoneShopDetailDialog_OnClickClose__;
  if ( (*((_BYTE *)Method_StoneShopDetailDialog_OnClickClose__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_21FFC68(Method_StoneShopDetailDialog_OnClickClose__);
  v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
  p_clickFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.clickFunc;
  clickFunc = this->fields.clickFunc;
  if ( clickFunc )
  {
    p_clickFunc->klass = 0;
    sub_21FFBF4(p_clickFunc, 0, v5, v6, v7, v8, v9, v10);
    ((void (__fastcall *)(intptr_t, intptr_t))clickFunc->fields.invoke_impl)(
      clickFunc->fields.method_code,
      clickFunc->fields.method);
  }
  else
  {
    StoneShopDetailDialog__Close_42077576(this, 0, (const MethodInfo *)v5);
  }
}


void StoneShopDetailDialog__OnEnable(StoneShopDetailDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_593481C & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_16229/*"Window/CloseButton"*/);
    byte_593481C = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_51910300(transform, (System_String_o *)StringLiteral_16229/*"Window/CloseButton"*/, 0);
}


void StoneShopDetailDialog__Open(
        StoneShopDetailDialog_o *this,
        BankShopEntity_o *bankShop,
        System_Action_o *func,
        const MethodInfo *method)
{
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x2
  StoneShopDetailListViewManager_o *stoneShopDetailListViewManager; // x0
  float ListViewHeight; // s0
  float v17; // s8
  __int64 v18; // x2
  UILabel_o *titleLabel; // x21
  int32_t chargeStoneNum; // w23
  int32_t freeStoneNum; // w25
  UILabel_o *stoneInfoTitleLabel; // x20
  UILabel_o *stoneInfoDetailLabel; // x20
  System_String_o *v24; // x21
  Il2CppObject *v25; // x22
  Il2CppObject *v26; // x23
  Il2CppObject *v27; // x0
  __int64 v28; // x1
  __int64 v29; // x2
  float topFocusOffset_low; // s9
  UnityEngine_GameObject_o *gameObject; // x0
  float v32; // s9
  UnityEngine_GameObject_o *v33; // x0
  UnityEngine_GameObject_o *v34; // x0
  __int64 v35; // x1
  __int64 v36; // x2
  UILabel_o *extraItemTitleLabel; // x20
  UILabel_o *buttonLabel; // x20
  struct StoneShopDetailListViewManager_o *v39; // x8
  int32_t v40; // [xsp+4h] [xbp-6Ch] BYREF
  int32_t v41; // [xsp+8h] [xbp-68h] BYREF
  int v42; // [xsp+Ch] [xbp-64h] BYREF
  Il2CppObject *entity; // [xsp+28h] [xbp-48h] BYREF

  if ( (byte_5934819 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_ItemMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_3823/*"COMMON_CONFIRM_CLOSE"*/);
    sub_21FFC50(&StringLiteral_12887/*"STONE_SHOP_EXTRA_ITEM_TITLE"*/);
    sub_21FFC50(&StringLiteral_12884/*"STONE_SHOP_DETAIL_TITLE"*/);
    sub_21FFC50(&StringLiteral_12889/*"STONE_SHOP_STONE_INFO_TEMPLATE"*/);
    sub_21FFC50(&StringLiteral_12890/*"STONE_SHOP_STONE_INFO_TITLE"*/);
    byte_5934819 = 1;
  }
  entity = 0;
  StoneShopDetailDialog__Init(this, (const MethodInfo *)bankShop);
  this->fields.clickFunc = func;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.clickFunc, (int32_t)func, v7, v8, v9, v10, v11, v12);
  if ( bankShop )
  {
    stoneShopDetailListViewManager = this->fields.stoneShopDetailListViewManager;
    if ( stoneShopDetailListViewManager )
    {
      StoneShopDetailListViewManager__CreateList(stoneShopDetailListViewManager, bankShop, v14);
      stoneShopDetailListViewManager = this->fields.stoneShopDetailListViewManager;
      if ( stoneShopDetailListViewManager )
      {
        ListViewHeight = StoneShopDetailListViewManager__get_ListViewHeight(stoneShopDetailListViewManager, v13);
        stoneShopDetailListViewManager = this->fields.stoneShopDetailListViewManager;
        if ( stoneShopDetailListViewManager )
        {
          v17 = ListViewHeight;
          if ( ListViewManager__get_ItemSum((ListViewManager_o *)stoneShopDetailListViewManager, 0) <= 0 )
          {
            stoneShopDetailListViewManager = (StoneShopDetailListViewManager_o *)this->fields.extraItemTitleLabel;
            if ( !stoneShopDetailListViewManager )
              goto LABEL_35;
            stoneShopDetailListViewManager = (StoneShopDetailListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                                                   (UnityEngine_Component_o *)stoneShopDetailListViewManager,
                                                                                   0);
            if ( !stoneShopDetailListViewManager )
              goto LABEL_35;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)stoneShopDetailListViewManager, 0, 0);
          }
          titleLabel = this->fields.titleLabel;
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v13, v18);
          stoneShopDetailListViewManager = (StoneShopDetailListViewManager_o *)LocalizationManager__Get(
                                                                                 (System_String_o *)StringLiteral_12884/*"STONE_SHOP_DETAIL_TITLE"*/,
                                                                                 0);
          if ( titleLabel )
          {
            UILabel__set_text(titleLabel, (System_String_o *)stoneShopDetailListViewManager, 0);
            stoneShopDetailListViewManager = (StoneShopDetailListViewManager_o *)this->fields.titleDetailLabel;
            if ( stoneShopDetailListViewManager )
            {
              UILabel__set_text((UILabel_o *)stoneShopDetailListViewManager, bankShop->fields.nameDetail, 0);
              GameObjectExtensions__SetLocalPositionY(
                this->fields.stoneInfoContainer,
                v17 + this->fields.stoneInfoOffset,
                0);
              chargeStoneNum = bankShop->fields.chargeStoneNum;
              freeStoneNum = bankShop->fields.freeStoneNum;
              stoneInfoTitleLabel = this->fields.stoneInfoTitleLabel;
              stoneShopDetailListViewManager = (StoneShopDetailListViewManager_o *)LocalizationManager__Get(
                                                                                     (System_String_o *)StringLiteral_12890/*"STONE_SHOP_STONE_INFO_TITLE"*/,
                                                                                     0);
              if ( stoneInfoTitleLabel )
              {
                UILabel__set_text(stoneInfoTitleLabel, (System_String_o *)stoneShopDetailListViewManager, 0);
                stoneInfoDetailLabel = this->fields.stoneInfoDetailLabel;
                v24 = LocalizationManager__Get((System_String_o *)StringLiteral_12889/*"STONE_SHOP_STONE_INFO_TEMPLATE"*/, 0);
                v42 = freeStoneNum + chargeStoneNum;
                v25 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v42);
                v41 = chargeStoneNum;
                v26 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v41);
                v40 = freeStoneNum;
                v27 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v40);
                stoneShopDetailListViewManager = (StoneShopDetailListViewManager_o *)System_String__Format_75484644(
                                                                                       v24,
                                                                                       v25,
                                                                                       v26,
                                                                                       v27,
                                                                                       0);
                if ( stoneInfoDetailLabel )
                {
                  UILabel__set_text(stoneInfoDetailLabel, (System_String_o *)stoneShopDetailListViewManager, 0);
                  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
                    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v28, v29);
                  stoneShopDetailListViewManager = (StoneShopDetailListViewManager_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ItemMaster___);
                  if ( stoneShopDetailListViewManager )
                  {
                    stoneShopDetailListViewManager = (StoneShopDetailListViewManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                                           (DataMasterBase_TMaster__TEntity__PKType__o *)stoneShopDetailListViewManager,
                                                                                           &entity,
                                                                                           2,
                                                                                           (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
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
                        0);
                    }
                    stoneShopDetailListViewManager = (StoneShopDetailListViewManager_o *)this->fields.stoneInfoDetailLabel;
                    if ( stoneShopDetailListViewManager )
                    {
                      topFocusOffset_low = (float)SLODWORD(stoneShopDetailListViewManager->fields.topFocusOffset);
                      gameObject = UnityEngine_Component__get_gameObject(
                                     (UnityEngine_Component_o *)stoneShopDetailListViewManager,
                                     0);
                      v32 = topFocusOffset_low * -0.5;
                      GameObjectExtensions__SetLocalPositionX(gameObject, v32 + 24.0, 0);
                      stoneShopDetailListViewManager = (StoneShopDetailListViewManager_o *)this->fields.stoneInfoIcon;
                      if ( stoneShopDetailListViewManager )
                      {
                        v33 = UnityEngine_Component__get_gameObject(
                                (UnityEngine_Component_o *)stoneShopDetailListViewManager,
                                0);
                        GameObjectExtensions__SetLocalPositionX(v33, v32, 0);
                        stoneShopDetailListViewManager = (StoneShopDetailListViewManager_o *)this->fields.extraItemTitleLabel;
                        if ( stoneShopDetailListViewManager )
                        {
                          v34 = UnityEngine_Component__get_gameObject(
                                  (UnityEngine_Component_o *)stoneShopDetailListViewManager,
                                  0);
                          GameObjectExtensions__SetLocalPositionY(v34, v17 + this->fields.extraItemOffset, 0);
                          extraItemTitleLabel = this->fields.extraItemTitleLabel;
                          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v35, v36);
                          stoneShopDetailListViewManager = (StoneShopDetailListViewManager_o *)LocalizationManager__Get(
                                                                                                 (System_String_o *)StringLiteral_12887/*"STONE_SHOP_EXTRA_ITEM_TITLE"*/,
                                                                                                 0);
                          if ( extraItemTitleLabel )
                          {
                            UILabel__set_text(extraItemTitleLabel, (System_String_o *)stoneShopDetailListViewManager, 0);
                            buttonLabel = this->fields.buttonLabel;
                            stoneShopDetailListViewManager = (StoneShopDetailListViewManager_o *)LocalizationManager__Get(
                                                                                                   (System_String_o *)StringLiteral_3823/*"COMMON_CONFIRM_CLOSE"*/,
                                                                                                   0);
                            if ( buttonLabel )
                            {
                              UILabel__set_text(buttonLabel, (System_String_o *)stoneShopDetailListViewManager, 0);
                              v39 = this->fields.stoneShopDetailListViewManager;
                              if ( v39 )
                              {
                                stoneShopDetailListViewManager = (StoneShopDetailListViewManager_o *)v39->fields.scrollView;
                                if ( stoneShopDetailListViewManager )
                                {
                                  UIScrollView__ResetPosition((UIScrollView_o *)stoneShopDetailListViewManager, 0);
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
    sub_21FFECC(stoneShopDetailListViewManager, v13);
  }
LABEL_34:
  BaseDialog__Open((BaseDialog_o *)this, 0, 0, 0, 0);
}