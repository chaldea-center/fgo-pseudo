void PresentSelectableBulkItemConfirmDlg___ctor(PresentSelectableBulkItemConfirmDlg_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_59372FB & 1) == 0 )
  {
    sub_21FFC50(&BaseDialog_TypeInfo);
    byte_59372FB = 1;
  }
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method, v2);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void PresentSelectableBulkItemConfirmDlg__Close(PresentSelectableBulkItemConfirmDlg_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PresentSelectableBulkItemConfirmDlg__Close_47099720(this, 0, v2);
}


void PresentSelectableBulkItemConfirmDlg__Close_47099720(
        PresentSelectableBulkItemConfirmDlg_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_Action_c *v10; // x0
  System_Action_o *v11; // x20

  if ( (byte_59372F6 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_PresentSelectableBulkItemConfirmDlg_EndClose__);
    byte_59372F6 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v10 = System_Action_TypeInfo;
  this->fields.state = 4;
  v11 = (System_Action_o *)sub_21FFEBC(v10);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_PresentSelectableBulkItemConfirmDlg_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0);
}


void PresentSelectableBulkItemConfirmDlg__EndClose(
        PresentSelectableBulkItemConfirmDlg_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  struct System_Action_o *closeCallbackFunc; // x20

  PresentSelectableBulkItemConfirmDlg__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_21FFECC(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc, 0, v5, v6, v7, v8, v9, v10);
    ((void (__fastcall *)(intptr_t, intptr_t))closeCallbackFunc->fields.invoke_impl)(
      closeCallbackFunc->fields.method_code,
      closeCallbackFunc->fields.method);
  }
}


void PresentSelectableBulkItemConfirmDlg__EndOpen(
        PresentSelectableBulkItemConfirmDlg_o *this,
        const MethodInfo *method)
{
  this->fields.state = 2;
}


void PresentSelectableBulkItemConfirmDlg__Init(PresentSelectableBulkItemConfirmDlg_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_21FFECC(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  this->fields.state = 0;
  this->fields.itemSelectEntity = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.itemSelectEntity, 0, v5, v6, v7, v8, v9, v10);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void PresentSelectableBulkItemConfirmDlg__Modify(
        PresentSelectableBulkItemConfirmDlg_o *this,
        PresentSelectableBulkItemConfirmDlg_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.state = 2;
  this->fields.callbackFunc = callback;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void PresentSelectableBulkItemConfirmDlg__OnClickCancel(
        PresentSelectableBulkItemConfirmDlg_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20
  const MethodInfo *v6; // x2

  if ( (byte_59372F8 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_PresentSelectableBulkItemConfirmDlg_OnClickCancel__);
    sub_21FFC50(&Method_PresentSelectableBulkItemConfirmDlg__OnClickCancel_b__39_0__);
    byte_59372F8 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PresentSelectableBulkItemConfirmDlg_OnClickCancel__;
    if ( (*((_BYTE *)Method_PresentSelectableBulkItemConfirmDlg_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_PresentSelectableBulkItemConfirmDlg_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    v5 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(
      v5,
      (Il2CppObject *)this,
      Method_PresentSelectableBulkItemConfirmDlg__OnClickCancel_b__39_0__,
      0);
    PresentSelectableBulkItemConfirmDlg__Close_47099720(this, v5, v6);
  }
}


void PresentSelectableBulkItemConfirmDlg__OnClickDecide(
        PresentSelectableBulkItemConfirmDlg_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20
  const MethodInfo *v6; // x2

  if ( (byte_59372F7 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_PresentSelectableBulkItemConfirmDlg_OnClickDecide__);
    sub_21FFC50(&Method_PresentSelectableBulkItemConfirmDlg__OnClickDecide_b__38_0__);
    byte_59372F7 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PresentSelectableBulkItemConfirmDlg_OnClickDecide__;
    if ( (*((_BYTE *)Method_PresentSelectableBulkItemConfirmDlg_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_PresentSelectableBulkItemConfirmDlg_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0);
    v5 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(
      v5,
      (Il2CppObject *)this,
      Method_PresentSelectableBulkItemConfirmDlg__OnClickDecide_b__38_0__,
      0);
    PresentSelectableBulkItemConfirmDlg__Close_47099720(this, v5, v6);
  }
}


// local variable allocation has failed, the output may be wrong!
void PresentSelectableBulkItemConfirmDlg__Open(
        PresentSelectableBulkItemConfirmDlg_o *this,
        ItemSelectEntity_o *entity,
        ItemEntity_o *itemEnt,
        int32_t itemHold,
        ItemEntity_o *ticketEnt,
        int32_t ticketsHave,
        PresentSelectableBulkItemConfirmDlg_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v22; // x1
  int32_t v23; // w1
  __int64 v24; // x1
  __int64 v25; // x2
  UILabel_o *TitleLabel; // x25
  UILabel_o *DetailLabel; // x25
  UILabel_o *UnderDetailLabel; // x25
  UILabel_o *exchangeOrigin; // x25
  UILabel_o *exchangeOriginCountKind; // x25
  UILabel_o *exchangeDestination; // x25
  UILabel_o *exchangeDestinationCountKind; // x25
  const MethodInfo *v33; // x5
  UILabel_o *exchangeOriginItemName; // x8
  const MethodInfo *v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  BalanceConfig_c *v38; // x0
  int32_t UserItemMax; // w8
  UILabel_o *v40; // x20
  __int64 *v41; // x8
  System_Action_o *v42; // x20

  if ( (byte_59372F5 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_PresentSelectableBulkItemConfirmDlg_EndOpen__);
    sub_21FFC50(&StringLiteral_10860/*"PRESENT_BOX_SELECTABLE_BULK_CONFIRM_DLG_TITLE"*/);
    sub_21FFC50(&StringLiteral_10859/*"PRESENT_BOX_SELECTABLE_BULK_CONFIRM_DLG_DETAIL_UPPER"*/);
    sub_21FFC50(&StringLiteral_10862/*"PRESENT_BOX_SELECTABLE_BULK_DESTINATION_KIND"*/);
    sub_21FFC50(&StringLiteral_10864/*"PRESENT_BOX_SELECTABLE_BULK_ORIGIN_KIND"*/);
    sub_21FFC50(&StringLiteral_10858/*"PRESENT_BOX_SELECTABLE_BULK_CONFIRM_DLG_DETAIL_UNDER"*/);
    sub_21FFC50(&StringLiteral_10863/*"PRESENT_BOX_SELECTABLE_BULK_ORIGIN"*/);
    sub_21FFC50(&StringLiteral_10886/*"PRESENT_SELECT_ITEM_OVER_WARNING"*/);
    sub_21FFC50(&StringLiteral_10861/*"PRESENT_BOX_SELECTABLE_BULK_DESTINATION"*/);
    sub_21FFC50(&StringLiteral_10885/*"PRESENT_SELECT_ITEM_FULL_WARNING"*/);
    byte_59372F5 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.callbackFunc = callback;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      (System_String_o *)itemEnt,
      *(System_String_o **)&itemHold,
      (int32_t)ticketEnt,
      ticketsHave,
      (bool)callback,
      (bool)method);
    this->fields.itemSelectEntity = entity;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.itemSelectEntity,
      (int32_t)entity,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_42;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0);
    this->fields.buyCount = 1;
    if ( !entity )
      goto LABEL_42;
    gameObject = (UnityEngine_GameObject_o *)this->fields.itemSlider;
    if ( !gameObject )
      goto LABEL_42;
    if ( ticketsHave / entity->fields.requireNum >= 99 )
      v23 = 99;
    else
      v23 = ticketsHave / entity->fields.requireNum;
    UISliderWithButton__init((UISliderWithButton_o *)gameObject, v23, 0, 1, 0);
    TitleLabel = this->fields.TitleLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v24, v25);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10860/*"PRESENT_BOX_SELECTABLE_BULK_CONFIRM_DLG_TITLE"*/, 0);
    if ( !TitleLabel )
      goto LABEL_42;
    UILabel__set_text(TitleLabel, (System_String_o *)gameObject, 0);
    DetailLabel = this->fields.DetailLabel;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10859/*"PRESENT_BOX_SELECTABLE_BULK_CONFIRM_DLG_DETAIL_UPPER"*/, 0);
    if ( !DetailLabel )
      goto LABEL_42;
    UILabel__set_text(DetailLabel, (System_String_o *)gameObject, 0);
    UnderDetailLabel = this->fields.UnderDetailLabel;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10858/*"PRESENT_BOX_SELECTABLE_BULK_CONFIRM_DLG_DETAIL_UNDER"*/, 0);
    if ( !UnderDetailLabel )
      goto LABEL_42;
    UILabel__set_text(UnderDetailLabel, (System_String_o *)gameObject, 0);
    exchangeOrigin = this->fields.exchangeOrigin;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10863/*"PRESENT_BOX_SELECTABLE_BULK_ORIGIN"*/, 0);
    if ( !exchangeOrigin )
      goto LABEL_42;
    UILabel__set_text(exchangeOrigin, (System_String_o *)gameObject, 0);
    exchangeOriginCountKind = this->fields.exchangeOriginCountKind;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10864/*"PRESENT_BOX_SELECTABLE_BULK_ORIGIN_KIND"*/, 0);
    if ( !exchangeOriginCountKind )
      goto LABEL_42;
    UILabel__set_text(exchangeOriginCountKind, (System_String_o *)gameObject, 0);
    exchangeDestination = this->fields.exchangeDestination;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10861/*"PRESENT_BOX_SELECTABLE_BULK_DESTINATION"*/, 0);
    if ( !exchangeDestination )
      goto LABEL_42;
    UILabel__set_text(exchangeDestination, (System_String_o *)gameObject, 0);
    exchangeDestinationCountKind = this->fields.exchangeDestinationCountKind;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10862/*"PRESENT_BOX_SELECTABLE_BULK_DESTINATION_KIND"*/, 0);
    if ( !exchangeDestinationCountKind )
      goto LABEL_42;
    UILabel__set_text(exchangeDestinationCountKind, (System_String_o *)gameObject, 0);
    if ( !ticketEnt )
      goto LABEL_42;
    gameObject = (UnityEngine_GameObject_o *)this->fields.itemInfo;
    if ( !gameObject )
      goto LABEL_42;
    gameObject = (UnityEngine_GameObject_o *)PresentSelectableItemComponent__setItemInfo(
                                               (PresentSelectableItemComponent_o *)gameObject,
                                               entity,
                                               ticketsHave,
                                               ticketEnt->fields.imageId,
                                               0,
                                               v33);
    exchangeOriginItemName = this->fields.exchangeOriginItemName;
    this->fields.itemCountPerExchange = (int)gameObject;
    if ( !exchangeOriginItemName )
      goto LABEL_42;
    UILabel__set_text(exchangeOriginItemName, ticketEnt->fields.name, 0);
    if ( !itemEnt )
      goto LABEL_42;
    gameObject = (UnityEngine_GameObject_o *)this->fields.exchangeDestinationItemName;
    if ( !gameObject )
      goto LABEL_42;
    UILabel__set_text((UILabel_o *)gameObject, itemEnt->fields.name, 0);
    PresentSelectableBulkItemConfirmDlg__UpdateCountValue(this, this->fields.buyCount, v35);
    gameObject = (UnityEngine_GameObject_o *)this->fields.itemSlider;
    if ( !gameObject )
      goto LABEL_42;
    UISliderWithButton__normalMode((UISliderWithButton_o *)gameObject, 0);
    v38 = BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v36, v37);
      v38 = BalanceConfig_TypeInfo;
    }
    UserItemMax = v38->static_fields->UserItemMax;
    if ( UserItemMax <= itemHold )
    {
      v40 = this->fields.UnderDetailLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v36, v37);
      v41 = &StringLiteral_10885/*"PRESENT_SELECT_ITEM_FULL_WARNING"*/;
    }
    else
    {
      if ( !*(&v38->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v38, v36, v37);
        UserItemMax = BalanceConfig_TypeInfo->static_fields->UserItemMax;
      }
      if ( UserItemMax > itemHold )
      {
        v22 = 0;
LABEL_40:
        gameObject = (UnityEngine_GameObject_o *)this->fields.decideButton;
        if ( gameObject )
        {
          ((void (__fastcall *)(UnityEngine_GameObject_o *, __int64, __int64, Il2CppClass **))gameObject->klass[1]._1.nestedTypes)(
            gameObject,
            v22,
            1,
            gameObject->klass[1]._1.implementedInterfaces);
          this->fields.state = 1;
          v42 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
          System_Action___ctor(v42, (Il2CppObject *)this, Method_PresentSelectableBulkItemConfirmDlg_EndOpen__, 0);
          BaseDialog__Open((BaseDialog_o *)this, v42, 0, 0, 0);
          return;
        }
LABEL_42:
        sub_21FFECC(gameObject, v22);
      }
      v40 = this->fields.UnderDetailLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v36, v37);
      v41 = &StringLiteral_10886/*"PRESENT_SELECT_ITEM_OVER_WARNING"*/;
    }
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)*v41, 0);
    if ( !v40 )
      goto LABEL_42;
    UILabel__set_text(v40, (System_String_o *)gameObject, 0);
    v22 = 3;
    goto LABEL_40;
  }
}


// local variable allocation has failed, the output may be wrong!
void PresentSelectableBulkItemConfirmDlg__UpdateCountValue(
        PresentSelectableBulkItemConfirmDlg_o *this,
        int32_t count,
        const MethodInfo *method)
{
  PresentSelectableBulkItemConfirmDlg_o *v4; // x19
  struct ItemSelectEntity_o *itemSelectEntity; // x8
  UILabel_o *exchangeOriginCount; // x21
  int32_t requireNum; // w22
  int32_t itemCountPerExchange; // w8
  UILabel_o *exchangeDestinationCount; // x19

  v4 = this;
  if ( (byte_59372F9 & 1) == 0 )
  {
    this = (PresentSelectableBulkItemConfirmDlg_o *)sub_21FFC50(&LocalizationManager_TypeInfo);
    byte_59372F9 = 1;
  }
  itemSelectEntity = v4->fields.itemSelectEntity;
  if ( !itemSelectEntity )
    goto LABEL_9;
  exchangeOriginCount = v4->fields.exchangeOriginCount;
  requireNum = itemSelectEntity->fields.requireNum;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&count, method);
  this = (PresentSelectableBulkItemConfirmDlg_o *)LocalizationManager__GetNumberFormatLong(
                                                    requireNum * (__int64)count,
                                                    0);
  if ( !exchangeOriginCount
    || (UILabel__set_text(exchangeOriginCount, (System_String_o *)this, 0),
        itemCountPerExchange = v4->fields.itemCountPerExchange,
        exchangeDestinationCount = v4->fields.exchangeDestinationCount,
        this = (PresentSelectableBulkItemConfirmDlg_o *)LocalizationManager__GetNumberFormatLong(
                                                          itemCountPerExchange * (__int64)count,
                                                          0),
        !exchangeDestinationCount) )
  {
LABEL_9:
    sub_21FFECC(this, *(_QWORD *)&count);
  }
  UILabel__set_text(exchangeDestinationCount, (System_String_o *)this, 0);
}


void PresentSelectableBulkItemConfirmDlg___OnClickCancel_b__39_0(
        PresentSelectableBulkItemConfirmDlg_o *this,
        const MethodInfo *method)
{
  struct PresentSelectableBulkItemConfirmDlg_CallbackFunc_o *callbackFunc; // x8

  callbackFunc = this->fields.callbackFunc;
  if ( !callbackFunc )
    sub_21FFECC(this, method);
  ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))callbackFunc->fields.invoke_impl)(
    callbackFunc->fields.method_code,
    0,
    callbackFunc->fields.method);
}


void PresentSelectableBulkItemConfirmDlg___OnClickDecide_b__38_0(
        PresentSelectableBulkItemConfirmDlg_o *this,
        const MethodInfo *method)
{
  struct PresentSelectableBulkItemConfirmDlg_CallbackFunc_o *callbackFunc; // x8

  callbackFunc = this->fields.callbackFunc;
  if ( !callbackFunc )
    sub_21FFECC(this, method);
  ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))callbackFunc->fields.invoke_impl)(
    callbackFunc->fields.method_code,
    (unsigned int)this->fields.buyCount,
    callbackFunc->fields.method);
}


void PresentSelectableBulkItemConfirmDlg__add_callbackFunc(
        PresentSelectableBulkItemConfirmDlg_o *this,
        PresentSelectableBulkItemConfirmDlg_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  PresentSelectableBulkItemConfirmDlg_o *v11; // x0
  PresentSelectableBulkItemConfirmDlg_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_59372F3 & 1) == 0 )
  {
    sub_21FFC50(&PresentSelectableBulkItemConfirmDlg_CallbackFunc_TypeInfo);
    byte_59372F3 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  while ( 1 )
  {
    v6 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (PresentSelectableBulkItemConfirmDlg_CallbackFunc_c *)v6->klass != PresentSelectableBulkItemConfirmDlg_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_223767C(&this->fields.callbackFunc, v6, callbackFunc);
    v10 = v9 == (_QWORD)callbackFunc;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_220024C(v6, PresentSelectableBulkItemConfirmDlg_CallbackFunc_TypeInfo, v7, v8);
  PresentSelectableBulkItemConfirmDlg__remove_callbackFunc(v11, v12, v13);
}


UnityEngine_GameObject_o *PresentSelectableBulkItemConfirmDlg__get_closeBtnObject(
        PresentSelectableBulkItemConfirmDlg_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *cancelButton; // x20
  __int64 v5; // x1
  UnityEngine_Component_o *v7; // x0

  if ( (byte_59372FA & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_59372FA = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0, 0) )
    return 0;
  v7 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v7 )
    sub_21FFECC(0, v5);
  return UnityEngine_Component__get_gameObject(v7, 0);
}


void PresentSelectableBulkItemConfirmDlg__remove_callbackFunc(
        PresentSelectableBulkItemConfirmDlg_o *this,
        PresentSelectableBulkItemConfirmDlg_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  PresentSelectableBulkItemConfirmDlg_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_59372F4 & 1) == 0 )
  {
    sub_21FFC50(&PresentSelectableBulkItemConfirmDlg_CallbackFunc_TypeInfo);
    byte_59372F4 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  while ( 1 )
  {
    v6 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (PresentSelectableBulkItemConfirmDlg_CallbackFunc_c *)v6->klass != PresentSelectableBulkItemConfirmDlg_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_223767C(&this->fields.callbackFunc, v6, callbackFunc);
    v10 = v9 == (_QWORD)callbackFunc;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_220024C(v6, PresentSelectableBulkItemConfirmDlg_CallbackFunc_TypeInfo, v7, v8);
  PresentSelectableBulkItemConfirmDlg__Init(v11, v12);
}


void PresentSelectableBulkItemConfirmDlg__sliderValueChange(
        PresentSelectableBulkItemConfirmDlg_o *this,
        const MethodInfo *method)
{
  UISliderWithButton_o *itemSlider; // x0
  int32_t v4; // w1
  const MethodInfo *v5; // x2

  itemSlider = this->fields.itemSlider;
  if ( !itemSlider )
    sub_21FFECC(0, method);
  v4 = UISliderWithButton__sliderValueChange(itemSlider, 0);
  this->fields.buyCount = v4;
  PresentSelectableBulkItemConfirmDlg__UpdateCountValue(this, v4, v5);
}


void PresentSelectableBulkItemConfirmDlg_CallbackFunc___ctor(
        PresentSelectableBulkItemConfirmDlg_CallbackFunc_o *this,
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
  sub_21FFBF4(
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
  if ( (sub_21FFD28(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_21FFEE8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_21FFD90(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1FF8E3C;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1FF8DF4;
}


System_IAsyncResult_o *PresentSelectableBulkItemConfirmDlg_CallbackFunc__BeginInvoke(
        PresentSelectableBulkItemConfirmDlg_CallbackFunc_o *this,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-38h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-24h] BYREF

  v10 = result;
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(qword_594C070, &v10);
  return (System_IAsyncResult_o *)sub_21FFC04(this, v9, callback, object);
}


void PresentSelectableBulkItemConfirmDlg_CallbackFunc__EndInvoke(
        PresentSelectableBulkItemConfirmDlg_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_21FFC08(result, 0, method);
}


void PresentSelectableBulkItemConfirmDlg_CallbackFunc__Invoke(
        PresentSelectableBulkItemConfirmDlg_CallbackFunc_o *this,
        int32_t result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, int32_t, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    result,
    this->fields.method);
}