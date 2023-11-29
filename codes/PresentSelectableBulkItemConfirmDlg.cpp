void __fastcall PresentSelectableBulkItemConfirmDlg___ctor(
        PresentSelectableBulkItemConfirmDlg_o *this,
        const MethodInfo *method)
{
  if ( (byte_40F9FFA & 1) == 0 )
  {
    sub_B16FFC(&BaseDialog_TypeInfo, method);
    byte_40F9FFA = 1;
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

  PresentSelectableBulkItemConfirmDlg__Close_25202060(this, 0LL, v2);
}


void __fastcall PresentSelectableBulkItemConfirmDlg__Close_25202060(
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
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  System_Action_o *v15; // x20

  if ( (byte_40F9FF5 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, callback);
    sub_B16FFC(&Method_PresentSelectableBulkItemConfirmDlg_EndClose__, v10);
    byte_40F9FF5 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 4;
  v15 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v11, v12, v13, v14);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_PresentSelectableBulkItemConfirmDlg_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v15, 0LL);
}


void __fastcall PresentSelectableBulkItemConfirmDlg__EndClose(
        PresentSelectableBulkItemConfirmDlg_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  System_Action_o *closeCallbackFunc; // x20

  PresentSelectableBulkItemConfirmDlg__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.closeCallbackFunc, 0LL, v4, v5, v6, v7, v8, v9);
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
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.state = 0;
  this->fields.itemSelectEntity = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.itemSelectEntity, 0LL, v4, v5, v6, v7, v8, v9);
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
  sub_B16F98(
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
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  System_Action_o *v9; // x20
  const MethodInfo *v10; // x2

  if ( (byte_40F9FF7 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_PresentSelectableBulkItemConfirmDlg__OnClickCancel_b__39_0__, v3);
    sub_B16FFC(&SoundManager_TypeInfo, v4);
    byte_40F9FF7 = 1;
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
    v9 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v5, v6, v7, v8);
    System_Action___ctor(
      v9,
      (Il2CppObject *)this,
      Method_PresentSelectableBulkItemConfirmDlg__OnClickCancel_b__39_0__,
      0LL);
    PresentSelectableBulkItemConfirmDlg__Close_25202060(this, v9, v10);
  }
}


void __fastcall PresentSelectableBulkItemConfirmDlg__OnClickDecide(
        PresentSelectableBulkItemConfirmDlg_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  System_Action_o *v9; // x20
  const MethodInfo *v10; // x2

  if ( (byte_40F9FF6 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_PresentSelectableBulkItemConfirmDlg__OnClickDecide_b__38_0__, v3);
    sub_B16FFC(&SoundManager_TypeInfo, v4);
    byte_40F9FF6 = 1;
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
    v9 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v5, v6, v7, v8);
    System_Action___ctor(
      v9,
      (Il2CppObject *)this,
      Method_PresentSelectableBulkItemConfirmDlg__OnClickDecide_b__38_0__,
      0LL);
    PresentSelectableBulkItemConfirmDlg__Close_25202060(this, v9, v10);
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
  UISliderWithButton_o *itemSlider; // x0
  int v35; // w1
  UILabel_o *TitleLabel; // x25
  System_String_o *v37; // x0
  UILabel_o *DetailLabel; // x25
  System_String_o *v39; // x0
  UILabel_o *UnderDetailLabel; // x25
  System_String_o *v41; // x0
  UILabel_o *exchangeOrigin; // x25
  System_String_o *v43; // x0
  UILabel_o *exchangeOriginCountKind; // x25
  System_String_o *v45; // x0
  UILabel_o *exchangeDestination; // x25
  System_String_o *v47; // x0
  UILabel_o *exchangeDestinationCountKind; // x25
  System_String_o *v49; // x0
  const MethodInfo *v50; // x5
  PresentSelectableItemComponent_o *itemInfo; // x0
  int32_t v52; // w0
  UILabel_o *exchangeOriginItemName; // x8
  UILabel_o *exchangeDestinationItemName; // x0
  const MethodInfo *v55; // x2
  UISliderWithButton_o *v56; // x0
  BalanceConfig_c *v57; // x0
  int32_t UserItemMax; // w8
  UILabel_o *v59; // x20
  __int64 *v60; // x8
  System_String_o *v61; // x0
  __int64 v62; // x1
  struct UICommonButton_o *decideButton; // x0
  __int64 v64; // x1
  __int64 v65; // x2
  __int64 v66; // x3
  __int64 v67; // x4
  System_Action_o *v68; // x20

  if ( (byte_40F9FF4 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, entity);
    sub_B16FFC(&BalanceConfig_TypeInfo, v15);
    sub_B16FFC(&LocalizationManager_TypeInfo, v16);
    sub_B16FFC(&Method_PresentSelectableBulkItemConfirmDlg_EndOpen__, v17);
    sub_B16FFC(&StringLiteral_10463, v18);
    sub_B16FFC(&StringLiteral_10462, v19);
    sub_B16FFC(&StringLiteral_10465, v20);
    sub_B16FFC(&StringLiteral_10467, v21);
    sub_B16FFC(&StringLiteral_10461, v22);
    sub_B16FFC(&StringLiteral_10466, v23);
    sub_B16FFC(&StringLiteral_10489, v24);
    sub_B16FFC(&StringLiteral_10464, v25);
    sub_B16FFC(&StringLiteral_10488, v26);
    byte_40F9FF4 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.callbackFunc = callback;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.callbackFunc,
      (System_Int32_array **)callback,
      (System_String_array **)itemEnt,
      *(System_String_array ***)&itemHold,
      (System_Boolean_array **)ticketEnt,
      *(System_Int32_array ***)&ticketsHave,
      (System_Int32_array *)callback,
      (System_Int32_array *)method);
    this->fields.itemSelectEntity = entity;
    sub_B16F98(
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
    itemSlider = this->fields.itemSlider;
    if ( !itemSlider )
      goto LABEL_47;
    if ( ticketsHave / entity->fields.requireNum >= 99 )
      v35 = 99;
    else
      v35 = ticketsHave / entity->fields.requireNum;
    UISliderWithButton__init(itemSlider, v35, 0, 1, 0LL);
    TitleLabel = this->fields.TitleLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v37 = LocalizationManager__Get((System_String_o *)StringLiteral_10463, 0LL);
    if ( !TitleLabel )
      goto LABEL_47;
    UILabel__set_text(TitleLabel, v37, 0LL);
    DetailLabel = this->fields.DetailLabel;
    v39 = LocalizationManager__Get((System_String_o *)StringLiteral_10462, 0LL);
    if ( !DetailLabel )
      goto LABEL_47;
    UILabel__set_text(DetailLabel, v39, 0LL);
    UnderDetailLabel = this->fields.UnderDetailLabel;
    v41 = LocalizationManager__Get((System_String_o *)StringLiteral_10461, 0LL);
    if ( !UnderDetailLabel )
      goto LABEL_47;
    UILabel__set_text(UnderDetailLabel, v41, 0LL);
    exchangeOrigin = this->fields.exchangeOrigin;
    v43 = LocalizationManager__Get((System_String_o *)StringLiteral_10466, 0LL);
    if ( !exchangeOrigin )
      goto LABEL_47;
    UILabel__set_text(exchangeOrigin, v43, 0LL);
    exchangeOriginCountKind = this->fields.exchangeOriginCountKind;
    v45 = LocalizationManager__Get((System_String_o *)StringLiteral_10467, 0LL);
    if ( !exchangeOriginCountKind )
      goto LABEL_47;
    UILabel__set_text(exchangeOriginCountKind, v45, 0LL);
    exchangeDestination = this->fields.exchangeDestination;
    v47 = LocalizationManager__Get((System_String_o *)StringLiteral_10464, 0LL);
    if ( !exchangeDestination )
      goto LABEL_47;
    UILabel__set_text(exchangeDestination, v47, 0LL);
    exchangeDestinationCountKind = this->fields.exchangeDestinationCountKind;
    v49 = LocalizationManager__Get((System_String_o *)StringLiteral_10465, 0LL);
    if ( !exchangeDestinationCountKind )
      goto LABEL_47;
    UILabel__set_text(exchangeDestinationCountKind, v49, 0LL);
    if ( !ticketEnt )
      goto LABEL_47;
    itemInfo = this->fields.itemInfo;
    if ( !itemInfo )
      goto LABEL_47;
    v52 = PresentSelectableItemComponent__setItemInfo(
            itemInfo,
            entity,
            ticketsHave,
            ticketEnt->fields.imageId,
            0LL,
            v50);
    exchangeOriginItemName = this->fields.exchangeOriginItemName;
    this->fields.itemCountPerExchange = v52;
    if ( !exchangeOriginItemName )
      goto LABEL_47;
    UILabel__set_text(exchangeOriginItemName, ticketEnt->fields.name, 0LL);
    if ( !itemEnt )
      goto LABEL_47;
    exchangeDestinationItemName = this->fields.exchangeDestinationItemName;
    if ( !exchangeDestinationItemName )
      goto LABEL_47;
    UILabel__set_text(exchangeDestinationItemName, itemEnt->fields.name, 0LL);
    PresentSelectableBulkItemConfirmDlg__UpdateCountValue(this, this->fields.buyCount, v55);
    v56 = this->fields.itemSlider;
    if ( !v56 )
      goto LABEL_47;
    UISliderWithButton__normalMode(v56, 0LL);
    v57 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v57 = BalanceConfig_TypeInfo;
    }
    UserItemMax = v57->static_fields->UserItemMax;
    if ( UserItemMax <= itemHold )
    {
      v59 = this->fields.UnderDetailLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v60 = &StringLiteral_10488;
    }
    else
    {
      if ( (BYTE3(v57->vtable._0_Equals.methodPtr) & 4) != 0 && !v57->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v57);
        UserItemMax = BalanceConfig_TypeInfo->static_fields->UserItemMax;
      }
      if ( itemHold + 1 <= UserItemMax )
      {
        v62 = 0LL;
LABEL_45:
        decideButton = this->fields.decideButton;
        if ( decideButton )
        {
          ((void (__fastcall *)(struct UICommonButton_o *, __int64, __int64, Il2CppMethodPointer))decideButton->klass->vtable._14_SetState.method)(
            decideButton,
            v62,
            1LL,
            decideButton->klass->vtable._15_OnPress.methodPtr);
          this->fields.state = 1;
          v68 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v64, v65, v66, v67);
          System_Action___ctor(v68, (Il2CppObject *)this, Method_PresentSelectableBulkItemConfirmDlg_EndOpen__, 0LL);
          BaseDialog__Open((BaseDialog_o *)this, v68, 0, 0LL);
          return;
        }
LABEL_47:
        sub_B170D4();
      }
      v59 = this->fields.UnderDetailLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v60 = &StringLiteral_10489;
    }
    v61 = LocalizationManager__Get((System_String_o *)*v60, 0LL);
    if ( !v59 )
      goto LABEL_47;
    UILabel__set_text(v59, v61, 0LL);
    v62 = 3LL;
    goto LABEL_45;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PresentSelectableBulkItemConfirmDlg__UpdateCountValue(
        PresentSelectableBulkItemConfirmDlg_o *this,
        int32_t count,
        const MethodInfo *method)
{
  struct ItemSelectEntity_o *itemSelectEntity; // x8
  UILabel_o *exchangeOriginCount; // x21
  __int64 requireNum; // x22
  System_String_o *NumberFormatLong; // x0
  __int64 itemCountPerExchange; // x8
  UILabel_o *exchangeDestinationCount; // x19
  System_String_o *v11; // x0

  if ( (byte_40F9FF8 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, *(_QWORD *)&count);
    byte_40F9FF8 = 1;
  }
  itemSelectEntity = this->fields.itemSelectEntity;
  if ( !itemSelectEntity )
    goto LABEL_10;
  exchangeOriginCount = this->fields.exchangeOriginCount;
  requireNum = itemSelectEntity->fields.requireNum;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  NumberFormatLong = LocalizationManager__GetNumberFormatLong(requireNum * count, 0LL);
  if ( !exchangeOriginCount
    || (UILabel__set_text(exchangeOriginCount, NumberFormatLong, 0LL),
        itemCountPerExchange = this->fields.itemCountPerExchange,
        exchangeDestinationCount = this->fields.exchangeDestinationCount,
        v11 = LocalizationManager__GetNumberFormatLong(itemCountPerExchange * count, 0LL),
        !exchangeDestinationCount) )
  {
LABEL_10:
    sub_B170D4();
  }
  UILabel__set_text(exchangeDestinationCount, v11, 0LL);
}


void __fastcall PresentSelectableBulkItemConfirmDlg___OnClickCancel_b__39_0(
        PresentSelectableBulkItemConfirmDlg_o *this,
        const MethodInfo *method)
{
  PresentSelectableBulkItemConfirmDlg_CallbackFunc_o *callbackFunc; // x0

  callbackFunc = this->fields.callbackFunc;
  if ( !callbackFunc )
    sub_B170D4();
  PresentSelectableBulkItemConfirmDlg_CallbackFunc__Invoke(callbackFunc, 0, 0LL);
}


void __fastcall PresentSelectableBulkItemConfirmDlg___OnClickDecide_b__38_0(
        PresentSelectableBulkItemConfirmDlg_o *this,
        const MethodInfo *method)
{
  PresentSelectableBulkItemConfirmDlg_CallbackFunc_o *callbackFunc; // x0

  callbackFunc = this->fields.callbackFunc;
  if ( !callbackFunc )
    sub_B170D4();
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

  if ( (byte_40F9FF2 & 1) == 0 )
  {
    sub_B16FFC(&PresentSelectableBulkItemConfirmDlg_CallbackFunc_TypeInfo, value);
    byte_40F9FF2 = 1;
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
    v9 = sub_B0BA14(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PresentSelectableBulkItemConfirmDlg_o *)sub_B173C8(v8);
  PresentSelectableBulkItemConfirmDlg__remove_callbackFunc(v11, v12, v13);
}


UnityEngine_GameObject_o *__fastcall PresentSelectableBulkItemConfirmDlg__get_closeBtnObject(
        PresentSelectableBulkItemConfirmDlg_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *cancelButton; // x20
  UnityEngine_Component_o *v5; // x0

  if ( (byte_40F9FF9 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F9FF9 = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(cancelButton, 0LL, 0LL) )
    return 0LL;
  v5 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v5 )
    sub_B170D4();
  return UnityEngine_Component__get_gameObject(v5, 0LL);
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

  if ( (byte_40F9FF3 & 1) == 0 )
  {
    sub_B16FFC(&PresentSelectableBulkItemConfirmDlg_CallbackFunc_TypeInfo, value);
    byte_40F9FF3 = 1;
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
    v9 = sub_B0BA14(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PresentSelectableBulkItemConfirmDlg_o *)sub_B173C8(v8);
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
    sub_B170D4();
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
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B16F98(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
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
  if ( (byte_40F83A2 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, *(_QWORD *)&result);
    byte_40F83A2 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_B16FA0(this, v9, callback, object);
}


void __fastcall PresentSelectableBulkItemConfirmDlg_CallbackFunc__EndInvoke(
        PresentSelectableBulkItemConfirmDlg_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PresentSelectableBulkItemConfirmDlg_CallbackFunc__Invoke(
        PresentSelectableBulkItemConfirmDlg_CallbackFunc_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v6; // x24
  PresentSelectableBulkItemConfirmDlg_CallbackFunc_o **v7; // x25
  __int64 v8; // x26
  unsigned int v9; // w23
  __int64 class_0; // x0
  __int64 v11; // x8
  unsigned __int64 v12; // x10
  _DWORD *v13; // x11
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x0
  void (__fastcall **v17)(__int64 *, _QWORD, _QWORD); // x0
  PresentSelectableBulkItemConfirmDlg_CallbackFunc_o *v18; // x8
  __int64 *v19; // x21
  __int64 v20; // x22
  void (__fastcall *v21)(_QWORD, __int64); // x23
  char v22; // w23
  char v23; // w0
  __int64 v24; // x8
  __int64 v25; // x1
  __int64 v26; // x2
  unsigned __int64 v27; // x10
  _DWORD *v28; // x11
  PresentSelectableBulkItemConfirmDlg_CallbackFunc_o *v29; // [xsp+8h] [xbp-48h] BYREF

  v29 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v29;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v3 + 24);
  if ( v6 )
  {
    v7 = (PresentSelectableBulkItemConfirmDlg_CallbackFunc_o **)(v3 + 32);
LABEL_5:
    v8 = 0LL;
    while ( 1 )
    {
      v18 = v7[v8];
      v19 = *(__int64 **)&v18->fields.method;
      v20 = *(_QWORD *)&v18->fields.extra_arg;
      v21 = *(void (__fastcall **)(_QWORD, __int64))&v18->fields.method_ptr;
      if ( *(__int16 *)(v20 + 72) == -1 )
        sub_B170B8(*(_QWORD *)&v18->fields.extra_arg, *(_QWORD *)&result, method);
      if ( (sub_B1702C(v20) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v20 + 74) != 1 )
        goto LABEL_36;
      v21((unsigned int)result, v20);
LABEL_37:
      if ( ++v8 == v6 )
        return;
    }
    if ( v19 && *(__int16 *)(v20 + 72) != -1 && (*(_BYTE *)(*v19 + 277) & 1) == 0 && this->fields.m_target )
    {
      v22 = sub_B17024(v20);
      v23 = sub_B17428(v20);
      if ( (v22 & 1) != 0 )
      {
        if ( (v23 & 1) != 0 )
        {
          v24 = *v19;
          v25 = *(_QWORD *)(v20 + 24);
          v26 = *(unsigned __int16 *)(v20 + 72);
          if ( *(_WORD *)(*v19 + 298) )
          {
            v27 = 0LL;
            v28 = (_DWORD *)(*(_QWORD *)(v24 + 176) + 8LL);
            while ( *((_QWORD *)v28 - 1) != v25 )
            {
              ++v27;
              v28 += 4;
              if ( v27 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_35;
            }
            v16 = v24 + 16LL * (*v28 + (int)v26) + 312;
          }
          else
          {
LABEL_35:
            v16 = sub_AAFEF8(v19, v25, v26);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD))sub_B170AC(v15, v20);
        (*v17)(v19, (unsigned int)result, v17);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v20 + 72);
        if ( (v23 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v20);
          v11 = *v19;
          if ( *(_WORD *)(*v19 + 298) )
          {
            v12 = 0LL;
            v13 = (_DWORD *)(*(_QWORD *)(v11 + 176) + 8LL);
            while ( *((_QWORD *)v13 - 1) != class_0 )
            {
              ++v12;
              v13 += 4;
              if ( v12 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_11;
            }
            v14 = v11 + 16LL * (int)(*v13 + v9) + 312;
          }
          else
          {
LABEL_11:
            v14 = sub_AAFEF8(v19, class_0, v9);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))v14)(v19, (unsigned int)result, *(_QWORD *)(v14 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 312))(
            v19,
            (unsigned int)result,
            *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, __int64))v21)(v19, (unsigned int)result, v20);
    goto LABEL_37;
  }
}