void PresentSelectableBulkItemConfirmDlg___ctor(PresentSelectableBulkItemConfirmDlg_o *this, const MethodInfo *method)
{
  if ( (byte_4CC6081 & 1) == 0 )
  {
    sub_1C713B0(&BaseDialog_TypeInfo);
    byte_4CC6081 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void PresentSelectableBulkItemConfirmDlg__Close(PresentSelectableBulkItemConfirmDlg_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PresentSelectableBulkItemConfirmDlg__Close_40443716(this, 0, v2);
}


void PresentSelectableBulkItemConfirmDlg__Close_40443716(
        PresentSelectableBulkItemConfirmDlg_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  System_Action_o *v10; // x20

  if ( (byte_4CC607C & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_PresentSelectableBulkItemConfirmDlg_EndClose__);
    byte_4CC607C = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 4;
  v10 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_PresentSelectableBulkItemConfirmDlg_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v10, 0);
}


void PresentSelectableBulkItemConfirmDlg__EndClose(
        PresentSelectableBulkItemConfirmDlg_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  struct System_Action_o *closeCallbackFunc; // x20

  PresentSelectableBulkItemConfirmDlg__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C71608(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.closeCallbackFunc, 0, v5, v6, v7, v8, v9, v10);
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
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C71608(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  this->fields.state = 0;
  this->fields.itemSelectEntity = 0;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.itemSelectEntity, 0, v5, v6, v7, v8, v9, v10);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void PresentSelectableBulkItemConfirmDlg__Modify(
        PresentSelectableBulkItemConfirmDlg_o *this,
        PresentSelectableBulkItemConfirmDlg_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.state = 2;
  this->fields.callbackFunc = callback;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)method,
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

  if ( (byte_4CC607E & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_PresentSelectableBulkItemConfirmDlg_OnClickCancel__);
    sub_1C713B0(&Method_PresentSelectableBulkItemConfirmDlg__OnClickCancel_b__39_0__);
    byte_4CC607E = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PresentSelectableBulkItemConfirmDlg_OnClickCancel__;
    if ( (*((_BYTE *)Method_PresentSelectableBulkItemConfirmDlg_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C713C8(Method_PresentSelectableBulkItemConfirmDlg_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C71394(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    v5 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
    System_Action___ctor(
      v5,
      (Il2CppObject *)this,
      Method_PresentSelectableBulkItemConfirmDlg__OnClickCancel_b__39_0__,
      0);
    PresentSelectableBulkItemConfirmDlg__Close_40443716(this, v5, v6);
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

  if ( (byte_4CC607D & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_PresentSelectableBulkItemConfirmDlg_OnClickDecide__);
    sub_1C713B0(&Method_PresentSelectableBulkItemConfirmDlg__OnClickDecide_b__38_0__);
    byte_4CC607D = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PresentSelectableBulkItemConfirmDlg_OnClickDecide__;
    if ( (*((_BYTE *)Method_PresentSelectableBulkItemConfirmDlg_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C713C8(Method_PresentSelectableBulkItemConfirmDlg_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C71394(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0);
    v5 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
    System_Action___ctor(
      v5,
      (Il2CppObject *)this,
      Method_PresentSelectableBulkItemConfirmDlg__OnClickDecide_b__38_0__,
      0);
    PresentSelectableBulkItemConfirmDlg__Close_40443716(this, v5, v6);
  }
}


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
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v22; // x1
  int32_t v23; // w1
  UILabel_o *TitleLabel; // x25
  UILabel_o *DetailLabel; // x25
  UILabel_o *UnderDetailLabel; // x25
  UILabel_o *exchangeOrigin; // x25
  UILabel_o *exchangeOriginCountKind; // x25
  UILabel_o *exchangeDestination; // x25
  UILabel_o *exchangeDestinationCountKind; // x25
  const MethodInfo *v31; // x5
  UILabel_o *exchangeOriginItemName; // x8
  const MethodInfo *v33; // x2
  BalanceConfig_c *v34; // x0
  int32_t UserItemMax; // w8
  UILabel_o *v36; // x20
  __int64 *v37; // x8
  System_Action_o *v38; // x20

  if ( (byte_4CC607B & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&BalanceConfig_TypeInfo);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&Method_PresentSelectableBulkItemConfirmDlg_EndOpen__);
    sub_1C713B0(&StringLiteral_10444/*"PRESENT_BOX_SELECTABLE_BULK_CONFIRM_DLG_TITLE"*/);
    sub_1C713B0(&StringLiteral_10443/*"PRESENT_BOX_SELECTABLE_BULK_CONFIRM_DLG_DETAIL_UPPER"*/);
    sub_1C713B0(&StringLiteral_10446/*"PRESENT_BOX_SELECTABLE_BULK_DESTINATION_KIND"*/);
    sub_1C713B0(&StringLiteral_10448/*"PRESENT_BOX_SELECTABLE_BULK_ORIGIN_KIND"*/);
    sub_1C713B0(&StringLiteral_10442/*"PRESENT_BOX_SELECTABLE_BULK_CONFIRM_DLG_DETAIL_UNDER"*/);
    sub_1C713B0(&StringLiteral_10447/*"PRESENT_BOX_SELECTABLE_BULK_ORIGIN"*/);
    sub_1C713B0(&StringLiteral_10470/*"PRESENT_SELECT_ITEM_OVER_WARNING"*/);
    sub_1C713B0(&StringLiteral_10445/*"PRESENT_BOX_SELECTABLE_BULK_DESTINATION"*/);
    sub_1C713B0(&StringLiteral_10469/*"PRESENT_SELECT_ITEM_FULL_WARNING"*/);
    byte_4CC607B = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.callbackFunc = callback;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      (int32_t)itemEnt,
      itemHold,
      (System_String_o *)ticketEnt,
      ticketsHave,
      (int64_t)callback,
      (System_String_o *)method);
    this->fields.itemSelectEntity = entity;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&this->fields.itemSelectEntity,
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
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10444/*"PRESENT_BOX_SELECTABLE_BULK_CONFIRM_DLG_TITLE"*/, 0);
    if ( !TitleLabel )
      goto LABEL_42;
    UILabel__set_text(TitleLabel, (System_String_o *)gameObject, 0);
    DetailLabel = this->fields.DetailLabel;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10443/*"PRESENT_BOX_SELECTABLE_BULK_CONFIRM_DLG_DETAIL_UPPER"*/, 0);
    if ( !DetailLabel )
      goto LABEL_42;
    UILabel__set_text(DetailLabel, (System_String_o *)gameObject, 0);
    UnderDetailLabel = this->fields.UnderDetailLabel;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10442/*"PRESENT_BOX_SELECTABLE_BULK_CONFIRM_DLG_DETAIL_UNDER"*/, 0);
    if ( !UnderDetailLabel )
      goto LABEL_42;
    UILabel__set_text(UnderDetailLabel, (System_String_o *)gameObject, 0);
    exchangeOrigin = this->fields.exchangeOrigin;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10447/*"PRESENT_BOX_SELECTABLE_BULK_ORIGIN"*/, 0);
    if ( !exchangeOrigin )
      goto LABEL_42;
    UILabel__set_text(exchangeOrigin, (System_String_o *)gameObject, 0);
    exchangeOriginCountKind = this->fields.exchangeOriginCountKind;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10448/*"PRESENT_BOX_SELECTABLE_BULK_ORIGIN_KIND"*/, 0);
    if ( !exchangeOriginCountKind )
      goto LABEL_42;
    UILabel__set_text(exchangeOriginCountKind, (System_String_o *)gameObject, 0);
    exchangeDestination = this->fields.exchangeDestination;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10445/*"PRESENT_BOX_SELECTABLE_BULK_DESTINATION"*/, 0);
    if ( !exchangeDestination )
      goto LABEL_42;
    UILabel__set_text(exchangeDestination, (System_String_o *)gameObject, 0);
    exchangeDestinationCountKind = this->fields.exchangeDestinationCountKind;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10446/*"PRESENT_BOX_SELECTABLE_BULK_DESTINATION_KIND"*/, 0);
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
                                               v31);
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
    PresentSelectableBulkItemConfirmDlg__UpdateCountValue(this, this->fields.buyCount, v33);
    gameObject = (UnityEngine_GameObject_o *)this->fields.itemSlider;
    if ( !gameObject )
      goto LABEL_42;
    UISliderWithButton__normalMode((UISliderWithButton_o *)gameObject, 0);
    v34 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v34 = BalanceConfig_TypeInfo;
    }
    UserItemMax = v34->static_fields->UserItemMax;
    if ( UserItemMax <= itemHold )
    {
      v36 = this->fields.UnderDetailLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v37 = &StringLiteral_10469/*"PRESENT_SELECT_ITEM_FULL_WARNING"*/;
    }
    else
    {
      if ( !v34->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v34);
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
          v38 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
          System_Action___ctor(v38, (Il2CppObject *)this, Method_PresentSelectableBulkItemConfirmDlg_EndOpen__, 0);
          BaseDialog__Open((BaseDialog_o *)this, v38, 0, 0, 0);
          return;
        }
LABEL_42:
        sub_1C71608(gameObject, v22);
      }
      v36 = this->fields.UnderDetailLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v37 = &StringLiteral_10470/*"PRESENT_SELECT_ITEM_OVER_WARNING"*/;
    }
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)*v37, 0);
    if ( !v36 )
      goto LABEL_42;
    UILabel__set_text(v36, (System_String_o *)gameObject, 0);
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
  __int64 requireNum; // x22
  __int64 itemCountPerExchange; // x8
  UILabel_o *exchangeDestinationCount; // x19

  v4 = this;
  if ( (byte_4CC607F & 1) == 0 )
  {
    this = (PresentSelectableBulkItemConfirmDlg_o *)sub_1C713B0(&LocalizationManager_TypeInfo);
    byte_4CC607F = 1;
  }
  itemSelectEntity = v4->fields.itemSelectEntity;
  if ( !itemSelectEntity )
    goto LABEL_9;
  exchangeOriginCount = v4->fields.exchangeOriginCount;
  requireNum = itemSelectEntity->fields.requireNum;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (PresentSelectableBulkItemConfirmDlg_o *)LocalizationManager__GetNumberFormatLong(requireNum * count, 0);
  if ( !exchangeOriginCount
    || (UILabel__set_text(exchangeOriginCount, (System_String_o *)this, 0),
        itemCountPerExchange = v4->fields.itemCountPerExchange,
        exchangeDestinationCount = v4->fields.exchangeDestinationCount,
        this = (PresentSelectableBulkItemConfirmDlg_o *)LocalizationManager__GetNumberFormatLong(
                                                          itemCountPerExchange * count,
                                                          0),
        !exchangeDestinationCount) )
  {
LABEL_9:
    sub_1C71608(this, *(_QWORD *)&count);
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
    sub_1C71608(this, method);
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
    sub_1C71608(this, method);
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
  struct PresentSelectableBulkItemConfirmDlg_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  PresentSelectableBulkItemConfirmDlg_o *v10; // x0
  PresentSelectableBulkItemConfirmDlg_CallbackFunc_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4CC6079 & 1) == 0 )
  {
    sub_1C713B0(&PresentSelectableBulkItemConfirmDlg_CallbackFunc_TypeInfo);
    byte_4CC6079 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (PresentSelectableBulkItemConfirmDlg_CallbackFunc_c *)v7->klass != PresentSelectableBulkItemConfirmDlg_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1CCD184(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C719A4(v7);
  PresentSelectableBulkItemConfirmDlg__remove_callbackFunc(v10, v11, v12);
}


UnityEngine_GameObject_o *PresentSelectableBulkItemConfirmDlg__get_closeBtnObject(
        PresentSelectableBulkItemConfirmDlg_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *cancelButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_4CC6080 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC6080 = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0, 0) )
    return 0;
  v6 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v6 )
    sub_1C71608(0, v4);
  return UnityEngine_Component__get_gameObject(v6, 0);
}


void PresentSelectableBulkItemConfirmDlg__remove_callbackFunc(
        PresentSelectableBulkItemConfirmDlg_o *this,
        PresentSelectableBulkItemConfirmDlg_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct PresentSelectableBulkItemConfirmDlg_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  PresentSelectableBulkItemConfirmDlg_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_4CC607A & 1) == 0 )
  {
    sub_1C713B0(&PresentSelectableBulkItemConfirmDlg_CallbackFunc_TypeInfo);
    byte_4CC607A = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (PresentSelectableBulkItemConfirmDlg_CallbackFunc_c *)v7->klass != PresentSelectableBulkItemConfirmDlg_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1CCD184(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C719A4(v7);
  PresentSelectableBulkItemConfirmDlg__Init(v10, v11);
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
    sub_1C71608(0, method);
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
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C71470(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C71624(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C714D8(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1AA63D0;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AA6388;
}


System_IAsyncResult_o *PresentSelectableBulkItemConfirmDlg_CallbackFunc__BeginInvoke(
        PresentSelectableBulkItemConfirmDlg_CallbackFunc_o *this,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-34h] BYREF

  v10 = result;
  if ( (byte_4CC6082 & 1) == 0 )
  {
    sub_1C713B0(&int_TypeInfo);
    byte_4CC6082 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_1C71364(this, v9, callback, object);
}


void PresentSelectableBulkItemConfirmDlg_CallbackFunc__EndInvoke(
        PresentSelectableBulkItemConfirmDlg_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C71368(result, 0, method);
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