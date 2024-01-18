void __fastcall PresentSelectableBulkItemConfirmDlg___ctor(
        PresentSelectableBulkItemConfirmDlg_o *this,
        const MethodInfo *method)
{
  if ( (byte_4187A40 & 1) == 0 )
  {
    sub_B2C35C(&BaseDialog_TypeInfo, method);
    byte_4187A40 = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall PresentSelectableBulkItemConfirmDlg__Close(
        PresentSelectableBulkItemConfirmDlg_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PresentSelectableBulkItemConfirmDlg__Close_25194192(this, 0LL, v2);
}


void __fastcall PresentSelectableBulkItemConfirmDlg__Close_25194192(
        PresentSelectableBulkItemConfirmDlg_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  System_Action_o *v11; // x20

  if ( (byte_4187A3B & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, callback);
    sub_B2C35C(&Method_PresentSelectableBulkItemConfirmDlg_EndClose__, v10);
    byte_4187A3B = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 4;
  v11 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_PresentSelectableBulkItemConfirmDlg_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0LL);
}


void __fastcall PresentSelectableBulkItemConfirmDlg__EndClose(
        PresentSelectableBulkItemConfirmDlg_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  System_Action_o *closeCallbackFunc; // x20

  PresentSelectableBulkItemConfirmDlg__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B2C434(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.closeCallbackFunc, 0LL, v5, v6, v7, v8, v9, v10);
    System_Action__Invoke(closeCallbackFunc, 0LL);
  }
}


void __fastcall PresentSelectableBulkItemConfirmDlg__EndOpen(
        PresentSelectableBulkItemConfirmDlg_o *this,
        const MethodInfo *method)
{
  this->fields.state = 2;
}


void __fastcall PresentSelectableBulkItemConfirmDlg__Init(
        PresentSelectableBulkItemConfirmDlg_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B2C434(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.state = 0;
  this->fields.itemSelectEntity = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.itemSelectEntity, 0LL, v5, v6, v7, v8, v9, v10);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall PresentSelectableBulkItemConfirmDlg__Modify(
        PresentSelectableBulkItemConfirmDlg_o *this,
        PresentSelectableBulkItemConfirmDlg_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct PresentSelectableBulkItemConfirmDlg_CallbackFunc_o **p_callbackFunc; // x0

  this->fields.callbackFunc = callback;
  p_callbackFunc = &this->fields.callbackFunc;
  *((_DWORD *)p_callbackFunc - 2) = 2;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)p_callbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall PresentSelectableBulkItemConfirmDlg__OnClickCancel(
        PresentSelectableBulkItemConfirmDlg_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Action_o *v5; // x20
  const MethodInfo *v6; // x2

  if ( (byte_4187A3D & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_PresentSelectableBulkItemConfirmDlg__OnClickCancel_b__39_0__, v3);
    sub_B2C35C(&SoundManager_TypeInfo, v4);
    byte_4187A3D = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    v5 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      v5,
      (Il2CppObject *)this,
      Method_PresentSelectableBulkItemConfirmDlg__OnClickCancel_b__39_0__,
      0LL);
    PresentSelectableBulkItemConfirmDlg__Close_25194192(this, v5, v6);
  }
}


void __fastcall PresentSelectableBulkItemConfirmDlg__OnClickDecide(
        PresentSelectableBulkItemConfirmDlg_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Action_o *v5; // x20
  const MethodInfo *v6; // x2

  if ( (byte_4187A3C & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_PresentSelectableBulkItemConfirmDlg__OnClickDecide_b__38_0__, v3);
    sub_B2C35C(&SoundManager_TypeInfo, v4);
    byte_4187A3C = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(8, 0LL);
    v5 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      v5,
      (Il2CppObject *)this,
      Method_PresentSelectableBulkItemConfirmDlg__OnClickDecide_b__38_0__,
      0LL);
    PresentSelectableBulkItemConfirmDlg__Close_25194192(this, v5, v6);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PresentSelectableBulkItemConfirmDlg__Open(
        PresentSelectableBulkItemConfirmDlg_o *this,
        ItemSelectEntity_o *entity,
        ItemEntity_o *itemEnt,
        int32_t itemHold,
        ItemEntity_o *ticketEnt,
        int32_t ticketsHave,
        PresentSelectableBulkItemConfirmDlg_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v34; // x1
  int v35; // w1
  UILabel_o *TitleLabel; // x25
  UILabel_o *DetailLabel; // x25
  UILabel_o *UnderDetailLabel; // x25
  UILabel_o *exchangeOrigin; // x25
  UILabel_o *exchangeOriginCountKind; // x25
  UILabel_o *exchangeDestination; // x25
  UILabel_o *exchangeDestinationCountKind; // x25
  const MethodInfo *v43; // x5
  UILabel_o *exchangeOriginItemName; // x8
  const MethodInfo *v45; // x2
  BalanceConfig_c *v46; // x0
  int32_t UserItemMax; // w8
  UILabel_o *v48; // x20
  __int64 *v49; // x8
  System_Action_o *v50; // x20

  if ( (byte_4187A3A & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, entity);
    sub_B2C35C(&BalanceConfig_TypeInfo, v15);
    sub_B2C35C(&LocalizationManager_TypeInfo, v16);
    sub_B2C35C(&Method_PresentSelectableBulkItemConfirmDlg_EndOpen__, v17);
    sub_B2C35C(&StringLiteral_10496/*"PRESENT_BOX_SELECTABLE_BULK_CONFIRM_DLG_TITLE"*/, v18);
    sub_B2C35C(&StringLiteral_10495/*"PRESENT_BOX_SELECTABLE_BULK_CONFIRM_DLG_DETAIL_UPPER"*/, v19);
    sub_B2C35C(&StringLiteral_10498/*"PRESENT_BOX_SELECTABLE_BULK_DESTINATION_KIND"*/, v20);
    sub_B2C35C(&StringLiteral_10500/*"PRESENT_BOX_SELECTABLE_BULK_ORIGIN_KIND"*/, v21);
    sub_B2C35C(&StringLiteral_10494/*"PRESENT_BOX_SELECTABLE_BULK_CONFIRM_DLG_DETAIL_UNDER"*/, v22);
    sub_B2C35C(&StringLiteral_10499/*"PRESENT_BOX_SELECTABLE_BULK_ORIGIN"*/, v23);
    sub_B2C35C(&StringLiteral_10522/*"PRESENT_SELECT_ITEM_OVER_WARNING"*/, v24);
    sub_B2C35C(&StringLiteral_10497/*"PRESENT_BOX_SELECTABLE_BULK_DESTINATION"*/, v25);
    sub_B2C35C(&StringLiteral_10521/*"PRESENT_SELECT_ITEM_FULL_WARNING"*/, v26);
    byte_4187A3A = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.callbackFunc = callback;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.callbackFunc,
      (System_Int32_array **)callback,
      (System_String_array **)itemEnt,
      *(System_String_array ***)&itemHold,
      (System_Boolean_array **)ticketEnt,
      *(System_Int32_array ***)&ticketsHave,
      (System_Int32_array *)callback,
      (System_Int32_array *)method);
    this->fields.itemSelectEntity = entity;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.itemSelectEntity,
      (System_Int32_array **)entity,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_47;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    this->fields.buyCount = 1;
    if ( !entity )
      goto LABEL_47;
    gameObject = (UnityEngine_GameObject_o *)this->fields.itemSlider;
    if ( !gameObject )
      goto LABEL_47;
    if ( ticketsHave / entity->fields.requireNum >= 99 )
      v35 = 99;
    else
      v35 = ticketsHave / entity->fields.requireNum;
    UISliderWithButton__init((UISliderWithButton_o *)gameObject, v35, 0, 1, 0LL);
    TitleLabel = this->fields.TitleLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10496/*"PRESENT_BOX_SELECTABLE_BULK_CONFIRM_DLG_TITLE"*/, 0LL);
    if ( !TitleLabel )
      goto LABEL_47;
    UILabel__set_text(TitleLabel, (System_String_o *)gameObject, 0LL);
    DetailLabel = this->fields.DetailLabel;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10495/*"PRESENT_BOX_SELECTABLE_BULK_CONFIRM_DLG_DETAIL_UPPER"*/, 0LL);
    if ( !DetailLabel )
      goto LABEL_47;
    UILabel__set_text(DetailLabel, (System_String_o *)gameObject, 0LL);
    UnderDetailLabel = this->fields.UnderDetailLabel;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10494/*"PRESENT_BOX_SELECTABLE_BULK_CONFIRM_DLG_DETAIL_UNDER"*/, 0LL);
    if ( !UnderDetailLabel )
      goto LABEL_47;
    UILabel__set_text(UnderDetailLabel, (System_String_o *)gameObject, 0LL);
    exchangeOrigin = this->fields.exchangeOrigin;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10499/*"PRESENT_BOX_SELECTABLE_BULK_ORIGIN"*/, 0LL);
    if ( !exchangeOrigin )
      goto LABEL_47;
    UILabel__set_text(exchangeOrigin, (System_String_o *)gameObject, 0LL);
    exchangeOriginCountKind = this->fields.exchangeOriginCountKind;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10500/*"PRESENT_BOX_SELECTABLE_BULK_ORIGIN_KIND"*/, 0LL);
    if ( !exchangeOriginCountKind )
      goto LABEL_47;
    UILabel__set_text(exchangeOriginCountKind, (System_String_o *)gameObject, 0LL);
    exchangeDestination = this->fields.exchangeDestination;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10497/*"PRESENT_BOX_SELECTABLE_BULK_DESTINATION"*/, 0LL);
    if ( !exchangeDestination )
      goto LABEL_47;
    UILabel__set_text(exchangeDestination, (System_String_o *)gameObject, 0LL);
    exchangeDestinationCountKind = this->fields.exchangeDestinationCountKind;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10498/*"PRESENT_BOX_SELECTABLE_BULK_DESTINATION_KIND"*/, 0LL);
    if ( !exchangeDestinationCountKind )
      goto LABEL_47;
    UILabel__set_text(exchangeDestinationCountKind, (System_String_o *)gameObject, 0LL);
    if ( !ticketEnt )
      goto LABEL_47;
    gameObject = (UnityEngine_GameObject_o *)this->fields.itemInfo;
    if ( !gameObject )
      goto LABEL_47;
    gameObject = (UnityEngine_GameObject_o *)PresentSelectableItemComponent__setItemInfo(
                                               (PresentSelectableItemComponent_o *)gameObject,
                                               entity,
                                               ticketsHave,
                                               ticketEnt->fields.imageId,
                                               0LL,
                                               v43);
    exchangeOriginItemName = this->fields.exchangeOriginItemName;
    this->fields.itemCountPerExchange = (int)gameObject;
    if ( !exchangeOriginItemName )
      goto LABEL_47;
    UILabel__set_text(exchangeOriginItemName, ticketEnt->fields.name, 0LL);
    if ( !itemEnt )
      goto LABEL_47;
    gameObject = (UnityEngine_GameObject_o *)this->fields.exchangeDestinationItemName;
    if ( !gameObject )
      goto LABEL_47;
    UILabel__set_text((UILabel_o *)gameObject, itemEnt->fields.name, 0LL);
    PresentSelectableBulkItemConfirmDlg__UpdateCountValue(this, this->fields.buyCount, v45);
    gameObject = (UnityEngine_GameObject_o *)this->fields.itemSlider;
    if ( !gameObject )
      goto LABEL_47;
    UISliderWithButton__normalMode((UISliderWithButton_o *)gameObject, 0LL);
    v46 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v46 = BalanceConfig_TypeInfo;
    }
    UserItemMax = v46->static_fields->UserItemMax;
    if ( UserItemMax <= itemHold )
    {
      v48 = this->fields.UnderDetailLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v49 = &StringLiteral_10521/*"PRESENT_SELECT_ITEM_FULL_WARNING"*/;
    }
    else
    {
      if ( (BYTE3(v46->vtable._0_Equals.methodPtr) & 4) != 0 && !v46->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v46);
        UserItemMax = BalanceConfig_TypeInfo->static_fields->UserItemMax;
      }
      if ( itemHold + 1 <= UserItemMax )
      {
        v34 = 0LL;
LABEL_45:
        gameObject = (UnityEngine_GameObject_o *)this->fields.decideButton;
        if ( gameObject )
        {
          ((void (__fastcall *)(UnityEngine_GameObject_o *, __int64, __int64, Il2CppRuntimeInterfaceOffsetPair *))gameObject->klass[1]._1.implementedInterfaces)(
            gameObject,
            v34,
            1LL,
            gameObject->klass[1]._1.interfaceOffsets);
          this->fields.state = 1;
          v50 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
          System_Action___ctor(v50, (Il2CppObject *)this, Method_PresentSelectableBulkItemConfirmDlg_EndOpen__, 0LL);
          BaseDialog__Open((BaseDialog_o *)this, v50, 0, 0LL);
          return;
        }
LABEL_47:
        sub_B2C434(gameObject, v34);
      }
      v48 = this->fields.UnderDetailLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v49 = &StringLiteral_10522/*"PRESENT_SELECT_ITEM_OVER_WARNING"*/;
    }
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)*v49, 0LL);
    if ( !v48 )
      goto LABEL_47;
    UILabel__set_text(v48, (System_String_o *)gameObject, 0LL);
    v34 = 3LL;
    goto LABEL_45;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PresentSelectableBulkItemConfirmDlg__UpdateCountValue(
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
  if ( (byte_4187A3E & 1) == 0 )
  {
    this = (PresentSelectableBulkItemConfirmDlg_o *)sub_B2C35C(&LocalizationManager_TypeInfo, *(_QWORD *)&count);
    byte_4187A3E = 1;
  }
  itemSelectEntity = v4->fields.itemSelectEntity;
  if ( !itemSelectEntity )
    goto LABEL_10;
  exchangeOriginCount = v4->fields.exchangeOriginCount;
  requireNum = itemSelectEntity->fields.requireNum;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  this = (PresentSelectableBulkItemConfirmDlg_o *)LocalizationManager__GetNumberFormatLong(requireNum * count, 0LL);
  if ( !exchangeOriginCount
    || (UILabel__set_text(exchangeOriginCount, (System_String_o *)this, 0LL),
        itemCountPerExchange = v4->fields.itemCountPerExchange,
        exchangeDestinationCount = v4->fields.exchangeDestinationCount,
        this = (PresentSelectableBulkItemConfirmDlg_o *)LocalizationManager__GetNumberFormatLong(
                                                          itemCountPerExchange * count,
                                                          0LL),
        !exchangeDestinationCount) )
  {
LABEL_10:
    sub_B2C434(this, *(_QWORD *)&count);
  }
  UILabel__set_text(exchangeDestinationCount, (System_String_o *)this, 0LL);
}


void __fastcall PresentSelectableBulkItemConfirmDlg___OnClickCancel_b__39_0(
        PresentSelectableBulkItemConfirmDlg_o *this,
        const MethodInfo *method)
{
  PresentSelectableBulkItemConfirmDlg_CallbackFunc_o *callbackFunc; // x0

  callbackFunc = this->fields.callbackFunc;
  if ( !callbackFunc )
    sub_B2C434(0LL, method);
  PresentSelectableBulkItemConfirmDlg_CallbackFunc__Invoke(callbackFunc, 0, 0LL);
}


void __fastcall PresentSelectableBulkItemConfirmDlg___OnClickDecide_b__38_0(
        PresentSelectableBulkItemConfirmDlg_o *this,
        const MethodInfo *method)
{
  PresentSelectableBulkItemConfirmDlg_CallbackFunc_o *callbackFunc; // x0

  callbackFunc = this->fields.callbackFunc;
  if ( !callbackFunc )
    sub_B2C434(0LL, method);
  PresentSelectableBulkItemConfirmDlg_CallbackFunc__Invoke(callbackFunc, this->fields.buyCount, 0LL);
}


void __fastcall PresentSelectableBulkItemConfirmDlg__add_callbackFunc(
        PresentSelectableBulkItemConfirmDlg_o *this,
        PresentSelectableBulkItemConfirmDlg_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct PresentSelectableBulkItemConfirmDlg_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct PresentSelectableBulkItemConfirmDlg_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  PresentSelectableBulkItemConfirmDlg_o *v11; // x0
  PresentSelectableBulkItemConfirmDlg_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4187A38 & 1) == 0 )
  {
    sub_B2C35C(&PresentSelectableBulkItemConfirmDlg_CallbackFunc_TypeInfo, value);
    byte_4187A38 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (PresentSelectableBulkItemConfirmDlg_CallbackFunc_c *)v8->klass != PresentSelectableBulkItemConfirmDlg_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B20D74(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PresentSelectableBulkItemConfirmDlg_o *)sub_B2C728(v8);
  PresentSelectableBulkItemConfirmDlg__remove_callbackFunc(v11, v12, v13);
}


UnityEngine_GameObject_o *__fastcall PresentSelectableBulkItemConfirmDlg__get_closeBtnObject(
        PresentSelectableBulkItemConfirmDlg_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *cancelButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_4187A3F & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4187A3F = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(cancelButton, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v6 )
    sub_B2C434(0LL, v4);
  return UnityEngine_Component__get_gameObject(v6, 0LL);
}


void __fastcall PresentSelectableBulkItemConfirmDlg__remove_callbackFunc(
        PresentSelectableBulkItemConfirmDlg_o *this,
        PresentSelectableBulkItemConfirmDlg_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct PresentSelectableBulkItemConfirmDlg_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct PresentSelectableBulkItemConfirmDlg_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  PresentSelectableBulkItemConfirmDlg_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4187A39 & 1) == 0 )
  {
    sub_B2C35C(&PresentSelectableBulkItemConfirmDlg_CallbackFunc_TypeInfo, value);
    byte_4187A39 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (PresentSelectableBulkItemConfirmDlg_CallbackFunc_c *)v8->klass != PresentSelectableBulkItemConfirmDlg_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B20D74(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PresentSelectableBulkItemConfirmDlg_o *)sub_B2C728(v8);
  PresentSelectableBulkItemConfirmDlg__Init(v11, v12);
}


void __fastcall PresentSelectableBulkItemConfirmDlg__sliderValueChange(
        PresentSelectableBulkItemConfirmDlg_o *this,
        const MethodInfo *method)
{
  UISliderWithButton_o *itemSlider; // x0
  int32_t v4; // w0
  const MethodInfo *v5; // x2

  itemSlider = this->fields.itemSlider;
  if ( !itemSlider )
    sub_B2C434(0LL, method);
  v4 = UISliderWithButton__sliderValueChange(itemSlider, 0LL);
  this->fields.buyCount = v4;
  PresentSelectableBulkItemConfirmDlg__UpdateCountValue(this, v4, v5);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PresentSelectableBulkItemConfirmDlg_CallbackFunc___ctor(
        PresentSelectableBulkItemConfirmDlg_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B2C2F8(p_method, object);
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall PresentSelectableBulkItemConfirmDlg_CallbackFunc__BeginInvoke(
        PresentSelectableBulkItemConfirmDlg_CallbackFunc_o *this,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-24h] BYREF

  v10 = result;
  if ( (byte_41852B8 & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, *(_QWORD *)&result);
    byte_41852B8 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_B2C300(this, v9, callback, object);
}


void __fastcall PresentSelectableBulkItemConfirmDlg_CallbackFunc__EndInvoke(
        PresentSelectableBulkItemConfirmDlg_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PresentSelectableBulkItemConfirmDlg_CallbackFunc__Invoke(
        PresentSelectableBulkItemConfirmDlg_CallbackFunc_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v7; // x24
  PresentSelectableBulkItemConfirmDlg_CallbackFunc_o **v8; // x25
  __int64 v9; // x26
  unsigned int v10; // w23
  __int64 class_0; // x0
  __int64 v12; // x3
  __int64 v13; // x8
  unsigned __int64 v14; // x10
  _DWORD *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x0
  void (__fastcall **v19)(__int64 *, _QWORD, _QWORD); // x0
  PresentSelectableBulkItemConfirmDlg_CallbackFunc_o *v20; // x8
  __int64 *v21; // x21
  __int64 v22; // x22
  void (__fastcall *v23)(_QWORD, __int64); // x23
  char v24; // w23
  char v25; // w0
  __int64 v26; // x3
  __int64 v27; // x8
  __int64 v28; // x1
  __int64 v29; // x2
  unsigned __int64 v30; // x10
  _DWORD *v31; // x11
  PresentSelectableBulkItemConfirmDlg_CallbackFunc_o *v32; // [xsp+8h] [xbp-48h] BYREF

  v32 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v32;
    v7 = 1LL;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v4 + 24);
  if ( v7 )
  {
    v8 = (PresentSelectableBulkItemConfirmDlg_CallbackFunc_o **)(v4 + 32);
LABEL_5:
    v9 = 0LL;
    while ( 1 )
    {
      v20 = v8[v9];
      v21 = *(__int64 **)&v20->fields.method;
      v22 = *(_QWORD *)&v20->fields.extra_arg;
      v23 = *(void (__fastcall **)(_QWORD, __int64))&v20->fields.method_ptr;
      if ( *(__int16 *)(v22 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v20->fields.extra_arg, *(_QWORD *)&result, method, v3);
      if ( (sub_B2C38C(v22) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v22 + 74) != 1 )
        goto LABEL_36;
      v23((unsigned int)result, v22);
LABEL_37:
      if ( ++v9 == v7 )
        return;
    }
    if ( v21 && *(__int16 *)(v22 + 72) != -1 && (*(_BYTE *)(*v21 + 277) & 1) == 0 && this->fields.m_target )
    {
      v24 = sub_B2C384(v22);
      v25 = sub_B2C788(v22);
      if ( (v24 & 1) != 0 )
      {
        if ( (v25 & 1) != 0 )
        {
          v27 = *v21;
          v28 = *(_QWORD *)(v22 + 24);
          v29 = *(unsigned __int16 *)(v22 + 72);
          if ( *(_WORD *)(*v21 + 298) )
          {
            v30 = 0LL;
            v31 = (_DWORD *)(*(_QWORD *)(v27 + 176) + 8LL);
            while ( *((_QWORD *)v31 - 1) != v28 )
            {
              ++v30;
              v31 += 4;
              if ( v30 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_35;
            }
            v18 = v27 + 16LL * (*v31 + (int)v29) + 312;
          }
          else
          {
LABEL_35:
            v18 = sub_AC5258(v21, v28, v29, v26);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD))sub_B2C40C(v17, v22);
        (*v19)(v21, (unsigned int)result, v19);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v22 + 72);
        if ( (v25 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v22);
          v13 = *v21;
          if ( *(_WORD *)(*v21 + 298) )
          {
            v14 = 0LL;
            v15 = (_DWORD *)(*(_QWORD *)(v13 + 176) + 8LL);
            while ( *((_QWORD *)v15 - 1) != class_0 )
            {
              ++v14;
              v15 += 4;
              if ( v14 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_11;
            }
            v16 = v13 + 16LL * (int)(*v15 + v10) + 312;
          }
          else
          {
LABEL_11:
            v16 = sub_AC5258(v21, class_0, v10, v12);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))v16)(v21, (unsigned int)result, *(_QWORD *)(v16 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 312))(
            v21,
            (unsigned int)result,
            *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, __int64))v23)(v21, (unsigned int)result, v22);
    goto LABEL_37;
  }
}