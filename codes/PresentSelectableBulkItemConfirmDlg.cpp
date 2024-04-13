void __fastcall PresentSelectableBulkItemConfirmDlg___ctor(
        PresentSelectableBulkItemConfirmDlg_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E87C0 & 1) == 0 )
  {
    sub_B5D5C4(&BaseDialog_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E87C0 = 1;
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

  PresentSelectableBulkItemConfirmDlg__Close_25083496(this, 0LL, v2);
}


void __fastcall PresentSelectableBulkItemConfirmDlg__Close_25083496(
        PresentSelectableBulkItemConfirmDlg_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  System_Action_o *v13; // x20

  if ( (byte_42E87BB & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&Method_PresentSelectableBulkItemConfirmDlg_EndClose__, v10, v11, v12);
    byte_42E87BB = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 4;
  v13 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_PresentSelectableBulkItemConfirmDlg_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v13, 0LL);
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
    sub_B5D69C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.closeCallbackFunc, 0LL, v5, v6, v7, v8, v9, v10);
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
    sub_B5D69C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.state = 0;
  this->fields.itemSelectEntity = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.itemSelectEntity, 0LL, v5, v6, v7, v8, v9, v10);
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
  sub_B5D560(
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_Action_o *v11; // x20
  const MethodInfo *v12; // x2

  if ( (byte_42E87BD & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_PresentSelectableBulkItemConfirmDlg__OnClickCancel_b__39_0__, v5, v6, v7);
    sub_B5D5C4(&SoundManager_TypeInfo, v8, v9, v10);
    byte_42E87BD = 1;
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
    v11 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      v11,
      (Il2CppObject *)this,
      Method_PresentSelectableBulkItemConfirmDlg__OnClickCancel_b__39_0__,
      0LL);
    PresentSelectableBulkItemConfirmDlg__Close_25083496(this, v11, v12);
  }
}


void __fastcall PresentSelectableBulkItemConfirmDlg__OnClickDecide(
        PresentSelectableBulkItemConfirmDlg_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_Action_o *v11; // x20
  const MethodInfo *v12; // x2

  if ( (byte_42E87BC & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_PresentSelectableBulkItemConfirmDlg__OnClickDecide_b__38_0__, v5, v6, v7);
    sub_B5D5C4(&SoundManager_TypeInfo, v8, v9, v10);
    byte_42E87BC = 1;
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
    v11 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      v11,
      (Il2CppObject *)this,
      Method_PresentSelectableBulkItemConfirmDlg__OnClickDecide_b__38_0__,
      0LL);
    PresentSelectableBulkItemConfirmDlg__Close_25083496(this, v11, v12);
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
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v58; // x1
  int v59; // w1
  UILabel_o *TitleLabel; // x25
  UILabel_o *DetailLabel; // x25
  UILabel_o *UnderDetailLabel; // x25
  UILabel_o *exchangeOrigin; // x25
  UILabel_o *exchangeOriginCountKind; // x25
  UILabel_o *exchangeDestination; // x25
  UILabel_o *exchangeDestinationCountKind; // x25
  const MethodInfo *v67; // x5
  UILabel_o *exchangeOriginItemName; // x8
  const MethodInfo *v69; // x2
  BalanceConfig_c *v70; // x0
  int32_t UserItemMax; // w8
  UILabel_o *v72; // x20
  __int64 *v73; // x8
  System_Action_o *v74; // x20

  if ( (byte_42E87BA & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)entity, (_DWORD)itemEnt, *(_QWORD *)&itemHold);
    sub_B5D5C4(&BalanceConfig_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_PresentSelectableBulkItemConfirmDlg_EndOpen__, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_10613/*"PRESENT_BOX_SELECTABLE_BULK_CONFIRM_DLG_TITLE"*/, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_10612/*"PRESENT_BOX_SELECTABLE_BULK_CONFIRM_DLG_DETAIL_UPPER"*/, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_10615/*"PRESENT_BOX_SELECTABLE_BULK_DESTINATION_KIND"*/, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_10617/*"PRESENT_BOX_SELECTABLE_BULK_ORIGIN_KIND"*/, v33, v34, v35);
    sub_B5D5C4(&StringLiteral_10611/*"PRESENT_BOX_SELECTABLE_BULK_CONFIRM_DLG_DETAIL_UNDER"*/, v36, v37, v38);
    sub_B5D5C4(&StringLiteral_10616/*"PRESENT_BOX_SELECTABLE_BULK_ORIGIN"*/, v39, v40, v41);
    sub_B5D5C4(&StringLiteral_10639/*"PRESENT_SELECT_ITEM_OVER_WARNING"*/, v42, v43, v44);
    sub_B5D5C4(&StringLiteral_10614/*"PRESENT_BOX_SELECTABLE_BULK_DESTINATION"*/, v45, v46, v47);
    sub_B5D5C4(&StringLiteral_10638/*"PRESENT_SELECT_ITEM_FULL_WARNING"*/, v48, v49, v50);
    byte_42E87BA = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.callbackFunc = callback;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.callbackFunc,
      (System_Int32_array **)callback,
      (System_String_array **)itemEnt,
      *(System_String_array ***)&itemHold,
      (System_Boolean_array **)ticketEnt,
      *(System_Int32_array ***)&ticketsHave,
      (System_Int32_array *)callback,
      (System_Int32_array *)method);
    this->fields.itemSelectEntity = entity;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.itemSelectEntity,
      (System_Int32_array **)entity,
      v51,
      v52,
      v53,
      v54,
      v55,
      v56);
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
      v59 = 99;
    else
      v59 = ticketsHave / entity->fields.requireNum;
    UISliderWithButton__init((UISliderWithButton_o *)gameObject, v59, 0, 1, 0LL);
    TitleLabel = this->fields.TitleLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10613/*"PRESENT_BOX_SELECTABLE_BULK_CONFIRM_DLG_TITLE"*/, 0LL);
    if ( !TitleLabel )
      goto LABEL_47;
    UILabel__set_text(TitleLabel, (System_String_o *)gameObject, 0LL);
    DetailLabel = this->fields.DetailLabel;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10612/*"PRESENT_BOX_SELECTABLE_BULK_CONFIRM_DLG_DETAIL_UPPER"*/, 0LL);
    if ( !DetailLabel )
      goto LABEL_47;
    UILabel__set_text(DetailLabel, (System_String_o *)gameObject, 0LL);
    UnderDetailLabel = this->fields.UnderDetailLabel;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10611/*"PRESENT_BOX_SELECTABLE_BULK_CONFIRM_DLG_DETAIL_UNDER"*/, 0LL);
    if ( !UnderDetailLabel )
      goto LABEL_47;
    UILabel__set_text(UnderDetailLabel, (System_String_o *)gameObject, 0LL);
    exchangeOrigin = this->fields.exchangeOrigin;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10616/*"PRESENT_BOX_SELECTABLE_BULK_ORIGIN"*/, 0LL);
    if ( !exchangeOrigin )
      goto LABEL_47;
    UILabel__set_text(exchangeOrigin, (System_String_o *)gameObject, 0LL);
    exchangeOriginCountKind = this->fields.exchangeOriginCountKind;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10617/*"PRESENT_BOX_SELECTABLE_BULK_ORIGIN_KIND"*/, 0LL);
    if ( !exchangeOriginCountKind )
      goto LABEL_47;
    UILabel__set_text(exchangeOriginCountKind, (System_String_o *)gameObject, 0LL);
    exchangeDestination = this->fields.exchangeDestination;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10614/*"PRESENT_BOX_SELECTABLE_BULK_DESTINATION"*/, 0LL);
    if ( !exchangeDestination )
      goto LABEL_47;
    UILabel__set_text(exchangeDestination, (System_String_o *)gameObject, 0LL);
    exchangeDestinationCountKind = this->fields.exchangeDestinationCountKind;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10615/*"PRESENT_BOX_SELECTABLE_BULK_DESTINATION_KIND"*/, 0LL);
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
                                               v67);
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
    PresentSelectableBulkItemConfirmDlg__UpdateCountValue(this, this->fields.buyCount, v69);
    gameObject = (UnityEngine_GameObject_o *)this->fields.itemSlider;
    if ( !gameObject )
      goto LABEL_47;
    UISliderWithButton__normalMode((UISliderWithButton_o *)gameObject, 0LL);
    v70 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v70 = BalanceConfig_TypeInfo;
    }
    UserItemMax = v70->static_fields->UserItemMax;
    if ( UserItemMax <= itemHold )
    {
      v72 = this->fields.UnderDetailLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v73 = &StringLiteral_10638/*"PRESENT_SELECT_ITEM_FULL_WARNING"*/;
    }
    else
    {
      if ( (BYTE3(v70->vtable._0_Equals.methodPtr) & 4) != 0 && !v70->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v70);
        UserItemMax = BalanceConfig_TypeInfo->static_fields->UserItemMax;
      }
      if ( itemHold + 1 <= UserItemMax )
      {
        v58 = 0LL;
LABEL_45:
        gameObject = (UnityEngine_GameObject_o *)this->fields.decideButton;
        if ( gameObject )
        {
          ((void (__fastcall *)(UnityEngine_GameObject_o *, __int64, __int64, Il2CppRuntimeInterfaceOffsetPair *))gameObject->klass[1]._1.implementedInterfaces)(
            gameObject,
            v58,
            1LL,
            gameObject->klass[1]._1.interfaceOffsets);
          this->fields.state = 1;
          v74 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
          System_Action___ctor(v74, (Il2CppObject *)this, Method_PresentSelectableBulkItemConfirmDlg_EndOpen__, 0LL);
          BaseDialog__Open((BaseDialog_o *)this, v74, 0, 0LL);
          return;
        }
LABEL_47:
        sub_B5D69C(gameObject, v58);
      }
      v72 = this->fields.UnderDetailLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v73 = &StringLiteral_10639/*"PRESENT_SELECT_ITEM_OVER_WARNING"*/;
    }
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)*v73, 0LL);
    if ( !v72 )
      goto LABEL_47;
    UILabel__set_text(v72, (System_String_o *)gameObject, 0LL);
    v58 = 3LL;
    goto LABEL_45;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PresentSelectableBulkItemConfirmDlg__UpdateCountValue(
        PresentSelectableBulkItemConfirmDlg_o *this,
        int32_t count,
        const MethodInfo *method)
{
  __int64 v3; // x3
  PresentSelectableBulkItemConfirmDlg_o *v5; // x19
  struct ItemSelectEntity_o *itemSelectEntity; // x8
  UILabel_o *exchangeOriginCount; // x21
  __int64 requireNum; // x22
  __int64 itemCountPerExchange; // x8
  UILabel_o *exchangeDestinationCount; // x19

  v5 = this;
  if ( (byte_42E87BE & 1) == 0 )
  {
    this = (PresentSelectableBulkItemConfirmDlg_o *)sub_B5D5C4(&LocalizationManager_TypeInfo, count, (_DWORD)method, v3);
    byte_42E87BE = 1;
  }
  itemSelectEntity = v5->fields.itemSelectEntity;
  if ( !itemSelectEntity )
    goto LABEL_10;
  exchangeOriginCount = v5->fields.exchangeOriginCount;
  requireNum = itemSelectEntity->fields.requireNum;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  this = (PresentSelectableBulkItemConfirmDlg_o *)LocalizationManager__GetNumberFormatLong(requireNum * count, 0LL);
  if ( !exchangeOriginCount
    || (UILabel__set_text(exchangeOriginCount, (System_String_o *)this, 0LL),
        itemCountPerExchange = v5->fields.itemCountPerExchange,
        exchangeDestinationCount = v5->fields.exchangeDestinationCount,
        this = (PresentSelectableBulkItemConfirmDlg_o *)LocalizationManager__GetNumberFormatLong(
                                                          itemCountPerExchange * count,
                                                          0LL),
        !exchangeDestinationCount) )
  {
LABEL_10:
    sub_B5D69C(this, *(_QWORD *)&count);
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
    sub_B5D69C(0LL, method);
  PresentSelectableBulkItemConfirmDlg_CallbackFunc__Invoke(callbackFunc, 0, 0LL);
}


void __fastcall PresentSelectableBulkItemConfirmDlg___OnClickDecide_b__38_0(
        PresentSelectableBulkItemConfirmDlg_o *this,
        const MethodInfo *method)
{
  PresentSelectableBulkItemConfirmDlg_CallbackFunc_o *callbackFunc; // x0

  callbackFunc = this->fields.callbackFunc;
  if ( !callbackFunc )
    sub_B5D69C(0LL, method);
  PresentSelectableBulkItemConfirmDlg_CallbackFunc__Invoke(callbackFunc, this->fields.buyCount, 0LL);
}


void __fastcall PresentSelectableBulkItemConfirmDlg__add_callbackFunc(
        PresentSelectableBulkItemConfirmDlg_o *this,
        PresentSelectableBulkItemConfirmDlg_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct PresentSelectableBulkItemConfirmDlg_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x21
  struct PresentSelectableBulkItemConfirmDlg_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  PresentSelectableBulkItemConfirmDlg_o *v12; // x0
  PresentSelectableBulkItemConfirmDlg_CallbackFunc_o *v13; // x1
  const MethodInfo *v14; // x2

  if ( (byte_42E87B8 & 1) == 0 )
  {
    sub_B5D5C4(&PresentSelectableBulkItemConfirmDlg_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E87B8 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v7 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v9 = System_Delegate__Combine(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (PresentSelectableBulkItemConfirmDlg_CallbackFunc_c *)v9->klass != PresentSelectableBulkItemConfirmDlg_CallbackFunc_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_callbackFunc, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  v12 = (PresentSelectableBulkItemConfirmDlg_o *)sub_B5D990(v9);
  PresentSelectableBulkItemConfirmDlg__remove_callbackFunc(v12, v13, v14);
}


UnityEngine_GameObject_o *__fastcall PresentSelectableBulkItemConfirmDlg__get_closeBtnObject(
        PresentSelectableBulkItemConfirmDlg_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *cancelButton; // x20
  __int64 v6; // x1
  UnityEngine_Component_o *v8; // x0

  if ( (byte_42E87BF & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E87BF = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(cancelButton, 0LL, 0LL) )
    return 0LL;
  v8 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v8 )
    sub_B5D69C(0LL, v6);
  return UnityEngine_Component__get_gameObject(v8, 0LL);
}


void __fastcall PresentSelectableBulkItemConfirmDlg__remove_callbackFunc(
        PresentSelectableBulkItemConfirmDlg_o *this,
        PresentSelectableBulkItemConfirmDlg_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct PresentSelectableBulkItemConfirmDlg_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x21
  struct PresentSelectableBulkItemConfirmDlg_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  PresentSelectableBulkItemConfirmDlg_o *v12; // x0
  const MethodInfo *v13; // x1

  if ( (byte_42E87B9 & 1) == 0 )
  {
    sub_B5D5C4(&PresentSelectableBulkItemConfirmDlg_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E87B9 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v7 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v9 = System_Delegate__Remove(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (PresentSelectableBulkItemConfirmDlg_CallbackFunc_c *)v9->klass != PresentSelectableBulkItemConfirmDlg_CallbackFunc_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_callbackFunc, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  v12 = (PresentSelectableBulkItemConfirmDlg_o *)sub_B5D990(v9);
  PresentSelectableBulkItemConfirmDlg__Init(v12, v13);
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
    sub_B5D69C(0LL, method);
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
  sub_B5D560(p_method);
}


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
  if ( (byte_42E5AB6 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, result, (_DWORD)callback, object);
    byte_42E5AB6 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_B5D568(this, v9, callback, object);
}


void __fastcall PresentSelectableBulkItemConfirmDlg_CallbackFunc__EndInvoke(
        PresentSelectableBulkItemConfirmDlg_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
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
  __int64 v11; // x3
  __int64 v12; // x8
  unsigned __int64 v13; // x10
  _DWORD *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x0
  void (__fastcall **v18)(__int64 *, _QWORD, _QWORD); // x0
  PresentSelectableBulkItemConfirmDlg_CallbackFunc_o *v19; // x8
  __int64 *v20; // x21
  __int64 v21; // x22
  void (__fastcall *v22)(_QWORD, __int64); // x23
  char v23; // w23
  char v24; // w0
  __int64 v25; // x3
  __int64 v26; // x8
  __int64 v27; // x1
  __int64 v28; // x2
  unsigned __int64 v29; // x10
  _DWORD *v30; // x11
  PresentSelectableBulkItemConfirmDlg_CallbackFunc_o *v31; // [xsp+8h] [xbp-48h] BYREF

  v31 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v31;
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
      v19 = v7[v8];
      v20 = *(__int64 **)&v19->fields.method;
      v21 = *(_QWORD *)&v19->fields.extra_arg;
      v22 = *(void (__fastcall **)(_QWORD, __int64))&v19->fields.method_ptr;
      if ( *(__int16 *)(v21 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v19->fields.extra_arg, *(_QWORD *)&result, method);
      if ( (sub_B5D5F4(v21) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v21 + 74) != 1 )
        goto LABEL_36;
      v22((unsigned int)result, v21);
LABEL_37:
      if ( ++v8 == v6 )
        return;
    }
    if ( v20 && *(__int16 *)(v21 + 72) != -1 && (*(_BYTE *)(*v20 + 277) & 1) == 0 && this->fields.m_target )
    {
      v23 = sub_B5D5EC(v21);
      v24 = sub_B5D9F0(v21);
      if ( (v23 & 1) != 0 )
      {
        if ( (v24 & 1) != 0 )
        {
          v26 = *v20;
          v27 = *(_QWORD *)(v21 + 24);
          v28 = *(unsigned __int16 *)(v21 + 72);
          if ( *(_WORD *)(*v20 + 298) )
          {
            v29 = 0LL;
            v30 = (_DWORD *)(*(_QWORD *)(v26 + 176) + 8LL);
            while ( *((_QWORD *)v30 - 1) != v27 )
            {
              ++v29;
              v30 += 4;
              if ( v29 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_35;
            }
            v17 = v26 + 16LL * (*v30 + (int)v28) + 312;
          }
          else
          {
LABEL_35:
            v17 = sub_AF54C0(v20, v27, v28, v25);
          }
          v16 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          v16 = *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320);
        }
        v18 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD))sub_B5D674(v16, v21);
        (*v18)(v20, (unsigned int)result, v18);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v21 + 72);
        if ( (v24 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v21);
          v12 = *v20;
          if ( *(_WORD *)(*v20 + 298) )
          {
            v13 = 0LL;
            v14 = (_DWORD *)(*(_QWORD *)(v12 + 176) + 8LL);
            while ( *((_QWORD *)v14 - 1) != class_0 )
            {
              ++v13;
              v14 += 4;
              if ( v13 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_11;
            }
            v15 = v12 + 16LL * (int)(*v14 + v9) + 312;
          }
          else
          {
LABEL_11:
            v15 = sub_AF54C0(v20, class_0, v9, v11);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))v15)(v20, (unsigned int)result, *(_QWORD *)(v15 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 312))(
            v20,
            (unsigned int)result,
            *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, __int64))v22)(v20, (unsigned int)result, v21);
    goto LABEL_37;
  }
}