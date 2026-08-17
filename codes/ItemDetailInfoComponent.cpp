void ItemDetailInfoComponent___ctor(ItemDetailInfoComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BaseDialog_c *v4; // x0

  if ( (byte_596B5FA & 1) == 0 )
  {
    sub_2213A60(&BaseDialog_TypeInfo);
    byte_596B5FA = 1;
  }
  v4 = BaseDialog_TypeInfo;
  *(_QWORD *)&this->fields.DETAIL_FONT_SIZE = 0x1200000019LL;
  if ( !*(&v4->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v4, method, v2);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void ItemDetailInfoComponent__Callback(ItemDetailInfoComponent_o *this, bool result, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *p_callbackFunc; // x0
  struct ItemDetailInfoComponent_CallbackFunc_o *v9; // x20
  struct ItemDetailInfoComponent_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_2213A04(p_callbackFunc, 0, (System_String_o *)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, bool, intptr_t))v9->fields.invoke_impl)(
      v9->fields.method_code,
      result,
      v9->fields.method);
  }
}


void ItemDetailInfoComponent__Close(ItemDetailInfoComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ItemDetailInfoComponent__Close_39909252(this, 0, v2);
}


void ItemDetailInfoComponent__Close_39909252(
        ItemDetailInfoComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_Action_o *v10; // x20

  if ( (byte_596B5F8 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_ItemDetailInfoComponent_EndClose__);
    byte_596B5F8 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v10 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_ItemDetailInfoComponent_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v10, 0);
}


void ItemDetailInfoComponent__EndClose(ItemDetailInfoComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  MissionNaviTransitionBoardItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v12; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  ItemDetailInfoComponent__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_2213CDC(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc;
  v12 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0;
    sub_2213A04(p_closeCallbackFunc, 0, v5, v6, v7, v8, v9, v10);
    ((void (__fastcall *)(intptr_t, intptr_t))v12->fields.invoke_impl)(v12->fields.method_code, v12->fields.method);
  }
}


void ItemDetailInfoComponent__EndOpen(ItemDetailInfoComponent_o *this, const MethodInfo *method)
{
  if ( this->fields.state == 1 )
    this->fields.state = 0;
}


void ItemDetailInfoComponent__Init(ItemDetailInfoComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *itemDetailInfo; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Object_o *externalPayStoneNumLabel; // x20

  if ( (byte_596B5F3 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596B5F3 = 1;
  }
  itemDetailInfo = this->fields.itemDetailInfo;
  if ( !itemDetailInfo )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(itemDetailInfo, 1, 0);
  itemDetailInfo = (UnityEngine_GameObject_o *)this->fields.itemNameLabel;
  if ( !itemDetailInfo )
    goto LABEL_16;
  UILabel__set_text((UILabel_o *)itemDetailInfo, (System_String_o *)StringLiteral_1/*""*/, 0);
  itemDetailInfo = (UnityEngine_GameObject_o *)this->fields.itemDetailLabel;
  if ( !itemDetailInfo )
    goto LABEL_16;
  UILabel__set_text((UILabel_o *)itemDetailInfo, (System_String_o *)StringLiteral_1/*""*/, 0);
  itemDetailInfo = this->fields.stoneDetailInfo;
  if ( !itemDetailInfo )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(itemDetailInfo, 0, 0);
  itemDetailInfo = (UnityEngine_GameObject_o *)this->fields.payStoneNumLabel;
  if ( !itemDetailInfo )
    goto LABEL_16;
  UILabel__set_text((UILabel_o *)itemDetailInfo, (System_String_o *)StringLiteral_1/*""*/, 0);
  itemDetailInfo = (UnityEngine_GameObject_o *)this->fields.freeStoneNumLabel;
  if ( !itemDetailInfo )
    goto LABEL_16;
  UILabel__set_text((UILabel_o *)itemDetailInfo, (System_String_o *)StringLiteral_1/*""*/, 0);
  externalPayStoneNumLabel = (UnityEngine_Object_o *)this->fields.externalPayStoneNumLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4, v5);
  if ( UnityEngine_Object__op_Inequality(externalPayStoneNumLabel, 0, 0) )
  {
    itemDetailInfo = (UnityEngine_GameObject_o *)this->fields.externalPayStoneNumLabel;
    if ( !itemDetailInfo )
      goto LABEL_16;
    UILabel__set_text((UILabel_o *)itemDetailInfo, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  itemDetailInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !itemDetailInfo )
LABEL_16:
    sub_2213CDC(itemDetailInfo, method);
  UnityEngine_GameObject__SetActive(itemDetailInfo, 0, 0);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void ItemDetailInfoComponent__OnClickCancel(ItemDetailInfoComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ItemDetailInfoComponent__Callback(this, 0, v2);
}


void ItemDetailInfoComponent__OnClickDecide(ItemDetailInfoComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ItemDetailInfoComponent__Callback(this, 1, v2);
}


void ItemDetailInfoComponent__Open(
        ItemDetailInfoComponent_o *this,
        ItemEntity_o *itemData,
        ItemDetailInfoComponent_CallbackFunc_o *callback,
        int32_t depth,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v10; // x1
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  UILabel_o *itemDetailLabel; // x21
  System_String_o *Detail; // x0
  const MethodInfo *v19; // x1
  System_Action_o *v20; // x20

  if ( (byte_596B5F5 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UIPanel___);
    sub_2213A60(&Method_ItemDetailInfoComponent_EndOpen__);
    byte_596B5F5 = 1;
  }
  if ( !this->fields.state )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject
      || (UnityEngine_GameObject__SetActive(gameObject, 1, 0),
          (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0)
      || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     gameObject,
                                                     (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UIPanel___)) == 0
      || (UIPanel__set_depth((UIPanel_o *)gameObject, depth, 0),
          this->fields.callbackFunc = callback,
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
            (int32_t)callback,
            v11,
            v12,
            v13,
            v14,
            v15,
            v16),
          !itemData)
      || (gameObject = (UnityEngine_GameObject_o *)this->fields.itemNameLabel) == 0 )
    {
      sub_2213CDC(gameObject, v10);
    }
    UILabel__set_text((UILabel_o *)gameObject, itemData->fields.name, 0);
    itemDetailLabel = this->fields.itemDetailLabel;
    Detail = ItemEntity__GetDetail(itemData, 0);
    WrapControlText__textAdjust(itemDetailLabel, Detail, this->fields.DETAIL_FONT_SIZE, 0, 0);
    this->fields.state = 1;
    ItemDetailInfoComponent__setBtnInfoActive(this, v19);
    v20 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v20, (Il2CppObject *)this, Method_ItemDetailInfoComponent_EndOpen__, 0);
    BaseDialog__Open((BaseDialog_o *)this, v20, 0, 0, 0);
  }
}


void ItemDetailInfoComponent__OpenItemMsgInfo(
        ItemDetailInfoComponent_o *this,
        System_String_o *name,
        System_String_o *detail,
        ItemDetailInfoComponent_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v10; // x1
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  const MethodInfo *v17; // x1
  System_Action_o *v18; // x20

  if ( (byte_596B5F6 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_ItemDetailInfoComponent_EndOpen__);
    byte_596B5F6 = 1;
  }
  if ( !this->fields.state )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject
      || (UnityEngine_GameObject__SetActive(gameObject, 1, 0),
          this->fields.callbackFunc = callback,
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
            (int32_t)callback,
            v11,
            v12,
            v13,
            v14,
            v15,
            v16),
          (gameObject = (UnityEngine_GameObject_o *)this->fields.itemNameLabel) == 0) )
    {
      sub_2213CDC(gameObject, v10);
    }
    UILabel__set_text((UILabel_o *)gameObject, name, 0);
    WrapControlText__textAdjust(this->fields.itemDetailLabel, detail, this->fields.DETAIL_FONT_SIZE, 0, 0);
    this->fields.state = 1;
    ItemDetailInfoComponent__setBtnInfoActive(this, v17);
    v18 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v18, (Il2CppObject *)this, Method_ItemDetailInfoComponent_EndOpen__, 0);
    BaseDialog__Open((BaseDialog_o *)this, v18, 0, 0, 0);
  }
}


void ItemDetailInfoComponent__OpenUserItemInfo(
        ItemDetailInfoComponent_o *this,
        UserItemData_o *itemData,
        ItemDetailInfoComponent_CallbackFunc_o *callback,
        int32_t spacingY,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v10; // x1
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  const MethodInfo *v17; // x1
  System_Action_o *v18; // x20

  if ( (byte_596B5F4 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_ItemDetailInfoComponent_EndOpen__);
    byte_596B5F4 = 1;
  }
  if ( !this->fields.state )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject
      || (UnityEngine_GameObject__SetActive(gameObject, 1, 0),
          this->fields.callbackFunc = callback,
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
            (int32_t)callback,
            v11,
            v12,
            v13,
            v14,
            v15,
            v16),
          !itemData)
      || (gameObject = (UnityEngine_GameObject_o *)this->fields.itemNameLabel) == 0
      || (UILabel__set_text((UILabel_o *)gameObject, itemData->fields.name, 0),
          (gameObject = (UnityEngine_GameObject_o *)this->fields.itemDetailLabel) == 0) )
    {
      sub_2213CDC(gameObject, v10);
    }
    UILabel__set_spacingY((UILabel_o *)gameObject, spacingY, 0);
    WrapControlText__textAdjust(
      this->fields.itemDetailLabel,
      itemData->fields.detail,
      this->fields.DETAIL_FONT_SIZE,
      0,
      0);
    this->fields.state = 1;
    ItemDetailInfoComponent__setBtnInfoActive(this, v17);
    v18 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v18, (Il2CppObject *)this, Method_ItemDetailInfoComponent_EndOpen__, 0);
    BaseDialog__Open((BaseDialog_o *)this, v18, 0, 0, 0);
  }
}


void ItemDetailInfoComponent__ShowStoneDetail(
        ItemDetailInfoComponent_o *this,
        System_String_o *name,
        System_String_o *detail,
        UserGameEntity_o *userData,
        UserExternalPaymentStoneEntity_o *userExternalPaymentStone,
        ItemDetailInfoComponent_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v14; // x1
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  __int64 v21; // x1
  __int64 v22; // x2
  UILabel_o *payStoneTitleLabel; // x22
  UILabel_o *payStoneNumLabel; // x22
  UILabel_o *freeStoneTitleLabel; // x22
  UILabel_o *freeStoneNumLabel; // x22
  __int64 v27; // x1
  __int64 v28; // x2
  UnityEngine_Object_o *externalPayStoneTitleLabel; // x21
  __int64 v30; // x1
  __int64 v31; // x2
  UILabel_o *v32; // x21
  UnityEngine_Object_o *externalPayStoneNumLabel; // x21
  __int64 v34; // x1
  __int64 v35; // x2
  UILabel_o *v36; // x21
  int32_t stone; // w20
  UILabel_o *stoneNoticeLabel; // x20
  const MethodInfo *v39; // x1
  System_Action_o *v40; // x20

  if ( (byte_596B5F7 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_ItemDetailInfoComponent_EndOpen__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_6055/*"EXTERNAL_PAYSTONE_INFO_TITLE"*/);
    sub_2213A60(&StringLiteral_6798/*"FREESTONE_INFO_TITLE"*/);
    sub_2213A60(&StringLiteral_10763/*"PAYSTONE_INFO_TITLE"*/);
    sub_2213A60(&StringLiteral_12887/*"STONE_INFO_NOTICE"*/);
    byte_596B5F7 = 1;
  }
  if ( !this->fields.state )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, 1, 0);
      this->fields.callbackFunc = callback;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
        (int32_t)callback,
        v15,
        v16,
        v17,
        v18,
        v19,
        v20);
      gameObject = this->fields.itemDetailInfo;
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive(gameObject, 0, 0);
        gameObject = this->fields.stoneDetailInfo;
        if ( gameObject )
        {
          UnityEngine_GameObject__SetActive(gameObject, 1, 0);
          gameObject = (UnityEngine_GameObject_o *)this->fields.stoneTitleLabel;
          if ( gameObject )
          {
            UILabel__set_text((UILabel_o *)gameObject, name, 0);
            WrapControlText__textAdjust(
              this->fields.stoneDetailLabel,
              detail,
              this->fields.STONE_DETAIL_FONT_SIZE,
              0,
              0);
            payStoneTitleLabel = this->fields.payStoneTitleLabel;
            if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v21, v22);
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10763/*"PAYSTONE_INFO_TITLE"*/, 0);
            if ( payStoneTitleLabel )
            {
              UILabel__set_text(payStoneTitleLabel, (System_String_o *)gameObject, 0);
              if ( userData )
              {
                if ( userExternalPaymentStone )
                {
                  payStoneNumLabel = this->fields.payStoneNumLabel;
                  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__GetUnitInfo(
                                                             userData->fields.chargeStone
                                                           - userExternalPaymentStone->fields.stone,
                                                             0);
                  if ( payStoneNumLabel )
                  {
                    UILabel__set_text(payStoneNumLabel, (System_String_o *)gameObject, 0);
                    freeStoneTitleLabel = this->fields.freeStoneTitleLabel;
                    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                               (System_String_o *)StringLiteral_6798/*"FREESTONE_INFO_TITLE"*/,
                                                               0);
                    if ( freeStoneTitleLabel )
                    {
                      UILabel__set_text(freeStoneTitleLabel, (System_String_o *)gameObject, 0);
                      freeStoneNumLabel = this->fields.freeStoneNumLabel;
                      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__GetUnitInfo(
                                                                 userData->fields.freeStone,
                                                                 0);
                      if ( freeStoneNumLabel )
                      {
                        UILabel__set_text(freeStoneNumLabel, (System_String_o *)gameObject, 0);
                        externalPayStoneTitleLabel = (UnityEngine_Object_o *)this->fields.externalPayStoneTitleLabel;
                        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v27, v28);
                        if ( UnityEngine_Object__op_Inequality(externalPayStoneTitleLabel, 0, 0) )
                        {
                          v32 = this->fields.externalPayStoneTitleLabel;
                          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v30, v31);
                          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                     (System_String_o *)StringLiteral_6055/*"EXTERNAL_PAYSTONE_INFO_TITLE"*/,
                                                                     0);
                          if ( !v32 )
                            goto LABEL_34;
                          UILabel__set_text(v32, (System_String_o *)gameObject, 0);
                        }
                        externalPayStoneNumLabel = (UnityEngine_Object_o *)this->fields.externalPayStoneNumLabel;
                        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v30, v31);
                        if ( UnityEngine_Object__op_Inequality(externalPayStoneNumLabel, 0, 0) )
                        {
                          v36 = this->fields.externalPayStoneNumLabel;
                          stone = userExternalPaymentStone->fields.stone;
                          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v34, v35);
                          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__GetUnitInfo(stone, 0);
                          if ( !v36 )
                            goto LABEL_34;
                          UILabel__set_text(v36, (System_String_o *)gameObject, 0);
                        }
                        stoneNoticeLabel = this->fields.stoneNoticeLabel;
                        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v34, v35);
                        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                   (System_String_o *)StringLiteral_12887/*"STONE_INFO_NOTICE"*/,
                                                                   0);
                        if ( stoneNoticeLabel )
                        {
                          UILabel__set_text(stoneNoticeLabel, (System_String_o *)gameObject, 0);
                          this->fields.state = 1;
                          ItemDetailInfoComponent__setBtnInfoActive(this, v39);
                          v40 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
                          System_Action___ctor(v40, (Il2CppObject *)this, Method_ItemDetailInfoComponent_EndOpen__, 0);
                          BaseDialog__Open((BaseDialog_o *)this, v40, 0, 0, 0);
                          return;
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
LABEL_34:
    sub_2213CDC(gameObject, v14);
  }
}


void ItemDetailInfoComponent__add_callbackFunc(
        ItemDetailInfoComponent_o *this,
        ItemDetailInfoComponent_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct ItemDetailInfoComponent_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct ItemDetailInfoComponent_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  ItemDetailInfoComponent_o *v13; // x0
  ItemDetailInfoComponent_CallbackFunc_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_596B5F1 & 1) == 0 )
  {
    sub_2213A60(&ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    byte_596B5F1 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (ItemDetailInfoComponent_CallbackFunc_c *)v8->klass != ItemDetailInfoComponent_CallbackFunc_TypeInfo )
        break;
    }
    v11 = sub_224B48C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (ItemDetailInfoComponent_o *)sub_221405C(v8, ItemDetailInfoComponent_CallbackFunc_TypeInfo, v9, v10);
  ItemDetailInfoComponent__remove_callbackFunc(v13, v14, v15);
}


System_String_o *ItemDetailInfoComponent__get_closeBtnPath(ItemDetailInfoComponent_o *this, const MethodInfo *method)
{
  if ( (byte_596B5F9 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_7977/*"InfoWindow/CloseBtn"*/);
    byte_596B5F9 = 1;
  }
  return (System_String_o *)StringLiteral_7977/*"InfoWindow/CloseBtn"*/;
}


void ItemDetailInfoComponent__remove_callbackFunc(
        ItemDetailInfoComponent_o *this,
        ItemDetailInfoComponent_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct ItemDetailInfoComponent_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct ItemDetailInfoComponent_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  ItemDetailInfoComponent_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_596B5F2 & 1) == 0 )
  {
    sub_2213A60(&ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    byte_596B5F2 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (ItemDetailInfoComponent_CallbackFunc_c *)v8->klass != ItemDetailInfoComponent_CallbackFunc_TypeInfo )
        break;
    }
    v11 = sub_224B48C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (ItemDetailInfoComponent_o *)sub_221405C(v8, ItemDetailInfoComponent_CallbackFunc_TypeInfo, v9, v10);
  ItemDetailInfoComponent__Init(v13, v14);
}


void ItemDetailInfoComponent__setBtnInfoActive(ItemDetailInfoComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *stoneDetailBtnObject; // x0

  if ( this->fields.state == 1 )
  {
    stoneDetailBtnObject = this->fields.stoneDetailBtnObject;
    if ( !stoneDetailBtnObject )
      goto LABEL_9;
    if ( UnityEngine_GameObject__get_activeSelf(stoneDetailBtnObject, 0) )
    {
      stoneDetailBtnObject = this->fields.stoneDetailBtnObject;
      if ( !stoneDetailBtnObject )
        goto LABEL_9;
      UnityEngine_GameObject__SetActive(stoneDetailBtnObject, 0, 0);
    }
    stoneDetailBtnObject = this->fields.closeBtnObject;
    if ( stoneDetailBtnObject )
    {
      UnityEngine_GameObject__SetActive(stoneDetailBtnObject, 1, 0);
      return;
    }
LABEL_9:
    sub_2213CDC(stoneDetailBtnObject, method);
  }
}


void ItemDetailInfoComponent_CallbackFunc___ctor(
        ItemDetailInfoComponent_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_2213B38(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_2001F2C;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_2001EE4;
}


System_IAsyncResult_o *ItemDetailInfoComponent_CallbackFunc__BeginInvoke(
        ItemDetailInfoComponent_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-38h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = result;
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(qword_5984328, v10);
  return (System_IAsyncResult_o *)sub_2213A14(this, v9, callback, object);
}


void ItemDetailInfoComponent_CallbackFunc__EndInvoke(
        ItemDetailInfoComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
}


void ItemDetailInfoComponent_CallbackFunc__Invoke(
        ItemDetailInfoComponent_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    result,
    this->fields.method);
}