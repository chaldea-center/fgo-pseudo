void __fastcall ItemDetailInfoComponent___ctor(ItemDetailInfoComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4A0429E & 1) == 0 )
  {
    sub_1B686D4(&BaseDialog_TypeInfo, method);
    byte_4A0429E = 1;
  }
  *(_QWORD *)&this->fields.DETAIL_FONT_SIZE = 0x1200000019LL;
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall ItemDetailInfoComponent__Callback(
        ItemDetailInfoComponent_o *this,
        bool result,
        const MethodInfo *method)
{
  struct ItemDetailInfoComponent_CallbackFunc_o **p_callbackFunc; // x0
  struct ItemDetailInfoComponent_CallbackFunc_o *v4; // x20
  struct ItemDetailInfoComponent_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v4 = callbackFunc;
  if ( callbackFunc )
  {
    *p_callbackFunc = 0LL;
    sub_1B68678(p_callbackFunc);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))v4->fields.m_target)(
      v4->fields.original_method_info,
      result,
      *(_QWORD *)&v4->fields.extra_arg);
  }
}


void __fastcall ItemDetailInfoComponent__Close(ItemDetailInfoComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ItemDetailInfoComponent__Close_30868532(this, 0LL, v2);
}


void __fastcall ItemDetailInfoComponent__Close_30868532(
        ItemDetailInfoComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Action_o *v6; // x20

  if ( (byte_4A0429C & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, callback);
    sub_1B686D4(&Method_ItemDetailInfoComponent_EndClose__, v5);
    byte_4A0429C = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1B68678(&this->fields.closeCallbackFunc);
  v6 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_ItemDetailInfoComponent_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v6, 0LL);
}


void __fastcall ItemDetailInfoComponent__EndClose(ItemDetailInfoComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  struct System_Action_o **p_closeCallbackFunc; // x19
  struct System_Action_o *v6; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  ItemDetailInfoComponent__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B68930(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = &this->fields.closeCallbackFunc;
  v6 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    *p_closeCallbackFunc = 0LL;
    sub_1B68678(p_closeCallbackFunc);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v6->fields.m_target)(
      v6->fields.original_method_info,
      *(_QWORD *)&v6->fields.extra_arg);
  }
}


void __fastcall ItemDetailInfoComponent__EndOpen(ItemDetailInfoComponent_o *this, const MethodInfo *method)
{
  if ( this->fields.state == 1 )
    this->fields.state = 0;
}


void __fastcall ItemDetailInfoComponent__Init(ItemDetailInfoComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *itemDetailInfo; // x0
  UnityEngine_Object_o *externalPayStoneNumLabel; // x20

  if ( (byte_4A04297 & 1) == 0 )
  {
    sub_1B686D4(&UnityEngine_Object_TypeInfo, method);
    sub_1B686D4(&StringLiteral_1/*""*/, v3);
    byte_4A04297 = 1;
  }
  itemDetailInfo = this->fields.itemDetailInfo;
  if ( !itemDetailInfo )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(itemDetailInfo, 1, 0LL);
  itemDetailInfo = (UnityEngine_GameObject_o *)this->fields.itemNameLabel;
  if ( !itemDetailInfo )
    goto LABEL_16;
  UILabel__set_text((UILabel_o *)itemDetailInfo, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  itemDetailInfo = (UnityEngine_GameObject_o *)this->fields.itemDetailLabel;
  if ( !itemDetailInfo )
    goto LABEL_16;
  UILabel__set_text((UILabel_o *)itemDetailInfo, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  itemDetailInfo = this->fields.stoneDetailInfo;
  if ( !itemDetailInfo )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(itemDetailInfo, 0, 0LL);
  itemDetailInfo = (UnityEngine_GameObject_o *)this->fields.payStoneNumLabel;
  if ( !itemDetailInfo )
    goto LABEL_16;
  UILabel__set_text((UILabel_o *)itemDetailInfo, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  itemDetailInfo = (UnityEngine_GameObject_o *)this->fields.freeStoneNumLabel;
  if ( !itemDetailInfo )
    goto LABEL_16;
  UILabel__set_text((UILabel_o *)itemDetailInfo, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  externalPayStoneNumLabel = (UnityEngine_Object_o *)this->fields.externalPayStoneNumLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(externalPayStoneNumLabel, 0LL, 0LL) )
  {
    itemDetailInfo = (UnityEngine_GameObject_o *)this->fields.externalPayStoneNumLabel;
    if ( !itemDetailInfo )
      goto LABEL_16;
    UILabel__set_text((UILabel_o *)itemDetailInfo, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  itemDetailInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !itemDetailInfo )
LABEL_16:
    sub_1B68930(itemDetailInfo, method);
  UnityEngine_GameObject__SetActive(itemDetailInfo, 0, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall ItemDetailInfoComponent__OnClickCancel(ItemDetailInfoComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ItemDetailInfoComponent__Callback(this, 0, v2);
}


void __fastcall ItemDetailInfoComponent__OnClickDecide(ItemDetailInfoComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ItemDetailInfoComponent__Callback(this, 1, v2);
}


void __fastcall ItemDetailInfoComponent__Open(
        ItemDetailInfoComponent_o *this,
        ItemEntity_o *itemData,
        ItemDetailInfoComponent_CallbackFunc_o *callback,
        int32_t depth,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x1
  System_Action_o *v14; // x20

  if ( (byte_4A04299 & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, itemData);
    sub_1B686D4(&Method_UnityEngine_GameObject_GetComponent_UIPanel___, v9);
    sub_1B686D4(&Method_ItemDetailInfoComponent_EndOpen__, v10);
    byte_4A04299 = 1;
  }
  if ( !this->fields.state )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject
      || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
          (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL)
      || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     gameObject,
                                                     (const MethodInfo_2E98950 *)Method_UnityEngine_GameObject_GetComponent_UIPanel___)) == 0LL
      || (UIPanel__set_depth((UIPanel_o *)gameObject, depth, 0LL),
          this->fields.callbackFunc = callback,
          gameObject = (UnityEngine_GameObject_o *)sub_1B68678(&this->fields.callbackFunc),
          !itemData)
      || (gameObject = (UnityEngine_GameObject_o *)this->fields.itemNameLabel) == 0LL )
    {
      sub_1B68930(gameObject, v12);
    }
    UILabel__set_text((UILabel_o *)gameObject, itemData->fields.name, 0LL);
    WrapControlText__textAdjust(
      this->fields.itemDetailLabel,
      itemData->fields.detail,
      this->fields.DETAIL_FONT_SIZE,
      0,
      0,
      0LL);
    this->fields.state = 1;
    ItemDetailInfoComponent__setBtnInfoActive(this, v13);
    v14 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
    System_Action___ctor(v14, (Il2CppObject *)this, Method_ItemDetailInfoComponent_EndOpen__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v14, 0, 0LL);
  }
}


void __fastcall ItemDetailInfoComponent__OpenItemMsgInfo(
        ItemDetailInfoComponent_o *this,
        System_String_o *name,
        System_String_o *detail,
        ItemDetailInfoComponent_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  __int64 v9; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x1
  System_Action_o *v13; // x20

  if ( (byte_4A0429A & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, name);
    sub_1B686D4(&Method_ItemDetailInfoComponent_EndOpen__, v9);
    byte_4A0429A = 1;
  }
  if ( !this->fields.state )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject
      || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
          this->fields.callbackFunc = callback,
          sub_1B68678(&this->fields.callbackFunc),
          (gameObject = (UnityEngine_GameObject_o *)this->fields.itemNameLabel) == 0LL) )
    {
      sub_1B68930(gameObject, v11);
    }
    UILabel__set_text((UILabel_o *)gameObject, name, 0LL);
    WrapControlText__textAdjust(this->fields.itemDetailLabel, detail, this->fields.DETAIL_FONT_SIZE, 0, 0, 0LL);
    this->fields.state = 1;
    ItemDetailInfoComponent__setBtnInfoActive(this, v12);
    v13 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
    System_Action___ctor(v13, (Il2CppObject *)this, Method_ItemDetailInfoComponent_EndOpen__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v13, 0, 0LL);
  }
}


void __fastcall ItemDetailInfoComponent__OpenUserItemInfo(
        ItemDetailInfoComponent_o *this,
        UserItemData_o *itemData,
        ItemDetailInfoComponent_CallbackFunc_o *callback,
        int32_t spacingY,
        const MethodInfo *method)
{
  __int64 v9; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x1
  System_Action_o *v13; // x20

  if ( (byte_4A04298 & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, itemData);
    sub_1B686D4(&Method_ItemDetailInfoComponent_EndOpen__, v9);
    byte_4A04298 = 1;
  }
  if ( !this->fields.state )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject
      || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
          this->fields.callbackFunc = callback,
          gameObject = (UnityEngine_GameObject_o *)sub_1B68678(&this->fields.callbackFunc),
          !itemData)
      || (gameObject = (UnityEngine_GameObject_o *)this->fields.itemNameLabel) == 0LL
      || (UILabel__set_text((UILabel_o *)gameObject, itemData->fields.name, 0LL),
          (gameObject = (UnityEngine_GameObject_o *)this->fields.itemDetailLabel) == 0LL) )
    {
      sub_1B68930(gameObject, v11);
    }
    UILabel__set_spacingY((UILabel_o *)gameObject, spacingY, 0LL);
    WrapControlText__textAdjust(
      this->fields.itemDetailLabel,
      itemData->fields.detail,
      this->fields.DETAIL_FONT_SIZE,
      0,
      0,
      0LL);
    this->fields.state = 1;
    ItemDetailInfoComponent__setBtnInfoActive(this, v12);
    v13 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
    System_Action___ctor(v13, (Il2CppObject *)this, Method_ItemDetailInfoComponent_EndOpen__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v13, 0, 0LL);
  }
}


void __fastcall ItemDetailInfoComponent__ShowStoneDetail(
        ItemDetailInfoComponent_o *this,
        System_String_o *name,
        System_String_o *detail,
        UserGameEntity_o *userData,
        UserExternalPaymentStoneEntity_o *userExternalPaymentStone,
        ItemDetailInfoComponent_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v21; // x1
  UILabel_o *payStoneTitleLabel; // x22
  UILabel_o *payStoneNumLabel; // x22
  UILabel_o *freeStoneTitleLabel; // x22
  UILabel_o *freeStoneNumLabel; // x22
  UnityEngine_Object_o *externalPayStoneTitleLabel; // x21
  UILabel_o *v27; // x21
  UnityEngine_Object_o *externalPayStoneNumLabel; // x21
  UILabel_o *v29; // x21
  int32_t stone; // w20
  UILabel_o *stoneNoticeLabel; // x20
  const MethodInfo *v32; // x1
  System_Action_o *v33; // x20

  if ( (byte_4A0429B & 1) == 0 )
  {
    sub_1B686D4(&System_Action_TypeInfo, name);
    sub_1B686D4(&Method_ItemDetailInfoComponent_EndOpen__, v13);
    sub_1B686D4(&LocalizationManager_TypeInfo, v14);
    sub_1B686D4(&UnityEngine_Object_TypeInfo, v15);
    sub_1B686D4(&StringLiteral_5764/*"EXTERNAL_PAYSTONE_INFO_TITLE"*/, v16);
    sub_1B686D4(&StringLiteral_6456/*"FREESTONE_INFO_TITLE"*/, v17);
    sub_1B686D4(&StringLiteral_10317/*"PAYSTONE_INFO_TITLE"*/, v18);
    sub_1B686D4(&StringLiteral_12224/*"STONE_INFO_NOTICE"*/, v19);
    byte_4A0429B = 1;
  }
  if ( !this->fields.state )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      this->fields.callbackFunc = callback;
      sub_1B68678(&this->fields.callbackFunc);
      gameObject = this->fields.itemDetailInfo;
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
        gameObject = this->fields.stoneDetailInfo;
        if ( gameObject )
        {
          UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
          gameObject = (UnityEngine_GameObject_o *)this->fields.stoneTitleLabel;
          if ( gameObject )
          {
            UILabel__set_text((UILabel_o *)gameObject, name, 0LL);
            WrapControlText__textAdjust(
              this->fields.stoneDetailLabel,
              detail,
              this->fields.STONE_DETAIL_FONT_SIZE,
              0,
              0,
              0LL);
            payStoneTitleLabel = this->fields.payStoneTitleLabel;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_10317/*"PAYSTONE_INFO_TITLE"*/,
                                                       0LL);
            if ( payStoneTitleLabel )
            {
              UILabel__set_text(payStoneTitleLabel, (System_String_o *)gameObject, 0LL);
              if ( userData )
              {
                if ( userExternalPaymentStone )
                {
                  payStoneNumLabel = this->fields.payStoneNumLabel;
                  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__GetUnitInfo(
                                                             userData->fields.chargeStone
                                                           - userExternalPaymentStone->fields.stone,
                                                             0LL);
                  if ( payStoneNumLabel )
                  {
                    UILabel__set_text(payStoneNumLabel, (System_String_o *)gameObject, 0LL);
                    freeStoneTitleLabel = this->fields.freeStoneTitleLabel;
                    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                               (System_String_o *)StringLiteral_6456/*"FREESTONE_INFO_TITLE"*/,
                                                               0LL);
                    if ( freeStoneTitleLabel )
                    {
                      UILabel__set_text(freeStoneTitleLabel, (System_String_o *)gameObject, 0LL);
                      freeStoneNumLabel = this->fields.freeStoneNumLabel;
                      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__GetUnitInfo(
                                                                 userData->fields.freeStone,
                                                                 0LL);
                      if ( freeStoneNumLabel )
                      {
                        UILabel__set_text(freeStoneNumLabel, (System_String_o *)gameObject, 0LL);
                        externalPayStoneTitleLabel = (UnityEngine_Object_o *)this->fields.externalPayStoneTitleLabel;
                        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                        if ( UnityEngine_Object__op_Inequality(externalPayStoneTitleLabel, 0LL, 0LL) )
                        {
                          v27 = this->fields.externalPayStoneTitleLabel;
                          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                     (System_String_o *)StringLiteral_5764/*"EXTERNAL_PAYSTONE_INFO_TITLE"*/,
                                                                     0LL);
                          if ( !v27 )
                            goto LABEL_34;
                          UILabel__set_text(v27, (System_String_o *)gameObject, 0LL);
                        }
                        externalPayStoneNumLabel = (UnityEngine_Object_o *)this->fields.externalPayStoneNumLabel;
                        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                        if ( UnityEngine_Object__op_Inequality(externalPayStoneNumLabel, 0LL, 0LL) )
                        {
                          v29 = this->fields.externalPayStoneNumLabel;
                          stone = userExternalPaymentStone->fields.stone;
                          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__GetUnitInfo(stone, 0LL);
                          if ( !v29 )
                            goto LABEL_34;
                          UILabel__set_text(v29, (System_String_o *)gameObject, 0LL);
                        }
                        stoneNoticeLabel = this->fields.stoneNoticeLabel;
                        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                   (System_String_o *)StringLiteral_12224/*"STONE_INFO_NOTICE"*/,
                                                                   0LL);
                        if ( stoneNoticeLabel )
                        {
                          UILabel__set_text(stoneNoticeLabel, (System_String_o *)gameObject, 0LL);
                          this->fields.state = 1;
                          ItemDetailInfoComponent__setBtnInfoActive(this, v32);
                          v33 = (System_Action_o *)sub_1B68920(System_Action_TypeInfo);
                          System_Action___ctor(v33, (Il2CppObject *)this, Method_ItemDetailInfoComponent_EndOpen__, 0LL);
                          BaseDialog__Open((BaseDialog_o *)this, v33, 0, 0LL);
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
    sub_1B68930(gameObject, v21);
  }
}


void __fastcall ItemDetailInfoComponent__add_callbackFunc(
        ItemDetailInfoComponent_o *this,
        ItemDetailInfoComponent_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct ItemDetailInfoComponent_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct ItemDetailInfoComponent_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  ItemDetailInfoComponent_o *v11; // x0
  ItemDetailInfoComponent_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4A04295 & 1) == 0 )
  {
    sub_1B686D4(&ItemDetailInfoComponent_CallbackFunc_TypeInfo, value);
    byte_4A04295 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (ItemDetailInfoComponent_CallbackFunc_c *)v8->klass != ItemDetailInfoComponent_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1BA3BC4(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (ItemDetailInfoComponent_o *)sub_1B68BF0(v8);
  ItemDetailInfoComponent__remove_callbackFunc(v11, v12, v13);
}


System_String_o *__fastcall ItemDetailInfoComponent__get_closeBtnPath(
        ItemDetailInfoComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A0429D & 1) == 0 )
  {
    sub_1B686D4(&StringLiteral_7559/*"InfoWindow/CloseBtn"*/, method);
    byte_4A0429D = 1;
  }
  return (System_String_o *)StringLiteral_7559/*"InfoWindow/CloseBtn"*/;
}


void __fastcall ItemDetailInfoComponent__remove_callbackFunc(
        ItemDetailInfoComponent_o *this,
        ItemDetailInfoComponent_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct ItemDetailInfoComponent_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct ItemDetailInfoComponent_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  ItemDetailInfoComponent_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4A04296 & 1) == 0 )
  {
    sub_1B686D4(&ItemDetailInfoComponent_CallbackFunc_TypeInfo, value);
    byte_4A04296 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (ItemDetailInfoComponent_CallbackFunc_c *)v8->klass != ItemDetailInfoComponent_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1BA3BC4(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (ItemDetailInfoComponent_o *)sub_1B68BF0(v8);
  ItemDetailInfoComponent__Init(v11, v12);
}


void __fastcall ItemDetailInfoComponent__setBtnInfoActive(ItemDetailInfoComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *stoneDetailBtnObject; // x0

  if ( this->fields.state == 1 )
  {
    stoneDetailBtnObject = this->fields.stoneDetailBtnObject;
    if ( !stoneDetailBtnObject )
      goto LABEL_9;
    if ( UnityEngine_GameObject__get_activeSelf(stoneDetailBtnObject, 0LL) )
    {
      stoneDetailBtnObject = this->fields.stoneDetailBtnObject;
      if ( !stoneDetailBtnObject )
        goto LABEL_9;
      UnityEngine_GameObject__SetActive(stoneDetailBtnObject, 0, 0LL);
    }
    stoneDetailBtnObject = this->fields.closeBtnObject;
    if ( stoneDetailBtnObject )
    {
      UnityEngine_GameObject__SetActive(stoneDetailBtnObject, 1, 0LL);
      return;
    }
LABEL_9:
    sub_1B68930(stoneDetailBtnObject, method);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ItemDetailInfoComponent_CallbackFunc___ctor(
        ItemDetailInfoComponent_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1B68678(&this->fields.method);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B68794(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B6894C(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B687FC(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_19A95C8;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19A9580;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall ItemDetailInfoComponent_CallbackFunc__BeginInvoke(
        ItemDetailInfoComponent_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = result;
  if ( (byte_4A0429F & 1) == 0 )
  {
    sub_1B686D4(&bool_TypeInfo, result);
    byte_4A0429F = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1B68688(this, v9, callback, object);
}


void __fastcall ItemDetailInfoComponent_CallbackFunc__EndInvoke(
        ItemDetailInfoComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B6868C(result, 0LL, method);
}


void __fastcall ItemDetailInfoComponent_CallbackFunc__Invoke(
        ItemDetailInfoComponent_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    result,
    *(_QWORD *)&this->fields.extra_arg);
}